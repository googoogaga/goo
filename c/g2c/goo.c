/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo */

EXT(YgooSmathYabs,"goo/math","abs");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YcompilerSsyntaxYsexpr_make_begin,"compiler/syntax","sexpr-make-begin");
EXT(YPprop,"runtime/boot","%prop");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScollectionsSlistYassq,"goo/collections/list","assq");
EXT(YPisa,"runtime/boot","%isa");
EXT(YcompilerSsyntaxYsexpr_sequence_Gbegin,"compiler/syntax","sexpr-sequence->begin");
EXT(YruntimeSruntimeYloc_val_setter,"runtime/runtime","loc-val-setter");
EXT(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(YcompilerSsyntaxYsexpr_fab_getter,"compiler/syntax","sexpr-fab-getter");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YcompilerSsyntaxYsexpr_if_test,"compiler/syntax","sexpr-if-test");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YcompilerSsyntaxYsexpr_syntax_if_pattern,"compiler/syntax","sexpr-syntax-if-pattern");
EXT(YcompilerSsyntaxYDsexpr_begin_tag,"compiler/syntax","$sexpr-begin-tag");
EXT(YcompilerSsyntaxYsexpr_isa_init_values,"compiler/syntax","sexpr-isa-init-values");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YruntimeSruntimeYcurry,"runtime/runtime","curry");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScollectionsSsequenceYinsX,"goo/collections/sequence","ins!");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YruntimeSruntimeYbuild_condition_for_handler_interactively,"runtime/runtime","build-condition-for-handler-interactively");
EXT(YcompilerSsyntaxYsexpr_loc_bound_signatures,"compiler/syntax","sexpr-loc-bound-signatures");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YruntimeSruntimeYbuild_condition_interactively,"runtime/runtime","build-condition-interactively");
EXT(YruntimeSruntimeYloc_val,"runtime/runtime","loc-val");
EXT(YruntimeSruntimeYdefault_handler,"runtime/runtime","default-handler");
EXT(YgooScollectionsStableYid_hash,"goo/collections/table","id-hash");
EXT(YcompilerSsyntaxYsexpr_defQ,"compiler/syntax","sexpr-def?");
EXT(YcompilerSsyntaxYsexpr_make_anonymous_method,"compiler/syntax","sexpr-make-anonymous-method");
EXT(YcompilerSsyntaxYsexpr_isa_init_props,"compiler/syntax","sexpr-isa-init-props");
EXT(Yhead,"runtime/boot","head");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YcompilerSsyntaxYDsexpr_define_tag,"compiler/syntax","$sexpr-define-tag");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YcompilerSsyntaxYDsexpr_let_tag,"compiler/syntax","$sexpr-let-tag");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YgooScollectionsSzipYLzipG,"goo/collections/zip","<zip>");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooScollectionsSstringYascii_limit,"goo/collections/string","ascii-limit");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YcompilerSsyntaxYDsexpr_if_tag,"compiler/syntax","$sexpr-if-tag");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YcompilerSsyntaxYsexpr_def_value,"compiler/syntax","sexpr-def-value");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(YgooScollectionsSassocYLassocsG,"goo/collections/assoc","<assocs>");
EXT(YcompilerSsyntaxYDsexpr_set_tag,"compiler/syntax","$sexpr-set-tag");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(YruntimeSruntimeYdescribe_condition,"runtime/runtime","describe-condition");
EXT(YgooSaccumulatorYLaccumG,"goo/accumulator","<accum>");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YcompilerSsyntaxYsexpr_variable_type,"compiler/syntax","sexpr-variable-type");
EXT(YgooScollectionsStableYtab_hash,"goo/collections/table","tab-hash");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YcompilerSsyntaxYsexpr_let_Gcombination,"compiler/syntax","sexpr-let->combination");
EXT(YcompilerSsyntaxYsexpr_signature_value,"compiler/syntax","sexpr-signature-value");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YruntimeSruntimeYdefault_handler_description,"runtime/runtime","default-handler-description");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSaccumulatorYaccum_res,"goo/accumulator","accum-res");
EXT(YruntimeSruntimeYlist_handlers,"runtime/runtime","list-handlers");
EXT(YruntimeSruntimeYidentity,"runtime/runtime","identity");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YruntimeSruntimeYapp_args,"runtime/runtime","app-args");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YcompilerSsyntaxYDsexpr_define_class_tag,"compiler/syntax","$sexpr-define-class-tag");
EXT(YcompilerSsyntaxYsexpr_syntax_if_value,"compiler/syntax","sexpr-syntax-if-value");
EXT(YgooSmathYT,"goo/math","*");
EXT(YcompilerSsyntaxYsexpr_assignment_value,"compiler/syntax","sexpr-assignment-value");
EXT(YcompilerSsyntaxYsexpr_operator,"compiler/syntax","sexpr-operator");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(YcompilerSsyntaxYsexpr_if_else,"compiler/syntax","sexpr-if-else");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Ynot,"runtime/boot","not");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(YruntimeSruntimeYchoose_handler,"runtime/runtime","choose-handler");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScollectionsScycleYcycle,"goo/collections/cycle","cycle");
EXT(YruntimeSruntimeYspread,"runtime/runtime","spread");
EXT(YruntimeSruntimeYhandler_matchesQ,"runtime/runtime","handler-matches?");
EXT(YruntimeSruntimeYrcurry,"runtime/runtime","rcurry");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YgooScollectionsScycleYLcycleG,"goo/collections/cycle","<cycle>");
EXT(YcompilerSsyntaxYDsexpr_syntax_if_tag,"compiler/syntax","$sexpr-syntax-if-tag");
EXT(YgooScollectionsSlistYassqn,"goo/collections/list","assqn");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ylst,"runtime/boot","lst");
EXT(YruntimeSruntimeYDdefault_handler_info,"runtime/runtime","$default-handler-info");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(YruntimeSruntimeYcondition_arguments,"runtime/runtime","condition-arguments");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(YOlst,"runtime/boot","@lst");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScollectionsStableYtab_test,"goo/collections/table","tab-test");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YruntimeSruntimeYformat_to_string,"runtime/runtime","format-to-string");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(Yerror,"runtime/boot","error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooScollectionsSsequenceYins,"goo/collections/sequence","ins");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YruntimeSruntimeYread,"runtime/runtime","read");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YcompilerSsyntaxYDsexpr_bind_exit_tag,"compiler/syntax","$sexpr-bind-exit-tag");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(YcompilerSsyntaxYsexpr_prop_owner,"compiler/syntax","sexpr-prop-owner");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(YcompilerSsyntaxYDsexpr_prop_tag,"compiler/syntax","$sexpr-prop-tag");
EXT(YcompilerSsyntaxYsexpr_function_definition_value,"compiler/syntax","sexpr-function-definition-value");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YcompilerSsyntaxYsexpr_function_body,"compiler/syntax","sexpr-function-body");
EXT(YgooScollectionsSsequenceYdo_key_vals,"goo/collections/sequence","do-key-vals");
EXT(YcompilerSsyntaxYsexpr_if_then,"compiler/syntax","sexpr-if-then");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(YcompilerSsyntaxYsexpr_method_body,"compiler/syntax","sexpr-method-body");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YruntimeSruntimeYLhandler_infoG,"runtime/runtime","<handler-info>");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScollectionsStableYcase_insensitive_string_equal,"goo/collections/table","case-insensitive-string-equal");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YruntimeSruntimeYTgensym_counterT,"runtime/runtime","*gensym-counter*");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(YgooScollectionsStableYDpermanent_hash_state,"goo/collections/table","$permanent-hash-state");
EXT(YgooScollectionsSrangeYrange_by,"goo/collections/range","range-by");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(Ynil,"runtime/boot","nil");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YcompilerSsyntaxYsexpr_def_variable,"compiler/syntax","sexpr-def-variable");
EXT(YcompilerSsyntaxYsexpr_text_of_quotation,"compiler/syntax","sexpr-text-of-quotation");
EXT(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YcompilerSsyntaxYDsexpr_macro_expand_tag,"compiler/syntax","$sexpr-macro-expand-tag");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YruntimeSruntimeYhandler_function,"runtime/runtime","handler-function");
EXT(YgooScollectionsSstringYstr_to_num,"goo/collections/string","str-to-num");
EXT(YcompilerSsyntaxYsexpr_isa_prop_inits,"compiler/syntax","sexpr-isa-prop-inits");
EXT(YcompilerSsyntaxYsexpr_loc_raw_body,"compiler/syntax","sexpr-loc-raw-body");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YcompilerSsyntaxYsexpr_make_application,"compiler/syntax","sexpr-make-application");
EXT(YcompilerSsyntaxYDsexpr_def_tag,"compiler/syntax","$sexpr-def-tag");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YgooScollectionsSsequenceYvals_to_str,"goo/collections/sequence","vals-to-str");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooScollectionsSmapYfab_map,"goo/collections/map","fab-map");
EXT(YcompilerSsyntaxYsexpr_unwind_protect_protected_form,"compiler/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YgooScollectionsSsequenceYrange_checkQ,"goo/collections/sequence","range-check?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(YcompilerSsyntaxYDsexpr_unwind_protect_tag,"compiler/syntax","$sexpr-unwind-protect-tag");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YcompilerSsyntaxYDsexpr_define_syntax_tag,"compiler/syntax","$sexpr-define-syntax-tag");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(YcompilerSsyntaxYDsexpr_method_tag,"compiler/syntax","$sexpr-method-tag");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YcompilerSsyntaxYsexpr_block_body,"compiler/syntax","sexpr-block-body");
EXT(YcompilerSsyntaxYsexpr_function_definition_variable,"compiler/syntax","sexpr-function-definition-variable");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooScollectionsStableYLstr_tabG,"goo/collections/table","<str-tab>");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YcompilerSsyntaxYsexpr_loc_bound_names,"compiler/syntax","sexpr-loc-bound-names");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
EXT(YcompilerSsyntaxYsexpr_unquoteQ,"compiler/syntax","sexpr-unquote?");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(YruntimeSruntimeYcondition_message,"runtime/runtime","condition-message");
EXT(Yvec,"runtime/boot","vec");
EXT(YcompilerSsyntaxYsexpr_definition_variable,"compiler/syntax","sexpr-definition-variable");
EXT(YcompilerSsyntaxYsexpr_syntax_if_else,"compiler/syntax","sexpr-syntax-if-else");
EXT(YcompilerSsyntaxYsexpr_operands,"compiler/syntax","sexpr-operands");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YruntimeSruntimeYfab_handler,"runtime/runtime","fab-handler");
EXT(YgooScollectionsStableYcase_insensitive_string_hash,"goo/collections/table","case-insensitive-string-hash");
EXT(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YruntimeSruntimeYLconditionG,"runtime/runtime","<condition>");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YcompilerSsyntaxYsexpr_define_classQ,"compiler/syntax","sexpr-define-class?");
EXT(YcompilerSsyntaxYDsexpr_define_method_tag,"compiler/syntax","$sexpr-define-method-tag");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YcompilerSsyntaxYsexpr_variable_name,"compiler/syntax","sexpr-variable-name");
EXT(YgooSmathYE,"goo/math","=");
EXT(YcompilerSsyntaxYsexpr_signature_parameters,"compiler/syntax","sexpr-signature-parameters");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YgooScollectionsSsequenceYrange_check,"goo/collections/sequence","range-check");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YcompilerSsyntaxYsexpr_assignment_variable,"compiler/syntax","sexpr-assignment-variable");
EXT(YgooSaccumulatorYaccum_add,"goo/accumulator","accum-add");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScollectionsSassocYassocs_test_setter,"goo/collections/assoc","assocs-test-setter");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YcompilerSsyntaxYDsexpr_monitor_tag,"compiler/syntax","$sexpr-monitor-tag");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YruntimeSruntimeYformat,"runtime/runtime","format");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YcompilerSsyntaxYsexpr_make_macro_function,"compiler/syntax","sexpr-make-macro-function");
EXT(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(YcompilerSsyntaxYsexpr_method_signature,"compiler/syntax","sexpr-method-signature");
EXT(YruntimeSruntimeYapp_filename,"runtime/runtime","app-filename");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YcompilerSsyntaxYsexpr_block_name,"compiler/syntax","sexpr-block-name");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YcompilerSsyntaxYsexpr_forward_primitiveQ,"compiler/syntax","sexpr-forward-primitive?");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YcompilerSsyntaxYsexpr_function_signature,"compiler/syntax","sexpr-function-signature");
EXT(YcompilerSsyntaxYsexpr_definition_value,"compiler/syntax","sexpr-definition-value");
EXT(YgooScollectionsSstringYstr,"goo/collections/string","str");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YcompilerSsyntaxYsexpr_syntax_definition_value,"compiler/syntax","sexpr-syntax-definition-value");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YcompilerSsyntaxYsexpr_isa_parent,"compiler/syntax","sexpr-isa-parent");
EXT(YcompilerSsyntaxYsexpr_define_class_parents,"compiler/syntax","sexpr-define-class-parents");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YcompilerSsyntaxYDsexpr_isa_tag,"compiler/syntax","$sexpr-isa-tag");
EXT(YcompilerSsyntaxYsexpr_prop_init_var,"compiler/syntax","sexpr-prop-init-var");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScollectionsStableYtab_growth_threshold_setter,"goo/collections/table","tab-growth-threshold-setter");
EXT(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
EXT(Ytail,"runtime/boot","tail");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YgooScollectionsSrangeYrange,"goo/collections/range","range");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YruntimeSruntimeYLrestartG,"runtime/runtime","<restart>");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(YruntimeSruntimeYinvoke_handler_interactively,"runtime/runtime","invoke-handler-interactively");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YcompilerSsyntaxYsexpr_syntax_definition_variable,"compiler/syntax","sexpr-syntax-definition-variable");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YgooScollectionsStableYtab_shrink_threshold_setter,"goo/collections/table","tab-shrink-threshold-setter");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(YgooScollectionsSrangeYfrom,"goo/collections/range","from");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooScollectionsStableYtab_gc_state,"goo/collections/table","tab-gc-state");
EXT(YruntimeSruntimeYLsimple_conditionG,"runtime/runtime","<simple-condition>");
EXT(YgooScollectionsSsequenceYfinds,"goo/collections/sequence","finds");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(YruntimeSruntimeYLsimple_errorG,"runtime/runtime","<simple-error>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScollectionsSassocYassocs_test,"goo/collections/assoc","assocs-test");
EXT(YgooSaccumulatorYaccumer,"goo/accumulator","accumer");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YcompilerSsyntaxYsexpr_syntax_if_then,"compiler/syntax","sexpr-syntax-if-then");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YcompilerSsyntaxYsexpr_monitor_expand,"compiler/syntax","sexpr-monitor-expand");
EXT(YcompilerSsyntaxYsexpr_unwind_protect_cleanup_forms,"compiler/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(YgooScollectionsStableYtab_shrink_threshold,"goo/collections/table","tab-shrink-threshold");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScollectionsSstringYascii_whitespaces,"goo/collections/string","ascii-whitespaces");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YruntimeSruntimeYsig,"runtime/runtime","sig");
EXT(YgooScollectionsStableYtab_growth_threshold,"goo/collections/table","tab-growth-threshold");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSzipYzip,"goo/collections/zip","zip");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YcompilerSsyntaxYsexpr_bind_pattern_variables,"compiler/syntax","sexpr-bind-pattern-variables");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(YgooScollectionsSzipYunzip,"goo/collections/zip","unzip");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YcompilerSsyntaxYsexpr_variableQ,"compiler/syntax","sexpr-variable?");
EXT(YcompilerSsyntaxYDsexpr_define_generic_tag,"compiler/syntax","$sexpr-define-generic-tag");
EXT(YgooScollectionsStableYtab_growth_factor_setter,"goo/collections/table","tab-growth-factor-setter");
EXT(YgooScollectionsStableYtab_growth_factor,"goo/collections/table","tab-growth-factor");
EXT(YcompilerSsyntaxYsexpr_prop_init,"compiler/syntax","sexpr-prop-init");
EXT(YgooScollectionsSstepYfirst_then,"goo/collections/step","first-then");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
EXT(YcompilerSsyntaxYDsexpr_iterate_tag,"compiler/syntax","$sexpr-iterate-tag");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YruntimeSruntimeYLhandlerG,"runtime/runtime","<handler>");
EXT(YgooScollectionsStableYLsetG,"goo/collections/table","<set>");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(YcompilerSsyntaxYsexpr_prop_initQ,"compiler/syntax","sexpr-prop-init?");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(YcompilerSsyntaxYsexpr_unquote_splicingQ,"compiler/syntax","sexpr-unquote-splicing?");
EXT(YcompilerSsyntaxYsexpr_loc_bound_bodies,"compiler/syntax","sexpr-loc-bound-bodies");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YruntimeSruntimeYLserious_conditionG,"runtime/runtime","<serious-condition>");
EXT(YcompilerSsyntaxYDsexpr_define_function_tag,"compiler/syntax","$sexpr-define-function-tag");
EXT(YcompilerSsyntaxYsexpr_fab_setter_name,"compiler/syntax","sexpr-fab-setter-name");
EXT(YcompilerSsyntaxYsexpr_prop_name,"compiler/syntax","sexpr-prop-name");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(YcompilerSsyntaxYDsexpr_quasiquote_tag,"compiler/syntax","$sexpr-quasiquote-tag");
EXT(YPsnul,"runtime/boot","%snul");
EXT(YruntimeSruntimeYcompose,"runtime/runtime","compose");
EXT(YgooScollectionsSstringYTprint_baseT,"goo/collections/string","*print-base*");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YruntimeSruntimeYdescribe_handler,"runtime/runtime","describe-handler");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YgooScollectionsSrangeYLrangeG,"goo/collections/range","<range>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YgooSmathYS,"goo/math","/");
EXT(YcompilerSsyntaxYsexpr_prop_type,"compiler/syntax","sexpr-prop-type");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(YgooScollectionsSstepYLstepG,"goo/collections/step","<step>");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YcompilerSsyntaxYeval,"compiler/syntax","eval");
EXT(YruntimeSruntimeYLerrorG,"runtime/runtime","<error>");
EXT(YgooScollectionsSlistYlist,"goo/collections/list","list");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YcompilerSsyntaxYsexpr_fab_setter,"compiler/syntax","sexpr-fab-setter");
EXT(YcompilerSsyntaxYsexpr_expand_backquote,"compiler/syntax","sexpr-expand-backquote");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScollectionsSmapYLmapG,"goo/collections/map","<map>");
EXT(YgooScollectionsSstringYnum_to_str_base,"goo/collections/string","num-to-str-base");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSaccumulatorYaccum_fab,"goo/accumulator","accum-fab");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YcompilerSsyntaxYDsexpr_quote_tag,"compiler/syntax","$sexpr-quote-tag");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YcompilerSsyntaxYDsexpr_locals_tag,"compiler/syntax","$sexpr-locals-tag");
EXT(YruntimeSruntimeYalways,"runtime/runtime","always");
EXT(YcompilerSsyntaxYsexpr_iterate_Gloc,"compiler/syntax","sexpr-iterate->loc");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YgooY___main_0___ ();

