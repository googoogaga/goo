/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: compiler/syntax */

EXT(Ylst,"runtime/boot","lst");
EXT(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
DEF(YcompilerSsyntaxYsexpr_let_values,"compiler/syntax","sexpr-let-values");
EXT(YruntimeSruntimeYinvoke_handler_interactively,"runtime/runtime","invoke-handler-interactively");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
DEF(YcompilerSsyntaxYsexpr_operands,"compiler/syntax","sexpr-operands");
EXT(YruntimeSruntimeYidentity,"runtime/runtime","identity");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YPisa,"runtime/boot","%isa");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
DEF(YcompilerSsyntaxYTbq_listTT,"compiler/syntax","*bq-list**");
DEF(YcompilerSsyntaxYTbq_clobberableT,"compiler/syntax","*bq-clobberable*");
EXT(YgooSmathYatan,"goo/math","atan");
DEF(YcompilerSsyntaxYsexpr_atomQ,"compiler/syntax","sexpr-atom?");
DEF(YcompilerSsyntaxYsexpr_let_namesAvalues,"compiler/syntax","sexpr-let-names+values");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScollectionsSsequenceYrange_check,"goo/collections/sequence","range-check");
DEF(YcompilerSsyntaxYDsexpr_unwind_protect_tag,"compiler/syntax","$sexpr-unwind-protect-tag");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
DEF(YcompilerSsyntaxYsexpr_new_unique_name_counterX,"compiler/syntax","sexpr-new-unique-name-counter!");
DEF(YcompilerSsyntaxYsexpr_function_body,"compiler/syntax","sexpr-function-body");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
DEF(YcompilerSsyntaxYsexpr_generic_definitionQ,"compiler/syntax","sexpr-generic-definition?");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
DEF(YcompilerSsyntaxYsexpr_assignmentQ,"compiler/syntax","sexpr-assignment?");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScollectionsSstringYascii_limit,"goo/collections/string","ascii-limit");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooScollectionsSzipYunzip,"goo/collections/zip","unzip");
EXT(YruntimeSruntimeYLhandlerG,"runtime/runtime","<handler>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScollectionsStableYtab_hash,"goo/collections/table","tab-hash");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YcompilerSsyntaxYDsexpr_let_tag,"compiler/syntax","$sexpr-let-tag");
DEF(YcompilerSsyntaxYsexpr_expand_backquote,"compiler/syntax","sexpr-expand-backquote");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
DEF(YcompilerSsyntaxYsexpr_prop_name,"compiler/syntax","sexpr-prop-name");
DEF(YcompilerSsyntaxYsexpr_iterate_name,"compiler/syntax","sexpr-iterate-name");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(YcompilerSsyntaxYsexpr_quotedQ,"compiler/syntax","sexpr-quoted?");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YcompilerSsyntaxYsexpr_let_body,"compiler/syntax","sexpr-let-body");
EXT(Yhead,"runtime/boot","head");
DEF(YcompilerSsyntaxYTbq_nconcT,"compiler/syntax","*bq-nconc*");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(YgooScollectionsScycleYLcycleG,"goo/collections/cycle","<cycle>");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
DEF(YcompilerSsyntaxYsexpr_propQ,"compiler/syntax","sexpr-prop?");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YcompilerSsyntaxYsexpr_make_quote,"compiler/syntax","sexpr-make-quote");
DEF(YcompilerSsyntaxYsexpr_applicationQ,"compiler/syntax","sexpr-application?");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YgooScollectionsSrangeYrange_by,"goo/collections/range","range-by");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
DEF(YcompilerSsyntaxYsexpr_make_if,"compiler/syntax","sexpr-make-if");
EXT(YruntimeSruntimeYsig,"runtime/runtime","sig");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooScollectionsStableYtab_growth_factor,"goo/collections/table","tab-growth-factor");
EXT(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(YgooScollectionsStableYLsetG,"goo/collections/table","<set>");
DEF(YcompilerSsyntaxYsexpr_make_anonymous_method,"compiler/syntax","sexpr-make-anonymous-method");
DEF(YcompilerSsyntaxYsexpr_let_Gcombination,"compiler/syntax","sexpr-let->combination");
DEF(YcompilerSsyntaxYDsexpr_define_class_tag,"compiler/syntax","$sexpr-define-class-tag");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YruntimeSruntimeYLsimple_errorG,"runtime/runtime","<simple-error>");
EXT(Yprop_init,"runtime/boot","prop-init");
DEF(YcompilerSsyntaxYDsexpr_bind_exit_tag,"compiler/syntax","$sexpr-bind-exit-tag");
EXT(YgooScollectionsStableYtab_test,"goo/collections/table","tab-test");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
DEF(YcompilerSsyntaxYsexpr_sequence_Gbegin,"compiler/syntax","sexpr-sequence->begin");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YcompilerSsyntaxYDsexpr_prop_tag,"compiler/syntax","$sexpr-prop-tag");
EXT(YgooScollectionsStableYid_hash,"goo/collections/table","id-hash");
DEF(YcompilerSsyntaxYDsexpr_quasiquote_tag,"compiler/syntax","$sexpr-quasiquote-tag");
EXT(YgooScollectionsSrangeYfrom,"goo/collections/range","from");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooScollectionsSrangeYrange,"goo/collections/range","range");
EXT(YgooScollectionsSsequenceYfinds,"goo/collections/sequence","finds");
DEF(YcompilerSsyntaxYsexpr_iterate_Gloc,"compiler/syntax","sexpr-iterate->loc");
DEF(YcompilerSsyntaxYsexpr_unwind_protect_cleanup_forms,"compiler/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
DEF(YcompilerSsyntaxYsexpr_isaQ,"compiler/syntax","sexpr-isa?");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YruntimeSruntimeYLrestartG,"runtime/runtime","<restart>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooStypeY2nd,"goo/type","2nd");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YPsymbols,"runtime/boot","%symbols");
DEF(YcompilerSsyntaxYsexpr_prop_type,"compiler/syntax","sexpr-prop-type");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
DEF(YcompilerSsyntaxYsexpr_forward_primitiveQ,"compiler/syntax","sexpr-forward-primitive?");
EXT(YgooScollectionsStableYtab_growth_factor_setter,"goo/collections/table","tab-growth-factor-setter");
DEF(YcompilerSsyntaxYsexpr_method_body,"compiler/syntax","sexpr-method-body");
EXT(YLchrG,"runtime/boot","<chr>");
DEF(YcompilerSsyntaxYsexpr_define_class_parents,"compiler/syntax","sexpr-define-class-parents");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YcompilerSsyntaxYsexpr_iterate_inits,"compiler/syntax","sexpr-iterate-inits");
EXT(YruntimeSruntimeYapp_args,"runtime/runtime","app-args");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
DEF(YcompilerSsyntaxYsexpr_fab_setter,"compiler/syntax","sexpr-fab-setter");
DEF(YcompilerSsyntaxYsexpr_rest_operands,"compiler/syntax","sexpr-rest-operands");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YcompilerSsyntaxYsexpr_loc_raw_body,"compiler/syntax","sexpr-loc-raw-body");
EXT(YgooSmathYS,"goo/math","/");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(Ynot,"runtime/boot","not");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
DEF(YcompilerSsyntaxYas_signature,"compiler/syntax","as-signature");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
DEF(YcompilerSsyntaxYsexpr_unwind_protectQ,"compiler/syntax","sexpr-unwind-protect?");
DEF(YcompilerSsyntaxYsexpr_function_definition_variable,"compiler/syntax","sexpr-function-definition-variable");
DEF(YcompilerSsyntaxYsexpr_loc_bound_bodies,"compiler/syntax","sexpr-loc-bound-bodies");
EXT(YruntimeSruntimeYlist_handlers,"runtime/runtime","list-handlers");
DEF(YcompilerSsyntaxYDsexpr_define_function_tag,"compiler/syntax","$sexpr-define-function-tag");
DEF(YcompilerSsyntaxYsexpr_monitor_type,"compiler/syntax","sexpr-monitor-type");
EXT(YgooStypeYtQ,"goo/type","t?");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YgooScollectionsSstringYstr,"goo/collections/string","str");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
DEF(YcompilerSsyntaxYsexpr_macro_expandQ,"compiler/syntax","sexpr-macro-expand?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YcompilerSsyntaxYsexpr_isa_prop_inits,"compiler/syntax","sexpr-isa-prop-inits");
DEF(YcompilerSsyntaxYsexpr_prop_initQ,"compiler/syntax","sexpr-prop-init?");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YOlst,"runtime/boot","@lst");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YruntimeSruntimeYdescribe_condition,"runtime/runtime","describe-condition");
EXT(YruntimeSruntimeYapp_filename,"runtime/runtime","app-filename");
EXT(YruntimeSruntimeYbuild_condition_interactively,"runtime/runtime","build-condition-interactively");
EXT(YruntimeSruntimeYdefault_handler,"runtime/runtime","default-handler");
EXT(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
DEF(YcompilerSsyntaxYDsexpr_locals_tag,"compiler/syntax","$sexpr-locals-tag");
EXT(Yerror,"runtime/boot","error");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(YgooScollectionsSassocYassocs_test,"goo/collections/assoc","assocs-test");
EXT(YgooStypeYlen,"goo/type","len");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
DEF(YcompilerSsyntaxYsexpr_defQ,"compiler/syntax","sexpr-def?");
EXT(Ynil,"runtime/boot","nil");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(YLfunG,"runtime/boot","<fun>");
DEF(YcompilerSsyntaxYsexpr_ifQ,"compiler/syntax","sexpr-if?");
DEF(YcompilerSsyntaxYfind_option,"compiler/syntax","find-option");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YcompilerSsyntaxYsexpr_variable_name,"compiler/syntax","sexpr-variable-name");
EXT(YgooStypeYtL,"goo/type","t<");
DEF(YcompilerSsyntaxYsexpr_method_parameters,"compiler/syntax","sexpr-method-parameters");
EXT(YruntimeSruntimeYLerrorG,"runtime/runtime","<error>");
DEF(YcompilerSsyntaxYsexpr_make_begin,"compiler/syntax","sexpr-make-begin");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
DEF(YcompilerSsyntaxYsexpr_definitionQ,"compiler/syntax","sexpr-definition?");
DEF(YcompilerSsyntaxYsexpr_unwind_protect_protected_form,"compiler/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YruntimeSruntimeYcompose,"runtime/runtime","compose");
DEF(YcompilerSsyntaxYsexpr_unquoteQ,"compiler/syntax","sexpr-unquote?");
DEF(YcompilerSsyntaxYsexpr_rest_exps,"compiler/syntax","sexpr-rest-exps");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
DEF(YcompilerSsyntaxYsexpr_loc_bound_names,"compiler/syntax","sexpr-loc-bound-names");
DEF(YcompilerSsyntaxYsexpr_first_exp,"compiler/syntax","sexpr-first-exp");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yfun_specs,"runtime/boot","fun-specs");
DEF(YcompilerSsyntaxYsexpr_if_then,"compiler/syntax","sexpr-if-then");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
DEF(YcompilerSsyntaxYsexpr_iterateQ,"compiler/syntax","sexpr-iterate?");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YruntimeSruntimeYread,"runtime/runtime","read");
EXT(YruntimeSruntimeYdefault_handler_description,"runtime/runtime","default-handler-description");
DEF(YcompilerSsyntaxYsexpr_method_value,"compiler/syntax","sexpr-method-value");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
DEF(YcompilerSsyntaxYsexpr_let_bound_variables,"compiler/syntax","sexpr-let-bound-variables");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
DEF(YcompilerSsyntaxYsexpr_isa_parent,"compiler/syntax","sexpr-isa-parent");
DEF(YcompilerSsyntaxYbq_process,"compiler/syntax","bq-process");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YruntimeSruntimeYformat_to_string,"runtime/runtime","format-to-string");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YruntimeSruntimeYDdefault_handler_info,"runtime/runtime","$default-handler-info");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
DEF(YcompilerSsyntaxYsexpr_if_test,"compiler/syntax","sexpr-if-test");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YcompilerSsyntaxYDsexpr_syntax_if_tag,"compiler/syntax","$sexpr-syntax-if-tag");
DEF(YcompilerSsyntaxYmap_tree,"compiler/syntax","map-tree");
EXT(Yfun_name,"runtime/boot","fun-name");
DEF(YcompilerSsyntaxYsexpr_backquoteQ,"compiler/syntax","sexpr-backquote?");
DEF(YcompilerSsyntaxYsexpr_if_else,"compiler/syntax","sexpr-if-else");
EXT(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YgooScollectionsSzipYzip,"goo/collections/zip","zip");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooStypeYtE,"goo/type","t=");
DEF(YcompilerSsyntaxYsexpr_function_definition_value,"compiler/syntax","sexpr-function-definition-value");
EXT(YgooScollectionsScycleYcycle,"goo/collections/cycle","cycle");
DEF(YcompilerSsyntaxYsexpr_make_method,"compiler/syntax","sexpr-make-method");
DEF(YcompilerSsyntaxYsexpr_build_backquote_expander,"compiler/syntax","sexpr-build-backquote-expander");
DEF(YcompilerSsyntaxYsexpr_prop_init_var,"compiler/syntax","sexpr-prop-init-var");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScollectionsSrangeYLrangeG,"goo/collections/range","<range>");
DEF(YcompilerSsyntaxYTbq_appendT,"compiler/syntax","*bq-append*");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(Yclass_parents,"runtime/boot","class-parents");
DEF(YcompilerSsyntaxYsexpr_blockQ,"compiler/syntax","sexpr-block?");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YruntimeSruntimeYhandler_function,"runtime/runtime","handler-function");
DEF(YcompilerSsyntaxYsexpr_make_macro_function,"compiler/syntax","sexpr-make-macro-function");
EXT(YruntimeSruntimeYloc_val_setter,"runtime/runtime","loc-val-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
DEF(YcompilerSsyntaxYDsexpr_quote_tag,"compiler/syntax","$sexpr-quote-tag");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YcompilerSsyntaxYsexpr_unique_name,"compiler/syntax","sexpr-unique-name");
EXT(Yvec,"runtime/boot","vec");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScollectionsSstepYfirst_then,"goo/collections/step","first-then");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(YruntimeSruntimeYcurry,"runtime/runtime","curry");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YcompilerSsyntaxYDsexpr_iterate_tag,"compiler/syntax","$sexpr-iterate-tag");
EXT(YgooStypeYas,"goo/type","as");
EXT(YgooScollectionsSstringYnum_to_str_base,"goo/collections/string","num-to-str-base");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(YgooScollectionsSstringYascii_whitespaces,"goo/collections/string","ascii-whitespaces");
EXT(YgooScollectionsSmapYLmapG,"goo/collections/map","<map>");
DEF(YcompilerSsyntaxYsexpr_signature_value,"compiler/syntax","sexpr-signature-value");
DEF(YcompilerSsyntaxYsexpr_monitor_body,"compiler/syntax","sexpr-monitor-body");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YcompilerSsyntaxYTbq_quoteT,"compiler/syntax","*bq-quote*");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
DEF(YcompilerSsyntaxYLnameG,"compiler/syntax","<name>");
DEF(YcompilerSsyntaxYsexpr_define_classQ,"compiler/syntax","sexpr-define-class?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YcompilerSsyntaxYDsexpr_set_tag,"compiler/syntax","$sexpr-set-tag");
EXT(YgooScollectionsSsequenceYinsX,"goo/collections/sequence","ins!");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
DEF(YcompilerSsyntaxYsexpr_definition_value,"compiler/syntax","sexpr-definition-value");
DEF(YcompilerSsyntaxYsexpr_def_variable,"compiler/syntax","sexpr-def-variable");
DEF(YcompilerSsyntaxYsexpr_block_body,"compiler/syntax","sexpr-block-body");
DEF(YcompilerSsyntaxYsexpr_locQ,"compiler/syntax","sexpr-loc?");
DEF(YcompilerSsyntaxYsexpr_definition_variable,"compiler/syntax","sexpr-definition-variable");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YcompilerSsyntaxYsexpr_syntax_definition_value,"compiler/syntax","sexpr-syntax-definition-value");
DEF(YcompilerSsyntaxYsexpr_loc_bound_signatures,"compiler/syntax","sexpr-loc-bound-signatures");
EXT(YgooSmathYA,"goo/math","+");
DEF(YcompilerSsyntaxYsexpr_methodQ,"compiler/syntax","sexpr-method?");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(Yfind_setter,"runtime/boot","find-setter");
DEF(YcompilerSsyntaxYsexpr_syntax_if_else,"compiler/syntax","sexpr-syntax-if-else");
DEF(YcompilerSsyntaxYsexpr_make_application,"compiler/syntax","sexpr-make-application");
EXT(YgooStypeYanyQ,"goo/type","any?");
EXT(YgooSmathYB,"goo/math","&");
DEF(YcompilerSsyntaxYsexpr_syntax_if_pattern,"compiler/syntax","sexpr-syntax-if-pattern");
EXT(YgooScollectionsStableYtab_gc_state,"goo/collections/table","tab-gc-state");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScollectionsStableYcase_insensitive_string_equal,"goo/collections/table","case-insensitive-string-equal");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(YOall2Q,"runtime/boot","@all2?");
DEF(YcompilerSsyntaxYDsexpr_macro_expand_tag,"compiler/syntax","$sexpr-macro-expand-tag");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYN,"goo/math","~");
EXT(YLcolG,"runtime/boot","<col>");
DEF(YcompilerSsyntaxYTunique_name_counterT,"compiler/syntax","*unique-name-counter*");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(YgooScollectionsSassocYLassocsG,"goo/collections/assoc","<assocs>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YcompilerSsyntaxYsexpr_monitorQ,"compiler/syntax","sexpr-monitor?");
DEF(YcompilerSsyntaxYDsexpr_def_tag,"compiler/syntax","$sexpr-def-tag");
DEF(YcompilerSsyntaxYeval,"compiler/syntax","eval");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(YruntimeSruntimeYloc_val,"runtime/runtime","loc-val");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
DEF(YcompilerSsyntaxYsexpr_begin_actions,"compiler/syntax","sexpr-begin-actions");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YruntimeSruntimeYLhandler_infoG,"runtime/runtime","<handler-info>");
DEF(YcompilerSsyntaxYDsexpr_monitor_tag,"compiler/syntax","$sexpr-monitor-tag");
EXT(YgooStypeYLproductG,"goo/type","<product>");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(YgooScollectionsSzipYLzipG,"goo/collections/zip","<zip>");
EXT(YgooScollectionsStableYLstr_tabG,"goo/collections/table","<str-tab>");
DEF(YcompilerSsyntaxYsexpr_iterate_signature,"compiler/syntax","sexpr-iterate-signature");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YcompilerSsyntaxYDsexpr_macro_tag,"compiler/syntax","$sexpr-macro-tag");
EXT(YruntimeSruntimeYspread,"runtime/runtime","spread");
DEF(YcompilerSsyntaxYsexpr_block_name,"compiler/syntax","sexpr-block-name");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(YgooScollectionsSassocYassocs_test_setter,"goo/collections/assoc","assocs-test-setter");
DEF(YcompilerSsyntaxYsexpr_syntax_ifQ,"compiler/syntax","sexpr-syntax-if?");
EXT(YgooScollectionsStableYtab_growth_threshold_setter,"goo/collections/table","tab-growth-threshold-setter");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
DEF(YcompilerSsyntaxYsexpr_isa_init_values,"compiler/syntax","sexpr-isa-init-values");
DEF(YcompilerSsyntaxYsexpr_prop_owner,"compiler/syntax","sexpr-prop-owner");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooStypeYtype_elts_setter,"goo/type","type-elts-setter");
DEF(YcompilerSsyntaxYDsexpr_define_syntax_tag,"compiler/syntax","$sexpr-define-syntax-tag");
EXT(YruntimeSruntimeYformat,"runtime/runtime","format");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Yfind_getter,"runtime/boot","find-getter");
DEF(YcompilerSsyntaxYsexpr_syntax_definition_variable,"compiler/syntax","sexpr-syntax-definition-variable");
DEF(YcompilerSsyntaxYsexpr_def_value,"compiler/syntax","sexpr-def-value");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YcompilerSsyntaxYsexpr_syntax_definitionQ,"compiler/syntax","sexpr-syntax-definition?");
EXT(YgooStypeYtT,"goo/type","t*");
EXT(Ytail,"runtime/boot","tail");
EXT(YgooSmathYC,"goo/math","^");
DEF(YcompilerSsyntaxYsexpr_prop_init,"compiler/syntax","sexpr-prop-init");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
DEF(YcompilerSsyntaxYsexpr_bind_pattern_variables,"compiler/syntax","sexpr-bind-pattern-variables");
EXT(YruntimeSruntimeYdescribe_handler,"runtime/runtime","describe-handler");
DEF(YcompilerSsyntaxYsexpr_syntax_if_then,"compiler/syntax","sexpr-syntax-if-then");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooScollectionsSstringYTprint_baseT,"goo/collections/string","*print-base*");
EXT(YruntimeSruntimeYfab_handler,"runtime/runtime","fab-handler");
DEF(YcompilerSsyntaxYsexpr_last_expQ,"compiler/syntax","sexpr-last-exp?");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
DEF(YcompilerSsyntaxYDsexpr_if_tag,"compiler/syntax","$sexpr-if-tag");
EXT(YgooScollectionsSsequenceYins,"goo/collections/sequence","ins");
DEF(YcompilerSsyntaxYsexpr_monitor_expand,"compiler/syntax","sexpr-monitor-expand");
DEF(YcompilerSsyntaxYsexpr_first_operand,"compiler/syntax","sexpr-first-operand");
EXT(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
EXT(YgooScollectionsStableYDpermanent_hash_state,"goo/collections/table","$permanent-hash-state");
DEF(YcompilerSsyntaxYsexpr_loc_body,"compiler/syntax","sexpr-loc-body");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
EXT(YgooScollectionsStableYcase_insensitive_string_hash,"goo/collections/table","case-insensitive-string-hash");
DEF(YcompilerSsyntaxYsexpr_method_signature,"compiler/syntax","sexpr-method-signature");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScollectionsSlistYassq,"goo/collections/list","assq");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(Yclass_name,"runtime/boot","class-name");
DEF(YcompilerSsyntaxYsexpr_tagged_listQ,"compiler/syntax","sexpr-tagged-list?");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YgooSmathYupperQ,"goo/math","upper?");
DEF(YcompilerSsyntaxYTbq_listT,"compiler/syntax","*bq-list*");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YPsnul,"runtime/boot","%snul");
DEF(YcompilerSsyntaxYsexpr_syntax_if_value,"compiler/syntax","sexpr-syntax-if-value");
DEF(YcompilerSsyntaxYsexpr_function_definitionQ,"compiler/syntax","sexpr-function-definition?");
EXT(YgooSmathY_,"goo/math","-");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YruntimeSruntimeYcondition_arguments,"runtime/runtime","condition-arguments");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
DEF(YcompilerSsyntaxYDsexpr_define_generic_tag,"compiler/syntax","$sexpr-define-generic-tag");
EXT(Yprop_setter,"runtime/boot","prop-setter");
DEF(YcompilerSsyntaxYsexpr_isa_init_props,"compiler/syntax","sexpr-isa-init-props");
DEF(YcompilerSsyntaxYsexpr_make_syntax_if,"compiler/syntax","sexpr-make-syntax-if");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YruntimeSruntimeYchoose_handler,"runtime/runtime","choose-handler");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YgooScollectionsStableYtab_growth_threshold,"goo/collections/table","tab-growth-threshold");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(YgooScollectionsSsequenceYdo_key_vals,"goo/collections/sequence","do-key-vals");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooStypeYtA,"goo/type","t+");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScollectionsStableYtab_shrink_threshold,"goo/collections/table","tab-shrink-threshold");
DEF(YcompilerSsyntaxYDsexpr_begin_tag,"compiler/syntax","$sexpr-begin-tag");
DEF(YcompilerSsyntaxYnreconc,"compiler/syntax","nreconc");
EXT(Yfun_names,"runtime/boot","fun-names");
DEF(YcompilerSsyntaxYsexpr_function_signature,"compiler/syntax","sexpr-function-signature");
DEF(YcompilerSsyntaxYsexpr_fab_getter,"compiler/syntax","sexpr-fab-getter");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YcompilerSsyntaxYsexpr_letQ,"compiler/syntax","sexpr-let?");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
DEF(YcompilerSsyntaxYsexpr_operator,"compiler/syntax","sexpr-operator");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(Ynew,"runtime/boot","new");
DEF(YcompilerSsyntaxYsexpr_assignment_value,"compiler/syntax","sexpr-assignment-value");
EXT(Yprop_getter,"runtime/boot","prop-getter");
DEF(YcompilerSsyntaxYsexpr_self_evaluatingQ,"compiler/syntax","sexpr-self-evaluating?");
DEF(YcompilerSsyntaxYsexpr_assignment_variable,"compiler/syntax","sexpr-assignment-variable");
EXT(Yobject_parents,"runtime/boot","object-parents");
DEF(YcompilerSsyntaxYsexpr_text_of_quotation,"compiler/syntax","sexpr-text-of-quotation");
EXT(YruntimeSruntimeYLserious_conditionG,"runtime/runtime","<serious-condition>");
DEF(YcompilerSsyntaxYsexpr_beginQ,"compiler/syntax","sexpr-begin?");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
DEF(YcompilerSsyntaxYsexpr_fab_setter_name,"compiler/syntax","sexpr-fab-setter-name");
EXT(YruntimeSruntimeYalways,"runtime/runtime","always");
DEF(YcompilerSsyntaxYDsexpr_define_method_tag,"compiler/syntax","$sexpr-define-method-tag");
DEF(YcompilerSsyntaxYsexpr_no_operandsQ,"compiler/syntax","sexpr-no-operands?");
EXT(YruntimeSruntimeYhandler_matchesQ,"runtime/runtime","handler-matches?");
DEF(YcompilerSsyntaxYTcomma_atsignT,"compiler/syntax","*comma-atsign*");
DEF(YcompilerSsyntaxYsexpr_monitor_info,"compiler/syntax","sexpr-monitor-info");
EXT(YgooScollectionsStableYtab_shrink_threshold_setter,"goo/collections/table","tab-shrink-threshold-setter");
DEF(YcompilerSsyntaxYsexpr_variable_type,"compiler/syntax","sexpr-variable-type");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YruntimeSruntimeYTgensym_counterT,"runtime/runtime","*gensym-counter*");
DEF(YcompilerSsyntaxYsexpr_method_definitionQ,"compiler/syntax","sexpr-method-definition?");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YcompilerSsyntaxYsexpr_iterate_body,"compiler/syntax","sexpr-iterate-body");
EXT(YruntimeSruntimeYrcurry,"runtime/runtime","rcurry");
EXT(YruntimeSruntimeYcondition_message,"runtime/runtime","condition-message");
DEF(YcompilerSsyntaxYDsexpr_isa_tag,"compiler/syntax","$sexpr-isa-tag");
EXT(YruntimeSruntimeYLconditionG,"runtime/runtime","<condition>");
EXT(YgooScollectionsSsequenceYvals_to_str,"goo/collections/sequence","vals-to-str");
DEF(YcompilerSsyntaxYsexpr_function_value,"compiler/syntax","sexpr-function-value");
EXT(YLpropG,"runtime/boot","<prop>");
DEF(YcompilerSsyntaxYsexpr_monitor_test,"compiler/syntax","sexpr-monitor-test");
DEF(YcompilerSsyntaxYDsexpr_define_tag,"compiler/syntax","$sexpr-define-tag");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
DEF(YcompilerSsyntaxYsexpr_variableQ,"compiler/syntax","sexpr-variable?");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YgooScollectionsSsequenceYrange_checkQ,"goo/collections/sequence","range-check?");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YruntimeSruntimeYbuild_condition_for_handler_interactively,"runtime/runtime","build-condition-for-handler-interactively");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooScollectionsSlistYlist,"goo/collections/list","list");
DEF(YcompilerSsyntaxYsexpr_signature_parameters,"compiler/syntax","sexpr-signature-parameters");
DEF(YcompilerSsyntaxYDsexpr_values_tag,"compiler/syntax","$sexpr-values-tag");
EXT(YisaQ,"runtime/boot","isa?");
EXT(Yobject_props,"runtime/boot","object-props");
DEF(YcompilerSsyntaxYsexpr_function_parameters,"compiler/syntax","sexpr-function-parameters");
DEF(YcompilerSsyntaxYsexpr_macroQ,"compiler/syntax","sexpr-macro?");
DEF(YcompilerSsyntaxYsexpr_pattern_variable_name,"compiler/syntax","sexpr-pattern-variable-name");
DEF(YcompilerSsyntaxYbracket,"compiler/syntax","bracket");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
DEF(YcompilerSsyntaxYsexpr_unquote_splicingQ,"compiler/syntax","sexpr-unquote-splicing?");
EXT(YgooScollectionsSstringYstr_to_num,"goo/collections/string","str-to-num");
DEF(YcompilerSsyntaxYbq_remove_tokens,"compiler/syntax","bq-remove-tokens");
EXT(YgooStypeYall2Q,"goo/type","all2?");
EXT(YgooScollectionsSstepYLstepG,"goo/collections/step","<step>");
DEF(YcompilerSsyntaxYDsexpr_method_tag,"compiler/syntax","$sexpr-method-tag");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
DEF(YcompilerSsyntaxYsexpr_pattern_variableQ,"compiler/syntax","sexpr-pattern-variable?");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YgooScollectionsSlistYassqn,"goo/collections/list","assqn");
EXT(YPprop,"runtime/boot","%prop");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YgooScollectionsSmapYfab_map,"goo/collections/map","fab-map");
EXT(YruntimeSruntimeYLsimple_conditionG,"runtime/runtime","<simple-condition>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_175);
DEFLIT(lit_94);
DEFLIT(lit_202);
DEFLIT(lit_74);
DEFLIT(lit_64);
DEFLIT(lit_25);
DEFLIT(lit_138);
DEFLIT(lit_205);
DEFLIT(lit_100);
DEFLIT(lit_14);
DEFLIT(lit_21);
DEFLIT(lit_50);
DEFLIT(lit_70);
DEFLIT(lit_177);
DEFLIT(lit_156);
DEFLIT(lit_67);
DEFLIT(lit_63);
DEFLIT(lit_133);
DEFLIT(lit_130);
DEFLIT(lit_19);
DEFLIT(lit_35);
DEFLIT(lit_225);
DEFLIT(lit_56);
DEFLIT(lit_203);
DEFLIT(lit_190);
DEFLIT(lit_173);
DEFLIT(lit_58);
DEFLIT(lit_219);
DEFLIT(lit_59);
DEFLIT(lit_200);
DEFLIT(lit_86);
DEFLIT(lit_51);
DEFLIT(lit_93);
DEFLIT(lit_186);
DEFLIT(lit_233);
DEFLIT(lit_129);
DEFLIT(lit_159);
DEFLIT(lit_221);
DEFLIT(lit_162);
DEFLIT(lit_20);
DEFLIT(lit_136);
DEFLIT(lit_117);
DEFLIT(lit_132);
DEFLIT(lit_38);
DEFLIT(lit_187);
DEFLIT(lit_144);
DEFLIT(lit_249);
DEFLIT(lit_48);
DEFLIT(lit_230);
DEFLIT(lit_131);
DEFLIT(lit_182);
DEFLIT(lit_81);
DEFLIT(lit_54);
DEFLIT(lit_77);
DEFLIT(lit_69);
DEFLIT(lit_91);
DEFLIT(lit_242);
DEFLIT(lit_135);
DEFLIT(lit_7);
DEFLIT(lit_217);
DEFLIT(lit_197);
DEFLIT(lit_76);
DEFLIT(lit_210);
DEFLIT(lit_16);
DEFLIT(lit_125);
DEFLIT(lit_147);
DEFLIT(lit_101);
DEFLIT(lit_99);
DEFLIT(lit_43);
DEFLIT(lit_251);
DEFLIT(lit_124);
DEFLIT(lit_87);
DEFLIT(lit_231);
DEFLIT(lit_104);
DEFLIT(lit_11);
DEFLIT(lit_75);
DEFLIT(lit_169);
DEFLIT(lit_45);
DEFLIT(lit_247);
DEFLIT(lit_85);
DEFLIT(lit_240);
DEFLIT(lit_33);
DEFLIT(lit_110);
DEFLIT(lit_61);
DEFLIT(lit_235);
DEFLIT(lit_111);
DEFLIT(lit_105);
DEFLIT(lit_166);
DEFLIT(lit_79);
DEFLIT(lit_80);
DEFLIT(lit_178);
DEFLIT(lit_164);
DEFLIT(lit_39);
DEFLIT(lit_103);
DEFLIT(lit_62);
DEFLIT(lit_52);
DEFLIT(lit_68);
DEFLIT(lit_40);
DEFLIT(lit_243);
DEFLIT(lit_36);
DEFLIT(lit_29);
DEFLIT(lit_216);
DEFLIT(lit_89);
DEFLIT(lit_150);
DEFLIT(lit_3);
DEFLIT(lit_248);
DEFLIT(lit_27);
DEFLIT(lit_128);
DEFLIT(lit_155);
DEFLIT(lit_107);
DEFLIT(lit_192);
DEFLIT(lit_15);
DEFLIT(lit_102);
DEFLIT(lit_47);
DEFLIT(lit_109);
DEFLIT(lit_44);
DEFLIT(lit_176);
DEFLIT(lit_120);
DEFLIT(lit_154);
DEFLIT(lit_183);
DEFLIT(lit_23);
DEFLIT(lit_8);
DEFLIT(lit_126);
DEFLIT(lit_220);
DEFLIT(lit_127);
DEFLIT(lit_160);
DEFLIT(lit_212);
DEFLIT(lit_161);
DEFLIT(lit_12);
DEFLIT(lit_245);
DEFLIT(lit_115);
DEFLIT(lit_31);
DEFLIT(lit_185);
DEFLIT(lit_84);
DEFLIT(lit_163);
DEFLIT(lit_60);
DEFLIT(lit_98);
DEFLIT(lit_223);
DEFLIT(lit_246);
DEFLIT(lit_167);
DEFLIT(lit_204);
DEFLIT(lit_96);
DEFLIT(lit_206);
DEFLIT(lit_37);
DEFLIT(lit_250);
DEFLIT(lit_73);
DEFLIT(lit_228);
DEFLIT(lit_55);
DEFLIT(lit_236);
DEFLIT(lit_253);
DEFLIT(lit_118);
DEFLIT(lit_241);
DEFLIT(lit_201);
DEFLIT(lit_28);
DEFLIT(lit_82);
DEFLIT(lit_83);
DEFLIT(lit_106);
DEFLIT(lit_49);
DEFLIT(lit_199);
DEFLIT(lit_78);
DEFLIT(lit_165);
DEFLIT(lit_143);
DEFLIT(lit_218);
DEFLIT(lit_108);
DEFLIT(lit_22);
DEFLIT(lit_171);
DEFLIT(lit_214);
DEFLIT(lit_141);
DEFLIT(lit_184);
DEFLIT(lit_30);
DEFLIT(lit_41);
DEFLIT(lit_229);
DEFLIT(lit_194);
DEFLIT(lit_188);
DEFLIT(lit_13);
DEFLIT(lit_227);
DEFLIT(lit_174);
DEFLIT(lit_32);
DEFLIT(lit_10);
DEFLIT(lit_224);
DEFLIT(lit_158);
DEFLIT(lit_6);
DEFLIT(lit_140);
DEFLIT(lit_57);
DEFLIT(lit_9);
DEFLIT(lit_255);
DEFLIT(lit_97);
DEFLIT(lit_71);
DEFLIT(lit_90);
DEFLIT(lit_181);
DEFLIT(lit_72);
DEFLIT(lit_234);
DEFLIT(lit_179);
DEFLIT(lit_116);
DEFLIT(lit_207);
DEFLIT(lit_65);
DEFLIT(lit_232);
DEFLIT(lit_121);
DEFLIT(lit_142);
DEFLIT(lit_170);
DEFLIT(lit_145);
DEFLIT(lit_1);
DEFLIT(lit_5);
DEFLIT(lit_26);
DEFLIT(lit_119);
DEFLIT(lit_213);
DEFLIT(lit_122);
DEFLIT(lit_238);
DEFLIT(lit_42);
DEFLIT(lit_146);
DEFLIT(lit_149);
DEFLIT(lit_34);
DEFLIT(lit_252);
DEFLIT(lit_189);
DEFLIT(lit_211);
DEFLIT(lit_123);
DEFLIT(lit_208);
DEFLIT(lit_148);
DEFLIT(lit_254);
DEFLIT(lit_222);
DEFLIT(lit_157);
DEFLIT(lit_88);
DEFLIT(lit_66);
DEFLIT(lit_209);
DEFLIT(lit_151);
DEFLIT(lit_215);
DEFLIT(lit_0);
DEFLIT(lit_139);
DEFLIT(lit_180);
DEFLIT(lit_53);
DEFLIT(lit_198);
DEFLIT(lit_24);
DEFLIT(lit_112);
DEFLIT(lit_95);
DEFLIT(lit_153);
DEFLIT(lit_152);
DEFLIT(lit_46);
DEFLIT(lit_4);
DEFLIT(lit_17);
DEFLIT(lit_114);
DEFLIT(lit_2);
DEFLIT(lit_191);
DEFLIT(lit_237);
DEFLIT(lit_134);
DEFLIT(lit_226);
DEFLIT(lit_172);
DEFLIT(lit_18);
DEFLIT(lit_168);
DEFLIT(lit_239);
DEFLIT(lit_244);
DEFLIT(lit_193);
DEFLIT(lit_196);
DEFLIT(lit_137);
DEFLIT(lit_113);
DEFLIT(lit_92);
DEFLIT(lit_195);

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
LOCFOR(fun_sexpr_signature_value_25);
FUNFOR(YcompilerSsyntaxYas_signature);
LOCFOR(fun_sexpr_function_signature_27);
LOCFOR(fun_sexpr_function_parameters_28);
LOCFOR(fun_sexpr_function_value_29);
LOCFOR(fun_sexpr_function_body_30);
LOCFOR(fun_sexpr_function_definition_value_31);
LOCFOR(fun_sexpr_methodQ_32);
LOCFOR(fun_sexpr_method_signature_33);
LOCFOR(fun_sexpr_method_parameters_34);
LOCFOR(fun_sexpr_method_value_35);
LOCFOR(fun_sexpr_method_body_36);
LOCFOR(fun_sexpr_make_anonymous_method_37);
LOCFOR(fun_sexpr_make_method_38);
LOCFOR(fun_sexpr_ifQ_39);
LOCFOR(fun_sexpr_if_test_40);
LOCFOR(fun_sexpr_if_then_41);
LOCFOR(fun_sexpr_if_else_42);
LOCFOR(fun_sexpr_make_if_43);
LOCFOR(fun_sexpr_blockQ_44);
LOCFOR(fun_sexpr_block_name_45);
LOCFOR(fun_sexpr_block_body_46);
LOCFOR(fun_sexpr_unwind_protectQ_47);
LOCFOR(fun_sexpr_unwind_protect_protected_form_48);
LOCFOR(fun_sexpr_unwind_protect_cleanup_forms_49);
LOCFOR(fun_sexpr_monitorQ_50);
LOCFOR(fun_x_1374_51);
LOCFOR(fun_52);
LOCFOR(fun_sexpr_monitor_expand_53);
FUNFOR(YcompilerSsyntaxYfind_option);
LOCFOR(fun_x_1376_55);
LOCFOR(fun_56);
LOCFOR(fun_sexpr_monitor_type_57);
LOCFOR(fun_x_1378_58);
LOCFOR(fun_59);
LOCFOR(fun_x_1380_60);
LOCFOR(fun_61);
LOCFOR(fun_sexpr_monitor_info_62);
LOCFOR(fun_sexpr_monitor_test_63);
LOCFOR(fun_sexpr_monitor_body_64);
LOCFOR(fun_sexpr_beginQ_65);
LOCFOR(fun_sexpr_begin_actions_66);
LOCFOR(fun_sexpr_last_expQ_67);
LOCFOR(fun_sexpr_first_exp_68);
LOCFOR(fun_sexpr_rest_exps_69);
LOCFOR(fun_sexpr_sequence_Gbegin_70);
LOCFOR(fun_sexpr_make_begin_71);
LOCFOR(fun_sexpr_applicationQ_72);
LOCFOR(fun_sexpr_operator_73);
LOCFOR(fun_sexpr_operands_74);
LOCFOR(fun_sexpr_no_operandsQ_75);
LOCFOR(fun_sexpr_first_operand_76);
LOCFOR(fun_sexpr_rest_operands_77);
LOCFOR(fun_sexpr_make_application_78);
LOCFOR(fun_sexpr_new_unique_name_counterX_79);
LOCFOR(fun_sexpr_unique_name_80);
LOCFOR(fun_sexpr_defQ_81);
LOCFOR(fun_sexpr_def_variable_82);
LOCFOR(fun_sexpr_def_value_83);
LOCFOR(fun_sexpr_letQ_84);
LOCFOR(fun_85);
LOCFOR(fun_sexpr_let_bound_variables_86);
LOCFOR(fun_87);
LOCFOR(fun_sexpr_let_values_88);
LOCFOR(fun_sexpr_let_body_89);
LOCFOR(fun_inner_90);
LOCFOR(fun_loop_91);
LOCFOR(fun_sexpr_let_namesAvalues_92);
LOCFOR(fun_col_93);
LOCFOR(fun_sexpr_let_Gcombination_94);
LOCFOR(fun_sexpr_locQ_95);
LOCFOR(fun_sexpr_loc_bound_names_96);
LOCFOR(fun_97);
LOCFOR(fun_sexpr_loc_bound_signatures_98);
LOCFOR(fun_sexpr_loc_bound_bodies_99);
LOCFOR(fun_sexpr_loc_raw_body_100);
LOCFOR(fun_sexpr_loc_body_101);
LOCFOR(fun_sexpr_iterateQ_102);
LOCFOR(fun_sexpr_iterate_name_103);
LOCFOR(fun_104);
LOCFOR(fun_sexpr_iterate_signature_105);
LOCFOR(fun_106);
LOCFOR(fun_sexpr_iterate_inits_107);
LOCFOR(fun_sexpr_iterate_body_108);
LOCFOR(fun_sexpr_iterate_Gloc_109);
LOCFOR(fun_sexpr_isaQ_110);
LOCFOR(fun_sexpr_isa_parent_111);
LOCFOR(fun_sexpr_isa_prop_inits_112);
LOCFOR(fun_sexpr_isa_init_props_113);
LOCFOR(fun_sexpr_isa_init_values_114);
LOCFOR(fun_sexpr_define_classQ_115);
LOCFOR(fun_sexpr_define_class_parents_116);
LOCFOR(fun_sexpr_propQ_117);
LOCFOR(fun_sexpr_prop_name_118);
LOCFOR(fun_sexpr_prop_owner_119);
LOCFOR(fun_sexpr_prop_init_var_120);
LOCFOR(fun_sexpr_prop_type_121);
LOCFOR(fun_sexpr_prop_initQ_122);
LOCFOR(fun_sexpr_prop_init_123);
LOCFOR(fun_sexpr_fab_getter_124);
LOCFOR(fun_sexpr_fab_setter_125);
LOCFOR(fun_sexpr_fab_setter_name_126);
LOCFOR(fun_sexpr_macroQ_127);
LOCFOR(fun_sexpr_macro_expandQ_128);
LOCFOR(fun_sexpr_make_syntax_if_129);
FUNFOR(YcompilerSsyntaxYsexpr_expand_backquote);
LOCFOR(fun_sexpr_build_backquote_expander_131);
LOCFOR(fun_sexpr_unquoteQ_132);
LOCFOR(fun_sexpr_unquote_splicingQ_133);
LOCFOR(fun_sexpr_backquoteQ_134);
LOCFOR(fun_sexpr_atomQ_135);
LOCFOR(fun_nreconc_136);
LOCFOR(fun_loop_137);
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
extern P YcompilerSsyntaxY___main_0___ ();
extern P YcompilerSsyntaxY___main_1___ ();
extern P YcompilerSsyntaxY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_sexpr_self_evaluatingQ_0) {
  P exp_;
  P tmpF1427;
  P tmpF1426;
  P tmpF1425;
  P tmpF1424;
  P tmpF1423;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLnumG));
  check_type(T1,VARREF(YLanyG));
  tmpF1423 = T1;
  if (tmpF1423 != YPfalse) {
    T2 = tmpF1423;
  } else {
    T4 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLchrG));
    check_type(T4,VARREF(YLanyG));
    tmpF1424 = T4;
    if (tmpF1424 != YPfalse) {
      T5 = tmpF1424;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),exp_,YPtrue);
      check_type(T7,VARREF(YLanyG));
      tmpF1425 = T7;
      if (tmpF1425 != YPfalse) {
        T8 = tmpF1425;
      } else {
        T10 = CALL2(1,VARREF(YgooSmacrosYEE),exp_,YPfalse);
        check_type(T10,VARREF(YLanyG));
        tmpF1426 = T10;
        if (tmpF1426 != YPfalse) {
          T11 = tmpF1426;
        } else {
          T13 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLstrG));
          check_type(T13,VARREF(YLanyG));
          tmpF1427 = T13;
          if (tmpF1427 != YPfalse) {
            T14 = tmpF1427;
          } else {
            T15 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLvecG));
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
  P tmpF1428;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(tag_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  check_type(T1,VARREF(YLanyG));
  tmpF1428 = T1;
  if (tmpF1428 != YPfalse) {
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
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_quote_tag));
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
  T0 = CALL2(1,VARREF(Ylst),VARREF(YcompilerSsyntaxYDsexpr_quote_tag),exp_);
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
  T0 = CALL1(1,VARREF(YgooStypeY2nd),quot_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_assignmentQ_6) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_set_tag));
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
  T0 = CALL1(1,VARREF(YgooStypeY2nd),assn_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_assignment_value_8) {
  P assn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(assn_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScollectionsSsequenceY3rd),assn_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_variable_name_9) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScollectionsSsequenceY1st),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_variable_name_10) {
  P exp_;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
UNLINK_STACK();
  RET(exp_);
}

