/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto */

EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
EXT(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YLlstG,"boot","<lst>");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YruntimeYassq,"runtime","assq");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYE,"runtime","=");
EXT(Yslot_init,"boot","slot-init");
EXT(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(Yfapply,"boot","fapply");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YLvecG,"boot","<vec>");
EXT(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(YLintG,"boot","<int>");
EXT(YLlogG,"boot","<log>");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
EXT(YruntimeYcompose,"runtime","compose");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYround,"runtime","round");
EXT(YobjectL,"boot","object<");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYtype_or,"runtime","type-or");
EXT(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
EXT(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYL,"runtime","<");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YPsymbols,"boot","%symbols");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Yerror,"boot","error");
EXT(YwriteYenv_object_name,"write","env-object-name");
EXT(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
EXT(Ysig_value,"boot","sig-value");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYGE,"runtime",">=");
EXT(YLmetG,"boot","<met>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYsub,"runtime","sub");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YLoptsG,"boot","<opts>");
EXT(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YwriteYdisplay,"write","display");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YruntimeYfloor,"runtime","floor");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YreadYDchar_long_names,"read","$char-long-names");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(Ytail,"boot","tail");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYfill,"runtime","fill");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YruntimeYadd,"runtime","add");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYpop,"runtime","pop");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYpush,"runtime","push");
EXT(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
EXT(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(Ylst,"boot","lst");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYempty,"runtime","empty");
EXT(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYdefault,"runtime","default");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
EXT(Ysig_names,"boot","sig-names");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YPisa,"boot","%isa");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YLtupG,"boot","<tup>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YruntimeYneg,"runtime","neg");
EXT(YruntimeYdo,"runtime","do");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YisaQ,"boot","isa?");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yapply,"boot","apply");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(YmacrosYEE,"macros","==");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYvec,"runtime","vec");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(Ynot,"boot","not");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYas,"runtime","as");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(YLanyG,"boot","<any>");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YruntimeYNE,"runtime","~=");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYS,"runtime","/");
EXT(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYrev,"runtime","rev");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYmax,"runtime","max");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Yobject_slots,"boot","object-slots");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YPsnul,"boot","%snul");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yslot_type,"boot","slot-type");
EXT(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYA,"runtime","+");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYpos,"runtime","pos");
EXT(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(Yfind_setter,"boot","find-setter");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYfrom,"runtime","from");
EXT(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(YwriteYwriteln,"write","writeln");
EXT(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeY1st,"runtime","1st");
EXT(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(Ysym_name,"boot","sym-name");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
EXT(YPdefine_method,"boot","%define-method");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
EXT(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(Yslot_getter,"boot","slot-getter");
EXT(Yobject_direct_parents,"boot","object-direct-parents");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
EXT(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYalways,"runtime","always");
EXT(YmacrosYcat,"macros","cat");
EXT(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYin,"runtime","in");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYout,"runtime","out");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(Ynil,"boot","nil");
EXT(YLseqG,"boot","<seq>");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYroundS,"runtime","round/");
EXT(Yobject_direct_slots,"boot","object-direct-slots");
EXT(YruntimeYabs,"runtime","abs");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YLgenG,"boot","<gen>");
EXT(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
EXT(Yhead,"boot","head");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(Yslot_value,"boot","slot-value");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YruntimeYsig,"runtime","sig");
EXT(Yfun_value,"boot","fun-value");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Yfun_names,"boot","fun-names");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYread,"runtime","read");
EXT(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYdel,"runtime","del");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YruntimeYlast,"runtime","last");
EXT(YwriteYobject_name,"write","object-name");
EXT(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YruntimeYmin,"runtime","min");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(Ytype_error,"boot","type-error");
EXT(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YwriteYwrite,"write","write");
EXT(Yhead_setter,"boot","head-setter");
EXT(YLtraitsG,"boot","<traits>");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYlen,"runtime","len");
EXT(Ynul,"boot","nul");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YruntimeYlist,"runtime","list");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYnegQ,"runtime","neg?");

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
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_read;
extern MODULE_INFO module_info_syntax;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {&module_info_write},
  {&module_info_read},
  {&module_info_syntax},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"locative-value", &module_info_runtime, "locative-value"},
  {"sexpr-variable-name", &module_info_syntax, "sexpr-variable-name"},
  {"sexpr-make-getter", &module_info_syntax, "sexpr-make-getter"},
  {"sexpr-forward-primitive?", &module_info_syntax, "sexpr-forward-primitive?"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"remainder", &module_info_runtime, "remainder"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%i?", &module_info_boot, "%i?"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"%su", &module_info_boot, "%su"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_syntax, "sexpr-unwind-protect-cleanup-forms"},
  {"assq", &module_info_runtime, "assq"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"=", &module_info_runtime, "="},
  {"slot-init", &module_info_boot, "slot-init"},
  {"$sexpr-set-tag", &module_info_syntax, "$sexpr-set-tag"},
  {"export", &module_info_boot, "export"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"map", &module_info_macros, "map"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"sexpr-method-signature", &module_info_syntax, "sexpr-method-signature"},
  {"%i!", &module_info_boot, "%i!"},
  {"2nd", &module_info_runtime, "2nd"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"sexpr-expand-backquote", &module_info_syntax, "sexpr-expand-backquote"},
  {"fapply", &module_info_boot, "fapply"},
  {"var-name", &module_info_macros, "var-name"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"sexpr-syntax-definition-value", &module_info_syntax, "sexpr-syntax-definition-value"},
  {"sexpr-loc-bound-signatures", &module_info_syntax, "sexpr-loc-bound-signatures"},
  {"sexpr-assignment-value", &module_info_syntax, "sexpr-assignment-value"},
  {"if", &module_info_boot, "if"},
  {"<int>", &module_info_boot, "<int>"},
  {"<log>", &module_info_boot, "<log>"},
  {"do2", &module_info_runtime, "do2"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"$sexpr-define-generic-tag", &module_info_syntax, "$sexpr-define-generic-tag"},
  {"compose", &module_info_runtime, "compose"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"or", &module_info_macros, "or"},
  {"assert", &module_info_macros, "assert"},
  {"round", &module_info_runtime, "round"},
  {"when", &module_info_macros, "when"},
  {"object<", &module_info_boot, "object<"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"sexpr-isa-init-values", &module_info_syntax, "sexpr-isa-init-values"},
  {"from-below", &module_info_runtime, "from-below"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"type-or", &module_info_runtime, "type-or"},
  {"$sexpr-slot-tag", &module_info_syntax, "$sexpr-slot-tag"},
  {"popf", &module_info_macros, "popf"},
  {"try", &module_info_boot, "try"},
  {"$sexpr-monitor-tag", &module_info_syntax, "$sexpr-monitor-tag"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"let", &module_info_boot, "let"},
  {"dp", &module_info_boot, "dp"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"sexpr-sequence->begin", &module_info_syntax, "sexpr-sequence->begin"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"sexpr-assignment-variable", &module_info_syntax, "sexpr-assignment-variable"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"<", &module_info_runtime, "<"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"sexpr-isa-slot-inits", &module_info_syntax, "sexpr-isa-slot-inits"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"%lu", &module_info_boot, "%lu"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"sexpr-block-body", &module_info_syntax, "sexpr-block-body"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"cat!", &module_info_runtime, "cat!"},
  {"$sexpr-macro-expand-tag", &module_info_syntax, "$sexpr-macro-expand-tag"},
  {"keys", &module_info_runtime, "keys"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"sexpr-slot-init", &module_info_syntax, "sexpr-slot-init"},
  {"pos?", &module_info_runtime, "pos?"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"<col>", &module_info_boot, "<col>"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"dv", &module_info_boot, "dv"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"%f-", &module_info_boot, "%f-"},
  {"$sexpr-begin-tag", &module_info_syntax, "$sexpr-begin-tag"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"%fu", &module_info_boot, "%fu"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"%pair", &module_info_boot, "%pair"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"~==", &module_info_runtime, "~=="},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"error", &module_info_boot, "error"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"env-object-name", &module_info_write, "env-object-name"},
  {"sexpr-syntax-definition-variable", &module_info_syntax, "sexpr-syntax-definition-variable"},
  {"pair", &module_info_macros, "pair"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"$sexpr-bind-exit-tag", &module_info_syntax, "$sexpr-bind-exit-tag"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"seq", &module_info_boot, "seq"},
  {"tup", &module_info_macros, "tup"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"pushf", &module_info_macros, "pushf"},
  {"ash", &module_info_runtime, "ash"},
  {"quote", &module_info_boot, "quote"},
  {"port-index", &module_info_runtime, "port-index"},
  {"assocq", &module_info_runtime, "assocq"},
  {"%f+", &module_info_boot, "%f+"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"<port>", &module_info_runtime, "<port>"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {">", &module_info_runtime, ">"},
  {">=", &module_info_runtime, ">="},
  {"<met>", &module_info_boot, "<met>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"sub", &module_info_runtime, "sub"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"sexpr-function-definition-variable", &module_info_syntax, "sexpr-function-definition-variable"},
  {"display", &module_info_write, "display"},
  {"from-by", &module_info_runtime, "from-by"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"%str", &module_info_boot, "%str"},
  {"sexpr-method-body", &module_info_syntax, "sexpr-method-body"},
  {"$sexpr-syntax-if-tag", &module_info_syntax, "$sexpr-syntax-if-tag"},
  {"dec", &module_info_macros, "dec"},
  {"identity", &module_info_runtime, "identity"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"bound?", &module_info_boot, "bound?"},
  {"sexpr-slot-variable", &module_info_syntax, "sexpr-slot-variable"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"lsh", &module_info_runtime, "lsh"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"mem?", &module_info_runtime, "mem?"},
  {"lab", &module_info_boot, "lab"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"floor", &module_info_runtime, "floor"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"find-key", &module_info_runtime, "find-key"},
  {"$char-long-names", &module_info_read, "$char-long-names"},
  {"df", &module_info_boot, "df"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"sexpr-make-macro-function", &module_info_syntax, "sexpr-make-macro-function"},
  {"dg", &module_info_boot, "dg"},
  {"tail", &module_info_boot, "tail"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"%i+", &module_info_boot, "%i+"},
  {"fill", &module_info_runtime, "fill"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"add", &module_info_runtime, "add"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"pop", &module_info_runtime, "pop"},
  {"alter", &module_info_runtime, "alter"},
  {"push", &module_info_runtime, "push"},
  {"collected", &module_info_macros, "collected"},
  {"$sexpr-define-tag", &module_info_syntax, "$sexpr-define-tag"},
  {"fab", &module_info_runtime, "fab"},
  {"modulo", &module_info_runtime, "modulo"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"sexpr-if-else", &module_info_syntax, "sexpr-if-else"},
  {"%f/", &module_info_boot, "%f/"},
  {"sexpr-variable?", &module_info_syntax, "sexpr-variable?"},
  {"%cu", &module_info_boot, "%cu"},
  {"curry", &module_info_runtime, "curry"},
  {"%iu", &module_info_boot, "%iu"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"truncate", &module_info_runtime, "truncate"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"%i^", &module_info_boot, "%i^"},
  {"lst", &module_info_boot, "lst"},
  {"assoc", &module_info_runtime, "assoc"},
  {"%vec", &module_info_boot, "%vec"},
  {"now-key", &module_info_runtime, "now-key"},
  {"next-method", &module_info_macros, "next-method"},
  {"empty", &module_info_runtime, "empty"},
  {"sexpr-unquote?", &module_info_syntax, "sexpr-unquote?"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"<str>", &module_info_boot, "<str>"},
  {"%i&", &module_info_boot, "%i&"},
  {"all?", &module_info_runtime, "all?"},
  {"%cb", &module_info_boot, "%cb"},
  {"dm", &module_info_boot, "dm"},
  {"sexpr-isa-init-slots", &module_info_syntax, "sexpr-isa-init-slots"},
  {"logior", &module_info_runtime, "logior"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"from-above", &module_info_runtime, "from-above"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"default", &module_info_runtime, "default"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"any?", &module_info_runtime, "any?"},
  {"sexpr-operands", &module_info_syntax, "sexpr-operands"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"%i<", &module_info_boot, "%i<"},
  {"even?", &module_info_runtime, "even?"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"floor/", &module_info_runtime, "floor/"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"sexpr-definition-variable", &module_info_syntax, "sexpr-definition-variable"},
  {"%im", &module_info_boot, "%im"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"%isa", &module_info_boot, "%isa"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"neg", &module_info_runtime, "neg"},
  {"do", &module_info_runtime, "do"},
  {"add!", &module_info_runtime, "add!"},
  {"inc", &module_info_macros, "inc"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"isa?", &module_info_boot, "isa?"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"apply", &module_info_boot, "apply"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"sexpr-function-definition-value", &module_info_syntax, "sexpr-function-definition-value"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"-", &module_info_runtime, "-"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"%ib", &module_info_boot, "%ib"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"sexpr-loc-bound-names", &module_info_syntax, "sexpr-loc-bound-names"},
  {"%it/", &module_info_boot, "%it/"},
  {"%do-runtime-bindings", &module_info_boot, "%do-runtime-bindings"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"fun", &module_info_boot, "fun"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"<error>", &module_info_runtime, "<error>"},
  {"%raw", &module_info_boot, "%raw"},
  {"%ft", &module_info_boot, "%ft"},
  {"$sexpr-define-method-tag", &module_info_syntax, "$sexpr-define-method-tag"},
  {"==", &module_info_macros, "=="},
  {"<loc>", &module_info_boot, "<loc>"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"vec", &module_info_runtime, "vec"},
  {"%sb", &module_info_boot, "%sb"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"<range>", &module_info_runtime, "<range>"},
  {"write-char", &module_info_runtime, "write-char"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"3rd", &module_info_runtime, "3rd"},
  {"sexpr-syntax-if-value", &module_info_syntax, "sexpr-syntax-if-value"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"isa", &module_info_boot, "isa"},
  {"not", &module_info_boot, "not"},
  {"logxor", &module_info_runtime, "logxor"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"as", &module_info_runtime, "as"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"$sexpr-locals-tag", &module_info_syntax, "$sexpr-locals-tag"},
  {"<any>", &module_info_boot, "<any>"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"~=", &module_info_runtime, "~="},
  {"app-args", &module_info_runtime, "app-args"},
  {"/", &module_info_runtime, "/"},
  {"sexpr-if-then", &module_info_syntax, "sexpr-if-then"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"sexpr-text-of-quotation", &module_info_syntax, "sexpr-text-of-quotation"},
  {"fin", &module_info_boot, "fin"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"fabs", &module_info_runtime, "fabs"},
  {"rev", &module_info_runtime, "rev"},
  {"<list>", &module_info_runtime, "<list>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"max", &module_info_runtime, "max"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"ds", &module_info_boot, "ds"},
  {"%snul", &module_info_boot, "%snul"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"<=", &module_info_runtime, "<="},
  {"zero?", &module_info_runtime, "zero?"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"sexpr-make-setter-name", &module_info_syntax, "sexpr-make-setter-name"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"map2", &module_info_runtime, "map2"},
  {"$sexpr-let-tag", &module_info_syntax, "$sexpr-let-tag"},
  {"sexpr-make-anonymous-method", &module_info_syntax, "sexpr-make-anonymous-method"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"+", &module_info_runtime, "+"},
  {"address-of", &module_info_runtime, "address-of"},
  {"%velt", &module_info_boot, "%velt"},
  {"select", &module_info_macros, "select"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"pos", &module_info_runtime, "pos"},
  {"sexpr-let->combination", &module_info_syntax, "sexpr-let->combination"},
  {"$sexpr-if-tag", &module_info_syntax, "$sexpr-if-tag"},
  {"reduce", &module_info_runtime, "reduce"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"do3", &module_info_runtime, "do3"},
  {"sexpr-loc-bound-bodies", &module_info_syntax, "sexpr-loc-bound-bodies"},
  {"var-type", &module_info_macros, "var-type"},
  {"%i-", &module_info_boot, "%i-"},
  {"$sexpr-define-syntax-tag", &module_info_syntax, "$sexpr-define-syntax-tag"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"from", &module_info_runtime, "from"},
  {"dlet", &module_info_macros, "dlet"},
  {"$sexpr-unwind-protect-tag", &module_info_syntax, "$sexpr-unwind-protect-tag"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"writeln", &module_info_write, "writeln"},
  {"case", &module_info_macros, "case"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"sexpr-function-signature", &module_info_syntax, "sexpr-function-signature"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"1st", &module_info_runtime, "1st"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"$sexpr-method-tag", &module_info_syntax, "$sexpr-method-tag"},
  {"sexpr-variable-type", &module_info_syntax, "sexpr-variable-type"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"force-output", &module_info_runtime, "force-output"},
  {"sexpr-block-name", &module_info_syntax, "sexpr-block-name"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"sexpr-isa-parents", &module_info_syntax, "sexpr-isa-parents"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"gensym", &module_info_macros, "gensym"},
  {"$sexpr-quasiquote-tag", &module_info_syntax, "$sexpr-quasiquote-tag"},
  {"sexpr-make-setter", &module_info_syntax, "sexpr-make-setter"},
  {"assqn", &module_info_runtime, "assqn"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"object-direct-parents", &module_info_boot, "object-direct-parents"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"logand", &module_info_runtime, "logand"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"sexpr-monitor-expand", &module_info_syntax, "sexpr-monitor-expand"},
  {"sexpr-loc-raw-body", &module_info_syntax, "sexpr-loc-raw-body"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"$sexpr-isa-tag", &module_info_syntax, "$sexpr-isa-tag"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"*", &module_info_runtime, "*"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"always", &module_info_runtime, "always"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"cat", &module_info_macros, "cat"},
  {"sexpr-bind-pattern-variables", &module_info_syntax, "sexpr-bind-pattern-variables"},
  {"<num>", &module_info_boot, "<num>"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"sexpr-unquote-splicing?", &module_info_syntax, "sexpr-unquote-splicing?"},
  {"str", &module_info_runtime, "str"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"$sexpr-quote-tag", &module_info_syntax, "$sexpr-quote-tag"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"loc", &module_info_boot, "loc"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"sexpr-slot-object", &module_info_syntax, "sexpr-slot-object"},
  {"pick", &module_info_runtime, "pick"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"in", &module_info_runtime, "in"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"sexpr-iterate->loc", &module_info_syntax, "sexpr-iterate->loc"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"out", &module_info_runtime, "out"},
  {"%c=", &module_info_boot, "%c="},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"sexpr-operator", &module_info_syntax, "sexpr-operator"},
  {"and", &module_info_macros, "and"},
  {"sexpr-syntax-if-pattern", &module_info_syntax, "sexpr-syntax-if-pattern"},
  {"ct", &module_info_boot, "ct"},
  {"odd?", &module_info_runtime, "odd?"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"nil", &module_info_boot, "nil"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"for", &module_info_macros, "for"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"round/", &module_info_runtime, "round/"},
  {"object-direct-slots", &module_info_boot, "object-direct-slots"},
  {"mif", &module_info_boot, "mif"},
  {"abs", &module_info_runtime, "abs"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"%i=", &module_info_boot, "%i="},
  {"cat2", &module_info_runtime, "cat2"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"$sexpr-define-function-tag", &module_info_syntax, "$sexpr-define-function-tag"},
  {"sexpr-signature-value", &module_info_syntax, "sexpr-signature-value"},
  {"%slen", &module_info_boot, "%slen"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"%slot", &module_info_boot, "%slot"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"sexpr-syntax-if-then", &module_info_syntax, "sexpr-syntax-if-then"},
  {"head", &module_info_boot, "head"},
  {"lognot", &module_info_runtime, "lognot"},
  {"sexpr-syntax-if-else", &module_info_syntax, "sexpr-syntax-if-else"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"slot", &module_info_boot, "slot"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"$sexpr-iterate-tag", &module_info_syntax, "$sexpr-iterate-tag"},
  {"sig", &module_info_runtime, "sig"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"elt", &module_info_runtime, "elt"},
  {"first-then", &module_info_runtime, "first-then"},
  {"%f*", &module_info_boot, "%f*"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"to-str", &module_info_runtime, "to-str"},
  {"sexpr-function-body", &module_info_syntax, "sexpr-function-body"},
  {"collect", &module_info_macros, "collect"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"<map>", &module_info_runtime, "<map>"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"read", &module_info_runtime, "read"},
  {"sexpr-if-test", &module_info_syntax, "sexpr-if-test"},
  {"write-string", &module_info_runtime, "write-string"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"%f<", &module_info_boot, "%f<"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"%c<", &module_info_boot, "%c<"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"dss", &module_info_boot, "dss"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"del-key", &module_info_runtime, "del-key"},
  {"del", &module_info_runtime, "del"},
  {"eval", &module_info_syntax, "eval"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"sexpr-unwind-protect-protected-form", &module_info_syntax, "sexpr-unwind-protect-protected-form"},
  {"%fb", &module_info_boot, "%fb"},
  {"from-to", &module_info_runtime, "from-to"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"rep", &module_info_boot, "rep"},
  {"last", &module_info_runtime, "last"},
  {"%f=", &module_info_boot, "%f="},
  {"object-name", &module_info_write, "object-name"},
  {"%bb", &module_info_boot, "%bb"},
  {"sexpr-definition-value", &module_info_syntax, "sexpr-definition-value"},
  {"<step>", &module_info_runtime, "<step>"},
  {"min", &module_info_runtime, "min"},
  {"format", &module_info_runtime, "format"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"type-error", &module_info_boot, "type-error"},
  {"sexpr-make-begin", &module_info_syntax, "sexpr-make-begin"},
  {"%iv", &module_info_boot, "%iv"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"use", &module_info_boot, "use"},
  {"%i*", &module_info_boot, "%i*"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"write", &module_info_write, "write"},
  {"collecting", &module_info_macros, "collecting"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"<traits>", &module_info_boot, "<traits>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"len", &module_info_runtime, "len"},
  {"nul", &module_info_boot, "nul"},
  {"empty?", &module_info_macros, "empty?"},
  {"%call-next-method", &module_info_boot, "%call-next-method"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"rev!", &module_info_runtime, "rev!"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"set", &module_info_boot, "set"},
  {"nul?", &module_info_runtime, "nul?"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"sexpr-make-application", &module_info_syntax, "sexpr-make-application"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"%selt", &module_info_boot, "%selt"},
  {"read-char", &module_info_runtime, "read-char"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"buf", &module_info_runtime, "buf"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"list", &module_info_runtime, "list"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"newline", &module_info_runtime, "newline"},
  {"neg?", &module_info_runtime, "neg?"},
  {"unless", &module_info_macros, "unless"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"locative-value", "locative-value"},
  {"write", "write"},
  {"elt-setter", "elt-setter"},
  {"remainder", "remainder"},
  {"<lst>", "<lst>"},
  {"call-with-string-output-port", "call-with-string-output-port"},
  {"display", "display"},
  {"ceiling/", "ceiling/"},
  {"=", "="},
  {"slot-init", "slot-init"},
  {"export", "export"},
  {"map", "map"},
  {"quasiquote", "quasiquote"},
  {"2nd", "2nd"},
  {"var-name", "var-name"},
  {"<vec>", "<vec>"},
  {"if", "if"},
  {"<log>", "<log>"},
  {"do2", "do2"},
  {"ini-state", "ini-state"},
  {"compose", "compose"},
  {"round", "round"},
  {"or", "or"},
  {"assert", "assert"},
  {"when", "when"},
  {"object<", "object<"},
  {"<simple-condition>", "<simple-condition>"},
  {"from-below", "from-below"},
  {"popf", "popf"},
  {"try", "try"},
  {"to-digit", "to-digit"},
  {"let", "let"},
  {"char-ready?", "char-ready?"},
  {"sorted-app-mets", "sorted-app-mets"},
  {"as-uppercase", "as-uppercase"},
  {"fun-name", "fun-name"},
  {"<", "<"},
  {"<serious-condition>", "<serious-condition>"},
  {"copy-state", "copy-state"},
  {"slot-setter", "slot-setter"},
  {"ceiling", "ceiling"},
  {"match-empty-list", "match-empty-list"},
  {"need-implementation", "need-implementation"},
  {"eof-object?", "eof-object?"},
  {"<assocs>", "<assocs>"},
  {"read", "read"},
  {"cat!", "cat!"},
  {"table-growth-threshold", "table-growth-threshold"},
  {"pos?", "pos?"},
  {"<col>", "<col>"},
  {"pop-last!", "pop-last!"},
  {"dv", "dv"},
  {"fin-state?", "fin-state?"},
  {"%pair", "%pair"},
  {"<flat>", "<flat>"},
  {"~==", "~=="},
  {"error", "error"},
  {"ct-also", "ct-also"},
  {"pair", "pair"},
  {"head", "head"},
  {"seq", "seq"},
  {"lowercase?", "lowercase?"},
  {"tup", "tup"},
  {"<simple-error>", "<simple-error>"},
  {"pushf", "pushf"},
  {"quote", "quote"},
  {"port-index", "port-index"},
  {"<port>", "<port>"},
  {">", ">"},
  {">=", ">="},
  {"<met>", "<met>"},
  {"*print-base*", "*print-base*"},
  {"sub", "sub"},
  {"<opts>", "<opts>"},
  {"fun-arity", "fun-arity"},
  {"from-by", "from-by"},
  {"object-direct-slots", "object-direct-slots"},
  {"dec", "dec"},
  {"identity", "identity"},
  {"make-sym", "make-sym"},
  {"logbit?", "logbit?"},
  {"lsh", "lsh"},
  {"mem?", "mem?"},
  {"lab", "lab"},
  {"close-output-port", "close-output-port"},
  {"floor", "floor"},
  {"<step>", "<step>"},
  {"find-key", "find-key"},
  {"df", "df"},
  {"$permanent-hash-state", "$permanent-hash-state"},
  {"dg", "dg"},
  {"tail", "tail"},
  {"push-last!", "push-last!"},
  {"fill", "fill"},
  {"add", "add"},
  {"del-keys", "del-keys"},
  {"pop", "pop"},
  {"alter", "alter"},
  {"push", "push"},
  {"del-key", "del-key"},
  {"<buf>", "<buf>"},
  {"<int>", "<int>"},
  {"gen-add-met", "gen-add-met"},
  {"fab", "fab"},
  {"modulo", "modulo"},
  {"curry", "curry"},
  {"id-hash", "id-hash"},
  {"truncate", "truncate"},
  {"nul", "nul"},
  {"now-key", "now-key"},
  {"next-method", "next-method"},
  {"empty", "empty"},
  {"fun-nary?", "fun-nary?"},
  {"<str>", "<str>"},
  {"all?", "all?"},
  {"write-char", "write-char"},
  {"dm", "dm"},
  {"logior", "logior"},
  {"from-above", "from-above"},
  {"default", "default"},
  {"any?", "any?"},
  {"default-handler", "default-handler"},
  {"even?", "even?"},
  {"rcurry", "rcurry"},
  {"handler-matches?", "handler-matches?"},
  {"floor/", "floor/"},
  {"handler-function", "handler-function"},
  {"<condition>", "<condition>"},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"<tup>", "<tup>"},
  {"<fun>", "<fun>"},
  {"neg", "neg"},
  {"inc", "inc"},
  {"condition-message", "condition-message"},
  {"isa?", "isa?"},
  {"met-app?", "met-app?"},
  {"match-unquote", "match-unquote"},
  {"apply", "apply"},
  {"assocs-test", "assocs-test"},
  {"object-parents", "object-parents"},
  {"condition-arguments", "condition-arguments"},
  {"now-elt", "now-elt"},
  {"-", "-"},
  {"<string-port>", "<string-port>"},
  {"close-input-port", "close-input-port"},
  {"do", "do"},
  {"fun", "fun"},
  {"current-gc-state", "current-gc-state"},
  {"<string-input-port>", "<string-input-port>"},
  {"<error>", "<error>"},
  {"==", "=="},
  {"<loc>", "<loc>"},
  {"truncate/", "truncate/"},
  {"fun-mets", "fun-mets"},
  {"vec", "vec"},
  {"slot-owner", "slot-owner"},
  {"<range>", "<range>"},
  {"3rd", "3rd"},
  {"%next-methods", "%next-methods"},
  {"do-keyed", "do-keyed"},
  {"isa", "isa"},
  {"not", "not"},
  {"logxor", "logxor"},
  {"del-dups", "del-dups"},
  {"as", "as"},
  {"read-from-string", "read-from-string"},
  {"<any>", "<any>"},
  {"nxt-state", "nxt-state"},
  {"~=", "~="},
  {"app-args", "app-args"},
  {"/", "/"},
  {"reduce+", "reduce+"},
  {"fin", "fin"},
  {"fabs", "fabs"},
  {"rev", "rev"},
  {"<list>", "<list>"},
  {"max", "max"},
  {"object-slots", "object-slots"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"peek-char", "peek-char"},
  {"ds", "ds"},
  {"match-sublist", "match-sublist"},
  {"<=", "<="},
  {"zero?", "zero?"},
  {"slot-type", "slot-type"},
  {"uppercase?", "uppercase?"},
  {"fun-specs", "fun-specs"},
  {"+", "+"},
  {"address-of", "address-of"},
  {"select", "select"},
  {"pos", "pos"},
  {"reduce", "reduce"},
  {"find-setter", "find-setter"},
  {"var-type", "var-type"},
  {"open-input-file", "open-input-file"},
  {"from", "from"},
  {"writeln", "writeln"},
  {"case", "case"},
  {"1st", "1st"},
  {"<chr>", "<chr>"},
  {"force-output", "force-output"},
  {"call-with-string-input-port", "call-with-string-input-port"},
  {"write-to-string", "write-to-string"},
  {"make-setter-name", "make-setter-name"},
  {"%define-method", "%define-method"},
  {"gensym", "gensym"},
  {"slot-getter", "slot-getter"},
  {"object-direct-parents", "object-direct-parents"},
  {"slot-value-setter", "slot-value-setter"},
  {"logand", "logand"},
  {"table-protocol", "table-protocol"},
  {"match-atom", "match-atom"},
  {"buf", "buf"},
  {"now-elt-setter", "now-elt-setter"},
  {"call-with-output-file", "call-with-output-file"},
  {"app-filename", "app-filename"},
  {"<input-port>", "<input-port>"},
  {"*", "*"},
  {"<file-input-port>", "<file-input-port>"},
  {"always", "always"},
  {"cat", "cat"},
  {"<num>", "<num>"},
  {"str", "str"},
  {"<string-output-port>", "<string-output-port>"},
  {"alphabetic?", "alphabetic?"},
  {"loc", "loc"},
  {"pick", "pick"},
  {"port-contents", "port-contents"},
  {"in", "in"},
  {"map-keyed", "map-keyed"},
  {"from-above-by", "from-above-by"},
  {"write-string", "write-string"},
  {"open-output-file", "open-output-file"},
  {"out", "out"},
  {"and", "and"},
  {"ct", "ct"},
  {"odd?", "odd?"},
  {"nil", "nil"},
  {"from-to-by", "from-to-by"},
  {"<seq>", "<seq>"},
  {"for", "for"},
  {"find-getter", "find-getter"},
  {"round/", "round/"},
  {"mif", "mif"},
  {"abs", "abs"},
  {"map2", "map2"},
  {"cat2", "cat2"},
  {"<gen>", "<gen>"},
  {"<sym>", "<sym>"},
  {"locative-value-setter", "locative-value-setter"},
  {"str-to-num", "str-to-num"},
  {"lognot", "lognot"},
  {"slot-value", "slot-value"},
  {"slot", "slot"},
  {"sig", "sig"},
  {"fun-value", "fun-value"},
  {"call-with-input-file", "call-with-input-file"},
  {"fun-names", "fun-names"},
  {"elt", "elt"},
  {"first-then", "first-then"},
  {"<output-port>", "<output-port>"},
  {"to-str", "to-str"},
  {"num-to-str", "num-to-str"},
  {"<map>", "<map>"},
  {"add-slot", "add-slot"},
  {"<tab>", "<tab>"},
  {"lst", "lst"},
  {"<str-tab>", "<str-tab>"},
  {"<file-output-port>", "<file-output-port>"},
  {"table-growth-factor", "table-growth-factor"},
  {"from-below-by", "from-below-by"},
  {"macro-expand", "macro-expand"},
  {"del", "del"},
  {"<file-port>", "<file-port>"},
  {"from-to", "from-to"},
  {"rep", "rep"},
  {"last", "last"},
  {"object-name", "object-name"},
  {"min", "min"},
  {"format", "format"},
  {"sub-setter", "sub-setter"},
  {"flo-bits", "flo-bits"},
  {"use", "use"},
  {"make-handler", "make-handler"},
  {"<handler>", "<handler>"},
  {"collecting", "collecting"},
  {"<slot>", "<slot>"},
  {"numeric?", "numeric?"},
  {"len", "len"},
  {"empty?", "empty?"},
  {"as-lowercase", "as-lowercase"},
  {"rev!", "rev!"},
  {"set", "set"},
  {"nul?", "nul?"},
  {"table-shrink-threshold", "table-shrink-threshold"},
  {"read-char", "read-char"},
  {"<flo>", "<flo>"},
  {"ash", "ash"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"list", "list"},
  {"newline", "newline"},
  {"neg?", "neg?"},
  {"unless", "unless"},
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
extern void load_module_runtime (void);
extern void load_module_write (void);
extern void load_module_read (void);
extern void load_module_syntax (void);

/* EXPRESSION: */

extern void load_module_proto (void);

void load_module_proto (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_runtime();
  load_module_write();
  load_module_read();
  load_module_syntax();

  (P)YprotoY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
