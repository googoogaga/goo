/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto */

EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YPslot,"boot","%slot");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(YLlogG,"boot","<log>");
EXT(YLslotG,"boot","<slot>");
EXT(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYneg,"runtime","neg");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(Ynot,"boot","not");
EXT(YruntimeYNE,"runtime","~=");
EXT(Yslot_value,"boot","slot-value");
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YwriteYwrite,"write","write");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YLunionG,"boot","<union>");
EXT(YruntimeYassq,"runtime","assq");
EXT(YPsnul,"boot","%snul");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YmacrosYcat,"macros","cat");
EXT(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
EXT(YruntimeYformat,"runtime","format");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYlast,"runtime","last");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(Ytail,"boot","tail");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YruntimeYroundS,"runtime","round/");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYrev,"runtime","rev");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YruntimeYabs,"runtime","abs");
EXT(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(YreadYDchar_long_names,"read","$char-long-names");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YruntimeYdo2,"runtime","do2");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(Ynil,"boot","nil");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYT,"runtime","*");
EXT(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYmax,"runtime","max");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(Ytype_elts,"boot","type-elts");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYdefault,"runtime","default");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YPdefine_method,"boot","%define-method");
EXT(YsyntaxYsexpr_isa_parents,"syntax","sexpr-isa-parents");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YisaQ,"boot","isa?");
EXT(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
EXT(YruntimeYempty,"runtime","empty");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYA,"runtime","+");
EXT(YLtypeG,"boot","<type>");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YLclassG,"boot","<class>");
EXT(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
EXT(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(YwriteYdisplay,"write","display");
EXT(Yobject_parents,"boot","object-parents");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YsyntaxYsexpr_define_classQ,"syntax","sexpr-define-class?");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YruntimeYE,"runtime","=");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(Ytype_error,"boot","type-error");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(Ysig_names,"boot","sig-names");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(YruntimeYpop,"runtime","pop");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YsyntaxYDsexpr_define_class_tag,"syntax","$sexpr-define-class-tag");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YLgenG,"boot","<gen>");
EXT(Yobject_slots,"boot","object-slots");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YruntimeYfrom,"runtime","from");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(YmacrosYEE,"macros","==");
EXT(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(Yfind_setter,"boot","find-setter");
EXT(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YruntimeYstr,"runtime","str");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YLvecG,"boot","<vec>");
EXT(Ytype_class,"boot","type-class");
EXT(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(Ylst,"boot","lst");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeY1st,"runtime","1st");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYalways,"runtime","always");
EXT(YruntimeYtL,"runtime","t<");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YLflatG,"boot","<flat>");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYout,"runtime","out");
EXT(Yfun_names,"boot","fun-names");
EXT(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YruntimeYdo,"runtime","do");
EXT(YruntimeYnewline,"runtime","newline");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYfab,"runtime","fab");
EXT(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(Yobject_class,"boot","object-class");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YruntimeYtE,"runtime","t=");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYGE,"runtime",">=");
EXT(YruntimeY_,"runtime","-");
EXT(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(YruntimeYtA,"runtime","t+");
EXT(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YruntimeYG,"runtime",">");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYround,"runtime","round");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(Ynul,"boot","nul");
EXT(YruntimeYL,"runtime","<");
EXT(YLlocG,"boot","<loc>");
EXT(Yfab_class,"boot","fab-class");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(YruntimeYdel,"runtime","del");
EXT(YwriteYwriteln,"write","writeln");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYlist,"runtime","list");
EXT(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(Ytype_object,"boot","type-object");
EXT(Yhead_setter,"boot","head-setter");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YLtupG,"boot","<tup>");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(Yhead,"boot","head");
EXT(Yerror,"boot","error");
EXT(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
EXT(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYlen,"runtime","len");
EXT(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YruntimeYsub,"runtime","sub");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(Yslot_init,"boot","slot-init");
EXT(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
EXT(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YLintG,"boot","<int>");
EXT(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YruntimeYsig,"runtime","sig");
EXT(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(YruntimeYin,"runtime","in");
EXT(YruntimeYkeys,"runtime","keys");
EXT(Ysym_name,"boot","sym-name");
EXT(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YmacrosYnapply,"macros","napply");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YsyntaxYsexpr_define_class_parents,"syntax","sexpr-define-class-parents");
EXT(YruntimeYfill,"runtime","fill");
EXT(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(Yfun_value,"boot","fun-value");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YruntimeYalter,"runtime","alter");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(YruntimeYmin,"runtime","min");
EXT(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYvec,"runtime","vec");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");

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
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"odd?", &module_info_runtime, "odd?"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"and", &module_info_macros, "and"},
  {"%slot", &module_info_boot, "%slot"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"%selt", &module_info_boot, "%selt"},
  {"sexpr-make-begin", &module_info_syntax, "sexpr-make-begin"},
  {"<log>", &module_info_boot, "<log>"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"sexpr-loc-bound-bodies", &module_info_syntax, "sexpr-loc-bound-bodies"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"%im", &module_info_boot, "%im"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"%iu", &module_info_boot, "%iu"},
  {"fabs", &module_info_runtime, "fabs"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"ct", &module_info_boot, "ct"},
  {"$sexpr-let-tag", &module_info_syntax, "$sexpr-let-tag"},
  {"pos", &module_info_runtime, "pos"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"neg", &module_info_runtime, "neg"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"push", &module_info_runtime, "push"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"from-below", &module_info_runtime, "from-below"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"sexpr-variable?", &module_info_syntax, "sexpr-variable?"},
  {"%i<", &module_info_boot, "%i<"},
  {"$sexpr-begin-tag", &module_info_syntax, "$sexpr-begin-tag"},
  {"not", &module_info_boot, "not"},
  {"~=", &module_info_runtime, "~="},
  {"slot-value", &module_info_boot, "slot-value"},
  {"<any>", &module_info_boot, "<any>"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"write", &module_info_write, "write"},
  {"%i+", &module_info_boot, "%i+"},
  {"do3", &module_info_runtime, "do3"},
  {"<union>", &module_info_boot, "<union>"},
  {"assq", &module_info_runtime, "assq"},
  {"%snul", &module_info_boot, "%snul"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"write-string", &module_info_runtime, "write-string"},
  {"let", &module_info_boot, "let"},
  {"pushf", &module_info_macros, "pushf"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_syntax, "sexpr-unwind-protect-cleanup-forms"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"sexpr-assignment-variable", &module_info_syntax, "sexpr-assignment-variable"},
  {"$sexpr-set-tag", &module_info_syntax, "$sexpr-set-tag"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"loc", &module_info_boot, "loc"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"sexpr-syntax-if-pattern", &module_info_syntax, "sexpr-syntax-if-pattern"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"apply", &module_info_macros, "apply"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"sexpr-sequence->begin", &module_info_syntax, "sexpr-sequence->begin"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"cat", &module_info_macros, "cat"},
  {"$sexpr-quasiquote-tag", &module_info_syntax, "$sexpr-quasiquote-tag"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"dg", &module_info_boot, "dg"},
  {"sexpr-function-body", &module_info_syntax, "sexpr-function-body"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"next-method", &module_info_macros, "next-method"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"$sexpr-isa-tag", &module_info_syntax, "$sexpr-isa-tag"},
  {"fun", &module_info_boot, "fun"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"empty?", &module_info_macros, "empty?"},
  {"buf", &module_info_runtime, "buf"},
  {"sexpr-definition-variable", &module_info_syntax, "sexpr-definition-variable"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"port-index", &module_info_runtime, "port-index"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"read", &module_info_runtime, "read"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"sexpr-bind-pattern-variables", &module_info_syntax, "sexpr-bind-pattern-variables"},
  {"format", &module_info_runtime, "format"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"%iv", &module_info_boot, "%iv"},
  {"sexpr-text-of-quotation", &module_info_syntax, "sexpr-text-of-quotation"},
  {"rev!", &module_info_runtime, "rev!"},
  {"last", &module_info_runtime, "last"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"floor/", &module_info_runtime, "floor/"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"tail", &module_info_boot, "tail"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"%ft", &module_info_boot, "%ft"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"sexpr-signature-value", &module_info_syntax, "sexpr-signature-value"},
  {"lsh", &module_info_runtime, "lsh"},
  {"gensym", &module_info_macros, "gensym"},
  {"ash", &module_info_runtime, "ash"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"round/", &module_info_runtime, "round/"},
  {"%su", &module_info_boot, "%su"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"%i?", &module_info_boot, "%i?"},
  {"rev", &module_info_runtime, "rev"},
  {"use", &module_info_boot, "use"},
  {"@olen", &module_info_boot, "@olen"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"abs", &module_info_runtime, "abs"},
  {"sexpr-function-definition-value", &module_info_syntax, "sexpr-function-definition-value"},
  {"bound?", &module_info_boot, "bound?"},
  {"$char-long-names", &module_info_read, "$char-long-names"},
  {"<port>", &module_info_runtime, "<port>"},
  {"%velt", &module_info_boot, "%velt"},
  {"collected", &module_info_macros, "collected"},
  {"for", &module_info_macros, "for"},
  {"do2", &module_info_runtime, "do2"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"nil", &module_info_boot, "nil"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"*", &module_info_runtime, "*"},
  {"sexpr-make-getter", &module_info_syntax, "sexpr-make-getter"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"sexpr-if-then", &module_info_syntax, "sexpr-if-then"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"sexpr-let->combination", &module_info_syntax, "sexpr-let->combination"},
  {"case", &module_info_macros, "case"},
  {"<list>", &module_info_runtime, "<list>"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"max", &module_info_runtime, "max"},
  {"<error>", &module_info_runtime, "<error>"},
  {"%i^", &module_info_boot, "%i^"},
  {"%ib", &module_info_boot, "%ib"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"compose", &module_info_runtime, "compose"},
  {"sexpr-iterate->loc", &module_info_syntax, "sexpr-iterate->loc"},
  {"export", &module_info_boot, "export"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"app-args", &module_info_runtime, "app-args"},
  {"sexpr-block-name", &module_info_syntax, "sexpr-block-name"},
  {"write-char", &module_info_runtime, "write-char"},
  {"default", &module_info_runtime, "default"},
  {"address-of", &module_info_runtime, "address-of"},
  {"%f+", &module_info_boot, "%f+"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"sexpr-isa-parents", &module_info_syntax, "sexpr-isa-parents"},
  {"floor", &module_info_runtime, "floor"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"cat2", &module_info_runtime, "cat2"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"sexpr-unwind-protect-protected-form", &module_info_syntax, "sexpr-unwind-protect-protected-form"},
  {"modulo", &module_info_runtime, "modulo"},
  {"collecting", &module_info_macros, "collecting"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"cat!", &module_info_runtime, "cat!"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"sexpr-make-setter-name", &module_info_syntax, "sexpr-make-setter-name"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"sexpr-assignment-value", &module_info_syntax, "sexpr-assignment-value"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"%bb", &module_info_boot, "%bb"},
  {"class-name", &module_info_boot, "class-name"},
  {"when", &module_info_macros, "when"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"sexpr-if-else", &module_info_syntax, "sexpr-if-else"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%vec", &module_info_boot, "%vec"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"isa?", &module_info_boot, "isa?"},
  {"$sexpr-define-generic-tag", &module_info_syntax, "$sexpr-define-generic-tag"},
  {"empty", &module_info_runtime, "empty"},
  {"assqn", &module_info_runtime, "assqn"},
  {"$sexpr-locals-tag", &module_info_syntax, "$sexpr-locals-tag"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"add!", &module_info_runtime, "add!"},
  {"+", &module_info_runtime, "+"},
  {"<type>", &module_info_boot, "<type>"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"<class>", &module_info_boot, "<class>"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"sexpr-variable-name", &module_info_syntax, "sexpr-variable-name"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"<range>", &module_info_runtime, "<range>"},
  {"dp", &module_info_boot, "dp"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"remainder", &module_info_runtime, "remainder"},
  {"add", &module_info_runtime, "add"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"find-key", &module_info_runtime, "find-key"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"elt", &module_info_runtime, "elt"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"curry", &module_info_runtime, "curry"},
  {"sexpr-operands", &module_info_syntax, "sexpr-operands"},
  {"$sexpr-define-method-tag", &module_info_syntax, "$sexpr-define-method-tag"},
  {"display", &module_info_write, "display"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"eval", &module_info_syntax, "eval"},
  {"<=", &module_info_runtime, "<="},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"sexpr-define-class?", &module_info_syntax, "sexpr-define-class?"},
  {"logior", &module_info_runtime, "logior"},
  {"%pair", &module_info_boot, "%pair"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"=", &module_info_runtime, "="},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"nul?", &module_info_runtime, "nul?"},
  {"type-error", &module_info_boot, "type-error"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"sexpr-variable-type", &module_info_syntax, "sexpr-variable-type"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"map", &module_info_macros, "map"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"$sexpr-monitor-tag", &module_info_syntax, "$sexpr-monitor-tag"},
  {"pop", &module_info_runtime, "pop"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"map2", &module_info_runtime, "map2"},
  {"pos?", &module_info_runtime, "pos?"},
  {"logxor", &module_info_runtime, "logxor"},
  {"%cu", &module_info_boot, "%cu"},
  {"sexpr-function-signature", &module_info_syntax, "sexpr-function-signature"},
  {"$sexpr-define-class-tag", &module_info_syntax, "$sexpr-define-class-tag"},
  {"from-to", &module_info_runtime, "from-to"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"inc", &module_info_macros, "inc"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%sb", &module_info_boot, "%sb"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"%f-", &module_info_boot, "%f-"},
  {"from", &module_info_runtime, "from"},
  {"<str>", &module_info_boot, "<str>"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"sexpr-make-anonymous-method", &module_info_syntax, "sexpr-make-anonymous-method"},
  {"==", &module_info_macros, "=="},
  {"$sexpr-bind-exit-tag", &module_info_syntax, "$sexpr-bind-exit-tag"},
  {"dc", &module_info_boot, "dc"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"tup", &module_info_macros, "tup"},
  {"logand", &module_info_runtime, "logand"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"sexpr-syntax-if-value", &module_info_syntax, "sexpr-syntax-if-value"},
  {"sexpr-forward-primitive?", &module_info_syntax, "sexpr-forward-primitive?"},
  {"false-or", &module_info_runtime, "false-or"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"sexpr-unquote?", &module_info_syntax, "sexpr-unquote?"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"reduce", &module_info_runtime, "reduce"},
  {"str", &module_info_runtime, "str"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"type-class", &module_info_boot, "type-class"},
  {"$sexpr-define-syntax-tag", &module_info_syntax, "$sexpr-define-syntax-tag"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"lognot", &module_info_runtime, "lognot"},
  {"sexpr-syntax-if-else", &module_info_syntax, "sexpr-syntax-if-else"},
  {"popf", &module_info_macros, "popf"},
  {"lst", &module_info_boot, "lst"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"1st", &module_info_runtime, "1st"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"as", &module_info_runtime, "as"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"%slen", &module_info_boot, "%slen"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"%i*", &module_info_boot, "%i*"},
  {"always", &module_info_runtime, "always"},
  {"%f<", &module_info_boot, "%f<"},
  {"t<", &module_info_runtime, "t<"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"<met>", &module_info_boot, "<met>"},
  {"out", &module_info_runtime, "out"},
  {"%str", &module_info_boot, "%str"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"$sexpr-if-tag", &module_info_syntax, "$sexpr-if-tag"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"do", &module_info_runtime, "do"},
  {"newline", &module_info_runtime, "newline"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"fab", &module_info_runtime, "fab"},
  {"sexpr-make-macro-function", &module_info_syntax, "sexpr-make-macro-function"},
  {"$sexpr-quote-tag", &module_info_syntax, "$sexpr-quote-tag"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"force-output", &module_info_runtime, "force-output"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"<step>", &module_info_runtime, "<step>"},
  {"%lb", &module_info_boot, "%lb"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"sexpr-syntax-if-then", &module_info_syntax, "sexpr-syntax-if-then"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"isa", &module_info_boot, "isa"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"$sexpr-iterate-tag", &module_info_syntax, "$sexpr-iterate-tag"},
  {"%c<", &module_info_boot, "%c<"},
  {"del-key", &module_info_runtime, "del-key"},
  {"object-class", &module_info_boot, "object-class"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"lab", &module_info_boot, "lab"},
  {"select", &module_info_macros, "select"},
  {"t=", &module_info_runtime, "t="},
  {"@+", &module_info_boot, "@+"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"zero?", &module_info_runtime, "zero?"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"pick", &module_info_runtime, "pick"},
  {"%fb", &module_info_boot, "%fb"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"sexpr-isa-init-values", &module_info_syntax, "sexpr-isa-init-values"},
  {"%cb", &module_info_boot, "%cb"},
  {"pair", &module_info_macros, "pair"},
  {"now-key", &module_info_runtime, "now-key"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"fin", &module_info_boot, "fin"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"sexpr-expand-backquote", &module_info_syntax, "sexpr-expand-backquote"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"%f/", &module_info_boot, "%f/"},
  {"sexpr-definition-value", &module_info_syntax, "sexpr-definition-value"},
  {"<seq>", &module_info_boot, "<seq>"},
  {">=", &module_info_runtime, ">="},
  {"-", &module_info_runtime, "-"},
  {"$sexpr-unwind-protect-tag", &module_info_syntax, "$sexpr-unwind-protect-tag"},
  {"t+", &module_info_runtime, "t+"},
  {"sexpr-unquote-splicing?", &module_info_syntax, "sexpr-unquote-splicing?"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"read-char", &module_info_runtime, "read-char"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"mem?", &module_info_runtime, "mem?"},
  {"dss", &module_info_boot, "dss"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"set", &module_info_boot, "set"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"sexpr-loc-bound-names", &module_info_syntax, "sexpr-loc-bound-names"},
  {"%i&", &module_info_boot, "%i&"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {">", &module_info_runtime, ">"},
  {"<col>", &module_info_boot, "<col>"},
  {"all?", &module_info_runtime, "all?"},
  {"2nd", &module_info_runtime, "2nd"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"$sexpr-macro-expand-tag", &module_info_syntax, "$sexpr-macro-expand-tag"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"~==", &module_info_runtime, "~=="},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"round", &module_info_runtime, "round"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"from-by", &module_info_runtime, "from-by"},
  {"df", &module_info_boot, "df"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"collect", &module_info_macros, "collect"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"sexpr-syntax-definition-value", &module_info_syntax, "sexpr-syntax-definition-value"},
  {"assert", &module_info_macros, "assert"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"nul", &module_info_boot, "nul"},
  {"<", &module_info_runtime, "<"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"dec", &module_info_macros, "dec"},
  {"first-then", &module_info_runtime, "first-then"},
  {"sexpr-isa-slot-inits", &module_info_syntax, "sexpr-isa-slot-inits"},
  {"del", &module_info_runtime, "del"},
  {"writeln", &module_info_write, "writeln"},
  {"%it/", &module_info_boot, "%it/"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"list", &module_info_runtime, "list"},
  {"$sexpr-method-tag", &module_info_syntax, "$sexpr-method-tag"},
  {"type-object", &module_info_boot, "type-object"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"%fu", &module_info_boot, "%fu"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"sexpr-monitor-expand", &module_info_syntax, "sexpr-monitor-expand"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"%raw", &module_info_boot, "%raw"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"dlet", &module_info_macros, "dlet"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"%i-", &module_info_boot, "%i-"},
  {"%untag", &module_info_boot, "%untag"},
  {"mif", &module_info_boot, "mif"},
  {"or", &module_info_macros, "or"},
  {"sexpr-slot-variable", &module_info_syntax, "sexpr-slot-variable"},
  {"%isa", &module_info_boot, "%isa"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"from-above", &module_info_runtime, "from-above"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"%i=", &module_info_boot, "%i="},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"head", &module_info_boot, "head"},
  {"error", &module_info_boot, "error"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"sexpr-make-setter", &module_info_syntax, "sexpr-make-setter"},
  {"sexpr-block-body", &module_info_syntax, "sexpr-block-body"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"neg?", &module_info_runtime, "neg?"},
  {"len", &module_info_runtime, "len"},
  {"sexpr-isa-init-slots", &module_info_syntax, "sexpr-isa-init-slots"},
  {"<map>", &module_info_runtime, "<map>"},
  {"ds", &module_info_boot, "ds"},
  {"identity", &module_info_runtime, "identity"},
  {"$sexpr-define-function-tag", &module_info_syntax, "$sexpr-define-function-tag"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"var-type", &module_info_macros, "var-type"},
  {"$sexpr-slot-tag", &module_info_syntax, "$sexpr-slot-tag"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"seq", &module_info_boot, "seq"},
  {"quote", &module_info_boot, "quote"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"%f=", &module_info_boot, "%f="},
  {"assocq", &module_info_runtime, "assocq"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"sub", &module_info_runtime, "sub"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"sexpr-slot-init", &module_info_syntax, "sexpr-slot-init"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"$sexpr-define-tag", &module_info_syntax, "$sexpr-define-tag"},
  {"sexpr-make-application", &module_info_syntax, "sexpr-make-application"},
  {"<int>", &module_info_boot, "<int>"},
  {"sexpr-method-body", &module_info_syntax, "sexpr-method-body"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"%lu", &module_info_boot, "%lu"},
  {"sexpr-operator", &module_info_syntax, "sexpr-operator"},
  {"dm", &module_info_boot, "dm"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"sexpr-syntax-definition-variable", &module_info_syntax, "sexpr-syntax-definition-variable"},
  {"rep", &module_info_boot, "rep"},
  {"sig", &module_info_runtime, "sig"},
  {"sexpr-slot-object", &module_info_syntax, "sexpr-slot-object"},
  {"to-str", &module_info_runtime, "to-str"},
  {"sexpr-loc-bound-signatures", &module_info_syntax, "sexpr-loc-bound-signatures"},
  {"in", &module_info_runtime, "in"},
  {"keys", &module_info_runtime, "keys"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"sexpr-method-signature", &module_info_syntax, "sexpr-method-signature"},
  {"sexpr-function-definition-variable", &module_info_syntax, "sexpr-function-definition-variable"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"%i!", &module_info_boot, "%i!"},
  {"%f*", &module_info_boot, "%f*"},
  {"unless", &module_info_macros, "unless"},
  {"<num>", &module_info_boot, "<num>"},
  {"any?", &module_info_runtime, "any?"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"napply", &module_info_macros, "napply"},
  {"dv", &module_info_boot, "dv"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"sexpr-define-class-parents", &module_info_syntax, "sexpr-define-class-parents"},
  {"fill", &module_info_runtime, "fill"},
  {"sexpr-if-test", &module_info_syntax, "sexpr-if-test"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"try", &module_info_boot, "try"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"slot", &module_info_boot, "slot"},
  {"@<", &module_info_boot, "@<"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"even?", &module_info_runtime, "even?"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"%c=", &module_info_boot, "%c="},
  {"var-name", &module_info_macros, "var-name"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"/", &module_info_runtime, "/"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"alter", &module_info_runtime, "alter"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"3rd", &module_info_runtime, "3rd"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"truncate", &module_info_runtime, "truncate"},
  {"$sexpr-syntax-if-tag", &module_info_syntax, "$sexpr-syntax-if-tag"},
  {"min", &module_info_runtime, "min"},
  {"sexpr-loc-raw-body", &module_info_syntax, "sexpr-loc-raw-body"},
  {"if", &module_info_boot, "if"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"assoc", &module_info_runtime, "assoc"},
  {"vec", &module_info_runtime, "vec"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"odd?", "odd?"},
  {"slot-owner", "slot-owner"},
  {"round", "round"},
  {"and", "and"},
  {"match-sublist", "match-sublist"},
  {"<log>", "<log>"},
  {"<slot>", "<slot>"},
  {"call-with-string-input-port", "call-with-string-input-port"},
  {"fabs", "fabs"},
  {"%next-methods", "%next-methods"},
  {"ct", "ct"},
  {"pos", "pos"},
  {"neg", "neg"},
  {"make-handler", "make-handler"},
  {"push", "push"},
  {"as-uppercase", "as-uppercase"},
  {"quasiquote", "quasiquote"},
  {"call-with-output-file", "call-with-output-file"},
  {"class-direct-parents", "class-direct-parents"},
  {"close-input-port", "close-input-port"},
  {"not", "not"},
  {"slot-value", "slot-value"},
  {"<any>", "<any>"},
  {"from-below-by", "from-below-by"},
  {"copy-state", "copy-state"},
  {"write-to-string", "write-to-string"},
  {"<union>", "<union>"},
  {"<file-input-port>", "<file-input-port>"},
  {"match-unquote", "match-unquote"},
  {"write-string", "write-string"},
  {"let", "let"},
  {"pushf", "pushf"},
  {"may-isa?", "may-isa?"},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"fun-arity", "fun-arity"},
  {"pop-last!", "pop-last!"},
  {"sub-setter", "sub-setter"},
  {"loc", "loc"},
  {"to-digit", "to-digit"},
  {"<serious-condition>", "<serious-condition>"},
  {"<file-port>", "<file-port>"},
  {"or", "or"},
  {"all?", "all?"},
  {"error", "error"},
  {"<subclass>", "<subclass>"},
  {"find-getter", "find-getter"},
  {"<fun>", "<fun>"},
  {"cat", "cat"},
  {"<input-port>", "<input-port>"},
  {"dg", "dg"},
  {"next-method", "next-method"},
  {"fun", "fun"},
  {"empty?", "empty?"},
  {"buf", "buf"},
  {"port-index", "port-index"},
  {"slot-type", "slot-type"},
  {"ceiling/", "ceiling/"},
  {"slot-getter", "slot-getter"},
  {"fun-specs", "fun-specs"},
  {"handler-info-message", "handler-info-message"},
  {"fab-class", "fab-class"},
  {"rev!", "rev!"},
  {"last", "last"},
  {"<singleton>", "<singleton>"},
  {"floor/", "floor/"},
  {"match-atom", "match-atom"},
  {"class-name", "class-name"},
  {"tail", "tail"},
  {"lsh", "lsh"},
  {"gensym", "gensym"},
  {"ash", "ash"},
  {"num-to-str", "num-to-str"},
  {"class-slots", "class-slots"},
  {"flo-bits", "flo-bits"},
  {"rcurry", "rcurry"},
  {"round/", "round/"},
  {"sorted-app-mets", "sorted-app-mets"},
  {"rev", "rev"},
  {"use", "use"},
  {"abs", "abs"},
  {"bound?", "bound?"},
  {"<port>", "<port>"},
  {"for", "for"},
  {"do2", "do2"},
  {"fun-nary?", "fun-nary?"},
  {"nil", "nil"},
  {"push-last!", "push-last!"},
  {"*", "*"},
  {"<output-port>", "<output-port>"},
  {"truncate/", "truncate/"},
  {"case", "case"},
  {"<list>", "<list>"},
  {"max", "max"},
  {"<error>", "<error>"},
  {"type-elts", "type-elts"},
  {"compose", "compose"},
  {"export", "export"},
  {"open-output-file", "open-output-file"},
  {"app-args", "app-args"},
  {"write-char", "write-char"},
  {"default", "default"},
  {"address-of", "address-of"},
  {"port-contents", "port-contents"},
  {"%define-method", "%define-method"},
  {"floor", "floor"},
  {"cat2", "cat2"},
  {"modulo", "modulo"},
  {"collecting", "collecting"},
  {"cat!", "cat!"},
  {"<opts>", "<opts>"},
  {"app-filename", "app-filename"},
  {"writeln", "writeln"},
  {"when", "when"},
  {"need-implementation", "need-implementation"},
  {"<assocs>", "<assocs>"},
  {"isa?", "isa?"},
  {"empty", "empty"},
  {"met-app?", "met-app?"},
  {"+", "+"},
  {"<type>", "<type>"},
  {"write", "write"},
  {"<simple-error>", "<simple-error>"},
  {"<class>", "<class>"},
  {"<range>", "<range>"},
  {"remainder", "remainder"},
  {"add", "add"},
  {"find-key", "find-key"},
  {"elt", "elt"},
  {"curry", "curry"},
  {"display", "display"},
  {"object-parents", "object-parents"},
  {"<=", "<="},
  {"elt-setter", "elt-setter"},
  {"logior", "logior"},
  {"lowercase?", "lowercase?"},
  {"=", "="},
  {"nul?", "nul?"},
  {"<sym>", "<sym>"},
  {"<tab>", "<tab>"},
  {"locative-value-setter", "locative-value-setter"},
  {"assocs-test", "assocs-test"},
  {"from-to-by", "from-to-by"},
  {"map", "map"},
  {"match-empty-list", "match-empty-list"},
  {"pop", "pop"},
  {"map2", "map2"},
  {"pos?", "pos?"},
  {"logxor", "logxor"},
  {"from-to", "from-to"},
  {"inc", "inc"},
  {"~=", "~="},
  {"object-slots", "object-slots"},
  {"from", "from"},
  {"<str>", "<str>"},
  {"==", "=="},
  {"dc", "dc"},
  {"tup", "tup"},
  {"logand", "logand"},
  {"locative-value", "locative-value"},
  {"%pair", "%pair"},
  {"false-or", "false-or"},
  {"fun-name", "fun-name"},
  {"class-parents", "class-parents"},
  {"find-setter", "find-setter"},
  {"t=", "t="},
  {"del-keys", "del-keys"},
  {"read-from-string", "read-from-string"},
  {"reduce", "reduce"},
  {"table-shrink-threshold", "table-shrink-threshold"},
  {"<vec>", "<vec>"},
  {"type-class", "type-class"},
  {"lognot", "lognot"},
  {"popf", "popf"},
  {"lst", "lst"},
  {"1st", "1st"},
  {"gen-add-met", "gen-add-met"},
  {"as", "as"},
  {"condition-arguments", "condition-arguments"},
  {"from-above-by", "from-above-by"},
  {"<simple-condition>", "<simple-condition>"},
  {"always", "always"},
  {"t<", "t<"},
  {"ceiling", "ceiling"},
  {"<flat>", "<flat>"},
  {"<met>", "<met>"},
  {"identity", "identity"},
  {"out", "out"},
  {"fun-names", "fun-names"},
  {"do", "do"},
  {"newline", "newline"},
  {"fab", "fab"},
  {"table-growth-factor", "table-growth-factor"},
  {"force-output", "force-output"},
  {"char-ready?", "char-ready?"},
  {"<step>", "<step>"},
  {"ct-also", "ct-also"},
  {"<seq>", "<seq>"},
  {"uppercase?", "uppercase?"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"$permanent-hash-state", "$permanent-hash-state"},
  {"isa", "isa"},
  {"del-key", "del-key"},
  {"lab", "lab"},
  {"select", "select"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"zero?", "zero?"},
  {"nxt-state", "nxt-state"},
  {"current-gc-state", "current-gc-state"},
  {"fun-mets", "fun-mets"},
  {"call-with-input-file", "call-with-input-file"},
  {"del-dups", "del-dups"},
  {"pick", "pick"},
  {"<lst>", "<lst>"},
  {"do-keyed", "do-keyed"},
  {"map-keyed", "map-keyed"},
  {"pair", "pair"},
  {"now-key", "now-key"},
  {"fin", "fin"},
  {"alphabetic?", "alphabetic?"},
  {">=", ">="},
  {"-", "-"},
  {"t+", "t+"},
  {"now-elt", "now-elt"},
  {"read-char", "read-char"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"format", "format"},
  {"mem?", "mem?"},
  {"set", "set"},
  {"<handler>", "<handler>"},
  {"<file-output-port>", "<file-output-port>"},
  {"peek-char", "peek-char"},
  {">", ">"},
  {"<col>", "<col>"},
  {"table-growth-threshold", "table-growth-threshold"},
  {"open-input-file", "open-input-file"},
  {"make-setter-name", "make-setter-name"},
  {"<string-port>", "<string-port>"},
  {"~==", "~=="},
  {"handler-matches?", "handler-matches?"},
  {"macro-expand", "macro-expand"},
  {"from-by", "from-by"},
  {"str", "str"},
  {"df", "df"},
  {"<handler-info>", "<handler-info>"},
  {"call-with-string-output-port", "call-with-string-output-port"},
  {"logbit?", "logbit?"},
  {"assert", "assert"},
  {"class-direct-slots", "class-direct-slots"},
  {"eof-object?", "eof-object?"},
  {"table-protocol", "table-protocol"},
  {"nul", "nul"},
  {"<", "<"},
  {"<loc>", "<loc>"},
  {"fin-state?", "fin-state?"},
  {"dec", "dec"},
  {"del", "del"},
  {"even?", "even?"},
  {"list", "list"},
  {"first-then", "first-then"},
  {"type-object", "type-object"},
  {"<gen>", "<gen>"},
  {"$default-handler-info", "$default-handler-info"},
  {"ini-state", "ini-state"},
  {"dlet", "dlet"},
  {"apply", "apply"},
  {"2nd", "2nd"},
  {"mif", "mif"},
  {"%isa", "%isa"},
  {"<flo>", "<flo>"},
  {"from-above", "from-above"},
  {"<tup>", "<tup>"},
  {"as-lowercase", "as-lowercase"},
  {"head", "head"},
  {"from-below", "from-below"},
  {"neg?", "neg?"},
  {"len", "len"},
  {"<map>", "<map>"},
  {"ds", "ds"},
  {"var-type", "var-type"},
  {"str-to-num", "str-to-num"},
  {"seq", "seq"},
  {"quote", "quote"},
  {"close-output-port", "close-output-port"},
  {"any?", "any?"},
  {"sub", "sub"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"slot-init", "slot-init"},
  {"<int>", "<int>"},
  {"handler-function", "handler-function"},
  {"slot-setter", "slot-setter"},
  {"reduce+", "reduce+"},
  {"dm", "dm"},
  {"numeric?", "numeric?"},
  {"rep", "rep"},
  {"sig", "sig"},
  {"to-str", "to-str"},
  {"in", "in"},
  {"read", "read"},
  {"make-sym", "make-sym"},
  {"unless", "unless"},
  {"<num>", "<num>"},
  {"class-direct-children", "class-direct-children"},
  {"*print-base*", "*print-base*"},
  {"dv", "dv"},
  {"fill", "fill"},
  {"fun-value", "fun-value"},
  {"try", "try"},
  {"slot", "slot"},
  {"<buf>", "<buf>"},
  {"<str-tab>", "<str-tab>"},
  {"subtype?", "subtype?"},
  {"var-name", "var-name"},
  {"/", "/"},
  {"id-hash", "id-hash"},
  {"alter", "alter"},
  {"slot-value-setter", "slot-value-setter"},
  {"<chr>", "<chr>"},
  {"default-handler", "default-handler"},
  {"3rd", "3rd"},
  {"<condition>", "<condition>"},
  {"truncate", "truncate"},
  {"<string-output-port>", "<string-output-port>"},
  {"min", "min"},
  {"if", "if"},
  {"add-slot", "add-slot"},
  {"vec", "vec"},
  {"now-elt-setter", "now-elt-setter"},
  {"condition-message", "condition-message"},
  {"<string-input-port>", "<string-input-port>"},
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