FUNCODEDEF(fun_sexpr_variable_type_11) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypeY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_variable_type_12) {
  P exp_;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
UNLINK_STACK();
  RET(LITREF(lit_17));
}

FUNCODEDEF(fun_sexpr_definitionQ_13) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_define_tag));
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
  T0 = CALL1(1,VARREF(YgooStypeY2nd),defn_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_definition_value_15) {
  P defn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScollectionsSsequenceY3rd),defn_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definitionQ_16) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_define_syntax_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definition_variable_17) {
  P defn_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),defn_);
  T1 = CALL1(1,VARREF(Yhead),T2);
  T0 = CALL1(1,VARREF(YgooScollectionsSsequenceY1st),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definition_value_18) {
  P defn_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooStypeY2nd),defn_);
  T4 = CALL1(1,VARREF(Ytail),defn_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YcompilerSsyntaxYDsexpr_macro_tag),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_definitionQ_19) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_define_function_tag));
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
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_define_method_tag));
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
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_define_generic_tag));
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
  T0 = CALL1(1,VARREF(YgooStypeY2nd),defn_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_forward_primitiveQ_23) {
  P defn_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypeYlen),defn_);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)2));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_parameters_24) {
  P signature_;
  P values_spec_indexF1429;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooScollectionsSsequenceYpos),signature_,LITREF(lit_39));
  check_type(T1,VARREF(YLanyG));
  values_spec_indexF1429 = T1;
  if (values_spec_indexF1429 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooScollectionsSsequenceYsub),signature_,YPint((P)0),values_spec_indexF1429);
    T2 = T3;
  } else {
    T2 = signature_;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_value_25) {
  P signature_;
  P valueF1432;
  P tmpF1431;
  P values_spec_indexF1430;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooScollectionsSsequenceYpos),signature_,LITREF(lit_39));
  check_type(T1,VARREF(YLanyG));
  values_spec_indexF1430 = T1;
  check_type(values_spec_indexF1430,VARREF(YLanyG));
  tmpF1431 = values_spec_indexF1430;
  if (tmpF1431 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathYA),values_spec_indexF1430,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),signature_,T6);
    check_type(T5,VARREF(YLanyG));
    valueF1432 = T5;
    T8 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),valueF1432,LITREF(lit_41));
    if (T8 != YPfalse) {
      T7 = LITREF(lit_42);
    } else {
      T7 = valueF1432;
    }
    T4 = T7;
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YcompilerSsyntaxYas_signature) {
  P sig_;
  P a1;
LINK_STACK();
  ARG(sig_, 0);
loop:
UNLINK_STACK();
  RET(sig_);
}