/* FUNCTION CODES: */

P YgooY___main_0___() {
  P T0;
loop:
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_runtimeSruntime;
extern MODULE_INFO module_info_gooScollections;
extern MODULE_INFO module_info_gooSaccumulator;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_compilerSsyntax;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_gooScollectionsSbuffer;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooScollectionsStable;
extern MODULE_INFO module_info_gooScollectionsSzip;
extern MODULE_INFO module_info_gooScollectionsSstring;
extern MODULE_INFO module_info_gooSmagnitude;
extern MODULE_INFO module_info_gooScollectionsSassoc;
extern MODULE_INFO module_info_gooScollectionsScycle;
extern MODULE_INFO module_info_gooScollectionsSrange;
extern MODULE_INFO module_info_gooScollectionsSmap;
extern MODULE_INFO module_info_gooScollectionsSstep;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_runtimeSruntime},
  {&module_info_gooScollections},
  {&module_info_gooSaccumulator},
  {&module_info_gooSioSwrite},
  {&module_info_gooSioSread},
  {&module_info_compilerSsyntax},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"set", &module_info_runtimeSboot, "set"},
  {"abs", &module_info_gooSmath, "abs"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"get", &module_info_gooSioSport, "get"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"sexpr-make-begin", &module_info_compilerSsyntax, "sexpr-make-begin"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"as", &module_info_gooStypes, "as"},
  {"out", &module_info_gooSioSport, "out"},
  {"tan", &module_info_gooSmath, "tan"},
  {"put", &module_info_gooSioSport, "put"},
  {"assq", &module_info_gooScollectionsSlist, "assq"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"sexpr-sequence->begin", &module_info_compilerSsyntax, "sexpr-sequence->begin"},
  {"loc-val-setter", &module_info_runtimeSruntime, "loc-val-setter"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"try", &module_info_runtimeSboot, "try"},
  {"buf", &module_info_gooScollectionsSbuffer, "buf"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"accuming-with", &module_info_gooSaccumulator, "accuming-with"},
  {"sexpr-fab-getter", &module_info_compilerSsyntax, "sexpr-fab-getter"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"close", &module_info_gooSioSport, "close"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"sexpr-if-test", &module_info_compilerSsyntax, "sexpr-if-test"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"sexpr-syntax-if-pattern", &module_info_compilerSsyntax, "sexpr-syntax-if-pattern"},
  {"$sexpr-begin-tag", &module_info_compilerSsyntax, "$sexpr-begin-tag"},
  {"sexpr-isa-init-values", &module_info_compilerSsyntax, "sexpr-isa-init-values"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"curry", &module_info_runtimeSruntime, "curry"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"ins!", &module_info_gooScollectionsSsequence, "ins!"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"~=", &module_info_gooSmath, "~="},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"build-condition-for-handler-interactively", &module_info_runtimeSruntime, "build-condition-for-handler-interactively"},
  {"sexpr-loc-bound-signatures", &module_info_compilerSsyntax, "sexpr-loc-bound-signatures"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"build-condition-interactively", &module_info_runtimeSruntime, "build-condition-interactively"},
  {"loc-val", &module_info_runtimeSruntime, "loc-val"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"default-handler", &module_info_runtimeSruntime, "default-handler"},
  {"id-hash", &module_info_gooScollectionsStable, "id-hash"},
  {"sexpr-def?", &module_info_compilerSsyntax, "sexpr-def?"},
  {"sexpr-make-anonymous-method", &module_info_compilerSsyntax, "sexpr-make-anonymous-method"},
  {"sexpr-isa-init-props", &module_info_compilerSsyntax, "sexpr-isa-init-props"},
  {"head", &module_info_runtimeSboot, "head"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"$sexpr-define-tag", &module_info_compilerSsyntax, "$sexpr-define-tag"},
  {"when", &module_info_gooSmacros, "when"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"$sexpr-let-tag", &module_info_compilerSsyntax, "$sexpr-let-tag"},
  {"in", &module_info_gooSioSport, "in"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"<zip>", &module_info_gooScollectionsSzip, "<zip>"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"ascii-limit", &module_info_gooScollectionsSstring, "ascii-limit"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"$sexpr-if-tag", &module_info_compilerSsyntax, "$sexpr-if-tag"},
  {"export", &module_info_runtimeSboot, "export"},
  {"acos", &module_info_gooSmath, "acos"},
  {"sexpr-def-value", &module_info_compilerSsyntax, "sexpr-def-value"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"<assocs>", &module_info_gooScollectionsSassoc, "<assocs>"},
  {"$sexpr-set-tag", &module_info_compilerSsyntax, "$sexpr-set-tag"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"describe-condition", &module_info_runtimeSruntime, "describe-condition"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"<accum>", &module_info_gooSaccumulator, "<accum>"},
  {"while", &module_info_gooSmacros, "while"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"t*", &module_info_gooStypes, "t*"},
  {"sexpr-variable-type", &module_info_compilerSsyntax, "sexpr-variable-type"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"tab-hash", &module_info_gooScollectionsStable, "tab-hash"},
  {"even?", &module_info_gooSmath, "even?"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"push", &module_info_gooScollectionsSlist, "push"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"sexpr-let->combination", &module_info_compilerSsyntax, "sexpr-let->combination"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"sexpr-signature-value", &module_info_compilerSsyntax, "sexpr-signature-value"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"default-handler-description", &module_info_runtimeSruntime, "default-handler-description"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"atan", &module_info_gooSmath, "atan"},
  {"accum-res", &module_info_gooSaccumulator, "accum-res"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"list-handlers", &module_info_runtimeSruntime, "list-handlers"},
  {"identity", &module_info_runtimeSruntime, "identity"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"app-args", &module_info_runtimeSruntime, "app-args"},
  {"1-", &module_info_gooSmath, "1-"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"$sexpr-define-class-tag", &module_info_compilerSsyntax, "$sexpr-define-class-tag"},
  {"sexpr-syntax-if-value", &module_info_compilerSsyntax, "sexpr-syntax-if-value"},
  {"*", &module_info_gooSmath, "*"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"sexpr-assignment-value", &module_info_compilerSsyntax, "sexpr-assignment-value"},
  {"sexpr-operator", &module_info_compilerSsyntax, "sexpr-operator"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"sexpr-if-else", &module_info_compilerSsyntax, "sexpr-if-else"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"not", &module_info_runtimeSboot, "not"},
  {"sin", &module_info_gooSmath, "sin"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"choose-handler", &module_info_runtimeSruntime, "choose-handler"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"cycle", &module_info_gooScollectionsScycle, "cycle"},
  {"spread", &module_info_runtimeSruntime, "spread"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"handler-matches?", &module_info_runtimeSruntime, "handler-matches?"},
  {"rcurry", &module_info_runtimeSruntime, "rcurry"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"<cycle>", &module_info_gooScollectionsScycle, "<cycle>"},
  {"$sexpr-syntax-if-tag", &module_info_compilerSsyntax, "$sexpr-syntax-if-tag"},
  {"assqn", &module_info_gooScollectionsSlist, "assqn"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"~", &module_info_gooSmath, "~"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {"$default-handler-info", &module_info_runtimeSruntime, "$default-handler-info"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"condition-arguments", &module_info_runtimeSruntime, "condition-arguments"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"~==", &module_info_gooSmath, "~=="},
  {"tab-test", &module_info_gooScollectionsStable, "tab-test"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"map", &module_info_gooSmacros, "map"},
  {"format-to-string", &module_info_runtimeSruntime, "format-to-string"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"error", &module_info_runtimeSboot, "error"},
  {">>", &module_info_gooSmath, ">>"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"round/", &module_info_gooSmath, "round/"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"ins", &module_info_gooScollectionsSsequence, "ins"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"1+", &module_info_gooSmath, "1+"},
  {"read", &module_info_runtimeSruntime, "read"},
  {"match", &module_info_gooSmacros, "match"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"$sexpr-bind-exit-tag", &module_info_compilerSsyntax, "$sexpr-bind-exit-tag"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"sexpr-prop-owner", &module_info_compilerSsyntax, "sexpr-prop-owner"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"$sexpr-prop-tag", &module_info_compilerSsyntax, "$sexpr-prop-tag"},
  {"sexpr-function-definition-value", &module_info_compilerSsyntax, "sexpr-function-definition-value"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"sexpr-function-body", &module_info_compilerSsyntax, "sexpr-function-body"},
  {"do-key-vals", &module_info_gooScollectionsSsequence, "do-key-vals"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"sexpr-if-then", &module_info_compilerSsyntax, "sexpr-if-then"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"sexpr-method-body", &module_info_compilerSsyntax, "sexpr-method-body"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"^", &module_info_gooSmath, "^"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<handler-info>", &module_info_runtimeSruntime, "<handler-info>"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"accum", &module_info_gooSaccumulator, "accum"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"case-insensitive-string-equal", &module_info_gooScollectionsStable, "case-insensitive-string-equal"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"*gensym-counter*", &module_info_runtimeSruntime, "*gensym-counter*"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"$permanent-hash-state", &module_info_gooScollectionsStable, "$permanent-hash-state"},
  {"range-by", &module_info_gooScollectionsSrange, "range-by"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"sexpr-def-variable", &module_info_compilerSsyntax, "sexpr-def-variable"},
  {"sexpr-text-of-quotation", &module_info_compilerSsyntax, "sexpr-text-of-quotation"},
  {"len-setter", &module_info_gooScollectionsSbuffer, "len-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"$sexpr-macro-expand-tag", &module_info_compilerSsyntax, "$sexpr-macro-expand-tag"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"handler-function", &module_info_runtimeSruntime, "handler-function"},
  {"str-to-num", &module_info_gooScollectionsSstring, "str-to-num"},
  {"sexpr-isa-prop-inits", &module_info_compilerSsyntax, "sexpr-isa-prop-inits"},
  {"sexpr-loc-raw-body", &module_info_compilerSsyntax, "sexpr-loc-raw-body"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"mod", &module_info_gooSmath, "mod"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"sexpr-make-application", &module_info_compilerSsyntax, "sexpr-make-application"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"$sexpr-def-tag", &module_info_compilerSsyntax, "$sexpr-def-tag"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"rem", &module_info_gooSmath, "rem"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"accuming", &module_info_gooSaccumulator, "accuming"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {">", &module_info_gooSmagnitude, ">"},
  {"vals-to-str", &module_info_gooScollectionsSsequence, "vals-to-str"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"max", &module_info_gooSmagnitude, "max"},
  {"&", &module_info_gooSmath, "&"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"fab-map", &module_info_gooScollectionsSmap, "fab-map"},
  {"sexpr-unwind-protect-protected-form", &module_info_compilerSsyntax, "sexpr-unwind-protect-protected-form"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"|", &module_info_gooSmath, "|"},
  {"df", &module_info_runtimeSboot, "df"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"range-check?", &module_info_gooScollectionsSsequence, "range-check?"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"$sexpr-unwind-protect-tag", &module_info_compilerSsyntax, "$sexpr-unwind-protect-tag"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"log", &module_info_gooSmath, "log"},
  {"$sexpr-define-syntax-tag", &module_info_compilerSsyntax, "$sexpr-define-syntax-tag"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"$sexpr-method-tag", &module_info_compilerSsyntax, "$sexpr-method-tag"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"sexpr-block-body", &module_info_compilerSsyntax, "sexpr-block-body"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"sexpr-function-definition-variable", &module_info_compilerSsyntax, "sexpr-function-definition-variable"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<str-tab>", &module_info_gooScollectionsStable, "<str-tab>"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"sexpr-loc-bound-names", &module_info_compilerSsyntax, "sexpr-loc-bound-names"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"<", &module_info_gooSmagnitude, "<"},
  {"do3", &module_info_gooScollectionsScollection, "do3"},
  {"sexpr-unquote?", &module_info_compilerSsyntax, "sexpr-unquote?"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"condition-message", &module_info_runtimeSruntime, "condition-message"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"sexpr-definition-variable", &module_info_compilerSsyntax, "sexpr-definition-variable"},
  {"sexpr-syntax-if-else", &module_info_compilerSsyntax, "sexpr-syntax-if-else"},
  {"sexpr-operands", &module_info_compilerSsyntax, "sexpr-operands"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"fab-handler", &module_info_runtimeSruntime, "fab-handler"},
  {"case-insensitive-string-hash", &module_info_gooScollectionsStable, "case-insensitive-string-hash"},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"as-copy", &module_info_gooScollectionsScollection, "as-copy"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"<condition>", &module_info_runtimeSruntime, "<condition>"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"<buf>", &module_info_gooScollectionsSbuffer, "<buf>"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"if", &module_info_runtimeSboot, "if"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"use", &module_info_runtimeSboot, "use"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"sexpr-define-class?", &module_info_compilerSsyntax, "sexpr-define-class?"},
  {"$sexpr-define-method-tag", &module_info_compilerSsyntax, "$sexpr-define-method-tag"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"sexpr-variable-name", &module_info_compilerSsyntax, "sexpr-variable-name"},
  {"=", &module_info_gooSmath, "="},
  {"sexpr-signature-parameters", &module_info_compilerSsyntax, "sexpr-signature-parameters"},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"range-check", &module_info_gooScollectionsSsequence, "range-check"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"or", &module_info_gooSmacros, "or"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"until", &module_info_gooSmacros, "until"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"sexpr-assignment-variable", &module_info_compilerSsyntax, "sexpr-assignment-variable"},
  {"accum-add", &module_info_gooSaccumulator, "accum-add"},
  {"$e", &module_info_gooSmath, "$e"},
  {"assocs-test-setter", &module_info_gooScollectionsSassoc, "assocs-test-setter"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"$sexpr-monitor-tag", &module_info_compilerSsyntax, "$sexpr-monitor-tag"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"format", &module_info_runtimeSruntime, "format"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"sexpr-make-macro-function", &module_info_compilerSsyntax, "sexpr-make-macro-function"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"len/fill-setter", &module_info_gooScollectionsSbuffer, "len/fill-setter"},
  {"def", &module_info_runtimeSboot, "def"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"sexpr-method-signature", &module_info_compilerSsyntax, "sexpr-method-signature"},
  {"app-filename", &module_info_runtimeSruntime, "app-filename"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"+", &module_info_gooSmath, "+"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<<", &module_info_gooSmath, "<<"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"sexpr-block-name", &module_info_compilerSsyntax, "sexpr-block-name"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"sexpr-forward-primitive?", &module_info_compilerSsyntax, "sexpr-forward-primitive?"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"and", &module_info_gooSmacros, "and"},
  {"sexpr-function-signature", &module_info_compilerSsyntax, "sexpr-function-signature"},
  {"sexpr-definition-value", &module_info_compilerSsyntax, "sexpr-definition-value"},
  {"str", &module_info_gooScollectionsSstring, "str"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"sexpr-syntax-definition-value", &module_info_compilerSsyntax, "sexpr-syntax-definition-value"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"sexpr-isa-parent", &module_info_compilerSsyntax, "sexpr-isa-parent"},
  {"sexpr-define-class-parents", &module_info_compilerSsyntax, "sexpr-define-class-parents"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"$sexpr-isa-tag", &module_info_compilerSsyntax, "$sexpr-isa-tag"},
  {"sexpr-prop-init-var", &module_info_compilerSsyntax, "sexpr-prop-init-var"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"tab-growth-threshold-setter", &module_info_gooScollectionsStable, "tab-growth-threshold-setter"},
  {"dup", &module_info_gooScollectionsScollection, "dup"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"range", &module_info_gooScollectionsSrange, "range"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"<restart>", &module_info_runtimeSruntime, "<restart>"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"invoke-handler-interactively", &module_info_runtimeSruntime, "invoke-handler-interactively"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"sexpr-syntax-definition-variable", &module_info_compilerSsyntax, "sexpr-syntax-definition-variable"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"pop-last!", &module_info_gooScollectionsSbuffer, "pop-last!"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"tab-shrink-threshold-setter", &module_info_gooScollectionsStable, "tab-shrink-threshold-setter"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"from", &module_info_gooScollectionsSrange, "from"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"tab-gc-state", &module_info_gooScollectionsStable, "tab-gc-state"},
  {"<simple-condition>", &module_info_runtimeSruntime, "<simple-condition>"},
  {"finds", &module_info_gooScollectionsSsequence, "finds"},
  {"round", &module_info_gooSmath, "round"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"<simple-error>", &module_info_runtimeSruntime, "<simple-error>"},
  {"pow", &module_info_gooSmath, "pow"},
  {"assocs-test", &module_info_gooScollectionsSassoc, "assocs-test"},
  {"accumer", &module_info_gooSaccumulator, "accumer"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"open", &module_info_gooSioSport, "open"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"accuming-in", &module_info_gooSaccumulator, "accuming-in"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"accum-in", &module_info_gooSaccumulator, "accum-in"},
  {"sexpr-syntax-if-then", &module_info_compilerSsyntax, "sexpr-syntax-if-then"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"<list>", &module_info_gooScollectionsSlist, "<list>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"sexpr-monitor-expand", &module_info_compilerSsyntax, "sexpr-monitor-expand"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_compilerSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"floor", &module_info_gooSmath, "floor"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"tab-shrink-threshold", &module_info_gooScollectionsStable, "tab-shrink-threshold"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"ascii-whitespaces", &module_info_gooScollectionsSstring, "ascii-whitespaces"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"sig", &module_info_runtimeSruntime, "sig"},
  {"tab-growth-threshold", &module_info_gooScollectionsStable, "tab-growth-threshold"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"zip", &module_info_gooScollectionsSzip, "zip"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"sexpr-bind-pattern-variables", &module_info_compilerSsyntax, "sexpr-bind-pattern-variables"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"len", &module_info_gooStypes, "len"},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"unzip", &module_info_gooScollectionsSzip, "unzip"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"t<", &module_info_gooStypes, "t<"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"sexpr-variable?", &module_info_compilerSsyntax, "sexpr-variable?"},
  {"$sexpr-define-generic-tag", &module_info_compilerSsyntax, "$sexpr-define-generic-tag"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"tab-growth-factor-setter", &module_info_gooScollectionsStable, "tab-growth-factor-setter"},
  {"tab-growth-factor", &module_info_gooScollectionsStable, "tab-growth-factor"},
  {"sexpr-prop-init", &module_info_compilerSsyntax, "sexpr-prop-init"},
  {"first-then", &module_info_gooScollectionsSstep, "first-then"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"range-error", &module_info_gooScollectionsScollection, "range-error"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"$sexpr-iterate-tag", &module_info_compilerSsyntax, "$sexpr-iterate-tag"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"<handler>", &module_info_runtimeSruntime, "<handler>"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"<set>", &module_info_gooScollectionsStable, "<set>"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"sexpr-prop-init?", &module_info_compilerSsyntax, "sexpr-prop-init?"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"sexpr-unquote-splicing?", &module_info_compilerSsyntax, "sexpr-unquote-splicing?"},
  {"sexpr-loc-bound-bodies", &module_info_compilerSsyntax, "sexpr-loc-bound-bodies"},
  {"new", &module_info_runtimeSboot, "new"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"<serious-condition>", &module_info_runtimeSruntime, "<serious-condition>"},
  {"$sexpr-define-function-tag", &module_info_compilerSsyntax, "$sexpr-define-function-tag"},
  {"sexpr-fab-setter-name", &module_info_compilerSsyntax, "sexpr-fab-setter-name"},
  {"sexpr-prop-name", &module_info_compilerSsyntax, "sexpr-prop-name"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"$sexpr-quasiquote-tag", &module_info_compilerSsyntax, "$sexpr-quasiquote-tag"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"compose", &module_info_runtimeSruntime, "compose"},
  {"*print-base*", &module_info_gooScollectionsSstring, "*print-base*"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"do", &module_info_gooSmacros, "do"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"describe-handler", &module_info_runtimeSruntime, "describe-handler"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"t=", &module_info_gooStypes, "t="},
  {"-", &module_info_gooSmath, "-"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"accumed", &module_info_gooSaccumulator, "accumed"},
  {"<range>", &module_info_gooScollectionsSrange, "<range>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"push-last!", &module_info_gooScollectionsSbuffer, "push-last!"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"/", &module_info_gooSmath, "/"},
  {"sexpr-prop-type", &module_info_compilerSsyntax, "sexpr-prop-type"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"<step>", &module_info_gooScollectionsSstep, "<step>"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"eval", &module_info_compilerSsyntax, "eval"},
  {"<error>", &module_info_runtimeSruntime, "<error>"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"list", &module_info_gooScollectionsSlist, "list"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"sexpr-fab-setter", &module_info_compilerSsyntax, "sexpr-fab-setter"},
  {"sexpr-expand-backquote", &module_info_compilerSsyntax, "sexpr-expand-backquote"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<map>", &module_info_gooScollectionsSmap, "<map>"},
  {"num-to-str-base", &module_info_gooScollectionsSstring, "num-to-str-base"},
  {"pop", &module_info_gooScollectionsSlist, "pop"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"case", &module_info_gooSmacros, "case"},
  {"accum-fab", &module_info_gooSaccumulator, "accum-fab"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"$sexpr-quote-tag", &module_info_compilerSsyntax, "$sexpr-quote-tag"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"$sexpr-locals-tag", &module_info_compilerSsyntax, "$sexpr-locals-tag"},
  {"always", &module_info_runtimeSruntime, "always"},
  {"sexpr-iterate->loc", &module_info_compilerSsyntax, "sexpr-iterate->loc"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"set", "set"},
  {"alpha?", "alpha?"},
  {"match-empty-list", "match-empty-list"},
  {"<int>", "<int>"},
  {"<tup>", "<tup>"},
  {"get", "get"},
  {"all?", "all?"},
  {"now", "now"},
  {"fun", "fun"},
  {"%prop", "%prop"},
  {"as", "as"},
  {"t?", "t?"},
  {"buf", "buf"},
  {"%isa", "%isa"},
  {"loc-val-setter", "loc-val-setter"},
  {"try", "try"},
  {"add", "add"},
  {"tup", "tup"},
  {"1st", "1st"},
  {"%pair", "%pair"},
  {">>>", ">>>"},
  {"dp", "dp"},
  {"flo-bits", "flo-bits"},
  {"cat!", "cat!"},
  {"decf", "decf"},
  {"collect", "collect"},
  {"<in-port>", "<in-port>"},
  {"ds", "ds"},
  {"type-class", "type-class"},
  {"with-port", "with-port"},
  {"read-from-string", "read-from-string"},
  {"<union>", "<union>"},
  {"now-setter", "now-setter"},
  {"curry", "curry"},
  {"nxt", "nxt"},
  {"popf", "popf"},
  {"loc", "loc"},
  {"<file-out-port>", "<file-out-port>"},
  {"loc-val", "loc-val"},
  {"default-handler", "default-handler"},
  {"id-hash", "id-hash"},
  {"head", "head"},
  {"elt-or", "elt-or"},
  {"napp", "napp"},
  {"when", "when"},
  {"<num>", "<num>"},
  {"<vec>", "<vec>"},
  {"prop-getter", "prop-getter"},
  {"in", "in"},
  {"into", "into"},
  {"empty", "empty"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"now-key", "now-key"},
  {"class-direct-props", "class-direct-props"},
  {"mif", "mif"},
  {"export", "export"},
  {"t<", "t<"},
  {"<met>", "<met>"},
  {"zap", "zap"},
  {"elt-setter", "elt-setter"},
  {"min", "min"},
  {"find-or", "find-or"},
  {"write-to-string", "write-to-string"},
  {"prop-init", "prop-init"},
  {"<assocs>", "<assocs>"},
  {"map2", "map2"},
  {"%define-method", "%define-method"},
  {"below", "below"},
  {"pick", "pick"},
  {"app", "app"},
  {"cat-sym", "cat-sym"},
  {"last", "last"},
  {"<subclass>", "<subclass>"},
  {"describe-condition", "describe-condition"},
  {"while", "while"},
  {"class-descendents", "class-descendents"},
  {"t*", "t*"},
  {"tab-hash", "tab-hash"},
  {"even?", "even?"},
  {"port-contents", "port-contents"},
  {"need-implementation", "need-implementation"},
  {"push", "push"},
  {"cat", "cat"},
  {"fin", "fin"},
  {"odd?", "odd?"},
  {"dc", "dc"},
  {"identity", "identity"},
  {"prop-value-setter", "prop-value-setter"},
  {"1-", "1-"},
  {"peek", "peek"},
  {"<chr>", "<chr>"},
  {"<flat>", "<flat>"},
  {"put", "put"},
  {"*", "*"},
  {"key-test", "key-test"},
  {"subtype?", "subtype?"},
  {"<port>", "<port>"},
  {"not", "not"},
  {"ct", "ct"},
  {"address-of", "address-of"},
  {"pushf", "pushf"},
  {"handler-matches?", "handler-matches?"},
  {"rcurry", "rcurry"},
  {"3rd", "3rd"},
  {"pos", "pos"},
  {"to-upper", "to-upper"},
  {"$min-int", "$min-int"},
  {"~", "~"},
  {"lst", "lst"},
  {">=", ">="},
  {"match-sublist", "match-sublist"},
  {"to-digit", "to-digit"},
  {"~==", "~=="},
  {"tab-test", "tab-test"},
  {"map", "map"},
  {"fab-handler", "fab-handler"},
  {"t+", "t+"},
  {"<singleton>", "<singleton>"},
  {">>", ">>"},
  {"condition-arguments", "condition-arguments"},
  {"round/", "round/"},
  {"<fun>", "<fun>"},
  {"handler-function", "handler-function"},
  {"1+", "1+"},
  {"match", "match"},
  {"bit?", "bit?"},
  {"force-out", "force-out"},
  {"prop-bound?", "prop-bound?"},
  {"any2?", "any2?"},
  {"read", "read"},
  {"dg", "dg"},
  {"<lst>", "<lst>"},
  {"fab-class", "fab-class"},
  {"<log>", "<log>"},
  {"elt", "elt"},
  {"zero?", "zero?"},
  {"empty?", "empty?"},
  {"fun-specs", "fun-specs"},
  {"type-object", "type-object"},
  {"del", "del"},
  {"rev!", "rev!"},
  {"rev", "rev"},
  {"<str-port>", "<str-port>"},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"quote", "quote"},
  {"eof-object?", "eof-object?"},
  {"add-prop", "add-prop"},
  {"lower?", "lower?"},
  {"upper?", "upper?"},
  {"<=", "<="},
  {"fun-nary?", "fun-nary?"},
  {"$permanent-hash-state", "$permanent-hash-state"},
  {"range-by", "range-by"},
  {"opf", "opf"},
  {"keys", "keys"},
  {"find", "find"},
  {"nil", "nil"},
  {"gensym", "gensym"},
  {"port-line", "port-line"},
  {"dlet", "dlet"},
  {"~=", "~="},
  {"len-setter", "len-setter"},
  {"fabs", "fabs"},
  {"fun-name", "fun-name"},
  {"newline", "newline"},
  {"dm", "dm"},
  {"str-to-num", "str-to-num"},
  {"<handler>", "<handler>"},
  {"assert", "assert"},
  {"prop-owner", "prop-owner"},
  {"<tab>", "<tab>"},
  {"rem", "rem"},
  {"prop-value", "prop-value"},
  {"class-parents", "class-parents"},
  {">", ">"},
  {"max", "max"},
  {"display", "display"},
  {"fab-map", "fab-map"},
  {"case-by", "case-by"},
  {"df", "df"},
  {"pos?", "pos?"},
  {"digit?", "digit?"},
  {"<seq>", "<seq>"},
  {"<any>", "<any>"},
  {"handler-info-message", "handler-info-message"},
  {"rep", "rep"},
  {"neg?", "neg?"},
  {"<str-tab>", "<str-tab>"},
  {"class-props", "class-props"},
  {"all2?", "all2?"},
  {"&", "&"},
  {"<", "<"},
  {"condition-message", "condition-message"},
  {"fill", "fill"},
  {"vec", "vec"},
  {"del-dups", "del-dups"},
  {"|", "|"},
  {"<buf>", "<buf>"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"port-index", "port-index"},
  {"key-type", "key-type"},
  {"fun-names", "fun-names"},
  {"gets", "gets"},
  {"find-setter", "find-setter"},
  {"ceiling/", "ceiling/"},
  {"if", "if"},
  {"use", "use"},
  {"close", "close"},
  {"fun-arity", "fun-arity"},
  {"sub-setter", "sub-setter"},
  {"collected", "collected"},
  {"=", "="},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"enum", "enum"},
  {"isa", "isa"},
  {"or", "or"},
  {"macro-expand", "macro-expand"},
  {"<out-port>", "<out-port>"},
  {"until", "until"},
  {"abs", "abs"},
  {"esc", "esc"},
  {"<class>", "<class>"},
  {"<sym>", "<sym>"},
  {"format", "format"},
  {"any?", "any?"},
  {"pop", "pop"},
  {"elt-default", "elt-default"},
  {"write", "write"},
  {"len/fill-setter", "len/fill-setter"},
  {"def", "def"},
  {"swapf", "swapf"},
  {"mod", "mod"},
  {"del-vals", "del-vals"},
  {"ready?", "ready?"},
  {"app-filename", "app-filename"},
  {"<str-out-port>", "<str-out-port>"},
  {"num-to-str", "num-to-str"},
  {"+", "+"},
  {"^", "^"},
  {"error", "error"},
  {"<<", "<<"},
  {"collecting", "collecting"},
  {"fold+", "fold+"},
  {"seq", "seq"},
  {"%next-methods", "%next-methods"},
  {"writeln", "writeln"},
  {"do2", "do2"},
  {"and", "and"},
  {"str", "str"},
  {"low-elt-setter", "low-elt-setter"},
  {"ct-also", "ct-also"},
  {"find-getter", "find-getter"},
  {"tail", "tail"},
  {"range", "range"},
  {"elt-type", "elt-type"},
  {"floor", "floor"},
  {"<enum>", "<enum>"},
  {"$default-handler-info", "$default-handler-info"},
  {"2nd", "2nd"},
  {"let", "let"},
  {"ord-app-mets", "ord-app-mets"},
  {"<file-in-port>", "<file-in-port>"},
  {"<loc>", "<loc>"},
  {"pop-last!", "pop-last!"},
  {"fab", "fab"},
  {"type-elts", "type-elts"},
  {"<handler-info>", "<handler-info>"},
  {"from", "from"},
  {"tab-gc-state", "tab-gc-state"},
  {"<simple-condition>", "<simple-condition>"},
  {"round", "round"},
  {"%prop-unbound-error", "%prop-unbound-error"},
  {"<simple-error>", "<simple-error>"},
  {"assocs-test", "assocs-test"},
  {"sig", "sig"},
  {"reject", "reject"},
  {"fun-val", "fun-val"},
  {"match-unquote", "match-unquote"},
  {"unless", "unless"},
  {"open", "open"},
  {"$max-int", "$max-int"},
  {"may-isa?", "may-isa?"},
  {"<list>", "<list>"},
  {"<str>", "<str>"},
  {"<type>", "<type>"},
  {"sup", "sup"},
  {"<gen>", "<gen>"},
  {"<opts>", "<opts>"},
  {"incf", "incf"},
  {"tab-shrink-threshold", "tab-shrink-threshold"},
  {"gen-add-met", "gen-add-met"},
  {"ceil", "ceil"},
  {"to-lower", "to-lower"},
  {"prop-setter", "prop-setter"},
  {"low-elt", "low-elt"},
  {"<col>", "<col>"},
  {"met-app?", "met-app?"},
  {"map-keyed", "map-keyed"},
  {"sub", "sub"},
  {"items", "items"},
  {"len", "len"},
  {"renew", "renew"},
  {"out", "out"},
  {"bound?", "bound?"},
  {"<str-in-port>", "<str-in-port>"},
  {"class-ancestors", "class-ancestors"},
  {"<condition>", "<condition>"},
  {"prop-type", "prop-type"},
  {"cond", "cond"},
  {"tab-growth-factor", "tab-growth-factor"},
  {"first-then", "first-then"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"head-setter", "head-setter"},
  {"tail-setter", "tail-setter"},
  {"fab-setter-name", "fab-setter-name"},
  {"class-name", "class-name"},
  {"app-args", "app-args"},
  {"<flo>", "<flo>"},
  {"for", "for"},
  {"var-type", "var-type"},
  {"add!", "add!"},
  {"fin?", "fin?"},
  {"new", "new"},
  {"var-name", "var-name"},
  {"fold", "fold"},
  {"match-atom", "match-atom"},
  {"<serious-condition>", "<serious-condition>"},
  {"tab-growth-threshold", "tab-growth-threshold"},
  {"fun-mets", "fun-mets"},
  {"compose", "compose"},
  {"*print-base*", "*print-base*"},
  {"==", "=="},
  {"do", "do"},
  {"nul", "nul"},
  {"trunc/", "trunc/"},
  {"do-keyed", "do-keyed"},
  {"<file-port>", "<file-port>"},
  {"t=", "t="},
  {"-", "-"},
  {"pair", "pair"},
  {"<prop>", "<prop>"},
  {"<range>", "<range>"},
  {"neg", "neg"},
  {"push-last!", "push-last!"},
  {"elts", "elts"},
  {"/", "/"},
  {"cat2", "cat2"},
  {"quasiquote", "quasiquote"},
  {"puts", "puts"},
  {"<error>", "<error>"},
  {"list", "list"},
  {"<step>", "<step>"},
  {"isa?", "isa?"},
  {"<map>", "<map>"},
  {"num-to-str-base", "num-to-str-base"},
  {"trunc", "trunc"},
  {"case", "case"},
  {"mem?", "mem?"},
  {"dv", "dv"},
  {"floor/", "floor/"},
  {"to-str", "to-str"},
  {"always", "always"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_goo;
MODULE_INFO module_info_goo = {
  "goo",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_runtimeSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_runtimeSruntime (void);
extern void load_module_gooScollections (void);
extern void load_module_gooSaccumulator (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_gooSioSread (void);
extern void load_module_compilerSsyntax (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_goo (void);

void load_module_goo (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_runtimeSruntime();
  load_module_gooScollections();
  load_module_gooSaccumulator();
  load_module_gooSioSwrite();
  load_module_gooSioSread();
  load_module_compilerSsyntax();
  load_module_gooSioSport();

  (P)YgooY___main_0___();

}

/* END OF GENERATED CODE. */
