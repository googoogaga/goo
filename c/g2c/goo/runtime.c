/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: runtime */

DEF(YruntimeYoddQ,"runtime","odd?");
DEF(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(Yslot_owner,"boot","slot-owner");
DEF(YruntimeYrange_by,"runtime","range-by");
DEF(YruntimeYPsecondary_modulus_setter,"runtime","%secondary-modulus-setter");
EXT(YPslot,"boot","%slot");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YLlogG,"boot","<log>");
EXT(YLslotG,"boot","<slot>");
DEF(YruntimeYwrite_string,"runtime","write-string");
DEF(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
DEF(YruntimeYnative_chars,"runtime","native-chars");
DEF(YruntimeYassoc_key_setter,"runtime","assoc-key-setter");
DEF(YruntimeYfabs,"runtime","fabs");
DEF(YruntimeYsignal_handler_list,"runtime","signal-handler-list");
DEF(YruntimeYpos,"runtime","pos");
DEF(YruntimeYassoc_key,"runtime","assoc-key");
DEF(YruntimeYneg,"runtime","neg");
DEF(YruntimeYmake_handler,"runtime","make-handler");
DEF(YruntimeYpush,"runtime","push");
DEF(YruntimeYtab_keys,"runtime","tab-keys");
DEF(YruntimeYas_uppercase,"runtime","as-uppercase");
DEF(YruntimeYfrom_below,"runtime","from-below");
DEF(YruntimeYPvacated_setter,"runtime","%vacated-setter");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
DEF(YruntimeYclose_input_port,"runtime","close-input-port");
DEF(YruntimeYrange_below,"runtime","range-below");
EXT(Ynot,"boot","not");
DEF(YruntimeYNE,"runtime","~=");
EXT(Yslot_value,"boot","slot-value");
EXT(YLanyG,"boot","<any>");
DEF(YruntimeYfrom_below_by,"runtime","from-below-by");
DEF(YruntimeYport_contents,"runtime","port-contents");
DEF(YruntimeYsymbols,"runtime","symbols");
DEF(YruntimeYdo3,"runtime","do3");
EXT(YLunionG,"boot","<union>");
EXT(YPsnul,"boot","%snul");
DEF(YruntimeYassq,"runtime","assq");
EXT(Ymay_isaQ,"boot","may-isa?");
DEF(YruntimeYhandler_function_setter,"runtime","handler-function-setter");
DEF(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(Yfun_arity,"boot","fun-arity");
DEF(YruntimeYpop_lastX,"runtime","pop-last!");
DEF(YruntimeYsub_setter,"runtime","sub-setter");
DEF(YruntimeYto_digit,"runtime","to-digit");
DEF(YruntimeYDempty_cell_marker,"runtime","$empty-cell-marker");
DEF(YruntimeYrehash_table,"runtime","rehash-table");
DEF(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
DEF(YruntimeYLfile_portG,"runtime","<file-port>");
DEF(YruntimeYcontagious_call,"runtime","contagious-call");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
DEF(YruntimeYcopy_to_new_vector,"runtime","copy-to-new-vector");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YmacrosYcat,"macros","cat");
DEF(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
DEF(YruntimeYLinput_portG,"runtime","<input-port>");
DEF(YruntimeYincongruent_method_error_generic,"runtime","incongruent-method-error-generic");
DEF(YruntimeYassoc_value_setter,"runtime","assoc-value-setter");
DEF(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YmacrosYemptyQ,"macros","empty?");
DEF(YruntimeYbuf,"runtime","buf");
EXT(Ytail_setter,"boot","tail-setter");
DEF(YruntimeYport_index,"runtime","port-index");
EXT(Yslot_type,"boot","slot-type");
DEF(YruntimeYread,"runtime","read");
DEF(YruntimeYceilingS,"runtime","ceiling/");
DEF(YruntimeYformat,"runtime","format");
EXT(Yhandler_info_message,"boot","handler-info-message");
DEF(YruntimeYrevX,"runtime","rev!");
DEF(YruntimeYlast,"runtime","last");
DEF(YruntimeYPlist,"runtime","%list");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YPsymbols,"boot","%symbols");
DEF(YruntimeYfloorS,"runtime","floor/");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YmacrosYmatch_atom,"macros","match-atom");
DEF(YruntimeYdo_handlers_of_type,"runtime","do-handlers-of-type");
EXT(Ytail,"boot","tail");
DEF(YruntimeYdescribe_condition,"runtime","describe-condition");
DEF(YruntimeYPvector,"runtime","%vector");
DEF(YruntimeYPdata_setter,"runtime","%data-setter");
DEF(YruntimeYstep_first_setter,"runtime","step-first-setter");
DEF(YruntimeYlsh,"runtime","lsh");
DEF(YruntimeYstep_then,"runtime","step-then");
EXT(YmacrosYgensym,"macros","gensym");
DEF(YruntimeYash,"runtime","ash");
DEF(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(Yclass_slots,"boot","class-slots");
DEF(YruntimeYport_index_setter,"runtime","port-index-setter");
DEF(YruntimeYflo_bits,"runtime","flo-bits");
DEF(YruntimeYLbotG,"runtime","<bot>");
DEF(YruntimeYrcurry,"runtime","rcurry");
DEF(YruntimeYroundS,"runtime","round/");
DEF(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
DEF(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
DEF(YruntimeYrev,"runtime","rev");
DEF(YruntimeYassocs_vals_setter,"runtime","assocs-vals-setter");
DEF(YruntimeYcondition_message_setter,"runtime","condition-message-setter");
DEF(YruntimeYstep_then_setter,"runtime","step-then-setter");
DEF(YruntimeYassoc_value,"runtime","assoc-value");
DEF(YruntimeYabs,"runtime","abs");
DEF(YruntimeYport_handle,"runtime","port-handle");
DEF(YruntimeYLportG,"runtime","<port>");
DEF(YruntimeYdo2,"runtime","do2");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(Ynil,"boot","nil");
DEF(YruntimeYpush_lastX,"runtime","push-last!");
DEF(YruntimeYT,"runtime","*");
DEF(YruntimeYLoutput_portG,"runtime","<output-port>");
DEF(YruntimeYtruncateS,"runtime","truncate/");
DEF(YruntimeYLlistG,"runtime","<list>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
DEF(YruntimeYmax,"runtime","max");
DEF(YruntimeYcontagious_type,"runtime","contagious-type");
DEF(YruntimeYhandler_info_setter,"runtime","handler-info-setter");
DEF(YruntimeYadd_new,"runtime","add-new");
DEF(YruntimeYLerrorG,"runtime","<error>");
DEF(YruntimeYchoose_table_geometry,"runtime","choose-table-geometry");
EXT(Ytype_elts,"boot","type-elts");
DEF(YruntimeYfab_map,"runtime","fab-map");
DEF(YruntimeYTdebug_tablesQT,"runtime","*debug-tables?*");
DEF(YruntimeYcompose,"runtime","compose");
EXT(YPPmacro,"boot","%%macro");
DEF(YruntimeYopen_output_file,"runtime","open-output-file");
DEF(YruntimeYapp_args,"runtime","app-args");
DEF(YruntimeYPbucket,"runtime","%bucket");
DEF(YruntimeYwrite_char,"runtime","write-char");
DEF(YruntimeYdefault,"runtime","default");
DEF(YruntimeYaddress_of,"runtime","address-of");
DEF(YruntimeYpower_of_two_ceiling,"runtime","power-of-two-ceiling");
EXT(YPdefine_method,"boot","%define-method");
DEF(YruntimeYfloor,"runtime","floor");
DEF(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
DEF(YruntimeYcat2,"runtime","cat2");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
DEF(YruntimeYmodulo,"runtime","modulo");
DEF(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
DEF(YruntimeYcatX,"runtime","cat!");
DEF(YruntimeYDvacated_cell_marker,"runtime","$vacated-cell-marker");
DEF(YruntimeYascii_Gchar,"runtime","ascii->char");
EXT(YLoptsG,"boot","<opts>");
DEF(YruntimeYapp_filename,"runtime","app-filename");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
DEF(YruntimeYLrestartG,"runtime","<restart>");
DEF(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YisaQ,"boot","isa?");
DEF(YruntimeYnyi_error,"runtime","nyi-error");
DEF(YruntimeYincongruent_method_error_generic_setter,"runtime","incongruent-method-error-generic-setter");
DEF(YruntimeYempty,"runtime","empty");
DEF(YruntimeYassqn,"runtime","assqn");
EXT(Ymet_appQ,"boot","met-app?");
DEF(YruntimeYTgensym_counterT,"runtime","*gensym-counter*");
DEF(YruntimeYaddX,"runtime","add!");
DEF(YruntimeYA,"runtime","+");
EXT(YLtypeG,"boot","<type>");
DEF(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YLclassG,"boot","<class>");
DEF(YruntimeYLrangeG,"runtime","<range>");
EXT(Yfab_sym,"boot","fab-sym");
DEF(YruntimeYremainder,"runtime","remainder");
DEF(YruntimeYadd,"runtime","add");
DEF(YruntimeYDdigit_to_char,"runtime","$digit-to-char");
DEF(YruntimeYdecode_radix_option,"runtime","decode-radix-option");
DEF(YruntimeYhandler_info_message_setter,"runtime","handler-info-message-setter");
DEF(YruntimeYfind_key,"runtime","find-key");
DEF(YruntimeYelt,"runtime","elt");
DEF(YruntimeYreduceA,"runtime","reduce+");
DEF(YruntimeYcurry,"runtime","curry");
DEF(YruntimeYPcat,"runtime","%cat");
DEF(YruntimeYstep_first,"runtime","step-first");
EXT(Yobject_parents,"boot","object-parents");
DEF(YruntimeYLE,"runtime","<=");
DEF(YruntimeYelt_setter,"runtime","elt-setter");
DEF(YruntimeYlogior,"runtime","logior");
DEF(YruntimeYlowercaseQ,"runtime","lowercase?");
DEF(YruntimeYE,"runtime","=");
EXT(Yfun_specs,"boot","fun-specs");
DEF(YruntimeYnulQ,"runtime","nul?");
DEF(YruntimeYPn_buckets_setter,"runtime","%n-buckets-setter");
EXT(Ytype_error,"boot","type-error");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YLsymG,"boot","<sym>");
DEF(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
DEF(YruntimeYLtabG,"runtime","<tab>");
DEF(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
DEF(YruntimeYassocs_test,"runtime","assocs-test");
DEF(YruntimeYfrom_to_by,"runtime","from-to-by");
DEF(YruntimeYdefault_handler_description,"runtime","default-handler-description");
DEF(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YmacrosYmap,"macros","map");
DEF(YruntimeYeof_object,"runtime","eof-object");
DEF(YruntimeYtable_growth_factor_setter,"runtime","table-growth-factor-setter");
EXT(Ysig_names,"boot","sig-names");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
DEF(YruntimeYpop,"runtime","pop");
EXT(Yslot_setter,"boot","slot-setter");
DEF(YruntimeYmap2,"runtime","map2");
DEF(YruntimeYposQ,"runtime","pos?");
DEF(YruntimeYlogxor,"runtime","logxor");
DEF(YruntimeYfrom_to,"runtime","from-to");
DEF(YruntimeYPn_buckets,"runtime","%n-buckets");
DEF(YruntimeYhandler_info,"runtime","handler-info");
EXT(YLgenG,"boot","<gen>");
EXT(Yobject_slots,"boot","object-slots");
DEF(YruntimeYcopy_state,"runtime","copy-state");
DEF(YruntimeYascii_chars,"runtime","ascii-chars");
EXT(Yfun_name_setter,"boot","fun-name-setter");
DEF(YruntimeYincongruent_method_error_method,"runtime","incongruent-method-error-method");
DEF(YruntimeYPcount,"runtime","%count");
DEF(YruntimeYport_handle_setter,"runtime","port-handle-setter");
DEF(YruntimeYfrom,"runtime","from");
EXT(YLstrG,"boot","<str>");
DEF(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YmacrosYEE,"macros","==");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYtup,"macros","tup");
DEF(YruntimeYlogand,"runtime","logand");
DEF(YruntimeYlocative_value,"runtime","locative-value");
DEF(YruntimeYchar_Ginteger,"runtime","char->integer");
DEF(YruntimeYfalse_or,"runtime","false-or");
DEF(YruntimeYnyi,"runtime","nyi");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(Yfind_setter,"boot","find-setter");
DEF(YruntimeYTtwin_primesT,"runtime","*twin-primes*");
DEF(YruntimeYrange_to,"runtime","range-to");
DEF(YruntimeYlow_elt,"runtime","low-elt");
DEF(YruntimeYdel_keys,"runtime","del-keys");
DEF(YruntimeYreduce,"runtime","reduce");
DEF(YruntimeYstr,"runtime","str");
DEF(YruntimeYrange_to_setter,"runtime","range-to-setter");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
DEF(YruntimeYinto,"runtime","into");
EXT(YLvecG,"boot","<vec>");
EXT(Ytype_class,"boot","type-class");
DEF(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
DEF(YruntimeYformat_to_string,"runtime","format-to-string");
DEF(YruntimeYlognot,"runtime","lognot");
EXT(Ylst,"boot","lst");
EXT(Yfile_opening_error,"boot","file-opening-error");
DEF(YruntimeY1st,"runtime","1st");
EXT(Ygen_add_met,"boot","gen-add-met");
DEF(YruntimeYas,"runtime","as");
DEF(YruntimeYhandler_test,"runtime","handler-test");
DEF(YruntimeYcondition_arguments,"runtime","condition-arguments");
DEF(YruntimeYfrom_above_by,"runtime","from-above-by");
DEF(YruntimeYalways,"runtime","always");
DEF(YruntimeYtL,"runtime","t<");
DEF(YruntimeYceiling,"runtime","ceiling");
EXT(YLflatG,"boot","<flat>");
EXT(YLmetG,"boot","<met>");
DEF(YruntimeYout,"runtime","out");
EXT(Yfun_names,"boot","fun-names");
DEF(YruntimeYdo,"runtime","do");
DEF(YruntimeYnewline,"runtime","newline");
DEF(YruntimeYepsilon,"runtime","epsilon");
DEF(YruntimeYport_guts_setter,"runtime","port-guts-setter");
EXT(Ysig_arity,"boot","sig-arity");
DEF(YruntimeYfab,"runtime","fab");
DEF(YruntimeYbuf_dat,"runtime","buf-dat");
DEF(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
DEF(YruntimeYforce_output,"runtime","force-output");
DEF(YruntimeYassocs_test_setter,"runtime","assocs-test-setter");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
DEF(YruntimeYchar_readyQ,"runtime","char-ready?");
DEF(YruntimeYbuf_dat_setter,"runtime","buf-dat-setter");
DEF(YruntimeYLstepG,"runtime","<step>");
DEF(YruntimeYchar_Gascii,"runtime","char->ascii");
DEF(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
DEF(YruntimeYLtab_stateG,"runtime","<tab-state>");
DEF(YruntimeYPprimary_modulus_setter,"runtime","%primary-modulus-setter");
DEF(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(Yfind_getter,"boot","find-getter");
DEF(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
DEF(YruntimeYdel_key,"runtime","del-key");
EXT(Yobject_class,"boot","object-class");
DEF(YruntimeYPwith_monitor,"runtime","%with-monitor");
DEF(YruntimeYPbucket_depth_setter,"runtime","%bucket-depth-setter");
DEF(YruntimeYtE,"runtime","t=");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YLlstG,"boot","<lst>");
DEF(YruntimeYzeroQ,"runtime","zero?");
DEF(YruntimeYnxt_state,"runtime","nxt-state");
DEF(YruntimeYrange_check,"runtime","range-check");
EXT(Yfun_mets,"boot","fun-mets");
DEF(YruntimeYfab_table_vector,"runtime","fab-table-vector");
DEF(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
DEF(YruntimeYlen_setter,"runtime","len-setter");
EXT(YLfunG,"boot","<fun>");
DEF(YruntimeYdel_dups,"runtime","del-dups");
DEF(YruntimeYpick,"runtime","pick");
DEF(YruntimeYPcount_setter,"runtime","%count-setter");
DEF(YruntimeYport_guts,"runtime","port-guts");
DEF(YruntimeYdo_keyed,"runtime","do-keyed");
DEF(YruntimeYPbucket_setter,"runtime","%bucket-setter");
DEF(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
DEF(YruntimeYmap_keyed,"runtime","map-keyed");
DEF(YruntimeYPindex_setter,"runtime","%index-setter");
EXT(YmacrosYpair,"macros","pair");
DEF(YruntimeYnow_key,"runtime","now-key");
DEF(YruntimeYchoose_handler,"runtime","choose-handler");
DEF(YruntimeYalphabeticQ,"runtime","alphabetic?");
DEF(YruntimeYincongruent_method_error_method_setter,"runtime","incongruent-method-error-method-setter");
EXT(Yfab_gen,"boot","fab-gen");
DEF(YruntimeYall2Q,"runtime","all2?");
EXT(YLseqG,"boot","<seq>");
DEF(YruntimeYGE,"runtime",">=");
DEF(YruntimeYPprimary_modulus,"runtime","%primary-modulus");
DEF(YruntimeY_,"runtime","-");
DEF(YruntimeYtA,"runtime","t+");
DEF(YruntimeYbuf_len,"runtime","buf-len");
DEF(YruntimeYPvector_setter,"runtime","%vector-setter");
DEF(YruntimeYnow_elt,"runtime","now-elt");
DEF(YruntimeYinteger_Gchar,"runtime","integer->char");
DEF(YruntimeYread_char,"runtime","read-char");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
DEF(YruntimeYas_copy,"runtime","as-copy");
DEF(YruntimeYmemQ,"runtime","mem?");
DEF(YruntimeYtable_shrink_threshold_setter,"runtime","table-shrink-threshold-setter");
DEF(YruntimeYhandler_condition_type,"runtime","handler-condition-type");
EXT(Yslot_getter,"boot","slot-getter");
DEF(YruntimeYLhandlerG,"runtime","<handler>");
DEF(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
DEF(YruntimeYpeek_char,"runtime","peek-char");
DEF(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
DEF(YruntimeYG,"runtime",">");
EXT(YLcolG,"boot","<col>");
DEF(YruntimeYallQ,"runtime","all?");
DEF(YruntimeY2nd,"runtime","2nd");
DEF(YruntimeYrange_error,"runtime","range-error");
DEF(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
DEF(YruntimeYLstring_portG,"runtime","<string-port>");
DEF(YruntimeYPgc_state_setter,"runtime","%gc-state-setter");
EXT(YPvnul,"boot","%vnul");
DEF(YruntimeYNEE,"runtime","~==");
DEF(YruntimeYhandler_test_setter,"runtime","handler-test-setter");
DEF(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
DEF(YruntimeYround,"runtime","round");
DEF(YruntimeYcondition_arguments_setter,"runtime","condition-arguments-setter");
DEF(YruntimeYPindex,"runtime","%index");
DEF(YruntimeYfrom_by,"runtime","from-by");
DEF(YruntimeYdescribe_handler,"runtime","describe-handler");
DEF(YruntimeYLhandler_infoG,"runtime","<handler-info>");
DEF(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
DEF(YruntimeYlogbitQ,"runtime","logbit?");
DEF(YruntimeYassocs_keys,"runtime","assocs-keys");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
DEF(YruntimeYclrX,"runtime","clr!");
DEF(YruntimeYeof_objectQ,"runtime","eof-object?");
DEF(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(Ynul,"boot","nul");
DEF(YruntimeYtrace,"runtime","trace");
DEF(YruntimeYL,"runtime","<");
EXT(YLlocG,"boot","<loc>");
EXT(Yfab_class,"boot","fab-class");
DEF(YruntimeYfin_stateQ,"runtime","fin-state?");
DEF(YruntimeYfirst_then,"runtime","first-then");
DEF(YruntimeYPgc_state,"runtime","%gc-state");
DEF(YruntimeYbuf_len_setter,"runtime","buf-len-setter");
DEF(YruntimeYdel,"runtime","del");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YLsigG,"boot","<sig>");
DEF(YruntimeYlist,"runtime","list");
EXT(Ytype_object,"boot","type-object");
EXT(Yhead_setter,"boot","head-setter");
DEF(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
DEF(YruntimeYLsimple_table_vectorG,"runtime","<simple-table-vector>");
DEF(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
DEF(YruntimeYini_state,"runtime","ini-state");
DEF(YruntimeYPdata,"runtime","%data");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
DEF(YruntimeYfrom_above,"runtime","from-above");
DEF(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YLtupG,"boot","<tup>");
DEF(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(Yhead,"boot","head");
EXT(Yerror,"boot","error");
DEF(YruntimeYPbucket_depth,"runtime","%bucket-depth");
DEF(YruntimeYnegQ,"runtime","neg?");
DEF(YruntimeYPsecondary_modulus,"runtime","%secondary-modulus");
DEF(YruntimeYPvacated,"runtime","%vacated");
DEF(YruntimeYlen,"runtime","len");
DEF(YruntimeYLmapG,"runtime","<map>");
DEF(YruntimeYhandler_activeQ,"runtime","handler-active?");
DEF(YruntimeYidentity,"runtime","identity");
EXT(YmacrosYvar_type,"macros","var-type");
DEF(YruntimeYstr_to_num,"runtime","str-to-num");
DEF(YruntimeYclose_output_port,"runtime","close-output-port");
DEF(YruntimeYassocq,"runtime","assocq");
DEF(YruntimeYsub,"runtime","sub");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(Yslot_init,"boot","slot-init");
DEF(YruntimeYboot_symbols,"runtime","boot-symbols");
EXT(YLintG,"boot","<int>");
DEF(YruntimeYrange_from,"runtime","range-from");
DEF(YruntimeYhandler_function,"runtime","handler-function");
DEF(YruntimeYrange_below_setter,"runtime","range-below-setter");
DEF(YruntimeYLassocG,"runtime","<assoc>");
DEF(YruntimeYany2Q,"runtime","any2?");
DEF(YruntimeYrange_above_setter,"runtime","range-above-setter");
DEF(YruntimeYrange_by_setter,"runtime","range-by-setter");
DEF(YruntimeYvals_to_str,"runtime","vals-to-str");
DEF(YruntimeYnumericQ,"runtime","numeric?");
DEF(YruntimeYsig,"runtime","sig");
DEF(YruntimeYto_str,"runtime","to-str");
DEF(YruntimeYin,"runtime","in");
DEF(YruntimeYkeys,"runtime","keys");
EXT(Ysym_name,"boot","sym-name");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YLnumG,"boot","<num>");
DEF(YruntimeYanyQ,"runtime","any?");
DEF(YruntimeYdo_key_vals,"runtime","do-key-vals");
DEF(YruntimeYhandler_info_arguments_setter,"runtime","handler-info-arguments-setter");
EXT(Yclass_direct_children,"boot","class-direct-children");
DEF(YruntimeYTprint_baseT,"runtime","*print-base*");
DEF(YruntimeYhandler_condition_type_setter,"runtime","handler-condition-type-setter");
DEF(YruntimeYtable_growth_threshold_setter,"runtime","table-growth-threshold-setter");
DEF(YruntimeYgrow_table,"runtime","grow-table");
EXT(YmacrosYnapply,"macros","napply");
DEF(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
DEF(YruntimeYfill,"runtime","fill");
EXT(Yfun_value,"boot","fun-value");
DEF(YruntimeYhash_moduli,"runtime","hash-moduli");
DEF(YruntimeYrot,"runtime","rot");
DEF(YruntimeYLbufG,"runtime","<buf>");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
DEF(YruntimeYevenQ,"runtime","even?");
DEF(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YmacrosYvar_name,"macros","var-name");
DEF(YruntimeYTcurrent_handlersT,"runtime","*current-handlers*");
DEF(YruntimeYS,"runtime","/");
DEF(YruntimeYid_hash,"runtime","id-hash");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
DEF(YruntimeYalter,"runtime","alter");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLchrG,"boot","<chr>");
DEF(YruntimeYdefault_handler,"runtime","default-handler");
DEF(YruntimeY3rd,"runtime","3rd");
DEF(YruntimeYLconditionG,"runtime","<condition>");
DEF(YruntimeYtruncate,"runtime","truncate");
DEF(YruntimeYrange_from_setter,"runtime","range-from-setter");
DEF(YruntimeYrange_above,"runtime","range-above");
DEF(YruntimeYmin,"runtime","min");
DEF(YruntimeYbooted_fab_sym,"runtime","booted-fab-sym");
EXT(Yadd_slot,"boot","add-slot");
DEF(YruntimeYassocs_keys_setter,"runtime","assocs-keys-setter");
DEF(YruntimeYassoc,"runtime","assoc");
DEF(YruntimeYvec,"runtime","vec");
DEF(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
DEF(YruntimeYassocs_vals,"runtime","assocs-vals");
DEF(YruntimeYcondition_message,"runtime","condition-message");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_109);
DEFLIT(lit_460);
DEFLIT(lit_302);
DEFLIT(lit_75);
DEFLIT(lit_422);
DEFLIT(lit_76);
DEFLIT(lit_509);
DEFLIT(lit_349);
DEFLIT(lit_18);
DEFLIT(lit_576);
DEFLIT(lit_186);
DEFLIT(lit_474);
DEFLIT(lit_475);
DEFLIT(lit_484);
DEFLIT(lit_73);
DEFLIT(lit_224);
DEFLIT(lit_497);
DEFLIT(lit_324);
DEFLIT(lit_136);
DEFLIT(lit_558);
DEFLIT(lit_505);
DEFLIT(lit_15);
DEFLIT(lit_421);
DEFLIT(lit_323);
DEFLIT(lit_90);
DEFLIT(lit_408);
DEFLIT(lit_256);
DEFLIT(lit_563);
DEFLIT(lit_463);
DEFLIT(lit_63);
DEFLIT(lit_464);
DEFLIT(lit_56);
DEFLIT(lit_309);
DEFLIT(lit_466);
DEFLIT(lit_247);
DEFLIT(lit_462);
DEFLIT(lit_459);
DEFLIT(lit_298);
DEFLIT(lit_67);
DEFLIT(lit_30);
DEFLIT(lit_267);
DEFLIT(lit_339);
DEFLIT(lit_479);
DEFLIT(lit_335);
DEFLIT(lit_271);
DEFLIT(lit_184);
DEFLIT(lit_567);
DEFLIT(lit_455);
DEFLIT(lit_83);
DEFLIT(lit_561);
DEFLIT(lit_260);
DEFLIT(lit_126);
DEFLIT(lit_192);
DEFLIT(lit_507);
DEFLIT(lit_80);
DEFLIT(lit_407);
DEFLIT(lit_495);
DEFLIT(lit_288);
DEFLIT(lit_153);
DEFLIT(lit_221);
DEFLIT(lit_498);
DEFLIT(lit_515);
DEFLIT(lit_66);
DEFLIT(lit_535);
DEFLIT(lit_72);
DEFLIT(lit_566);
DEFLIT(lit_375);
DEFLIT(lit_97);
DEFLIT(lit_338);
DEFLIT(lit_454);
DEFLIT(lit_284);
DEFLIT(lit_253);
DEFLIT(lit_69);
DEFLIT(lit_125);
DEFLIT(lit_508);
DEFLIT(lit_386);
DEFLIT(lit_79);
DEFLIT(lit_234);
DEFLIT(lit_274);
DEFLIT(lit_149);
DEFLIT(lit_382);
DEFLIT(lit_163);
DEFLIT(lit_251);
DEFLIT(lit_577);
DEFLIT(lit_291);
DEFLIT(lit_456);
DEFLIT(lit_326);
DEFLIT(lit_155);
DEFLIT(lit_426);
DEFLIT(lit_442);
DEFLIT(lit_138);
DEFLIT(lit_111);
DEFLIT(lit_283);
DEFLIT(lit_439);
DEFLIT(lit_481);
DEFLIT(lit_124);
DEFLIT(lit_81);
DEFLIT(lit_570);
DEFLIT(lit_395);
DEFLIT(lit_337);
DEFLIT(lit_21);
DEFLIT(lit_230);
DEFLIT(lit_258);
DEFLIT(lit_216);
DEFLIT(lit_78);
DEFLIT(lit_539);
DEFLIT(lit_434);
DEFLIT(lit_342);
DEFLIT(lit_14);
DEFLIT(lit_360);
DEFLIT(lit_513);
DEFLIT(lit_571);
DEFLIT(lit_355);
DEFLIT(lit_499);
DEFLIT(lit_353);
DEFLIT(lit_316);
DEFLIT(lit_112);
DEFLIT(lit_317);
DEFLIT(lit_24);
DEFLIT(lit_110);
DEFLIT(lit_123);
DEFLIT(lit_131);
DEFLIT(lit_544);
DEFLIT(lit_115);
DEFLIT(lit_116);
DEFLIT(lit_233);
DEFLIT(lit_259);
DEFLIT(lit_128);
DEFLIT(lit_41);
DEFLIT(lit_82);
DEFLIT(lit_483);
DEFLIT(lit_228);
DEFLIT(lit_369);
DEFLIT(lit_289);
DEFLIT(lit_373);
DEFLIT(lit_318);
DEFLIT(lit_46);
DEFLIT(lit_91);
DEFLIT(lit_249);
DEFLIT(lit_361);
DEFLIT(lit_450);
DEFLIT(lit_533);
DEFLIT(lit_279);
DEFLIT(lit_568);
DEFLIT(lit_183);
DEFLIT(lit_114);
DEFLIT(lit_99);
DEFLIT(lit_232);
DEFLIT(lit_287);
DEFLIT(lit_101);
DEFLIT(lit_173);
DEFLIT(lit_453);
DEFLIT(lit_84);
DEFLIT(lit_236);
DEFLIT(lit_562);
DEFLIT(lit_3);
DEFLIT(lit_12);
DEFLIT(lit_68);
DEFLIT(lit_38);
DEFLIT(lit_214);
DEFLIT(lit_377);
DEFLIT(lit_491);
DEFLIT(lit_191);
DEFLIT(lit_351);
DEFLIT(lit_392);
DEFLIT(lit_134);
DEFLIT(lit_167);
DEFLIT(lit_461);
DEFLIT(lit_448);
DEFLIT(lit_307);
DEFLIT(lit_120);
DEFLIT(lit_40);
DEFLIT(lit_113);
DEFLIT(lit_19);
DEFLIT(lit_74);
DEFLIT(lit_231);
DEFLIT(lit_433);
DEFLIT(lit_583);
DEFLIT(lit_85);
DEFLIT(lit_332);
DEFLIT(lit_480);
DEFLIT(lit_235);
DEFLIT(lit_28);
DEFLIT(lit_340);
DEFLIT(lit_569);
DEFLIT(lit_447);
DEFLIT(lit_119);
DEFLIT(lit_502);
DEFLIT(lit_445);
DEFLIT(lit_503);
DEFLIT(lit_176);
DEFLIT(lit_292);
DEFLIT(lit_193);
DEFLIT(lit_181);
DEFLIT(lit_36);
DEFLIT(lit_13);
DEFLIT(lit_261);
DEFLIT(lit_215);
DEFLIT(lit_71);
DEFLIT(lit_378);
DEFLIT(lit_541);
DEFLIT(lit_580);
DEFLIT(lit_293);
DEFLIT(lit_10);
DEFLIT(lit_86);
DEFLIT(lit_213);
DEFLIT(lit_222);
DEFLIT(lit_195);
DEFLIT(lit_396);
DEFLIT(lit_178);
DEFLIT(lit_202);
DEFLIT(lit_356);
DEFLIT(lit_175);
DEFLIT(lit_53);
DEFLIT(lit_330);
DEFLIT(lit_540);
DEFLIT(lit_363);
DEFLIT(lit_102);
DEFLIT(lit_174);
DEFLIT(lit_60);
DEFLIT(lit_43);
DEFLIT(lit_246);
DEFLIT(lit_49);
DEFLIT(lit_177);
DEFLIT(lit_572);
DEFLIT(lit_420);
DEFLIT(lit_35);
DEFLIT(lit_217);
DEFLIT(lit_239);
DEFLIT(lit_415);
DEFLIT(lit_220);
DEFLIT(lit_423);
DEFLIT(lit_514);
DEFLIT(lit_446);
DEFLIT(lit_194);
DEFLIT(lit_308);
DEFLIT(lit_362);
DEFLIT(lit_179);
DEFLIT(lit_468);
DEFLIT(lit_530);
DEFLIT(lit_8);
DEFLIT(lit_430);
DEFLIT(lit_257);
DEFLIT(lit_182);
DEFLIT(lit_87);
DEFLIT(lit_103);
DEFLIT(lit_419);
DEFLIT(lit_306);
DEFLIT(lit_401);
DEFLIT(lit_494);
DEFLIT(lit_402);
DEFLIT(lit_431);
DEFLIT(lit_50);
DEFLIT(lit_269);
DEFLIT(lit_238);
DEFLIT(lit_536);
DEFLIT(lit_384);
DEFLIT(lit_451);
DEFLIT(lit_255);
DEFLIT(lit_219);
DEFLIT(lit_367);
DEFLIT(lit_237);
DEFLIT(lit_142);
DEFLIT(lit_334);
DEFLIT(lit_418);
DEFLIT(lit_47);
DEFLIT(lit_493);
DEFLIT(lit_531);
DEFLIT(lit_428);
DEFLIT(lit_435);
DEFLIT(lit_104);
DEFLIT(lit_389);
DEFLIT(lit_390);
DEFLIT(lit_538);
DEFLIT(lit_343);
DEFLIT(lit_34);
DEFLIT(lit_387);
DEFLIT(lit_296);
DEFLIT(lit_270);
DEFLIT(lit_383);
DEFLIT(lit_417);
DEFLIT(lit_506);
DEFLIT(lit_379);
DEFLIT(lit_331);
DEFLIT(lit_200);
DEFLIT(lit_218);
DEFLIT(lit_141);
DEFLIT(lit_275);
DEFLIT(lit_381);
DEFLIT(lit_5);
DEFLIT(lit_205);
DEFLIT(lit_348);
DEFLIT(lit_526);
DEFLIT(lit_398);
DEFLIT(lit_254);
DEFLIT(lit_209);
DEFLIT(lit_416);
DEFLIT(lit_44);
DEFLIT(lit_404);
DEFLIT(lit_137);
DEFLIT(lit_427);
DEFLIT(lit_370);
DEFLIT(lit_313);
DEFLIT(lit_366);
DEFLIT(lit_197);
DEFLIT(lit_357);
DEFLIT(lit_33);
DEFLIT(lit_127);
DEFLIT(lit_305);
DEFLIT(lit_282);
DEFLIT(lit_352);
DEFLIT(lit_354);
DEFLIT(lit_504);
DEFLIT(lit_57);
DEFLIT(lit_180);
DEFLIT(lit_122);
DEFLIT(lit_472);
DEFLIT(lit_23);
DEFLIT(lit_478);
DEFLIT(lit_549);
DEFLIT(lit_146);
DEFLIT(lit_519);
DEFLIT(lit_280);
DEFLIT(lit_100);
DEFLIT(lit_425);
DEFLIT(lit_473);
DEFLIT(lit_27);
DEFLIT(lit_329);
DEFLIT(lit_196);
DEFLIT(lit_403);
DEFLIT(lit_471);
DEFLIT(lit_548);
DEFLIT(lit_414);
DEFLIT(lit_121);
DEFLIT(lit_281);
DEFLIT(lit_272);
DEFLIT(lit_364);
DEFLIT(lit_529);
DEFLIT(lit_432);
DEFLIT(lit_443);
DEFLIT(lit_347);
DEFLIT(lit_365);
DEFLIT(lit_557);
DEFLIT(lit_252);
DEFLIT(lit_61);
DEFLIT(lit_545);
DEFLIT(lit_564);
DEFLIT(lit_98);
DEFLIT(lit_286);
DEFLIT(lit_42);
DEFLIT(lit_374);
DEFLIT(lit_551);
DEFLIT(lit_413);
DEFLIT(lit_145);
DEFLIT(lit_394);
DEFLIT(lit_552);
DEFLIT(lit_7);
DEFLIT(lit_546);
DEFLIT(lit_88);
DEFLIT(lit_376);
DEFLIT(lit_265);
DEFLIT(lit_534);
DEFLIT(lit_573);
DEFLIT(lit_208);
DEFLIT(lit_341);
DEFLIT(lit_346);
DEFLIT(lit_465);
DEFLIT(lit_130);
DEFLIT(lit_285);
DEFLIT(lit_242);
DEFLIT(lit_107);
DEFLIT(lit_241);
DEFLIT(lit_336);
DEFLIT(lit_245);
DEFLIT(lit_477);
DEFLIT(lit_188);
DEFLIT(lit_223);
DEFLIT(lit_560);
DEFLIT(lit_187);
DEFLIT(lit_438);
DEFLIT(lit_436);
DEFLIT(lit_556);
DEFLIT(lit_248);
DEFLIT(lit_268);
DEFLIT(lit_64);
DEFLIT(lit_212);
DEFLIT(lit_385);
DEFLIT(lit_144);
DEFLIT(lit_96);
DEFLIT(lit_6);
DEFLIT(lit_553);
DEFLIT(lit_172);
DEFLIT(lit_54);
DEFLIT(lit_490);
DEFLIT(lit_321);
DEFLIT(lit_543);
DEFLIT(lit_31);
DEFLIT(lit_22);
DEFLIT(lit_166);
DEFLIT(lit_278);
DEFLIT(lit_266);
DEFLIT(lit_452);
DEFLIT(lit_344);
DEFLIT(lit_117);
DEFLIT(lit_469);
DEFLIT(lit_397);
DEFLIT(lit_523);
DEFLIT(lit_524);
DEFLIT(lit_189);
DEFLIT(lit_95);
DEFLIT(lit_391);
DEFLIT(lit_525);
DEFLIT(lit_400);
DEFLIT(lit_547);
DEFLIT(lit_388);
DEFLIT(lit_399);
DEFLIT(lit_207);
DEFLIT(lit_412);
DEFLIT(lit_470);
DEFLIT(lit_143);
DEFLIT(lit_520);
DEFLIT(lit_521);
DEFLIT(lit_555);
DEFLIT(lit_52);
DEFLIT(lit_171);
DEFLIT(lit_210);
DEFLIT(lit_320);
DEFLIT(lit_449);
DEFLIT(lit_206);
DEFLIT(lit_440);
DEFLIT(lit_457);
DEFLIT(lit_26);
DEFLIT(lit_476);
DEFLIT(lit_537);
DEFLIT(lit_501);
DEFLIT(lit_4);
DEFLIT(lit_51);
DEFLIT(lit_458);
DEFLIT(lit_405);
DEFLIT(lit_411);
DEFLIT(lit_185);
DEFLIT(lit_190);
DEFLIT(lit_371);
DEFLIT(lit_304);
DEFLIT(lit_94);
DEFLIT(lit_132);
DEFLIT(lit_516);
DEFLIT(lit_133);
DEFLIT(lit_312);
DEFLIT(lit_482);
DEFLIT(lit_106);
DEFLIT(lit_441);
DEFLIT(lit_511);
DEFLIT(lit_393);
DEFLIT(lit_467);
DEFLIT(lit_527);
DEFLIT(lit_512);
DEFLIT(lit_59);
DEFLIT(lit_264);
DEFLIT(lit_250);
DEFLIT(lit_325);
DEFLIT(lit_372);
DEFLIT(lit_148);
DEFLIT(lit_500);
DEFLIT(lit_170);
DEFLIT(lit_243);
DEFLIT(lit_262);
DEFLIT(lit_108);
DEFLIT(lit_319);
DEFLIT(lit_165);
DEFLIT(lit_160);
DEFLIT(lit_32);
DEFLIT(lit_203);
DEFLIT(lit_93);
DEFLIT(lit_487);
DEFLIT(lit_380);
DEFLIT(lit_263);
DEFLIT(lit_550);
DEFLIT(lit_559);
DEFLIT(lit_410);
DEFLIT(lit_201);
DEFLIT(lit_48);
DEFLIT(lit_315);
DEFLIT(lit_1);
DEFLIT(lit_582);
DEFLIT(lit_204);
DEFLIT(lit_311);
DEFLIT(lit_198);
DEFLIT(lit_429);
DEFLIT(lit_62);
DEFLIT(lit_147);
DEFLIT(lit_314);
DEFLIT(lit_496);
DEFLIT(lit_310);
DEFLIT(lit_225);
DEFLIT(lit_169);
DEFLIT(lit_492);
DEFLIT(lit_488);
DEFLIT(lit_154);
DEFLIT(lit_489);
DEFLIT(lit_528);
DEFLIT(lit_152);
DEFLIT(lit_409);
DEFLIT(lit_350);
DEFLIT(lit_29);
DEFLIT(lit_92);
DEFLIT(lit_229);
DEFLIT(lit_437);
DEFLIT(lit_444);
DEFLIT(lit_328);
DEFLIT(lit_45);
DEFLIT(lit_240);
DEFLIT(lit_532);
DEFLIT(lit_554);
DEFLIT(lit_16);
DEFLIT(lit_581);
DEFLIT(lit_542);
DEFLIT(lit_290);
DEFLIT(lit_294);
DEFLIT(lit_151);
DEFLIT(lit_135);
DEFLIT(lit_406);
DEFLIT(lit_17);
DEFLIT(lit_486);
DEFLIT(lit_299);
DEFLIT(lit_322);
DEFLIT(lit_168);
DEFLIT(lit_303);
DEFLIT(lit_244);
DEFLIT(lit_65);
DEFLIT(lit_164);
DEFLIT(lit_162);
DEFLIT(lit_37);
DEFLIT(lit_58);
DEFLIT(lit_159);
DEFLIT(lit_70);
DEFLIT(lit_510);
DEFLIT(lit_297);
DEFLIT(lit_345);
DEFLIT(lit_140);
DEFLIT(lit_333);
DEFLIT(lit_227);
DEFLIT(lit_20);
DEFLIT(lit_139);
DEFLIT(lit_276);
DEFLIT(lit_150);
DEFLIT(lit_129);
DEFLIT(lit_118);
DEFLIT(lit_518);
DEFLIT(lit_565);
DEFLIT(lit_0);
DEFLIT(lit_517);
DEFLIT(lit_2);
DEFLIT(lit_161);
DEFLIT(lit_522);
DEFLIT(lit_158);
DEFLIT(lit_575);
DEFLIT(lit_39);
DEFLIT(lit_277);
DEFLIT(lit_578);
DEFLIT(lit_301);
DEFLIT(lit_11);
DEFLIT(lit_226);
DEFLIT(lit_9);
DEFLIT(lit_574);
DEFLIT(lit_156);
DEFLIT(lit_105);
DEFLIT(lit_359);
DEFLIT(lit_211);
DEFLIT(lit_358);
DEFLIT(lit_77);
DEFLIT(lit_424);
DEFLIT(lit_295);
DEFLIT(lit_485);
DEFLIT(lit_300);
DEFLIT(lit_25);
DEFLIT(lit_55);
DEFLIT(lit_579);
DEFLIT(lit_199);
DEFLIT(lit_327);
DEFLIT(lit_89);
DEFLIT(lit_273);
DEFLIT(lit_157);
DEFLIT(lit_368);

/* FUNCTIONS: */

LOCFOR(fun_loop1_0);
LOCFOR(fun_loop2_1);
FUNFOR(YmacrosYnapply);
FUNFOR(YmacrosYmatch_empty_list);
FUNFOR(YmacrosYmatch_unquote);
FUNFOR(YmacrosYmatch_atom);
FUNFOR(YmacrosYmatch_sublist);
LOCFOR(fun_7);
LOCFOR(fun_make_sym_8);
LOCFOR(fun_gensym_9);
LOCFOR(fun_make_setter_name_10);
LOCFOR(fun_var_name_11);
LOCFOR(fun_var_name_12);
LOCFOR(fun_var_type_13);
LOCFOR(fun_var_type_14);
FUNFOR(YruntimeYtA);
FUNFOR(YruntimeYtE);
FUNFOR(YruntimeYtL);
FUNFOR(YruntimeYfalse_or);
FUNFOR(YruntimeYnulQ);
LOCFOR(fun_nyi_error_20);
LOCFOR(fun_to_str_21);
FUNFOR(YruntimeYaddress_of);
LOCFOR(fun_to_str_23);
LOCFOR(fun_to_str_24);
LOCFOR(fun_as_25);
LOCFOR(fun_EE_26);
LOCFOR(fun_E_27);
LOCFOR(fun_NE_28);
LOCFOR(fun_NEE_29);
LOCFOR(fun_G_30);
LOCFOR(fun_LE_31);
LOCFOR(fun_GE_32);
LOCFOR(fun_min_33);
LOCFOR(fun_max_34);
LOCFOR(fun_as_35);
LOCFOR(fun_as_36);
LOCFOR(fun_L_37);
LOCFOR(fun_EE_38);
LOCFOR(fun_lowercaseQ_39);
LOCFOR(fun_uppercaseQ_40);
LOCFOR(fun_as_lowercase_41);
LOCFOR(fun_as_uppercase_42);
LOCFOR(fun_to_str_43);
LOCFOR(fun_alphabeticQ_44);
LOCFOR(fun_numericQ_45);
LOCFOR(fun_to_digit_46);
LOCFOR(fun_contagious_call_47);
LOCFOR(fun_L_48);
LOCFOR(fun_A_49);
LOCFOR(fun___50);
LOCFOR(fun_T_51);
LOCFOR(fun_floor_52);
LOCFOR(fun_ceiling_53);
LOCFOR(fun_round_54);
LOCFOR(fun_truncate_55);
LOCFOR(fun_floorS_56);
LOCFOR(fun_ceilingS_57);
LOCFOR(fun_roundS_58);
LOCFOR(fun_truncateS_59);
LOCFOR(fun_modulo_60);
LOCFOR(fun_remainder_61);
LOCFOR(fun_posQ_62);
LOCFOR(fun_zeroQ_63);
LOCFOR(fun_negQ_64);
LOCFOR(fun_neg_65);
LOCFOR(fun_abs_66);
LOCFOR(fun_to_str_67);
LOCFOR(fun_match_68);
LOCFOR(fun_failXX_69);
LOCFOR(fun_70);
LOCFOR(fun_match_digitX_71);
LOCFOR(fun_looking_at_alphabeticQ_72);
LOCFOR(fun_loop_73);
LOCFOR(fun_str_to_num_74);
LOCFOR(fun_contagious_type_75);
LOCFOR(fun_contagious_type_76);
LOCFOR(fun_contagious_type_77);
LOCFOR(fun_contagious_type_78);
LOCFOR(fun_EE_79);
LOCFOR(fun_L_80);
LOCFOR(fun_A_81);
LOCFOR(fun___82);
LOCFOR(fun_T_83);
LOCFOR(fun_floor_84);
LOCFOR(fun_ceiling_85);
LOCFOR(fun_round_86);
LOCFOR(fun_truncate_87);
LOCFOR(fun_truncateS_88);
LOCFOR(fun_modulo_89);
LOCFOR(fun_logior_90);
LOCFOR(fun_logxor_91);
LOCFOR(fun_logand_92);
LOCFOR(fun_lognot_93);
LOCFOR(fun_logbitQ_94);
LOCFOR(fun_evenQ_95);
LOCFOR(fun_oddQ_96);
LOCFOR(fun_ash_97);
LOCFOR(fun_lsh_98);
LOCFOR(fun_search_99);
LOCFOR(fun_power_of_two_ceiling_100);
LOCFOR(fun_decode_radix_option_101);
LOCFOR(fun_loop_102);
LOCFOR(fun_num_to_str_103);
FUNFOR(YruntimeYflo_bits);
LOCFOR(fun_as_105);
LOCFOR(fun_EE_106);
LOCFOR(fun_L_107);
LOCFOR(fun_A_108);
LOCFOR(fun___109);
LOCFOR(fun_T_110);
LOCFOR(fun_S_111);
LOCFOR(fun_truncateS_112);
LOCFOR(fun_loop_113);
LOCFOR(fun_num_to_str_114);
LOCFOR(fun_fabs_115);
LOCFOR(fun_emptyQ_116);
LOCFOR(fun_empty_117);
LOCFOR(fun_default_118);
LOCFOR(fun_as_copy_119);
LOCFOR(fun_eq_120);
LOCFOR(fun_E_121);
LOCFOR(fun_fab_122);
LOCFOR(fun_as_123);
LOCFOR(fun_con_124);
LOCFOR(fun_keys_125);
LOCFOR(fun_rep_126);
LOCFOR(fun_do_key_vals_127);
LOCFOR(fun_count_128);
LOCFOR(fun_len_129);
LOCFOR(fun_in_130);
LOCFOR(fun_alter_131);
LOCFOR(fun_in_132);
LOCFOR(fun_fill_133);
LOCFOR(fun_fnd_134);
LOCFOR(fun_anyQ_135);
LOCFOR(fun_fnd_136);
LOCFOR(fun_any2Q_137);
LOCFOR(fun_fnd_138);
LOCFOR(fun_allQ_139);
LOCFOR(fun_fnd_140);
LOCFOR(fun_all2Q_141);
LOCFOR(fun_red_142);
LOCFOR(fun_reduce_143);
LOCFOR(fun_red_144);
LOCFOR(fun_reduceA_145);
LOCFOR(fun_fnd_146);
LOCFOR(fun_find_key_147);
LOCFOR(fun_con_148);
LOCFOR(fun_map_149);
LOCFOR(fun_lop_150);
LOCFOR(fun_do_151);
LOCFOR(fun_con_152);
LOCFOR(fun_map2_153);
LOCFOR(fun_lop_154);
LOCFOR(fun_do2_155);
LOCFOR(fun_lop_156);
LOCFOR(fun_do3_157);
LOCFOR(fun_con_158);
LOCFOR(fun_map_keyed_159);
LOCFOR(fun_lop_160);
LOCFOR(fun_do_keyed_161);
LOCFOR(fun_162);
LOCFOR(fun_memQ_163);
LOCFOR(fun_164);
LOCFOR(fun_fab_map_165);
LOCFOR(fun_assocs_test_166);
LOCFOR(fun_assocs_test_setter_167);
LOCFOR(fun_168);
LOCFOR(fun_assocs_keys_169);
LOCFOR(fun_assocs_keys_setter_170);
LOCFOR(fun_171);
LOCFOR(fun_assocs_vals_172);
LOCFOR(fun_assocs_vals_setter_173);
LOCFOR(fun_174);
LOCFOR(fun_fab_175);
LOCFOR(fun_len_176);
LOCFOR(fun_fnd_177);
LOCFOR(fun_elt_178);
LOCFOR(fun_fnd_179);
LOCFOR(fun_elt_setter_180);
LOCFOR(fun_as_181);
LOCFOR(fun_keys_182);
LOCFOR(fun_in_183);
LOCFOR(fun_alter_184);
FUNFOR(YruntimeYrange_error);
FUNFOR(YruntimeYrange_check);
LOCFOR(fun_1st_187);
LOCFOR(fun_2nd_188);
LOCFOR(fun_3rd_189);
LOCFOR(fun_last_190);
LOCFOR(fun_add_new_191);
LOCFOR(fun_addX_192);
LOCFOR(fun_pos_193);
LOCFOR(fun_in_194);
LOCFOR(fun_into_195);
LOCFOR(fun_in_196);
LOCFOR(fun_find_197);
LOCFOR(fun_onto_198);
LOCFOR(fun_skip_199);
LOCFOR(fun_insert_200);
LOCFOR(fun_copy_201);
LOCFOR(fun_sub_setter_202);
LOCFOR(fun_con_203);
LOCFOR(fun_rev_204);
LOCFOR(fun_con_y_205);
LOCFOR(fun_con_x_206);
LOCFOR(fun_cat2_207);
LOCFOR(fun_cat_208);
LOCFOR(fun_catX_209);
LOCFOR(fun_find_tail_210);
LOCFOR(fun_211);
LOCFOR(fun_x_1209_212);
LOCFOR(fun_catX_213);
LOCFOR(fun_con_x_214);
LOCFOR(fun_sub_215);
LOCFOR(fun_con_216);
LOCFOR(fun_pick_217);
LOCFOR(fun_218);
LOCFOR(fun_del_dups_219);
LOCFOR(fun_220);
LOCFOR(fun_del_221);
LOCFOR(fun_222);
LOCFOR(fun_vals_to_str_223);
LOCFOR(fun_to_str_224);
LOCFOR(fun_pair_225);
LOCFOR(fun_empty_226);
LOCFOR(fun_emptyQ_227);
LOCFOR(fun_fab_228);
LOCFOR(fun_fab_229);
LOCFOR(fun_as_230);
LOCFOR(fun_build_231);
LOCFOR(fun_fabs_232);
LOCFOR(fun_lst_233);
LOCFOR(fun_sum_234);
LOCFOR(fun_len_235);
LOCFOR(fun_fnd_236);
LOCFOR(fun_elt_237);
LOCFOR(fun_fnd_238);
LOCFOR(fun_elt_setter_239);
LOCFOR(fun_add_240);
LOCFOR(fun_push_241);
LOCFOR(fun_pop_242);
LOCFOR(fun_loop_243);
LOCFOR(fun_revX_244);
LOCFOR(fun_assq_245);
LOCFOR(fun_assqn_246);
LOCFOR(fun_fnd_247);
LOCFOR(fun_last_248);
LOCFOR(fun_ini_state_249);
LOCFOR(fun_fin_stateQ_250);
LOCFOR(fun_nxt_state_251);
LOCFOR(fun_now_elt_252);
LOCFOR(fun_now_elt_setter_253);
LOCFOR(fun_fnd_254);
LOCFOR(fun_now_key_255);
LOCFOR(fun_copy_state_256);
LOCFOR(fun_ini_state_257);
LOCFOR(fun_fin_stateQ_258);
LOCFOR(fun_nxt_state_259);
LOCFOR(fun_now_elt_260);
LOCFOR(fun_now_elt_setter_261);
LOCFOR(fun_now_key_262);
LOCFOR(fun_copy_state_263);
LOCFOR(fun_len_264);
LOCFOR(fun_low_elt_265);
LOCFOR(fun_elt_266);
LOCFOR(fun_to_str_267);
LOCFOR(fun_empty_268);
FUNFOR(YruntimeYvec);
LOCFOR(fun_as_270);
LOCFOR(fun_fab_271);
LOCFOR(fun_len_272);
LOCFOR(fun_low_elt_273);
LOCFOR(fun_low_elt_setter_274);
LOCFOR(fun_elt_275);
LOCFOR(fun_elt_setter_276);
LOCFOR(fun_to_str_277);
LOCFOR(fun_buf_len_278);
LOCFOR(fun_buf_len_setter_279);
LOCFOR(fun_280);
LOCFOR(fun_buf_dat_281);
LOCFOR(fun_buf_dat_setter_282);
LOCFOR(fun_283);
LOCFOR(fun_empty_284);
LOCFOR(fun_fab_285);
LOCFOR(fun_buf_286);
LOCFOR(fun_len_287);
LOCFOR(fun_fill_288);
LOCFOR(fun_len_setter_289);
LOCFOR(fun_low_elt_290);
LOCFOR(fun_low_elt_setter_291);
LOCFOR(fun_elt_292);
LOCFOR(fun_elt_setter_293);
LOCFOR(fun_addX_294);
LOCFOR(fun_push_lastX_295);
LOCFOR(fun_pop_lastX_296);
LOCFOR(fun_x_1215_297);
LOCFOR(fun_x_1212_298);
LOCFOR(fun_catX_299);
LOCFOR(fun_range_from_300);
LOCFOR(fun_range_from_setter_301);
LOCFOR(fun_302);
LOCFOR(fun_range_to_303);
LOCFOR(fun_range_to_setter_304);
LOCFOR(fun_305);
LOCFOR(fun_range_below_306);
LOCFOR(fun_range_below_setter_307);
LOCFOR(fun_308);
LOCFOR(fun_range_above_309);
LOCFOR(fun_range_above_setter_310);
LOCFOR(fun_311);
LOCFOR(fun_range_by_312);
LOCFOR(fun_range_by_setter_313);
LOCFOR(fun_314);
LOCFOR(fun_fab_315);
LOCFOR(fun_from_316);
LOCFOR(fun_from_by_317);
LOCFOR(fun_from_to_318);
LOCFOR(fun_from_to_by_319);
LOCFOR(fun_from_below_320);
LOCFOR(fun_from_below_by_321);
LOCFOR(fun_from_above_322);
LOCFOR(fun_from_above_by_323);
LOCFOR(fun_ini_state_324);
LOCFOR(fun_fin_stateQ_325);
LOCFOR(fun_nxt_state_326);
LOCFOR(fun_now_elt_327);
LOCFOR(fun_copy_state_328);
LOCFOR(fun_step_first_329);
LOCFOR(fun_step_first_setter_330);
LOCFOR(fun_331);
LOCFOR(fun_step_then_332);
LOCFOR(fun_step_then_setter_333);
LOCFOR(fun_334);
LOCFOR(fun_first_then_335);
LOCFOR(fun_ini_state_336);
LOCFOR(fun_fin_stateQ_337);
LOCFOR(fun_nxt_state_338);
LOCFOR(fun_now_elt_339);
LOCFOR(fun_copy_state_340);
LOCFOR(fun_assoc_key_341);
LOCFOR(fun_assoc_key_setter_342);
LOCFOR(fun_343);
LOCFOR(fun_assoc_value_344);
LOCFOR(fun_assoc_value_setter_345);
LOCFOR(fun_346);
FUNFOR(YruntimeYassoc);
LOCFOR(fun_assocq_348);
LOCFOR(fun_to_str_349);
LOCFOR(fun_empty_350);
LOCFOR(fun_default_351);
LOCFOR(fun_fab_352);
LOCFOR(fun_str_353);
LOCFOR(fun_len_354);
LOCFOR(fun_low_elt_355);
LOCFOR(fun_low_elt_setter_356);
LOCFOR(fun_elt_357);
LOCFOR(fun_elt_setter_358);
LOCFOR(fun_to_str_359);
LOCFOR(fun_add_360);
LOCFOR(fun_loop_361);
LOCFOR(fun_362);
LOCFOR(fun_ascii_Gchar_363);
LOCFOR(fun_char_Ginteger_364);
LOCFOR(fun_integer_Gchar_365);
LOCFOR(fun_loop_366);
LOCFOR(fun_loop_367);
LOCFOR(fun_char_Gascii_368);
LOCFOR(fun_as_369);
LOCFOR(fun_as_370);
LOCFOR(fun_L_371);
LOCFOR(fun_to_str_372);
LOCFOR(fun_identity_373);
LOCFOR(fun_374);
LOCFOR(fun_compose_375);
LOCFOR(fun_376);
LOCFOR(fun_rcurry_377);
LOCFOR(fun_378);
LOCFOR(fun_curry_379);
LOCFOR(fun_380);
LOCFOR(fun_always_381);
LOCFOR(fun_default_handler_382);
LOCFOR(fun_describe_condition_383);
LOCFOR(fun_default_handler_description_384);
LOCFOR(fun_build_condition_interactively_385);
LOCFOR(fun_condition_message_386);
LOCFOR(fun_condition_message_setter_387);
LOCFOR(fun_388);
LOCFOR(fun_condition_arguments_389);
LOCFOR(fun_condition_arguments_setter_390);
LOCFOR(fun_391);
LOCFOR(fun_describe_condition_392);
LOCFOR(fun_build_condition_interactively_393);
LOCFOR(fun_default_handler_394);
LOCFOR(fun_default_handler_description_395);
LOCFOR(fun_incongruent_method_error_generic_396);
LOCFOR(fun_incongruent_method_error_generic_setter_397);
LOCFOR(fun_398);
LOCFOR(fun_incongruent_method_error_method_399);
LOCFOR(fun_incongruent_method_error_method_setter_400);
LOCFOR(fun_401);
LOCFOR(fun_describe_condition_402);
LOCFOR(fun_default_handler_description_403);
LOCFOR(fun_describe_handler_404);
LOCFOR(fun_build_condition_for_handler_interactively_405);
LOCFOR(fun_handler_info_message_406);
LOCFOR(fun_handler_info_message_setter_407);
LOCFOR(fun_408);
LOCFOR(fun_handler_info_arguments_409);
LOCFOR(fun_handler_info_arguments_setter_410);
LOCFOR(fun_411);
LOCFOR(fun_describe_handler_412);
LOCFOR(fun_handler_condition_type_413);
LOCFOR(fun_handler_condition_type_setter_414);
LOCFOR(fun_415);
LOCFOR(fun_handler_info_416);
LOCFOR(fun_handler_info_setter_417);
LOCFOR(fun_418);
LOCFOR(fun_handler_test_419);
LOCFOR(fun_handler_test_setter_420);
LOCFOR(fun_421);
LOCFOR(fun_handler_function_422);
LOCFOR(fun_handler_function_setter_423);
LOCFOR(fun_424);
FUNFOR(YruntimeYmake_handler);
FUNFOR(YruntimeYhandler_activeQ);
FUNFOR(YruntimeYhandler_matchesQ);
LOCFOR(fun_428);
LOCFOR(fun_Uhandler_functionU_429);
LOCFOR(fun_430);
LOCFOR(fun_431);
LOCFOR(fun_432);
FUNFOR(YruntimeYPwith_monitor);
LOCFOR(fun_434);
FUNFOR(YruntimeYsignal_handler_list);
LOCFOR(fun_sig_436);
LOCFOR(fun_sig_437);
LOCFOR(fun_error_438);
LOCFOR(fun_error_439);
FUNFOR(Ywrong_number_arguments_error);
FUNFOR(Yunknown_function_error);
FUNFOR(Ytype_error);
FUNFOR(Yincongruent_method_error);
LOCFOR(fun_search_444);
FUNFOR(YruntimeYdo_handlers_of_type);
LOCFOR(fun_446);
FUNFOR(YruntimeYlist_handlers);
LOCFOR(fun_448);
LOCFOR(fun_search_449);
FUNFOR(YruntimeYinvoke_handler_interactively);
FUNFOR(YruntimeYchoose_handler);
FUNFOR(YruntimeYlocative_value);
FUNFOR(YruntimeYlocative_value_setter);
FUNFOR(YruntimeYapp_filename);
FUNFOR(YruntimeYapp_args);
LOCFOR(fun_port_handle_456);
LOCFOR(fun_port_handle_setter_457);
LOCFOR(fun_458);
LOCFOR(fun_open_input_file_459);
LOCFOR(fun_file_opening_error_460);
LOCFOR(fun_open_output_file_461);
LOCFOR(fun_close_input_port_462);
LOCFOR(fun_close_output_port_463);
LOCFOR(fun_464);
LOCFOR(fun_465);
LOCFOR(fun_call_with_input_file_466);
LOCFOR(fun_467);
LOCFOR(fun_468);
LOCFOR(fun_call_with_output_file_469);
LOCFOR(fun_eof_objectQ_470);
LOCFOR(fun_eof_objectQ_471);
LOCFOR(fun_eof_object_472);
LOCFOR(fun_read_char_473);
LOCFOR(fun_peek_char_474);
LOCFOR(fun_char_readyQ_475);
LOCFOR(fun_newline_476);
LOCFOR(fun_force_output_477);
LOCFOR(fun_write_char_478);
LOCFOR(fun_write_string_479);
LOCFOR(fun_port_guts_480);
LOCFOR(fun_port_guts_setter_481);
LOCFOR(fun_482);
LOCFOR(fun_port_contents_483);
LOCFOR(fun_port_index_484);
LOCFOR(fun_port_index_setter_485);
LOCFOR(fun_486);
LOCFOR(fun_call_with_string_input_port_487);
LOCFOR(fun_call_with_string_output_port_488);
LOCFOR(fun_peek_char_489);
LOCFOR(fun_read_char_490);
LOCFOR(fun_char_readyQ_491);
LOCFOR(fun_write_char_492);
LOCFOR(fun_write_string_493);
LOCFOR(fun_Pvacated_494);
LOCFOR(fun_Pvacated_setter_495);
LOCFOR(fun_496);
LOCFOR(fun_Pprimary_modulus_497);
LOCFOR(fun_Pprimary_modulus_setter_498);
LOCFOR(fun_499);
LOCFOR(fun_Psecondary_modulus_500);
LOCFOR(fun_Psecondary_modulus_setter_501);
LOCFOR(fun_502);
LOCFOR(fun_Pn_buckets_503);
LOCFOR(fun_Pn_buckets_setter_504);
LOCFOR(fun_505);
LOCFOR(fun_Pbucket_depth_506);
LOCFOR(fun_Pbucket_depth_setter_507);
LOCFOR(fun_508);
LOCFOR(fun_Pdata_509);
LOCFOR(fun_Pdata_setter_510);
LOCFOR(fun_511);
LOCFOR(fun_Pgc_state_512);
LOCFOR(fun_Pgc_state_setter_513);
LOCFOR(fun_514);
FUNFOR(YruntimeYfab_table_vector);
LOCFOR(fun_elt_516);
LOCFOR(fun_elt_setter_517);
LOCFOR(fun_clrX_518);
FUNFOR(YruntimeYtrace);
LOCFOR(fun_table_growth_factor_520);
LOCFOR(fun_table_growth_factor_setter_521);
LOCFOR(fun_522);
LOCFOR(fun_table_growth_threshold_523);
LOCFOR(fun_table_growth_threshold_setter_524);
LOCFOR(fun_525);
LOCFOR(fun_table_shrink_threshold_526);
LOCFOR(fun_table_shrink_threshold_setter_527);
LOCFOR(fun_528);
LOCFOR(fun_Pcount_529);
LOCFOR(fun_Pcount_setter_530);
LOCFOR(fun_531);
LOCFOR(fun_Pvector_532);
LOCFOR(fun_Pvector_setter_533);
LOCFOR(fun_534);
LOCFOR(fun_table_protocol_535);
FUNFOR(YruntimeYhash_moduli);
LOCFOR(fun_fab_537);
LOCFOR(fun_x_1220_538);
LOCFOR(fun_539);
LOCFOR(fun_540);
LOCFOR(fun_inner_541);
LOCFOR(fun_outer_542);
LOCFOR(fun_543);
LOCFOR(fun_elt_544);
LOCFOR(fun_inner_545);
LOCFOR(fun_outer_546);
LOCFOR(fun_547);
LOCFOR(fun_elt_setter_548);
LOCFOR(fun_inner_549);
LOCFOR(fun_outer_550);
LOCFOR(fun_551);
LOCFOR(fun_del_key_552);
LOCFOR(fun_inner_553);
LOCFOR(fun_outer_554);
LOCFOR(fun_do_keyed_555);
LOCFOR(fun_inner_556);
LOCFOR(fun_outer_557);
LOCFOR(fun_do_558);
LOCFOR(fun_del_keys_559);
LOCFOR(fun_len_560);
LOCFOR(fun_Pvector_561);
LOCFOR(fun_Pvector_setter_562);
LOCFOR(fun_563);
LOCFOR(fun_Pbucket_564);
LOCFOR(fun_Pbucket_setter_565);
LOCFOR(fun_566);
LOCFOR(fun_Pindex_567);
LOCFOR(fun_Pindex_setter_568);
LOCFOR(fun_569);
LOCFOR(fun_inner_570);
LOCFOR(fun_outer_571);
LOCFOR(fun_572);
LOCFOR(fun_ini_state_573);
LOCFOR(fun_inner_574);
LOCFOR(fun_outer_575);
LOCFOR(fun_576);
LOCFOR(fun_nxt_state_577);
LOCFOR(fun_fin_stateQ_578);
LOCFOR(fun_now_key_579);
LOCFOR(fun_now_elt_580);
LOCFOR(fun_now_elt_setter_581);
LOCFOR(fun_copy_state_582);
LOCFOR(fun_583);
LOCFOR(fun_tab_keys_584);
LOCFOR(fun_grow_table_585);
LOCFOR(fun_rehash_table_586);
LOCFOR(fun_587);
LOCFOR(fun_588);
FUNFOR(YruntimeYchoose_table_geometry);
LOCFOR(fun_inner_590);
LOCFOR(fun_outer_591);
LOCFOR(fun_592);
LOCFOR(fun_593);
LOCFOR(fun_copy_to_new_vector_594);
FUNFOR(YruntimeYcurrent_gc_state);
LOCFOR(fun_id_hash_596);
LOCFOR(fun_id_hash_597);
FUNFOR(YruntimeYrot);
LOCFOR(fun_id_hash_599);
LOCFOR(fun_id_hash_600);
LOCFOR(fun_id_hash_601);
LOCFOR(fun_loop_602);
FUNFOR(YruntimeYcase_insensitive_string_hash);
LOCFOR(fun_loop_604);
FUNFOR(YruntimeYcase_insensitive_string_equal);
LOCFOR(fun_table_protocol_606);
extern P YruntimeYbooted_fab_sym_using (P,P);
FUNFOR(YruntimeYbooted_fab_sym);
LOCFOR(fun_boot_609);
FUNFOR(YruntimeYboot_symbols);
extern P YruntimeY___main_0___ ();
extern P YruntimeY___main_1___ ();
extern P YruntimeY___main_2___ ();
extern P YruntimeY___main_3___ ();
extern P YruntimeY___main_4___ ();
extern P YruntimeY___main_5___ ();
extern P YruntimeY___main_6___ ();
extern P YruntimeY___main_7___ ();
extern P YruntimeY___main_8___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_loop1_0) {
  P i_;
  P topF654;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = (P)YOA(FREEREF(0),YPint((P)-1));
  topF654 = T1;
  T3 = (P)YOL(i_,FREEREF(1));
  if (T3 != YPfalse) {
    T4 = (P)YOoelt(FREEREF(2),i_);
    T6 = (P)YPiu(topF654);
    T7 = (P)YPiu(i_);
    T5 = (P)YPi_(T6,T7);
    (P)YPloc_off_setter(T4,FREEREF(3),T5);
    T9 = (P)YOA(i_,YPint((P)1));
    a1 = T9;
    i_ = a1;
    goto loop;
    T2 = T8;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop2_1) {
  P s_,i_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),s_);
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),s_);
    T5 = (P)YPiu(FREEREF(2));
    T6 = (P)YPiu(i_);
    T4 = (P)YPi_(T5,T6);
    (P)YPloc_off_setter(T3,FREEREF(1),T4);
    T8 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),s_);
    T9 = (P)YOA(i_,YPint((P)1));
    a1 = T8;
    a2 = T9;
    s_ = a1;
    i_ = a2;
    goto loop;
    T0 = T7;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YmacrosYnapply) {
  P proc_,nexts_,args_;
  P loop2F661;
  P loop1F660;
  P argendF659;
  P stackspaceF658;
  P tlenF657;
  P leltF656;
  P ilenF655;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(proc_, 0);
  ARG(nexts_, 1);
  NARGS(args_, 2);
loop:
  T2 = (P)YOolen(args_);
  T1 = (P)YOA(T2,YPint((P)-1));
  ilenF655 = T1;
  T4 = (P)YOoelt(args_,ilenF655);
  leltF656 = T4;
  T7 = CALL1(1,CHKREF(YruntimeYlen),leltF656);
  T6 = (P)YOA(ilenF655,T7);
  tlenF657 = T6;
  T13 = (P)YPiu(tlenF657);
  T12 = (P)YPiA((P)2,T13);
  T11 = (P)YPallocate_stack(T12);
  T10 = (P)YPuntag(T11);
  T9 = (P)YPlb(T10);
  stackspaceF658 = T9;
  T15 = (P)YPsp_reg();
  argendF659 = T15;
  T16 = FUNSHELL(1,fun_loop1_0,5);
  loop1F660 = T16;
  FUNINIT(loop1F660, 5,tlenF657,ilenF655,args_,stackspaceF658,loop1F660);
  T17 = CALL1(0,loop1F660,YPint((P)0));
  T18 = FUNSHELL(1,fun_loop2_1,4);
  loop2F661 = T18;
  FUNINIT(loop2F661, 4,leltF656,stackspaceF658,tlenF657,loop2F661);
  T20 = CALL1(1,CHKREF(YruntimeYini_state),leltF656);
  T21 = (P)YOA(YPint((P)1),ilenF655);
  T19 = CALL2(0,loop2F661,T20,T21);
  T22 = (P)YPiu(tlenF657);
  T23 = (P)YPiu(tlenF657);
  (P)YPloc_off_setter(T22,stackspaceF658,T23);
  T25 = (P)YPiu(tlenF657);
  T24 = (P)YPiA((P)1,T25);
  (P)YPloc_off_setter(proc_,stackspaceF658,T24);
  (P)YPsp_reg_setter(argendF659);
  (P)YPcheck_call_types();
  T26 = (P)YPraw_call(proc_,nexts_);
  T14 = T26;
  T8 = T14;
  T5 = T8;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YmacrosYmatch_empty_list) {
  P x_,fail_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(fail_, 1);
loop:
  T1 = CALL2(1,CHKREF(YmacrosYEE),x_,Ynil);
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T2 = CALL2(1,fail_,CHKREF(lit_11),x_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YmacrosYmatch_unquote) {
  P x_,fail_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(fail_, 1);
loop:
  T1 = CALL2(1,CHKREF(YmacrosYEE),x_,Ynil);
  if (T1 != YPfalse) {
    T2 = CALL1(1,fail_,CHKREF(lit_13));
    T0 = T2;
  } else {
    T3 = CALL1(1,CHKREF(Yhead),x_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YmacrosYmatch_atom) {
  P x_,pat_,fail_;
  P expF662;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(pat_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL2(1,CHKREF(YmacrosYEE),x_,Ynil);
  if (T1 != YPfalse) {
    T2 = CALL2(1,fail_,CHKREF(lit_16),pat_);
    T0 = T2;
  } else {
    T4 = CALL1(1,CHKREF(Yhead),x_);
    expF662 = T4;
    T6 = CALL2(1,CHKREF(YmacrosYEE),expF662,pat_);
    if (T6 != YPfalse) {
      T7 = CALL1(1,CHKREF(Ytail),x_);
      T5 = T7;
    } else {
      T8 = CALL3(1,fail_,CHKREF(lit_17),expF662,pat_);
      T5 = T8;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YmacrosYmatch_sublist) {
  P x_,fail_;
  P xF663;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(fail_, 1);
loop:
  T1 = CALL1(1,CHKREF(Yhead),x_);
  xF663 = T1;
  T3 = CALL2(1,CHKREF(YisaQ),xF663,CHKREF(YLlstG));
  if (T3 != YPfalse) {
    T2 = xF663;
  } else {
    T4 = CALL2(1,fail_,CHKREF(lit_19),xF663);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  P r_,e_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(r_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYto_str),e_);
  T0 = CALL2(1,CHKREF(YmacrosYcat),r_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_make_sym_8) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
  T2 = fun_7;
  T1 = CALL3(1,CHKREF(YruntimeYreduce),T2,CHKREF(lit_23),x_);
  T0 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_gensym_9) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL2(1,CHKREF(YruntimeYA),CHKREF(YruntimeYTgensym_counterT),YPint((P)1));
  T1 = YruntimeYTgensym_counterT = T2;
  T0 = CALL2(1,CHKREF(YmacrosYmake_sym),CHKREF(lit_25),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_make_setter_name_10) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YmacrosYmake_sym),x_,CHKREF(lit_27));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_var_name_11) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_var_name_12) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYelt),x_,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_var_type_13) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(lit_30));
}

FUNCODEDEF(fun_var_type_14) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYelt),x_,YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYtA) {
  P args_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = (P)YPpair(CHKREF(YLunionG),Ynil);
  T2 = (P)YPpair(CHKREF(Ytype_elts),Ynil);
  T4 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLlstG),args_);
  T3 = (P)YPpair(T4,Ynil);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYtE) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPpair(CHKREF(YLsingletonG),Ynil);
  T2 = (P)YPpair(CHKREF(Ytype_object),Ynil);
  T3 = (P)YPpair(x_,Ynil);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYtL) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPpair(CHKREF(YLsubclassG),Ynil);
  T2 = (P)YPpair(CHKREF(Ytype_class),Ynil);
  T3 = (P)YPpair(x_,Ynil);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYfalse_or) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYtE),YPfalse);
  T0 = CALL2(1,CHKREF(YruntimeYtA),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYnulQ) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YmacrosYEE),x_,CHKREF(Ynul));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nyi_error_20) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL0(1,CHKREF(YruntimeYnyi));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_str_21) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = CALL1(1,CHKREF(Yobject_class),x_);
  T2 = CALL1(1,CHKREF(Yclass_name),T3);
  T1 = CALL1(1,CHKREF(YruntimeYto_str),T2);
  T0 = CALL3(1,CHKREF(YmacrosYcat),CHKREF(lit_38),T1,CHKREF(lit_39));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YruntimeYaddress_of) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPib(x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_23) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(CHKREF(lit_42));
}

FUNCODEDEF(fun_to_str_24) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(CHKREF(lit_43));
}

FUNCODEDEF(fun_as_25) {
  P type_,x_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,CHKREF(YisaQ),x_,type_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T2 = CALL3(1,CHKREF(Yerror),CHKREF(lit_46),type_,x_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_EE_26) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = (P)YPeqQ(x_,y_);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_E_27) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL2(1,CHKREF(YmacrosYEE),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_NE_28) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYE),x_,y_);
  T0 = CALL1(1,CHKREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_NEE_29) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,CHKREF(YmacrosYEE),x_,y_);
  T0 = CALL1(1,CHKREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_G_30) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYL),y_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_LE_31) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),y_,x_);
  T0 = CALL1(1,CHKREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_GE_32) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),x_,y_);
  T0 = CALL1(1,CHKREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_min_33) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),x_,y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T0 = y_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_max_34) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYG),x_,y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T0 = y_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_35) {
  P U_,i_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(i_, 1);
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPcb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_36) {
  P U_,c_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(c_, 1);
loop:
  T1 = (P)YPcu(c_);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_37) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPcu(x_);
  T3 = (P)YPcu(y_);
  T1 = (P)YPcL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_EE_38) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPcu(x_);
  T3 = (P)YPcu(y_);
  T1 = (P)YPcE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lowercaseQ_39) {
  P x_;
  P codeF664;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),x_);
  codeF664 = T1;
  T4 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)97));
  T3 = CALL2(1,CHKREF(YruntimeYGE),codeF664,T4);
  if (T3 != YPfalse) {
    T6 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)122));
    T5 = CALL2(1,CHKREF(YruntimeYLE),codeF664,T6);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_uppercaseQ_40) {
  P x_;
  P codeF665;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),x_);
  codeF665 = T1;
  T4 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)65));
  T3 = CALL2(1,CHKREF(YruntimeYGE),codeF665,T4);
  if (T3 != YPfalse) {
    T6 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)90));
    T5 = CALL2(1,CHKREF(YruntimeYLE),codeF665,T6);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_lowercase_41) {
  P x_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYuppercaseQ),x_);
  if (T1 != YPfalse) {
    T4 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),x_);
    T6 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)97));
    T7 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)65));
    T5 = CALL2(1,CHKREF(YruntimeY_),T6,T7);
    T3 = CALL2(1,CHKREF(YruntimeYA),T4,T5);
    T2 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLchrG),T3);
    T0 = T2;
  } else {
    T0 = x_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_uppercase_42) {
  P x_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYlowercaseQ),x_);
  if (T1 != YPfalse) {
    T4 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),x_);
    T6 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)65));
    T7 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)97));
    T5 = CALL2(1,CHKREF(YruntimeY_),T6,T7);
    T3 = CALL2(1,CHKREF(YruntimeYA),T4,T5);
    T2 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLchrG),T3);
    T0 = T2;
  } else {
    T0 = x_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_43) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYfabs),CHKREF(YLstrG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_alphabeticQ_44) {
  P x_;
  P tmpF668;
  P tmpF667;
  P tmpF666;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYLE),YPchr((P)97),x_);
  tmpF666 = T2;
  if (tmpF666 != YPfalse) {
    T4 = CALL2(1,CHKREF(YruntimeYLE),x_,YPchr((P)122));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  tmpF667 = T1;
  if (tmpF667 != YPfalse) {
    T5 = tmpF667;
  } else {
    T7 = CALL2(1,CHKREF(YruntimeYLE),YPchr((P)65),x_);
    tmpF668 = T7;
    if (tmpF668 != YPfalse) {
      T9 = CALL2(1,CHKREF(YruntimeYLE),x_,YPchr((P)90));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    T5 = T6;
  }
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_numericQ_45) {
  P x_;
  P tmpF669;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYLE),YPchr((P)48),x_);
  tmpF669 = T1;
  if (tmpF669 != YPfalse) {
    T3 = CALL2(1,CHKREF(YruntimeYLE),x_,YPchr((P)57));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_digit_46) {
  P digit_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(digit_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYchar_Gascii),digit_);
  T2 = CALL1(1,CHKREF(YruntimeYchar_Gascii),YPchr((P)48));
  T0 = CALL2(1,CHKREF(YruntimeY_),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_contagious_call_47) {
  P f_,x_,y_;
  P typeF670;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYcontagious_type),x_,y_);
  typeF670 = T1;
  T3 = CALL2(1,CHKREF(YruntimeYas),typeF670,x_);
  T4 = CALL2(1,CHKREF(YruntimeYas),typeF670,y_);
  T2 = CALL2(1,f_,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_L_48) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYL),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_A_49) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYA),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun___50) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeY_),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_T_51) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYT),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_floor_52) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYfloorS),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ceiling_53) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYceilingS),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_round_54) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYroundS),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_truncate_55) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYtruncateS),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_floorS_56) {
  P real_,divisor_;
  P tmpF676;
  P tup14F675;
  P remainderF674;
  P tup14F673;
  P integerF672;
  P tup14F671;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYtruncateS),real_,divisor_);
  tup14F671 = T1;
  T3 = CALL1(1,CHKREF(Yhead),tup14F671);
  check_type(T3,CHKREF(YLintG));
  integerF672 = T3;
  T5 = CALL1(1,CHKREF(Ytail),tup14F671);
  tup14F673 = T5;
  T7 = CALL1(1,CHKREF(Yhead),tup14F673);
  check_type(T7,CHKREF(YLnumG));
  remainderF674 = T7;
  T9 = CALL1(1,CHKREF(Ytail),tup14F673);
  tup14F675 = T9;
  T13 = CALL1(1,CHKREF(YruntimeYzeroQ),remainderF674);
  T12 = CALL1(1,CHKREF(Ynot),T13);
  tmpF676 = T12;
  if (tmpF676 != YPfalse) {
    T16 = CALL1(1,CHKREF(YruntimeYnegQ),divisor_);
    if (T16 != YPfalse) {
      T17 = CALL1(1,CHKREF(YruntimeYposQ),real_);
      T15 = T17;
    } else {
      T18 = CALL1(1,CHKREF(YruntimeYnegQ),real_);
      T15 = T18;
    }
    T14 = T15;
  } else {
    T14 = YPfalse;
  }
  T11 = T14;
  if (T11 != YPfalse) {
    T20 = CALL2(1,CHKREF(YruntimeY_),integerF672,YPint((P)1));
    T21 = CALL2(1,CHKREF(YruntimeYA),remainderF674,divisor_);
    T19 = CALL2(1,CHKREF(YmacrosYtup),T20,T21);
    T10 = T19;
  } else {
    T22 = CALL2(1,CHKREF(YmacrosYtup),integerF672,remainderF674);
    T10 = T22;
  }
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ceilingS_57) {
  P real_,divisor_;
  P tmpF682;
  P tup15F681;
  P remainderF680;
  P tup15F679;
  P integerF678;
  P tup15F677;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYtruncateS),real_,divisor_);
  tup15F677 = T1;
  T3 = CALL1(1,CHKREF(Yhead),tup15F677);
  check_type(T3,CHKREF(YLintG));
  integerF678 = T3;
  T5 = CALL1(1,CHKREF(Ytail),tup15F677);
  tup15F679 = T5;
  T7 = CALL1(1,CHKREF(Yhead),tup15F679);
  check_type(T7,CHKREF(YLnumG));
  remainderF680 = T7;
  T9 = CALL1(1,CHKREF(Ytail),tup15F679);
  tup15F681 = T9;
  T13 = CALL1(1,CHKREF(YruntimeYzeroQ),remainderF680);
  T12 = CALL1(1,CHKREF(Ynot),T13);
  tmpF682 = T12;
  if (tmpF682 != YPfalse) {
    T16 = CALL1(1,CHKREF(YruntimeYnegQ),divisor_);
    if (T16 != YPfalse) {
      T17 = CALL1(1,CHKREF(YruntimeYnegQ),real_);
      T15 = T17;
    } else {
      T18 = CALL1(1,CHKREF(YruntimeYposQ),real_);
      T15 = T18;
    }
    T14 = T15;
  } else {
    T14 = YPfalse;
  }
  T11 = T14;
  if (T11 != YPfalse) {
    T20 = CALL2(1,CHKREF(YruntimeYA),integerF678,YPint((P)1));
    T21 = CALL2(1,CHKREF(YruntimeY_),remainderF680,divisor_);
    T19 = CALL2(1,CHKREF(YmacrosYtup),T20,T21);
    T10 = T19;
  } else {
    T22 = CALL2(1,CHKREF(YmacrosYtup),integerF678,remainderF680);
    T10 = T22;
  }
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_roundS_58) {
  P real_,divisor_;
  P tmpF693;
  P tmpF692;
  P minus_thresholdF691;
  P tmpF690;
  P tmpF689;
  P thresholdF688;
  P tup16F687;
  P remainderF686;
  P tup16F685;
  P integerF684;
  P tup16F683;
  P T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYtruncateS),real_,divisor_);
  tup16F683 = T1;
  T3 = CALL1(1,CHKREF(Yhead),tup16F683);
  check_type(T3,CHKREF(YLintG));
  integerF684 = T3;
  T5 = CALL1(1,CHKREF(Ytail),tup16F683);
  tup16F685 = T5;
  T7 = CALL1(1,CHKREF(Yhead),tup16F685);
  check_type(T7,CHKREF(YLnumG));
  remainderF686 = T7;
  T9 = CALL1(1,CHKREF(Ytail),tup16F685);
  tup16F687 = T9;
  T12 = CALL1(1,CHKREF(YruntimeYabs),divisor_);
  T11 = CALL2(1,CHKREF(YruntimeYS),T12,CHKREF(lit_83));
  check_type(T11,CHKREF(YLnumG));
  thresholdF688 = T11;
  T15 = CALL2(1,CHKREF(YruntimeYG),remainderF686,thresholdF688);
  tmpF689 = T15;
  if (tmpF689 != YPfalse) {
    T16 = tmpF689;
  } else {
    T18 = CALL2(1,CHKREF(YruntimeYE),remainderF686,thresholdF688);
    tmpF690 = T18;
    if (tmpF690 != YPfalse) {
      T20 = CALL1(1,CHKREF(YruntimeYoddQ),integerF684);
      T19 = T20;
    } else {
      T19 = YPfalse;
    }
    T17 = T19;
    T16 = T17;
  }
  T14 = T16;
  if (T14 != YPfalse) {
    T22 = CALL1(1,CHKREF(YruntimeYnegQ),divisor_);
    if (T22 != YPfalse) {
      T24 = CALL2(1,CHKREF(YruntimeY_),integerF684,YPint((P)1));
      T25 = CALL2(1,CHKREF(YruntimeYA),remainderF686,divisor_);
      T23 = CALL2(1,CHKREF(YmacrosYtup),T24,T25);
      T21 = T23;
    } else {
      T27 = CALL2(1,CHKREF(YruntimeYA),integerF684,YPint((P)1));
      T28 = CALL2(1,CHKREF(YruntimeY_),remainderF686,divisor_);
      T26 = CALL2(1,CHKREF(YmacrosYtup),T27,T28);
      T21 = T26;
    }
    T13 = T21;
  } else {
    T31 = CALL1(1,CHKREF(YruntimeYneg),thresholdF688);
    minus_thresholdF691 = T31;
    T33 = CALL2(1,CHKREF(YruntimeYL),remainderF686,minus_thresholdF691);
    tmpF692 = T33;
    if (tmpF692 != YPfalse) {
      T34 = tmpF692;
    } else {
      T36 = CALL2(1,CHKREF(YruntimeYE),remainderF686,minus_thresholdF691);
      tmpF693 = T36;
      if (tmpF693 != YPfalse) {
        T38 = CALL1(1,CHKREF(YruntimeYoddQ),integerF684);
        T37 = T38;
      } else {
        T37 = YPfalse;
      }
      T35 = T37;
      T34 = T35;
    }
    T32 = T34;
    T30 = T32;
    if (T30 != YPfalse) {
      T40 = CALL1(1,CHKREF(YruntimeYnegQ),divisor_);
      if (T40 != YPfalse) {
        T42 = CALL2(1,CHKREF(YruntimeYA),integerF684,YPint((P)1));
        T43 = CALL2(1,CHKREF(YruntimeY_),remainderF686,divisor_);
        T41 = CALL2(1,CHKREF(YmacrosYtup),T42,T43);
        T39 = T41;
      } else {
        T45 = CALL2(1,CHKREF(YruntimeY_),integerF684,YPint((P)1));
        T46 = CALL2(1,CHKREF(YruntimeYA),remainderF686,divisor_);
        T44 = CALL2(1,CHKREF(YmacrosYtup),T45,T46);
        T39 = T44;
      }
      T29 = T39;
    } else {
      T47 = CALL2(1,CHKREF(YmacrosYtup),integerF684,remainderF686);
      T29 = T47;
    }
    T13 = T29;
  }
  T10 = T13;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_truncateS_59) {
  P real_,divisor_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T0 = CALL3(1,CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYtruncateS),real_,divisor_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_modulo_60) {
  P real_,divisor_;
  P tup17F698;
  P remainderF697;
  P tup17F696;
  P UF695;
  P tup17F694;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfloorS),real_,divisor_);
  tup17F694 = T1;
  T3 = CALL1(1,CHKREF(Yhead),tup17F694);
  UF695 = T3;
  T5 = CALL1(1,CHKREF(Ytail),tup17F694);
  tup17F696 = T5;
  T7 = CALL1(1,CHKREF(Yhead),tup17F696);
  check_type(T7,CHKREF(YLnumG));
  remainderF697 = T7;
  T9 = CALL1(1,CHKREF(Ytail),tup17F696);
  tup17F698 = T9;
  T8 = remainderF697;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_remainder_61) {
  P real_,divisor_;
  P tup18F703;
  P remainderF702;
  P tup18F701;
  P UF700;
  P tup18F699;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYtruncateS),real_,divisor_);
  tup18F699 = T1;
  T3 = CALL1(1,CHKREF(Yhead),tup18F699);
  UF700 = T3;
  T5 = CALL1(1,CHKREF(Ytail),tup18F699);
  tup18F701 = T5;
  T7 = CALL1(1,CHKREF(Yhead),tup18F701);
  check_type(T7,CHKREF(YLnumG));
  remainderF702 = T7;
  T9 = CALL1(1,CHKREF(Ytail),tup18F701);
  tup18F703 = T9;
  T8 = remainderF702;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_posQ_62) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYG),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_zeroQ_63) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYE),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_negQ_64) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYL),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_neg_65) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeY_),YPint((P)0),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_abs_66) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYnegQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,CHKREF(YruntimeYneg),x_);
    T0 = T2;
  } else {
    T0 = x_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_67) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,CHKREF(YruntimeYnum_to_str),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_match_68) {
  P char_;
  P tmpF704;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,CHKREF(YruntimeYL),T3,FREEREF(1));
  tmpF704 = T2;
  if (tmpF704 != YPfalse) {
    T7 = BOXVAL(FREEREF(0));
    T6 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(2),T7);
    T5 = CALL2(1,CHKREF(YruntimeYE),T6,char_);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T9 = BOXVAL(FREEREF(0));
    T8 = CALL2(1,CHKREF(YruntimeYA),T9,YPint((P)1));
    BOXVAL(FREEREF(0)) = T8;
    T0 = YPtrue;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_failXX_69) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P return_;
  P charF706;
  P failXXF705;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_failXX_69,1);
  failXXF705 = T1;
  FUNINIT(failXXF705, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,CHKREF(YruntimeYGE),T3,FREEREF(1));
  if (T2 != YPfalse) {
    T4 = CALL0(0,failXXF705);
  } else {
  }
  T7 = BOXVAL(FREEREF(0));
  T6 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(2),T7);
  charF706 = T6;
  charF706 = BOXFAB(charF706);
  T10 = BOXVAL(charF706);
  T9 = CALL2(1,CHKREF(YruntimeYE),T10,YPchr((P)46));
  if (T9 != YPfalse) {
    T12 = BOXVAL(FREEREF(3));
    if (T12 != YPfalse) {
      T13 = CALL2(1,CHKREF(Yerror),CHKREF(lit_99),FREEREF(2));
      T11 = T13;
    } else {
      BOXVAL(FREEREF(3)) = YPtrue;
      T15 = BOXVAL(FREEREF(0));
      T14 = CALL2(1,CHKREF(YruntimeYA),T15,YPint((P)1));
      BOXVAL(FREEREF(0)) = T14;
      T17 = BOXVAL(FREEREF(0));
      T16 = CALL2(1,CHKREF(YruntimeYGE),T17,FREEREF(1));
      if (T16 != YPfalse) {
        T18 = CALL0(0,failXXF705);
      } else {
      }
      T21 = BOXVAL(FREEREF(0));
      T20 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(2),T21);
      T19 = BOXVAL(charF706) = T20;
      T11 = T19;
    }
  } else {
  }
  T24 = BOXVAL(charF706);
  T23 = CALL1(1,CHKREF(YruntimeYnumericQ),T24);
  T22 = CALL1(1,CHKREF(Ynot),T23);
  if (T22 != YPfalse) {
    T25 = CALL0(0,failXXF705);
  } else {
  }
  T28 = BOXVAL(FREEREF(0));
  T27 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(2),T28);
  T26 = CALL1(1,CHKREF(YruntimeYto_digit),T27);
  BOXVAL(FREEREF(4)) = T26;
  T30 = BOXVAL(FREEREF(0));
  T29 = CALL2(1,CHKREF(YruntimeYA),T30,YPint((P)1));
  BOXVAL(FREEREF(0)) = T29;
  T31 = BOXVAL(FREEREF(3));
  if (T31 != YPfalse) {
    T34 = BOXVAL(FREEREF(5));
    T33 = CALL2(1,CHKREF(YruntimeYT),T34,FREEREF(6));
    T32 = BOXVAL(FREEREF(5)) = T33;
  } else {
  }
  T5 = YPtrue;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_match_digitX_71) {
  P U_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(U_, 0);
loop:
  T1 = FUNFAB(fun_70,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_looking_at_alphabeticQ_72) {
  P tmpF707;
  P T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,CHKREF(YruntimeYL),T3,FREEREF(1));
  tmpF707 = T2;
  if (tmpF707 != YPfalse) {
    T7 = BOXVAL(FREEREF(0));
    T6 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(2),T7);
    T5 = CALL1(1,CHKREF(YruntimeYalphabeticQ),T6);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T0 = YPtrue;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_73) {
  P tmpF708;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL1(0,FREEREF(0),T3);
  tmpF708 = T2;
  if (tmpF708 != YPfalse) {
    T8 = BOXVAL(FREEREF(2));
    T7 = CALL2(1,CHKREF(YruntimeYT),T8,FREEREF(3));
    T9 = BOXVAL(FREEREF(1));
    T6 = CALL2(1,CHKREF(YruntimeYA),T7,T9);
    T5 = BOXVAL(FREEREF(2)) = T6;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    goto loop;
    T0 = T10;
  } else {
    T0 = YPtrue;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_to_num_74) {
  P string_;
  P fF729;
  P tmpF728;
  P tmpF727;
  P loopF726;
  P tmpF725;
  P tmpF724;
  P tmpF723;
  P tmpF722;
  P tmpF721;
  P tmpF720;
  P looking_at_alphabeticQF719;
  P match_digitXF718;
  P matchF717;
  P radixF716;
  P seen_decimal_pointQF715;
  P lengthF714;
  P scaleF713;
  P iF712;
  P nF711;
  P dF710;
  P sF709;
  P T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(string_, 0);
loop:
  sF709 = YPint((P)1);
  sF709 = BOXFAB(sF709);
  dF710 = YPint((P)0);
  dF710 = BOXFAB(dF710);
  nF711 = YPint((P)0);
  nF711 = BOXFAB(nF711);
  iF712 = YPint((P)0);
  iF712 = BOXFAB(iF712);
  scaleF713 = YPint((P)1);
  scaleF713 = BOXFAB(scaleF713);
  T11 = CALL1(1,CHKREF(YruntimeYlen),string_);
  lengthF714 = T11;
  seen_decimal_pointQF715 = YPfalse;
  seen_decimal_pointQF715 = BOXFAB(seen_decimal_pointQF715);
  radixF716 = YPint((P)10);
  T16 = FUNSHELL(1,fun_match_68,3);
  matchF717 = T16;
  T17 = FUNSHELL(1,fun_match_digitX_71,7);
  match_digitXF718 = T17;
  T18 = FUNSHELL(1,fun_looking_at_alphabeticQ_72,3);
  looking_at_alphabeticQF719 = T18;
  FUNINIT(matchF717, 3,iF712,lengthF714,string_);
  FUNINIT(match_digitXF718, 7,iF712,lengthF714,string_,seen_decimal_pointQF715,dF710,scaleF713,radixF716);
  FUNINIT(looking_at_alphabeticQF719, 3,iF712,lengthF714,string_);
  T21 = CALL1(0,matchF717,YPchr((P)43));
  tmpF720 = T21;
  if (tmpF720 != YPfalse) {
    T22 = tmpF720;
  } else {
    T25 = CALL1(0,matchF717,YPchr((P)45));
    tmpF721 = T25;
    if (tmpF721 != YPfalse) {
      T27 = BOXVAL(sF709) = YPint((P)-1);
      T26 = T27;
    } else {
      T26 = YPfalse;
    }
    T24 = T26;
    tmpF722 = T24;
    if (tmpF722 != YPfalse) {
      T28 = tmpF722;
    } else {
      T28 = YPtrue;
    }
    T23 = T28;
    T22 = T23;
  }
  T20 = T22;
  tmpF723 = T20;
  if (tmpF723 != YPfalse) {
    T33 = BOXVAL(dF710);
    T32 = CALL1(0,match_digitXF718,T33);
    tmpF724 = T32;
    if (tmpF724 != YPfalse) {
      T36 = BOXVAL(dF710);
      T35 = BOXVAL(nF711) = T36;
      T34 = T35;
    } else {
      T34 = YPfalse;
    }
    T31 = T34;
    tmpF725 = T31;
    if (tmpF725 != YPfalse) {
      T40 = FUNSHELL(1,fun_loop_73,5);
      loopF726 = T40;
      FUNINIT(loopF726, 5,match_digitXF718,dF710,nF711,radixF716,loopF726);
      T41 = CALL0(0,loopF726);
      T39 = T41;
      tmpF727 = T39;
      if (tmpF727 != YPfalse) {
        T45 = BOXVAL(iF712);
        T44 = CALL2(1,CHKREF(YruntimeYE),T45,lengthF714);
        tmpF728 = T44;
        if (tmpF728 != YPfalse) {
          T50 = BOXVAL(sF709);
          T49 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLfloG),T50);
          T53 = BOXVAL(nF711);
          T52 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLfloG),T53);
          T55 = BOXVAL(scaleF713);
          T54 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLfloG),T55);
          T51 = CALL2(1,CHKREF(YruntimeYS),T52,T54);
          T48 = CALL2(1,CHKREF(YruntimeYT),T49,T51);
          fF729 = T48;
          T57 = BOXVAL(seen_decimal_pointQF715);
          if (T57 != YPfalse) {
            T56 = fF729;
          } else {
            T59 = CALL1(1,CHKREF(YruntimeYtruncate),fF729);
            T58 = CALL1(1,CHKREF(YruntimeY1st),T59);
            T56 = T58;
          }
          T47 = T56;
          T46 = T47;
        } else {
          T46 = YPfalse;
        }
        T43 = T46;
        T42 = T43;
      } else {
        T42 = YPfalse;
      }
      T38 = T42;
      T37 = T38;
    } else {
      T37 = YPfalse;
    }
    T30 = T37;
    T29 = T30;
  } else {
    T29 = YPfalse;
  }
  T19 = T29;
  T15 = T19;
  T14 = T15;
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

FUNCODEDEF(fun_contagious_type_75) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(CHKREF(YLintG));
}

FUNCODEDEF(fun_contagious_type_76) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(CHKREF(YLfloG));
}

FUNCODEDEF(fun_contagious_type_77) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(CHKREF(YLfloG));
}

FUNCODEDEF(fun_contagious_type_78) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  RET(CHKREF(YLfloG));
}

FUNCODEDEF(fun_EE_79) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_80) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_A_81) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiA(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun___82) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPi_(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_T_83) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiT(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_floor_84) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YmacrosYtup),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ceiling_85) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YmacrosYtup),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_round_86) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YmacrosYtup),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_truncate_87) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YmacrosYtup),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_truncateS_88) {
  P x_,y_;
  P resultF730;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T3 = (P)YPiu(x_);
  T4 = (P)YPiu(y_);
  T2 = (P)YPitS(T3,T4);
  T1 = (P)YPib(T2);
  resultF730 = T1;
  T7 = CALL2(1,CHKREF(YruntimeYT),resultF730,y_);
  T6 = CALL2(1,CHKREF(YruntimeY_),x_,T7);
  T5 = CALL2(1,CHKREF(YmacrosYtup),resultF730,T6);
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_modulo_89) {
  P x_,y_;
  P resF731;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T3 = (P)YPiu(x_);
  T4 = (P)YPiu(y_);
  T2 = (P)YPim(T3,T4);
  T1 = (P)YPib(T2);
  resF731 = T1;
  T6 = CALL2(1,CHKREF(YruntimeYL),resF731,YPint((P)0));
  if (T6 != YPfalse) {
    T8 = CALL2(1,CHKREF(YruntimeYG),y_,YPint((P)0));
    if (T8 != YPfalse) {
      T9 = CALL2(1,CHKREF(YruntimeYA),resF731,y_);
      T7 = T9;
    } else {
      T10 = CALL2(1,CHKREF(YruntimeY_),resF731,y_);
      T7 = T10;
    }
    T5 = T7;
  } else {
    T5 = resF731;
  }
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_logior_90) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiv(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_logxor_91) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiC(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_logand_92) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiB(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lognot_93) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPiu(x_);
  T1 = (P)YPiX(T2);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_logbitQ_94) {
  P o_,x_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(x_, 1);
loop:
  T2 = (P)YPiu(o_);
  T3 = (P)YPiu(x_);
  T1 = (P)YPiQ(T2,T3);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_evenQ_95) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYlogand),x_,YPint((P)1));
  T0 = CALL1(1,CHKREF(YruntimeYzeroQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_oddQ_96) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYevenQ),x_);
  T0 = CALL1(1,CHKREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ash_97) {
  P x_,a_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYnegQ),a_);
  if (T1 != YPfalse) {
    T4 = (P)YPiu(x_);
    T5 = (P)YPiu(a_);
    T3 = (P)YPiGG(T4,T5);
    T2 = (P)YPib(T3);
    T0 = T2;
  } else {
    T8 = (P)YPiu(x_);
    T9 = (P)YPiu(a_);
    T7 = (P)YPiLL(T8,T9);
    T6 = (P)YPib(T7);
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lsh_98) {
  P x_,a_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYnegQ),a_);
  if (T1 != YPfalse) {
    T4 = (P)YPiu(x_);
    T5 = (P)YPiu(a_);
    T3 = (P)YPiGGG(T4,T5);
    T2 = (P)YPib(T3);
    T0 = T2;
  } else {
    T8 = (P)YPiu(x_);
    T9 = (P)YPiu(a_);
    T7 = (P)YPiLLL(T8,T9);
    T6 = (P)YPib(T7);
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_search_99) {
  P po2_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(po2_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYG),po2_,FREEREF(0));
  if (T1 != YPfalse) {
    T0 = po2_;
  } else {
    T3 = CALL2(1,CHKREF(YruntimeYA),po2_,po2_);
    a1 = T3;
    po2_ = a1;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_power_of_two_ceiling_100) {
  P x_;
  P searchF732;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_search_99,2);
  searchF732 = T1;
  FUNINIT(searchF732, 2,x_,searchF732);
  T2 = CALL1(1,searchF732,YPint((P)1));
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_decode_radix_option_101) {
  P rest_,default_,caller_name_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(rest_, 0);
  ARG(default_, 1);
  ARG(caller_name_, 2);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),rest_);
  if (T1 != YPfalse) {
    T0 = default_;
  } else {
    T4 = CALL1(1,CHKREF(YruntimeYlen),rest_);
    T3 = CALL2(1,CHKREF(YruntimeYE),T4,YPint((P)1));
    if (T3 != YPfalse) {
      T5 = CALL1(1,CHKREF(YruntimeY1st),rest_);
      T2 = T5;
    } else {
      T6 = CALL3(1,CHKREF(Yerror),CHKREF(lit_122),caller_name_,rest_);
      T2 = T6;
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_102) {
  P digit_list_,num_;
  P digitF733;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(digit_list_, 0);
  ARG(num_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYE),num_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = digit_list_;
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYremainder),num_,FREEREF(0));
    T3 = CALL2(1,CHKREF(YruntimeYelt),CHKREF(YruntimeYDdigit_to_char),T4);
    digitF733 = T3;
    T6 = CALL2(1,CHKREF(YmacrosYpair),digitF733,digit_list_);
    T8 = CALL2(1,CHKREF(YruntimeYtruncateS),num_,FREEREF(0));
    T7 = CALL1(1,CHKREF(YruntimeY1st),T8);
    a1 = T6;
    a2 = T7;
    digit_list_ = a1;
    num_ = a2;
    goto loop;
    T2 = T5;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_num_to_str_103) {
  P num_,radix_option_;
  P digit_listF737;
  P loopF736;
  P sF735;
  P radixF734;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(num_, 0);
  NARGS(radix_option_, 1);
loop:
  T1 = CALL3(1,CHKREF(YruntimeYdecode_radix_option),radix_option_,CHKREF(YruntimeYTprint_baseT),CHKREF(lit_123));
  radixF734 = T1;
  T4 = CALL2(1,CHKREF(YruntimeYL),num_,YPint((P)0));
  if (T4 != YPfalse) {
    T3 = YPint((P)-1);
  } else {
    T3 = YPint((P)1);
  }
  sF735 = T3;
  T7 = FUNSHELL(1,fun_loop_102,2);
  loopF736 = T7;
  FUNINIT(loopF736, 2,radixF734,loopF736);
  T9 = CALL2(1,CHKREF(YruntimeYT),num_,sF735);
  T8 = CALL2(0,loopF736,Ynil,T9);
  T6 = T8;
  digit_listF737 = T6;
  T12 = CALL2(1,CHKREF(YruntimeYL),sF735,YPint((P)0));
  if (T12 != YPfalse) {
    T13 = CALL2(1,CHKREF(YmacrosYpair),YPchr((P)45),digit_listF737);
    T11 = T13;
  } else {
    T15 = CALL2(1,CHKREF(YruntimeYE),num_,YPint((P)0));
    if (T15 != YPfalse) {
      T14 = CHKREF(lit_127);
    } else {
      T14 = digit_listF737;
    }
    T11 = T14;
  }
  T10 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLstrG),T11);
  T5 = T10;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YruntimeYflo_bits) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPflo_bits(T2);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_105) {
  P U_,x_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(x_, 1);
loop:
  T2 = (P)YPiu(x_);
  T1 = (P)YPfi2f(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_EE_106) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_107) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_A_108) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfA(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun___109) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPf_(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_T_110) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfT(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_S_111) {
  P x_,y_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YPfS(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_truncateS_112) {
  P x_,y_;
  P resultF739;
  P dividedF738;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYS),x_,y_);
  dividedF738 = T1;
  T5 = (P)YPfu(dividedF738);
  T4 = (P)YPft(T5);
  T3 = (P)YPib(T4);
  resultF739 = T3;
  T9 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLfloG),resultF739);
  T8 = CALL2(1,CHKREF(YruntimeY_),dividedF738,T9);
  T7 = CALL2(1,CHKREF(YruntimeYT),y_,T8);
  T6 = CALL2(1,CHKREF(YmacrosYtup),resultF739,T7);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_113) {
  P p_,e_;
  P tup19F742;
  P iF741;
  P tup19F740;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYtruncate),p_);
  tup19F740 = T1;
  T3 = CALL1(1,CHKREF(Yhead),tup19F740);
  iF741 = T3;
  T5 = CALL1(1,CHKREF(Ytail),tup19F740);
  tup19F742 = T5;
  T8 = CALL2(1,CHKREF(YruntimeY_),p_,iF741);
  T7 = CALL2(1,CHKREF(YruntimeYL),T8,CHKREF(YruntimeYepsilon));
  if (T7 != YPfalse) {
    T9 = CALL2(1,CHKREF(YruntimeYnum_to_str),iF741,FREEREF(1));
    BOXVAL(FREEREF(0)) = T9;
    T6 = e_;
  } else {
    T11 = CALL2(1,CHKREF(YruntimeYT),p_,FREEREF(1));
    T12 = CALL2(1,CHKREF(YruntimeYA),e_,YPint((P)1));
    a1 = T11;
    a2 = T12;
    p_ = a1;
    e_ = a2;
    goto loop;
    T6 = T10;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_num_to_str_114) {
  P num_,radix_option_;
  P lengthF749;
  P eF748;
  P loopF747;
  P stringF746;
  P pF745;
  P sF744;
  P radixF743;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(num_, 0);
  NARGS(radix_option_, 1);
loop:
  T1 = CALL3(1,CHKREF(YruntimeYdecode_radix_option),radix_option_,CHKREF(YruntimeYTprint_baseT),CHKREF(lit_123));
  radixF743 = T1;
  T4 = CALL2(1,CHKREF(YruntimeYL),num_,YPint((P)0));
  if (T4 != YPfalse) {
    T3 = YPint((P)-1);
  } else {
    T3 = YPint((P)1);
  }
  sF744 = T3;
  T6 = CALL2(1,CHKREF(YruntimeYT),num_,sF744);
  pF745 = T6;
  stringF746 = CHKREF(lit_23);
  stringF746 = BOXFAB(stringF746);
  T11 = FUNSHELL(1,fun_loop_113,3);
  loopF747 = T11;
  FUNINIT(loopF747, 3,stringF746,radixF743,loopF747);
  T12 = CALL2(0,loopF747,pF745,YPint((P)0));
  T10 = T12;
  eF748 = T10;
  T15 = BOXVAL(stringF746);
  T14 = CALL1(1,CHKREF(YruntimeYlen),T15);
  lengthF749 = T14;
  T17 = CALL2(1,CHKREF(YruntimeYE),eF748,YPint((P)0));
  if (T17 != YPfalse) {
    T19 = BOXVAL(stringF746);
    T18 = CALL2(1,CHKREF(YmacrosYcat),T19,CHKREF(lit_131));
    T16 = T18;
  } else {
    T21 = CALL2(1,CHKREF(YruntimeYE),eF748,lengthF749);
    if (T21 != YPfalse) {
      T23 = BOXVAL(stringF746);
      T22 = CALL2(1,CHKREF(YmacrosYcat),CHKREF(lit_132),T23);
      T20 = T22;
    } else {
      T25 = CALL2(1,CHKREF(YruntimeYL),eF748,lengthF749);
      if (T25 != YPfalse) {
        T28 = BOXVAL(stringF746);
        T29 = CALL2(1,CHKREF(YruntimeY_),lengthF749,eF748);
        T27 = CALL3(1,CHKREF(YruntimeYsub),T28,YPint((P)0),T29);
        T31 = BOXVAL(stringF746);
        T32 = CALL2(1,CHKREF(YruntimeY_),lengthF749,eF748);
        T30 = CALL3(1,CHKREF(YruntimeYsub),T31,T32,lengthF749);
        T26 = CALL3(1,CHKREF(YmacrosYcat),T27,CHKREF(lit_133),T30);
        T24 = T26;
      } else {
        T36 = CALL2(1,CHKREF(YruntimeY_),eF748,lengthF749);
        T35 = CALL2(1,CHKREF(YruntimeYA),T36,YPint((P)2));
        T34 = CALL3(1,CHKREF(YruntimeYsub),CHKREF(lit_134),YPint((P)0),T35);
        T37 = BOXVAL(stringF746);
        T33 = CALL2(1,CHKREF(YmacrosYcat),T34,T37);
        T24 = T33;
      }
      T20 = T24;
    }
    T16 = T20;
  }
  BOXVAL(stringF746) = T16;
  T39 = CALL2(1,CHKREF(YruntimeYL),sF744,YPint((P)0));
  if (T39 != YPfalse) {
    T41 = BOXVAL(stringF746);
    T40 = CALL2(1,CHKREF(YmacrosYcat),CHKREF(lit_135),T41);
    T38 = T40;
  } else {
    T42 = BOXVAL(stringF746);
    T38 = T42;
  }
  T13 = T38;
  T9 = T13;
  T7 = T9;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fabs_115) {
  P c_,objects_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYlen),objects_);
  T1 = CALL2(1,CHKREF(YruntimeYfab),c_,T2);
  T0 = CALL2(1,CHKREF(YruntimeYalter),T1,objects_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_emptyQ_116) {
  P c_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYlen),c_);
  T0 = CALL2(1,CHKREF(YruntimeYE),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_empty_117) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYfab),c_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_118) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_as_copy_119) {
  P c_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,CHKREF(Yobject_class),c_);
  T0 = CALL2(1,CHKREF(YruntimeYas),T1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eq_120) {
  P s1_,s2_;
  P tmpF750;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s1_, 0);
  ARG(s2_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),s1_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(1),s2_);
    T0 = T2;
  } else {
    T5 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),s1_);
    T6 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(1),s2_);
    T4 = CALL2(1,CHKREF(YruntimeYE),T5,T6);
    tmpF750 = T4;
    if (tmpF750 != YPfalse) {
      T9 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),s1_);
      T10 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(1),s2_);
      a1 = T9;
      a2 = T10;
      s1_ = a1;
      s2_ = a2;
      goto loop;
      T7 = T8;
    } else {
      T7 = YPfalse;
    }
    T3 = T7;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_E_121) {
  P c1_,c2_;
  P eqF751;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
loop:
  T1 = FUNSHELL(1,fun_eq_120,3);
  eqF751 = T1;
  FUNINIT(eqF751, 3,c1_,c2_,eqF751);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),c1_);
  T4 = CALL1(1,CHKREF(YruntimeYini_state),c2_);
  T2 = CALL2(0,eqF751,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_122) {
  P c_,s_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T0 = CALL0(1,CHKREF(YruntimeYnyi_error));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_123) {
  P p_,x_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYlen),x_);
  T1 = CALL2(1,CHKREF(YruntimeYfab),p_,T2);
  T3 = CALL1(1,CHKREF(YruntimeYlen),x_);
  T0 = CALLN(1,CHKREF(YruntimeYinto),4,T1,x_,YPint((P)0),T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_124) {
  P res_,s_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),s_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,CHKREF(YruntimeYrevX),res_);
    T0 = T2;
  } else {
    T5 = CALL2(1,CHKREF(YruntimeYnow_key),FREEREF(0),s_);
    T4 = CALL2(1,CHKREF(YruntimeYadd),res_,T5);
    T6 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),s_);
    a1 = T4;
    a2 = T6;
    res_ = a1;
    s_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_keys_125) {
  P c_;
  P conF752;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_con_124,2);
  conF752 = T1;
  FUNINIT(conF752, 2,c_,conF752);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),c_);
  T2 = CALL2(0,conF752,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_rep_126) {
  P s_;
  P valF755;
  P nxtsF754;
  P keyF753;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),s_);
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),s_);
    keyF753 = T4;
    T6 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),s_);
    nxtsF754 = T6;
    T9 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),s_);
    if (T9 != YPfalse) {
      T8 = YPfalse;
    } else {
      T10 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),nxtsF754);
      T8 = T10;
    }
    valF755 = T8;
    CALL2(1,FREEREF(1),keyF753,valF755);
    T12 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),nxtsF754);
    a1 = T12;
    s_ = a1;
    goto loop;
    T7 = T11;
    T5 = T7;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_key_vals_127) {
  P fn_,key_vals_;
  P repF756;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(fn_, 0);
  ARG(key_vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_rep_126,3);
  repF756 = T1;
  FUNINIT(repF756, 3,key_vals_,fn_,repF756);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),key_vals_);
  T2 = CALL1(0,repF756,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_count_128) {
  P s_,i_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),s_);
  if (T1 != YPfalse) {
    T0 = i_;
  } else {
    T3 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),s_);
    T4 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T3;
    a2 = T4;
    s_ = a1;
    i_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_129) {
  P x_;
  P countF757;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_count_128,2);
  countF757 = T1;
  FUNINIT(countF757, 2,x_,countF757);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),x_);
  T2 = CALL2(0,countF757,T3,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_130) {
  P ss_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(ss_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),ss_);
  if (T1 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T2 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),ss_);
    T3 = CALL2(1,CHKREF(YruntimeYnow_key),FREEREF(0),ss_);
    CALL3(1,CHKREF(YruntimeYelt_setter),T2,FREEREF(1),T3);
    T5 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),ss_);
    a1 = T5;
    ss_ = a1;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alter_131) {
  P dst_,src_;
  P inF758;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_130,3);
  inF758 = T1;
  FUNINIT(inF758, 3,src_,dst_,inF758);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),src_);
  T2 = CALL1(0,inF758,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_132) {
  P ds_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(ds_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),ds_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    CALL3(1,CHKREF(YruntimeYnow_elt_setter),FREEREF(1),FREEREF(0),ds_);
    T3 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),ds_);
    a1 = T3;
    ds_ = a1;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fill_133) {
  P dst_,val_;
  P inF759;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(val_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_132,3);
  inF759 = T1;
  FUNINIT(inF759, 3,dst_,val_,inF759);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),dst_);
  T2 = CALL1(0,inF759,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_134) {
  P state_;
  P tmpF760;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(state_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),state_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),state_);
    T3 = CALL1(1,FREEREF(1),T4);
    tmpF760 = T3;
    if (tmpF760 != YPfalse) {
      T5 = tmpF760;
    } else {
      T7 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),state_);
      a1 = T7;
      state_ = a1;
      goto loop;
      T5 = T6;
    }
    T2 = T5;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_anyQ_135) {
  P test_,c_;
  P fndF761;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_134,3);
  fndF761 = T1;
  FUNINIT(fndF761, 3,c_,test_,fndF761);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),c_);
  T2 = CALL1(0,fndF761,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_136) {
  P sx_,sy_;
  P tmpF763;
  P tmpF762;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(sx_, 0);
  ARG(sy_, 1);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),sx_);
  tmpF762 = T2;
  if (tmpF762 != YPfalse) {
    T3 = tmpF762;
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(1),sy_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T7 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),sx_);
    T8 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(1),sy_);
    T6 = CALL2(1,FREEREF(2),T7,T8);
    tmpF763 = T6;
    if (tmpF763 != YPfalse) {
      T9 = tmpF763;
    } else {
      T11 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),sx_);
      T12 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(1),sy_);
      a1 = T11;
      a2 = T12;
      sx_ = a1;
      sy_ = a2;
      goto loop;
      T9 = T10;
    }
    T5 = T9;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_any2Q_137) {
  P test_,x_,y_;
  P fndF764;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_136,4);
  fndF764 = T1;
  FUNINIT(fndF764, 4,x_,y_,test_,fndF764);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),x_);
  T4 = CALL1(1,CHKREF(YruntimeYini_state),y_);
  T2 = CALL2(0,fndF764,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_138) {
  P state_;
  P tmpF766;
  P tmpF765;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(state_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),state_);
  tmpF765 = T1;
  if (tmpF765 != YPfalse) {
    T2 = tmpF765;
  } else {
    T5 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),state_);
    T4 = CALL1(1,FREEREF(1),T5);
    tmpF766 = T4;
    if (tmpF766 != YPfalse) {
      T8 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),state_);
      a1 = T8;
      state_ = a1;
      goto loop;
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T3 = T6;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_allQ_139) {
  P test_,c_;
  P fndF767;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_138,3);
  fndF767 = T1;
  FUNINIT(fndF767, 3,c_,test_,fndF767);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),c_);
  T2 = CALL1(0,fndF767,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_140) {
  P sx_,sy_;
  P tmpF770;
  P tmpF769;
  P tmpF768;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(sx_, 0);
  ARG(sy_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),sx_);
  tmpF768 = T1;
  if (tmpF768 != YPfalse) {
    T2 = tmpF768;
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(1),sy_);
    tmpF769 = T4;
    if (tmpF769 != YPfalse) {
      T5 = tmpF769;
    } else {
      T8 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),sx_);
      T9 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(1),sy_);
      T7 = CALL2(1,FREEREF(2),T8,T9);
      tmpF770 = T7;
      if (tmpF770 != YPfalse) {
        T12 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),sx_);
        T13 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(1),sy_);
        a1 = T12;
        a2 = T13;
        sx_ = a1;
        sy_ = a2;
        goto loop;
        T10 = T11;
      } else {
        T10 = YPfalse;
      }
      T6 = T10;
      T5 = T6;
    }
    T3 = T5;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_all2Q_141) {
  P test_,x_,y_;
  P fndF771;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_140,4);
  fndF771 = T1;
  FUNINIT(fndF771, 4,x_,y_,test_,fndF771);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),x_);
  T4 = CALL1(1,CHKREF(YruntimeYini_state),y_);
  T2 = CALL2(0,fndF771,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_red_142) {
  P res_,state_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(state_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),state_);
  if (T1 != YPfalse) {
    T0 = res_;
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),state_);
    T3 = CALL2(1,FREEREF(2),res_,T4);
    T5 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),state_);
    a1 = T3;
    a2 = T5;
    res_ = a1;
    state_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reduce_143) {
  P combine_,init_,c_;
  P redF772;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
loop:
  T1 = FUNSHELL(1,fun_red_142,3);
  redF772 = T1;
  FUNINIT(redF772, 3,c_,redF772,combine_);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),c_);
  T2 = CALL2(0,redF772,init_,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_red_144) {
  P res_,state_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(state_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),state_);
  if (T1 != YPfalse) {
    T0 = res_;
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),state_);
    T3 = CALL2(1,FREEREF(2),res_,T4);
    T5 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),state_);
    a1 = T3;
    a2 = T5;
    res_ = a1;
    state_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reduceA_145) {
  P combine_,c_;
  P redF775;
  P initF774;
  P stateF773;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(combine_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYini_state),c_);
  stateF773 = T1;
  T3 = CALL2(1,CHKREF(YruntimeYnow_elt),c_,stateF773);
  initF774 = T3;
  T5 = FUNSHELL(1,fun_red_144,3);
  redF775 = T5;
  FUNINIT(redF775, 3,c_,redF775,combine_);
  T7 = CALL2(1,CHKREF(YruntimeYnxt_state),c_,stateF773);
  T6 = CALL2(0,redF775,initF774,T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_146) {
  P state_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(state_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),state_);
  if (T1 != YPfalse) {
    T0 = CHKREF(Ynul);
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),state_);
    T3 = CALL1(1,FREEREF(1),T4);
    if (T3 != YPfalse) {
      T5 = CALL2(1,CHKREF(YruntimeYnow_key),FREEREF(0),state_);
      T2 = T5;
    } else {
      T7 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),state_);
      a1 = T7;
      state_ = a1;
      goto loop;
      T2 = T6;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_key_147) {
  P f_,c_;
  P fndF776;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_146,3);
  fndF776 = T1;
  FUNINIT(fndF776, 3,c_,f_,fndF776);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),c_);
  T2 = CALL1(0,fndF776,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_148) {
  P res_,s_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),s_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,CHKREF(YruntimeYrevX),res_);
    T2 = CALL2(1,CHKREF(YruntimeYas_copy),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),s_);
    T6 = CALL1(1,FREEREF(2),T7);
    T5 = CALL2(1,CHKREF(YruntimeYadd),res_,T6);
    T8 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),s_);
    a1 = T5;
    a2 = T8;
    res_ = a1;
    s_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_149) {
  P f_,c_;
  P conF777;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_148,3);
  conF777 = T1;
  FUNINIT(conF777, 3,c_,conF777,f_);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),c_);
  T2 = CALL2(0,conF777,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lop_150) {
  P s_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),s_);
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),s_);
    CALL1(1,FREEREF(1),T3);
    T5 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),s_);
    a1 = T5;
    s_ = a1;
    goto loop;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_151) {
  P f_,c_;
  P lopF778;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_lop_150,3);
  lopF778 = T1;
  FUNINIT(lopF778, 3,c_,f_,lopF778);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),c_);
  T2 = CALL1(0,lopF778,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_152) {
  P res_,sx_,sy_;
  P tmpF779;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(sx_, 1);
  ARG(sy_, 2);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),sx_);
  tmpF779 = T2;
  if (tmpF779 != YPfalse) {
    T3 = tmpF779;
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(1),sy_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,CHKREF(YruntimeYrevX),res_);
    T5 = CALL2(1,CHKREF(YruntimeYas_copy),FREEREF(0),T6);
    T0 = T5;
  } else {
    T10 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),sx_);
    T11 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(1),sy_);
    T9 = CALL2(1,FREEREF(3),T10,T11);
    T8 = CALL2(1,CHKREF(YruntimeYadd),res_,T9);
    T12 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),sx_);
    T13 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(1),sy_);
    a1 = T8;
    a2 = T12;
    a3 = T13;
    res_ = a1;
    sx_ = a2;
    sy_ = a3;
    goto loop;
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map2_153) {
  P f_,x_,y_;
  P conF780;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_con_152,4);
  conF780 = T1;
  FUNINIT(conF780, 4,x_,y_,conF780,f_);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),x_);
  T4 = CALL1(1,CHKREF(YruntimeYini_state),y_);
  T2 = CALL3(0,conF780,Ynil,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lop_154) {
  P sx_,sy_;
  P tmpF781;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(sx_, 0);
  ARG(sy_, 1);
loop:
  T3 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),sx_);
  tmpF781 = T3;
  if (tmpF781 != YPfalse) {
    T4 = tmpF781;
  } else {
    T5 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(1),sy_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T6 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),sx_);
    T7 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(1),sy_);
    CALL2(1,FREEREF(2),T6,T7);
    T9 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),sx_);
    T10 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(1),sy_);
    a1 = T9;
    a2 = T10;
    sx_ = a1;
    sy_ = a2;
    goto loop;
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do2_155) {
  P f_,x_,y_;
  P lopF782;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_lop_154,4);
  lopF782 = T1;
  FUNINIT(lopF782, 4,x_,y_,f_,lopF782);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),x_);
  T4 = CALL1(1,CHKREF(YruntimeYini_state),y_);
  T2 = CALL2(0,lopF782,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lop_156) {
  P sx_,sy_,sz_;
  P tmpF784;
  P tmpF783;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(sx_, 0);
  ARG(sy_, 1);
  ARG(sz_, 2);
loop:
  T3 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),sx_);
  tmpF783 = T3;
  if (tmpF783 != YPfalse) {
    T4 = tmpF783;
  } else {
    T6 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(1),sy_);
    tmpF784 = T6;
    if (tmpF784 != YPfalse) {
      T7 = tmpF784;
    } else {
      T8 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(2),sz_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T9 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),sx_);
    T10 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(1),sy_);
    T11 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(2),sz_);
    CALL3(1,FREEREF(3),T9,T10,T11);
    T13 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),sx_);
    T14 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(1),sy_);
    T15 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(2),sz_);
    a1 = T13;
    a2 = T14;
    a3 = T15;
    sx_ = a1;
    sy_ = a2;
    sz_ = a3;
    goto loop;
    T0 = T12;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do3_157) {
  P f_,x_,y_,z_;
  P lopF785;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  ARG(z_, 3);
loop:
  T1 = FUNSHELL(1,fun_lop_156,5);
  lopF785 = T1;
  FUNINIT(lopF785, 5,x_,y_,z_,f_,lopF785);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),x_);
  T4 = CALL1(1,CHKREF(YruntimeYini_state),y_);
  T5 = CALL1(1,CHKREF(YruntimeYini_state),z_);
  T2 = CALL3(0,lopF785,T3,T4,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_158) {
  P res_,s_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),s_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,CHKREF(YruntimeYrevX),res_);
    T2 = CALL2(1,CHKREF(YruntimeYas_copy),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,CHKREF(YruntimeYnow_key),FREEREF(0),s_);
    T8 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),s_);
    T6 = CALL2(1,FREEREF(2),T7,T8);
    T5 = CALL2(1,CHKREF(YruntimeYadd),res_,T6);
    T9 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),s_);
    a1 = T5;
    a2 = T9;
    res_ = a1;
    s_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_keyed_159) {
  P f_,c_;
  P conF786;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_158,3);
  conF786 = T1;
  FUNINIT(conF786, 3,c_,conF786,f_);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),c_);
  T2 = CALL2(0,conF786,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lop_160) {
  P s_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),s_);
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL2(1,CHKREF(YruntimeYnow_key),FREEREF(0),s_);
    T4 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),s_);
    CALL2(1,FREEREF(1),T3,T4);
    T6 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),s_);
    a1 = T6;
    s_ = a1;
    goto loop;
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_keyed_161) {
  P f_,c_;
  P lopF787;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_lop_160,3);
  lopF787 = T1;
  FUNINIT(lopF787, 3,c_,f_,lopF787);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),c_);
  T2 = CALL1(0,lopF787,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_162) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL2(1,CHKREF(YmacrosYEE),e_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_memQ_163) {
  P c_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNFAB(fun_162,1,x_);
  T0 = CALL2(1,CHKREF(YruntimeYanyQ),T1,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_164) {
  P key_,val_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(key_, 0);
  ARG(val_, 1);
loop:
  T0 = CALL3(1,CHKREF(YruntimeYelt_setter),val_,FREEREF(0),key_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fab_map_165) {
  P p_,key_vals_;
  P xF788;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  NARGS(key_vals_, 1);
loop:
  T4 = CALL1(1,CHKREF(YruntimeYlen),key_vals_);
  T3 = CALL2(1,CHKREF(YruntimeYtruncateS),T4,YPint((P)2));
  T2 = CALL1(1,CHKREF(YruntimeY1st),T3);
  T1 = CALL2(1,CHKREF(YruntimeYfab),p_,T2);
  xF788 = T1;
  T5 = FUNFAB(fun_164,1,xF788);
  CALL2(1,CHKREF(YruntimeYdo_key_vals),T5,key_vals_);
  T0 = xF788;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assocs_test_166) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYassocs_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assocs_test_setter_167) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYassocs_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_168) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(YmacrosYEE));
}

FUNCODEDEF(fun_assocs_keys_169) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYassocs_keys));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assocs_keys_setter_170) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYassocs_keys));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_171) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_assocs_vals_172) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYassocs_vals));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assocs_vals_setter_173) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYassocs_vals));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_174) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_fab_175) {
  P c_,s_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLassocsG),Ynil);
  T0 = CALL3(1,CHKREF(YPisa),T1,Ynil,Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_len_176) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYassocs_keys),x_);
  T0 = CALL1(1,CHKREF(YruntimeYlen),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_177) {
  P keys_,vals_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(keys_, 0);
  ARG(vals_, 1);
loop:
  T1 = CALL2(1,CHKREF(YmacrosYEE),keys_,Ynil);
  if (T1 != YPfalse) {
    T0 = CHKREF(Ynul);
  } else {
    T4 = CALL1(1,CHKREF(YruntimeYassocs_test),FREEREF(0));
    T5 = CALL1(1,CHKREF(Yhead),keys_);
    T3 = CALL2(1,T4,FREEREF(1),T5);
    if (T3 != YPfalse) {
      T6 = CALL1(1,CHKREF(Yhead),vals_);
      T2 = T6;
    } else {
      T8 = CALL1(1,CHKREF(Ytail),keys_);
      T9 = CALL1(1,CHKREF(Ytail),vals_);
      a1 = T8;
      a2 = T9;
      keys_ = a1;
      vals_ = a2;
      goto loop;
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_178) {
  P x_,key_;
  P fndF789;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_177,3);
  fndF789 = T1;
  FUNINIT(fndF789, 3,x_,key_,fndF789);
  T3 = CALL1(1,CHKREF(YruntimeYassocs_keys),x_);
  T4 = CALL1(1,CHKREF(YruntimeYassocs_vals),x_);
  T2 = CALL2(1,fndF789,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fnd_179) {
  P keys_,vals_;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(keys_, 0);
  ARG(vals_, 1);
loop:
  T1 = CALL2(1,CHKREF(YmacrosYEE),keys_,Ynil);
  if (T1 != YPfalse) {
    T3 = CALL1(1,CHKREF(YruntimeYassocs_keys),FREEREF(1));
    T2 = CALL2(1,CHKREF(YmacrosYpair),FREEREF(0),T3);
    CALL2(1,CHKREF(YruntimeYassocs_keys_setter),T2,FREEREF(1));
    T5 = CALL1(1,CHKREF(YruntimeYassocs_vals),FREEREF(1));
    T4 = CALL2(1,CHKREF(YmacrosYpair),FREEREF(2),T5);
    CALL2(1,CHKREF(YruntimeYassocs_vals_setter),T4,FREEREF(1));
    T0 = FREEREF(2);
  } else {
    T8 = CALL1(1,CHKREF(YruntimeYassocs_test),FREEREF(1));
    T9 = CALL1(1,CHKREF(Yhead),keys_);
    T7 = CALL2(1,T8,FREEREF(0),T9);
    if (T7 != YPfalse) {
      T10 = CALL2(1,CHKREF(Yhead_setter),FREEREF(2),vals_);
      T6 = T10;
    } else {
      T12 = CALL1(1,CHKREF(Ytail),keys_);
      T13 = CALL1(1,CHKREF(Ytail),vals_);
      a1 = T12;
      a2 = T13;
      keys_ = a1;
      vals_ = a2;
      goto loop;
      T6 = T11;
    }
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_180) {
  P val_,x_,key_;
  P fndF790;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(val_, 0);
  ARG(x_, 1);
  ARG(key_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_179,4);
  fndF790 = T1;
  FUNINIT(fndF790, 4,key_,x_,val_,fndF790);
  T3 = CALL1(1,CHKREF(YruntimeYassocs_keys),x_);
  T4 = CALL1(1,CHKREF(YruntimeYassocs_vals),x_);
  T2 = CALL2(1,fndF790,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_181) {
  P d_,s_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYlen),s_);
  T1 = CALL2(1,CHKREF(YruntimeYfab),d_,T2);
  T0 = CALL2(1,CHKREF(YruntimeYalter),T1,s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_keys_182) {
  P d_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(d_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYlen),d_);
  T0 = CALL2(1,CHKREF(YruntimeYfrom_below),YPint((P)0),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_183) {
  P ds_,ss_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ds_, 0);
  ARG(ss_, 1);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),ds_);
  if (T2 != YPfalse) {
    T1 = YPtrue;
  } else {
    T3 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(1),ss_);
    T1 = T3;
  }
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(1),ss_);
    CALL3(1,CHKREF(YruntimeYnow_elt_setter),T4,FREEREF(0),ds_);
    T6 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),ds_);
    T7 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(1),ss_);
    a1 = T6;
    a2 = T7;
    ds_ = a1;
    ss_ = a2;
    goto loop;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alter_184) {
  P dst_,src_;
  P inF791;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_183,3);
  inF791 = T1;
  FUNINIT(inF791, 3,dst_,src_,inF791);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),dst_);
  T4 = CALL1(1,CHKREF(YruntimeYini_state),src_);
  T2 = CALL2(0,inF791,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YruntimeYrange_error) {
  P x_,i_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yerror),CHKREF(lit_207),x_,i_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYrange_check) {
  P x_,i_;
  P tmpF792;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYL),i_,YPint((P)0));
  tmpF792 = T2;
  if (tmpF792 != YPfalse) {
    T3 = tmpF792;
  } else {
    T5 = CALL1(1,CHKREF(YruntimeYlen),x_);
    T4 = CALL2(1,CHKREF(YruntimeYGE),i_,T5);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL2(1,CHKREF(YruntimeYrange_error),x_,i_);
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_1st_187) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYelt),x_,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2nd_188) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYelt),x_,YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_3rd_189) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYelt),x_,YPint((P)2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_last_190) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYlen),x_);
  T1 = CALL2(1,CHKREF(YruntimeY_),T2,YPint((P)1));
  T0 = CALL2(1,CHKREF(YruntimeYelt),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_new_191) {
  P c_,x_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYmemQ),c_,x_);
  T0 = CALL1(1,CHKREF(Ynot),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,CHKREF(YruntimeYadd),c_,x_);
  } else {
  }
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_addX_192) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYadd),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pos_193) {
  P x_,v_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYcurry),CHKREF(YmacrosYEE),v_);
  T0 = CALL2(1,CHKREF(YruntimeYfind_key),T1,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_in_194) {
  P ds_,ss_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ds_, 0);
  ARG(ss_, 1);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),ds_);
  if (T2 != YPfalse) {
    T1 = YPtrue;
  } else {
    T3 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(1),ss_);
    T1 = T3;
  }
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(1),ss_);
    CALL3(1,CHKREF(YruntimeYnow_elt_setter),T4,FREEREF(0),ds_);
    T6 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),ds_);
    T7 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(1),ss_);
    a1 = T6;
    a2 = T7;
    ds_ = a1;
    ss_ = a2;
    goto loop;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_into_195) {
  P dst_,src_,from_,below_;
  P inF793;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  ARG(from_, 2);
  ARG(below_, 3);
loop:
  T1 = FUNSHELL(1,fun_in_194,3);
  inF793 = T1;
  FUNINIT(inF793, 3,dst_,src_,inF793);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),dst_);
  T4 = CALL1(1,CHKREF(YruntimeYini_state),src_);
  T2 = CALL2(0,inF793,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_196) {
  P ds_,ss_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ds_, 0);
  ARG(ss_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),ss_);
  if (T1 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T2 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),ss_);
    CALL3(1,CHKREF(YruntimeYnow_elt_setter),T2,FREEREF(1),ds_);
    T4 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(1),ds_);
    T5 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),ss_);
    a1 = T4;
    a2 = T5;
    ds_ = a1;
    ss_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_197) {
  P ds_,i_;
  P inF794;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ds_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_in_196,3);
    inF794 = T3;
    FUNINIT(inF794, 3,FREEREF(1),FREEREF(2),inF794);
    T5 = CALL1(1,CHKREF(YruntimeYini_state),FREEREF(1));
    T4 = CALL2(0,inF794,ds_,T5);
    T2 = T4;
    T0 = T2;
  } else {
    T7 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(2),ds_);
    T8 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T7;
    a2 = T8;
    ds_ = a1;
    i_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_onto_198) {
  P nds_,ds_,i_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(nds_, 0);
  ARG(ds_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T2 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(2),ds_);
    CALL3(1,CHKREF(YruntimeYnow_elt_setter),T2,FREEREF(1),nds_);
    T4 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(1),nds_);
    T5 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(2),ds_);
    T6 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T4;
    a2 = T5;
    a3 = T6;
    nds_ = a1;
    ds_ = a2;
    i_ = a3;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_skip_199) {
  P ds_,i_;
  P ontoF795;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ds_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_onto_198,4);
    ontoF795 = T3;
    FUNINIT(ontoF795, 4,FREEREF(1),FREEREF(2),FREEREF(3),ontoF795);
    T4 = CALL3(0,ontoF795,FREEREF(4),ds_,FREEREF(0));
    T2 = T4;
    T0 = T2;
  } else {
    T6 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(3),ds_);
    T7 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T6;
    a2 = T7;
    ds_ = a1;
    i_ = a2;
    goto loop;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_200) {
  P nds_,ss_;
  P skipF796;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(nds_, 0);
  ARG(ss_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),ss_);
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_skip_199,6);
    skipF796 = T3;
    FUNINIT(skipF796, 6,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),nds_,skipF796);
    T4 = CALL2(0,skipF796,FREEREF(5),FREEREF(6));
    T2 = T4;
    T0 = T2;
  } else {
    T5 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),ss_);
    CALL3(1,CHKREF(YruntimeYnow_elt_setter),T5,FREEREF(3),nds_);
    T7 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(3),nds_);
    T8 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),ss_);
    a1 = T7;
    a2 = T8;
    nds_ = a1;
    ss_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_copy_201) {
  P nds_,ds_,i_;
  P insertF797;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(nds_, 0);
  ARG(ds_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_insert_200,8);
    insertF797 = T3;
    FUNINIT(insertF797, 8,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),ds_,FREEREF(0),insertF797);
    T5 = CALL1(1,CHKREF(YruntimeYini_state),FREEREF(1));
    T4 = CALL2(0,insertF797,nds_,T5);
    T2 = T4;
    T0 = T2;
  } else {
    T6 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(5),ds_);
    CALL3(1,CHKREF(YruntimeYnow_elt_setter),T6,FREEREF(4),nds_);
    T8 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(4),nds_);
    T9 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(5),ds_);
    T10 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T8;
    a2 = T9;
    a3 = T10;
    nds_ = a1;
    ds_ = a2;
    i_ = a3;
    goto loop;
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_setter_202) {
  P src_,dst_,from_,below_;
  P copyF804;
  P ndstF803;
  P new_lenF802;
  P findF801;
  P del_lenF800;
  P src_lenF799;
  P dst_lenF798;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
  ARG(from_, 2);
  ARG(below_, 3);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYlen),dst_);
  check_type(T1,CHKREF(YLintG));
  dst_lenF798 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYlen),src_);
  check_type(T3,CHKREF(YLintG));
  src_lenF799 = T3;
  T5 = CALL2(1,CHKREF(YruntimeY_),below_,from_);
  check_type(T5,CHKREF(YLintG));
  del_lenF800 = T5;
  T7 = CALL2(1,CHKREF(YruntimeYE),del_lenF800,src_lenF799);
  if (T7 != YPfalse) {
    T9 = FUNSHELL(1,fun_find_197,4);
    findF801 = T9;
    FUNINIT(findF801, 4,from_,src_,dst_,findF801);
    T11 = CALL1(1,CHKREF(YruntimeYini_state),dst_);
    T10 = CALL2(0,findF801,T11,YPint((P)0));
    T8 = T10;
    T6 = T8;
  } else {
    T14 = CALL2(1,CHKREF(YruntimeY_),dst_lenF798,del_lenF800);
    T13 = CALL2(1,CHKREF(YruntimeYA),T14,src_lenF799);
    new_lenF802 = T13;
    T16 = CALL2(1,CHKREF(YruntimeYfab),dst_,new_lenF802);
    ndstF803 = T16;
    T18 = FUNSHELL(1,fun_copy_201,7);
    copyF804 = T18;
    FUNINIT(copyF804, 7,from_,src_,below_,dst_lenF798,ndstF803,dst_,copyF804);
    T20 = CALL1(1,CHKREF(YruntimeYini_state),ndstF803);
    T21 = CALL1(1,CHKREF(YruntimeYini_state),dst_);
    T19 = CALL3(0,copyF804,T20,T21,YPint((P)0));
    T17 = T19;
    T15 = T17;
    T12 = T15;
    T6 = T12;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_203) {
  P seq_,sta_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(sta_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),sta_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,CHKREF(YruntimeYas_copy),FREEREF(0),seq_);
    T0 = T2;
  } else {
    T5 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),sta_);
    T4 = CALL2(1,CHKREF(YruntimeYadd),seq_,T5);
    T6 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),sta_);
    a1 = T4;
    a2 = T6;
    seq_ = a1;
    sta_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rev_204) {
  P x_;
  P conF805;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_con_203,2);
  conF805 = T1;
  FUNINIT(conF805, 2,x_,conF805);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),x_);
  T2 = CALL2(0,conF805,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_y_205) {
  P seq_,sta_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(sta_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),sta_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,CHKREF(YruntimeYrevX),seq_);
    T2 = CALL2(1,CHKREF(YruntimeYas_copy),FREEREF(1),T3);
    T0 = T2;
  } else {
    T6 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),sta_);
    T5 = CALL2(1,CHKREF(YruntimeYadd),seq_,T6);
    T7 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),sta_);
    a1 = T5;
    a2 = T7;
    seq_ = a1;
    sta_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_x_206) {
  P seq_,sta_;
  P con_yF806;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(sta_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),sta_);
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_con_y_205,3);
    con_yF806 = T3;
    FUNINIT(con_yF806, 3,FREEREF(1),FREEREF(0),con_yF806);
    T5 = CALL1(1,CHKREF(YruntimeYini_state),FREEREF(1));
    T4 = CALL2(0,con_yF806,seq_,T5);
    T2 = T4;
    T0 = T2;
  } else {
    T8 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),sta_);
    T7 = CALL2(1,CHKREF(YruntimeYadd),seq_,T8);
    T9 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),sta_);
    a1 = T7;
    a2 = T9;
    seq_ = a1;
    sta_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_cat2_207) {
  P x_,y_;
  P con_xF807;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_x_206,3);
  con_xF807 = T1;
  FUNINIT(con_xF807, 3,x_,y_,con_xF807);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),x_);
  T2 = CALL2(0,con_xF807,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cat_208) {
  P x_,ss_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(ss_, 1);
loop:
  T0 = CALL3(1,CHKREF(YruntimeYreduce),CHKREF(YruntimeYcat2),x_,ss_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_catX_209) {
  P x_,more_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T0 = CALLN(1,CHKREF(YmacrosYnapply),4,CHKREF(YmacrosYcat),YPfalse,x_,more_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_tail_210) {
  P p_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(p_, 0);
loop:
  T2 = CALL1(1,CHKREF(Ytail),p_);
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),T2);
  if (T1 != YPfalse) {
    T0 = p_;
  } else {
    T4 = CALL1(1,CHKREF(Ytail),p_);
    a1 = T4;
    p_ = a1;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_211) {
  P x_,y_;
  P find_tailF808;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    CALL2(1,CHKREF(Ytail_setter),y_,x_);
    T3 = FUNSHELL(1,fun_find_tail_210,1);
    find_tailF808 = T3;
    FUNINIT(find_tailF808, 1,find_tailF808);
    T4 = CALL1(1,find_tailF808,y_);
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1209_212) {
  P x_1207_;
  P xF809;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1207_, 0);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1207_);
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),x_1207_);
    xF809 = T4;
    T6 = BOXVAL(FREEREF(1));
    T7 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLlstG),xF809);
    T5 = CALL2(1,FREEREF(2),T6,T7);
    BOXVAL(FREEREF(1)) = T5;
    T9 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),x_1207_);
    a1 = T9;
    x_1207_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_catX_213) {
  P x_,more_;
  P x_1209F814;
  P x_1208F813;
  P curF812;
  P resultF811;
  P connectF810;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T1 = fun_211;
  connectF810 = T1;
  T3 = CALL1(1,CHKREF(Ylst),YPfalse);
  resultF811 = T3;
  curF812 = resultF811;
  curF812 = BOXFAB(curF812);
  T7 = BOXVAL(curF812);
  T8 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLlstG),x_);
  T6 = CALL2(1,connectF810,T7,T8);
  BOXVAL(curF812) = T6;
  x_1208F813 = more_;
  T10 = FUNSHELL(1,fun_x_1209_212,4);
  x_1209F814 = T10;
  FUNINIT(x_1209F814, 4,x_1208F813,curF812,connectF810,x_1209F814);
  T12 = CALL1(1,CHKREF(YruntimeYini_state),x_1208F813);
  T11 = CALL1(0,x_1209F814,T12);
  T9 = T11;
  T13 = CALL1(1,CHKREF(Ytail),resultF811);
  T4 = T13;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_x_214) {
  P seq_,i_,sta_;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(seq_, 0);
  ARG(i_, 1);
  ARG(sta_, 2);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),sta_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,CHKREF(YruntimeYrevX),seq_);
    T2 = CALL2(1,CHKREF(YruntimeYas_copy),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,CHKREF(YruntimeYGE),i_,FREEREF(2));
    if (T7 != YPfalse) {
      T8 = CALL2(1,CHKREF(YruntimeYL),i_,FREEREF(3));
      T6 = T8;
    } else {
      T6 = YPfalse;
    }
    if (T6 != YPfalse) {
      T10 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),sta_);
      T9 = CALL2(1,CHKREF(YruntimeYadd),seq_,T10);
      T5 = T9;
    } else {
      T5 = seq_;
    }
    T11 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    T12 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),sta_);
    a1 = T5;
    a2 = T11;
    a3 = T12;
    seq_ = a1;
    i_ = a2;
    sta_ = a3;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_215) {
  P x_,from_,below_;
  P con_xF815;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(from_, 1);
  ARG(below_, 2);
loop:
  T1 = FUNSHELL(1,fun_con_x_214,4);
  con_xF815 = T1;
  FUNINIT(con_xF815, 4,x_,con_xF815,from_,below_);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),x_);
  T2 = CALL3(1,con_xF815,Ynil,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_216) {
  P seq_,sta_;
  P eF816;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(sta_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),sta_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,CHKREF(YruntimeYas_copy),FREEREF(0),seq_);
    T0 = T2;
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),sta_);
    eF816 = T4;
    T7 = CALL1(1,FREEREF(2),eF816);
    if (T7 != YPfalse) {
      T8 = CALL2(1,CHKREF(YruntimeYadd),seq_,eF816);
      T6 = T8;
    } else {
      T6 = seq_;
    }
    T9 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),sta_);
    a1 = T6;
    a2 = T9;
    seq_ = a1;
    sta_ = a2;
    goto loop;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pick_217) {
  P test_,x_;
  P conF817;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_216,3);
  conF817 = T1;
  FUNINIT(conF817, 3,x_,conF817,test_);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),x_);
  T2 = CALL2(0,conF817,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_218) {
  P s_,e_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYmemQ),s_,e_);
  if (T1 != YPfalse) {
    T0 = s_;
  } else {
    T2 = CALL2(1,CHKREF(YmacrosYpair),e_,s_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_dups_219) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = fun_218;
  T2 = CALL3(1,CHKREF(YruntimeYreduce),T3,Ynil,x_);
  T1 = CALL1(1,CHKREF(YruntimeYrevX),T2);
  T0 = CALL2(1,CHKREF(YruntimeYas_copy),x_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_220) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYNEE),e_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_221) {
  P s_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNFAB(fun_220,1,x_);
  T0 = CALL2(1,CHKREF(YruntimeYpick),T1,s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_222) {
  P s_,e_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
loop:
  T2 = CALL1(1,CHKREF(YmacrosYemptyQ),s_);
  if (T2 != YPfalse) {
    T1 = CHKREF(lit_23);
  } else {
    T1 = CHKREF(lit_245);
  }
  T3 = CALL1(1,CHKREF(YruntimeYto_str),e_);
  T0 = CALL3(1,CHKREF(YmacrosYcat),s_,T1,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_vals_to_str_223) {
  P s_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T1 = fun_222;
  T0 = CALL3(1,CHKREF(YruntimeYreduce),T1,CHKREF(lit_23),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_224) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYvals_to_str),x_);
  T0 = CALL3(1,CHKREF(YmacrosYcat),CHKREF(lit_246),T1,CHKREF(lit_247));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pair_225) {
  P h_,t_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T1 = (P)YPpair(CHKREF(YLlstG),Ynil);
  T3 = (P)YPpair(CHKREF(Ytail),Ynil);
  T2 = (P)YPpair(CHKREF(Yhead),T3);
  T5 = (P)YPpair(t_,Ynil);
  T4 = (P)YPpair(h_,T5);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T4);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_226) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(Ynil);
}

FUNCODEDEF(fun_emptyQ_227) {
  P c_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,CHKREF(Yobject_class),c_);
  T1 = CALL1(1,CHKREF(YruntimeYempty),T2);
  T0 = CALL2(1,CHKREF(YmacrosYEE),c_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_228) {
  P i_,res_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(res_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYG),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,CHKREF(YruntimeY_),i_,YPint((P)1));
    T5 = (P)YPpair(FREEREF(1),Ynil);
    T6 = (P)YPpair(CHKREF(Ytail),Ynil);
    T7 = (P)YPpair(res_,Ynil);
    T4 = CALL3(1,CHKREF(YPisa),T5,T6,T7);
    a1 = T3;
    a2 = T4;
    i_ = a1;
    res_ = a2;
    goto loop;
    T0 = T2;
  } else {
    T0 = res_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fab_229) {
  P t_,s_;
  P fabF818;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_fab_228,2);
  fabF818 = T1;
  FUNINIT(fabF818, 2,fabF818,t_);
  T3 = CALL1(1,CHKREF(YruntimeYempty),t_);
  T2 = CALL2(1,fabF818,s_,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_230) {
  P p_,x_;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(x_, 1);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_build_231) {
  P index_,result_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(index_, 0);
  ARG(result_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),index_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = result_;
  } else {
    T3 = CALL2(1,CHKREF(YruntimeY_),index_,YPint((P)1));
    T5 = (P)YPpair(FREEREF(1),Ynil);
    T7 = (P)YPpair(CHKREF(Ytail),Ynil);
    T6 = (P)YPpair(CHKREF(Yhead),T7);
    T9 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(2),index_);
    T10 = (P)YPpair(result_,Ynil);
    T8 = (P)YPpair(T9,T10);
    T4 = CALL3(1,CHKREF(YPisa),T5,T6,T8);
    a1 = T3;
    a2 = T4;
    index_ = a1;
    result_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fabs_232) {
  P c_,objects_;
  P buildF819;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
loop:
  T1 = FUNSHELL(1,fun_build_231,3);
  buildF819 = T1;
  FUNINIT(buildF819, 3,buildF819,c_,objects_);
  T4 = CALL1(1,CHKREF(YruntimeYlen),objects_);
  T3 = CALL2(1,CHKREF(YruntimeY_),T4,YPint((P)1));
  T5 = CALL1(1,CHKREF(YruntimeYempty),c_);
  T2 = CALL2(1,buildF819,T3,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lst_233) {
  P objects_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(objects_, 0);
loop:
  T0 = CALLN(1,CHKREF(YmacrosYnapply),4,CHKREF(YruntimeYfabs),YPfalse,CHKREF(YLlstG),objects_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sum_234) {
  P count_,x_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(count_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = count_;
  } else {
    T3 = CALL2(1,CHKREF(YruntimeYA),count_,YPint((P)1));
    T4 = CALL1(1,CHKREF(Ytail),x_);
    a1 = T3;
    a2 = T4;
    count_ = a1;
    x_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_235) {
  P x_;
  P sumF820;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_sum_234,1);
  sumF820 = T1;
  FUNINIT(sumF820, 1,sumF820);
  T2 = CALL2(1,sumF820,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_236) {
  P count_,x_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(count_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = CHKREF(Ynul);
  } else {
    T3 = CALL2(1,CHKREF(YmacrosYEE),count_,FREEREF(0));
    if (T3 != YPfalse) {
      T4 = CALL1(1,CHKREF(Yhead),x_);
      T2 = T4;
    } else {
      T6 = CALL2(1,CHKREF(YruntimeYA),count_,YPint((P)1));
      T7 = CALL1(1,CHKREF(Ytail),x_);
      a1 = T6;
      a2 = T7;
      count_ = a1;
      x_ = a2;
      goto loop;
      T2 = T5;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_237) {
  P x_,key_;
  P fndF821;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_236,2);
  fndF821 = T1;
  FUNINIT(fndF821, 2,key_,fndF821);
  T2 = CALL2(1,fndF821,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fnd_238) {
  P count_,x_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(count_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = CHKREF(Ynul);
  } else {
    T3 = CALL2(1,CHKREF(YmacrosYEE),count_,FREEREF(0));
    if (T3 != YPfalse) {
      T4 = CALL2(1,CHKREF(Yhead_setter),FREEREF(1),x_);
      T2 = T4;
    } else {
      T6 = CALL2(1,CHKREF(YruntimeYA),count_,YPint((P)1));
      T7 = CALL1(1,CHKREF(Ytail),x_);
      a1 = T6;
      a2 = T7;
      count_ = a1;
      x_ = a2;
      goto loop;
      T2 = T5;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_239) {
  P z_,x_,key_;
  P fndF822;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(key_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_238,3);
  fndF822 = T1;
  FUNINIT(fndF822, 3,key_,z_,fndF822);
  T2 = CALL2(1,fndF822,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_240) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,CHKREF(YmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_push_241) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,CHKREF(YmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pop_242) {
  P c_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,CHKREF(Ytail),c_);
  T2 = CALL1(1,CHKREF(Yhead),c_);
  T0 = CALL2(1,CHKREF(YmacrosYtup),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_243) {
  P l_,r_;
  P tF823;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = r_;
  } else {
    T3 = CALL1(1,CHKREF(Ytail),l_);
    tF823 = T3;
    CALL2(1,CHKREF(Ytail_setter),r_,l_);
    a1 = tF823;
    a2 = l_;
    l_ = a1;
    r_ = a2;
    goto loop;
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_revX_244) {
  P c_;
  P loopF824;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_243,1);
  loopF824 = T1;
  FUNINIT(loopF824, 1,loopF824);
  T4 = CALL1(1,CHKREF(Yobject_class),c_);
  T3 = CALL1(1,CHKREF(YruntimeYempty),T4);
  T2 = CALL2(0,loopF824,c_,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assq_245) {
  P x_,l_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,CHKREF(Yhead),l_);
    T4 = CALL1(1,CHKREF(Yhead),T5);
    T3 = CALL2(1,CHKREF(YmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,CHKREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,CHKREF(Ytail),l_);
      T7 = CALL2(1,CHKREF(YruntimeYassq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assqn_246) {
  P x_,l_,pos_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
  ARG(pos_, 2);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,CHKREF(Yhead),l_);
    T4 = CALL2(1,CHKREF(YruntimeYelt),T5,pos_);
    T3 = CALL2(1,CHKREF(YmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,CHKREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,CHKREF(Ytail),l_);
      T7 = CALL3(1,CHKREF(YruntimeYassqn),x_,T8,pos_);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fnd_247) {
  P x_,px_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(px_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,CHKREF(Yhead),px_);
    T0 = T2;
  } else {
    T4 = CALL1(1,CHKREF(Ytail),x_);
    a1 = T4;
    a2 = x_;
    x_ = a1;
    px_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_last_248) {
  P x_;
  P fndF825;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_fnd_247,1);
  fndF825 = T1;
  FUNINIT(fndF825, 1,fndF825);
  T2 = CALL2(0,fndF825,x_,x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ini_state_249) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_fin_stateQ_250) {
  P U_,state_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
  T0 = CALL1(1,CHKREF(YmacrosYemptyQ),state_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_state_251) {
  P U_,state_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
  T0 = CALL1(1,CHKREF(Ytail),state_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_elt_252) {
  P U_,state_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
  T0 = CALL1(1,CHKREF(Yhead),state_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_elt_setter_253) {
  P z_,U_,state_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(U_, 1);
  ARG(state_, 2);
loop:
  T0 = CALL2(1,CHKREF(Yhead_setter),z_,state_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fnd_254) {
  P key_,c_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(key_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL2(1,CHKREF(YmacrosYEE),c_,FREEREF(0));
  if (T1 != YPfalse) {
    T0 = key_;
  } else {
    T3 = CALL2(1,CHKREF(YruntimeYA),key_,YPint((P)1));
    T4 = CALL1(1,CHKREF(Ytail),c_);
    a1 = T3;
    a2 = T4;
    key_ = a1;
    c_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_key_255) {
  P c_,state_;
  P fndF826;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(state_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_254,2);
  fndF826 = T1;
  FUNINIT(fndF826, 2,state_,fndF826);
  T2 = CALL2(1,fndF826,YPint((P)0),c_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_copy_state_256) {
  P U_,state_;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
UNLINK_STACK();
  RET(state_);
}

FUNCODEDEF(fun_ini_state_257) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(YPint((P)0));
}

FUNCODEDEF(fun_fin_stateQ_258) {
  P c_,state_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(state_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYlen),c_);
  T0 = CALL2(1,CHKREF(YmacrosYEE),state_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_state_259) {
  P U_,state_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYA),state_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_elt_260) {
  P c_,state_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(state_, 1);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYlow_elt),c_,state_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_elt_setter_261) {
  P z_,c_,state_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(c_, 1);
  ARG(state_, 2);
loop:
  T0 = CALL3(1,CHKREF(YruntimeYlow_elt_setter),z_,c_,state_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_key_262) {
  P U_,state_;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
UNLINK_STACK();
  RET(state_);
}

FUNCODEDEF(fun_copy_state_263) {
  P U_,state_;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
UNLINK_STACK();
  RET(state_);
}

FUNCODEDEF(fun_len_264) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YOolen(x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_265) {
  P x_,i_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T0 = (P)YOoelt(x_,i_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_266) {
  P x_,i_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  CALL2(1,CHKREF(YruntimeYrange_check),x_,i_);
  T0 = (P)YOoelt(x_,i_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_str_267) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYvals_to_str),x_);
  T0 = CALL3(1,CHKREF(YmacrosYcat),CHKREF(lit_271),T1,CHKREF(lit_272));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_empty_268) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(CHKREF(YPvnul));
}

FUNCODEDEF(YruntimeYvec) {
  P objects_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(objects_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLvecG),objects_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_270) {
  P U_,x_;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(x_, 1);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_fab_271) {
  P x_,s_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
loop:
  T1 = (P)YPiu(s_);
  T0 = (P)YPvec(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_len_272) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPvlen(x_);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_273) {
  P x_,i_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPvelt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_setter_274) {
  P z_,x_,i_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPvelt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_275) {
  P x_,i_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  CALL2(1,CHKREF(YruntimeYrange_check),x_,i_);
  T1 = (P)YPiu(i_);
  T0 = (P)YPvelt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_276) {
  P z_,x_,i_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  CALL2(1,CHKREF(YruntimeYrange_check),x_,i_);
  T1 = (P)YPiu(i_);
  T0 = (P)YPvelt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_str_277) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYvals_to_str),x_);
  T0 = CALL3(1,CHKREF(YmacrosYcat),CHKREF(lit_275),T1,CHKREF(lit_276));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_buf_len_278) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYbuf_len));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_buf_len_setter_279) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYbuf_len));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_280) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_buf_dat_281) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYbuf_dat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_buf_dat_setter_282) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYbuf_dat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_283) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(lit_282));
}

FUNCODEDEF(fun_empty_284) {
  P c_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLbufG),Ynil);
  T0 = CALL3(1,CHKREF(YPisa),T1,Ynil,Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_285) {
  P c_,s_;
  P datF827;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYpower_of_two_ceiling),s_);
  T1 = CALL2(1,CHKREF(YruntimeYfab),CHKREF(YLvecG),T2);
  datF827 = T1;
  T4 = (P)YPpair(CHKREF(YruntimeYLbufG),Ynil);
  T6 = (P)YPpair(CHKREF(YruntimeYbuf_dat),Ynil);
  T5 = (P)YPpair(CHKREF(YruntimeYbuf_len),T6);
  T8 = (P)YPpair(datF827,Ynil);
  T7 = (P)YPpair(s_,T8);
  T3 = CALL3(1,CHKREF(YPisa),T4,T5,T7);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_buf_286) {
  P elts_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(elts_, 0);
loop:
  T0 = CALLN(1,CHKREF(YmacrosYnapply),4,CHKREF(YruntimeYfabs),YPfalse,CHKREF(YruntimeYLbufG),elts_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_len_287) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,CHKREF(YruntimeYbuf_len),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fill_288) {
  P i_;
  P tmpF829;
  P tmpF828;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),i_,FREEREF(0));
  tmpF828 = T1;
  if (tmpF828 != YPfalse) {
    T4 = CALL3(1,CHKREF(YruntimeYlow_elt_setter),CHKREF(Ynul),FREEREF(1),i_);
    tmpF829 = T4;
    if (tmpF829 != YPfalse) {
      T7 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
      a1 = T7;
      i_ = a1;
      goto loop;
      T5 = T6;
    } else {
      T5 = YPfalse;
    }
    T3 = T5;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_setter_289) {
  P new_len_,c_;
  P fillF833;
  P old_lenF832;
  P new_dataF831;
  P datF830;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYbuf_dat),c_);
  datF830 = T1;
  T4 = CALL1(1,CHKREF(YruntimeYlen),datF830);
  T3 = CALL2(1,CHKREF(YruntimeYG),new_len_,T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,CHKREF(YruntimeYpower_of_two_ceiling),new_len_);
    T6 = CALL2(1,CHKREF(YruntimeYfab),CHKREF(YLvecG),T7);
    new_dataF831 = T6;
    CALL2(1,CHKREF(YruntimeYalter),new_dataF831,datF830);
    CALL2(1,CHKREF(YruntimeYbuf_len_setter),new_len_,c_);
    T8 = CALL2(1,CHKREF(YruntimeYbuf_dat_setter),new_dataF831,c_);
    T5 = T8;
    T2 = T5;
  } else {
    T11 = CALL1(1,CHKREF(YruntimeYlen),c_);
    T10 = CALL2(1,CHKREF(YruntimeYL),new_len_,T11);
    if (T10 != YPfalse) {
      T13 = CALL1(1,CHKREF(YruntimeYlen),c_);
      old_lenF832 = T13;
      CALL2(1,CHKREF(YruntimeYbuf_len_setter),new_len_,c_);
      T15 = FUNSHELL(1,fun_fill_288,3);
      fillF833 = T15;
      FUNINIT(fillF833, 3,old_lenF832,datF830,fillF833);
      T16 = CALL1(1,fillF833,new_len_);
      T14 = T16;
      T12 = T14;
      T9 = T12;
    } else {
      T17 = CALL2(1,CHKREF(YruntimeYbuf_len_setter),new_len_,c_);
      T9 = T17;
    }
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_290) {
  P x_,i_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYbuf_dat),x_);
  T0 = CALL2(1,CHKREF(YruntimeYlow_elt),T1,i_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_setter_291) {
  P z_,x_,i_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYlen),x_);
  T0 = CALL2(1,CHKREF(YruntimeYGE),i_,T1);
  if (T0 != YPfalse) {
    T3 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    T2 = CALL2(1,CHKREF(YruntimeYlen_setter),T3,x_);
  } else {
  }
  T5 = CALL1(1,CHKREF(YruntimeYbuf_dat),x_);
  T4 = CALL3(1,CHKREF(YruntimeYlow_elt_setter),z_,T5,i_);
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_elt_292) {
  P c_,i_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(i_, 1);
loop:
  CALL2(1,CHKREF(YruntimeYrange_check),c_,i_);
  T0 = CALL2(1,CHKREF(YruntimeYlow_elt),c_,i_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_293) {
  P z_,c_,i_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(c_, 1);
  ARG(i_, 2);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYL),i_,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,CHKREF(YruntimeYrange_error),c_,i_);
  } else {
  }
  T2 = CALL3(1,CHKREF(YruntimeYlow_elt_setter),z_,c_,i_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_addX_294) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL1(1,CHKREF(YruntimeYlen),c_);
  CALL3(1,CHKREF(YruntimeYlow_elt_setter),x_,c_,T0);
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_push_lastX_295) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYaddX),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pop_lastX_296) {
  P c_;
  P xF835;
  P new_lenF834;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYlen),c_);
  T1 = CALL2(1,CHKREF(YruntimeY_),T2,YPint((P)1));
  new_lenF834 = T1;
  T4 = CALL2(1,CHKREF(YruntimeYlow_elt),c_,new_lenF834);
  xF835 = T4;
  CALL2(1,CHKREF(YruntimeYlen_setter),new_lenF834,c_);
  T3 = xF835;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1215_297) {
  P x_1213_;
  P eF836;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1213_, 0);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1213_);
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),x_1213_);
    eF836 = T4;
    CALL2(1,CHKREF(YruntimeYaddX),FREEREF(1),eF836);
    T6 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),x_1213_);
    a1 = T6;
    x_1213_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1212_298) {
  P x_1210_;
  P x_1215F839;
  P x_1214F838;
  P sF837;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1210_, 0);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1210_);
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),x_1210_);
    sF837 = T4;
    x_1214F838 = sF837;
    T6 = FUNSHELL(1,fun_x_1215_297,3);
    x_1215F839 = T6;
    FUNINIT(x_1215F839, 3,x_1214F838,FREEREF(1),x_1215F839);
    T8 = CALL1(1,CHKREF(YruntimeYini_state),x_1214F838);
    T7 = CALL1(0,x_1215F839,T8);
    T5 = T7;
    T10 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),x_1210_);
    a1 = T10;
    x_1210_ = a1;
    goto loop;
    T3 = T9;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_catX_299) {
  P x_,more_;
  P x_1212F841;
  P x_1211F840;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  x_1211F840 = more_;
  T1 = FUNSHELL(1,fun_x_1212_298,3);
  x_1212F841 = T1;
  FUNINIT(x_1212F841, 3,x_1211F840,x_,x_1212F841);
  T3 = CALL1(1,CHKREF(YruntimeYini_state),x_1211F840);
  T2 = CALL1(0,x_1212F841,T3);
  T0 = T2;
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_range_from_300) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYrange_from));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_from_setter_301) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYrange_from));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_302) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_range_to_303) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYrange_to));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_to_setter_304) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYrange_to));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_305) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_range_below_306) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYrange_below));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_below_setter_307) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYrange_below));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_308) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_range_above_309) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYrange_above));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_above_setter_310) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYrange_above));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_311) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_range_by_312) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYrange_by));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_by_setter_313) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYrange_by));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_314) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)1));
}

FUNCODEDEF(fun_fab_315) {
  P c_,s_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYfrom_below),YPint((P)0),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_316) {
  P from_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(from_, 0);
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLrangeG),Ynil);
  T2 = (P)YPpair(CHKREF(YruntimeYrange_from),Ynil);
  T3 = (P)YPpair(from_,Ynil);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_by_317) {
  P from_,by_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(from_, 0);
  ARG(by_, 1);
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLrangeG),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYrange_by),Ynil);
  T2 = (P)YPpair(CHKREF(YruntimeYrange_from),T3);
  T5 = (P)YPpair(by_,Ynil);
  T4 = (P)YPpair(from_,T5);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_to_318) {
  P from_,to_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(from_, 0);
  ARG(to_, 1);
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLrangeG),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYrange_to),Ynil);
  T2 = (P)YPpair(CHKREF(YruntimeYrange_from),T3);
  T5 = (P)YPpair(to_,Ynil);
  T4 = (P)YPpair(from_,T5);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_to_by_319) {
  P from_,to_,by_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(from_, 0);
  ARG(to_, 1);
  ARG(by_, 2);
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLrangeG),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYrange_by),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYrange_to),T4);
  T2 = (P)YPpair(CHKREF(YruntimeYrange_from),T3);
  T7 = (P)YPpair(by_,Ynil);
  T6 = (P)YPpair(to_,T7);
  T5 = (P)YPpair(from_,T6);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T5);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_below_320) {
  P from_,below_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(from_, 0);
  ARG(below_, 1);
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLrangeG),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYrange_below),Ynil);
  T2 = (P)YPpair(CHKREF(YruntimeYrange_from),T3);
  T5 = (P)YPpair(below_,Ynil);
  T4 = (P)YPpair(from_,T5);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_below_by_321) {
  P from_,below_,by_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(from_, 0);
  ARG(below_, 1);
  ARG(by_, 2);
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLrangeG),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYrange_by),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYrange_below),T4);
  T2 = (P)YPpair(CHKREF(YruntimeYrange_from),T3);
  T7 = (P)YPpair(by_,Ynil);
  T6 = (P)YPpair(below_,T7);
  T5 = (P)YPpair(from_,T6);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T5);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_above_322) {
  P from_,above_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(from_, 0);
  ARG(above_, 1);
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLrangeG),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYrange_above),Ynil);
  T2 = (P)YPpair(CHKREF(YruntimeYrange_from),T3);
  T5 = (P)YPpair(above_,Ynil);
  T4 = (P)YPpair(from_,T5);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_above_by_323) {
  P from_,above_,by_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(from_, 0);
  ARG(above_, 1);
  ARG(by_, 2);
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLrangeG),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYrange_by),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYrange_above),T4);
  T2 = (P)YPpair(CHKREF(YruntimeYrange_from),T3);
  T7 = (P)YPpair(by_,Ynil);
  T6 = (P)YPpair(above_,T7);
  T5 = (P)YPpair(from_,T6);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T5);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ini_state_324) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,CHKREF(YruntimeYrange_from),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fin_stateQ_325) {
  P c_,state_;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(state_, 1);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYrange_by),c_);
  T1 = CALL1(1,CHKREF(YruntimeYnegQ),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,CHKREF(YruntimeYrange_to),c_);
    T4 = CALL2(1,CHKREF(YmacrosYEE),T5,CHKREF(Ynul));
    if (T4 != YPfalse) {
      T8 = CALL1(1,CHKREF(YruntimeYrange_above),c_);
      T7 = CALL2(1,CHKREF(YmacrosYEE),T8,CHKREF(Ynul));
      if (T7 != YPfalse) {
        T6 = YPfalse;
      } else {
        T10 = CALL1(1,CHKREF(YruntimeYrange_above),c_);
        T9 = CALL2(1,CHKREF(YruntimeYLE),state_,T10);
        T6 = T9;
      }
      T3 = T6;
    } else {
      T12 = CALL1(1,CHKREF(YruntimeYrange_to),c_);
      T11 = CALL2(1,CHKREF(YruntimeYL),state_,T12);
      T3 = T11;
    }
    T0 = T3;
  } else {
    T15 = CALL1(1,CHKREF(YruntimeYrange_to),c_);
    T14 = CALL2(1,CHKREF(YmacrosYEE),T15,CHKREF(Ynul));
    if (T14 != YPfalse) {
      T18 = CALL1(1,CHKREF(YruntimeYrange_below),c_);
      T17 = CALL2(1,CHKREF(YmacrosYEE),T18,CHKREF(Ynul));
      if (T17 != YPfalse) {
        T16 = YPfalse;
      } else {
        T20 = CALL1(1,CHKREF(YruntimeYrange_below),c_);
        T19 = CALL2(1,CHKREF(YruntimeYGE),state_,T20);
        T16 = T19;
      }
      T13 = T16;
    } else {
      T22 = CALL1(1,CHKREF(YruntimeYrange_to),c_);
      T21 = CALL2(1,CHKREF(YruntimeYG),state_,T22);
      T13 = T21;
    }
    T0 = T13;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_state_326) {
  P c_,state_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(state_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYrange_by),c_);
  T0 = CALL2(1,CHKREF(YruntimeYA),state_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_elt_327) {
  P c_,state_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(state_, 1);
loop:
UNLINK_STACK();
  QRET(state_);
}

FUNCODEDEF(fun_copy_state_328) {
  P U_,state_;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
UNLINK_STACK();
  RET(state_);
}

FUNCODEDEF(fun_step_first_329) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYstep_first));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_step_first_setter_330) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYstep_first));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_331) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_step_then_332) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYstep_then));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_step_then_setter_333) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYstep_then));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_334) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_first_then_335) {
  P first_,then_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(first_, 0);
  ARG(then_, 1);
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLstepG),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYstep_then),Ynil);
  T2 = (P)YPpair(CHKREF(YruntimeYstep_first),T3);
  T5 = (P)YPpair(then_,Ynil);
  T4 = (P)YPpair(first_,T5);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ini_state_336) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_fin_stateQ_337) {
  P c_,state_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(state_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_nxt_state_338) {
  P c_,state_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(state_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_now_elt_339) {
  P c_,state_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(state_, 1);
loop:
  if (state_ != YPfalse) {
    T1 = CALL1(1,CHKREF(YruntimeYstep_first),c_);
    T0 = T1;
  } else {
    T2 = CALL1(1,CHKREF(YruntimeYstep_then),c_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_copy_state_340) {
  P U_,state_;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(state_, 1);
loop:
UNLINK_STACK();
  RET(state_);
}

FUNCODEDEF(fun_assoc_key_341) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_key_setter_342) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_343) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_assoc_value_344) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_setter_345) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_346) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(YruntimeYassoc) {
  P x_,y_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLassocG),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYassoc_value),Ynil);
  T2 = (P)YPpair(CHKREF(YruntimeYassoc_key),T3);
  T5 = (P)YPpair(y_,Ynil);
  T4 = (P)YPpair(x_,T5);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assocq_348) {
  P x_,l_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,CHKREF(Yhead),l_);
    T4 = CALL1(1,CHKREF(YruntimeYassoc_key),T5);
    T3 = CALL2(1,CHKREF(YmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,CHKREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,CHKREF(Ytail),l_);
      T7 = CALL2(1,CHKREF(YruntimeYassocq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_str_349) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYvals_to_str),x_);
  T0 = CALL3(1,CHKREF(YmacrosYcat),CHKREF(lit_329),T1,CHKREF(lit_330));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_empty_350) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(CHKREF(YPsnul));
}

FUNCODEDEF(fun_default_351) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  QRET(YPchr((P)32));
}

FUNCODEDEF(fun_fab_352) {
  P x_,s_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
loop:
  T1 = (P)YPiu(s_);
  T0 = (P)YPstr(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_str_353) {
  P objects_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(objects_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYfabs),CHKREF(YLstrG),objects_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_354) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPslen(x_);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_355) {
  P x_,i_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T2 = (P)YPiu(i_);
  T1 = (P)YPselt(x_,T2);
  T0 = (P)YPcb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_setter_356) {
  P z_,x_,i_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  T1 = (P)YPcu(z_);
  T2 = (P)YPiu(i_);
  T0 = (P)YPselt_setter(T1,x_,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_357) {
  P x_,i_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  CALL2(1,CHKREF(YruntimeYrange_check),x_,i_);
  T2 = (P)YPiu(i_);
  T1 = (P)YPselt(x_,T2);
  T0 = (P)YPcb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_setter_358) {
  P z_,x_,i_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  CALL2(1,CHKREF(YruntimeYrange_check),x_,i_);
  T1 = (P)YPcu(z_);
  T2 = (P)YPiu(i_);
  T0 = (P)YPselt_setter(T1,x_,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_str_359) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_add_360) {
  P s_,c_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYto_str),c_);
  T0 = CALL2(1,CHKREF(YmacrosYcat),s_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_361) {
  P i_,j_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(j_, 1);
loop:
  T3 = CALL1(1,CHKREF(YruntimeYlen),FREEREF(0));
  T2 = CALL2(1,CHKREF(YruntimeYE),j_,T3);
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(0),j_);
    CALL3(1,CHKREF(YruntimeYelt_setter),T4,FREEREF(1),i_);
    T6 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    T7 = CALL2(1,CHKREF(YruntimeYA),j_,YPint((P)1));
    a1 = T6;
    a2 = T7;
    i_ = a1;
    j_ = a2;
    goto loop;
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_362) {
  P i_,s_;
  P loopF842;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_361,3);
  loopF842 = T1;
  FUNINIT(loopF842, 3,s_,FREEREF(0),loopF842);
  T2 = CALL2(0,loopF842,i_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ascii_Gchar_363) {
  P n_;
  P tmpF843;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYelt),CHKREF(YruntimeYascii_chars),n_);
  tmpF843 = T1;
  if (tmpF843 != YPfalse) {
    T2 = tmpF843;
  } else {
    T3 = CALL2(1,CHKREF(Yerror),CHKREF(lit_342),n_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_char_Ginteger_364) {
  P char_;
  P T0;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),char_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_integer_Gchar_365) {
  P n_;
  P T0;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLchrG),n_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_366) {
  P i_;
  P cF844;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,CHKREF(Ylst),FREEREF(1),FREEREF(2));
    T0 = T2;
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYelt),CHKREF(YruntimeYascii_chars),i_);
    cF844 = T4;
    if (cF844 != YPfalse) {
      T7 = CALL1(1,CHKREF(YruntimeYchar_Ginteger),cF844);
      T6 = CALL2(1,CHKREF(YruntimeY_),T7,FREEREF(1));
      T5 = CALL3(1,CHKREF(YruntimeYelt_setter),i_,FREEREF(2),T6);
    } else {
    }
    T9 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T9;
    i_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_367) {
  P i_,least_,greatest_;
  P nF848;
  P cF847;
  P loopF846;
  P vF845;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(i_, 0);
  ARG(least_, 1);
  ARG(greatest_, 2);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T6 = CALL2(1,CHKREF(YruntimeY_),greatest_,least_);
    T5 = CALL2(1,CHKREF(YruntimeYA),T6,YPint((P)1));
    T4 = CALL2(1,CHKREF(YruntimeYfab),CHKREF(YLvecG),T5);
    T3 = CALL2(1,CHKREF(YruntimeYfill),T4,YPfalse);
    vF845 = T3;
    T8 = FUNSHELL(1,fun_loop_366,4);
    loopF846 = T8;
    FUNINIT(loopF846, 4,FREEREF(0),least_,vF845,loopF846);
    T9 = CALL1(0,loopF846,YPint((P)0));
    T7 = T9;
    T2 = T7;
    T0 = T2;
  } else {
    T11 = CALL2(1,CHKREF(YruntimeYelt),CHKREF(YruntimeYascii_chars),i_);
    cF847 = T11;
    if (cF847 != YPfalse) {
      T14 = CALL1(1,CHKREF(YruntimeYchar_Ginteger),cF847);
      nF848 = T14;
      T16 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
      if (least_ != YPfalse) {
        T18 = CALL2(1,CHKREF(YruntimeYmin),least_,nF848);
        T17 = T18;
      } else {
        T17 = nF848;
      }
      if (greatest_ != YPfalse) {
        T20 = CALL2(1,CHKREF(YruntimeYmax),greatest_,nF848);
        T19 = T20;
      } else {
        T19 = nF848;
      }
      a1 = T16;
      a2 = T17;
      a3 = T19;
      i_ = a1;
      least_ = a2;
      greatest_ = a3;
      goto loop;
      T13 = T15;
      T12 = T13;
    } else {
      T22 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
      a1 = T22;
      a2 = least_;
      a3 = greatest_;
      i_ = a1;
      least_ = a2;
      greatest_ = a3;
      goto loop;
      T12 = T21;
    }
    T10 = T12;
    T0 = T10;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_char_Gascii_368) {
  P char_;
  P tmpF849;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T3 = CALL1(1,CHKREF(Ytail),CHKREF(YruntimeYnative_chars));
  T2 = CALL1(1,CHKREF(Yhead),T3);
  T5 = CALL1(1,CHKREF(YruntimeYchar_Ginteger),char_);
  T6 = CALL1(1,CHKREF(Yhead),CHKREF(YruntimeYnative_chars));
  T4 = CALL2(1,CHKREF(YruntimeY_),T5,T6);
  T1 = CALL2(1,CHKREF(YruntimeYelt),T2,T4);
  tmpF849 = T1;
  if (tmpF849 != YPfalse) {
    T7 = tmpF849;
  } else {
    T8 = CALL2(1,CHKREF(Yerror),CHKREF(lit_348),char_);
    T7 = T8;
  }
  T0 = T7;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_369) {
  P U_,s_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(s_, 1);
loop:
  T0 = CALL1(1,CHKREF(Ysym_name),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_370) {
  P U_,s_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(s_, 1);
loop:
  T0 = CALL1(1,CHKREF(Yfab_sym),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_371) {
  P x_,y_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL1(1,CHKREF(Ysym_name),x_);
  T2 = CALL1(1,CHKREF(Ysym_name),y_);
  T0 = CALL2(1,CHKREF(YruntimeYL),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_str_372) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,CHKREF(Ysym_name),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_identity_373) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_374) {
  P args_;
  P T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = CALL3(1,CHKREF(YmacrosYnapply),FREEREF(1),YPfalse,args_);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compose_375) {
  P fx_,fy_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(fx_, 0);
  ARG(fy_, 1);
loop:
  T0 = FUNFAB(fun_374,2,fx_,fy_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_376) {
  P args_;
  P T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = CALL3(1,CHKREF(YmacrosYcat),Ynil,args_,FREEREF(1));
  T0 = CALL3(1,CHKREF(YmacrosYnapply),FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rcurry_377) {
  P f_,curried_;
  P savedcurriedF850;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  NARGS(curried_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLvecG),curried_);
  savedcurriedF850 = T1;
  T2 = FUNFAB(fun_376,2,f_,savedcurriedF850);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_378) {
  P args_;
  P T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = CALL3(1,CHKREF(YmacrosYcat),Ynil,FREEREF(1),args_);
  T0 = CALL3(1,CHKREF(YmacrosYnapply),FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_curry_379) {
  P f_,curried_;
  P savedcurriedF851;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  NARGS(curried_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLvecG),curried_);
  savedcurriedF851 = T1;
  T2 = FUNFAB(fun_378,2,f_,savedcurriedF851);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_380) {
  P args_;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
UNLINK_STACK();
  QRET(FREEREF(0));
}

FUNCODEDEF(fun_always_381) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = FUNFAB(fun_380,1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_382) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_describe_condition_383) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYformat_to_string),CHKREF(lit_361),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_description_384) {
  P cond_type_;
  P T0;
  P a1;
LINK_STACK();
  ARG(cond_type_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYformat_to_string),CHKREF(lit_364),cond_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_interactively_385) {
  P cond_type_,in_,out_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(cond_type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T1 = (P)YPpair(cond_type_,Ynil);
  T0 = CALL3(1,CHKREF(YPisa),T1,Ynil,Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_condition_message_386) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYcondition_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_condition_message_setter_387) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYcondition_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_388) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(lit_23));
}

FUNCODEDEF(fun_condition_arguments_389) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYcondition_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_condition_arguments_setter_390) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYcondition_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_391) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_describe_condition_392) {
  P c_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYcondition_message),c_);
  T2 = CALL1(1,CHKREF(YruntimeYcondition_arguments),c_);
  T0 = CALLN(1,CHKREF(YmacrosYnapply),4,CHKREF(YruntimeYformat_to_string),YPfalse,T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_interactively_393) {
  P cond_type_,in_,out_;
  P condF853;
  P next_metsF852;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(cond_type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T2 = (P)YPnext_methods();
  next_metsF852 = T2;
  if (next_metsF852 != YPfalse) {
    T5 = CALL1(1,CHKREF(Yhead),next_metsF852);
    T6 = CALL1(1,CHKREF(Ytail),next_metsF852);
    T4 = CALLN(1,CHKREF(YmacrosYnapply),6,T5,T6,cond_type_,in_,out_,Ynil);
    T3 = T4;
  } else {
    T7 = CALL1(1,CHKREF(Yerror),CHKREF(lit_372));
    T3 = T7;
  }
  T1 = T3;
  condF853 = T1;
  CALL2(1,CHKREF(YruntimeYformat),out_,CHKREF(lit_373));
  T8 = CALL1(1,CHKREF(YruntimeYread),in_);
  CALL2(1,CHKREF(YruntimeYcondition_message_setter),T8,condF853);
  CALL2(1,CHKREF(YruntimeYformat),out_,CHKREF(lit_374));
  T9 = CALL1(1,CHKREF(YruntimeYread),in_);
  CALL2(1,CHKREF(YruntimeYcondition_arguments_setter),T9,condF853);
  T0 = condF853;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_394) {
  P c_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,CHKREF(YruntimeYdescribe_condition),c_);
  CALL3(1,CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_376),T0);
  T1 = (P)YPinvoke_debugger(c_);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_default_handler_description_395) {
  P cond_type_;
  P T0;
  P a1;
LINK_STACK();
  ARG(cond_type_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYformat_to_string),CHKREF(lit_380),cond_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_generic_396) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYincongruent_method_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_generic_setter_397) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYincongruent_method_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_398) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_incongruent_method_error_method_399) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYincongruent_method_error_method));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_method_setter_400) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYincongruent_method_error_method));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_401) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_describe_condition_402) {
  P c_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYincongruent_method_error_method),c_);
  T2 = CALL1(1,CHKREF(YruntimeYincongruent_method_error_generic),c_);
  T0 = CALL3(1,CHKREF(YruntimeYformat_to_string),CHKREF(lit_386),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_description_403) {
  P cond_type_;
  P a1;
LINK_STACK();
  ARG(cond_type_, 0);
loop:
UNLINK_STACK();
  RET(CHKREF(lit_388));
}

FUNCODEDEF(fun_describe_handler_404) {
  P info_,condition_type_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
loop:
  T0 = CALL1(1,CHKREF(YruntimeYdefault_handler_description),condition_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_for_handler_interactively_405) {
  P info_,condition_type_,in_,out_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
  ARG(in_, 2);
  ARG(out_, 3);
loop:
  T0 = CALL3(1,CHKREF(YruntimeYbuild_condition_interactively),condition_type_,in_,out_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_handler_info_message_406) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yhandler_info_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_message_setter_407) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yhandler_info_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_408) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_handler_info_arguments_409) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(Yhandler_info_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_arguments_setter_410) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yhandler_info_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_411) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_describe_handler_412) {
  P info_,condition_type_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
loop:
  T1 = CALL1(1,CHKREF(Yhandler_info_message),info_);
  T2 = CALL1(1,CHKREF(Yhandler_info_arguments),info_);
  T0 = CALLN(1,CHKREF(YmacrosYnapply),4,CHKREF(YruntimeYformat_to_string),YPfalse,T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_handler_condition_type_413) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYhandler_condition_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_condition_type_setter_414) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYhandler_condition_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_415) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_handler_info_416) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYhandler_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_setter_417) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYhandler_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_418) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_handler_test_419) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYhandler_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_test_setter_420) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYhandler_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_421) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_handler_function_422) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYhandler_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_function_setter_423) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYhandler_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_424) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(YruntimeYmake_handler) {
  P type_,info_,test_,f_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_, 2);
  ARG(f_, 3);
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLhandlerG),Ynil);
  T5 = (P)YPpair(CHKREF(YruntimeYhandler_function),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYhandler_test),T5);
  T3 = (P)YPpair(CHKREF(YruntimeYhandler_info),T4);
  T2 = (P)YPpair(CHKREF(YruntimeYhandler_condition_type),T3);
  T9 = (P)YPpair(f_,Ynil);
  T8 = (P)YPpair(test_,T9);
  T7 = (P)YPpair(info_,T8);
  T6 = (P)YPpair(type_,T7);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T6);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YruntimeYhandler_activeQ) {
  P handler_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(handler_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYhandler_test),handler_);
  T0 = CALL0(1,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YruntimeYhandler_matchesQ) {
  P handler_,condition_;
  P tmpF854;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(handler_, 0);
  ARG(condition_, 1);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYhandler_condition_type),handler_);
  T1 = CALL2(1,CHKREF(YisaQ),condition_,T2);
  tmpF854 = T1;
  if (tmpF854 != YPfalse) {
    T4 = CALL1(1,CHKREF(YruntimeYhandler_activeQ),handler_);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_428) {
  P UresumeU_;
  P T0;
  P a1;
LINK_STACK();
  ARG(UresumeU_, 0);
loop:
  CALL2(1,FREEREF(0),FREEREF(1),UresumeU_);
  T0 = CALL0(1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Uhandler_functionU_429) {
  P condition_,Unext_handlerU_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(condition_, 0);
  ARG(Unext_handlerU_, 1);
loop:
  T1 = FUNFAB(fun_428,3,FREEREF(0),condition_,Unext_handlerU_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_430) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL0(1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_431) {
  P T0;
LINK_STACK();
loop:
  T0 = YruntimeYTcurrent_handlersT = FREEREF(0);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_432) {
  P Uunwind_exceptionU_;
  P Uhandler_functionUF856;
  P Uoriginal_handlersUF855;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(Uunwind_exceptionU_, 0);
loop:
  Uoriginal_handlersUF855 = CHKREF(YruntimeYTcurrent_handlersT);
  T2 = FUNSHELL(0,fun_Uhandler_functionU_429,1);
  Uhandler_functionUF856 = T2;
  FUNINIT(Uhandler_functionUF856, 1,FREEREF(0));
  T4 = CALLN(1,CHKREF(YruntimeYmake_handler),4,FREEREF(1),FREEREF(2),FREEREF(3),Uhandler_functionUF856);
  T3 = CALL2(1,CHKREF(YruntimeYpush),CHKREF(YruntimeYTcurrent_handlersT),T4);
  YruntimeYTcurrent_handlersT = T3;
  T6 = FUNFAB(fun_430,1,FREEREF(4));
  T7 = FUNFAB(fun_431,1,Uoriginal_handlersUF855);
  T5 = with_cleanup(T6,T7);
  T1 = T5;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYPwith_monitor) {
  P type_,info_,test_fun_,user_handler_,main_fun_;
  P T1,T0;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_fun_, 2);
  ARG(user_handler_, 3);
  ARG(main_fun_, 4);
loop:
  T1 = FUNFAB(fun_432,5,user_handler_,type_,info_,test_fun_,main_fun_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_434) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,CHKREF(YruntimeYsignal_handler_list),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYsignal_handler_list) {
  P condition_,handlers_;
  P remainingF858;
  P handlerF857;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(condition_, 0);
  ARG(handlers_, 1);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),handlers_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,CHKREF(YruntimeYdefault_handler),condition_);
    T0 = T2;
  } else {
    T4 = CALL1(1,CHKREF(Yhead),handlers_);
    handlerF857 = T4;
    T6 = CALL1(1,CHKREF(Ytail),handlers_);
    remainingF858 = T6;
    T8 = CALL2(1,CHKREF(YruntimeYhandler_matchesQ),handlerF857,condition_);
    if (T8 != YPfalse) {
      T10 = CALL1(1,CHKREF(YruntimeYhandler_function),handlerF857);
      T11 = FUNFAB(fun_434,2,condition_,remainingF858);
      T9 = CALL2(1,T10,condition_,T11);
      T7 = T9;
    } else {
      T12 = CALL2(1,CHKREF(YruntimeYsignal_handler_list),condition_,remainingF858);
      T7 = T12;
    }
    T5 = T7;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sig_436) {
  P condition_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(condition_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYsignal_handler_list),condition_,CHKREF(YruntimeYTcurrent_handlersT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sig_437) {
  P c_,args_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T2 = (P)YPpair(CHKREF(YruntimeYLsimple_conditionG),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYcondition_arguments),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYcondition_message),T4);
  T6 = (P)YPpair(args_,Ynil);
  T5 = (P)YPpair(c_,T6);
  T1 = CALL3(1,CHKREF(YPisa),T2,T3,T5);
  T0 = CALL1(1,CHKREF(YruntimeYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_error_438) {
  P c_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,CHKREF(YruntimeYsig),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_error_439) {
  P c_,args_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T2 = (P)YPpair(CHKREF(YruntimeYLsimple_errorG),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYcondition_arguments),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYcondition_message),T4);
  T6 = (P)YPpair(args_,Ynil);
  T5 = (P)YPpair(c_,T6);
  T1 = CALL3(1,CHKREF(YPisa),T2,T3,T5);
  T0 = CALL1(1,CHKREF(Yerror),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ywrong_number_arguments_error) {
  P fun_,n_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(fun_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,CHKREF(Yfun_arity),fun_);
  T0 = CALLN(1,CHKREF(Yerror),4,CHKREF(lit_427),fun_,n_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yunknown_function_error) {
  P fun_;
  P T0;
  P a1;
LINK_STACK();
  ARG(fun_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yerror),CHKREF(lit_429),fun_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ytype_error) {
  P arg_,type_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(arg_, 0);
  ARG(type_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yerror),CHKREF(lit_432),arg_,type_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yincongruent_method_error) {
  P gen_,met_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
loop:
  T2 = (P)YPpair(CHKREF(YruntimeYLincongruent_method_errorG),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYincongruent_method_error_method),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYincongruent_method_error_generic),T4);
  T6 = (P)YPpair(met_,Ynil);
  T5 = (P)YPpair(gen_,T6);
  T1 = CALL3(1,CHKREF(YPisa),T2,T3,T5);
  T0 = CALL1(1,CHKREF(Yerror),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_search_444) {
  P handlers_;
  P tmpF861;
  P remainingF860;
  P handlerF859;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(handlers_, 0);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),handlers_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T3 = CALL1(1,CHKREF(Yhead),handlers_);
    handlerF859 = T3;
    T5 = CALL1(1,CHKREF(Ytail),handlers_);
    remainingF860 = T5;
    T8 = CALL1(1,CHKREF(YruntimeYhandler_condition_type),handlerF859);
    T7 = CALL2(1,CHKREF(YsubtypeQ),T8,FREEREF(0));
    tmpF861 = T7;
    if (tmpF861 != YPfalse) {
      T10 = CALL1(1,CHKREF(YruntimeYhandler_activeQ),handlerF859);
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T6 = T9;
    if (T6 != YPfalse) {
      T11 = CALL1(1,FREEREF(1),handlerF859);
    } else {
    }
    a1 = remainingF860;
    handlers_ = a1;
    goto loop;
    T4 = T12;
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYdo_handlers_of_type) {
  P type_,f_;
  P searchF862;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(f_, 1);
loop:
  T1 = FUNSHELL(1,fun_search_444,3);
  searchF862 = T1;
  FUNINIT(searchF862, 3,type_,f_,searchF862);
  T2 = CALL1(0,searchF862,CHKREF(YruntimeYTcurrent_handlersT));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_446) {
  P handler_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(handler_, 0);
loop:
  T0 = BOXVAL(FREEREF(1));
  T2 = CALL1(1,CHKREF(YruntimeYhandler_info),handler_);
  T3 = CALL1(1,CHKREF(YruntimeYhandler_condition_type),handler_);
  T1 = CALL2(1,CHKREF(YruntimeYdescribe_handler),T2,T3);
  CALLN(1,CHKREF(YruntimeYformat),4,FREEREF(0),CHKREF(lit_438),T0,T1);
  CALL2(1,CHKREF(YruntimeYpush_lastX),FREEREF(2),handler_);
  T6 = BOXVAL(FREEREF(1));
  T5 = CALL2(1,CHKREF(YruntimeYA),T6,YPint((P)1));
  T4 = BOXVAL(FREEREF(1)) = T5;
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(YruntimeYlist_handlers) {
  P type_,out_;
  P applicableF864;
  P iF863;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(out_, 1);
loop:
  iF863 = YPint((P)1);
  iF863 = BOXFAB(iF863);
  T3 = CALL2(1,CHKREF(YruntimeYfab),CHKREF(YruntimeYLbufG),YPint((P)0));
  applicableF864 = T3;
  T4 = FUNFAB(fun_446,3,out_,iF863,applicableF864);
  CALL2(1,CHKREF(YruntimeYdo_handlers_of_type),type_,T4);
  T2 = applicableF864;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_448) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,CHKREF(YruntimeYsignal_handler_list),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_search_449) {
  P handlers_;
  P remainingF866;
  P currentF865;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(handlers_, 0);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),handlers_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,CHKREF(Yerror),CHKREF(lit_441),FREEREF(0));
    T0 = T2;
  } else {
    T4 = CALL1(1,CHKREF(Yhead),handlers_);
    currentF865 = T4;
    T6 = CALL1(1,CHKREF(Ytail),handlers_);
    remainingF866 = T6;
    T8 = CALL2(1,CHKREF(YmacrosYEE),FREEREF(0),currentF865);
    if (T8 != YPfalse) {
      T10 = CALL1(1,CHKREF(YruntimeYhandler_function),FREEREF(0));
      T11 = FUNFAB(fun_448,2,FREEREF(1),remainingF866);
      T9 = CALL2(1,T10,FREEREF(1),T11);
      T7 = T9;
    } else {
      a1 = remainingF866;
      handlers_ = a1;
      goto loop;
      T7 = T12;
    }
    T5 = T7;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYinvoke_handler_interactively) {
  P handler_,in_,out_;
  P searchF868;
  P conditionF867;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(handler_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYhandler_info),handler_);
  T3 = CALL1(1,CHKREF(YruntimeYhandler_condition_type),handler_);
  T1 = CALLN(1,CHKREF(YruntimeYbuild_condition_for_handler_interactively),4,T2,T3,in_,out_);
  conditionF867 = T1;
  T5 = CALL2(1,CHKREF(YruntimeYhandler_matchesQ),handler_,conditionF867);
  T4 = CALL1(1,CHKREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,CHKREF(Yerror),CHKREF(lit_440),handler_,conditionF867);
  } else {
  }
  T8 = FUNSHELL(1,fun_search_449,3);
  searchF868 = T8;
  FUNINIT(searchF868, 3,handler_,conditionF867,searchF868);
  T9 = CALL1(0,searchF868,CHKREF(YruntimeYTcurrent_handlersT));
  T7 = T9;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYchoose_handler) {
  P type_,in_,out_;
  P tmpF871;
  P nF870;
  P handlersF869;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYlist_handlers),type_,out_);
  handlersF869 = T1;
  CALL2(1,CHKREF(YruntimeYformat),out_,CHKREF(lit_443));
  T4 = CALL1(1,CHKREF(YruntimeYread),in_);
  T3 = CALL2(1,CHKREF(YruntimeY_),T4,YPint((P)1));
  nF870 = T3;
  T6 = CALL2(1,CHKREF(YruntimeYL),nF870,YPint((P)0));
  tmpF871 = T6;
  if (tmpF871 != YPfalse) {
    T7 = tmpF871;
  } else {
    T9 = CALL1(1,CHKREF(YruntimeYlen),handlersF869);
    T8 = CALL2(1,CHKREF(YruntimeYGE),nF870,T9);
    T7 = T8;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T10 = CALL2(1,CHKREF(Yerror),CHKREF(lit_444),nF870);
  } else {
  }
  T12 = CALL2(1,CHKREF(YruntimeYelt),handlersF869,nF870);
  T11 = CALL3(1,CHKREF(YruntimeYinvoke_handler_interactively),T12,in_,out_);
  T2 = T11;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYlocative_value) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPlocative_value(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYlocative_value_setter) {
  P z_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T0 = (P)YPlocative_value_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYapp_filename) {
  P T0;
LINK_STACK();
loop:
  T0 = (P)YPapp_filename();
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYapp_args) {
  P T0;
LINK_STACK();
loop:
  T0 = (P)YPapp_args();
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_handle_456) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYport_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_handle_setter_457) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYport_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_458) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_open_input_file_459) {
  P filename_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLfile_input_portG),Ynil);
  T2 = (P)YPpair(CHKREF(YruntimeYport_handle),Ynil);
  T5 = (P)YPsu(filename_);
  T4 = (P)YPopen_input_file(T5);
  T3 = (P)YPpair(T4,Ynil);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_file_opening_error_460) {
  P filename_;
  P T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yerror),CHKREF(lit_460),filename_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_open_output_file_461) {
  P filename_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLfile_output_portG),Ynil);
  T2 = (P)YPpair(CHKREF(YruntimeYport_handle),Ynil);
  T5 = (P)YPsu(filename_);
  T4 = (P)YPopen_output_file(T5);
  T3 = (P)YPpair(T4,Ynil);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_close_input_port_462) {
  P port_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYport_handle),port_);
  T0 = (P)YPclose_input_port(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_close_output_port_463) {
  P port_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYport_handle),port_);
  T0 = (P)YPclose_output_port(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_464) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL1(1,CHKREF(YruntimeYopen_input_file),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,FREEREF(2),T2);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_465) {
  P tmpF872;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF872 = T1;
  if (tmpF872 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,CHKREF(YruntimeYclose_input_port),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_call_with_input_file_466) {
  P string_,proc_;
  P portF873;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(string_, 0);
  ARG(proc_, 1);
loop:
  portF873 = YPfalse;
  portF873 = BOXFAB(portF873);
  T3 = FUNFAB(fun_464,3,portF873,string_,proc_);
  T4 = FUNFAB(fun_465,1,portF873);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_467) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL1(1,CHKREF(YruntimeYopen_output_file),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,FREEREF(2),T2);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_468) {
  P tmpF874;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF874 = T1;
  if (tmpF874 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,CHKREF(YruntimeYclose_output_port),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_call_with_output_file_469) {
  P string_,proc_;
  P portF875;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(string_, 0);
  ARG(proc_, 1);
loop:
  portF875 = YPfalse;
  portF875 = BOXFAB(portF875);
  T3 = FUNFAB(fun_467,3,portF875,string_,proc_);
  T4 = FUNFAB(fun_468,1,portF875);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eof_objectQ_470) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_eof_objectQ_471) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPcu(x_);
  T3 = (P)YPeof_object();
  T1 = (P)YPeqQ(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eof_object_472) {
  P T1,T0;
LINK_STACK();
loop:
  T1 = (P)YPeof_object();
  T0 = (P)YPcb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_read_char_473) {
  P port_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYport_handle),port_);
  T1 = (P)YPread_char(T2);
  T0 = (P)YPcb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_peek_char_474) {
  P port_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYport_handle),port_);
  T1 = (P)YPpeek_char(T2);
  T0 = (P)YPcb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_char_readyQ_475) {
  P port_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYport_handle),port_);
  T0 = (P)YPchar_readyQ(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_newline_476) {
  P port_;
  P T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYwrite_char),port_,YPchr((P)10));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_force_output_477) {
  P port_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYport_handle),port_);
  T0 = (P)YPforce_output(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_char_478) {
  P port_,c_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYport_handle),port_);
  T2 = (P)YPcu(c_);
  T0 = (P)YPwrite_char(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_string_479) {
  P port_,s_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYport_handle),port_);
  T2 = (P)YPsu(s_);
  T0 = (P)YPwrite_string(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_guts_480) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYport_guts));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_guts_setter_481) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYport_guts));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_482) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(lit_23));
}

FUNCODEDEF(fun_port_contents_483) {
  P port_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYport_guts),port_);
  T0 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_port_index_484) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYport_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_index_setter_485) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYport_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_486) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_call_with_string_input_port_487) {
  P string_,proc_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(string_, 0);
  ARG(proc_, 1);
loop:
  T2 = (P)YPpair(CHKREF(YruntimeYLstring_input_portG),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYport_guts),Ynil);
  T4 = (P)YPpair(string_,Ynil);
  T1 = CALL3(1,CHKREF(YPisa),T2,T3,T4);
  T0 = CALL1(1,proc_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_call_with_string_output_port_488) {
  P proc_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(proc_, 0);
loop:
  T2 = (P)YPpair(CHKREF(YruntimeYLstring_output_portG),Ynil);
  T1 = CALL3(1,CHKREF(YPisa),T2,Ynil,Ynil);
  T0 = CALL1(1,proc_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_peek_char_489) {
  P port_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYport_index),port_);
  T4 = CALL1(1,CHKREF(YruntimeYport_guts),port_);
  T3 = CALL1(1,CHKREF(YruntimeYlen),T4);
  T1 = CALL2(1,CHKREF(YruntimeYGE),T2,T3);
  if (T1 != YPfalse) {
    T5 = CALL0(1,CHKREF(YruntimeYeof_object));
    T0 = T5;
  } else {
    T7 = CALL1(1,CHKREF(YruntimeYport_guts),port_);
    T8 = CALL1(1,CHKREF(YruntimeYport_index),port_);
    T6 = CALL2(1,CHKREF(YruntimeYelt),T7,T8);
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_read_char_490) {
  P port_;
  P x_1216F877;
  P resF876;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYport_index),port_);
  T4 = CALL1(1,CHKREF(YruntimeYport_guts),port_);
  T3 = CALL1(1,CHKREF(YruntimeYlen),T4);
  T1 = CALL2(1,CHKREF(YruntimeYGE),T2,T3);
  if (T1 != YPfalse) {
    T5 = CALL0(1,CHKREF(YruntimeYeof_object));
    T0 = T5;
  } else {
    T8 = CALL1(1,CHKREF(YruntimeYport_guts),port_);
    T9 = CALL1(1,CHKREF(YruntimeYport_index),port_);
    T7 = CALL2(1,CHKREF(YruntimeYelt),T8,T9);
    resF876 = T7;
    x_1216F877 = port_;
    T12 = CALL1(1,CHKREF(YruntimeYport_index),x_1216F877);
    T11 = CALL2(1,CHKREF(YruntimeYA),T12,YPint((P)1));
    T10 = CALL2(1,CHKREF(YruntimeYport_index_setter),T11,x_1216F877);
    T6 = resF876;
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_char_readyQ_491) {
  P port_;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_write_char_492) {
  P port_,c_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(c_, 1);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYport_guts),port_);
  T1 = CALL2(1,CHKREF(YruntimeYadd),T2,c_);
  T0 = CALL2(1,CHKREF(YruntimeYport_guts_setter),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_string_493) {
  P port_,s_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYport_guts),port_);
  T1 = CALL2(1,CHKREF(YmacrosYcat),T2,s_);
  T0 = CALL2(1,CHKREF(YruntimeYport_guts_setter),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pvacated_494) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPvacated));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pvacated_setter_495) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPvacated));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_496) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_Pprimary_modulus_497) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPprimary_modulus));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pprimary_modulus_setter_498) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPprimary_modulus));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_499) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_Psecondary_modulus_500) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPsecondary_modulus));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Psecondary_modulus_setter_501) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPsecondary_modulus));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_502) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_Pn_buckets_503) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPn_buckets));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pn_buckets_setter_504) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPn_buckets));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_505) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_Pbucket_depth_506) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPbucket_depth));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pbucket_depth_setter_507) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPbucket_depth));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_508) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_Pdata_509) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPdata));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdata_setter_510) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPdata));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_511) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_Pgc_state_512) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPgc_state));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pgc_state_setter_513) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPgc_state));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_514) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(YruntimeYfab_table_vector) {
  P size_,fill_value_,n_buckets_,bucket_depth_,primary_modulus_,secondary_modulus_;
  P vF878;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
LINK_STACK();
  ARG(size_, 0);
  ARG(fill_value_, 1);
  ARG(n_buckets_, 2);
  ARG(bucket_depth_, 3);
  ARG(primary_modulus_, 4);
  ARG(secondary_modulus_, 5);
loop:
  T2 = (P)YPpair(CHKREF(YruntimeYLsimple_table_vectorG),Ynil);
  T6 = (P)YPpair(CHKREF(YruntimeYPsecondary_modulus),Ynil);
  T5 = (P)YPpair(CHKREF(YruntimeYPprimary_modulus),T6);
  T4 = (P)YPpair(CHKREF(YruntimeYPbucket_depth),T5);
  T3 = (P)YPpair(CHKREF(YruntimeYPn_buckets),T4);
  T10 = (P)YPpair(secondary_modulus_,Ynil);
  T9 = (P)YPpair(primary_modulus_,T10);
  T8 = (P)YPpair(bucket_depth_,T9);
  T7 = (P)YPpair(n_buckets_,T8);
  T1 = CALL3(1,CHKREF(YPisa),T2,T3,T7);
  vF878 = T1;
  T12 = CALL2(1,CHKREF(YruntimeYfab),CHKREF(YLvecG),size_);
  T11 = CALL2(1,CHKREF(YruntimeYfill),T12,fill_value_);
  CALL2(1,CHKREF(YruntimeYPdata_setter),T11,vF878);
  T0 = vF878;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_516) {
  P vector_,index_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(vector_, 0);
  ARG(index_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYPdata),vector_);
  T2 = (P)YPiu(index_);
  T0 = (P)YPvelt(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_517) {
  P new_value_,vector_,index_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(new_value_, 0);
  ARG(vector_, 1);
  ARG(index_, 2);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYPdata),vector_);
  T2 = (P)YPiu(index_);
  T0 = (P)YPvelt_setter(new_value_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_clrX_518) {
  P vector_,fill_value_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(vector_, 0);
  ARG(fill_value_, 1);
loop:
  T0 = CALL1(1,CHKREF(YruntimeYPdata),vector_);
  CALL2(1,CHKREF(YruntimeYfill),T0,fill_value_);
  T1 = CALL2(1,CHKREF(YruntimeYPvacated_setter),YPint((P)0),vector_);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YruntimeYtrace) {
  P port_,msg_,args_;
  P tmpF879;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(msg_, 1);
  NARGS(args_, 2);
loop:
  tmpF879 = CHKREF(YruntimeYTdebug_tablesQT);
  if (tmpF879 != YPfalse) {
    T2 = CALLN(1,CHKREF(YmacrosYnapply),5,CHKREF(YruntimeYformat),YPfalse,port_,msg_,args_);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_table_growth_factor_520) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYtable_growth_factor));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_table_growth_factor_setter_521) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYtable_growth_factor));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_522) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(lit_83));
}

FUNCODEDEF(fun_table_growth_threshold_523) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYtable_growth_threshold));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_table_growth_threshold_setter_524) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYtable_growth_threshold));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_525) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(lit_519));
}

FUNCODEDEF(fun_table_shrink_threshold_526) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYtable_shrink_threshold));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_table_shrink_threshold_setter_527) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYtable_shrink_threshold));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_528) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(lit_522));
}

FUNCODEDEF(fun_Pcount_529) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPcount));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pcount_setter_530) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPcount));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_531) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_Pvector_532) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPvector));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pvector_setter_533) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPvector));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_534) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_table_protocol_535) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,CHKREF(YmacrosYtup),CHKREF(YmacrosYEE),CHKREF(YruntimeYid_hash));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YruntimeYhash_moduli) {
  P hash_,primary_,secondary_;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(hash_, 0);
  ARG(primary_, 1);
  ARG(secondary_, 2);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYmodulo),hash_,primary_);
  T3 = CALL2(1,CHKREF(YruntimeYmodulo),hash_,secondary_);
  T2 = CALL2(1,CHKREF(YruntimeYA),T3,YPint((P)1));
  T0 = CALL2(1,CHKREF(YmacrosYtup),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_537) {
  P type_,size_;
  P tableF885;
  P tup20F884;
  P bucket_depthF883;
  P tup20F882;
  P n_bucketsF881;
  P tup20F880;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(size_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYchoose_table_geometry),size_);
  tup20F880 = T1;
  T3 = CALL1(1,CHKREF(Yhead),tup20F880);
  n_bucketsF881 = T3;
  T5 = CALL1(1,CHKREF(Ytail),tup20F880);
  tup20F882 = T5;
  T7 = CALL1(1,CHKREF(Yhead),tup20F882);
  bucket_depthF883 = T7;
  T9 = CALL1(1,CHKREF(Ytail),tup20F882);
  tup20F884 = T9;
  T12 = (P)YPpair(type_,Ynil);
  T11 = CALL3(1,CHKREF(YPisa),T12,Ynil,Ynil);
  tableF885 = T11;
  T15 = CALL2(1,CHKREF(YruntimeYT),bucket_depthF883,YPint((P)2));
  T14 = CALL2(1,CHKREF(YruntimeYT),n_bucketsF881,T15);
  T16 = CALL2(1,CHKREF(YruntimeY_),n_bucketsF881,YPint((P)2));
  T13 = CALLN(1,CHKREF(YruntimeYfab_table_vector),6,T14,CHKREF(YruntimeYDempty_cell_marker),n_bucketsF881,bucket_depthF883,n_bucketsF881,T16);
  CALL2(1,CHKREF(YruntimeYPvector_setter),T13,tableF885);
  T10 = tableF885;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1220_538) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_539) {
  P return_;
  P x_1219F905;
  P x_1219F904;
  P x_1219F903;
  P x_1219F902;
  P x_1219F901;
  P x_1219F900;
  P x_1219F899;
  P x_1219F898;
  P x_1219F897;
  P x_1219F896;
  P x_1219F895;
  P x_1219F894;
  P x_1219F893;
  P bodyF892;
  P keyF891;
  P tableF890;
  P bucket_offsetF889;
  P bucket_indexF888;
  P x_1219F887;
  P x_1220F886;
  P T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89;
  P T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73;
  P T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57;
  P T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1220_538,1);
  x_1220F886 = T1;
  FUNINIT(x_1220F886, 1,return_);
  x_1219F887 = FREEREF(0);
  bucket_indexF888 = YPfalse;
  bucket_indexF888 = BOXFAB(bucket_indexF888);
  bucket_offsetF889 = YPfalse;
  bucket_offsetF889 = BOXFAB(bucket_offsetF889);
  tableF890 = YPfalse;
  tableF890 = BOXFAB(tableF890);
  keyF891 = YPfalse;
  keyF891 = BOXFAB(keyF891);
  bodyF892 = YPfalse;
  bodyF892 = BOXFAB(bodyF892);
  T13 = CALL2(1,CHKREF(YisaQ),x_1219F887,CHKREF(YLlstG));
  if (T13 != YPfalse) {
    T15 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1219F887,CHKREF(lit_536),x_1220F886);
    x_1219F893 = T15;
    T17 = CALL2(1,CHKREF(YmacrosYmatch_sublist),x_1219F893,x_1220F886);
    x_1219F894 = T17;
    T19 = CALL2(1,CHKREF(YmacrosYmatch_sublist),x_1219F894,x_1220F886);
    x_1219F895 = T19;
    T21 = CALL3(1,CHKREF(YmacrosYmatch_atom),x_1219F895,CHKREF(lit_537),x_1220F886);
    x_1219F896 = T21;
    T23 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1219F896,x_1220F886);
    BOXVAL(bucket_indexF888) = T23;
    T24 = CALL1(1,CHKREF(Ytail),x_1219F896);
    x_1219F897 = T24;
    T26 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1219F897,x_1220F886);
    BOXVAL(bucket_offsetF889) = T26;
    T27 = CALL1(1,CHKREF(Ytail),x_1219F897);
    x_1219F898 = T27;
    T28 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1219F898,x_1220F886);
    T25 = T28;
    T22 = T25;
    T20 = T22;
    T29 = CALL1(1,CHKREF(Ytail),x_1219F894);
    x_1219F899 = T29;
    T31 = CALL2(1,CHKREF(YmacrosYmatch_sublist),x_1219F899,x_1220F886);
    x_1219F900 = T31;
    T33 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1219F900,x_1220F886);
    BOXVAL(tableF890) = T33;
    T34 = CALL1(1,CHKREF(Ytail),x_1219F900);
    x_1219F901 = T34;
    T36 = CALL2(1,CHKREF(YmacrosYmatch_unquote),x_1219F901,x_1220F886);
    BOXVAL(keyF891) = T36;
    T37 = CALL1(1,CHKREF(Ytail),x_1219F901);
    x_1219F902 = T37;
    T38 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1219F902,x_1220F886);
    T35 = T38;
    T32 = T35;
    T39 = CALL1(1,CHKREF(Ytail),x_1219F899);
    x_1219F903 = T39;
    T40 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1219F903,x_1220F886);
    T30 = T40;
    T18 = T30;
    T41 = CALL1(1,CHKREF(Ytail),x_1219F893);
    x_1219F904 = T41;
    BOXVAL(bodyF892) = x_1219F904;
    x_1219F905 = Ynil;
    T43 = CALL2(1,CHKREF(YmacrosYmatch_empty_list),x_1219F905,x_1220F886);
    T42 = T43;
    T16 = T42;
    T14 = T16;
  } else {
    T44 = CALL2(1,x_1220F886,CHKREF(lit_538),x_1219F887);
  }
  T46 = CALL1(1,CHKREF(Ylst),CHKREF(lit_539));
  T53 = CALL1(1,CHKREF(Ylst),CHKREF(lit_537));
  T54 = CALL1(1,CHKREF(Ylst),CHKREF(lit_540));
  T55 = CALL1(1,CHKREF(Ylst),CHKREF(lit_541));
  T52 = CALLN(1,CHKREF(YmacrosYcat),4,T53,T54,T55,Ynil);
  T51 = CALL1(1,CHKREF(Ylst),T52);
  T58 = CALL1(1,CHKREF(Ylst),CHKREF(lit_527));
  T60 = BOXVAL(tableF890);
  T59 = CALL1(1,CHKREF(Ylst),T60);
  T57 = CALL3(1,CHKREF(YmacrosYcat),T58,T59,Ynil);
  T56 = CALL1(1,CHKREF(Ylst),T57);
  T50 = CALL3(1,CHKREF(YmacrosYcat),T51,T56,Ynil);
  T49 = CALL1(1,CHKREF(Ylst),T50);
  T65 = CALL1(1,CHKREF(Ylst),CHKREF(lit_537));
  T68 = CALL1(1,CHKREF(Ylst),CHKREF(lit_531));
  T69 = CALL1(1,CHKREF(Ylst),CHKREF(lit_542));
  T67 = CALL3(1,CHKREF(YmacrosYcat),T68,T69,Ynil);
  T66 = CALL1(1,CHKREF(Ylst),T67);
  T70 = CALL1(1,CHKREF(Ylst),CHKREF(lit_167));
  T64 = CALLN(1,CHKREF(YmacrosYcat),4,T65,T66,T70,Ynil);
  T63 = CALL1(1,CHKREF(Ylst),T64);
  T73 = CALL1(1,CHKREF(Ylst),CHKREF(lit_541));
  T75 = BOXVAL(keyF891);
  T74 = CALL1(1,CHKREF(Ylst),T75);
  T72 = CALL3(1,CHKREF(YmacrosYcat),T73,T74,Ynil);
  T71 = CALL1(1,CHKREF(Ylst),T72);
  T62 = CALL3(1,CHKREF(YmacrosYcat),T63,T71,Ynil);
  T61 = CALL1(1,CHKREF(Ylst),T62);
  T78 = CALL1(1,CHKREF(Ylst),CHKREF(lit_509));
  T81 = CALL1(1,CHKREF(Ylst),CHKREF(lit_525));
  T82 = CALL1(1,CHKREF(Ylst),CHKREF(lit_543));
  T80 = CALL3(1,CHKREF(YmacrosYcat),T81,T82,Ynil);
  T79 = CALL1(1,CHKREF(Ylst),T80);
  T77 = CALL3(1,CHKREF(YmacrosYcat),T78,T79,Ynil);
  T76 = CALL1(1,CHKREF(Ylst),T77);
  T87 = CALL1(1,CHKREF(Ylst),CHKREF(lit_537));
  T89 = BOXVAL(bucket_indexF888);
  T88 = CALL1(1,CHKREF(Ylst),T89);
  T91 = BOXVAL(bucket_offsetF889);
  T90 = CALL1(1,CHKREF(Ylst),T91);
  T86 = CALLN(1,CHKREF(YmacrosYcat),4,T87,T88,T90,Ynil);
  T85 = CALL1(1,CHKREF(Ylst),T86);
  T94 = CALL1(1,CHKREF(Ylst),CHKREF(lit_530));
  T95 = CALL1(1,CHKREF(Ylst),CHKREF(lit_531));
  T98 = CALL1(1,CHKREF(Ylst),CHKREF(lit_490));
  T99 = CALL1(1,CHKREF(Ylst),CHKREF(lit_509));
  T97 = CALL3(1,CHKREF(YmacrosYcat),T98,T99,Ynil);
  T96 = CALL1(1,CHKREF(Ylst),T97);
  T102 = CALL1(1,CHKREF(Ylst),CHKREF(lit_492));
  T103 = CALL1(1,CHKREF(Ylst),CHKREF(lit_509));
  T101 = CALL3(1,CHKREF(YmacrosYcat),T102,T103,Ynil);
  T100 = CALL1(1,CHKREF(Ylst),T101);
  T93 = CALLN(1,CHKREF(YmacrosYcat),5,T94,T95,T96,T100,Ynil);
  T92 = CALL1(1,CHKREF(Ylst),T93);
  T84 = CALL3(1,CHKREF(YmacrosYcat),T85,T92,Ynil);
  T83 = CALL1(1,CHKREF(Ylst),T84);
  T48 = CALLN(1,CHKREF(YmacrosYcat),5,T49,T61,T76,T83,Ynil);
  T47 = CALL1(1,CHKREF(Ylst),T48);
  T104 = BOXVAL(bodyF892);
  T45 = CALLN(1,CHKREF(YmacrosYcat),4,T46,T47,T104,Ynil);
  T11 = T45;
  T9 = T11;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_540) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_539,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_541) {
  P i_,this_bucket_raw_index_;
  P this_keyF906;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(this_bucket_raw_index_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(1),this_bucket_raw_index_);
    this_keyF906 = T3;
    T4 = CALL2(1,CHKREF(YmacrosYEE),this_keyF906,CHKREF(YruntimeYDempty_cell_marker));
    if (T4 != YPfalse) {
      T5 = CALL1(1,FREEREF(2),CHKREF(Ynul));
    } else {
    }
    T6 = CALL2(1,FREEREF(3),FREEREF(4),this_keyF906);
    if (T6 != YPfalse) {
      T9 = CALL2(1,CHKREF(YruntimeYA),this_bucket_raw_index_,FREEREF(0));
      T8 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(1),T9);
      T7 = CALL1(1,FREEREF(2),T8);
    } else {
    }
    T11 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    T12 = CALL2(1,CHKREF(YruntimeYA),this_bucket_raw_index_,YPint((P)1));
    a1 = T11;
    a2 = T12;
    i_ = a1;
    this_bucket_raw_index_ = a2;
    goto loop;
    T2 = T10;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_542) {
  P probes_;
  P innerF908;
  P indexF907;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(probes_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),probes_,FREEREF(0));
  if (T1 != YPfalse) {
    T4 = BOXVAL(FREEREF(1));
    T5 = CALL2(1,CHKREF(YruntimeYT),FREEREF(2),YPint((P)2));
    T3 = CALL2(1,CHKREF(YruntimeYT),T4,T5);
    indexF907 = T3;
    T6 = FUNSHELL(1,fun_inner_541,6);
    innerF908 = T6;
    FUNINIT(innerF908, 6,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),innerF908);
    T7 = CALL2(0,innerF908,YPint((P)0),indexF907);
    T9 = BOXVAL(FREEREF(1));
    T8 = CALL2(1,CHKREF(YruntimeY_),T9,FREEREF(7));
    BOXVAL(FREEREF(1)) = T8;
    T11 = BOXVAL(FREEREF(1));
    T10 = CALL1(1,CHKREF(YruntimeYnegQ),T11);
    if (T10 != YPfalse) {
      T14 = BOXVAL(FREEREF(1));
      T13 = CALL2(1,CHKREF(YruntimeYA),T14,FREEREF(0));
      T12 = BOXVAL(FREEREF(1)) = T13;
    } else {
    }
    T16 = CALL2(1,CHKREF(YruntimeYA),probes_,YPint((P)1));
    a1 = T16;
    probes_ = a1;
    goto loop;
    T2 = T15;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_543) {
  P return_;
  P outerF927;
  P tup23F926;
  P bucket_offsetF925;
  P tup23F924;
  P bucket_indexF923;
  P tup23F922;
  P bucket_depthF921;
  P n_bucketsF920;
  P vectorF919;
  P tup22F918;
  P stateF917;
  P tup22F916;
  P hashF915;
  P tup22F914;
  P tup21F913;
  P hash_functionF912;
  P tup21F911;
  P test_functionF910;
  P tup21F909;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYtable_protocol),FREEREF(0));
  tup21F909 = T1;
  T3 = CALL1(1,CHKREF(Yhead),tup21F909);
  test_functionF910 = T3;
  T5 = CALL1(1,CHKREF(Ytail),tup21F909);
  tup21F911 = T5;
  T7 = CALL1(1,CHKREF(Yhead),tup21F911);
  hash_functionF912 = T7;
  T9 = CALL1(1,CHKREF(Ytail),tup21F911);
  tup21F913 = T9;
  T11 = CALL1(1,hash_functionF912,FREEREF(1));
  tup22F914 = T11;
  T13 = CALL1(1,CHKREF(Yhead),tup22F914);
  check_type(T13,CHKREF(YLintG));
  hashF915 = T13;
  T15 = CALL1(1,CHKREF(Ytail),tup22F914);
  tup22F916 = T15;
  T17 = CALL1(1,CHKREF(Yhead),tup22F916);
  stateF917 = T17;
  T19 = CALL1(1,CHKREF(Ytail),tup22F916);
  tup22F918 = T19;
  T21 = CALL1(1,CHKREF(YruntimeYPvector),FREEREF(0));
  vectorF919 = T21;
  T23 = CALL1(1,CHKREF(YruntimeYPn_buckets),vectorF919);
  n_bucketsF920 = T23;
  T25 = CALL1(1,CHKREF(YruntimeYPbucket_depth),vectorF919);
  bucket_depthF921 = T25;
  T28 = CALL1(1,CHKREF(YruntimeYPprimary_modulus),vectorF919);
  T29 = CALL1(1,CHKREF(YruntimeYPsecondary_modulus),vectorF919);
  T27 = CALL3(1,CHKREF(YruntimeYhash_moduli),hashF915,T28,T29);
  tup23F922 = T27;
  T31 = CALL1(1,CHKREF(Yhead),tup23F922);
  bucket_indexF923 = T31;
  bucket_indexF923 = BOXFAB(bucket_indexF923);
  T34 = CALL1(1,CHKREF(Ytail),tup23F922);
  tup23F924 = T34;
  T36 = CALL1(1,CHKREF(Yhead),tup23F924);
  bucket_offsetF925 = T36;
  T38 = CALL1(1,CHKREF(Ytail),tup23F924);
  tup23F926 = T38;
  T39 = FUNSHELL(1,fun_outer_542,9);
  outerF927 = T39;
  FUNINIT(outerF927, 9,n_bucketsF920,bucket_indexF923,bucket_depthF921,vectorF919,return_,test_functionF910,FREEREF(1),bucket_offsetF925,outerF927);
  T40 = CALL1(0,outerF927,YPint((P)0));
  T41 = CALL1(1,CHKREF(Yerror),CHKREF(lit_548));
  T37 = T41;
  T35 = T37;
  T33 = T35;
  T30 = T33;
  T26 = T30;
  T24 = T26;
  T22 = T24;
  T20 = T22;
  T18 = T20;
  T16 = T18;
  T14 = T16;
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

FUNCODEDEF(fun_elt_544) {
  P table_,key_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(table_, 0);
  ARG(key_, 1);
loop:
  T1 = FUNFAB(fun_543,2,table_,key_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_545) {
  P i_,this_bucket_raw_index_;
  P x_1221F932;
  P indexF931;
  P x_1222F930;
  P this_keyF929;
  P vacancy_indexF928;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(this_bucket_raw_index_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    vacancy_indexF928 = YPfalse;
    vacancy_indexF928 = BOXFAB(vacancy_indexF928);
    T6 = BOXVAL(FREEREF(1));
    T5 = CALL2(1,CHKREF(YruntimeYelt),T6,this_bucket_raw_index_);
    this_keyF929 = T5;
    T7 = CALL2(1,CHKREF(YmacrosYEE),this_keyF929,CHKREF(YruntimeYDempty_cell_marker));
    if (T7 != YPfalse) {
      T10 = BOXVAL(vacancy_indexF928);
      if (T10 != YPfalse) {
        T11 = BOXVAL(FREEREF(1));
        x_1222F930 = T11;
        T14 = CALL1(1,CHKREF(YruntimeYPvacated),x_1222F930);
        T13 = CALL2(1,CHKREF(YruntimeY_),T14,YPint((P)1));
        T12 = CALL2(1,CHKREF(YruntimeYPvacated_setter),T13,x_1222F930);
        T15 = BOXVAL(vacancy_indexF928);
        T9 = T15;
      } else {
        T9 = this_bucket_raw_index_;
      }
      indexF931 = T9;
      T16 = BOXVAL(FREEREF(1));
      CALL3(1,CHKREF(YruntimeYelt_setter),FREEREF(2),T16,indexF931);
      T17 = BOXVAL(FREEREF(1));
      T18 = CALL2(1,CHKREF(YruntimeYA),indexF931,FREEREF(0));
      CALL3(1,CHKREF(YruntimeYelt_setter),FREEREF(3),T17,T18);
      x_1221F932 = FREEREF(4);
      T21 = CALL1(1,CHKREF(YruntimeYPcount),x_1221F932);
      T20 = CALL2(1,CHKREF(YruntimeYA),T21,YPint((P)1));
      T19 = CALL2(1,CHKREF(YruntimeYPcount_setter),T20,x_1221F932);
      T22 = CALL1(1,FREEREF(5),FREEREF(3));
      T8 = T22;
    } else {
      T24 = CALL2(1,CHKREF(YmacrosYEE),this_keyF929,CHKREF(YruntimeYDvacated_cell_marker));
      if (T24 != YPfalse) {
        T27 = BOXVAL(vacancy_indexF928);
        T26 = CALL1(1,CHKREF(Ynot),T27);
        if (T26 != YPfalse) {
          T28 = BOXVAL(vacancy_indexF928) = this_bucket_raw_index_;
          T25 = T28;
        } else {
          T25 = YPfalse;
        }
        T23 = T25;
      } else {
        T30 = CALL2(1,FREEREF(6),FREEREF(2),this_keyF929);
        if (T30 != YPfalse) {
          T31 = BOXVAL(FREEREF(1));
          T32 = CALL2(1,CHKREF(YruntimeYA),this_bucket_raw_index_,FREEREF(0));
          CALL3(1,CHKREF(YruntimeYelt_setter),FREEREF(3),T31,T32);
          T33 = CALL1(1,FREEREF(5),FREEREF(3));
          T29 = T33;
        } else {
          T29 = YPfalse;
        }
        T23 = T29;
      }
    }
    T35 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    T36 = CALL2(1,CHKREF(YruntimeYA),this_bucket_raw_index_,YPint((P)1));
    a1 = T35;
    a2 = T36;
    i_ = a1;
    this_bucket_raw_index_ = a2;
    goto loop;
    T4 = T34;
    T2 = T4;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_546) {
  P probes_;
  P innerF934;
  P indexF933;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(probes_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),probes_,FREEREF(0));
  if (T1 != YPfalse) {
    T4 = BOXVAL(FREEREF(1));
    T5 = CALL2(1,CHKREF(YruntimeYT),FREEREF(2),YPint((P)2));
    T3 = CALL2(1,CHKREF(YruntimeYT),T4,T5);
    indexF933 = T3;
    T6 = FUNSHELL(1,fun_inner_545,8);
    innerF934 = T6;
    FUNINIT(innerF934, 8,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),FREEREF(7),FREEREF(8),innerF934);
    T7 = CALL2(1,innerF934,YPint((P)0),indexF933);
    T9 = BOXVAL(FREEREF(1));
    T8 = CALL2(1,CHKREF(YruntimeY_),T9,FREEREF(9));
    BOXVAL(FREEREF(1)) = T8;
    T11 = BOXVAL(FREEREF(1));
    T10 = CALL1(1,CHKREF(YruntimeYnegQ),T11);
    if (T10 != YPfalse) {
      T14 = BOXVAL(FREEREF(1));
      T13 = CALL2(1,CHKREF(YruntimeYA),T14,FREEREF(0));
      T12 = BOXVAL(FREEREF(1)) = T13;
    } else {
    }
    T16 = CALL2(1,CHKREF(YruntimeYA),probes_,YPint((P)1));
    a1 = T16;
    probes_ = a1;
    goto loop;
    T2 = T15;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_547) {
  P return_;
  P outerF952;
  P tup26F951;
  P bucket_offsetF950;
  P tup26F949;
  P bucket_indexF948;
  P tup26F947;
  P n_bucketsF946;
  P bucket_depthF945;
  P tup25F944;
  P stateF943;
  P tup25F942;
  P hashF941;
  P tup25F940;
  P tup24F939;
  P hash_functionF938;
  P tup24F937;
  P test_functionF936;
  P tup24F935;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYtable_protocol),FREEREF(0));
  tup24F935 = T1;
  T3 = CALL1(1,CHKREF(Yhead),tup24F935);
  test_functionF936 = T3;
  T5 = CALL1(1,CHKREF(Ytail),tup24F935);
  tup24F937 = T5;
  T7 = CALL1(1,CHKREF(Yhead),tup24F937);
  hash_functionF938 = T7;
  T9 = CALL1(1,CHKREF(Ytail),tup24F937);
  tup24F939 = T9;
  T11 = CALL1(1,hash_functionF938,FREEREF(1));
  tup25F940 = T11;
  T13 = CALL1(1,CHKREF(Yhead),tup25F940);
  check_type(T13,CHKREF(YLintG));
  hashF941 = T13;
  T15 = CALL1(1,CHKREF(Ytail),tup25F940);
  tup25F942 = T15;
  T17 = CALL1(1,CHKREF(Yhead),tup25F942);
  stateF943 = T17;
  T19 = CALL1(1,CHKREF(Ytail),tup25F942);
  tup25F944 = T19;
  T22 = BOXVAL(FREEREF(2));
  T21 = CALL1(1,CHKREF(YruntimeYPbucket_depth),T22);
  bucket_depthF945 = T21;
  T25 = BOXVAL(FREEREF(2));
  T24 = CALL1(1,CHKREF(YruntimeYPn_buckets),T25);
  n_bucketsF946 = T24;
  T29 = BOXVAL(FREEREF(2));
  T28 = CALL1(1,CHKREF(YruntimeYPprimary_modulus),T29);
  T31 = BOXVAL(FREEREF(2));
  T30 = CALL1(1,CHKREF(YruntimeYPsecondary_modulus),T31);
  T27 = CALL3(1,CHKREF(YruntimeYhash_moduli),hashF941,T28,T30);
  tup26F947 = T27;
  T33 = CALL1(1,CHKREF(Yhead),tup26F947);
  bucket_indexF948 = T33;
  bucket_indexF948 = BOXFAB(bucket_indexF948);
  T36 = CALL1(1,CHKREF(Ytail),tup26F947);
  tup26F949 = T36;
  T38 = CALL1(1,CHKREF(Yhead),tup26F949);
  bucket_offsetF950 = T38;
  T40 = CALL1(1,CHKREF(Ytail),tup26F949);
  tup26F951 = T40;
  T41 = FUNSHELL(1,fun_outer_546,11);
  outerF952 = T41;
  FUNINIT(outerF952, 11,n_bucketsF946,bucket_indexF948,bucket_depthF945,FREEREF(2),FREEREF(1),FREEREF(3),FREEREF(0),return_,test_functionF936,bucket_offsetF950,outerF952);
  T42 = CALL1(1,outerF952,YPint((P)0));
  T43 = CALL1(1,CHKREF(Yerror),CHKREF(lit_550));
  T39 = T43;
  T37 = T39;
  T35 = T37;
  T32 = T35;
  T26 = T32;
  T23 = T26;
  T20 = T23;
  T18 = T20;
  T16 = T18;
  T14 = T16;
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

FUNCODEDEF(fun_elt_setter_548) {
  P value_,table_,key_;
  P vectorF953;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(value_, 0);
  ARG(table_, 1);
  ARG(key_, 2);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYPvector),table_);
  vectorF953 = T1;
  vectorF953 = BOXFAB(vectorF953);
  T4 = CALL1(1,CHKREF(YruntimeYPcount),table_);
  T8 = BOXVAL(vectorF953);
  T7 = CALL1(1,CHKREF(YruntimeYPn_buckets),T8);
  T10 = BOXVAL(vectorF953);
  T9 = CALL1(1,CHKREF(YruntimeYPbucket_depth),T10);
  T6 = CALL2(1,CHKREF(YruntimeYT),T7,T9);
  T11 = CALL1(1,CHKREF(YruntimeYtable_growth_threshold),table_);
  T5 = CALL2(1,CHKREF(YruntimeYT),T6,T11);
  T3 = CALL2(1,CHKREF(YruntimeYG),T4,T5);
  if (T3 != YPfalse) {
    T14 = CALL1(1,CHKREF(YruntimeYgrow_table),table_);
    T13 = CALL1(1,CHKREF(YruntimeYPvector),T14);
    T12 = BOXVAL(vectorF953) = T13;
  } else {
    T18 = CALL1(1,CHKREF(YruntimeYPcount),table_);
    T20 = BOXVAL(vectorF953);
    T19 = CALL1(1,CHKREF(YruntimeYPvacated),T20);
    T17 = CALL2(1,CHKREF(YruntimeYA),T18,T19);
    T24 = BOXVAL(vectorF953);
    T23 = CALL1(1,CHKREF(YruntimeYPn_buckets),T24);
    T26 = BOXVAL(vectorF953);
    T25 = CALL1(1,CHKREF(YruntimeYPbucket_depth),T26);
    T22 = CALL2(1,CHKREF(YruntimeYT),T23,T25);
    T27 = CALL1(1,CHKREF(YruntimeYtable_growth_threshold),table_);
    T21 = CALL2(1,CHKREF(YruntimeYT),T22,T27);
    T16 = CALL2(1,CHKREF(YruntimeYG),T17,T21);
    if (T16 != YPfalse) {
      T30 = CALL1(1,CHKREF(YruntimeYrehash_table),table_);
      T29 = CALL1(1,CHKREF(YruntimeYPvector),T30);
      T28 = BOXVAL(vectorF953) = T29;
      T15 = T28;
    } else {
      T15 = YPfalse;
    }
  }
  T32 = FUNFAB(fun_547,4,table_,key_,vectorF953,value_);
  T31 = with_exit(T32);
  T0 = T31;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_549) {
  P i_,this_bucket_raw_index_;
  P x_1224F957;
  P x_1223F956;
  P tmpF955;
  P this_keyF954;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(this_bucket_raw_index_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(1),this_bucket_raw_index_);
    this_keyF954 = T3;
    T4 = CALL2(1,CHKREF(YmacrosYEE),this_keyF954,CHKREF(YruntimeYDempty_cell_marker));
    if (T4 != YPfalse) {
      T5 = CALL1(1,FREEREF(2),YPfalse);
    } else {
    }
    T7 = CALL2(1,CHKREF(YruntimeYNEE),this_keyF954,CHKREF(YruntimeYDvacated_cell_marker));
    tmpF955 = T7;
    if (tmpF955 != YPfalse) {
      T9 = CALL2(1,FREEREF(3),FREEREF(4),this_keyF954);
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    if (T6 != YPfalse) {
      CALL3(1,CHKREF(YruntimeYelt_setter),CHKREF(YruntimeYDvacated_cell_marker),FREEREF(1),this_bucket_raw_index_);
      x_1223F956 = FREEREF(5);
      T12 = CALL1(1,CHKREF(YruntimeYPcount),x_1223F956);
      T11 = CALL2(1,CHKREF(YruntimeY_),T12,YPint((P)1));
      T10 = CALL2(1,CHKREF(YruntimeYPcount_setter),T11,x_1223F956);
      x_1224F957 = FREEREF(1);
      T15 = CALL1(1,CHKREF(YruntimeYPvacated),x_1224F957);
      T14 = CALL2(1,CHKREF(YruntimeYA),T15,YPint((P)1));
      T13 = CALL2(1,CHKREF(YruntimeYPvacated_setter),T14,x_1224F957);
      T16 = CALL1(1,FREEREF(2),YPtrue);
    } else {
    }
    T18 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    T19 = CALL2(1,CHKREF(YruntimeYA),this_bucket_raw_index_,YPint((P)1));
    a1 = T18;
    a2 = T19;
    i_ = a1;
    this_bucket_raw_index_ = a2;
    goto loop;
    T2 = T17;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_550) {
  P probes_;
  P innerF959;
  P indexF958;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(probes_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),probes_,FREEREF(0));
  if (T1 != YPfalse) {
    T4 = BOXVAL(FREEREF(1));
    T5 = CALL2(1,CHKREF(YruntimeYT),FREEREF(2),YPint((P)2));
    T3 = CALL2(1,CHKREF(YruntimeYT),T4,T5);
    check_type(T3,CHKREF(YLintG));
    indexF958 = T3;
    T6 = FUNSHELL(1,fun_inner_549,7);
    innerF959 = T6;
    FUNINIT(innerF959, 7,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),FREEREF(7),innerF959);
    T7 = CALL2(1,innerF959,YPint((P)0),indexF958);
    T9 = BOXVAL(FREEREF(1));
    T8 = CALL2(1,CHKREF(YruntimeY_),T9,FREEREF(8));
    BOXVAL(FREEREF(1)) = T8;
    T11 = BOXVAL(FREEREF(1));
    T10 = CALL1(1,CHKREF(YruntimeYnegQ),T11);
    if (T10 != YPfalse) {
      T14 = BOXVAL(FREEREF(1));
      T13 = CALL2(1,CHKREF(YruntimeYA),T14,FREEREF(0));
      T12 = BOXVAL(FREEREF(1)) = T13;
    } else {
    }
    T16 = CALL2(1,CHKREF(YruntimeYA),probes_,YPint((P)1));
    a1 = T16;
    probes_ = a1;
    goto loop;
    T2 = T15;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_551) {
  P return_;
  P outerF978;
  P tup29F977;
  P bucket_offsetF976;
  P tup29F975;
  P bucket_indexF974;
  P tup29F973;
  P bucket_depthF972;
  P n_bucketsF971;
  P vectorF970;
  P tup28F969;
  P stateF968;
  P tup28F967;
  P hashF966;
  P tup28F965;
  P tup27F964;
  P hash_functionF963;
  P tup27F962;
  P test_functionF961;
  P tup27F960;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYtable_protocol),FREEREF(0));
  tup27F960 = T1;
  T3 = CALL1(1,CHKREF(Yhead),tup27F960);
  test_functionF961 = T3;
  T5 = CALL1(1,CHKREF(Ytail),tup27F960);
  tup27F962 = T5;
  T7 = CALL1(1,CHKREF(Yhead),tup27F962);
  hash_functionF963 = T7;
  T9 = CALL1(1,CHKREF(Ytail),tup27F962);
  tup27F964 = T9;
  T11 = CALL1(1,hash_functionF963,FREEREF(1));
  tup28F965 = T11;
  T13 = CALL1(1,CHKREF(Yhead),tup28F965);
  check_type(T13,CHKREF(YLintG));
  hashF966 = T13;
  T15 = CALL1(1,CHKREF(Ytail),tup28F965);
  tup28F967 = T15;
  T17 = CALL1(1,CHKREF(Yhead),tup28F967);
  stateF968 = T17;
  T19 = CALL1(1,CHKREF(Ytail),tup28F967);
  tup28F969 = T19;
  T21 = CALL1(1,CHKREF(YruntimeYPvector),FREEREF(0));
  vectorF970 = T21;
  T23 = CALL1(1,CHKREF(YruntimeYPn_buckets),vectorF970);
  n_bucketsF971 = T23;
  T25 = CALL1(1,CHKREF(YruntimeYPbucket_depth),vectorF970);
  bucket_depthF972 = T25;
  T28 = CALL1(1,CHKREF(YruntimeYPprimary_modulus),vectorF970);
  T29 = CALL1(1,CHKREF(YruntimeYPsecondary_modulus),vectorF970);
  T27 = CALL3(1,CHKREF(YruntimeYhash_moduli),hashF966,T28,T29);
  tup29F973 = T27;
  T31 = CALL1(1,CHKREF(Yhead),tup29F973);
  bucket_indexF974 = T31;
  bucket_indexF974 = BOXFAB(bucket_indexF974);
  T34 = CALL1(1,CHKREF(Ytail),tup29F973);
  tup29F975 = T34;
  T36 = CALL1(1,CHKREF(Yhead),tup29F975);
  bucket_offsetF976 = T36;
  T38 = CALL1(1,CHKREF(Ytail),tup29F975);
  tup29F977 = T38;
  T39 = FUNSHELL(1,fun_outer_550,10);
  outerF978 = T39;
  FUNINIT(outerF978, 10,n_bucketsF971,bucket_indexF974,bucket_depthF972,vectorF970,return_,test_functionF961,FREEREF(1),FREEREF(0),bucket_offsetF976,outerF978);
  T40 = CALL1(1,outerF978,YPint((P)0));
  T41 = CALL1(1,CHKREF(Yerror),CHKREF(lit_552));
  T37 = T41;
  T35 = T37;
  T33 = T35;
  T30 = T33;
  T26 = T30;
  T24 = T26;
  T22 = T24;
  T20 = T22;
  T18 = T20;
  T16 = T18;
  T14 = T16;
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

FUNCODEDEF(fun_del_key_552) {
  P table_,key_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(table_, 0);
  ARG(key_, 1);
loop:
  T1 = FUNFAB(fun_551,2,table_,key_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_inner_553) {
  P i_;
  P indexF981;
  P tmpF980;
  P keyF979;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T5 = CALL2(1,CHKREF(YruntimeYT),FREEREF(0),YPint((P)2));
    T4 = CALL2(1,CHKREF(YruntimeYT),FREEREF(2),T5);
    T3 = CALL2(1,CHKREF(YruntimeYA),i_,T4);
    T2 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(1),T3);
    keyF979 = T2;
    T9 = CALL2(1,CHKREF(YmacrosYEE),keyF979,CHKREF(YruntimeYDempty_cell_marker));
    tmpF980 = T9;
    if (tmpF980 != YPfalse) {
      T10 = tmpF980;
    } else {
      T11 = CALL2(1,CHKREF(YmacrosYEE),keyF979,CHKREF(YruntimeYDvacated_cell_marker));
      T10 = T11;
    }
    T8 = T10;
    T7 = CALL1(1,CHKREF(Ynot),T8);
    if (T7 != YPfalse) {
      CALLN(1,CHKREF(YruntimeYtrace),4,CHKREF(YruntimeYout),CHKREF(lit_555),FREEREF(2),i_);
      T16 = CALL2(1,CHKREF(YruntimeYT),FREEREF(0),YPint((P)2));
      T15 = CALL2(1,CHKREF(YruntimeYT),FREEREF(2),T16);
      T14 = CALL2(1,CHKREF(YruntimeYA),T15,FREEREF(0));
      T13 = CALL2(1,CHKREF(YruntimeYA),i_,T14);
      indexF981 = T13;
      T18 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(1),indexF981);
      T17 = CALL2(1,FREEREF(3),keyF979,T18);
      T12 = T17;
      T6 = T12;
    } else {
      T6 = YPfalse;
    }
    T20 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T20;
    i_ = a1;
    goto loop;
    T0 = T19;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_554) {
  P b_;
  P innerF982;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),b_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = FUNSHELL(1,fun_inner_553,5);
    innerF982 = T2;
    FUNINIT(innerF982, 5,FREEREF(1),FREEREF(2),b_,FREEREF(3),innerF982);
    T3 = CALL1(1,innerF982,YPint((P)0));
    T5 = CALL2(1,CHKREF(YruntimeYA),b_,YPint((P)1));
    a1 = T5;
    b_ = a1;
    goto loop;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_keyed_555) {
  P function_,table_;
  P outerF986;
  P depthF985;
  P n_bucketsF984;
  P vectorF983;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(function_, 0);
  ARG(table_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYPvector),table_);
  vectorF983 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYPn_buckets),vectorF983);
  n_bucketsF984 = T3;
  T5 = CALL1(1,CHKREF(YruntimeYPbucket_depth),vectorF983);
  depthF985 = T5;
  T7 = FUNSHELL(1,fun_outer_554,5);
  outerF986 = T7;
  FUNINIT(outerF986, 5,n_bucketsF984,depthF985,vectorF983,function_,outerF986);
  T8 = CALL1(1,outerF986,YPint((P)0));
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_556) {
  P i_;
  P indexF989;
  P tmpF988;
  P keyF987;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T5 = CALL2(1,CHKREF(YruntimeYT),FREEREF(0),YPint((P)2));
    T4 = CALL2(1,CHKREF(YruntimeYT),FREEREF(2),T5);
    T3 = CALL2(1,CHKREF(YruntimeYA),i_,T4);
    T2 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(1),T3);
    keyF987 = T2;
    T9 = CALL2(1,CHKREF(YmacrosYEE),keyF987,CHKREF(YruntimeYDempty_cell_marker));
    tmpF988 = T9;
    if (tmpF988 != YPfalse) {
      T10 = tmpF988;
    } else {
      T11 = CALL2(1,CHKREF(YmacrosYEE),keyF987,CHKREF(YruntimeYDvacated_cell_marker));
      T10 = T11;
    }
    T8 = T10;
    T7 = CALL1(1,CHKREF(Ynot),T8);
    if (T7 != YPfalse) {
      T16 = CALL2(1,CHKREF(YruntimeYT),FREEREF(0),YPint((P)2));
      T15 = CALL2(1,CHKREF(YruntimeYT),FREEREF(2),T16);
      T14 = CALL2(1,CHKREF(YruntimeYA),T15,FREEREF(0));
      T13 = CALL2(1,CHKREF(YruntimeYA),i_,T14);
      indexF989 = T13;
      T18 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(1),indexF989);
      T17 = CALL1(1,FREEREF(3),T18);
      T12 = T17;
      T6 = T12;
    } else {
      T6 = YPfalse;
    }
    T20 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T20;
    i_ = a1;
    goto loop;
    T0 = T19;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_557) {
  P b_;
  P innerF990;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),b_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = FUNSHELL(1,fun_inner_556,5);
    innerF990 = T2;
    FUNINIT(innerF990, 5,FREEREF(1),FREEREF(2),b_,FREEREF(3),innerF990);
    T3 = CALL1(1,innerF990,YPint((P)0));
    T5 = CALL2(1,CHKREF(YruntimeYA),b_,YPint((P)1));
    a1 = T5;
    b_ = a1;
    goto loop;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_558) {
  P function_,table_;
  P outerF994;
  P depthF993;
  P n_bucketsF992;
  P vectorF991;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(function_, 0);
  ARG(table_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYPvector),table_);
  vectorF991 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYPn_buckets),vectorF991);
  n_bucketsF992 = T3;
  T5 = CALL1(1,CHKREF(YruntimeYPbucket_depth),vectorF991);
  depthF993 = T5;
  T7 = FUNSHELL(1,fun_outer_557,5);
  outerF994 = T7;
  FUNINIT(outerF994, 5,n_bucketsF992,depthF993,vectorF991,function_,outerF994);
  T8 = CALL1(1,outerF994,YPint((P)0));
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_keys_559) {
  P table_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(table_, 0);
loop:
  T0 = CALL1(1,CHKREF(YruntimeYPvector),table_);
  CALL2(1,CHKREF(YruntimeYclrX),T0,CHKREF(YruntimeYDempty_cell_marker));
  T1 = CALL2(1,CHKREF(YruntimeYPcount_setter),YPint((P)0),table_);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_len_560) {
  P table_;
  P T0;
  P a1;
LINK_STACK();
  ARG(table_, 0);
loop:
  T0 = CALL1(1,CHKREF(YruntimeYPcount),table_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_Pvector_561) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPvector));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pvector_setter_562) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPvector));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_563) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_Pbucket_564) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPbucket));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pbucket_setter_565) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPbucket));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_566) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_Pindex_567) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPindex));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pindex_setter_568) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPindex));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_569) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_inner_570) {
  P i_;
  P tmpF996;
  P keyF995;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T6 = CALL2(1,CHKREF(YruntimeYT),FREEREF(0),YPint((P)2));
    T5 = CALL2(1,CHKREF(YruntimeYT),FREEREF(2),T6);
    T4 = CALL2(1,CHKREF(YruntimeYA),i_,T5);
    T3 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(1),T4);
    keyF995 = T3;
    T9 = CALL2(1,CHKREF(YmacrosYEE),keyF995,CHKREF(YruntimeYDempty_cell_marker));
    tmpF996 = T9;
    if (tmpF996 != YPfalse) {
      T10 = tmpF996;
    } else {
      T11 = CALL2(1,CHKREF(YmacrosYEE),keyF995,CHKREF(YruntimeYDvacated_cell_marker));
      T10 = T11;
    }
    T8 = T10;
    T7 = CALL1(1,CHKREF(Ynot),T8);
    if (T7 != YPfalse) {
      T14 = (P)YPpair(CHKREF(YruntimeYLtab_stateG),Ynil);
      T17 = (P)YPpair(CHKREF(YruntimeYPindex),Ynil);
      T16 = (P)YPpair(CHKREF(YruntimeYPbucket),T17);
      T15 = (P)YPpair(CHKREF(YruntimeYPvector),T16);
      T20 = (P)YPpair(i_,Ynil);
      T19 = (P)YPpair(FREEREF(2),T20);
      T18 = (P)YPpair(FREEREF(1),T19);
      T13 = CALL3(1,CHKREF(YPisa),T14,T15,T18);
      T12 = CALL1(1,FREEREF(3),T13);
    } else {
    }
    T22 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T22;
    i_ = a1;
    goto loop;
    T2 = T21;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_571) {
  P b_;
  P innerF997;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),b_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = FUNSHELL(1,fun_inner_570,5);
    innerF997 = T2;
    FUNINIT(innerF997, 5,FREEREF(1),FREEREF(2),b_,FREEREF(3),innerF997);
    T3 = CALL1(1,innerF997,YPint((P)0));
    T5 = CALL2(1,CHKREF(YruntimeYA),b_,YPint((P)1));
    a1 = T5;
    b_ = a1;
    goto loop;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_572) {
  P return_;
  P outerF1001;
  P depthF1000;
  P n_bucketsF999;
  P vectorF998;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYPvector),FREEREF(0));
  vectorF998 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYPn_buckets),vectorF998);
  n_bucketsF999 = T3;
  T5 = CALL1(1,CHKREF(YruntimeYPbucket_depth),vectorF998);
  depthF1000 = T5;
  T6 = FUNSHELL(1,fun_outer_571,5);
  outerF1001 = T6;
  FUNINIT(outerF1001, 5,n_bucketsF999,depthF1000,vectorF998,return_,outerF1001);
  T7 = CALL1(1,outerF1001,YPint((P)0));
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ini_state_573) {
  P table_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(table_, 0);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYlen),table_);
  T1 = CALL2(1,CHKREF(YruntimeYE),T2,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T4 = FUNFAB(fun_572,1,table_);
    T3 = with_exit(T4);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_574) {
  P i_;
  P tmpF1003;
  P keyF1002;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T6 = CALL2(1,CHKREF(YruntimeYT),FREEREF(0),YPint((P)2));
    T5 = CALL2(1,CHKREF(YruntimeYT),FREEREF(2),T6);
    T4 = CALL2(1,CHKREF(YruntimeYA),i_,T5);
    T3 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(1),T4);
    keyF1002 = T3;
    T9 = CALL2(1,CHKREF(YmacrosYEE),keyF1002,CHKREF(YruntimeYDempty_cell_marker));
    tmpF1003 = T9;
    if (tmpF1003 != YPfalse) {
      T10 = tmpF1003;
    } else {
      T11 = CALL2(1,CHKREF(YmacrosYEE),keyF1002,CHKREF(YruntimeYDvacated_cell_marker));
      T10 = T11;
    }
    T8 = T10;
    T7 = CALL1(1,CHKREF(Ynot),T8);
    if (T7 != YPfalse) {
      CALL2(1,CHKREF(YruntimeYPbucket_setter),FREEREF(2),FREEREF(3));
      CALL2(1,CHKREF(YruntimeYPindex_setter),i_,FREEREF(3));
      T12 = CALL1(1,FREEREF(4),FREEREF(3));
    } else {
    }
    T14 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T14;
    i_ = a1;
    goto loop;
    T2 = T13;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_575) {
  P b_,firstQ_;
  P innerF1004;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(firstQ_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),b_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = FUNSHELL(1,fun_inner_574,6);
    innerF1004 = T2;
    FUNINIT(innerF1004, 6,FREEREF(1),FREEREF(2),b_,FREEREF(3),FREEREF(4),innerF1004);
    if (firstQ_ != YPfalse) {
      T5 = CALL2(1,CHKREF(YruntimeYA),FREEREF(5),YPint((P)1));
      T4 = T5;
    } else {
      T4 = YPint((P)0);
    }
    T3 = CALL1(1,innerF1004,T4);
    T7 = CALL2(1,CHKREF(YruntimeYA),b_,YPint((P)1));
    a1 = T7;
    a2 = YPfalse;
    b_ = a1;
    firstQ_ = a2;
    goto loop;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_576) {
  P return_;
  P outerF1005;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(1,fun_outer_575,7);
  outerF1005 = T0;
  FUNINIT(outerF1005, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_,FREEREF(4),outerF1005);
  T1 = CALL2(1,outerF1005,FREEREF(5),YPtrue);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_nxt_state_577) {
  P table_,state_;
  P indexF1010;
  P bucketF1009;
  P depthF1008;
  P n_bucketsF1007;
  P vectorF1006;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(table_, 0);
  ARG(state_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYPvector),state_);
  vectorF1006 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYPn_buckets),vectorF1006);
  n_bucketsF1007 = T3;
  T5 = CALL1(1,CHKREF(YruntimeYPbucket_depth),vectorF1006);
  depthF1008 = T5;
  T7 = CALL1(1,CHKREF(YruntimeYPbucket),state_);
  bucketF1009 = T7;
  T9 = CALL1(1,CHKREF(YruntimeYPindex),state_);
  indexF1010 = T9;
  T11 = FUNFAB(fun_576,6,n_bucketsF1007,depthF1008,vectorF1006,state_,indexF1010,bucketF1009);
  T10 = with_exit(T11);
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fin_stateQ_578) {
  P table_,state_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(table_, 0);
  ARG(state_, 1);
loop:
  T0 = CALL1(1,CHKREF(Ynot),state_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_key_579) {
  P table_,state_;
  P depthF1012;
  P vectorF1011;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(table_, 0);
  ARG(state_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYPvector),state_);
  vectorF1011 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYPbucket_depth),vectorF1011);
  depthF1012 = T3;
  T6 = CALL1(1,CHKREF(YruntimeYPindex),state_);
  T8 = CALL1(1,CHKREF(YruntimeYPbucket),state_);
  T9 = CALL2(1,CHKREF(YruntimeYT),depthF1012,YPint((P)2));
  T7 = CALL2(1,CHKREF(YruntimeYT),T8,T9);
  T5 = CALL2(1,CHKREF(YruntimeYA),T6,T7);
  T4 = CALL2(1,CHKREF(YruntimeYelt),vectorF1011,T5);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_elt_580) {
  P table_,state_;
  P depthF1014;
  P vectorF1013;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(table_, 0);
  ARG(state_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYPvector),state_);
  vectorF1013 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYPbucket_depth),vectorF1013);
  depthF1014 = T3;
  T6 = CALL1(1,CHKREF(YruntimeYPindex),state_);
  T9 = CALL1(1,CHKREF(YruntimeYPbucket),state_);
  T10 = CALL2(1,CHKREF(YruntimeYT),depthF1014,YPint((P)2));
  T8 = CALL2(1,CHKREF(YruntimeYT),T9,T10);
  T7 = CALL2(1,CHKREF(YruntimeYA),depthF1014,T8);
  T5 = CALL2(1,CHKREF(YruntimeYA),T6,T7);
  T4 = CALL2(1,CHKREF(YruntimeYelt),vectorF1013,T5);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_elt_setter_581) {
  P value_,table_,state_;
  P depthF1017;
  P indexF1016;
  P vectorF1015;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(value_, 0);
  ARG(table_, 1);
  ARG(state_, 2);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYPvector),state_);
  vectorF1015 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYPindex),state_);
  indexF1016 = T3;
  T5 = CALL1(1,CHKREF(YruntimeYPbucket_depth),vectorF1015);
  depthF1017 = T5;
  T10 = CALL1(1,CHKREF(YruntimeYPbucket),state_);
  T11 = CALL2(1,CHKREF(YruntimeYT),depthF1017,YPint((P)2));
  T9 = CALL2(1,CHKREF(YruntimeYT),T10,T11);
  T8 = CALL2(1,CHKREF(YruntimeYA),depthF1017,T9);
  T7 = CALL2(1,CHKREF(YruntimeYA),indexF1016,T8);
  T6 = CALL3(1,CHKREF(YruntimeYelt_setter),value_,vectorF1015,T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_copy_state_582) {
  P table_,state_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(table_, 0);
  ARG(state_, 1);
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLtab_stateG),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYPindex),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYPbucket),T4);
  T2 = (P)YPpair(CHKREF(YruntimeYPvector),T3);
  T6 = CALL1(1,CHKREF(YruntimeYPvector),state_);
  T8 = CALL1(1,CHKREF(YruntimeYPbucket),state_);
  T10 = CALL1(1,CHKREF(YruntimeYPindex),state_);
  T9 = (P)YPpair(T10,Ynil);
  T7 = (P)YPpair(T8,T9);
  T5 = (P)YPpair(T6,T7);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T5);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_583) {
  P k_,v_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,CHKREF(YmacrosYpair),k_,T2);
  T0 = BOXVAL(FREEREF(0)) = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_tab_keys_584) {
  P table_;
  P collector_F1018;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(table_, 0);
loop:
  collector_F1018 = Ynil;
  collector_F1018 = BOXFAB(collector_F1018);
  T2 = FUNFAB(fun_583,1,collector_F1018);
  CALL2(1,CHKREF(YruntimeYdo_keyed),T2,table_);
  T4 = BOXVAL(collector_F1018);
  T3 = CALL1(1,CHKREF(YruntimeYrevX),T4);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_grow_table_585) {
  P table_;
  P new_vectorF1025;
  P tup30F1024;
  P new_bucket_depthF1023;
  P tup30F1022;
  P new_n_bucketsF1021;
  P tup30F1020;
  P vectorF1019;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(table_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYPvector),table_);
  vectorF1019 = T1;
  T8 = CALL1(1,CHKREF(YruntimeYPn_buckets),vectorF1019);
  T9 = CALL1(1,CHKREF(YruntimeYPbucket_depth),vectorF1019);
  T7 = CALL2(1,CHKREF(YruntimeYT),T8,T9);
  T10 = CALL1(1,CHKREF(YruntimeYtable_growth_factor),table_);
  T6 = CALL2(1,CHKREF(YruntimeYT),T7,T10);
  T5 = CALL1(1,CHKREF(YruntimeYfloor),T6);
  T4 = CALL2(1,CHKREF(YruntimeYelt),T5,YPint((P)0));
  T3 = CALL1(1,CHKREF(YruntimeYchoose_table_geometry),T4);
  tup30F1020 = T3;
  T12 = CALL1(1,CHKREF(Yhead),tup30F1020);
  new_n_bucketsF1021 = T12;
  T14 = CALL1(1,CHKREF(Ytail),tup30F1020);
  tup30F1022 = T14;
  T16 = CALL1(1,CHKREF(Yhead),tup30F1022);
  new_bucket_depthF1023 = T16;
  T18 = CALL1(1,CHKREF(Ytail),tup30F1022);
  tup30F1024 = T18;
  T22 = CALL2(1,CHKREF(YruntimeYT),new_bucket_depthF1023,YPint((P)2));
  T21 = CALL2(1,CHKREF(YruntimeYT),new_n_bucketsF1021,T22);
  T23 = CALL2(1,CHKREF(YruntimeY_),new_n_bucketsF1021,YPint((P)2));
  T20 = CALLN(1,CHKREF(YruntimeYfab_table_vector),6,T21,CHKREF(YruntimeYDempty_cell_marker),new_n_bucketsF1021,new_bucket_depthF1023,new_n_bucketsF1021,T23);
  new_vectorF1025 = T20;
  CALL2(1,CHKREF(YruntimeYcopy_to_new_vector),table_,new_vectorF1025);
  CALL2(1,CHKREF(YruntimeYPvector_setter),new_vectorF1025,table_);
  T19 = table_;
  T17 = T19;
  T15 = T17;
  T13 = T15;
  T11 = T13;
  T2 = T11;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_rehash_table_586) {
  P table_;
  P new_vectorF1027;
  P vectorF1026;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(table_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYPvector),table_);
  vectorF1026 = T1;
  T5 = CALL1(1,CHKREF(YruntimeYPn_buckets),vectorF1026);
  T7 = CALL1(1,CHKREF(YruntimeYPbucket_depth),vectorF1026);
  T6 = CALL2(1,CHKREF(YruntimeYT),T7,YPint((P)2));
  T4 = CALL2(1,CHKREF(YruntimeYT),T5,T6);
  T8 = CALL1(1,CHKREF(YruntimeYPn_buckets),vectorF1026);
  T9 = CALL1(1,CHKREF(YruntimeYPbucket_depth),vectorF1026);
  T10 = CALL1(1,CHKREF(YruntimeYPprimary_modulus),vectorF1026);
  T11 = CALL1(1,CHKREF(YruntimeYPsecondary_modulus),vectorF1026);
  T3 = CALLN(1,CHKREF(YruntimeYfab_table_vector),6,T4,CHKREF(YruntimeYDempty_cell_marker),T8,T9,T10,T11);
  new_vectorF1027 = T3;
  CALL2(1,CHKREF(YruntimeYcopy_to_new_vector),table_,new_vectorF1027);
  CALL2(1,CHKREF(YruntimeYPvector_setter),new_vectorF1027,table_);
  T2 = table_;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_587) {
  P p_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(p_, 0);
loop:
  T3 = CALL2(1,CHKREF(YruntimeYceilingS),FREEREF(0),FREEREF(1));
  T2 = CALL2(1,CHKREF(YruntimeYelt),T3,YPint((P)0));
  T1 = CALL2(1,CHKREF(YruntimeYG),p_,T2);
  if (T1 != YPfalse) {
    T6 = CALL2(1,CHKREF(YruntimeYA),p_,YPint((P)2));
    T5 = CALL2(1,CHKREF(YmacrosYtup),T6,FREEREF(1));
    T4 = CALL1(1,FREEREF(2),T5);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_588) {
  P return_;
  P depthF1028;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYL),FREEREF(0),YPint((P)2000));
  if (T2 != YPfalse) {
    T1 = YPint((P)1);
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYL),FREEREF(0),YPint((P)5000));
    if (T4 != YPfalse) {
      T3 = YPint((P)2);
    } else {
      T6 = CALL2(1,CHKREF(YruntimeYL),FREEREF(0),YPint((P)15000));
      if (T6 != YPfalse) {
        T5 = YPint((P)4);
      } else {
        T8 = CALL2(1,CHKREF(YruntimeYL),FREEREF(0),YPint((P)50000));
        if (T8 != YPfalse) {
          T7 = YPint((P)8);
        } else {
          T10 = CALL2(1,CHKREF(YruntimeYL),FREEREF(0),YPint((P)250000));
          if (T10 != YPfalse) {
            T9 = YPint((P)16);
          } else {
            if (YPtrue != YPfalse) {
              T11 = YPint((P)32);
            } else {
              T11 = YPfalse;
            }
            T9 = T11;
          }
          T7 = T9;
        }
        T5 = T7;
      }
      T3 = T5;
    }
    T1 = T3;
  }
  depthF1028 = T1;
  T12 = FUNFAB(fun_587,3,FREEREF(0),depthF1028,return_);
  CALL2(1,CHKREF(YruntimeYdo),T12,CHKREF(YruntimeYTtwin_primesT));
  T13 = CALL1(1,CHKREF(Yerror),CHKREF(lit_569));
  T0 = T13;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYchoose_table_geometry) {
  P capacity_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(capacity_, 0);
loop:
  T1 = FUNFAB(fun_588,1,capacity_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_inner_590) {
  P i_,index_;
  P this_keyF1029;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(index_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(1),index_);
    this_keyF1029 = T3;
    T4 = CALL2(1,CHKREF(YmacrosYEE),this_keyF1029,CHKREF(YruntimeYDempty_cell_marker));
    if (T4 != YPfalse) {
      CALL3(1,CHKREF(YruntimeYelt_setter),FREEREF(2),FREEREF(1),index_);
      T5 = CALL2(1,CHKREF(YruntimeYA),index_,FREEREF(0));
      CALL3(1,CHKREF(YruntimeYelt_setter),FREEREF(3),FREEREF(1),T5);
      T6 = CALL1(1,FREEREF(4),YPfalse);
    } else {
    }
    T8 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    T9 = CALL2(1,CHKREF(YruntimeYA),index_,YPint((P)1));
    a1 = T8;
    a2 = T9;
    i_ = a1;
    index_ = a2;
    goto loop;
    T2 = T7;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_591) {
  P probes_;
  P innerF1031;
  P bucket_startF1030;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(probes_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),probes_,FREEREF(0));
  if (T1 != YPfalse) {
    T4 = BOXVAL(FREEREF(1));
    T5 = CALL2(1,CHKREF(YruntimeYT),FREEREF(2),YPint((P)2));
    T3 = CALL2(1,CHKREF(YruntimeYT),T4,T5);
    bucket_startF1030 = T3;
    T6 = FUNSHELL(1,fun_inner_590,6);
    innerF1031 = T6;
    FUNINIT(innerF1031, 6,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),innerF1031);
    T7 = CALL2(1,innerF1031,YPint((P)0),bucket_startF1030);
    T9 = BOXVAL(FREEREF(1));
    T8 = CALL2(1,CHKREF(YruntimeY_),T9,FREEREF(7));
    BOXVAL(FREEREF(1)) = T8;
    T11 = BOXVAL(FREEREF(1));
    T10 = CALL1(1,CHKREF(YruntimeYnegQ),T11);
    if (T10 != YPfalse) {
      T14 = BOXVAL(FREEREF(1));
      T13 = CALL2(1,CHKREF(YruntimeYA),T14,FREEREF(0));
      T12 = BOXVAL(FREEREF(1)) = T13;
    } else {
    }
    T16 = CALL2(1,CHKREF(YruntimeYA),probes_,YPint((P)1));
    a1 = T16;
    probes_ = a1;
    goto loop;
    T2 = T15;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_592) {
  P return_;
  P outerF1051;
  P tup33F1050;
  P new_bucket_offsetF1049;
  P tup33F1048;
  P new_bucket_indexF1047;
  P tup33F1046;
  P new_secondary_modulusF1045;
  P new_primary_modulusF1044;
  P new_bucket_depthF1043;
  P new_n_bucketsF1042;
  P tup32F1041;
  P stateF1040;
  P tup32F1039;
  P hashF1038;
  P tup32F1037;
  P tup31F1036;
  P hash_functionF1035;
  P tup31F1034;
  P test_functionF1033;
  P tup31F1032;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYtable_protocol),FREEREF(0));
  tup31F1032 = T1;
  T3 = CALL1(1,CHKREF(Yhead),tup31F1032);
  test_functionF1033 = T3;
  T5 = CALL1(1,CHKREF(Ytail),tup31F1032);
  tup31F1034 = T5;
  T7 = CALL1(1,CHKREF(Yhead),tup31F1034);
  hash_functionF1035 = T7;
  T9 = CALL1(1,CHKREF(Ytail),tup31F1034);
  tup31F1036 = T9;
  T11 = CALL1(1,hash_functionF1035,FREEREF(1));
  tup32F1037 = T11;
  T13 = CALL1(1,CHKREF(Yhead),tup32F1037);
  check_type(T13,CHKREF(YLintG));
  hashF1038 = T13;
  T15 = CALL1(1,CHKREF(Ytail),tup32F1037);
  tup32F1039 = T15;
  T17 = CALL1(1,CHKREF(Yhead),tup32F1039);
  stateF1040 = T17;
  T19 = CALL1(1,CHKREF(Ytail),tup32F1039);
  tup32F1041 = T19;
  T21 = CALL1(1,CHKREF(YruntimeYPn_buckets),FREEREF(2));
  new_n_bucketsF1042 = T21;
  T23 = CALL1(1,CHKREF(YruntimeYPbucket_depth),FREEREF(2));
  new_bucket_depthF1043 = T23;
  T25 = CALL1(1,CHKREF(YruntimeYPprimary_modulus),FREEREF(2));
  new_primary_modulusF1044 = T25;
  T27 = CALL1(1,CHKREF(YruntimeYPsecondary_modulus),FREEREF(2));
  new_secondary_modulusF1045 = T27;
  T29 = CALL3(1,CHKREF(YruntimeYhash_moduli),hashF1038,new_primary_modulusF1044,new_secondary_modulusF1045);
  tup33F1046 = T29;
  T31 = CALL1(1,CHKREF(Yhead),tup33F1046);
  new_bucket_indexF1047 = T31;
  new_bucket_indexF1047 = BOXFAB(new_bucket_indexF1047);
  T34 = CALL1(1,CHKREF(Ytail),tup33F1046);
  tup33F1048 = T34;
  T36 = CALL1(1,CHKREF(Yhead),tup33F1048);
  new_bucket_offsetF1049 = T36;
  T38 = CALL1(1,CHKREF(Ytail),tup33F1048);
  tup33F1050 = T38;
  T39 = FUNSHELL(1,fun_outer_591,9);
  outerF1051 = T39;
  FUNINIT(outerF1051, 9,new_n_bucketsF1042,new_bucket_indexF1047,new_bucket_depthF1043,FREEREF(2),FREEREF(1),FREEREF(3),return_,new_bucket_offsetF1049,outerF1051);
  T40 = CALL1(1,outerF1051,YPint((P)0));
  T41 = CALL1(1,CHKREF(Yerror),CHKREF(lit_572));
  T37 = T41;
  T35 = T37;
  T33 = T35;
  T30 = T33;
  T28 = T30;
  T26 = T28;
  T24 = T26;
  T22 = T24;
  T20 = T22;
  T18 = T20;
  T16 = T18;
  T14 = T16;
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

FUNCODEDEF(fun_593) {
  P k_,v_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
loop:
  T1 = FUNFAB(fun_592,4,FREEREF(0),k_,FREEREF(1),v_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_copy_to_new_vector_594) {
  P table_,new_vector_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(table_, 0);
  ARG(new_vector_, 1);
loop:
  T1 = FUNFAB(fun_593,2,table_,new_vector_);
  T0 = CALL2(1,CHKREF(YruntimeYdo_keyed),T1,table_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYcurrent_gc_state) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(CHKREF(YruntimeYDpermanent_hash_state));
}

FUNCODEDEF(fun_id_hash_596) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYaddress_of),x_);
  T2 = CALL0(1,CHKREF(YruntimeYcurrent_gc_state));
  T0 = CALL2(1,CHKREF(YmacrosYtup),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_597) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  if (x_ != YPfalse) {
    T1 = YPint((P)131);
  } else {
    T1 = YPint((P)149);
  }
  T0 = CALL2(1,CHKREF(YmacrosYtup),T1,CHKREF(YruntimeYDpermanent_hash_state));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYrot) {
  P x_,a_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYneg),a_);
  T1 = CALL2(1,CHKREF(YruntimeYash),x_,T2);
  T3 = CALL2(1,CHKREF(YruntimeYash),x_,a_);
  T0 = CALL2(1,CHKREF(YruntimeYlogior),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_id_hash_599) {
  P x_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T4 = CALL2(1,CHKREF(YruntimeYrot),x_,YPint((P)15));
  T3 = CALL2(1,CHKREF(YruntimeY_),T4,x_);
  T2 = CALL2(1,CHKREF(YruntimeYA),T3,YPint((P)31));
  T1 = CALL1(1,CHKREF(YruntimeYabs),T2);
  T0 = CALL2(1,CHKREF(YmacrosYtup),T1,CHKREF(YruntimeYDpermanent_hash_state));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_600) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),x_);
  T0 = CALL1(1,CHKREF(YruntimeYid_hash),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_601) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL1(1,CHKREF(YruntimeYflo_bits),x_);
  T1 = CALL2(1,CHKREF(YruntimeYA),T2,YPint((P)89));
  T0 = CALL2(1,CHKREF(YmacrosYtup),T1,CHKREF(YruntimeYDpermanent_hash_state));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_602) {
  P i_,hash_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(hash_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    T6 = CALL2(1,CHKREF(YruntimeYash),hash_,YPint((P)6));
    T9 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(2),i_);
    T8 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),T9);
    T7 = CALL2(1,CHKREF(YruntimeYlogand),T8,YPint((P)159));
    T5 = CALL2(1,CHKREF(YruntimeYA),T6,T7);
    T4 = CALL2(1,CHKREF(YruntimeYmodulo),T5,YPint((P)970747));
    a1 = T3;
    a2 = T4;
    i_ = a1;
    hash_ = a2;
    goto loop;
    T0 = T2;
  } else {
    T10 = CALL2(1,CHKREF(YmacrosYtup),hash_,CHKREF(YruntimeYDpermanent_hash_state));
    T0 = T10;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYcase_insensitive_string_hash) {
  P x_;
  P loopF1054;
  P eF1053;
  P sF1052;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  sF1052 = YPint((P)0);
  T2 = CALL1(1,CHKREF(YruntimeYlen),x_);
  eF1053 = T2;
  T4 = FUNSHELL(1,fun_loop_602,3);
  loopF1054 = T4;
  FUNINIT(loopF1054, 3,eF1053,loopF1054,x_);
  T5 = CALL2(1,loopF1054,sF1052,YPint((P)0));
  T3 = T5;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_604) {
  P i_;
  P tmpF1059;
  P tmpF1058;
  P cyF1057;
  P cxF1056;
  P tmpF1055;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,CHKREF(YmacrosYEE),i_,FREEREF(0));
  tmpF1055 = T1;
  if (tmpF1055 != YPfalse) {
    T2 = tmpF1055;
  } else {
    T5 = CALL2(1,CHKREF(YruntimeY_),i_,FREEREF(2));
    T4 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(1),T5);
    check_type(T4,CHKREF(YLchrG));
    cxF1056 = T4;
    T7 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(3),i_);
    check_type(T7,CHKREF(YLchrG));
    cyF1057 = T7;
    T10 = CALL2(1,CHKREF(YmacrosYEE),cxF1056,cyF1057);
    tmpF1058 = T10;
    if (tmpF1058 != YPfalse) {
      T11 = tmpF1058;
    } else {
      T13 = CALL1(1,CHKREF(YruntimeYas_lowercase),cxF1056);
      T14 = CALL1(1,CHKREF(YruntimeYas_lowercase),cyF1057);
      T12 = CALL2(1,CHKREF(YmacrosYEE),T13,T14);
      T11 = T12;
    }
    T9 = T11;
    tmpF1059 = T9;
    if (tmpF1059 != YPfalse) {
      T17 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
      a1 = T17;
      i_ = a1;
      goto loop;
      T15 = T16;
    } else {
      T15 = YPfalse;
    }
    T8 = T15;
    T6 = T8;
    T3 = T6;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYcase_insensitive_string_equal) {
  P x_,y_;
  P loopF1062;
  P eyF1061;
  P syF1060;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  syF1060 = YPint((P)0);
  T2 = CALL1(1,CHKREF(YruntimeYlen),y_);
  eyF1061 = T2;
  T5 = CALL1(1,CHKREF(YruntimeYlen),x_);
  T6 = CALL2(1,CHKREF(YruntimeY_),eyF1061,syF1060);
  T4 = CALL2(1,CHKREF(YmacrosYEE),T5,T6);
  if (T4 != YPfalse) {
    T8 = FUNSHELL(1,fun_loop_604,5);
    loopF1062 = T8;
    FUNINIT(loopF1062, 5,eyF1061,x_,syF1060,y_,loopF1062);
    T9 = CALL1(1,loopF1062,syF1060);
    T7 = T9;
    T3 = T7;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_table_protocol_606) {
  P U_;
  P T0;
  P a1;
LINK_STACK();
  ARG(U_, 0);
loop:
  T0 = CALL2(1,CHKREF(YmacrosYtup),CHKREF(YruntimeYcase_insensitive_string_equal),CHKREF(YruntimeYcase_insensitive_string_hash));
UNLINK_STACK();
  RET(T0);
}

P YruntimeYbooted_fab_sym_using(P name_,P given_sym_) {
  P tmpF1064;
  P symF1063;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(1,CHKREF(YruntimeYelt),CHKREF(YruntimeYsymbols),name_);
  symF1063 = T1;
  T3 = CALL2(1,CHKREF(YmacrosYEE),symF1063,CHKREF(Ynul));
  if (T3 != YPfalse) {
    tmpF1064 = given_sym_;
    if (tmpF1064 != YPfalse) {
      T6 = tmpF1064;
    } else {
      T8 = (P)YPpair(CHKREF(YLsymG),Ynil);
      T9 = (P)YPpair(CHKREF(Ysym_name),Ynil);
      T10 = (P)YPpair(name_,Ynil);
      T7 = CALL3(1,CHKREF(YPisa),T8,T9,T10);
      T6 = T7;
    }
    T5 = T6;
    T4 = CALL3(1,CHKREF(YruntimeYelt_setter),T5,CHKREF(YruntimeYsymbols),name_);
    T2 = T4;
  } else {
    T2 = symF1063;
  }
  T0 = T2;
  return T0;
}

FUNCODEDEF(YruntimeYbooted_fab_sym) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = (P)YruntimeYbooted_fab_sym_using(name_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boot_609) {
  P syms_;
  P symF1065;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(syms_, 0);
loop:
  T2 = CALL1(1,CHKREF(YmacrosYemptyQ),syms_);
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,CHKREF(Yhead),syms_);
    symF1065 = T3;
    T5 = CALL1(1,CHKREF(Ysym_name),symF1065);
    T4 = (P)YruntimeYbooted_fab_sym_using(T5,symF1065);
    T7 = CALL1(1,CHKREF(Ytail),syms_);
    a1 = T7;
    syms_ = a1;
    goto loop;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYboot_symbols) {
  P bootF1066;
  P T2,T1,T0;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_boot_609,1);
  bootF1066 = T1;
  FUNINIT(bootF1066, 1,bootF1066);
  T2 = CALL1(0,bootF1066,CHKREF(YPsymbols));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YruntimeY___main_0___() {
  P T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260,T259,T258;
  P T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244,T243,T242;
  P T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227,T226;
  P T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211,T210;
  P T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194;
  P T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178;
  P T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162;
  P T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146;
  P T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130;
  P T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114;
  P T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98;
  P T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82;
  P T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66;
  P T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50;
  P T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
loop:
  lit_0 = YPPsym((P)"napply");
  lit_1 = YPPsym((P)"proc");
  lit_2 = YPPsym((P)"nexts");
  lit_3 = YPPsym((P)"args");
  lit_4 = YPPsym((P)"loop1");
  lit_5 = YPPsym((P)"i");
  lit_6 = YPPsym((P)"loop2");
  lit_7 = YPPsym((P)"s");
  T2 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop1_0 = YPmet(FUNCODEREF(fun_loop1_0),CHKREF(lit_4),T2,ENVNUL);
  T1 = YPsig(YPPlist(2,CHKREF(lit_7),CHKREF(lit_5)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop2_1 = YPmet(FUNCODEREF(fun_loop2_1),CHKREF(lit_6),T1,ENVNUL);
  T0 = YPsig(YPPlist(3,CHKREF(lit_1),CHKREF(lit_2),CHKREF(lit_3)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLanyG)),YPtrue,YPint((P)2),CHKREF(YLanyG),Ynil);
  YmacrosYnapply = YPmet(FUNCODEREF(YmacrosYnapply),CHKREF(lit_0),T0,ENVNUL);
  T3 = YmacrosYnapply;
  YmacrosYnapply = T3;
  lit_8 = YPPsym((P)"match-empty-list");
  lit_9 = YPPsym((P)"x");
  lit_10 = YPPsym((P)"fail");
  lit_11 = YPsb((P)"Match Empty Failure of %=");
  T4 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YmacrosYmatch_empty_list = YPmet(FUNCODEREF(YmacrosYmatch_empty_list),CHKREF(lit_8),T4,ENVNUL);
  T5 = YmacrosYmatch_empty_list;
  YmacrosYmatch_empty_list = T5;
  lit_12 = YPPsym((P)"match-unquote");
  lit_13 = YPsb((P)"Match Failure Empty List on Unquote");
  T6 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YmacrosYmatch_unquote = YPmet(FUNCODEREF(YmacrosYmatch_unquote),CHKREF(lit_12),T6,ENVNUL);
  T7 = YmacrosYmatch_unquote;
  YmacrosYmatch_unquote = T7;
  lit_14 = YPPsym((P)"match-atom");
  lit_15 = YPPsym((P)"pat");
  lit_16 = YPsb((P)"Match Failure Empty List on %=");
  lit_17 = YPsb((P)"Match Failure of %= on %=");
  T8 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_15),CHKREF(lit_10)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  YmacrosYmatch_atom = YPmet(FUNCODEREF(YmacrosYmatch_atom),CHKREF(lit_14),T8,ENVNUL);
  T9 = YmacrosYmatch_atom;
  YmacrosYmatch_atom = T9;
  lit_18 = YPPsym((P)"match-sublist");
  lit_19 = YPsb((P)"Match Failure on Sub List on %=");
  T10 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YmacrosYmatch_sublist = YPmet(FUNCODEREF(YmacrosYmatch_sublist),CHKREF(lit_18),T10,ENVNUL);
  T11 = YmacrosYmatch_sublist;
  YmacrosYmatch_sublist = T11;
  lit_20 = YPPsym((P)"make-sym");
  lit_21 = YPPsym((P)"r");
  lit_22 = YPPsym((P)"e");
  lit_23 = YPsb((P)"");
  T13 = YPsig(YPPlist(2,CHKREF(lit_21),CHKREF(lit_22)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T13,ENVNUL);
  T12 = YPsig(YPPlist(1,CHKREF(lit_9)),Ynil,YPtrue,YPint((P)0),CHKREF(YLsymG),Ynil);
  fun_make_sym_8 = YPmet(FUNCODEREF(fun_make_sym_8),CHKREF(lit_20),T12,ENVNUL);
  T16 = BOUNDP(YmacrosYmake_sym);
  if (T16 != YPfalse) {
    T15 = CHKREF(YmacrosYmake_sym);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_make_sym_8;
  T14 = CALL2(1,CHKREF(YPdefine_method),T15,T17);
  YmacrosYmake_sym = T14;
  YruntimeYTgensym_counterT = YPint((P)1000);
  lit_24 = YPPsym((P)"gensym");
  lit_25 = YPsb((P)"x-");
  T18 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLsymG),Ynil);
  fun_gensym_9 = YPmet(FUNCODEREF(fun_gensym_9),CHKREF(lit_24),T18,ENVNUL);
  T21 = BOUNDP(YmacrosYgensym);
  if (T21 != YPfalse) {
    T20 = CHKREF(YmacrosYgensym);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_gensym_9;
  T19 = CALL2(1,CHKREF(YPdefine_method),T20,T22);
  YmacrosYgensym = T19;
  lit_26 = YPPsym((P)"make-setter-name");
  lit_27 = YPsb((P)"-setter");
  T23 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLsymG),Ynil);
  fun_make_setter_name_10 = YPmet(FUNCODEREF(fun_make_setter_name_10),CHKREF(lit_26),T23,ENVNUL);
  T26 = BOUNDP(YmacrosYmake_setter_name);
  if (T26 != YPfalse) {
    T25 = CHKREF(YmacrosYmake_setter_name);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_make_setter_name_10;
  T24 = CALL2(1,CHKREF(YPdefine_method),T25,T27);
  YmacrosYmake_setter_name = T24;
  lit_28 = YPPsym((P)"var-name");
  T28 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_var_name_11 = YPmet(FUNCODEREF(fun_var_name_11),CHKREF(lit_28),T28,ENVNUL);
  T31 = BOUNDP(YmacrosYvar_name);
  if (T31 != YPfalse) {
    T30 = CHKREF(YmacrosYvar_name);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_var_name_11;
  T29 = CALL2(1,CHKREF(YPdefine_method),T30,T32);
  YmacrosYvar_name = T29;
  T33 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_var_name_12 = YPmet(FUNCODEREF(fun_var_name_12),CHKREF(lit_28),T33,ENVNUL);
  T36 = BOUNDP(YmacrosYvar_name);
  if (T36 != YPfalse) {
    T35 = CHKREF(YmacrosYvar_name);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_var_name_12;
  T34 = CALL2(1,CHKREF(YPdefine_method),T35,T37);
  YmacrosYvar_name = T34;
  lit_29 = YPPsym((P)"var-type");
  lit_30 = YPPsym((P)"<any>");
  T38 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_var_type_13 = YPmet(FUNCODEREF(fun_var_type_13),CHKREF(lit_29),T38,ENVNUL);
  T41 = BOUNDP(YmacrosYvar_type);
  if (T41 != YPfalse) {
    T40 = CHKREF(YmacrosYvar_type);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_var_type_13;
  T39 = CALL2(1,CHKREF(YPdefine_method),T40,T42);
  YmacrosYvar_type = T39;
  T43 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_var_type_14 = YPmet(FUNCODEREF(fun_var_type_14),CHKREF(lit_29),T43,ENVNUL);
  T46 = BOUNDP(YmacrosYvar_type);
  if (T46 != YPfalse) {
    T45 = CHKREF(YmacrosYvar_type);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_var_type_14;
  T44 = CALL2(1,CHKREF(YPdefine_method),T45,T47);
  YmacrosYvar_type = T44;
  lit_31 = YPPsym((P)"t+");
  T48 = YPsig(YPPlist(1,CHKREF(lit_3)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG),Ynil);
  YruntimeYtA = YPmet(FUNCODEREF(YruntimeYtA),CHKREF(lit_31),T48,ENVNUL);
  T49 = YruntimeYtA;
  YruntimeYtA = T49;
  lit_32 = YPPsym((P)"t=");
  T50 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YruntimeYtE = YPmet(FUNCODEREF(YruntimeYtE),CHKREF(lit_32),T50,ENVNUL);
  T51 = YruntimeYtE;
  YruntimeYtE = T51;
  lit_33 = YPPsym((P)"t<");
  T52 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YruntimeYtL = YPmet(FUNCODEREF(YruntimeYtL),CHKREF(lit_33),T52,ENVNUL);
  T53 = YruntimeYtL;
  YruntimeYtL = T53;
  lit_34 = YPPsym((P)"false-or");
  T54 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YruntimeYfalse_or = YPmet(FUNCODEREF(YruntimeYfalse_or),CHKREF(lit_34),T54,ENVNUL);
  T55 = YruntimeYfalse_or;
  YruntimeYfalse_or = T55;
  lit_35 = YPPsym((P)"nul?");
  T56 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  YruntimeYnulQ = YPmet(FUNCODEREF(YruntimeYnulQ),CHKREF(lit_35),T56,ENVNUL);
  T57 = YruntimeYnulQ;
  YruntimeYnulQ = T57;
  lit_36 = YPPsym((P)"nyi-error");
  T58 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_nyi_error_20 = YPmet(FUNCODEREF(fun_nyi_error_20),CHKREF(lit_36),T58,ENVNUL);
  T61 = BOUNDP(YruntimeYnyi_error);
  if (T61 != YPfalse) {
    T60 = CHKREF(YruntimeYnyi_error);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_nyi_error_20;
  T59 = CALL2(1,CHKREF(YPdefine_method),T60,T62);
  YruntimeYnyi_error = T59;
  lit_37 = YPPsym((P)"to-str");
  lit_38 = YPsb((P)"{ obj(");
  lit_39 = YPsb((P)") }");
  T63 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_to_str_21 = YPmet(FUNCODEREF(fun_to_str_21),CHKREF(lit_37),T63,ENVNUL);
  T66 = BOUNDP(YruntimeYto_str);
  if (T66 != YPfalse) {
    T65 = CHKREF(YruntimeYto_str);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_to_str_21;
  T64 = CALL2(1,CHKREF(YPdefine_method),T65,T67);
  YruntimeYto_str = T64;
  lit_40 = YPPsym((P)"address-of");
  T68 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  YruntimeYaddress_of = YPmet(FUNCODEREF(YruntimeYaddress_of),CHKREF(lit_40),T68,ENVNUL);
  T69 = YruntimeYaddress_of;
  YruntimeYaddress_of = T69;
  lit_41 = YPPsym((P)"<bot>");
  T71 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T70 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_41),T71);
  YruntimeYLbotG = T70;
  lit_42 = YPsb((P)"#t");
  T73 = CALL1(1,CHKREF(YruntimeYtE),YPtrue);
  T72 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,T73),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_to_str_23 = YPmet(FUNCODEREF(fun_to_str_23),CHKREF(lit_37),T72,ENVNUL);
  T76 = BOUNDP(YruntimeYto_str);
  if (T76 != YPfalse) {
    T75 = CHKREF(YruntimeYto_str);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_to_str_23;
  T74 = CALL2(1,CHKREF(YPdefine_method),T75,T77);
  YruntimeYto_str = T74;
  lit_43 = YPsb((P)"#f");
  T79 = CALL1(1,CHKREF(YruntimeYtE),YPfalse);
  T78 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,T79),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_to_str_24 = YPmet(FUNCODEREF(fun_to_str_24),CHKREF(lit_37),T78,ENVNUL);
  T82 = BOUNDP(YruntimeYto_str);
  if (T82 != YPfalse) {
    T81 = CHKREF(YruntimeYto_str);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_to_str_24;
  T80 = CALL2(1,CHKREF(YPdefine_method),T81,T83);
  YruntimeYto_str = T80;
  lit_44 = YPPsym((P)"as");
  lit_45 = YPPsym((P)"type");
  lit_46 = YPsb((P)"NO AS METHOD FOR %= AND %=");
  T84 = YPsig(YPPlist(2,CHKREF(lit_45),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_as_25 = YPmet(FUNCODEREF(fun_as_25),CHKREF(lit_44),T84,ENVNUL);
  T87 = BOUNDP(YruntimeYas);
  if (T87 != YPfalse) {
    T86 = CHKREF(YruntimeYas);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_as_25;
  T85 = CALL2(1,CHKREF(YPdefine_method),T86,T88);
  YruntimeYas = T85;
  lit_47 = YPPsym((P)"==");
  lit_48 = YPPsym((P)"y");
  T89 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_EE_26 = YPmet(FUNCODEREF(fun_EE_26),CHKREF(lit_47),T89,ENVNUL);
  T92 = BOUNDP(YmacrosYEE);
  if (T92 != YPfalse) {
    T91 = CHKREF(YmacrosYEE);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_EE_26;
  T90 = CALL2(1,CHKREF(YPdefine_method),T91,T93);
  YmacrosYEE = T90;
  lit_49 = YPPsym((P)"=");
  T94 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_E_27 = YPmet(FUNCODEREF(fun_E_27),CHKREF(lit_49),T94,ENVNUL);
  T97 = BOUNDP(YruntimeYE);
  if (T97 != YPfalse) {
    T96 = CHKREF(YruntimeYE);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_E_27;
  T95 = CALL2(1,CHKREF(YPdefine_method),T96,T98);
  YruntimeYE = T95;
  lit_50 = YPPsym((P)"~=");
  T99 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_NE_28 = YPmet(FUNCODEREF(fun_NE_28),CHKREF(lit_50),T99,ENVNUL);
  T102 = BOUNDP(YruntimeYNE);
  if (T102 != YPfalse) {
    T101 = CHKREF(YruntimeYNE);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_NE_28;
  T100 = CALL2(1,CHKREF(YPdefine_method),T101,T103);
  YruntimeYNE = T100;
  lit_51 = YPPsym((P)"~==");
  T104 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_NEE_29 = YPmet(FUNCODEREF(fun_NEE_29),CHKREF(lit_51),T104,ENVNUL);
  T107 = BOUNDP(YruntimeYNEE);
  if (T107 != YPfalse) {
    T106 = CHKREF(YruntimeYNEE);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_NEE_29;
  T105 = CALL2(1,CHKREF(YPdefine_method),T106,T108);
  YruntimeYNEE = T105;
  lit_52 = YPPsym((P)">");
  T109 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_G_30 = YPmet(FUNCODEREF(fun_G_30),CHKREF(lit_52),T109,ENVNUL);
  T112 = BOUNDP(YruntimeYG);
  if (T112 != YPfalse) {
    T111 = CHKREF(YruntimeYG);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_G_30;
  T110 = CALL2(1,CHKREF(YPdefine_method),T111,T113);
  YruntimeYG = T110;
  lit_53 = YPPsym((P)"<=");
  T114 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_LE_31 = YPmet(FUNCODEREF(fun_LE_31),CHKREF(lit_53),T114,ENVNUL);
  T117 = BOUNDP(YruntimeYLE);
  if (T117 != YPfalse) {
    T116 = CHKREF(YruntimeYLE);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_LE_31;
  T115 = CALL2(1,CHKREF(YPdefine_method),T116,T118);
  YruntimeYLE = T115;
  lit_54 = YPPsym((P)">=");
  T119 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_GE_32 = YPmet(FUNCODEREF(fun_GE_32),CHKREF(lit_54),T119,ENVNUL);
  T122 = BOUNDP(YruntimeYGE);
  if (T122 != YPfalse) {
    T121 = CHKREF(YruntimeYGE);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_GE_32;
  T120 = CALL2(1,CHKREF(YPdefine_method),T121,T123);
  YruntimeYGE = T120;
  lit_55 = YPPsym((P)"min");
  T124 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLnumG),Ynil);
  fun_min_33 = YPmet(FUNCODEREF(fun_min_33),CHKREF(lit_55),T124,ENVNUL);
  T127 = BOUNDP(YruntimeYmin);
  if (T127 != YPfalse) {
    T126 = CHKREF(YruntimeYmin);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_min_33;
  T125 = CALL2(1,CHKREF(YPdefine_method),T126,T128);
  YruntimeYmin = T125;
  lit_56 = YPPsym((P)"max");
  T129 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLnumG),Ynil);
  fun_max_34 = YPmet(FUNCODEREF(fun_max_34),CHKREF(lit_56),T129,ENVNUL);
  T132 = BOUNDP(YruntimeYmax);
  if (T132 != YPfalse) {
    T131 = CHKREF(YruntimeYmax);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_max_34;
  T130 = CALL2(1,CHKREF(YPdefine_method),T131,T133);
  YruntimeYmax = T130;
  lit_57 = YPPsym((P)"_");
  T135 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YLchrG));
  T134 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_5)),YPPlist(2,T135,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLchrG),Ynil);
  fun_as_35 = YPmet(FUNCODEREF(fun_as_35),CHKREF(lit_44),T134,ENVNUL);
  T138 = BOUNDP(YruntimeYas);
  if (T138 != YPfalse) {
    T137 = CHKREF(YruntimeYas);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_as_35;
  T136 = CALL2(1,CHKREF(YPdefine_method),T137,T139);
  YruntimeYas = T136;
  lit_58 = YPPsym((P)"c");
  T141 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YLintG));
  T140 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_58)),YPPlist(2,T141,CHKREF(YLchrG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  fun_as_36 = YPmet(FUNCODEREF(fun_as_36),CHKREF(lit_44),T140,ENVNUL);
  T144 = BOUNDP(YruntimeYas);
  if (T144 != YPfalse) {
    T143 = CHKREF(YruntimeYas);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_as_36;
  T142 = CALL2(1,CHKREF(YPdefine_method),T143,T145);
  YruntimeYas = T142;
  lit_59 = YPPsym((P)"<");
  T146 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLchrG),CHKREF(YLchrG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_L_37 = YPmet(FUNCODEREF(fun_L_37),CHKREF(lit_59),T146,ENVNUL);
  T149 = BOUNDP(YruntimeYL);
  if (T149 != YPfalse) {
    T148 = CHKREF(YruntimeYL);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_L_37;
  T147 = CALL2(1,CHKREF(YPdefine_method),T148,T150);
  YruntimeYL = T147;
  T151 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLchrG),CHKREF(YLchrG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_EE_38 = YPmet(FUNCODEREF(fun_EE_38),CHKREF(lit_47),T151,ENVNUL);
  T154 = BOUNDP(YmacrosYEE);
  if (T154 != YPfalse) {
    T153 = CHKREF(YmacrosYEE);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_EE_38;
  T152 = CALL2(1,CHKREF(YPdefine_method),T153,T155);
  YmacrosYEE = T152;
  lit_60 = YPPsym((P)"lowercase?");
  T156 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_lowercaseQ_39 = YPmet(FUNCODEREF(fun_lowercaseQ_39),CHKREF(lit_60),T156,ENVNUL);
  T159 = BOUNDP(YruntimeYlowercaseQ);
  if (T159 != YPfalse) {
    T158 = CHKREF(YruntimeYlowercaseQ);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_lowercaseQ_39;
  T157 = CALL2(1,CHKREF(YPdefine_method),T158,T160);
  YruntimeYlowercaseQ = T157;
  lit_61 = YPPsym((P)"uppercase?");
  T161 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_uppercaseQ_40 = YPmet(FUNCODEREF(fun_uppercaseQ_40),CHKREF(lit_61),T161,ENVNUL);
  T164 = BOUNDP(YruntimeYuppercaseQ);
  if (T164 != YPfalse) {
    T163 = CHKREF(YruntimeYuppercaseQ);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_uppercaseQ_40;
  T162 = CALL2(1,CHKREF(YPdefine_method),T163,T165);
  YruntimeYuppercaseQ = T162;
  lit_62 = YPPsym((P)"as-lowercase");
  T166 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLchrG),Ynil);
  fun_as_lowercase_41 = YPmet(FUNCODEREF(fun_as_lowercase_41),CHKREF(lit_62),T166,ENVNUL);
  T169 = BOUNDP(YruntimeYas_lowercase);
  if (T169 != YPfalse) {
    T168 = CHKREF(YruntimeYas_lowercase);
  } else {
    T168 = YPfalse;
  }
  T170 = fun_as_lowercase_41;
  T167 = CALL2(1,CHKREF(YPdefine_method),T168,T170);
  YruntimeYas_lowercase = T167;
  lit_63 = YPPsym((P)"as-uppercase");
  T171 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLchrG),Ynil);
  fun_as_uppercase_42 = YPmet(FUNCODEREF(fun_as_uppercase_42),CHKREF(lit_63),T171,ENVNUL);
  T174 = BOUNDP(YruntimeYas_uppercase);
  if (T174 != YPfalse) {
    T173 = CHKREF(YruntimeYas_uppercase);
  } else {
    T173 = YPfalse;
  }
  T175 = fun_as_uppercase_42;
  T172 = CALL2(1,CHKREF(YPdefine_method),T173,T175);
  YruntimeYas_uppercase = T172;
  T176 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_to_str_43 = YPmet(FUNCODEREF(fun_to_str_43),CHKREF(lit_37),T176,ENVNUL);
  T179 = BOUNDP(YruntimeYto_str);
  if (T179 != YPfalse) {
    T178 = CHKREF(YruntimeYto_str);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_to_str_43;
  T177 = CALL2(1,CHKREF(YPdefine_method),T178,T180);
  YruntimeYto_str = T177;
  lit_64 = YPPsym((P)"alphabetic?");
  T181 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_alphabeticQ_44 = YPmet(FUNCODEREF(fun_alphabeticQ_44),CHKREF(lit_64),T181,ENVNUL);
  T184 = BOUNDP(YruntimeYalphabeticQ);
  if (T184 != YPfalse) {
    T183 = CHKREF(YruntimeYalphabeticQ);
  } else {
    T183 = YPfalse;
  }
  T185 = fun_alphabeticQ_44;
  T182 = CALL2(1,CHKREF(YPdefine_method),T183,T185);
  YruntimeYalphabeticQ = T182;
  lit_65 = YPPsym((P)"numeric?");
  T186 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_numericQ_45 = YPmet(FUNCODEREF(fun_numericQ_45),CHKREF(lit_65),T186,ENVNUL);
  T189 = BOUNDP(YruntimeYnumericQ);
  if (T189 != YPfalse) {
    T188 = CHKREF(YruntimeYnumericQ);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_numericQ_45;
  T187 = CALL2(1,CHKREF(YPdefine_method),T188,T190);
  YruntimeYnumericQ = T187;
  lit_66 = YPPsym((P)"to-digit");
  lit_67 = YPPsym((P)"digit");
  T191 = YPsig(YPPlist(1,CHKREF(lit_67)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  fun_to_digit_46 = YPmet(FUNCODEREF(fun_to_digit_46),CHKREF(lit_66),T191,ENVNUL);
  T194 = BOUNDP(YruntimeYto_digit);
  if (T194 != YPfalse) {
    T193 = CHKREF(YruntimeYto_digit);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_to_digit_46;
  T192 = CALL2(1,CHKREF(YPdefine_method),T193,T195);
  YruntimeYto_digit = T192;
  lit_68 = YPPsym((P)"contagious-type");
  T198 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YLnumG));
  T197 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),T198,Ynil);
  T196 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_68),T197,Ynil,YPfalse);
  YruntimeYcontagious_type = T196;
  lit_69 = YPPsym((P)"contagious-call");
  lit_70 = YPPsym((P)"f");
  T200 = YPsig(YPPlist(3,CHKREF(lit_70),CHKREF(lit_9),CHKREF(lit_48)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  T199 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_69),T200,Ynil,YPfalse);
  YruntimeYcontagious_call = T199;
  T201 = YPsig(YPPlist(3,CHKREF(lit_70),CHKREF(lit_9),CHKREF(lit_48)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_contagious_call_47 = YPmet(FUNCODEREF(fun_contagious_call_47),CHKREF(lit_69),T201,ENVNUL);
  T204 = BOUNDP(YruntimeYcontagious_call);
  if (T204 != YPfalse) {
    T203 = CHKREF(YruntimeYcontagious_call);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_contagious_call_47;
  T202 = CALL2(1,CHKREF(YPdefine_method),T203,T205);
  YruntimeYcontagious_call = T202;
  T206 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_L_48 = YPmet(FUNCODEREF(fun_L_48),CHKREF(lit_59),T206,ENVNUL);
  T209 = BOUNDP(YruntimeYL);
  if (T209 != YPfalse) {
    T208 = CHKREF(YruntimeYL);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_L_48;
  T207 = CALL2(1,CHKREF(YPdefine_method),T208,T210);
  YruntimeYL = T207;
  lit_71 = YPPsym((P)"+");
  T211 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLnumG),Ynil);
  fun_A_49 = YPmet(FUNCODEREF(fun_A_49),CHKREF(lit_71),T211,ENVNUL);
  T214 = BOUNDP(YruntimeYA);
  if (T214 != YPfalse) {
    T213 = CHKREF(YruntimeYA);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_A_49;
  T212 = CALL2(1,CHKREF(YPdefine_method),T213,T215);
  YruntimeYA = T212;
  lit_72 = YPPsym((P)"-");
  T216 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLnumG),Ynil);
  fun___50 = YPmet(FUNCODEREF(fun___50),CHKREF(lit_72),T216,ENVNUL);
  T219 = BOUNDP(YruntimeY_);
  if (T219 != YPfalse) {
    T218 = CHKREF(YruntimeY_);
  } else {
    T218 = YPfalse;
  }
  T220 = fun___50;
  T217 = CALL2(1,CHKREF(YPdefine_method),T218,T220);
  YruntimeY_ = T217;
  lit_73 = YPPsym((P)"*");
  T221 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLnumG),Ynil);
  fun_T_51 = YPmet(FUNCODEREF(fun_T_51),CHKREF(lit_73),T221,ENVNUL);
  T224 = BOUNDP(YruntimeYT);
  if (T224 != YPfalse) {
    T223 = CHKREF(YruntimeYT);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_T_51;
  T222 = CALL2(1,CHKREF(YPdefine_method),T223,T225);
  YruntimeYT = T222;
  lit_74 = YPPsym((P)"floor");
  T226 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  fun_floor_52 = YPmet(FUNCODEREF(fun_floor_52),CHKREF(lit_74),T226,ENVNUL);
  T229 = BOUNDP(YruntimeYfloor);
  if (T229 != YPfalse) {
    T228 = CHKREF(YruntimeYfloor);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_floor_52;
  T227 = CALL2(1,CHKREF(YPdefine_method),T228,T230);
  YruntimeYfloor = T227;
  lit_75 = YPPsym((P)"ceiling");
  T231 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  fun_ceiling_53 = YPmet(FUNCODEREF(fun_ceiling_53),CHKREF(lit_75),T231,ENVNUL);
  T234 = BOUNDP(YruntimeYceiling);
  if (T234 != YPfalse) {
    T233 = CHKREF(YruntimeYceiling);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_ceiling_53;
  T232 = CALL2(1,CHKREF(YPdefine_method),T233,T235);
  YruntimeYceiling = T232;
  lit_76 = YPPsym((P)"round");
  T236 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  fun_round_54 = YPmet(FUNCODEREF(fun_round_54),CHKREF(lit_76),T236,ENVNUL);
  T239 = BOUNDP(YruntimeYround);
  if (T239 != YPfalse) {
    T238 = CHKREF(YruntimeYround);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_round_54;
  T237 = CALL2(1,CHKREF(YPdefine_method),T238,T240);
  YruntimeYround = T237;
  lit_77 = YPPsym((P)"truncate");
  T241 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  fun_truncate_55 = YPmet(FUNCODEREF(fun_truncate_55),CHKREF(lit_77),T241,ENVNUL);
  T244 = BOUNDP(YruntimeYtruncate);
  if (T244 != YPfalse) {
    T243 = CHKREF(YruntimeYtruncate);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_truncate_55;
  T242 = CALL2(1,CHKREF(YPdefine_method),T243,T245);
  YruntimeYtruncate = T242;
  lit_78 = YPPsym((P)"floor/");
  lit_79 = YPPsym((P)"real");
  lit_80 = YPPsym((P)"divisor");
  T246 = YPsig(YPPlist(2,CHKREF(lit_79),CHKREF(lit_80)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLtupG),Ynil);
  fun_floorS_56 = YPmet(FUNCODEREF(fun_floorS_56),CHKREF(lit_78),T246,ENVNUL);
  T249 = BOUNDP(YruntimeYfloorS);
  if (T249 != YPfalse) {
    T248 = CHKREF(YruntimeYfloorS);
  } else {
    T248 = YPfalse;
  }
  T250 = fun_floorS_56;
  T247 = CALL2(1,CHKREF(YPdefine_method),T248,T250);
  YruntimeYfloorS = T247;
  lit_81 = YPPsym((P)"ceiling/");
  T251 = YPsig(YPPlist(2,CHKREF(lit_79),CHKREF(lit_80)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLtupG),Ynil);
  fun_ceilingS_57 = YPmet(FUNCODEREF(fun_ceilingS_57),CHKREF(lit_81),T251,ENVNUL);
  T254 = BOUNDP(YruntimeYceilingS);
  if (T254 != YPfalse) {
    T253 = CHKREF(YruntimeYceilingS);
  } else {
    T253 = YPfalse;
  }
  T255 = fun_ceilingS_57;
  T252 = CALL2(1,CHKREF(YPdefine_method),T253,T255);
  YruntimeYceilingS = T252;
  lit_82 = YPPsym((P)"round/");
  lit_83 = YPflo(FLOINT(2.0));
  T256 = YPsig(YPPlist(2,CHKREF(lit_79),CHKREF(lit_80)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLtupG),Ynil);
  fun_roundS_58 = YPmet(FUNCODEREF(fun_roundS_58),CHKREF(lit_82),T256,ENVNUL);
  T259 = BOUNDP(YruntimeYroundS);
  if (T259 != YPfalse) {
    T258 = CHKREF(YruntimeYroundS);
  } else {
    T258 = YPfalse;
  }
  T260 = fun_roundS_58;
  T257 = CALL2(1,CHKREF(YPdefine_method),T258,T260);
  YruntimeYroundS = T257;
  lit_84 = YPPsym((P)"truncate/");
  T261 = YPsig(YPPlist(2,CHKREF(lit_79),CHKREF(lit_80)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLtupG),Ynil);
  fun_truncateS_59 = YPmet(FUNCODEREF(fun_truncateS_59),CHKREF(lit_84),T261,ENVNUL);
  T264 = BOUNDP(YruntimeYtruncateS);
  if (T264 != YPfalse) {
    T263 = CHKREF(YruntimeYtruncateS);
  } else {
    T263 = YPfalse;
  }
  T265 = fun_truncateS_59;
  T262 = CALL2(1,CHKREF(YPdefine_method),T263,T265);
  YruntimeYtruncateS = T262;
  lit_85 = YPPsym((P)"modulo");
  T268 = YPsig(YPPlist(2,CHKREF(lit_79),CHKREF(lit_80)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLnumG),Ynil);
  T267 = fun_modulo_60 = YPmet(FUNCODEREF(fun_modulo_60),CHKREF(lit_85),T268,ENVNUL);
  T272 = BOUNDP(YruntimeYmodulo);
  if (T272 != YPfalse) {
    T271 = CHKREF(YruntimeYmodulo);
  } else {
    T271 = YPfalse;
  }
  T273 = fun_modulo_60;
  T270 = CALL2(1,CHKREF(YPdefine_method),T271,T273);
  T269 = YruntimeYmodulo = T270;
  T266 = T269;
  return T266;
}

P YruntimeY___main_1___() {
  P T329,T328,T327,T326,T325,T324,T323,T322,T321,T320,T319,T318,T317,T316,T315,T314;
  P T313,T312,T311,T310,T309,T308,T307,T306,T305,T304,T303,T302,T301,T300,T299,T298;
  P T297,T296,T295,T294,T293,T292,T291,T290,T289,T288,T287,T286,T285,T284,T283,T282;
  P T281,T280,T279,T278,T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266;
  P T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250;
  P T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234;
  P T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218;
  P T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202;
  P T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186;
  P T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170;
  P T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154;
  P T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138;
  P T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122;
  P T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106;
  P T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90;
  P T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74;
  P T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_86 = YPPsym((P)"remainder");
  T0 = YPsig(YPPlist(2,CHKREF(lit_79),CHKREF(lit_80)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLnumG),Ynil);
  fun_remainder_61 = YPmet(FUNCODEREF(fun_remainder_61),CHKREF(lit_86),T0,ENVNUL);
  T3 = BOUNDP(YruntimeYremainder);
  if (T3 != YPfalse) {
    T2 = CHKREF(YruntimeYremainder);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_remainder_61;
  T1 = CALL2(1,CHKREF(YPdefine_method),T2,T4);
  YruntimeYremainder = T1;
  lit_87 = YPPsym((P)"pos?");
  T5 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_posQ_62 = YPmet(FUNCODEREF(fun_posQ_62),CHKREF(lit_87),T5,ENVNUL);
  T8 = BOUNDP(YruntimeYposQ);
  if (T8 != YPfalse) {
    T7 = CHKREF(YruntimeYposQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_posQ_62;
  T6 = CALL2(1,CHKREF(YPdefine_method),T7,T9);
  YruntimeYposQ = T6;
  lit_88 = YPPsym((P)"zero?");
  T10 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_zeroQ_63 = YPmet(FUNCODEREF(fun_zeroQ_63),CHKREF(lit_88),T10,ENVNUL);
  T13 = BOUNDP(YruntimeYzeroQ);
  if (T13 != YPfalse) {
    T12 = CHKREF(YruntimeYzeroQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_zeroQ_63;
  T11 = CALL2(1,CHKREF(YPdefine_method),T12,T14);
  YruntimeYzeroQ = T11;
  lit_89 = YPPsym((P)"neg?");
  T15 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_negQ_64 = YPmet(FUNCODEREF(fun_negQ_64),CHKREF(lit_89),T15,ENVNUL);
  T18 = BOUNDP(YruntimeYnegQ);
  if (T18 != YPfalse) {
    T17 = CHKREF(YruntimeYnegQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_negQ_64;
  T16 = CALL2(1,CHKREF(YPdefine_method),T17,T19);
  YruntimeYnegQ = T16;
  lit_90 = YPPsym((P)"neg");
  T20 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLnumG),Ynil);
  fun_neg_65 = YPmet(FUNCODEREF(fun_neg_65),CHKREF(lit_90),T20,ENVNUL);
  T23 = BOUNDP(YruntimeYneg);
  if (T23 != YPfalse) {
    T22 = CHKREF(YruntimeYneg);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_neg_65;
  T21 = CALL2(1,CHKREF(YPdefine_method),T22,T24);
  YruntimeYneg = T21;
  lit_91 = YPPsym((P)"abs");
  T25 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLnumG),Ynil);
  fun_abs_66 = YPmet(FUNCODEREF(fun_abs_66),CHKREF(lit_91),T25,ENVNUL);
  T28 = BOUNDP(YruntimeYabs);
  if (T28 != YPfalse) {
    T27 = CHKREF(YruntimeYabs);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_abs_66;
  T26 = CALL2(1,CHKREF(YPdefine_method),T27,T29);
  YruntimeYabs = T26;
  T30 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_to_str_67 = YPmet(FUNCODEREF(fun_to_str_67),CHKREF(lit_37),T30,ENVNUL);
  T33 = BOUNDP(YruntimeYto_str);
  if (T33 != YPfalse) {
    T32 = CHKREF(YruntimeYto_str);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_to_str_67;
  T31 = CALL2(1,CHKREF(YPdefine_method),T32,T34);
  YruntimeYto_str = T31;
  lit_92 = YPPsym((P)"str-to-num");
  lit_93 = YPPsym((P)"string");
  lit_94 = YPPsym((P)"match");
  lit_95 = YPPsym((P)"char");
  lit_96 = YPPsym((P)"match-digit!");
  lit_97 = YPPsym((P)"return");
  lit_98 = YPPsym((P)"fail!!");
  lit_99 = YPsb((P)"string->number: Two decimal points: %=");
  lit_100 = YPPsym((P)"looking-at-alphabetic?");
  lit_101 = YPPsym((P)"loop");
  T41 = YPsig(YPPlist(1,CHKREF(lit_95)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_match_68 = YPmet(FUNCODEREF(fun_match_68),CHKREF(lit_94),T41,ENVNUL);
  T40 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_failXX_69 = YPmet(FUNCODEREF(fun_failXX_69),CHKREF(lit_98),T40,ENVNUL);
  T39 = YPsig(YPPlist(1,CHKREF(lit_97)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T39,ENVNUL);
  T38 = YPsig(YPPlist(1,CHKREF(lit_57)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_match_digitX_71 = YPmet(FUNCODEREF(fun_match_digitX_71),CHKREF(lit_96),T38,ENVNUL);
  T37 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_looking_at_alphabeticQ_72 = YPmet(FUNCODEREF(fun_looking_at_alphabeticQ_72),CHKREF(lit_100),T37,ENVNUL);
  T36 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_loop_73 = YPmet(FUNCODEREF(fun_loop_73),CHKREF(lit_101),T36,ENVNUL);
  T35 = YPsig(YPPlist(1,CHKREF(lit_93)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_str_to_num_74 = YPmet(FUNCODEREF(fun_str_to_num_74),CHKREF(lit_92),T35,ENVNUL);
  T44 = BOUNDP(YruntimeYstr_to_num);
  if (T44 != YPfalse) {
    T43 = CHKREF(YruntimeYstr_to_num);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_str_to_num_74;
  T42 = CALL2(1,CHKREF(YPdefine_method),T43,T45);
  YruntimeYstr_to_num = T42;
  T46 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLtypeG),Ynil);
  fun_contagious_type_75 = YPmet(FUNCODEREF(fun_contagious_type_75),CHKREF(lit_68),T46,ENVNUL);
  T49 = BOUNDP(YruntimeYcontagious_type);
  if (T49 != YPfalse) {
    T48 = CHKREF(YruntimeYcontagious_type);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_contagious_type_75;
  T47 = CALL2(1,CHKREF(YPdefine_method),T48,T50);
  YruntimeYcontagious_type = T47;
  T51 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLtypeG),Ynil);
  fun_contagious_type_76 = YPmet(FUNCODEREF(fun_contagious_type_76),CHKREF(lit_68),T51,ENVNUL);
  T54 = BOUNDP(YruntimeYcontagious_type);
  if (T54 != YPfalse) {
    T53 = CHKREF(YruntimeYcontagious_type);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_contagious_type_76;
  T52 = CALL2(1,CHKREF(YPdefine_method),T53,T55);
  YruntimeYcontagious_type = T52;
  T56 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLintG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLtypeG),Ynil);
  fun_contagious_type_77 = YPmet(FUNCODEREF(fun_contagious_type_77),CHKREF(lit_68),T56,ENVNUL);
  T59 = BOUNDP(YruntimeYcontagious_type);
  if (T59 != YPfalse) {
    T58 = CHKREF(YruntimeYcontagious_type);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_contagious_type_77;
  T57 = CALL2(1,CHKREF(YPdefine_method),T58,T60);
  YruntimeYcontagious_type = T57;
  T61 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLtypeG),Ynil);
  fun_contagious_type_78 = YPmet(FUNCODEREF(fun_contagious_type_78),CHKREF(lit_68),T61,ENVNUL);
  T64 = BOUNDP(YruntimeYcontagious_type);
  if (T64 != YPfalse) {
    T63 = CHKREF(YruntimeYcontagious_type);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_contagious_type_78;
  T62 = CALL2(1,CHKREF(YPdefine_method),T63,T65);
  YruntimeYcontagious_type = T62;
  T66 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_EE_79 = YPmet(FUNCODEREF(fun_EE_79),CHKREF(lit_47),T66,ENVNUL);
  T69 = BOUNDP(YmacrosYEE);
  if (T69 != YPfalse) {
    T68 = CHKREF(YmacrosYEE);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_EE_79;
  T67 = CALL2(1,CHKREF(YPdefine_method),T68,T70);
  YmacrosYEE = T67;
  T71 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_L_80 = YPmet(FUNCODEREF(fun_L_80),CHKREF(lit_59),T71,ENVNUL);
  T74 = BOUNDP(YruntimeYL);
  if (T74 != YPfalse) {
    T73 = CHKREF(YruntimeYL);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_L_80;
  T72 = CALL2(1,CHKREF(YPdefine_method),T73,T75);
  YruntimeYL = T72;
  T76 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  fun_A_81 = YPmet(FUNCODEREF(fun_A_81),CHKREF(lit_71),T76,ENVNUL);
  T79 = BOUNDP(YruntimeYA);
  if (T79 != YPfalse) {
    T78 = CHKREF(YruntimeYA);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_A_81;
  T77 = CALL2(1,CHKREF(YPdefine_method),T78,T80);
  YruntimeYA = T77;
  T81 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  fun___82 = YPmet(FUNCODEREF(fun___82),CHKREF(lit_72),T81,ENVNUL);
  T84 = BOUNDP(YruntimeY_);
  if (T84 != YPfalse) {
    T83 = CHKREF(YruntimeY_);
  } else {
    T83 = YPfalse;
  }
  T85 = fun___82;
  T82 = CALL2(1,CHKREF(YPdefine_method),T83,T85);
  YruntimeY_ = T82;
  T86 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  fun_T_83 = YPmet(FUNCODEREF(fun_T_83),CHKREF(lit_73),T86,ENVNUL);
  T89 = BOUNDP(YruntimeYT);
  if (T89 != YPfalse) {
    T88 = CHKREF(YruntimeYT);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_T_83;
  T87 = CALL2(1,CHKREF(YPdefine_method),T88,T90);
  YruntimeYT = T87;
  T91 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  fun_floor_84 = YPmet(FUNCODEREF(fun_floor_84),CHKREF(lit_74),T91,ENVNUL);
  T94 = BOUNDP(YruntimeYfloor);
  if (T94 != YPfalse) {
    T93 = CHKREF(YruntimeYfloor);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_floor_84;
  T92 = CALL2(1,CHKREF(YPdefine_method),T93,T95);
  YruntimeYfloor = T92;
  T96 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  fun_ceiling_85 = YPmet(FUNCODEREF(fun_ceiling_85),CHKREF(lit_75),T96,ENVNUL);
  T99 = BOUNDP(YruntimeYceiling);
  if (T99 != YPfalse) {
    T98 = CHKREF(YruntimeYceiling);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_ceiling_85;
  T97 = CALL2(1,CHKREF(YPdefine_method),T98,T100);
  YruntimeYceiling = T97;
  T101 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  fun_round_86 = YPmet(FUNCODEREF(fun_round_86),CHKREF(lit_76),T101,ENVNUL);
  T104 = BOUNDP(YruntimeYround);
  if (T104 != YPfalse) {
    T103 = CHKREF(YruntimeYround);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_round_86;
  T102 = CALL2(1,CHKREF(YPdefine_method),T103,T105);
  YruntimeYround = T102;
  T106 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  fun_truncate_87 = YPmet(FUNCODEREF(fun_truncate_87),CHKREF(lit_77),T106,ENVNUL);
  T109 = BOUNDP(YruntimeYtruncate);
  if (T109 != YPfalse) {
    T108 = CHKREF(YruntimeYtruncate);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_truncate_87;
  T107 = CALL2(1,CHKREF(YPdefine_method),T108,T110);
  YruntimeYtruncate = T107;
  T111 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLtupG),Ynil);
  fun_truncateS_88 = YPmet(FUNCODEREF(fun_truncateS_88),CHKREF(lit_84),T111,ENVNUL);
  T114 = BOUNDP(YruntimeYtruncateS);
  if (T114 != YPfalse) {
    T113 = CHKREF(YruntimeYtruncateS);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_truncateS_88;
  T112 = CALL2(1,CHKREF(YPdefine_method),T113,T115);
  YruntimeYtruncateS = T112;
  T116 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  fun_modulo_89 = YPmet(FUNCODEREF(fun_modulo_89),CHKREF(lit_85),T116,ENVNUL);
  T119 = BOUNDP(YruntimeYmodulo);
  if (T119 != YPfalse) {
    T118 = CHKREF(YruntimeYmodulo);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_modulo_89;
  T117 = CALL2(1,CHKREF(YPdefine_method),T118,T120);
  YruntimeYmodulo = T117;
  lit_102 = YPPsym((P)"logior");
  T121 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  fun_logior_90 = YPmet(FUNCODEREF(fun_logior_90),CHKREF(lit_102),T121,ENVNUL);
  T124 = BOUNDP(YruntimeYlogior);
  if (T124 != YPfalse) {
    T123 = CHKREF(YruntimeYlogior);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_logior_90;
  T122 = CALL2(1,CHKREF(YPdefine_method),T123,T125);
  YruntimeYlogior = T122;
  lit_103 = YPPsym((P)"logxor");
  T126 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  fun_logxor_91 = YPmet(FUNCODEREF(fun_logxor_91),CHKREF(lit_103),T126,ENVNUL);
  T129 = BOUNDP(YruntimeYlogxor);
  if (T129 != YPfalse) {
    T128 = CHKREF(YruntimeYlogxor);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_logxor_91;
  T127 = CALL2(1,CHKREF(YPdefine_method),T128,T130);
  YruntimeYlogxor = T127;
  lit_104 = YPPsym((P)"logand");
  T131 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  fun_logand_92 = YPmet(FUNCODEREF(fun_logand_92),CHKREF(lit_104),T131,ENVNUL);
  T134 = BOUNDP(YruntimeYlogand);
  if (T134 != YPfalse) {
    T133 = CHKREF(YruntimeYlogand);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_logand_92;
  T132 = CALL2(1,CHKREF(YPdefine_method),T133,T135);
  YruntimeYlogand = T132;
  lit_105 = YPPsym((P)"lognot");
  T136 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  fun_lognot_93 = YPmet(FUNCODEREF(fun_lognot_93),CHKREF(lit_105),T136,ENVNUL);
  T139 = BOUNDP(YruntimeYlognot);
  if (T139 != YPfalse) {
    T138 = CHKREF(YruntimeYlognot);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_lognot_93;
  T137 = CALL2(1,CHKREF(YPdefine_method),T138,T140);
  YruntimeYlognot = T137;
  lit_106 = YPPsym((P)"logbit?");
  lit_107 = YPPsym((P)"o");
  T141 = YPsig(YPPlist(2,CHKREF(lit_107),CHKREF(lit_9)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  fun_logbitQ_94 = YPmet(FUNCODEREF(fun_logbitQ_94),CHKREF(lit_106),T141,ENVNUL);
  T144 = BOUNDP(YruntimeYlogbitQ);
  if (T144 != YPfalse) {
    T143 = CHKREF(YruntimeYlogbitQ);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_logbitQ_94;
  T142 = CALL2(1,CHKREF(YPdefine_method),T143,T145);
  YruntimeYlogbitQ = T142;
  lit_108 = YPPsym((P)"even?");
  T146 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_evenQ_95 = YPmet(FUNCODEREF(fun_evenQ_95),CHKREF(lit_108),T146,ENVNUL);
  T149 = BOUNDP(YruntimeYevenQ);
  if (T149 != YPfalse) {
    T148 = CHKREF(YruntimeYevenQ);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_evenQ_95;
  T147 = CALL2(1,CHKREF(YPdefine_method),T148,T150);
  YruntimeYevenQ = T147;
  lit_109 = YPPsym((P)"odd?");
  T151 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_oddQ_96 = YPmet(FUNCODEREF(fun_oddQ_96),CHKREF(lit_109),T151,ENVNUL);
  T154 = BOUNDP(YruntimeYoddQ);
  if (T154 != YPfalse) {
    T153 = CHKREF(YruntimeYoddQ);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_oddQ_96;
  T152 = CALL2(1,CHKREF(YPdefine_method),T153,T155);
  YruntimeYoddQ = T152;
  lit_110 = YPPsym((P)"ash");
  lit_111 = YPPsym((P)"a");
  T156 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_111)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  fun_ash_97 = YPmet(FUNCODEREF(fun_ash_97),CHKREF(lit_110),T156,ENVNUL);
  T159 = BOUNDP(YruntimeYash);
  if (T159 != YPfalse) {
    T158 = CHKREF(YruntimeYash);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_ash_97;
  T157 = CALL2(1,CHKREF(YPdefine_method),T158,T160);
  YruntimeYash = T157;
  lit_112 = YPPsym((P)"lsh");
  T161 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_111)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  fun_lsh_98 = YPmet(FUNCODEREF(fun_lsh_98),CHKREF(lit_112),T161,ENVNUL);
  T164 = BOUNDP(YruntimeYlsh);
  if (T164 != YPfalse) {
    T163 = CHKREF(YruntimeYlsh);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_lsh_98;
  T162 = CALL2(1,CHKREF(YPdefine_method),T163,T165);
  YruntimeYlsh = T162;
  lit_113 = YPPsym((P)"power-of-two-ceiling");
  lit_114 = YPPsym((P)"search");
  lit_115 = YPPsym((P)"po2");
  T167 = YPsig(YPPlist(1,CHKREF(lit_115)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_search_99 = YPmet(FUNCODEREF(fun_search_99),CHKREF(lit_114),T167,ENVNUL);
  T166 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  fun_power_of_two_ceiling_100 = YPmet(FUNCODEREF(fun_power_of_two_ceiling_100),CHKREF(lit_113),T166,ENVNUL);
  T170 = BOUNDP(YruntimeYpower_of_two_ceiling);
  if (T170 != YPfalse) {
    T169 = CHKREF(YruntimeYpower_of_two_ceiling);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_power_of_two_ceiling_100;
  T168 = CALL2(1,CHKREF(YPdefine_method),T169,T171);
  YruntimeYpower_of_two_ceiling = T168;
  lit_116 = YPsb((P)"0123456789abcdefghijklmnopqrstuvwxyz");
  YruntimeYDdigit_to_char = CHKREF(lit_116);
  YruntimeYTprint_baseT = YPint((P)10);
  lit_117 = YPflo(FLOINT(0.0000009999999));
  YruntimeYepsilon = CHKREF(lit_117);
  lit_118 = YPPsym((P)"decode-radix-option");
  lit_119 = YPPsym((P)"rest");
  lit_120 = YPPsym((P)"default");
  lit_121 = YPPsym((P)"caller-name");
  lit_122 = YPsb((P)"too many arguments: %=, %=");
  T172 = YPsig(YPPlist(3,CHKREF(lit_119),CHKREF(lit_120),CHKREF(lit_121)),YPPlist(3,CHKREF(YLoptsG),CHKREF(YLintG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLintG),Ynil);
  fun_decode_radix_option_101 = YPmet(FUNCODEREF(fun_decode_radix_option_101),CHKREF(lit_118),T172,ENVNUL);
  T175 = BOUNDP(YruntimeYdecode_radix_option);
  if (T175 != YPfalse) {
    T174 = CHKREF(YruntimeYdecode_radix_option);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_decode_radix_option_101;
  T173 = CALL2(1,CHKREF(YPdefine_method),T174,T176);
  YruntimeYdecode_radix_option = T173;
  lit_123 = YPPsym((P)"num-to-str");
  lit_124 = YPPsym((P)"num");
  lit_125 = YPPsym((P)"radix-option");
  lit_126 = YPPsym((P)"digit-list");
  lit_127 = YPsb((P)"0");
  T178 = YPsig(YPPlist(2,CHKREF(lit_126),CHKREF(lit_124)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_102 = YPmet(FUNCODEREF(fun_loop_102),CHKREF(lit_101),T178,ENVNUL);
  T177 = YPsig(YPPlist(2,CHKREF(lit_124),CHKREF(lit_125)),YPPlist(1,CHKREF(YLintG)),YPtrue,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_num_to_str_103 = YPmet(FUNCODEREF(fun_num_to_str_103),CHKREF(lit_123),T177,ENVNUL);
  T181 = BOUNDP(YruntimeYnum_to_str);
  if (T181 != YPfalse) {
    T180 = CHKREF(YruntimeYnum_to_str);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_num_to_str_103;
  T179 = CALL2(1,CHKREF(YPdefine_method),T180,T182);
  YruntimeYnum_to_str = T179;
  lit_128 = YPPsym((P)"flo-bits");
  T183 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfloG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  YruntimeYflo_bits = YPmet(FUNCODEREF(YruntimeYflo_bits),CHKREF(lit_128),T183,ENVNUL);
  T184 = YruntimeYflo_bits;
  YruntimeYflo_bits = T184;
  T186 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YLfloG));
  T185 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_9)),YPPlist(2,T186,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLfloG),Ynil);
  fun_as_105 = YPmet(FUNCODEREF(fun_as_105),CHKREF(lit_44),T185,ENVNUL);
  T189 = BOUNDP(YruntimeYas);
  if (T189 != YPfalse) {
    T188 = CHKREF(YruntimeYas);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_as_105;
  T187 = CALL2(1,CHKREF(YPdefine_method),T188,T190);
  YruntimeYas = T187;
  T191 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_EE_106 = YPmet(FUNCODEREF(fun_EE_106),CHKREF(lit_47),T191,ENVNUL);
  T194 = BOUNDP(YmacrosYEE);
  if (T194 != YPfalse) {
    T193 = CHKREF(YmacrosYEE);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_EE_106;
  T192 = CALL2(1,CHKREF(YPdefine_method),T193,T195);
  YmacrosYEE = T192;
  T196 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_L_107 = YPmet(FUNCODEREF(fun_L_107),CHKREF(lit_59),T196,ENVNUL);
  T199 = BOUNDP(YruntimeYL);
  if (T199 != YPfalse) {
    T198 = CHKREF(YruntimeYL);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_L_107;
  T197 = CALL2(1,CHKREF(YPdefine_method),T198,T200);
  YruntimeYL = T197;
  T201 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLfloG),Ynil);
  fun_A_108 = YPmet(FUNCODEREF(fun_A_108),CHKREF(lit_71),T201,ENVNUL);
  T204 = BOUNDP(YruntimeYA);
  if (T204 != YPfalse) {
    T203 = CHKREF(YruntimeYA);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_A_108;
  T202 = CALL2(1,CHKREF(YPdefine_method),T203,T205);
  YruntimeYA = T202;
  T206 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLfloG),Ynil);
  fun___109 = YPmet(FUNCODEREF(fun___109),CHKREF(lit_72),T206,ENVNUL);
  T209 = BOUNDP(YruntimeY_);
  if (T209 != YPfalse) {
    T208 = CHKREF(YruntimeY_);
  } else {
    T208 = YPfalse;
  }
  T210 = fun___109;
  T207 = CALL2(1,CHKREF(YPdefine_method),T208,T210);
  YruntimeY_ = T207;
  T211 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLfloG),Ynil);
  fun_T_110 = YPmet(FUNCODEREF(fun_T_110),CHKREF(lit_73),T211,ENVNUL);
  T214 = BOUNDP(YruntimeYT);
  if (T214 != YPfalse) {
    T213 = CHKREF(YruntimeYT);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_T_110;
  T212 = CALL2(1,CHKREF(YPdefine_method),T213,T215);
  YruntimeYT = T212;
  lit_129 = YPPsym((P)"/");
  T216 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLfloG),Ynil);
  fun_S_111 = YPmet(FUNCODEREF(fun_S_111),CHKREF(lit_129),T216,ENVNUL);
  T219 = BOUNDP(YruntimeYS);
  if (T219 != YPfalse) {
    T218 = CHKREF(YruntimeYS);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_S_111;
  T217 = CALL2(1,CHKREF(YPdefine_method),T218,T220);
  YruntimeYS = T217;
  T221 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLtupG),Ynil);
  fun_truncateS_112 = YPmet(FUNCODEREF(fun_truncateS_112),CHKREF(lit_84),T221,ENVNUL);
  T224 = BOUNDP(YruntimeYtruncateS);
  if (T224 != YPfalse) {
    T223 = CHKREF(YruntimeYtruncateS);
  } else {
    T223 = YPfalse;
  }
  T225 = fun_truncateS_112;
  T222 = CALL2(1,CHKREF(YPdefine_method),T223,T225);
  YruntimeYtruncateS = T222;
  lit_130 = YPPsym((P)"p");
  lit_131 = YPsb((P)".0");
  lit_132 = YPsb((P)"0.");
  lit_133 = YPsb((P)".");
  lit_134 = YPsb((P)"0.0000000000000");
  lit_135 = YPsb((P)"-");
  T227 = YPsig(YPPlist(2,CHKREF(lit_130),CHKREF(lit_22)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_113 = YPmet(FUNCODEREF(fun_loop_113),CHKREF(lit_101),T227,ENVNUL);
  T226 = YPsig(YPPlist(2,CHKREF(lit_124),CHKREF(lit_125)),YPPlist(1,CHKREF(YLfloG)),YPtrue,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_num_to_str_114 = YPmet(FUNCODEREF(fun_num_to_str_114),CHKREF(lit_123),T226,ENVNUL);
  T230 = BOUNDP(YruntimeYnum_to_str);
  if (T230 != YPfalse) {
    T229 = CHKREF(YruntimeYnum_to_str);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_num_to_str_114;
  T228 = CALL2(1,CHKREF(YPdefine_method),T229,T231);
  YruntimeYnum_to_str = T228;
  lit_136 = YPPsym((P)"fabs");
  lit_137 = YPPsym((P)"objects");
  T233 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YLcolG));
  T232 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_137)),YPPlist(1,T233),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_fabs_115 = YPmet(FUNCODEREF(fun_fabs_115),CHKREF(lit_136),T232,ENVNUL);
  T236 = BOUNDP(YruntimeYfabs);
  if (T236 != YPfalse) {
    T235 = CHKREF(YruntimeYfabs);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_fabs_115;
  T234 = CALL2(1,CHKREF(YPdefine_method),T235,T237);
  YruntimeYfabs = T234;
  lit_138 = YPPsym((P)"empty?");
  T238 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YLcolG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_emptyQ_116 = YPmet(FUNCODEREF(fun_emptyQ_116),CHKREF(lit_138),T238,ENVNUL);
  T241 = BOUNDP(YmacrosYemptyQ);
  if (T241 != YPfalse) {
    T240 = CHKREF(YmacrosYemptyQ);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_emptyQ_116;
  T239 = CALL2(1,CHKREF(YPdefine_method),T240,T242);
  YmacrosYemptyQ = T239;
  lit_139 = YPPsym((P)"empty");
  T244 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YLcolG));
  T243 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,T244),YPfalse,YPint((P)1),CHKREF(YLcolG),Ynil);
  fun_empty_117 = YPmet(FUNCODEREF(fun_empty_117),CHKREF(lit_139),T243,ENVNUL);
  T247 = BOUNDP(YruntimeYempty);
  if (T247 != YPfalse) {
    T246 = CHKREF(YruntimeYempty);
  } else {
    T246 = YPfalse;
  }
  T248 = fun_empty_117;
  T245 = CALL2(1,CHKREF(YPdefine_method),T246,T248);
  YruntimeYempty = T245;
  T250 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YLcolG));
  T249 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,T250),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_default_118 = YPmet(FUNCODEREF(fun_default_118),CHKREF(lit_120),T249,ENVNUL);
  T253 = BOUNDP(YruntimeYdefault);
  if (T253 != YPfalse) {
    T252 = CHKREF(YruntimeYdefault);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_default_118;
  T251 = CALL2(1,CHKREF(YPdefine_method),T252,T254);
  YruntimeYdefault = T251;
  lit_140 = YPPsym((P)"as-copy");
  T255 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_9)),YPPlist(2,CHKREF(YLcolG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLcolG),Ynil);
  fun_as_copy_119 = YPmet(FUNCODEREF(fun_as_copy_119),CHKREF(lit_140),T255,ENVNUL);
  T258 = BOUNDP(YruntimeYas_copy);
  if (T258 != YPfalse) {
    T257 = CHKREF(YruntimeYas_copy);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_as_copy_119;
  T256 = CALL2(1,CHKREF(YPdefine_method),T257,T259);
  YruntimeYas_copy = T256;
  lit_141 = YPPsym((P)"c1");
  lit_142 = YPPsym((P)"c2");
  lit_143 = YPPsym((P)"eq");
  lit_144 = YPPsym((P)"s1");
  lit_145 = YPPsym((P)"s2");
  T261 = YPsig(YPPlist(2,CHKREF(lit_144),CHKREF(lit_145)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_eq_120 = YPmet(FUNCODEREF(fun_eq_120),CHKREF(lit_143),T261,ENVNUL);
  T260 = YPsig(YPPlist(2,CHKREF(lit_141),CHKREF(lit_142)),YPPlist(2,CHKREF(YLcolG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_E_121 = YPmet(FUNCODEREF(fun_E_121),CHKREF(lit_49),T260,ENVNUL);
  T264 = BOUNDP(YruntimeYE);
  if (T264 != YPfalse) {
    T263 = CHKREF(YruntimeYE);
  } else {
    T263 = YPfalse;
  }
  T265 = fun_E_121;
  T262 = CALL2(1,CHKREF(YPdefine_method),T263,T265);
  YruntimeYE = T262;
  lit_146 = YPPsym((P)"fab");
  T267 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YLcolG));
  T266 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_7)),YPPlist(2,T267,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLbotG),Ynil);
  fun_fab_122 = YPmet(FUNCODEREF(fun_fab_122),CHKREF(lit_146),T266,ENVNUL);
  T270 = BOUNDP(YruntimeYfab);
  if (T270 != YPfalse) {
    T269 = CHKREF(YruntimeYfab);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_fab_122;
  T268 = CALL2(1,CHKREF(YPdefine_method),T269,T271);
  YruntimeYfab = T268;
  T273 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YLcolG));
  T272 = YPsig(YPPlist(2,CHKREF(lit_130),CHKREF(lit_9)),YPPlist(2,T273,CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLcolG),Ynil);
  fun_as_123 = YPmet(FUNCODEREF(fun_as_123),CHKREF(lit_44),T272,ENVNUL);
  T276 = BOUNDP(YruntimeYas);
  if (T276 != YPfalse) {
    T275 = CHKREF(YruntimeYas);
  } else {
    T275 = YPfalse;
  }
  T277 = fun_as_123;
  T274 = CALL2(1,CHKREF(YPdefine_method),T275,T277);
  YruntimeYas = T274;
  lit_147 = YPPsym((P)"keys");
  lit_148 = YPPsym((P)"con");
  lit_149 = YPPsym((P)"res");
  T279 = YPsig(YPPlist(2,CHKREF(lit_149),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_con_124 = YPmet(FUNCODEREF(fun_con_124),CHKREF(lit_148),T279,ENVNUL);
  T278 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YLcolG)),YPfalse,YPint((P)1),CHKREF(YLseqG),Ynil);
  fun_keys_125 = YPmet(FUNCODEREF(fun_keys_125),CHKREF(lit_147),T278,ENVNUL);
  T282 = BOUNDP(YruntimeYkeys);
  if (T282 != YPfalse) {
    T281 = CHKREF(YruntimeYkeys);
  } else {
    T281 = YPfalse;
  }
  T283 = fun_keys_125;
  T280 = CALL2(1,CHKREF(YPdefine_method),T281,T283);
  YruntimeYkeys = T280;
  lit_150 = YPPsym((P)"do-key-vals");
  lit_151 = YPPsym((P)"fn");
  lit_152 = YPPsym((P)"key-vals");
  lit_153 = YPPsym((P)"rep");
  T285 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_rep_126 = YPmet(FUNCODEREF(fun_rep_126),CHKREF(lit_153),T285,ENVNUL);
  T284 = YPsig(YPPlist(2,CHKREF(lit_151),CHKREF(lit_152)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLseqG)),YPfalse,YPint((P)2),CHKREF(YLtupG),Ynil);
  fun_do_key_vals_127 = YPmet(FUNCODEREF(fun_do_key_vals_127),CHKREF(lit_150),T284,ENVNUL);
  T288 = BOUNDP(YruntimeYdo_key_vals);
  if (T288 != YPfalse) {
    T287 = CHKREF(YruntimeYdo_key_vals);
  } else {
    T287 = YPfalse;
  }
  T289 = fun_do_key_vals_127;
  T286 = CALL2(1,CHKREF(YPdefine_method),T287,T289);
  YruntimeYdo_key_vals = T286;
  lit_154 = YPPsym((P)"len");
  lit_155 = YPPsym((P)"count");
  T291 = YPsig(YPPlist(2,CHKREF(lit_7),CHKREF(lit_5)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_count_128 = YPmet(FUNCODEREF(fun_count_128),CHKREF(lit_155),T291,ENVNUL);
  T290 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLcolG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  fun_len_129 = YPmet(FUNCODEREF(fun_len_129),CHKREF(lit_154),T290,ENVNUL);
  T294 = BOUNDP(YruntimeYlen);
  if (T294 != YPfalse) {
    T293 = CHKREF(YruntimeYlen);
  } else {
    T293 = YPfalse;
  }
  T295 = fun_len_129;
  T292 = CALL2(1,CHKREF(YPdefine_method),T293,T295);
  YruntimeYlen = T292;
  lit_156 = YPPsym((P)"alter");
  lit_157 = YPPsym((P)"dst");
  lit_158 = YPPsym((P)"src");
  lit_159 = YPPsym((P)"in");
  lit_160 = YPPsym((P)"ss");
  T297 = YPsig(YPPlist(1,CHKREF(lit_160)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_in_130 = YPmet(FUNCODEREF(fun_in_130),CHKREF(lit_159),T297,ENVNUL);
  T296 = YPsig(YPPlist(2,CHKREF(lit_157),CHKREF(lit_158)),YPPlist(2,CHKREF(YLcolG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLcolG),Ynil);
  fun_alter_131 = YPmet(FUNCODEREF(fun_alter_131),CHKREF(lit_156),T296,ENVNUL);
  T300 = BOUNDP(YruntimeYalter);
  if (T300 != YPfalse) {
    T299 = CHKREF(YruntimeYalter);
  } else {
    T299 = YPfalse;
  }
  T301 = fun_alter_131;
  T298 = CALL2(1,CHKREF(YPdefine_method),T299,T301);
  YruntimeYalter = T298;
  lit_161 = YPPsym((P)"fill");
  lit_162 = YPPsym((P)"val");
  lit_163 = YPPsym((P)"ds");
  T303 = YPsig(YPPlist(1,CHKREF(lit_163)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_in_132 = YPmet(FUNCODEREF(fun_in_132),CHKREF(lit_159),T303,ENVNUL);
  T302 = YPsig(YPPlist(2,CHKREF(lit_157),CHKREF(lit_162)),YPPlist(2,CHKREF(YLcolG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLcolG),Ynil);
  fun_fill_133 = YPmet(FUNCODEREF(fun_fill_133),CHKREF(lit_161),T302,ENVNUL);
  T306 = BOUNDP(YruntimeYfill);
  if (T306 != YPfalse) {
    T305 = CHKREF(YruntimeYfill);
  } else {
    T305 = YPfalse;
  }
  T307 = fun_fill_133;
  T304 = CALL2(1,CHKREF(YPdefine_method),T305,T307);
  YruntimeYfill = T304;
  lit_164 = YPPsym((P)"any?");
  lit_165 = YPPsym((P)"test");
  lit_166 = YPPsym((P)"fnd");
  lit_167 = YPPsym((P)"state");
  T309 = YPsig(YPPlist(1,CHKREF(lit_167)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_fnd_134 = YPmet(FUNCODEREF(fun_fnd_134),CHKREF(lit_166),T309,ENVNUL);
  T308 = YPsig(YPPlist(2,CHKREF(lit_165),CHKREF(lit_58)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_anyQ_135 = YPmet(FUNCODEREF(fun_anyQ_135),CHKREF(lit_164),T308,ENVNUL);
  T312 = BOUNDP(YruntimeYanyQ);
  if (T312 != YPfalse) {
    T311 = CHKREF(YruntimeYanyQ);
  } else {
    T311 = YPfalse;
  }
  T313 = fun_anyQ_135;
  T310 = CALL2(1,CHKREF(YPdefine_method),T311,T313);
  YruntimeYanyQ = T310;
  lit_168 = YPPsym((P)"any2?");
  lit_169 = YPPsym((P)"sx");
  lit_170 = YPPsym((P)"sy");
  T315 = YPsig(YPPlist(2,CHKREF(lit_169),CHKREF(lit_170)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_fnd_136 = YPmet(FUNCODEREF(fun_fnd_136),CHKREF(lit_166),T315,ENVNUL);
  T314 = YPsig(YPPlist(3,CHKREF(lit_165),CHKREF(lit_9),CHKREF(lit_48)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLcolG),CHKREF(YLcolG)),YPfalse,YPint((P)3),CHKREF(YLlogG),Ynil);
  fun_any2Q_137 = YPmet(FUNCODEREF(fun_any2Q_137),CHKREF(lit_168),T314,ENVNUL);
  T318 = BOUNDP(YruntimeYany2Q);
  if (T318 != YPfalse) {
    T317 = CHKREF(YruntimeYany2Q);
  } else {
    T317 = YPfalse;
  }
  T319 = fun_any2Q_137;
  T316 = CALL2(1,CHKREF(YPdefine_method),T317,T319);
  YruntimeYany2Q = T316;
  lit_171 = YPPsym((P)"all?");
  T324 = YPsig(YPPlist(1,CHKREF(lit_167)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T323 = fun_fnd_138 = YPmet(FUNCODEREF(fun_fnd_138),CHKREF(lit_166),T324,ENVNUL);
  T322 = YPsig(YPPlist(2,CHKREF(lit_165),CHKREF(lit_58)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  T321 = fun_allQ_139 = YPmet(FUNCODEREF(fun_allQ_139),CHKREF(lit_171),T322,ENVNUL);
  T328 = BOUNDP(YruntimeYallQ);
  if (T328 != YPfalse) {
    T327 = CHKREF(YruntimeYallQ);
  } else {
    T327 = YPfalse;
  }
  T329 = fun_allQ_139;
  T326 = CALL2(1,CHKREF(YPdefine_method),T327,T329);
  T325 = YruntimeYallQ = T326;
  T320 = T325;
  return T320;
}

P YruntimeY___main_2___() {
  P T325,T324,T323,T322,T321,T320,T319,T318,T317,T316,T315,T314,T313,T312,T311,T310;
  P T309,T308,T307,T306,T305,T304,T303,T302,T301,T300,T299,T298,T297,T296,T295,T294;
  P T293,T292,T291,T290,T289,T288,T287,T286,T285,T284,T283,T282,T281,T280,T279,T278;
  P T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262;
  P T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246;
  P T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230;
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
  lit_172 = YPPsym((P)"all2?");
  T1 = YPsig(YPPlist(2,CHKREF(lit_169),CHKREF(lit_170)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_fnd_140 = YPmet(FUNCODEREF(fun_fnd_140),CHKREF(lit_166),T1,ENVNUL);
  T0 = YPsig(YPPlist(3,CHKREF(lit_165),CHKREF(lit_9),CHKREF(lit_48)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLcolG),CHKREF(YLcolG)),YPfalse,YPint((P)3),CHKREF(YLlogG),Ynil);
  fun_all2Q_141 = YPmet(FUNCODEREF(fun_all2Q_141),CHKREF(lit_172),T0,ENVNUL);
  T4 = BOUNDP(YruntimeYall2Q);
  if (T4 != YPfalse) {
    T3 = CHKREF(YruntimeYall2Q);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_all2Q_141;
  T2 = CALL2(1,CHKREF(YPdefine_method),T3,T5);
  YruntimeYall2Q = T2;
  lit_173 = YPPsym((P)"reduce");
  lit_174 = YPPsym((P)"combine");
  lit_175 = YPPsym((P)"init");
  lit_176 = YPPsym((P)"red");
  T7 = YPsig(YPPlist(2,CHKREF(lit_149),CHKREF(lit_167)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_red_142 = YPmet(FUNCODEREF(fun_red_142),CHKREF(lit_176),T7,ENVNUL);
  T6 = YPsig(YPPlist(3,CHKREF(lit_174),CHKREF(lit_175),CHKREF(lit_58)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLanyG),CHKREF(YLcolG)),YPfalse,YPint((P)3),CHKREF(YLcolG),Ynil);
  fun_reduce_143 = YPmet(FUNCODEREF(fun_reduce_143),CHKREF(lit_173),T6,ENVNUL);
  T10 = BOUNDP(YruntimeYreduce);
  if (T10 != YPfalse) {
    T9 = CHKREF(YruntimeYreduce);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_reduce_143;
  T8 = CALL2(1,CHKREF(YPdefine_method),T9,T11);
  YruntimeYreduce = T8;
  lit_177 = YPPsym((P)"reduce+");
  T13 = YPsig(YPPlist(2,CHKREF(lit_149),CHKREF(lit_167)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_red_144 = YPmet(FUNCODEREF(fun_red_144),CHKREF(lit_176),T13,ENVNUL);
  T12 = YPsig(YPPlist(2,CHKREF(lit_174),CHKREF(lit_58)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLcolG),Ynil);
  fun_reduceA_145 = YPmet(FUNCODEREF(fun_reduceA_145),CHKREF(lit_177),T12,ENVNUL);
  T16 = BOUNDP(YruntimeYreduceA);
  if (T16 != YPfalse) {
    T15 = CHKREF(YruntimeYreduceA);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_reduceA_145;
  T14 = CALL2(1,CHKREF(YPdefine_method),T15,T17);
  YruntimeYreduceA = T14;
  lit_178 = YPPsym((P)"find-key");
  T19 = YPsig(YPPlist(1,CHKREF(lit_167)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_fnd_146 = YPmet(FUNCODEREF(fun_fnd_146),CHKREF(lit_166),T19,ENVNUL);
  T18 = YPsig(YPPlist(2,CHKREF(lit_70),CHKREF(lit_58)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_find_key_147 = YPmet(FUNCODEREF(fun_find_key_147),CHKREF(lit_178),T18,ENVNUL);
  T22 = BOUNDP(YruntimeYfind_key);
  if (T22 != YPfalse) {
    T21 = CHKREF(YruntimeYfind_key);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_find_key_147;
  T20 = CALL2(1,CHKREF(YPdefine_method),T21,T23);
  YruntimeYfind_key = T20;
  lit_179 = YPPsym((P)"map");
  T25 = YPsig(YPPlist(2,CHKREF(lit_149),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_con_148 = YPmet(FUNCODEREF(fun_con_148),CHKREF(lit_148),T25,ENVNUL);
  T24 = YPsig(YPPlist(2,CHKREF(lit_70),CHKREF(lit_58)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLcolG),Ynil);
  fun_map_149 = YPmet(FUNCODEREF(fun_map_149),CHKREF(lit_179),T24,ENVNUL);
  T28 = BOUNDP(YmacrosYmap);
  if (T28 != YPfalse) {
    T27 = CHKREF(YmacrosYmap);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_map_149;
  T26 = CALL2(1,CHKREF(YPdefine_method),T27,T29);
  YmacrosYmap = T26;
  lit_180 = YPPsym((P)"do");
  lit_181 = YPPsym((P)"lop");
  T31 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_lop_150 = YPmet(FUNCODEREF(fun_lop_150),CHKREF(lit_181),T31,ENVNUL);
  T30 = YPsig(YPPlist(2,CHKREF(lit_70),CHKREF(lit_58)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_do_151 = YPmet(FUNCODEREF(fun_do_151),CHKREF(lit_180),T30,ENVNUL);
  T34 = BOUNDP(YruntimeYdo);
  if (T34 != YPfalse) {
    T33 = CHKREF(YruntimeYdo);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_do_151;
  T32 = CALL2(1,CHKREF(YPdefine_method),T33,T35);
  YruntimeYdo = T32;
  lit_182 = YPPsym((P)"map2");
  T37 = YPsig(YPPlist(3,CHKREF(lit_149),CHKREF(lit_169),CHKREF(lit_170)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_con_152 = YPmet(FUNCODEREF(fun_con_152),CHKREF(lit_148),T37,ENVNUL);
  T36 = YPsig(YPPlist(3,CHKREF(lit_70),CHKREF(lit_9),CHKREF(lit_48)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLcolG),CHKREF(YLcolG)),YPfalse,YPint((P)3),CHKREF(YLcolG),Ynil);
  fun_map2_153 = YPmet(FUNCODEREF(fun_map2_153),CHKREF(lit_182),T36,ENVNUL);
  T40 = BOUNDP(YruntimeYmap2);
  if (T40 != YPfalse) {
    T39 = CHKREF(YruntimeYmap2);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_map2_153;
  T38 = CALL2(1,CHKREF(YPdefine_method),T39,T41);
  YruntimeYmap2 = T38;
  lit_183 = YPPsym((P)"do2");
  T43 = YPsig(YPPlist(2,CHKREF(lit_169),CHKREF(lit_170)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_lop_154 = YPmet(FUNCODEREF(fun_lop_154),CHKREF(lit_181),T43,ENVNUL);
  T42 = YPsig(YPPlist(3,CHKREF(lit_70),CHKREF(lit_9),CHKREF(lit_48)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLcolG),CHKREF(YLcolG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_do2_155 = YPmet(FUNCODEREF(fun_do2_155),CHKREF(lit_183),T42,ENVNUL);
  T46 = BOUNDP(YruntimeYdo2);
  if (T46 != YPfalse) {
    T45 = CHKREF(YruntimeYdo2);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_do2_155;
  T44 = CALL2(1,CHKREF(YPdefine_method),T45,T47);
  YruntimeYdo2 = T44;
  lit_184 = YPPsym((P)"do3");
  lit_185 = YPPsym((P)"z");
  lit_186 = YPPsym((P)"sz");
  T49 = YPsig(YPPlist(3,CHKREF(lit_169),CHKREF(lit_170),CHKREF(lit_186)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_lop_156 = YPmet(FUNCODEREF(fun_lop_156),CHKREF(lit_181),T49,ENVNUL);
  T48 = YPsig(YPPlist(4,CHKREF(lit_70),CHKREF(lit_9),CHKREF(lit_48),CHKREF(lit_185)),YPPlist(4,CHKREF(YLfunG),CHKREF(YLcolG),CHKREF(YLcolG),CHKREF(YLcolG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_do3_157 = YPmet(FUNCODEREF(fun_do3_157),CHKREF(lit_184),T48,ENVNUL);
  T52 = BOUNDP(YruntimeYdo3);
  if (T52 != YPfalse) {
    T51 = CHKREF(YruntimeYdo3);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_do3_157;
  T50 = CALL2(1,CHKREF(YPdefine_method),T51,T53);
  YruntimeYdo3 = T50;
  lit_187 = YPPsym((P)"map-keyed");
  T55 = YPsig(YPPlist(2,CHKREF(lit_149),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_con_158 = YPmet(FUNCODEREF(fun_con_158),CHKREF(lit_148),T55,ENVNUL);
  T54 = YPsig(YPPlist(2,CHKREF(lit_70),CHKREF(lit_58)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLcolG),Ynil);
  fun_map_keyed_159 = YPmet(FUNCODEREF(fun_map_keyed_159),CHKREF(lit_187),T54,ENVNUL);
  T58 = BOUNDP(YruntimeYmap_keyed);
  if (T58 != YPfalse) {
    T57 = CHKREF(YruntimeYmap_keyed);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_map_keyed_159;
  T56 = CALL2(1,CHKREF(YPdefine_method),T57,T59);
  YruntimeYmap_keyed = T56;
  lit_188 = YPPsym((P)"do-keyed");
  T61 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_lop_160 = YPmet(FUNCODEREF(fun_lop_160),CHKREF(lit_181),T61,ENVNUL);
  T60 = YPsig(YPPlist(2,CHKREF(lit_70),CHKREF(lit_58)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_do_keyed_161 = YPmet(FUNCODEREF(fun_do_keyed_161),CHKREF(lit_188),T60,ENVNUL);
  T64 = BOUNDP(YruntimeYdo_keyed);
  if (T64 != YPfalse) {
    T63 = CHKREF(YruntimeYdo_keyed);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_do_keyed_161;
  T62 = CALL2(1,CHKREF(YPdefine_method),T63,T65);
  YruntimeYdo_keyed = T62;
  lit_189 = YPPsym((P)"mem?");
  T67 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_162 = YPmet(FUNCODEREF(fun_162),YPfalse,T67,ENVNUL);
  T66 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_9)),YPPlist(2,CHKREF(YLcolG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_memQ_163 = YPmet(FUNCODEREF(fun_memQ_163),CHKREF(lit_189),T66,ENVNUL);
  T70 = BOUNDP(YruntimeYmemQ);
  if (T70 != YPfalse) {
    T69 = CHKREF(YruntimeYmemQ);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_memQ_163;
  T68 = CALL2(1,CHKREF(YPdefine_method),T69,T71);
  YruntimeYmemQ = T68;
  lit_190 = YPPsym((P)"<map>");
  T73 = (P)YPpair(CHKREF(YLcolG),Ynil);
  T72 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_190),T73);
  YruntimeYLmapG = T72;
  lit_191 = YPPsym((P)"fab-map");
  lit_192 = YPPsym((P)"key");
  T76 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_162)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_164 = YPmet(FUNCODEREF(fun_164),YPfalse,T76,ENVNUL);
  T75 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YruntimeYLmapG));
  T74 = YPsig(YPPlist(2,CHKREF(lit_130),CHKREF(lit_152)),YPPlist(1,T75),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_fab_map_165 = YPmet(FUNCODEREF(fun_fab_map_165),CHKREF(lit_191),T74,ENVNUL);
  T79 = BOUNDP(YruntimeYfab_map);
  if (T79 != YPfalse) {
    T78 = CHKREF(YruntimeYfab_map);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_fab_map_165;
  T77 = CALL2(1,CHKREF(YPdefine_method),T78,T80);
  YruntimeYfab_map = T77;
  lit_193 = YPPsym((P)"<assocs>");
  T82 = (P)YPpair(CHKREF(YruntimeYLmapG),Ynil);
  T81 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_193),T82);
  YruntimeYLassocsG = T81;
  lit_194 = YPPsym((P)"assocs-test");
  lit_195 = YPPsym((P)"_x");
  T83 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLassocsG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_assocs_test_166 = YPmet(FUNCODEREF(fun_assocs_test_166),CHKREF(lit_194),T83,ENVNUL);
  T86 = BOUNDP(YruntimeYassocs_test);
  if (T86 != YPfalse) {
    T85 = CHKREF(YruntimeYassocs_test);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_assocs_test_166;
  T84 = CALL2(1,CHKREF(YPdefine_method),T85,T87);
  YruntimeYassocs_test = T84;
  lit_196 = YPPsym((P)"assocs-test-setter");
  lit_197 = YPPsym((P)"_z");
  T88 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLfunG),CHKREF(YruntimeYLassocsG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_assocs_test_setter_167 = YPmet(FUNCODEREF(fun_assocs_test_setter_167),CHKREF(lit_196),T88,ENVNUL);
  T91 = BOUNDP(YruntimeYassocs_test_setter);
  if (T91 != YPfalse) {
    T90 = CHKREF(YruntimeYassocs_test_setter);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_assocs_test_setter_167;
  T89 = CALL2(1,CHKREF(YPdefine_method),T90,T92);
  YruntimeYassocs_test_setter = T89;
  T93 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_168 = YPmet(FUNCODEREF(fun_168),YPfalse,T93,ENVNUL);
  T94 = fun_168;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLassocsG),CHKREF(YruntimeYassocs_test),CHKREF(YruntimeYassocs_test_setter),CHKREF(YLfunG),T94);
  lit_198 = YPPsym((P)"assocs-keys");
  T95 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLassocsG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_assocs_keys_169 = YPmet(FUNCODEREF(fun_assocs_keys_169),CHKREF(lit_198),T95,ENVNUL);
  T98 = BOUNDP(YruntimeYassocs_keys);
  if (T98 != YPfalse) {
    T97 = CHKREF(YruntimeYassocs_keys);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_assocs_keys_169;
  T96 = CALL2(1,CHKREF(YPdefine_method),T97,T99);
  YruntimeYassocs_keys = T96;
  lit_199 = YPPsym((P)"assocs-keys-setter");
  T100 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLlstG),CHKREF(YruntimeYLassocsG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_assocs_keys_setter_170 = YPmet(FUNCODEREF(fun_assocs_keys_setter_170),CHKREF(lit_199),T100,ENVNUL);
  T103 = BOUNDP(YruntimeYassocs_keys_setter);
  if (T103 != YPfalse) {
    T102 = CHKREF(YruntimeYassocs_keys_setter);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_assocs_keys_setter_170;
  T101 = CALL2(1,CHKREF(YPdefine_method),T102,T104);
  YruntimeYassocs_keys_setter = T101;
  T105 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_171 = YPmet(FUNCODEREF(fun_171),YPfalse,T105,ENVNUL);
  T106 = fun_171;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLassocsG),CHKREF(YruntimeYassocs_keys),CHKREF(YruntimeYassocs_keys_setter),CHKREF(YLlstG),T106);
  lit_200 = YPPsym((P)"assocs-vals");
  T107 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLassocsG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_assocs_vals_172 = YPmet(FUNCODEREF(fun_assocs_vals_172),CHKREF(lit_200),T107,ENVNUL);
  T110 = BOUNDP(YruntimeYassocs_vals);
  if (T110 != YPfalse) {
    T109 = CHKREF(YruntimeYassocs_vals);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_assocs_vals_172;
  T108 = CALL2(1,CHKREF(YPdefine_method),T109,T111);
  YruntimeYassocs_vals = T108;
  lit_201 = YPPsym((P)"assocs-vals-setter");
  T112 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLlstG),CHKREF(YruntimeYLassocsG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_assocs_vals_setter_173 = YPmet(FUNCODEREF(fun_assocs_vals_setter_173),CHKREF(lit_201),T112,ENVNUL);
  T115 = BOUNDP(YruntimeYassocs_vals_setter);
  if (T115 != YPfalse) {
    T114 = CHKREF(YruntimeYassocs_vals_setter);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_assocs_vals_setter_173;
  T113 = CALL2(1,CHKREF(YPdefine_method),T114,T116);
  YruntimeYassocs_vals_setter = T113;
  T117 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_174 = YPmet(FUNCODEREF(fun_174),YPfalse,T117,ENVNUL);
  T118 = fun_174;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLassocsG),CHKREF(YruntimeYassocs_vals),CHKREF(YruntimeYassocs_vals_setter),CHKREF(YLlstG),T118);
  T120 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YruntimeYLassocsG));
  T119 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_7)),YPPlist(2,T120,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLassocsG),Ynil);
  fun_fab_175 = YPmet(FUNCODEREF(fun_fab_175),CHKREF(lit_146),T119,ENVNUL);
  T123 = BOUNDP(YruntimeYfab);
  if (T123 != YPfalse) {
    T122 = CHKREF(YruntimeYfab);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_fab_175;
  T121 = CALL2(1,CHKREF(YPdefine_method),T122,T124);
  YruntimeYfab = T121;
  T125 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YruntimeYLassocsG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  fun_len_176 = YPmet(FUNCODEREF(fun_len_176),CHKREF(lit_154),T125,ENVNUL);
  T128 = BOUNDP(YruntimeYlen);
  if (T128 != YPfalse) {
    T127 = CHKREF(YruntimeYlen);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_len_176;
  T126 = CALL2(1,CHKREF(YPdefine_method),T127,T129);
  YruntimeYlen = T126;
  lit_202 = YPPsym((P)"elt");
  lit_203 = YPPsym((P)"vals");
  T131 = YPsig(YPPlist(2,CHKREF(lit_147),CHKREF(lit_203)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_fnd_177 = YPmet(FUNCODEREF(fun_fnd_177),CHKREF(lit_166),T131,ENVNUL);
  T130 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_192)),YPPlist(2,CHKREF(YruntimeYLassocsG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_elt_178 = YPmet(FUNCODEREF(fun_elt_178),CHKREF(lit_202),T130,ENVNUL);
  T134 = BOUNDP(YruntimeYelt);
  if (T134 != YPfalse) {
    T133 = CHKREF(YruntimeYelt);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_elt_178;
  T132 = CALL2(1,CHKREF(YPdefine_method),T133,T135);
  YruntimeYelt = T132;
  lit_204 = YPPsym((P)"elt-setter");
  T137 = YPsig(YPPlist(2,CHKREF(lit_147),CHKREF(lit_203)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_fnd_179 = YPmet(FUNCODEREF(fun_fnd_179),CHKREF(lit_166),T137,ENVNUL);
  T136 = YPsig(YPPlist(3,CHKREF(lit_162),CHKREF(lit_9),CHKREF(lit_192)),YPPlist(3,CHKREF(YLanyG),CHKREF(YruntimeYLassocsG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_elt_setter_180 = YPmet(FUNCODEREF(fun_elt_setter_180),CHKREF(lit_204),T136,ENVNUL);
  T140 = BOUNDP(YruntimeYelt_setter);
  if (T140 != YPfalse) {
    T139 = CHKREF(YruntimeYelt_setter);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_elt_setter_180;
  T138 = CALL2(1,CHKREF(YPdefine_method),T139,T141);
  YruntimeYelt_setter = T138;
  lit_205 = YPPsym((P)"d");
  T143 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YLseqG));
  T142 = YPsig(YPPlist(2,CHKREF(lit_205),CHKREF(lit_7)),YPPlist(2,T143,CHKREF(YLseqG)),YPfalse,YPint((P)2),CHKREF(YLseqG),Ynil);
  fun_as_181 = YPmet(FUNCODEREF(fun_as_181),CHKREF(lit_44),T142,ENVNUL);
  T146 = BOUNDP(YruntimeYas);
  if (T146 != YPfalse) {
    T145 = CHKREF(YruntimeYas);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_as_181;
  T144 = CALL2(1,CHKREF(YPdefine_method),T145,T147);
  YruntimeYas = T144;
  T148 = YPsig(YPPlist(1,CHKREF(lit_205)),YPPlist(1,CHKREF(YLseqG)),YPfalse,YPint((P)1),CHKREF(YLseqG),Ynil);
  fun_keys_182 = YPmet(FUNCODEREF(fun_keys_182),CHKREF(lit_147),T148,ENVNUL);
  T151 = BOUNDP(YruntimeYkeys);
  if (T151 != YPfalse) {
    T150 = CHKREF(YruntimeYkeys);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_keys_182;
  T149 = CALL2(1,CHKREF(YPdefine_method),T150,T152);
  YruntimeYkeys = T149;
  T154 = YPsig(YPPlist(2,CHKREF(lit_163),CHKREF(lit_160)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_in_183 = YPmet(FUNCODEREF(fun_in_183),CHKREF(lit_159),T154,ENVNUL);
  T153 = YPsig(YPPlist(2,CHKREF(lit_157),CHKREF(lit_158)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLseqG)),YPfalse,YPint((P)2),CHKREF(YLseqG),Ynil);
  fun_alter_184 = YPmet(FUNCODEREF(fun_alter_184),CHKREF(lit_156),T153,ENVNUL);
  T157 = BOUNDP(YruntimeYalter);
  if (T157 != YPfalse) {
    T156 = CHKREF(YruntimeYalter);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_alter_184;
  T155 = CALL2(1,CHKREF(YPdefine_method),T156,T158);
  YruntimeYalter = T155;
  lit_206 = YPPsym((P)"range-error");
  lit_207 = YPsb((P)"RANGE ERROR %= %=");
  T159 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_5)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YruntimeYrange_error = YPmet(FUNCODEREF(YruntimeYrange_error),CHKREF(lit_206),T159,ENVNUL);
  T160 = YruntimeYrange_error;
  YruntimeYrange_error = T160;
  lit_208 = YPPsym((P)"range-check");
  T161 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_5)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YruntimeYrange_check = YPmet(FUNCODEREF(YruntimeYrange_check),CHKREF(lit_208),T161,ENVNUL);
  T162 = YruntimeYrange_check;
  YruntimeYrange_check = T162;
  lit_209 = YPPsym((P)"1st");
  T163 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLseqG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_1st_187 = YPmet(FUNCODEREF(fun_1st_187),CHKREF(lit_209),T163,ENVNUL);
  T166 = BOUNDP(YruntimeY1st);
  if (T166 != YPfalse) {
    T165 = CHKREF(YruntimeY1st);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_1st_187;
  T164 = CALL2(1,CHKREF(YPdefine_method),T165,T167);
  YruntimeY1st = T164;
  lit_210 = YPPsym((P)"2nd");
  T168 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLseqG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_2nd_188 = YPmet(FUNCODEREF(fun_2nd_188),CHKREF(lit_210),T168,ENVNUL);
  T171 = BOUNDP(YruntimeY2nd);
  if (T171 != YPfalse) {
    T170 = CHKREF(YruntimeY2nd);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_2nd_188;
  T169 = CALL2(1,CHKREF(YPdefine_method),T170,T172);
  YruntimeY2nd = T169;
  lit_211 = YPPsym((P)"3rd");
  T173 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLseqG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_3rd_189 = YPmet(FUNCODEREF(fun_3rd_189),CHKREF(lit_211),T173,ENVNUL);
  T176 = BOUNDP(YruntimeY3rd);
  if (T176 != YPfalse) {
    T175 = CHKREF(YruntimeY3rd);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_3rd_189;
  T174 = CALL2(1,CHKREF(YPdefine_method),T175,T177);
  YruntimeY3rd = T174;
  lit_212 = YPPsym((P)"last");
  T178 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLseqG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_last_190 = YPmet(FUNCODEREF(fun_last_190),CHKREF(lit_212),T178,ENVNUL);
  T181 = BOUNDP(YruntimeYlast);
  if (T181 != YPfalse) {
    T180 = CHKREF(YruntimeYlast);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_last_190;
  T179 = CALL2(1,CHKREF(YPdefine_method),T180,T182);
  YruntimeYlast = T179;
  lit_213 = YPPsym((P)"add");
  T184 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_9)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLseqG),Ynil);
  T183 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_213),T184,Ynil,YPfalse);
  YruntimeYadd = T183;
  lit_214 = YPPsym((P)"add-new");
  T185 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_9)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLseqG),Ynil);
  fun_add_new_191 = YPmet(FUNCODEREF(fun_add_new_191),CHKREF(lit_214),T185,ENVNUL);
  T188 = BOUNDP(YruntimeYadd_new);
  if (T188 != YPfalse) {
    T187 = CHKREF(YruntimeYadd_new);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_add_new_191;
  T186 = CALL2(1,CHKREF(YPdefine_method),T187,T189);
  YruntimeYadd_new = T186;
  lit_215 = YPPsym((P)"add!");
  T190 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_9)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLseqG),Ynil);
  fun_addX_192 = YPmet(FUNCODEREF(fun_addX_192),CHKREF(lit_215),T190,ENVNUL);
  T193 = BOUNDP(YruntimeYaddX);
  if (T193 != YPfalse) {
    T192 = CHKREF(YruntimeYaddX);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_addX_192;
  T191 = CALL2(1,CHKREF(YPdefine_method),T192,T194);
  YruntimeYaddX = T191;
  lit_216 = YPPsym((P)"pos");
  lit_217 = YPPsym((P)"v");
  T195 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_217)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_pos_193 = YPmet(FUNCODEREF(fun_pos_193),CHKREF(lit_216),T195,ENVNUL);
  T198 = BOUNDP(YruntimeYpos);
  if (T198 != YPfalse) {
    T197 = CHKREF(YruntimeYpos);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_pos_193;
  T196 = CALL2(1,CHKREF(YPdefine_method),T197,T199);
  YruntimeYpos = T196;
  lit_218 = YPPsym((P)"into");
  lit_219 = YPPsym((P)"from");
  lit_220 = YPPsym((P)"below");
  T201 = YPsig(YPPlist(2,CHKREF(lit_163),CHKREF(lit_160)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_in_194 = YPmet(FUNCODEREF(fun_in_194),CHKREF(lit_159),T201,ENVNUL);
  T200 = YPsig(YPPlist(4,CHKREF(lit_157),CHKREF(lit_158),CHKREF(lit_219),CHKREF(lit_220)),YPPlist(4,CHKREF(YLseqG),CHKREF(YLseqG),CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)4),CHKREF(YLseqG),Ynil);
  fun_into_195 = YPmet(FUNCODEREF(fun_into_195),CHKREF(lit_218),T200,ENVNUL);
  T204 = BOUNDP(YruntimeYinto);
  if (T204 != YPfalse) {
    T203 = CHKREF(YruntimeYinto);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_into_195;
  T202 = CALL2(1,CHKREF(YPdefine_method),T203,T205);
  YruntimeYinto = T202;
  lit_221 = YPPsym((P)"sub-setter");
  lit_222 = YPPsym((P)"find");
  lit_223 = YPPsym((P)"copy");
  lit_224 = YPPsym((P)"nds");
  lit_225 = YPPsym((P)"insert");
  lit_226 = YPPsym((P)"skip");
  lit_227 = YPPsym((P)"onto");
  T212 = YPsig(YPPlist(2,CHKREF(lit_163),CHKREF(lit_160)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_in_196 = YPmet(FUNCODEREF(fun_in_196),CHKREF(lit_159),T212,ENVNUL);
  T211 = YPsig(YPPlist(2,CHKREF(lit_163),CHKREF(lit_5)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_find_197 = YPmet(FUNCODEREF(fun_find_197),CHKREF(lit_222),T211,ENVNUL);
  T210 = YPsig(YPPlist(3,CHKREF(lit_224),CHKREF(lit_163),CHKREF(lit_5)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_onto_198 = YPmet(FUNCODEREF(fun_onto_198),CHKREF(lit_227),T210,ENVNUL);
  T209 = YPsig(YPPlist(2,CHKREF(lit_163),CHKREF(lit_5)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_skip_199 = YPmet(FUNCODEREF(fun_skip_199),CHKREF(lit_226),T209,ENVNUL);
  T208 = YPsig(YPPlist(2,CHKREF(lit_224),CHKREF(lit_160)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_insert_200 = YPmet(FUNCODEREF(fun_insert_200),CHKREF(lit_225),T208,ENVNUL);
  T207 = YPsig(YPPlist(3,CHKREF(lit_224),CHKREF(lit_163),CHKREF(lit_5)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_copy_201 = YPmet(FUNCODEREF(fun_copy_201),CHKREF(lit_223),T207,ENVNUL);
  T206 = YPsig(YPPlist(4,CHKREF(lit_158),CHKREF(lit_157),CHKREF(lit_219),CHKREF(lit_220)),YPPlist(4,CHKREF(YLseqG),CHKREF(YLseqG),CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)4),CHKREF(YLseqG),Ynil);
  fun_sub_setter_202 = YPmet(FUNCODEREF(fun_sub_setter_202),CHKREF(lit_221),T206,ENVNUL);
  T215 = BOUNDP(YruntimeYsub_setter);
  if (T215 != YPfalse) {
    T214 = CHKREF(YruntimeYsub_setter);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_sub_setter_202;
  T213 = CALL2(1,CHKREF(YPdefine_method),T214,T216);
  YruntimeYsub_setter = T213;
  lit_228 = YPPsym((P)"rev");
  lit_229 = YPPsym((P)"seq");
  lit_230 = YPPsym((P)"sta");
  T218 = YPsig(YPPlist(2,CHKREF(lit_229),CHKREF(lit_230)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_con_203 = YPmet(FUNCODEREF(fun_con_203),CHKREF(lit_148),T218,ENVNUL);
  T217 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLseqG)),YPfalse,YPint((P)1),CHKREF(YLseqG),Ynil);
  fun_rev_204 = YPmet(FUNCODEREF(fun_rev_204),CHKREF(lit_228),T217,ENVNUL);
  T221 = BOUNDP(YruntimeYrev);
  if (T221 != YPfalse) {
    T220 = CHKREF(YruntimeYrev);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_rev_204;
  T219 = CALL2(1,CHKREF(YPdefine_method),T220,T222);
  YruntimeYrev = T219;
  lit_231 = YPPsym((P)"cat2");
  lit_232 = YPPsym((P)"con-x");
  lit_233 = YPPsym((P)"con-y");
  T225 = YPsig(YPPlist(2,CHKREF(lit_229),CHKREF(lit_230)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_con_y_205 = YPmet(FUNCODEREF(fun_con_y_205),CHKREF(lit_233),T225,ENVNUL);
  T224 = YPsig(YPPlist(2,CHKREF(lit_229),CHKREF(lit_230)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_con_x_206 = YPmet(FUNCODEREF(fun_con_x_206),CHKREF(lit_232),T224,ENVNUL);
  T223 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLseqG)),YPfalse,YPint((P)2),CHKREF(YLseqG),Ynil);
  fun_cat2_207 = YPmet(FUNCODEREF(fun_cat2_207),CHKREF(lit_231),T223,ENVNUL);
  T228 = BOUNDP(YruntimeYcat2);
  if (T228 != YPfalse) {
    T227 = CHKREF(YruntimeYcat2);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_cat2_207;
  T226 = CALL2(1,CHKREF(YPdefine_method),T227,T229);
  YruntimeYcat2 = T226;
  lit_234 = YPPsym((P)"cat");
  T230 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_160)),YPPlist(1,CHKREF(YLseqG)),YPtrue,YPint((P)1),CHKREF(YLseqG),Ynil);
  fun_cat_208 = YPmet(FUNCODEREF(fun_cat_208),CHKREF(lit_234),T230,ENVNUL);
  T233 = BOUNDP(YmacrosYcat);
  if (T233 != YPfalse) {
    T232 = CHKREF(YmacrosYcat);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_cat_208;
  T231 = CALL2(1,CHKREF(YPdefine_method),T232,T234);
  YmacrosYcat = T231;
  lit_235 = YPPsym((P)"cat!");
  lit_236 = YPPsym((P)"more");
  T235 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_236)),YPPlist(1,CHKREF(YLseqG)),YPtrue,YPint((P)1),CHKREF(YLseqG),Ynil);
  fun_catX_209 = YPmet(FUNCODEREF(fun_catX_209),CHKREF(lit_235),T235,ENVNUL);
  T238 = BOUNDP(YruntimeYcatX);
  if (T238 != YPfalse) {
    T237 = CHKREF(YruntimeYcatX);
  } else {
    T237 = YPfalse;
  }
  T239 = fun_catX_209;
  T236 = CALL2(1,CHKREF(YPdefine_method),T237,T239);
  YruntimeYcatX = T236;
  lit_237 = YPPsym((P)"find-tail");
  lit_238 = YPPsym((P)"x-1209");
  lit_239 = YPPsym((P)"x-1207");
  T243 = YPsig(YPPlist(1,CHKREF(lit_130)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_find_tail_210 = YPmet(FUNCODEREF(fun_find_tail_210),CHKREF(lit_237),T243,ENVNUL);
  T242 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  fun_211 = YPmet(FUNCODEREF(fun_211),YPfalse,T242,ENVNUL);
  T241 = YPsig(YPPlist(1,CHKREF(lit_239)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1209_212 = YPmet(FUNCODEREF(fun_x_1209_212),CHKREF(lit_238),T241,ENVNUL);
  T240 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_236)),YPPlist(1,CHKREF(YLlstG)),YPtrue,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_catX_213 = YPmet(FUNCODEREF(fun_catX_213),CHKREF(lit_235),T240,ENVNUL);
  T246 = BOUNDP(YruntimeYcatX);
  if (T246 != YPfalse) {
    T245 = CHKREF(YruntimeYcatX);
  } else {
    T245 = YPfalse;
  }
  T247 = fun_catX_213;
  T244 = CALL2(1,CHKREF(YPdefine_method),T245,T247);
  YruntimeYcatX = T244;
  lit_240 = YPPsym((P)"sub");
  T249 = YPsig(YPPlist(3,CHKREF(lit_229),CHKREF(lit_5),CHKREF(lit_230)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLintG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_con_x_214 = YPmet(FUNCODEREF(fun_con_x_214),CHKREF(lit_232),T249,ENVNUL);
  T248 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_219),CHKREF(lit_220)),YPPlist(3,CHKREF(YLseqG),CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLseqG),Ynil);
  fun_sub_215 = YPmet(FUNCODEREF(fun_sub_215),CHKREF(lit_240),T248,ENVNUL);
  T252 = BOUNDP(YruntimeYsub);
  if (T252 != YPfalse) {
    T251 = CHKREF(YruntimeYsub);
  } else {
    T251 = YPfalse;
  }
  T253 = fun_sub_215;
  T250 = CALL2(1,CHKREF(YPdefine_method),T251,T253);
  YruntimeYsub = T250;
  lit_241 = YPPsym((P)"pick");
  T255 = YPsig(YPPlist(2,CHKREF(lit_229),CHKREF(lit_230)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_con_216 = YPmet(FUNCODEREF(fun_con_216),CHKREF(lit_148),T255,ENVNUL);
  T254 = YPsig(YPPlist(2,CHKREF(lit_165),CHKREF(lit_9)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLseqG)),YPfalse,YPint((P)2),CHKREF(YLseqG),Ynil);
  fun_pick_217 = YPmet(FUNCODEREF(fun_pick_217),CHKREF(lit_241),T254,ENVNUL);
  T258 = BOUNDP(YruntimeYpick);
  if (T258 != YPfalse) {
    T257 = CHKREF(YruntimeYpick);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_pick_217;
  T256 = CALL2(1,CHKREF(YPdefine_method),T257,T259);
  YruntimeYpick = T256;
  lit_242 = YPPsym((P)"del-dups");
  T261 = YPsig(YPPlist(2,CHKREF(lit_7),CHKREF(lit_22)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_218 = YPmet(FUNCODEREF(fun_218),YPfalse,T261,ENVNUL);
  T260 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLseqG)),YPfalse,YPint((P)1),CHKREF(YLseqG),Ynil);
  fun_del_dups_219 = YPmet(FUNCODEREF(fun_del_dups_219),CHKREF(lit_242),T260,ENVNUL);
  T264 = BOUNDP(YruntimeYdel_dups);
  if (T264 != YPfalse) {
    T263 = CHKREF(YruntimeYdel_dups);
  } else {
    T263 = YPfalse;
  }
  T265 = fun_del_dups_219;
  T262 = CALL2(1,CHKREF(YPdefine_method),T263,T265);
  YruntimeYdel_dups = T262;
  lit_243 = YPPsym((P)"del");
  T267 = YPsig(YPPlist(1,CHKREF(lit_22)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_220 = YPmet(FUNCODEREF(fun_220),YPfalse,T267,ENVNUL);
  T266 = YPsig(YPPlist(2,CHKREF(lit_7),CHKREF(lit_9)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLseqG),Ynil);
  fun_del_221 = YPmet(FUNCODEREF(fun_del_221),CHKREF(lit_243),T266,ENVNUL);
  T270 = BOUNDP(YruntimeYdel);
  if (T270 != YPfalse) {
    T269 = CHKREF(YruntimeYdel);
  } else {
    T269 = YPfalse;
  }
  T271 = fun_del_221;
  T268 = CALL2(1,CHKREF(YPdefine_method),T269,T271);
  YruntimeYdel = T268;
  lit_244 = YPPsym((P)"vals-to-str");
  lit_245 = YPsb((P)" ");
  T273 = YPsig(YPPlist(2,CHKREF(lit_7),CHKREF(lit_22)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T273,ENVNUL);
  T272 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLseqG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_vals_to_str_223 = YPmet(FUNCODEREF(fun_vals_to_str_223),CHKREF(lit_244),T272,ENVNUL);
  T276 = BOUNDP(YruntimeYvals_to_str);
  if (T276 != YPfalse) {
    T275 = CHKREF(YruntimeYvals_to_str);
  } else {
    T275 = YPfalse;
  }
  T277 = fun_vals_to_str_223;
  T274 = CALL2(1,CHKREF(YPdefine_method),T275,T277);
  YruntimeYvals_to_str = T274;
  YruntimeYLlistG = CHKREF(YLlstG);
  lit_246 = YPsb((P)"(");
  lit_247 = YPsb((P)")");
  T278 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_to_str_224 = YPmet(FUNCODEREF(fun_to_str_224),CHKREF(lit_37),T278,ENVNUL);
  T281 = BOUNDP(YruntimeYto_str);
  if (T281 != YPfalse) {
    T280 = CHKREF(YruntimeYto_str);
  } else {
    T280 = YPfalse;
  }
  T282 = fun_to_str_224;
  T279 = CALL2(1,CHKREF(YPdefine_method),T280,T282);
  YruntimeYto_str = T279;
  lit_248 = YPPsym((P)"pair");
  lit_249 = YPPsym((P)"h");
  lit_250 = YPPsym((P)"t");
  T283 = YPsig(YPPlist(2,CHKREF(lit_249),CHKREF(lit_250)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_pair_225 = YPmet(FUNCODEREF(fun_pair_225),CHKREF(lit_248),T283,ENVNUL);
  T286 = BOUNDP(YmacrosYpair);
  if (T286 != YPfalse) {
    T285 = CHKREF(YmacrosYpair);
  } else {
    T285 = YPfalse;
  }
  T287 = fun_pair_225;
  T284 = CALL2(1,CHKREF(YPdefine_method),T285,T287);
  YmacrosYpair = T284;
  T289 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YLlstG));
  T288 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,T289),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_empty_226 = YPmet(FUNCODEREF(fun_empty_226),CHKREF(lit_139),T288,ENVNUL);
  T292 = BOUNDP(YruntimeYempty);
  if (T292 != YPfalse) {
    T291 = CHKREF(YruntimeYempty);
  } else {
    T291 = YPfalse;
  }
  T293 = fun_empty_226;
  T290 = CALL2(1,CHKREF(YPdefine_method),T291,T293);
  YruntimeYempty = T290;
  T294 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_emptyQ_227 = YPmet(FUNCODEREF(fun_emptyQ_227),CHKREF(lit_138),T294,ENVNUL);
  T297 = BOUNDP(YmacrosYemptyQ);
  if (T297 != YPfalse) {
    T296 = CHKREF(YmacrosYemptyQ);
  } else {
    T296 = YPfalse;
  }
  T298 = fun_emptyQ_227;
  T295 = CALL2(1,CHKREF(YPdefine_method),T296,T298);
  YmacrosYemptyQ = T295;
  T301 = YPsig(YPPlist(2,CHKREF(lit_5),CHKREF(lit_149)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_fab_228 = YPmet(FUNCODEREF(fun_fab_228),CHKREF(lit_146),T301,ENVNUL);
  T300 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YLlstG));
  T299 = YPsig(YPPlist(2,CHKREF(lit_250),CHKREF(lit_7)),YPPlist(2,T300,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  fun_fab_229 = YPmet(FUNCODEREF(fun_fab_229),CHKREF(lit_146),T299,ENVNUL);
  T304 = BOUNDP(YruntimeYfab);
  if (T304 != YPfalse) {
    T303 = CHKREF(YruntimeYfab);
  } else {
    T303 = YPfalse;
  }
  T305 = fun_fab_229;
  T302 = CALL2(1,CHKREF(YPdefine_method),T303,T305);
  YruntimeYfab = T302;
  T307 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YLlstG));
  T306 = YPsig(YPPlist(2,CHKREF(lit_130),CHKREF(lit_9)),YPPlist(2,T307,CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  fun_as_230 = YPmet(FUNCODEREF(fun_as_230),CHKREF(lit_44),T306,ENVNUL);
  T310 = BOUNDP(YruntimeYas);
  if (T310 != YPfalse) {
    T309 = CHKREF(YruntimeYas);
  } else {
    T309 = YPfalse;
  }
  T311 = fun_as_230;
  T308 = CALL2(1,CHKREF(YPdefine_method),T309,T311);
  YruntimeYas = T308;
  lit_251 = YPPsym((P)"build");
  lit_252 = YPPsym((P)"index");
  lit_253 = YPPsym((P)"result");
  T314 = YPsig(YPPlist(2,CHKREF(lit_252),CHKREF(lit_253)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_build_231 = YPmet(FUNCODEREF(fun_build_231),CHKREF(lit_251),T314,ENVNUL);
  T313 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YLlstG));
  T312 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_137)),YPPlist(1,T313),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_fabs_232 = YPmet(FUNCODEREF(fun_fabs_232),CHKREF(lit_136),T312,ENVNUL);
  T317 = BOUNDP(YruntimeYfabs);
  if (T317 != YPfalse) {
    T316 = CHKREF(YruntimeYfabs);
  } else {
    T316 = YPfalse;
  }
  T318 = fun_fabs_232;
  T315 = CALL2(1,CHKREF(YPdefine_method),T316,T318);
  YruntimeYfabs = T315;
  lit_254 = YPPsym((P)"lst");
  T319 = YPsig(YPPlist(1,CHKREF(lit_137)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_lst_233 = YPmet(FUNCODEREF(fun_lst_233),CHKREF(lit_254),T319,ENVNUL);
  T322 = BOUNDP(Ylst);
  if (T322 != YPfalse) {
    T321 = CHKREF(Ylst);
  } else {
    T321 = YPfalse;
  }
  T323 = fun_lst_233;
  T320 = CALL2(1,CHKREF(YPdefine_method),T321,T323);
  Ylst = T320;
  YruntimeYlist = CHKREF(Ylst);
  T325 = YruntimeYPlist = CHKREF(YruntimeYlist);
  T324 = T325;
  return T324;
}

P YruntimeY___main_3___() {
  P T308,T307,T306,T305,T304,T303,T302,T301,T300,T299,T298,T297,T296,T295,T294,T293;
  P T292,T291,T290,T289,T288,T287,T286,T285,T284,T283,T282,T281,T280,T279,T278,T277;
  P T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261;
  P T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245;
  P T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229;
  P T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213;
  P T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197;
  P T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181;
  P T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165;
  P T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149;
  P T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133;
  P T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117;
  P T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101;
  P T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85;
  P T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69;
  P T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53;
  P T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  YruntimeYPcat = CHKREF(YmacrosYcat);
  lit_255 = YPPsym((P)"sum");
  T1 = YPsig(YPPlist(2,CHKREF(lit_155),CHKREF(lit_9)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_sum_234 = YPmet(FUNCODEREF(fun_sum_234),CHKREF(lit_255),T1,ENVNUL);
  T0 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  fun_len_235 = YPmet(FUNCODEREF(fun_len_235),CHKREF(lit_154),T0,ENVNUL);
  T4 = BOUNDP(YruntimeYlen);
  if (T4 != YPfalse) {
    T3 = CHKREF(YruntimeYlen);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_len_235;
  T2 = CALL2(1,CHKREF(YPdefine_method),T3,T5);
  YruntimeYlen = T2;
  T7 = YPsig(YPPlist(2,CHKREF(lit_155),CHKREF(lit_9)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_fnd_236 = YPmet(FUNCODEREF(fun_fnd_236),CHKREF(lit_166),T7,ENVNUL);
  T6 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_192)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_elt_237 = YPmet(FUNCODEREF(fun_elt_237),CHKREF(lit_202),T6,ENVNUL);
  T10 = BOUNDP(YruntimeYelt);
  if (T10 != YPfalse) {
    T9 = CHKREF(YruntimeYelt);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_elt_237;
  T8 = CALL2(1,CHKREF(YPdefine_method),T9,T11);
  YruntimeYelt = T8;
  T13 = YPsig(YPPlist(2,CHKREF(lit_155),CHKREF(lit_9)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_fnd_238 = YPmet(FUNCODEREF(fun_fnd_238),CHKREF(lit_166),T13,ENVNUL);
  T12 = YPsig(YPPlist(3,CHKREF(lit_185),CHKREF(lit_9),CHKREF(lit_192)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_elt_setter_239 = YPmet(FUNCODEREF(fun_elt_setter_239),CHKREF(lit_204),T12,ENVNUL);
  T16 = BOUNDP(YruntimeYelt_setter);
  if (T16 != YPfalse) {
    T15 = CHKREF(YruntimeYelt_setter);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_elt_setter_239;
  T14 = CALL2(1,CHKREF(YPdefine_method),T15,T17);
  YruntimeYelt_setter = T14;
  T18 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  fun_add_240 = YPmet(FUNCODEREF(fun_add_240),CHKREF(lit_213),T18,ENVNUL);
  T21 = BOUNDP(YruntimeYadd);
  if (T21 != YPfalse) {
    T20 = CHKREF(YruntimeYadd);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_add_240;
  T19 = CALL2(1,CHKREF(YPdefine_method),T20,T22);
  YruntimeYadd = T19;
  lit_256 = YPPsym((P)"push");
  T23 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  fun_push_241 = YPmet(FUNCODEREF(fun_push_241),CHKREF(lit_256),T23,ENVNUL);
  T26 = BOUNDP(YruntimeYpush);
  if (T26 != YPfalse) {
    T25 = CHKREF(YruntimeYpush);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_push_241;
  T24 = CALL2(1,CHKREF(YPdefine_method),T25,T27);
  YruntimeYpush = T24;
  lit_257 = YPPsym((P)"pop");
  T28 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  fun_pop_242 = YPmet(FUNCODEREF(fun_pop_242),CHKREF(lit_257),T28,ENVNUL);
  T31 = BOUNDP(YruntimeYpop);
  if (T31 != YPfalse) {
    T30 = CHKREF(YruntimeYpop);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_pop_242;
  T29 = CALL2(1,CHKREF(YPdefine_method),T30,T32);
  YruntimeYpop = T29;
  lit_258 = YPPsym((P)"rev!");
  lit_259 = YPPsym((P)"l");
  T34 = YPsig(YPPlist(2,CHKREF(lit_259),CHKREF(lit_21)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_243 = YPmet(FUNCODEREF(fun_loop_243),CHKREF(lit_101),T34,ENVNUL);
  T33 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_revX_244 = YPmet(FUNCODEREF(fun_revX_244),CHKREF(lit_258),T33,ENVNUL);
  T37 = BOUNDP(YruntimeYrevX);
  if (T37 != YPfalse) {
    T36 = CHKREF(YruntimeYrevX);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_revX_244;
  T35 = CALL2(1,CHKREF(YPdefine_method),T36,T38);
  YruntimeYrevX = T35;
  lit_260 = YPPsym((P)"assq");
  T39 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_259)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_assq_245 = YPmet(FUNCODEREF(fun_assq_245),CHKREF(lit_260),T39,ENVNUL);
  T42 = BOUNDP(YruntimeYassq);
  if (T42 != YPfalse) {
    T41 = CHKREF(YruntimeYassq);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_assq_245;
  T40 = CALL2(1,CHKREF(YPdefine_method),T41,T43);
  YruntimeYassq = T40;
  lit_261 = YPPsym((P)"assqn");
  T44 = YPsig(YPPlist(3,CHKREF(lit_9),CHKREF(lit_259),CHKREF(lit_216)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_assqn_246 = YPmet(FUNCODEREF(fun_assqn_246),CHKREF(lit_261),T44,ENVNUL);
  T47 = BOUNDP(YruntimeYassqn);
  if (T47 != YPfalse) {
    T46 = CHKREF(YruntimeYassqn);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_assqn_246;
  T45 = CALL2(1,CHKREF(YPdefine_method),T46,T48);
  YruntimeYassqn = T45;
  lit_262 = YPPsym((P)"px");
  T50 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_262)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_fnd_247 = YPmet(FUNCODEREF(fun_fnd_247),CHKREF(lit_166),T50,ENVNUL);
  T49 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_last_248 = YPmet(FUNCODEREF(fun_last_248),CHKREF(lit_212),T49,ENVNUL);
  T53 = BOUNDP(YruntimeYlast);
  if (T53 != YPfalse) {
    T52 = CHKREF(YruntimeYlast);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_last_248;
  T51 = CALL2(1,CHKREF(YPdefine_method),T52,T54);
  YruntimeYlast = T51;
  lit_263 = YPPsym((P)"ini-state");
  T55 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_ini_state_249 = YPmet(FUNCODEREF(fun_ini_state_249),CHKREF(lit_263),T55,ENVNUL);
  T58 = BOUNDP(YruntimeYini_state);
  if (T58 != YPfalse) {
    T57 = CHKREF(YruntimeYini_state);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_ini_state_249;
  T56 = CALL2(1,CHKREF(YPdefine_method),T57,T59);
  YruntimeYini_state = T56;
  lit_264 = YPPsym((P)"fin-state?");
  T60 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_167)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_fin_stateQ_250 = YPmet(FUNCODEREF(fun_fin_stateQ_250),CHKREF(lit_264),T60,ENVNUL);
  T63 = BOUNDP(YruntimeYfin_stateQ);
  if (T63 != YPfalse) {
    T62 = CHKREF(YruntimeYfin_stateQ);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_fin_stateQ_250;
  T61 = CALL2(1,CHKREF(YPdefine_method),T62,T64);
  YruntimeYfin_stateQ = T61;
  lit_265 = YPPsym((P)"nxt-state");
  T65 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_167)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  fun_nxt_state_251 = YPmet(FUNCODEREF(fun_nxt_state_251),CHKREF(lit_265),T65,ENVNUL);
  T68 = BOUNDP(YruntimeYnxt_state);
  if (T68 != YPfalse) {
    T67 = CHKREF(YruntimeYnxt_state);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_nxt_state_251;
  T66 = CALL2(1,CHKREF(YPdefine_method),T67,T69);
  YruntimeYnxt_state = T66;
  lit_266 = YPPsym((P)"now-elt");
  T70 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_167)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_now_elt_252 = YPmet(FUNCODEREF(fun_now_elt_252),CHKREF(lit_266),T70,ENVNUL);
  T73 = BOUNDP(YruntimeYnow_elt);
  if (T73 != YPfalse) {
    T72 = CHKREF(YruntimeYnow_elt);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_now_elt_252;
  T71 = CALL2(1,CHKREF(YPdefine_method),T72,T74);
  YruntimeYnow_elt = T71;
  lit_267 = YPPsym((P)"now-elt-setter");
  T75 = YPsig(YPPlist(3,CHKREF(lit_185),CHKREF(lit_57),CHKREF(lit_167)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_now_elt_setter_253 = YPmet(FUNCODEREF(fun_now_elt_setter_253),CHKREF(lit_267),T75,ENVNUL);
  T78 = BOUNDP(YruntimeYnow_elt_setter);
  if (T78 != YPfalse) {
    T77 = CHKREF(YruntimeYnow_elt_setter);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_now_elt_setter_253;
  T76 = CALL2(1,CHKREF(YPdefine_method),T77,T79);
  YruntimeYnow_elt_setter = T76;
  lit_268 = YPPsym((P)"now-key");
  T81 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_58)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_fnd_254 = YPmet(FUNCODEREF(fun_fnd_254),CHKREF(lit_166),T81,ENVNUL);
  T80 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_167)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  fun_now_key_255 = YPmet(FUNCODEREF(fun_now_key_255),CHKREF(lit_268),T80,ENVNUL);
  T84 = BOUNDP(YruntimeYnow_key);
  if (T84 != YPfalse) {
    T83 = CHKREF(YruntimeYnow_key);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_now_key_255;
  T82 = CALL2(1,CHKREF(YPdefine_method),T83,T85);
  YruntimeYnow_key = T82;
  lit_269 = YPPsym((P)"copy-state");
  T86 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_167)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  fun_copy_state_256 = YPmet(FUNCODEREF(fun_copy_state_256),CHKREF(lit_269),T86,ENVNUL);
  T89 = BOUNDP(YruntimeYcopy_state);
  if (T89 != YPfalse) {
    T88 = CHKREF(YruntimeYcopy_state);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_copy_state_256;
  T87 = CALL2(1,CHKREF(YPdefine_method),T88,T90);
  YruntimeYcopy_state = T87;
  YmacrosYtup = CHKREF(Ylst);
  T91 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YLflatG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  fun_ini_state_257 = YPmet(FUNCODEREF(fun_ini_state_257),CHKREF(lit_263),T91,ENVNUL);
  T94 = BOUNDP(YruntimeYini_state);
  if (T94 != YPfalse) {
    T93 = CHKREF(YruntimeYini_state);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_ini_state_257;
  T92 = CALL2(1,CHKREF(YPdefine_method),T93,T95);
  YruntimeYini_state = T92;
  T96 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_167)),YPPlist(2,CHKREF(YLflatG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_fin_stateQ_258 = YPmet(FUNCODEREF(fun_fin_stateQ_258),CHKREF(lit_264),T96,ENVNUL);
  T99 = BOUNDP(YruntimeYfin_stateQ);
  if (T99 != YPfalse) {
    T98 = CHKREF(YruntimeYfin_stateQ);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_fin_stateQ_258;
  T97 = CALL2(1,CHKREF(YPdefine_method),T98,T100);
  YruntimeYfin_stateQ = T97;
  T101 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_167)),YPPlist(2,CHKREF(YLflatG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  fun_nxt_state_259 = YPmet(FUNCODEREF(fun_nxt_state_259),CHKREF(lit_265),T101,ENVNUL);
  T104 = BOUNDP(YruntimeYnxt_state);
  if (T104 != YPfalse) {
    T103 = CHKREF(YruntimeYnxt_state);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_nxt_state_259;
  T102 = CALL2(1,CHKREF(YPdefine_method),T103,T105);
  YruntimeYnxt_state = T102;
  T106 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_167)),YPPlist(2,CHKREF(YLflatG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_now_elt_260 = YPmet(FUNCODEREF(fun_now_elt_260),CHKREF(lit_266),T106,ENVNUL);
  T109 = BOUNDP(YruntimeYnow_elt);
  if (T109 != YPfalse) {
    T108 = CHKREF(YruntimeYnow_elt);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_now_elt_260;
  T107 = CALL2(1,CHKREF(YPdefine_method),T108,T110);
  YruntimeYnow_elt = T107;
  T111 = YPsig(YPPlist(3,CHKREF(lit_185),CHKREF(lit_58),CHKREF(lit_167)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLflatG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_now_elt_setter_261 = YPmet(FUNCODEREF(fun_now_elt_setter_261),CHKREF(lit_267),T111,ENVNUL);
  T114 = BOUNDP(YruntimeYnow_elt_setter);
  if (T114 != YPfalse) {
    T113 = CHKREF(YruntimeYnow_elt_setter);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_now_elt_setter_261;
  T112 = CALL2(1,CHKREF(YPdefine_method),T113,T115);
  YruntimeYnow_elt_setter = T112;
  T116 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_167)),YPPlist(2,CHKREF(YLflatG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  fun_now_key_262 = YPmet(FUNCODEREF(fun_now_key_262),CHKREF(lit_268),T116,ENVNUL);
  T119 = BOUNDP(YruntimeYnow_key);
  if (T119 != YPfalse) {
    T118 = CHKREF(YruntimeYnow_key);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_now_key_262;
  T117 = CALL2(1,CHKREF(YPdefine_method),T118,T120);
  YruntimeYnow_key = T117;
  T121 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_167)),YPPlist(2,CHKREF(YLflatG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  fun_copy_state_263 = YPmet(FUNCODEREF(fun_copy_state_263),CHKREF(lit_269),T121,ENVNUL);
  T124 = BOUNDP(YruntimeYcopy_state);
  if (T124 != YPfalse) {
    T123 = CHKREF(YruntimeYcopy_state);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_copy_state_263;
  T122 = CALL2(1,CHKREF(YPdefine_method),T123,T125);
  YruntimeYcopy_state = T122;
  T126 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLoptsG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  fun_len_264 = YPmet(FUNCODEREF(fun_len_264),CHKREF(lit_154),T126,ENVNUL);
  T129 = BOUNDP(YruntimeYlen);
  if (T129 != YPfalse) {
    T128 = CHKREF(YruntimeYlen);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_len_264;
  T127 = CALL2(1,CHKREF(YPdefine_method),T128,T130);
  YruntimeYlen = T127;
  lit_270 = YPPsym((P)"low-elt");
  T131 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_5)),YPPlist(2,CHKREF(YLoptsG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_low_elt_265 = YPmet(FUNCODEREF(fun_low_elt_265),CHKREF(lit_270),T131,ENVNUL);
  T134 = BOUNDP(YruntimeYlow_elt);
  if (T134 != YPfalse) {
    T133 = CHKREF(YruntimeYlow_elt);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_low_elt_265;
  T132 = CALL2(1,CHKREF(YPdefine_method),T133,T135);
  YruntimeYlow_elt = T132;
  T136 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_5)),YPPlist(2,CHKREF(YLoptsG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_elt_266 = YPmet(FUNCODEREF(fun_elt_266),CHKREF(lit_202),T136,ENVNUL);
  T139 = BOUNDP(YruntimeYelt);
  if (T139 != YPfalse) {
    T138 = CHKREF(YruntimeYelt);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_elt_266;
  T137 = CALL2(1,CHKREF(YPdefine_method),T138,T140);
  YruntimeYelt = T137;
  lit_271 = YPsb((P)"$$opts(");
  lit_272 = YPsb((P)")");
  T141 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLoptsG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_to_str_267 = YPmet(FUNCODEREF(fun_to_str_267),CHKREF(lit_37),T141,ENVNUL);
  T144 = BOUNDP(YruntimeYto_str);
  if (T144 != YPfalse) {
    T143 = CHKREF(YruntimeYto_str);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_to_str_267;
  T142 = CALL2(1,CHKREF(YPdefine_method),T143,T145);
  YruntimeYto_str = T142;
  T147 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YLvecG));
  T146 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,T147),YPfalse,YPint((P)1),CHKREF(YLvecG),Ynil);
  fun_empty_268 = YPmet(FUNCODEREF(fun_empty_268),CHKREF(lit_139),T146,ENVNUL);
  T150 = BOUNDP(YruntimeYempty);
  if (T150 != YPfalse) {
    T149 = CHKREF(YruntimeYempty);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_empty_268;
  T148 = CALL2(1,CHKREF(YPdefine_method),T149,T151);
  YruntimeYempty = T148;
  lit_273 = YPPsym((P)"vec");
  T152 = YPsig(YPPlist(1,CHKREF(lit_137)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG),Ynil);
  YruntimeYvec = YPmet(FUNCODEREF(YruntimeYvec),CHKREF(lit_273),T152,ENVNUL);
  T153 = YruntimeYvec;
  YruntimeYvec = T153;
  T155 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YLvecG));
  T154 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_9)),YPPlist(2,T155,CHKREF(YLvecG)),YPfalse,YPint((P)2),CHKREF(YLvecG),Ynil);
  fun_as_270 = YPmet(FUNCODEREF(fun_as_270),CHKREF(lit_44),T154,ENVNUL);
  T158 = BOUNDP(YruntimeYas);
  if (T158 != YPfalse) {
    T157 = CHKREF(YruntimeYas);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_as_270;
  T156 = CALL2(1,CHKREF(YPdefine_method),T157,T159);
  YruntimeYas = T156;
  T161 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YLvecG));
  T160 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,T161,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLvecG),Ynil);
  fun_fab_271 = YPmet(FUNCODEREF(fun_fab_271),CHKREF(lit_146),T160,ENVNUL);
  T164 = BOUNDP(YruntimeYfab);
  if (T164 != YPfalse) {
    T163 = CHKREF(YruntimeYfab);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_fab_271;
  T162 = CALL2(1,CHKREF(YPdefine_method),T163,T165);
  YruntimeYfab = T162;
  T166 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLvecG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  fun_len_272 = YPmet(FUNCODEREF(fun_len_272),CHKREF(lit_154),T166,ENVNUL);
  T169 = BOUNDP(YruntimeYlen);
  if (T169 != YPfalse) {
    T168 = CHKREF(YruntimeYlen);
  } else {
    T168 = YPfalse;
  }
  T170 = fun_len_272;
  T167 = CALL2(1,CHKREF(YPdefine_method),T168,T170);
  YruntimeYlen = T167;
  T171 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_5)),YPPlist(2,CHKREF(YLvecG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_low_elt_273 = YPmet(FUNCODEREF(fun_low_elt_273),CHKREF(lit_270),T171,ENVNUL);
  T174 = BOUNDP(YruntimeYlow_elt);
  if (T174 != YPfalse) {
    T173 = CHKREF(YruntimeYlow_elt);
  } else {
    T173 = YPfalse;
  }
  T175 = fun_low_elt_273;
  T172 = CALL2(1,CHKREF(YPdefine_method),T173,T175);
  YruntimeYlow_elt = T172;
  lit_274 = YPPsym((P)"low-elt-setter");
  T176 = YPsig(YPPlist(3,CHKREF(lit_185),CHKREF(lit_9),CHKREF(lit_5)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLvecG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_low_elt_setter_274 = YPmet(FUNCODEREF(fun_low_elt_setter_274),CHKREF(lit_274),T176,ENVNUL);
  T179 = BOUNDP(YruntimeYlow_elt_setter);
  if (T179 != YPfalse) {
    T178 = CHKREF(YruntimeYlow_elt_setter);
  } else {
    T178 = YPfalse;
  }
  T180 = fun_low_elt_setter_274;
  T177 = CALL2(1,CHKREF(YPdefine_method),T178,T180);
  YruntimeYlow_elt_setter = T177;
  T181 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_5)),YPPlist(2,CHKREF(YLvecG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_elt_275 = YPmet(FUNCODEREF(fun_elt_275),CHKREF(lit_202),T181,ENVNUL);
  T184 = BOUNDP(YruntimeYelt);
  if (T184 != YPfalse) {
    T183 = CHKREF(YruntimeYelt);
  } else {
    T183 = YPfalse;
  }
  T185 = fun_elt_275;
  T182 = CALL2(1,CHKREF(YPdefine_method),T183,T185);
  YruntimeYelt = T182;
  T186 = YPsig(YPPlist(3,CHKREF(lit_185),CHKREF(lit_9),CHKREF(lit_5)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLvecG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_elt_setter_276 = YPmet(FUNCODEREF(fun_elt_setter_276),CHKREF(lit_204),T186,ENVNUL);
  T189 = BOUNDP(YruntimeYelt_setter);
  if (T189 != YPfalse) {
    T188 = CHKREF(YruntimeYelt_setter);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_elt_setter_276;
  T187 = CALL2(1,CHKREF(YPdefine_method),T188,T190);
  YruntimeYelt_setter = T187;
  lit_275 = YPsb((P)"#(");
  lit_276 = YPsb((P)")");
  T191 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLvecG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_to_str_277 = YPmet(FUNCODEREF(fun_to_str_277),CHKREF(lit_37),T191,ENVNUL);
  T194 = BOUNDP(YruntimeYto_str);
  if (T194 != YPfalse) {
    T193 = CHKREF(YruntimeYto_str);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_to_str_277;
  T192 = CALL2(1,CHKREF(YPdefine_method),T193,T195);
  YruntimeYto_str = T192;
  lit_277 = YPPsym((P)"<buf>");
  T197 = (P)YPpair(CHKREF(YLflatG),Ynil);
  T196 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_277),T197);
  YruntimeYLbufG = T196;
  lit_278 = YPPsym((P)"buf-len");
  T198 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLbufG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_buf_len_278 = YPmet(FUNCODEREF(fun_buf_len_278),CHKREF(lit_278),T198,ENVNUL);
  T201 = BOUNDP(YruntimeYbuf_len);
  if (T201 != YPfalse) {
    T200 = CHKREF(YruntimeYbuf_len);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_buf_len_278;
  T199 = CALL2(1,CHKREF(YPdefine_method),T200,T202);
  YruntimeYbuf_len = T199;
  lit_279 = YPPsym((P)"buf-len-setter");
  T203 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLbufG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_buf_len_setter_279 = YPmet(FUNCODEREF(fun_buf_len_setter_279),CHKREF(lit_279),T203,ENVNUL);
  T206 = BOUNDP(YruntimeYbuf_len_setter);
  if (T206 != YPfalse) {
    T205 = CHKREF(YruntimeYbuf_len_setter);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_buf_len_setter_279;
  T204 = CALL2(1,CHKREF(YPdefine_method),T205,T207);
  YruntimeYbuf_len_setter = T204;
  T208 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_280 = YPmet(FUNCODEREF(fun_280),YPfalse,T208,ENVNUL);
  T209 = fun_280;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLbufG),CHKREF(YruntimeYbuf_len),CHKREF(YruntimeYbuf_len_setter),CHKREF(YLintG),T209);
  lit_280 = YPPsym((P)"buf-dat");
  T210 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLbufG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_buf_dat_281 = YPmet(FUNCODEREF(fun_buf_dat_281),CHKREF(lit_280),T210,ENVNUL);
  T213 = BOUNDP(YruntimeYbuf_dat);
  if (T213 != YPfalse) {
    T212 = CHKREF(YruntimeYbuf_dat);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_buf_dat_281;
  T211 = CALL2(1,CHKREF(YPdefine_method),T212,T214);
  YruntimeYbuf_dat = T211;
  lit_281 = YPPsym((P)"buf-dat-setter");
  T215 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLvecG),CHKREF(YruntimeYLbufG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_buf_dat_setter_282 = YPmet(FUNCODEREF(fun_buf_dat_setter_282),CHKREF(lit_281),T215,ENVNUL);
  T218 = BOUNDP(YruntimeYbuf_dat_setter);
  if (T218 != YPfalse) {
    T217 = CHKREF(YruntimeYbuf_dat_setter);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_buf_dat_setter_282;
  T216 = CALL2(1,CHKREF(YPdefine_method),T217,T219);
  YruntimeYbuf_dat_setter = T216;
  lit_282 = CALLN(1, YruntimeYvec, 0);
  T220 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_283 = YPmet(FUNCODEREF(fun_283),YPfalse,T220,ENVNUL);
  T221 = fun_283;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLbufG),CHKREF(YruntimeYbuf_dat),CHKREF(YruntimeYbuf_dat_setter),CHKREF(YLvecG),T221);
  T223 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YruntimeYLbufG));
  T222 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,T223),YPfalse,YPint((P)1),CHKREF(YruntimeYLbufG),Ynil);
  fun_empty_284 = YPmet(FUNCODEREF(fun_empty_284),CHKREF(lit_139),T222,ENVNUL);
  T226 = BOUNDP(YruntimeYempty);
  if (T226 != YPfalse) {
    T225 = CHKREF(YruntimeYempty);
  } else {
    T225 = YPfalse;
  }
  T227 = fun_empty_284;
  T224 = CALL2(1,CHKREF(YPdefine_method),T225,T227);
  YruntimeYempty = T224;
  T229 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YruntimeYLbufG));
  T228 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_7)),YPPlist(2,T229,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLbufG),Ynil);
  fun_fab_285 = YPmet(FUNCODEREF(fun_fab_285),CHKREF(lit_146),T228,ENVNUL);
  T232 = BOUNDP(YruntimeYfab);
  if (T232 != YPfalse) {
    T231 = CHKREF(YruntimeYfab);
  } else {
    T231 = YPfalse;
  }
  T233 = fun_fab_285;
  T230 = CALL2(1,CHKREF(YPdefine_method),T231,T233);
  YruntimeYfab = T230;
  lit_283 = YPPsym((P)"buf");
  lit_284 = YPPsym((P)"elts");
  T234 = YPsig(YPPlist(1,CHKREF(lit_284)),Ynil,YPtrue,YPint((P)0),CHKREF(YruntimeYLbufG),Ynil);
  fun_buf_286 = YPmet(FUNCODEREF(fun_buf_286),CHKREF(lit_283),T234,ENVNUL);
  T237 = BOUNDP(YruntimeYbuf);
  if (T237 != YPfalse) {
    T236 = CHKREF(YruntimeYbuf);
  } else {
    T236 = YPfalse;
  }
  T238 = fun_buf_286;
  T235 = CALL2(1,CHKREF(YPdefine_method),T236,T238);
  YruntimeYbuf = T235;
  T239 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YruntimeYLbufG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  fun_len_287 = YPmet(FUNCODEREF(fun_len_287),CHKREF(lit_154),T239,ENVNUL);
  T242 = BOUNDP(YruntimeYlen);
  if (T242 != YPfalse) {
    T241 = CHKREF(YruntimeYlen);
  } else {
    T241 = YPfalse;
  }
  T243 = fun_len_287;
  T240 = CALL2(1,CHKREF(YPdefine_method),T241,T243);
  YruntimeYlen = T240;
  lit_285 = YPPsym((P)"len-setter");
  lit_286 = YPPsym((P)"new-len");
  T245 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_fill_288 = YPmet(FUNCODEREF(fun_fill_288),CHKREF(lit_161),T245,ENVNUL);
  T244 = YPsig(YPPlist(2,CHKREF(lit_286),CHKREF(lit_58)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLbufG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_len_setter_289 = YPmet(FUNCODEREF(fun_len_setter_289),CHKREF(lit_285),T244,ENVNUL);
  T248 = BOUNDP(YruntimeYlen_setter);
  if (T248 != YPfalse) {
    T247 = CHKREF(YruntimeYlen_setter);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_len_setter_289;
  T246 = CALL2(1,CHKREF(YPdefine_method),T247,T249);
  YruntimeYlen_setter = T246;
  T250 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_5)),YPPlist(2,CHKREF(YruntimeYLbufG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_low_elt_290 = YPmet(FUNCODEREF(fun_low_elt_290),CHKREF(lit_270),T250,ENVNUL);
  T253 = BOUNDP(YruntimeYlow_elt);
  if (T253 != YPfalse) {
    T252 = CHKREF(YruntimeYlow_elt);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_low_elt_290;
  T251 = CALL2(1,CHKREF(YPdefine_method),T252,T254);
  YruntimeYlow_elt = T251;
  T255 = YPsig(YPPlist(3,CHKREF(lit_185),CHKREF(lit_9),CHKREF(lit_5)),YPPlist(3,CHKREF(YLanyG),CHKREF(YruntimeYLbufG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_low_elt_setter_291 = YPmet(FUNCODEREF(fun_low_elt_setter_291),CHKREF(lit_274),T255,ENVNUL);
  T258 = BOUNDP(YruntimeYlow_elt_setter);
  if (T258 != YPfalse) {
    T257 = CHKREF(YruntimeYlow_elt_setter);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_low_elt_setter_291;
  T256 = CALL2(1,CHKREF(YPdefine_method),T257,T259);
  YruntimeYlow_elt_setter = T256;
  T260 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_5)),YPPlist(2,CHKREF(YruntimeYLbufG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_elt_292 = YPmet(FUNCODEREF(fun_elt_292),CHKREF(lit_202),T260,ENVNUL);
  T263 = BOUNDP(YruntimeYelt);
  if (T263 != YPfalse) {
    T262 = CHKREF(YruntimeYelt);
  } else {
    T262 = YPfalse;
  }
  T264 = fun_elt_292;
  T261 = CALL2(1,CHKREF(YPdefine_method),T262,T264);
  YruntimeYelt = T261;
  T265 = YPsig(YPPlist(3,CHKREF(lit_185),CHKREF(lit_58),CHKREF(lit_5)),YPPlist(3,CHKREF(YLanyG),CHKREF(YruntimeYLbufG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_elt_setter_293 = YPmet(FUNCODEREF(fun_elt_setter_293),CHKREF(lit_204),T265,ENVNUL);
  T268 = BOUNDP(YruntimeYelt_setter);
  if (T268 != YPfalse) {
    T267 = CHKREF(YruntimeYelt_setter);
  } else {
    T267 = YPfalse;
  }
  T269 = fun_elt_setter_293;
  T266 = CALL2(1,CHKREF(YPdefine_method),T267,T269);
  YruntimeYelt_setter = T266;
  T270 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_9)),YPPlist(2,CHKREF(YruntimeYLbufG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLbufG),Ynil);
  fun_addX_294 = YPmet(FUNCODEREF(fun_addX_294),CHKREF(lit_215),T270,ENVNUL);
  T273 = BOUNDP(YruntimeYaddX);
  if (T273 != YPfalse) {
    T272 = CHKREF(YruntimeYaddX);
  } else {
    T272 = YPfalse;
  }
  T274 = fun_addX_294;
  T271 = CALL2(1,CHKREF(YPdefine_method),T272,T274);
  YruntimeYaddX = T271;
  lit_287 = YPPsym((P)"push-last!");
  T275 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_9)),YPPlist(2,CHKREF(YruntimeYLbufG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLbufG),Ynil);
  fun_push_lastX_295 = YPmet(FUNCODEREF(fun_push_lastX_295),CHKREF(lit_287),T275,ENVNUL);
  T278 = BOUNDP(YruntimeYpush_lastX);
  if (T278 != YPfalse) {
    T277 = CHKREF(YruntimeYpush_lastX);
  } else {
    T277 = YPfalse;
  }
  T279 = fun_push_lastX_295;
  T276 = CALL2(1,CHKREF(YPdefine_method),T277,T279);
  YruntimeYpush_lastX = T276;
  lit_288 = YPPsym((P)"pop-last!");
  T280 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YruntimeYLbufG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_pop_lastX_296 = YPmet(FUNCODEREF(fun_pop_lastX_296),CHKREF(lit_288),T280,ENVNUL);
  T283 = BOUNDP(YruntimeYpop_lastX);
  if (T283 != YPfalse) {
    T282 = CHKREF(YruntimeYpop_lastX);
  } else {
    T282 = YPfalse;
  }
  T284 = fun_pop_lastX_296;
  T281 = CALL2(1,CHKREF(YPdefine_method),T282,T284);
  YruntimeYpop_lastX = T281;
  lit_289 = YPPsym((P)"x-1212");
  lit_290 = YPPsym((P)"x-1210");
  lit_291 = YPPsym((P)"x-1215");
  lit_292 = YPPsym((P)"x-1213");
  T287 = YPsig(YPPlist(1,CHKREF(lit_292)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1215_297 = YPmet(FUNCODEREF(fun_x_1215_297),CHKREF(lit_291),T287,ENVNUL);
  T286 = YPsig(YPPlist(1,CHKREF(lit_290)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_x_1212_298 = YPmet(FUNCODEREF(fun_x_1212_298),CHKREF(lit_289),T286,ENVNUL);
  T285 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_236)),YPPlist(1,CHKREF(YruntimeYLbufG)),YPtrue,YPint((P)1),CHKREF(YruntimeYLbufG),Ynil);
  fun_catX_299 = YPmet(FUNCODEREF(fun_catX_299),CHKREF(lit_235),T285,ENVNUL);
  T290 = BOUNDP(YruntimeYcatX);
  if (T290 != YPfalse) {
    T289 = CHKREF(YruntimeYcatX);
  } else {
    T289 = YPfalse;
  }
  T291 = fun_catX_299;
  T288 = CALL2(1,CHKREF(YPdefine_method),T289,T291);
  YruntimeYcatX = T288;
  lit_293 = YPPsym((P)"<range>");
  T293 = (P)YPpair(CHKREF(YLseqG),Ynil);
  T292 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_293),T293);
  YruntimeYLrangeG = T292;
  lit_294 = YPPsym((P)"range-from");
  T294 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_range_from_300 = YPmet(FUNCODEREF(fun_range_from_300),CHKREF(lit_294),T294,ENVNUL);
  T297 = BOUNDP(YruntimeYrange_from);
  if (T297 != YPfalse) {
    T296 = CHKREF(YruntimeYrange_from);
  } else {
    T296 = YPfalse;
  }
  T298 = fun_range_from_300;
  T295 = CALL2(1,CHKREF(YPdefine_method),T296,T298);
  YruntimeYrange_from = T295;
  lit_295 = YPPsym((P)"range-from-setter");
  T299 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLnumG),CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_range_from_setter_301 = YPmet(FUNCODEREF(fun_range_from_setter_301),CHKREF(lit_295),T299,ENVNUL);
  T302 = BOUNDP(YruntimeYrange_from_setter);
  if (T302 != YPfalse) {
    T301 = CHKREF(YruntimeYrange_from_setter);
  } else {
    T301 = YPfalse;
  }
  T303 = fun_range_from_setter_301;
  T300 = CALL2(1,CHKREF(YPdefine_method),T301,T303);
  YruntimeYrange_from_setter = T300;
  T306 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T305 = fun_302 = YPmet(FUNCODEREF(fun_302),YPfalse,T306,ENVNUL);
  T308 = fun_302;
  T307 = CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLrangeG),CHKREF(YruntimeYrange_from),CHKREF(YruntimeYrange_from_setter),CHKREF(YLnumG),T308);
  T304 = T307;
  return T304;
}

P YruntimeY___main_4___() {
  P initF1068;
  P ascii_charsF1067;
  P T290,T289,T288,T287,T286,T285,T284,T283,T282,T281,T280,T279,T278,T277,T276,T275;
  P T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260,T259;
  P T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244,T243;
  P T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227;
  P T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211;
  P T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195;
  P T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179;
  P T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163;
  P T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147;
  P T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131;
  P T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115;
  P T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99;
  P T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83;
  P T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
loop:
  lit_296 = YPPsym((P)"range-to");
  T0 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_range_to_303 = YPmet(FUNCODEREF(fun_range_to_303),CHKREF(lit_296),T0,ENVNUL);
  T3 = BOUNDP(YruntimeYrange_to);
  if (T3 != YPfalse) {
    T2 = CHKREF(YruntimeYrange_to);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_range_to_303;
  T1 = CALL2(1,CHKREF(YPdefine_method),T2,T4);
  YruntimeYrange_to = T1;
  lit_297 = YPPsym((P)"range-to-setter");
  T5 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLnumG),CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_range_to_setter_304 = YPmet(FUNCODEREF(fun_range_to_setter_304),CHKREF(lit_297),T5,ENVNUL);
  T8 = BOUNDP(YruntimeYrange_to_setter);
  if (T8 != YPfalse) {
    T7 = CHKREF(YruntimeYrange_to_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_range_to_setter_304;
  T6 = CALL2(1,CHKREF(YPdefine_method),T7,T9);
  YruntimeYrange_to_setter = T6;
  T10 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_305 = YPmet(FUNCODEREF(fun_305),YPfalse,T10,ENVNUL);
  T11 = fun_305;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLrangeG),CHKREF(YruntimeYrange_to),CHKREF(YruntimeYrange_to_setter),CHKREF(YLnumG),T11);
  lit_298 = YPPsym((P)"range-below");
  T12 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_range_below_306 = YPmet(FUNCODEREF(fun_range_below_306),CHKREF(lit_298),T12,ENVNUL);
  T15 = BOUNDP(YruntimeYrange_below);
  if (T15 != YPfalse) {
    T14 = CHKREF(YruntimeYrange_below);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_range_below_306;
  T13 = CALL2(1,CHKREF(YPdefine_method),T14,T16);
  YruntimeYrange_below = T13;
  lit_299 = YPPsym((P)"range-below-setter");
  T17 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLnumG),CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_range_below_setter_307 = YPmet(FUNCODEREF(fun_range_below_setter_307),CHKREF(lit_299),T17,ENVNUL);
  T20 = BOUNDP(YruntimeYrange_below_setter);
  if (T20 != YPfalse) {
    T19 = CHKREF(YruntimeYrange_below_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_range_below_setter_307;
  T18 = CALL2(1,CHKREF(YPdefine_method),T19,T21);
  YruntimeYrange_below_setter = T18;
  T22 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_308 = YPmet(FUNCODEREF(fun_308),YPfalse,T22,ENVNUL);
  T23 = fun_308;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLrangeG),CHKREF(YruntimeYrange_below),CHKREF(YruntimeYrange_below_setter),CHKREF(YLnumG),T23);
  lit_300 = YPPsym((P)"range-above");
  T24 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_range_above_309 = YPmet(FUNCODEREF(fun_range_above_309),CHKREF(lit_300),T24,ENVNUL);
  T27 = BOUNDP(YruntimeYrange_above);
  if (T27 != YPfalse) {
    T26 = CHKREF(YruntimeYrange_above);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_range_above_309;
  T25 = CALL2(1,CHKREF(YPdefine_method),T26,T28);
  YruntimeYrange_above = T25;
  lit_301 = YPPsym((P)"range-above-setter");
  T29 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLnumG),CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_range_above_setter_310 = YPmet(FUNCODEREF(fun_range_above_setter_310),CHKREF(lit_301),T29,ENVNUL);
  T32 = BOUNDP(YruntimeYrange_above_setter);
  if (T32 != YPfalse) {
    T31 = CHKREF(YruntimeYrange_above_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_range_above_setter_310;
  T30 = CALL2(1,CHKREF(YPdefine_method),T31,T33);
  YruntimeYrange_above_setter = T30;
  T34 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_311 = YPmet(FUNCODEREF(fun_311),YPfalse,T34,ENVNUL);
  T35 = fun_311;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLrangeG),CHKREF(YruntimeYrange_above),CHKREF(YruntimeYrange_above_setter),CHKREF(YLnumG),T35);
  lit_302 = YPPsym((P)"range-by");
  T36 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_range_by_312 = YPmet(FUNCODEREF(fun_range_by_312),CHKREF(lit_302),T36,ENVNUL);
  T39 = BOUNDP(YruntimeYrange_by);
  if (T39 != YPfalse) {
    T38 = CHKREF(YruntimeYrange_by);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_range_by_312;
  T37 = CALL2(1,CHKREF(YPdefine_method),T38,T40);
  YruntimeYrange_by = T37;
  lit_303 = YPPsym((P)"range-by-setter");
  T41 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLnumG),CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_range_by_setter_313 = YPmet(FUNCODEREF(fun_range_by_setter_313),CHKREF(lit_303),T41,ENVNUL);
  T44 = BOUNDP(YruntimeYrange_by_setter);
  if (T44 != YPfalse) {
    T43 = CHKREF(YruntimeYrange_by_setter);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_range_by_setter_313;
  T42 = CALL2(1,CHKREF(YPdefine_method),T43,T45);
  YruntimeYrange_by_setter = T42;
  T46 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_314 = YPmet(FUNCODEREF(fun_314),YPfalse,T46,ENVNUL);
  T47 = fun_314;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLrangeG),CHKREF(YruntimeYrange_by),CHKREF(YruntimeYrange_by_setter),CHKREF(YLnumG),T47);
  T49 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YruntimeYLrangeG));
  T48 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_7)),YPPlist(2,T49,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLrangeG),Ynil);
  fun_fab_315 = YPmet(FUNCODEREF(fun_fab_315),CHKREF(lit_146),T48,ENVNUL);
  T52 = BOUNDP(YruntimeYfab);
  if (T52 != YPfalse) {
    T51 = CHKREF(YruntimeYfab);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_fab_315;
  T50 = CALL2(1,CHKREF(YPdefine_method),T51,T53);
  YruntimeYfab = T50;
  T54 = YPsig(YPPlist(1,CHKREF(lit_219)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YruntimeYLrangeG),Ynil);
  fun_from_316 = YPmet(FUNCODEREF(fun_from_316),CHKREF(lit_219),T54,ENVNUL);
  T57 = BOUNDP(YruntimeYfrom);
  if (T57 != YPfalse) {
    T56 = CHKREF(YruntimeYfrom);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_from_316;
  T55 = CALL2(1,CHKREF(YPdefine_method),T56,T58);
  YruntimeYfrom = T55;
  lit_304 = YPPsym((P)"from-by");
  lit_305 = YPPsym((P)"by");
  T59 = YPsig(YPPlist(2,CHKREF(lit_219),CHKREF(lit_305)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLrangeG),Ynil);
  fun_from_by_317 = YPmet(FUNCODEREF(fun_from_by_317),CHKREF(lit_304),T59,ENVNUL);
  T62 = BOUNDP(YruntimeYfrom_by);
  if (T62 != YPfalse) {
    T61 = CHKREF(YruntimeYfrom_by);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_from_by_317;
  T60 = CALL2(1,CHKREF(YPdefine_method),T61,T63);
  YruntimeYfrom_by = T60;
  lit_306 = YPPsym((P)"from-to");
  lit_307 = YPPsym((P)"to");
  T64 = YPsig(YPPlist(2,CHKREF(lit_219),CHKREF(lit_307)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLrangeG),Ynil);
  fun_from_to_318 = YPmet(FUNCODEREF(fun_from_to_318),CHKREF(lit_306),T64,ENVNUL);
  T67 = BOUNDP(YruntimeYfrom_to);
  if (T67 != YPfalse) {
    T66 = CHKREF(YruntimeYfrom_to);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_from_to_318;
  T65 = CALL2(1,CHKREF(YPdefine_method),T66,T68);
  YruntimeYfrom_to = T65;
  lit_308 = YPPsym((P)"from-to-by");
  T69 = YPsig(YPPlist(3,CHKREF(lit_219),CHKREF(lit_307),CHKREF(lit_305)),YPPlist(3,CHKREF(YLnumG),CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)3),CHKREF(YruntimeYLrangeG),Ynil);
  fun_from_to_by_319 = YPmet(FUNCODEREF(fun_from_to_by_319),CHKREF(lit_308),T69,ENVNUL);
  T72 = BOUNDP(YruntimeYfrom_to_by);
  if (T72 != YPfalse) {
    T71 = CHKREF(YruntimeYfrom_to_by);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_from_to_by_319;
  T70 = CALL2(1,CHKREF(YPdefine_method),T71,T73);
  YruntimeYfrom_to_by = T70;
  lit_309 = YPPsym((P)"from-below");
  T74 = YPsig(YPPlist(2,CHKREF(lit_219),CHKREF(lit_220)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLrangeG),Ynil);
  fun_from_below_320 = YPmet(FUNCODEREF(fun_from_below_320),CHKREF(lit_309),T74,ENVNUL);
  T77 = BOUNDP(YruntimeYfrom_below);
  if (T77 != YPfalse) {
    T76 = CHKREF(YruntimeYfrom_below);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_from_below_320;
  T75 = CALL2(1,CHKREF(YPdefine_method),T76,T78);
  YruntimeYfrom_below = T75;
  lit_310 = YPPsym((P)"from-below-by");
  T79 = YPsig(YPPlist(3,CHKREF(lit_219),CHKREF(lit_220),CHKREF(lit_305)),YPPlist(3,CHKREF(YLnumG),CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)3),CHKREF(YruntimeYLrangeG),Ynil);
  fun_from_below_by_321 = YPmet(FUNCODEREF(fun_from_below_by_321),CHKREF(lit_310),T79,ENVNUL);
  T82 = BOUNDP(YruntimeYfrom_below_by);
  if (T82 != YPfalse) {
    T81 = CHKREF(YruntimeYfrom_below_by);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_from_below_by_321;
  T80 = CALL2(1,CHKREF(YPdefine_method),T81,T83);
  YruntimeYfrom_below_by = T80;
  lit_311 = YPPsym((P)"from-above");
  lit_312 = YPPsym((P)"above");
  T84 = YPsig(YPPlist(2,CHKREF(lit_219),CHKREF(lit_312)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLrangeG),Ynil);
  fun_from_above_322 = YPmet(FUNCODEREF(fun_from_above_322),CHKREF(lit_311),T84,ENVNUL);
  T87 = BOUNDP(YruntimeYfrom_above);
  if (T87 != YPfalse) {
    T86 = CHKREF(YruntimeYfrom_above);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_from_above_322;
  T85 = CALL2(1,CHKREF(YPdefine_method),T86,T88);
  YruntimeYfrom_above = T85;
  lit_313 = YPPsym((P)"from-above-by");
  T89 = YPsig(YPPlist(3,CHKREF(lit_219),CHKREF(lit_312),CHKREF(lit_305)),YPPlist(3,CHKREF(YLnumG),CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)3),CHKREF(YruntimeYLrangeG),Ynil);
  fun_from_above_by_323 = YPmet(FUNCODEREF(fun_from_above_by_323),CHKREF(lit_313),T89,ENVNUL);
  T92 = BOUNDP(YruntimeYfrom_above_by);
  if (T92 != YPfalse) {
    T91 = CHKREF(YruntimeYfrom_above_by);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_from_above_by_323;
  T90 = CALL2(1,CHKREF(YPdefine_method),T91,T93);
  YruntimeYfrom_above_by = T90;
  T94 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)1),CHKREF(YLnumG),Ynil);
  fun_ini_state_324 = YPmet(FUNCODEREF(fun_ini_state_324),CHKREF(lit_263),T94,ENVNUL);
  T97 = BOUNDP(YruntimeYini_state);
  if (T97 != YPfalse) {
    T96 = CHKREF(YruntimeYini_state);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_ini_state_324;
  T95 = CALL2(1,CHKREF(YPdefine_method),T96,T98);
  YruntimeYini_state = T95;
  T99 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_167)),YPPlist(2,CHKREF(YruntimeYLrangeG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_fin_stateQ_325 = YPmet(FUNCODEREF(fun_fin_stateQ_325),CHKREF(lit_264),T99,ENVNUL);
  T102 = BOUNDP(YruntimeYfin_stateQ);
  if (T102 != YPfalse) {
    T101 = CHKREF(YruntimeYfin_stateQ);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_fin_stateQ_325;
  T100 = CALL2(1,CHKREF(YPdefine_method),T101,T103);
  YruntimeYfin_stateQ = T100;
  T104 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_167)),YPPlist(2,CHKREF(YruntimeYLrangeG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLnumG),Ynil);
  fun_nxt_state_326 = YPmet(FUNCODEREF(fun_nxt_state_326),CHKREF(lit_265),T104,ENVNUL);
  T107 = BOUNDP(YruntimeYnxt_state);
  if (T107 != YPfalse) {
    T106 = CHKREF(YruntimeYnxt_state);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_nxt_state_326;
  T105 = CALL2(1,CHKREF(YPdefine_method),T106,T108);
  YruntimeYnxt_state = T105;
  T109 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_167)),YPPlist(2,CHKREF(YruntimeYLrangeG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_now_elt_327 = YPmet(FUNCODEREF(fun_now_elt_327),CHKREF(lit_266),T109,ENVNUL);
  T112 = BOUNDP(YruntimeYnow_elt);
  if (T112 != YPfalse) {
    T111 = CHKREF(YruntimeYnow_elt);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_now_elt_327;
  T110 = CALL2(1,CHKREF(YPdefine_method),T111,T113);
  YruntimeYnow_elt = T110;
  T114 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_167)),YPPlist(2,CHKREF(YruntimeYLrangeG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLnumG),Ynil);
  fun_copy_state_328 = YPmet(FUNCODEREF(fun_copy_state_328),CHKREF(lit_269),T114,ENVNUL);
  T117 = BOUNDP(YruntimeYcopy_state);
  if (T117 != YPfalse) {
    T116 = CHKREF(YruntimeYcopy_state);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_copy_state_328;
  T115 = CALL2(1,CHKREF(YPdefine_method),T116,T118);
  YruntimeYcopy_state = T115;
  lit_314 = YPPsym((P)"<step>");
  T120 = (P)YPpair(CHKREF(YLseqG),Ynil);
  T119 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_314),T120);
  YruntimeYLstepG = T119;
  lit_315 = YPPsym((P)"step-first");
  T121 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLstepG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_step_first_329 = YPmet(FUNCODEREF(fun_step_first_329),CHKREF(lit_315),T121,ENVNUL);
  T124 = BOUNDP(YruntimeYstep_first);
  if (T124 != YPfalse) {
    T123 = CHKREF(YruntimeYstep_first);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_step_first_329;
  T122 = CALL2(1,CHKREF(YPdefine_method),T123,T125);
  YruntimeYstep_first = T122;
  lit_316 = YPPsym((P)"step-first-setter");
  T126 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLanyG),CHKREF(YruntimeYLstepG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_step_first_setter_330 = YPmet(FUNCODEREF(fun_step_first_setter_330),CHKREF(lit_316),T126,ENVNUL);
  T129 = BOUNDP(YruntimeYstep_first_setter);
  if (T129 != YPfalse) {
    T128 = CHKREF(YruntimeYstep_first_setter);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_step_first_setter_330;
  T127 = CALL2(1,CHKREF(YPdefine_method),T128,T130);
  YruntimeYstep_first_setter = T127;
  T131 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_331 = YPmet(FUNCODEREF(fun_331),YPfalse,T131,ENVNUL);
  T132 = fun_331;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLstepG),CHKREF(YruntimeYstep_first),CHKREF(YruntimeYstep_first_setter),CHKREF(YLanyG),T132);
  lit_317 = YPPsym((P)"step-then");
  T133 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLstepG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_step_then_332 = YPmet(FUNCODEREF(fun_step_then_332),CHKREF(lit_317),T133,ENVNUL);
  T136 = BOUNDP(YruntimeYstep_then);
  if (T136 != YPfalse) {
    T135 = CHKREF(YruntimeYstep_then);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_step_then_332;
  T134 = CALL2(1,CHKREF(YPdefine_method),T135,T137);
  YruntimeYstep_then = T134;
  lit_318 = YPPsym((P)"step-then-setter");
  T138 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLanyG),CHKREF(YruntimeYLstepG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_step_then_setter_333 = YPmet(FUNCODEREF(fun_step_then_setter_333),CHKREF(lit_318),T138,ENVNUL);
  T141 = BOUNDP(YruntimeYstep_then_setter);
  if (T141 != YPfalse) {
    T140 = CHKREF(YruntimeYstep_then_setter);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_step_then_setter_333;
  T139 = CALL2(1,CHKREF(YPdefine_method),T140,T142);
  YruntimeYstep_then_setter = T139;
  T143 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_334 = YPmet(FUNCODEREF(fun_334),YPfalse,T143,ENVNUL);
  T144 = fun_334;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLstepG),CHKREF(YruntimeYstep_then),CHKREF(YruntimeYstep_then_setter),CHKREF(YLanyG),T144);
  lit_319 = YPPsym((P)"first-then");
  lit_320 = YPPsym((P)"first");
  lit_321 = YPPsym((P)"then");
  T145 = YPsig(YPPlist(2,CHKREF(lit_320),CHKREF(lit_321)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLstepG),Ynil);
  fun_first_then_335 = YPmet(FUNCODEREF(fun_first_then_335),CHKREF(lit_319),T145,ENVNUL);
  T148 = BOUNDP(YruntimeYfirst_then);
  if (T148 != YPfalse) {
    T147 = CHKREF(YruntimeYfirst_then);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_first_then_335;
  T146 = CALL2(1,CHKREF(YPdefine_method),T147,T149);
  YruntimeYfirst_then = T146;
  T150 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YruntimeYLstepG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_ini_state_336 = YPmet(FUNCODEREF(fun_ini_state_336),CHKREF(lit_263),T150,ENVNUL);
  T153 = BOUNDP(YruntimeYini_state);
  if (T153 != YPfalse) {
    T152 = CHKREF(YruntimeYini_state);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_ini_state_336;
  T151 = CALL2(1,CHKREF(YPdefine_method),T152,T154);
  YruntimeYini_state = T151;
  T155 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_167)),YPPlist(2,CHKREF(YruntimeYLstepG),CHKREF(YLlogG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_fin_stateQ_337 = YPmet(FUNCODEREF(fun_fin_stateQ_337),CHKREF(lit_264),T155,ENVNUL);
  T158 = BOUNDP(YruntimeYfin_stateQ);
  if (T158 != YPfalse) {
    T157 = CHKREF(YruntimeYfin_stateQ);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_fin_stateQ_337;
  T156 = CALL2(1,CHKREF(YPdefine_method),T157,T159);
  YruntimeYfin_stateQ = T156;
  T160 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_167)),YPPlist(2,CHKREF(YruntimeYLstepG),CHKREF(YLlogG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_nxt_state_338 = YPmet(FUNCODEREF(fun_nxt_state_338),CHKREF(lit_265),T160,ENVNUL);
  T163 = BOUNDP(YruntimeYnxt_state);
  if (T163 != YPfalse) {
    T162 = CHKREF(YruntimeYnxt_state);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_nxt_state_338;
  T161 = CALL2(1,CHKREF(YPdefine_method),T162,T164);
  YruntimeYnxt_state = T161;
  T165 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_167)),YPPlist(2,CHKREF(YruntimeYLstepG),CHKREF(YLlogG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_now_elt_339 = YPmet(FUNCODEREF(fun_now_elt_339),CHKREF(lit_266),T165,ENVNUL);
  T168 = BOUNDP(YruntimeYnow_elt);
  if (T168 != YPfalse) {
    T167 = CHKREF(YruntimeYnow_elt);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_now_elt_339;
  T166 = CALL2(1,CHKREF(YPdefine_method),T167,T169);
  YruntimeYnow_elt = T166;
  T170 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_167)),YPPlist(2,CHKREF(YruntimeYLstepG),CHKREF(YLlogG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_copy_state_340 = YPmet(FUNCODEREF(fun_copy_state_340),CHKREF(lit_269),T170,ENVNUL);
  T173 = BOUNDP(YruntimeYcopy_state);
  if (T173 != YPfalse) {
    T172 = CHKREF(YruntimeYcopy_state);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_copy_state_340;
  T171 = CALL2(1,CHKREF(YPdefine_method),T172,T174);
  YruntimeYcopy_state = T171;
  lit_322 = YPPsym((P)"<assoc>");
  T176 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T175 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_322),T176);
  YruntimeYLassocG = T175;
  lit_323 = YPPsym((P)"assoc-key");
  T177 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLassocG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_assoc_key_341 = YPmet(FUNCODEREF(fun_assoc_key_341),CHKREF(lit_323),T177,ENVNUL);
  T180 = BOUNDP(YruntimeYassoc_key);
  if (T180 != YPfalse) {
    T179 = CHKREF(YruntimeYassoc_key);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_assoc_key_341;
  T178 = CALL2(1,CHKREF(YPdefine_method),T179,T181);
  YruntimeYassoc_key = T178;
  lit_324 = YPPsym((P)"assoc-key-setter");
  T182 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLanyG),CHKREF(YruntimeYLassocG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_assoc_key_setter_342 = YPmet(FUNCODEREF(fun_assoc_key_setter_342),CHKREF(lit_324),T182,ENVNUL);
  T185 = BOUNDP(YruntimeYassoc_key_setter);
  if (T185 != YPfalse) {
    T184 = CHKREF(YruntimeYassoc_key_setter);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_assoc_key_setter_342;
  T183 = CALL2(1,CHKREF(YPdefine_method),T184,T186);
  YruntimeYassoc_key_setter = T183;
  T187 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_343 = YPmet(FUNCODEREF(fun_343),YPfalse,T187,ENVNUL);
  T188 = fun_343;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLassocG),CHKREF(YruntimeYassoc_key),CHKREF(YruntimeYassoc_key_setter),CHKREF(YLanyG),T188);
  lit_325 = YPPsym((P)"assoc-value");
  T189 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLassocG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_assoc_value_344 = YPmet(FUNCODEREF(fun_assoc_value_344),CHKREF(lit_325),T189,ENVNUL);
  T192 = BOUNDP(YruntimeYassoc_value);
  if (T192 != YPfalse) {
    T191 = CHKREF(YruntimeYassoc_value);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_assoc_value_344;
  T190 = CALL2(1,CHKREF(YPdefine_method),T191,T193);
  YruntimeYassoc_value = T190;
  lit_326 = YPPsym((P)"assoc-value-setter");
  T194 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLanyG),CHKREF(YruntimeYLassocG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_assoc_value_setter_345 = YPmet(FUNCODEREF(fun_assoc_value_setter_345),CHKREF(lit_326),T194,ENVNUL);
  T197 = BOUNDP(YruntimeYassoc_value_setter);
  if (T197 != YPfalse) {
    T196 = CHKREF(YruntimeYassoc_value_setter);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_assoc_value_setter_345;
  T195 = CALL2(1,CHKREF(YPdefine_method),T196,T198);
  YruntimeYassoc_value_setter = T195;
  T199 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_346 = YPmet(FUNCODEREF(fun_346),YPfalse,T199,ENVNUL);
  T200 = fun_346;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLassocG),CHKREF(YruntimeYassoc_value),CHKREF(YruntimeYassoc_value_setter),CHKREF(YLanyG),T200);
  lit_327 = YPPsym((P)"assoc");
  T201 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLassocG),Ynil);
  YruntimeYassoc = YPmet(FUNCODEREF(YruntimeYassoc),CHKREF(lit_327),T201,ENVNUL);
  T202 = YruntimeYassoc;
  YruntimeYassoc = T202;
  lit_328 = YPPsym((P)"assocq");
  T203 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_259)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_assocq_348 = YPmet(FUNCODEREF(fun_assocq_348),CHKREF(lit_328),T203,ENVNUL);
  T206 = BOUNDP(YruntimeYassocq);
  if (T206 != YPfalse) {
    T205 = CHKREF(YruntimeYassocq);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_assocq_348;
  T204 = CALL2(1,CHKREF(YPdefine_method),T205,T207);
  YruntimeYassocq = T204;
  lit_329 = YPsb((P)"#[");
  lit_330 = YPsb((P)"]");
  T208 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YruntimeYLbufG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_to_str_349 = YPmet(FUNCODEREF(fun_to_str_349),CHKREF(lit_37),T208,ENVNUL);
  T211 = BOUNDP(YruntimeYto_str);
  if (T211 != YPfalse) {
    T210 = CHKREF(YruntimeYto_str);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_to_str_349;
  T209 = CALL2(1,CHKREF(YPdefine_method),T210,T212);
  YruntimeYto_str = T209;
  T214 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YLstrG));
  T213 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,T214),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_empty_350 = YPmet(FUNCODEREF(fun_empty_350),CHKREF(lit_139),T213,ENVNUL);
  T217 = BOUNDP(YruntimeYempty);
  if (T217 != YPfalse) {
    T216 = CHKREF(YruntimeYempty);
  } else {
    T216 = YPfalse;
  }
  T218 = fun_empty_350;
  T215 = CALL2(1,CHKREF(YPdefine_method),T216,T218);
  YruntimeYempty = T215;
  T220 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YLstrG));
  T219 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,T220),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_default_351 = YPmet(FUNCODEREF(fun_default_351),CHKREF(lit_120),T219,ENVNUL);
  T223 = BOUNDP(YruntimeYdefault);
  if (T223 != YPfalse) {
    T222 = CHKREF(YruntimeYdefault);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_default_351;
  T221 = CALL2(1,CHKREF(YPdefine_method),T222,T224);
  YruntimeYdefault = T221;
  T226 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YLstrG));
  T225 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_7)),YPPlist(2,T226,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLstrG),Ynil);
  fun_fab_352 = YPmet(FUNCODEREF(fun_fab_352),CHKREF(lit_146),T225,ENVNUL);
  T229 = BOUNDP(YruntimeYfab);
  if (T229 != YPfalse) {
    T228 = CHKREF(YruntimeYfab);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_fab_352;
  T227 = CALL2(1,CHKREF(YPdefine_method),T228,T230);
  YruntimeYfab = T227;
  lit_331 = YPPsym((P)"str");
  T231 = YPsig(YPPlist(1,CHKREF(lit_137)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_str_353 = YPmet(FUNCODEREF(fun_str_353),CHKREF(lit_331),T231,ENVNUL);
  T234 = BOUNDP(YruntimeYstr);
  if (T234 != YPfalse) {
    T233 = CHKREF(YruntimeYstr);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_str_353;
  T232 = CALL2(1,CHKREF(YPdefine_method),T233,T235);
  YruntimeYstr = T232;
  T236 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  fun_len_354 = YPmet(FUNCODEREF(fun_len_354),CHKREF(lit_154),T236,ENVNUL);
  T239 = BOUNDP(YruntimeYlen);
  if (T239 != YPfalse) {
    T238 = CHKREF(YruntimeYlen);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_len_354;
  T237 = CALL2(1,CHKREF(YPdefine_method),T238,T240);
  YruntimeYlen = T237;
  T241 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_5)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLchrG),Ynil);
  fun_low_elt_355 = YPmet(FUNCODEREF(fun_low_elt_355),CHKREF(lit_270),T241,ENVNUL);
  T244 = BOUNDP(YruntimeYlow_elt);
  if (T244 != YPfalse) {
    T243 = CHKREF(YruntimeYlow_elt);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_low_elt_355;
  T242 = CALL2(1,CHKREF(YPdefine_method),T243,T245);
  YruntimeYlow_elt = T242;
  T246 = YPsig(YPPlist(3,CHKREF(lit_185),CHKREF(lit_9),CHKREF(lit_5)),YPPlist(3,CHKREF(YLchrG),CHKREF(YLstrG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_low_elt_setter_356 = YPmet(FUNCODEREF(fun_low_elt_setter_356),CHKREF(lit_274),T246,ENVNUL);
  T249 = BOUNDP(YruntimeYlow_elt_setter);
  if (T249 != YPfalse) {
    T248 = CHKREF(YruntimeYlow_elt_setter);
  } else {
    T248 = YPfalse;
  }
  T250 = fun_low_elt_setter_356;
  T247 = CALL2(1,CHKREF(YPdefine_method),T248,T250);
  YruntimeYlow_elt_setter = T247;
  T251 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_5)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLchrG),Ynil);
  fun_elt_357 = YPmet(FUNCODEREF(fun_elt_357),CHKREF(lit_202),T251,ENVNUL);
  T254 = BOUNDP(YruntimeYelt);
  if (T254 != YPfalse) {
    T253 = CHKREF(YruntimeYelt);
  } else {
    T253 = YPfalse;
  }
  T255 = fun_elt_357;
  T252 = CALL2(1,CHKREF(YPdefine_method),T253,T255);
  YruntimeYelt = T252;
  T256 = YPsig(YPPlist(3,CHKREF(lit_185),CHKREF(lit_9),CHKREF(lit_5)),YPPlist(3,CHKREF(YLchrG),CHKREF(YLstrG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_elt_setter_358 = YPmet(FUNCODEREF(fun_elt_setter_358),CHKREF(lit_204),T256,ENVNUL);
  T259 = BOUNDP(YruntimeYelt_setter);
  if (T259 != YPfalse) {
    T258 = CHKREF(YruntimeYelt_setter);
  } else {
    T258 = YPfalse;
  }
  T260 = fun_elt_setter_358;
  T257 = CALL2(1,CHKREF(YPdefine_method),T258,T260);
  YruntimeYelt_setter = T257;
  T261 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_to_str_359 = YPmet(FUNCODEREF(fun_to_str_359),CHKREF(lit_37),T261,ENVNUL);
  T264 = BOUNDP(YruntimeYto_str);
  if (T264 != YPfalse) {
    T263 = CHKREF(YruntimeYto_str);
  } else {
    T263 = YPfalse;
  }
  T265 = fun_to_str_359;
  T262 = CALL2(1,CHKREF(YPdefine_method),T263,T265);
  YruntimeYto_str = T262;
  T266 = YPsig(YPPlist(2,CHKREF(lit_7),CHKREF(lit_58)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLchrG)),YPfalse,YPint((P)2),CHKREF(YLstrG),Ynil);
  fun_add_360 = YPmet(FUNCODEREF(fun_add_360),CHKREF(lit_213),T266,ENVNUL);
  T269 = BOUNDP(YruntimeYadd);
  if (T269 != YPfalse) {
    T268 = CHKREF(YruntimeYadd);
  } else {
    T268 = YPfalse;
  }
  T270 = fun_add_360;
  T267 = CALL2(1,CHKREF(YPdefine_method),T268,T270);
  YruntimeYadd = T267;
  YruntimeYascii_limit = YPint((P)128);
  lit_332 = YPPsym((P)"j");
  lit_333 = YPsb((P)"\t");
  lit_334 = YPsb((P)"\n");
  lit_335 = YPsb((P)"\f");
  lit_336 = YPsb((P)"\r");
  lit_337 = YPsb((P)" !\"#$%&'()*+,-./0123456789:;<=>?");
  lit_338 = YPsb((P)"@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_");
  lit_339 = YPsb((P)"`abcdefghijklmnopqrstuvwxyz{|}~");
  T272 = YPsig(YPPlist(2,CHKREF(lit_5),CHKREF(lit_332)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_361 = YPmet(FUNCODEREF(fun_loop_361),CHKREF(lit_101),T272,ENVNUL);
  T271 = YPsig(YPPlist(2,CHKREF(lit_5),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_362 = YPmet(FUNCODEREF(fun_362),YPfalse,T271,ENVNUL);
  T275 = CALL2(1,CHKREF(YruntimeYfab),CHKREF(YLvecG),CHKREF(YruntimeYascii_limit));
  T274 = CALL2(1,CHKREF(YruntimeYfill),T275,YPfalse);
  ascii_charsF1067 = T274;
  T277 = FUNFAB(fun_362,1,ascii_charsF1067);
  initF1068 = T277;
  CALL2(1,initF1068,YPint((P)9),CHKREF(lit_333));
  CALL2(1,initF1068,YPint((P)10),CHKREF(lit_334));
  CALL2(1,initF1068,YPint((P)12),CHKREF(lit_335));
  CALL2(1,initF1068,YPint((P)13),CHKREF(lit_336));
  CALL2(1,initF1068,YPint((P)32),CHKREF(lit_337));
  CALL2(1,initF1068,YPint((P)64),CHKREF(lit_338));
  CALL2(1,initF1068,YPint((P)96),CHKREF(lit_339));
  T276 = ascii_charsF1067;
  T273 = T276;
  YruntimeYascii_chars = T273;
  lit_340 = YPPsym((P)"ascii->char");
  lit_341 = YPPsym((P)"n");
  lit_342 = YPsb((P)"not a standard character's ASCII code: %=");
  T278 = YPsig(YPPlist(1,CHKREF(lit_341)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLchrG),Ynil);
  fun_ascii_Gchar_363 = YPmet(FUNCODEREF(fun_ascii_Gchar_363),CHKREF(lit_340),T278,ENVNUL);
  T281 = BOUNDP(YruntimeYascii_Gchar);
  if (T281 != YPfalse) {
    T280 = CHKREF(YruntimeYascii_Gchar);
  } else {
    T280 = YPfalse;
  }
  T282 = fun_ascii_Gchar_363;
  T279 = CALL2(1,CHKREF(YPdefine_method),T280,T282);
  YruntimeYascii_Gchar = T279;
  lit_343 = YPPsym((P)"char->integer");
  T285 = YPsig(YPPlist(1,CHKREF(lit_95)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  T284 = fun_char_Ginteger_364 = YPmet(FUNCODEREF(fun_char_Ginteger_364),CHKREF(lit_343),T285,ENVNUL);
  T289 = BOUNDP(YruntimeYchar_Ginteger);
  if (T289 != YPfalse) {
    T288 = CHKREF(YruntimeYchar_Ginteger);
  } else {
    T288 = YPfalse;
  }
  T290 = fun_char_Ginteger_364;
  T287 = CALL2(1,CHKREF(YPdefine_method),T288,T290);
  T286 = YruntimeYchar_Ginteger = T287;
  T283 = T286;
  return T283;
}

P YruntimeY___main_5___() {
  P loopF1070;
  P end259F1069;
  P T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244,T243;
  P T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227;
  P T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211;
  P T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195;
  P T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179;
  P T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163;
  P T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147;
  P T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131;
  P T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115;
  P T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99;
  P T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83;
  P T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
loop:
  lit_344 = YPPsym((P)"integer->char");
  T0 = YPsig(YPPlist(1,CHKREF(lit_341)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLchrG),Ynil);
  fun_integer_Gchar_365 = YPmet(FUNCODEREF(fun_integer_Gchar_365),CHKREF(lit_344),T0,ENVNUL);
  T3 = BOUNDP(YruntimeYinteger_Gchar);
  if (T3 != YPfalse) {
    T2 = CHKREF(YruntimeYinteger_Gchar);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_integer_Gchar_365;
  T1 = CALL2(1,CHKREF(YPdefine_method),T2,T4);
  YruntimeYinteger_Gchar = T1;
  lit_345 = YPPsym((P)"least");
  lit_346 = YPPsym((P)"greatest");
  T6 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_366 = YPmet(FUNCODEREF(fun_loop_366),CHKREF(lit_101),T6,ENVNUL);
  T5 = YPsig(YPPlist(3,CHKREF(lit_5),CHKREF(lit_345),CHKREF(lit_346)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_loop_367 = YPmet(FUNCODEREF(fun_loop_367),CHKREF(lit_101),T5,ENVNUL);
  T8 = CALL1(1,CHKREF(YruntimeYlen),CHKREF(YruntimeYascii_chars));
  end259F1069 = T8;
  T10 = FUNSHELL(1,fun_loop_367,2);
  loopF1070 = T10;
  FUNINIT(loopF1070, 2,end259F1069,loopF1070);
  T11 = CALL3(0,loopF1070,YPint((P)0),YPfalse,YPfalse);
  T9 = T11;
  T7 = T9;
  YruntimeYnative_chars = T7;
  lit_347 = YPPsym((P)"char->ascii");
  lit_348 = YPsb((P)"not a standard character: %=");
  T12 = YPsig(YPPlist(1,CHKREF(lit_95)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  fun_char_Gascii_368 = YPmet(FUNCODEREF(fun_char_Gascii_368),CHKREF(lit_347),T12,ENVNUL);
  T15 = BOUNDP(YruntimeYchar_Gascii);
  if (T15 != YPfalse) {
    T14 = CHKREF(YruntimeYchar_Gascii);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_char_Gascii_368;
  T13 = CALL2(1,CHKREF(YPdefine_method),T14,T16);
  YruntimeYchar_Gascii = T13;
  lit_349 = YPPlist(5,YPint((P)32),YPint((P)10),YPint((P)9),YPint((P)12),YPint((P)13));
  YruntimeYascii_whitespaces = CHKREF(lit_349);
  T18 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YLstrG));
  T17 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_7)),YPPlist(2,T18,CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLstrG),Ynil);
  fun_as_369 = YPmet(FUNCODEREF(fun_as_369),CHKREF(lit_44),T17,ENVNUL);
  T21 = BOUNDP(YruntimeYas);
  if (T21 != YPfalse) {
    T20 = CHKREF(YruntimeYas);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_as_369;
  T19 = CALL2(1,CHKREF(YPdefine_method),T20,T22);
  YruntimeYas = T19;
  T24 = CALL1(1,CHKREF(YruntimeYtE),CHKREF(YLsymG));
  T23 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_7)),YPPlist(2,T24,CHKREF(YLstrG)),YPfalse,YPint((P)2),CHKREF(YLsymG),Ynil);
  fun_as_370 = YPmet(FUNCODEREF(fun_as_370),CHKREF(lit_44),T23,ENVNUL);
  T27 = BOUNDP(YruntimeYas);
  if (T27 != YPfalse) {
    T26 = CHKREF(YruntimeYas);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_as_370;
  T25 = CALL2(1,CHKREF(YPdefine_method),T26,T28);
  YruntimeYas = T25;
  T29 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLsymG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_L_371 = YPmet(FUNCODEREF(fun_L_371),CHKREF(lit_59),T29,ENVNUL);
  T32 = BOUNDP(YruntimeYL);
  if (T32 != YPfalse) {
    T31 = CHKREF(YruntimeYL);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_L_371;
  T30 = CALL2(1,CHKREF(YPdefine_method),T31,T33);
  YruntimeYL = T30;
  T34 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_to_str_372 = YPmet(FUNCODEREF(fun_to_str_372),CHKREF(lit_37),T34,ENVNUL);
  T37 = BOUNDP(YruntimeYto_str);
  if (T37 != YPfalse) {
    T36 = CHKREF(YruntimeYto_str);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_to_str_372;
  T35 = CALL2(1,CHKREF(YPdefine_method),T36,T38);
  YruntimeYto_str = T35;
  lit_350 = YPPsym((P)"identity");
  T39 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_identity_373 = YPmet(FUNCODEREF(fun_identity_373),CHKREF(lit_350),T39,ENVNUL);
  T42 = BOUNDP(YruntimeYidentity);
  if (T42 != YPfalse) {
    T41 = CHKREF(YruntimeYidentity);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_identity_373;
  T40 = CALL2(1,CHKREF(YPdefine_method),T41,T43);
  YruntimeYidentity = T40;
  lit_351 = YPPsym((P)"compose");
  lit_352 = YPPsym((P)"fx");
  lit_353 = YPPsym((P)"fy");
  T45 = YPsig(YPPlist(1,CHKREF(lit_3)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_374 = YPmet(FUNCODEREF(fun_374),YPfalse,T45,ENVNUL);
  T44 = YPsig(YPPlist(2,CHKREF(lit_352),CHKREF(lit_353)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLfunG),Ynil);
  fun_compose_375 = YPmet(FUNCODEREF(fun_compose_375),CHKREF(lit_351),T44,ENVNUL);
  T48 = BOUNDP(YruntimeYcompose);
  if (T48 != YPfalse) {
    T47 = CHKREF(YruntimeYcompose);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_compose_375;
  T46 = CALL2(1,CHKREF(YPdefine_method),T47,T49);
  YruntimeYcompose = T46;
  lit_354 = YPPsym((P)"rcurry");
  lit_355 = YPPsym((P)"curried");
  T51 = YPsig(YPPlist(1,CHKREF(lit_3)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_376 = YPmet(FUNCODEREF(fun_376),YPfalse,T51,ENVNUL);
  T50 = YPsig(YPPlist(2,CHKREF(lit_70),CHKREF(lit_355)),YPPlist(1,CHKREF(YLfunG)),YPtrue,YPint((P)1),CHKREF(YLfunG),Ynil);
  fun_rcurry_377 = YPmet(FUNCODEREF(fun_rcurry_377),CHKREF(lit_354),T50,ENVNUL);
  T54 = BOUNDP(YruntimeYrcurry);
  if (T54 != YPfalse) {
    T53 = CHKREF(YruntimeYrcurry);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_rcurry_377;
  T52 = CALL2(1,CHKREF(YPdefine_method),T53,T55);
  YruntimeYrcurry = T52;
  lit_356 = YPPsym((P)"curry");
  T57 = YPsig(YPPlist(1,CHKREF(lit_3)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_378 = YPmet(FUNCODEREF(fun_378),YPfalse,T57,ENVNUL);
  T56 = YPsig(YPPlist(2,CHKREF(lit_70),CHKREF(lit_355)),YPPlist(1,CHKREF(YLfunG)),YPtrue,YPint((P)1),CHKREF(YLfunG),Ynil);
  fun_curry_379 = YPmet(FUNCODEREF(fun_curry_379),CHKREF(lit_356),T56,ENVNUL);
  T60 = BOUNDP(YruntimeYcurry);
  if (T60 != YPfalse) {
    T59 = CHKREF(YruntimeYcurry);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_curry_379;
  T58 = CALL2(1,CHKREF(YPdefine_method),T59,T61);
  YruntimeYcurry = T58;
  lit_357 = YPPsym((P)"always");
  T63 = YPsig(YPPlist(1,CHKREF(lit_3)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_380 = YPmet(FUNCODEREF(fun_380),YPfalse,T63,ENVNUL);
  T62 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLfunG),Ynil);
  fun_always_381 = YPmet(FUNCODEREF(fun_always_381),CHKREF(lit_357),T62,ENVNUL);
  T66 = BOUNDP(YruntimeYalways);
  if (T66 != YPfalse) {
    T65 = CHKREF(YruntimeYalways);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_always_381;
  T64 = CALL2(1,CHKREF(YPdefine_method),T65,T67);
  YruntimeYalways = T64;
  lit_358 = YPPsym((P)"<condition>");
  T69 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T68 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_358),T69);
  YruntimeYLconditionG = T68;
  lit_359 = YPPsym((P)"default-handler");
  T70 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YruntimeYLconditionG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_default_handler_382 = YPmet(FUNCODEREF(fun_default_handler_382),CHKREF(lit_359),T70,ENVNUL);
  T73 = BOUNDP(YruntimeYdefault_handler);
  if (T73 != YPfalse) {
    T72 = CHKREF(YruntimeYdefault_handler);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_default_handler_382;
  T71 = CALL2(1,CHKREF(YPdefine_method),T72,T74);
  YruntimeYdefault_handler = T71;
  lit_360 = YPPsym((P)"describe-condition");
  lit_361 = YPsb((P)"Anonymous condition %=");
  T75 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YruntimeYLconditionG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_describe_condition_383 = YPmet(FUNCODEREF(fun_describe_condition_383),CHKREF(lit_360),T75,ENVNUL);
  T78 = BOUNDP(YruntimeYdescribe_condition);
  if (T78 != YPfalse) {
    T77 = CHKREF(YruntimeYdescribe_condition);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_describe_condition_383;
  T76 = CALL2(1,CHKREF(YPdefine_method),T77,T79);
  YruntimeYdescribe_condition = T76;
  lit_362 = YPPsym((P)"default-handler-description");
  lit_363 = YPPsym((P)"cond-type");
  lit_364 = YPsb((P)"Anonymous handler for %s");
  T80 = YPsig(YPPlist(1,CHKREF(lit_363)),YPPlist(1,CHKREF(YruntimeYLconditionG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_default_handler_description_384 = YPmet(FUNCODEREF(fun_default_handler_description_384),CHKREF(lit_362),T80,ENVNUL);
  T83 = BOUNDP(YruntimeYdefault_handler_description);
  if (T83 != YPfalse) {
    T82 = CHKREF(YruntimeYdefault_handler_description);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_default_handler_description_384;
  T81 = CALL2(1,CHKREF(YPdefine_method),T82,T84);
  YruntimeYdefault_handler_description = T81;
  lit_365 = YPPsym((P)"build-condition-interactively");
  lit_366 = YPPsym((P)"out");
  T86 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YruntimeYLconditionG));
  T85 = YPsig(YPPlist(3,CHKREF(lit_363),CHKREF(lit_159),CHKREF(lit_366)),YPPlist(3,T86,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YruntimeYLconditionG),Ynil);
  fun_build_condition_interactively_385 = YPmet(FUNCODEREF(fun_build_condition_interactively_385),CHKREF(lit_365),T85,ENVNUL);
  T89 = BOUNDP(YruntimeYbuild_condition_interactively);
  if (T89 != YPfalse) {
    T88 = CHKREF(YruntimeYbuild_condition_interactively);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_build_condition_interactively_385;
  T87 = CALL2(1,CHKREF(YPdefine_method),T88,T90);
  YruntimeYbuild_condition_interactively = T87;
  lit_367 = YPPsym((P)"<simple-condition>");
  T92 = (P)YPpair(CHKREF(YruntimeYLconditionG),Ynil);
  T91 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_367),T92);
  YruntimeYLsimple_conditionG = T91;
  lit_368 = YPPsym((P)"condition-message");
  T93 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLsimple_conditionG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_condition_message_386 = YPmet(FUNCODEREF(fun_condition_message_386),CHKREF(lit_368),T93,ENVNUL);
  T96 = BOUNDP(YruntimeYcondition_message);
  if (T96 != YPfalse) {
    T95 = CHKREF(YruntimeYcondition_message);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_condition_message_386;
  T94 = CALL2(1,CHKREF(YPdefine_method),T95,T97);
  YruntimeYcondition_message = T94;
  lit_369 = YPPsym((P)"condition-message-setter");
  T98 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLstrG),CHKREF(YruntimeYLsimple_conditionG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_condition_message_setter_387 = YPmet(FUNCODEREF(fun_condition_message_setter_387),CHKREF(lit_369),T98,ENVNUL);
  T101 = BOUNDP(YruntimeYcondition_message_setter);
  if (T101 != YPfalse) {
    T100 = CHKREF(YruntimeYcondition_message_setter);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_condition_message_setter_387;
  T99 = CALL2(1,CHKREF(YPdefine_method),T100,T102);
  YruntimeYcondition_message_setter = T99;
  T103 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_388 = YPmet(FUNCODEREF(fun_388),YPfalse,T103,ENVNUL);
  T104 = fun_388;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_conditionG),CHKREF(YruntimeYcondition_message),CHKREF(YruntimeYcondition_message_setter),CHKREF(YLstrG),T104);
  lit_370 = YPPsym((P)"condition-arguments");
  T105 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLsimple_conditionG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_condition_arguments_389 = YPmet(FUNCODEREF(fun_condition_arguments_389),CHKREF(lit_370),T105,ENVNUL);
  T108 = BOUNDP(YruntimeYcondition_arguments);
  if (T108 != YPfalse) {
    T107 = CHKREF(YruntimeYcondition_arguments);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_condition_arguments_389;
  T106 = CALL2(1,CHKREF(YPdefine_method),T107,T109);
  YruntimeYcondition_arguments = T106;
  lit_371 = YPPsym((P)"condition-arguments-setter");
  T110 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLlstG),CHKREF(YruntimeYLsimple_conditionG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_condition_arguments_setter_390 = YPmet(FUNCODEREF(fun_condition_arguments_setter_390),CHKREF(lit_371),T110,ENVNUL);
  T113 = BOUNDP(YruntimeYcondition_arguments_setter);
  if (T113 != YPfalse) {
    T112 = CHKREF(YruntimeYcondition_arguments_setter);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_condition_arguments_setter_390;
  T111 = CALL2(1,CHKREF(YPdefine_method),T112,T114);
  YruntimeYcondition_arguments_setter = T111;
  T115 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_391 = YPmet(FUNCODEREF(fun_391),YPfalse,T115,ENVNUL);
  T116 = fun_391;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_conditionG),CHKREF(YruntimeYcondition_arguments),CHKREF(YruntimeYcondition_arguments_setter),CHKREF(YLlstG),T116);
  T117 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YruntimeYLsimple_conditionG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_describe_condition_392 = YPmet(FUNCODEREF(fun_describe_condition_392),CHKREF(lit_360),T117,ENVNUL);
  T120 = BOUNDP(YruntimeYdescribe_condition);
  if (T120 != YPfalse) {
    T119 = CHKREF(YruntimeYdescribe_condition);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_describe_condition_392;
  T118 = CALL2(1,CHKREF(YPdefine_method),T119,T121);
  YruntimeYdescribe_condition = T118;
  lit_372 = YPsb((P)"No next methods");
  lit_373 = YPsb((P)"Condition format string: ");
  lit_374 = YPsb((P)"Condition format arguments: ");
  T123 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YruntimeYLsimple_conditionG));
  T122 = YPsig(YPPlist(3,CHKREF(lit_363),CHKREF(lit_159),CHKREF(lit_366)),YPPlist(3,T123,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YruntimeYLconditionG),Ynil);
  fun_build_condition_interactively_393 = YPmet(FUNCODEREF(fun_build_condition_interactively_393),CHKREF(lit_365),T122,ENVNUL);
  T126 = BOUNDP(YruntimeYbuild_condition_interactively);
  if (T126 != YPfalse) {
    T125 = CHKREF(YruntimeYbuild_condition_interactively);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_build_condition_interactively_393;
  T124 = CALL2(1,CHKREF(YPdefine_method),T125,T127);
  YruntimeYbuild_condition_interactively = T124;
  lit_375 = YPPsym((P)"<serious-condition>");
  T129 = (P)YPpair(CHKREF(YruntimeYLconditionG),Ynil);
  T128 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_375),T129);
  YruntimeYLserious_conditionG = T128;
  lit_376 = YPsb((P)"%s\n");
  T130 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YruntimeYLserious_conditionG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_default_handler_394 = YPmet(FUNCODEREF(fun_default_handler_394),CHKREF(lit_359),T130,ENVNUL);
  T133 = BOUNDP(YruntimeYdefault_handler);
  if (T133 != YPfalse) {
    T132 = CHKREF(YruntimeYdefault_handler);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_default_handler_394;
  T131 = CALL2(1,CHKREF(YPdefine_method),T132,T134);
  YruntimeYdefault_handler = T131;
  lit_377 = YPPsym((P)"<error>");
  T136 = (P)YPpair(CHKREF(YruntimeYLserious_conditionG),Ynil);
  T135 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_377),T136);
  YruntimeYLerrorG = T135;
  lit_378 = YPPsym((P)"<simple-error>");
  T139 = (P)YPpair(CHKREF(YruntimeYLsimple_conditionG),Ynil);
  T138 = (P)YPpair(CHKREF(YruntimeYLerrorG),T139);
  T137 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_378),T138);
  YruntimeYLsimple_errorG = T137;
  lit_379 = YPPsym((P)"<restart>");
  T141 = (P)YPpair(CHKREF(YruntimeYLconditionG),Ynil);
  T140 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_379),T141);
  YruntimeYLrestartG = T140;
  lit_380 = YPsb((P)"Anonymous restart of type %s");
  T142 = YPsig(YPPlist(1,CHKREF(lit_363)),YPPlist(1,CHKREF(YruntimeYLrestartG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_default_handler_description_395 = YPmet(FUNCODEREF(fun_default_handler_description_395),CHKREF(lit_362),T142,ENVNUL);
  T145 = BOUNDP(YruntimeYdefault_handler_description);
  if (T145 != YPfalse) {
    T144 = CHKREF(YruntimeYdefault_handler_description);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_default_handler_description_395;
  T143 = CALL2(1,CHKREF(YPdefine_method),T144,T146);
  YruntimeYdefault_handler_description = T143;
  lit_381 = YPPsym((P)"<incongruent-method-error>");
  T148 = (P)YPpair(CHKREF(YruntimeYLerrorG),Ynil);
  T147 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_381),T148);
  YruntimeYLincongruent_method_errorG = T147;
  lit_382 = YPPsym((P)"incongruent-method-error-generic");
  T149 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_incongruent_method_error_generic_396 = YPmet(FUNCODEREF(fun_incongruent_method_error_generic_396),CHKREF(lit_382),T149,ENVNUL);
  T152 = BOUNDP(YruntimeYincongruent_method_error_generic);
  if (T152 != YPfalse) {
    T151 = CHKREF(YruntimeYincongruent_method_error_generic);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_incongruent_method_error_generic_396;
  T150 = CALL2(1,CHKREF(YPdefine_method),T151,T153);
  YruntimeYincongruent_method_error_generic = T150;
  lit_383 = YPPsym((P)"incongruent-method-error-generic-setter");
  T154 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLgenG),CHKREF(YruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_incongruent_method_error_generic_setter_397 = YPmet(FUNCODEREF(fun_incongruent_method_error_generic_setter_397),CHKREF(lit_383),T154,ENVNUL);
  T157 = BOUNDP(YruntimeYincongruent_method_error_generic_setter);
  if (T157 != YPfalse) {
    T156 = CHKREF(YruntimeYincongruent_method_error_generic_setter);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_incongruent_method_error_generic_setter_397;
  T155 = CALL2(1,CHKREF(YPdefine_method),T156,T158);
  YruntimeYincongruent_method_error_generic_setter = T155;
  T159 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_398 = YPmet(FUNCODEREF(fun_398),YPfalse,T159,ENVNUL);
  T160 = fun_398;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLincongruent_method_errorG),CHKREF(YruntimeYincongruent_method_error_generic),CHKREF(YruntimeYincongruent_method_error_generic_setter),CHKREF(YLgenG),T160);
  lit_384 = YPPsym((P)"incongruent-method-error-method");
  T161 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_incongruent_method_error_method_399 = YPmet(FUNCODEREF(fun_incongruent_method_error_method_399),CHKREF(lit_384),T161,ENVNUL);
  T164 = BOUNDP(YruntimeYincongruent_method_error_method);
  if (T164 != YPfalse) {
    T163 = CHKREF(YruntimeYincongruent_method_error_method);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_incongruent_method_error_method_399;
  T162 = CALL2(1,CHKREF(YPdefine_method),T163,T165);
  YruntimeYincongruent_method_error_method = T162;
  lit_385 = YPPsym((P)"incongruent-method-error-method-setter");
  T166 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLmetG),CHKREF(YruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_incongruent_method_error_method_setter_400 = YPmet(FUNCODEREF(fun_incongruent_method_error_method_setter_400),CHKREF(lit_385),T166,ENVNUL);
  T169 = BOUNDP(YruntimeYincongruent_method_error_method_setter);
  if (T169 != YPfalse) {
    T168 = CHKREF(YruntimeYincongruent_method_error_method_setter);
  } else {
    T168 = YPfalse;
  }
  T170 = fun_incongruent_method_error_method_setter_400;
  T167 = CALL2(1,CHKREF(YPdefine_method),T168,T170);
  YruntimeYincongruent_method_error_method_setter = T167;
  T171 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_401 = YPmet(FUNCODEREF(fun_401),YPfalse,T171,ENVNUL);
  T172 = fun_401;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLincongruent_method_errorG),CHKREF(YruntimeYincongruent_method_error_method),CHKREF(YruntimeYincongruent_method_error_method_setter),CHKREF(YLmetG),T172);
  lit_386 = YPsb((P)"Method %= incongruent with generic %=.\n");
  T173 = YPsig(YPPlist(1,CHKREF(lit_58)),YPPlist(1,CHKREF(YruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_describe_condition_402 = YPmet(FUNCODEREF(fun_describe_condition_402),CHKREF(lit_360),T173,ENVNUL);
  T176 = BOUNDP(YruntimeYdescribe_condition);
  if (T176 != YPfalse) {
    T175 = CHKREF(YruntimeYdescribe_condition);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_describe_condition_402;
  T174 = CALL2(1,CHKREF(YPdefine_method),T175,T177);
  YruntimeYdescribe_condition = T174;
  lit_387 = YPPsym((P)"<replace-generic-restart>");
  T179 = (P)YPpair(CHKREF(YruntimeYLrestartG),Ynil);
  T178 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_387),T179);
  YLreplace_generic_restartG = T178;
  lit_388 = YPsb((P)"Replace the generic function with an empty, congruent one");
  T180 = YPsig(YPPlist(1,CHKREF(lit_363)),YPPlist(1,CHKREF(YLreplace_generic_restartG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_default_handler_description_403 = YPmet(FUNCODEREF(fun_default_handler_description_403),CHKREF(lit_362),T180,ENVNUL);
  T183 = BOUNDP(YruntimeYdefault_handler_description);
  if (T183 != YPfalse) {
    T182 = CHKREF(YruntimeYdefault_handler_description);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_default_handler_description_403;
  T181 = CALL2(1,CHKREF(YPdefine_method),T182,T184);
  YruntimeYdefault_handler_description = T181;
  lit_389 = YPPsym((P)"<handler-info>");
  T186 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T185 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_389),T186);
  YruntimeYLhandler_infoG = T185;
  lit_390 = YPPsym((P)"describe-handler");
  lit_391 = YPPsym((P)"info");
  lit_392 = YPPsym((P)"condition-type");
  T187 = YPsig(YPPlist(2,CHKREF(lit_391),CHKREF(lit_392)),YPPlist(2,CHKREF(YruntimeYLhandler_infoG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLstrG),Ynil);
  fun_describe_handler_404 = YPmet(FUNCODEREF(fun_describe_handler_404),CHKREF(lit_390),T187,ENVNUL);
  T190 = BOUNDP(YruntimeYdescribe_handler);
  if (T190 != YPfalse) {
    T189 = CHKREF(YruntimeYdescribe_handler);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_describe_handler_404;
  T188 = CALL2(1,CHKREF(YPdefine_method),T189,T191);
  YruntimeYdescribe_handler = T188;
  lit_393 = YPPsym((P)"build-condition-for-handler-interactively");
  T192 = YPsig(YPPlist(4,CHKREF(lit_391),CHKREF(lit_392),CHKREF(lit_159),CHKREF(lit_366)),YPPlist(4,CHKREF(YruntimeYLhandler_infoG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YruntimeYLconditionG),Ynil);
  fun_build_condition_for_handler_interactively_405 = YPmet(FUNCODEREF(fun_build_condition_for_handler_interactively_405),CHKREF(lit_393),T192,ENVNUL);
  T195 = BOUNDP(YruntimeYbuild_condition_for_handler_interactively);
  if (T195 != YPfalse) {
    T194 = CHKREF(YruntimeYbuild_condition_for_handler_interactively);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_build_condition_for_handler_interactively_405;
  T193 = CALL2(1,CHKREF(YPdefine_method),T194,T196);
  YruntimeYbuild_condition_for_handler_interactively = T193;
  T198 = (P)YPpair(CHKREF(YruntimeYLhandler_infoG),Ynil);
  T197 = CALL3(1,CHKREF(YPisa),T198,Ynil,Ynil);
  YruntimeYDdefault_handler_info = T197;
  lit_394 = YPPsym((P)"<simple-handler-info>");
  T200 = (P)YPpair(CHKREF(YruntimeYLhandler_infoG),Ynil);
  T199 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_394),T200);
  YLsimple_handler_infoG = T199;
  lit_395 = YPPsym((P)"handler-info-message");
  T201 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YLsimple_handler_infoG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_handler_info_message_406 = YPmet(FUNCODEREF(fun_handler_info_message_406),CHKREF(lit_395),T201,ENVNUL);
  T204 = BOUNDP(Yhandler_info_message);
  if (T204 != YPfalse) {
    T203 = CHKREF(Yhandler_info_message);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_handler_info_message_406;
  T202 = CALL2(1,CHKREF(YPdefine_method),T203,T205);
  Yhandler_info_message = T202;
  lit_396 = YPPsym((P)"handler-info-message-setter");
  T206 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsimple_handler_infoG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_handler_info_message_setter_407 = YPmet(FUNCODEREF(fun_handler_info_message_setter_407),CHKREF(lit_396),T206,ENVNUL);
  T209 = BOUNDP(YruntimeYhandler_info_message_setter);
  if (T209 != YPfalse) {
    T208 = CHKREF(YruntimeYhandler_info_message_setter);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_handler_info_message_setter_407;
  T207 = CALL2(1,CHKREF(YPdefine_method),T208,T210);
  YruntimeYhandler_info_message_setter = T207;
  T211 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_408 = YPmet(FUNCODEREF(fun_408),YPfalse,T211,ENVNUL);
  T212 = fun_408;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YLsimple_handler_infoG),CHKREF(Yhandler_info_message),CHKREF(YruntimeYhandler_info_message_setter),CHKREF(YLstrG),T212);
  lit_397 = YPPsym((P)"handler-info-arguments");
  T213 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YLsimple_handler_infoG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_handler_info_arguments_409 = YPmet(FUNCODEREF(fun_handler_info_arguments_409),CHKREF(lit_397),T213,ENVNUL);
  T216 = BOUNDP(Yhandler_info_arguments);
  if (T216 != YPfalse) {
    T215 = CHKREF(Yhandler_info_arguments);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_handler_info_arguments_409;
  T214 = CALL2(1,CHKREF(YPdefine_method),T215,T217);
  Yhandler_info_arguments = T214;
  lit_398 = YPPsym((P)"handler-info-arguments-setter");
  T218 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsimple_handler_infoG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_handler_info_arguments_setter_410 = YPmet(FUNCODEREF(fun_handler_info_arguments_setter_410),CHKREF(lit_398),T218,ENVNUL);
  T221 = BOUNDP(YruntimeYhandler_info_arguments_setter);
  if (T221 != YPfalse) {
    T220 = CHKREF(YruntimeYhandler_info_arguments_setter);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_handler_info_arguments_setter_410;
  T219 = CALL2(1,CHKREF(YPdefine_method),T220,T222);
  YruntimeYhandler_info_arguments_setter = T219;
  T223 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_411 = YPmet(FUNCODEREF(fun_411),YPfalse,T223,ENVNUL);
  T224 = fun_411;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YLsimple_handler_infoG),CHKREF(Yhandler_info_arguments),CHKREF(YruntimeYhandler_info_arguments_setter),CHKREF(YLstrG),T224);
  T225 = YPsig(YPPlist(2,CHKREF(lit_391),CHKREF(lit_392)),YPPlist(2,CHKREF(YLsimple_handler_infoG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLstrG),Ynil);
  fun_describe_handler_412 = YPmet(FUNCODEREF(fun_describe_handler_412),CHKREF(lit_390),T225,ENVNUL);
  T228 = BOUNDP(YruntimeYdescribe_handler);
  if (T228 != YPfalse) {
    T227 = CHKREF(YruntimeYdescribe_handler);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_describe_handler_412;
  T226 = CALL2(1,CHKREF(YPdefine_method),T227,T229);
  YruntimeYdescribe_handler = T226;
  YruntimeYTcurrent_handlersT = Ynil;
  lit_399 = YPPsym((P)"<handler>");
  T231 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T230 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_399),T231);
  YruntimeYLhandlerG = T230;
  lit_400 = YPPsym((P)"handler-condition-type");
  T232 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_handler_condition_type_413 = YPmet(FUNCODEREF(fun_handler_condition_type_413),CHKREF(lit_400),T232,ENVNUL);
  T235 = BOUNDP(YruntimeYhandler_condition_type);
  if (T235 != YPfalse) {
    T234 = CHKREF(YruntimeYhandler_condition_type);
  } else {
    T234 = YPfalse;
  }
  T236 = fun_handler_condition_type_413;
  T233 = CALL2(1,CHKREF(YPdefine_method),T234,T236);
  YruntimeYhandler_condition_type = T233;
  lit_401 = YPPsym((P)"handler-condition-type-setter");
  T238 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YruntimeYLconditionG));
  T237 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,T238,CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_handler_condition_type_setter_414 = YPmet(FUNCODEREF(fun_handler_condition_type_setter_414),CHKREF(lit_401),T237,ENVNUL);
  T241 = BOUNDP(YruntimeYhandler_condition_type_setter);
  if (T241 != YPfalse) {
    T240 = CHKREF(YruntimeYhandler_condition_type_setter);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_handler_condition_type_setter_414;
  T239 = CALL2(1,CHKREF(YPdefine_method),T240,T242);
  YruntimeYhandler_condition_type_setter = T239;
  T243 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_415 = YPmet(FUNCODEREF(fun_415),YPfalse,T243,ENVNUL);
  T244 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YruntimeYLconditionG));
  T245 = fun_415;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLhandlerG),CHKREF(YruntimeYhandler_condition_type),CHKREF(YruntimeYhandler_condition_type_setter),T244,T245);
  lit_402 = YPPsym((P)"handler-info");
  T246 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_handler_info_416 = YPmet(FUNCODEREF(fun_handler_info_416),CHKREF(lit_402),T246,ENVNUL);
  T249 = BOUNDP(YruntimeYhandler_info);
  if (T249 != YPfalse) {
    T248 = CHKREF(YruntimeYhandler_info);
  } else {
    T248 = YPfalse;
  }
  T250 = fun_handler_info_416;
  T247 = CALL2(1,CHKREF(YPdefine_method),T248,T250);
  YruntimeYhandler_info = T247;
  lit_403 = YPPsym((P)"handler-info-setter");
  T253 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YruntimeYLhandler_infoG),CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T252 = fun_handler_info_setter_417 = YPmet(FUNCODEREF(fun_handler_info_setter_417),CHKREF(lit_403),T253,ENVNUL);
  T257 = BOUNDP(YruntimeYhandler_info_setter);
  if (T257 != YPfalse) {
    T256 = CHKREF(YruntimeYhandler_info_setter);
  } else {
    T256 = YPfalse;
  }
  T258 = fun_handler_info_setter_417;
  T255 = CALL2(1,CHKREF(YPdefine_method),T256,T258);
  T254 = YruntimeYhandler_info_setter = T255;
  T251 = T254;
  return T251;
}

P YruntimeY___main_6___() {
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
  T0 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_418 = YPmet(FUNCODEREF(fun_418),YPfalse,T0,ENVNUL);
  T1 = fun_418;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLhandlerG),CHKREF(YruntimeYhandler_info),CHKREF(YruntimeYhandler_info_setter),CHKREF(YruntimeYLhandler_infoG),T1);
  lit_404 = YPPsym((P)"handler-test");
  T2 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_handler_test_419 = YPmet(FUNCODEREF(fun_handler_test_419),CHKREF(lit_404),T2,ENVNUL);
  T5 = BOUNDP(YruntimeYhandler_test);
  if (T5 != YPfalse) {
    T4 = CHKREF(YruntimeYhandler_test);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_handler_test_419;
  T3 = CALL2(1,CHKREF(YPdefine_method),T4,T6);
  YruntimeYhandler_test = T3;
  lit_405 = YPPsym((P)"handler-test-setter");
  T7 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLfunG),CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_handler_test_setter_420 = YPmet(FUNCODEREF(fun_handler_test_setter_420),CHKREF(lit_405),T7,ENVNUL);
  T10 = BOUNDP(YruntimeYhandler_test_setter);
  if (T10 != YPfalse) {
    T9 = CHKREF(YruntimeYhandler_test_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_handler_test_setter_420;
  T8 = CALL2(1,CHKREF(YPdefine_method),T9,T11);
  YruntimeYhandler_test_setter = T8;
  T12 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_421 = YPmet(FUNCODEREF(fun_421),YPfalse,T12,ENVNUL);
  T13 = fun_421;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLhandlerG),CHKREF(YruntimeYhandler_test),CHKREF(YruntimeYhandler_test_setter),CHKREF(YLfunG),T13);
  lit_406 = YPPsym((P)"handler-function");
  T14 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_handler_function_422 = YPmet(FUNCODEREF(fun_handler_function_422),CHKREF(lit_406),T14,ENVNUL);
  T17 = BOUNDP(YruntimeYhandler_function);
  if (T17 != YPfalse) {
    T16 = CHKREF(YruntimeYhandler_function);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_handler_function_422;
  T15 = CALL2(1,CHKREF(YPdefine_method),T16,T18);
  YruntimeYhandler_function = T15;
  lit_407 = YPPsym((P)"handler-function-setter");
  T19 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLfunG),CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_handler_function_setter_423 = YPmet(FUNCODEREF(fun_handler_function_setter_423),CHKREF(lit_407),T19,ENVNUL);
  T22 = BOUNDP(YruntimeYhandler_function_setter);
  if (T22 != YPfalse) {
    T21 = CHKREF(YruntimeYhandler_function_setter);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_handler_function_setter_423;
  T20 = CALL2(1,CHKREF(YPdefine_method),T21,T23);
  YruntimeYhandler_function_setter = T20;
  T24 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_424 = YPmet(FUNCODEREF(fun_424),YPfalse,T24,ENVNUL);
  T25 = fun_424;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLhandlerG),CHKREF(YruntimeYhandler_function),CHKREF(YruntimeYhandler_function_setter),CHKREF(YLfunG),T25);
  lit_408 = YPPsym((P)"make-handler");
  T27 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YruntimeYLconditionG));
  T26 = YPsig(YPPlist(4,CHKREF(lit_45),CHKREF(lit_391),CHKREF(lit_165),CHKREF(lit_70)),YPPlist(4,T27,CHKREF(YruntimeYLhandler_infoG),CHKREF(YLfunG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YruntimeYLhandlerG),Ynil);
  YruntimeYmake_handler = YPmet(FUNCODEREF(YruntimeYmake_handler),CHKREF(lit_408),T26,ENVNUL);
  T28 = YruntimeYmake_handler;
  YruntimeYmake_handler = T28;
  lit_409 = YPPsym((P)"handler-active?");
  lit_410 = YPPsym((P)"handler");
  T29 = YPsig(YPPlist(1,CHKREF(lit_410)),YPPlist(1,CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  YruntimeYhandler_activeQ = YPmet(FUNCODEREF(YruntimeYhandler_activeQ),CHKREF(lit_409),T29,ENVNUL);
  T30 = YruntimeYhandler_activeQ;
  YruntimeYhandler_activeQ = T30;
  lit_411 = YPPsym((P)"handler-matches?");
  lit_412 = YPPsym((P)"condition");
  T31 = YPsig(YPPlist(2,CHKREF(lit_410),CHKREF(lit_412)),YPPlist(2,CHKREF(YruntimeYLhandlerG),CHKREF(YruntimeYLconditionG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  YruntimeYhandler_matchesQ = YPmet(FUNCODEREF(YruntimeYhandler_matchesQ),CHKREF(lit_411),T31,ENVNUL);
  T32 = YruntimeYhandler_matchesQ;
  YruntimeYhandler_matchesQ = T32;
  lit_413 = YPPsym((P)"%with-monitor");
  lit_414 = YPPsym((P)"test-fun");
  lit_415 = YPPsym((P)"user-handler");
  lit_416 = YPPsym((P)"main-fun");
  lit_417 = YPPsym((P)"_unwind-exception_");
  lit_418 = YPPsym((P)"_handler-function_");
  lit_419 = YPPsym((P)"_next-handler_");
  lit_420 = YPPsym((P)"_resume_");
  T39 = YPsig(YPPlist(1,CHKREF(lit_420)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_428 = YPmet(FUNCODEREF(fun_428),YPfalse,T39,ENVNUL);
  T38 = YPsig(YPPlist(2,CHKREF(lit_412),CHKREF(lit_419)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_Uhandler_functionU_429 = YPmet(FUNCODEREF(fun_Uhandler_functionU_429),CHKREF(lit_418),T38,ENVNUL);
  T37 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_430 = YPmet(FUNCODEREF(fun_430),YPfalse,T37,ENVNUL);
  T36 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_431 = YPmet(FUNCODEREF(fun_431),YPfalse,T36,ENVNUL);
  T35 = YPsig(YPPlist(1,CHKREF(lit_417)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_432 = YPmet(FUNCODEREF(fun_432),YPfalse,T35,ENVNUL);
  T34 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YruntimeYLconditionG));
  T33 = YPsig(YPPlist(5,CHKREF(lit_45),CHKREF(lit_391),CHKREF(lit_414),CHKREF(lit_415),CHKREF(lit_416)),YPPlist(5,T34,CHKREF(YruntimeYLhandler_infoG),CHKREF(YLfunG),CHKREF(YLfunG),CHKREF(YLfunG)),YPfalse,YPint((P)5),CHKREF(YLanyG),Ynil);
  YruntimeYPwith_monitor = YPmet(FUNCODEREF(YruntimeYPwith_monitor),CHKREF(lit_413),T33,ENVNUL);
  T40 = YruntimeYPwith_monitor;
  YruntimeYPwith_monitor = T40;
  lit_421 = YPPsym((P)"signal-handler-list");
  lit_422 = YPPsym((P)"handlers");
  T42 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_434 = YPmet(FUNCODEREF(fun_434),YPfalse,T42,ENVNUL);
  T41 = YPsig(YPPlist(2,CHKREF(lit_412),CHKREF(lit_422)),YPPlist(2,CHKREF(YruntimeYLconditionG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YruntimeYsignal_handler_list = YPmet(FUNCODEREF(YruntimeYsignal_handler_list),CHKREF(lit_421),T41,ENVNUL);
  T43 = YruntimeYsignal_handler_list;
  YruntimeYsignal_handler_list = T43;
  lit_423 = YPPsym((P)"sig");
  T44 = YPsig(YPPlist(2,CHKREF(lit_412),CHKREF(lit_3)),YPPlist(1,CHKREF(YruntimeYLconditionG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sig_436 = YPmet(FUNCODEREF(fun_sig_436),CHKREF(lit_423),T44,ENVNUL);
  T47 = BOUNDP(YruntimeYsig);
  if (T47 != YPfalse) {
    T46 = CHKREF(YruntimeYsig);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_sig_436;
  T45 = CALL2(1,CHKREF(YPdefine_method),T46,T48);
  YruntimeYsig = T45;
  T49 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_3)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sig_437 = YPmet(FUNCODEREF(fun_sig_437),CHKREF(lit_423),T49,ENVNUL);
  T52 = BOUNDP(YruntimeYsig);
  if (T52 != YPfalse) {
    T51 = CHKREF(YruntimeYsig);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_sig_437;
  T50 = CALL2(1,CHKREF(YPdefine_method),T51,T53);
  YruntimeYsig = T50;
  lit_424 = YPPsym((P)"error");
  T54 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_3)),YPPlist(1,CHKREF(YruntimeYLerrorG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_error_438 = YPmet(FUNCODEREF(fun_error_438),CHKREF(lit_424),T54,ENVNUL);
  T57 = BOUNDP(Yerror);
  if (T57 != YPfalse) {
    T56 = CHKREF(Yerror);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_error_438;
  T55 = CALL2(1,CHKREF(YPdefine_method),T56,T58);
  Yerror = T55;
  T59 = YPsig(YPPlist(2,CHKREF(lit_58),CHKREF(lit_3)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_error_439 = YPmet(FUNCODEREF(fun_error_439),CHKREF(lit_424),T59,ENVNUL);
  T62 = BOUNDP(Yerror);
  if (T62 != YPfalse) {
    T61 = CHKREF(Yerror);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_error_439;
  T60 = CALL2(1,CHKREF(YPdefine_method),T61,T63);
  Yerror = T60;
  lit_425 = YPPsym((P)"wrong-number-arguments-error");
  lit_426 = YPPsym((P)"fun");
  lit_427 = YPsb((P)"%= CALLED WITH %= ARGUMENTS EXPECTED %=");
  T64 = YPsig(YPPlist(2,CHKREF(lit_426),CHKREF(lit_341)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  Ywrong_number_arguments_error = YPmet(FUNCODEREF(Ywrong_number_arguments_error),CHKREF(lit_425),T64,ENVNUL);
  T65 = Ywrong_number_arguments_error;
  Ywrong_number_arguments_error = T65;
  lit_428 = YPPsym((P)"unknown-function-error");
  lit_429 = YPsb((P)"UNKNOWN FUNCTION %= CALLED");
  T66 = YPsig(YPPlist(1,CHKREF(lit_426)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  Yunknown_function_error = YPmet(FUNCODEREF(Yunknown_function_error),CHKREF(lit_428),T66,ENVNUL);
  T67 = Yunknown_function_error;
  Yunknown_function_error = T67;
  lit_430 = YPPsym((P)"type-error");
  lit_431 = YPPsym((P)"arg");
  lit_432 = YPsb((P)"TYPE ERROR %= SHOULD BE A %=");
  T68 = YPsig(YPPlist(2,CHKREF(lit_431),CHKREF(lit_45)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  Ytype_error = YPmet(FUNCODEREF(Ytype_error),CHKREF(lit_430),T68,ENVNUL);
  T69 = Ytype_error;
  Ytype_error = T69;
  lit_433 = YPPsym((P)"incongruent-method-error");
  lit_434 = YPPsym((P)"gen");
  lit_435 = YPPsym((P)"met");
  T70 = YPsig(YPPlist(2,CHKREF(lit_434),CHKREF(lit_435)),YPPlist(2,CHKREF(YLgenG),CHKREF(YLmetG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  Yincongruent_method_error = YPmet(FUNCODEREF(Yincongruent_method_error),CHKREF(lit_433),T70,ENVNUL);
  T71 = Yincongruent_method_error;
  Yincongruent_method_error = T71;
  lit_436 = YPPsym((P)"do-handlers-of-type");
  T74 = YPsig(YPPlist(1,CHKREF(lit_422)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_search_444 = YPmet(FUNCODEREF(fun_search_444),CHKREF(lit_114),T74,ENVNUL);
  T73 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YruntimeYLconditionG));
  T72 = YPsig(YPPlist(2,CHKREF(lit_45),CHKREF(lit_70)),YPPlist(2,T73,CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YruntimeYdo_handlers_of_type = YPmet(FUNCODEREF(YruntimeYdo_handlers_of_type),CHKREF(lit_436),T72,ENVNUL);
  T75 = YruntimeYdo_handlers_of_type;
  YruntimeYdo_handlers_of_type = T75;
  lit_437 = YPPsym((P)"list-handlers");
  lit_438 = YPsb((P)"%d. %s.\n");
  T78 = YPsig(YPPlist(1,CHKREF(lit_410)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_446 = YPmet(FUNCODEREF(fun_446),YPfalse,T78,ENVNUL);
  T77 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YruntimeYLconditionG));
  T76 = YPsig(YPPlist(2,CHKREF(lit_45),CHKREF(lit_366)),YPPlist(2,T77,CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLbufG),Ynil);
  YruntimeYlist_handlers = YPmet(FUNCODEREF(YruntimeYlist_handlers),CHKREF(lit_437),T76,ENVNUL);
  T79 = YruntimeYlist_handlers;
  YruntimeYlist_handlers = T79;
  lit_439 = YPPsym((P)"invoke-handler-interactively");
  lit_440 = YPsb((P)"Handler %= does not match condition %=");
  lit_441 = YPsb((P)"Handler %= is not installed");
  T82 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_448 = YPmet(FUNCODEREF(fun_448),YPfalse,T82,ENVNUL);
  T81 = YPsig(YPPlist(1,CHKREF(lit_422)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_search_449 = YPmet(FUNCODEREF(fun_search_449),CHKREF(lit_114),T81,ENVNUL);
  T80 = YPsig(YPPlist(3,CHKREF(lit_410),CHKREF(lit_159),CHKREF(lit_366)),YPPlist(3,CHKREF(YruntimeYLhandlerG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  YruntimeYinvoke_handler_interactively = YPmet(FUNCODEREF(YruntimeYinvoke_handler_interactively),CHKREF(lit_439),T80,ENVNUL);
  T83 = YruntimeYinvoke_handler_interactively;
  YruntimeYinvoke_handler_interactively = T83;
  lit_442 = YPPsym((P)"choose-handler");
  lit_443 = YPsb((P)"Please pick a handler: ");
  lit_444 = YPsb((P)"No such handler %d");
  T85 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YruntimeYLconditionG));
  T84 = YPsig(YPPlist(3,CHKREF(lit_45),CHKREF(lit_159),CHKREF(lit_366)),YPPlist(3,T85,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  YruntimeYchoose_handler = YPmet(FUNCODEREF(YruntimeYchoose_handler),CHKREF(lit_442),T84,ENVNUL);
  T86 = YruntimeYchoose_handler;
  YruntimeYchoose_handler = T86;
  YTrestarts_okQT = YPtrue;
  lit_445 = YPPsym((P)"locative-value");
  T87 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlocG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YruntimeYlocative_value = YPmet(FUNCODEREF(YruntimeYlocative_value),CHKREF(lit_445),T87,ENVNUL);
  T88 = YruntimeYlocative_value;
  YruntimeYlocative_value = T88;
  lit_446 = YPPsym((P)"locative-value-setter");
  T89 = YPsig(YPPlist(2,CHKREF(lit_185),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlocG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YruntimeYlocative_value_setter = YPmet(FUNCODEREF(YruntimeYlocative_value_setter),CHKREF(lit_446),T89,ENVNUL);
  T90 = YruntimeYlocative_value_setter;
  YruntimeYlocative_value_setter = T90;
  lit_447 = YPPsym((P)"app-filename");
  T91 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  YruntimeYapp_filename = YPmet(FUNCODEREF(YruntimeYapp_filename),CHKREF(lit_447),T91,ENVNUL);
  T92 = YruntimeYapp_filename;
  YruntimeYapp_filename = T92;
  lit_448 = YPPsym((P)"app-args");
  T93 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  YruntimeYapp_args = YPmet(FUNCODEREF(YruntimeYapp_args),CHKREF(lit_448),T93,ENVNUL);
  T94 = YruntimeYapp_args;
  YruntimeYapp_args = T94;
  lit_449 = YPPsym((P)"<port>");
  T96 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T95 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_449),T96);
  YruntimeYLportG = T95;
  lit_450 = YPPsym((P)"port-handle");
  T97 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLportG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_port_handle_456 = YPmet(FUNCODEREF(fun_port_handle_456),CHKREF(lit_450),T97,ENVNUL);
  T100 = BOUNDP(YruntimeYport_handle);
  if (T100 != YPfalse) {
    T99 = CHKREF(YruntimeYport_handle);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_port_handle_456;
  T98 = CALL2(1,CHKREF(YPdefine_method),T99,T101);
  YruntimeYport_handle = T98;
  lit_451 = YPPsym((P)"port-handle-setter");
  T102 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLanyG),CHKREF(YruntimeYLportG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_port_handle_setter_457 = YPmet(FUNCODEREF(fun_port_handle_setter_457),CHKREF(lit_451),T102,ENVNUL);
  T105 = BOUNDP(YruntimeYport_handle_setter);
  if (T105 != YPfalse) {
    T104 = CHKREF(YruntimeYport_handle_setter);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_port_handle_setter_457;
  T103 = CALL2(1,CHKREF(YPdefine_method),T104,T106);
  YruntimeYport_handle_setter = T103;
  T107 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_458 = YPmet(FUNCODEREF(fun_458),YPfalse,T107,ENVNUL);
  T108 = fun_458;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLportG),CHKREF(YruntimeYport_handle),CHKREF(YruntimeYport_handle_setter),CHKREF(YLanyG),T108);
  lit_452 = YPPsym((P)"<input-port>");
  T110 = (P)YPpair(CHKREF(YruntimeYLportG),Ynil);
  T109 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_452),T110);
  YruntimeYLinput_portG = T109;
  lit_453 = YPPsym((P)"<output-port>");
  T112 = (P)YPpair(CHKREF(YruntimeYLportG),Ynil);
  T111 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_453),T112);
  YruntimeYLoutput_portG = T111;
  lit_454 = YPPsym((P)"<file-port>");
  T114 = (P)YPpair(CHKREF(YruntimeYLportG),Ynil);
  T113 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_454),T114);
  YruntimeYLfile_portG = T113;
  lit_455 = YPPsym((P)"<file-input-port>");
  T117 = (P)YPpair(CHKREF(YruntimeYLinput_portG),Ynil);
  T116 = (P)YPpair(CHKREF(YruntimeYLfile_portG),T117);
  T115 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_455),T116);
  YruntimeYLfile_input_portG = T115;
  lit_456 = YPPsym((P)"<file-output-port>");
  T120 = (P)YPpair(CHKREF(YruntimeYLoutput_portG),Ynil);
  T119 = (P)YPpair(CHKREF(YruntimeYLfile_portG),T120);
  T118 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_456),T119);
  YruntimeYLfile_output_portG = T118;
  lit_457 = YPPsym((P)"open-input-file");
  lit_458 = YPPsym((P)"filename");
  T121 = YPsig(YPPlist(1,CHKREF(lit_458)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YruntimeYLfile_input_portG),Ynil);
  fun_open_input_file_459 = YPmet(FUNCODEREF(fun_open_input_file_459),CHKREF(lit_457),T121,ENVNUL);
  T124 = BOUNDP(YruntimeYopen_input_file);
  if (T124 != YPfalse) {
    T123 = CHKREF(YruntimeYopen_input_file);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_open_input_file_459;
  T122 = CALL2(1,CHKREF(YPdefine_method),T123,T125);
  YruntimeYopen_input_file = T122;
  lit_459 = YPPsym((P)"file-opening-error");
  lit_460 = YPsb((P)"Cannot open file named %=");
  T126 = YPsig(YPPlist(1,CHKREF(lit_458)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_file_opening_error_460 = YPmet(FUNCODEREF(fun_file_opening_error_460),CHKREF(lit_459),T126,ENVNUL);
  T129 = BOUNDP(Yfile_opening_error);
  if (T129 != YPfalse) {
    T128 = CHKREF(Yfile_opening_error);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_file_opening_error_460;
  T127 = CALL2(1,CHKREF(YPdefine_method),T128,T130);
  Yfile_opening_error = T127;
  lit_461 = YPPsym((P)"open-output-file");
  T131 = YPsig(YPPlist(1,CHKREF(lit_458)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YruntimeYLfile_output_portG),Ynil);
  fun_open_output_file_461 = YPmet(FUNCODEREF(fun_open_output_file_461),CHKREF(lit_461),T131,ENVNUL);
  T134 = BOUNDP(YruntimeYopen_output_file);
  if (T134 != YPfalse) {
    T133 = CHKREF(YruntimeYopen_output_file);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_open_output_file_461;
  T132 = CALL2(1,CHKREF(YPdefine_method),T133,T135);
  YruntimeYopen_output_file = T132;
  lit_462 = YPPsym((P)"close-input-port");
  lit_463 = YPPsym((P)"port");
  T136 = YPsig(YPPlist(1,CHKREF(lit_463)),YPPlist(1,CHKREF(YruntimeYLfile_input_portG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_close_input_port_462 = YPmet(FUNCODEREF(fun_close_input_port_462),CHKREF(lit_462),T136,ENVNUL);
  T139 = BOUNDP(YruntimeYclose_input_port);
  if (T139 != YPfalse) {
    T138 = CHKREF(YruntimeYclose_input_port);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_close_input_port_462;
  T137 = CALL2(1,CHKREF(YPdefine_method),T138,T140);
  YruntimeYclose_input_port = T137;
  lit_464 = YPPsym((P)"close-output-port");
  T141 = YPsig(YPPlist(1,CHKREF(lit_463)),YPPlist(1,CHKREF(YruntimeYLfile_output_portG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_close_output_port_463 = YPmet(FUNCODEREF(fun_close_output_port_463),CHKREF(lit_464),T141,ENVNUL);
  T144 = BOUNDP(YruntimeYclose_output_port);
  if (T144 != YPfalse) {
    T143 = CHKREF(YruntimeYclose_output_port);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_close_output_port_463;
  T142 = CALL2(1,CHKREF(YPdefine_method),T143,T145);
  YruntimeYclose_output_port = T142;
  lit_465 = YPPsym((P)"call-with-input-file");
  T148 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_464 = YPmet(FUNCODEREF(fun_464),YPfalse,T148,ENVNUL);
  T147 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_465 = YPmet(FUNCODEREF(fun_465),YPfalse,T147,ENVNUL);
  T146 = YPsig(YPPlist(2,CHKREF(lit_93),CHKREF(lit_1)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_call_with_input_file_466 = YPmet(FUNCODEREF(fun_call_with_input_file_466),CHKREF(lit_465),T146,ENVNUL);
  T151 = BOUNDP(YruntimeYcall_with_input_file);
  if (T151 != YPfalse) {
    T150 = CHKREF(YruntimeYcall_with_input_file);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_call_with_input_file_466;
  T149 = CALL2(1,CHKREF(YPdefine_method),T150,T152);
  YruntimeYcall_with_input_file = T149;
  lit_466 = YPPsym((P)"call-with-output-file");
  T155 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_467 = YPmet(FUNCODEREF(fun_467),YPfalse,T155,ENVNUL);
  T154 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_468 = YPmet(FUNCODEREF(fun_468),YPfalse,T154,ENVNUL);
  T153 = YPsig(YPPlist(2,CHKREF(lit_93),CHKREF(lit_1)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_call_with_output_file_469 = YPmet(FUNCODEREF(fun_call_with_output_file_469),CHKREF(lit_466),T153,ENVNUL);
  T158 = BOUNDP(YruntimeYcall_with_output_file);
  if (T158 != YPfalse) {
    T157 = CHKREF(YruntimeYcall_with_output_file);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_call_with_output_file_469;
  T156 = CALL2(1,CHKREF(YPdefine_method),T157,T159);
  YruntimeYcall_with_output_file = T156;
  T161 = (P)YPpair(CHKREF(YruntimeYLfile_input_portG),Ynil);
  T162 = (P)YPpair(CHKREF(YruntimeYport_handle),Ynil);
  T164 = (P)YPcurrent_input_port();
  T163 = (P)YPpair(T164,Ynil);
  T160 = CALL3(1,CHKREF(YPisa),T161,T162,T163);
  YruntimeYin = T160;
  T166 = (P)YPpair(CHKREF(YruntimeYLfile_output_portG),Ynil);
  T167 = (P)YPpair(CHKREF(YruntimeYport_handle),Ynil);
  T169 = (P)YPcurrent_output_port();
  T168 = (P)YPpair(T169,Ynil);
  T165 = CALL3(1,CHKREF(YPisa),T166,T167,T168);
  YruntimeYout = T165;
  lit_467 = YPPsym((P)"eof-object?");
  T170 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_eof_objectQ_470 = YPmet(FUNCODEREF(fun_eof_objectQ_470),CHKREF(lit_467),T170,ENVNUL);
  T173 = BOUNDP(YruntimeYeof_objectQ);
  if (T173 != YPfalse) {
    T172 = CHKREF(YruntimeYeof_objectQ);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_eof_objectQ_470;
  T171 = CALL2(1,CHKREF(YPdefine_method),T172,T174);
  YruntimeYeof_objectQ = T171;
  T175 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_eof_objectQ_471 = YPmet(FUNCODEREF(fun_eof_objectQ_471),CHKREF(lit_467),T175,ENVNUL);
  T178 = BOUNDP(YruntimeYeof_objectQ);
  if (T178 != YPfalse) {
    T177 = CHKREF(YruntimeYeof_objectQ);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_eof_objectQ_471;
  T176 = CALL2(1,CHKREF(YPdefine_method),T177,T179);
  YruntimeYeof_objectQ = T176;
  lit_468 = YPPsym((P)"eof-object");
  T180 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLchrG),Ynil);
  fun_eof_object_472 = YPmet(FUNCODEREF(fun_eof_object_472),CHKREF(lit_468),T180,ENVNUL);
  T183 = BOUNDP(YruntimeYeof_object);
  if (T183 != YPfalse) {
    T182 = CHKREF(YruntimeYeof_object);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_eof_object_472;
  T181 = CALL2(1,CHKREF(YPdefine_method),T182,T184);
  YruntimeYeof_object = T181;
  lit_469 = YPPsym((P)"read-char");
  T185 = YPsig(YPPlist(1,CHKREF(lit_463)),YPPlist(1,CHKREF(YruntimeYLfile_input_portG)),YPfalse,YPint((P)1),CHKREF(YLchrG),Ynil);
  fun_read_char_473 = YPmet(FUNCODEREF(fun_read_char_473),CHKREF(lit_469),T185,ENVNUL);
  T188 = BOUNDP(YruntimeYread_char);
  if (T188 != YPfalse) {
    T187 = CHKREF(YruntimeYread_char);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_read_char_473;
  T186 = CALL2(1,CHKREF(YPdefine_method),T187,T189);
  YruntimeYread_char = T186;
  lit_470 = YPPsym((P)"peek-char");
  T190 = YPsig(YPPlist(1,CHKREF(lit_463)),YPPlist(1,CHKREF(YruntimeYLfile_input_portG)),YPfalse,YPint((P)1),CHKREF(YLchrG),Ynil);
  fun_peek_char_474 = YPmet(FUNCODEREF(fun_peek_char_474),CHKREF(lit_470),T190,ENVNUL);
  T193 = BOUNDP(YruntimeYpeek_char);
  if (T193 != YPfalse) {
    T192 = CHKREF(YruntimeYpeek_char);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_peek_char_474;
  T191 = CALL2(1,CHKREF(YPdefine_method),T192,T194);
  YruntimeYpeek_char = T191;
  lit_471 = YPPsym((P)"char-ready?");
  T195 = YPsig(YPPlist(1,CHKREF(lit_463)),YPPlist(1,CHKREF(YruntimeYLfile_input_portG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_char_readyQ_475 = YPmet(FUNCODEREF(fun_char_readyQ_475),CHKREF(lit_471),T195,ENVNUL);
  T198 = BOUNDP(YruntimeYchar_readyQ);
  if (T198 != YPfalse) {
    T197 = CHKREF(YruntimeYchar_readyQ);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_char_readyQ_475;
  T196 = CALL2(1,CHKREF(YPdefine_method),T197,T199);
  YruntimeYchar_readyQ = T196;
  lit_472 = YPPsym((P)"newline");
  T200 = YPsig(YPPlist(1,CHKREF(lit_463)),YPPlist(1,CHKREF(YruntimeYLoutput_portG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_newline_476 = YPmet(FUNCODEREF(fun_newline_476),CHKREF(lit_472),T200,ENVNUL);
  T203 = BOUNDP(YruntimeYnewline);
  if (T203 != YPfalse) {
    T202 = CHKREF(YruntimeYnewline);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_newline_476;
  T201 = CALL2(1,CHKREF(YPdefine_method),T202,T204);
  YruntimeYnewline = T201;
  lit_473 = YPPsym((P)"force-output");
  T205 = YPsig(YPPlist(1,CHKREF(lit_463)),YPPlist(1,CHKREF(YruntimeYLfile_output_portG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_force_output_477 = YPmet(FUNCODEREF(fun_force_output_477),CHKREF(lit_473),T205,ENVNUL);
  T208 = BOUNDP(YruntimeYforce_output);
  if (T208 != YPfalse) {
    T207 = CHKREF(YruntimeYforce_output);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_force_output_477;
  T206 = CALL2(1,CHKREF(YPdefine_method),T207,T209);
  YruntimeYforce_output = T206;
  lit_474 = YPPsym((P)"write-char");
  T210 = YPsig(YPPlist(2,CHKREF(lit_463),CHKREF(lit_58)),YPPlist(2,CHKREF(YruntimeYLfile_output_portG),CHKREF(YLchrG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_write_char_478 = YPmet(FUNCODEREF(fun_write_char_478),CHKREF(lit_474),T210,ENVNUL);
  T213 = BOUNDP(YruntimeYwrite_char);
  if (T213 != YPfalse) {
    T212 = CHKREF(YruntimeYwrite_char);
  } else {
    T212 = YPfalse;
  }
  T214 = fun_write_char_478;
  T211 = CALL2(1,CHKREF(YPdefine_method),T212,T214);
  YruntimeYwrite_char = T211;
  lit_475 = YPPsym((P)"write-string");
  T215 = YPsig(YPPlist(2,CHKREF(lit_463),CHKREF(lit_7)),YPPlist(2,CHKREF(YruntimeYLfile_output_portG),CHKREF(YLstrG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_write_string_479 = YPmet(FUNCODEREF(fun_write_string_479),CHKREF(lit_475),T215,ENVNUL);
  T218 = BOUNDP(YruntimeYwrite_string);
  if (T218 != YPfalse) {
    T217 = CHKREF(YruntimeYwrite_string);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_write_string_479;
  T216 = CALL2(1,CHKREF(YPdefine_method),T217,T219);
  YruntimeYwrite_string = T216;
  lit_476 = YPPsym((P)"<string-port>");
  T221 = (P)YPpair(CHKREF(YruntimeYLportG),Ynil);
  T220 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_476),T221);
  YruntimeYLstring_portG = T220;
  lit_477 = YPPsym((P)"port-guts");
  T222 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLstring_portG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_port_guts_480 = YPmet(FUNCODEREF(fun_port_guts_480),CHKREF(lit_477),T222,ENVNUL);
  T225 = BOUNDP(YruntimeYport_guts);
  if (T225 != YPfalse) {
    T224 = CHKREF(YruntimeYport_guts);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_port_guts_480;
  T223 = CALL2(1,CHKREF(YPdefine_method),T224,T226);
  YruntimeYport_guts = T223;
  lit_478 = YPPsym((P)"port-guts-setter");
  T227 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLseqG),CHKREF(YruntimeYLstring_portG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_port_guts_setter_481 = YPmet(FUNCODEREF(fun_port_guts_setter_481),CHKREF(lit_478),T227,ENVNUL);
  T230 = BOUNDP(YruntimeYport_guts_setter);
  if (T230 != YPfalse) {
    T229 = CHKREF(YruntimeYport_guts_setter);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_port_guts_setter_481;
  T228 = CALL2(1,CHKREF(YPdefine_method),T229,T231);
  YruntimeYport_guts_setter = T228;
  T232 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_482 = YPmet(FUNCODEREF(fun_482),YPfalse,T232,ENVNUL);
  T233 = fun_482;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLstring_portG),CHKREF(YruntimeYport_guts),CHKREF(YruntimeYport_guts_setter),CHKREF(YLseqG),T233);
  lit_479 = YPPsym((P)"port-contents");
  T234 = YPsig(YPPlist(1,CHKREF(lit_463)),YPPlist(1,CHKREF(YruntimeYLstring_portG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_port_contents_483 = YPmet(FUNCODEREF(fun_port_contents_483),CHKREF(lit_479),T234,ENVNUL);
  T237 = BOUNDP(YruntimeYport_contents);
  if (T237 != YPfalse) {
    T236 = CHKREF(YruntimeYport_contents);
  } else {
    T236 = YPfalse;
  }
  T238 = fun_port_contents_483;
  T235 = CALL2(1,CHKREF(YPdefine_method),T236,T238);
  YruntimeYport_contents = T235;
  lit_480 = YPPsym((P)"<string-input-port>");
  T243 = (P)YPpair(CHKREF(YruntimeYLinput_portG),Ynil);
  T242 = (P)YPpair(CHKREF(YruntimeYLstring_portG),T243);
  T241 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_480),T242);
  T240 = YruntimeYLstring_input_portG = T241;
  T239 = T240;
  return T239;
}

P YruntimeY___main_7___() {
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
  lit_481 = YPPsym((P)"port-index");
  T0 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLstring_input_portG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_port_index_484 = YPmet(FUNCODEREF(fun_port_index_484),CHKREF(lit_481),T0,ENVNUL);
  T3 = BOUNDP(YruntimeYport_index);
  if (T3 != YPfalse) {
    T2 = CHKREF(YruntimeYport_index);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_port_index_484;
  T1 = CALL2(1,CHKREF(YPdefine_method),T2,T4);
  YruntimeYport_index = T1;
  lit_482 = YPPsym((P)"port-index-setter");
  T5 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLstring_input_portG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_port_index_setter_485 = YPmet(FUNCODEREF(fun_port_index_setter_485),CHKREF(lit_482),T5,ENVNUL);
  T8 = BOUNDP(YruntimeYport_index_setter);
  if (T8 != YPfalse) {
    T7 = CHKREF(YruntimeYport_index_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_port_index_setter_485;
  T6 = CALL2(1,CHKREF(YPdefine_method),T7,T9);
  YruntimeYport_index_setter = T6;
  T10 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_486 = YPmet(FUNCODEREF(fun_486),YPfalse,T10,ENVNUL);
  T11 = fun_486;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLstring_input_portG),CHKREF(YruntimeYport_index),CHKREF(YruntimeYport_index_setter),CHKREF(YLintG),T11);
  lit_483 = YPPsym((P)"<string-output-port>");
  T14 = (P)YPpair(CHKREF(YruntimeYLoutput_portG),Ynil);
  T13 = (P)YPpair(CHKREF(YruntimeYLstring_portG),T14);
  T12 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_483),T13);
  YruntimeYLstring_output_portG = T12;
  lit_484 = YPPsym((P)"call-with-string-input-port");
  T15 = YPsig(YPPlist(2,CHKREF(lit_93),CHKREF(lit_1)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_call_with_string_input_port_487 = YPmet(FUNCODEREF(fun_call_with_string_input_port_487),CHKREF(lit_484),T15,ENVNUL);
  T18 = BOUNDP(YruntimeYcall_with_string_input_port);
  if (T18 != YPfalse) {
    T17 = CHKREF(YruntimeYcall_with_string_input_port);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_call_with_string_input_port_487;
  T16 = CALL2(1,CHKREF(YPdefine_method),T17,T19);
  YruntimeYcall_with_string_input_port = T16;
  lit_485 = YPPsym((P)"call-with-string-output-port");
  T20 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_call_with_string_output_port_488 = YPmet(FUNCODEREF(fun_call_with_string_output_port_488),CHKREF(lit_485),T20,ENVNUL);
  T23 = BOUNDP(YruntimeYcall_with_string_output_port);
  if (T23 != YPfalse) {
    T22 = CHKREF(YruntimeYcall_with_string_output_port);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_call_with_string_output_port_488;
  T21 = CALL2(1,CHKREF(YPdefine_method),T22,T24);
  YruntimeYcall_with_string_output_port = T21;
  T25 = YPsig(YPPlist(1,CHKREF(lit_463)),YPPlist(1,CHKREF(YruntimeYLstring_input_portG)),YPfalse,YPint((P)1),CHKREF(YLchrG),Ynil);
  fun_peek_char_489 = YPmet(FUNCODEREF(fun_peek_char_489),CHKREF(lit_470),T25,ENVNUL);
  T28 = BOUNDP(YruntimeYpeek_char);
  if (T28 != YPfalse) {
    T27 = CHKREF(YruntimeYpeek_char);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_peek_char_489;
  T26 = CALL2(1,CHKREF(YPdefine_method),T27,T29);
  YruntimeYpeek_char = T26;
  T30 = YPsig(YPPlist(1,CHKREF(lit_463)),YPPlist(1,CHKREF(YruntimeYLstring_input_portG)),YPfalse,YPint((P)1),CHKREF(YLchrG),Ynil);
  fun_read_char_490 = YPmet(FUNCODEREF(fun_read_char_490),CHKREF(lit_469),T30,ENVNUL);
  T33 = BOUNDP(YruntimeYread_char);
  if (T33 != YPfalse) {
    T32 = CHKREF(YruntimeYread_char);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_read_char_490;
  T31 = CALL2(1,CHKREF(YPdefine_method),T32,T34);
  YruntimeYread_char = T31;
  T35 = YPsig(YPPlist(1,CHKREF(lit_463)),YPPlist(1,CHKREF(YruntimeYLstring_input_portG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_char_readyQ_491 = YPmet(FUNCODEREF(fun_char_readyQ_491),CHKREF(lit_471),T35,ENVNUL);
  T38 = BOUNDP(YruntimeYchar_readyQ);
  if (T38 != YPfalse) {
    T37 = CHKREF(YruntimeYchar_readyQ);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_char_readyQ_491;
  T36 = CALL2(1,CHKREF(YPdefine_method),T37,T39);
  YruntimeYchar_readyQ = T36;
  T40 = YPsig(YPPlist(2,CHKREF(lit_463),CHKREF(lit_58)),YPPlist(2,CHKREF(YruntimeYLstring_output_portG),CHKREF(YLchrG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_write_char_492 = YPmet(FUNCODEREF(fun_write_char_492),CHKREF(lit_474),T40,ENVNUL);
  T43 = BOUNDP(YruntimeYwrite_char);
  if (T43 != YPfalse) {
    T42 = CHKREF(YruntimeYwrite_char);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_write_char_492;
  T41 = CALL2(1,CHKREF(YPdefine_method),T42,T44);
  YruntimeYwrite_char = T41;
  T45 = YPsig(YPPlist(2,CHKREF(lit_463),CHKREF(lit_7)),YPPlist(2,CHKREF(YruntimeYLstring_output_portG),CHKREF(YLstrG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_write_string_493 = YPmet(FUNCODEREF(fun_write_string_493),CHKREF(lit_475),T45,ENVNUL);
  T48 = BOUNDP(YruntimeYwrite_string);
  if (T48 != YPfalse) {
    T47 = CHKREF(YruntimeYwrite_string);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_write_string_493;
  T46 = CALL2(1,CHKREF(YPdefine_method),T47,T49);
  YruntimeYwrite_string = T46;
  lit_486 = YPPlist(275,YPint((P)3),YPint((P)5),YPint((P)11),YPint((P)17),YPint((P)29),YPint((P)41),YPint((P)47),YPint((P)59),YPint((P)71),YPint((P)101),YPint((P)107),YPint((P)137),YPint((P)149),YPint((P)167),YPint((P)179),YPint((P)191),YPint((P)197),YPint((P)227),YPint((P)239),YPint((P)269),YPint((P)281),YPint((P)311),YPint((P)347),YPint((P)419),YPint((P)431),YPint((P)461),YPint((P)521),YPint((P)569),YPint((P)599),YPint((P)617),YPint((P)641),YPint((P)659),YPint((P)809),YPint((P)839),YPint((P)881),YPint((P)1019),YPint((P)1049),YPint((P)1091),YPint((P)1151),YPint((P)1229),YPint((P)1277),YPint((P)1319),YPint((P)1367),YPint((P)1427),YPint((P)1481),YPint((P)1607),YPint((P)1667),YPint((P)1721),YPint((P)1787),YPint((P)1871),YPint((P)1931),YPint((P)1997),YPint((P)2081),YPint((P)2141),YPint((P)2207),YPint((P)2267),YPint((P)2339),YPint((P)2549),YPint((P)2657),YPint((P)2729),YPint((P)2801),YPint((P)2969),YPint((P)3119),YPint((P)3251),YPint((P)3359),YPint((P)3461),YPint((P)3557),YPint((P)3671),YPint((P)3767),YPint((P)3917),YPint((P)4019),YPint((P)4127),YPint((P)4241),YPint((P)4421),YPint((P)4547),YPint((P)4721),YPint((P)4931),YPint((P)5099),YPint((P)5231),YPint((P)5417),YPint((P)5639),YPint((P)5849),YPint((P)6089),YPint((P)6269),YPint((P)6449),YPint((P)6659),YPint((P)6827),YPint((P)7127),YPint((P)7307),YPint((P)7547),YPint((P)7757),YPint((P)8009),YPint((P)8219),YPint((P)8429),YPint((P)8819),YPint((P)9041),YPint((P)9281),YPint((P)9629),YPint((P)9929),YPint((P)10271),YPint((P)10529),YPint((P)10859),YPint((P)11159),YPint((P)11447),YPint((P)11777),YPint((P)12107),YPint((P)12539),YPint((P)12917),YPint((P)13337),YPint((P)13679),YPint((P)14081),YPint((P)14447),YPint((P)14867),YPint((P)15269),YPint((P)15731),YPint((P)16139),YPint((P)16631),YPint((P)17189),YPint((P)17657),YPint((P)18119),YPint((P)18911),YPint((P)19421),YPint((P)19961),YPint((P)20477),YPint((P)21011),YPint((P)21557),YPint((P)22109),YPint((P)22697),YPint((P)23291),YPint((P)23909),YPint((P)24917),YPint((P)25577),YPint((P)26249),YPint((P)26951),YPint((P)27689),YPint((P)28409),YPint((P)29129),YPint((P)29879),YPint((P)30839),YPint((P)31721),YPint((P)32531),YPint((P)33347),YPint((P)34211),YPint((P)35081),YPint((P)36011),YPint((P)36929),YPint((P)37991),YPint((P)39041),YPint((P)40037),YPint((P)41141),YPint((P)42179),YPint((P)43319),YPint((P)44531),YPint((P)45821),YPint((P)47057),YPint((P)48311),YPint((P)49529),YPint((P)50891),YPint((P)52181),YPint((P)53549),YPint((P)54917),YPint((P)56477),YPint((P)57899),YPint((P)59357),YPint((P)60887),YPint((P)62927),YPint((P)64577),YPint((P)66359),YPint((P)68111),YPint((P)69827),YPint((P)71711),YPint((P)73607),YPint((P)75539),YPint((P)77477),YPint((P)79559),YPint((P)81551),YPint((P)83639),YPint((P)85817),YPint((P)88001),YPint((P)90371),YPint((P)92639),YPint((P)95087),YPint((P)97499),YPint((P)99989),YPint((P)102497),YPint((P)105227),YPint((P)108011),YPint((P)110729),YPint((P)113537),YPint((P)116531),YPint((P)119549),YPint((P)122597),YPint((P)125789),YPint((P)128939),YPint((P)132329),YPint((P)135647),YPint((P)139121),YPint((P)142607),YPint((P)146297),YPint((P)149969),YPint((P)153887),YPint((P)157769),YPint((P)161729),YPint((P)166301),YPint((P)170537),YPint((P)174929),YPint((P)179381),YPint((P)183917),YPint((P)188831),YPint((P)193601),YPint((P)198461),YPint((P)203429),YPint((P)208589),YPint((P)213947),YPint((P)219311),YPint((P)224909),YPint((P)230561),YPint((P)236477),YPint((P)242447),YPint((P)248639),YPint((P)254927),YPint((P)261431),YPint((P)268517),YPint((P)275321),YPint((P)282239),YPint((P)289841),YPint((P)297467),YPint((P)304979),YPint((P)312617),YPint((P)320561),YPint((P)328589),YPint((P)336827),YPint((P)345461),YPint((P)354251),YPint((P)363149),YPint((P)372269),YPint((P)381629),YPint((P)391217),YPint((P)401309),YPint((P)411527),YPint((P)422087),YPint((P)432659),YPint((P)443561),YPint((P)454709),YPint((P)466181),YPint((P)478067),YPint((P)490031),YPint((P)502499),YPint((P)515087),YPint((P)527981),YPint((P)541361),YPint((P)555041),YPint((P)569081),YPint((P)583337),YPint((P)598049),YPint((P)613007),YPint((P)628679),YPint((P)644489),YPint((P)660617),YPint((P)677231),YPint((P)694259),YPint((P)711707),YPint((P)729557),YPint((P)747827),YPint((P)766541),YPint((P)785777),YPint((P)805499),YPint((P)825827),YPint((P)846749),YPint((P)868121),YPint((P)889871),YPint((P)912449),YPint((P)935591),YPint((P)959207),YPint((P)983327));
  T50 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLvecG),CHKREF(lit_486));
  YruntimeYTtwin_primesT = T50;
  lit_487 = YPPsym((P)"<simple-table-vector>");
  T52 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T51 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_487),T52);
  YruntimeYLsimple_table_vectorG = T51;
  lit_488 = YPPsym((P)"%vacated");
  T53 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_Pvacated_494 = YPmet(FUNCODEREF(fun_Pvacated_494),CHKREF(lit_488),T53,ENVNUL);
  T56 = BOUNDP(YruntimeYPvacated);
  if (T56 != YPfalse) {
    T55 = CHKREF(YruntimeYPvacated);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_Pvacated_494;
  T54 = CALL2(1,CHKREF(YPdefine_method),T55,T57);
  YruntimeYPvacated = T54;
  lit_489 = YPPsym((P)"%vacated-setter");
  T58 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_Pvacated_setter_495 = YPmet(FUNCODEREF(fun_Pvacated_setter_495),CHKREF(lit_489),T58,ENVNUL);
  T61 = BOUNDP(YruntimeYPvacated_setter);
  if (T61 != YPfalse) {
    T60 = CHKREF(YruntimeYPvacated_setter);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_Pvacated_setter_495;
  T59 = CALL2(1,CHKREF(YPdefine_method),T60,T62);
  YruntimeYPvacated_setter = T59;
  T63 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_496 = YPmet(FUNCODEREF(fun_496),YPfalse,T63,ENVNUL);
  T64 = fun_496;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYPvacated),CHKREF(YruntimeYPvacated_setter),CHKREF(YLintG),T64);
  lit_490 = YPPsym((P)"%primary-modulus");
  T65 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_Pprimary_modulus_497 = YPmet(FUNCODEREF(fun_Pprimary_modulus_497),CHKREF(lit_490),T65,ENVNUL);
  T68 = BOUNDP(YruntimeYPprimary_modulus);
  if (T68 != YPfalse) {
    T67 = CHKREF(YruntimeYPprimary_modulus);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_Pprimary_modulus_497;
  T66 = CALL2(1,CHKREF(YPdefine_method),T67,T69);
  YruntimeYPprimary_modulus = T66;
  lit_491 = YPPsym((P)"%primary-modulus-setter");
  T70 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_Pprimary_modulus_setter_498 = YPmet(FUNCODEREF(fun_Pprimary_modulus_setter_498),CHKREF(lit_491),T70,ENVNUL);
  T73 = BOUNDP(YruntimeYPprimary_modulus_setter);
  if (T73 != YPfalse) {
    T72 = CHKREF(YruntimeYPprimary_modulus_setter);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_Pprimary_modulus_setter_498;
  T71 = CALL2(1,CHKREF(YPdefine_method),T72,T74);
  YruntimeYPprimary_modulus_setter = T71;
  T75 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_499 = YPmet(FUNCODEREF(fun_499),YPfalse,T75,ENVNUL);
  T76 = fun_499;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYPprimary_modulus),CHKREF(YruntimeYPprimary_modulus_setter),CHKREF(YLintG),T76);
  lit_492 = YPPsym((P)"%secondary-modulus");
  T77 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_Psecondary_modulus_500 = YPmet(FUNCODEREF(fun_Psecondary_modulus_500),CHKREF(lit_492),T77,ENVNUL);
  T80 = BOUNDP(YruntimeYPsecondary_modulus);
  if (T80 != YPfalse) {
    T79 = CHKREF(YruntimeYPsecondary_modulus);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_Psecondary_modulus_500;
  T78 = CALL2(1,CHKREF(YPdefine_method),T79,T81);
  YruntimeYPsecondary_modulus = T78;
  lit_493 = YPPsym((P)"%secondary-modulus-setter");
  T82 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_Psecondary_modulus_setter_501 = YPmet(FUNCODEREF(fun_Psecondary_modulus_setter_501),CHKREF(lit_493),T82,ENVNUL);
  T85 = BOUNDP(YruntimeYPsecondary_modulus_setter);
  if (T85 != YPfalse) {
    T84 = CHKREF(YruntimeYPsecondary_modulus_setter);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_Psecondary_modulus_setter_501;
  T83 = CALL2(1,CHKREF(YPdefine_method),T84,T86);
  YruntimeYPsecondary_modulus_setter = T83;
  T87 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_502 = YPmet(FUNCODEREF(fun_502),YPfalse,T87,ENVNUL);
  T88 = fun_502;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYPsecondary_modulus),CHKREF(YruntimeYPsecondary_modulus_setter),CHKREF(YLintG),T88);
  lit_494 = YPPsym((P)"%n-buckets");
  T89 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_Pn_buckets_503 = YPmet(FUNCODEREF(fun_Pn_buckets_503),CHKREF(lit_494),T89,ENVNUL);
  T92 = BOUNDP(YruntimeYPn_buckets);
  if (T92 != YPfalse) {
    T91 = CHKREF(YruntimeYPn_buckets);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_Pn_buckets_503;
  T90 = CALL2(1,CHKREF(YPdefine_method),T91,T93);
  YruntimeYPn_buckets = T90;
  lit_495 = YPPsym((P)"%n-buckets-setter");
  T94 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_Pn_buckets_setter_504 = YPmet(FUNCODEREF(fun_Pn_buckets_setter_504),CHKREF(lit_495),T94,ENVNUL);
  T97 = BOUNDP(YruntimeYPn_buckets_setter);
  if (T97 != YPfalse) {
    T96 = CHKREF(YruntimeYPn_buckets_setter);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_Pn_buckets_setter_504;
  T95 = CALL2(1,CHKREF(YPdefine_method),T96,T98);
  YruntimeYPn_buckets_setter = T95;
  T99 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_505 = YPmet(FUNCODEREF(fun_505),YPfalse,T99,ENVNUL);
  T100 = fun_505;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYPn_buckets),CHKREF(YruntimeYPn_buckets_setter),CHKREF(YLintG),T100);
  lit_496 = YPPsym((P)"%bucket-depth");
  T101 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_Pbucket_depth_506 = YPmet(FUNCODEREF(fun_Pbucket_depth_506),CHKREF(lit_496),T101,ENVNUL);
  T104 = BOUNDP(YruntimeYPbucket_depth);
  if (T104 != YPfalse) {
    T103 = CHKREF(YruntimeYPbucket_depth);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_Pbucket_depth_506;
  T102 = CALL2(1,CHKREF(YPdefine_method),T103,T105);
  YruntimeYPbucket_depth = T102;
  lit_497 = YPPsym((P)"%bucket-depth-setter");
  T106 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_Pbucket_depth_setter_507 = YPmet(FUNCODEREF(fun_Pbucket_depth_setter_507),CHKREF(lit_497),T106,ENVNUL);
  T109 = BOUNDP(YruntimeYPbucket_depth_setter);
  if (T109 != YPfalse) {
    T108 = CHKREF(YruntimeYPbucket_depth_setter);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_Pbucket_depth_setter_507;
  T107 = CALL2(1,CHKREF(YPdefine_method),T108,T110);
  YruntimeYPbucket_depth_setter = T107;
  T111 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_508 = YPmet(FUNCODEREF(fun_508),YPfalse,T111,ENVNUL);
  T112 = fun_508;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYPbucket_depth),CHKREF(YruntimeYPbucket_depth_setter),CHKREF(YLintG),T112);
  lit_498 = YPPsym((P)"%data");
  T113 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_Pdata_509 = YPmet(FUNCODEREF(fun_Pdata_509),CHKREF(lit_498),T113,ENVNUL);
  T116 = BOUNDP(YruntimeYPdata);
  if (T116 != YPfalse) {
    T115 = CHKREF(YruntimeYPdata);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_Pdata_509;
  T114 = CALL2(1,CHKREF(YPdefine_method),T115,T117);
  YruntimeYPdata = T114;
  lit_499 = YPPsym((P)"%data-setter");
  T118 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLvecG),CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_Pdata_setter_510 = YPmet(FUNCODEREF(fun_Pdata_setter_510),CHKREF(lit_499),T118,ENVNUL);
  T121 = BOUNDP(YruntimeYPdata_setter);
  if (T121 != YPfalse) {
    T120 = CHKREF(YruntimeYPdata_setter);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_Pdata_setter_510;
  T119 = CALL2(1,CHKREF(YPdefine_method),T120,T122);
  YruntimeYPdata_setter = T119;
  T123 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_511 = YPmet(FUNCODEREF(fun_511),YPfalse,T123,ENVNUL);
  T124 = fun_511;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYPdata),CHKREF(YruntimeYPdata_setter),CHKREF(YLvecG),T124);
  lit_500 = YPPsym((P)"%gc-state");
  T125 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_Pgc_state_512 = YPmet(FUNCODEREF(fun_Pgc_state_512),CHKREF(lit_500),T125,ENVNUL);
  T128 = BOUNDP(YruntimeYPgc_state);
  if (T128 != YPfalse) {
    T127 = CHKREF(YruntimeYPgc_state);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_Pgc_state_512;
  T126 = CALL2(1,CHKREF(YPdefine_method),T127,T129);
  YruntimeYPgc_state = T126;
  lit_501 = YPPsym((P)"%gc-state-setter");
  T130 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLanyG),CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_Pgc_state_setter_513 = YPmet(FUNCODEREF(fun_Pgc_state_setter_513),CHKREF(lit_501),T130,ENVNUL);
  T133 = BOUNDP(YruntimeYPgc_state_setter);
  if (T133 != YPfalse) {
    T132 = CHKREF(YruntimeYPgc_state_setter);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_Pgc_state_setter_513;
  T131 = CALL2(1,CHKREF(YPdefine_method),T132,T134);
  YruntimeYPgc_state_setter = T131;
  T135 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_514 = YPmet(FUNCODEREF(fun_514),YPfalse,T135,ENVNUL);
  T136 = fun_514;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYPgc_state),CHKREF(YruntimeYPgc_state_setter),CHKREF(YLanyG),T136);
  lit_502 = YPPsym((P)"fab-table-vector");
  lit_503 = YPPsym((P)"size");
  lit_504 = YPPsym((P)"fill-value");
  lit_505 = YPPsym((P)"n-buckets");
  lit_506 = YPPsym((P)"bucket-depth");
  lit_507 = YPPsym((P)"primary-modulus");
  lit_508 = YPPsym((P)"secondary-modulus");
  T137 = YPsig(YPPlist(6,CHKREF(lit_503),CHKREF(lit_504),CHKREF(lit_505),CHKREF(lit_506),CHKREF(lit_507),CHKREF(lit_508)),YPPlist(6,CHKREF(YLintG),CHKREF(YLanyG),CHKREF(YLintG),CHKREF(YLintG),CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)6),CHKREF(YruntimeYLsimple_table_vectorG),Ynil);
  YruntimeYfab_table_vector = YPmet(FUNCODEREF(YruntimeYfab_table_vector),CHKREF(lit_502),T137,ENVNUL);
  T138 = YruntimeYfab_table_vector;
  YruntimeYfab_table_vector = T138;
  lit_509 = YPPsym((P)"vector");
  T139 = YPsig(YPPlist(2,CHKREF(lit_509),CHKREF(lit_252)),YPPlist(2,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_elt_516 = YPmet(FUNCODEREF(fun_elt_516),CHKREF(lit_202),T139,ENVNUL);
  T142 = BOUNDP(YruntimeYelt);
  if (T142 != YPfalse) {
    T141 = CHKREF(YruntimeYelt);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_elt_516;
  T140 = CALL2(1,CHKREF(YPdefine_method),T141,T143);
  YruntimeYelt = T140;
  lit_510 = YPPsym((P)"new-value");
  T144 = YPsig(YPPlist(3,CHKREF(lit_510),CHKREF(lit_509),CHKREF(lit_252)),YPPlist(3,CHKREF(YLanyG),CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_elt_setter_517 = YPmet(FUNCODEREF(fun_elt_setter_517),CHKREF(lit_204),T144,ENVNUL);
  T147 = BOUNDP(YruntimeYelt_setter);
  if (T147 != YPfalse) {
    T146 = CHKREF(YruntimeYelt_setter);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_elt_setter_517;
  T145 = CALL2(1,CHKREF(YPdefine_method),T146,T148);
  YruntimeYelt_setter = T145;
  lit_511 = YPPsym((P)"clr!");
  T149 = YPsig(YPPlist(2,CHKREF(lit_509),CHKREF(lit_504)),YPPlist(2,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_clrX_518 = YPmet(FUNCODEREF(fun_clrX_518),CHKREF(lit_511),T149,ENVNUL);
  T152 = BOUNDP(YruntimeYclrX);
  if (T152 != YPfalse) {
    T151 = CHKREF(YruntimeYclrX);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_clrX_518;
  T150 = CALL2(1,CHKREF(YPdefine_method),T151,T153);
  YruntimeYclrX = T150;
  YruntimeYTdebug_tablesQT = YPfalse;
  lit_512 = YPPsym((P)"trace");
  lit_513 = YPPsym((P)"msg");
  T154 = YPsig(YPPlist(3,CHKREF(lit_463),CHKREF(lit_513),CHKREF(lit_3)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPtrue,YPint((P)2),CHKREF(YLanyG),Ynil);
  YruntimeYtrace = YPmet(FUNCODEREF(YruntimeYtrace),CHKREF(lit_512),T154,ENVNUL);
  T155 = YruntimeYtrace;
  YruntimeYtrace = T155;
  lit_514 = YPPsym((P)"<tab>");
  T157 = (P)YPpair(CHKREF(YruntimeYLmapG),Ynil);
  T156 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_514),T157);
  YruntimeYLtabG = T156;
  lit_515 = YPPsym((P)"table-growth-factor");
  T158 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_table_growth_factor_520 = YPmet(FUNCODEREF(fun_table_growth_factor_520),CHKREF(lit_515),T158,ENVNUL);
  T161 = BOUNDP(YruntimeYtable_growth_factor);
  if (T161 != YPfalse) {
    T160 = CHKREF(YruntimeYtable_growth_factor);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_table_growth_factor_520;
  T159 = CALL2(1,CHKREF(YPdefine_method),T160,T162);
  YruntimeYtable_growth_factor = T159;
  lit_516 = YPPsym((P)"table-growth-factor-setter");
  T163 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLfloG),CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_table_growth_factor_setter_521 = YPmet(FUNCODEREF(fun_table_growth_factor_setter_521),CHKREF(lit_516),T163,ENVNUL);
  T166 = BOUNDP(YruntimeYtable_growth_factor_setter);
  if (T166 != YPfalse) {
    T165 = CHKREF(YruntimeYtable_growth_factor_setter);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_table_growth_factor_setter_521;
  T164 = CALL2(1,CHKREF(YPdefine_method),T165,T167);
  YruntimeYtable_growth_factor_setter = T164;
  T168 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_522 = YPmet(FUNCODEREF(fun_522),YPfalse,T168,ENVNUL);
  T169 = fun_522;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYtable_growth_factor),CHKREF(YruntimeYtable_growth_factor_setter),CHKREF(YLfloG),T169);
  lit_517 = YPPsym((P)"table-growth-threshold");
  T170 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_table_growth_threshold_523 = YPmet(FUNCODEREF(fun_table_growth_threshold_523),CHKREF(lit_517),T170,ENVNUL);
  T173 = BOUNDP(YruntimeYtable_growth_threshold);
  if (T173 != YPfalse) {
    T172 = CHKREF(YruntimeYtable_growth_threshold);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_table_growth_threshold_523;
  T171 = CALL2(1,CHKREF(YPdefine_method),T172,T174);
  YruntimeYtable_growth_threshold = T171;
  lit_518 = YPPsym((P)"table-growth-threshold-setter");
  T175 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLfloG),CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_table_growth_threshold_setter_524 = YPmet(FUNCODEREF(fun_table_growth_threshold_setter_524),CHKREF(lit_518),T175,ENVNUL);
  T178 = BOUNDP(YruntimeYtable_growth_threshold_setter);
  if (T178 != YPfalse) {
    T177 = CHKREF(YruntimeYtable_growth_threshold_setter);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_table_growth_threshold_setter_524;
  T176 = CALL2(1,CHKREF(YPdefine_method),T177,T179);
  YruntimeYtable_growth_threshold_setter = T176;
  lit_519 = YPflo(FLOINT(0.8));
  T180 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_525 = YPmet(FUNCODEREF(fun_525),YPfalse,T180,ENVNUL);
  T181 = fun_525;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYtable_growth_threshold),CHKREF(YruntimeYtable_growth_threshold_setter),CHKREF(YLfloG),T181);
  lit_520 = YPPsym((P)"table-shrink-threshold");
  T182 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_table_shrink_threshold_526 = YPmet(FUNCODEREF(fun_table_shrink_threshold_526),CHKREF(lit_520),T182,ENVNUL);
  T185 = BOUNDP(YruntimeYtable_shrink_threshold);
  if (T185 != YPfalse) {
    T184 = CHKREF(YruntimeYtable_shrink_threshold);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_table_shrink_threshold_526;
  T183 = CALL2(1,CHKREF(YPdefine_method),T184,T186);
  YruntimeYtable_shrink_threshold = T183;
  lit_521 = YPPsym((P)"table-shrink-threshold-setter");
  T187 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLfloG),CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_table_shrink_threshold_setter_527 = YPmet(FUNCODEREF(fun_table_shrink_threshold_setter_527),CHKREF(lit_521),T187,ENVNUL);
  T190 = BOUNDP(YruntimeYtable_shrink_threshold_setter);
  if (T190 != YPfalse) {
    T189 = CHKREF(YruntimeYtable_shrink_threshold_setter);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_table_shrink_threshold_setter_527;
  T188 = CALL2(1,CHKREF(YPdefine_method),T189,T191);
  YruntimeYtable_shrink_threshold_setter = T188;
  lit_522 = YPflo(FLOINT(0.5));
  T192 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_528 = YPmet(FUNCODEREF(fun_528),YPfalse,T192,ENVNUL);
  T193 = fun_528;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYtable_shrink_threshold),CHKREF(YruntimeYtable_shrink_threshold_setter),CHKREF(YLfloG),T193);
  lit_523 = YPPsym((P)"%count");
  T194 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_Pcount_529 = YPmet(FUNCODEREF(fun_Pcount_529),CHKREF(lit_523),T194,ENVNUL);
  T197 = BOUNDP(YruntimeYPcount);
  if (T197 != YPfalse) {
    T196 = CHKREF(YruntimeYPcount);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_Pcount_529;
  T195 = CALL2(1,CHKREF(YPdefine_method),T196,T198);
  YruntimeYPcount = T195;
  lit_524 = YPPsym((P)"%count-setter");
  T199 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_Pcount_setter_530 = YPmet(FUNCODEREF(fun_Pcount_setter_530),CHKREF(lit_524),T199,ENVNUL);
  T202 = BOUNDP(YruntimeYPcount_setter);
  if (T202 != YPfalse) {
    T201 = CHKREF(YruntimeYPcount_setter);
  } else {
    T201 = YPfalse;
  }
  T203 = fun_Pcount_setter_530;
  T200 = CALL2(1,CHKREF(YPdefine_method),T201,T203);
  YruntimeYPcount_setter = T200;
  T204 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_531 = YPmet(FUNCODEREF(fun_531),YPfalse,T204,ENVNUL);
  T205 = fun_531;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYPcount),CHKREF(YruntimeYPcount_setter),CHKREF(YLintG),T205);
  lit_525 = YPPsym((P)"%vector");
  T206 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_Pvector_532 = YPmet(FUNCODEREF(fun_Pvector_532),CHKREF(lit_525),T206,ENVNUL);
  T209 = BOUNDP(YruntimeYPvector);
  if (T209 != YPfalse) {
    T208 = CHKREF(YruntimeYPvector);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_Pvector_532;
  T207 = CALL2(1,CHKREF(YPdefine_method),T208,T210);
  YruntimeYPvector = T207;
  lit_526 = YPPsym((P)"%vector-setter");
  T211 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_Pvector_setter_533 = YPmet(FUNCODEREF(fun_Pvector_setter_533),CHKREF(lit_526),T211,ENVNUL);
  T214 = BOUNDP(YruntimeYPvector_setter);
  if (T214 != YPfalse) {
    T213 = CHKREF(YruntimeYPvector_setter);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_Pvector_setter_533;
  T212 = CALL2(1,CHKREF(YPdefine_method),T213,T215);
  YruntimeYPvector_setter = T212;
  T216 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_534 = YPmet(FUNCODEREF(fun_534),YPfalse,T216,ENVNUL);
  T217 = fun_534;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYPvector),CHKREF(YruntimeYPvector_setter),CHKREF(YruntimeYLsimple_table_vectorG),T217);
  lit_527 = YPPsym((P)"table-protocol");
  T219 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  T218 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_527),T219,Ynil,YPfalse);
  YruntimeYtable_protocol = T218;
  T220 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  fun_table_protocol_535 = YPmet(FUNCODEREF(fun_table_protocol_535),CHKREF(lit_527),T220,ENVNUL);
  T223 = BOUNDP(YruntimeYtable_protocol);
  if (T223 != YPfalse) {
    T222 = CHKREF(YruntimeYtable_protocol);
  } else {
    T222 = YPfalse;
  }
  T224 = fun_table_protocol_535;
  T221 = CALL2(1,CHKREF(YPdefine_method),T222,T224);
  YruntimeYtable_protocol = T221;
  lit_528 = YPsb((P)"empty cell");
  T225 = CALL1(1,CHKREF(Ylst),CHKREF(lit_528));
  YruntimeYDempty_cell_marker = T225;
  lit_529 = YPsb((P)"vacated cell");
  T226 = CALL1(1,CHKREF(Ylst),CHKREF(lit_529));
  YruntimeYDvacated_cell_marker = T226;
  lit_530 = YPPsym((P)"hash-moduli");
  lit_531 = YPPsym((P)"hash");
  lit_532 = YPPsym((P)"primary");
  lit_533 = YPPsym((P)"secondary");
  T227 = YPsig(YPPlist(3,CHKREF(lit_531),CHKREF(lit_532),CHKREF(lit_533)),YPPlist(3,CHKREF(YLintG),CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLtupG),Ynil);
  YruntimeYhash_moduli = YPmet(FUNCODEREF(YruntimeYhash_moduli),CHKREF(lit_530),T227,ENVNUL);
  T228 = YruntimeYhash_moduli;
  YruntimeYhash_moduli = T228;
  T230 = CALL1(1,CHKREF(YruntimeYtL),CHKREF(YruntimeYLtabG));
  T229 = YPsig(YPPlist(2,CHKREF(lit_45),CHKREF(lit_503)),YPPlist(2,T230,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLtabG),Ynil);
  fun_fab_537 = YPmet(FUNCODEREF(fun_fab_537),CHKREF(lit_146),T229,ENVNUL);
  T233 = BOUNDP(YruntimeYfab);
  if (T233 != YPfalse) {
    T232 = CHKREF(YruntimeYfab);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_fab_537;
  T231 = CALL2(1,CHKREF(YPdefine_method),T232,T234);
  YruntimeYfab = T231;
  lit_534 = YPPsym((P)"exp");
  lit_535 = YPPsym((P)"x-1220");
  lit_536 = YPPsym((P)"with-hash");
  lit_537 = YPPsym((P)"tup");
  lit_538 = YPsb((P)"Match Pattern Failure");
  lit_539 = YPPsym((P)"let");
  lit_540 = YPPsym((P)"test-function");
  lit_541 = YPPsym((P)"hash-function");
  lit_542 = YPPsym((P)"<int>");
  lit_543 = YPPsym((P)"table");
  T241 = YPsig(YPPlist(2,CHKREF(lit_513),CHKREF(lit_3)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  T240 = fun_x_1220_538 = YPmet(FUNCODEREF(fun_x_1220_538),CHKREF(lit_535),T241,ENVNUL);
  T239 = YPsig(YPPlist(1,CHKREF(lit_97)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T238 = fun_539 = YPmet(FUNCODEREF(fun_539),YPfalse,T239,ENVNUL);
  T237 = YPsig(YPPlist(1,CHKREF(lit_534)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T236 = fun_540 = YPmet(FUNCODEREF(fun_540),YPfalse,T237,ENVNUL);
  T243 = fun_540;
  T242 = YPmacro(YPPsym((P)"runtime"),YPPsym((P)"with-hash"),T243);
  T235 = T242;
  return T235;
}

P YruntimeY___main_8___() {
  P T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189;
  P T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173;
  P T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157;
  P T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141;
  P T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125;
  P T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109;
  P T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93;
  P T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77;
  P T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_544 = YPPsym((P)"outer");
  lit_545 = YPPsym((P)"probes");
  lit_546 = YPPsym((P)"inner");
  lit_547 = YPPsym((P)"this-bucket-raw-index");
  lit_548 = YPsb((P)"The table is totally full this shouldn't happen");
  T3 = YPsig(YPPlist(2,CHKREF(lit_5),CHKREF(lit_547)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_inner_541 = YPmet(FUNCODEREF(fun_inner_541),CHKREF(lit_546),T3,ENVNUL);
  T2 = YPsig(YPPlist(1,CHKREF(lit_545)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_outer_542 = YPmet(FUNCODEREF(fun_outer_542),CHKREF(lit_544),T2,ENVNUL);
  T1 = YPsig(YPPlist(1,CHKREF(lit_97)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_543 = YPmet(FUNCODEREF(fun_543),YPfalse,T1,ENVNUL);
  T0 = YPsig(YPPlist(2,CHKREF(lit_543),CHKREF(lit_192)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_elt_544 = YPmet(FUNCODEREF(fun_elt_544),CHKREF(lit_202),T0,ENVNUL);
  T6 = BOUNDP(YruntimeYelt);
  if (T6 != YPfalse) {
    T5 = CHKREF(YruntimeYelt);
  } else {
    T5 = YPfalse;
  }
  T7 = fun_elt_544;
  T4 = CALL2(1,CHKREF(YPdefine_method),T5,T7);
  YruntimeYelt = T4;
  lit_549 = YPPsym((P)"value");
  lit_550 = YPsb((P)"The table is totally full this shouldn't happen");
  T11 = YPsig(YPPlist(2,CHKREF(lit_5),CHKREF(lit_547)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_inner_545 = YPmet(FUNCODEREF(fun_inner_545),CHKREF(lit_546),T11,ENVNUL);
  T10 = YPsig(YPPlist(1,CHKREF(lit_545)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_outer_546 = YPmet(FUNCODEREF(fun_outer_546),CHKREF(lit_544),T10,ENVNUL);
  T9 = YPsig(YPPlist(1,CHKREF(lit_97)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_547 = YPmet(FUNCODEREF(fun_547),YPfalse,T9,ENVNUL);
  T8 = YPsig(YPPlist(3,CHKREF(lit_549),CHKREF(lit_543),CHKREF(lit_192)),YPPlist(3,CHKREF(YLanyG),CHKREF(YruntimeYLtabG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_elt_setter_548 = YPmet(FUNCODEREF(fun_elt_setter_548),CHKREF(lit_204),T8,ENVNUL);
  T14 = BOUNDP(YruntimeYelt_setter);
  if (T14 != YPfalse) {
    T13 = CHKREF(YruntimeYelt_setter);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_elt_setter_548;
  T12 = CALL2(1,CHKREF(YPdefine_method),T13,T15);
  YruntimeYelt_setter = T12;
  lit_551 = YPPsym((P)"del-key");
  lit_552 = YPsb((P)"The table is totally full this shouldn't happen");
  T19 = YPsig(YPPlist(2,CHKREF(lit_5),CHKREF(lit_547)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_inner_549 = YPmet(FUNCODEREF(fun_inner_549),CHKREF(lit_546),T19,ENVNUL);
  T18 = YPsig(YPPlist(1,CHKREF(lit_545)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_outer_550 = YPmet(FUNCODEREF(fun_outer_550),CHKREF(lit_544),T18,ENVNUL);
  T17 = YPsig(YPPlist(1,CHKREF(lit_97)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_551 = YPmet(FUNCODEREF(fun_551),YPfalse,T17,ENVNUL);
  T16 = YPsig(YPPlist(2,CHKREF(lit_543),CHKREF(lit_192)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_del_key_552 = YPmet(FUNCODEREF(fun_del_key_552),CHKREF(lit_551),T16,ENVNUL);
  T22 = BOUNDP(YruntimeYdel_key);
  if (T22 != YPfalse) {
    T21 = CHKREF(YruntimeYdel_key);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_del_key_552;
  T20 = CALL2(1,CHKREF(YPdefine_method),T21,T23);
  YruntimeYdel_key = T20;
  lit_553 = YPPsym((P)"function");
  lit_554 = YPPsym((P)"b");
  lit_555 = YPsb((P)"B %= I %=\n");
  T26 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_inner_553 = YPmet(FUNCODEREF(fun_inner_553),CHKREF(lit_546),T26,ENVNUL);
  T25 = YPsig(YPPlist(1,CHKREF(lit_554)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_outer_554 = YPmet(FUNCODEREF(fun_outer_554),CHKREF(lit_544),T25,ENVNUL);
  T24 = YPsig(YPPlist(2,CHKREF(lit_553),CHKREF(lit_543)),YPPlist(2,CHKREF(YLfunG),CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_do_keyed_555 = YPmet(FUNCODEREF(fun_do_keyed_555),CHKREF(lit_188),T24,ENVNUL);
  T29 = BOUNDP(YruntimeYdo_keyed);
  if (T29 != YPfalse) {
    T28 = CHKREF(YruntimeYdo_keyed);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_do_keyed_555;
  T27 = CALL2(1,CHKREF(YPdefine_method),T28,T30);
  YruntimeYdo_keyed = T27;
  T33 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_inner_556 = YPmet(FUNCODEREF(fun_inner_556),CHKREF(lit_546),T33,ENVNUL);
  T32 = YPsig(YPPlist(1,CHKREF(lit_554)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_outer_557 = YPmet(FUNCODEREF(fun_outer_557),CHKREF(lit_544),T32,ENVNUL);
  T31 = YPsig(YPPlist(2,CHKREF(lit_553),CHKREF(lit_543)),YPPlist(2,CHKREF(YLfunG),CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_do_558 = YPmet(FUNCODEREF(fun_do_558),CHKREF(lit_180),T31,ENVNUL);
  T36 = BOUNDP(YruntimeYdo);
  if (T36 != YPfalse) {
    T35 = CHKREF(YruntimeYdo);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_do_558;
  T34 = CALL2(1,CHKREF(YPdefine_method),T35,T37);
  YruntimeYdo = T34;
  lit_556 = YPPsym((P)"del-keys");
  T38 = YPsig(YPPlist(1,CHKREF(lit_543)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_del_keys_559 = YPmet(FUNCODEREF(fun_del_keys_559),CHKREF(lit_556),T38,ENVNUL);
  T41 = BOUNDP(YruntimeYdel_keys);
  if (T41 != YPfalse) {
    T40 = CHKREF(YruntimeYdel_keys);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_del_keys_559;
  T39 = CALL2(1,CHKREF(YPdefine_method),T40,T42);
  YruntimeYdel_keys = T39;
  T43 = YPsig(YPPlist(1,CHKREF(lit_543)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  fun_len_560 = YPmet(FUNCODEREF(fun_len_560),CHKREF(lit_154),T43,ENVNUL);
  T46 = BOUNDP(YruntimeYlen);
  if (T46 != YPfalse) {
    T45 = CHKREF(YruntimeYlen);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_len_560;
  T44 = CALL2(1,CHKREF(YPdefine_method),T45,T47);
  YruntimeYlen = T44;
  lit_557 = YPPsym((P)"<tab-state>");
  T49 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T48 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_557),T49);
  YruntimeYLtab_stateG = T48;
  T50 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_Pvector_561 = YPmet(FUNCODEREF(fun_Pvector_561),CHKREF(lit_525),T50,ENVNUL);
  T53 = BOUNDP(YruntimeYPvector);
  if (T53 != YPfalse) {
    T52 = CHKREF(YruntimeYPvector);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_Pvector_561;
  T51 = CALL2(1,CHKREF(YPdefine_method),T52,T54);
  YruntimeYPvector = T51;
  T55 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_Pvector_setter_562 = YPmet(FUNCODEREF(fun_Pvector_setter_562),CHKREF(lit_526),T55,ENVNUL);
  T58 = BOUNDP(YruntimeYPvector_setter);
  if (T58 != YPfalse) {
    T57 = CHKREF(YruntimeYPvector_setter);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_Pvector_setter_562;
  T56 = CALL2(1,CHKREF(YPdefine_method),T57,T59);
  YruntimeYPvector_setter = T56;
  T60 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_563 = YPmet(FUNCODEREF(fun_563),YPfalse,T60,ENVNUL);
  T61 = fun_563;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLtab_stateG),CHKREF(YruntimeYPvector),CHKREF(YruntimeYPvector_setter),CHKREF(YruntimeYLsimple_table_vectorG),T61);
  lit_558 = YPPsym((P)"%bucket");
  T62 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_Pbucket_564 = YPmet(FUNCODEREF(fun_Pbucket_564),CHKREF(lit_558),T62,ENVNUL);
  T65 = BOUNDP(YruntimeYPbucket);
  if (T65 != YPfalse) {
    T64 = CHKREF(YruntimeYPbucket);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_Pbucket_564;
  T63 = CALL2(1,CHKREF(YPdefine_method),T64,T66);
  YruntimeYPbucket = T63;
  lit_559 = YPPsym((P)"%bucket-setter");
  T67 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_Pbucket_setter_565 = YPmet(FUNCODEREF(fun_Pbucket_setter_565),CHKREF(lit_559),T67,ENVNUL);
  T70 = BOUNDP(YruntimeYPbucket_setter);
  if (T70 != YPfalse) {
    T69 = CHKREF(YruntimeYPbucket_setter);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_Pbucket_setter_565;
  T68 = CALL2(1,CHKREF(YPdefine_method),T69,T71);
  YruntimeYPbucket_setter = T68;
  T72 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_566 = YPmet(FUNCODEREF(fun_566),YPfalse,T72,ENVNUL);
  T73 = fun_566;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLtab_stateG),CHKREF(YruntimeYPbucket),CHKREF(YruntimeYPbucket_setter),CHKREF(YLintG),T73);
  lit_560 = YPPsym((P)"%index");
  T74 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_Pindex_567 = YPmet(FUNCODEREF(fun_Pindex_567),CHKREF(lit_560),T74,ENVNUL);
  T77 = BOUNDP(YruntimeYPindex);
  if (T77 != YPfalse) {
    T76 = CHKREF(YruntimeYPindex);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_Pindex_567;
  T75 = CALL2(1,CHKREF(YPdefine_method),T76,T78);
  YruntimeYPindex = T75;
  lit_561 = YPPsym((P)"%index-setter");
  T79 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_195)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_Pindex_setter_568 = YPmet(FUNCODEREF(fun_Pindex_setter_568),CHKREF(lit_561),T79,ENVNUL);
  T82 = BOUNDP(YruntimeYPindex_setter);
  if (T82 != YPfalse) {
    T81 = CHKREF(YruntimeYPindex_setter);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_Pindex_setter_568;
  T80 = CALL2(1,CHKREF(YPdefine_method),T81,T83);
  YruntimeYPindex_setter = T80;
  T84 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_569 = YPmet(FUNCODEREF(fun_569),YPfalse,T84,ENVNUL);
  T85 = fun_569;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YruntimeYLtab_stateG),CHKREF(YruntimeYPindex),CHKREF(YruntimeYPindex_setter),CHKREF(YLintG),T85);
  T89 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_inner_570 = YPmet(FUNCODEREF(fun_inner_570),CHKREF(lit_546),T89,ENVNUL);
  T88 = YPsig(YPPlist(1,CHKREF(lit_554)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_outer_571 = YPmet(FUNCODEREF(fun_outer_571),CHKREF(lit_544),T88,ENVNUL);
  T87 = YPsig(YPPlist(1,CHKREF(lit_97)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_572 = YPmet(FUNCODEREF(fun_572),YPfalse,T87,ENVNUL);
  T86 = YPsig(YPPlist(1,CHKREF(lit_543)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_ini_state_573 = YPmet(FUNCODEREF(fun_ini_state_573),CHKREF(lit_263),T86,ENVNUL);
  T92 = BOUNDP(YruntimeYini_state);
  if (T92 != YPfalse) {
    T91 = CHKREF(YruntimeYini_state);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_ini_state_573;
  T90 = CALL2(1,CHKREF(YPdefine_method),T91,T93);
  YruntimeYini_state = T90;
  lit_562 = YPPsym((P)"first?");
  T97 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_inner_574 = YPmet(FUNCODEREF(fun_inner_574),CHKREF(lit_546),T97,ENVNUL);
  T96 = YPsig(YPPlist(2,CHKREF(lit_554),CHKREF(lit_562)),YPPlist(2,CHKREF(YLintG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_outer_575 = YPmet(FUNCODEREF(fun_outer_575),CHKREF(lit_544),T96,ENVNUL);
  T95 = YPsig(YPPlist(1,CHKREF(lit_97)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_576 = YPmet(FUNCODEREF(fun_576),YPfalse,T95,ENVNUL);
  T94 = YPsig(YPPlist(2,CHKREF(lit_543),CHKREF(lit_167)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_nxt_state_577 = YPmet(FUNCODEREF(fun_nxt_state_577),CHKREF(lit_265),T94,ENVNUL);
  T100 = BOUNDP(YruntimeYnxt_state);
  if (T100 != YPfalse) {
    T99 = CHKREF(YruntimeYnxt_state);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_nxt_state_577;
  T98 = CALL2(1,CHKREF(YPdefine_method),T99,T101);
  YruntimeYnxt_state = T98;
  T102 = YPsig(YPPlist(2,CHKREF(lit_543),CHKREF(lit_167)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_fin_stateQ_578 = YPmet(FUNCODEREF(fun_fin_stateQ_578),CHKREF(lit_264),T102,ENVNUL);
  T105 = BOUNDP(YruntimeYfin_stateQ);
  if (T105 != YPfalse) {
    T104 = CHKREF(YruntimeYfin_stateQ);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_fin_stateQ_578;
  T103 = CALL2(1,CHKREF(YPdefine_method),T104,T106);
  YruntimeYfin_stateQ = T103;
  T107 = YPsig(YPPlist(2,CHKREF(lit_543),CHKREF(lit_167)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_now_key_579 = YPmet(FUNCODEREF(fun_now_key_579),CHKREF(lit_268),T107,ENVNUL);
  T110 = BOUNDP(YruntimeYnow_key);
  if (T110 != YPfalse) {
    T109 = CHKREF(YruntimeYnow_key);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_now_key_579;
  T108 = CALL2(1,CHKREF(YPdefine_method),T109,T111);
  YruntimeYnow_key = T108;
  T112 = YPsig(YPPlist(2,CHKREF(lit_543),CHKREF(lit_167)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_now_elt_580 = YPmet(FUNCODEREF(fun_now_elt_580),CHKREF(lit_266),T112,ENVNUL);
  T115 = BOUNDP(YruntimeYnow_elt);
  if (T115 != YPfalse) {
    T114 = CHKREF(YruntimeYnow_elt);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_now_elt_580;
  T113 = CALL2(1,CHKREF(YPdefine_method),T114,T116);
  YruntimeYnow_elt = T113;
  T117 = YPsig(YPPlist(3,CHKREF(lit_549),CHKREF(lit_543),CHKREF(lit_167)),YPPlist(3,CHKREF(YLanyG),CHKREF(YruntimeYLtabG),CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_now_elt_setter_581 = YPmet(FUNCODEREF(fun_now_elt_setter_581),CHKREF(lit_267),T117,ENVNUL);
  T120 = BOUNDP(YruntimeYnow_elt_setter);
  if (T120 != YPfalse) {
    T119 = CHKREF(YruntimeYnow_elt_setter);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_now_elt_setter_581;
  T118 = CALL2(1,CHKREF(YPdefine_method),T119,T121);
  YruntimeYnow_elt_setter = T118;
  T122 = YPsig(YPPlist(2,CHKREF(lit_543),CHKREF(lit_167)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLtab_stateG),Ynil);
  fun_copy_state_582 = YPmet(FUNCODEREF(fun_copy_state_582),CHKREF(lit_269),T122,ENVNUL);
  T125 = BOUNDP(YruntimeYcopy_state);
  if (T125 != YPfalse) {
    T124 = CHKREF(YruntimeYcopy_state);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_copy_state_582;
  T123 = CALL2(1,CHKREF(YPdefine_method),T124,T126);
  YruntimeYcopy_state = T123;
  lit_563 = YPPsym((P)"tab-keys");
  lit_564 = YPPsym((P)"k");
  T128 = YPsig(YPPlist(2,CHKREF(lit_564),CHKREF(lit_217)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_583 = YPmet(FUNCODEREF(fun_583),YPfalse,T128,ENVNUL);
  T127 = YPsig(YPPlist(1,CHKREF(lit_543)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  fun_tab_keys_584 = YPmet(FUNCODEREF(fun_tab_keys_584),CHKREF(lit_563),T127,ENVNUL);
  T131 = BOUNDP(YruntimeYtab_keys);
  if (T131 != YPfalse) {
    T130 = CHKREF(YruntimeYtab_keys);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_tab_keys_584;
  T129 = CALL2(1,CHKREF(YPdefine_method),T130,T132);
  YruntimeYtab_keys = T129;
  lit_565 = YPPsym((P)"grow-table");
  T133 = YPsig(YPPlist(1,CHKREF(lit_543)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YruntimeYLtabG),Ynil);
  fun_grow_table_585 = YPmet(FUNCODEREF(fun_grow_table_585),CHKREF(lit_565),T133,ENVNUL);
  T136 = BOUNDP(YruntimeYgrow_table);
  if (T136 != YPfalse) {
    T135 = CHKREF(YruntimeYgrow_table);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_grow_table_585;
  T134 = CALL2(1,CHKREF(YPdefine_method),T135,T137);
  YruntimeYgrow_table = T134;
  lit_566 = YPPsym((P)"rehash-table");
  T138 = YPsig(YPPlist(1,CHKREF(lit_543)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YruntimeYLtabG),Ynil);
  fun_rehash_table_586 = YPmet(FUNCODEREF(fun_rehash_table_586),CHKREF(lit_566),T138,ENVNUL);
  T141 = BOUNDP(YruntimeYrehash_table);
  if (T141 != YPfalse) {
    T140 = CHKREF(YruntimeYrehash_table);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_rehash_table_586;
  T139 = CALL2(1,CHKREF(YPdefine_method),T140,T142);
  YruntimeYrehash_table = T139;
  lit_567 = YPPsym((P)"choose-table-geometry");
  lit_568 = YPPsym((P)"capacity");
  lit_569 = YPsb((P)"Not enough primes to compute new table size");
  T145 = YPsig(YPPlist(1,CHKREF(lit_130)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_587 = YPmet(FUNCODEREF(fun_587),YPfalse,T145,ENVNUL);
  T144 = YPsig(YPPlist(1,CHKREF(lit_97)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_588 = YPmet(FUNCODEREF(fun_588),YPfalse,T144,ENVNUL);
  T143 = YPsig(YPPlist(1,CHKREF(lit_568)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  YruntimeYchoose_table_geometry = YPmet(FUNCODEREF(YruntimeYchoose_table_geometry),CHKREF(lit_567),T143,ENVNUL);
  T146 = YruntimeYchoose_table_geometry;
  YruntimeYchoose_table_geometry = T146;
  lit_570 = YPPsym((P)"copy-to-new-vector");
  lit_571 = YPPsym((P)"new-vector");
  lit_572 = YPsb((P)"The table is totally full this shouldn't happen");
  T151 = YPsig(YPPlist(2,CHKREF(lit_5),CHKREF(lit_252)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_inner_590 = YPmet(FUNCODEREF(fun_inner_590),CHKREF(lit_546),T151,ENVNUL);
  T150 = YPsig(YPPlist(1,CHKREF(lit_545)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_outer_591 = YPmet(FUNCODEREF(fun_outer_591),CHKREF(lit_544),T150,ENVNUL);
  T149 = YPsig(YPPlist(1,CHKREF(lit_97)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_592 = YPmet(FUNCODEREF(fun_592),YPfalse,T149,ENVNUL);
  T148 = YPsig(YPPlist(2,CHKREF(lit_564),CHKREF(lit_217)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_593 = YPmet(FUNCODEREF(fun_593),YPfalse,T148,ENVNUL);
  T147 = YPsig(YPPlist(2,CHKREF(lit_543),CHKREF(lit_571)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_copy_to_new_vector_594 = YPmet(FUNCODEREF(fun_copy_to_new_vector_594),CHKREF(lit_570),T147,ENVNUL);
  T154 = BOUNDP(YruntimeYcopy_to_new_vector);
  if (T154 != YPfalse) {
    T153 = CHKREF(YruntimeYcopy_to_new_vector);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_copy_to_new_vector_594;
  T152 = CALL2(1,CHKREF(YPdefine_method),T153,T155);
  YruntimeYcopy_to_new_vector = T152;
  YruntimeYDpermanent_hash_state = YPfalse;
  lit_573 = YPPsym((P)"current-gc-state");
  T156 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  YruntimeYcurrent_gc_state = YPmet(FUNCODEREF(YruntimeYcurrent_gc_state),CHKREF(lit_573),T156,ENVNUL);
  T157 = YruntimeYcurrent_gc_state;
  YruntimeYcurrent_gc_state = T157;
  lit_574 = YPPsym((P)"id-hash");
  T158 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_id_hash_596 = YPmet(FUNCODEREF(fun_id_hash_596),CHKREF(lit_574),T158,ENVNUL);
  T161 = BOUNDP(YruntimeYid_hash);
  if (T161 != YPfalse) {
    T160 = CHKREF(YruntimeYid_hash);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_id_hash_596;
  T159 = CALL2(1,CHKREF(YPdefine_method),T160,T162);
  YruntimeYid_hash = T159;
  T163 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlogG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_id_hash_597 = YPmet(FUNCODEREF(fun_id_hash_597),CHKREF(lit_574),T163,ENVNUL);
  T166 = BOUNDP(YruntimeYid_hash);
  if (T166 != YPfalse) {
    T165 = CHKREF(YruntimeYid_hash);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_id_hash_597;
  T164 = CALL2(1,CHKREF(YPdefine_method),T165,T167);
  YruntimeYid_hash = T164;
  lit_575 = YPPsym((P)"rot");
  T168 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_111)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  YruntimeYrot = YPmet(FUNCODEREF(YruntimeYrot),CHKREF(lit_575),T168,ENVNUL);
  T169 = YruntimeYrot;
  YruntimeYrot = T169;
  T170 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_id_hash_599 = YPmet(FUNCODEREF(fun_id_hash_599),CHKREF(lit_574),T170,ENVNUL);
  T173 = BOUNDP(YruntimeYid_hash);
  if (T173 != YPfalse) {
    T172 = CHKREF(YruntimeYid_hash);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_id_hash_599;
  T171 = CALL2(1,CHKREF(YPdefine_method),T172,T174);
  YruntimeYid_hash = T171;
  T175 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_id_hash_600 = YPmet(FUNCODEREF(fun_id_hash_600),CHKREF(lit_574),T175,ENVNUL);
  T178 = BOUNDP(YruntimeYid_hash);
  if (T178 != YPfalse) {
    T177 = CHKREF(YruntimeYid_hash);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_id_hash_600;
  T176 = CALL2(1,CHKREF(YPdefine_method),T177,T179);
  YruntimeYid_hash = T176;
  T180 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfloG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_id_hash_601 = YPmet(FUNCODEREF(fun_id_hash_601),CHKREF(lit_574),T180,ENVNUL);
  T183 = BOUNDP(YruntimeYid_hash);
  if (T183 != YPfalse) {
    T182 = CHKREF(YruntimeYid_hash);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_id_hash_601;
  T181 = CALL2(1,CHKREF(YPdefine_method),T182,T184);
  YruntimeYid_hash = T181;
  lit_576 = YPPsym((P)"case-insensitive-string-hash");
  T186 = YPsig(YPPlist(2,CHKREF(lit_5),CHKREF(lit_531)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_602 = YPmet(FUNCODEREF(fun_loop_602),CHKREF(lit_101),T186,ENVNUL);
  T185 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  YruntimeYcase_insensitive_string_hash = YPmet(FUNCODEREF(YruntimeYcase_insensitive_string_hash),CHKREF(lit_576),T185,ENVNUL);
  T187 = YruntimeYcase_insensitive_string_hash;
  YruntimeYcase_insensitive_string_hash = T187;
  lit_577 = YPPsym((P)"case-insensitive-string-equal");
  T189 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_604 = YPmet(FUNCODEREF(fun_loop_604),CHKREF(lit_101),T189,ENVNUL);
  T188 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_48)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLstrG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  YruntimeYcase_insensitive_string_equal = YPmet(FUNCODEREF(YruntimeYcase_insensitive_string_equal),CHKREF(lit_577),T188,ENVNUL);
  T190 = YruntimeYcase_insensitive_string_equal;
  YruntimeYcase_insensitive_string_equal = T190;
  lit_578 = YPPsym((P)"<str-tab>");
  T192 = (P)YPpair(CHKREF(YruntimeYLtabG),Ynil);
  T191 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_578),T192);
  YruntimeYLstr_tabG = T191;
  T193 = YPsig(YPPlist(1,CHKREF(lit_57)),YPPlist(1,CHKREF(YruntimeYLstr_tabG)),YPfalse,YPint((P)1),CHKREF(YLtupG),Ynil);
  fun_table_protocol_606 = YPmet(FUNCODEREF(fun_table_protocol_606),CHKREF(lit_527),T193,ENVNUL);
  T196 = BOUNDP(YruntimeYtable_protocol);
  if (T196 != YPfalse) {
    T195 = CHKREF(YruntimeYtable_protocol);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_table_protocol_606;
  T194 = CALL2(1,CHKREF(YPdefine_method),T195,T197);
  YruntimeYtable_protocol = T194;
  T198 = CALL2(1,CHKREF(YruntimeYfab),CHKREF(YruntimeYLstr_tabG),YPint((P)3000));
  YruntimeYsymbols = T198;
  lit_579 = YPPsym((P)"booted-fab-sym");
  lit_580 = YPPsym((P)"name");
  T199 = YPsig(YPPlist(1,CHKREF(lit_580)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YruntimeYbooted_fab_sym = YPmet(FUNCODEREF(YruntimeYbooted_fab_sym),CHKREF(lit_579),T199,ENVNUL);
  T200 = YruntimeYbooted_fab_sym;
  YruntimeYbooted_fab_sym = T200;
  lit_581 = YPPsym((P)"boot-symbols");
  lit_582 = YPPsym((P)"boot");
  lit_583 = YPPsym((P)"syms");
  T202 = YPsig(YPPlist(1,CHKREF(lit_583)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_boot_609 = YPmet(FUNCODEREF(fun_boot_609),CHKREF(lit_582),T202,ENVNUL);
  T201 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  YruntimeYboot_symbols = YPmet(FUNCODEREF(YruntimeYboot_symbols),CHKREF(lit_581),T201,ENVNUL);
  T203 = YruntimeYboot_symbols;
  YruntimeYboot_symbols = T203;
  CALL0(1,CHKREF(YruntimeYboot_symbols));
  Yfab_sym = CHKREF(YruntimeYbooted_fab_sym);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T204 = YPfalse;
  return T204;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"and", &module_info_macros, "and"},
  {"%slot", &module_info_boot, "%slot"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"%selt", &module_info_boot, "%selt"},
  {"<log>", &module_info_boot, "<log>"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"%im", &module_info_boot, "%im"},
  {"%iu", &module_info_boot, "%iu"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"ct", &module_info_boot, "ct"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"%i<", &module_info_boot, "%i<"},
  {"not", &module_info_boot, "not"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"<any>", &module_info_boot, "<any>"},
  {"%i+", &module_info_boot, "%i+"},
  {"<union>", &module_info_boot, "<union>"},
  {"%snul", &module_info_boot, "%snul"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"let", &module_info_boot, "let"},
  {"pushf", &module_info_macros, "pushf"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"loc", &module_info_boot, "loc"},
  {"apply", &module_info_macros, "apply"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"cat", &module_info_macros, "cat"},
  {"dg", &module_info_boot, "dg"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"next-method", &module_info_macros, "next-method"},
  {"fun", &module_info_boot, "fun"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"empty?", &module_info_macros, "empty?"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"%iv", &module_info_boot, "%iv"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"tail", &module_info_boot, "tail"},
  {"%ft", &module_info_boot, "%ft"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"gensym", &module_info_macros, "gensym"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"%su", &module_info_boot, "%su"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"%i?", &module_info_boot, "%i?"},
  {"use", &module_info_boot, "use"},
  {"@olen", &module_info_boot, "@olen"},
  {"bound?", &module_info_boot, "bound?"},
  {"%velt", &module_info_boot, "%velt"},
  {"collected", &module_info_macros, "collected"},
  {"for", &module_info_macros, "for"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"nil", &module_info_boot, "nil"},
  {"case", &module_info_macros, "case"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"%i^", &module_info_boot, "%i^"},
  {"%ib", &module_info_boot, "%ib"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"export", &module_info_boot, "export"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"%f+", &module_info_boot, "%f+"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"collecting", &module_info_macros, "collecting"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"%bb", &module_info_boot, "%bb"},
  {"class-name", &module_info_boot, "class-name"},
  {"when", &module_info_macros, "when"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%vec", &module_info_boot, "%vec"},
  {"isa?", &module_info_boot, "isa?"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"<type>", &module_info_boot, "<type>"},
  {"<class>", &module_info_boot, "<class>"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"dp", &module_info_boot, "dp"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"%pair", &module_info_boot, "%pair"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"type-error", &module_info_boot, "type-error"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"map", &module_info_macros, "map"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"%cu", &module_info_boot, "%cu"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"inc", &module_info_macros, "inc"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%sb", &module_info_boot, "%sb"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"%f-", &module_info_boot, "%f-"},
  {"<str>", &module_info_boot, "<str>"},
  {"==", &module_info_macros, "=="},
  {"dc", &module_info_boot, "dc"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"tup", &module_info_macros, "tup"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"type-class", &module_info_boot, "type-class"},
  {"popf", &module_info_macros, "popf"},
  {"lst", &module_info_boot, "lst"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%slen", &module_info_boot, "%slen"},
  {"%i*", &module_info_boot, "%i*"},
  {"%f<", &module_info_boot, "%f<"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"<met>", &module_info_boot, "<met>"},
  {"%str", &module_info_boot, "%str"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"%lb", &module_info_boot, "%lb"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"isa", &module_info_boot, "isa"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"%c<", &module_info_boot, "%c<"},
  {"object-class", &module_info_boot, "object-class"},
  {"lab", &module_info_boot, "lab"},
  {"select", &module_info_macros, "select"},
  {"@+", &module_info_boot, "@+"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"%fb", &module_info_boot, "%fb"},
  {"%cb", &module_info_boot, "%cb"},
  {"pair", &module_info_macros, "pair"},
  {"fin", &module_info_boot, "fin"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"%f/", &module_info_boot, "%f/"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"dss", &module_info_boot, "dss"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"set", &module_info_boot, "set"},
  {"%i&", &module_info_boot, "%i&"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"<col>", &module_info_boot, "<col>"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"df", &module_info_boot, "df"},
  {"collect", &module_info_macros, "collect"},
  {"assert", &module_info_macros, "assert"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"nul", &module_info_boot, "nul"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"dec", &module_info_macros, "dec"},
  {"%it/", &module_info_boot, "%it/"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"type-object", &module_info_boot, "type-object"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"%fu", &module_info_boot, "%fu"},
  {"%raw", &module_info_boot, "%raw"},
  {"dlet", &module_info_macros, "dlet"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"%i-", &module_info_boot, "%i-"},
  {"%untag", &module_info_boot, "%untag"},
  {"mif", &module_info_boot, "mif"},
  {"or", &module_info_macros, "or"},
  {"%isa", &module_info_boot, "%isa"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"%i=", &module_info_boot, "%i="},
  {"head", &module_info_boot, "head"},
  {"error", &module_info_boot, "error"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"ds", &module_info_boot, "ds"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"var-type", &module_info_macros, "var-type"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"seq", &module_info_boot, "seq"},
  {"quote", &module_info_boot, "quote"},
  {"%f=", &module_info_boot, "%f="},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"<int>", &module_info_boot, "<int>"},
  {"%lu", &module_info_boot, "%lu"},
  {"dm", &module_info_boot, "dm"},
  {"rep", &module_info_boot, "rep"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"%i!", &module_info_boot, "%i!"},
  {"%f*", &module_info_boot, "%f*"},
  {"unless", &module_info_macros, "unless"},
  {"<num>", &module_info_boot, "<num>"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"napply", &module_info_macros, "napply"},
  {"dv", &module_info_boot, "dv"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"try", &module_info_boot, "try"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"slot", &module_info_boot, "slot"},
  {"@<", &module_info_boot, "@<"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"%c=", &module_info_boot, "%c="},
  {"var-name", &module_info_macros, "var-name"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"if", &module_info_boot, "if"},
  {"add-slot", &module_info_boot, "add-slot"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"odd?", &YruntimeYoddQ},
  {"current-gc-state", &YruntimeYcurrent_gc_state},
  {"range-by", &YruntimeYrange_by},
  {"%secondary-modulus-setter", &YruntimeYPsecondary_modulus_setter},
  {"write-string", &YruntimeYwrite_string},
  {"call-with-string-input-port", &YruntimeYcall_with_string_input_port},
  {"native-chars", &YruntimeYnative_chars},
  {"assoc-key-setter", &YruntimeYassoc_key_setter},
  {"fabs", &YruntimeYfabs},
  {"---main-3---", NULL},
  {"signal-handler-list", &YruntimeYsignal_handler_list},
  {"pos", &YruntimeYpos},
  {"assoc-key", &YruntimeYassoc_key},
  {"neg", &YruntimeYneg},
  {"make-handler", &YruntimeYmake_handler},
  {"push", &YruntimeYpush},
  {"tab-keys", &YruntimeYtab_keys},
  {"as-uppercase", &YruntimeYas_uppercase},
  {"from-below", &YruntimeYfrom_below},
  {"%vacated-setter", &YruntimeYPvacated_setter},
  {"close-input-port", &YruntimeYclose_input_port},
  {"range-below", &YruntimeYrange_below},
  {"~=", &YruntimeYNE},
  {"from-below-by", &YruntimeYfrom_below_by},
  {"port-contents", &YruntimeYport_contents},
  {"symbols", &YruntimeYsymbols},
  {"do3", &YruntimeYdo3},
  {"---main-6---", NULL},
  {"booted-fab-sym-using", NULL},
  {"assq", &YruntimeYassq},
  {"handler-function-setter", &YruntimeYhandler_function_setter},
  {"case-insensitive-string-equal", &YruntimeYcase_insensitive_string_equal},
  {"pop-last!", &YruntimeYpop_lastX},
  {"sub-setter", &YruntimeYsub_setter},
  {"to-digit", &YruntimeYto_digit},
  {"$empty-cell-marker", &YruntimeYDempty_cell_marker},
  {"rehash-table", &YruntimeYrehash_table},
  {"<serious-condition>", &YruntimeYLserious_conditionG},
  {"<file-port>", &YruntimeYLfile_portG},
  {"contagious-call", &YruntimeYcontagious_call},
  {"copy-to-new-vector", &YruntimeYcopy_to_new_vector},
  {"low-elt-setter", &YruntimeYlow_elt_setter},
  {"<input-port>", &YruntimeYLinput_portG},
  {"incongruent-method-error-generic", &YruntimeYincongruent_method_error_generic},
  {"assoc-value-setter", &YruntimeYassoc_value_setter},
  {"ascii-limit", &YruntimeYascii_limit},
  {"buf", &YruntimeYbuf},
  {"port-index", &YruntimeYport_index},
  {"read", &YruntimeYread},
  {"ceiling/", &YruntimeYceilingS},
  {"---main-1---", NULL},
  {"format", &YruntimeYformat},
  {"rev!", &YruntimeYrevX},
  {"last", &YruntimeYlast},
  {"%list", &YruntimeYPlist},
  {"floor/", &YruntimeYfloorS},
  {"do-handlers-of-type", &YruntimeYdo_handlers_of_type},
  {"describe-condition", &YruntimeYdescribe_condition},
  {"%vector", &YruntimeYPvector},
  {"%data-setter", &YruntimeYPdata_setter},
  {"step-first-setter", &YruntimeYstep_first_setter},
  {"lsh", &YruntimeYlsh},
  {"step-then", &YruntimeYstep_then},
  {"ash", &YruntimeYash},
  {"num-to-str", &YruntimeYnum_to_str},
  {"port-index-setter", &YruntimeYport_index_setter},
  {"flo-bits", &YruntimeYflo_bits},
  {"<bot>", &YruntimeYLbotG},
  {"rcurry", &YruntimeYrcurry},
  {"round/", &YruntimeYroundS},
  {"case-insensitive-string-hash", &YruntimeYcase_insensitive_string_hash},
  {"<string-output-port>", &YruntimeYLstring_output_portG},
  {"rev", &YruntimeYrev},
  {"assocs-vals-setter", &YruntimeYassocs_vals_setter},
  {"condition-message-setter", &YruntimeYcondition_message_setter},
  {"step-then-setter", &YruntimeYstep_then_setter},
  {"assoc-value", &YruntimeYassoc_value},
  {"abs", &YruntimeYabs},
  {"port-handle", &YruntimeYport_handle},
  {"<port>", &YruntimeYLportG},
  {"do2", &YruntimeYdo2},
  {"push-last!", &YruntimeYpush_lastX},
  {"*", &YruntimeYT},
  {"<output-port>", &YruntimeYLoutput_portG},
  {"truncate/", &YruntimeYtruncateS},
  {"<list>", &YruntimeYLlistG},
  {"max", &YruntimeYmax},
  {"contagious-type", &YruntimeYcontagious_type},
  {"handler-info-setter", &YruntimeYhandler_info_setter},
  {"add-new", &YruntimeYadd_new},
  {"<error>", &YruntimeYLerrorG},
  {"choose-table-geometry", &YruntimeYchoose_table_geometry},
  {"fab-map", &YruntimeYfab_map},
  {"*debug-tables?*", &YruntimeYTdebug_tablesQT},
  {"compose", &YruntimeYcompose},
  {"open-output-file", &YruntimeYopen_output_file},
  {"app-args", &YruntimeYapp_args},
  {"%bucket", &YruntimeYPbucket},
  {"write-char", &YruntimeYwrite_char},
  {"default", &YruntimeYdefault},
  {"address-of", &YruntimeYaddress_of},
  {"power-of-two-ceiling", &YruntimeYpower_of_two_ceiling},
  {"floor", &YruntimeYfloor},
  {"call-with-output-file", &YruntimeYcall_with_output_file},
  {"cat2", &YruntimeYcat2},
  {"modulo", &YruntimeYmodulo},
  {"<string-input-port>", &YruntimeYLstring_input_portG},
  {"cat!", &YruntimeYcatX},
  {"$vacated-cell-marker", &YruntimeYDvacated_cell_marker},
  {"ascii->char", &YruntimeYascii_Gchar},
  {"app-filename", &YruntimeYapp_filename},
  {"<restart>", &YruntimeYLrestartG},
  {"<assocs>", &YruntimeYLassocsG},
  {"---main-2---", NULL},
  {"nyi-error", &YruntimeYnyi_error},
  {"incongruent-method-error-generic-setter", &YruntimeYincongruent_method_error_generic_setter},
  {"empty", &YruntimeYempty},
  {"assqn", &YruntimeYassqn},
  {"*gensym-counter*", &YruntimeYTgensym_counterT},
  {"add!", &YruntimeYaddX},
  {"+", &YruntimeYA},
  {"<simple-error>", &YruntimeYLsimple_errorG},
  {"<range>", &YruntimeYLrangeG},
  {"remainder", &YruntimeYremainder},
  {"add", &YruntimeYadd},
  {"$digit-to-char", &YruntimeYDdigit_to_char},
  {"decode-radix-option", &YruntimeYdecode_radix_option},
  {"handler-info-message-setter", &YruntimeYhandler_info_message_setter},
  {"find-key", &YruntimeYfind_key},
  {"elt", &YruntimeYelt},
  {"reduce+", &YruntimeYreduceA},
  {"curry", &YruntimeYcurry},
  {"%cat", &YruntimeYPcat},
  {"step-first", &YruntimeYstep_first},
  {"<=", &YruntimeYLE},
  {"elt-setter", &YruntimeYelt_setter},
  {"logior", &YruntimeYlogior},
  {"lowercase?", &YruntimeYlowercaseQ},
  {"=", &YruntimeYE},
  {"nul?", &YruntimeYnulQ},
  {"%n-buckets-setter", &YruntimeYPn_buckets_setter},
  {"<file-input-port>", &YruntimeYLfile_input_portG},
  {"<tab>", &YruntimeYLtabG},
  {"locative-value-setter", &YruntimeYlocative_value_setter},
  {"assocs-test", &YruntimeYassocs_test},
  {"from-to-by", &YruntimeYfrom_to_by},
  {"default-handler-description", &YruntimeYdefault_handler_description},
  {"list-handlers", &YruntimeYlist_handlers},
  {"eof-object", &YruntimeYeof_object},
  {"table-growth-factor-setter", &YruntimeYtable_growth_factor_setter},
  {"---main-0---", NULL},
  {"pop", &YruntimeYpop},
  {"map2", &YruntimeYmap2},
  {"pos?", &YruntimeYposQ},
  {"logxor", &YruntimeYlogxor},
  {"from-to", &YruntimeYfrom_to},
  {"%n-buckets", &YruntimeYPn_buckets},
  {"handler-info", &YruntimeYhandler_info},
  {"copy-state", &YruntimeYcopy_state},
  {"ascii-chars", &YruntimeYascii_chars},
  {"with-hash", NULL},
  {"incongruent-method-error-method", &YruntimeYincongruent_method_error_method},
  {"%count", &YruntimeYPcount},
  {"port-handle-setter", &YruntimeYport_handle_setter},
  {"from", &YruntimeYfrom},
  {"<simple-condition>", &YruntimeYLsimple_conditionG},
  {"logand", &YruntimeYlogand},
  {"locative-value", &YruntimeYlocative_value},
  {"char->integer", &YruntimeYchar_Ginteger},
  {"false-or", &YruntimeYfalse_or},
  {"nyi", &YruntimeYnyi},
  {"*twin-primes*", &YruntimeYTtwin_primesT},
  {"range-to", &YruntimeYrange_to},
  {"low-elt", &YruntimeYlow_elt},
  {"del-keys", &YruntimeYdel_keys},
  {"reduce", &YruntimeYreduce},
  {"str", &YruntimeYstr},
  {"range-to-setter", &YruntimeYrange_to_setter},
  {"into", &YruntimeYinto},
  {"<incongruent-method-error>", &YruntimeYLincongruent_method_errorG},
  {"format-to-string", &YruntimeYformat_to_string},
  {"lognot", &YruntimeYlognot},
  {"1st", &YruntimeY1st},
  {"as", &YruntimeYas},
  {"handler-test", &YruntimeYhandler_test},
  {"condition-arguments", &YruntimeYcondition_arguments},
  {"from-above-by", &YruntimeYfrom_above_by},
  {"always", &YruntimeYalways},
  {"t<", &YruntimeYtL},
  {"ceiling", &YruntimeYceiling},
  {"out", &YruntimeYout},
  {"do", &YruntimeYdo},
  {"newline", &YruntimeYnewline},
  {"epsilon", &YruntimeYepsilon},
  {"port-guts-setter", &YruntimeYport_guts_setter},
  {"fab", &YruntimeYfab},
  {"buf-dat", &YruntimeYbuf_dat},
  {"table-growth-factor", &YruntimeYtable_growth_factor},
  {"force-output", &YruntimeYforce_output},
  {"assocs-test-setter", &YruntimeYassocs_test_setter},
  {"char-ready?", &YruntimeYchar_readyQ},
  {"buf-dat-setter", &YruntimeYbuf_dat_setter},
  {"<step>", &YruntimeYLstepG},
  {"char->ascii", &YruntimeYchar_Gascii},
  {"---main-4---", NULL},
  {"build-condition-interactively", &YruntimeYbuild_condition_interactively},
  {"<tab-state>", &YruntimeYLtab_stateG},
  {"%primary-modulus-setter", &YruntimeYPprimary_modulus_setter},
  {"uppercase?", &YruntimeYuppercaseQ},
  {"$permanent-hash-state", &YruntimeYDpermanent_hash_state},
  {"del-key", &YruntimeYdel_key},
  {"%with-monitor", &YruntimeYPwith_monitor},
  {"%bucket-depth-setter", &YruntimeYPbucket_depth_setter},
  {"t=", &YruntimeYtE},
  {"zero?", &YruntimeYzeroQ},
  {"nxt-state", &YruntimeYnxt_state},
  {"range-check", &YruntimeYrange_check},
  {"fab-table-vector", &YruntimeYfab_table_vector},
  {"call-with-input-file", &YruntimeYcall_with_input_file},
  {"len-setter", &YruntimeYlen_setter},
  {"del-dups", &YruntimeYdel_dups},
  {"pick", &YruntimeYpick},
  {"%count-setter", &YruntimeYPcount_setter},
  {"port-guts", &YruntimeYport_guts},
  {"do-keyed", &YruntimeYdo_keyed},
  {"%bucket-setter", &YruntimeYPbucket_setter},
  {"ascii-whitespaces", &YruntimeYascii_whitespaces},
  {"map-keyed", &YruntimeYmap_keyed},
  {"%index-setter", &YruntimeYPindex_setter},
  {"now-key", &YruntimeYnow_key},
  {"choose-handler", &YruntimeYchoose_handler},
  {"alphabetic?", &YruntimeYalphabeticQ},
  {"incongruent-method-error-method-setter", &YruntimeYincongruent_method_error_method_setter},
  {"all2?", &YruntimeYall2Q},
  {">=", &YruntimeYGE},
  {"%primary-modulus", &YruntimeYPprimary_modulus},
  {"-", &YruntimeY_},
  {"t+", &YruntimeYtA},
  {"buf-len", &YruntimeYbuf_len},
  {"%vector-setter", &YruntimeYPvector_setter},
  {"---main-7---", NULL},
  {"now-elt", &YruntimeYnow_elt},
  {"integer->char", &YruntimeYinteger_Gchar},
  {"read-char", &YruntimeYread_char},
  {"as-copy", &YruntimeYas_copy},
  {"mem?", &YruntimeYmemQ},
  {"table-shrink-threshold-setter", &YruntimeYtable_shrink_threshold_setter},
  {"handler-condition-type", &YruntimeYhandler_condition_type},
  {"<handler>", &YruntimeYLhandlerG},
  {"<file-output-port>", &YruntimeYLfile_output_portG},
  {"peek-char", &YruntimeYpeek_char},
  {"table-shrink-threshold", &YruntimeYtable_shrink_threshold},
  {">", &YruntimeYG},
  {"all?", &YruntimeYallQ},
  {"2nd", &YruntimeY2nd},
  {"range-error", &YruntimeYrange_error},
  {"open-input-file", &YruntimeYopen_input_file},
  {"<string-port>", &YruntimeYLstring_portG},
  {"%gc-state-setter", &YruntimeYPgc_state_setter},
  {"~==", &YruntimeYNEE},
  {"handler-test-setter", &YruntimeYhandler_test_setter},
  {"handler-matches?", &YruntimeYhandler_matchesQ},
  {"round", &YruntimeYround},
  {"condition-arguments-setter", &YruntimeYcondition_arguments_setter},
  {"%index", &YruntimeYPindex},
  {"from-by", &YruntimeYfrom_by},
  {"describe-handler", &YruntimeYdescribe_handler},
  {"<handler-info>", &YruntimeYLhandler_infoG},
  {"call-with-string-output-port", &YruntimeYcall_with_string_output_port},
  {"logbit?", &YruntimeYlogbitQ},
  {"assocs-keys", &YruntimeYassocs_keys},
  {"---main-5---", NULL},
  {"clr!", &YruntimeYclrX},
  {"eof-object?", &YruntimeYeof_objectQ},
  {"table-protocol", &YruntimeYtable_protocol},
  {"trace", &YruntimeYtrace},
  {"<", &YruntimeYL},
  {"fin-state?", &YruntimeYfin_stateQ},
  {"first-then", &YruntimeYfirst_then},
  {"%gc-state", &YruntimeYPgc_state},
  {"buf-len-setter", &YruntimeYbuf_len_setter},
  {"del", &YruntimeYdel},
  {"list", &YruntimeYlist},
  {"$default-handler-info", &YruntimeYDdefault_handler_info},
  {"<simple-table-vector>", &YruntimeYLsimple_table_vectorG},
  {"build-condition-for-handler-interactively", &YruntimeYbuild_condition_for_handler_interactively},
  {"ini-state", &YruntimeYini_state},
  {"%data", &YruntimeYPdata},
  {"from-above", &YruntimeYfrom_above},
  {"invoke-handler-interactively", &YruntimeYinvoke_handler_interactively},
  {"---main-8---", NULL},
  {"as-lowercase", &YruntimeYas_lowercase},
  {"%bucket-depth", &YruntimeYPbucket_depth},
  {"neg?", &YruntimeYnegQ},
  {"%secondary-modulus", &YruntimeYPsecondary_modulus},
  {"%vacated", &YruntimeYPvacated},
  {"len", &YruntimeYlen},
  {"<map>", &YruntimeYLmapG},
  {"handler-active?", &YruntimeYhandler_activeQ},
  {"identity", &YruntimeYidentity},
  {"str-to-num", &YruntimeYstr_to_num},
  {"close-output-port", &YruntimeYclose_output_port},
  {"assocq", &YruntimeYassocq},
  {"sub", &YruntimeYsub},
  {"boot-symbols", &YruntimeYboot_symbols},
  {"range-from", &YruntimeYrange_from},
  {"handler-function", &YruntimeYhandler_function},
  {"range-below-setter", &YruntimeYrange_below_setter},
  {"<assoc>", &YruntimeYLassocG},
  {"any2?", &YruntimeYany2Q},
  {"range-above-setter", &YruntimeYrange_above_setter},
  {"range-by-setter", &YruntimeYrange_by_setter},
  {"vals-to-str", &YruntimeYvals_to_str},
  {"numeric?", &YruntimeYnumericQ},
  {"sig", &YruntimeYsig},
  {"to-str", &YruntimeYto_str},
  {"in", &YruntimeYin},
  {"keys", &YruntimeYkeys},
  {"any?", &YruntimeYanyQ},
  {"do-key-vals", &YruntimeYdo_key_vals},
  {"handler-info-arguments-setter", &YruntimeYhandler_info_arguments_setter},
  {"*print-base*", &YruntimeYTprint_baseT},
  {"handler-condition-type-setter", &YruntimeYhandler_condition_type_setter},
  {"table-growth-threshold-setter", &YruntimeYtable_growth_threshold_setter},
  {"grow-table", &YruntimeYgrow_table},
  {"table-growth-threshold", &YruntimeYtable_growth_threshold},
  {"fill", &YruntimeYfill},
  {"hash-moduli", &YruntimeYhash_moduli},
  {"rot", &YruntimeYrot},
  {"<buf>", &YruntimeYLbufG},
  {"even?", &YruntimeYevenQ},
  {"<str-tab>", &YruntimeYLstr_tabG},
  {"*current-handlers*", &YruntimeYTcurrent_handlersT},
  {"/", &YruntimeYS},
  {"id-hash", &YruntimeYid_hash},
  {"alter", &YruntimeYalter},
  {"default-handler", &YruntimeYdefault_handler},
  {"3rd", &YruntimeY3rd},
  {"<condition>", &YruntimeYLconditionG},
  {"truncate", &YruntimeYtruncate},
  {"range-from-setter", &YruntimeYrange_from_setter},
  {"range-above", &YruntimeYrange_above},
  {"min", &YruntimeYmin},
  {"booted-fab-sym", &YruntimeYbooted_fab_sym},
  {"assocs-keys-setter", &YruntimeYassocs_keys_setter},
  {"assoc", &YruntimeYassoc},
  {"vec", &YruntimeYvec},
  {"now-elt-setter", &YruntimeYnow_elt_setter},
  {"assocs-vals", &YruntimeYassocs_vals},
  {"condition-message", &YruntimeYcondition_message},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"current-gc-state", "current-gc-state"},
  {"round", "round"},
  {"match-sublist", "match-sublist"},
  {"write-string", "write-string"},
  {"call-with-string-input-port", "call-with-string-input-port"},
  {"floor", "floor"},
  {"fabs", "fabs"},
  {"pos", "pos"},
  {"neg", "neg"},
  {"make-handler", "make-handler"},
  {"push", "push"},
  {"as-uppercase", "as-uppercase"},
  {"max", "max"},
  {"from-below", "from-below"},
  {"close-input-port", "close-input-port"},
  {"from-below-by", "from-below-by"},
  {"do3", "do3"},
  {"assq", "assq"},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"pop-last!", "pop-last!"},
  {"now-key", "now-key"},
  {"sub-setter", "sub-setter"},
  {"to-digit", "to-digit"},
  {"<serious-condition>", "<serious-condition>"},
  {"<file-port>", "<file-port>"},
  {"<replace-generic-restart>", "<replace-generic-restart>"},
  {"cat", "cat"},
  {"<input-port>", "<input-port>"},
  {"ascii-limit", "ascii-limit"},
  {"empty?", "empty?"},
  {"buf", "buf"},
  {"port-index", "port-index"},
  {"read", "read"},
  {"ceiling/", "ceiling/"},
  {"format", "format"},
  {"handler-info-message", "handler-info-message"},
  {"rev!", "rev!"},
  {"last", "last"},
  {"floor/", "floor/"},
  {"match-atom", "match-atom"},
  {"describe-condition", "describe-condition"},
  {"lsh", "lsh"},
  {"gensym", "gensym"},
  {"ash", "ash"},
  {"num-to-str", "num-to-str"},
  {"flo-bits", "flo-bits"},
  {"rcurry", "rcurry"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"<string-output-port>", "<string-output-port>"},
  {"rev", "rev"},
  {"assoc-value", "assoc-value"},
  {"abs", "abs"},
  {"<port>", "<port>"},
  {"do2", "do2"},
  {"push-last!", "push-last!"},
  {"*", "*"},
  {"<output-port>", "<output-port>"},
  {"truncate/", "truncate/"},
  {"<list>", "<list>"},
  {"match-unquote", "match-unquote"},
  {"<error>", "<error>"},
  {"compose", "compose"},
  {"open-output-file", "open-output-file"},
  {"app-args", "app-args"},
  {"write-char", "write-char"},
  {"default", "default"},
  {"address-of", "address-of"},
  {"port-contents", "port-contents"},
  {"call-with-output-file", "call-with-output-file"},
  {"cat2", "cat2"},
  {"modulo", "modulo"},
  {"<string-input-port>", "<string-input-port>"},
  {"cat!", "cat!"},
  {"app-filename", "app-filename"},
  {"<restart>", "<restart>"},
  {"<assocs>", "<assocs>"},
  {"empty", "empty"},
  {"assqn", "assqn"},
  {"add!", "add!"},
  {"+", "+"},
  {"<simple-error>", "<simple-error>"},
  {"<range>", "<range>"},
  {"remainder", "remainder"},
  {"add", "add"},
  {"find-key", "find-key"},
  {"elt", "elt"},
  {"curry", "curry"},
  {"<=", "<="},
  {"elt-setter", "elt-setter"},
  {"logior", "logior"},
  {"lowercase?", "lowercase?"},
  {"=", "="},
  {"nul?", "nul?"},
  {"<file-input-port>", "<file-input-port>"},
  {"<tab>", "<tab>"},
  {"locative-value-setter", "locative-value-setter"},
  {"assocs-test", "assocs-test"},
  {"from-to-by", "from-to-by"},
  {"default-handler-description", "default-handler-description"},
  {"map", "map"},
  {"eof-object", "eof-object"},
  {"match-empty-list", "match-empty-list"},
  {"pop", "pop"},
  {"map2", "map2"},
  {"pos?", "pos?"},
  {"logxor", "logxor"},
  {"from-to", "from-to"},
  {"~=", "~="},
  {"copy-state", "copy-state"},
  {"from", "from"},
  {"<simple-condition>", "<simple-condition>"},
  {"==", "=="},
  {"tup", "tup"},
  {"logand", "logand"},
  {"locative-value", "locative-value"},
  {"false-or", "false-or"},
  {"del-keys", "del-keys"},
  {"reduce", "reduce"},
  {"table-shrink-threshold", "table-shrink-threshold"},
  {"<incongruent-method-error>", "<incongruent-method-error>"},
  {"format-to-string", "format-to-string"},
  {"lognot", "lognot"},
  {"lst", "lst"},
  {"1st", "1st"},
  {"round/", "round/"},
  {"as", "as"},
  {"condition-arguments", "condition-arguments"},
  {"from-above-by", "from-above-by"},
  {"condition-message", "condition-message"},
  {"always", "always"},
  {"t<", "t<"},
  {"ceiling", "ceiling"},
  {"out", "out"},
  {"do", "do"},
  {"newline", "newline"},
  {"fab", "fab"},
  {"table-growth-factor", "table-growth-factor"},
  {"force-output", "force-output"},
  {"char-ready?", "char-ready?"},
  {"<step>", "<step>"},
  {"char->ascii", "char->ascii"},
  {"build-condition-interactively", "build-condition-interactively"},
  {"uppercase?", "uppercase?"},
  {"<str-tab>", "<str-tab>"},
  {"$permanent-hash-state", "$permanent-hash-state"},
  {"del-key", "del-key"},
  {"%with-monitor", "%with-monitor"},
  {"t=", "t="},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"zero?", "zero?"},
  {"nxt-state", "nxt-state"},
  {"call-with-input-file", "call-with-input-file"},
  {"len-setter", "len-setter"},
  {"del-dups", "del-dups"},
  {"pick", "pick"},
  {"do-keyed", "do-keyed"},
  {"ascii-whitespaces", "ascii-whitespaces"},
  {"map-keyed", "map-keyed"},
  {"pair", "pair"},
  {"choose-handler", "choose-handler"},
  {"alphabetic?", "alphabetic?"},
  {">=", ">="},
  {"-", "-"},
  {"t+", "t+"},
  {"now-elt", "now-elt"},
  {"read-char", "read-char"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"mem?", "mem?"},
  {"<handler>", "<handler>"},
  {"<file-output-port>", "<file-output-port>"},
  {"peek-char", "peek-char"},
  {">", ">"},
  {"all?", "all?"},
  {"2nd", "2nd"},
  {"open-input-file", "open-input-file"},
  {"make-setter-name", "make-setter-name"},
  {"<string-port>", "<string-port>"},
  {"~==", "~=="},
  {"handler-matches?", "handler-matches?"},
  {"<map>", "<map>"},
  {"from-by", "from-by"},
  {"str", "str"},
  {"describe-handler", "describe-handler"},
  {"<handler-info>", "<handler-info>"},
  {"call-with-string-output-port", "call-with-string-output-port"},
  {"logbit?", "logbit?"},
  {"eof-object?", "eof-object?"},
  {"table-protocol", "table-protocol"},
  {"<", "<"},
  {"fin-state?", "fin-state?"},
  {"first-then", "first-then"},
  {"del", "del"},
  {"even?", "even?"},
  {"list", "list"},
  {"$default-handler-info", "$default-handler-info"},
  {"build-condition-for-handler-interactively", "build-condition-for-handler-interactively"},
  {"ini-state", "ini-state"},
  {"from-above", "from-above"},
  {"invoke-handler-interactively", "invoke-handler-interactively"},
  {"as-lowercase", "as-lowercase"},
  {"error", "error"},
  {"neg?", "neg?"},
  {"len", "len"},
  {"identity", "identity"},
  {"var-type", "var-type"},
  {"str-to-num", "str-to-num"},
  {"close-output-port", "close-output-port"},
  {"assocq", "assocq"},
  {"sub", "sub"},
  {"handler-function", "handler-function"},
  {"reduce+", "reduce+"},
  {"numeric?", "numeric?"},
  {"sig", "sig"},
  {"to-str", "to-str"},
  {"in", "in"},
  {"keys", "keys"},
  {"make-sym", "make-sym"},
  {"any?", "any?"},
  {"*print-base*", "*print-base*"},
  {"napply", "napply"},
  {"table-growth-threshold", "table-growth-threshold"},
  {"fill", "fill"},
  {"<buf>", "<buf>"},
  {"odd?", "odd?"},
  {"var-name", "var-name"},
  {"/", "/"},
  {"id-hash", "id-hash"},
  {"alter", "alter"},
  {"default-handler", "default-handler"},
  {"3rd", "3rd"},
  {"<condition>", "<condition>"},
  {"truncate", "truncate"},
  {"min", "min"},
  {"assoc", "assoc"},
  {"vec", "vec"},
  {"now-elt-setter", "now-elt-setter"},
  {"list-handlers", "list-handlers"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_runtime;
MODULE_INFO module_info_runtime = {
  "runtime",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_boot (void);
extern void load_module_macros (void);

/* EXPRESSION: */

extern void load_module_runtime (void);

void load_module_runtime (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();

  (P)YruntimeY___main_0___();
  (P)YruntimeY___main_1___();
  (P)YruntimeY___main_2___();
  (P)YruntimeY___main_3___();
  (P)YruntimeY___main_4___();
  (P)YruntimeY___main_5___();
  (P)YruntimeY___main_6___();
  (P)YruntimeY___main_7___();
  (P)YruntimeY___main_8___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