FUNCODEDEF(fun_sexpr_function_signature_27) {
  P defn_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsSsequenceY3rd),defn_);
  T0 = CALL1(1,VARREF(YcompilerSsyntaxYas_signature),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_parameters_28) {
  P defn_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_signature_parameters),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_value_29) {
  P defn_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_signature_value),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_body_30) {
  P defn_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),defn_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_definition_value_31) {
  P defn_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScollectionsSsequenceY3rd),defn_);
  T5 = CALL1(1,VARREF(Ytail),defn_);
  T4 = CALL1(1,VARREF(Ytail),T5);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YcompilerSsyntaxYDsexpr_method_tag),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_methodQ_32) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_method_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_signature_33) {
  P method_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypeY2nd),method_exp_);
  T0 = CALL1(1,VARREF(YcompilerSsyntaxYas_signature),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_parameters_34) {
  P method_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_signature_parameters),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_value_35) {
  P method_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_signature_value),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_body_36) {
  P method_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),method_exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_anonymous_method_37) {
  P parameters_,body_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(parameters_, 0);
  ARG(body_, 1);
loop:
  T1 = CALL1(1,VARREF(Ylst),VARREF(YcompilerSsyntaxYDsexpr_method_tag));
  T2 = CALL1(1,VARREF(Ylst),parameters_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,T2,body_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_method_38) {
  P name_,parameters_,body_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(parameters_, 1);
  ARG(body_, 2);
loop:
  T1 = CALL3(1,VARREF(Ylst),VARREF(YcompilerSsyntaxYDsexpr_define_method_tag),name_,parameters_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,body_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_ifQ_39) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_if_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_if_test_40) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypeY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_if_then_41) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScollectionsSsequenceY3rd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_if_else_42) {
  P exp_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_if_43) {
  P test_,then_,else_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(then_, 1);
  ARG(else_, 2);
loop:
  T0 = CALLN(1,VARREF(Ylst),4,VARREF(YcompilerSsyntaxYDsexpr_if_tag),test_,then_,else_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_blockQ_44) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_bind_exit_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_block_name_45) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypeY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_block_body_46) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protectQ_47) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_unwind_protect_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protect_protected_form_48) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypeY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protect_cleanup_forms_49) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_monitorQ_50) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_monitor_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1374_51) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_86),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_52) {
  P return_;
  P optionsF1442;
  P x_1373F1441;
  P x_1373F1440;
  P x_1373F1439;
  P x_1373F1438;
  P bodyF1437;
  P handlerF1436;
  P optionsF1435;
  P x_1373F1434;
  P x_1374F1433;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1374_51,2);
  x_1374F1433 = T1;
  FUNINIT(x_1374F1433, 2,return_,FREEREF(0));
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1373F1434 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  optionsF1435 = YPfalse;
  optionsF1435 = BOXFAB(optionsF1435);
  check_type(YPfalse,VARREF(YLanyG));
  handlerF1436 = YPfalse;
  handlerF1436 = BOXFAB(handlerF1436);
  check_type(YPfalse,VARREF(YLanyG));
  bodyF1437 = YPfalse;
  bodyF1437 = BOXFAB(bodyF1437);
  T9 = CALL2(1,VARREF(YisaQ),x_1373F1434,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1373F1434,LITREF(lit_79),x_1374F1433);
    check_type(T11,VARREF(YLanyG));
    x_1373F1438 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1373F1438,x_1374F1433);
    BOXVAL(optionsF1435) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1373F1438);
    check_type(T14,VARREF(YLanyG));
    x_1373F1439 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1373F1439,x_1374F1433);
    BOXVAL(handlerF1436) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1373F1439);
    check_type(T17,VARREF(YLanyG));
    x_1373F1440 = T17;
    BOXVAL(bodyF1437) = x_1373F1440;
    check_type(Ynil,VARREF(YLanyG));
    x_1373F1441 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1373F1441,x_1374F1433);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1374F1433,LITREF(lit_87),x_1373F1434);
  }
  T24 = BOXVAL(optionsF1435);
  T23 = CALL2(1,VARREF(YisaQ),T24,VARREF(YLsymG));
  if (T23 != YPfalse) {
    T28 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
    T30 = BOXVAL(optionsF1435);
    T29 = CALL1(1,VARREF(Ylst),T30);
    T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
    T22 = T25;
  } else {
    T31 = BOXVAL(optionsF1435);
    T22 = T31;
  }
  check_type(T22,VARREF(YLanyG));
  optionsF1442 = T22;
  T33 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_monitor_type),optionsF1442);
  T34 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_monitor_info),optionsF1442);
  T35 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_monitor_test),optionsF1442);
  T36 = BOXVAL(handlerF1436);
  T38 = BOXVAL(bodyF1437);
  T37 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_monitor_body),T38);
  T32 = CALLN(1,VARREF(Ytup),5,T33,T34,T35,T36,T37);
  T21 = T32;
  T7 = T21;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_expand_53) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_52,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YcompilerSsyntaxYfind_option) {
  P options_,option_,default_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    T5 = CALL1(1,VARREF(YgooScollectionsSsequenceY1st),options_);
    T4 = CALL1(1,VARREF(Yhead),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),option_,T4);
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScollectionsSsequenceY1st),options_);
      T6 = CALL1(1,VARREF(Ytail),T7);
      T2 = T6;
    } else {
      if (YPtrue != YPfalse) {
        T10 = CALL1(1,VARREF(Ytail),options_);
        T9 = CALL3(1,VARREF(YcompilerSsyntaxYfind_option),T10,option_,default_);
        T8 = T9;
      } else {
        T8 = YPfalse;
      }
      T2 = T8;
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1376_55) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_96),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_56) {
  P return_;
  P x_1375F1446;
  P typeF1445;
  P x_1375F1444;
  P x_1376F1443;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1376_55,2);
  x_1376F1443 = T1;
  FUNINIT(x_1376F1443, 2,return_,FREEREF(0));
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1375F1444 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  typeF1445 = YPfalse;
  typeF1445 = BOXFAB(typeF1445);
  T5 = CALL2(1,VARREF(YisaQ),x_1375F1444,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1375F1444,x_1376F1443);
    BOXVAL(typeF1445) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1375F1444);
    check_type(T8,VARREF(YLanyG));
    x_1375F1446 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1375F1446,x_1376F1443);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1376F1443,LITREF(lit_87),x_1375F1444);
  }
  T11 = BOXVAL(typeF1445);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_type_57) {
  P options_;
  P type_listF1447;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YcompilerSsyntaxYfind_option),options_,LITREF(lit_88),LITREF(lit_94));
  check_type(T1,VARREF(YLanyG));
  type_listF1447 = T1;
  T3 = FUNFAB(fun_56,1,type_listF1447);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1378_58) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_102),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1377F1451;
  P info_exprF1450;
  P x_1377F1449;
  P x_1378F1448;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1378_58,2);
  x_1378F1448 = T1;
  FUNINIT(x_1378F1448, 2,return_,FREEREF(0));
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1377F1449 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  info_exprF1450 = YPfalse;
  info_exprF1450 = BOXFAB(info_exprF1450);
  T5 = CALL2(1,VARREF(YisaQ),x_1377F1449,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1377F1449,x_1378F1448);
    BOXVAL(info_exprF1450) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1377F1449);
    check_type(T8,VARREF(YLanyG));
    x_1377F1451 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1377F1451,x_1378F1448);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1378F1448,LITREF(lit_87),x_1377F1449);
  }
  T11 = BOXVAL(info_exprF1450);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1380_60) {
  P msg_,args_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yerror),LITREF(lit_104),FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1379F1457;
  P x_1379F1456;
  P argumentsF1455;
  P messageF1454;
  P x_1379F1453;
  P x_1380F1452;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1380_60,2);
  x_1380F1452 = T1;
  FUNINIT(x_1380F1452, 2,return_,FREEREF(0));
  check_type(FREEREF(0),VARREF(YLanyG));
  x_1379F1453 = FREEREF(0);
  check_type(YPfalse,VARREF(YLanyG));
  messageF1454 = YPfalse;
  messageF1454 = BOXFAB(messageF1454);
  check_type(YPfalse,VARREF(YLanyG));
  argumentsF1455 = YPfalse;
  argumentsF1455 = BOXFAB(argumentsF1455);
  T7 = CALL2(1,VARREF(YisaQ),x_1379F1453,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1379F1453,x_1380F1452);
    BOXVAL(messageF1454) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1379F1453);
    check_type(T10,VARREF(YLanyG));
    x_1379F1456 = T10;
    BOXVAL(argumentsF1455) = x_1379F1456;
    check_type(Ynil,VARREF(YLanyG));
    x_1379F1457 = Ynil;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1379F1457,x_1380F1452);
    T11 = T12;
    T8 = T11;
  } else {
    T13 = CALL2(1,x_1380F1452,LITREF(lit_87),x_1379F1453);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
  T19 = BOXVAL(messageF1454);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_109));
  T24 = BOXVAL(argumentsF1455);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,Ynil);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T14 = CALLN(1,VARREF(YgooSmacrosYcat),7,T15,T16,T17,T18,T20,T21,Ynil);
  T5 = T14;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_info_62) {
  P options_;
  P tmpF1460;
  P descriptionF1459;
  P infoF1458;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YcompilerSsyntaxYfind_option),options_,LITREF(lit_98),YPfalse);
  check_type(T1,VARREF(YLanyG));
  infoF1458 = T1;
  T3 = CALL3(1,VARREF(YcompilerSsyntaxYfind_option),options_,LITREF(lit_99),YPfalse);
  check_type(T3,VARREF(YLanyG));
  descriptionF1459 = T3;
  check_type(infoF1458,VARREF(YLanyG));
  tmpF1460 = infoF1458;
  if (tmpF1460 != YPfalse) {
    T6 = descriptionF1459;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(Yerror),LITREF(lit_100),options_);
    T4 = T7;
  } else {
    if (infoF1458 != YPfalse) {
      T10 = FUNFAB(fun_59,1,infoF1458);
      T9 = with_exit(T10);
      T8 = T9;
    } else {
      if (descriptionF1459 != YPfalse) {
        T13 = FUNFAB(fun_61,1,descriptionF1459);
        T12 = with_exit(T13);
        T11 = T12;
      } else {
        if (YPtrue != YPfalse) {
          T14 = LITREF(lit_110);
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
  RET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_test_63) {
  P options_;
  P test_bodyF1461;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YcompilerSsyntaxYfind_option),options_,LITREF(lit_68),LITREF(lit_112));
  check_type(T1,VARREF(YLanyG));
  test_bodyF1461 = T1;
  T2 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_make_anonymous_method),Ynil,test_bodyF1461);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_body_64) {
  P body_;
  P T0;
  P a1;
LINK_STACK();
  ARG(body_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_make_anonymous_method),Ynil,body_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_beginQ_65) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_begin_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_begin_actions_66) {
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

FUNCODEDEF(fun_sexpr_last_expQ_67) {
  P seq_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(seq_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),seq_);
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_first_exp_68) {
  P seq_;
  P T0;
  P a1;
LINK_STACK();
  ARG(seq_, 0);
loop:
  T0 = CALL1(1,VARREF(Yhead),seq_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_rest_exps_69) {
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

FUNCODEDEF(fun_sexpr_sequence_Gbegin_70) {
  P seq_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(seq_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),seq_);
  if (T1 != YPfalse) {
    T0 = seq_;
  } else {
    T3 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_last_expQ),seq_);
    if (T3 != YPfalse) {
      T4 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_first_exp),seq_);
      T2 = T4;
    } else {
      T5 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_make_begin),seq_);
      T2 = T5;
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_begin_71) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YcompilerSsyntaxYDsexpr_begin_tag),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_applicationQ_72) {
  P exp_;
  P tmpF1462;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  check_type(T1,VARREF(YLanyG));
  tmpF1462 = T1;
  if (tmpF1462 != YPfalse) {
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

FUNCODEDEF(fun_sexpr_operator_73) {
  P app_;
  P T0;
  P a1;
LINK_STACK();
  ARG(app_, 0);
loop:
  T0 = CALL1(1,VARREF(Yhead),app_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_operands_74) {
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

FUNCODEDEF(fun_sexpr_no_operandsQ_75) {
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

FUNCODEDEF(fun_sexpr_first_operand_76) {
  P args_;
  P T0;
  P a1;
LINK_STACK();
  ARG(args_, 0);
loop:
  T0 = CALL1(1,VARREF(Yhead),args_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_rest_operands_77) {
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

FUNCODEDEF(fun_sexpr_make_application_78) {
  P op_,operands_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(op_, 0);
  ARG(operands_, 1);
loop:
  T1 = CALL1(1,VARREF(Ylst),op_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,operands_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_new_unique_name_counterX_79) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSmathYA),VARREF(YcompilerSsyntaxYTunique_name_counterT),YPint((P)1));
  VARSET(YcompilerSsyntaxYTunique_name_counterT,T0);
UNLINK_STACK();
  RET(VARREF(YcompilerSsyntaxYTunique_name_counterT));
}

FUNCODEDEF(fun_sexpr_unique_name_80) {
  P prefix_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(prefix_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypeYas),VARREF(YLstrG),prefix_);
  T4 = CALL0(1,VARREF(YcompilerSsyntaxYsexpr_new_unique_name_counterX));
  T3 = CALL1(1,VARREF(YgooSmathYnum_to_str),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,T3);
  T0 = CALL2(1,VARREF(YgooStypeYas),VARREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_defQ_81) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_def_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_def_variable_82) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypeY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_def_value_83) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScollectionsSsequenceY3rd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_letQ_84) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_let_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_85) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooScollectionsSsequenceY1st),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_bound_variables_86) {
  P let_exp_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = fun_85;
  T2 = CALL1(1,VARREF(YgooStypeY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_87) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooStypeY2nd),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_values_88) {
  P let_exp_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = fun_87;
  T2 = CALL1(1,VARREF(YgooStypeY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_body_89) {
  P let_exp_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),let_exp_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_sequence_Gbegin),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_inner_90) {
  P rtnames_,rtvalues_,index_,tnames_;
  P tmpF1464;
  P nameF1463;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    check_type(T4,VARREF(YLanyG));
    nameF1463 = T4;
    T7 = CALL2(1,VARREF(YisaQ),nameF1463,VARREF(YLlstG));
    check_type(T7,VARREF(YLanyG));
    tmpF1464 = T7;
    if (tmpF1464 != YPfalse) {
      T11 = CALL1(1,VARREF(Ytail),nameF1463);
      T10 = CALL1(1,VARREF(Yhead),T11);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),T10,LITREF(lit_159));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    if (T6 != YPfalse) {
      T15 = CALL1(1,VARREF(Yhead),nameF1463);
      T14 = CALL2(1,VARREF(Ylst),T15,LITREF(lit_160));
      T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,rtnames_);
      T18 = CALL2(1,VARREF(Ylst),LITREF(lit_162),FREEREF(1));
      T17 = CALLN(1,VARREF(Ylst),4,LITREF(lit_161),FREEREF(1),index_,T18);
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
      T22 = CALL2(1,VARREF(YgooSmacrosYpair),nameF1463,rtnames_);
      T24 = CALL3(1,VARREF(Ylst),LITREF(lit_163),FREEREF(1),index_);
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
  RET(T0);
}

FUNCODEDEF(fun_loop_91) {
  P rnames_,rvalues_,names_,vals_;
  P rtvaluesF1472;
  P rtnamesF1471;
  P tup35F1470;
  P innerF1469;
  P tupnameF1468;
  P tmpF1467;
  P valueF1466;
  P nameF1465;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
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
    check_type(T6,VARREF(YLanyG));
    nameF1465 = T6;
    T8 = CALL1(1,VARREF(Yhead),vals_);
    check_type(T8,VARREF(YLanyG));
    valueF1466 = T8;
    T11 = CALL2(1,VARREF(YisaQ),nameF1465,VARREF(YLlstG));
    check_type(T11,VARREF(YLanyG));
    tmpF1467 = T11;
    if (tmpF1467 != YPfalse) {
      T14 = CALL1(1,VARREF(Yhead),nameF1465);
      T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,LITREF(lit_41));
      T12 = T13;
    } else {
      T12 = YPfalse;
    }
    T10 = T12;
    if (T10 != YPfalse) {
      T16 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_unique_name),LITREF(lit_153));
      check_type(T16,VARREF(YLanyG));
      tupnameF1468 = T16;
      T19 = FUNSHELL(1,fun_inner_90,2);
      innerF1469 = T19;
      FUNINIT(innerF1469, 2,innerF1469,tupnameF1468);
      T21 = CALL1(1,VARREF(Ylst),tupnameF1468);
      T22 = CALL1(1,VARREF(Ylst),valueF1466);
      T23 = CALL1(1,VARREF(Ytail),nameF1465);
      T20 = CALLN(1,innerF1469,4,T21,T22,YPint((P)0),T23);
      T18 = T20;
      check_type(T18,VARREF(YLanyG));
      tup35F1470 = T18;
      T25 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F1470,YPint((P)0));
      check_type(T25,VARREF(YLanyG));
      rtnamesF1471 = T25;
      T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup35F1470,YPint((P)1));
      check_type(T27,VARREF(YLanyG));
      rtvaluesF1472 = T27;
      T29 = CALL2(1,VARREF(YgooSmacrosYcat),rtnamesF1471,rnames_);
      T30 = CALL2(1,VARREF(YgooSmacrosYcat),rtvaluesF1472,rvalues_);
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
      T34 = CALL2(1,VARREF(YgooSmacrosYpair),nameF1465,rnames_);
      T35 = CALL2(1,VARREF(YgooSmacrosYpair),valueF1466,rvalues_);
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
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_namesAvalues_92) {
  P names_,vals_;
  P loopF1473;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_91,1);
  loopF1473 = T1;
  FUNINIT(loopF1473, 1,loopF1473);
  T2 = CALLN(1,loopF1473,4,Ynil,Ynil,names_,vals_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_93) {
  P names_,values_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    T6 = CALL2(1,FREEREF(1),T7,T8);
    T3 = CALL3(1,VARREF(Ylst),VARREF(YcompilerSsyntaxYDsexpr_method_tag),T4,T6);
    T10 = CALL1(1,VARREF(Yhead),values_);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T2 = CALL2(1,VARREF(YgooSmacrosYpair),T3,T9);
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_Gcombination_94) {
  P let_exp_;
  P colF1480;
  P valuesF1479;
  P namesF1478;
  P tup36F1477;
  P bodyF1476;
  P ovaluesF1475;
  P onamesF1474;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_let_bound_variables),let_exp_);
  check_type(T1,VARREF(YLanyG));
  onamesF1474 = T1;
  T3 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_let_values),let_exp_);
  check_type(T3,VARREF(YLanyG));
  ovaluesF1475 = T3;
  T5 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_let_body),let_exp_);
  check_type(T5,VARREF(YLanyG));
  bodyF1476 = T5;
  T7 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_let_namesAvalues),onamesF1474,ovaluesF1475);
  check_type(T7,VARREF(YLanyG));
  tup36F1477 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup36F1477,YPint((P)0));
  check_type(T9,VARREF(YLanyG));
  namesF1478 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup36F1477,YPint((P)1));
  check_type(T11,VARREF(YLanyG));
  valuesF1479 = T11;
  T13 = FUNSHELL(1,fun_col_93,2);
  colF1480 = T13;
  FUNINIT(colF1480, 2,bodyF1476,colF1480);
  T14 = CALL2(1,colF1480,namesF1478,valuesF1479);
  T12 = T14;
  T10 = T12;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_locQ_95) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_locals_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_names_96) {
  P loc_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypeY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScollectionsSsequenceY1st),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_97) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypeY2nd),x_);
  T0 = CALL1(1,VARREF(YcompilerSsyntaxYas_signature),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_signatures_98) {
  P loc_exp_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = fun_97;
  T2 = CALL1(1,VARREF(YgooStypeY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_bodies_99) {
  P loc_exp_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YruntimeSruntimeYcompose),VARREF(Ytail),VARREF(Ytail));
  T2 = CALL1(1,VARREF(YgooStypeY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_raw_body_100) {
  P loc_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),loc_exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_body_101) {
  P loc_exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_loc_raw_body),loc_exp_);
  T0 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_sequence_Gbegin),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterateQ_102) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_iterate_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_name_103) {
  P rep_exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypeY2nd),rep_exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_104) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooScollectionsSsequenceY1st),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_signature_105) {
  P rep_exp_;
  P sigF1481;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScollectionsSsequenceY3rd),rep_exp_);
  check_type(T1,VARREF(YLanyG));
  sigF1481 = T1;
  T4 = fun_104;
  T5 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_signature_parameters),sigF1481);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  T7 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_signature_value),sigF1481);
  if (T7 != YPfalse) {
    T6 = Ynil;
  } else {
    T8 = CALL1(1,VARREF(Ylst),VARREF(YcompilerSsyntaxYDsexpr_values_tag));
    T6 = T8;
  }
  T10 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_signature_value),sigF1481);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T2 = CALL3(1,VARREF(YgooSmacrosYcat),T3,T6,T9);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_106) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooStypeY2nd),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_inits_107) {
  P rep_exp_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = fun_106;
  T2 = CALL1(1,VARREF(YgooScollectionsSsequenceY3rd),rep_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_body_108) {
  P rep_exp_;
  P T2,T1,T0;
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

FUNCODEDEF(fun_sexpr_iterate_Gloc_109) {
  P rep_exp_;
  P initsF1485;
  P bodyF1484;
  P sigF1483;
  P nameF1482;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_iterate_name),rep_exp_);
  check_type(T1,VARREF(YLanyG));
  nameF1482 = T1;
  T3 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_iterate_signature),rep_exp_);
  check_type(T3,VARREF(YLanyG));
  sigF1483 = T3;
  T5 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_iterate_body),rep_exp_);
  check_type(T5,VARREF(YLanyG));
  bodyF1484 = T5;
  T7 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_iterate_inits),rep_exp_);
  check_type(T7,VARREF(YLanyG));
  initsF1485 = T7;
  T11 = CALL2(1,VARREF(Ylst),nameF1482,sigF1483);
  T10 = CALL2(1,VARREF(YgooSmacrosYcat),T11,bodyF1484);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T13 = CALL1(1,VARREF(Ylst),nameF1482);
  T12 = CALL2(1,VARREF(YgooSmacrosYcat),T13,initsF1485);
  T8 = CALL3(1,VARREF(Ylst),VARREF(YcompilerSsyntaxYDsexpr_locals_tag),T9,T12);
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isaQ_110) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_isa_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_parent_111) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypeY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_prop_inits_112) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_init_props_113) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooStypeY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_init_values_114) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScollectionsSsequenceY3rd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_define_classQ_115) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_define_class_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_define_class_parents_116) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScollectionsSsequenceY3rd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_propQ_117) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_prop_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_name_118) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypeY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_owner_119) {
  P exp_;
  P paramF1486;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_function_parameters),exp_);
  T1 = CALL1(1,VARREF(YgooScollectionsSsequenceY1st),T2);
  check_type(T1,VARREF(YLanyG));
  paramF1486 = T1;
  T4 = CALL2(1,VARREF(YisaQ),paramF1486,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypeY2nd),paramF1486);
    T3 = T5;
  } else {
    T3 = paramF1486;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_init_var_120) {
  P exp_;
  P paramF1487;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_function_parameters),exp_);
  T1 = CALL1(1,VARREF(YgooScollectionsSsequenceY1st),T2);
  check_type(T1,VARREF(YLanyG));
  paramF1487 = T1;
  T4 = CALL2(1,VARREF(YisaQ),paramF1487,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooScollectionsSsequenceY1st),paramF1487);
    T3 = T5;
  } else {
    T3 = LITREF(lit_197);
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_type_121) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_function_value),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_initQ_122) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypeYlen),exp_);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)4));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_init_123) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),exp_,YPint((P)3));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_fab_getter_124) {
  P name_,type_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(type_, 1);
loop:
  T2 = CALL2(1,VARREF(Ylst),LITREF(lit_197),type_);
  T1 = CALL1(1,VARREF(Ylst),T2);
  T4 = CALL3(1,VARREF(Ylst),LITREF(lit_202),LITREF(lit_197),name_);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T0 = CALL3(1,VARREF(YcompilerSsyntaxYsexpr_make_method),name_,T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_fab_setter_125) {
  P name_,type_,prop_type_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(type_, 1);
  ARG(prop_type_, 2);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_fab_setter_name),name_);
  T3 = CALL2(1,VARREF(Ylst),LITREF(lit_205),prop_type_);
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_197),type_);
  T2 = CALL2(1,VARREF(Ylst),T3,T4);
  T6 = CALLN(1,VARREF(Ylst),4,LITREF(lit_206),LITREF(lit_205),LITREF(lit_197),name_);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T0 = CALL3(1,VARREF(YcompilerSsyntaxYsexpr_make_method),T1,T2,T5);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_fab_setter_name_126) {
  P name_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypeYas),VARREF(YLstrG),name_);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,LITREF(lit_208));
  T0 = CALL2(1,VARREF(YgooStypeYas),VARREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macroQ_127) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_macro_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macro_expandQ_128) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_macro_expand_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_syntax_if_129) {
  P pat_,exp_,then_,else_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(pat_, 0);
  ARG(exp_, 1);
  ARG(then_, 2);
  ARG(else_, 3);
loop:
  T1 = CALL2(1,VARREF(Ylst),pat_,exp_);
  T0 = CALLN(1,VARREF(Ylst),4,VARREF(YcompilerSsyntaxYDsexpr_syntax_if_tag),T1,then_,else_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YcompilerSsyntaxYsexpr_expand_backquote) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_build_backquote_expander),x_);
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYeval),T1,LITREF(lit_223));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_build_backquote_expander_131) {
  P x_;
  P resF1489;
  P raw_resultF1488;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYbq_process),x_);
  check_type(T1,VARREF(YLanyG));
  raw_resultF1488 = T1;
  T3 = CALL1(1,VARREF(YcompilerSsyntaxYbq_remove_tokens),raw_resultF1488);
  check_type(T3,VARREF(YLanyG));
  resF1489 = T3;
  T2 = resF1489;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquoteQ_132) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_226));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquote_splicingQ_133) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_228));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_backquoteQ_134) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),x_,VARREF(YcompilerSsyntaxYDsexpr_quasiquote_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_atomQ_135) {
  P x_;
  P tmpF1490;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  check_type(T1,VARREF(YLanyG));
  tmpF1490 = T1;
  if (tmpF1490 != YPfalse) {
    T3 = tmpF1490;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),x_,Ynil);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nreconc_136) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),x_);
  T0 = CALL2(1,VARREF(YgooScollectionsSsequenceYcatX),T1,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_137) {
  P p_,q_;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(q_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_atomQ),p_);
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(Ylst),VARREF(YcompilerSsyntaxYTbq_quoteT),p_);
    T5 = CALL1(1,VARREF(Ylst),T6);
    T4 = CALL2(1,VARREF(YcompilerSsyntaxYnreconc),q_,T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YcompilerSsyntaxYTbq_appendT),T4);
    T2 = CALL1(1,FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_unquoteQ),p_);
    if (T7 != YPfalse) {
      T11 = CALL1(1,VARREF(Ytail),p_);
      T10 = CALL1(1,VARREF(Ytail),T11);
      T9 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T10);
      T8 = CALL1(1,VARREF(Ynot),T9);
      if (T8 != YPfalse) {
        T12 = CALL2(1,VARREF(Yerror),LITREF(lit_237),p_);
      } else {
      }
      T18 = CALL1(1,VARREF(Ytail),p_);
      T17 = CALL1(1,VARREF(Yhead),T18);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T15 = CALL2(1,VARREF(YcompilerSsyntaxYnreconc),q_,T16);
      T14 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YcompilerSsyntaxYTbq_appendT),T15);
      T13 = CALL1(1,FREEREF(0),T14);
    } else {
    }
    T20 = CALL1(1,VARREF(Ytail),p_);
    T19 = CALL2(1,VARREF(YgooSmacrosYEE),T20,VARREF(YcompilerSsyntaxYTcomma_atsignT));
    if (T19 != YPfalse) {
      T21 = CALL2(1,VARREF(Yerror),LITREF(lit_238),p_);
    } else {
    }
    T23 = CALL1(1,VARREF(Ytail),p_);
    T26 = CALL1(1,VARREF(Yhead),p_);
    T25 = CALL1(1,VARREF(YcompilerSsyntaxYbracket),T26);
    T24 = CALL2(1,VARREF(YgooSmacrosYpair),T25,q_);
    a1 = T23;
    a2 = T24;
    p_ = a1;
    q_ = a2;
    goto loop;
    T0 = T22;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_138) {
  P return_;
  P loopF1491;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_137,2);
  loopF1491 = T1;
  FUNINIT(loopF1491, 2,return_,loopF1491);
  T2 = CALL2(1,loopF1491,FREEREF(0),Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_bq_process_139) {
  P x_;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),VARREF(YcompilerSsyntaxYTbq_quoteT),x_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_backquoteQ),x_);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),x_);
      T7 = CALL1(1,VARREF(Yhead),T8);
      T6 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_build_backquote_expander),T7);
      T5 = CALL1(1,VARREF(YcompilerSsyntaxYbq_process),T6);
      T3 = T5;
    } else {
      T10 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_unquoteQ),x_);
      if (T10 != YPfalse) {
        T12 = CALL1(1,VARREF(Ytail),x_);
        T11 = CALL1(1,VARREF(Yhead),T12);
        T9 = T11;
      } else {
        T14 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_unquote_splicingQ),x_);
        if (T14 != YPfalse) {
          T18 = CALL0(1,x_);
          T17 = CALL1(1,VARREF(Ytail),T18);
          T16 = CALL1(1,VARREF(Yhead),T17);
          T15 = CALL2(1,VARREF(Yerror),LITREF(lit_234),T16);
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
  RET(T0);
}

