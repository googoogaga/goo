/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto */

EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YsyntaxYsexpr_block_name,"syntax","sexpr-block-name");
EXT(YwriteYwriteln,"write","writeln");
EXT(YmacrosYmap,"macros","map");
EXT(Ynul,"boot","nul");
EXT(YsyntaxYsexpr_slot_object,"syntax","sexpr-slot-object");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(Ysig_value,"boot","sig-value");
EXT(YruntimeYin,"runtime","in");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYalways,"runtime","always");
EXT(YsyntaxYDsexpr_isa_tag,"syntax","$sexpr-isa-tag");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YLintG,"boot","<int>");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YsyntaxYDsexpr_syntax_if_tag,"syntax","$sexpr-syntax-if-tag");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YsyntaxYsexpr_block_body,"syntax","sexpr-block-body");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(Yfun_value,"boot","fun-value");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YsyntaxYDsexpr_define_generic_tag,"syntax","$sexpr-define-generic-tag");
EXT(YsyntaxYsexpr_make_getter,"syntax","sexpr-make-getter");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YsyntaxYDsexpr_quote_tag,"syntax","$sexpr-quote-tag");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YsyntaxYsexpr_loc_bound_signatures,"syntax","sexpr-loc-bound-signatures");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YsyntaxYDsexpr_set_tag,"syntax","$sexpr-set-tag");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YsyntaxYsexpr_unquoteQ,"syntax","sexpr-unquote?");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(Ysig_names,"boot","sig-names");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YsyntaxYsexpr_slot_variable,"syntax","sexpr-slot-variable");
EXT(YDmin_int,"boot","$min-int");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YsyntaxYeval,"syntax","eval");
EXT(YsyntaxYDsexpr_define_class_tag,"syntax","$sexpr-define-class-tag");
EXT(YLlogG,"boot","<log>");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YsyntaxYDsexpr_define_tag,"syntax","$sexpr-define-tag");
EXT(YruntimeYash,"runtime","ash");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YsyntaxYsexpr_definition_value,"syntax","sexpr-definition-value");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Ynot,"boot","not");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YruntimeY_,"runtime","-");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYabs,"runtime","abs");
EXT(Yclass_parents,"boot","class-parents");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYmax,"runtime","max");
EXT(YLanyG,"boot","<any>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YsyntaxYsexpr_function_definition_variable,"syntax","sexpr-function-definition-variable");
EXT(YsyntaxYsexpr_loc_bound_names,"syntax","sexpr-loc-bound-names");
EXT(YruntimeYT,"runtime","*");
EXT(YsyntaxYsexpr_loc_bound_bodies,"syntax","sexpr-loc-bound-bodies");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YsyntaxYsexpr_slot_init,"syntax","sexpr-slot-init");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YwriteYwrite,"write","write");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YsyntaxYsexpr_make_setter,"syntax","sexpr-make-setter");
EXT(YLunionG,"boot","<union>");
EXT(Ylst,"boot","lst");
EXT(YsyntaxYsexpr_forward_primitiveQ,"syntax","sexpr-forward-primitive?");
EXT(Yslot_value,"boot","slot-value");
EXT(YDmax_int,"boot","$max-int");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYcat,"macros","cat");
EXT(YsyntaxYsexpr_make_setter_name,"syntax","sexpr-make-setter-name");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YsyntaxYsexpr_isa_parent,"syntax","sexpr-isa-parent");
EXT(YsyntaxYsexpr_make_application,"syntax","sexpr-make-application");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYpick,"runtime","pick");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YruntimeYlast,"runtime","last");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YruntimeYlow_elt,"runtime","low-elt");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YsyntaxYsexpr_operator,"syntax","sexpr-operator");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YsyntaxYsexpr_loc_raw_body,"syntax","sexpr-loc-raw-body");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYall2Q,"runtime","all2?");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
EXT(YsyntaxYsexpr_sequence_Gbegin,"syntax","sexpr-sequence->begin");
EXT(YsyntaxYsexpr_let_Gcombination,"syntax","sexpr-let->combination");
EXT(Yunexec,"boot","unexec");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YsyntaxYsexpr_variable_type,"syntax","sexpr-variable-type");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YwriteYdisplay,"write","display");
EXT(YsyntaxYDsexpr_method_tag,"syntax","$sexpr-method-tag");
EXT(YPsnul,"boot","%snul");
EXT(Yerror,"boot","error");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YsyntaxYsexpr_isa_slot_inits,"syntax","sexpr-isa-slot-inits");
EXT(YruntimeYrev,"runtime","rev");
EXT(YsyntaxYsexpr_if_else,"syntax","sexpr-if-else");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YsyntaxYsexpr_unwind_protect_protected_form,"syntax","sexpr-unwind-protect-protected-form");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YwriteYTmax_print_depthT,"write","*max-print-depth*");
EXT(YsyntaxYDsexpr_define_method_tag,"syntax","$sexpr-define-method-tag");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYG,"runtime",">");
EXT(YsyntaxYDsexpr_quasiquote_tag,"syntax","$sexpr-quasiquote-tag");
EXT(YsyntaxYDsexpr_locals_tag,"syntax","$sexpr-locals-tag");
EXT(YruntimeYNE,"runtime","~=");
EXT(YsyntaxYsexpr_if_test,"syntax","sexpr-if-test");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YsyntaxYsexpr_unwind_protect_cleanup_forms,"syntax","sexpr-unwind-protect-cleanup-forms");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YsyntaxYsexpr_make_begin,"syntax","sexpr-make-begin");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYsig,"runtime","sig");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(YsyntaxYDsexpr_define_function_tag,"syntax","$sexpr-define-function-tag");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YsyntaxYsexpr_define_classQ,"syntax","sexpr-define-class?");
EXT(YsyntaxYsexpr_definition_variable,"syntax","sexpr-definition-variable");
EXT(YsyntaxYsexpr_operands,"syntax","sexpr-operands");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YsyntaxYsexpr_unquote_splicingQ,"syntax","sexpr-unquote-splicing?");
EXT(YsyntaxYsexpr_method_body,"syntax","sexpr-method-body");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YsyntaxYsexpr_isa_init_slots,"syntax","sexpr-isa-init-slots");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYL,"runtime","<");
EXT(YruntimeYpop,"runtime","pop");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
EXT(YsyntaxYsexpr_monitor_expand,"syntax","sexpr-monitor-expand");
EXT(YruntimeYdefault,"runtime","default");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YsyntaxYsexpr_if_then,"syntax","sexpr-if-then");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YsyntaxYsexpr_text_of_quotation,"syntax","sexpr-text-of-quotation");
EXT(YsyntaxYsexpr_bind_pattern_variables,"syntax","sexpr-bind-pattern-variables");
EXT(YruntimeYlen,"runtime","len");
EXT(YmacrosYnapply,"macros","napply");
EXT(YruntimeYE,"runtime","=");
EXT(YmacrosYtup,"macros","tup");
EXT(YsyntaxYsexpr_expand_backquote,"syntax","sexpr-expand-backquote");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YsyntaxYsexpr_method_signature,"syntax","sexpr-method-signature");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YsyntaxYDsexpr_iterate_tag,"syntax","$sexpr-iterate-tag");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YsyntaxYsexpr_syntax_definition_variable,"syntax","sexpr-syntax-definition-variable");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YsyntaxYDsexpr_unwind_protect_tag,"syntax","$sexpr-unwind-protect-tag");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YsyntaxYsexpr_make_macro_function,"syntax","sexpr-make-macro-function");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYany2Q,"runtime","any2?");
EXT(Ytype_object,"boot","type-object");
EXT(YsyntaxYsexpr_isa_init_values,"syntax","sexpr-isa-init-values");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YsyntaxYsexpr_syntax_definition_value,"syntax","sexpr-syntax-definition-value");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YsyntaxYsexpr_assignment_value,"syntax","sexpr-assignment-value");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YruntimeYassq,"runtime","assq");
EXT(YsyntaxYsexpr_signature_value,"syntax","sexpr-signature-value");
EXT(YsyntaxYsexpr_variable_name,"syntax","sexpr-variable-name");
EXT(YLtypeG,"boot","<type>");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYfill,"runtime","fill");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YsyntaxYDsexpr_define_syntax_tag,"syntax","$sexpr-define-syntax-tag");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YruntimeYfrom,"runtime","from");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(Yslot_init,"boot","slot-init");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YsyntaxYDsexpr_if_tag,"syntax","$sexpr-if-tag");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yobject_slots,"boot","object-slots");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YLsymG,"boot","<sym>");
EXT(Ysym_name,"boot","sym-name");
EXT(YruntimeYGE,"runtime",">=");
EXT(YmacrosYelt,"macros","elt");
EXT(Yfind_setter,"boot","find-setter");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YsyntaxYDsexpr_macro_expand_tag,"syntax","$sexpr-macro-expand-tag");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YruntimeYnewline,"runtime","newline");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYvec,"runtime","vec");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeY1st,"runtime","1st");
EXT(YsyntaxYDsexpr_bind_exit_tag,"syntax","$sexpr-bind-exit-tag");
EXT(YsyntaxYsexpr_make_anonymous_method,"syntax","sexpr-make-anonymous-method");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYpos,"runtime","pos");
EXT(YsyntaxYsexpr_function_body,"syntax","sexpr-function-body");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYdo,"runtime","do");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YsyntaxYsexpr_define_class_parents,"syntax","sexpr-define-class-parents");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YsyntaxYsexpr_assignment_variable,"syntax","sexpr-assignment-variable");
EXT(YruntimeYround,"runtime","round");
EXT(YLvecG,"boot","<vec>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(Yhead_setter,"boot","head-setter");
EXT(YsyntaxYDsexpr_let_tag,"syntax","$sexpr-let-tag");
EXT(YsyntaxYsexpr_syntax_if_value,"syntax","sexpr-syntax-if-value");
EXT(YwriteYTmax_print_lengthT,"write","*max-print-length*");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YsyntaxYsexpr_variableQ,"syntax","sexpr-variable?");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYlist,"runtime","list");
EXT(Yhead,"boot","head");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YsyntaxYDsexpr_slot_tag,"syntax","$sexpr-slot-tag");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YruntimeYbuf,"runtime","buf");
EXT(Yobject_class,"boot","object-class");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YsyntaxYsexpr_syntax_if_pattern,"syntax","sexpr-syntax-if-pattern");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYempty,"runtime","empty");
EXT(YreadYDchar_long_names,"read","$char-long-names");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYtL,"runtime","t<");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YLtupG,"boot","<tup>");
EXT(Ytype_error,"boot","type-error");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YsyntaxYsexpr_iterate_Gloc,"syntax","sexpr-iterate->loc");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YwriteYrecurring_write,"write","recurring-write");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYA,"runtime","+");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(Ytail,"boot","tail");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYmin,"runtime","min");
EXT(YruntimeYS,"runtime","/");
EXT(YsyntaxYsexpr_syntax_if_then,"syntax","sexpr-syntax-if-then");
EXT(YruntimeYtE,"runtime","t=");
EXT(YruntimeYfab_map,"runtime","fab-map");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(Yfab_class,"boot","fab-class");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYdel,"runtime","del");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YsyntaxYsexpr_function_signature,"syntax","sexpr-function-signature");
EXT(YsyntaxYsexpr_function_definition_value,"syntax","sexpr-function-definition-value");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(Ynil,"boot","nil");
EXT(YLlocG,"boot","<loc>");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYtA,"runtime","t+");
EXT(YruntimeYsub,"runtime","sub");
EXT(YruntimeYelt_or,"runtime","elt-or");
EXT(YsyntaxYsexpr_syntax_if_else,"syntax","sexpr-syntax-if-else");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(Ytype_elts,"boot","type-elts");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYneg,"runtime","neg");
EXT(YsyntaxYDsexpr_begin_tag,"syntax","$sexpr-begin-tag");
EXT(YsyntaxYDsexpr_monitor_tag,"syntax","$sexpr-monitor-tag");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYfind_key,"runtime","find-key");

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
  {"reduce+", &module_info_runtime, "reduce+"},
  {"sexpr-block-name", &module_info_syntax, "sexpr-block-name"},
  {"writeln", &module_info_write, "writeln"},
  {"map", &module_info_macros, "map"},
  {"nul", &module_info_boot, "nul"},
  {"swapf", &module_info_macros, "swapf"},
  {"sexpr-slot-object", &module_info_syntax, "sexpr-slot-object"},
  {"curry", &module_info_runtime, "curry"},
  {"%i<", &module_info_boot, "%i<"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"in", &module_info_runtime, "in"},
  {"class-name", &module_info_boot, "class-name"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"always", &module_info_runtime, "always"},
  {"$sexpr-isa-tag", &module_info_syntax, "$sexpr-isa-tag"},
  {"select", &module_info_macros, "select"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"<int>", &module_info_boot, "<int>"},
  {"<num>", &module_info_boot, "<num>"},
  {"map2", &module_info_runtime, "map2"},
  {"$sexpr-syntax-if-tag", &module_info_syntax, "$sexpr-syntax-if-tag"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"%i^", &module_info_boot, "%i^"},
  {"3rd", &module_info_runtime, "3rd"},
  {"read-char", &module_info_runtime, "read-char"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"sexpr-block-body", &module_info_syntax, "sexpr-block-body"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"%i-", &module_info_boot, "%i-"},
  {"loc", &module_info_boot, "loc"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"$sexpr-define-generic-tag", &module_info_syntax, "$sexpr-define-generic-tag"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"sexpr-make-getter", &module_info_syntax, "sexpr-make-getter"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"%selt", &module_info_boot, "%selt"},
  {"$sexpr-quote-tag", &module_info_syntax, "$sexpr-quote-tag"},
  {"port-index", &module_info_runtime, "port-index"},
  {"sexpr-loc-bound-signatures", &module_info_syntax, "sexpr-loc-bound-signatures"},
  {"floor/", &module_info_runtime, "floor/"},
  {"now-key", &module_info_runtime, "now-key"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"%cu", &module_info_boot, "%cu"},
  {"$sexpr-set-tag", &module_info_syntax, "$sexpr-set-tag"},
  {"reduce", &module_info_runtime, "reduce"},
  {"sexpr-unquote?", &module_info_syntax, "sexpr-unquote?"},
  {"%slot", &module_info_boot, "%slot"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"%fu", &module_info_boot, "%fu"},
  {"var-type", &module_info_macros, "var-type"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"dg", &module_info_boot, "dg"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"round/", &module_info_runtime, "round/"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"sexpr-slot-variable", &module_info_syntax, "sexpr-slot-variable"},
  {"dss", &module_info_boot, "dss"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"dp", &module_info_boot, "dp"},
  {"assocq", &module_info_runtime, "assocq"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"%sb", &module_info_boot, "%sb"},
  {"eval", &module_info_syntax, "eval"},
  {"$sexpr-define-class-tag", &module_info_syntax, "$sexpr-define-class-tag"},
  {"<log>", &module_info_boot, "<log>"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"lsh", &module_info_runtime, "lsh"},
  {"$sexpr-define-tag", &module_info_syntax, "$sexpr-define-tag"},
  {"ash", &module_info_runtime, "ash"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"identity", &module_info_runtime, "identity"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"pair", &module_info_macros, "pair"},
  {"dv", &module_info_boot, "dv"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"sexpr-definition-value", &module_info_syntax, "sexpr-definition-value"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"not", &module_info_boot, "not"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"-", &module_info_runtime, "-"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"abs", &module_info_runtime, "abs"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"to-str", &module_info_runtime, "to-str"},
  {"max", &module_info_runtime, "max"},
  {"%f*", &module_info_boot, "%f*"},
  {"<any>", &module_info_boot, "<any>"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"sexpr-function-definition-variable", &module_info_syntax, "sexpr-function-definition-variable"},
  {"%su", &module_info_boot, "%su"},
  {"sexpr-loc-bound-names", &module_info_syntax, "sexpr-loc-bound-names"},
  {"assert", &module_info_macros, "assert"},
  {"*", &module_info_runtime, "*"},
  {"sexpr-loc-bound-bodies", &module_info_syntax, "sexpr-loc-bound-bodies"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"sexpr-slot-init", &module_info_syntax, "sexpr-slot-init"},
  {"set", &module_info_boot, "set"},
  {"export", &module_info_boot, "export"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"type-class", &module_info_boot, "type-class"},
  {"ddv", &module_info_macros, "ddv"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"write", &module_info_write, "write"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"sexpr-make-setter", &module_info_syntax, "sexpr-make-setter"},
  {"<union>", &module_info_boot, "<union>"},
  {"%bb", &module_info_boot, "%bb"},
  {"lst", &module_info_boot, "lst"},
  {"%ft", &module_info_boot, "%ft"},
  {"sexpr-forward-primitive?", &module_info_syntax, "sexpr-forward-primitive?"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"cat", &module_info_macros, "cat"},
  {"sexpr-make-setter-name", &module_info_syntax, "sexpr-make-setter-name"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"assoc", &module_info_runtime, "assoc"},
  {"isa", &module_info_boot, "isa"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"floor", &module_info_runtime, "floor"},
  {"<error>", &module_info_runtime, "<error>"},
  {"var-name", &module_info_macros, "var-name"},
  {"sexpr-isa-parent", &module_info_syntax, "sexpr-isa-parent"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"sexpr-make-application", &module_info_syntax, "sexpr-make-application"},
  {"modulo", &module_info_runtime, "modulo"},
  {"fun", &module_info_boot, "fun"},
  {"pick", &module_info_runtime, "pick"},
  {"collect", &module_info_macros, "collect"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"last", &module_info_runtime, "last"},
  {"or", &module_info_macros, "or"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"low-elt", &module_info_runtime, "low-elt"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"dec", &module_info_macros, "dec"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"sexpr-operator", &module_info_syntax, "sexpr-operator"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"sexpr-loc-raw-body", &module_info_syntax, "sexpr-loc-raw-body"},
  {"<=", &module_info_runtime, "<="},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"format", &module_info_runtime, "format"},
  {"all2?", &module_info_runtime, "all2?"},
  {"@+", &module_info_boot, "@+"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"low-elt-setter", &module_info_runtime, "low-elt-setter"},
  {"seq", &module_info_boot, "seq"},
  {"sexpr-sequence->begin", &module_info_syntax, "sexpr-sequence->begin"},
  {"sexpr-let->combination", &module_info_syntax, "sexpr-let->combination"},
  {"unexec", &module_info_boot, "unexec"},
  {"%pair", &module_info_boot, "%pair"},
  {"mem?", &module_info_runtime, "mem?"},
  {"apply", &module_info_macros, "apply"},
  {"sexpr-variable-type", &module_info_syntax, "sexpr-variable-type"},
  {"%c=", &module_info_boot, "%c="},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"remainder", &module_info_runtime, "remainder"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"display", &module_info_write, "display"},
  {"$sexpr-method-tag", &module_info_syntax, "$sexpr-method-tag"},
  {"%vec", &module_info_boot, "%vec"},
  {"%snul", &module_info_boot, "%snul"},
  {"error", &module_info_boot, "error"},
  {"rep", &module_info_boot, "rep"},
  {"logior", &module_info_runtime, "logior"},
  {"sexpr-isa-slot-inits", &module_info_syntax, "sexpr-isa-slot-inits"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"rev", &module_info_runtime, "rev"},
  {"sexpr-if-else", &module_info_syntax, "sexpr-if-else"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"sexpr-unwind-protect-protected-form", &module_info_syntax, "sexpr-unwind-protect-protected-form"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"<step>", &module_info_runtime, "<step>"},
  {"try", &module_info_boot, "try"},
  {"%i*", &module_info_boot, "%i*"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"<map>", &module_info_runtime, "<map>"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"*max-print-depth*", &module_info_write, "*max-print-depth*"},
  {"$sexpr-define-method-tag", &module_info_syntax, "$sexpr-define-method-tag"},
  {"pos?", &module_info_runtime, "pos?"},
  {"%ib", &module_info_boot, "%ib"},
  {">", &module_info_runtime, ">"},
  {"$sexpr-quasiquote-tag", &module_info_syntax, "$sexpr-quasiquote-tag"},
  {"unless", &module_info_macros, "unless"},
  {"$sexpr-locals-tag", &module_info_syntax, "$sexpr-locals-tag"},
  {"~=", &module_info_runtime, "~="},
  {"sexpr-if-test", &module_info_syntax, "sexpr-if-test"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_syntax, "sexpr-unwind-protect-cleanup-forms"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"sexpr-make-begin", &module_info_syntax, "sexpr-make-begin"},
  {"quote", &module_info_boot, "quote"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"sig", &module_info_runtime, "sig"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"$sexpr-define-function-tag", &module_info_syntax, "$sexpr-define-function-tag"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"sexpr-define-class?", &module_info_syntax, "sexpr-define-class?"},
  {"sexpr-definition-variable", &module_info_syntax, "sexpr-definition-variable"},
  {"sexpr-operands", &module_info_syntax, "sexpr-operands"},
  {"logxor", &module_info_runtime, "logxor"},
  {"sexpr-unquote-splicing?", &module_info_syntax, "sexpr-unquote-splicing?"},
  {"sexpr-method-body", &module_info_syntax, "sexpr-method-body"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"sexpr-isa-init-slots", &module_info_syntax, "sexpr-isa-init-slots"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"%fb", &module_info_boot, "%fb"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"cat2", &module_info_runtime, "cat2"},
  {"<", &module_info_runtime, "<"},
  {"pop", &module_info_runtime, "pop"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"sexpr-monitor-expand", &module_info_syntax, "sexpr-monitor-expand"},
  {"default", &module_info_runtime, "default"},
  {"%f=", &module_info_boot, "%f="},
  {"%process-module", &module_info_boot, "%process-module"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"keys", &module_info_runtime, "keys"},
  {"logand", &module_info_runtime, "logand"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"sexpr-if-then", &module_info_syntax, "sexpr-if-then"},
  {"cat!", &module_info_runtime, "cat!"},
  {"sexpr-text-of-quotation", &module_info_syntax, "sexpr-text-of-quotation"},
  {"sexpr-bind-pattern-variables", &module_info_syntax, "sexpr-bind-pattern-variables"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"len", &module_info_runtime, "len"},
  {"napply", &module_info_macros, "napply"},
  {"and", &module_info_macros, "and"},
  {"=", &module_info_runtime, "="},
  {"tup", &module_info_macros, "tup"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"sexpr-expand-backquote", &module_info_syntax, "sexpr-expand-backquote"},
  {"add", &module_info_runtime, "add"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"sexpr-method-signature", &module_info_syntax, "sexpr-method-signature"},
  {"add!", &module_info_runtime, "add!"},
  {"%str", &module_info_boot, "%str"},
  {"$sexpr-iterate-tag", &module_info_syntax, "$sexpr-iterate-tag"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"sexpr-syntax-definition-variable", &module_info_syntax, "sexpr-syntax-definition-variable"},
  {"@<", &module_info_boot, "@<"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"$sexpr-unwind-protect-tag", &module_info_syntax, "$sexpr-unwind-protect-tag"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"lognot", &module_info_runtime, "lognot"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"sexpr-make-macro-function", &module_info_syntax, "sexpr-make-macro-function"},
  {"%lb", &module_info_boot, "%lb"},
  {"gensym", &module_info_macros, "gensym"},
  {"any2?", &module_info_runtime, "any2?"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"type-object", &module_info_boot, "type-object"},
  {"if", &module_info_boot, "if"},
  {"sexpr-isa-init-values", &module_info_syntax, "sexpr-isa-init-values"},
  {"<class>", &module_info_boot, "<class>"},
  {"popf", &module_info_macros, "popf"},
  {"as", &module_info_runtime, "as"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"fin", &module_info_boot, "fin"},
  {"sexpr-syntax-definition-value", &module_info_syntax, "sexpr-syntax-definition-value"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"sexpr-assignment-value", &module_info_syntax, "sexpr-assignment-value"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"any?", &module_info_runtime, "any?"},
  {"assq", &module_info_runtime, "assq"},
  {"sexpr-signature-value", &module_info_syntax, "sexpr-signature-value"},
  {"sexpr-variable-name", &module_info_syntax, "sexpr-variable-name"},
  {"<type>", &module_info_boot, "<type>"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"push", &module_info_runtime, "push"},
  {"compose", &module_info_runtime, "compose"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"fill", &module_info_runtime, "fill"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"out", &module_info_runtime, "out"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"%iu", &module_info_boot, "%iu"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"$sexpr-define-syntax-tag", &module_info_syntax, "$sexpr-define-syntax-tag"},
  {"%slen", &module_info_boot, "%slen"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"from", &module_info_runtime, "from"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"dc", &module_info_boot, "dc"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"%iv", &module_info_boot, "%iv"},
  {"first-then", &module_info_runtime, "first-then"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"false-or", &module_info_runtime, "false-or"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"$sexpr-if-tag", &module_info_syntax, "$sexpr-if-tag"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"zero?", &module_info_runtime, "zero?"},
  {"pushf", &module_info_macros, "pushf"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"address-of", &module_info_runtime, "address-of"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"alter", &module_info_runtime, "alter"},
  {"all?", &module_info_runtime, "all?"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"sym-name", &module_info_boot, "sym-name"},
  {">=", &module_info_runtime, ">="},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"elt", &module_info_macros, "elt"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%c<", &module_info_boot, "%c<"},
  {"let", &module_info_boot, "let"},
  {"<port>", &module_info_runtime, "<port>"},
  {"<list>", &module_info_runtime, "<list>"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"%i+", &module_info_boot, "%i+"},
  {"$sexpr-macro-expand-tag", &module_info_syntax, "$sexpr-macro-expand-tag"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"newline", &module_info_runtime, "newline"},
  {"%raw", &module_info_boot, "%raw"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"vec", &module_info_runtime, "vec"},
  {"%im", &module_info_boot, "%im"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"<str>", &module_info_boot, "<str>"},
  {"dlet", &module_info_macros, "dlet"},
  {"str", &module_info_runtime, "str"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"next-method", &module_info_macros, "next-method"},
  {"app-args", &module_info_runtime, "app-args"},
  {"bound?", &module_info_boot, "bound?"},
  {"%f+", &module_info_boot, "%f+"},
  {"~==", &module_info_runtime, "~=="},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"read", &module_info_runtime, "read"},
  {"rev!", &module_info_runtime, "rev!"},
  {"1st", &module_info_runtime, "1st"},
  {"$sexpr-bind-exit-tag", &module_info_syntax, "$sexpr-bind-exit-tag"},
  {"sexpr-make-anonymous-method", &module_info_syntax, "sexpr-make-anonymous-method"},
  {"write-string", &module_info_runtime, "write-string"},
  {"pos", &module_info_runtime, "pos"},
  {"sexpr-function-body", &module_info_syntax, "sexpr-function-body"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"do3", &module_info_runtime, "do3"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"%lu", &module_info_boot, "%lu"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"force-output", &module_info_runtime, "force-output"},
  {"do", &module_info_runtime, "do"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"case", &module_info_macros, "case"},
  {"sexpr-define-class-parents", &module_info_syntax, "sexpr-define-class-parents"},
  {"for", &module_info_macros, "for"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"sexpr-assignment-variable", &module_info_syntax, "sexpr-assignment-variable"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"round", &module_info_runtime, "round"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"<met>", &module_info_boot, "<met>"},
  {"nul?", &module_info_runtime, "nul?"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"$sexpr-let-tag", &module_info_syntax, "$sexpr-let-tag"},
  {"sexpr-syntax-if-value", &module_info_syntax, "sexpr-syntax-if-value"},
  {"@olen", &module_info_boot, "@olen"},
  {"*max-print-length*", &module_info_write, "*max-print-length*"},
  {"fab", &module_info_runtime, "fab"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"sexpr-variable?", &module_info_syntax, "sexpr-variable?"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"%it/", &module_info_boot, "%it/"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"list", &module_info_runtime, "list"},
  {"head", &module_info_boot, "head"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"$sexpr-slot-tag", &module_info_syntax, "$sexpr-slot-tag"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"collected", &module_info_macros, "collected"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"even?", &module_info_runtime, "even?"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"use", &module_info_boot, "use"},
  {"df", &module_info_boot, "df"},
  {"buf", &module_info_runtime, "buf"},
  {"object-class", &module_info_boot, "object-class"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"dm", &module_info_boot, "dm"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"when", &module_info_macros, "when"},
  {"neg?", &module_info_runtime, "neg?"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"%velt", &module_info_boot, "%velt"},
  {"sexpr-syntax-if-pattern", &module_info_syntax, "sexpr-syntax-if-pattern"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"empty", &module_info_runtime, "empty"},
  {"collecting", &module_info_macros, "collecting"},
  {"$char-long-names", &module_info_read, "$char-long-names"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"%untag", &module_info_boot, "%untag"},
  {"%i=", &module_info_boot, "%i="},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"from-above", &module_info_runtime, "from-above"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"t<", &module_info_runtime, "t<"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"type-error", &module_info_boot, "type-error"},
  {"do2", &module_info_runtime, "do2"},
  {"sexpr-iterate->loc", &module_info_syntax, "sexpr-iterate->loc"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"from-below", &module_info_runtime, "from-below"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"recurring-write", &module_info_write, "recurring-write"},
  {"assqn", &module_info_runtime, "assqn"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"2nd", &module_info_runtime, "2nd"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"+", &module_info_runtime, "+"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"ct", &module_info_boot, "ct"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"tail", &module_info_boot, "tail"},
  {"%f<", &module_info_boot, "%f<"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"==", &module_info_macros, "=="},
  {"write-char", &module_info_runtime, "write-char"},
  {"%i!", &module_info_boot, "%i!"},
  {"opf", &module_info_macros, "opf"},
  {"min", &module_info_runtime, "min"},
  {"/", &module_info_runtime, "/"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"sexpr-syntax-if-then", &module_info_syntax, "sexpr-syntax-if-then"},
  {"t=", &module_info_runtime, "t="},
  {"fab-map", &module_info_runtime, "fab-map"},
  {"from-by", &module_info_runtime, "from-by"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"truncate", &module_info_runtime, "truncate"},
  {"fabs", &module_info_runtime, "fabs"},
  {"<range>", &module_info_runtime, "<range>"},
  {"<col>", &module_info_boot, "<col>"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"@==", &module_info_boot, "@=="},
  {"from-to", &module_info_runtime, "from-to"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"del-key", &module_info_runtime, "del-key"},
  {"del", &module_info_runtime, "del"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"lab", &module_info_boot, "lab"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%cb", &module_info_boot, "%cb"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"sexpr-function-signature", &module_info_syntax, "sexpr-function-signature"},
  {"mif", &module_info_boot, "mif"},
  {"sexpr-function-definition-value", &module_info_syntax, "sexpr-function-definition-value"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"odd?", &module_info_runtime, "odd?"},
  {"nil", &module_info_boot, "nil"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"t+", &module_info_runtime, "t+"},
  {"inc", &module_info_macros, "inc"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"sub", &module_info_runtime, "sub"},
  {"%f/", &module_info_boot, "%f/"},
  {"elt-or", &module_info_runtime, "elt-or"},
  {"%f-", &module_info_boot, "%f-"},
  {"sexpr-syntax-if-else", &module_info_syntax, "sexpr-syntax-if-else"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"isa?", &module_info_boot, "isa?"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"ds", &module_info_boot, "ds"},
  {"neg", &module_info_runtime, "neg"},
  {"$sexpr-begin-tag", &module_info_syntax, "$sexpr-begin-tag"},
  {"$sexpr-monitor-tag", &module_info_syntax, "$sexpr-monitor-tag"},
  {"empty?", &module_info_macros, "empty?"},
  {"%i?", &module_info_boot, "%i?"},
  {"%isa", &module_info_boot, "%isa"},
  {"%i&", &module_info_boot, "%i&"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"find-key", &module_info_runtime, "find-key"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"reduce+", "reduce+"},
  {"writeln", "writeln"},
  {"map", "map"},
  {"swapf", "swapf"},
  {"curry", "curry"},
  {"table-protocol", "table-protocol"},
  {"in", "in"},
  {"class-name", "class-name"},
  {"make-setter-name", "make-setter-name"},
  {"always", "always"},
  {"select", "select"},
  {"may-isa?", "may-isa?"},
  {"to-digit", "to-digit"},
  {"map2", "map2"},
  {"port-contents", "port-contents"},
  {"<string-input-port>", "<string-input-port>"},
  {"3rd", "3rd"},
  {"read-char", "read-char"},
  {"<file-port>", "<file-port>"},
  {"nxt-state", "nxt-state"},
  {"now-key", "now-key"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"loc", "loc"},
  {"<string-port>", "<string-port>"},
  {"ceiling/", "ceiling/"},
  {"newline", "newline"},
  {"call-with-input-file", "call-with-input-file"},
  {"<chr>", "<chr>"},
  {"port-index", "port-index"},
  {"floor/", "floor/"},
  {"write-to-string", "write-to-string"},
  {"close-input-port", "close-input-port"},
  {"reduce", "reduce"},
  {"%slot", "%slot"},
  {"rcurry", "rcurry"},
  {"var-type", "var-type"},
  {"dg", "dg"},
  {"slot-setter", "slot-setter"},
  {"round/", "round/"},
  {"num-to-str", "num-to-str"},
  {"$min-int", "$min-int"},
  {"slot-value-setter", "slot-value-setter"},
  {"now-elt", "now-elt"},
  {"<log>", "<log>"},
  {"flo-bits", "flo-bits"},
  {"lsh", "lsh"},
  {"ash", "ash"},
  {"identity", "identity"},
  {"make-handler", "make-handler"},
  {"<slot>", "<slot>"},
  {"*print-base*", "*print-base*"},
  {"<file-input-port>", "<file-input-port>"},
  {"subtype?", "subtype?"},
  {"pair", "pair"},
  {"dv", "dv"},
  {"now-elt-setter", "now-elt-setter"},
  {"not", "not"},
  {"<simple-condition>", "<simple-condition>"},
  {"-", "-"},
  {"abs", "abs"},
  {"class-parents", "class-parents"},
  {"to-str", "to-str"},
  {"max", "max"},
  {"<any>", "<any>"},
  {"sub-setter", "sub-setter"},
  {"low-elt", "low-elt"},
  {"assert", "assert"},
  {"*", "*"},
  {"table-growth-threshold", "table-growth-threshold"},
  {"read", "read"},
  {"set", "set"},
  {"export", "export"},
  {"type-class", "type-class"},
  {"fun-name", "fun-name"},
  {"fin-state?", "fin-state?"},
  {"write", "write"},
  {"<union>", "<union>"},
  {"lst", "lst"},
  {"$max-int", "$max-int"},
  {"fun-arity", "fun-arity"},
  {"cat", "cat"},
  {"del", "del"},
  {"isa", "isa"},
  {"floor", "floor"},
  {"<error>", "<error>"},
  {"cat!", "cat!"},
  {"var-name", "var-name"},
  {"modulo", "modulo"},
  {"fun", "fun"},
  {"collect", "collect"},
  {"need-implementation", "need-implementation"},
  {"map-keyed", "map-keyed"},
  {"cat2", "cat2"},
  {"last", "last"},
  {"or", "or"},
  {"<subclass>", "<subclass>"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"default-handler", "default-handler"},
  {"dec", "dec"},
  {"handler-info-message", "handler-info-message"},
  {"<=", "<="},
  {"peek-char", "peek-char"},
  {"push-last!", "push-last!"},
  {"handler-matches?", "handler-matches?"},
  {"add", "add"},
  {"all2?", "all2?"},
  {"do-keyed", "do-keyed"},
  {"low-elt-setter", "low-elt-setter"},
  {"seq", "seq"},
  {"%pair", "%pair"},
  {"mem?", "mem?"},
  {"apply", "apply"},
  {"fun-value", "fun-value"},
  {"<singleton>", "<singleton>"},
  {"condition-message", "condition-message"},
  {"describe-condition", "describe-condition"},
  {"rep", "rep"},
  {"assocs-test", "assocs-test"},
  {"logior", "logior"},
  {"rev", "rev"},
  {"close-output-port", "close-output-port"},
  {"<step>", "<step>"},
  {"try", "try"},
  {"match-empty-list", "match-empty-list"},
  {"<map>", "<map>"},
  {"lowercase?", "lowercase?"},
  {"pos?", "pos?"},
  {">", ">"},
  {"unless", "unless"},
  {"~=", "~="},
  {"handler-info-arguments", "handler-info-arguments"},
  {"quote", "quote"},
  {"pop-last!", "pop-last!"},
  {"sig", "sig"},
  {"keys", "keys"},
  {"add-slot", "add-slot"},
  {"copy-state", "copy-state"},
  {"false-or", "false-or"},
  {"fun-nary?", "fun-nary?"},
  {"logxor", "logxor"},
  {"fabs", "fabs"},
  {"char-ready?", "char-ready?"},
  {"<", "<"},
  {"pop", "pop"},
  {"slot-getter", "slot-getter"},
  {"default", "default"},
  {"<opts>", "<opts>"},
  {"logand", "logand"},
  {"<condition>", "<condition>"},
  {"lognot", "lognot"},
  {"len", "len"},
  {"napply", "napply"},
  {"and", "and"},
  {"=", "="},
  {"tup", "tup"},
  {"ceiling", "ceiling"},
  {"<input-port>", "<input-port>"},
  {"class-direct-slots", "class-direct-slots"},
  {"add!", "add!"},
  {"neg?", "neg?"},
  {"neg", "neg"},
  {"truncate/", "truncate/"},
  {"eof-object?", "eof-object?"},
  {"gensym", "gensym"},
  {"any2?", "any2?"},
  {"write-string", "write-string"},
  {"type-object", "type-object"},
  {"if", "if"},
  {"<class>", "<class>"},
  {"popf", "popf"},
  {"current-gc-state", "current-gc-state"},
  {"fin", "fin"},
  {"any?", "any?"},
  {"<type>", "<type>"},
  {"df", "df"},
  {"push", "push"},
  {"compose", "compose"},
  {"open-input-file", "open-input-file"},
  {"fill", "fill"},
  {"fun-specs", "fun-specs"},
  {"out", "out"},
  {"call-with-output-file", "call-with-output-file"},
  {"<handler>", "<handler>"},
  {"<buf>", "<buf>"},
  {"as", "as"},
  {"from", "from"},
  {"object-parents", "object-parents"},
  {"dc", "dc"},
  {"<gen>", "<gen>"},
  {"first-then", "first-then"},
  {"slot-init", "slot-init"},
  {"len-setter", "len-setter"},
  {"$permanent-hash-state", "$permanent-hash-state"},
  {"t=", "t="},
  {"uppercase?", "uppercase?"},
  {"match-atom", "match-atom"},
  {"format", "format"},
  {"zero?", "zero?"},
  {"pushf", "pushf"},
  {"object-slots", "object-slots"},
  {"ini-state", "ini-state"},
  {"address-of", "address-of"},
  {"dlet", "dlet"},
  {"alter", "alter"},
  {"<sym>", "<sym>"},
  {">=", ">="},
  {"elt", "elt"},
  {"find-setter", "find-setter"},
  {"let", "let"},
  {"<list>", "<list>"},
  {"<flat>", "<flat>"},
  {"<str-tab>", "<str-tab>"},
  {"app-filename", "app-filename"},
  {"elt-setter", "elt-setter"},
  {"alphabetic?", "alphabetic?"},
  {"quasiquote", "quasiquote"},
  {"all?", "all?"},
  {"class-direct-children", "class-direct-children"},
  {"id-hash", "id-hash"},
  {"<simple-error>", "<simple-error>"},
  {"rev!", "rev!"},
  {"<string-output-port>", "<string-output-port>"},
  {"nul", "nul"},
  {"vec", "vec"},
  {"<str>", "<str>"},
  {"app-args", "app-args"},
  {"str", "str"},
  {"remainder", "remainder"},
  {"next-method", "next-method"},
  {"bound?", "bound?"},
  {"~==", "~=="},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"1st", "1st"},
  {"pos", "pos"},
  {"gen-add-met", "gen-add-met"},
  {"<int>", "<int>"},
  {"slot-value", "slot-value"},
  {"<serious-condition>", "<serious-condition>"},
  {"%define-method", "%define-method"},
  {"force-output", "force-output"},
  {"do", "do"},
  {"case", "case"},
  {"for", "for"},
  {"round", "round"},
  {"<vec>", "<vec>"},
  {"<port>", "<port>"},
  {"slot-owner", "slot-owner"},
  {"<tab>", "<tab>"},
  {"logbit?", "logbit?"},
  {"condition-arguments", "condition-arguments"},
  {"fun-names", "fun-names"},
  {"<met>", "<met>"},
  {"nul?", "nul?"},
  {"<num>", "<num>"},
  {"head-setter", "head-setter"},
  {"call-with-string-output-port", "call-with-string-output-port"},
  {"display", "display"},
  {"fab", "fab"},
  {"table-shrink-threshold", "table-shrink-threshold"},
  {"find-getter", "find-getter"},
  {"list", "list"},
  {"head", "head"},
  {"<output-port>", "<output-port>"},
  {"collected", "collected"},
  {"class-direct-parents", "class-direct-parents"},
  {"even?", "even?"},
  {"use", "use"},
  {"buf", "buf"},
  {"pick", "pick"},
  {"dm", "dm"},
  {"fun-mets", "fun-mets"},
  {"%next-methods", "%next-methods"},
  {"locative-value-setter", "locative-value-setter"},
  {"del-dups", "del-dups"},
  {"when", "when"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"as-lowercase", "as-lowercase"},
  {"table-growth-factor", "table-growth-factor"},
  {"<fun>", "<fun>"},
  {"call-with-string-input-port", "call-with-string-input-port"},
  {"empty", "empty"},
  {"collecting", "collecting"},
  {"str-to-num", "str-to-num"},
  {"<lst>", "<lst>"},
  {"from-above", "from-above"},
  {"t<", "t<"},
  {"macro-expand", "macro-expand"},
  {"<file-output-port>", "<file-output-port>"},
  {"make-sym", "make-sym"},
  {"read-from-string", "read-from-string"},
  {"numeric?", "numeric?"},
  {"<tup>", "<tup>"},
  {"do2", "do2"},
  {"tail-setter", "tail-setter"},
  {"slot-type", "slot-type"},
  {"slot", "slot"},
  {"from-above-by", "from-above-by"},
  {"from-below", "from-below"},
  {"sorted-app-mets", "sorted-app-mets"},
  {"locative-value", "locative-value"},
  {"2nd", "2nd"},
  {"<seq>", "<seq>"},
  {"<handler-info>", "<handler-info>"},
  {"+", "+"},
  {"ct", "ct"},
  {"tail", "tail"},
  {"==", "=="},
  {"write-char", "write-char"},
  {"opf", "opf"},
  {"min", "min"},
  {"/", "/"},
  {"fab-map", "fab-map"},
  {"from-by", "from-by"},
  {"del-keys", "del-keys"},
  {"class-slots", "class-slots"},
  {"truncate", "truncate"},
  {"<range>", "<range>"},
  {"<col>", "<col>"},
  {"handler-function", "handler-function"},
  {"from-below-by", "from-below-by"},
  {"from-to", "from-to"},
  {"fab-class", "fab-class"},
  {"error", "error"},
  {"del-key", "del-key"},
  {"lab", "lab"},
  {"match-sublist", "match-sublist"},
  {"mif", "mif"},
  {"open-output-file", "open-output-file"},
  {"from-to-by", "from-to-by"},
  {"odd?", "odd?"},
  {"nil", "nil"},
  {"<loc>", "<loc>"},
  {"match-unquote", "match-unquote"},
  {"t+", "t+"},
  {"inc", "inc"},
  {"ct-also", "ct-also"},
  {"sub", "sub"},
  {"<assocs>", "<assocs>"},
  {"type-elts", "type-elts"},
  {"isa?", "isa?"},
  {"$default-handler-info", "$default-handler-info"},
  {"met-app?", "met-app?"},
  {"ds", "ds"},
  {"empty?", "empty?"},
  {"%isa", "%isa"},
  {"<flo>", "<flo>"},
  {"as-uppercase", "as-uppercase"},
  {"find-key", "find-key"},
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
