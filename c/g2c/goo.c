/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto */

EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
EXT(Ytype_error,"boot","type-error");
EXT(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYTgensym_counterT,"runtime","*gensym-counter*");
EXT(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YprotoScollectionsSassocYassocs_test,"proto/collections/assoc","assocs-test");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YprotoSmathYzeroQ,"proto/math","zero?");
EXT(YprotoScollectionsSstringYTprint_baseT,"proto/collections/string","*print-base*");
EXT(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
EXT(YDmin_int,"boot","$min-int");
EXT(YprotoSmathYE,"proto/math","=");
EXT(YprotoSmathYnulQ,"proto/math","nul?");
EXT(YprotoScollectionsSlistYLlistG,"proto/collections/list","<list>");
EXT(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YmacrosYfin_stateQ,"macros","fin-state?");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YprotoSmathYuppercaseQ,"proto/math","uppercase?");
EXT(YruntimeYalways,"runtime","always");
EXT(YprotoScollectionsStableYtable_shrink_threshold,"proto/collections/table","table-shrink-threshold");
EXT(YprotoScollectionsSrangeYfrom,"proto/collections/range","from");
EXT(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
EXT(YprotoScollectionsScollectionYdo3,"proto/collections/collection","do3");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YprotoScollectionsScollectionYnow_elt_setter,"proto/collections/collection","now-elt-setter");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YprotoSmathYto_str,"proto/math","to-str");
EXT(YprotoSmathYroundS,"proto/math","round/");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(Ytype_object,"boot","type-object");
EXT(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYini_state,"macros","ini-state");
EXT(YLclassG,"boot","<class>");
EXT(YprotoScollectionsScollectionYlen,"proto/collections/collection","len");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YprotoSportsYLoutput_portG,"proto/ports","<output-port>");
EXT(YprotoScollectionsSrangeYfrom_to_by,"proto/collections/range","from-to-by");
EXT(YprotoSmathYA,"proto/math","+");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYformat,"runtime","format");
EXT(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
EXT(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(YprotoScollectionsStableYLstr_tabG,"proto/collections/table","<str-tab>");
EXT(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
EXT(YprotoSmathYto_digit,"proto/math","to-digit");
EXT(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(YLtypeG,"boot","<type>");
EXT(YprotoStypesYfalse_or,"proto/types","false-or");
EXT(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
EXT(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YprotoSmathYevenQ,"proto/math","even?");
EXT(YprotoSmathYLE,"proto/math","<=");
EXT(YprotoSmathYcontagious_type,"proto/math","contagious-type");
EXT(YprotoScollectionsStableYtable_growth_factor_setter,"proto/collections/table","table-growth-factor-setter");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YprotoScollectionsScollectionYdel_keys,"proto/collections/collection","del-keys");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YprotoScollectionsSbufferYlen_setter,"proto/collections/buffer","len-setter");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YprotoSportsYLstring_portG,"proto/ports","<string-port>");
EXT(YLgenG,"boot","<gen>");
EXT(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(Yslot_init,"boot","slot-init");
EXT(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YprotoSportsYchar_readyQ,"proto/ports","char-ready?");
EXT(YprotoScollectionsSlistYassqn,"proto/collections/list","assqn");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YprotoScollectionsScollectionYinto,"proto/collections/collection","into");
EXT(YprotoSportsYLfile_output_portG,"proto/ports","<file-output-port>");
EXT(Yobject_slots,"boot","object-slots");
EXT(YprotoScollectionsStableYid_hash,"proto/collections/table","id-hash");
EXT(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(YLsymG,"boot","<sym>");
EXT(YprotoStypesYtL,"proto/types","t<");
EXT(YprotoScollectionsSassocYassocs_test_setter,"proto/collections/assoc","assocs-test-setter");
EXT(Yfind_setter,"boot","find-setter");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(YprotoSmathYlogior,"proto/math","logior");
EXT(YprotoSmathYfabs,"proto/math","fabs");
EXT(YprotoSmathYLbotG,"proto/math","<bot>");
EXT(YprotoSmathYflo_bits,"proto/math","flo-bits");
EXT(YprotoSmathYround,"proto/math","round");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
EXT(YprotoSportsYpeek_char,"proto/ports","peek-char");
EXT(YsyntaxYsexpr_define_classQ,"syntax","sexpr-define-class?");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YLstrG,"boot","<str>");
EXT(YprotoSmathYtruncateS,"proto/math","truncate/");
EXT(YruntimeYsig,"runtime","sig");
EXT(YprotoScollectionsStableYtable_protocol,"proto/collections/table","table-protocol");
EXT(YprotoSmathYas_log,"proto/math","as-log");
EXT(YprotoSportsYcall_with_output_file,"proto/ports","call-with-output-file");
EXT(YPvnul,"boot","%vnul");
EXT(YprotoScollectionsScollectionYdel_key,"proto/collections/collection","del-key");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
EXT(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YprotoStypesYtE,"proto/types","t=");
EXT(YprotoScollectionsScollectionYdo,"proto/collections/collection","do");
EXT(YprotoSmathYG,"proto/math",">");
EXT(YprotoSmathYL,"proto/math","<");
EXT(Yerror,"boot","error");
EXT(YprotoSmathYmax,"proto/math","max");
EXT(YprotoSportsYcall_with_input_file,"proto/ports","call-with-input-file");
EXT(YLvecG,"boot","<vec>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
EXT(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
EXT(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
EXT(Yhead_setter,"boot","head-setter");
EXT(YprotoScollectionsSsequenceYdo_key_vals,"proto/collections/sequence","do-key-vals");
EXT(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(YprotoScollectionsSbufferYlenSfill_setter,"proto/collections/buffer","len/fill-setter");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YprotoScollectionsSsequenceYrange_checkQ,"proto/collections/sequence","range-check?");
EXT(YprotoScollectionsScollectionYall2Q,"proto/collections/collection","all2?");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
EXT(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(YprotoScollectionsSsequenceYcatX,"proto/collections/sequence","cat!");
EXT(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
EXT(YprotoSportsYport_index,"proto/ports","port-index");
EXT(Yfind_getter,"boot","find-getter");
EXT(YmacrosYpair,"macros","pair");
EXT(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YLflatG,"boot","<flat>");
EXT(Yhead,"boot","head");
EXT(YprotoScollectionsSrangeYfrom_above,"proto/collections/range","from-above");
EXT(YprotoSportsYread_char,"proto/ports","read-char");
EXT(YprotoSmathYnegQ,"proto/math","neg?");
EXT(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YprotoSportsYclose_input_port,"proto/ports","close-input-port");
EXT(YprotoStypesYtA,"proto/types","t+");
EXT(YprotoScollectionsScollectionYfind_key,"proto/collections/collection","find-key");
EXT(Ynul,"boot","nul");
EXT(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(Yobject_class,"boot","object-class");
EXT(YprotoSmathYlogxor,"proto/math","logxor");
EXT(YprotoSmathYNEE,"proto/math","~==");
EXT(YprotoSportsYLstring_output_portG,"proto/ports","<string-output-port>");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YprotoScollectionsSbufferYpop_lastX,"proto/collections/buffer","pop-last!");
EXT(Ysym_name,"boot","sym-name");
EXT(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YprotoSportsYopen_output_file,"proto/ports","open-output-file");
EXT(YprotoSmathYas_lowercase,"proto/math","as-lowercase");
EXT(YprotoSmathYS,"proto/math","/");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YprotoScollectionsStableYtable_shrink_threshold_setter,"proto/collections/table","table-shrink-threshold-setter");
EXT(YprotoSmathYeof_objectQ,"proto/math","eof-object?");
EXT(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YprotoSportsYcall_with_string_output_port,"proto/ports","call-with-string-output-port");
EXT(YLfunG,"boot","<fun>");
EXT(YprotoSmathYmodulo,"proto/math","modulo");
EXT(YprotoSportsYLfile_input_portG,"proto/ports","<file-input-port>");
EXT(YprotoSportsYLstring_input_portG,"proto/ports","<string-input-port>");
EXT(YmacrosYnapply,"macros","napply");
EXT(YprotoScollectionsSsequenceYrange_check,"proto/collections/sequence","range-check");
EXT(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YLlstG,"boot","<lst>");
EXT(YPsnul,"boot","%snul");
EXT(YprotoScollectionsSsequenceYaddX,"proto/collections/sequence","add!");
EXT(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
EXT(YDmax_int,"boot","$max-int");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YprotoScollectionsSmapYfab_map,"proto/collections/map","fab-map");
EXT(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(YprotoSmathYT,"proto/math","*");
EXT(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
EXT(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(YprotoSmathYoddQ,"proto/math","odd?");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YprotoSportsYopen_input_file,"proto/ports","open-input-file");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YprotoScollectionsScollectionYreduceA,"proto/collections/collection","reduce+");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YLseqG,"boot","<seq>");
EXT(YmacrosYcat,"macros","cat");
EXT(YprotoSmathY_,"proto/math","-");
EXT(YprotoSportsYport_contents,"proto/ports","port-contents");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(Ytail,"boot","tail");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YsyntaxYsexpr_isa_parent,"syntax","sexpr-isa-parent");
EXT(YprotoScollectionsStableYLtabG,"proto/collections/table","<tab>");
EXT(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(YprotoScollectionsSstringYascii_limit,"proto/collections/string","ascii-limit");
EXT(YprotoStypesYas,"proto/types","as");
EXT(YprotoScollectionsSbufferYpush_lastX,"proto/collections/buffer","push-last!");
EXT(YprotoScollectionsSrangeYfrom_to,"proto/collections/range","from-to");
EXT(Ylst,"boot","lst");
EXT(Yclass_slots,"boot","class-slots");
EXT(YprotoScollectionsSsequenceYrange_error,"proto/collections/sequence","range-error");
EXT(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
EXT(YprotoSmathYalphabeticQ,"proto/math","alphabetic?");
EXT(YLcolG,"boot","<col>");
EXT(YprotoScollectionsSsequenceYvals_to_str,"proto/collections/sequence","vals-to-str");
EXT(YprotoSmathYGE,"proto/math",">=");
EXT(YprotoScollectionsStableYtable_growth_threshold,"proto/collections/table","table-growth-threshold");
EXT(Yfab_class,"boot","fab-class");
EXT(YprotoSmathYlogand,"proto/math","logand");
EXT(YprotoSportsYLfile_portG,"proto/ports","<file-port>");
EXT(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
EXT(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(YLtupG,"boot","<tup>");
EXT(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YprotoScollectionsScollectionYdefault,"proto/collections/collection","default");
EXT(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
EXT(YprotoSmathYtruncate,"proto/math","truncate");
EXT(YprotoSmathYeof_object,"proto/math","eof-object");
EXT(YLsigG,"boot","<sig>");
EXT(YprotoSportsYout,"proto/ports","out");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
EXT(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
EXT(YsyntaxYDsexpr_define_class_tag,"syntax","$sexpr-define-class-tag");
EXT(YprotoScollectionsSlistYlist,"proto/collections/list","list");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YLlocG,"boot","<loc>");
EXT(YprotoSmathYaddress_of,"proto/math","address-of");
EXT(YprotoSportsYcall_with_string_input_port,"proto/ports","call-with-string-input-port");
EXT(YprotoScollectionsSbufferYbuf,"proto/collections/buffer","buf");
EXT(YprotoSmathYremainder,"proto/math","remainder");
EXT(YprotoScollectionsScollectionYreduce,"proto/collections/collection","reduce");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YprotoScollectionsScollectionYkeys,"proto/collections/collection","keys");
EXT(YprotoScollectionsSsequenceYdel_dups,"proto/collections/sequence","del-dups");
EXT(Ytype_elts,"boot","type-elts");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
EXT(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
EXT(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(YwriteYTmax_print_depthT,"write","*max-print-depth*");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
EXT(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
EXT(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(YprotoScollectionsSrangeYfrom_below_by,"proto/collections/range","from-below-by");
EXT(YPisa,"boot","%isa");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YLfloG,"boot","<flo>");
EXT(YsyntaxYsexpr_define_class_parents,"syntax","sexpr-define-class-parents");
EXT(YprotoScollectionsStableYcase_insensitive_string_equal,"proto/collections/table","case-insensitive-string-equal");
EXT(YprotoSmathYfloor,"proto/math","floor");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
EXT(YprotoSportsYwrite_string,"proto/ports","write-string");
EXT(YreadYDchar_long_names,"read","$char-long-names");
EXT(YprotoSportsYport_line,"proto/ports","port-line");
EXT(Ysig_value,"boot","sig-value");
EXT(YprotoSportsYin,"proto/ports","in");
EXT(Yclass_name,"boot","class-name");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
EXT(YprotoScollectionsSsequenceYdel,"proto/collections/sequence","del");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YwriteYrecurring_write,"write","recurring-write");
EXT(YprotoSportsYport_index_setter,"proto/ports","port-index-setter");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YprotoScollectionsSbufferYLbufG,"proto/collections/buffer","<buf>");
EXT(YprotoSmathYneg,"proto/math","neg");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YLnumG,"boot","<num>");
EXT(YLintG,"boot","<int>");
EXT(Ynil,"boot","nil");
EXT(YprotoScollectionsSstringYstr_to_num,"proto/collections/string","str-to-num");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YmacrosYEE,"macros","==");
EXT(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YwriteYwriteln,"write","writeln");
EXT(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(Yfun_value,"boot","fun-value");
EXT(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(YprotoScollectionsSstepYLstepG,"proto/collections/step","<step>");
EXT(YprotoSmathYlognot,"proto/math","lognot");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YprotoSportsYLportG,"proto/ports","<port>");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(YprotoScollectionsStableYcurrent_gc_state,"proto/collections/table","current-gc-state");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(Ysig_names,"boot","sig-names");
EXT(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(YprotoSmathYas_uppercase,"proto/math","as-uppercase");
EXT(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YprotoSmathYash,"proto/math","ash");
EXT(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YPsymbols,"boot","%symbols");
EXT(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
EXT(YLlogG,"boot","<log>");
EXT(YprotoScollectionsStableYcase_insensitive_string_hash,"proto/collections/table","case-insensitive-string-hash");
EXT(Yvec,"boot","vec");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YprotoSmathYposQ,"proto/math","pos?");
EXT(YprotoScollectionsSmapYLmapG,"proto/collections/map","<map>");
EXT(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YLslotG,"boot","<slot>");
EXT(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
EXT(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YprotoSmathYlowercaseQ,"proto/math","lowercase?");
EXT(YPPmacro,"boot","%%macro");
EXT(YprotoSmathYchar_Gascii,"proto/math","char->ascii");
EXT(Ynot,"boot","not");
EXT(YprotoScollectionsScollectionYanyQ,"proto/collections/collection","any?");
EXT(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYcurry,"runtime","curry");
EXT(Yclass_parents,"boot","class-parents");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YLanyG,"boot","<any>");
EXT(YprotoScollectionsSrangeYLrangeG,"proto/collections/range","<range>");
EXT(YprotoSportsYforce_output,"proto/ports","force-output");
EXT(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
EXT(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YprotoScollectionsSstringYstr,"proto/collections/string","str");
EXT(YprotoSmathYnumericQ,"proto/math","numeric?");
EXT(YLunionG,"boot","<union>");
EXT(YprotoSmathYfloorS,"proto/math","floor/");
EXT(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(Yslot_value,"boot","slot-value");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YprotoScollectionsSsequenceY3rd,"proto/collections/sequence","3rd");
EXT(YprotoScollectionsSsequenceYfrom_below,"proto/collections/sequence","from-below");
EXT(YprotoScollectionsStableYtable_growth_threshold_setter,"proto/collections/table","table-growth-threshold-setter");
EXT(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(YprotoScollectionsStableYtable_growth_factor,"proto/collections/table","table-growth-factor");
EXT(YprotoSportsYLinput_portG,"proto/ports","<input-port>");
EXT(YmacrosYmap,"macros","map");
EXT(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
EXT(YprotoSmathYlsh,"proto/math","lsh");
EXT(YprotoSportsYnewline,"proto/ports","newline");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YprotoScollectionsSstringYascii_whitespaces,"proto/collections/string","ascii-whitespaces");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YprotoScollectionsSstepYfirst_then,"proto/collections/step","first-then");
EXT(YprotoScollectionsSlistYpush,"proto/collections/list","push");
EXT(YprotoScollectionsSlistYpop,"proto/collections/list","pop");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YmacrosYrevX,"macros","rev!");
EXT(YprotoScollectionsSrangeYfrom_above_by,"proto/collections/range","from-above-by");
EXT(YprotoSmathYmin,"proto/math","min");
EXT(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YprotoScollectionsSrangeYfrom_by,"proto/collections/range","from-by");
EXT(YprotoSportsYport_line_setter,"proto/ports","port-line-setter");
EXT(YprotoScollectionsScollectionYas_copy,"proto/collections/collection","as-copy");
EXT(YprotoScollectionsScollectionYalter,"proto/collections/collection","alter");
EXT(YprotoScollectionsSassocYLassocsG,"proto/collections/assoc","<assocs>");
EXT(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(YprotoScollectionsScollectionYcopy_state,"proto/collections/collection","copy-state");
EXT(YprotoScollectionsScollectionYelt_setter,"proto/collections/collection","elt-setter");
EXT(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(Yunexec,"boot","unexec");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(YwriteYwrite,"write","write");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YprotoScollectionsSsequenceY2nd,"proto/collections/sequence","2nd");
EXT(Ytup,"boot","tup");
EXT(YprotoSmathYceiling,"proto/math","ceiling");
EXT(YwriteYdisplay,"write","display");
EXT(YprotoScollectionsStableYDpermanent_hash_state,"proto/collections/table","$permanent-hash-state");
EXT(YmacrosYnxt_state,"macros","nxt-state");
EXT(YprotoSmathYabs,"proto/math","abs");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
EXT(YprotoSportsYclose_output_port,"proto/ports","close-output-port");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(YwriteYTmax_print_lengthT,"write","*max-print-length*");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(YprotoSportsYwrite_char,"proto/ports","write-char");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YprotoSmathYnyi_error,"proto/math","nyi-error");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YmacrosYnow_elt,"macros","now-elt");
EXT(YprotoSmathYNE,"proto/math","~=");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YprotoSmathYlogbitQ,"proto/math","logbit?");
EXT(YprotoSmathYcontagious_call,"proto/math","contagious-call");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YmacrosYelt,"macros","elt");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
EXT(YprotoScollectionsSlistYassq,"proto/collections/list","assq");
EXT(YprotoSmathYpower_of_two_ceiling,"proto/math","power-of-two-ceiling");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YprotoY___main_0___ ();

/* FUNCTION CODES: */

P YprotoY___main_0___() {
  P T0;
loop:
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoSmath;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_protoScollections;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_read;
extern MODULE_INFO module_info_syntax;
extern MODULE_INFO module_info_protoSports;
extern MODULE_INFO module_info_protoScollectionsSsequence;
extern MODULE_INFO module_info_protoScollectionsSassoc;
extern MODULE_INFO module_info_protoScollectionsSstring;
extern MODULE_INFO module_info_protoScollectionsScollection;
extern MODULE_INFO module_info_protoScollectionsSlist;
extern MODULE_INFO module_info_protoScollectionsStable;
extern MODULE_INFO module_info_protoScollectionsSrange;
extern MODULE_INFO module_info_protoScollectionsSbuffer;
extern MODULE_INFO module_info_protoScollectionsSmap;
extern MODULE_INFO module_info_protoScollectionsSstep;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_protoStypes},
  {&module_info_protoSmath},
  {&module_info_runtime},
  {&module_info_protoScollections},
  {&module_info_write},
  {&module_info_read},
  {&module_info_syntax},
  {&module_info_protoSports},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"last", &module_info_protoScollectionsSsequence, "last"},
  {"type-error", &module_info_boot, "type-error"},
  {"sexpr-let->combination", &module_info_syntax, "sexpr-let->combination"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"identity", &module_info_runtime, "identity"},
  {"$sexpr-let-tag", &module_info_syntax, "$sexpr-let-tag"},
  {"var-type", &module_info_macros, "var-type"},
  {"*gensym-counter*", &module_info_runtime, "*gensym-counter*"},
  {"sexpr-isa-init-values", &module_info_syntax, "sexpr-isa-init-values"},
  {"assocs-test", &module_info_protoScollectionsSassoc, "assocs-test"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"zero?", &module_info_protoSmath, "zero?"},
  {"*print-base*", &module_info_protoScollectionsSstring, "*print-base*"},
  {"fill", &module_info_protoScollectionsScollection, "fill"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"=", &module_info_protoSmath, "="},
  {"nul?", &module_info_protoSmath, "nul?"},
  {"<list>", &module_info_protoScollectionsSlist, "<list>"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"sexpr-text-of-quotation", &module_info_syntax, "sexpr-text-of-quotation"},
  {"dv", &module_info_boot, "dv"},
  {"%f=", &module_info_boot, "%f="},
  {"fin-state?", &module_info_macros, "fin-state?"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"uppercase?", &module_info_protoSmath, "uppercase?"},
  {"always", &module_info_runtime, "always"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%iu", &module_info_boot, "%iu"},
  {"table-shrink-threshold", &module_info_protoScollectionsStable, "table-shrink-threshold"},
  {"from", &module_info_protoScollectionsSrange, "from"},
  {"any2?", &module_info_protoScollectionsScollection, "any2?"},
  {"do3", &module_info_protoScollectionsScollection, "do3"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"now-elt-setter", &module_info_protoScollectionsScollection, "now-elt-setter"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"sexpr-make-application", &module_info_syntax, "sexpr-make-application"},
  {"use", &module_info_boot, "use"},
  {"%lu", &module_info_boot, "%lu"},
  {"to-str", &module_info_protoSmath, "to-str"},
  {"round/", &module_info_protoSmath, "round/"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"type-object", &module_info_boot, "type-object"},
  {"$sexpr-unwind-protect-tag", &module_info_syntax, "$sexpr-unwind-protect-tag"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"ini-state", &module_info_macros, "ini-state"},
  {"<class>", &module_info_boot, "<class>"},
  {"len", &module_info_protoScollectionsScollection, "len"},
  {"dp", &module_info_boot, "dp"},
  {"gensym", &module_info_macros, "gensym"},
  {"<output-port>", &module_info_protoSports, "<output-port>"},
  {"from-to-by", &module_info_protoScollectionsSrange, "from-to-by"},
  {"+", &module_info_protoSmath, "+"},
  {"read", &module_info_runtime, "read"},
  {"ddv", &module_info_macros, "ddv"},
  {"format", &module_info_runtime, "format"},
  {"%pair", &module_info_boot, "%pair"},
  {"and", &module_info_macros, "and"},
  {"%i-", &module_info_boot, "%i-"},
  {"sub", &module_info_protoScollectionsSsequence, "sub"},
  {"sexpr-syntax-if-pattern", &module_info_syntax, "sexpr-syntax-if-pattern"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"<str-tab>", &module_info_protoScollectionsStable, "<str-tab>"},
  {"sexpr-definition-variable", &module_info_syntax, "sexpr-definition-variable"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"to-digit", &module_info_protoSmath, "to-digit"},
  {"sexpr-if-else", &module_info_syntax, "sexpr-if-else"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"<type>", &module_info_boot, "<type>"},
  {"false-or", &module_info_protoStypes, "false-or"},
  {"sexpr-slot-object", &module_info_syntax, "sexpr-slot-object"},
  {"add", &module_info_protoScollectionsScollection, "add"},
  {"even?", &module_info_protoSmath, "even?"},
  {"<=", &module_info_protoSmath, "<="},
  {"contagious-type", &module_info_protoSmath, "contagious-type"},
  {"table-growth-factor-setter", &module_info_protoScollectionsStable, "table-growth-factor-setter"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"del-keys", &module_info_protoScollectionsScollection, "del-keys"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"len-setter", &module_info_protoScollectionsSbuffer, "len-setter"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"sexpr-definition-value", &module_info_syntax, "sexpr-definition-value"},
  {"<string-port>", &module_info_protoSports, "<string-port>"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"$sexpr-if-tag", &module_info_syntax, "$sexpr-if-tag"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"sexpr-function-definition-value", &module_info_syntax, "sexpr-function-definition-value"},
  {"sexpr-loc-bound-names", &module_info_syntax, "sexpr-loc-bound-names"},
  {"char-ready?", &module_info_protoSports, "char-ready?"},
  {"assqn", &module_info_protoScollectionsSlist, "assqn"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"rep", &module_info_boot, "rep"},
  {"into", &module_info_protoScollectionsScollection, "into"},
  {"<file-output-port>", &module_info_protoSports, "<file-output-port>"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"id-hash", &module_info_protoScollectionsStable, "id-hash"},
  {"sexpr-unwind-protect-protected-form", &module_info_syntax, "sexpr-unwind-protect-protected-form"},
  {"%c<", &module_info_boot, "%c<"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"t<", &module_info_protoStypes, "t<"},
  {"assocs-test-setter", &module_info_protoScollectionsSassoc, "assocs-test-setter"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"inc", &module_info_macros, "inc"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"sexpr-loc-bound-signatures", &module_info_syntax, "sexpr-loc-bound-signatures"},
  {"%c=", &module_info_boot, "%c="},
  {"logior", &module_info_protoSmath, "logior"},
  {"fabs", &module_info_protoSmath, "fabs"},
  {"<bot>", &module_info_protoSmath, "<bot>"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"flo-bits", &module_info_protoSmath, "flo-bits"},
  {"round", &module_info_protoSmath, "round"},
  {"lab", &module_info_boot, "lab"},
  {"exported", &module_info_macros, "exported"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"cat2", &module_info_protoScollectionsSsequence, "cat2"},
  {"peek-char", &module_info_protoSports, "peek-char"},
  {"sexpr-define-class?", &module_info_syntax, "sexpr-define-class?"},
  {"eval", &module_info_syntax, "eval"},
  {"<str>", &module_info_boot, "<str>"},
  {"truncate/", &module_info_protoSmath, "truncate/"},
  {"dss", &module_info_boot, "dss"},
  {"sig", &module_info_runtime, "sig"},
  {"isa", &module_info_boot, "isa"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"export", &module_info_boot, "export"},
  {"table-protocol", &module_info_protoScollectionsStable, "table-protocol"},
  {"%iv", &module_info_boot, "%iv"},
  {"as-log", &module_info_protoSmath, "as-log"},
  {"call-with-output-file", &module_info_protoSports, "call-with-output-file"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"del-key", &module_info_protoScollectionsScollection, "del-key"},
  {"@==", &module_info_boot, "@=="},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"pos", &module_info_protoScollectionsSsequence, "pos"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"sexpr-bind-pattern-variables", &module_info_syntax, "sexpr-bind-pattern-variables"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"t=", &module_info_protoStypes, "t="},
  {"do", &module_info_protoScollectionsScollection, "do"},
  {">", &module_info_protoSmath, ">"},
  {"<", &module_info_protoSmath, "<"},
  {"error", &module_info_boot, "error"},
  {"max", &module_info_protoSmath, "max"},
  {"call-with-input-file", &module_info_protoSports, "call-with-input-file"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"sexpr-make-anonymous-method", &module_info_syntax, "sexpr-make-anonymous-method"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"%slen", &module_info_boot, "%slen"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"<met>", &module_info_boot, "<met>"},
  {"sexpr-if-test", &module_info_syntax, "sexpr-if-test"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"sexpr-syntax-if-then", &module_info_syntax, "sexpr-syntax-if-then"},
  {"$sexpr-quote-tag", &module_info_syntax, "$sexpr-quote-tag"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"do-key-vals", &module_info_protoScollectionsSsequence, "do-key-vals"},
  {"sexpr-operator", &module_info_syntax, "sexpr-operator"},
  {"len/fill-setter", &module_info_protoScollectionsSbuffer, "len/fill-setter"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"range-check?", &module_info_protoScollectionsSsequence, "range-check?"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"all2?", &module_info_protoScollectionsScollection, "all2?"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"$sexpr-define-tag", &module_info_syntax, "$sexpr-define-tag"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"sexpr-slot-variable", &module_info_syntax, "sexpr-slot-variable"},
  {"cat!", &module_info_protoScollectionsSsequence, "cat!"},
  {"sexpr-operands", &module_info_syntax, "sexpr-operands"},
  {"port-index", &module_info_protoSports, "port-index"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"quote", &module_info_boot, "quote"},
  {"pair", &module_info_macros, "pair"},
  {"sexpr-function-definition-variable", &module_info_syntax, "sexpr-function-definition-variable"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"head", &module_info_boot, "head"},
  {"from-above", &module_info_protoScollectionsSrange, "from-above"},
  {"read-char", &module_info_protoSports, "read-char"},
  {"neg?", &module_info_protoSmath, "neg?"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"sexpr-method-body", &module_info_syntax, "sexpr-method-body"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"$sexpr-syntax-if-tag", &module_info_syntax, "$sexpr-syntax-if-tag"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"close-input-port", &module_info_protoSports, "close-input-port"},
  {"when", &module_info_macros, "when"},
  {"t+", &module_info_protoStypes, "t+"},
  {"find-key", &module_info_protoScollectionsScollection, "find-key"},
  {"nul", &module_info_boot, "nul"},
  {"apply", &module_info_macros, "apply"},
  {"sexpr-assignment-value", &module_info_syntax, "sexpr-assignment-value"},
  {"object-class", &module_info_boot, "object-class"},
  {"logxor", &module_info_protoSmath, "logxor"},
  {"~==", &module_info_protoSmath, "~=="},
  {"%i<", &module_info_boot, "%i<"},
  {"%sb", &module_info_boot, "%sb"},
  {"%str", &module_info_boot, "%str"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"<string-output-port>", &module_info_protoSports, "<string-output-port>"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"pop-last!", &module_info_protoScollectionsSbuffer, "pop-last!"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"$sexpr-method-tag", &module_info_syntax, "$sexpr-method-tag"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_syntax, "sexpr-unwind-protect-cleanup-forms"},
  {"set", &module_info_boot, "set"},
  {"open-output-file", &module_info_protoSports, "open-output-file"},
  {"as-lowercase", &module_info_protoSmath, "as-lowercase"},
  {"%i&", &module_info_boot, "%i&"},
  {"/", &module_info_protoSmath, "/"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"table-shrink-threshold-setter", &module_info_protoScollectionsStable, "table-shrink-threshold-setter"},
  {"eof-object?", &module_info_protoSmath, "eof-object?"},
  {"%raw", &module_info_boot, "%raw"},
  {"sexpr-loc-bound-bodies", &module_info_syntax, "sexpr-loc-bound-bodies"},
  {"call-with-string-output-port", &module_info_protoSports, "call-with-string-output-port"},
  {"case", &module_info_macros, "case"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"modulo", &module_info_protoSmath, "modulo"},
  {"swapf", &module_info_macros, "swapf"},
  {"opf", &module_info_macros, "opf"},
  {"%untag", &module_info_boot, "%untag"},
  {"ct", &module_info_boot, "ct"},
  {"<file-input-port>", &module_info_protoSports, "<file-input-port>"},
  {"<string-input-port>", &module_info_protoSports, "<string-input-port>"},
  {"napply", &module_info_macros, "napply"},
  {"range-check", &module_info_protoScollectionsSsequence, "range-check"},
  {"$sexpr-monitor-tag", &module_info_syntax, "$sexpr-monitor-tag"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%fb", &module_info_boot, "%fb"},
  {"mem?", &module_info_protoScollectionsScollection, "mem?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%snul", &module_info_boot, "%snul"},
  {"add!", &module_info_protoScollectionsSsequence, "add!"},
  {"sexpr-unquote?", &module_info_syntax, "sexpr-unquote?"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"$sexpr-iterate-tag", &module_info_syntax, "$sexpr-iterate-tag"},
  {"%cb", &module_info_boot, "%cb"},
  {"fab-map", &module_info_protoScollectionsSmap, "fab-map"},
  {"sexpr-make-macro-function", &module_info_syntax, "sexpr-make-macro-function"},
  {"%i+", &module_info_boot, "%i+"},
  {"collect", &module_info_macros, "collect"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"*", &module_info_protoSmath, "*"},
  {"$sexpr-define-generic-tag", &module_info_syntax, "$sexpr-define-generic-tag"},
  {"sexpr-block-name", &module_info_syntax, "sexpr-block-name"},
  {"dc", &module_info_boot, "dc"},
  {"odd?", &module_info_protoSmath, "odd?"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"open-input-file", &module_info_protoSports, "open-input-file"},
  {"use/export", &module_info_boot, "use/export"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"reduce+", &module_info_protoScollectionsScollection, "reduce+"},
  {"fin", &module_info_boot, "fin"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"if", &module_info_boot, "if"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"cat", &module_info_macros, "cat"},
  {"%i!", &module_info_boot, "%i!"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"-", &module_info_protoSmath, "-"},
  {"port-contents", &module_info_protoSports, "port-contents"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%f*", &module_info_boot, "%f*"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"all?", &module_info_protoScollectionsScollection, "all?"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"tail", &module_info_boot, "tail"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"sexpr-isa-parent", &module_info_syntax, "sexpr-isa-parent"},
  {"<tab>", &module_info_protoScollectionsStable, "<tab>"},
  {"sexpr-syntax-if-else", &module_info_syntax, "sexpr-syntax-if-else"},
  {"ascii-limit", &module_info_protoScollectionsSstring, "ascii-limit"},
  {"as", &module_info_protoStypes, "as"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"push-last!", &module_info_protoScollectionsSbuffer, "push-last!"},
  {"from-to", &module_info_protoScollectionsSrange, "from-to"},
  {"%f+", &module_info_boot, "%f+"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"lst", &module_info_boot, "lst"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"range-error", &module_info_protoScollectionsSsequence, "range-error"},
  {"sexpr-slot-init", &module_info_syntax, "sexpr-slot-init"},
  {"alphabetic?", &module_info_protoSmath, "alphabetic?"},
  {"%vec", &module_info_boot, "%vec"},
  {"<col>", &module_info_boot, "<col>"},
  {"vals-to-str", &module_info_protoScollectionsSsequence, "vals-to-str"},
  {">=", &module_info_protoSmath, ">="},
  {"table-growth-threshold", &module_info_protoScollectionsStable, "table-growth-threshold"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"logand", &module_info_protoSmath, "logand"},
  {"<file-port>", &module_info_protoSports, "<file-port>"},
  {"$sexpr-quasiquote-tag", &module_info_syntax, "$sexpr-quasiquote-tag"},
  {"sexpr-forward-primitive?", &module_info_syntax, "sexpr-forward-primitive?"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"$sexpr-begin-tag", &module_info_syntax, "$sexpr-begin-tag"},
  {"default", &module_info_protoScollectionsScollection, "default"},
  {"map-keyed", &module_info_protoScollectionsScollection, "map-keyed"},
  {"truncate", &module_info_protoSmath, "truncate"},
  {"dg", &module_info_boot, "dg"},
  {"eof-object", &module_info_protoSmath, "eof-object"},
  {"for", &module_info_macros, "for"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"out", &module_info_protoSports, "out"},
  {"<error>", &module_info_runtime, "<error>"},
  {"compose", &module_info_runtime, "compose"},
  {"sexpr-make-getter", &module_info_syntax, "sexpr-make-getter"},
  {"sexpr-sequence->begin", &module_info_syntax, "sexpr-sequence->begin"},
  {"$sexpr-define-class-tag", &module_info_syntax, "$sexpr-define-class-tag"},
  {"try", &module_info_boot, "try"},
  {"list", &module_info_protoScollectionsSlist, "list"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"address-of", &module_info_protoSmath, "address-of"},
  {"call-with-string-input-port", &module_info_protoSports, "call-with-string-input-port"},
  {"dec", &module_info_macros, "dec"},
  {"buf", &module_info_protoScollectionsSbuffer, "buf"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"let", &module_info_boot, "let"},
  {"remainder", &module_info_protoSmath, "remainder"},
  {"reduce", &module_info_protoScollectionsScollection, "reduce"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"keys", &module_info_protoScollectionsScollection, "keys"},
  {"del-dups", &module_info_protoScollectionsSsequence, "del-dups"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"num-to-str", &module_info_protoSmath, "num-to-str"},
  {"sexpr-loc-raw-body", &module_info_syntax, "sexpr-loc-raw-body"},
  {"$sexpr-locals-tag", &module_info_syntax, "$sexpr-locals-tag"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"*max-print-depth*", &module_info_write, "*max-print-depth*"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"ds", &module_info_boot, "ds"},
  {"$sexpr-bind-exit-tag", &module_info_syntax, "$sexpr-bind-exit-tag"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"rev", &module_info_protoScollectionsSsequence, "rev"},
  {"sexpr-expand-backquote", &module_info_syntax, "sexpr-expand-backquote"},
  {"from-below-by", &module_info_protoScollectionsSrange, "from-below-by"},
  {"%i=", &module_info_boot, "%i="},
  {"dlet", &module_info_macros, "dlet"},
  {"%isa", &module_info_boot, "%isa"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"%i?", &module_info_boot, "%i?"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"sexpr-assignment-variable", &module_info_syntax, "sexpr-assignment-variable"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"sexpr-define-class-parents", &module_info_syntax, "sexpr-define-class-parents"},
  {"@+", &module_info_boot, "@+"},
  {"case-insensitive-string-equal", &module_info_protoScollectionsStable, "case-insensitive-string-equal"},
  {"floor", &module_info_protoSmath, "floor"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%fu", &module_info_boot, "%fu"},
  {"next-method", &module_info_macros, "next-method"},
  {"do-keyed", &module_info_protoScollectionsScollection, "do-keyed"},
  {"df", &module_info_boot, "df"},
  {"write-string", &module_info_protoSports, "write-string"},
  {"$char-long-names", &module_info_read, "$char-long-names"},
  {"port-line", &module_info_protoSports, "port-line"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"in", &module_info_protoSports, "in"},
  {"class-name", &module_info_boot, "class-name"},
  {"empty", &module_info_protoScollectionsScollection, "empty"},
  {"%bb", &module_info_boot, "%bb"},
  {"del", &module_info_protoScollectionsSsequence, "del"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"$sexpr-set-tag", &module_info_syntax, "$sexpr-set-tag"},
  {"recurring-write", &module_info_write, "recurring-write"},
  {"port-index-setter", &module_info_protoSports, "port-index-setter"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"<buf>", &module_info_protoScollectionsSbuffer, "<buf>"},
  {"neg", &module_info_protoSmath, "neg"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"<num>", &module_info_boot, "<num>"},
  {"<int>", &module_info_boot, "<int>"},
  {"nil", &module_info_boot, "nil"},
  {"str-to-num", &module_info_protoScollectionsSstring, "str-to-num"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%i^", &module_info_boot, "%i^"},
  {"==", &module_info_macros, "=="},
  {"sexpr-block-body", &module_info_syntax, "sexpr-block-body"},
  {"writeln", &module_info_write, "writeln"},
  {"$sexpr-macro-expand-tag", &module_info_syntax, "$sexpr-macro-expand-tag"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"sexpr-isa-slot-inits", &module_info_syntax, "sexpr-isa-slot-inits"},
  {"<step>", &module_info_protoScollectionsSstep, "<step>"},
  {"%f/", &module_info_boot, "%f/"},
  {"lognot", &module_info_protoSmath, "lognot"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"%su", &module_info_boot, "%su"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"sexpr-syntax-definition-variable", &module_info_syntax, "sexpr-syntax-definition-variable"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"sexpr-function-signature", &module_info_syntax, "sexpr-function-signature"},
  {"%cu", &module_info_boot, "%cu"},
  {"low-elt-setter", &module_info_protoScollectionsScollection, "low-elt-setter"},
  {"empty?", &module_info_macros, "empty?"},
  {"<port>", &module_info_protoSports, "<port>"},
  {"%slot", &module_info_boot, "%slot"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"$sexpr-define-method-tag", &module_info_syntax, "$sexpr-define-method-tag"},
  {"current-gc-state", &module_info_protoScollectionsStable, "current-gc-state"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"sexpr-signature-value", &module_info_syntax, "sexpr-signature-value"},
  {"as-uppercase", &module_info_protoSmath, "as-uppercase"},
  {"sexpr-make-begin", &module_info_syntax, "sexpr-make-begin"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"ash", &module_info_protoSmath, "ash"},
  {"$sexpr-define-function-tag", &module_info_syntax, "$sexpr-define-function-tag"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"bound?", &module_info_boot, "bound?"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"map2", &module_info_protoScollectionsScollection, "map2"},
  {"<log>", &module_info_boot, "<log>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"case-insensitive-string-hash", &module_info_protoScollectionsStable, "case-insensitive-string-hash"},
  {"vec", &module_info_boot, "vec"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"pos?", &module_info_protoSmath, "pos?"},
  {"<map>", &module_info_protoScollectionsSmap, "<map>"},
  {"$sexpr-define-syntax-tag", &module_info_syntax, "$sexpr-define-syntax-tag"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"sexpr-make-setter", &module_info_syntax, "sexpr-make-setter"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"pick", &module_info_protoScollectionsSsequence, "pick"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"lowercase?", &module_info_protoSmath, "lowercase?"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"char->ascii", &module_info_protoSmath, "char->ascii"},
  {"not", &module_info_boot, "not"},
  {"any?", &module_info_protoScollectionsScollection, "any?"},
  {"sexpr-unquote-splicing?", &module_info_syntax, "sexpr-unquote-splicing?"},
  {"%selt", &module_info_boot, "%selt"},
  {"@<", &module_info_boot, "@<"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"curry", &module_info_runtime, "curry"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<any>", &module_info_boot, "<any>"},
  {"<range>", &module_info_protoScollectionsSrange, "<range>"},
  {"dm", &module_info_boot, "dm"},
  {"force-output", &module_info_protoSports, "force-output"},
  {"sexpr-monitor-expand", &module_info_syntax, "sexpr-monitor-expand"},
  {"low-elt", &module_info_protoScollectionsScollection, "low-elt"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"type-class", &module_info_boot, "type-class"},
  {"%im", &module_info_boot, "%im"},
  {"str", &module_info_protoScollectionsSstring, "str"},
  {"%it/", &module_info_boot, "%it/"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"numeric?", &module_info_protoSmath, "numeric?"},
  {"<union>", &module_info_boot, "<union>"},
  {"floor/", &module_info_protoSmath, "floor/"},
  {"select", &module_info_macros, "select"},
  {"seq", &module_info_boot, "seq"},
  {"sexpr-function-body", &module_info_syntax, "sexpr-function-body"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"mif", &module_info_boot, "mif"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"sexpr-variable-type", &module_info_syntax, "sexpr-variable-type"},
  {"sexpr-variable-name", &module_info_syntax, "sexpr-variable-name"},
  {"3rd", &module_info_protoScollectionsSsequence, "3rd"},
  {"from-below", &module_info_protoScollectionsSsequence, "from-below"},
  {"table-growth-threshold-setter", &module_info_protoScollectionsStable, "table-growth-threshold-setter"},
  {"sexpr-make-setter-name", &module_info_syntax, "sexpr-make-setter-name"},
  {"table-growth-factor", &module_info_protoScollectionsStable, "table-growth-factor"},
  {"<input-port>", &module_info_protoSports, "<input-port>"},
  {"map", &module_info_macros, "map"},
  {"fun", &module_info_boot, "fun"},
  {"sexpr-variable?", &module_info_syntax, "sexpr-variable?"},
  {"%i*", &module_info_boot, "%i*"},
  {"sexpr-isa-init-slots", &module_info_syntax, "sexpr-isa-init-slots"},
  {"lsh", &module_info_protoSmath, "lsh"},
  {"newline", &module_info_protoSports, "newline"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"%f<", &module_info_boot, "%f<"},
  {"collected", &module_info_macros, "collected"},
  {"ascii-whitespaces", &module_info_protoScollectionsSstring, "ascii-whitespaces"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"first-then", &module_info_protoScollectionsSstep, "first-then"},
  {"push", &module_info_protoScollectionsSlist, "push"},
  {"pop", &module_info_protoScollectionsSlist, "pop"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"rev!", &module_info_macros, "rev!"},
  {"or", &module_info_macros, "or"},
  {"unless", &module_info_macros, "unless"},
  {"from-above-by", &module_info_protoScollectionsSrange, "from-above-by"},
  {"min", &module_info_protoSmath, "min"},
  {"sexpr-syntax-definition-value", &module_info_syntax, "sexpr-syntax-definition-value"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"from-by", &module_info_protoScollectionsSrange, "from-by"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"port-line-setter", &module_info_protoSports, "port-line-setter"},
  {"as-copy", &module_info_protoScollectionsScollection, "as-copy"},
  {"alter", &module_info_protoScollectionsScollection, "alter"},
  {"<assocs>", &module_info_protoScollectionsSassoc, "<assocs>"},
  {"sexpr-iterate->loc", &module_info_syntax, "sexpr-iterate->loc"},
  {"copy-state", &module_info_protoScollectionsScollection, "copy-state"},
  {"elt-setter", &module_info_protoScollectionsScollection, "elt-setter"},
  {"sexpr-syntax-if-value", &module_info_syntax, "sexpr-syntax-if-value"},
  {"unexec", &module_info_boot, "unexec"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"%ib", &module_info_boot, "%ib"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"$sexpr-isa-tag", &module_info_syntax, "$sexpr-isa-tag"},
  {"write", &module_info_write, "write"},
  {"@olen", &module_info_boot, "@olen"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"2nd", &module_info_protoScollectionsSsequence, "2nd"},
  {"pushf", &module_info_macros, "pushf"},
  {"tup", &module_info_boot, "tup"},
  {"ceiling", &module_info_protoSmath, "ceiling"},
  {"display", &module_info_write, "display"},
  {"$permanent-hash-state", &module_info_protoScollectionsStable, "$permanent-hash-state"},
  {"nxt-state", &module_info_macros, "nxt-state"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"collecting", &module_info_macros, "collecting"},
  {"abs", &module_info_protoSmath, "abs"},
  {"ceiling/", &module_info_protoSmath, "ceiling/"},
  {"loc", &module_info_boot, "loc"},
  {"%lb", &module_info_boot, "%lb"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"app-args", &module_info_runtime, "app-args"},
  {"sexpr-if-then", &module_info_syntax, "sexpr-if-then"},
  {"%f-", &module_info_boot, "%f-"},
  {"%velt", &module_info_boot, "%velt"},
  {"sexpr-method-signature", &module_info_syntax, "sexpr-method-signature"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"$sexpr-slot-tag", &module_info_syntax, "$sexpr-slot-tag"},
  {"close-output-port", &module_info_protoSports, "close-output-port"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"now-key", &module_info_protoScollectionsScollection, "now-key"},
  {"*max-print-length*", &module_info_write, "*max-print-length*"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"sub-setter", &module_info_protoScollectionsSsequence, "sub-setter"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"popf", &module_info_macros, "popf"},
  {"write-char", &module_info_protoSports, "write-char"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"nyi-error", &module_info_protoSmath, "nyi-error"},
  {"isa?", &module_info_boot, "isa?"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"now-elt", &module_info_macros, "now-elt"},
  {"~=", &module_info_protoSmath, "~="},
  {"do2", &module_info_protoScollectionsScollection, "do2"},
  {"1st", &module_info_protoScollectionsSsequence, "1st"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"logbit?", &module_info_protoSmath, "logbit?"},
  {"contagious-call", &module_info_protoSmath, "contagious-call"},
  {"assert", &module_info_macros, "assert"},
  {"var-name", &module_info_macros, "var-name"},
  {"elt", &module_info_macros, "elt"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"assq", &module_info_protoScollectionsSlist, "assq"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"power-of-two-ceiling", &module_info_protoSmath, "power-of-two-ceiling"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"last", "last"},
  {"<opts>", "<opts>"},
  {"identity", "identity"},
  {"var-type", "var-type"},
  {"assocs-test", "assocs-test"},
  {"zero?", "zero?"},
  {"*print-base*", "*print-base*"},
  {"fill", "fill"},
  {"$min-int", "$min-int"},
  {"=", "="},
  {"nul?", "nul?"},
  {"<list>", "<list>"},
  {"dv", "dv"},
  {"fin-state?", "fin-state?"},
  {"class-direct-slots", "class-direct-slots"},
  {"uppercase?", "uppercase?"},
  {"reduce+", "reduce+"},
  {"table-shrink-threshold", "table-shrink-threshold"},
  {"from", "from"},
  {"locative-value-setter", "locative-value-setter"},
  {"now-elt-setter", "now-elt-setter"},
  {"<serious-condition>", "<serious-condition>"},
  {"len", "len"},
  {"use", "use"},
  {"round/", "round/"},
  {"any?", "any?"},
  {"type-object", "type-object"},
  {"flo-bits", "flo-bits"},
  {"ini-state", "ini-state"},
  {"<class>", "<class>"},
  {"even?", "even?"},
  {"gensym", "gensym"},
  {"<output-port>", "<output-port>"},
  {"from-to-by", "from-to-by"},
  {"+", "+"},
  {"handler-matches?", "handler-matches?"},
  {"format", "format"},
  {"and", "and"},
  {"sub", "sub"},
  {"<str-tab>", "<str-tab>"},
  {"to-digit", "to-digit"},
  {"read-from-string", "read-from-string"},
  {"<type>", "<type>"},
  {"false-or", "false-or"},
  {"add", "add"},
  {"<=", "<="},
  {"fun-specs", "fun-specs"},
  {"locative-value", "locative-value"},
  {"<handler-info>", "<handler-info>"},
  {"del-keys", "del-keys"},
  {"display", "display"},
  {"len-setter", "len-setter"},
  {"object-parents", "object-parents"},
  {"<string-port>", "<string-port>"},
  {"<gen>", "<gen>"},
  {"slot-init", "slot-init"},
  {"char-ready?", "char-ready?"},
  {"elt", "elt"},
  {"rep", "rep"},
  {"<file-output-port>", "<file-output-port>"},
  {"object-slots", "object-slots"},
  {"id-hash", "id-hash"},
  {"lowercase?", "lowercase?"},
  {"<sym>", "<sym>"},
  {"t<", "t<"},
  {"app-filename", "app-filename"},
  {"write-char", "write-char"},
  {"find-setter", "find-setter"},
  {"inc", "inc"},
  {"logior", "logior"},
  {"fabs", "fabs"},
  {"<simple-condition>", "<simple-condition>"},
  {"address-of", "address-of"},
  {"round", "round"},
  {"lab", "lab"},
  {"always", "always"},
  {"class-direct-children", "class-direct-children"},
  {"cat2", "cat2"},
  {"<fun>", "<fun>"},
  {"rcurry", "rcurry"},
  {"peek-char", "peek-char"},
  {"curry", "curry"},
  {"match-atom", "match-atom"},
  {"make-setter-name", "make-setter-name"},
  {"var-name", "var-name"},
  {"truncate/", "truncate/"},
  {"sig", "sig"},
  {"isa", "isa"},
  {"export", "export"},
  {"call-with-output-file", "call-with-output-file"},
  {"del-key", "del-key"},
  {"pos", "pos"},
  {"%next-methods", "%next-methods"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"t=", "t="},
  {"default-handler", "default-handler"},
  {"do", "do"},
  {"error", "error"},
  {"max", "max"},
  {"call-with-input-file", "call-with-input-file"},
  {"<vec>", "<vec>"},
  {"slot-owner", "slot-owner"},
  {"need-implementation", "need-implementation"},
  {"fun-names", "fun-names"},
  {"<met>", "<met>"},
  {"fun-mets", "fun-mets"},
  {"force-output", "force-output"},
  {"head-setter", "head-setter"},
  {"<int>", "<int>"},
  {"condition-message", "condition-message"},
  {"<str>", "<str>"},
  {"%define-method", "%define-method"},
  {"fab", "fab"},
  {"match-empty-list", "match-empty-list"},
  {"cat!", "cat!"},
  {"port-index", "port-index"},
  {"find-getter", "find-getter"},
  {"quote", "quote"},
  {"pair", "pair"},
  {"fab-class", "fab-class"},
  {"to-str", "to-str"},
  {"<flat>", "<flat>"},
  {"head", "head"},
  {"from-above", "from-above"},
  {"read-char", "read-char"},
  {"neg?", "neg?"},
  {"class-direct-parents", "class-direct-parents"},
  {"when", "when"},
  {"t+", "t+"},
  {"find-key", "find-key"},
  {"nul", "nul"},
  {"apply", "apply"},
  {"logxor", "logxor"},
  {"~==", "~=="},
  {"all2?", "all2?"},
  {"<string-output-port>", "<string-output-port>"},
  {"table-protocol", "table-protocol"},
  {"pop-last!", "pop-last!"},
  {"set", "set"},
  {"open-output-file", "open-output-file"},
  {"as-lowercase", "as-lowercase"},
  {"/", "/"},
  {"eof-object?", "eof-object?"},
  {"call-with-string-output-port", "call-with-string-output-port"},
  {"case", "case"},
  {"modulo", "modulo"},
  {"swapf", "swapf"},
  {"opf", "opf"},
  {"ct", "ct"},
  {"<string-input-port>", "<string-input-port>"},
  {"napply", "napply"},
  {"mem?", "mem?"},
  {"<lst>", "<lst>"},
  {"add!", "add!"},
  {"$max-int", "$max-int"},
  {"make-handler", "make-handler"},
  {"fab-map", "fab-map"},
  {"collect", "collect"},
  {"*", "*"},
  {"dc", "dc"},
  {"odd?", "odd?"},
  {"open-input-file", "open-input-file"},
  {"table-growth-threshold", "table-growth-threshold"},
  {"tail-setter", "tail-setter"},
  {"slot-type", "slot-type"},
  {"slot", "slot"},
  {"fin", "fin"},
  {"if", "if"},
  {"sorted-app-mets", "sorted-app-mets"},
  {"<seq>", "<seq>"},
  {"cat", "cat"},
  {"-", "-"},
  {"port-contents", "port-contents"},
  {"all?", "all?"},
  {"read", "read"},
  {"tail", "tail"},
  {"<tab>", "<tab>"},
  {"as", "as"},
  {"push-last!", "push-last!"},
  {"lst", "lst"},
  {"class-slots", "class-slots"},
  {"alphabetic?", "alphabetic?"},
  {"<col>", "<col>"},
  {"condition-arguments", "condition-arguments"},
  {">=", ">="},
  {"logand", "logand"},
  {"<file-port>", "<file-port>"},
  {"handler-info-message", "handler-info-message"},
  {"<tup>", "<tup>"},
  {"default", "default"},
  {"map-keyed", "map-keyed"},
  {"truncate", "truncate"},
  {"dg", "dg"},
  {"for", "for"},
  {"out", "out"},
  {"<error>", "<error>"},
  {"compose", "compose"},
  {"empty", "empty"},
  {"try", "try"},
  {"list", "list"},
  {"<condition>", "<condition>"},
  {"<loc>", "<loc>"},
  {"call-with-string-input-port", "call-with-string-input-port"},
  {"dec", "dec"},
  {"buf", "buf"},
  {"let", "let"},
  {"remainder", "remainder"},
  {"keys", "keys"},
  {"del-dups", "del-dups"},
  {"type-elts", "type-elts"},
  {"num-to-str", "num-to-str"},
  {"met-app?", "met-app?"},
  {"ds", "ds"},
  {"rev", "rev"},
  {"from-below-by", "from-below-by"},
  {"dlet", "dlet"},
  {"macro-expand", "macro-expand"},
  {"write-to-string", "write-to-string"},
  {"<flo>", "<flo>"},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"floor", "floor"},
  {"next-method", "next-method"},
  {"reduce", "reduce"},
  {"do-keyed", "do-keyed"},
  {"df", "df"},
  {"write-string", "write-string"},
  {"<range>", "<range>"},
  {"port-line", "port-line"},
  {"in", "in"},
  {"class-name", "class-name"},
  {"del", "del"},
  {"<handler>", "<handler>"},
  {"make-sym", "make-sym"},
  {"<buf>", "<buf>"},
  {"neg", "neg"},
  {"<num>", "<num>"},
  {"nil", "nil"},
  {"str-to-num", "str-to-num"},
  {"==", "=="},
  {"writeln", "writeln"},
  {"fun-value", "fun-value"},
  {"from-to", "from-to"},
  {"from-above-by", "from-above-by"},
  {"any2?", "any2?"},
  {"<step>", "<step>"},
  {"lognot", "lognot"},
  {"<chr>", "<chr>"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"low-elt-setter", "low-elt-setter"},
  {"empty?", "empty?"},
  {"<port>", "<port>"},
  {"%slot", "%slot"},
  {"current-gc-state", "current-gc-state"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"as-uppercase", "as-uppercase"},
  {"slot-setter", "slot-setter"},
  {"ash", "ash"},
  {"match-sublist", "match-sublist"},
  {"slot-value-setter", "slot-value-setter"},
  {"%pair", "%pair"},
  {"map2", "map2"},
  {"<log>", "<log>"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"bound?", "bound?"},
  {"vec", "vec"},
  {"pos?", "pos?"},
  {"<map>", "<map>"},
  {"<slot>", "<slot>"},
  {"pick", "pick"},
  {"subtype?", "subtype?"},
  {"ct-also", "ct-also"},
  {"not", "not"},
  {"<assocs>", "<assocs>"},
  {"fun-name", "fun-name"},
  {"class-parents", "class-parents"},
  {"may-isa?", "may-isa?"},
  {"<any>", "<any>"},
  {"dm", "dm"},
  {"low-elt", "low-elt"},
  {"gen-add-met", "gen-add-met"},
  {"type-class", "type-class"},
  {"str", "str"},
  {"numeric?", "numeric?"},
  {"<union>", "<union>"},
  {"floor/", "floor/"},
  {"select", "select"},
  {"seq", "seq"},
  {"slot-value", "slot-value"},
  {"mif", "mif"},
  {"fun-arity", "fun-arity"},
  {"len/fill-setter", "len/fill-setter"},
  {"3rd", "3rd"},
  {"from-below", "from-below"},
  {"table-growth-factor", "table-growth-factor"},
  {"<input-port>", "<input-port>"},
  {"map", "map"},
  {"fun", "fun"},
  {"lsh", "lsh"},
  {"<simple-error>", "<simple-error>"},
  {"collected", "collected"},
  {"<subclass>", "<subclass>"},
  {"first-then", "first-then"},
  {"push", "push"},
  {"pop", "pop"},
  {"rev!", "rev!"},
  {"or", "or"},
  {"unless", "unless"},
  {"min", "min"},
  {"from-by", "from-by"},
  {"alter", "alter"},
  {"copy-state", "copy-state"},
  {"elt-setter", "elt-setter"},
  {"handler-function", "handler-function"},
  {"quasiquote", "quasiquote"},
  {"write", "write"},
  {"<singleton>", "<singleton>"},
  {"2nd", "2nd"},
  {"pushf", "pushf"},
  {"tup", "tup"},
  {"ceiling", "ceiling"},
  {"$permanent-hash-state", "$permanent-hash-state"},
  {"nxt-state", "nxt-state"},
  {"collecting", "collecting"},
  {"abs", "abs"},
  {"ceiling/", "ceiling/"},
  {"loc", "loc"},
  {"app-args", "app-args"},
  {"close-output-port", "close-output-port"},
  {"now-key", "now-key"},
  {"<file-input-port>", "<file-input-port>"},
  {">", ">"},
  {"sub-setter", "sub-setter"},
  {"close-input-port", "close-input-port"},
  {"popf", "popf"},
  {"newline", "newline"},
  {"add-slot", "add-slot"},
  {"isa?", "isa?"},
  {"describe-condition", "describe-condition"},
  {"now-elt", "now-elt"},
  {"~=", "~="},
  {"do2", "do2"},
  {"1st", "1st"},
  {"match-unquote", "match-unquote"},
  {"logbit?", "logbit?"},
  {"assert", "assert"},
  {"<", "<"},
  {"$default-handler-info", "$default-handler-info"},
  {"slot-getter", "slot-getter"},
  {"fun-nary?", "fun-nary?"},
  {"%isa", "%isa"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_proto;
MODULE_INFO module_info_proto = {
  "proto",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_boot (void);
extern void load_module_macros (void);
extern void load_module_protoStypes (void);
extern void load_module_protoSmath (void);
extern void load_module_runtime (void);
extern void load_module_protoScollections (void);
extern void load_module_write (void);
extern void load_module_read (void);
extern void load_module_syntax (void);
extern void load_module_protoSports (void);

/* EXPRESSION: */

extern void load_module_proto (void);

void load_module_proto (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_protoStypes();
  load_module_protoSmath();
  load_module_runtime();
  load_module_protoScollections();
  load_module_write();
  load_module_read();
  load_module_syntax();
  load_module_protoSports();

  (P)YprotoY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