FUNCODEDEF(fun_bracket_140) {
  P x_;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YcompilerSsyntaxYbq_process),x_);
    T2 = CALL2(1,VARREF(Ylst),VARREF(YcompilerSsyntaxYTbq_listT),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_unquoteQ),x_);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),x_);
      T7 = CALL1(1,VARREF(Yhead),T8);
      T6 = CALL2(1,VARREF(Ylst),VARREF(YcompilerSsyntaxYTbq_listT),T7);
      T4 = T6;
    } else {
      T10 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_unquote_splicingQ),x_);
      if (T10 != YPfalse) {
        T13 = CALL1(1,VARREF(Ytail),x_);
        T12 = CALL1(1,VARREF(Yhead),T13);
        T11 = CALL2(1,VARREF(Ylst),VARREF(YcompilerSsyntaxYTbq_clobberableT),T12);
        T9 = T11;
      } else {
        if (YPtrue != YPfalse) {
          T16 = CALL1(1,VARREF(YcompilerSsyntaxYbq_process),x_);
          T15 = CALL2(1,VARREF(Ylst),VARREF(YcompilerSsyntaxYTbq_listT),T16);
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
  RET(T0);
}

FUNCODEDEF(fun_map_tree_141) {
  P fn_,x_;
  P tmpF1494;
  P dF1493;
  P aF1492;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(fn_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,fn_,x_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL1(1,fn_,T5);
    check_type(T4,VARREF(YLanyG));
    aF1492 = T4;
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(1,VARREF(YcompilerSsyntaxYmap_tree),fn_,T8);
    check_type(T7,VARREF(YLanyG));
    dF1493 = T7;
    T12 = CALL1(1,VARREF(Yhead),x_);
    T11 = CALL2(1,VARREF(YgooSmathYE),aF1492,T12);
    check_type(T11,VARREF(YLanyG));
    tmpF1494 = T11;
    if (tmpF1494 != YPfalse) {
      T15 = CALL1(1,VARREF(Ytail),x_);
      T14 = CALL2(1,VARREF(YgooSmathYE),dF1493,T15);
      T13 = T14;
    } else {
      T13 = YPfalse;
    }
    T10 = T13;
    if (T10 != YPfalse) {
      T9 = x_;
    } else {
      T16 = CALL2(1,VARREF(YgooSmacrosYpair),aF1492,dF1493);
      T9 = T16;
    }
    T6 = T9;
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_bq_remove_tokens_142) {
  P x_;
  P tmpF1496;
  P tmpF1495;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YcompilerSsyntaxYTbq_listT));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_109);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YcompilerSsyntaxYTbq_appendT));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_243);
    } else {
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YcompilerSsyntaxYTbq_nconcT));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_244);
      } else {
        T7 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YcompilerSsyntaxYTbq_listTT));
        if (T7 != YPfalse) {
          T6 = LITREF(lit_245);
        } else {
          T9 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YcompilerSsyntaxYTbq_quoteT));
          if (T9 != YPfalse) {
            T8 = LITREF(lit_5);
          } else {
            T11 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_atomQ),x_);
            if (T11 != YPfalse) {
              T10 = x_;
            } else {
              T14 = CALL1(1,VARREF(Yhead),x_);
              T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,VARREF(YcompilerSsyntaxYTbq_clobberableT));
              if (T13 != YPfalse) {
                T17 = CALL1(1,VARREF(Ytail),x_);
                T16 = CALL1(1,VARREF(Yhead),T17);
                T15 = CALL1(1,VARREF(YcompilerSsyntaxYbq_remove_tokens),T16);
                T12 = T15;
              } else {
                T21 = CALL1(1,VARREF(Yhead),x_);
                T20 = CALL2(1,VARREF(YgooSmacrosYEE),T21,VARREF(YcompilerSsyntaxYTbq_listTT));
                check_type(T20,VARREF(YLanyG));
                tmpF1495 = T20;
                if (tmpF1495 != YPfalse) {
                  T27 = CALL1(1,VARREF(Ytail),x_);
                  T26 = CALL1(1,VARREF(Ytail),T27);
                  T25 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T26);
                  T24 = CALL1(1,VARREF(Ynot),T25);
                  check_type(T24,VARREF(YLanyG));
                  tmpF1496 = T24;
                  if (tmpF1496 != YPfalse) {
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
                  T34 = CALL2(1,VARREF(YcompilerSsyntaxYmap_tree),VARREF(YcompilerSsyntaxYbq_remove_tokens),T35);
                  T33 = CALL2(1,VARREF(YgooSmacrosYpair),LITREF(lit_246),T34);
                  T18 = T33;
                } else {
                  if (YPtrue != YPfalse) {
                    T37 = CALL2(1,VARREF(YcompilerSsyntaxYmap_tree),VARREF(YcompilerSsyntaxYbq_remove_tokens),x_);
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
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_ifQ_143) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YcompilerSsyntaxYDsexpr_syntax_if_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_value_144) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypeY2nd),exp_);
  T0 = CALL1(1,VARREF(YgooStypeY2nd),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_pattern_145) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypeY2nd),exp_);
  T0 = CALL1(1,VARREF(YgooScollectionsSsequenceY1st),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_then_146) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScollectionsSsequenceY3rd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_else_147) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooScollectionsScollectionYelt_or),exp_,YPint((P)3),YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variableQ_148) {
  P pat_;
  P tmpF1497;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T1 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_unquoteQ),pat_);
  check_type(T1,VARREF(YLanyG));
  tmpF1497 = T1;
  if (tmpF1497 != YPfalse) {
    T2 = tmpF1497;
  } else {
    T3 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_unquote_splicingQ),pat_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variable_name_149) {
  P pat_;
  P T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooStypeY2nd),pat_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_150) {
  P pat_;
  P xF1499;
  P tmpF1498;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T3 = CALL2(1,VARREF(YisaQ),pat_,VARREF(YLlstG));
  T2 = CALL1(1,VARREF(Ynot),T3);
  check_type(T2,VARREF(YLanyG));
  tmpF1498 = T2;
  if (tmpF1498 != YPfalse) {
    T4 = tmpF1498;
  } else {
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),pat_);
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T7 = CALL1(1,VARREF(Yhead),pat_);
    check_type(T7,VARREF(YLanyG));
    xF1499 = T7;
    T9 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_pattern_variableQ),xF1499);
    if (T9 != YPfalse) {
      T11 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_pattern_variable_name),xF1499);
      T13 = CALL1(1,VARREF(Ytail),pat_);
      T12 = CALL1(1,FREEREF(0),T13);
      T10 = CALL2(1,VARREF(YgooSmacrosYpair),T11,T12);
      T8 = T10;
    } else {
      T16 = CALL1(1,VARREF(Yhead),pat_);
      T15 = CALL1(1,FREEREF(0),T16);
      T18 = CALL1(1,VARREF(Ytail),pat_);
      T17 = CALL1(1,FREEREF(0),T18);
      T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,T17);
      T8 = T14;
    }
    T6 = T8;
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_bind_pattern_variables_151) {
  P pat_;
  P colF1500;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T2 = FUNSHELL(1,fun_col_150,1);
  colF1500 = T2;
  FUNINIT(colF1500, 1,colF1500);
  T3 = CALL1(1,colF1500,pat_);
  T1 = T3;
  T0 = CALL1(1,VARREF(YgooScollectionsSsequenceYdel_dups),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_macro_function_152) {
  P exp_;
  P funcF1502;
  P mifF1501;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_method_parameters),exp_);
  T4 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_method_body),exp_);
  T3 = CALL1(1,VARREF(YcompilerSsyntaxYsexpr_sequence_Gbegin),T4);
  T1 = CALLN(1,VARREF(YcompilerSsyntaxYsexpr_make_syntax_if),4,T2,LITREF(lit_1),T3,YPfalse);
  check_type(T1,VARREF(YLanyG));
  mifF1501 = T1;
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_1));
  T8 = CALL1(1,VARREF(Ylst),mifF1501);
  T6 = CALL2(1,VARREF(YcompilerSsyntaxYsexpr_make_anonymous_method),T7,T8);
  check_type(T6,VARREF(YLanyG));
  funcF1502 = T6;
  T5 = funcF1502;
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

P YcompilerSsyntaxY___main_0___() {
  P T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214;
  P T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198;
  P T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182;
  P T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166;
  P T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150;
  P T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134;
  P T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118;
  P T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102;
  P T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86;
  P T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70;
  P T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54;
  P T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"sexpr-self-evaluating?");
  lit_1 = YPPsym((P)"exp");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_self_evaluatingQ_0 = YPmet(FUNCODEREF(fun_sexpr_self_evaluatingQ_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YcompilerSsyntaxYsexpr_self_evaluatingQ);
  if (T3 != YPfalse) {
    T2 = VARREF(YcompilerSsyntaxYsexpr_self_evaluatingQ);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_self_evaluatingQ_0;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YcompilerSsyntaxYsexpr_self_evaluatingQ,T1);
  lit_2 = YPPsym((P)"sexpr-variable?");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_variableQ_1 = YPmet(FUNCODEREF(fun_sexpr_variableQ_1),LITREF(lit_2),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YcompilerSsyntaxYsexpr_variableQ);
  if (T8 != YPfalse) {
    T7 = VARREF(YcompilerSsyntaxYsexpr_variableQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_variableQ_1;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YcompilerSsyntaxYsexpr_variableQ,T6);
  lit_3 = YPPsym((P)"sexpr-tagged-list?");
  lit_4 = YPPsym((P)"tag");
  T10 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_4)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_sexpr_tagged_listQ_2 = YPmet(FUNCODEREF(fun_sexpr_tagged_listQ_2),LITREF(lit_3),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YcompilerSsyntaxYsexpr_tagged_listQ);
  if (T13 != YPfalse) {
    T12 = VARREF(YcompilerSsyntaxYsexpr_tagged_listQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_tagged_listQ_2;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YcompilerSsyntaxYsexpr_tagged_listQ,T11);
  lit_5 = YPPsym((P)"quote");
  VARSET(YcompilerSsyntaxYDsexpr_quote_tag,LITREF(lit_5));
  lit_6 = YPPsym((P)"sexpr-quoted?");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_quotedQ_3 = YPmet(FUNCODEREF(fun_sexpr_quotedQ_3),LITREF(lit_6),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YcompilerSsyntaxYsexpr_quotedQ);
  if (T18 != YPfalse) {
    T17 = VARREF(YcompilerSsyntaxYsexpr_quotedQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_quotedQ_3;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YcompilerSsyntaxYsexpr_quotedQ,T16);
  lit_7 = YPPsym((P)"sexpr-make-quote");
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_quote_4 = YPmet(FUNCODEREF(fun_sexpr_make_quote_4),LITREF(lit_7),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YcompilerSsyntaxYsexpr_make_quote);
  if (T23 != YPfalse) {
    T22 = VARREF(YcompilerSsyntaxYsexpr_make_quote);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_make_quote_4;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YcompilerSsyntaxYsexpr_make_quote,T21);
  lit_8 = YPPsym((P)"sexpr-text-of-quotation");
  lit_9 = YPPsym((P)"quot");
  T25 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_text_of_quotation_5 = YPmet(FUNCODEREF(fun_sexpr_text_of_quotation_5),LITREF(lit_8),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YcompilerSsyntaxYsexpr_text_of_quotation);
  if (T28 != YPfalse) {
    T27 = VARREF(YcompilerSsyntaxYsexpr_text_of_quotation);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_text_of_quotation_5;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YcompilerSsyntaxYsexpr_text_of_quotation,T26);
  lit_10 = YPPsym((P)"set");
  VARSET(YcompilerSsyntaxYDsexpr_set_tag,LITREF(lit_10));
  lit_11 = YPPsym((P)"sexpr-assignment?");
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_assignmentQ_6 = YPmet(FUNCODEREF(fun_sexpr_assignmentQ_6),LITREF(lit_11),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YcompilerSsyntaxYsexpr_assignmentQ);
  if (T33 != YPfalse) {
    T32 = VARREF(YcompilerSsyntaxYsexpr_assignmentQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_assignmentQ_6;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YcompilerSsyntaxYsexpr_assignmentQ,T31);
  lit_12 = YPPsym((P)"sexpr-assignment-variable");
  lit_13 = YPPsym((P)"assn");
  T35 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_assignment_variable_7 = YPmet(FUNCODEREF(fun_sexpr_assignment_variable_7),LITREF(lit_12),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YcompilerSsyntaxYsexpr_assignment_variable);
  if (T38 != YPfalse) {
    T37 = VARREF(YcompilerSsyntaxYsexpr_assignment_variable);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_sexpr_assignment_variable_7;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YcompilerSsyntaxYsexpr_assignment_variable,T36);
  lit_14 = YPPsym((P)"sexpr-assignment-value");
  T40 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_assignment_value_8 = YPmet(FUNCODEREF(fun_sexpr_assignment_value_8),LITREF(lit_14),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YcompilerSsyntaxYsexpr_assignment_value);
  if (T43 != YPfalse) {
    T42 = VARREF(YcompilerSsyntaxYsexpr_assignment_value);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_sexpr_assignment_value_8;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YcompilerSsyntaxYsexpr_assignment_value,T41);
  lit_15 = YPPsym((P)"sexpr-variable-name");
  T45 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_name_9 = YPmet(FUNCODEREF(fun_sexpr_variable_name_9),LITREF(lit_15),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YcompilerSsyntaxYsexpr_variable_name);
  if (T48 != YPfalse) {
    T47 = VARREF(YcompilerSsyntaxYsexpr_variable_name);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_variable_name_9;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YcompilerSsyntaxYsexpr_variable_name,T46);
  T50 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_name_10 = YPmet(FUNCODEREF(fun_sexpr_variable_name_10),LITREF(lit_15),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YcompilerSsyntaxYsexpr_variable_name);
  if (T53 != YPfalse) {
    T52 = VARREF(YcompilerSsyntaxYsexpr_variable_name);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_variable_name_10;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YcompilerSsyntaxYsexpr_variable_name,T51);
  lit_16 = YPPsym((P)"sexpr-variable-type");
  T55 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_type_11 = YPmet(FUNCODEREF(fun_sexpr_variable_type_11),LITREF(lit_16),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YcompilerSsyntaxYsexpr_variable_type);
  if (T58 != YPfalse) {
    T57 = VARREF(YcompilerSsyntaxYsexpr_variable_type);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_variable_type_11;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YcompilerSsyntaxYsexpr_variable_type,T56);
  lit_17 = YPPsym((P)"<any>");
  T60 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_type_12 = YPmet(FUNCODEREF(fun_sexpr_variable_type_12),LITREF(lit_16),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YcompilerSsyntaxYsexpr_variable_type);
  if (T63 != YPfalse) {
    T62 = VARREF(YcompilerSsyntaxYsexpr_variable_type);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_variable_type_12;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YcompilerSsyntaxYsexpr_variable_type,T61);
  lit_18 = YPPsym((P)"dv");
  VARSET(YcompilerSsyntaxYDsexpr_define_tag,LITREF(lit_18));
  lit_19 = YPPsym((P)"sexpr-definition?");
  T65 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_definitionQ_13 = YPmet(FUNCODEREF(fun_sexpr_definitionQ_13),LITREF(lit_19),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YcompilerSsyntaxYsexpr_definitionQ);
  if (T68 != YPfalse) {
    T67 = VARREF(YcompilerSsyntaxYsexpr_definitionQ);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_definitionQ_13;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YcompilerSsyntaxYsexpr_definitionQ,T66);
  lit_20 = YPPsym((P)"quasiquote");
  VARSET(YcompilerSsyntaxYDsexpr_quasiquote_tag,LITREF(lit_20));
  lit_21 = YPPsym((P)"sexpr-definition-variable");
  lit_22 = YPPsym((P)"defn");
  T70 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_definition_variable_14 = YPmet(FUNCODEREF(fun_sexpr_definition_variable_14),LITREF(lit_21),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YcompilerSsyntaxYsexpr_definition_variable);
  if (T73 != YPfalse) {
    T72 = VARREF(YcompilerSsyntaxYsexpr_definition_variable);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_definition_variable_14;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YcompilerSsyntaxYsexpr_definition_variable,T71);
  lit_23 = YPPsym((P)"sexpr-definition-value");
  T75 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_definition_value_15 = YPmet(FUNCODEREF(fun_sexpr_definition_value_15),LITREF(lit_23),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YcompilerSsyntaxYsexpr_definition_value);
  if (T78 != YPfalse) {
    T77 = VARREF(YcompilerSsyntaxYsexpr_definition_value);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_definition_value_15;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YcompilerSsyntaxYsexpr_definition_value,T76);
  lit_24 = YPPsym((P)"ds");
  VARSET(YcompilerSsyntaxYDsexpr_define_syntax_tag,LITREF(lit_24));
  lit_25 = YPPsym((P)"sexpr-syntax-definition?");
  T80 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_definitionQ_16 = YPmet(FUNCODEREF(fun_sexpr_syntax_definitionQ_16),LITREF(lit_25),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YcompilerSsyntaxYsexpr_syntax_definitionQ);
  if (T83 != YPfalse) {
    T82 = VARREF(YcompilerSsyntaxYsexpr_syntax_definitionQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_syntax_definitionQ_16;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YcompilerSsyntaxYsexpr_syntax_definitionQ,T81);
  lit_26 = YPPsym((P)"mac");
  VARSET(YcompilerSsyntaxYDsexpr_macro_tag,LITREF(lit_26));
  lit_27 = YPPsym((P)"sexpr-syntax-definition-variable");
  T85 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_variable_17 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_variable_17),LITREF(lit_27),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YcompilerSsyntaxYsexpr_syntax_definition_variable);
  if (T88 != YPfalse) {
    T87 = VARREF(YcompilerSsyntaxYsexpr_syntax_definition_variable);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_syntax_definition_variable_17;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YcompilerSsyntaxYsexpr_syntax_definition_variable,T86);
  lit_28 = YPPsym((P)"sexpr-syntax-definition-value");
  T90 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_value_18 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_value_18),LITREF(lit_28),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YcompilerSsyntaxYsexpr_syntax_definition_value);
  if (T93 != YPfalse) {
    T92 = VARREF(YcompilerSsyntaxYsexpr_syntax_definition_value);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_sexpr_syntax_definition_value_18;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YcompilerSsyntaxYsexpr_syntax_definition_value,T91);
  lit_29 = YPPsym((P)"df");
  VARSET(YcompilerSsyntaxYDsexpr_define_function_tag,LITREF(lit_29));
  lit_30 = YPPsym((P)"sexpr-function-definition?");
  T95 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_function_definitionQ_19 = YPmet(FUNCODEREF(fun_sexpr_function_definitionQ_19),LITREF(lit_30),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YcompilerSsyntaxYsexpr_function_definitionQ);
  if (T98 != YPfalse) {
    T97 = VARREF(YcompilerSsyntaxYsexpr_function_definitionQ);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sexpr_function_definitionQ_19;
  T96 = CALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YcompilerSsyntaxYsexpr_function_definitionQ,T96);
  lit_31 = YPPsym((P)"dm");
  VARSET(YcompilerSsyntaxYDsexpr_define_method_tag,LITREF(lit_31));
  lit_32 = YPPsym((P)"sexpr-method-definition?");
  T100 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_method_definitionQ_20 = YPmet(FUNCODEREF(fun_sexpr_method_definitionQ_20),LITREF(lit_32),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YcompilerSsyntaxYsexpr_method_definitionQ);
  if (T103 != YPfalse) {
    T102 = VARREF(YcompilerSsyntaxYsexpr_method_definitionQ);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sexpr_method_definitionQ_20;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YcompilerSsyntaxYsexpr_method_definitionQ,T101);
  lit_33 = YPPsym((P)"dg");
  VARSET(YcompilerSsyntaxYDsexpr_define_generic_tag,LITREF(lit_33));
  lit_34 = YPPsym((P)"sexpr-generic-definition?");
  T105 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_generic_definitionQ_21 = YPmet(FUNCODEREF(fun_sexpr_generic_definitionQ_21),LITREF(lit_34),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YcompilerSsyntaxYsexpr_generic_definitionQ);
  if (T108 != YPfalse) {
    T107 = VARREF(YcompilerSsyntaxYsexpr_generic_definitionQ);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sexpr_generic_definitionQ_21;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YcompilerSsyntaxYsexpr_generic_definitionQ,T106);
  lit_35 = YPPsym((P)"sexpr-function-definition-variable");
  T110 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_variable_22 = YPmet(FUNCODEREF(fun_sexpr_function_definition_variable_22),LITREF(lit_35),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YcompilerSsyntaxYsexpr_function_definition_variable);
  if (T113 != YPfalse) {
    T112 = VARREF(YcompilerSsyntaxYsexpr_function_definition_variable);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sexpr_function_definition_variable_22;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YcompilerSsyntaxYsexpr_function_definition_variable,T111);
  lit_36 = YPPsym((P)"sexpr-forward-primitive?");
  T115 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_forward_primitiveQ_23 = YPmet(FUNCODEREF(fun_sexpr_forward_primitiveQ_23),LITREF(lit_36),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YcompilerSsyntaxYsexpr_forward_primitiveQ);
  if (T118 != YPfalse) {
    T117 = VARREF(YcompilerSsyntaxYsexpr_forward_primitiveQ);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sexpr_forward_primitiveQ_23;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YcompilerSsyntaxYsexpr_forward_primitiveQ,T116);
  lit_37 = YPPsym((P)"sexpr-signature-parameters");
  lit_38 = YPPsym((P)"signature");
  lit_39 = YPPsym((P)"=>");
  T120 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_signature_parameters_24 = YPmet(FUNCODEREF(fun_sexpr_signature_parameters_24),LITREF(lit_37),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YcompilerSsyntaxYsexpr_signature_parameters);
  if (T123 != YPfalse) {
    T122 = VARREF(YcompilerSsyntaxYsexpr_signature_parameters);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_signature_parameters_24;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YcompilerSsyntaxYsexpr_signature_parameters,T121);
  lit_40 = YPPsym((P)"sexpr-signature-value");
  lit_41 = YPPsym((P)"tup");
  lit_42 = YPPsym((P)"<tup>");
  T125 = YPsig(YPPlist(1,LITREF(lit_38)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_signature_value_25 = YPmet(FUNCODEREF(fun_sexpr_signature_value_25),LITREF(lit_40),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YcompilerSsyntaxYsexpr_signature_value);
  if (T128 != YPfalse) {
    T127 = VARREF(YcompilerSsyntaxYsexpr_signature_value);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_signature_value_25;
  T126 = CALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YcompilerSsyntaxYsexpr_signature_value,T126);
  lit_43 = YPPsym((P)"as-signature");
  lit_44 = YPPsym((P)"sig");
  T130 = YPsig(YPPlist(1,LITREF(lit_44)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YcompilerSsyntaxYas_signature = YPmet(FUNCODEREF(YcompilerSsyntaxYas_signature),LITREF(lit_43),T130,ENVNUL,PNUL,YPfalse);
  T131 = YcompilerSsyntaxYas_signature;
  VARSET(YcompilerSsyntaxYas_signature,T131);
  lit_45 = YPPsym((P)"sexpr-function-signature");
  T132 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_signature_27 = YPmet(FUNCODEREF(fun_sexpr_function_signature_27),LITREF(lit_45),T132,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YcompilerSsyntaxYsexpr_function_signature);
  if (T135 != YPfalse) {
    T134 = VARREF(YcompilerSsyntaxYsexpr_function_signature);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_sexpr_function_signature_27;
  T133 = CALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YcompilerSsyntaxYsexpr_function_signature,T133);
  lit_46 = YPPsym((P)"sexpr-function-parameters");
  T137 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_parameters_28 = YPmet(FUNCODEREF(fun_sexpr_function_parameters_28),LITREF(lit_46),T137,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(YcompilerSsyntaxYsexpr_function_parameters);
  if (T140 != YPfalse) {
    T139 = VARREF(YcompilerSsyntaxYsexpr_function_parameters);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_sexpr_function_parameters_28;
  T138 = CALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YcompilerSsyntaxYsexpr_function_parameters,T138);
  lit_47 = YPPsym((P)"sexpr-function-value");
  T142 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_value_29 = YPmet(FUNCODEREF(fun_sexpr_function_value_29),LITREF(lit_47),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YcompilerSsyntaxYsexpr_function_value);
  if (T145 != YPfalse) {
    T144 = VARREF(YcompilerSsyntaxYsexpr_function_value);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_sexpr_function_value_29;
  T143 = CALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YcompilerSsyntaxYsexpr_function_value,T143);
  lit_48 = YPPsym((P)"sexpr-function-body");
  T147 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_body_30 = YPmet(FUNCODEREF(fun_sexpr_function_body_30),LITREF(lit_48),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YcompilerSsyntaxYsexpr_function_body);
  if (T150 != YPfalse) {
    T149 = VARREF(YcompilerSsyntaxYsexpr_function_body);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_sexpr_function_body_30;
  T148 = CALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YcompilerSsyntaxYsexpr_function_body,T148);
  lit_49 = YPPsym((P)"fun");
  VARSET(YcompilerSsyntaxYDsexpr_method_tag,LITREF(lit_49));
  lit_50 = YPPsym((P)"sexpr-function-definition-value");
  T152 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_value_31 = YPmet(FUNCODEREF(fun_sexpr_function_definition_value_31),LITREF(lit_50),T152,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(YcompilerSsyntaxYsexpr_function_definition_value);
  if (T155 != YPfalse) {
    T154 = VARREF(YcompilerSsyntaxYsexpr_function_definition_value);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_sexpr_function_definition_value_31;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YcompilerSsyntaxYsexpr_function_definition_value,T153);
  lit_51 = YPPsym((P)"sexpr-method?");
  T157 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_methodQ_32 = YPmet(FUNCODEREF(fun_sexpr_methodQ_32),LITREF(lit_51),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(YcompilerSsyntaxYsexpr_methodQ);
  if (T160 != YPfalse) {
    T159 = VARREF(YcompilerSsyntaxYsexpr_methodQ);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_sexpr_methodQ_32;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YcompilerSsyntaxYsexpr_methodQ,T158);
  lit_52 = YPPsym((P)"sexpr-method-signature");
  lit_53 = YPPsym((P)"method-exp");
  T162 = YPsig(YPPlist(1,LITREF(lit_53)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_signature_33 = YPmet(FUNCODEREF(fun_sexpr_method_signature_33),LITREF(lit_52),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YcompilerSsyntaxYsexpr_method_signature);
  if (T165 != YPfalse) {
    T164 = VARREF(YcompilerSsyntaxYsexpr_method_signature);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_sexpr_method_signature_33;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YcompilerSsyntaxYsexpr_method_signature,T163);
  lit_54 = YPPsym((P)"sexpr-method-parameters");
  T167 = YPsig(YPPlist(1,LITREF(lit_53)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_parameters_34 = YPmet(FUNCODEREF(fun_sexpr_method_parameters_34),LITREF(lit_54),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YcompilerSsyntaxYsexpr_method_parameters);
  if (T170 != YPfalse) {
    T169 = VARREF(YcompilerSsyntaxYsexpr_method_parameters);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_sexpr_method_parameters_34;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YcompilerSsyntaxYsexpr_method_parameters,T168);
  lit_55 = YPPsym((P)"sexpr-method-value");
  T172 = YPsig(YPPlist(1,LITREF(lit_53)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_method_value_35 = YPmet(FUNCODEREF(fun_sexpr_method_value_35),LITREF(lit_55),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YcompilerSsyntaxYsexpr_method_value);
  if (T175 != YPfalse) {
    T174 = VARREF(YcompilerSsyntaxYsexpr_method_value);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_sexpr_method_value_35;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YcompilerSsyntaxYsexpr_method_value,T173);
  lit_56 = YPPsym((P)"sexpr-method-body");
  T177 = YPsig(YPPlist(1,LITREF(lit_53)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_body_36 = YPmet(FUNCODEREF(fun_sexpr_method_body_36),LITREF(lit_56),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YcompilerSsyntaxYsexpr_method_body);
  if (T180 != YPfalse) {
    T179 = VARREF(YcompilerSsyntaxYsexpr_method_body);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_sexpr_method_body_36;
  T178 = CALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YcompilerSsyntaxYsexpr_method_body,T178);
  lit_57 = YPPsym((P)"sexpr-make-anonymous-method");
  lit_58 = YPPsym((P)"parameters");
  lit_59 = YPPsym((P)"body");
  T182 = YPsig(YPPlist(2,LITREF(lit_58),LITREF(lit_59)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_anonymous_method_37 = YPmet(FUNCODEREF(fun_sexpr_make_anonymous_method_37),LITREF(lit_57),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YcompilerSsyntaxYsexpr_make_anonymous_method);
  if (T185 != YPfalse) {
    T184 = VARREF(YcompilerSsyntaxYsexpr_make_anonymous_method);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_sexpr_make_anonymous_method_37;
  T183 = CALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YcompilerSsyntaxYsexpr_make_anonymous_method,T183);
  lit_60 = YPPsym((P)"sexpr-make-method");
  lit_61 = YPPsym((P)"name");
  T187 = YPsig(YPPlist(3,LITREF(lit_61),LITREF(lit_58),LITREF(lit_59)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_method_38 = YPmet(FUNCODEREF(fun_sexpr_make_method_38),LITREF(lit_60),T187,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YcompilerSsyntaxYsexpr_make_method);
  if (T190 != YPfalse) {
    T189 = VARREF(YcompilerSsyntaxYsexpr_make_method);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_sexpr_make_method_38;
  T188 = CALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YcompilerSsyntaxYsexpr_make_method,T188);
  lit_62 = YPPsym((P)"if");
  VARSET(YcompilerSsyntaxYDsexpr_if_tag,LITREF(lit_62));
  lit_63 = YPPsym((P)"sexpr-if?");
  T192 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_ifQ_39 = YPmet(FUNCODEREF(fun_sexpr_ifQ_39),LITREF(lit_63),T192,ENVNUL,PNUL,YPfalse);
  T195 = BOUNDP(YcompilerSsyntaxYsexpr_ifQ);
  if (T195 != YPfalse) {
    T194 = VARREF(YcompilerSsyntaxYsexpr_ifQ);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_sexpr_ifQ_39;
  T193 = CALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YcompilerSsyntaxYsexpr_ifQ,T193);
  lit_64 = YPPsym((P)"sexpr-if-test");
  T197 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_test_40 = YPmet(FUNCODEREF(fun_sexpr_if_test_40),LITREF(lit_64),T197,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YcompilerSsyntaxYsexpr_if_test);
  if (T200 != YPfalse) {
    T199 = VARREF(YcompilerSsyntaxYsexpr_if_test);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_sexpr_if_test_40;
  T198 = CALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YcompilerSsyntaxYsexpr_if_test,T198);
  lit_65 = YPPsym((P)"sexpr-if-then");
  T202 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_then_41 = YPmet(FUNCODEREF(fun_sexpr_if_then_41),LITREF(lit_65),T202,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YcompilerSsyntaxYsexpr_if_then);
  if (T205 != YPfalse) {
    T204 = VARREF(YcompilerSsyntaxYsexpr_if_then);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_sexpr_if_then_41;
  T203 = CALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YcompilerSsyntaxYsexpr_if_then,T203);
  lit_66 = YPPsym((P)"sexpr-if-else");
  T207 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_else_42 = YPmet(FUNCODEREF(fun_sexpr_if_else_42),LITREF(lit_66),T207,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(YcompilerSsyntaxYsexpr_if_else);
  if (T210 != YPfalse) {
    T209 = VARREF(YcompilerSsyntaxYsexpr_if_else);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_sexpr_if_else_42;
  T208 = CALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YcompilerSsyntaxYsexpr_if_else,T208);
  lit_67 = YPPsym((P)"sexpr-make-if");
  lit_68 = YPPsym((P)"test");
  lit_69 = YPPsym((P)"then");
  lit_70 = YPPsym((P)"else");
  T212 = YPsig(YPPlist(3,LITREF(lit_68),LITREF(lit_69),LITREF(lit_70)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_if_43 = YPmet(FUNCODEREF(fun_sexpr_make_if_43),LITREF(lit_67),T212,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(YcompilerSsyntaxYsexpr_make_if);
  if (T215 != YPfalse) {
    T214 = VARREF(YcompilerSsyntaxYsexpr_make_if);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_sexpr_make_if_43;
  T213 = CALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YcompilerSsyntaxYsexpr_make_if,T213);
  lit_71 = YPPsym((P)"esc");
  VARSET(YcompilerSsyntaxYDsexpr_bind_exit_tag,LITREF(lit_71));
  lit_72 = YPPsym((P)"sexpr-block?");
  T217 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_blockQ_44 = YPmet(FUNCODEREF(fun_sexpr_blockQ_44),LITREF(lit_72),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(YcompilerSsyntaxYsexpr_blockQ);
  if (T220 != YPfalse) {
    T219 = VARREF(YcompilerSsyntaxYsexpr_blockQ);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_sexpr_blockQ_44;
  T218 = CALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YcompilerSsyntaxYsexpr_blockQ,T218);
  lit_73 = YPPsym((P)"sexpr-block-name");
  T224 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T223 = fun_sexpr_block_name_45 = YPmet(FUNCODEREF(fun_sexpr_block_name_45),LITREF(lit_73),T224,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(YcompilerSsyntaxYsexpr_block_name);
  if (T228 != YPfalse) {
    T227 = VARREF(YcompilerSsyntaxYsexpr_block_name);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_sexpr_block_name_45;
  T226 = CALL2(1,VARREF(YPdefine_method),T227,T229);
  T225 = VARSET(YcompilerSsyntaxYsexpr_block_name,T226);
  T222 = T225;
  return T222;
}

P YcompilerSsyntaxY___main_1___() {
  P T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260;
  P T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244;
  P T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228;
  P T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212;
  P T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196;
  P T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180;
  P T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164;
  P T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148;
  P T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132;
  P T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116;
  P T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100;
  P T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84;
  P T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68;
  P T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
loop:
  lit_74 = YPPsym((P)"sexpr-block-body");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_block_body_46 = YPmet(FUNCODEREF(fun_sexpr_block_body_46),LITREF(lit_74),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YcompilerSsyntaxYsexpr_block_body);
  if (T3 != YPfalse) {
    T2 = VARREF(YcompilerSsyntaxYsexpr_block_body);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_block_body_46;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YcompilerSsyntaxYsexpr_block_body,T1);
  lit_75 = YPPsym((P)"fin");
  VARSET(YcompilerSsyntaxYDsexpr_unwind_protect_tag,LITREF(lit_75));
  lit_76 = YPPsym((P)"sexpr-unwind-protect?");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unwind_protectQ_47 = YPmet(FUNCODEREF(fun_sexpr_unwind_protectQ_47),LITREF(lit_76),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YcompilerSsyntaxYsexpr_unwind_protectQ);
  if (T8 != YPfalse) {
    T7 = VARREF(YcompilerSsyntaxYsexpr_unwind_protectQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_unwind_protectQ_47;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YcompilerSsyntaxYsexpr_unwind_protectQ,T6);
  lit_77 = YPPsym((P)"sexpr-unwind-protect-protected-form");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_protected_form_48 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_protected_form_48),LITREF(lit_77),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YcompilerSsyntaxYsexpr_unwind_protect_protected_form);
  if (T13 != YPfalse) {
    T12 = VARREF(YcompilerSsyntaxYsexpr_unwind_protect_protected_form);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_unwind_protect_protected_form_48;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YcompilerSsyntaxYsexpr_unwind_protect_protected_form,T11);
  lit_78 = YPPsym((P)"sexpr-unwind-protect-cleanup-forms");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_cleanup_forms_49 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_cleanup_forms_49),LITREF(lit_78),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YcompilerSsyntaxYsexpr_unwind_protect_cleanup_forms);
  if (T18 != YPfalse) {
    T17 = VARREF(YcompilerSsyntaxYsexpr_unwind_protect_cleanup_forms);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_unwind_protect_cleanup_forms_49;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YcompilerSsyntaxYsexpr_unwind_protect_cleanup_forms,T16);
  lit_79 = YPPsym((P)"try");
  VARSET(YcompilerSsyntaxYDsexpr_monitor_tag,LITREF(lit_79));
  lit_80 = YPPsym((P)"sexpr-monitor?");
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_monitorQ_50 = YPmet(FUNCODEREF(fun_sexpr_monitorQ_50),LITREF(lit_80),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YcompilerSsyntaxYsexpr_monitorQ);
  if (T23 != YPfalse) {
    T22 = VARREF(YcompilerSsyntaxYsexpr_monitorQ);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_monitorQ_50;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YcompilerSsyntaxYsexpr_monitorQ,T21);
  lit_81 = YPPsym((P)"sexpr-monitor-expand");
  lit_82 = YPPsym((P)"return");
  lit_83 = YPPsym((P)"x-1374");
  lit_84 = YPPsym((P)"msg");
  lit_85 = YPPsym((P)"args");
  lit_86 = YPsb((P)"Malformed TRY expression: ~=");
  lit_87 = YPsb((P)"Match Pattern Failure");
  lit_88 = YPPsym((P)"type");
  T27 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_85)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1374_51 = YPmet(FUNCODEREF(fun_x_1374_51),LITREF(lit_83),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_expand_53 = YPmet(FUNCODEREF(fun_sexpr_monitor_expand_53),LITREF(lit_81),T25,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YcompilerSsyntaxYsexpr_monitor_expand);
  if (T30 != YPfalse) {
    T29 = VARREF(YcompilerSsyntaxYsexpr_monitor_expand);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_sexpr_monitor_expand_53;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YcompilerSsyntaxYsexpr_monitor_expand,T28);
  lit_89 = YPPsym((P)"find-option");
  lit_90 = YPPsym((P)"options");
  lit_91 = YPPsym((P)"option");
  lit_92 = YPPsym((P)"default");
  T32 = YPsig(YPPlist(3,LITREF(lit_90),LITREF(lit_91),LITREF(lit_92)),YPPlist(3,VARREF(YLlstG),VARREF(YLsymG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YcompilerSsyntaxYfind_option = YPmet(FUNCODEREF(YcompilerSsyntaxYfind_option),LITREF(lit_89),T32,ENVNUL,PNUL,YPfalse);
  T33 = YcompilerSsyntaxYfind_option;
  VARSET(YcompilerSsyntaxYfind_option,T33);
  lit_93 = YPPsym((P)"sexpr-monitor-type");
  lit_94 = YPPlist(1,YPPsym((P)"<condition>"));
  lit_95 = YPPsym((P)"x-1376");
  lit_96 = YPsb((P)"Malformed TRY condition type: %=");
  T36 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_85)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1376_55 = YPmet(FUNCODEREF(fun_x_1376_55),LITREF(lit_95),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(YPPlist(1,LITREF(lit_90)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_type_57 = YPmet(FUNCODEREF(fun_sexpr_monitor_type_57),LITREF(lit_93),T34,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YcompilerSsyntaxYsexpr_monitor_type);
  if (T39 != YPfalse) {
    T38 = VARREF(YcompilerSsyntaxYsexpr_monitor_type);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_sexpr_monitor_type_57;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YcompilerSsyntaxYsexpr_monitor_type,T37);
  lit_97 = YPPsym((P)"sexpr-monitor-info");
  lit_98 = YPPsym((P)"info");
  lit_99 = YPPsym((P)"description");
  lit_100 = YPsb((P)"TRY may only have one of INFO or DESCRIPTION: %=");
  lit_101 = YPPsym((P)"x-1378");
  lit_102 = YPsb((P)"Malformed TRY info expression: %=");
  lit_103 = YPPsym((P)"x-1380");
  lit_104 = YPsb((P)"Malformed TRY description: %=");
  lit_105 = YPPsym((P)"new");
  lit_106 = YPPsym((P)"<simple-handler-info>");
  lit_107 = YPPsym((P)"handler-info-message");
  lit_108 = YPPsym((P)"handler-info-arguments");
  lit_109 = YPPsym((P)"lst");
  lit_110 = YPPsym((P)"$default-handler-info");
  T45 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_85)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1378_58 = YPmet(FUNCODEREF(fun_x_1378_58),LITREF(lit_101),T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_85)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1380_60 = YPmet(FUNCODEREF(fun_x_1380_60),LITREF(lit_103),T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(YPPlist(1,LITREF(lit_90)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_info_62 = YPmet(FUNCODEREF(fun_sexpr_monitor_info_62),LITREF(lit_97),T41,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YcompilerSsyntaxYsexpr_monitor_info);
  if (T48 != YPfalse) {
    T47 = VARREF(YcompilerSsyntaxYsexpr_monitor_info);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_monitor_info_62;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YcompilerSsyntaxYsexpr_monitor_info,T46);
  lit_111 = YPPsym((P)"sexpr-monitor-test");
  lit_112 = YPPlist(1,YPtrue);
  T50 = YPsig(YPPlist(1,LITREF(lit_90)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_test_63 = YPmet(FUNCODEREF(fun_sexpr_monitor_test_63),LITREF(lit_111),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YcompilerSsyntaxYsexpr_monitor_test);
  if (T53 != YPfalse) {
    T52 = VARREF(YcompilerSsyntaxYsexpr_monitor_test);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_monitor_test_63;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YcompilerSsyntaxYsexpr_monitor_test,T51);
  lit_113 = YPPsym((P)"sexpr-monitor-body");
  T55 = YPsig(YPPlist(1,LITREF(lit_59)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_body_64 = YPmet(FUNCODEREF(fun_sexpr_monitor_body_64),LITREF(lit_113),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YcompilerSsyntaxYsexpr_monitor_body);
  if (T58 != YPfalse) {
    T57 = VARREF(YcompilerSsyntaxYsexpr_monitor_body);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_monitor_body_64;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YcompilerSsyntaxYsexpr_monitor_body,T56);
  lit_114 = YPPsym((P)"seq");
  VARSET(YcompilerSsyntaxYDsexpr_begin_tag,LITREF(lit_114));
  lit_115 = YPPsym((P)"sexpr-begin?");
  T60 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_beginQ_65 = YPmet(FUNCODEREF(fun_sexpr_beginQ_65),LITREF(lit_115),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YcompilerSsyntaxYsexpr_beginQ);
  if (T63 != YPfalse) {
    T62 = VARREF(YcompilerSsyntaxYsexpr_beginQ);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_beginQ_65;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YcompilerSsyntaxYsexpr_beginQ,T61);
  lit_116 = YPPsym((P)"sexpr-begin-actions");
  lit_117 = YPPsym((P)"begin-exp");
  T65 = YPsig(YPPlist(1,LITREF(lit_117)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_begin_actions_66 = YPmet(FUNCODEREF(fun_sexpr_begin_actions_66),LITREF(lit_116),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YcompilerSsyntaxYsexpr_begin_actions);
  if (T68 != YPfalse) {
    T67 = VARREF(YcompilerSsyntaxYsexpr_begin_actions);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_begin_actions_66;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YcompilerSsyntaxYsexpr_begin_actions,T66);
  lit_118 = YPPsym((P)"sexpr-last-exp?");
  T70 = YPsig(YPPlist(1,LITREF(lit_114)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_last_expQ_67 = YPmet(FUNCODEREF(fun_sexpr_last_expQ_67),LITREF(lit_118),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YcompilerSsyntaxYsexpr_last_expQ);
  if (T73 != YPfalse) {
    T72 = VARREF(YcompilerSsyntaxYsexpr_last_expQ);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_last_expQ_67;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YcompilerSsyntaxYsexpr_last_expQ,T71);
  lit_119 = YPPsym((P)"sexpr-first-exp");
  T75 = YPsig(YPPlist(1,LITREF(lit_114)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_exp_68 = YPmet(FUNCODEREF(fun_sexpr_first_exp_68),LITREF(lit_119),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YcompilerSsyntaxYsexpr_first_exp);
  if (T78 != YPfalse) {
    T77 = VARREF(YcompilerSsyntaxYsexpr_first_exp);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_first_exp_68;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YcompilerSsyntaxYsexpr_first_exp,T76);
  lit_120 = YPPsym((P)"sexpr-rest-exps");
  T80 = YPsig(YPPlist(1,LITREF(lit_114)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_exps_69 = YPmet(FUNCODEREF(fun_sexpr_rest_exps_69),LITREF(lit_120),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YcompilerSsyntaxYsexpr_rest_exps);
  if (T83 != YPfalse) {
    T82 = VARREF(YcompilerSsyntaxYsexpr_rest_exps);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_rest_exps_69;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YcompilerSsyntaxYsexpr_rest_exps,T81);
  lit_121 = YPPsym((P)"sexpr-sequence->begin");
  T85 = YPsig(YPPlist(1,LITREF(lit_114)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_sequence_Gbegin_70 = YPmet(FUNCODEREF(fun_sexpr_sequence_Gbegin_70),LITREF(lit_121),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YcompilerSsyntaxYsexpr_sequence_Gbegin);
  if (T88 != YPfalse) {
    T87 = VARREF(YcompilerSsyntaxYsexpr_sequence_Gbegin);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_sequence_Gbegin_70;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YcompilerSsyntaxYsexpr_sequence_Gbegin,T86);
  lit_122 = YPPsym((P)"sexpr-make-begin");
  T90 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_begin_71 = YPmet(FUNCODEREF(fun_sexpr_make_begin_71),LITREF(lit_122),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YcompilerSsyntaxYsexpr_make_begin);
  if (T93 != YPfalse) {
    T92 = VARREF(YcompilerSsyntaxYsexpr_make_begin);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_sexpr_make_begin_71;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YcompilerSsyntaxYsexpr_make_begin,T91);
  lit_123 = YPPsym((P)"sexpr-application?");
  T95 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_applicationQ_72 = YPmet(FUNCODEREF(fun_sexpr_applicationQ_72),LITREF(lit_123),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YcompilerSsyntaxYsexpr_applicationQ);
  if (T98 != YPfalse) {
    T97 = VARREF(YcompilerSsyntaxYsexpr_applicationQ);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sexpr_applicationQ_72;
  T96 = CALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YcompilerSsyntaxYsexpr_applicationQ,T96);
  lit_124 = YPPsym((P)"sexpr-operator");
  lit_125 = YPPsym((P)"app");
  T100 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_operator_73 = YPmet(FUNCODEREF(fun_sexpr_operator_73),LITREF(lit_124),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YcompilerSsyntaxYsexpr_operator);
  if (T103 != YPfalse) {
    T102 = VARREF(YcompilerSsyntaxYsexpr_operator);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sexpr_operator_73;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YcompilerSsyntaxYsexpr_operator,T101);
  lit_126 = YPPsym((P)"sexpr-operands");
  T105 = YPsig(YPPlist(1,LITREF(lit_125)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_operands_74 = YPmet(FUNCODEREF(fun_sexpr_operands_74),LITREF(lit_126),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YcompilerSsyntaxYsexpr_operands);
  if (T108 != YPfalse) {
    T107 = VARREF(YcompilerSsyntaxYsexpr_operands);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sexpr_operands_74;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YcompilerSsyntaxYsexpr_operands,T106);
  lit_127 = YPPsym((P)"sexpr-no-operands?");
  T110 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_no_operandsQ_75 = YPmet(FUNCODEREF(fun_sexpr_no_operandsQ_75),LITREF(lit_127),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YcompilerSsyntaxYsexpr_no_operandsQ);
  if (T113 != YPfalse) {
    T112 = VARREF(YcompilerSsyntaxYsexpr_no_operandsQ);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sexpr_no_operandsQ_75;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YcompilerSsyntaxYsexpr_no_operandsQ,T111);
  lit_128 = YPPsym((P)"sexpr-first-operand");
  T115 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_operand_76 = YPmet(FUNCODEREF(fun_sexpr_first_operand_76),LITREF(lit_128),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YcompilerSsyntaxYsexpr_first_operand);
  if (T118 != YPfalse) {
    T117 = VARREF(YcompilerSsyntaxYsexpr_first_operand);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sexpr_first_operand_76;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YcompilerSsyntaxYsexpr_first_operand,T116);
  lit_129 = YPPsym((P)"sexpr-rest-operands");
  T120 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_operands_77 = YPmet(FUNCODEREF(fun_sexpr_rest_operands_77),LITREF(lit_129),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YcompilerSsyntaxYsexpr_rest_operands);
  if (T123 != YPfalse) {
    T122 = VARREF(YcompilerSsyntaxYsexpr_rest_operands);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_rest_operands_77;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YcompilerSsyntaxYsexpr_rest_operands,T121);
  lit_130 = YPPsym((P)"sexpr-make-application");
  lit_131 = YPPsym((P)"op");
  lit_132 = YPPsym((P)"operands");
  T125 = YPsig(YPPlist(2,LITREF(lit_131),LITREF(lit_132)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_application_78 = YPmet(FUNCODEREF(fun_sexpr_make_application_78),LITREF(lit_130),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YcompilerSsyntaxYsexpr_make_application);
  if (T128 != YPfalse) {
    T127 = VARREF(YcompilerSsyntaxYsexpr_make_application);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_make_application_78;
  T126 = CALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YcompilerSsyntaxYsexpr_make_application,T126);
  VARSET(YcompilerSsyntaxYTunique_name_counterT,YPint((P)0));
  lit_133 = YPPsym((P)"sexpr-new-unique-name-counter!");
  T130 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  fun_sexpr_new_unique_name_counterX_79 = YPmet(FUNCODEREF(fun_sexpr_new_unique_name_counterX_79),LITREF(lit_133),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YcompilerSsyntaxYsexpr_new_unique_name_counterX);
  if (T133 != YPfalse) {
    T132 = VARREF(YcompilerSsyntaxYsexpr_new_unique_name_counterX);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_sexpr_new_unique_name_counterX_79;
  T131 = CALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YcompilerSsyntaxYsexpr_new_unique_name_counterX,T131);
  VARSET(YcompilerSsyntaxYLnameG,VARREF(YLanyG));
  lit_134 = YPPsym((P)"sexpr-unique-name");
  lit_135 = YPPsym((P)"prefix");
  T135 = YPsig(YPPlist(1,LITREF(lit_135)),YPPlist(1,VARREF(YcompilerSsyntaxYLnameG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_unique_name_80 = YPmet(FUNCODEREF(fun_sexpr_unique_name_80),LITREF(lit_134),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YcompilerSsyntaxYsexpr_unique_name);
  if (T138 != YPfalse) {
    T137 = VARREF(YcompilerSsyntaxYsexpr_unique_name);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_sexpr_unique_name_80;
  T136 = CALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YcompilerSsyntaxYsexpr_unique_name,T136);
  lit_136 = YPPsym((P)"def");
  VARSET(YcompilerSsyntaxYDsexpr_def_tag,LITREF(lit_136));
  lit_137 = YPPsym((P)"sexpr-def?");
  T140 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_defQ_81 = YPmet(FUNCODEREF(fun_sexpr_defQ_81),LITREF(lit_137),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YcompilerSsyntaxYsexpr_defQ);
  if (T143 != YPfalse) {
    T142 = VARREF(YcompilerSsyntaxYsexpr_defQ);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_sexpr_defQ_81;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YcompilerSsyntaxYsexpr_defQ,T141);
  lit_138 = YPPsym((P)"sexpr-def-variable");
  T145 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_variable_82 = YPmet(FUNCODEREF(fun_sexpr_def_variable_82),LITREF(lit_138),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YcompilerSsyntaxYsexpr_def_variable);
  if (T148 != YPfalse) {
    T147 = VARREF(YcompilerSsyntaxYsexpr_def_variable);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_sexpr_def_variable_82;
  T146 = CALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YcompilerSsyntaxYsexpr_def_variable,T146);
  lit_139 = YPPsym((P)"sexpr-def-value");
  T150 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_value_83 = YPmet(FUNCODEREF(fun_sexpr_def_value_83),LITREF(lit_139),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YcompilerSsyntaxYsexpr_def_value);
  if (T153 != YPfalse) {
    T152 = VARREF(YcompilerSsyntaxYsexpr_def_value);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_sexpr_def_value_83;
  T151 = CALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YcompilerSsyntaxYsexpr_def_value,T151);
  lit_140 = YPPsym((P)"let");
  VARSET(YcompilerSsyntaxYDsexpr_let_tag,LITREF(lit_140));
  lit_141 = YPPsym((P)"sexpr-let?");
  T155 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_letQ_84 = YPmet(FUNCODEREF(fun_sexpr_letQ_84),LITREF(lit_141),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YcompilerSsyntaxYsexpr_letQ);
  if (T158 != YPfalse) {
    T157 = VARREF(YcompilerSsyntaxYsexpr_letQ);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_sexpr_letQ_84;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YcompilerSsyntaxYsexpr_letQ,T156);
  lit_142 = YPPsym((P)"sexpr-let-bound-variables");
  lit_143 = YPPsym((P)"let-exp");
  lit_144 = YPPsym((P)"x");
  T161 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_143)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_bound_variables_86 = YPmet(FUNCODEREF(fun_sexpr_let_bound_variables_86),LITREF(lit_142),T160,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(YcompilerSsyntaxYsexpr_let_bound_variables);
  if (T164 != YPfalse) {
    T163 = VARREF(YcompilerSsyntaxYsexpr_let_bound_variables);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_sexpr_let_bound_variables_86;
  T162 = CALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YcompilerSsyntaxYsexpr_let_bound_variables,T162);
  lit_145 = YPPsym((P)"sexpr-let-values");
  T167 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(1,LITREF(lit_143)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_values_88 = YPmet(FUNCODEREF(fun_sexpr_let_values_88),LITREF(lit_145),T166,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YcompilerSsyntaxYsexpr_let_values);
  if (T170 != YPfalse) {
    T169 = VARREF(YcompilerSsyntaxYsexpr_let_values);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_sexpr_let_values_88;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YcompilerSsyntaxYsexpr_let_values,T168);
  lit_146 = YPPsym((P)"sexpr-let-body");
  T172 = YPsig(YPPlist(1,LITREF(lit_143)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_body_89 = YPmet(FUNCODEREF(fun_sexpr_let_body_89),LITREF(lit_146),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YcompilerSsyntaxYsexpr_let_body);
  if (T175 != YPfalse) {
    T174 = VARREF(YcompilerSsyntaxYsexpr_let_body);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_sexpr_let_body_89;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YcompilerSsyntaxYsexpr_let_body,T173);
  lit_147 = YPPsym((P)"sexpr-let-names+values");
  lit_148 = YPPsym((P)"names");
  lit_149 = YPPsym((P)"vals");
  lit_150 = YPPsym((P)"loop");
  lit_151 = YPPsym((P)"rnames");
  lit_152 = YPPsym((P)"rvalues");
  lit_153 = YPsb((P)"tup");
  lit_154 = YPPsym((P)"inner");
  lit_155 = YPPsym((P)"rtnames");
  lit_156 = YPPsym((P)"rtvalues");
  lit_157 = YPPsym((P)"index");
  lit_158 = YPPsym((P)"tnames");
  lit_159 = YPPsym((P)"...");
  lit_160 = YPPsym((P)"<lst>");
  lit_161 = YPPsym((P)"sub");
  lit_162 = YPPsym((P)"len");
  lit_163 = YPPsym((P)"elt");
  T179 = YPsig(YPPlist(4,LITREF(lit_155),LITREF(lit_156),LITREF(lit_157),LITREF(lit_158)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_inner_90 = YPmet(FUNCODEREF(fun_inner_90),LITREF(lit_154),T179,ENVNUL,PNUL,YPfalse);
  T178 = YPsig(YPPlist(4,LITREF(lit_151),LITREF(lit_152),LITREF(lit_148),LITREF(lit_149)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_91 = YPmet(FUNCODEREF(fun_loop_91),LITREF(lit_150),T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_149)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_sexpr_let_namesAvalues_92 = YPmet(FUNCODEREF(fun_sexpr_let_namesAvalues_92),LITREF(lit_147),T177,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(YcompilerSsyntaxYsexpr_let_namesAvalues);
  if (T182 != YPfalse) {
    T181 = VARREF(YcompilerSsyntaxYsexpr_let_namesAvalues);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_sexpr_let_namesAvalues_92;
  T180 = CALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YcompilerSsyntaxYsexpr_let_namesAvalues,T180);
  lit_164 = YPPsym((P)"sexpr-let->combination");
  lit_165 = YPPsym((P)"col");
  lit_166 = YPPsym((P)"values");
  T185 = YPsig(YPPlist(2,LITREF(lit_148),LITREF(lit_166)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_col_93 = YPmet(FUNCODEREF(fun_col_93),LITREF(lit_165),T185,ENVNUL,PNUL,YPfalse);
  T184 = YPsig(YPPlist(1,LITREF(lit_143)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_Gcombination_94 = YPmet(FUNCODEREF(fun_sexpr_let_Gcombination_94),LITREF(lit_164),T184,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YcompilerSsyntaxYsexpr_let_Gcombination);
  if (T188 != YPfalse) {
    T187 = VARREF(YcompilerSsyntaxYsexpr_let_Gcombination);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_sexpr_let_Gcombination_94;
  T186 = CALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YcompilerSsyntaxYsexpr_let_Gcombination,T186);
  lit_167 = YPPsym((P)"loc");
  VARSET(YcompilerSsyntaxYDsexpr_locals_tag,LITREF(lit_167));
  lit_168 = YPPsym((P)"sexpr-loc?");
  T190 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_locQ_95 = YPmet(FUNCODEREF(fun_sexpr_locQ_95),LITREF(lit_168),T190,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YcompilerSsyntaxYsexpr_locQ);
  if (T193 != YPfalse) {
    T192 = VARREF(YcompilerSsyntaxYsexpr_locQ);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_sexpr_locQ_95;
  T191 = CALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YcompilerSsyntaxYsexpr_locQ,T191);
  lit_169 = YPPsym((P)"sexpr-loc-bound-names");
  lit_170 = YPPsym((P)"loc-exp");
  T195 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_names_96 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_names_96),LITREF(lit_169),T195,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(YcompilerSsyntaxYsexpr_loc_bound_names);
  if (T198 != YPfalse) {
    T197 = VARREF(YcompilerSsyntaxYsexpr_loc_bound_names);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_sexpr_loc_bound_names_96;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(YcompilerSsyntaxYsexpr_loc_bound_names,T196);
  lit_171 = YPPsym((P)"sexpr-loc-bound-signatures");
  T201 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T201,ENVNUL,PNUL,YPfalse);
  T200 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_signatures_98 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_signatures_98),LITREF(lit_171),T200,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YcompilerSsyntaxYsexpr_loc_bound_signatures);
  if (T204 != YPfalse) {
    T203 = VARREF(YcompilerSsyntaxYsexpr_loc_bound_signatures);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_sexpr_loc_bound_signatures_98;
  T202 = CALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YcompilerSsyntaxYsexpr_loc_bound_signatures,T202);
  lit_172 = YPPsym((P)"sexpr-loc-bound-bodies");
  T206 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_bodies_99 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_bodies_99),LITREF(lit_172),T206,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(YcompilerSsyntaxYsexpr_loc_bound_bodies);
  if (T209 != YPfalse) {
    T208 = VARREF(YcompilerSsyntaxYsexpr_loc_bound_bodies);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_sexpr_loc_bound_bodies_99;
  T207 = CALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YcompilerSsyntaxYsexpr_loc_bound_bodies,T207);
  lit_173 = YPPsym((P)"sexpr-loc-raw-body");
  T211 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_raw_body_100 = YPmet(FUNCODEREF(fun_sexpr_loc_raw_body_100),LITREF(lit_173),T211,ENVNUL,PNUL,YPfalse);
  T214 = BOUNDP(YcompilerSsyntaxYsexpr_loc_raw_body);
  if (T214 != YPfalse) {
    T213 = VARREF(YcompilerSsyntaxYsexpr_loc_raw_body);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_sexpr_loc_raw_body_100;
  T212 = CALL2(1,VARREF(YPdefine_method),T213,T215);
  VARSET(YcompilerSsyntaxYsexpr_loc_raw_body,T212);
  lit_174 = YPPsym((P)"sexpr-loc-body");
  T216 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_loc_body_101 = YPmet(FUNCODEREF(fun_sexpr_loc_body_101),LITREF(lit_174),T216,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(YcompilerSsyntaxYsexpr_loc_body);
  if (T219 != YPfalse) {
    T218 = VARREF(YcompilerSsyntaxYsexpr_loc_body);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_sexpr_loc_body_101;
  T217 = CALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(YcompilerSsyntaxYsexpr_loc_body,T217);
  lit_175 = YPPsym((P)"rep");
  VARSET(YcompilerSsyntaxYDsexpr_iterate_tag,LITREF(lit_175));
  lit_176 = YPPsym((P)"sexpr-iterate?");
  T221 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_iterateQ_102 = YPmet(FUNCODEREF(fun_sexpr_iterateQ_102),LITREF(lit_176),T221,ENVNUL,PNUL,YPfalse);
  T224 = BOUNDP(YcompilerSsyntaxYsexpr_iterateQ);
  if (T224 != YPfalse) {
    T223 = VARREF(YcompilerSsyntaxYsexpr_iterateQ);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_sexpr_iterateQ_102;
  T222 = CALL2(1,VARREF(YPdefine_method),T223,T225);
  VARSET(YcompilerSsyntaxYsexpr_iterateQ,T222);
  lit_177 = YPPsym((P)"sexpr-iterate-name");
  lit_178 = YPPsym((P)"rep-exp");
  T226 = YPsig(YPPlist(1,LITREF(lit_178)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_iterate_name_103 = YPmet(FUNCODEREF(fun_sexpr_iterate_name_103),LITREF(lit_177),T226,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(YcompilerSsyntaxYsexpr_iterate_name);
  if (T229 != YPfalse) {
    T228 = VARREF(YcompilerSsyntaxYsexpr_iterate_name);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_sexpr_iterate_name_103;
  T227 = CALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(YcompilerSsyntaxYsexpr_iterate_name,T227);
  VARSET(YcompilerSsyntaxYDsexpr_values_tag,LITREF(lit_39));
  lit_179 = YPPsym((P)"sexpr-iterate-signature");
  T232 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_104 = YPmet(FUNCODEREF(fun_104),YPfalse,T232,ENVNUL,PNUL,YPfalse);
  T231 = YPsig(YPPlist(1,LITREF(lit_178)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_signature_105 = YPmet(FUNCODEREF(fun_sexpr_iterate_signature_105),LITREF(lit_179),T231,ENVNUL,PNUL,YPfalse);
  T235 = BOUNDP(YcompilerSsyntaxYsexpr_iterate_signature);
  if (T235 != YPfalse) {
    T234 = VARREF(YcompilerSsyntaxYsexpr_iterate_signature);
  } else {
    T234 = YPfalse;
  }
  T236 = fun_sexpr_iterate_signature_105;
  T233 = CALL2(1,VARREF(YPdefine_method),T234,T236);
  VARSET(YcompilerSsyntaxYsexpr_iterate_signature,T233);
  lit_180 = YPPsym((P)"sexpr-iterate-inits");
  T238 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T238,ENVNUL,PNUL,YPfalse);
  T237 = YPsig(YPPlist(1,LITREF(lit_178)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_inits_107 = YPmet(FUNCODEREF(fun_sexpr_iterate_inits_107),LITREF(lit_180),T237,ENVNUL,PNUL,YPfalse);
  T241 = BOUNDP(YcompilerSsyntaxYsexpr_iterate_inits);
  if (T241 != YPfalse) {
    T240 = VARREF(YcompilerSsyntaxYsexpr_iterate_inits);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_sexpr_iterate_inits_107;
  T239 = CALL2(1,VARREF(YPdefine_method),T240,T242);
  VARSET(YcompilerSsyntaxYsexpr_iterate_inits,T239);
  lit_181 = YPPsym((P)"sexpr-iterate-body");
  T243 = YPsig(YPPlist(1,LITREF(lit_178)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_body_108 = YPmet(FUNCODEREF(fun_sexpr_iterate_body_108),LITREF(lit_181),T243,ENVNUL,PNUL,YPfalse);
  T246 = BOUNDP(YcompilerSsyntaxYsexpr_iterate_body);
  if (T246 != YPfalse) {
    T245 = VARREF(YcompilerSsyntaxYsexpr_iterate_body);
  } else {
    T245 = YPfalse;
  }
  T247 = fun_sexpr_iterate_body_108;
  T244 = CALL2(1,VARREF(YPdefine_method),T245,T247);
  VARSET(YcompilerSsyntaxYsexpr_iterate_body,T244);
  lit_182 = YPPsym((P)"sexpr-iterate->loc");
  T248 = YPsig(YPPlist(1,LITREF(lit_178)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_Gloc_109 = YPmet(FUNCODEREF(fun_sexpr_iterate_Gloc_109),LITREF(lit_182),T248,ENVNUL,PNUL,YPfalse);
  T251 = BOUNDP(YcompilerSsyntaxYsexpr_iterate_Gloc);
  if (T251 != YPfalse) {
    T250 = VARREF(YcompilerSsyntaxYsexpr_iterate_Gloc);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_sexpr_iterate_Gloc_109;
  T249 = CALL2(1,VARREF(YPdefine_method),T250,T252);
  VARSET(YcompilerSsyntaxYsexpr_iterate_Gloc,T249);
  lit_183 = YPPsym((P)"isa");
  VARSET(YcompilerSsyntaxYDsexpr_isa_tag,LITREF(lit_183));
  lit_184 = YPPsym((P)"sexpr-isa?");
  T253 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_isaQ_110 = YPmet(FUNCODEREF(fun_sexpr_isaQ_110),LITREF(lit_184),T253,ENVNUL,PNUL,YPfalse);
  T256 = BOUNDP(YcompilerSsyntaxYsexpr_isaQ);
  if (T256 != YPfalse) {
    T255 = VARREF(YcompilerSsyntaxYsexpr_isaQ);
  } else {
    T255 = YPfalse;
  }
  T257 = fun_sexpr_isaQ_110;
  T254 = CALL2(1,VARREF(YPdefine_method),T255,T257);
  VARSET(YcompilerSsyntaxYsexpr_isaQ,T254);
  lit_185 = YPPsym((P)"sexpr-isa-parent");
  T258 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_isa_parent_111 = YPmet(FUNCODEREF(fun_sexpr_isa_parent_111),LITREF(lit_185),T258,ENVNUL,PNUL,YPfalse);
  T261 = BOUNDP(YcompilerSsyntaxYsexpr_isa_parent);
  if (T261 != YPfalse) {
    T260 = VARREF(YcompilerSsyntaxYsexpr_isa_parent);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_sexpr_isa_parent_111;
  T259 = CALL2(1,VARREF(YPdefine_method),T260,T262);
  VARSET(YcompilerSsyntaxYsexpr_isa_parent,T259);
  lit_186 = YPPsym((P)"sexpr-isa-prop-inits");
  T263 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_prop_inits_112 = YPmet(FUNCODEREF(fun_sexpr_isa_prop_inits_112),LITREF(lit_186),T263,ENVNUL,PNUL,YPfalse);
  T266 = BOUNDP(YcompilerSsyntaxYsexpr_isa_prop_inits);
  if (T266 != YPfalse) {
    T265 = VARREF(YcompilerSsyntaxYsexpr_isa_prop_inits);
  } else {
    T265 = YPfalse;
  }
  T267 = fun_sexpr_isa_prop_inits_112;
  T264 = CALL2(1,VARREF(YPdefine_method),T265,T267);
  VARSET(YcompilerSsyntaxYsexpr_isa_prop_inits,T264);
  lit_187 = YPPsym((P)"sexpr-isa-init-props");
  T270 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  T269 = fun_sexpr_isa_init_props_113 = YPmet(FUNCODEREF(fun_sexpr_isa_init_props_113),LITREF(lit_187),T270,ENVNUL,PNUL,YPfalse);
  T274 = BOUNDP(YcompilerSsyntaxYsexpr_isa_init_props);
  if (T274 != YPfalse) {
    T273 = VARREF(YcompilerSsyntaxYsexpr_isa_init_props);
  } else {
    T273 = YPfalse;
  }
  T275 = fun_sexpr_isa_init_props_113;
  T272 = CALL2(1,VARREF(YPdefine_method),T273,T275);
  T271 = VARSET(YcompilerSsyntaxYsexpr_isa_init_props,T272);
  T268 = T271;
  return T268;
}

P YcompilerSsyntaxY___main_2___() {
  P tmpF1503;
  P T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166;
  P T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150;
  P T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134;
  P T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118;
  P T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102;
  P T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86;
  P T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70;
  P T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54;
  P T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
loop:
  lit_188 = YPPsym((P)"sexpr-isa-init-values");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_init_values_114 = YPmet(FUNCODEREF(fun_sexpr_isa_init_values_114),LITREF(lit_188),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YcompilerSsyntaxYsexpr_isa_init_values);
  if (T3 != YPfalse) {
    T2 = VARREF(YcompilerSsyntaxYsexpr_isa_init_values);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_isa_init_values_114;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YcompilerSsyntaxYsexpr_isa_init_values,T1);
  lit_189 = YPPsym((P)"dc");
  VARSET(YcompilerSsyntaxYDsexpr_define_class_tag,LITREF(lit_189));
  lit_190 = YPPsym((P)"sexpr-define-class?");
  T5 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_define_classQ_115 = YPmet(FUNCODEREF(fun_sexpr_define_classQ_115),LITREF(lit_190),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YcompilerSsyntaxYsexpr_define_classQ);
  if (T8 != YPfalse) {
    T7 = VARREF(YcompilerSsyntaxYsexpr_define_classQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_define_classQ_115;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YcompilerSsyntaxYsexpr_define_classQ,T6);
  lit_191 = YPPsym((P)"sexpr-define-class-parents");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_define_class_parents_116 = YPmet(FUNCODEREF(fun_sexpr_define_class_parents_116),LITREF(lit_191),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YcompilerSsyntaxYsexpr_define_class_parents);
  if (T13 != YPfalse) {
    T12 = VARREF(YcompilerSsyntaxYsexpr_define_class_parents);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_define_class_parents_116;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YcompilerSsyntaxYsexpr_define_class_parents,T11);
  lit_192 = YPPsym((P)"dp");
  VARSET(YcompilerSsyntaxYDsexpr_prop_tag,LITREF(lit_192));
  lit_193 = YPPsym((P)"sexpr-prop?");
  T15 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_propQ_117 = YPmet(FUNCODEREF(fun_sexpr_propQ_117),LITREF(lit_193),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YcompilerSsyntaxYsexpr_propQ);
  if (T18 != YPfalse) {
    T17 = VARREF(YcompilerSsyntaxYsexpr_propQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_propQ_117;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YcompilerSsyntaxYsexpr_propQ,T16);
  lit_194 = YPPsym((P)"sexpr-prop-name");
  T20 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_prop_name_118 = YPmet(FUNCODEREF(fun_sexpr_prop_name_118),LITREF(lit_194),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YcompilerSsyntaxYsexpr_prop_name);
  if (T23 != YPfalse) {
    T22 = VARREF(YcompilerSsyntaxYsexpr_prop_name);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_prop_name_118;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YcompilerSsyntaxYsexpr_prop_name,T21);
  lit_195 = YPPsym((P)"sexpr-prop-owner");
  T25 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_owner_119 = YPmet(FUNCODEREF(fun_sexpr_prop_owner_119),LITREF(lit_195),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YcompilerSsyntaxYsexpr_prop_owner);
  if (T28 != YPfalse) {
    T27 = VARREF(YcompilerSsyntaxYsexpr_prop_owner);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_prop_owner_119;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YcompilerSsyntaxYsexpr_prop_owner,T26);
  lit_196 = YPPsym((P)"sexpr-prop-init-var");
  lit_197 = YPPsym((P)"_x");
  T30 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_var_120 = YPmet(FUNCODEREF(fun_sexpr_prop_init_var_120),LITREF(lit_196),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YcompilerSsyntaxYsexpr_prop_init_var);
  if (T33 != YPfalse) {
    T32 = VARREF(YcompilerSsyntaxYsexpr_prop_init_var);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_prop_init_var_120;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YcompilerSsyntaxYsexpr_prop_init_var,T31);
  lit_198 = YPPsym((P)"sexpr-prop-type");
  T35 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_type_121 = YPmet(FUNCODEREF(fun_sexpr_prop_type_121),LITREF(lit_198),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YcompilerSsyntaxYsexpr_prop_type);
  if (T38 != YPfalse) {
    T37 = VARREF(YcompilerSsyntaxYsexpr_prop_type);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_sexpr_prop_type_121;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YcompilerSsyntaxYsexpr_prop_type,T36);
  lit_199 = YPPsym((P)"sexpr-prop-init?");
  T40 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_prop_initQ_122 = YPmet(FUNCODEREF(fun_sexpr_prop_initQ_122),LITREF(lit_199),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YcompilerSsyntaxYsexpr_prop_initQ);
  if (T43 != YPfalse) {
    T42 = VARREF(YcompilerSsyntaxYsexpr_prop_initQ);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_sexpr_prop_initQ_122;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YcompilerSsyntaxYsexpr_prop_initQ,T41);
  lit_200 = YPPsym((P)"sexpr-prop-init");
  T45 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_123 = YPmet(FUNCODEREF(fun_sexpr_prop_init_123),LITREF(lit_200),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YcompilerSsyntaxYsexpr_prop_init);
  if (T48 != YPfalse) {
    T47 = VARREF(YcompilerSsyntaxYsexpr_prop_init);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_prop_init_123;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YcompilerSsyntaxYsexpr_prop_init,T46);
  lit_201 = YPPsym((P)"sexpr-fab-getter");
  lit_202 = YPPsym((P)"prop-value");
  T50 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_88)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_getter_124 = YPmet(FUNCODEREF(fun_sexpr_fab_getter_124),LITREF(lit_201),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YcompilerSsyntaxYsexpr_fab_getter);
  if (T53 != YPfalse) {
    T52 = VARREF(YcompilerSsyntaxYsexpr_fab_getter);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_fab_getter_124;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YcompilerSsyntaxYsexpr_fab_getter,T51);
  lit_203 = YPPsym((P)"sexpr-fab-setter");
  lit_204 = YPPsym((P)"prop-type");
  lit_205 = YPPsym((P)"_z");
  lit_206 = YPPsym((P)"prop-value-setter");
  T55 = YPsig(YPPlist(3,LITREF(lit_61),LITREF(lit_88),LITREF(lit_204)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_setter_125 = YPmet(FUNCODEREF(fun_sexpr_fab_setter_125),LITREF(lit_203),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YcompilerSsyntaxYsexpr_fab_setter);
  if (T58 != YPfalse) {
    T57 = VARREF(YcompilerSsyntaxYsexpr_fab_setter);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_fab_setter_125;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YcompilerSsyntaxYsexpr_fab_setter,T56);
  lit_207 = YPPsym((P)"sexpr-fab-setter-name");
  lit_208 = YPsb((P)"-setter");
  T60 = YPsig(YPPlist(1,LITREF(lit_61)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_fab_setter_name_126 = YPmet(FUNCODEREF(fun_sexpr_fab_setter_name_126),LITREF(lit_207),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YcompilerSsyntaxYsexpr_fab_setter_name);
  if (T63 != YPfalse) {
    T62 = VARREF(YcompilerSsyntaxYsexpr_fab_setter_name);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_fab_setter_name_126;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YcompilerSsyntaxYsexpr_fab_setter_name,T61);
  lit_209 = YPPsym((P)"sexpr-macro?");
  T65 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macroQ_127 = YPmet(FUNCODEREF(fun_sexpr_macroQ_127),LITREF(lit_209),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YcompilerSsyntaxYsexpr_macroQ);
  if (T68 != YPfalse) {
    T67 = VARREF(YcompilerSsyntaxYsexpr_macroQ);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_macroQ_127;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YcompilerSsyntaxYsexpr_macroQ,T66);
  lit_210 = YPPsym((P)"macro-expand");
  VARSET(YcompilerSsyntaxYDsexpr_macro_expand_tag,LITREF(lit_210));
  lit_211 = YPPsym((P)"sexpr-macro-expand?");
  T70 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macro_expandQ_128 = YPmet(FUNCODEREF(fun_sexpr_macro_expandQ_128),LITREF(lit_211),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YcompilerSsyntaxYsexpr_macro_expandQ);
  if (T73 != YPfalse) {
    T72 = VARREF(YcompilerSsyntaxYsexpr_macro_expandQ);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_macro_expandQ_128;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YcompilerSsyntaxYsexpr_macro_expandQ,T71);
  lit_212 = YPPsym((P)"mif");
  VARSET(YcompilerSsyntaxYDsexpr_syntax_if_tag,LITREF(lit_212));
  lit_213 = YPPsym((P)"sexpr-make-syntax-if");
  lit_214 = YPPsym((P)"pat");
  T75 = YPsig(YPPlist(4,LITREF(lit_214),LITREF(lit_1),LITREF(lit_69),LITREF(lit_70)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  fun_sexpr_make_syntax_if_129 = YPmet(FUNCODEREF(fun_sexpr_make_syntax_if_129),LITREF(lit_213),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YcompilerSsyntaxYsexpr_make_syntax_if);
  if (T78 != YPfalse) {
    T77 = VARREF(YcompilerSsyntaxYsexpr_make_syntax_if);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_make_syntax_if_129;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YcompilerSsyntaxYsexpr_make_syntax_if,T76);
  lit_215 = YPPsym((P)"comma-atsign");
  VARSET(YcompilerSsyntaxYTcomma_atsignT,LITREF(lit_215));
  lit_216 = YPPsym((P)"bq-list");
  VARSET(YcompilerSsyntaxYTbq_listT,LITREF(lit_216));
  lit_217 = YPPsym((P)"bq-list*");
  VARSET(YcompilerSsyntaxYTbq_listTT,LITREF(lit_217));
  lit_218 = YPPsym((P)"bq-append");
  VARSET(YcompilerSsyntaxYTbq_appendT,LITREF(lit_218));
  lit_219 = YPPsym((P)"bq-nconc");
  VARSET(YcompilerSsyntaxYTbq_nconcT,LITREF(lit_219));
  lit_220 = YPPsym((P)"bq-clobberable");
  VARSET(YcompilerSsyntaxYTbq_clobberableT,LITREF(lit_220));
  lit_221 = YPPsym((P)"bq-quote");
  VARSET(YcompilerSsyntaxYTbq_quoteT,LITREF(lit_221));
  lit_222 = YPPsym((P)"sexpr-expand-backquote");
  lit_223 = YPPsym((P)"goo");
  T80 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YcompilerSsyntaxYsexpr_expand_backquote = YPmet(FUNCODEREF(YcompilerSsyntaxYsexpr_expand_backquote),LITREF(lit_222),T80,ENVNUL,PNUL,YPfalse);
  T81 = YcompilerSsyntaxYsexpr_expand_backquote;
  VARSET(YcompilerSsyntaxYsexpr_expand_backquote,T81);
  lit_224 = YPPsym((P)"sexpr-build-backquote-expander");
  T82 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_build_backquote_expander_131 = YPmet(FUNCODEREF(fun_sexpr_build_backquote_expander_131),LITREF(lit_224),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YcompilerSsyntaxYsexpr_build_backquote_expander);
  if (T85 != YPfalse) {
    T84 = VARREF(YcompilerSsyntaxYsexpr_build_backquote_expander);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_sexpr_build_backquote_expander_131;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YcompilerSsyntaxYsexpr_build_backquote_expander,T83);
  lit_225 = YPPsym((P)"sexpr-unquote?");
  lit_226 = YPPsym((P)"unquote");
  T87 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquoteQ_132 = YPmet(FUNCODEREF(fun_sexpr_unquoteQ_132),LITREF(lit_225),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YcompilerSsyntaxYsexpr_unquoteQ);
  if (T90 != YPfalse) {
    T89 = VARREF(YcompilerSsyntaxYsexpr_unquoteQ);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_sexpr_unquoteQ_132;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YcompilerSsyntaxYsexpr_unquoteQ,T88);
  lit_227 = YPPsym((P)"sexpr-unquote-splicing?");
  lit_228 = YPPsym((P)"unquote-splicing");
  T92 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquote_splicingQ_133 = YPmet(FUNCODEREF(fun_sexpr_unquote_splicingQ_133),LITREF(lit_227),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YcompilerSsyntaxYsexpr_unquote_splicingQ);
  if (T95 != YPfalse) {
    T94 = VARREF(YcompilerSsyntaxYsexpr_unquote_splicingQ);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_sexpr_unquote_splicingQ_133;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YcompilerSsyntaxYsexpr_unquote_splicingQ,T93);
  lit_229 = YPPsym((P)"sexpr-backquote?");
  T97 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_backquoteQ_134 = YPmet(FUNCODEREF(fun_sexpr_backquoteQ_134),LITREF(lit_229),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YcompilerSsyntaxYsexpr_backquoteQ);
  if (T100 != YPfalse) {
    T99 = VARREF(YcompilerSsyntaxYsexpr_backquoteQ);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_sexpr_backquoteQ_134;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YcompilerSsyntaxYsexpr_backquoteQ,T98);
  lit_230 = YPPsym((P)"sexpr-atom?");
  T102 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_atomQ_135 = YPmet(FUNCODEREF(fun_sexpr_atomQ_135),LITREF(lit_230),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YcompilerSsyntaxYsexpr_atomQ);
  if (T105 != YPfalse) {
    T104 = VARREF(YcompilerSsyntaxYsexpr_atomQ);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_sexpr_atomQ_135;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YcompilerSsyntaxYsexpr_atomQ,T103);
  lit_231 = YPPsym((P)"nreconc");
  lit_232 = YPPsym((P)"y");
  T107 = YPsig(YPPlist(2,LITREF(lit_144),LITREF(lit_232)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_nreconc_136 = YPmet(FUNCODEREF(fun_nreconc_136),LITREF(lit_231),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(YcompilerSsyntaxYnreconc);
  if (T110 != YPfalse) {
    T109 = VARREF(YcompilerSsyntaxYnreconc);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_nreconc_136;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YcompilerSsyntaxYnreconc,T108);
  lit_233 = YPPsym((P)"bq-process");
  lit_234 = YPsb((P)"UNQUOTE-SPLICING %= AFTER BQ");
  lit_235 = YPPsym((P)"p");
  lit_236 = YPPsym((P)"q");
  lit_237 = YPsb((P)"Malformed ,%=");
  lit_238 = YPsb((P)"Dotted ,@%=");
  T114 = YPsig(YPPlist(2,LITREF(lit_235),LITREF(lit_236)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_137 = YPmet(FUNCODEREF(fun_loop_137),LITREF(lit_150),T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_138 = YPmet(FUNCODEREF(fun_138),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_process_139 = YPmet(FUNCODEREF(fun_bq_process_139),LITREF(lit_233),T112,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YcompilerSsyntaxYbq_process);
  if (T117 != YPfalse) {
    T116 = VARREF(YcompilerSsyntaxYbq_process);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_bq_process_139;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YcompilerSsyntaxYbq_process,T115);
  lit_239 = YPPsym((P)"bracket");
  T119 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bracket_140 = YPmet(FUNCODEREF(fun_bracket_140),LITREF(lit_239),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YcompilerSsyntaxYbracket);
  if (T122 != YPfalse) {
    T121 = VARREF(YcompilerSsyntaxYbracket);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_bracket_140;
  T120 = CALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YcompilerSsyntaxYbracket,T120);
  lit_240 = YPPsym((P)"map-tree");
  lit_241 = YPPsym((P)"fn");
  T124 = YPsig(YPPlist(2,LITREF(lit_241),LITREF(lit_144)),YPPlist(2,VARREF(YLfunG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_map_tree_141 = YPmet(FUNCODEREF(fun_map_tree_141),LITREF(lit_240),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YcompilerSsyntaxYmap_tree);
  if (T127 != YPfalse) {
    T126 = VARREF(YcompilerSsyntaxYmap_tree);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_map_tree_141;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YcompilerSsyntaxYmap_tree,T125);
  lit_242 = YPPsym((P)"bq-remove-tokens");
  lit_243 = YPPsym((P)"cat");
  lit_244 = YPPsym((P)"cat!");
  lit_245 = YPPsym((P)"list*");
  lit_246 = YPPsym((P)"pair");
  T129 = YPsig(YPPlist(1,LITREF(lit_144)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_remove_tokens_142 = YPmet(FUNCODEREF(fun_bq_remove_tokens_142),LITREF(lit_242),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YcompilerSsyntaxYbq_remove_tokens);
  if (T132 != YPfalse) {
    T131 = VARREF(YcompilerSsyntaxYbq_remove_tokens);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_bq_remove_tokens_142;
  T130 = CALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YcompilerSsyntaxYbq_remove_tokens,T130);
  lit_247 = YPPsym((P)"sexpr-syntax-if?");
  T134 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_ifQ_143 = YPmet(FUNCODEREF(fun_sexpr_syntax_ifQ_143),LITREF(lit_247),T134,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YcompilerSsyntaxYsexpr_syntax_ifQ);
  if (T137 != YPfalse) {
    T136 = VARREF(YcompilerSsyntaxYsexpr_syntax_ifQ);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_sexpr_syntax_ifQ_143;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YcompilerSsyntaxYsexpr_syntax_ifQ,T135);
  lit_248 = YPPsym((P)"sexpr-syntax-if-value");
  T139 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_value_144 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_value_144),LITREF(lit_248),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YcompilerSsyntaxYsexpr_syntax_if_value);
  if (T142 != YPfalse) {
    T141 = VARREF(YcompilerSsyntaxYsexpr_syntax_if_value);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_sexpr_syntax_if_value_144;
  T140 = CALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YcompilerSsyntaxYsexpr_syntax_if_value,T140);
  lit_249 = YPPsym((P)"sexpr-syntax-if-pattern");
  T144 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_pattern_145 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_pattern_145),LITREF(lit_249),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YcompilerSsyntaxYsexpr_syntax_if_pattern);
  if (T147 != YPfalse) {
    T146 = VARREF(YcompilerSsyntaxYsexpr_syntax_if_pattern);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_sexpr_syntax_if_pattern_145;
  T145 = CALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YcompilerSsyntaxYsexpr_syntax_if_pattern,T145);
  lit_250 = YPPsym((P)"sexpr-syntax-if-then");
  T149 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_then_146 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_then_146),LITREF(lit_250),T149,ENVNUL,PNUL,YPfalse);
  T152 = BOUNDP(YcompilerSsyntaxYsexpr_syntax_if_then);
  if (T152 != YPfalse) {
    T151 = VARREF(YcompilerSsyntaxYsexpr_syntax_if_then);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_sexpr_syntax_if_then_146;
  T150 = CALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YcompilerSsyntaxYsexpr_syntax_if_then,T150);
  lit_251 = YPPsym((P)"sexpr-syntax-if-else");
  T154 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_else_147 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_else_147),LITREF(lit_251),T154,ENVNUL,PNUL,YPfalse);
  T157 = BOUNDP(YcompilerSsyntaxYsexpr_syntax_if_else);
  if (T157 != YPfalse) {
    T156 = VARREF(YcompilerSsyntaxYsexpr_syntax_if_else);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_sexpr_syntax_if_else_147;
  T155 = CALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YcompilerSsyntaxYsexpr_syntax_if_else,T155);
  lit_252 = YPPsym((P)"sexpr-pattern-variable?");
  T159 = YPsig(YPPlist(1,LITREF(lit_214)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_pattern_variableQ_148 = YPmet(FUNCODEREF(fun_sexpr_pattern_variableQ_148),LITREF(lit_252),T159,ENVNUL,PNUL,YPfalse);
  T162 = BOUNDP(YcompilerSsyntaxYsexpr_pattern_variableQ);
  if (T162 != YPfalse) {
    T161 = VARREF(YcompilerSsyntaxYsexpr_pattern_variableQ);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_sexpr_pattern_variableQ_148;
  T160 = CALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YcompilerSsyntaxYsexpr_pattern_variableQ,T160);
  lit_253 = YPPsym((P)"sexpr-pattern-variable-name");
  T164 = YPsig(YPPlist(1,LITREF(lit_214)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_pattern_variable_name_149 = YPmet(FUNCODEREF(fun_sexpr_pattern_variable_name_149),LITREF(lit_253),T164,ENVNUL,PNUL,YPfalse);
  T167 = BOUNDP(YcompilerSsyntaxYsexpr_pattern_variable_name);
  if (T167 != YPfalse) {
    T166 = VARREF(YcompilerSsyntaxYsexpr_pattern_variable_name);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_sexpr_pattern_variable_name_149;
  T165 = CALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YcompilerSsyntaxYsexpr_pattern_variable_name,T165);
  lit_254 = YPPsym((P)"sexpr-bind-pattern-variables");
  T170 = YPsig(YPPlist(1,LITREF(lit_214)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_150 = YPmet(FUNCODEREF(fun_col_150),LITREF(lit_165),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(1,LITREF(lit_214)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_bind_pattern_variables_151 = YPmet(FUNCODEREF(fun_sexpr_bind_pattern_variables_151),LITREF(lit_254),T169,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YcompilerSsyntaxYsexpr_bind_pattern_variables);
  if (T173 != YPfalse) {
    T172 = VARREF(YcompilerSsyntaxYsexpr_bind_pattern_variables);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_sexpr_bind_pattern_variables_151;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YcompilerSsyntaxYsexpr_bind_pattern_variables,T171);
  lit_255 = YPPsym((P)"sexpr-make-macro-function");
  T175 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_make_macro_function_152 = YPmet(FUNCODEREF(fun_sexpr_make_macro_function_152),LITREF(lit_255),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YcompilerSsyntaxYsexpr_make_macro_function);
  if (T178 != YPfalse) {
    T177 = VARREF(YcompilerSsyntaxYsexpr_make_macro_function);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_sexpr_make_macro_function_152;
  T176 = CALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YcompilerSsyntaxYsexpr_make_macro_function,T176);
  check_type(YPfalse,VARREF(YLanyG));
  tmpF1503 = YPfalse;
  if (tmpF1503 != YPfalse) {
    T180 = VARREF(YcompilerSsyntaxYeval);
  } else {
    T180 = YPfalse;
  }
  T181 = YPfalse;
  return T181;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_runtimeSruntime;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStype;
extern MODULE_INFO module_info_gooScollections;
extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooScollectionsSstring;
extern MODULE_INFO module_info_gooScollectionsSbuffer;
extern MODULE_INFO module_info_gooScollectionsSzip;
extern MODULE_INFO module_info_gooScollectionsStable;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_gooScollectionsScycle;
extern MODULE_INFO module_info_gooScollectionsSrange;
extern MODULE_INFO module_info_gooScollectionsSassoc;
extern MODULE_INFO module_info_gooSmagnitude;
extern MODULE_INFO module_info_gooScollectionsSstep;
extern MODULE_INFO module_info_gooScollectionsSmap;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_runtimeSruntime},
  {&module_info_gooSmath},
  {&module_info_gooStype},
  {&module_info_gooScollections},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"lst", &module_info_runtimeSboot, "lst"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"df", &module_info_runtimeSboot, "df"},
  {"as-copy", &module_info_gooScollectionsScollection, "as-copy"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"invoke-handler-interactively", &module_info_runtimeSruntime, "invoke-handler-interactively"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"identity", &module_info_runtimeSruntime, "identity"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"match", &module_info_gooSmacros, "match"},
  {"atan", &module_info_gooSmath, "atan"},
  {"rem", &module_info_gooSmath, "rem"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"range-check", &module_info_gooScollectionsSsequence, "range-check"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"ascii-limit", &module_info_gooScollectionsSstring, "ascii-limit"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"push-last!", &module_info_gooScollectionsSbuffer, "push-last!"},
  {"unzip", &module_info_gooScollectionsSzip, "unzip"},
  {"<handler>", &module_info_runtimeSruntime, "<handler>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"tab-hash", &module_info_gooScollectionsStable, "tab-hash"},
  {"push", &module_info_gooScollectionsSlist, "push"},
  {"log", &module_info_gooSmath, "log"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"<buf>", &module_info_gooScollectionsSbuffer, "<buf>"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"abs", &module_info_gooSmath, "abs"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"head", &module_info_runtimeSboot, "head"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"<cycle>", &module_info_gooScollectionsScycle, "<cycle>"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"floor", &module_info_gooSmath, "floor"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"range-by", &module_info_gooScollectionsSrange, "range-by"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"sig", &module_info_runtimeSruntime, "sig"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"app", &module_info_gooSmacros, "app"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"buf", &module_info_gooScollectionsSbuffer, "buf"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"tab-growth-factor", &module_info_gooScollectionsStable, "tab-growth-factor"},
  {"dup", &module_info_gooScollectionsScollection, "dup"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"try", &module_info_runtimeSboot, "try"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"<set>", &module_info_gooScollectionsStable, "<set>"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"<simple-error>", &module_info_runtimeSruntime, "<simple-error>"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"tab-test", &module_info_gooScollectionsStable, "tab-test"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"id-hash", &module_info_gooScollectionsStable, "id-hash"},
  {"from", &module_info_gooScollectionsSrange, "from"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"range", &module_info_gooScollectionsSrange, "range"},
  {"finds", &module_info_gooScollectionsSsequence, "finds"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"<restart>", &module_info_runtimeSruntime, "<restart>"},
  {"<<", &module_info_gooSmath, "<<"},
  {"until", &module_info_gooSmacros, "until"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"2nd", &module_info_gooStype, "2nd"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"round", &module_info_gooSmath, "round"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"tab-growth-factor-setter", &module_info_gooScollectionsStable, "tab-growth-factor-setter"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"app-args", &module_info_runtimeSruntime, "app-args"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"/", &module_info_gooSmath, "/"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"not", &module_info_runtimeSboot, "not"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"list-handlers", &module_info_runtimeSruntime, "list-handlers"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"t?", &module_info_gooStype, "t?"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"str", &module_info_gooScollectionsSstring, "str"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"use", &module_info_runtimeSboot, "use"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"describe-condition", &module_info_runtimeSruntime, "describe-condition"},
  {"app-filename", &module_info_runtimeSruntime, "app-filename"},
  {"build-condition-interactively", &module_info_runtimeSruntime, "build-condition-interactively"},
  {"default-handler", &module_info_runtimeSruntime, "default-handler"},
  {"range-error", &module_info_gooScollectionsScollection, "range-error"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"error", &module_info_runtimeSboot, "error"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"assocs-test", &module_info_gooScollectionsSassoc, "assocs-test"},
  {"len", &module_info_gooStype, "len"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"t<", &module_info_gooStype, "t<"},
  {"<error>", &module_info_runtimeSruntime, "<error>"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"compose", &module_info_runtimeSruntime, "compose"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"or", &module_info_gooSmacros, "or"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"logn", &module_info_gooSmath, "logn"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"read", &module_info_runtimeSruntime, "read"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"default-handler-description", &module_info_runtimeSruntime, "default-handler-description"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"format-to-string", &module_info_runtimeSruntime, "format-to-string"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"$default-handler-info", &module_info_runtimeSruntime, "$default-handler-info"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"len-setter", &module_info_gooScollectionsSbuffer, "len-setter"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"zip", &module_info_gooScollectionsSzip, "zip"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"t=", &module_info_gooStype, "t="},
  {"and", &module_info_gooSmacros, "and"},
  {"cycle", &module_info_gooScollectionsScycle, "cycle"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<range>", &module_info_gooScollectionsSrange, "<range>"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {">", &module_info_gooSmagnitude, ">"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"handler-function", &module_info_runtimeSruntime, "handler-function"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"loc-val-setter", &module_info_runtimeSruntime, "loc-val-setter"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"first-then", &module_info_gooScollectionsSstep, "first-then"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"curry", &module_info_runtimeSruntime, "curry"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"as", &module_info_gooStype, "as"},
  {"num-to-str-base", &module_info_gooScollectionsSstring, "num-to-str-base"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"ascii-whitespaces", &module_info_gooScollectionsSstring, "ascii-whitespaces"},
  {"<map>", &module_info_gooScollectionsSmap, "<map>"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"for", &module_info_gooSmacros, "for"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<", &module_info_gooSmagnitude, "<"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"even?", &module_info_gooSmath, "even?"},
  {"ins!", &module_info_gooScollectionsSsequence, "ins!"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {">>", &module_info_gooSmath, ">>"},
  {"+", &module_info_gooSmath, "+"},
  {"def", &module_info_runtimeSboot, "def"},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"max", &module_info_gooSmagnitude, "max"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"if", &module_info_runtimeSboot, "if"},
  {"any?", &module_info_gooStype, "any?"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"&", &module_info_gooSmath, "&"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"tab-gc-state", &module_info_gooScollectionsStable, "tab-gc-state"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"neg", &module_info_gooSmath, "neg"},
  {"=", &module_info_gooSmath, "="},
  {"case-insensitive-string-equal", &module_info_gooScollectionsStable, "case-insensitive-string-equal"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"~=", &module_info_gooSmath, "~="},
  {"==", &module_info_gooSmacros, "=="},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"*", &module_info_gooSmath, "*"},
  {"~", &module_info_gooSmath, "~"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"<assocs>", &module_info_gooScollectionsSassoc, "<assocs>"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"tan", &module_info_gooSmath, "tan"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"loc-val", &module_info_runtimeSruntime, "loc-val"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"<handler-info>", &module_info_runtimeSruntime, "<handler-info>"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"<product>", &module_info_gooStype, "<product>"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"case", &module_info_gooSmacros, "case"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"<zip>", &module_info_gooScollectionsSzip, "<zip>"},
  {"<str-tab>", &module_info_gooScollectionsStable, "<str-tab>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"spread", &module_info_runtimeSruntime, "spread"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"assocs-test-setter", &module_info_gooScollectionsSassoc, "assocs-test-setter"},
  {"tab-growth-threshold-setter", &module_info_gooScollectionsStable, "tab-growth-threshold-setter"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"type-elts-setter", &module_info_gooStype, "type-elts-setter"},
  {"format", &module_info_runtimeSruntime, "format"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"t*", &module_info_gooStype, "t*"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"^", &module_info_gooSmath, "^"},
  {"round/", &module_info_gooSmath, "round/"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"describe-handler", &module_info_runtimeSruntime, "describe-handler"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"*print-base*", &module_info_gooScollectionsSstring, "*print-base*"},
  {"fab-handler", &module_info_runtimeSruntime, "fab-handler"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"export", &module_info_runtimeSboot, "export"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"ins", &module_info_gooScollectionsSsequence, "ins"},
  {"len/fill-setter", &module_info_gooScollectionsSbuffer, "len/fill-setter"},
  {"$permanent-hash-state", &module_info_gooScollectionsStable, "$permanent-hash-state"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"<list>", &module_info_gooScollectionsSlist, "<list>"},
  {"case-insensitive-string-hash", &module_info_gooScollectionsStable, "case-insensitive-string-hash"},
  {"map", &module_info_gooSmacros, "map"},
  {"assq", &module_info_gooScollectionsSlist, "assq"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"1-", &module_info_gooSmath, "1-"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"pop", &module_info_gooScollectionsSlist, "pop"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"-", &module_info_gooSmath, "-"},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"condition-arguments", &module_info_runtimeSruntime, "condition-arguments"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"choose-handler", &module_info_runtimeSruntime, "choose-handler"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"tab-growth-threshold", &module_info_gooScollectionsStable, "tab-growth-threshold"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"do-key-vals", &module_info_gooScollectionsSsequence, "do-key-vals"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"t+", &module_info_gooStype, "t+"},
  {"~==", &module_info_gooSmath, "~=="},
  {"tab-shrink-threshold", &module_info_gooScollectionsStable, "tab-shrink-threshold"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"|", &module_info_gooSmath, "|"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"pop-last!", &module_info_gooScollectionsSbuffer, "pop-last!"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"while", &module_info_gooSmacros, "while"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"new", &module_info_runtimeSboot, "new"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"<serious-condition>", &module_info_runtimeSruntime, "<serious-condition>"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"always", &module_info_runtimeSruntime, "always"},
  {"handler-matches?", &module_info_runtimeSruntime, "handler-matches?"},
  {"tab-shrink-threshold-setter", &module_info_gooScollectionsStable, "tab-shrink-threshold-setter"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"*gensym-counter*", &module_info_runtimeSruntime, "*gensym-counter*"},
  {"do", &module_info_gooSmacros, "do"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"rcurry", &module_info_runtimeSruntime, "rcurry"},
  {"condition-message", &module_info_runtimeSruntime, "condition-message"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"<condition>", &module_info_runtimeSruntime, "<condition>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"vals-to-str", &module_info_gooScollectionsSsequence, "vals-to-str"},
  {"set", &module_info_runtimeSboot, "set"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"range-check?", &module_info_gooScollectionsSsequence, "range-check?"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"sin", &module_info_gooSmath, "sin"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"when", &module_info_gooSmacros, "when"},
  {"$e", &module_info_gooSmath, "$e"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"build-condition-for-handler-interactively", &module_info_runtimeSruntime, "build-condition-for-handler-interactively"},
  {"acos", &module_info_gooSmath, "acos"},
  {"list", &module_info_gooScollectionsSlist, "list"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"str-to-num", &module_info_gooScollectionsSstring, "str-to-num"},
  {"all2?", &module_info_gooStype, "all2?"},
  {"<step>", &module_info_gooScollectionsSstep, "<step>"},
  {"do3", &module_info_gooScollectionsScollection, "do3"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"assqn", &module_info_gooScollectionsSlist, "assqn"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"fab-map", &module_info_gooScollectionsSmap, "fab-map"},
  {"<simple-condition>", &module_info_runtimeSruntime, "<simple-condition>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sexpr-let-values", &YcompilerSsyntaxYsexpr_let_values},
  {"sexpr-operands", &YcompilerSsyntaxYsexpr_operands},
  {"*bq-list**", &YcompilerSsyntaxYTbq_listTT},
  {"*bq-clobberable*", &YcompilerSsyntaxYTbq_clobberableT},
  {"sexpr-atom?", &YcompilerSsyntaxYsexpr_atomQ},
  {"sexpr-let-names+values", &YcompilerSsyntaxYsexpr_let_namesAvalues},
  {"$sexpr-unwind-protect-tag", &YcompilerSsyntaxYDsexpr_unwind_protect_tag},
  {"sexpr-new-unique-name-counter!", &YcompilerSsyntaxYsexpr_new_unique_name_counterX},
  {"sexpr-function-body", &YcompilerSsyntaxYsexpr_function_body},
  {"sexpr-generic-definition?", &YcompilerSsyntaxYsexpr_generic_definitionQ},
  {"sexpr-assignment?", &YcompilerSsyntaxYsexpr_assignmentQ},
  {"---main-1---", NULL},
  {"$sexpr-let-tag", &YcompilerSsyntaxYDsexpr_let_tag},
  {"sexpr-expand-backquote", &YcompilerSsyntaxYsexpr_expand_backquote},
  {"sexpr-prop-name", &YcompilerSsyntaxYsexpr_prop_name},
  {"sexpr-iterate-name", &YcompilerSsyntaxYsexpr_iterate_name},
  {"sexpr-quoted?", &YcompilerSsyntaxYsexpr_quotedQ},
  {"sexpr-let-body", &YcompilerSsyntaxYsexpr_let_body},
  {"*bq-nconc*", &YcompilerSsyntaxYTbq_nconcT},
  {"sexpr-prop?", &YcompilerSsyntaxYsexpr_propQ},
  {"sexpr-make-quote", &YcompilerSsyntaxYsexpr_make_quote},
  {"sexpr-application?", &YcompilerSsyntaxYsexpr_applicationQ},
  {"sexpr-make-if", &YcompilerSsyntaxYsexpr_make_if},
  {"sexpr-make-anonymous-method", &YcompilerSsyntaxYsexpr_make_anonymous_method},
  {"sexpr-let->combination", &YcompilerSsyntaxYsexpr_let_Gcombination},
  {"$sexpr-define-class-tag", &YcompilerSsyntaxYDsexpr_define_class_tag},
  {"$sexpr-bind-exit-tag", &YcompilerSsyntaxYDsexpr_bind_exit_tag},
  {"sexpr-sequence->begin", &YcompilerSsyntaxYsexpr_sequence_Gbegin},
  {"$sexpr-prop-tag", &YcompilerSsyntaxYDsexpr_prop_tag},
  {"$sexpr-quasiquote-tag", &YcompilerSsyntaxYDsexpr_quasiquote_tag},
  {"sexpr-iterate->loc", &YcompilerSsyntaxYsexpr_iterate_Gloc},
  {"sexpr-unwind-protect-cleanup-forms", &YcompilerSsyntaxYsexpr_unwind_protect_cleanup_forms},
  {"sexpr-isa?", &YcompilerSsyntaxYsexpr_isaQ},
  {"sexpr-prop-type", &YcompilerSsyntaxYsexpr_prop_type},
  {"sexpr-forward-primitive?", &YcompilerSsyntaxYsexpr_forward_primitiveQ},
  {"sexpr-method-body", &YcompilerSsyntaxYsexpr_method_body},
  {"sexpr-define-class-parents", &YcompilerSsyntaxYsexpr_define_class_parents},
  {"sexpr-iterate-inits", &YcompilerSsyntaxYsexpr_iterate_inits},
  {"sexpr-fab-setter", &YcompilerSsyntaxYsexpr_fab_setter},
  {"sexpr-rest-operands", &YcompilerSsyntaxYsexpr_rest_operands},
  {"sexpr-loc-raw-body", &YcompilerSsyntaxYsexpr_loc_raw_body},
  {"as-signature", &YcompilerSsyntaxYas_signature},
  {"sexpr-unwind-protect?", &YcompilerSsyntaxYsexpr_unwind_protectQ},
  {"sexpr-function-definition-variable", &YcompilerSsyntaxYsexpr_function_definition_variable},
  {"sexpr-loc-bound-bodies", &YcompilerSsyntaxYsexpr_loc_bound_bodies},
  {"$sexpr-define-function-tag", &YcompilerSsyntaxYDsexpr_define_function_tag},
  {"sexpr-monitor-type", &YcompilerSsyntaxYsexpr_monitor_type},
  {"sexpr-macro-expand?", &YcompilerSsyntaxYsexpr_macro_expandQ},
  {"sexpr-isa-prop-inits", &YcompilerSsyntaxYsexpr_isa_prop_inits},
  {"sexpr-prop-init?", &YcompilerSsyntaxYsexpr_prop_initQ},
  {"$sexpr-locals-tag", &YcompilerSsyntaxYDsexpr_locals_tag},
  {"sexpr-def?", &YcompilerSsyntaxYsexpr_defQ},
  {"sexpr-if?", &YcompilerSsyntaxYsexpr_ifQ},
  {"find-option", &YcompilerSsyntaxYfind_option},
  {"sexpr-variable-name", &YcompilerSsyntaxYsexpr_variable_name},
  {"sexpr-method-parameters", &YcompilerSsyntaxYsexpr_method_parameters},
  {"sexpr-make-begin", &YcompilerSsyntaxYsexpr_make_begin},
  {"sexpr-definition?", &YcompilerSsyntaxYsexpr_definitionQ},
  {"sexpr-unwind-protect-protected-form", &YcompilerSsyntaxYsexpr_unwind_protect_protected_form},
  {"sexpr-unquote?", &YcompilerSsyntaxYsexpr_unquoteQ},
  {"sexpr-rest-exps", &YcompilerSsyntaxYsexpr_rest_exps},
  {"sexpr-loc-bound-names", &YcompilerSsyntaxYsexpr_loc_bound_names},
  {"sexpr-first-exp", &YcompilerSsyntaxYsexpr_first_exp},
  {"sexpr-if-then", &YcompilerSsyntaxYsexpr_if_then},
  {"sexpr-iterate?", &YcompilerSsyntaxYsexpr_iterateQ},
  {"sexpr-method-value", &YcompilerSsyntaxYsexpr_method_value},
  {"sexpr-let-bound-variables", &YcompilerSsyntaxYsexpr_let_bound_variables},
  {"sexpr-isa-parent", &YcompilerSsyntaxYsexpr_isa_parent},
  {"bq-process", &YcompilerSsyntaxYbq_process},
  {"sexpr-if-test", &YcompilerSsyntaxYsexpr_if_test},
  {"$sexpr-syntax-if-tag", &YcompilerSsyntaxYDsexpr_syntax_if_tag},
  {"map-tree", &YcompilerSsyntaxYmap_tree},
  {"sexpr-backquote?", &YcompilerSsyntaxYsexpr_backquoteQ},
  {"sexpr-if-else", &YcompilerSsyntaxYsexpr_if_else},
  {"sexpr-function-definition-value", &YcompilerSsyntaxYsexpr_function_definition_value},
  {"sexpr-make-method", &YcompilerSsyntaxYsexpr_make_method},
  {"sexpr-build-backquote-expander", &YcompilerSsyntaxYsexpr_build_backquote_expander},
  {"sexpr-prop-init-var", &YcompilerSsyntaxYsexpr_prop_init_var},
  {"*bq-append*", &YcompilerSsyntaxYTbq_appendT},
  {"sexpr-block?", &YcompilerSsyntaxYsexpr_blockQ},
  {"sexpr-make-macro-function", &YcompilerSsyntaxYsexpr_make_macro_function},
  {"$sexpr-quote-tag", &YcompilerSsyntaxYDsexpr_quote_tag},
  {"sexpr-unique-name", &YcompilerSsyntaxYsexpr_unique_name},
  {"$sexpr-iterate-tag", &YcompilerSsyntaxYDsexpr_iterate_tag},
  {"sexpr-signature-value", &YcompilerSsyntaxYsexpr_signature_value},
  {"sexpr-monitor-body", &YcompilerSsyntaxYsexpr_monitor_body},
  {"*bq-quote*", &YcompilerSsyntaxYTbq_quoteT},
  {"<name>", &YcompilerSsyntaxYLnameG},
  {"sexpr-define-class?", &YcompilerSsyntaxYsexpr_define_classQ},
  {"$sexpr-set-tag", &YcompilerSsyntaxYDsexpr_set_tag},
  {"sexpr-definition-value", &YcompilerSsyntaxYsexpr_definition_value},
  {"sexpr-def-variable", &YcompilerSsyntaxYsexpr_def_variable},
  {"sexpr-block-body", &YcompilerSsyntaxYsexpr_block_body},
  {"sexpr-loc?", &YcompilerSsyntaxYsexpr_locQ},
  {"sexpr-definition-variable", &YcompilerSsyntaxYsexpr_definition_variable},
  {"sexpr-syntax-definition-value", &YcompilerSsyntaxYsexpr_syntax_definition_value},
  {"sexpr-loc-bound-signatures", &YcompilerSsyntaxYsexpr_loc_bound_signatures},
  {"sexpr-method?", &YcompilerSsyntaxYsexpr_methodQ},
  {"sexpr-syntax-if-else", &YcompilerSsyntaxYsexpr_syntax_if_else},
  {"sexpr-make-application", &YcompilerSsyntaxYsexpr_make_application},
  {"sexpr-syntax-if-pattern", &YcompilerSsyntaxYsexpr_syntax_if_pattern},
  {"$sexpr-macro-expand-tag", &YcompilerSsyntaxYDsexpr_macro_expand_tag},
  {"*unique-name-counter*", &YcompilerSsyntaxYTunique_name_counterT},
  {"sexpr-monitor?", &YcompilerSsyntaxYsexpr_monitorQ},
  {"$sexpr-def-tag", &YcompilerSsyntaxYDsexpr_def_tag},
  {"eval", &YcompilerSsyntaxYeval},
  {"sexpr-begin-actions", &YcompilerSsyntaxYsexpr_begin_actions},
  {"$sexpr-monitor-tag", &YcompilerSsyntaxYDsexpr_monitor_tag},
  {"sexpr-iterate-signature", &YcompilerSsyntaxYsexpr_iterate_signature},
  {"$sexpr-macro-tag", &YcompilerSsyntaxYDsexpr_macro_tag},
  {"sexpr-block-name", &YcompilerSsyntaxYsexpr_block_name},
  {"sexpr-syntax-if?", &YcompilerSsyntaxYsexpr_syntax_ifQ},
  {"sexpr-isa-init-values", &YcompilerSsyntaxYsexpr_isa_init_values},
  {"sexpr-prop-owner", &YcompilerSsyntaxYsexpr_prop_owner},
  {"$sexpr-define-syntax-tag", &YcompilerSsyntaxYDsexpr_define_syntax_tag},
  {"sexpr-syntax-definition-variable", &YcompilerSsyntaxYsexpr_syntax_definition_variable},
  {"sexpr-def-value", &YcompilerSsyntaxYsexpr_def_value},
  {"sexpr-syntax-definition?", &YcompilerSsyntaxYsexpr_syntax_definitionQ},
  {"sexpr-prop-init", &YcompilerSsyntaxYsexpr_prop_init},
  {"sexpr-bind-pattern-variables", &YcompilerSsyntaxYsexpr_bind_pattern_variables},
  {"sexpr-syntax-if-then", &YcompilerSsyntaxYsexpr_syntax_if_then},
  {"sexpr-last-exp?", &YcompilerSsyntaxYsexpr_last_expQ},
  {"$sexpr-if-tag", &YcompilerSsyntaxYDsexpr_if_tag},
  {"sexpr-monitor-expand", &YcompilerSsyntaxYsexpr_monitor_expand},
  {"sexpr-first-operand", &YcompilerSsyntaxYsexpr_first_operand},
  {"---main-2---", NULL},
  {"sexpr-loc-body", &YcompilerSsyntaxYsexpr_loc_body},
  {"sexpr-method-signature", &YcompilerSsyntaxYsexpr_method_signature},
  {"sexpr-tagged-list?", &YcompilerSsyntaxYsexpr_tagged_listQ},
  {"---main-0---", NULL},
  {"*bq-list*", &YcompilerSsyntaxYTbq_listT},
  {"sexpr-syntax-if-value", &YcompilerSsyntaxYsexpr_syntax_if_value},
  {"sexpr-function-definition?", &YcompilerSsyntaxYsexpr_function_definitionQ},
  {"$sexpr-define-generic-tag", &YcompilerSsyntaxYDsexpr_define_generic_tag},
  {"sexpr-isa-init-props", &YcompilerSsyntaxYsexpr_isa_init_props},
  {"sexpr-make-syntax-if", &YcompilerSsyntaxYsexpr_make_syntax_if},
  {"$sexpr-begin-tag", &YcompilerSsyntaxYDsexpr_begin_tag},
  {"nreconc", &YcompilerSsyntaxYnreconc},
  {"sexpr-function-signature", &YcompilerSsyntaxYsexpr_function_signature},
  {"sexpr-fab-getter", &YcompilerSsyntaxYsexpr_fab_getter},
  {"sexpr-let?", &YcompilerSsyntaxYsexpr_letQ},
  {"sexpr-operator", &YcompilerSsyntaxYsexpr_operator},
  {"sexpr-assignment-value", &YcompilerSsyntaxYsexpr_assignment_value},
  {"sexpr-self-evaluating?", &YcompilerSsyntaxYsexpr_self_evaluatingQ},
  {"sexpr-assignment-variable", &YcompilerSsyntaxYsexpr_assignment_variable},
  {"sexpr-text-of-quotation", &YcompilerSsyntaxYsexpr_text_of_quotation},
  {"sexpr-begin?", &YcompilerSsyntaxYsexpr_beginQ},
  {"sexpr-fab-setter-name", &YcompilerSsyntaxYsexpr_fab_setter_name},
  {"$sexpr-define-method-tag", &YcompilerSsyntaxYDsexpr_define_method_tag},
  {"sexpr-no-operands?", &YcompilerSsyntaxYsexpr_no_operandsQ},
  {"*comma-atsign*", &YcompilerSsyntaxYTcomma_atsignT},
  {"sexpr-monitor-info", &YcompilerSsyntaxYsexpr_monitor_info},
  {"sexpr-variable-type", &YcompilerSsyntaxYsexpr_variable_type},
  {"sexpr-method-definition?", &YcompilerSsyntaxYsexpr_method_definitionQ},
  {"sexpr-iterate-body", &YcompilerSsyntaxYsexpr_iterate_body},
  {"$sexpr-isa-tag", &YcompilerSsyntaxYDsexpr_isa_tag},
  {"sexpr-function-value", &YcompilerSsyntaxYsexpr_function_value},
  {"sexpr-monitor-test", &YcompilerSsyntaxYsexpr_monitor_test},
  {"$sexpr-define-tag", &YcompilerSsyntaxYDsexpr_define_tag},
  {"sexpr-variable?", &YcompilerSsyntaxYsexpr_variableQ},
  {"sexpr-signature-parameters", &YcompilerSsyntaxYsexpr_signature_parameters},
  {"$sexpr-values-tag", &YcompilerSsyntaxYDsexpr_values_tag},
  {"sexpr-function-parameters", &YcompilerSsyntaxYsexpr_function_parameters},
  {"sexpr-macro?", &YcompilerSsyntaxYsexpr_macroQ},
  {"sexpr-pattern-variable-name", &YcompilerSsyntaxYsexpr_pattern_variable_name},
  {"bracket", &YcompilerSsyntaxYbracket},
  {"sexpr-unquote-splicing?", &YcompilerSsyntaxYsexpr_unquote_splicingQ},
  {"bq-remove-tokens", &YcompilerSsyntaxYbq_remove_tokens},
  {"$sexpr-method-tag", &YcompilerSsyntaxYDsexpr_method_tag},
  {"sexpr-pattern-variable?", &YcompilerSsyntaxYsexpr_pattern_variableQ},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sexpr-operands", "sexpr-operands"},
  {"$sexpr-unwind-protect-tag", "$sexpr-unwind-protect-tag"},
  {"sexpr-function-body", "sexpr-function-body"},
  {"sexpr-expand-backquote", "sexpr-expand-backquote"},
  {"sexpr-make-anonymous-method", "sexpr-make-anonymous-method"},
  {"$sexpr-define-class-tag", "$sexpr-define-class-tag"},
  {"$sexpr-bind-exit-tag", "$sexpr-bind-exit-tag"},
  {"sexpr-sequence->begin", "sexpr-sequence->begin"},
  {"sexpr-make-application", "sexpr-make-application"},
  {"$sexpr-prop-tag", "$sexpr-prop-tag"},
  {"$sexpr-quasiquote-tag", "$sexpr-quasiquote-tag"},
  {"sexpr-unwind-protect-cleanup-forms", "sexpr-unwind-protect-cleanup-forms"},
  {"sexpr-prop-type", "sexpr-prop-type"},
  {"sexpr-forward-primitive?", "sexpr-forward-primitive?"},
  {"sexpr-method-body", "sexpr-method-body"},
  {"sexpr-define-class-parents", "sexpr-define-class-parents"},
  {"sexpr-syntax-if-else", "sexpr-syntax-if-else"},
  {"sexpr-fab-setter", "sexpr-fab-setter"},
  {"sexpr-loc-raw-body", "sexpr-loc-raw-body"},
  {"sexpr-function-definition-variable", "sexpr-function-definition-variable"},
  {"sexpr-loc-bound-bodies", "sexpr-loc-bound-bodies"},
  {"$sexpr-define-function-tag", "$sexpr-define-function-tag"},
  {"sexpr-isa-prop-inits", "sexpr-isa-prop-inits"},
  {"sexpr-prop-init?", "sexpr-prop-init?"},
  {"$sexpr-locals-tag", "$sexpr-locals-tag"},
  {"sexpr-def?", "sexpr-def?"},
  {"sexpr-def-variable", "sexpr-def-variable"},
  {"sexpr-variable-name", "sexpr-variable-name"},
  {"sexpr-make-begin", "sexpr-make-begin"},
  {"sexpr-unwind-protect-protected-form", "sexpr-unwind-protect-protected-form"},
  {"sexpr-unquote?", "sexpr-unquote?"},
  {"sexpr-if-then", "sexpr-if-then"},
  {"sexpr-let->combination", "sexpr-let->combination"},
  {"sexpr-syntax-if-then", "sexpr-syntax-if-then"},
  {"sexpr-isa-parent", "sexpr-isa-parent"},
  {"sexpr-if-test", "sexpr-if-test"},
  {"$sexpr-syntax-if-tag", "$sexpr-syntax-if-tag"},
  {"sexpr-if-else", "sexpr-if-else"},
  {"sexpr-function-definition-value", "sexpr-function-definition-value"},
  {"sexpr-prop-init-var", "sexpr-prop-init-var"},
  {"sexpr-make-macro-function", "sexpr-make-macro-function"},
  {"$sexpr-quote-tag", "$sexpr-quote-tag"},
  {"$sexpr-iterate-tag", "$sexpr-iterate-tag"},
  {"sexpr-signature-value", "sexpr-signature-value"},
  {"sexpr-define-class?", "sexpr-define-class?"},
  {"$sexpr-set-tag", "$sexpr-set-tag"},
  {"sexpr-definition-value", "sexpr-definition-value"},
  {"sexpr-block-body", "sexpr-block-body"},
  {"sexpr-definition-variable", "sexpr-definition-variable"},
  {"sexpr-loc-bound-signatures", "sexpr-loc-bound-signatures"},
  {"sexpr-syntax-if-pattern", "sexpr-syntax-if-pattern"},
  {"$sexpr-macro-expand-tag", "$sexpr-macro-expand-tag"},
  {"$sexpr-def-tag", "$sexpr-def-tag"},
  {"eval", "eval"},
  {"sexpr-iterate->loc", "sexpr-iterate->loc"},
  {"$sexpr-let-tag", "$sexpr-let-tag"},
  {"$sexpr-monitor-tag", "$sexpr-monitor-tag"},
  {"sexpr-syntax-definition-value", "sexpr-syntax-definition-value"},
  {"sexpr-block-name", "sexpr-block-name"},
  {"sexpr-isa-init-values", "sexpr-isa-init-values"},
  {"sexpr-prop-owner", "sexpr-prop-owner"},
  {"$sexpr-define-syntax-tag", "$sexpr-define-syntax-tag"},
  {"sexpr-syntax-definition-variable", "sexpr-syntax-definition-variable"},
  {"sexpr-def-value", "sexpr-def-value"},
  {"sexpr-prop-init", "sexpr-prop-init"},
  {"sexpr-bind-pattern-variables", "sexpr-bind-pattern-variables"},
  {"$sexpr-if-tag", "$sexpr-if-tag"},
  {"sexpr-monitor-expand", "sexpr-monitor-expand"},
  {"sexpr-method-signature", "sexpr-method-signature"},
  {"sexpr-syntax-if-value", "sexpr-syntax-if-value"},
  {"$sexpr-define-generic-tag", "$sexpr-define-generic-tag"},
  {"sexpr-isa-init-props", "sexpr-isa-init-props"},
  {"sexpr-prop-name", "sexpr-prop-name"},
  {"$sexpr-begin-tag", "$sexpr-begin-tag"},
  {"sexpr-function-signature", "sexpr-function-signature"},
  {"sexpr-fab-getter", "sexpr-fab-getter"},
  {"sexpr-operator", "sexpr-operator"},
  {"sexpr-loc-bound-names", "sexpr-loc-bound-names"},
  {"sexpr-assignment-value", "sexpr-assignment-value"},
  {"sexpr-assignment-variable", "sexpr-assignment-variable"},
  {"sexpr-text-of-quotation", "sexpr-text-of-quotation"},
  {"sexpr-fab-setter-name", "sexpr-fab-setter-name"},
  {"$sexpr-define-method-tag", "$sexpr-define-method-tag"},
  {"sexpr-variable-type", "sexpr-variable-type"},
  {"$sexpr-isa-tag", "$sexpr-isa-tag"},
  {"$sexpr-define-tag", "$sexpr-define-tag"},
  {"sexpr-variable?", "sexpr-variable?"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"sexpr-unquote-splicing?", "sexpr-unquote-splicing?"},
  {"$sexpr-method-tag", "$sexpr-method-tag"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_compilerSsyntax;
MODULE_INFO module_info_compilerSsyntax = {
  "compiler/syntax",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_runtimeSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_runtimeSruntime (void);
extern void load_module_gooSmath (void);
extern void load_module_gooStype (void);
extern void load_module_gooScollections (void);

/* EXPRESSION: */

extern void load_module_compilerSsyntax (void);

void load_module_compilerSsyntax (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_runtimeSruntime();
  load_module_gooSmath();
  load_module_gooStype();
  load_module_gooScollections();

  (P)YcompilerSsyntaxY___main_0___();
  (P)YcompilerSsyntaxY___main_1___();
  (P)YcompilerSsyntaxY___main_2___();

}

/* END OF GENERATED CODE. */
