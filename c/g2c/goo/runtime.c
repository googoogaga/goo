/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: runtime */

DEF(YruntimeYadd,"runtime","add");
DEF(YruntimeYLhandler_infoG,"runtime","<handler-info>");
DEF(YruntimeYDvacated_cell_marker,"runtime","$vacated-cell-marker");
DEF(YruntimeYelt,"runtime","elt");
DEF(YruntimeYinteger_Gchar,"runtime","integer->char");
DEF(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YLnumG,"boot","<num>");
DEF(YruntimeYfrom_below_by,"runtime","from-below-by");
DEF(YruntimeYelt_setter,"runtime","elt-setter");
DEF(YruntimeYidentity,"runtime","identity");
DEF(YruntimeYfrom,"runtime","from");
DEF(YruntimeYLtab_stateG,"runtime","<tab-state>");
DEF(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YLslotG,"boot","<slot>");
DEF(YruntimeYstep_first,"runtime","step-first");
DEF(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(Ynul,"boot","nul");
DEF(YruntimeYNEE,"runtime","~==");
DEF(YruntimeYkeys,"runtime","keys");
DEF(YruntimeYevenQ,"runtime","even?");
DEF(YruntimeYLassocG,"runtime","<assoc>");
DEF(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YmacrosYvar_type,"macros","var-type");
DEF(YruntimeYPbucket_depth_setter,"runtime","%bucket-depth-setter");
DEF(YruntimeYPbucket_depth,"runtime","%bucket-depth");
DEF(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YLchrG,"boot","<chr>");
DEF(YruntimeYdescribe_handler,"runtime","describe-handler");
DEF(YruntimeYlen,"runtime","len");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YLoptsG,"boot","<opts>");
EXT(YPsnul,"boot","%snul");
DEF(YruntimeYA,"runtime","+");
DEF(YruntimeYPbucket,"runtime","%bucket");
DEF(YruntimeYhandler_function,"runtime","handler-function");
EXT(YLunionG,"boot","<union>");
DEF(YruntimeYfrom_to,"runtime","from-to");
DEF(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YmacrosYmatch_atom,"macros","match-atom");
DEF(YruntimeYchar_readyQ,"runtime","char-ready?");
DEF(YruntimeYPsecondary_modulus_setter,"runtime","%secondary-modulus-setter");
DEF(YruntimeYstr_to_num,"runtime","str-to-num");
DEF(YruntimeYto_str,"runtime","to-str");
DEF(YruntimeYin,"runtime","in");
DEF(YruntimeYas_lowercase,"runtime","as-lowercase");
DEF(YruntimeYinto,"runtime","into");
DEF(YruntimeYclrX,"runtime","clr!");
EXT(YLlogG,"boot","<log>");
EXT(YmacrosYtup,"macros","tup");
DEF(YruntimeYdo_handlers_of_type,"runtime","do-handlers-of-type");
DEF(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(Yfun_specs,"boot","fun-specs");
DEF(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(Ysig_specs,"boot","sig-specs");
DEF(YruntimeYlist,"runtime","list");
EXT(Ytail,"boot","tail");
DEF(YruntimeYanyQ,"runtime","any?");
DEF(YruntimeYincongruent_method_error_generic,"runtime","incongruent-method-error-generic");
DEF(YruntimeYLtabG,"runtime","<tab>");
DEF(YruntimeYfab_table_vector,"runtime","fab-table-vector");
DEF(YruntimeYstep_first_setter,"runtime","step-first-setter");
DEF(YruntimeYtable_growth_factor_setter,"runtime","table-growth-factor-setter");
DEF(YruntimeYdo_key_vals,"runtime","do-key-vals");
DEF(YruntimeYallQ,"runtime","all?");
DEF(YruntimeYLrangeG,"runtime","<range>");
EXT(YLsubclassG,"boot","<subclass>");
DEF(YruntimeYrange_below,"runtime","range-below");
DEF(YruntimeYLconditionG,"runtime","<condition>");
DEF(YruntimeYfill,"runtime","fill");
DEF(YruntimeYclose_output_port,"runtime","close-output-port");
DEF(YruntimeYPindex_setter,"runtime","%index-setter");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
DEF(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YmacrosYEE,"macros","==");
DEF(YruntimeY1st,"runtime","1st");
DEF(YruntimeYLstring_portG,"runtime","<string-port>");
DEF(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
DEF(YruntimeYLportG,"runtime","<port>");
EXT(YLanyG,"boot","<any>");
DEF(YruntimeYpop,"runtime","pop");
DEF(YruntimeYvec,"runtime","vec");
DEF(YruntimeYnative_chars,"runtime","native-chars");
DEF(YruntimeYnumericQ,"runtime","numeric?");
EXT(YPdefine_method,"boot","%define-method");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
DEF(YruntimeYLrestartG,"runtime","<restart>");
EXT(YLsingletonG,"boot","<singleton>");
DEF(YruntimeYassoc_value,"runtime","assoc-value");
DEF(YruntimeYLlistG,"runtime","<list>");
DEF(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YmacrosYvar_name,"macros","var-name");
DEF(YruntimeYassocq,"runtime","assocq");
DEF(YruntimeYTcurrent_handlersT,"runtime","*current-handlers*");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
DEF(YruntimeYalter,"runtime","alter");
DEF(YruntimeYtab_keys,"runtime","tab-keys");
DEF(YruntimeYstr,"runtime","str");
DEF(YruntimeYpick,"runtime","pick");
DEF(YruntimeYLstr_tabG,"runtime","<str-tab>");
DEF(YruntimeYassocs_keys,"runtime","assocs-keys");
DEF(YruntimeYapp_args,"runtime","app-args");
EXT(YisaQ,"boot","isa?");
DEF(YruntimeYrange_below_setter,"runtime","range-below-setter");
DEF(YruntimeYfrom_by,"runtime","from-by");
DEF(YruntimeYassoc_value_setter,"runtime","assoc-value-setter");
DEF(YruntimeYcondition_arguments_setter,"runtime","condition-arguments-setter");
DEF(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Ytype_object,"boot","type-object");
DEF(YruntimeYdel_keys,"runtime","del-keys");
DEF(YruntimeYTdebug_tablesQT,"runtime","*debug-tables?*");
DEF(YruntimeYLhandlerG,"runtime","<handler>");
DEF(YruntimeY2nd,"runtime","2nd");
DEF(YruntimeYport_index_setter,"runtime","port-index-setter");
DEF(YruntimeYPbucket_setter,"runtime","%bucket-setter");
DEF(YruntimeYS,"runtime","/");
DEF(YruntimeYascii_chars,"runtime","ascii-chars");
DEF(YruntimeYapp_filename,"runtime","app-filename");
DEF(YruntimeYLstepG,"runtime","<step>");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(Yslot_init,"boot","slot-init");
DEF(YruntimeYtruncate,"runtime","truncate");
DEF(YruntimeYrot,"runtime","rot");
EXT(Yobject_parents,"boot","object-parents");
DEF(YruntimeYport_handle,"runtime","port-handle");
DEF(YruntimeYpos,"runtime","pos");
DEF(YruntimeYrange_check,"runtime","range-check");
DEF(YruntimeYtable_shrink_threshold_setter,"runtime","table-shrink-threshold-setter");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Ynot,"boot","not");
DEF(YruntimeYmin,"runtime","min");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
DEF(YruntimeYdel_dups,"runtime","del-dups");
EXT(Yfun_names,"boot","fun-names");
DEF(YruntimeYTgensym_counterT,"runtime","*gensym-counter*");
EXT(Ysig_value,"boot","sig-value");
EXT(Ysym_name,"boot","sym-name");
DEF(YruntimeYfabs,"runtime","fabs");
DEF(YruntimeYdo3,"runtime","do3");
DEF(YruntimeYtable_growth_threshold_setter,"runtime","table-growth-threshold-setter");
DEF(YruntimeYoddQ,"runtime","odd?");
DEF(YruntimeYDdigit_to_char,"runtime","$digit-to-char");
DEF(YruntimeYfrom_above_by,"runtime","from-above-by");
DEF(YruntimeYassq,"runtime","assq");
DEF(YruntimeYlen_setter,"runtime","len-setter");
DEF(YruntimeYid_hash,"runtime","id-hash");
EXT(Yclass_direct_children,"boot","class-direct-children");
DEF(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
DEF(YruntimeYany2Q,"runtime","any2?");
EXT(YPPmacro,"boot","%%macro");
DEF(YruntimeYassoc,"runtime","assoc");
DEF(YruntimeYhandler_test,"runtime","handler-test");
DEF(YruntimeYneg,"runtime","neg");
EXT(Yobject_slots,"boot","object-slots");
DEF(YruntimeYini_state,"runtime","ini-state");
DEF(YruntimeYas_uppercase,"runtime","as-uppercase");
DEF(YruntimeYhandler_condition_type,"runtime","handler-condition-type");
DEF(YruntimeYwrite_string,"runtime","write-string");
DEF(YruntimeYPprimary_modulus_setter,"runtime","%primary-modulus-setter");
EXT(YLclassG,"boot","<class>");
DEF(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
DEF(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
DEF(YruntimeYgrow_table,"runtime","grow-table");
DEF(YruntimeYopen_input_file,"runtime","open-input-file");
DEF(YruntimeYeof_objectQ,"runtime","eof-object?");
DEF(YruntimeYPn_buckets,"runtime","%n-buckets");
DEF(YruntimeYincongruent_method_error_generic_setter,"runtime","incongruent-method-error-generic-setter");
DEF(YruntimeYfrom_below,"runtime","from-below");
DEF(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
DEF(YruntimeYrange_by,"runtime","range-by");
DEF(YruntimeYPgc_state_setter,"runtime","%gc-state-setter");
EXT(Ytype_error,"boot","type-error");
DEF(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(Yerror,"boot","error");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(Yfind_setter,"boot","find-setter");
DEF(YruntimeYrange_error,"runtime","range-error");
DEF(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YLtypeG,"boot","<type>");
EXT(Ysig_names,"boot","sig-names");
DEF(YruntimeYPvector_setter,"runtime","%vector-setter");
EXT(Yslot_owner,"boot","slot-owner");
DEF(YruntimeYcontagious_call,"runtime","contagious-call");
EXT(YmacrosYpair,"macros","pair");
DEF(YruntimeYto_digit,"runtime","to-digit");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
DEF(YruntimeYepsilon,"runtime","epsilon");
EXT(YPvnul,"boot","%vnul");
DEF(YruntimeYLbufG,"runtime","<buf>");
DEF(YruntimeYhandler_info_arguments_setter,"runtime","handler-info-arguments-setter");
DEF(YruntimeYrange_by_setter,"runtime","range-by-setter");
DEF(YruntimeY_,"runtime","-");
DEF(YruntimeYlocative_value,"runtime","locative-value");
DEF(YruntimeYcondition_message,"runtime","condition-message");
DEF(YruntimeYnegQ,"runtime","neg?");
DEF(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
DEF(YruntimeYrcurry,"runtime","rcurry");
DEF(YruntimeYstep_then,"runtime","step-then");
EXT(Yunknown_function_error,"boot","unknown-function-error");
DEF(YruntimeYdel,"runtime","del");
EXT(Yfapply,"boot","fapply");
EXT(Yadd_slot,"boot","add-slot");
EXT(Yhead,"boot","head");
DEF(YruntimeYassocs_keys_setter,"runtime","assocs-keys-setter");
DEF(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YLsymG,"boot","<sym>");
DEF(YruntimeYread,"runtime","read");
DEF(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
DEF(YruntimeYceilingS,"runtime","ceiling/");
DEF(YruntimeYnow_key,"runtime","now-key");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
DEF(YruntimeYLbotG,"runtime","<bot>");
DEF(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
DEF(YruntimeYround,"runtime","round");
DEF(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
DEF(YruntimeYfloorS,"runtime","floor/");
DEF(YruntimeYcompose,"runtime","compose");
DEF(YruntimeYdescribe_condition,"runtime","describe-condition");
DEF(YruntimeYrehash_table,"runtime","rehash-table");
DEF(YruntimeYPvector,"runtime","%vector");
DEF(YruntimeYdo2,"runtime","do2");
DEF(YruntimeYrange_above,"runtime","range-above");
DEF(YruntimeYsub,"runtime","sub");
DEF(YruntimeYnow_elt,"runtime","now-elt");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
DEF(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
DEF(YruntimeYport_guts_setter,"runtime","port-guts-setter");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yhead_setter,"boot","head-setter");
DEF(YruntimeYvals_to_str,"runtime","vals-to-str");
DEF(YruntimeYrange_above_setter,"runtime","range-above-setter");
DEF(YruntimeYroundS,"runtime","round/");
DEF(YruntimeYport_handle_setter,"runtime","port-handle-setter");
DEF(YruntimeYnum_to_str,"runtime","num-to-str");
DEF(YruntimeYlsh,"runtime","lsh");
DEF(YruntimeYaddress_of,"runtime","address-of");
EXT(Yfind_getter,"boot","find-getter");
DEF(YruntimeYash,"runtime","ash");
DEF(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YLstrG,"boot","<str>");
DEF(YruntimeYflo_bits,"runtime","flo-bits");
DEF(YruntimeYdel_key,"runtime","del-key");
DEF(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
DEF(YruntimeYPcount,"runtime","%count");
EXT(Yobject_class,"boot","object-class");
DEF(YruntimeYnxt_state,"runtime","nxt-state");
DEF(YruntimeYPindex,"runtime","%index");
DEF(YruntimeYfrom_above,"runtime","from-above");
DEF(YruntimeYwrite_char,"runtime","write-char");
DEF(YruntimeYPprimary_modulus,"runtime","%primary-modulus");
EXT(YLgenG,"boot","<gen>");
EXT(Ynil,"boot","nil");
EXT(YPcall_next_method,"boot","%call-next-method");
DEF(YruntimeYtable_protocol,"runtime","table-protocol");
DEF(YruntimeYnewline,"runtime","newline");
DEF(YruntimeYabs,"runtime","abs");
DEF(YruntimeYformat,"runtime","format");
EXT(Yfile_opening_error,"boot","file-opening-error");
DEF(YruntimeYPvacated_setter,"runtime","%vacated-setter");
DEF(YruntimeYassqn,"runtime","assqn");
DEF(YruntimeYcopy_to_new_vector,"runtime","copy-to-new-vector");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(Yslot_type,"boot","slot-type");
DEF(YruntimeYhandler_test_setter,"runtime","handler-test-setter");
DEF(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
DEF(YruntimeYincongruent_method_error_method,"runtime","incongruent-method-error-method");
DEF(YruntimeYT,"runtime","*");
DEF(YruntimeYassocs_vals,"runtime","assocs-vals");
DEF(YruntimeYPwith_monitor,"runtime","%with-monitor");
DEF(YruntimeYpower_of_two_ceiling,"runtime","power-of-two-ceiling");
DEF(YruntimeYtruncateS,"runtime","truncate/");
DEF(YruntimeYhandler_condition_type_setter,"runtime","handler-condition-type-setter");
EXT(Yfab_gen,"boot","fab-gen");
DEF(YruntimeYpeek_char,"runtime","peek-char");
DEF(YruntimeYcurry,"runtime","curry");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YLvecG,"boot","<vec>");
DEF(YruntimeYcontagious_type,"runtime","contagious-type");
DEF(YruntimeYPcount_setter,"runtime","%count-setter");
DEF(YruntimeYread_char,"runtime","read-char");
DEF(YruntimeY3rd,"runtime","3rd");
EXT(Ysig_arity,"boot","sig-arity");
DEF(YruntimeYnyi_error,"runtime","nyi-error");
DEF(YruntimeYmax,"runtime","max");
DEF(YruntimeYeof_object,"runtime","eof-object");
DEF(YruntimeYPvacated,"runtime","%vacated");
DEF(YruntimeYPgc_state,"runtime","%gc-state");
DEF(YruntimeYrange_to,"runtime","range-to");
DEF(YruntimeYfloor,"runtime","floor");
DEF(YruntimeYchoose_handler,"runtime","choose-handler");
DEF(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
DEF(YruntimeYascii_Gchar,"runtime","ascii->char");
EXT(Yclass_slots,"boot","class-slots");
DEF(YruntimeYmodulo,"runtime","modulo");
DEF(YruntimeYdefault,"runtime","default");
DEF(YruntimeYfab_map,"runtime","fab-map");
DEF(YruntimeYrange_from,"runtime","range-from");
EXT(YLflatG,"boot","<flat>");
DEF(YruntimeYfind_key,"runtime","find-key");
DEF(YruntimeYreduceA,"runtime","reduce+");
EXT(YLmetG,"boot","<met>");
DEF(YruntimeYcondition_message_setter,"runtime","condition-message-setter");
DEF(YruntimeYbuf_dat,"runtime","buf-dat");
EXT(YmacrosYmap,"macros","map");
DEF(YruntimeYrange_to_setter,"runtime","range-to-setter");
DEF(YruntimeYassoc_key,"runtime","assoc-key");
DEF(YruntimeYnulQ,"runtime","nul?");
DEF(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
DEF(YruntimeYnyi,"runtime","nyi");
DEF(YruntimeYempty,"runtime","empty");
DEF(YruntimeYstep_then_setter,"runtime","step-then-setter");
DEF(YruntimeYport_index,"runtime","port-index");
DEF(YruntimeYbuf_dat_setter,"runtime","buf-dat-setter");
EXT(Ylst,"boot","lst");
EXT(YLtupG,"boot","<tup>");
DEF(YruntimeYbuf_len,"runtime","buf-len");
DEF(YruntimeYfirst_then,"runtime","first-then");
DEF(YruntimeYrange_from_setter,"runtime","range-from-setter");
DEF(YruntimeYremainder,"runtime","remainder");
EXT(Yfab_class,"boot","fab-class");
DEF(YruntimeYlogior,"runtime","logior");
EXT(Yfun_value,"boot","fun-value");
DEF(YruntimeYLassocsG,"runtime","<assocs>");
DEF(YruntimeYdecode_radix_option,"runtime","decode-radix-option");
EXT(YPsymbols,"boot","%symbols");
DEF(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(Ytype_elts,"boot","type-elts");
DEF(YruntimeYLE,"runtime","<=");
DEF(YruntimeYE,"runtime","=");
DEF(YruntimeYmap_keyed,"runtime","map-keyed");
DEF(YruntimeYmap2,"runtime","map2");
DEF(YruntimeYassoc_key_setter,"runtime","assoc-key-setter");
DEF(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
DEF(YruntimeYdefault_handler_description,"runtime","default-handler-description");
DEF(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YLlstG,"boot","<lst>");
DEF(YruntimeYchoose_table_geometry,"runtime","choose-table-geometry");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
DEF(YruntimeYposQ,"runtime","pos?");
EXT(YPisa,"boot","%isa");
DEF(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
DEF(YruntimeYfalse_or,"runtime","false-or");
DEF(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
DEF(YruntimeYL,"runtime","<");
EXT(YLfunG,"boot","<fun>");
EXT(Yfun_name,"boot","fun-name");
DEF(YruntimeYbuf_len_setter,"runtime","buf-len-setter");
EXT(Yclass_name,"boot","class-name");
DEF(YruntimeYlogxor,"runtime","logxor");
DEF(YruntimeYalways,"runtime","always");
DEF(YruntimeYLoutput_portG,"runtime","<output-port>");
DEF(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YLseqG,"boot","<seq>");
DEF(YruntimeYhandler_info,"runtime","handler-info");
DEF(YruntimeYpush,"runtime","push");
DEF(YruntimeYopen_output_file,"runtime","open-output-file");
DEF(YruntimeYreduce,"runtime","reduce");
DEF(YruntimeYbuf,"runtime","buf");
DEF(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
DEF(YruntimeYNE,"runtime","~=");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YmacrosYcat,"macros","cat");
DEF(YruntimeYincongruent_method_error_method_setter,"runtime","incongruent-method-error-method-setter");
DEF(YruntimeYassocs_vals_setter,"runtime","assocs-vals-setter");
DEF(YruntimeYG,"runtime",">");
DEF(YruntimeYlast,"runtime","last");
DEF(YruntimeYlogand,"runtime","logand");
DEF(YruntimeYhandler_activeQ,"runtime","handler-active?");
DEF(YruntimeYhandler_info_message_setter,"runtime","handler-info-message-setter");
DEF(YruntimeYtL,"runtime","t<");
EXT(YLcolG,"boot","<col>");
DEF(YruntimeYfrom_to_by,"runtime","from-to-by");
DEF(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(Yapply,"boot","apply");
DEF(YruntimeYtrace,"runtime","trace");
DEF(YruntimeYdo,"runtime","do");
DEF(YruntimeYboot_symbols,"runtime","boot-symbols");
DEF(YruntimeYchar_Ginteger,"runtime","char->integer");
DEF(YruntimeYforce_output,"runtime","force-output");
DEF(YruntimeYfab,"runtime","fab");
DEF(YruntimeYceiling,"runtime","ceiling");
DEF(YruntimeYlognot,"runtime","lognot");
DEF(YruntimeYrevX,"runtime","rev!");
DEF(YruntimeYas,"runtime","as");
DEF(YruntimeYsig,"runtime","sig");
DEF(YruntimeYout,"runtime","out");
EXT(Yfun_arity,"boot","fun-arity");
DEF(YruntimeYPdata_setter,"runtime","%data-setter");
DEF(YruntimeYassocs_test,"runtime","assocs-test");
DEF(YruntimeYsymbols,"runtime","symbols");
DEF(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(Yslot_setter,"boot","slot-setter");
EXT(Ymet_appQ,"boot","met-app?");
DEF(YruntimeYlow_elt,"runtime","low-elt");
DEF(YruntimeYdefault_handler,"runtime","default-handler");
DEF(YruntimeYtE,"runtime","t=");
DEF(YruntimeYPlist,"runtime","%list");
EXT(YsubtypeQ,"boot","subtype?");
DEF(YruntimeYPdata,"runtime","%data");
DEF(YruntimeYrev,"runtime","rev");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLlocG,"boot","<loc>");
EXT(YLsigG,"boot","<sig>");
DEF(YruntimeYLsimple_table_vectorG,"runtime","<simple-table-vector>");
EXT(Ysig_naryQ,"boot","sig-nary?");
DEF(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
DEF(YruntimeYPcat,"runtime","%cat");
EXT(Yfun_mets,"boot","fun-mets");
EXT(Yclass_parents,"boot","class-parents");
EXT(YPslot,"boot","%slot");
DEF(YruntimeYport_guts,"runtime","port-guts");
DEF(YruntimeYall2Q,"runtime","all2?");
DEF(YruntimeYTtwin_primesT,"runtime","*twin-primes*");
DEF(YruntimeYuppercaseQ,"runtime","uppercase?");
DEF(YruntimeYdo_keyed,"runtime","do-keyed");
DEF(YruntimeYbooted_fab_sym,"runtime","booted-fab-sym");
EXT(YLfloG,"boot","<flo>");
DEF(YruntimeYtA,"runtime","t+");
DEF(YruntimeYadd_new,"runtime","add-new");
DEF(YruntimeYDempty_cell_marker,"runtime","$empty-cell-marker");
DEF(YruntimeYcat2,"runtime","cat2");
DEF(YruntimeYcopy_state,"runtime","copy-state");
DEF(YruntimeYmemQ,"runtime","mem?");
DEF(YruntimeYalphabeticQ,"runtime","alphabetic?");
DEF(YruntimeYzeroQ,"runtime","zero?");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yslot_value,"boot","slot-value");
DEF(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(Ygen_add_met,"boot","gen-add-met");
DEF(YruntimeYcatX,"runtime","cat!");
DEF(YruntimeYPn_buckets_setter,"runtime","%n-buckets-setter");
EXT(Ytype_class,"boot","type-class");
DEF(YruntimeYhandler_info_setter,"runtime","handler-info-setter");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
DEF(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
DEF(YruntimeYsignal_handler_list,"runtime","signal-handler-list");
DEF(YruntimeYLerrorG,"runtime","<error>");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
DEF(YruntimeYclose_input_port,"runtime","close-input-port");
DEF(YruntimeYGE,"runtime",">=");
DEF(YruntimeYhandler_function_setter,"runtime","handler-function-setter");
EXT(YLintG,"boot","<int>");
EXT(Ymay_isaQ,"boot","may-isa?");
DEF(YruntimeYport_contents,"runtime","port-contents");
EXT(Yfun_naryQ,"boot","fun-nary?");
DEF(YruntimeYas_copy,"runtime","as-copy");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
DEF(YruntimeYpop_lastX,"runtime","pop-last!");
DEF(YruntimeYhash_moduli,"runtime","hash-moduli");
DEF(YruntimeYaddX,"runtime","add!");
DEF(YruntimeYassocs_test_setter,"runtime","assocs-test-setter");
DEF(YruntimeYmake_handler,"runtime","make-handler");
DEF(YruntimeYPsecondary_modulus,"runtime","%secondary-modulus");
DEF(YruntimeYLmapG,"runtime","<map>");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_361);
DEFLIT(lit_143);
DEFLIT(lit_208);
DEFLIT(lit_379);
DEFLIT(lit_70);
DEFLIT(lit_137);
DEFLIT(lit_197);
DEFLIT(lit_335);
DEFLIT(lit_52);
DEFLIT(lit_357);
DEFLIT(lit_301);
DEFLIT(lit_329);
DEFLIT(lit_346);
DEFLIT(lit_416);
DEFLIT(lit_89);
DEFLIT(lit_158);
DEFLIT(lit_341);
DEFLIT(lit_215);
DEFLIT(lit_39);
DEFLIT(lit_364);
DEFLIT(lit_496);
DEFLIT(lit_100);
DEFLIT(lit_561);
DEFLIT(lit_165);
DEFLIT(lit_306);
DEFLIT(lit_234);
DEFLIT(lit_212);
DEFLIT(lit_44);
DEFLIT(lit_142);
DEFLIT(lit_32);
DEFLIT(lit_298);
DEFLIT(lit_533);
DEFLIT(lit_333);
DEFLIT(lit_322);
DEFLIT(lit_7);
DEFLIT(lit_147);
DEFLIT(lit_495);
DEFLIT(lit_280);
DEFLIT(lit_101);
DEFLIT(lit_433);
DEFLIT(lit_233);
DEFLIT(lit_21);
DEFLIT(lit_87);
DEFLIT(lit_155);
DEFLIT(lit_488);
DEFLIT(lit_214);
DEFLIT(lit_124);
DEFLIT(lit_487);
DEFLIT(lit_445);
DEFLIT(lit_164);
DEFLIT(lit_380);
DEFLIT(lit_149);
DEFLIT(lit_77);
DEFLIT(lit_545);
DEFLIT(lit_65);
DEFLIT(lit_547);
DEFLIT(lit_396);
DEFLIT(lit_297);
DEFLIT(lit_232);
DEFLIT(lit_38);
DEFLIT(lit_336);
DEFLIT(lit_437);
DEFLIT(lit_331);
DEFLIT(lit_6);
DEFLIT(lit_157);
DEFLIT(lit_146);
DEFLIT(lit_484);
DEFLIT(lit_86);
DEFLIT(lit_154);
DEFLIT(lit_56);
DEFLIT(lit_213);
DEFLIT(lit_63);
DEFLIT(lit_502);
DEFLIT(lit_401);
DEFLIT(lit_163);
DEFLIT(lit_426);
DEFLIT(lit_368);
DEFLIT(lit_559);
DEFLIT(lit_200);
DEFLIT(lit_562);
DEFLIT(lit_564);
DEFLIT(lit_159);
DEFLIT(lit_372);
DEFLIT(lit_493);
DEFLIT(lit_307);
DEFLIT(lit_145);
DEFLIT(lit_166);
DEFLIT(lit_554);
DEFLIT(lit_461);
DEFLIT(lit_289);
DEFLIT(lit_240);
DEFLIT(lit_116);
DEFLIT(lit_156);
DEFLIT(lit_454);
DEFLIT(lit_550);
DEFLIT(lit_115);
DEFLIT(lit_204);
DEFLIT(lit_467);
DEFLIT(lit_439);
DEFLIT(lit_525);
DEFLIT(lit_22);
DEFLIT(lit_265);
DEFLIT(lit_532);
DEFLIT(lit_296);
DEFLIT(lit_59);
DEFLIT(lit_248);
DEFLIT(lit_523);
DEFLIT(lit_337);
DEFLIT(lit_387);
DEFLIT(lit_245);
DEFLIT(lit_546);
DEFLIT(lit_277);
DEFLIT(lit_246);
DEFLIT(lit_316);
DEFLIT(lit_520);
DEFLIT(lit_444);
DEFLIT(lit_20);
DEFLIT(lit_319);
DEFLIT(lit_4);
DEFLIT(lit_151);
DEFLIT(lit_538);
DEFLIT(lit_152);
DEFLIT(lit_235);
DEFLIT(lit_540);
DEFLIT(lit_567);
DEFLIT(lit_221);
DEFLIT(lit_193);
DEFLIT(lit_350);
DEFLIT(lit_295);
DEFLIT(lit_209);
DEFLIT(lit_247);
DEFLIT(lit_317);
DEFLIT(lit_318);
DEFLIT(lit_362);
DEFLIT(lit_181);
DEFLIT(lit_442);
DEFLIT(lit_126);
DEFLIT(lit_508);
DEFLIT(lit_148);
DEFLIT(lit_313);
DEFLIT(lit_528);
DEFLIT(lit_425);
DEFLIT(lit_206);
DEFLIT(lit_473);
DEFLIT(lit_548);
DEFLIT(lit_123);
DEFLIT(lit_132);
DEFLIT(lit_305);
DEFLIT(lit_513);
DEFLIT(lit_199);
DEFLIT(lit_104);
DEFLIT(lit_516);
DEFLIT(lit_71);
DEFLIT(lit_279);
DEFLIT(lit_128);
DEFLIT(lit_236);
DEFLIT(lit_515);
DEFLIT(lit_440);
DEFLIT(lit_558);
DEFLIT(lit_185);
DEFLIT(lit_211);
DEFLIT(lit_186);
DEFLIT(lit_203);
DEFLIT(lit_254);
DEFLIT(lit_512);
DEFLIT(lit_35);
DEFLIT(lit_48);
DEFLIT(lit_377);
DEFLIT(lit_237);
DEFLIT(lit_527);
DEFLIT(lit_130);
DEFLIT(lit_141);
DEFLIT(lit_179);
DEFLIT(lit_103);
DEFLIT(lit_299);
DEFLIT(lit_507);
DEFLIT(lit_355);
DEFLIT(lit_105);
DEFLIT(lit_304);
DEFLIT(lit_255);
DEFLIT(lit_278);
DEFLIT(lit_553);
DEFLIT(lit_450);
DEFLIT(lit_1);
DEFLIT(lit_448);
DEFLIT(lit_472);
DEFLIT(lit_511);
DEFLIT(lit_293);
DEFLIT(lit_294);
DEFLIT(lit_15);
DEFLIT(lit_394);
DEFLIT(lit_84);
DEFLIT(lit_491);
DEFLIT(lit_292);
DEFLIT(lit_258);
DEFLIT(lit_57);
DEFLIT(lit_390);
DEFLIT(lit_482);
DEFLIT(lit_150);
DEFLIT(lit_286);
DEFLIT(lit_436);
DEFLIT(lit_447);
DEFLIT(lit_61);
DEFLIT(lit_541);
DEFLIT(lit_288);
DEFLIT(lit_283);
DEFLIT(lit_458);
DEFLIT(lit_284);
DEFLIT(lit_332);
DEFLIT(lit_300);
DEFLIT(lit_566);
DEFLIT(lit_0);
DEFLIT(lit_492);
DEFLIT(lit_121);
DEFLIT(lit_259);
DEFLIT(lit_205);
DEFLIT(lit_344);
DEFLIT(lit_571);
DEFLIT(lit_201);
DEFLIT(lit_88);
DEFLIT(lit_544);
DEFLIT(lit_455);
DEFLIT(lit_422);
DEFLIT(lit_242);
DEFLIT(lit_74);
DEFLIT(lit_24);
DEFLIT(lit_517);
DEFLIT(lit_187);
DEFLIT(lit_64);
DEFLIT(lit_479);
DEFLIT(lit_60);
DEFLIT(lit_408);
DEFLIT(lit_102);
DEFLIT(lit_270);
DEFLIT(lit_388);
DEFLIT(lit_323);
DEFLIT(lit_66);
DEFLIT(lit_321);
DEFLIT(lit_435);
DEFLIT(lit_119);
DEFLIT(lit_539);
DEFLIT(lit_359);
DEFLIT(lit_434);
DEFLIT(lit_343);
DEFLIT(lit_83);
DEFLIT(lit_457);
DEFLIT(lit_420);
DEFLIT(lit_345);
DEFLIT(lit_219);
DEFLIT(lit_308);
DEFLIT(lit_238);
DEFLIT(lit_407);
DEFLIT(lit_501);
DEFLIT(lit_73);
DEFLIT(lit_36);
DEFLIT(lit_194);
DEFLIT(lit_168);
DEFLIT(lit_409);
DEFLIT(lit_275);
DEFLIT(lit_506);
DEFLIT(lit_75);
DEFLIT(lit_320);
DEFLIT(lit_67);
DEFLIT(lit_68);
DEFLIT(lit_324);
DEFLIT(lit_521);
DEFLIT(lit_430);
DEFLIT(lit_13);
DEFLIT(lit_118);
DEFLIT(lit_406);
DEFLIT(lit_109);
DEFLIT(lit_290);
DEFLIT(lit_72);
DEFLIT(lit_342);
DEFLIT(lit_351);
DEFLIT(lit_303);
DEFLIT(lit_555);
DEFLIT(lit_509);
DEFLIT(lit_410);
DEFLIT(lit_178);
DEFLIT(lit_474);
DEFLIT(lit_534);
DEFLIT(lit_291);
DEFLIT(lit_261);
DEFLIT(lit_58);
DEFLIT(lit_262);
DEFLIT(lit_127);
DEFLIT(lit_469);
DEFLIT(lit_465);
DEFLIT(lit_522);
DEFLIT(lit_471);
DEFLIT(lit_239);
DEFLIT(lit_76);
DEFLIT(lit_441);
DEFLIT(lit_117);
DEFLIT(lit_405);
DEFLIT(lit_266);
DEFLIT(lit_47);
DEFLIT(lit_106);
DEFLIT(lit_33);
DEFLIT(lit_328);
DEFLIT(lit_34);
DEFLIT(lit_325);
DEFLIT(lit_565);
DEFLIT(lit_338);
DEFLIT(lit_122);
DEFLIT(lit_16);
DEFLIT(lit_560);
DEFLIT(lit_446);
DEFLIT(lit_260);
DEFLIT(lit_108);
DEFLIT(lit_25);
DEFLIT(lit_549);
DEFLIT(lit_312);
DEFLIT(lit_476);
DEFLIT(lit_302);
DEFLIT(lit_481);
DEFLIT(lit_466);
DEFLIT(lit_404);
DEFLIT(lit_91);
DEFLIT(lit_171);
DEFLIT(lit_518);
DEFLIT(lit_40);
DEFLIT(lit_463);
DEFLIT(lit_414);
DEFLIT(lit_85);
DEFLIT(lit_263);
DEFLIT(lit_449);
DEFLIT(lit_480);
DEFLIT(lit_256);
DEFLIT(lit_499);
DEFLIT(lit_415);
DEFLIT(lit_494);
DEFLIT(lit_252);
DEFLIT(lit_176);
DEFLIT(lit_395);
DEFLIT(lit_110);
DEFLIT(lit_374);
DEFLIT(lit_195);
DEFLIT(lit_460);
DEFLIT(lit_243);
DEFLIT(lit_403);
DEFLIT(lit_107);
DEFLIT(lit_78);
DEFLIT(lit_198);
DEFLIT(lit_514);
DEFLIT(lit_311);
DEFLIT(lit_347);
DEFLIT(lit_385);
DEFLIT(lit_153);
DEFLIT(lit_225);
DEFLIT(lit_62);
DEFLIT(lit_438);
DEFLIT(lit_352);
DEFLIT(lit_170);
DEFLIT(lit_29);
DEFLIT(lit_49);
DEFLIT(lit_459);
DEFLIT(lit_376);
DEFLIT(lit_269);
DEFLIT(lit_268);
DEFLIT(lit_120);
DEFLIT(lit_287);
DEFLIT(lit_50);
DEFLIT(lit_510);
DEFLIT(lit_11);
DEFLIT(lit_378);
DEFLIT(lit_267);
DEFLIT(lit_79);
DEFLIT(lit_563);
DEFLIT(lit_114);
DEFLIT(lit_169);
DEFLIT(lit_285);
DEFLIT(lit_220);
DEFLIT(lit_551);
DEFLIT(lit_340);
DEFLIT(lit_250);
DEFLIT(lit_8);
DEFLIT(lit_173);
DEFLIT(lit_172);
DEFLIT(lit_360);
DEFLIT(lit_273);
DEFLIT(lit_125);
DEFLIT(lit_174);
DEFLIT(lit_113);
DEFLIT(lit_314);
DEFLIT(lit_28);
DEFLIT(lit_133);
DEFLIT(lit_5);
DEFLIT(lit_257);
DEFLIT(lit_519);
DEFLIT(lit_309);
DEFLIT(lit_274);
DEFLIT(lit_402);
DEFLIT(lit_249);
DEFLIT(lit_354);
DEFLIT(lit_271);
DEFLIT(lit_310);
DEFLIT(lit_9);
DEFLIT(lit_162);
DEFLIT(lit_80);
DEFLIT(lit_96);
DEFLIT(lit_557);
DEFLIT(lit_188);
DEFLIT(lit_112);
DEFLIT(lit_381);
DEFLIT(lit_419);
DEFLIT(lit_46);
DEFLIT(lit_218);
DEFLIT(lit_42);
DEFLIT(lit_177);
DEFLIT(lit_315);
DEFLIT(lit_353);
DEFLIT(lit_92);
DEFLIT(lit_54);
DEFLIT(lit_556);
DEFLIT(lit_3);
DEFLIT(lit_81);
DEFLIT(lit_572);
DEFLIT(lit_543);
DEFLIT(lit_111);
DEFLIT(lit_485);
DEFLIT(lit_530);
DEFLIT(lit_27);
DEFLIT(lit_365);
DEFLIT(lit_535);
DEFLIT(lit_53);
DEFLIT(lit_366);
DEFLIT(lit_272);
DEFLIT(lit_97);
DEFLIT(lit_348);
DEFLIT(lit_2);
DEFLIT(lit_216);
DEFLIT(lit_424);
DEFLIT(lit_392);
DEFLIT(lit_251);
DEFLIT(lit_400);
DEFLIT(lit_456);
DEFLIT(lit_131);
DEFLIT(lit_144);
DEFLIT(lit_451);
DEFLIT(lit_276);
DEFLIT(lit_429);
DEFLIT(lit_552);
DEFLIT(lit_43);
DEFLIT(lit_229);
DEFLIT(lit_196);
DEFLIT(lit_45);
DEFLIT(lit_207);
DEFLIT(lit_98);
DEFLIT(lit_399);
DEFLIT(lit_190);
DEFLIT(lit_386);
DEFLIT(lit_26);
DEFLIT(lit_477);
DEFLIT(lit_358);
DEFLIT(lit_526);
DEFLIT(lit_222);
DEFLIT(lit_453);
DEFLIT(lit_224);
DEFLIT(lit_175);
DEFLIT(lit_428);
DEFLIT(lit_570);
DEFLIT(lit_334);
DEFLIT(lit_464);
DEFLIT(lit_542);
DEFLIT(lit_423);
DEFLIT(lit_140);
DEFLIT(lit_69);
DEFLIT(lit_253);
DEFLIT(lit_37);
DEFLIT(lit_19);
DEFLIT(lit_490);
DEFLIT(lit_228);
DEFLIT(lit_189);
DEFLIT(lit_191);
DEFLIT(lit_431);
DEFLIT(lit_330);
DEFLIT(lit_136);
DEFLIT(lit_489);
DEFLIT(lit_223);
DEFLIT(lit_503);
DEFLIT(lit_12);
DEFLIT(lit_524);
DEFLIT(lit_327);
DEFLIT(lit_475);
DEFLIT(lit_202);
DEFLIT(lit_478);
DEFLIT(lit_31);
DEFLIT(lit_382);
DEFLIT(lit_51);
DEFLIT(lit_95);
DEFLIT(lit_421);
DEFLIT(lit_443);
DEFLIT(lit_356);
DEFLIT(lit_227);
DEFLIT(lit_30);
DEFLIT(lit_241);
DEFLIT(lit_370);
DEFLIT(lit_129);
DEFLIT(lit_135);
DEFLIT(lit_326);
DEFLIT(lit_418);
DEFLIT(lit_432);
DEFLIT(lit_397);
DEFLIT(lit_244);
DEFLIT(lit_468);
DEFLIT(lit_568);
DEFLIT(lit_231);
DEFLIT(lit_349);
DEFLIT(lit_167);
DEFLIT(lit_413);
DEFLIT(lit_55);
DEFLIT(lit_183);
DEFLIT(lit_94);
DEFLIT(lit_182);
DEFLIT(lit_23);
DEFLIT(lit_226);
DEFLIT(lit_500);
DEFLIT(lit_264);
DEFLIT(lit_14);
DEFLIT(lit_184);
DEFLIT(lit_139);
DEFLIT(lit_391);
DEFLIT(lit_161);
DEFLIT(lit_412);
DEFLIT(lit_82);
DEFLIT(lit_389);
DEFLIT(lit_384);
DEFLIT(lit_10);
DEFLIT(lit_427);
DEFLIT(lit_217);
DEFLIT(lit_192);
DEFLIT(lit_180);
DEFLIT(lit_230);
DEFLIT(lit_417);
DEFLIT(lit_537);
DEFLIT(lit_486);
DEFLIT(lit_393);
DEFLIT(lit_93);
DEFLIT(lit_383);
DEFLIT(lit_411);
DEFLIT(lit_282);
DEFLIT(lit_531);
DEFLIT(lit_375);
DEFLIT(lit_367);
DEFLIT(lit_505);
DEFLIT(lit_452);
DEFLIT(lit_138);
DEFLIT(lit_498);
DEFLIT(lit_160);
DEFLIT(lit_373);
DEFLIT(lit_529);
DEFLIT(lit_470);
DEFLIT(lit_99);
DEFLIT(lit_369);
DEFLIT(lit_134);
DEFLIT(lit_462);
DEFLIT(lit_371);
DEFLIT(lit_41);
DEFLIT(lit_536);
DEFLIT(lit_18);
DEFLIT(lit_281);
DEFLIT(lit_504);
DEFLIT(lit_210);
DEFLIT(lit_363);
DEFLIT(lit_398);
DEFLIT(lit_483);
DEFLIT(lit_90);
DEFLIT(lit_17);
DEFLIT(lit_569);
DEFLIT(lit_339);
DEFLIT(lit_497);

/* FUNCTIONS: */

FUNFOR(YmacrosYmatch_empty_list);
FUNFOR(YmacrosYmatch_unquote);
FUNFOR(YmacrosYmatch_atom);
FUNFOR(YmacrosYmatch_sublist);
LOCFOR(fun_4);
LOCFOR(fun_make_sym_5);
LOCFOR(fun_gensym_6);
LOCFOR(fun_make_setter_name_7);
LOCFOR(fun_var_name_8);
LOCFOR(fun_var_name_9);
LOCFOR(fun_var_type_10);
LOCFOR(fun_var_type_11);
FUNFOR(YruntimeYtA);
FUNFOR(YruntimeYtE);
FUNFOR(YruntimeYtL);
FUNFOR(YruntimeYfalse_or);
FUNFOR(YruntimeYnulQ);
LOCFOR(fun_nyi_error_17);
LOCFOR(fun_to_str_18);
FUNFOR(YruntimeYaddress_of);
LOCFOR(fun_to_str_20);
LOCFOR(fun_to_str_21);
LOCFOR(fun_as_22);
LOCFOR(fun_EE_23);
LOCFOR(fun_E_24);
LOCFOR(fun_NE_25);
LOCFOR(fun_NEE_26);
LOCFOR(fun_G_27);
LOCFOR(fun_LE_28);
LOCFOR(fun_GE_29);
LOCFOR(fun_min_30);
LOCFOR(fun_max_31);
LOCFOR(fun_as_32);
LOCFOR(fun_as_33);
LOCFOR(fun_L_34);
LOCFOR(fun_EE_35);
LOCFOR(fun_lowercaseQ_36);
LOCFOR(fun_uppercaseQ_37);
LOCFOR(fun_as_lowercase_38);
LOCFOR(fun_as_uppercase_39);
LOCFOR(fun_to_str_40);
LOCFOR(fun_alphabeticQ_41);
LOCFOR(fun_numericQ_42);
LOCFOR(fun_to_digit_43);
LOCFOR(fun_contagious_call_44);
LOCFOR(fun_L_45);
LOCFOR(fun_A_46);
LOCFOR(fun___47);
LOCFOR(fun_T_48);
LOCFOR(fun_floor_49);
LOCFOR(fun_ceiling_50);
LOCFOR(fun_round_51);
LOCFOR(fun_truncate_52);
LOCFOR(fun_floorS_53);
LOCFOR(fun_ceilingS_54);
LOCFOR(fun_roundS_55);
LOCFOR(fun_truncateS_56);
LOCFOR(fun_modulo_57);
LOCFOR(fun_remainder_58);
LOCFOR(fun_posQ_59);
LOCFOR(fun_zeroQ_60);
LOCFOR(fun_negQ_61);
LOCFOR(fun_neg_62);
LOCFOR(fun_abs_63);
LOCFOR(fun_to_str_64);
LOCFOR(fun_loop_65);
LOCFOR(fun_looking_at_alphabeticQ_66);
LOCFOR(fun_failXX_67);
LOCFOR(fun_68);
LOCFOR(fun_match_digitX_69);
LOCFOR(fun_match_70);
LOCFOR(fun_str_to_num_71);
LOCFOR(fun_contagious_type_72);
LOCFOR(fun_contagious_type_73);
LOCFOR(fun_contagious_type_74);
LOCFOR(fun_contagious_type_75);
LOCFOR(fun_EE_76);
LOCFOR(fun_L_77);
LOCFOR(fun_A_78);
LOCFOR(fun___79);
LOCFOR(fun_T_80);
LOCFOR(fun_floor_81);
LOCFOR(fun_ceiling_82);
LOCFOR(fun_round_83);
LOCFOR(fun_truncate_84);
LOCFOR(fun_truncateS_85);
LOCFOR(fun_modulo_86);
LOCFOR(fun_logior_87);
LOCFOR(fun_logxor_88);
LOCFOR(fun_logand_89);
LOCFOR(fun_lognot_90);
LOCFOR(fun_logbitQ_91);
LOCFOR(fun_evenQ_92);
LOCFOR(fun_oddQ_93);
LOCFOR(fun_ash_94);
LOCFOR(fun_lsh_95);
LOCFOR(fun_search_96);
LOCFOR(fun_power_of_two_ceiling_97);
LOCFOR(fun_decode_radix_option_98);
LOCFOR(fun_loop_99);
LOCFOR(fun_num_to_str_100);
FUNFOR(YruntimeYflo_bits);
LOCFOR(fun_as_102);
LOCFOR(fun_EE_103);
LOCFOR(fun_L_104);
LOCFOR(fun_A_105);
LOCFOR(fun___106);
LOCFOR(fun_T_107);
LOCFOR(fun_S_108);
LOCFOR(fun_truncateS_109);
LOCFOR(fun_loop_110);
LOCFOR(fun_num_to_str_111);
LOCFOR(fun_fabs_112);
LOCFOR(fun_emptyQ_113);
LOCFOR(fun_empty_114);
LOCFOR(fun_default_115);
LOCFOR(fun_as_copy_116);
LOCFOR(fun_eq_117);
LOCFOR(fun_E_118);
LOCFOR(fun_fab_119);
LOCFOR(fun_as_120);
LOCFOR(fun_con_121);
LOCFOR(fun_keys_122);
LOCFOR(fun_rep_123);
LOCFOR(fun_do_key_vals_124);
LOCFOR(fun_count_125);
LOCFOR(fun_len_126);
LOCFOR(fun_in_127);
LOCFOR(fun_alter_128);
LOCFOR(fun_in_129);
LOCFOR(fun_fill_130);
LOCFOR(fun_fnd_131);
LOCFOR(fun_anyQ_132);
LOCFOR(fun_fnd_133);
LOCFOR(fun_any2Q_134);
LOCFOR(fun_fnd_135);
LOCFOR(fun_allQ_136);
LOCFOR(fun_fnd_137);
LOCFOR(fun_all2Q_138);
LOCFOR(fun_red_139);
LOCFOR(fun_reduce_140);
LOCFOR(fun_red_141);
LOCFOR(fun_reduceA_142);
LOCFOR(fun_fnd_143);
LOCFOR(fun_find_key_144);
LOCFOR(fun_con_145);
LOCFOR(fun_map_146);
LOCFOR(fun_lop_147);
LOCFOR(fun_do_148);
LOCFOR(fun_con_149);
LOCFOR(fun_map2_150);
LOCFOR(fun_lop_151);
LOCFOR(fun_do2_152);
LOCFOR(fun_lop_153);
LOCFOR(fun_do3_154);
LOCFOR(fun_con_155);
LOCFOR(fun_map_keyed_156);
LOCFOR(fun_lop_157);
LOCFOR(fun_do_keyed_158);
LOCFOR(fun_159);
LOCFOR(fun_memQ_160);
LOCFOR(fun_161);
LOCFOR(fun_fab_map_162);
LOCFOR(fun_assocs_test_163);
LOCFOR(fun_assocs_test_setter_164);
LOCFOR(fun_165);
LOCFOR(fun_assocs_keys_166);
LOCFOR(fun_assocs_keys_setter_167);
LOCFOR(fun_168);
LOCFOR(fun_assocs_vals_169);
LOCFOR(fun_assocs_vals_setter_170);
LOCFOR(fun_171);
LOCFOR(fun_fab_172);
LOCFOR(fun_len_173);
LOCFOR(fun_fnd_174);
LOCFOR(fun_elt_175);
LOCFOR(fun_fnd_176);
LOCFOR(fun_elt_setter_177);
LOCFOR(fun_as_178);
LOCFOR(fun_keys_179);
LOCFOR(fun_in_180);
LOCFOR(fun_alter_181);
FUNFOR(YruntimeYrange_error);
FUNFOR(YruntimeYrange_check);
LOCFOR(fun_1st_184);
LOCFOR(fun_2nd_185);
LOCFOR(fun_3rd_186);
LOCFOR(fun_last_187);
LOCFOR(fun_add_new_188);
LOCFOR(fun_addX_189);
LOCFOR(fun_pos_190);
LOCFOR(fun_in_191);
LOCFOR(fun_into_192);
LOCFOR(fun_onto_193);
LOCFOR(fun_skip_194);
LOCFOR(fun_insert_195);
LOCFOR(fun_copy_196);
LOCFOR(fun_in_197);
LOCFOR(fun_find_198);
LOCFOR(fun_sub_setter_199);
LOCFOR(fun_con_200);
LOCFOR(fun_rev_201);
LOCFOR(fun_con_y_202);
LOCFOR(fun_con_x_203);
LOCFOR(fun_cat2_204);
LOCFOR(fun_cat_205);
LOCFOR(fun_catX_206);
LOCFOR(fun_find_tail_207);
LOCFOR(fun_connect_208);
LOCFOR(fun_find_result_209);
LOCFOR(fun_catX_210);
LOCFOR(fun_con_x_211);
LOCFOR(fun_sub_212);
LOCFOR(fun_con_213);
LOCFOR(fun_pick_214);
LOCFOR(fun_215);
LOCFOR(fun_del_dups_216);
LOCFOR(fun_217);
LOCFOR(fun_del_218);
LOCFOR(fun_219);
LOCFOR(fun_vals_to_str_220);
LOCFOR(fun_to_str_221);
LOCFOR(fun_pair_222);
LOCFOR(fun_empty_223);
LOCFOR(fun_emptyQ_224);
LOCFOR(fun_fab_225);
LOCFOR(fun_fab_226);
LOCFOR(fun_as_227);
LOCFOR(fun_build_228);
LOCFOR(fun_fabs_229);
LOCFOR(fun_lst_230);
LOCFOR(fun_sum_231);
LOCFOR(fun_len_232);
LOCFOR(fun_fnd_233);
LOCFOR(fun_elt_234);
LOCFOR(fun_fnd_235);
LOCFOR(fun_elt_setter_236);
LOCFOR(fun_add_237);
LOCFOR(fun_push_238);
LOCFOR(fun_pop_239);
LOCFOR(fun_loop_240);
LOCFOR(fun_revX_241);
LOCFOR(fun_assq_242);
LOCFOR(fun_assqn_243);
LOCFOR(fun_fnd_244);
LOCFOR(fun_last_245);
LOCFOR(fun_ini_state_246);
LOCFOR(fun_fin_stateQ_247);
LOCFOR(fun_nxt_state_248);
LOCFOR(fun_now_elt_249);
LOCFOR(fun_now_elt_setter_250);
LOCFOR(fun_fnd_251);
LOCFOR(fun_now_key_252);
LOCFOR(fun_copy_state_253);
LOCFOR(fun_ini_state_254);
LOCFOR(fun_fin_stateQ_255);
LOCFOR(fun_nxt_state_256);
LOCFOR(fun_now_elt_257);
LOCFOR(fun_now_elt_setter_258);
LOCFOR(fun_now_key_259);
LOCFOR(fun_copy_state_260);
LOCFOR(fun_empty_261);
FUNFOR(YruntimeYvec);
LOCFOR(fun_fab_263);
LOCFOR(fun_len_264);
LOCFOR(fun_low_elt_265);
LOCFOR(fun_low_elt_setter_266);
LOCFOR(fun_elt_267);
LOCFOR(fun_elt_setter_268);
LOCFOR(fun_to_str_269);
LOCFOR(fun_buf_len_270);
LOCFOR(fun_buf_len_setter_271);
LOCFOR(fun_272);
LOCFOR(fun_buf_dat_273);
LOCFOR(fun_buf_dat_setter_274);
LOCFOR(fun_275);
LOCFOR(fun_empty_276);
LOCFOR(fun_fab_277);
LOCFOR(fun_buf_278);
LOCFOR(fun_len_279);
LOCFOR(fun_fill_280);
LOCFOR(fun_len_setter_281);
LOCFOR(fun_low_elt_282);
LOCFOR(fun_low_elt_setter_283);
LOCFOR(fun_elt_284);
LOCFOR(fun_elt_setter_285);
LOCFOR(fun_addX_286);
LOCFOR(fun_push_lastX_287);
LOCFOR(fun_pop_lastX_288);
LOCFOR(fun_inner_289);
LOCFOR(fun_outer_290);
LOCFOR(fun_catX_291);
LOCFOR(fun_range_from_292);
LOCFOR(fun_range_from_setter_293);
LOCFOR(fun_294);
LOCFOR(fun_range_to_295);
LOCFOR(fun_range_to_setter_296);
LOCFOR(fun_297);
LOCFOR(fun_range_below_298);
LOCFOR(fun_range_below_setter_299);
LOCFOR(fun_300);
LOCFOR(fun_range_above_301);
LOCFOR(fun_range_above_setter_302);
LOCFOR(fun_303);
LOCFOR(fun_range_by_304);
LOCFOR(fun_range_by_setter_305);
LOCFOR(fun_306);
LOCFOR(fun_fab_307);
LOCFOR(fun_from_308);
LOCFOR(fun_from_by_309);
LOCFOR(fun_from_to_310);
LOCFOR(fun_from_to_by_311);
LOCFOR(fun_from_below_312);
LOCFOR(fun_from_below_by_313);
LOCFOR(fun_from_above_314);
LOCFOR(fun_from_above_by_315);
LOCFOR(fun_ini_state_316);
LOCFOR(fun_fin_stateQ_317);
LOCFOR(fun_nxt_state_318);
LOCFOR(fun_now_elt_319);
LOCFOR(fun_copy_state_320);
LOCFOR(fun_step_first_321);
LOCFOR(fun_step_first_setter_322);
LOCFOR(fun_323);
LOCFOR(fun_step_then_324);
LOCFOR(fun_step_then_setter_325);
LOCFOR(fun_326);
LOCFOR(fun_first_then_327);
LOCFOR(fun_ini_state_328);
LOCFOR(fun_fin_stateQ_329);
LOCFOR(fun_nxt_state_330);
LOCFOR(fun_now_elt_331);
LOCFOR(fun_copy_state_332);
LOCFOR(fun_assoc_key_333);
LOCFOR(fun_assoc_key_setter_334);
LOCFOR(fun_335);
LOCFOR(fun_assoc_value_336);
LOCFOR(fun_assoc_value_setter_337);
LOCFOR(fun_338);
FUNFOR(YruntimeYassoc);
LOCFOR(fun_assocq_340);
LOCFOR(fun_to_str_341);
LOCFOR(fun_empty_342);
LOCFOR(fun_default_343);
LOCFOR(fun_fab_344);
LOCFOR(fun_str_345);
LOCFOR(fun_len_346);
LOCFOR(fun_low_elt_347);
LOCFOR(fun_low_elt_setter_348);
LOCFOR(fun_elt_349);
LOCFOR(fun_elt_setter_350);
LOCFOR(fun_to_str_351);
LOCFOR(fun_add_352);
LOCFOR(fun_loop_353);
LOCFOR(fun_354);
LOCFOR(fun_ascii_Gchar_355);
LOCFOR(fun_char_Ginteger_356);
LOCFOR(fun_integer_Gchar_357);
LOCFOR(fun_loop_358);
LOCFOR(fun_loop_359);
LOCFOR(fun_char_Gascii_360);
LOCFOR(fun_as_361);
LOCFOR(fun_as_362);
LOCFOR(fun_L_363);
LOCFOR(fun_to_str_364);
LOCFOR(fun_identity_365);
LOCFOR(fun_366);
LOCFOR(fun_compose_367);
LOCFOR(fun_368);
LOCFOR(fun_rcurry_369);
LOCFOR(fun_370);
LOCFOR(fun_curry_371);
LOCFOR(fun_372);
LOCFOR(fun_always_373);
LOCFOR(fun_default_handler_374);
LOCFOR(fun_describe_condition_375);
LOCFOR(fun_default_handler_description_376);
LOCFOR(fun_build_condition_interactively_377);
LOCFOR(fun_condition_message_378);
LOCFOR(fun_condition_message_setter_379);
LOCFOR(fun_380);
LOCFOR(fun_condition_arguments_381);
LOCFOR(fun_condition_arguments_setter_382);
LOCFOR(fun_383);
LOCFOR(fun_describe_condition_384);
LOCFOR(fun_build_condition_interactively_385);
LOCFOR(fun_default_handler_386);
LOCFOR(fun_default_handler_description_387);
LOCFOR(fun_incongruent_method_error_generic_388);
LOCFOR(fun_incongruent_method_error_generic_setter_389);
LOCFOR(fun_390);
LOCFOR(fun_incongruent_method_error_method_391);
LOCFOR(fun_incongruent_method_error_method_setter_392);
LOCFOR(fun_393);
LOCFOR(fun_describe_condition_394);
LOCFOR(fun_default_handler_description_395);
LOCFOR(fun_describe_handler_396);
LOCFOR(fun_build_condition_for_handler_interactively_397);
LOCFOR(fun_handler_info_message_398);
LOCFOR(fun_handler_info_message_setter_399);
LOCFOR(fun_400);
LOCFOR(fun_handler_info_arguments_401);
LOCFOR(fun_handler_info_arguments_setter_402);
LOCFOR(fun_403);
LOCFOR(fun_describe_handler_404);
LOCFOR(fun_handler_condition_type_405);
LOCFOR(fun_handler_condition_type_setter_406);
LOCFOR(fun_407);
LOCFOR(fun_handler_info_408);
LOCFOR(fun_handler_info_setter_409);
LOCFOR(fun_410);
LOCFOR(fun_handler_test_411);
LOCFOR(fun_handler_test_setter_412);
LOCFOR(fun_413);
LOCFOR(fun_handler_function_414);
LOCFOR(fun_handler_function_setter_415);
LOCFOR(fun_416);
FUNFOR(YruntimeYmake_handler);
FUNFOR(YruntimeYhandler_activeQ);
FUNFOR(YruntimeYhandler_matchesQ);
LOCFOR(fun_420);
LOCFOR(fun_421);
LOCFOR(fun_422);
LOCFOR(fun_Uhandler_functionU_423);
LOCFOR(fun_424);
FUNFOR(YruntimeYPwith_monitor);
LOCFOR(fun_426);
FUNFOR(YruntimeYsignal_handler_list);
LOCFOR(fun_sig_428);
LOCFOR(fun_sig_429);
LOCFOR(fun_error_430);
LOCFOR(fun_error_431);
FUNFOR(Ywrong_number_arguments_error);
FUNFOR(Yunknown_function_error);
FUNFOR(Ytype_error);
FUNFOR(Yincongruent_method_error);
LOCFOR(fun_search_436);
FUNFOR(YruntimeYdo_handlers_of_type);
LOCFOR(fun_438);
FUNFOR(YruntimeYlist_handlers);
LOCFOR(fun_440);
LOCFOR(fun_search_441);
FUNFOR(YruntimeYinvoke_handler_interactively);
FUNFOR(YruntimeYchoose_handler);
FUNFOR(YruntimeYlocative_value);
FUNFOR(YruntimeYlocative_value_setter);
FUNFOR(YruntimeYapp_filename);
FUNFOR(YruntimeYapp_args);
LOCFOR(fun_port_handle_448);
LOCFOR(fun_port_handle_setter_449);
LOCFOR(fun_450);
LOCFOR(fun_open_input_file_451);
LOCFOR(fun_file_opening_error_452);
LOCFOR(fun_open_output_file_453);
LOCFOR(fun_close_input_port_454);
LOCFOR(fun_close_output_port_455);
LOCFOR(fun_456);
LOCFOR(fun_457);
LOCFOR(fun_call_with_input_file_458);
LOCFOR(fun_459);
LOCFOR(fun_460);
LOCFOR(fun_call_with_output_file_461);
LOCFOR(fun_eof_objectQ_462);
LOCFOR(fun_eof_objectQ_463);
LOCFOR(fun_eof_object_464);
LOCFOR(fun_read_char_465);
LOCFOR(fun_peek_char_466);
LOCFOR(fun_char_readyQ_467);
LOCFOR(fun_newline_468);
LOCFOR(fun_force_output_469);
LOCFOR(fun_write_char_470);
LOCFOR(fun_write_string_471);
LOCFOR(fun_port_guts_472);
LOCFOR(fun_port_guts_setter_473);
LOCFOR(fun_474);
LOCFOR(fun_port_contents_475);
LOCFOR(fun_port_index_476);
LOCFOR(fun_port_index_setter_477);
LOCFOR(fun_478);
LOCFOR(fun_call_with_string_input_port_479);
LOCFOR(fun_call_with_string_output_port_480);
LOCFOR(fun_peek_char_481);
LOCFOR(fun_read_char_482);
LOCFOR(fun_char_readyQ_483);
LOCFOR(fun_write_char_484);
LOCFOR(fun_write_string_485);
LOCFOR(fun_Pvacated_486);
LOCFOR(fun_Pvacated_setter_487);
LOCFOR(fun_488);
LOCFOR(fun_Pprimary_modulus_489);
LOCFOR(fun_Pprimary_modulus_setter_490);
LOCFOR(fun_491);
LOCFOR(fun_Psecondary_modulus_492);
LOCFOR(fun_Psecondary_modulus_setter_493);
LOCFOR(fun_494);
LOCFOR(fun_Pn_buckets_495);
LOCFOR(fun_Pn_buckets_setter_496);
LOCFOR(fun_497);
LOCFOR(fun_Pbucket_depth_498);
LOCFOR(fun_Pbucket_depth_setter_499);
LOCFOR(fun_500);
LOCFOR(fun_Pdata_501);
LOCFOR(fun_Pdata_setter_502);
LOCFOR(fun_503);
LOCFOR(fun_Pgc_state_504);
LOCFOR(fun_Pgc_state_setter_505);
LOCFOR(fun_506);
FUNFOR(YruntimeYfab_table_vector);
LOCFOR(fun_elt_508);
LOCFOR(fun_elt_setter_509);
LOCFOR(fun_clrX_510);
FUNFOR(YruntimeYtrace);
LOCFOR(fun_table_growth_factor_512);
LOCFOR(fun_table_growth_factor_setter_513);
LOCFOR(fun_514);
LOCFOR(fun_table_growth_threshold_515);
LOCFOR(fun_table_growth_threshold_setter_516);
LOCFOR(fun_517);
LOCFOR(fun_table_shrink_threshold_518);
LOCFOR(fun_table_shrink_threshold_setter_519);
LOCFOR(fun_520);
LOCFOR(fun_Pcount_521);
LOCFOR(fun_Pcount_setter_522);
LOCFOR(fun_523);
LOCFOR(fun_Pvector_524);
LOCFOR(fun_Pvector_setter_525);
LOCFOR(fun_526);
LOCFOR(fun_table_protocol_527);
FUNFOR(YruntimeYhash_moduli);
LOCFOR(fun_fab_529);
LOCFOR(fun_x_1203_530);
LOCFOR(fun_531);
LOCFOR(fun_532);
LOCFOR(fun_inner_533);
LOCFOR(fun_outer_534);
LOCFOR(fun_535);
LOCFOR(fun_elt_536);
LOCFOR(fun_inner_537);
LOCFOR(fun_outer_538);
LOCFOR(fun_539);
LOCFOR(fun_elt_setter_540);
LOCFOR(fun_inner_541);
LOCFOR(fun_outer_542);
LOCFOR(fun_543);
LOCFOR(fun_del_key_544);
LOCFOR(fun_inner_545);
LOCFOR(fun_outer_546);
LOCFOR(fun_do_keyed_547);
LOCFOR(fun_inner_548);
LOCFOR(fun_outer_549);
LOCFOR(fun_do_550);
LOCFOR(fun_del_keys_551);
LOCFOR(fun_len_552);
LOCFOR(fun_Pvector_553);
LOCFOR(fun_Pvector_setter_554);
LOCFOR(fun_555);
LOCFOR(fun_Pbucket_556);
LOCFOR(fun_Pbucket_setter_557);
LOCFOR(fun_558);
LOCFOR(fun_Pindex_559);
LOCFOR(fun_Pindex_setter_560);
LOCFOR(fun_561);
LOCFOR(fun_inner_562);
LOCFOR(fun_outer_563);
LOCFOR(fun_564);
LOCFOR(fun_ini_state_565);
LOCFOR(fun_inner_566);
LOCFOR(fun_outer_567);
LOCFOR(fun_568);
LOCFOR(fun_nxt_state_569);
LOCFOR(fun_fin_stateQ_570);
LOCFOR(fun_now_key_571);
LOCFOR(fun_now_elt_572);
LOCFOR(fun_now_elt_setter_573);
LOCFOR(fun_copy_state_574);
LOCFOR(fun_575);
LOCFOR(fun_tab_keys_576);
LOCFOR(fun_grow_table_577);
LOCFOR(fun_rehash_table_578);
LOCFOR(fun_579);
LOCFOR(fun_580);
FUNFOR(YruntimeYchoose_table_geometry);
LOCFOR(fun_inner_582);
LOCFOR(fun_outer_583);
LOCFOR(fun_584);
LOCFOR(fun_585);
LOCFOR(fun_copy_to_new_vector_586);
FUNFOR(YruntimeYcurrent_gc_state);
LOCFOR(fun_id_hash_588);
LOCFOR(fun_id_hash_589);
FUNFOR(YruntimeYrot);
LOCFOR(fun_id_hash_591);
LOCFOR(fun_id_hash_592);
LOCFOR(fun_id_hash_593);
LOCFOR(fun_loop_594);
FUNFOR(YruntimeYcase_insensitive_string_hash);
LOCFOR(fun_loop_596);
FUNFOR(YruntimeYcase_insensitive_string_equal);
LOCFOR(fun_table_protocol_598);
extern P YruntimeYbooted_fab_sym_using (P,P);
FUNFOR(YruntimeYbooted_fab_sym);
LOCFOR(fun_boot_601);
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

FUNCODEDEF(YmacrosYmatch_empty_list) {
  ARG(fail_, 0);
  ARG(x_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL2(CHKREF(YmacrosYEE),x_,Ynil);
  if (T2 != YPfalse) {
    T0 = Ynil;
  } else {
    T1 = CALL2(fail_,CHKREF(lit_3),x_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YmacrosYmatch_unquote) {
  ARG(fail_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = CALL2(CHKREF(YmacrosYEE),x_,Ynil);
  if (T3 != YPfalse) {
    T2 = CALL1(fail_,CHKREF(lit_5));
    T0 = T2;
  } else {
    T1 = CALL1(CHKREF(Yhead),x_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YmacrosYmatch_atom) {
  ARG(fail_, 0);
  ARG(pat_, 1);
  ARG(x_, 2);
  P expF642;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T8 = CALL2(CHKREF(YmacrosYEE),x_,Ynil);
  if (T8 != YPfalse) {
    T7 = CALL2(fail_,CHKREF(lit_9),pat_);
    T0 = T7;
  } else {
    T6 = CALL1(CHKREF(Yhead),x_);
    expF642 = T6;
    T5 = CALL2(CHKREF(YmacrosYEE),expF642,pat_);
    if (T5 != YPfalse) {
      T4 = CALL1(CHKREF(Ytail),x_);
      T2 = T4;
    } else {
      T3 = CALL3(fail_,CHKREF(lit_8),expF642,pat_);
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YmacrosYmatch_sublist) {
  ARG(fail_, 0);
  ARG(x_, 1);
  P xF643;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(Yhead),x_);
  xF643 = T4;
  T3 = CALL2(CHKREF(YisaQ),xF643,CHKREF(YLlstG));
  if (T3 != YPfalse) {
    T1 = xF643;
  } else {
    T2 = CALL2(fail_,CHKREF(lit_11),xF643);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  ARG(e_, 0);
  ARG(r_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YruntimeYto_str),e_);
  T0 = CALL2(CHKREF(YmacrosYcat),r_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_make_sym_5) {
  ARG(x_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = fun_4;
  T1 = CALL3(CHKREF(YruntimeYreduce),T2,CHKREF(lit_13),x_);
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),T1);
  RET(T0);
}

FUNCODEDEF(fun_gensym_6) {
  P T2,T1,T0;
loop:
  T2 = CALL2(CHKREF(YruntimeYA),CHKREF(YruntimeYTgensym_counterT),YPint((P)1));
  T1 = YruntimeYTgensym_counterT = T2;
  T0 = CALL2(CHKREF(YmacrosYmake_sym),CHKREF(lit_17),T1);
  RET(T0);
}

FUNCODEDEF(fun_make_setter_name_7) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYmake_sym),x_,CHKREF(lit_19));
  RET(T0);
}

FUNCODEDEF(fun_var_name_8) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(x_);
}

FUNCODEDEF(fun_var_name_9) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYelt),x_,YPint((P)0));
  QRET(T0);
}

FUNCODEDEF(fun_var_type_10) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_22));
}

FUNCODEDEF(fun_var_type_11) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYelt),x_,YPint((P)1));
  QRET(T0);
}

FUNCODEDEF(YruntimeYtA) {
  ARG(args_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YPpair(CHKREF(YLunionG),Ynil);
  T2 = (P)YPpair(CHKREF(Ytype_elts),Ynil);
  T1 = (P)YPpair(args_,Ynil);
  T0 = CALL3(CHKREF(YPisa),T3,T2,T1);
  QRET(T0);
}

FUNCODEDEF(YruntimeYtE) {
  ARG(x_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YPpair(CHKREF(YLsingletonG),Ynil);
  T2 = (P)YPpair(CHKREF(Ytype_object),Ynil);
  T1 = (P)YPpair(x_,Ynil);
  T0 = CALL3(CHKREF(YPisa),T3,T2,T1);
  QRET(T0);
}

FUNCODEDEF(YruntimeYtL) {
  ARG(x_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YPpair(CHKREF(YLsubclassG),Ynil);
  T2 = (P)YPpair(CHKREF(Ytype_class),Ynil);
  T1 = (P)YPpair(x_,Ynil);
  T0 = CALL3(CHKREF(YPisa),T3,T2,T1);
  QRET(T0);
}

FUNCODEDEF(YruntimeYfalse_or) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeYtE),YPfalse);
  T0 = CALL2(CHKREF(YruntimeYtA),x_,T1);
  QRET(T0);
}

FUNCODEDEF(YruntimeYnulQ) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(Ynul));
  RET(T0);
}

FUNCODEDEF(fun_nyi_error_17) {
  P T0;
loop:
  T0 = CALL0(CHKREF(YruntimeYnyi));
  QRET(T0);
}

FUNCODEDEF(fun_to_str_18) {
  ARG(x_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(Yobject_class),x_);
  T2 = CALL1(CHKREF(Yclass_name),T3);
  T1 = CALL1(CHKREF(YruntimeYto_str),T2);
  T0 = CALL3(CHKREF(YmacrosYcat),CHKREF(lit_32),T1,CHKREF(lit_31));
  RET(T0);
}

FUNCODEDEF(YruntimeYaddress_of) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPib(x_);
  RET(T0);
}

FUNCODEDEF(fun_to_str_20) {
  ARG(x_, 0);
  P a1;
loop:
  RET(CHKREF(lit_35));
}

FUNCODEDEF(fun_to_str_21) {
  ARG(x_, 0);
  P a1;
loop:
  RET(CHKREF(lit_36));
}

FUNCODEDEF(fun_as_22) {
  ARG(x_, 0);
  ARG(type_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL2(CHKREF(YisaQ),x_,type_);
  if (T2 != YPfalse) {
    T0 = x_;
  } else {
    T1 = CALL3(CHKREF(Yerror),CHKREF(lit_39),type_,x_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_EE_23) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPeqQ(x_,y_);
  T0 = (P)YPbb(T1);
  RET(T0);
}

FUNCODEDEF(fun_E_24) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YmacrosYEE),x_,y_);
  RET(T0);
}

FUNCODEDEF(fun_NE_25) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YruntimeYE),x_,y_);
  T0 = CALL1(CHKREF(Ynot),T1);
  RET(T0);
}

FUNCODEDEF(fun_NEE_26) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YmacrosYEE),x_,y_);
  T0 = CALL1(CHKREF(Ynot),T1);
  RET(T0);
}

FUNCODEDEF(fun_G_27) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YruntimeYL),y_,x_);
  RET(T0);
}

FUNCODEDEF(fun_LE_28) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YruntimeYL),y_,x_);
  T0 = CALL1(CHKREF(Ynot),T1);
  RET(T0);
}

FUNCODEDEF(fun_GE_29) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YruntimeYL),x_,y_);
  T0 = CALL1(CHKREF(Ynot),T1);
  RET(T0);
}

FUNCODEDEF(fun_min_30) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YruntimeYL),x_,y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T0 = y_;
  }
  RET(T0);
}

FUNCODEDEF(fun_max_31) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YruntimeYG),x_,y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T0 = y_;
  }
  RET(T0);
}

FUNCODEDEF(fun_as_32) {
  ARG(i_, 0);
  ARG(U_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPcb(T1);
  RET(T0);
}

FUNCODEDEF(fun_as_33) {
  ARG(c_, 0);
  ARG(U_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPcu(c_);
  T0 = (P)YPib(T1);
  RET(T0);
}

FUNCODEDEF(fun_L_34) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPcu(x_);
  T2 = (P)YPcu(y_);
  T1 = (P)YPcL(T3,T2);
  T0 = (P)YPbb(T1);
  RET(T0);
}

FUNCODEDEF(fun_EE_35) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPcu(x_);
  T2 = (P)YPcu(y_);
  T1 = (P)YPcE(T3,T2);
  T0 = (P)YPbb(T1);
  RET(T0);
}

FUNCODEDEF(fun_lowercaseQ_36) {
  ARG(x_, 0);
  P codeF644;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),x_);
  codeF644 = T6;
  T5 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)97));
  T4 = CALL2(CHKREF(YruntimeYGE),codeF644,T5);
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)122));
    T2 = CALL2(CHKREF(YruntimeYLE),codeF644,T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_uppercaseQ_37) {
  ARG(x_, 0);
  P codeF645;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),x_);
  codeF645 = T6;
  T5 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)65));
  T4 = CALL2(CHKREF(YruntimeYGE),codeF645,T5);
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)90));
    T2 = CALL2(CHKREF(YruntimeYLE),codeF645,T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_as_lowercase_38) {
  ARG(x_, 0);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(YruntimeYuppercaseQ),x_);
  if (T7 != YPfalse) {
    T6 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),x_);
    T5 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)97));
    T4 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)65));
    T3 = CALL2(CHKREF(YruntimeY_),T5,T4);
    T2 = CALL2(CHKREF(YruntimeYA),T6,T3);
    T1 = CALL2(CHKREF(YruntimeYas),CHKREF(YLchrG),T2);
    T0 = T1;
  } else {
    T0 = x_;
  }
  RET(T0);
}

FUNCODEDEF(fun_as_uppercase_39) {
  ARG(x_, 0);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(YruntimeYlowercaseQ),x_);
  if (T7 != YPfalse) {
    T6 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),x_);
    T5 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)65));
    T4 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)97));
    T3 = CALL2(CHKREF(YruntimeY_),T5,T4);
    T2 = CALL2(CHKREF(YruntimeYA),T6,T3);
    T1 = CALL2(CHKREF(YruntimeYas),CHKREF(YLchrG),T2);
    T0 = T1;
  } else {
    T0 = x_;
  }
  RET(T0);
}

FUNCODEDEF(fun_to_str_40) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYfabs),CHKREF(YLstrG),x_);
  RET(T0);
}

FUNCODEDEF(fun_alphabeticQ_41) {
  ARG(x_, 0);
  P tmpF648;
  P tmpF647;
  P tmpF646;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = CALL2(CHKREF(YruntimeYLE),YPchr((P)97),x_);
  tmpF646 = T9;
  if (tmpF646 != YPfalse) {
    T8 = CALL2(CHKREF(YruntimeYLE),x_,YPchr((P)122));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T6 = T7;
  tmpF647 = T6;
  if (tmpF647 != YPfalse) {
    T1 = tmpF647;
  } else {
    T5 = CALL2(CHKREF(YruntimeYLE),YPchr((P)65),x_);
    tmpF648 = T5;
    if (tmpF648 != YPfalse) {
      T4 = CALL2(CHKREF(YruntimeYLE),x_,YPchr((P)90));
      T3 = T4;
    } else {
      T3 = YPfalse;
    }
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_numericQ_42) {
  ARG(x_, 0);
  P tmpF649;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL2(CHKREF(YruntimeYLE),YPchr((P)48),x_);
  tmpF649 = T3;
  if (tmpF649 != YPfalse) {
    T2 = CALL2(CHKREF(YruntimeYLE),x_,YPchr((P)57));
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_to_digit_43) {
  ARG(digit_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(YruntimeYchar_Gascii),digit_);
  T1 = CALL1(CHKREF(YruntimeYchar_Gascii),YPchr((P)48));
  T0 = CALL2(CHKREF(YruntimeY_),T2,T1);
  RET(T0);
}

FUNCODEDEF(fun_contagious_call_44) {
  ARG(y_, 0);
  ARG(x_, 1);
  ARG(f_, 2);
  P typeF650;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = CALL2(CHKREF(YruntimeYcontagious_type),x_,y_);
  typeF650 = T4;
  T3 = CALL2(CHKREF(YruntimeYas),typeF650,x_);
  T2 = CALL2(CHKREF(YruntimeYas),typeF650,y_);
  T1 = CALL2(f_,T3,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_L_45) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYL),x_,y_);
  RET(T0);
}

FUNCODEDEF(fun_A_46) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYA),x_,y_);
  RET(T0);
}

FUNCODEDEF(fun___47) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeY_),x_,y_);
  RET(T0);
}

FUNCODEDEF(fun_T_48) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYT),x_,y_);
  RET(T0);
}

FUNCODEDEF(fun_floor_49) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYfloorS),x_,YPint((P)1));
  RET(T0);
}

FUNCODEDEF(fun_ceiling_50) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYceilingS),x_,YPint((P)1));
  RET(T0);
}

FUNCODEDEF(fun_round_51) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYroundS),x_,YPint((P)1));
  RET(T0);
}

FUNCODEDEF(fun_truncate_52) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYtruncateS),x_,YPint((P)1));
  RET(T0);
}

FUNCODEDEF(fun_floorS_53) {
  ARG(divisor_, 0);
  ARG(real_, 1);
  P tmpF656;
  P tup14F655;
  P remainderF654;
  P tup14F653;
  P integerF652;
  P tup14F651;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T22 = CALL2(CHKREF(YruntimeYtruncateS),real_,divisor_);
  tup14F651 = T22;
  T21 = CALL1(CHKREF(Yhead),tup14F651);
  check_type(T21,CHKREF(YLintG));
  integerF652 = T21;
  T20 = CALL1(CHKREF(Ytail),tup14F651);
  tup14F653 = T20;
  T19 = CALL1(CHKREF(Yhead),tup14F653);
  check_type(T19,CHKREF(YLnumG));
  remainderF654 = T19;
  T18 = CALL1(CHKREF(Ytail),tup14F653);
  tup14F655 = T18;
  T17 = CALL1(CHKREF(YruntimeYzeroQ),remainderF654);
  T16 = CALL1(CHKREF(Ynot),T17);
  tmpF656 = T16;
  if (tmpF656 != YPfalse) {
    T15 = CALL1(CHKREF(YruntimeYnegQ),divisor_);
    if (T15 != YPfalse) {
      T14 = CALL1(CHKREF(YruntimeYposQ),real_);
      T12 = T14;
    } else {
      T13 = CALL1(CHKREF(YruntimeYnegQ),real_);
      T12 = T13;
    }
    T11 = T12;
  } else {
    T11 = YPfalse;
  }
  T10 = T11;
  if (T10 != YPfalse) {
    T9 = CALL2(CHKREF(YruntimeY_),integerF652,YPint((P)1));
    T8 = CALL2(CHKREF(YruntimeYA),remainderF654,divisor_);
    T7 = CALL2(CHKREF(YmacrosYtup),T9,T8);
    T5 = T7;
  } else {
    T6 = CALL2(CHKREF(YmacrosYtup),integerF652,remainderF654);
    T5 = T6;
  }
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_ceilingS_54) {
  ARG(divisor_, 0);
  ARG(real_, 1);
  P tmpF662;
  P tup15F661;
  P remainderF660;
  P tup15F659;
  P integerF658;
  P tup15F657;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T22 = CALL2(CHKREF(YruntimeYtruncateS),real_,divisor_);
  tup15F657 = T22;
  T21 = CALL1(CHKREF(Yhead),tup15F657);
  check_type(T21,CHKREF(YLintG));
  integerF658 = T21;
  T20 = CALL1(CHKREF(Ytail),tup15F657);
  tup15F659 = T20;
  T19 = CALL1(CHKREF(Yhead),tup15F659);
  check_type(T19,CHKREF(YLnumG));
  remainderF660 = T19;
  T18 = CALL1(CHKREF(Ytail),tup15F659);
  tup15F661 = T18;
  T17 = CALL1(CHKREF(YruntimeYzeroQ),remainderF660);
  T16 = CALL1(CHKREF(Ynot),T17);
  tmpF662 = T16;
  if (tmpF662 != YPfalse) {
    T15 = CALL1(CHKREF(YruntimeYnegQ),divisor_);
    if (T15 != YPfalse) {
      T14 = CALL1(CHKREF(YruntimeYnegQ),real_);
      T12 = T14;
    } else {
      T13 = CALL1(CHKREF(YruntimeYposQ),real_);
      T12 = T13;
    }
    T11 = T12;
  } else {
    T11 = YPfalse;
  }
  T10 = T11;
  if (T10 != YPfalse) {
    T9 = CALL2(CHKREF(YruntimeYA),integerF658,YPint((P)1));
    T8 = CALL2(CHKREF(YruntimeY_),remainderF660,divisor_);
    T7 = CALL2(CHKREF(YmacrosYtup),T9,T8);
    T5 = T7;
  } else {
    T6 = CALL2(CHKREF(YmacrosYtup),integerF658,remainderF660);
    T5 = T6;
  }
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_roundS_55) {
  ARG(divisor_, 0);
  ARG(real_, 1);
  P tmpF673;
  P tmpF672;
  P tmpF671;
  P tmpF670;
  P minus_thresholdF669;
  P thresholdF668;
  P tup16F667;
  P remainderF666;
  P tup16F665;
  P integerF664;
  P tup16F663;
  P T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T47 = CALL2(CHKREF(YruntimeYtruncateS),real_,divisor_);
  tup16F663 = T47;
  T46 = CALL1(CHKREF(Yhead),tup16F663);
  check_type(T46,CHKREF(YLintG));
  integerF664 = T46;
  T45 = CALL1(CHKREF(Ytail),tup16F663);
  tup16F665 = T45;
  T44 = CALL1(CHKREF(Yhead),tup16F665);
  check_type(T44,CHKREF(YLnumG));
  remainderF666 = T44;
  T43 = CALL1(CHKREF(Ytail),tup16F665);
  tup16F667 = T43;
  T42 = CALL1(CHKREF(YruntimeYabs),divisor_);
  T41 = CALL2(CHKREF(YruntimeYS),T42,CHKREF(lit_77));
  check_type(T41,CHKREF(YLnumG));
  thresholdF668 = T41;
  T40 = CALL2(CHKREF(YruntimeYG),remainderF666,thresholdF668);
  tmpF672 = T40;
  if (tmpF672 != YPfalse) {
    T35 = tmpF672;
  } else {
    T39 = CALL2(CHKREF(YruntimeYE),remainderF666,thresholdF668);
    tmpF673 = T39;
    if (tmpF673 != YPfalse) {
      T38 = CALL1(CHKREF(YruntimeYoddQ),integerF664);
      T37 = T38;
    } else {
      T37 = YPfalse;
    }
    T36 = T37;
    T35 = T36;
  }
  T34 = T35;
  if (T34 != YPfalse) {
    T33 = CALL1(CHKREF(YruntimeYnegQ),divisor_);
    if (T33 != YPfalse) {
      T32 = CALL2(CHKREF(YruntimeY_),integerF664,YPint((P)1));
      T31 = CALL2(CHKREF(YruntimeYA),remainderF666,divisor_);
      T30 = CALL2(CHKREF(YmacrosYtup),T32,T31);
      T26 = T30;
    } else {
      T29 = CALL2(CHKREF(YruntimeYA),integerF664,YPint((P)1));
      T28 = CALL2(CHKREF(YruntimeY_),remainderF666,divisor_);
      T27 = CALL2(CHKREF(YmacrosYtup),T29,T28);
      T26 = T27;
    }
    T6 = T26;
  } else {
    T25 = CALL1(CHKREF(YruntimeYneg),thresholdF668);
    minus_thresholdF669 = T25;
    T24 = CALL2(CHKREF(YruntimeYL),remainderF666,minus_thresholdF669);
    tmpF670 = T24;
    if (tmpF670 != YPfalse) {
      T19 = tmpF670;
    } else {
      T23 = CALL2(CHKREF(YruntimeYE),remainderF666,minus_thresholdF669);
      tmpF671 = T23;
      if (tmpF671 != YPfalse) {
        T22 = CALL1(CHKREF(YruntimeYoddQ),integerF664);
        T21 = T22;
      } else {
        T21 = YPfalse;
      }
      T20 = T21;
      T19 = T20;
    }
    T18 = T19;
    T17 = T18;
    if (T17 != YPfalse) {
      T16 = CALL1(CHKREF(YruntimeYnegQ),divisor_);
      if (T16 != YPfalse) {
        T15 = CALL2(CHKREF(YruntimeYA),integerF664,YPint((P)1));
        T14 = CALL2(CHKREF(YruntimeY_),remainderF666,divisor_);
        T13 = CALL2(CHKREF(YmacrosYtup),T15,T14);
        T9 = T13;
      } else {
        T12 = CALL2(CHKREF(YruntimeY_),integerF664,YPint((P)1));
        T11 = CALL2(CHKREF(YruntimeYA),remainderF666,divisor_);
        T10 = CALL2(CHKREF(YmacrosYtup),T12,T11);
        T9 = T10;
      }
      T7 = T9;
    } else {
      T8 = CALL2(CHKREF(YmacrosYtup),integerF664,remainderF666);
      T7 = T8;
    }
    T6 = T7;
  }
  T5 = T6;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_truncateS_56) {
  ARG(divisor_, 0);
  ARG(real_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYtruncateS),real_,divisor_);
  RET(T0);
}

FUNCODEDEF(fun_modulo_57) {
  ARG(divisor_, 0);
  ARG(real_, 1);
  P tup17F678;
  P remainderF677;
  P tup17F676;
  P UF675;
  P tup17F674;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL2(CHKREF(YruntimeYfloorS),real_,divisor_);
  tup17F674 = T9;
  T8 = CALL1(CHKREF(Yhead),tup17F674);
  UF675 = T8;
  T7 = CALL1(CHKREF(Ytail),tup17F674);
  tup17F676 = T7;
  T6 = CALL1(CHKREF(Yhead),tup17F676);
  check_type(T6,CHKREF(YLnumG));
  remainderF677 = T6;
  T5 = CALL1(CHKREF(Ytail),tup17F676);
  tup17F678 = T5;
  T4 = remainderF677;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_remainder_58) {
  ARG(divisor_, 0);
  ARG(real_, 1);
  P tup18F683;
  P remainderF682;
  P tup18F681;
  P UF680;
  P tup18F679;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL2(CHKREF(YruntimeYtruncateS),real_,divisor_);
  tup18F679 = T9;
  T8 = CALL1(CHKREF(Yhead),tup18F679);
  UF680 = T8;
  T7 = CALL1(CHKREF(Ytail),tup18F679);
  tup18F681 = T7;
  T6 = CALL1(CHKREF(Yhead),tup18F681);
  check_type(T6,CHKREF(YLnumG));
  remainderF682 = T6;
  T5 = CALL1(CHKREF(Ytail),tup18F681);
  tup18F683 = T5;
  T4 = remainderF682;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_posQ_59) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYG),x_,YPint((P)0));
  RET(T0);
}

FUNCODEDEF(fun_zeroQ_60) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YruntimeYcontagious_call),CHKREF(YruntimeYE),x_,YPint((P)0));
  RET(T0);
}

FUNCODEDEF(fun_negQ_61) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYL),x_,YPint((P)0));
  RET(T0);
}

FUNCODEDEF(fun_neg_62) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeY_),YPint((P)0),x_);
  RET(T0);
}

FUNCODEDEF(fun_abs_63) {
  ARG(x_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(YruntimeYnegQ),x_);
  if (T2 != YPfalse) {
    T1 = CALL1(CHKREF(YruntimeYneg),x_);
    T0 = T1;
  } else {
    T0 = x_;
  }
  RET(T0);
}

FUNCODEDEF(fun_to_str_64) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeYnum_to_str),x_);
  RET(T0);
}

FUNCODEDEF(fun_loop_65) {
  P tmpF684;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T10 = BOXVAL(FREEREF(1));
  T9 = KCALL1(FREEREF(2),T10);
  tmpF684 = T9;
  if (tmpF684 != YPfalse) {
    T8 = BOXVAL(FREEREF(4));
    T7 = CALL2(CHKREF(YruntimeYT),T8,FREEREF(3));
    T6 = BOXVAL(FREEREF(1));
    T5 = CALL2(CHKREF(YruntimeYA),T7,T6);
    T4 = BOXVAL(FREEREF(4)) = T5;
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  if (T2 != YPfalse) {
    goto loop;
    T0 = T1;
  } else {
    T0 = YPtrue;
  }
  QRET(T0);
}

FUNCODEDEF(fun_looking_at_alphabeticQ_66) {
  P tmpF685;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T7 = BOXVAL(FREEREF(1));
  T6 = CALL2(CHKREF(YruntimeYL),T7,FREEREF(0));
  tmpF685 = T6;
  if (tmpF685 != YPfalse) {
    T5 = BOXVAL(FREEREF(1));
    T4 = CALL2(CHKREF(YruntimeYelt),FREEREF(2),T5);
    T3 = CALL1(CHKREF(YruntimeYalphabeticQ),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  if (T1 != YPfalse) {
    T0 = YPtrue;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_failXX_67) {
  P T0;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  ARG(return_, 0);
  P charF687;
  P failXXF686;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T34 = FUNSHELL(1,fun_failXX_67,1);
  failXXF686 = T34;
  FUNINIT(failXXF686, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(CHKREF(YruntimeYGE),T3,FREEREF(6));
  if (T2 != YPfalse) {
    T1 = KCALL0(failXXF686);
  } else {
  }
  T33 = BOXVAL(FREEREF(0));
  T32 = CALL2(CHKREF(YruntimeYelt),FREEREF(1),T33);
  charF687 = T32;
  charF687 = BOXFAB(charF687);
  T18 = BOXVAL(charF687);
  T17 = CALL2(CHKREF(YruntimeYE),T18,YPchr((P)46));
  if (T17 != YPfalse) {
    T16 = BOXVAL(FREEREF(4));
    if (T16 != YPfalse) {
      T15 = CALL2(CHKREF(Yerror),CHKREF(lit_92),FREEREF(1));
      T6 = T15;
    } else {
      BOXVAL(FREEREF(4)) = YPtrue;
      T8 = BOXVAL(FREEREF(0));
      T7 = CALL2(CHKREF(YruntimeYA),T8,YPint((P)1));
      BOXVAL(FREEREF(0)) = T7;
      T11 = BOXVAL(FREEREF(0));
      T10 = CALL2(CHKREF(YruntimeYGE),T11,FREEREF(6));
      if (T10 != YPfalse) {
        T9 = KCALL0(failXXF686);
      } else {
      }
      T14 = BOXVAL(FREEREF(0));
      T13 = CALL2(CHKREF(YruntimeYelt),FREEREF(1),T14);
      T12 = BOXVAL(charF687) = T13;
      T6 = T12;
    }
  } else {
  }
  T22 = BOXVAL(charF687);
  T21 = CALL1(CHKREF(YruntimeYnumericQ),T22);
  T20 = CALL1(CHKREF(Ynot),T21);
  if (T20 != YPfalse) {
    T19 = KCALL0(failXXF686);
  } else {
  }
  T25 = BOXVAL(FREEREF(0));
  T24 = CALL2(CHKREF(YruntimeYelt),FREEREF(1),T25);
  T23 = CALL1(CHKREF(YruntimeYto_digit),T24);
  BOXVAL(FREEREF(5)) = T23;
  T27 = BOXVAL(FREEREF(0));
  T26 = CALL2(CHKREF(YruntimeYA),T27,YPint((P)1));
  BOXVAL(FREEREF(0)) = T26;
  T31 = BOXVAL(FREEREF(4));
  if (T31 != YPfalse) {
    T30 = BOXVAL(FREEREF(3));
    T29 = CALL2(CHKREF(YruntimeYT),T30,FREEREF(2));
    T28 = BOXVAL(FREEREF(3)) = T29;
  } else {
  }
  T4 = YPtrue;
  T0 = T4;
  QRET(T0);
}

FUNCODEDEF(fun_match_digitX_69) {
  ARG(U_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_68,7,FREEREF(6),FREEREF(5),FREEREF(4),FREEREF(3),FREEREF(2),FREEREF(1),FREEREF(0));
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_match_70) {
  ARG(char_, 0);
  P tmpF688;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = BOXVAL(FREEREF(0));
  T8 = CALL2(CHKREF(YruntimeYL),T9,FREEREF(1));
  tmpF688 = T8;
  if (tmpF688 != YPfalse) {
    T7 = BOXVAL(FREEREF(0));
    T6 = CALL2(CHKREF(YruntimeYelt),FREEREF(2),T7);
    T5 = CALL2(CHKREF(YruntimeYE),T6,char_);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  if (T3 != YPfalse) {
    T2 = BOXVAL(FREEREF(0));
    T1 = CALL2(CHKREF(YruntimeYA),T2,YPint((P)1));
    BOXVAL(FREEREF(0)) = T1;
    T0 = YPtrue;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_str_to_num_71) {
  ARG(string_, 0);
  P fF709;
  P tmpF708;
  P tmpF707;
  P loopF706;
  P tmpF705;
  P tmpF704;
  P tmpF703;
  P tmpF702;
  P tmpF701;
  P tmpF700;
  P looking_at_alphabeticQF699;
  P match_digitXF698;
  P matchF697;
  P radixF696;
  P seen_decimal_pointQF695;
  P lengthF694;
  P scaleF693;
  P iF692;
  P nF691;
  P dF690;
  P sF689;
  P T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  sF689 = YPint((P)1);
  sF689 = BOXFAB(sF689);
  dF690 = YPint((P)0);
  dF690 = BOXFAB(dF690);
  nF691 = YPint((P)0);
  nF691 = BOXFAB(nF691);
  iF692 = YPint((P)0);
  iF692 = BOXFAB(iF692);
  scaleF693 = YPint((P)1);
  scaleF693 = BOXFAB(scaleF693);
  T59 = CALL1(CHKREF(YruntimeYlen),string_);
  lengthF694 = T59;
  seen_decimal_pointQF695 = YPfalse;
  seen_decimal_pointQF695 = BOXFAB(seen_decimal_pointQF695);
  radixF696 = YPint((P)10);
  T58 = FUNSHELL(1,fun_match_70,3);
  matchF697 = T58;
  T57 = FUNSHELL(1,fun_match_digitX_69,7);
  match_digitXF698 = T57;
  T56 = FUNSHELL(1,fun_looking_at_alphabeticQ_66,3);
  looking_at_alphabeticQF699 = T56;
  FUNINIT(matchF697, 3,iF692,lengthF694,string_);
  FUNINIT(match_digitXF698, 7,lengthF694,dF690,seen_decimal_pointQF695,scaleF693,radixF696,string_,iF692);
  FUNINIT(looking_at_alphabeticQF699, 3,lengthF694,iF692,string_);
  T55 = KCALL1(matchF697,YPchr((P)43));
  tmpF700 = T55;
  if (tmpF700 != YPfalse) {
    T48 = tmpF700;
  } else {
    T54 = KCALL1(matchF697,YPchr((P)45));
    tmpF701 = T54;
    if (tmpF701 != YPfalse) {
      T53 = BOXVAL(sF689) = YPint((P)-1);
      T52 = T53;
    } else {
      T52 = YPfalse;
    }
    T51 = T52;
    tmpF702 = T51;
    if (tmpF702 != YPfalse) {
      T50 = tmpF702;
    } else {
      T50 = YPtrue;
    }
    T49 = T50;
    T48 = T49;
  }
  T47 = T48;
  tmpF703 = T47;
  if (tmpF703 != YPfalse) {
    T46 = BOXVAL(dF690);
    T45 = KCALL1(match_digitXF698,T46);
    tmpF704 = T45;
    if (tmpF704 != YPfalse) {
      T44 = BOXVAL(dF690);
      T43 = BOXVAL(nF691) = T44;
      T42 = T43;
    } else {
      T42 = YPfalse;
    }
    T41 = T42;
    tmpF705 = T41;
    if (tmpF705 != YPfalse) {
      T40 = FUNSHELL(1,fun_loop_65,5);
      loopF706 = T40;
      FUNINIT(loopF706, 5,loopF706,dF690,match_digitXF698,radixF696,nF691);
      T39 = KCALL0(loopF706);
      T38 = T39;
      tmpF707 = T38;
      if (tmpF707 != YPfalse) {
        T37 = BOXVAL(iF692);
        T36 = CALL2(CHKREF(YruntimeYE),T37,lengthF694);
        tmpF708 = T36;
        if (tmpF708 != YPfalse) {
          T35 = BOXVAL(sF689);
          T34 = CALL2(CHKREF(YruntimeYas),CHKREF(YLfloG),T35);
          T33 = BOXVAL(nF691);
          T32 = CALL2(CHKREF(YruntimeYas),CHKREF(YLfloG),T33);
          T31 = BOXVAL(scaleF693);
          T30 = CALL2(CHKREF(YruntimeYas),CHKREF(YLfloG),T31);
          T29 = CALL2(CHKREF(YruntimeYS),T32,T30);
          T28 = CALL2(CHKREF(YruntimeYT),T34,T29);
          fF709 = T28;
          T27 = BOXVAL(seen_decimal_pointQF695);
          if (T27 != YPfalse) {
            T24 = fF709;
          } else {
            T26 = CALL1(CHKREF(YruntimeYtruncate),fF709);
            T25 = CALL1(CHKREF(YruntimeY1st),T26);
            T24 = T25;
          }
          T23 = T24;
          T22 = T23;
        } else {
          T22 = YPfalse;
        }
        T21 = T22;
        T20 = T21;
      } else {
        T20 = YPfalse;
      }
      T19 = T20;
      T18 = T19;
    } else {
      T18 = YPfalse;
    }
    T17 = T18;
    T16 = T17;
  } else {
    T16 = YPfalse;
  }
  T15 = T16;
  T14 = T15;
  T13 = T14;
  T11 = T13;
  T10 = T11;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
  QRET(T0);
}

FUNCODEDEF(fun_contagious_type_72) {
  ARG(y_, 0);
  ARG(x_, 1);
  P a1,a2;
loop:
  RET(CHKREF(YLintG));
}

FUNCODEDEF(fun_contagious_type_73) {
  ARG(y_, 0);
  ARG(x_, 1);
  P a1,a2;
loop:
  RET(CHKREF(YLfloG));
}

FUNCODEDEF(fun_contagious_type_74) {
  ARG(y_, 0);
  ARG(x_, 1);
  P a1,a2;
loop:
  RET(CHKREF(YLfloG));
}

FUNCODEDEF(fun_contagious_type_75) {
  ARG(y_, 0);
  ARG(x_, 1);
  P a1,a2;
loop:
  RET(CHKREF(YLfloG));
}

FUNCODEDEF(fun_EE_76) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPiu(x_);
  T2 = (P)YPiu(y_);
  T1 = (P)YPiE(T3,T2);
  T0 = (P)YPbb(T1);
  RET(T0);
}

FUNCODEDEF(fun_L_77) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPiu(x_);
  T2 = (P)YPiu(y_);
  T1 = (P)YPiL(T3,T2);
  T0 = (P)YPbb(T1);
  RET(T0);
}

FUNCODEDEF(fun_A_78) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPiu(x_);
  T2 = (P)YPiu(y_);
  T1 = (P)YPiA(T3,T2);
  T0 = (P)YPib(T1);
  RET(T0);
}

FUNCODEDEF(fun___79) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPiu(x_);
  T2 = (P)YPiu(y_);
  T1 = (P)YPi_(T3,T2);
  T0 = (P)YPib(T1);
  RET(T0);
}

FUNCODEDEF(fun_T_80) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPiu(x_);
  T2 = (P)YPiu(y_);
  T1 = (P)YPiT(T3,T2);
  T0 = (P)YPib(T1);
  RET(T0);
}

FUNCODEDEF(fun_floor_81) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYtup),x_,YPint((P)0));
  RET(T0);
}

FUNCODEDEF(fun_ceiling_82) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYtup),x_,YPint((P)0));
  RET(T0);
}

FUNCODEDEF(fun_round_83) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYtup),x_,YPint((P)0));
  RET(T0);
}

FUNCODEDEF(fun_truncate_84) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYtup),x_,YPint((P)0));
  RET(T0);
}

FUNCODEDEF(fun_truncateS_85) {
  ARG(y_, 0);
  ARG(x_, 1);
  P resultF710;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = (P)YPiu(x_);
  T6 = (P)YPiu(y_);
  T5 = (P)YPitS(T7,T6);
  T4 = (P)YPib(T5);
  resultF710 = T4;
  T3 = CALL2(CHKREF(YruntimeYT),resultF710,y_);
  T2 = CALL2(CHKREF(YruntimeY_),x_,T3);
  T1 = CALL2(CHKREF(YmacrosYtup),resultF710,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_modulo_86) {
  ARG(y_, 0);
  ARG(x_, 1);
  P resF711;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = (P)YPiu(x_);
  T9 = (P)YPiu(y_);
  T8 = (P)YPim(T10,T9);
  T7 = (P)YPib(T8);
  resF711 = T7;
  T6 = CALL2(CHKREF(YruntimeYL),resF711,YPint((P)0));
  if (T6 != YPfalse) {
    T5 = CALL2(CHKREF(YruntimeYG),y_,YPint((P)0));
    if (T5 != YPfalse) {
      T4 = CALL2(CHKREF(YruntimeYA),resF711,y_);
      T2 = T4;
    } else {
      T3 = CALL2(CHKREF(YruntimeY_),resF711,y_);
      T2 = T3;
    }
    T1 = T2;
  } else {
    T1 = resF711;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_logior_87) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPiu(x_);
  T2 = (P)YPiu(y_);
  T1 = (P)YPiv(T3,T2);
  T0 = (P)YPib(T1);
  RET(T0);
}

FUNCODEDEF(fun_logxor_88) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPiu(x_);
  T2 = (P)YPiu(y_);
  T1 = (P)YPiC(T3,T2);
  T0 = (P)YPib(T1);
  RET(T0);
}

FUNCODEDEF(fun_logand_89) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPiu(x_);
  T2 = (P)YPiu(y_);
  T1 = (P)YPiB(T3,T2);
  T0 = (P)YPib(T1);
  RET(T0);
}

FUNCODEDEF(fun_lognot_90) {
  ARG(x_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = (P)YPiu(x_);
  T1 = (P)YPiX(T2);
  T0 = (P)YPib(T1);
  RET(T0);
}

FUNCODEDEF(fun_logbitQ_91) {
  ARG(x_, 0);
  ARG(o_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPiu(o_);
  T2 = (P)YPiu(x_);
  T1 = (P)YPiQ(T3,T2);
  T0 = (P)YPib(T1);
  RET(T0);
}

FUNCODEDEF(fun_evenQ_92) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YruntimeYlogand),x_,YPint((P)1));
  T0 = CALL1(CHKREF(YruntimeYzeroQ),T1);
  RET(T0);
}

FUNCODEDEF(fun_oddQ_93) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeYevenQ),x_);
  T0 = CALL1(CHKREF(Ynot),T1);
  RET(T0);
}

FUNCODEDEF(fun_ash_94) {
  ARG(a_, 0);
  ARG(x_, 1);
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL1(CHKREF(YruntimeYnegQ),a_);
  if (T9 != YPfalse) {
    T8 = (P)YPiu(x_);
    T7 = (P)YPiu(a_);
    T6 = (P)YPiGG(T8,T7);
    T5 = (P)YPib(T6);
    T0 = T5;
  } else {
    T4 = (P)YPiu(x_);
    T3 = (P)YPiu(a_);
    T2 = (P)YPiLL(T4,T3);
    T1 = (P)YPib(T2);
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(fun_lsh_95) {
  ARG(a_, 0);
  ARG(x_, 1);
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL1(CHKREF(YruntimeYnegQ),a_);
  if (T9 != YPfalse) {
    T8 = (P)YPiu(x_);
    T7 = (P)YPiu(a_);
    T6 = (P)YPiGGG(T8,T7);
    T5 = (P)YPib(T6);
    T0 = T5;
  } else {
    T4 = (P)YPiu(x_);
    T3 = (P)YPiu(a_);
    T2 = (P)YPiLLL(T4,T3);
    T1 = (P)YPib(T2);
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(fun_search_96) {
  ARG(po2_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL2(CHKREF(YruntimeYG),po2_,FREEREF(1));
  if (T3 != YPfalse) {
    T0 = po2_;
  } else {
    T2 = CALL2(CHKREF(YruntimeYA),po2_,po2_);
    a1 = T2;
    po2_ = a1;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_power_of_two_ceiling_97) {
  ARG(x_, 0);
  P searchF712;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_search_96,2);
  searchF712 = T2;
  FUNINIT(searchF712, 2,searchF712,x_);
  T1 = CALL1(searchF712,YPint((P)1));
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_decode_radix_option_98) {
  ARG(caller_name_, 0);
  ARG(default_, 1);
  ARG(rest_, 2);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T6 = CALL1(CHKREF(YmacrosYemptyQ),rest_);
  if (T6 != YPfalse) {
    T0 = default_;
  } else {
    T5 = CALL1(CHKREF(YruntimeYlen),rest_);
    T4 = CALL2(CHKREF(YruntimeYE),T5,YPint((P)1));
    if (T4 != YPfalse) {
      T3 = CALL1(CHKREF(Yhead),rest_);
      T1 = T3;
    } else {
      T2 = CALL3(CHKREF(Yerror),CHKREF(lit_116),caller_name_,rest_);
      T1 = T2;
    }
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(fun_loop_99) {
  ARG(num_, 0);
  ARG(digit_list_, 1);
  P digitF713;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL2(CHKREF(YruntimeYE),num_,YPint((P)0));
  if (T8 != YPfalse) {
    T0 = digit_list_;
  } else {
    T7 = CALL2(CHKREF(YruntimeYremainder),num_,FREEREF(0));
    T6 = CALL2(CHKREF(YruntimeYelt),CHKREF(YruntimeYDdigit_to_char),T7);
    digitF713 = T6;
    T5 = CALL2(CHKREF(YmacrosYpair),digitF713,digit_list_);
    T4 = CALL2(CHKREF(YruntimeYtruncateS),num_,FREEREF(0));
    T3 = CALL1(CHKREF(YruntimeY1st),T4);
    a1 = T5;
    a2 = T3;
    digit_list_ = a1;
    num_ = a2;
    goto loop;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_num_to_str_100) {
  ARG(radix_option_, 0);
  ARG(num_, 1);
  P digit_listF717;
  P loopF716;
  P sF715;
  P radixF714;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T15 = CALL3(CHKREF(YruntimeYdecode_radix_option),radix_option_,CHKREF(YruntimeYTprint_baseT),CHKREF(lit_117));
  radixF714 = T15;
  T14 = CALL2(CHKREF(YruntimeYL),num_,YPint((P)0));
  if (T14 != YPfalse) {
    T13 = YPint((P)-1);
  } else {
    T13 = YPint((P)1);
  }
  sF715 = T13;
  T12 = FUNSHELL(1,fun_loop_99,2);
  loopF716 = T12;
  FUNINIT(loopF716, 2,radixF714,loopF716);
  T11 = CALL2(CHKREF(YruntimeYT),num_,sF715);
  T10 = KCALL2(loopF716,Ynil,T11);
  T9 = T10;
  digit_listF717 = T9;
  T8 = CALL2(CHKREF(YruntimeYL),sF715,YPint((P)0));
  if (T8 != YPfalse) {
    T7 = CALL2(CHKREF(YmacrosYpair),YPchr((P)45),digit_listF717);
    T4 = T7;
  } else {
    T6 = CALL2(CHKREF(YruntimeYE),num_,YPint((P)0));
    if (T6 != YPfalse) {
      T5 = CHKREF(lit_120);
    } else {
      T5 = digit_listF717;
    }
    T4 = T5;
  }
  T3 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),T4);
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YruntimeYflo_bits) {
  ARG(x_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = (P)YPfu(x_);
  T1 = (P)YPflo_bits(T2);
  T0 = (P)YPib(T1);
  RET(T0);
}

FUNCODEDEF(fun_as_102) {
  ARG(x_, 0);
  ARG(U_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPiu(x_);
  T1 = (P)YPfi2f(T2);
  T0 = (P)YPfb(T1);
  RET(T0);
}

FUNCODEDEF(fun_EE_103) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPfu(x_);
  T2 = (P)YPfu(y_);
  T1 = (P)YPfE(T3,T2);
  T0 = (P)YPbb(T1);
  RET(T0);
}

FUNCODEDEF(fun_L_104) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPfu(x_);
  T2 = (P)YPfu(y_);
  T1 = (P)YPfL(T3,T2);
  T0 = (P)YPbb(T1);
  RET(T0);
}

FUNCODEDEF(fun_A_105) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPfu(x_);
  T2 = (P)YPfu(y_);
  T1 = (P)YPfA(T3,T2);
  T0 = (P)YPfb(T1);
  RET(T0);
}

FUNCODEDEF(fun___106) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPfu(x_);
  T2 = (P)YPfu(y_);
  T1 = (P)YPf_(T3,T2);
  T0 = (P)YPfb(T1);
  RET(T0);
}

FUNCODEDEF(fun_T_107) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPfu(x_);
  T2 = (P)YPfu(y_);
  T1 = (P)YPfT(T3,T2);
  T0 = (P)YPfb(T1);
  RET(T0);
}

FUNCODEDEF(fun_S_108) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPfu(x_);
  T2 = (P)YPfu(y_);
  T1 = (P)YPfS(T3,T2);
  T0 = (P)YPfb(T1);
  RET(T0);
}

FUNCODEDEF(fun_truncateS_109) {
  ARG(y_, 0);
  ARG(x_, 1);
  P resultF719;
  P dividedF718;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL2(CHKREF(YruntimeYS),x_,y_);
  dividedF718 = T9;
  T8 = (P)YPfu(dividedF718);
  T7 = (P)YPft(T8);
  T6 = (P)YPib(T7);
  resultF719 = T6;
  T5 = CALL2(CHKREF(YruntimeYas),CHKREF(YLfloG),resultF719);
  T4 = CALL2(CHKREF(YruntimeY_),dividedF718,T5);
  T3 = CALL2(CHKREF(YruntimeYT),y_,T4);
  T2 = CALL2(CHKREF(YmacrosYtup),resultF719,T3);
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_loop_110) {
  ARG(e_, 0);
  ARG(p_, 1);
  P tup19F722;
  P iF721;
  P tup19F720;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T12 = CALL1(CHKREF(YruntimeYtruncate),p_);
  tup19F720 = T12;
  T11 = CALL1(CHKREF(Yhead),tup19F720);
  iF721 = T11;
  T10 = CALL1(CHKREF(Ytail),tup19F720);
  tup19F722 = T10;
  T9 = CALL2(CHKREF(YruntimeY_),p_,iF721);
  T8 = CALL2(CHKREF(YruntimeYL),T9,CHKREF(YruntimeYepsilon));
  if (T8 != YPfalse) {
    T7 = CALL2(CHKREF(YruntimeYnum_to_str),iF721,FREEREF(0));
    BOXVAL(FREEREF(2)) = T7;
    T3 = e_;
  } else {
    T6 = CALL2(CHKREF(YruntimeYT),p_,FREEREF(0));
    T5 = CALL2(CHKREF(YruntimeYA),e_,YPint((P)1));
    a1 = T6;
    a2 = T5;
    p_ = a1;
    e_ = a2;
    goto loop;
    T3 = T4;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_num_to_str_111) {
  ARG(radix_option_, 0);
  ARG(num_, 1);
  P lengthF729;
  P eF728;
  P loopF727;
  P stringF726;
  P pF725;
  P sF724;
  P radixF723;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T42 = CALL3(CHKREF(YruntimeYdecode_radix_option),radix_option_,CHKREF(YruntimeYTprint_baseT),CHKREF(lit_117));
  radixF723 = T42;
  T41 = CALL2(CHKREF(YruntimeYL),num_,YPint((P)0));
  if (T41 != YPfalse) {
    T40 = YPint((P)-1);
  } else {
    T40 = YPint((P)1);
  }
  sF724 = T40;
  T39 = CALL2(CHKREF(YruntimeYT),num_,sF724);
  pF725 = T39;
  stringF726 = CHKREF(lit_13);
  stringF726 = BOXFAB(stringF726);
  T38 = FUNSHELL(1,fun_loop_110,3);
  loopF727 = T38;
  FUNINIT(loopF727, 3,radixF723,loopF727,stringF726);
  T37 = KCALL2(loopF727,pF725,YPint((P)0));
  T36 = T37;
  eF728 = T36;
  T35 = BOXVAL(stringF726);
  T34 = CALL1(CHKREF(YruntimeYlen),T35);
  lengthF729 = T34;
  T28 = CALL2(CHKREF(YruntimeYE),eF728,YPint((P)0));
  if (T28 != YPfalse) {
    T27 = BOXVAL(stringF726);
    T26 = CALL2(CHKREF(YmacrosYcat),T27,CHKREF(lit_128));
    T7 = T26;
  } else {
    T25 = CALL2(CHKREF(YruntimeYE),eF728,lengthF729);
    if (T25 != YPfalse) {
      T24 = BOXVAL(stringF726);
      T23 = CALL2(CHKREF(YmacrosYcat),CHKREF(lit_127),T24);
      T8 = T23;
    } else {
      T22 = CALL2(CHKREF(YruntimeYL),eF728,lengthF729);
      if (T22 != YPfalse) {
        T21 = BOXVAL(stringF726);
        T20 = CALL2(CHKREF(YruntimeY_),lengthF729,eF728);
        T19 = CALL3(CHKREF(YruntimeYsub),T21,YPint((P)0),T20);
        T18 = BOXVAL(stringF726);
        T17 = CALL2(CHKREF(YruntimeY_),lengthF729,eF728);
        T16 = CALL3(CHKREF(YruntimeYsub),T18,T17,lengthF729);
        T15 = CALL3(CHKREF(YmacrosYcat),T19,CHKREF(lit_126),T16);
        T9 = T15;
      } else {
        T14 = CALL2(CHKREF(YruntimeY_),eF728,lengthF729);
        T13 = CALL2(CHKREF(YruntimeYA),T14,YPint((P)2));
        T12 = CALL3(CHKREF(YruntimeYsub),CHKREF(lit_125),YPint((P)0),T13);
        T11 = BOXVAL(stringF726);
        T10 = CALL2(CHKREF(YmacrosYcat),T12,T11);
        T9 = T10;
      }
      T8 = T9;
    }
    T7 = T8;
  }
  BOXVAL(stringF726) = T7;
  T33 = CALL2(CHKREF(YruntimeYL),sF724,YPint((P)0));
  if (T33 != YPfalse) {
    T32 = BOXVAL(stringF726);
    T31 = CALL2(CHKREF(YmacrosYcat),CHKREF(lit_124),T32);
    T29 = T31;
  } else {
    T30 = BOXVAL(stringF726);
    T29 = T30;
  }
  T6 = T29;
  T5 = T6;
  T3 = T5;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_fabs_112) {
  ARG(objects_, 0);
  ARG(c_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(YruntimeYlen),objects_);
  T1 = CALL2(CHKREF(YruntimeYfab),c_,T2);
  T0 = CALL2(CHKREF(YruntimeYalter),T1,objects_);
  QRET(T0);
}

FUNCODEDEF(fun_emptyQ_113) {
  ARG(c_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeYlen),c_);
  T0 = CALL2(CHKREF(YruntimeYE),T1,YPint((P)0));
  RET(T0);
}

FUNCODEDEF(fun_empty_114) {
  ARG(c_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYfab),c_,YPint((P)0));
  RET(T0);
}

FUNCODEDEF(fun_default_115) {
  ARG(c_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_as_copy_116) {
  ARG(x_, 0);
  ARG(c_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(Yobject_class),c_);
  T0 = CALL2(CHKREF(YruntimeYas),T1,x_);
  RET(T0);
}

FUNCODEDEF(fun_eq_117) {
  ARG(s2_, 0);
  ARG(s1_, 1);
  P tmpF730;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),s1_);
  if (T10 != YPfalse) {
    T9 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),s2_);
    T0 = T9;
  } else {
    T8 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(1),s1_);
    T7 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),s2_);
    T6 = CALL2(CHKREF(YruntimeYE),T8,T7);
    tmpF730 = T6;
    if (tmpF730 != YPfalse) {
      T5 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),s1_);
      T4 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),s2_);
      a1 = T5;
      a2 = T4;
      s1_ = a1;
      s2_ = a2;
      goto loop;
      T2 = T3;
    } else {
      T2 = YPfalse;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_E_118) {
  ARG(c2_, 0);
  ARG(c1_, 1);
  P eqF731;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = FUNSHELL(1,fun_eq_117,3);
  eqF731 = T4;
  FUNINIT(eqF731, 3,c2_,c1_,eqF731);
  T3 = CALL1(CHKREF(YruntimeYini_state),c1_);
  T2 = CALL1(CHKREF(YruntimeYini_state),c2_);
  T1 = KCALL2(eqF731,T3,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_fab_119) {
  ARG(s_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL0(CHKREF(YruntimeYnyi_error));
  RET(T0);
}

FUNCODEDEF(fun_as_120) {
  ARG(x_, 0);
  ARG(p_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = CALL1(CHKREF(YruntimeYlen),x_);
  T2 = CALL2(CHKREF(YruntimeYfab),p_,T3);
  T1 = CALL1(CHKREF(YruntimeYlen),x_);
  T0 = CALLN(CHKREF(YruntimeYinto),4,T2,x_,YPint((P)0),T1);
  RET(T0);
}

FUNCODEDEF(fun_con_121) {
  ARG(s_, 0);
  ARG(res_, 1);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),s_);
  if (T6 != YPfalse) {
    T5 = CALL1(CHKREF(YruntimeYrevX),res_);
    T0 = T5;
  } else {
    T4 = CALL2(CHKREF(YruntimeYnow_key),FREEREF(0),s_);
    T3 = CALL2(CHKREF(YruntimeYadd),res_,T4);
    T2 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),s_);
    a1 = T3;
    a2 = T2;
    res_ = a1;
    s_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_keys_122) {
  ARG(c_, 0);
  P conF732;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = FUNSHELL(1,fun_con_121,2);
  conF732 = T3;
  FUNINIT(conF732, 2,c_,conF732);
  T2 = CALL1(CHKREF(YruntimeYini_state),c_);
  T1 = KCALL2(conF732,Ynil,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_rep_123) {
  ARG(key_vals_, 0);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(YmacrosYemptyQ),key_vals_);
  T7 = CALL1(CHKREF(Ynot),T8);
  if (T7 != YPfalse) {
    T3 = CALL1(CHKREF(Yhead),key_vals_);
    T2 = CALL1(CHKREF(Ytail),key_vals_);
    T1 = CALL1(CHKREF(Yhead),T2);
    CALL2(FREEREF(1),T3,T1);
    T6 = CALL1(CHKREF(Ytail),key_vals_);
    T5 = CALL1(CHKREF(Ytail),T6);
    a1 = T5;
    key_vals_ = a1;
    goto loop;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_do_key_vals_124) {
  ARG(key_vals_, 0);
  ARG(fn_, 1);
  P repF733;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_rep_123,2);
  repF733 = T2;
  FUNINIT(repF733, 2,repF733,fn_);
  T1 = CALL1(repF733,key_vals_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_count_125) {
  ARG(i_, 0);
  ARG(s_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),s_);
  if (T4 != YPfalse) {
    T0 = i_;
  } else {
    T3 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),s_);
    T2 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T3;
    a2 = T2;
    s_ = a1;
    i_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_len_126) {
  ARG(x_, 0);
  P countF734;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = FUNSHELL(1,fun_count_125,2);
  countF734 = T3;
  FUNINIT(countF734, 2,x_,countF734);
  T2 = CALL1(CHKREF(YruntimeYini_state),x_);
  T1 = KCALL2(countF734,T2,YPint((P)0));
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_in_127) {
  ARG(ss_, 0);
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),ss_);
  if (T5 != YPfalse) {
    T0 = FREEREF(2);
  } else {
    T2 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),ss_);
    T1 = CALL2(CHKREF(YruntimeYnow_key),FREEREF(0),ss_);
    CALL3(CHKREF(YruntimeYelt_setter),T2,FREEREF(2),T1);
    T4 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),ss_);
    a1 = T4;
    ss_ = a1;
    goto loop;
    T0 = T3;
  }
  QRET(T0);
}

FUNCODEDEF(fun_alter_128) {
  ARG(src_, 0);
  ARG(dst_, 1);
  P inF735;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_in_127,3);
  inF735 = T3;
  FUNINIT(inF735, 3,src_,inF735,dst_);
  T2 = CALL1(CHKREF(YruntimeYini_state),src_);
  T1 = KCALL1(inF735,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_in_129) {
  ARG(ds_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),ds_);
  if (T3 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    CALL3(CHKREF(YruntimeYnow_elt_setter),FREEREF(2),FREEREF(0),ds_);
    T2 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),ds_);
    a1 = T2;
    ds_ = a1;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_fill_130) {
  ARG(val_, 0);
  ARG(dst_, 1);
  P inF736;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_in_129,3);
  inF736 = T3;
  FUNINIT(inF736, 3,dst_,inF736,val_);
  T2 = CALL1(CHKREF(YruntimeYini_state),dst_);
  T1 = KCALL1(inF736,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_fnd_131) {
  ARG(state_, 0);
  P tmpF737;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),state_);
  if (T7 != YPfalse) {
    T0 = YPfalse;
  } else {
    T6 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),state_);
    T5 = CALL1(FREEREF(1),T6);
    tmpF737 = T5;
    if (tmpF737 != YPfalse) {
      T2 = tmpF737;
    } else {
      T4 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),state_);
      a1 = T4;
      state_ = a1;
      goto loop;
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_anyQ_132) {
  ARG(c_, 0);
  ARG(test_, 1);
  P fndF738;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_fnd_131,3);
  fndF738 = T3;
  FUNINIT(fndF738, 3,c_,test_,fndF738);
  T2 = CALL1(CHKREF(YruntimeYini_state),c_);
  T1 = KCALL1(fndF738,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_fnd_133) {
  ARG(sy_, 0);
  ARG(sx_, 1);
  P tmpF740;
  P tmpF739;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T12 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),sx_);
  tmpF740 = T12;
  if (tmpF740 != YPfalse) {
    T10 = tmpF740;
  } else {
    T11 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),sy_);
    T10 = T11;
  }
  T9 = T10;
  if (T9 != YPfalse) {
    T0 = YPfalse;
  } else {
    T8 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(1),sx_);
    T7 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),sy_);
    T6 = CALL2(FREEREF(2),T8,T7);
    tmpF739 = T6;
    if (tmpF739 != YPfalse) {
      T2 = tmpF739;
    } else {
      T5 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),sx_);
      T4 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),sy_);
      a1 = T5;
      a2 = T4;
      sx_ = a1;
      sy_ = a2;
      goto loop;
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_any2Q_134) {
  ARG(y_, 0);
  ARG(x_, 1);
  ARG(test_, 2);
  P fndF741;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = FUNSHELL(1,fun_fnd_133,4);
  fndF741 = T4;
  FUNINIT(fndF741, 4,y_,x_,test_,fndF741);
  T3 = CALL1(CHKREF(YruntimeYini_state),x_);
  T2 = CALL1(CHKREF(YruntimeYini_state),y_);
  T1 = KCALL2(fndF741,T3,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_fnd_135) {
  ARG(state_, 0);
  P tmpF743;
  P tmpF742;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),state_);
  tmpF742 = T8;
  if (tmpF742 != YPfalse) {
    T1 = tmpF742;
  } else {
    T7 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),state_);
    T6 = CALL1(FREEREF(1),T7);
    tmpF743 = T6;
    if (tmpF743 != YPfalse) {
      T5 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),state_);
      a1 = T5;
      state_ = a1;
      goto loop;
      T3 = T4;
    } else {
      T3 = YPfalse;
    }
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_allQ_136) {
  ARG(c_, 0);
  ARG(test_, 1);
  P fndF744;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_fnd_135,3);
  fndF744 = T3;
  FUNINIT(fndF744, 3,c_,test_,fndF744);
  T2 = CALL1(CHKREF(YruntimeYini_state),c_);
  T1 = KCALL1(fndF744,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_fnd_137) {
  ARG(sy_, 0);
  ARG(sx_, 1);
  P tmpF747;
  P tmpF746;
  P tmpF745;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),sx_);
  tmpF745 = T13;
  if (tmpF745 != YPfalse) {
    T1 = tmpF745;
  } else {
    T12 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),sy_);
    tmpF746 = T12;
    if (tmpF746 != YPfalse) {
      T3 = tmpF746;
    } else {
      T11 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),sx_);
      T10 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(1),sy_);
      T9 = CALL2(FREEREF(2),T11,T10);
      tmpF747 = T9;
      if (tmpF747 != YPfalse) {
        T8 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),sx_);
        T7 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),sy_);
        a1 = T8;
        a2 = T7;
        sx_ = a1;
        sy_ = a2;
        goto loop;
        T5 = T6;
      } else {
        T5 = YPfalse;
      }
      T4 = T5;
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_all2Q_138) {
  ARG(y_, 0);
  ARG(x_, 1);
  ARG(test_, 2);
  P fndF748;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = FUNSHELL(1,fun_fnd_137,4);
  fndF748 = T4;
  FUNINIT(fndF748, 4,x_,y_,test_,fndF748);
  T3 = CALL1(CHKREF(YruntimeYini_state),x_);
  T2 = CALL1(CHKREF(YruntimeYini_state),y_);
  T1 = KCALL2(fndF748,T3,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_red_139) {
  ARG(state_, 0);
  ARG(res_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),state_);
  if (T5 != YPfalse) {
    T0 = res_;
  } else {
    T4 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),state_);
    T3 = CALL2(FREEREF(1),res_,T4);
    T2 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),state_);
    a1 = T3;
    a2 = T2;
    res_ = a1;
    state_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_reduce_140) {
  ARG(c_, 0);
  ARG(init_, 1);
  ARG(combine_, 2);
  P redF749;
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = FUNSHELL(1,fun_red_139,3);
  redF749 = T3;
  FUNINIT(redF749, 3,c_,combine_,redF749);
  T2 = CALL1(CHKREF(YruntimeYini_state),c_);
  T1 = KCALL2(redF749,init_,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_red_141) {
  ARG(state_, 0);
  ARG(res_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),state_);
  if (T5 != YPfalse) {
    T0 = res_;
  } else {
    T4 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),state_);
    T3 = CALL2(FREEREF(1),res_,T4);
    T2 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),state_);
    a1 = T3;
    a2 = T2;
    res_ = a1;
    state_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_reduceA_142) {
  ARG(c_, 0);
  ARG(combine_, 1);
  P redF752;
  P initF751;
  P stateF750;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL1(CHKREF(YruntimeYini_state),c_);
  stateF750 = T7;
  T6 = CALL2(CHKREF(YruntimeYnow_elt),c_,stateF750);
  initF751 = T6;
  T5 = FUNSHELL(1,fun_red_141,3);
  redF752 = T5;
  FUNINIT(redF752, 3,c_,combine_,redF752);
  T4 = CALL2(CHKREF(YruntimeYnxt_state),c_,stateF750);
  T3 = KCALL2(redF752,initF751,T4);
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_fnd_143) {
  ARG(state_, 0);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),state_);
  if (T7 != YPfalse) {
    T0 = CHKREF(Ynul);
  } else {
    T6 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),state_);
    T5 = CALL1(FREEREF(2),T6);
    if (T5 != YPfalse) {
      T4 = CALL2(CHKREF(YruntimeYnow_key),FREEREF(0),state_);
      T1 = T4;
    } else {
      T3 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),state_);
      a1 = T3;
      state_ = a1;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_find_key_144) {
  ARG(c_, 0);
  ARG(f_, 1);
  P fndF753;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_fnd_143,3);
  fndF753 = T3;
  FUNINIT(fndF753, 3,c_,fndF753,f_);
  T2 = CALL1(CHKREF(YruntimeYini_state),c_);
  T1 = KCALL1(fndF753,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_con_145) {
  ARG(s_, 0);
  ARG(res_, 1);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),s_);
  if (T8 != YPfalse) {
    T7 = CALL1(CHKREF(YruntimeYrevX),res_);
    T6 = CALL2(CHKREF(YruntimeYas_copy),FREEREF(0),T7);
    T0 = T6;
  } else {
    T5 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),s_);
    T4 = CALL1(FREEREF(1),T5);
    T3 = CALL2(CHKREF(YruntimeYadd),res_,T4);
    T2 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),s_);
    a1 = T3;
    a2 = T2;
    res_ = a1;
    s_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_map_146) {
  ARG(c_, 0);
  ARG(f_, 1);
  P conF754;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_con_145,3);
  conF754 = T3;
  FUNINIT(conF754, 3,c_,f_,conF754);
  T2 = CALL1(CHKREF(YruntimeYini_state),c_);
  T1 = KCALL2(conF754,Ynil,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_lop_147) {
  ARG(s_, 0);
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),s_);
  T4 = CALL1(CHKREF(Ynot),T5);
  if (T4 != YPfalse) {
    T1 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),s_);
    CALL1(FREEREF(2),T1);
    T3 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),s_);
    a1 = T3;
    s_ = a1;
    goto loop;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_do_148) {
  ARG(c_, 0);
  ARG(f_, 1);
  P lopF755;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_lop_147,3);
  lopF755 = T3;
  FUNINIT(lopF755, 3,c_,lopF755,f_);
  T2 = CALL1(CHKREF(YruntimeYini_state),c_);
  T1 = KCALL1(lopF755,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_con_149) {
  ARG(sy_, 0);
  ARG(sx_, 1);
  ARG(res_, 2);
  P tmpF756;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T13 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),sx_);
  tmpF756 = T13;
  if (tmpF756 != YPfalse) {
    T11 = tmpF756;
  } else {
    T12 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),sy_);
    T11 = T12;
  }
  T10 = T11;
  if (T10 != YPfalse) {
    T9 = CALL1(CHKREF(YruntimeYrevX),res_);
    T8 = CALL2(CHKREF(YruntimeYas_copy),FREEREF(1),T9);
    T0 = T8;
  } else {
    T7 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(1),sx_);
    T6 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),sy_);
    T5 = CALL2(FREEREF(2),T7,T6);
    T4 = CALL2(CHKREF(YruntimeYadd),res_,T5);
    T3 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),sx_);
    T2 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),sy_);
    a1 = T4;
    a2 = T3;
    a3 = T2;
    res_ = a1;
    sx_ = a2;
    sy_ = a3;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_map2_150) {
  ARG(y_, 0);
  ARG(x_, 1);
  ARG(f_, 2);
  P conF757;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = FUNSHELL(1,fun_con_149,4);
  conF757 = T4;
  FUNINIT(conF757, 4,y_,x_,f_,conF757);
  T3 = CALL1(CHKREF(YruntimeYini_state),x_);
  T2 = CALL1(CHKREF(YruntimeYini_state),y_);
  T1 = KCALL3(conF757,Ynil,T3,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_lop_151) {
  ARG(sy_, 0);
  ARG(sx_, 1);
  P tmpF758;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),sx_);
  tmpF758 = T10;
  if (tmpF758 != YPfalse) {
    T8 = tmpF758;
  } else {
    T9 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),sy_);
    T8 = T9;
  }
  T7 = T8;
  T6 = CALL1(CHKREF(Ynot),T7);
  if (T6 != YPfalse) {
    T2 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(1),sx_);
    T1 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),sy_);
    CALL2(FREEREF(3),T2,T1);
    T5 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),sx_);
    T4 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),sy_);
    a1 = T5;
    a2 = T4;
    sx_ = a1;
    sy_ = a2;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_do2_152) {
  ARG(y_, 0);
  ARG(x_, 1);
  ARG(f_, 2);
  P lopF759;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = FUNSHELL(1,fun_lop_151,4);
  lopF759 = T4;
  FUNINIT(lopF759, 4,y_,x_,lopF759,f_);
  T3 = CALL1(CHKREF(YruntimeYini_state),x_);
  T2 = CALL1(CHKREF(YruntimeYini_state),y_);
  T1 = KCALL2(lopF759,T3,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_lop_153) {
  ARG(sz_, 0);
  ARG(sy_, 1);
  ARG(sx_, 2);
  P tmpF761;
  P tmpF760;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T15 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(2),sx_);
  tmpF760 = T15;
  if (tmpF760 != YPfalse) {
    T10 = tmpF760;
  } else {
    T14 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),sy_);
    tmpF761 = T14;
    if (tmpF761 != YPfalse) {
      T12 = tmpF761;
    } else {
      T13 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),sz_);
      T12 = T13;
    }
    T11 = T12;
    T10 = T11;
  }
  T9 = T10;
  T8 = CALL1(CHKREF(Ynot),T9);
  if (T8 != YPfalse) {
    T3 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(2),sx_);
    T2 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(1),sy_);
    T1 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),sz_);
    CALL3(FREEREF(4),T3,T2,T1);
    T7 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(2),sx_);
    T6 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),sy_);
    T5 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),sz_);
    a1 = T7;
    a2 = T6;
    a3 = T5;
    sx_ = a1;
    sy_ = a2;
    sz_ = a3;
    goto loop;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_do3_154) {
  ARG(z_, 0);
  ARG(y_, 1);
  ARG(x_, 2);
  ARG(f_, 3);
  P lopF762;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T5 = FUNSHELL(1,fun_lop_153,5);
  lopF762 = T5;
  FUNINIT(lopF762, 5,z_,y_,x_,lopF762,f_);
  T4 = CALL1(CHKREF(YruntimeYini_state),x_);
  T3 = CALL1(CHKREF(YruntimeYini_state),y_);
  T2 = CALL1(CHKREF(YruntimeYini_state),z_);
  T1 = KCALL3(lopF762,T4,T3,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_con_155) {
  ARG(s_, 0);
  ARG(res_, 1);
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),s_);
  if (T9 != YPfalse) {
    T8 = CALL1(CHKREF(YruntimeYrevX),res_);
    T7 = CALL2(CHKREF(YruntimeYas_copy),FREEREF(0),T8);
    T0 = T7;
  } else {
    T6 = CALL2(CHKREF(YruntimeYnow_key),FREEREF(0),s_);
    T5 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),s_);
    T4 = CALL2(FREEREF(1),T6,T5);
    T3 = CALL2(CHKREF(YruntimeYadd),res_,T4);
    T2 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),s_);
    a1 = T3;
    a2 = T2;
    res_ = a1;
    s_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_map_keyed_156) {
  ARG(c_, 0);
  ARG(f_, 1);
  P conF763;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_con_155,3);
  conF763 = T3;
  FUNINIT(conF763, 3,c_,f_,conF763);
  T2 = CALL1(CHKREF(YruntimeYini_state),c_);
  T1 = KCALL2(conF763,Ynil,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_lop_157) {
  ARG(s_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),s_);
  T5 = CALL1(CHKREF(Ynot),T6);
  if (T5 != YPfalse) {
    T2 = CALL2(CHKREF(YruntimeYnow_key),FREEREF(0),s_);
    T1 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),s_);
    CALL2(FREEREF(2),T2,T1);
    T4 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),s_);
    a1 = T4;
    s_ = a1;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_do_keyed_158) {
  ARG(c_, 0);
  ARG(f_, 1);
  P lopF764;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_lop_157,3);
  lopF764 = T3;
  FUNINIT(lopF764, 3,c_,lopF764,f_);
  T2 = CALL1(CHKREF(YruntimeYini_state),c_);
  T1 = KCALL1(lopF764,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_159) {
  ARG(e_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYEE),e_,FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_memQ_160) {
  ARG(x_, 0);
  ARG(c_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = FUNFAB(fun_159,1,x_);
  T0 = CALL2(CHKREF(YruntimeYanyQ),T1,c_);
  RET(T0);
}

FUNCODEDEF(fun_161) {
  ARG(val_, 0);
  ARG(key_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(YruntimeYelt_setter),val_,FREEREF(0),key_);
  QRET(T0);
}

FUNCODEDEF(fun_fab_map_162) {
  ARG(key_vals_, 0);
  ARG(p_, 1);
  P xF765;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL1(CHKREF(YruntimeYlen),key_vals_);
  T4 = CALL2(CHKREF(YruntimeYtruncateS),T5,YPint((P)2));
  T3 = CALL1(CHKREF(YruntimeY1st),T4);
  T2 = CALL2(CHKREF(YruntimeYfab),p_,T3);
  xF765 = T2;
  T1 = FUNFAB(fun_161,1,xF765);
  CALL2(CHKREF(YruntimeYdo_key_vals),T1,key_vals_);
  T0 = xF765;
  QRET(T0);
}

FUNCODEDEF(fun_assocs_test_163) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYassocs_test));
  QRET(T0);
}

FUNCODEDEF(fun_assocs_test_setter_164) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYassocs_test));
  QRET(T0);
}

FUNCODEDEF(fun_165) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(YmacrosYEE));
}

FUNCODEDEF(fun_assocs_keys_166) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYassocs_keys));
  QRET(T0);
}

FUNCODEDEF(fun_assocs_keys_setter_167) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYassocs_keys));
  QRET(T0);
}

FUNCODEDEF(fun_168) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_assocs_vals_169) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYassocs_vals));
  QRET(T0);
}

FUNCODEDEF(fun_assocs_vals_setter_170) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYassocs_vals));
  QRET(T0);
}

FUNCODEDEF(fun_171) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_fab_172) {
  ARG(s_, 0);
  ARG(c_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLassocsG),Ynil);
  T0 = CALL3(CHKREF(YPisa),T1,Ynil,Ynil);
  RET(T0);
}

FUNCODEDEF(fun_len_173) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeYassocs_keys),x_);
  T0 = CALL1(CHKREF(YruntimeYlen),T1);
  RET(T0);
}

FUNCODEDEF(fun_fnd_174) {
  ARG(vals_, 0);
  ARG(keys_, 1);
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL2(CHKREF(YmacrosYEE),keys_,Ynil);
  if (T9 != YPfalse) {
    T0 = CHKREF(Ynul);
  } else {
    T8 = CALL1(CHKREF(YruntimeYassocs_test),FREEREF(2));
    T7 = CALL1(CHKREF(Yhead),keys_);
    T6 = CALL2(T8,FREEREF(1),T7);
    if (T6 != YPfalse) {
      T5 = CALL1(CHKREF(Yhead),vals_);
      T1 = T5;
    } else {
      T4 = CALL1(CHKREF(Ytail),keys_);
      T3 = CALL1(CHKREF(Ytail),vals_);
      a1 = T4;
      a2 = T3;
      keys_ = a1;
      vals_ = a2;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_elt_175) {
  ARG(key_, 0);
  ARG(x_, 1);
  P fndF766;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = FUNSHELL(1,fun_fnd_174,3);
  fndF766 = T4;
  FUNINIT(fndF766, 3,fndF766,key_,x_);
  T3 = CALL1(CHKREF(YruntimeYassocs_keys),x_);
  T2 = CALL1(CHKREF(YruntimeYassocs_vals),x_);
  T1 = CALL2(fndF766,T3,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_fnd_176) {
  ARG(vals_, 0);
  ARG(keys_, 1);
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = CALL2(CHKREF(YmacrosYEE),keys_,Ynil);
  if (T13 != YPfalse) {
    T10 = CALL1(CHKREF(YruntimeYassocs_keys),FREEREF(3));
    T9 = CALL2(CHKREF(YmacrosYpair),FREEREF(2),T10);
    CALL2(CHKREF(YruntimeYassocs_keys_setter),T9,FREEREF(3));
    T12 = CALL1(CHKREF(YruntimeYassocs_vals),FREEREF(3));
    T11 = CALL2(CHKREF(YmacrosYpair),FREEREF(1),T12);
    CALL2(CHKREF(YruntimeYassocs_vals_setter),T11,FREEREF(3));
    T0 = FREEREF(1);
  } else {
    T8 = CALL1(CHKREF(YruntimeYassocs_test),FREEREF(3));
    T7 = CALL1(CHKREF(Yhead),keys_);
    T6 = CALL2(T8,FREEREF(2),T7);
    if (T6 != YPfalse) {
      T5 = CALL2(CHKREF(Yhead_setter),FREEREF(1),vals_);
      T1 = T5;
    } else {
      T4 = CALL1(CHKREF(Ytail),keys_);
      T3 = CALL1(CHKREF(Ytail),vals_);
      a1 = T4;
      a2 = T3;
      keys_ = a1;
      vals_ = a2;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_177) {
  ARG(key_, 0);
  ARG(x_, 1);
  ARG(val_, 2);
  P fndF767;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = FUNSHELL(1,fun_fnd_176,4);
  fndF767 = T4;
  FUNINIT(fndF767, 4,fndF767,val_,key_,x_);
  T3 = CALL1(CHKREF(YruntimeYassocs_keys),x_);
  T2 = CALL1(CHKREF(YruntimeYassocs_vals),x_);
  T1 = CALL2(fndF767,T3,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_as_178) {
  ARG(s_, 0);
  ARG(d_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(YruntimeYlen),s_);
  T1 = CALL2(CHKREF(YruntimeYfab),d_,T2);
  T0 = CALL2(CHKREF(YruntimeYalter),T1,s_);
  RET(T0);
}

FUNCODEDEF(fun_keys_179) {
  ARG(d_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeYlen),d_);
  T0 = CALL2(CHKREF(YruntimeYfrom_below),YPint((P)0),T1);
  RET(T0);
}

FUNCODEDEF(fun_in_180) {
  ARG(ss_, 0);
  ARG(ds_, 1);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),ds_);
  if (T7 != YPfalse) {
    T5 = YPtrue;
  } else {
    T6 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),ss_);
    T5 = T6;
  }
  if (T5 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T1 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),ss_);
    CALL3(CHKREF(YruntimeYnow_elt_setter),T1,FREEREF(1),ds_);
    T4 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),ds_);
    T3 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),ss_);
    a1 = T4;
    a2 = T3;
    ds_ = a1;
    ss_ = a2;
    goto loop;
    T0 = T2;
  }
  QRET(T0);
}

FUNCODEDEF(fun_alter_181) {
  ARG(src_, 0);
  ARG(dst_, 1);
  P inF768;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = FUNSHELL(1,fun_in_180,3);
  inF768 = T4;
  FUNINIT(inF768, 3,src_,dst_,inF768);
  T3 = CALL1(CHKREF(YruntimeYini_state),dst_);
  T2 = CALL1(CHKREF(YruntimeYini_state),src_);
  T1 = KCALL2(inF768,T3,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YruntimeYrange_error) {
  ARG(i_, 0);
  ARG(x_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yerror),CHKREF(lit_202),x_,i_);
  QRET(T0);
}

FUNCODEDEF(YruntimeYrange_check) {
  ARG(i_, 0);
  ARG(x_, 1);
  P tmpF769;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = CALL2(CHKREF(YruntimeYL),i_,YPint((P)0));
  tmpF769 = T6;
  if (tmpF769 != YPfalse) {
    T3 = tmpF769;
  } else {
    T5 = CALL1(CHKREF(YruntimeYlen),x_);
    T4 = CALL2(CHKREF(YruntimeYGE),i_,T5);
    T3 = T4;
  }
  T2 = T3;
  if (T2 != YPfalse) {
    T1 = CALL2(CHKREF(YruntimeYrange_error),x_,i_);
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_1st_184) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYelt),x_,YPint((P)0));
  QRET(T0);
}

FUNCODEDEF(fun_2nd_185) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYelt),x_,YPint((P)1));
  QRET(T0);
}

FUNCODEDEF(fun_3rd_186) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYelt),x_,YPint((P)2));
  QRET(T0);
}

FUNCODEDEF(fun_last_187) {
  ARG(x_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(YruntimeYlen),x_);
  T1 = CALL2(CHKREF(YruntimeY_),T2,YPint((P)1));
  T0 = CALL2(CHKREF(YruntimeYelt),x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_add_new_188) {
  ARG(x_, 0);
  ARG(c_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL2(CHKREF(YruntimeYmemQ),c_,x_);
  T1 = CALL1(CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T0 = CALL2(CHKREF(YruntimeYadd),c_,x_);
  } else {
  }
  RET(c_);
}

FUNCODEDEF(fun_addX_189) {
  ARG(x_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YruntimeYadd),c_,x_);
  RET(T0);
}

FUNCODEDEF(fun_pos_190) {
  ARG(v_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YruntimeYcurry),CHKREF(YmacrosYEE),v_);
  T0 = CALL2(CHKREF(YruntimeYfind_key),T1,x_);
  QRET(T0);
}

FUNCODEDEF(fun_in_191) {
  ARG(ss_, 0);
  ARG(ds_, 1);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),ds_);
  if (T7 != YPfalse) {
    T5 = YPtrue;
  } else {
    T6 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),ss_);
    T5 = T6;
  }
  if (T5 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T1 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),ss_);
    CALL3(CHKREF(YruntimeYnow_elt_setter),T1,FREEREF(1),ds_);
    T4 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),ds_);
    T3 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),ss_);
    a1 = T4;
    a2 = T3;
    ds_ = a1;
    ss_ = a2;
    goto loop;
    T0 = T2;
  }
  QRET(T0);
}

FUNCODEDEF(fun_into_192) {
  ARG(below_, 0);
  ARG(from_, 1);
  ARG(src_, 2);
  ARG(dst_, 3);
  P inF770;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = FUNSHELL(1,fun_in_191,3);
  inF770 = T4;
  FUNINIT(inF770, 3,src_,dst_,inF770);
  T3 = CALL1(CHKREF(YruntimeYini_state),dst_);
  T2 = CALL1(CHKREF(YruntimeYini_state),src_);
  T1 = KCALL2(inF770,T3,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_onto_193) {
  ARG(i_, 0);
  ARG(ds_, 1);
  ARG(nds_, 2);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T6 = CALL2(CHKREF(YruntimeYE),i_,FREEREF(3));
  if (T6 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T1 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),ds_);
    CALL3(CHKREF(YruntimeYnow_elt_setter),T1,FREEREF(1),nds_);
    T5 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),nds_);
    T4 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),ds_);
    T3 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T5;
    a2 = T4;
    a3 = T3;
    nds_ = a1;
    ds_ = a2;
    i_ = a3;
    goto loop;
    T0 = T2;
  }
  QRET(T0);
}

FUNCODEDEF(fun_skip_194) {
  ARG(i_, 0);
  ARG(ds_, 1);
  P ontoF771;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL2(CHKREF(YruntimeYE),i_,FREEREF(4));
  if (T7 != YPfalse) {
    T6 = FUNSHELL(1,fun_onto_193,4);
    ontoF771 = T6;
    FUNINIT(ontoF771, 4,FREEREF(0),FREEREF(3),ontoF771,FREEREF(2));
    T5 = KCALL3(ontoF771,FREEREF(5),ds_,FREEREF(4));
    T4 = T5;
    T0 = T4;
  } else {
    T3 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),ds_);
    T2 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T3;
    a2 = T2;
    ds_ = a1;
    i_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_insert_195) {
  ARG(ss_, 0);
  ARG(nds_, 1);
  P skipF772;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),ss_);
  if (T8 != YPfalse) {
    T7 = FUNSHELL(1,fun_skip_194,6);
    skipF772 = T7;
    FUNINIT(skipF772, 6,FREEREF(5),skipF772,FREEREF(4),FREEREF(1),FREEREF(3),nds_);
    T6 = KCALL2(skipF772,FREEREF(7),FREEREF(6));
    T5 = T6;
    T0 = T5;
  } else {
    T1 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),ss_);
    CALL3(CHKREF(YruntimeYnow_elt_setter),T1,FREEREF(1),nds_);
    T4 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),nds_);
    T3 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),ss_);
    a1 = T4;
    a2 = T3;
    nds_ = a1;
    ss_ = a2;
    goto loop;
    T0 = T2;
  }
  QRET(T0);
}

FUNCODEDEF(fun_copy_196) {
  ARG(i_, 0);
  ARG(ds_, 1);
  ARG(nds_, 2);
  P insertF773;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T10 = CALL2(CHKREF(YruntimeYE),i_,FREEREF(3));
  if (T10 != YPfalse) {
    T9 = FUNSHELL(1,fun_insert_195,8);
    insertF773 = T9;
    FUNINIT(insertF773, 8,FREEREF(6),FREEREF(1),insertF773,FREEREF(5),FREEREF(4),FREEREF(0),FREEREF(3),ds_);
    T8 = CALL1(CHKREF(YruntimeYini_state),FREEREF(6));
    T7 = KCALL2(insertF773,nds_,T8);
    T6 = T7;
    T0 = T6;
  } else {
    T1 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),ds_);
    CALL3(CHKREF(YruntimeYnow_elt_setter),T1,FREEREF(1),nds_);
    T5 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),nds_);
    T4 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),ds_);
    T3 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T5;
    a2 = T4;
    a3 = T3;
    nds_ = a1;
    ds_ = a2;
    i_ = a3;
    goto loop;
    T0 = T2;
  }
  QRET(T0);
}

FUNCODEDEF(fun_in_197) {
  ARG(ss_, 0);
  ARG(ds_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),ss_);
  if (T5 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T1 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),ss_);
    CALL3(CHKREF(YruntimeYnow_elt_setter),T1,FREEREF(1),ds_);
    T4 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),ds_);
    T3 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),ss_);
    a1 = T4;
    a2 = T3;
    ds_ = a1;
    ss_ = a2;
    goto loop;
    T0 = T2;
  }
  QRET(T0);
}

FUNCODEDEF(fun_find_198) {
  ARG(i_, 0);
  ARG(ds_, 1);
  P inF774;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL2(CHKREF(YruntimeYE),i_,FREEREF(3));
  if (T8 != YPfalse) {
    T7 = FUNSHELL(1,fun_in_197,3);
    inF774 = T7;
    FUNINIT(inF774, 3,FREEREF(2),FREEREF(0),inF774);
    T6 = CALL1(CHKREF(YruntimeYini_state),FREEREF(2));
    T5 = KCALL2(inF774,ds_,T6);
    T4 = T5;
    T0 = T4;
  } else {
    T3 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),ds_);
    T2 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T3;
    a2 = T2;
    ds_ = a1;
    i_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_sub_setter_199) {
  ARG(below_, 0);
  ARG(from_, 1);
  ARG(dst_, 2);
  ARG(src_, 3);
  P findF781;
  P copyF780;
  P ndstF779;
  P new_lenF778;
  P del_lenF777;
  P src_lenF776;
  P dst_lenF775;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T21 = CALL1(CHKREF(YruntimeYlen),dst_);
  check_type(T21,CHKREF(YLintG));
  dst_lenF775 = T21;
  T20 = CALL1(CHKREF(YruntimeYlen),src_);
  check_type(T20,CHKREF(YLintG));
  src_lenF776 = T20;
  T19 = CALL2(CHKREF(YruntimeY_),below_,from_);
  check_type(T19,CHKREF(YLintG));
  del_lenF777 = T19;
  T18 = CALL2(CHKREF(YruntimeYE),del_lenF777,src_lenF776);
  if (T18 != YPfalse) {
    T17 = FUNSHELL(1,fun_find_198,4);
    findF781 = T17;
    FUNINIT(findF781, 4,dst_,findF781,src_,from_);
    T16 = CALL1(CHKREF(YruntimeYini_state),dst_);
    T15 = KCALL2(findF781,T16,YPint((P)0));
    T14 = T15;
    T3 = T14;
  } else {
    T13 = CALL2(CHKREF(YruntimeY_),dst_lenF775,del_lenF777);
    T12 = CALL2(CHKREF(YruntimeYA),T13,src_lenF776);
    new_lenF778 = T12;
    T11 = CALL2(CHKREF(YruntimeYfab),dst_,new_lenF778);
    ndstF779 = T11;
    T10 = FUNSHELL(1,fun_copy_196,7);
    copyF780 = T10;
    FUNINIT(copyF780, 7,dst_,ndstF779,copyF780,from_,dst_lenF775,below_,src_);
    T9 = CALL1(CHKREF(YruntimeYini_state),ndstF779);
    T8 = CALL1(CHKREF(YruntimeYini_state),dst_);
    T7 = KCALL3(copyF780,T9,T8,YPint((P)0));
    T6 = T7;
    T5 = T6;
    T4 = T5;
    T3 = T4;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_con_200) {
  ARG(sta_, 0);
  ARG(seq_, 1);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),sta_);
  if (T6 != YPfalse) {
    T5 = CALL2(CHKREF(YruntimeYas_copy),FREEREF(0),seq_);
    T0 = T5;
  } else {
    T4 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),sta_);
    T3 = CALL2(CHKREF(YruntimeYadd),seq_,T4);
    T2 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),sta_);
    a1 = T3;
    a2 = T2;
    seq_ = a1;
    sta_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_rev_201) {
  ARG(x_, 0);
  P conF782;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = FUNSHELL(1,fun_con_200,2);
  conF782 = T3;
  FUNINIT(conF782, 2,x_,conF782);
  T2 = CALL1(CHKREF(YruntimeYini_state),x_);
  T1 = KCALL2(conF782,Ynil,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_con_y_202) {
  ARG(sta_, 0);
  ARG(seq_, 1);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),sta_);
  if (T7 != YPfalse) {
    T6 = CALL1(CHKREF(YruntimeYrevX),seq_);
    T5 = CALL2(CHKREF(YruntimeYas_copy),FREEREF(2),T6);
    T0 = T5;
  } else {
    T4 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),sta_);
    T3 = CALL2(CHKREF(YruntimeYadd),seq_,T4);
    T2 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),sta_);
    a1 = T3;
    a2 = T2;
    seq_ = a1;
    sta_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_con_x_203) {
  ARG(sta_, 0);
  ARG(seq_, 1);
  P con_yF783;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),sta_);
  if (T9 != YPfalse) {
    T8 = FUNSHELL(1,fun_con_y_202,3);
    con_yF783 = T8;
    FUNINIT(con_yF783, 3,FREEREF(2),con_yF783,FREEREF(0));
    T7 = CALL1(CHKREF(YruntimeYini_state),FREEREF(2));
    T6 = KCALL2(con_yF783,seq_,T7);
    T5 = T6;
    T0 = T5;
  } else {
    T4 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),sta_);
    T3 = CALL2(CHKREF(YruntimeYadd),seq_,T4);
    T2 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),sta_);
    a1 = T3;
    a2 = T2;
    seq_ = a1;
    sta_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_cat2_204) {
  ARG(y_, 0);
  ARG(x_, 1);
  P con_xF784;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_con_x_203,3);
  con_xF784 = T3;
  FUNINIT(con_xF784, 3,x_,con_xF784,y_);
  T2 = CALL1(CHKREF(YruntimeYini_state),x_);
  T1 = KCALL2(con_xF784,Ynil,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_cat_205) {
  ARG(ss_, 0);
  ARG(x_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(YruntimeYreduce),CHKREF(YruntimeYcat2),x_,ss_);
  RET(T0);
}

FUNCODEDEF(fun_catX_206) {
  ARG(more_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YmacrosYpair),x_,more_);
  T0 = CALL2(CHKREF(Yapply),CHKREF(YmacrosYcat),T1);
  RET(T0);
}

FUNCODEDEF(fun_find_tail_207) {
  ARG(p_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL1(CHKREF(Ytail),p_);
  T5 = CALL1(CHKREF(YmacrosYemptyQ),T6);
  if (T5 != YPfalse) {
    CALL2(CHKREF(Ytail_setter),FREEREF(2),p_);
    T4 = CALL1(CHKREF(Ytail),FREEREF(1));
    T3 = CALL2(FREEREF(3),FREEREF(2),T4);
    T0 = T3;
  } else {
    T2 = CALL1(CHKREF(Ytail),p_);
    a1 = T2;
    p_ = a1;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_connect_208) {
  ARG(more_, 0);
  ARG(p_, 1);
  P find_tailF786;
  P xF785;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = CALL1(CHKREF(YmacrosYemptyQ),more_);
  if (T11 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T10 = CALL1(CHKREF(Yhead),more_);
    T9 = CALL2(CHKREF(YruntimeYas),CHKREF(YLlstG),T10);
    xF785 = T9;
    T8 = CALL1(CHKREF(YmacrosYemptyQ),xF785);
    if (T8 != YPfalse) {
      T7 = CALL1(CHKREF(Ytail),more_);
      a1 = p_;
      a2 = T7;
      p_ = a1;
      more_ = a2;
      goto loop;
      T2 = T6;
    } else {
      T5 = FUNSHELL(1,fun_find_tail_207,4);
      find_tailF786 = T5;
      FUNINIT(find_tailF786, 4,find_tailF786,more_,xF785,FREEREF(0));
      T4 = CALL1(find_tailF786,p_);
      T3 = T4;
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_find_result_209) {
  ARG(more_, 0);
  ARG(r_, 1);
  P connectF787;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YmacrosYemptyQ),more_);
  if (T10 != YPfalse) {
    T0 = r_;
  } else {
    T9 = CALL1(CHKREF(YmacrosYemptyQ),r_);
    if (T9 != YPfalse) {
      T8 = CALL1(CHKREF(Yhead),more_);
      T7 = CALL2(CHKREF(YruntimeYas),CHKREF(YLlstG),T8);
      T6 = CALL1(CHKREF(Ytail),more_);
      a1 = T7;
      a2 = T6;
      r_ = a1;
      more_ = a2;
      goto loop;
      T1 = T5;
    } else {
      T4 = FUNSHELL(1,fun_connect_208,2);
      connectF787 = T4;
      FUNINIT(connectF787, 2,connectF787,r_);
      T3 = CALL2(connectF787,r_,more_);
      T2 = T3;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_catX_210) {
  ARG(more_, 0);
  ARG(x_, 1);
  P find_resultF788;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_find_result_209,1);
  find_resultF788 = T2;
  FUNINIT(find_resultF788, 1,find_resultF788);
  T1 = CALL2(find_resultF788,x_,more_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_con_x_211) {
  ARG(sta_, 0);
  ARG(i_, 1);
  ARG(seq_, 2);
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T12 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),sta_);
  if (T12 != YPfalse) {
    T11 = CALL1(CHKREF(YruntimeYrevX),seq_);
    T10 = CALL2(CHKREF(YruntimeYas_copy),FREEREF(0),T11);
    T0 = T10;
  } else {
    T9 = CALL2(CHKREF(YruntimeYGE),i_,FREEREF(2));
    if (T9 != YPfalse) {
      T8 = CALL2(CHKREF(YruntimeYL),i_,FREEREF(1));
      T7 = T8;
    } else {
      T7 = YPfalse;
    }
    if (T7 != YPfalse) {
      T6 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),sta_);
      T5 = CALL2(CHKREF(YruntimeYadd),seq_,T6);
      T4 = T5;
    } else {
      T4 = seq_;
    }
    T3 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    T2 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),sta_);
    a1 = T4;
    a2 = T3;
    a3 = T2;
    seq_ = a1;
    i_ = a2;
    sta_ = a3;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_sub_212) {
  ARG(below_, 0);
  ARG(from_, 1);
  ARG(x_, 2);
  P con_xF789;
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = FUNSHELL(1,fun_con_x_211,4);
  con_xF789 = T3;
  FUNINIT(con_xF789, 4,x_,below_,from_,con_xF789);
  T2 = CALL1(CHKREF(YruntimeYini_state),x_);
  T1 = CALL3(con_xF789,Ynil,YPint((P)0),T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_con_213) {
  ARG(sta_, 0);
  ARG(seq_, 1);
  P eF790;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),sta_);
  if (T9 != YPfalse) {
    T8 = CALL2(CHKREF(YruntimeYas_copy),FREEREF(0),seq_);
    T0 = T8;
  } else {
    T7 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),sta_);
    eF790 = T7;
    T6 = CALL1(FREEREF(1),eF790);
    if (T6 != YPfalse) {
      T5 = CALL2(CHKREF(YruntimeYadd),seq_,eF790);
      T4 = T5;
    } else {
      T4 = seq_;
    }
    T3 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),sta_);
    a1 = T4;
    a2 = T3;
    seq_ = a1;
    sta_ = a2;
    goto loop;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_pick_214) {
  ARG(x_, 0);
  ARG(test_, 1);
  P conF791;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_con_213,3);
  conF791 = T3;
  FUNINIT(conF791, 3,x_,test_,conF791);
  T2 = CALL1(CHKREF(YruntimeYini_state),x_);
  T1 = KCALL2(conF791,Ynil,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_215) {
  ARG(e_, 0);
  ARG(s_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL2(CHKREF(YruntimeYmemQ),s_,e_);
  if (T2 != YPfalse) {
    T0 = s_;
  } else {
    T1 = CALL2(CHKREF(YmacrosYpair),e_,s_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_del_dups_216) {
  ARG(x_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = fun_215;
  T2 = CALL3(CHKREF(YruntimeYreduce),T3,Ynil,x_);
  T1 = CALL1(CHKREF(YruntimeYrevX),T2);
  T0 = CALL2(CHKREF(YruntimeYas_copy),x_,T1);
  RET(T0);
}

FUNCODEDEF(fun_217) {
  ARG(e_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYNEE),e_,FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_del_218) {
  ARG(x_, 0);
  ARG(s_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = FUNFAB(fun_217,1,x_);
  T0 = CALL2(CHKREF(YruntimeYpick),T1,s_);
  RET(T0);
}

FUNCODEDEF(fun_219) {
  ARG(e_, 0);
  ARG(s_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = CALL1(CHKREF(YmacrosYemptyQ),s_);
  if (T3 != YPfalse) {
    T2 = CHKREF(lit_13);
  } else {
    T2 = CHKREF(lit_240);
  }
  T1 = CALL1(CHKREF(YruntimeYto_str),e_);
  T0 = CALL3(CHKREF(YmacrosYcat),s_,T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_vals_to_str_220) {
  ARG(s_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = fun_219;
  T0 = CALL3(CHKREF(YruntimeYreduce),T1,CHKREF(lit_13),s_);
  RET(T0);
}

FUNCODEDEF(fun_to_str_221) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeYvals_to_str),x_);
  T0 = CALL3(CHKREF(YmacrosYcat),CHKREF(lit_242),T1,CHKREF(lit_241));
  RET(T0);
}

FUNCODEDEF(fun_pair_222) {
  ARG(t_, 0);
  ARG(h_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPpair(CHKREF(YLlstG),Ynil);
  T4 = (P)YPpair(CHKREF(Ytail),Ynil);
  T3 = (P)YPpair(CHKREF(Yhead),T4);
  T2 = (P)YPpair(t_,Ynil);
  T1 = (P)YPpair(h_,T2);
  T0 = CALL3(CHKREF(YPisa),T5,T3,T1);
  QRET(T0);
}

FUNCODEDEF(fun_empty_223) {
  ARG(c_, 0);
  P a1;
loop:
  RET(Ynil);
}

FUNCODEDEF(fun_emptyQ_224) {
  ARG(c_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(Yobject_class),c_);
  T1 = CALL1(CHKREF(YruntimeYempty),T2);
  T0 = CALL2(CHKREF(YmacrosYEE),c_,T1);
  RET(T0);
}

FUNCODEDEF(fun_fab_225) {
  ARG(res_, 0);
  ARG(i_, 1);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL2(CHKREF(YruntimeYG),i_,YPint((P)0));
  if (T7 != YPfalse) {
    T6 = CALL2(CHKREF(YruntimeY_),i_,YPint((P)1));
    T5 = (P)YPpair(FREEREF(0),Ynil);
    T4 = (P)YPpair(CHKREF(Ytail),Ynil);
    T3 = (P)YPpair(res_,Ynil);
    T2 = CALL3(CHKREF(YPisa),T5,T4,T3);
    a1 = T6;
    a2 = T2;
    i_ = a1;
    res_ = a2;
    goto loop;
    T0 = T1;
  } else {
    T0 = res_;
  }
  QRET(T0);
}

FUNCODEDEF(fun_fab_226) {
  ARG(s_, 0);
  ARG(t_, 1);
  P fabF792;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_fab_225,2);
  fabF792 = T3;
  FUNINIT(fabF792, 2,t_,fabF792);
  T2 = CALL1(CHKREF(YruntimeYempty),t_);
  T1 = CALL2(fabF792,s_,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_as_227) {
  ARG(x_, 0);
  ARG(p_, 1);
  P a1,a2;
loop:
  RET(x_);
}

FUNCODEDEF(fun_build_228) {
  ARG(result_, 0);
  ARG(index_, 1);
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL2(CHKREF(YruntimeYL),index_,YPint((P)0));
  if (T10 != YPfalse) {
    T0 = result_;
  } else {
    T9 = CALL2(CHKREF(YruntimeY_),index_,YPint((P)1));
    T8 = (P)YPpair(FREEREF(1),Ynil);
    T7 = (P)YPpair(CHKREF(Ytail),Ynil);
    T6 = (P)YPpair(CHKREF(Yhead),T7);
    T5 = CALL2(CHKREF(YruntimeYelt),FREEREF(0),index_);
    T4 = (P)YPpair(result_,Ynil);
    T3 = (P)YPpair(T5,T4);
    T2 = CALL3(CHKREF(YPisa),T8,T6,T3);
    a1 = T9;
    a2 = T2;
    index_ = a1;
    result_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_fabs_229) {
  ARG(objects_, 0);
  ARG(c_, 1);
  P buildF793;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = FUNSHELL(1,fun_build_228,3);
  buildF793 = T5;
  FUNINIT(buildF793, 3,objects_,c_,buildF793);
  T4 = CALL1(CHKREF(YruntimeYlen),objects_);
  T3 = CALL2(CHKREF(YruntimeY_),T4,YPint((P)1));
  T2 = CALL1(CHKREF(YruntimeYempty),c_);
  T1 = CALL2(buildF793,T3,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_lst_230) {
  ARG(objects_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YmacrosYpair),CHKREF(YLlstG),objects_);
  T0 = CALL2(CHKREF(Yapply),CHKREF(YruntimeYfabs),T1);
  QRET(T0);
}

FUNCODEDEF(fun_sum_231) {
  ARG(x_, 0);
  ARG(count_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YmacrosYemptyQ),x_);
  if (T4 != YPfalse) {
    T0 = count_;
  } else {
    T3 = CALL2(CHKREF(YruntimeYA),count_,YPint((P)1));
    T2 = CALL1(CHKREF(Ytail),x_);
    a1 = T3;
    a2 = T2;
    count_ = a1;
    x_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_len_232) {
  ARG(x_, 0);
  P sumF794;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_sum_231,1);
  sumF794 = T2;
  FUNINIT(sumF794, 1,sumF794);
  T1 = CALL2(sumF794,YPint((P)0),x_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_fnd_233) {
  ARG(x_, 0);
  ARG(count_, 1);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL1(CHKREF(YmacrosYemptyQ),x_);
  if (T7 != YPfalse) {
    T0 = CHKREF(Ynul);
  } else {
    T6 = CALL2(CHKREF(YmacrosYEE),count_,FREEREF(1));
    if (T6 != YPfalse) {
      T5 = CALL1(CHKREF(Yhead),x_);
      T1 = T5;
    } else {
      T4 = CALL2(CHKREF(YruntimeYA),count_,YPint((P)1));
      T3 = CALL1(CHKREF(Ytail),x_);
      a1 = T4;
      a2 = T3;
      count_ = a1;
      x_ = a2;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_elt_234) {
  ARG(key_, 0);
  ARG(x_, 1);
  P fndF795;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_fnd_233,2);
  fndF795 = T2;
  FUNINIT(fndF795, 2,fndF795,key_);
  T1 = CALL2(fndF795,YPint((P)0),x_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_fnd_235) {
  ARG(x_, 0);
  ARG(count_, 1);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL1(CHKREF(YmacrosYemptyQ),x_);
  if (T7 != YPfalse) {
    T0 = CHKREF(Ynul);
  } else {
    T6 = CALL2(CHKREF(YmacrosYEE),count_,FREEREF(2));
    if (T6 != YPfalse) {
      T5 = CALL2(CHKREF(Yhead_setter),FREEREF(1),x_);
      T1 = T5;
    } else {
      T4 = CALL2(CHKREF(YruntimeYA),count_,YPint((P)1));
      T3 = CALL1(CHKREF(Ytail),x_);
      a1 = T4;
      a2 = T3;
      count_ = a1;
      x_ = a2;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_236) {
  ARG(key_, 0);
  ARG(x_, 1);
  ARG(z_, 2);
  P fndF796;
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = FUNSHELL(1,fun_fnd_235,3);
  fndF796 = T2;
  FUNINIT(fndF796, 3,fndF796,z_,key_);
  T1 = CALL2(fndF796,YPint((P)0),x_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_add_237) {
  ARG(x_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YmacrosYpair),x_,c_);
  RET(T0);
}

FUNCODEDEF(fun_push_238) {
  ARG(x_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YmacrosYpair),x_,c_);
  RET(T0);
}

FUNCODEDEF(fun_pop_239) {
  ARG(c_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(Ytail),c_);
  T1 = CALL1(CHKREF(Yhead),c_);
  T0 = CALL2(CHKREF(YmacrosYtup),T2,T1);
  RET(T0);
}

FUNCODEDEF(fun_loop_240) {
  ARG(r_, 0);
  ARG(l_, 1);
  P tF797;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YmacrosYemptyQ),l_);
  if (T4 != YPfalse) {
    T0 = r_;
  } else {
    T3 = CALL1(CHKREF(Ytail),l_);
    tF797 = T3;
    CALL2(CHKREF(Ytail_setter),r_,l_);
    a1 = tF797;
    a2 = l_;
    l_ = a1;
    r_ = a2;
    goto loop;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_revX_241) {
  ARG(c_, 0);
  P loopF798;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = FUNSHELL(1,fun_loop_240,1);
  loopF798 = T4;
  FUNINIT(loopF798, 1,loopF798);
  T3 = CALL1(CHKREF(Yobject_class),c_);
  T2 = CALL1(CHKREF(YruntimeYempty),T3);
  T1 = KCALL2(loopF798,c_,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_assq_242) {
  ARG(l_, 0);
  ARG(x_, 1);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL1(CHKREF(YmacrosYemptyQ),l_);
  if (T8 != YPfalse) {
    T0 = YPfalse;
  } else {
    T7 = CALL1(CHKREF(Yhead),l_);
    T6 = CALL1(CHKREF(Yhead),T7);
    T5 = CALL2(CHKREF(YmacrosYEE),x_,T6);
    if (T5 != YPfalse) {
      T4 = CALL1(CHKREF(Yhead),l_);
      T1 = T4;
    } else {
      T3 = CALL1(CHKREF(Ytail),l_);
      T2 = CALL2(CHKREF(YruntimeYassq),x_,T3);
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_assqn_243) {
  ARG(pos_, 0);
  ARG(l_, 1);
  ARG(x_, 2);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T8 = CALL1(CHKREF(YmacrosYemptyQ),l_);
  if (T8 != YPfalse) {
    T0 = YPfalse;
  } else {
    T7 = CALL1(CHKREF(Yhead),l_);
    T6 = CALL2(CHKREF(YruntimeYelt),T7,pos_);
    T5 = CALL2(CHKREF(YmacrosYEE),x_,T6);
    if (T5 != YPfalse) {
      T4 = CALL1(CHKREF(Yhead),l_);
      T1 = T4;
    } else {
      T3 = CALL1(CHKREF(Ytail),l_);
      T2 = CALL3(CHKREF(YruntimeYassqn),x_,T3,pos_);
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_fnd_244) {
  ARG(px_, 0);
  ARG(x_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YmacrosYemptyQ),x_);
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(Yhead),px_);
    T0 = T3;
  } else {
    T2 = CALL1(CHKREF(Ytail),x_);
    a1 = T2;
    a2 = x_;
    x_ = a1;
    px_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_last_245) {
  ARG(x_, 0);
  P fndF799;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_fnd_244,1);
  fndF799 = T2;
  FUNINIT(fndF799, 1,fndF799);
  T1 = KCALL2(fndF799,x_,x_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ini_state_246) {
  ARG(c_, 0);
  P a1;
loop:
  RET(c_);
}

FUNCODEDEF(fun_fin_stateQ_247) {
  ARG(state_, 0);
  ARG(U_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(YmacrosYemptyQ),state_);
  RET(T0);
}

FUNCODEDEF(fun_nxt_state_248) {
  ARG(state_, 0);
  ARG(U_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(Ytail),state_);
  RET(T0);
}

FUNCODEDEF(fun_now_elt_249) {
  ARG(state_, 0);
  ARG(U_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(Yhead),state_);
  QRET(T0);
}

FUNCODEDEF(fun_now_elt_setter_250) {
  ARG(state_, 0);
  ARG(U_, 1);
  ARG(z_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL2(CHKREF(Yhead_setter),z_,state_);
  QRET(T0);
}

FUNCODEDEF(fun_fnd_251) {
  ARG(c_, 0);
  ARG(key_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),c_,FREEREF(1));
  if (T4 != YPfalse) {
    T0 = key_;
  } else {
    T3 = CALL2(CHKREF(YruntimeYA),key_,YPint((P)1));
    T2 = CALL1(CHKREF(Ytail),c_);
    a1 = T3;
    a2 = T2;
    key_ = a1;
    c_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_now_key_252) {
  ARG(state_, 0);
  ARG(c_, 1);
  P fndF800;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_fnd_251,2);
  fndF800 = T2;
  FUNINIT(fndF800, 2,fndF800,state_);
  T1 = CALL2(fndF800,YPint((P)0),c_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_copy_state_253) {
  ARG(state_, 0);
  ARG(U_, 1);
  P a1,a2;
loop:
  RET(state_);
}

FUNCODEDEF(fun_ini_state_254) {
  ARG(c_, 0);
  P a1;
loop:
  RET(YPint((P)0));
}

FUNCODEDEF(fun_fin_stateQ_255) {
  ARG(state_, 0);
  ARG(c_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YruntimeYlen),c_);
  T0 = CALL2(CHKREF(YmacrosYEE),state_,T1);
  RET(T0);
}

FUNCODEDEF(fun_nxt_state_256) {
  ARG(state_, 0);
  ARG(U_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YruntimeYA),state_,YPint((P)1));
  RET(T0);
}

FUNCODEDEF(fun_now_elt_257) {
  ARG(state_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YruntimeYlow_elt),c_,state_);
  QRET(T0);
}

FUNCODEDEF(fun_now_elt_setter_258) {
  ARG(state_, 0);
  ARG(c_, 1);
  ARG(z_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL3(CHKREF(YruntimeYlow_elt_setter),z_,c_,state_);
  QRET(T0);
}

FUNCODEDEF(fun_now_key_259) {
  ARG(state_, 0);
  ARG(U_, 1);
  P a1,a2;
loop:
  RET(state_);
}

FUNCODEDEF(fun_copy_state_260) {
  ARG(state_, 0);
  ARG(U_, 1);
  P a1,a2;
loop:
  RET(state_);
}

FUNCODEDEF(fun_empty_261) {
  ARG(c_, 0);
  P a1;
loop:
  RET(CHKREF(YPvnul));
}

FUNCODEDEF(YruntimeYvec) {
  ARG(objects_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLvecG),objects_);
  QRET(T0);
}

FUNCODEDEF(fun_fab_263) {
  ARG(s_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPiu(s_);
  T0 = (P)YPvec(T1);
  RET(T0);
}

FUNCODEDEF(fun_len_264) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPvlen(x_);
  T0 = (P)YPib(T1);
  RET(T0);
}

FUNCODEDEF(fun_low_elt_265) {
  ARG(i_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPvelt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_setter_266) {
  ARG(i_, 0);
  ARG(x_, 1);
  ARG(z_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPvelt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_elt_267) {
  ARG(i_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  CALL2(CHKREF(YruntimeYrange_check),x_,i_);
  T1 = (P)YPiu(i_);
  T0 = (P)YPvelt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_268) {
  ARG(i_, 0);
  ARG(x_, 1);
  ARG(z_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  CALL2(CHKREF(YruntimeYrange_check),x_,i_);
  T1 = (P)YPiu(i_);
  T0 = (P)YPvelt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_to_str_269) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeYvals_to_str),x_);
  T0 = CALL3(CHKREF(YmacrosYcat),CHKREF(lit_269),T1,CHKREF(lit_268));
  RET(T0);
}

FUNCODEDEF(fun_buf_len_270) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYbuf_len));
  QRET(T0);
}

FUNCODEDEF(fun_buf_len_setter_271) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYbuf_len));
  QRET(T0);
}

FUNCODEDEF(fun_272) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_buf_dat_273) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYbuf_dat));
  QRET(T0);
}

FUNCODEDEF(fun_buf_dat_setter_274) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYbuf_dat));
  QRET(T0);
}

FUNCODEDEF(fun_275) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_275));
}

FUNCODEDEF(fun_empty_276) {
  ARG(c_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPpair(CHKREF(YruntimeYLbufG),Ynil);
  T0 = CALL3(CHKREF(YPisa),T1,Ynil,Ynil);
  RET(T0);
}

FUNCODEDEF(fun_fab_277) {
  ARG(s_, 0);
  ARG(c_, 1);
  P datF801;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL1(CHKREF(YruntimeYpower_of_two_ceiling),s_);
  T7 = CALL2(CHKREF(YruntimeYfab),CHKREF(YLvecG),T8);
  datF801 = T7;
  T6 = (P)YPpair(CHKREF(YruntimeYLbufG),Ynil);
  T5 = (P)YPpair(CHKREF(YruntimeYbuf_dat),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYbuf_len),T5);
  T3 = (P)YPpair(datF801,Ynil);
  T2 = (P)YPpair(s_,T3);
  T1 = CALL3(CHKREF(YPisa),T6,T4,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_buf_278) {
  ARG(elts_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YmacrosYpair),CHKREF(YruntimeYLbufG),elts_);
  T0 = CALL2(CHKREF(Yapply),CHKREF(YruntimeYfabs),T1);
  RET(T0);
}

FUNCODEDEF(fun_len_279) {
  ARG(c_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeYbuf_len),c_);
  RET(T0);
}

FUNCODEDEF(fun_fill_280) {
  ARG(i_, 0);
  P tmpF803;
  P tmpF802;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL2(CHKREF(YruntimeYL),i_,FREEREF(0));
  tmpF802 = T7;
  if (tmpF802 != YPfalse) {
    T6 = CALL3(CHKREF(YruntimeYlow_elt_setter),CHKREF(Ynul),FREEREF(1),i_);
    tmpF803 = T6;
    if (tmpF803 != YPfalse) {
      T5 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
      a1 = T5;
      i_ = a1;
      goto loop;
      T3 = T4;
    } else {
      T3 = YPfalse;
    }
    T2 = T3;
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_len_setter_281) {
  ARG(c_, 0);
  ARG(new_len_, 1);
  P new_dataF807;
  P fillF806;
  P old_lenF805;
  P datF804;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
loop:
  T17 = CALL1(CHKREF(YruntimeYbuf_dat),c_);
  datF804 = T17;
  T16 = CALL1(CHKREF(YruntimeYlen),datF804);
  T15 = CALL2(CHKREF(YruntimeYG),new_len_,T16);
  if (T15 != YPfalse) {
    T14 = CALL1(CHKREF(YruntimeYpower_of_two_ceiling),new_len_);
    T13 = CALL2(CHKREF(YruntimeYfab),CHKREF(YLvecG),T14);
    new_dataF807 = T13;
    CALL2(CHKREF(YruntimeYalter),new_dataF807,datF804);
    CALL2(CHKREF(YruntimeYbuf_len_setter),new_len_,c_);
    T12 = CALL2(CHKREF(YruntimeYbuf_dat_setter),new_dataF807,c_);
    T11 = T12;
    T1 = T11;
  } else {
    T10 = CALL1(CHKREF(YruntimeYlen),c_);
    T9 = CALL2(CHKREF(YruntimeYL),new_len_,T10);
    if (T9 != YPfalse) {
      T8 = CALL1(CHKREF(YruntimeYlen),c_);
      old_lenF805 = T8;
      CALL2(CHKREF(YruntimeYbuf_len_setter),new_len_,c_);
      T7 = FUNSHELL(1,fun_fill_280,3);
      fillF806 = T7;
      FUNINIT(fillF806, 3,old_lenF805,datF804,fillF806);
      T6 = CALL1(fillF806,new_len_);
      T5 = T6;
      T4 = T5;
      T2 = T4;
    } else {
      T3 = CALL2(CHKREF(YruntimeYbuf_len_setter),new_len_,c_);
      T2 = T3;
    }
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_282) {
  ARG(i_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YruntimeYbuf_dat),x_);
  T0 = CALL2(CHKREF(YruntimeYlow_elt),T1,i_);
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_setter_283) {
  ARG(i_, 0);
  ARG(x_, 1);
  ARG(z_, 2);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = CALL1(CHKREF(YruntimeYlen),x_);
  T2 = CALL2(CHKREF(YruntimeYGE),i_,T3);
  if (T2 != YPfalse) {
    T1 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    T0 = CALL2(CHKREF(YruntimeYlen_setter),T1,x_);
  } else {
  }
  T5 = CALL1(CHKREF(YruntimeYbuf_dat),x_);
  T4 = CALL3(CHKREF(YruntimeYlow_elt_setter),z_,T5,i_);
  QRET(T4);
}

FUNCODEDEF(fun_elt_284) {
  ARG(i_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  CALL2(CHKREF(YruntimeYrange_check),c_,i_);
  T0 = CALL2(CHKREF(YruntimeYlow_elt),c_,i_);
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_285) {
  ARG(i_, 0);
  ARG(c_, 1);
  ARG(z_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T1 = CALL2(CHKREF(YruntimeYL),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = CALL2(CHKREF(YruntimeYrange_error),c_,i_);
  } else {
  }
  T2 = CALL3(CHKREF(YruntimeYlow_elt_setter),z_,c_,i_);
  QRET(T2);
}

FUNCODEDEF(fun_addX_286) {
  ARG(x_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(YruntimeYlen),c_);
  CALL3(CHKREF(YruntimeYlow_elt_setter),x_,c_,T0);
  RET(c_);
}

FUNCODEDEF(fun_push_lastX_287) {
  ARG(x_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YruntimeYaddX),c_,x_);
  RET(T0);
}

FUNCODEDEF(fun_pop_lastX_288) {
  ARG(c_, 0);
  P xF809;
  P new_lenF808;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL1(CHKREF(YruntimeYlen),c_);
  T3 = CALL2(CHKREF(YruntimeY_),T4,YPint((P)1));
  new_lenF808 = T3;
  T2 = CALL2(CHKREF(YruntimeYlow_elt),c_,new_lenF808);
  xF809 = T2;
  CALL2(CHKREF(YruntimeYlen_setter),new_lenF808,c_);
  T1 = xF809;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_inner_289) {
  ARG(sta_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),sta_);
  if (T6 != YPfalse) {
    T5 = CALL1(CHKREF(Ytail),FREEREF(3));
    T4 = KCALL1(FREEREF(4),T5);
    T0 = T4;
  } else {
    T1 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),sta_);
    CALL2(CHKREF(YruntimeYaddX),FREEREF(2),T1);
    T3 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),sta_);
    a1 = T3;
    sta_ = a1;
    goto loop;
    T0 = T2;
  }
  QRET(T0);
}

FUNCODEDEF(fun_outer_290) {
  ARG(more_, 0);
  P innerF811;
  P sF810;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(YmacrosYemptyQ),more_);
  if (T7 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T6 = CALL1(CHKREF(Yhead),more_);
    sF810 = T6;
    T5 = FUNSHELL(1,fun_inner_289,5);
    innerF811 = T5;
    FUNINIT(innerF811, 5,sF810,innerF811,FREEREF(1),more_,FREEREF(0));
    T4 = CALL1(CHKREF(YruntimeYini_state),sF810);
    T3 = KCALL1(innerF811,T4);
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_catX_291) {
  ARG(more_, 0);
  ARG(x_, 1);
  P outerF812;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_outer_290,2);
  outerF812 = T2;
  FUNINIT(outerF812, 2,outerF812,x_);
  T1 = KCALL1(outerF812,more_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_range_from_292) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYrange_from));
  QRET(T0);
}

FUNCODEDEF(fun_range_from_setter_293) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYrange_from));
  QRET(T0);
}

FUNCODEDEF(fun_294) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_range_to_295) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYrange_to));
  QRET(T0);
}

FUNCODEDEF(fun_range_to_setter_296) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYrange_to));
  QRET(T0);
}

FUNCODEDEF(fun_297) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_range_below_298) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYrange_below));
  QRET(T0);
}

FUNCODEDEF(fun_range_below_setter_299) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYrange_below));
  QRET(T0);
}

FUNCODEDEF(fun_300) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_range_above_301) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYrange_above));
  QRET(T0);
}

FUNCODEDEF(fun_range_above_setter_302) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYrange_above));
  QRET(T0);
}

FUNCODEDEF(fun_303) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_range_by_304) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYrange_by));
  QRET(T0);
}

FUNCODEDEF(fun_range_by_setter_305) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYrange_by));
  QRET(T0);
}

FUNCODEDEF(fun_306) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPint((P)1));
}

FUNCODEDEF(fun_fab_307) {
  ARG(s_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YruntimeYfrom_below),YPint((P)0),s_);
  RET(T0);
}

FUNCODEDEF(fun_from_308) {
  ARG(from_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YPpair(CHKREF(YruntimeYLrangeG),Ynil);
  T2 = (P)YPpair(CHKREF(YruntimeYrange_from),Ynil);
  T1 = (P)YPpair(from_,Ynil);
  T0 = CALL3(CHKREF(YPisa),T3,T2,T1);
  RET(T0);
}

FUNCODEDEF(fun_from_by_309) {
  ARG(by_, 0);
  ARG(from_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPpair(CHKREF(YruntimeYLrangeG),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYrange_by),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYrange_from),T4);
  T2 = (P)YPpair(by_,Ynil);
  T1 = (P)YPpair(from_,T2);
  T0 = CALL3(CHKREF(YPisa),T5,T3,T1);
  RET(T0);
}

FUNCODEDEF(fun_from_to_310) {
  ARG(to_, 0);
  ARG(from_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPpair(CHKREF(YruntimeYLrangeG),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYrange_to),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYrange_from),T4);
  T2 = (P)YPpair(to_,Ynil);
  T1 = (P)YPpair(from_,T2);
  T0 = CALL3(CHKREF(YPisa),T5,T3,T1);
  RET(T0);
}

FUNCODEDEF(fun_from_to_by_311) {
  ARG(by_, 0);
  ARG(to_, 1);
  ARG(from_, 2);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = (P)YPpair(CHKREF(YruntimeYLrangeG),Ynil);
  T6 = (P)YPpair(CHKREF(YruntimeYrange_by),Ynil);
  T5 = (P)YPpair(CHKREF(YruntimeYrange_to),T6);
  T4 = (P)YPpair(CHKREF(YruntimeYrange_from),T5);
  T3 = (P)YPpair(by_,Ynil);
  T2 = (P)YPpair(to_,T3);
  T1 = (P)YPpair(from_,T2);
  T0 = CALL3(CHKREF(YPisa),T7,T4,T1);
  RET(T0);
}

FUNCODEDEF(fun_from_below_312) {
  ARG(below_, 0);
  ARG(from_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPpair(CHKREF(YruntimeYLrangeG),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYrange_below),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYrange_from),T4);
  T2 = (P)YPpair(below_,Ynil);
  T1 = (P)YPpair(from_,T2);
  T0 = CALL3(CHKREF(YPisa),T5,T3,T1);
  RET(T0);
}

FUNCODEDEF(fun_from_below_by_313) {
  ARG(by_, 0);
  ARG(below_, 1);
  ARG(from_, 2);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = (P)YPpair(CHKREF(YruntimeYLrangeG),Ynil);
  T6 = (P)YPpair(CHKREF(YruntimeYrange_by),Ynil);
  T5 = (P)YPpair(CHKREF(YruntimeYrange_below),T6);
  T4 = (P)YPpair(CHKREF(YruntimeYrange_from),T5);
  T3 = (P)YPpair(by_,Ynil);
  T2 = (P)YPpair(below_,T3);
  T1 = (P)YPpair(from_,T2);
  T0 = CALL3(CHKREF(YPisa),T7,T4,T1);
  RET(T0);
}

FUNCODEDEF(fun_from_above_314) {
  ARG(above_, 0);
  ARG(from_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPpair(CHKREF(YruntimeYLrangeG),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYrange_above),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYrange_from),T4);
  T2 = (P)YPpair(above_,Ynil);
  T1 = (P)YPpair(from_,T2);
  T0 = CALL3(CHKREF(YPisa),T5,T3,T1);
  RET(T0);
}

FUNCODEDEF(fun_from_above_by_315) {
  ARG(by_, 0);
  ARG(above_, 1);
  ARG(from_, 2);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = (P)YPpair(CHKREF(YruntimeYLrangeG),Ynil);
  T6 = (P)YPpair(CHKREF(YruntimeYrange_by),Ynil);
  T5 = (P)YPpair(CHKREF(YruntimeYrange_above),T6);
  T4 = (P)YPpair(CHKREF(YruntimeYrange_from),T5);
  T3 = (P)YPpair(by_,Ynil);
  T2 = (P)YPpair(above_,T3);
  T1 = (P)YPpair(from_,T2);
  T0 = CALL3(CHKREF(YPisa),T7,T4,T1);
  RET(T0);
}

FUNCODEDEF(fun_ini_state_316) {
  ARG(c_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeYrange_from),c_);
  RET(T0);
}

FUNCODEDEF(fun_fin_stateQ_317) {
  ARG(state_, 0);
  ARG(c_, 1);
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T22 = CALL1(CHKREF(YruntimeYrange_by),c_);
  T21 = CALL1(CHKREF(YruntimeYnegQ),T22);
  if (T21 != YPfalse) {
    T20 = CALL1(CHKREF(YruntimeYrange_to),c_);
    T19 = CALL2(CHKREF(YmacrosYEE),T20,CHKREF(Ynul));
    if (T19 != YPfalse) {
      T18 = CALL1(CHKREF(YruntimeYrange_above),c_);
      T17 = CALL2(CHKREF(YmacrosYEE),T18,CHKREF(Ynul));
      if (T17 != YPfalse) {
        T14 = YPfalse;
      } else {
        T16 = CALL1(CHKREF(YruntimeYrange_above),c_);
        T15 = CALL2(CHKREF(YruntimeYLE),state_,T16);
        T14 = T15;
      }
      T11 = T14;
    } else {
      T13 = CALL1(CHKREF(YruntimeYrange_to),c_);
      T12 = CALL2(CHKREF(YruntimeYL),state_,T13);
      T11 = T12;
    }
    T0 = T11;
  } else {
    T10 = CALL1(CHKREF(YruntimeYrange_to),c_);
    T9 = CALL2(CHKREF(YmacrosYEE),T10,CHKREF(Ynul));
    if (T9 != YPfalse) {
      T8 = CALL1(CHKREF(YruntimeYrange_below),c_);
      T7 = CALL2(CHKREF(YmacrosYEE),T8,CHKREF(Ynul));
      if (T7 != YPfalse) {
        T4 = YPfalse;
      } else {
        T6 = CALL1(CHKREF(YruntimeYrange_below),c_);
        T5 = CALL2(CHKREF(YruntimeYGE),state_,T6);
        T4 = T5;
      }
      T1 = T4;
    } else {
      T3 = CALL1(CHKREF(YruntimeYrange_to),c_);
      T2 = CALL2(CHKREF(YruntimeYG),state_,T3);
      T1 = T2;
    }
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(fun_nxt_state_318) {
  ARG(state_, 0);
  ARG(c_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YruntimeYrange_by),c_);
  T0 = CALL2(CHKREF(YruntimeYA),state_,T1);
  RET(T0);
}

FUNCODEDEF(fun_now_elt_319) {
  ARG(state_, 0);
  ARG(c_, 1);
  P a1,a2;
loop:
  QRET(state_);
}

FUNCODEDEF(fun_copy_state_320) {
  ARG(state_, 0);
  ARG(U_, 1);
  P a1,a2;
loop:
  RET(state_);
}

FUNCODEDEF(fun_step_first_321) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYstep_first));
  QRET(T0);
}

FUNCODEDEF(fun_step_first_setter_322) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYstep_first));
  QRET(T0);
}

FUNCODEDEF(fun_323) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_step_then_324) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYstep_then));
  QRET(T0);
}

FUNCODEDEF(fun_step_then_setter_325) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYstep_then));
  QRET(T0);
}

FUNCODEDEF(fun_326) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_first_then_327) {
  ARG(then_, 0);
  ARG(first_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPpair(CHKREF(YruntimeYLstepG),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYstep_then),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYstep_first),T4);
  T2 = (P)YPpair(then_,Ynil);
  T1 = (P)YPpair(first_,T2);
  T0 = CALL3(CHKREF(YPisa),T5,T3,T1);
  RET(T0);
}

FUNCODEDEF(fun_ini_state_328) {
  ARG(c_, 0);
  P a1;
loop:
  RET(YPtrue);
}

FUNCODEDEF(fun_fin_stateQ_329) {
  ARG(state_, 0);
  ARG(c_, 1);
  P a1,a2;
loop:
  RET(YPfalse);
}

FUNCODEDEF(fun_nxt_state_330) {
  ARG(state_, 0);
  ARG(c_, 1);
  P a1,a2;
loop:
  RET(YPfalse);
}

FUNCODEDEF(fun_now_elt_331) {
  ARG(state_, 0);
  ARG(c_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  if (state_ != YPfalse) {
    T2 = CALL1(CHKREF(YruntimeYstep_first),c_);
    T0 = T2;
  } else {
    T1 = CALL1(CHKREF(YruntimeYstep_then),c_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_copy_state_332) {
  ARG(state_, 0);
  ARG(U_, 1);
  P a1,a2;
loop:
  RET(state_);
}

FUNCODEDEF(fun_assoc_key_333) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYassoc_key));
  QRET(T0);
}

FUNCODEDEF(fun_assoc_key_setter_334) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYassoc_key));
  QRET(T0);
}

FUNCODEDEF(fun_335) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_assoc_value_336) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYassoc_value));
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_setter_337) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYassoc_value));
  QRET(T0);
}

FUNCODEDEF(fun_338) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(YruntimeYassoc) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPpair(CHKREF(YruntimeYLassocG),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYassoc_value),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYassoc_key),T4);
  T2 = (P)YPpair(y_,Ynil);
  T1 = (P)YPpair(x_,T2);
  T0 = CALL3(CHKREF(YPisa),T5,T3,T1);
  RET(T0);
}

FUNCODEDEF(fun_assocq_340) {
  ARG(l_, 0);
  ARG(x_, 1);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL1(CHKREF(YmacrosYemptyQ),l_);
  if (T8 != YPfalse) {
    T0 = YPfalse;
  } else {
    T7 = CALL1(CHKREF(Yhead),l_);
    T6 = CALL1(CHKREF(YruntimeYassoc_key),T7);
    T5 = CALL2(CHKREF(YmacrosYEE),x_,T6);
    if (T5 != YPfalse) {
      T4 = CALL1(CHKREF(Yhead),l_);
      T1 = T4;
    } else {
      T3 = CALL1(CHKREF(Ytail),l_);
      T2 = CALL2(CHKREF(YruntimeYassocq),x_,T3);
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_to_str_341) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeYvals_to_str),x_);
  T0 = CALL3(CHKREF(YmacrosYcat),CHKREF(lit_321),T1,CHKREF(lit_320));
  RET(T0);
}

FUNCODEDEF(fun_empty_342) {
  ARG(c_, 0);
  P a1;
loop:
  RET(CHKREF(YPsnul));
}

FUNCODEDEF(fun_default_343) {
  ARG(c_, 0);
  P a1;
loop:
  QRET(YPchr((P)32));
}

FUNCODEDEF(fun_fab_344) {
  ARG(s_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPiu(s_);
  T0 = (P)YPstr(T1);
  RET(T0);
}

FUNCODEDEF(fun_str_345) {
  ARG(objects_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYfabs),CHKREF(YLstrG),objects_);
  QRET(T0);
}

FUNCODEDEF(fun_len_346) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPslen(x_);
  T0 = (P)YPib(T1);
  RET(T0);
}

FUNCODEDEF(fun_low_elt_347) {
  ARG(i_, 0);
  ARG(x_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPiu(i_);
  T1 = (P)YPselt(x_,T2);
  T0 = (P)YPcb(T1);
  RET(T0);
}

FUNCODEDEF(fun_low_elt_setter_348) {
  ARG(i_, 0);
  ARG(x_, 1);
  ARG(z_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = (P)YPcu(z_);
  T1 = (P)YPiu(i_);
  T0 = (P)YPselt_setter(T2,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_elt_349) {
  ARG(i_, 0);
  ARG(x_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  CALL2(CHKREF(YruntimeYrange_check),x_,i_);
  T2 = (P)YPiu(i_);
  T1 = (P)YPselt(x_,T2);
  T0 = (P)YPcb(T1);
  RET(T0);
}

FUNCODEDEF(fun_elt_setter_350) {
  ARG(i_, 0);
  ARG(x_, 1);
  ARG(z_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  CALL2(CHKREF(YruntimeYrange_check),x_,i_);
  T2 = (P)YPcu(z_);
  T1 = (P)YPiu(i_);
  T0 = (P)YPselt_setter(T2,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_to_str_351) {
  ARG(x_, 0);
  P a1;
loop:
  RET(x_);
}

FUNCODEDEF(fun_add_352) {
  ARG(c_, 0);
  ARG(s_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YruntimeYto_str),c_);
  T0 = CALL2(CHKREF(YmacrosYcat),s_,T1);
  RET(T0);
}

FUNCODEDEF(fun_loop_353) {
  ARG(j_, 0);
  ARG(i_, 1);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL1(CHKREF(YruntimeYlen),FREEREF(2));
  T6 = CALL2(CHKREF(YruntimeYE),j_,T7);
  T5 = CALL1(CHKREF(Ynot),T6);
  if (T5 != YPfalse) {
    T1 = CALL2(CHKREF(YruntimeYelt),FREEREF(2),j_);
    CALL3(CHKREF(YruntimeYelt_setter),T1,FREEREF(1),i_);
    T4 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    T3 = CALL2(CHKREF(YruntimeYA),j_,YPint((P)1));
    a1 = T4;
    a2 = T3;
    i_ = a1;
    j_ = a2;
    goto loop;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_354) {
  ARG(s_, 0);
  ARG(i_, 1);
  P loopF813;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_353,3);
  loopF813 = T2;
  FUNINIT(loopF813, 3,loopF813,FREEREF(0),s_);
  T1 = KCALL2(loopF813,i_,YPint((P)0));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ascii_Gchar_355) {
  ARG(n_, 0);
  P tmpF814;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL2(CHKREF(YruntimeYelt),CHKREF(YruntimeYascii_chars),n_);
  tmpF814 = T3;
  if (tmpF814 != YPfalse) {
    T1 = tmpF814;
  } else {
    T2 = CALL2(CHKREF(Yerror),CHKREF(lit_333),n_);
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_char_Ginteger_356) {
  ARG(char_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),char_);
  RET(T0);
}

FUNCODEDEF(fun_integer_Gchar_357) {
  ARG(n_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLchrG),n_);
  RET(T0);
}

FUNCODEDEF(fun_loop_358) {
  ARG(i_, 0);
  P cF815;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = CALL2(CHKREF(YruntimeYE),i_,FREEREF(3));
  if (T9 != YPfalse) {
    T8 = CALL2(CHKREF(Ylst),FREEREF(1),FREEREF(2));
    T0 = T8;
  } else {
    T7 = CALL2(CHKREF(YruntimeYelt),CHKREF(YruntimeYascii_chars),i_);
    cF815 = T7;
    if (cF815 != YPfalse) {
      T4 = CALL1(CHKREF(YruntimeYchar_Ginteger),cF815);
      T3 = CALL2(CHKREF(YruntimeY_),T4,FREEREF(1));
      T2 = CALL3(CHKREF(YruntimeYelt_setter),i_,FREEREF(2),T3);
    } else {
    }
    T6 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T6;
    i_ = a1;
    goto loop;
    T1 = T5;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_loop_359) {
  ARG(greatest_, 0);
  ARG(least_, 1);
  ARG(i_, 2);
  P loopF819;
  P vF818;
  P nF817;
  P cF816;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T22 = CALL2(CHKREF(YruntimeYE),i_,FREEREF(1));
  if (T22 != YPfalse) {
    T21 = CALL2(CHKREF(YruntimeY_),greatest_,least_);
    T20 = CALL2(CHKREF(YruntimeYA),T21,YPint((P)1));
    T19 = CALL2(CHKREF(YruntimeYfab),CHKREF(YLvecG),T20);
    T18 = CALL2(CHKREF(YruntimeYfill),T19,YPfalse);
    vF818 = T18;
    T17 = FUNSHELL(1,fun_loop_358,4);
    loopF819 = T17;
    FUNINIT(loopF819, 4,loopF819,least_,vF818,FREEREF(1));
    T16 = KCALL1(loopF819,YPint((P)0));
    T15 = T16;
    T14 = T15;
    T0 = T14;
  } else {
    T13 = CALL2(CHKREF(YruntimeYelt),CHKREF(YruntimeYascii_chars),i_);
    cF816 = T13;
    if (cF816 != YPfalse) {
      T12 = CALL1(CHKREF(YruntimeYchar_Ginteger),cF816);
      nF817 = T12;
      T11 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
      if (least_ != YPfalse) {
        T10 = CALL2(CHKREF(YruntimeYmin),least_,nF817);
        T9 = T10;
      } else {
        T9 = nF817;
      }
      if (greatest_ != YPfalse) {
        T8 = CALL2(CHKREF(YruntimeYmax),greatest_,nF817);
        T7 = T8;
      } else {
        T7 = nF817;
      }
      a1 = T11;
      a2 = T9;
      a3 = T7;
      i_ = a1;
      least_ = a2;
      greatest_ = a3;
      goto loop;
      T5 = T6;
      T2 = T5;
    } else {
      T4 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
      a1 = T4;
      a2 = least_;
      a3 = greatest_;
      i_ = a1;
      least_ = a2;
      greatest_ = a3;
      goto loop;
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_char_Gascii_360) {
  ARG(char_, 0);
  P tmpF820;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(Ytail),CHKREF(YruntimeYnative_chars));
  T7 = CALL1(CHKREF(Yhead),T8);
  T6 = CALL1(CHKREF(YruntimeYchar_Ginteger),char_);
  T5 = CALL1(CHKREF(Yhead),CHKREF(YruntimeYnative_chars));
  T4 = CALL2(CHKREF(YruntimeY_),T6,T5);
  T3 = CALL2(CHKREF(YruntimeYelt),T7,T4);
  tmpF820 = T3;
  if (tmpF820 != YPfalse) {
    T1 = tmpF820;
  } else {
    T2 = CALL2(CHKREF(Yerror),CHKREF(lit_339),char_);
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_as_361) {
  ARG(s_, 0);
  ARG(U_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(Ysym_name),s_);
  RET(T0);
}

FUNCODEDEF(fun_as_362) {
  ARG(s_, 0);
  ARG(U_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(Yfab_sym),s_);
  RET(T0);
}

FUNCODEDEF(fun_L_363) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(Ysym_name),x_);
  T1 = CALL1(CHKREF(Ysym_name),y_);
  T0 = CALL2(CHKREF(YruntimeYL),T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_to_str_364) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(Ysym_name),x_);
  RET(T0);
}

FUNCODEDEF(fun_identity_365) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(x_);
}

FUNCODEDEF(fun_366) {
  ARG(args_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(Yapply),FREEREF(0),args_);
  T0 = CALL1(FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_compose_367) {
  ARG(fy_, 0);
  ARG(fx_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = FUNFAB(fun_366,2,fy_,fx_);
  RET(T0);
}

FUNCODEDEF(fun_368) {
  ARG(args_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YmacrosYcat),args_,FREEREF(0));
  T0 = CALL2(CHKREF(Yapply),FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_rcurry_369) {
  ARG(curried_, 0);
  ARG(f_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = FUNFAB(fun_368,2,curried_,f_);
  RET(T0);
}

FUNCODEDEF(fun_370) {
  ARG(args_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YmacrosYcat),FREEREF(0),args_);
  T0 = CALL2(CHKREF(Yapply),FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_curry_371) {
  ARG(curried_, 0);
  ARG(f_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = FUNFAB(fun_370,2,curried_,f_);
  RET(T0);
}

FUNCODEDEF(fun_372) {
  ARG(args_, 0);
  P a1;
loop:
  QRET(FREEREF(0));
}

FUNCODEDEF(fun_always_373) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = FUNFAB(fun_372,1,x_);
  RET(T0);
}

FUNCODEDEF(fun_default_handler_374) {
  ARG(c_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_describe_condition_375) {
  ARG(c_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYformat_to_string),CHKREF(lit_352),c_);
  RET(T0);
}

FUNCODEDEF(fun_default_handler_description_376) {
  ARG(cond_type_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYformat_to_string),CHKREF(lit_355),cond_type_);
  RET(T0);
}

FUNCODEDEF(fun_build_condition_interactively_377) {
  ARG(out_, 0);
  ARG(in_, 1);
  ARG(cond_type_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = (P)YPpair(cond_type_,Ynil);
  T0 = CALL3(CHKREF(YPisa),T1,Ynil,Ynil);
  RET(T0);
}

FUNCODEDEF(fun_condition_message_378) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYcondition_message));
  QRET(T0);
}

FUNCODEDEF(fun_condition_message_setter_379) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYcondition_message));
  QRET(T0);
}

FUNCODEDEF(fun_380) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_13));
}

FUNCODEDEF(fun_condition_arguments_381) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYcondition_arguments));
  QRET(T0);
}

FUNCODEDEF(fun_condition_arguments_setter_382) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYcondition_arguments));
  QRET(T0);
}

FUNCODEDEF(fun_383) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_describe_condition_384) {
  ARG(c_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = CALL1(CHKREF(YruntimeYcondition_message),c_);
  T2 = CALL1(CHKREF(YruntimeYcondition_arguments),c_);
  T1 = CALL2(CHKREF(YmacrosYpair),T3,T2);
  T0 = CALL2(CHKREF(Yapply),CHKREF(YruntimeYformat_to_string),T1);
  RET(T0);
}

FUNCODEDEF(fun_build_condition_interactively_385) {
  ARG(out_, 0);
  ARG(in_, 1);
  ARG(cond_type_, 2);
  P condF821;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = (P)YPnext_methods();
  T3 = CALLN(CHKREF(YPcall_next_method),4,T4,cond_type_,in_,out_);
  condF821 = T3;
  CALL2(CHKREF(YruntimeYformat),out_,CHKREF(lit_364));
  T1 = CALL1(CHKREF(YruntimeYread),in_);
  CALL2(CHKREF(YruntimeYcondition_message_setter),T1,condF821);
  CALL2(CHKREF(YruntimeYformat),out_,CHKREF(lit_363));
  T2 = CALL1(CHKREF(YruntimeYread),in_);
  CALL2(CHKREF(YruntimeYcondition_arguments_setter),T2,condF821);
  T0 = condF821;
  RET(T0);
}

FUNCODEDEF(fun_default_handler_386) {
  ARG(c_, 0);
  P T1,T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeYdescribe_condition),c_);
  CALL3(CHKREF(YruntimeYformat),CHKREF(YruntimeYout),CHKREF(lit_366),T0);
  T1 = (P)YPinvoke_debugger(c_);
  QRET(T1);
}

FUNCODEDEF(fun_default_handler_description_387) {
  ARG(cond_type_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYformat_to_string),CHKREF(lit_370),cond_type_);
  RET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_generic_388) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYincongruent_method_error_generic));
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_generic_setter_389) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYincongruent_method_error_generic));
  QRET(T0);
}

FUNCODEDEF(fun_390) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_incongruent_method_error_method_391) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYincongruent_method_error_method));
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_method_setter_392) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYincongruent_method_error_method));
  QRET(T0);
}

FUNCODEDEF(fun_393) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_describe_condition_394) {
  ARG(c_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(YruntimeYincongruent_method_error_method),c_);
  T1 = CALL1(CHKREF(YruntimeYincongruent_method_error_generic),c_);
  T0 = CALL3(CHKREF(YruntimeYformat_to_string),CHKREF(lit_376),T2,T1);
  RET(T0);
}

FUNCODEDEF(fun_default_handler_description_395) {
  ARG(cond_type_, 0);
  P a1;
loop:
  RET(CHKREF(lit_378));
}

FUNCODEDEF(fun_describe_handler_396) {
  ARG(condition_type_, 0);
  ARG(info_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(YruntimeYdefault_handler_description),condition_type_);
  RET(T0);
}

FUNCODEDEF(fun_build_condition_for_handler_interactively_397) {
  ARG(out_, 0);
  ARG(in_, 1);
  ARG(condition_type_, 2);
  ARG(info_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALL3(CHKREF(YruntimeYbuild_condition_interactively),condition_type_,in_,out_);
  RET(T0);
}

FUNCODEDEF(fun_handler_info_message_398) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yhandler_info_message));
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_message_setter_399) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yhandler_info_message));
  QRET(T0);
}

FUNCODEDEF(fun_400) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_handler_info_arguments_401) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(Yhandler_info_arguments));
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_arguments_setter_402) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(Yhandler_info_arguments));
  QRET(T0);
}

FUNCODEDEF(fun_403) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(Ynil);
}

FUNCODEDEF(fun_describe_handler_404) {
  ARG(condition_type_, 0);
  ARG(info_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = CALL1(CHKREF(Yhandler_info_message),info_);
  T2 = CALL1(CHKREF(Yhandler_info_arguments),info_);
  T1 = CALL2(CHKREF(YmacrosYpair),T3,T2);
  T0 = CALL2(CHKREF(Yapply),CHKREF(YruntimeYformat_to_string),T1);
  RET(T0);
}

FUNCODEDEF(fun_handler_condition_type_405) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYhandler_condition_type));
  QRET(T0);
}

FUNCODEDEF(fun_handler_condition_type_setter_406) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYhandler_condition_type));
  QRET(T0);
}

FUNCODEDEF(fun_407) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_handler_info_408) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYhandler_info));
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_setter_409) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYhandler_info));
  QRET(T0);
}

FUNCODEDEF(fun_410) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_handler_test_411) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYhandler_test));
  QRET(T0);
}

FUNCODEDEF(fun_handler_test_setter_412) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYhandler_test));
  QRET(T0);
}

FUNCODEDEF(fun_413) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_handler_function_414) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYhandler_function));
  QRET(T0);
}

FUNCODEDEF(fun_handler_function_setter_415) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYhandler_function));
  QRET(T0);
}

FUNCODEDEF(fun_416) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(YruntimeYmake_handler) {
  ARG(f_, 0);
  ARG(test_, 1);
  ARG(info_, 2);
  ARG(type_, 3);
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T9 = (P)YPpair(CHKREF(YruntimeYLhandlerG),Ynil);
  T8 = (P)YPpair(CHKREF(YruntimeYhandler_function),Ynil);
  T7 = (P)YPpair(CHKREF(YruntimeYhandler_test),T8);
  T6 = (P)YPpair(CHKREF(YruntimeYhandler_info),T7);
  T5 = (P)YPpair(CHKREF(YruntimeYhandler_condition_type),T6);
  T4 = (P)YPpair(f_,Ynil);
  T3 = (P)YPpair(test_,T4);
  T2 = (P)YPpair(info_,T3);
  T1 = (P)YPpair(type_,T2);
  T0 = CALL3(CHKREF(YPisa),T9,T5,T1);
  RET(T0);
}

FUNCODEDEF(YruntimeYhandler_activeQ) {
  ARG(handler_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeYhandler_test),handler_);
  T0 = CALL0(T1);
  RET(T0);
}

FUNCODEDEF(YruntimeYhandler_matchesQ) {
  ARG(condition_, 0);
  ARG(handler_, 1);
  P tmpF822;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YruntimeYhandler_condition_type),handler_);
  T3 = CALL2(CHKREF(YisaQ),condition_,T4);
  tmpF822 = T3;
  if (tmpF822 != YPfalse) {
    T2 = CALL1(CHKREF(YruntimeYhandler_activeQ),handler_);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_420) {
  P T0;
loop:
  T0 = YruntimeYTcurrent_handlersT = FREEREF(0);
  QRET(T0);
}

FUNCODEDEF(fun_421) {
  P T0;
loop:
  T0 = CALL0(FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_422) {
  ARG(UresumeU_, 0);
  P T0;
  P a1;
loop:
  CALL2(FREEREF(2),FREEREF(1),UresumeU_);
  T0 = CALL0(FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_Uhandler_functionU_423) {
  ARG(Unext_handlerU_, 0);
  ARG(condition_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = FUNFAB(fun_422,3,Unext_handlerU_,condition_,FREEREF(0));
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_424) {
  ARG(Uunwind_exceptionU_, 0);
  P Uhandler_functionUF824;
  P Uoriginal_handlersUF823;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  Uoriginal_handlersUF823 = CHKREF(YruntimeYTcurrent_handlersT);
  T7 = FUNSHELL(0,fun_Uhandler_functionU_423,1);
  Uhandler_functionUF824 = T7;
  FUNINIT(Uhandler_functionUF824, 1,FREEREF(0));
  T3 = CALLN(CHKREF(YruntimeYmake_handler),4,FREEREF(4),FREEREF(3),FREEREF(2),Uhandler_functionUF824);
  T2 = CALL2(CHKREF(YruntimeYpush),CHKREF(YruntimeYTcurrent_handlersT),T3);
  YruntimeYTcurrent_handlersT = T2;
  T6 = FUNFAB(fun_421,1,FREEREF(1));
  T5 = FUNFAB(fun_420,1,Uoriginal_handlersUF823);
  T4 = with_cleanup(T6,T5);
  T1 = T4;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YruntimeYPwith_monitor) {
  ARG(main_fun_, 0);
  ARG(user_handler_, 1);
  ARG(test_fun_, 2);
  ARG(info_, 3);
  ARG(type_, 4);
  P T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T1 = FUNFAB(fun_424,5,user_handler_,main_fun_,test_fun_,info_,type_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_426) {
  P T0;
loop:
  T0 = CALL2(CHKREF(YruntimeYsignal_handler_list),FREEREF(1),FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(YruntimeYsignal_handler_list) {
  ARG(handlers_, 0);
  ARG(condition_, 1);
  P remainingF826;
  P handlerF825;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T12 = CALL1(CHKREF(YmacrosYemptyQ),handlers_);
  if (T12 != YPfalse) {
    T11 = CALL1(CHKREF(YruntimeYdefault_handler),condition_);
    T0 = T11;
  } else {
    T10 = CALL1(CHKREF(Yhead),handlers_);
    handlerF825 = T10;
    T9 = CALL1(CHKREF(Ytail),handlers_);
    remainingF826 = T9;
    T8 = CALL2(CHKREF(YruntimeYhandler_matchesQ),handlerF825,condition_);
    if (T8 != YPfalse) {
      T7 = CALL1(CHKREF(YruntimeYhandler_function),handlerF825);
      T6 = FUNFAB(fun_426,2,remainingF826,condition_);
      T5 = CALL2(T7,condition_,T6);
      T3 = T5;
    } else {
      T4 = CALL2(CHKREF(YruntimeYsignal_handler_list),condition_,remainingF826);
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_sig_428) {
  ARG(args_, 0);
  ARG(condition_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YruntimeYsignal_handler_list),condition_,CHKREF(YruntimeYTcurrent_handlersT));
  QRET(T0);
}

FUNCODEDEF(fun_sig_429) {
  ARG(args_, 0);
  ARG(c_, 1);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = (P)YPpair(CHKREF(YruntimeYLsimple_conditionG),Ynil);
  T5 = (P)YPpair(CHKREF(YruntimeYcondition_arguments),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYcondition_message),T5);
  T3 = (P)YPpair(args_,Ynil);
  T2 = (P)YPpair(c_,T3);
  T1 = CALL3(CHKREF(YPisa),T6,T4,T2);
  T0 = CALL1(CHKREF(YruntimeYsig),T1);
  QRET(T0);
}

FUNCODEDEF(fun_error_430) {
  ARG(args_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(YruntimeYsig),c_);
  QRET(T0);
}

FUNCODEDEF(fun_error_431) {
  ARG(args_, 0);
  ARG(c_, 1);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = (P)YPpair(CHKREF(YruntimeYLsimple_errorG),Ynil);
  T5 = (P)YPpair(CHKREF(YruntimeYcondition_arguments),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYcondition_message),T5);
  T3 = (P)YPpair(args_,Ynil);
  T2 = (P)YPpair(c_,T3);
  T1 = CALL3(CHKREF(YPisa),T6,T4,T2);
  T0 = CALL1(CHKREF(Yerror),T1);
  QRET(T0);
}

FUNCODEDEF(Ywrong_number_arguments_error) {
  ARG(n_, 0);
  ARG(fun_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(Yfun_arity),fun_);
  T0 = CALLN(CHKREF(Yerror),4,CHKREF(lit_417),fun_,n_,T1);
  QRET(T0);
}

FUNCODEDEF(Yunknown_function_error) {
  ARG(fun_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yerror),CHKREF(lit_419),fun_);
  QRET(T0);
}

FUNCODEDEF(Ytype_error) {
  ARG(type_, 0);
  ARG(arg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yerror),CHKREF(lit_422),arg_,type_);
  QRET(T0);
}

FUNCODEDEF(Yincongruent_method_error) {
  ARG(met_, 0);
  ARG(gen_, 1);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = (P)YPpair(CHKREF(YruntimeYLincongruent_method_errorG),Ynil);
  T5 = (P)YPpair(CHKREF(YruntimeYincongruent_method_error_method),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYincongruent_method_error_generic),T5);
  T3 = (P)YPpair(met_,Ynil);
  T2 = (P)YPpair(gen_,T3);
  T1 = CALL3(CHKREF(YPisa),T6,T4,T2);
  T0 = CALL1(CHKREF(Yerror),T1);
  QRET(T0);
}

FUNCODEDEF(fun_search_436) {
  ARG(handlers_, 0);
  P tmpF829;
  P remainingF828;
  P handlerF827;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = CALL1(CHKREF(YmacrosYemptyQ),handlers_);
  if (T12 != YPfalse) {
    T0 = YPfalse;
  } else {
    T11 = CALL1(CHKREF(Yhead),handlers_);
    handlerF827 = T11;
    T10 = CALL1(CHKREF(Ytail),handlers_);
    remainingF828 = T10;
    T8 = CALL1(CHKREF(YruntimeYhandler_condition_type),handlerF827);
    T7 = CALL2(CHKREF(YisaQ),T8,FREEREF(2));
    tmpF829 = T7;
    if (tmpF829 != YPfalse) {
      T6 = CALL1(CHKREF(YruntimeYhandler_activeQ),handlerF827);
      T5 = T6;
    } else {
      T5 = YPfalse;
    }
    T4 = T5;
    if (T4 != YPfalse) {
      T3 = CALL1(FREEREF(1),handlerF827);
    } else {
    }
    a1 = remainingF828;
    handlers_ = a1;
    goto loop;
    T2 = T9;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YruntimeYdo_handlers_of_type) {
  ARG(f_, 0);
  ARG(type_, 1);
  P searchF830;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_search_436,3);
  searchF830 = T2;
  FUNINIT(searchF830, 3,searchF830,f_,type_);
  T1 = KCALL1(searchF830,CHKREF(YruntimeYTcurrent_handlersT));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_438) {
  ARG(handler_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(CHKREF(YruntimeYhandler_info),handler_);
  T1 = CALL1(CHKREF(YruntimeYhandler_condition_type),handler_);
  T0 = CALL2(CHKREF(YruntimeYdescribe_handler),T2,T1);
  CALLN(CHKREF(YruntimeYformat),4,FREEREF(2),CHKREF(lit_428),T3,T0);
  CALL2(CHKREF(YruntimeYpush_lastX),FREEREF(1),handler_);
  T6 = BOXVAL(FREEREF(0));
  T5 = CALL2(CHKREF(YruntimeYA),T6,YPint((P)1));
  T4 = BOXVAL(FREEREF(0)) = T5;
  QRET(T4);
}

FUNCODEDEF(YruntimeYlist_handlers) {
  ARG(out_, 0);
  ARG(type_, 1);
  P applicableF832;
  P iF831;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  iF831 = YPint((P)1);
  iF831 = BOXFAB(iF831);
  T4 = CALL2(CHKREF(YruntimeYfab),CHKREF(YruntimeYLbufG),YPint((P)0));
  applicableF832 = T4;
  T3 = FUNFAB(fun_438,3,iF831,applicableF832,out_);
  CALL2(CHKREF(YruntimeYdo_handlers_of_type),type_,T3);
  T2 = applicableF832;
  T0 = T2;
  RET(T0);
}

FUNCODEDEF(fun_440) {
  P T0;
loop:
  T0 = CALL2(CHKREF(YruntimeYsignal_handler_list),FREEREF(1),FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_search_441) {
  ARG(handlers_, 0);
  P remainingF834;
  P currentF833;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = CALL1(CHKREF(YmacrosYemptyQ),handlers_);
  if (T12 != YPfalse) {
    T11 = CALL2(CHKREF(Yerror),CHKREF(lit_430),FREEREF(2));
    T0 = T11;
  } else {
    T10 = CALL1(CHKREF(Yhead),handlers_);
    currentF833 = T10;
    T9 = CALL1(CHKREF(Ytail),handlers_);
    remainingF834 = T9;
    T8 = CALL2(CHKREF(YmacrosYEE),FREEREF(2),currentF833);
    if (T8 != YPfalse) {
      T7 = CALL1(CHKREF(YruntimeYhandler_function),FREEREF(2));
      T6 = FUNFAB(fun_440,2,remainingF834,FREEREF(1));
      T5 = CALL2(T7,FREEREF(1),T6);
      T3 = T5;
    } else {
      a1 = remainingF834;
      handlers_ = a1;
      goto loop;
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YruntimeYinvoke_handler_interactively) {
  ARG(out_, 0);
  ARG(in_, 1);
  ARG(handler_, 2);
  P searchF836;
  P conditionF835;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T9 = CALL1(CHKREF(YruntimeYhandler_info),handler_);
  T8 = CALL1(CHKREF(YruntimeYhandler_condition_type),handler_);
  T7 = CALLN(CHKREF(YruntimeYbuild_condition_for_handler_interactively),4,T9,T8,in_,out_);
  conditionF835 = T7;
  T3 = CALL2(CHKREF(YruntimeYhandler_matchesQ),handler_,conditionF835);
  T2 = CALL1(CHKREF(Ynot),T3);
  if (T2 != YPfalse) {
    T1 = CALL3(CHKREF(Yerror),CHKREF(lit_431),handler_,conditionF835);
  } else {
  }
  T6 = FUNSHELL(1,fun_search_441,3);
  searchF836 = T6;
  FUNINIT(searchF836, 3,searchF836,conditionF835,handler_);
  T5 = KCALL1(searchF836,CHKREF(YruntimeYTcurrent_handlersT));
  T4 = T5;
  T0 = T4;
  QRET(T0);
}

FUNCODEDEF(YruntimeYchoose_handler) {
  ARG(out_, 0);
  ARG(in_, 1);
  ARG(type_, 2);
  P tmpF839;
  P nF838;
  P handlersF837;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T12 = CALL2(CHKREF(YruntimeYlist_handlers),type_,out_);
  handlersF837 = T12;
  CALL2(CHKREF(YruntimeYformat),out_,CHKREF(lit_434));
  T11 = CALL1(CHKREF(YruntimeYread),in_);
  T10 = CALL2(CHKREF(YruntimeY_),T11,YPint((P)1));
  nF838 = T10;
  T7 = CALL2(CHKREF(YruntimeYL),nF838,YPint((P)0));
  tmpF839 = T7;
  if (tmpF839 != YPfalse) {
    T4 = tmpF839;
  } else {
    T6 = CALL1(CHKREF(YruntimeYlen),handlersF837);
    T5 = CALL2(CHKREF(YruntimeYGE),nF838,T6);
    T4 = T5;
  }
  T3 = T4;
  if (T3 != YPfalse) {
    T2 = CALL2(CHKREF(Yerror),CHKREF(lit_433),nF838);
  } else {
  }
  T9 = CALL2(CHKREF(YruntimeYelt),handlersF837,nF838);
  T8 = CALL3(CHKREF(YruntimeYinvoke_handler_interactively),T9,in_,out_);
  T1 = T8;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YruntimeYlocative_value) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPlocative_value(x_);
  QRET(T0);
}

FUNCODEDEF(YruntimeYlocative_value_setter) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPlocative_value_setter(z_,x_);
  QRET(T0);
}

FUNCODEDEF(YruntimeYapp_filename) {
  P T0;
loop:
  T0 = (P)YPapp_filename();
  QRET(T0);
}

FUNCODEDEF(YruntimeYapp_args) {
  P T0;
loop:
  T0 = (P)YPapp_args();
  QRET(T0);
}

FUNCODEDEF(fun_port_handle_448) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYport_handle));
  QRET(T0);
}

FUNCODEDEF(fun_port_handle_setter_449) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYport_handle));
  QRET(T0);
}

FUNCODEDEF(fun_450) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_open_input_file_451) {
  ARG(filename_, 0);
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = (P)YPpair(CHKREF(YruntimeYLfile_input_portG),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYport_handle),Ynil);
  T3 = (P)YPsu(filename_);
  T2 = (P)YPopen_input_file(T3);
  T1 = (P)YPpair(T2,Ynil);
  T0 = CALL3(CHKREF(YPisa),T5,T4,T1);
  RET(T0);
}

FUNCODEDEF(fun_file_opening_error_452) {
  ARG(filename_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yerror),CHKREF(lit_450),filename_);
  QRET(T0);
}

FUNCODEDEF(fun_open_output_file_453) {
  ARG(filename_, 0);
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = (P)YPpair(CHKREF(YruntimeYLfile_output_portG),Ynil);
  T4 = (P)YPpair(CHKREF(YruntimeYport_handle),Ynil);
  T3 = (P)YPsu(filename_);
  T2 = (P)YPopen_output_file(T3);
  T1 = (P)YPpair(T2,Ynil);
  T0 = CALL3(CHKREF(YPisa),T5,T4,T1);
  RET(T0);
}

FUNCODEDEF(fun_close_input_port_454) {
  ARG(port_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeYport_handle),port_);
  T0 = (P)YPclose_input_port(T1);
  QRET(T0);
}

FUNCODEDEF(fun_close_output_port_455) {
  ARG(port_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeYport_handle),port_);
  T0 = (P)YPclose_output_port(T1);
  QRET(T0);
}

FUNCODEDEF(fun_456) {
  P tmpF840;
  P T4,T3,T2,T1,T0;
loop:
  T4 = BOXVAL(FREEREF(0));
  tmpF840 = T4;
  if (tmpF840 != YPfalse) {
    T3 = BOXVAL(FREEREF(0));
    T2 = CALL1(CHKREF(YruntimeYclose_input_port),T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_457) {
  P T2,T1,T0;
loop:
  T0 = CALL1(CHKREF(YruntimeYopen_input_file),FREEREF(2));
  BOXVAL(FREEREF(0)) = T0;
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(FREEREF(1),T2);
  QRET(T1);
}

FUNCODEDEF(fun_call_with_input_file_458) {
  ARG(proc_, 0);
  ARG(string_, 1);
  P portF841;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  portF841 = YPfalse;
  portF841 = BOXFAB(portF841);
  T4 = FUNFAB(fun_457,3,portF841,proc_,string_);
  T3 = FUNFAB(fun_456,1,portF841);
  T2 = with_cleanup(T4,T3);
  T0 = T2;
  QRET(T0);
}

FUNCODEDEF(fun_459) {
  P tmpF842;
  P T4,T3,T2,T1,T0;
loop:
  T4 = BOXVAL(FREEREF(0));
  tmpF842 = T4;
  if (tmpF842 != YPfalse) {
    T3 = BOXVAL(FREEREF(0));
    T2 = CALL1(CHKREF(YruntimeYclose_output_port),T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_460) {
  P T2,T1,T0;
loop:
  T0 = CALL1(CHKREF(YruntimeYopen_output_file),FREEREF(2));
  BOXVAL(FREEREF(0)) = T0;
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(FREEREF(1),T2);
  QRET(T1);
}

FUNCODEDEF(fun_call_with_output_file_461) {
  ARG(proc_, 0);
  ARG(string_, 1);
  P portF843;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  portF843 = YPfalse;
  portF843 = BOXFAB(portF843);
  T4 = FUNFAB(fun_460,3,portF843,proc_,string_);
  T3 = FUNFAB(fun_459,1,portF843);
  T2 = with_cleanup(T4,T3);
  T0 = T2;
  QRET(T0);
}

FUNCODEDEF(fun_eof_objectQ_462) {
  ARG(x_, 0);
  P a1;
loop:
  RET(YPfalse);
}

FUNCODEDEF(fun_eof_objectQ_463) {
  ARG(x_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YPcu(x_);
  T2 = (P)YPeof_object();
  T1 = (P)YPeqQ(T3,T2);
  T0 = (P)YPbb(T1);
  RET(T0);
}

FUNCODEDEF(fun_eof_object_464) {
  P T1,T0;
loop:
  T1 = (P)YPeof_object();
  T0 = (P)YPcb(T1);
  RET(T0);
}

FUNCODEDEF(fun_read_char_465) {
  ARG(port_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(YruntimeYport_handle),port_);
  T1 = (P)YPread_char(T2);
  T0 = (P)YPcb(T1);
  RET(T0);
}

FUNCODEDEF(fun_peek_char_466) {
  ARG(port_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(YruntimeYport_handle),port_);
  T1 = (P)YPpeek_char(T2);
  T0 = (P)YPcb(T1);
  RET(T0);
}

FUNCODEDEF(fun_char_readyQ_467) {
  ARG(port_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeYport_handle),port_);
  T0 = (P)YPchar_readyQ(T1);
  RET(T0);
}

FUNCODEDEF(fun_newline_468) {
  ARG(port_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)10));
  QRET(T0);
}

FUNCODEDEF(fun_force_output_469) {
  ARG(port_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeYport_handle),port_);
  T0 = (P)YPforce_output(T1);
  QRET(T0);
}

FUNCODEDEF(fun_write_char_470) {
  ARG(c_, 0);
  ARG(port_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(YruntimeYport_handle),port_);
  T1 = (P)YPcu(c_);
  T0 = (P)YPwrite_char(T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_write_string_471) {
  ARG(s_, 0);
  ARG(port_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(YruntimeYport_handle),port_);
  T1 = (P)YPsu(s_);
  T0 = (P)YPwrite_string(T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_port_guts_472) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYport_guts));
  QRET(T0);
}

FUNCODEDEF(fun_port_guts_setter_473) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYport_guts));
  QRET(T0);
}

FUNCODEDEF(fun_474) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_13));
}

FUNCODEDEF(fun_port_contents_475) {
  ARG(port_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YruntimeYport_guts),port_);
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),T1);
  RET(T0);
}

FUNCODEDEF(fun_port_index_476) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYport_index));
  QRET(T0);
}

FUNCODEDEF(fun_port_index_setter_477) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYport_index));
  QRET(T0);
}

FUNCODEDEF(fun_478) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_call_with_string_input_port_479) {
  ARG(proc_, 0);
  ARG(string_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = (P)YPpair(CHKREF(YruntimeYLstring_input_portG),Ynil);
  T3 = (P)YPpair(CHKREF(YruntimeYport_guts),Ynil);
  T2 = (P)YPpair(string_,Ynil);
  T1 = CALL3(CHKREF(YPisa),T4,T3,T2);
  T0 = CALL1(proc_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_call_with_string_output_port_480) {
  ARG(proc_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = (P)YPpair(CHKREF(YruntimeYLstring_output_portG),Ynil);
  T1 = CALL3(CHKREF(YPisa),T2,Ynil,Ynil);
  T0 = CALL1(proc_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_peek_char_481) {
  ARG(port_, 0);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(YruntimeYport_index),port_);
  T7 = CALL1(CHKREF(YruntimeYport_guts),port_);
  T6 = CALL1(CHKREF(YruntimeYlen),T7);
  T5 = CALL2(CHKREF(YruntimeYGE),T8,T6);
  if (T5 != YPfalse) {
    T4 = CALL0(CHKREF(YruntimeYeof_object));
    T0 = T4;
  } else {
    T3 = CALL1(CHKREF(YruntimeYport_guts),port_);
    T2 = CALL1(CHKREF(YruntimeYport_index),port_);
    T1 = CALL2(CHKREF(YruntimeYelt),T3,T2);
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(fun_read_char_482) {
  ARG(port_, 0);
  P x_1199F845;
  P resF844;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = CALL1(CHKREF(YruntimeYport_index),port_);
  T11 = CALL1(CHKREF(YruntimeYport_guts),port_);
  T10 = CALL1(CHKREF(YruntimeYlen),T11);
  T9 = CALL2(CHKREF(YruntimeYGE),T12,T10);
  if (T9 != YPfalse) {
    T8 = CALL0(CHKREF(YruntimeYeof_object));
    T0 = T8;
  } else {
    T7 = CALL1(CHKREF(YruntimeYport_guts),port_);
    T6 = CALL1(CHKREF(YruntimeYport_index),port_);
    T5 = CALL2(CHKREF(YruntimeYelt),T7,T6);
    resF844 = T5;
    x_1199F845 = port_;
    T4 = CALL1(CHKREF(YruntimeYport_index),x_1199F845);
    T3 = CALL2(CHKREF(YruntimeYA),T4,YPint((P)1));
    T2 = CALL2(CHKREF(YruntimeYport_index_setter),T3,x_1199F845);
    T1 = resF844;
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(fun_char_readyQ_483) {
  ARG(port_, 0);
  P a1;
loop:
  RET(YPtrue);
}

FUNCODEDEF(fun_write_char_484) {
  ARG(c_, 0);
  ARG(port_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(YruntimeYport_guts),port_);
  T1 = CALL2(CHKREF(YruntimeYadd),T2,c_);
  T0 = CALL2(CHKREF(YruntimeYport_guts_setter),T1,port_);
  QRET(T0);
}

FUNCODEDEF(fun_write_string_485) {
  ARG(s_, 0);
  ARG(port_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(YruntimeYport_guts),port_);
  T1 = CALL2(CHKREF(YmacrosYcat),T2,s_);
  T0 = CALL2(CHKREF(YruntimeYport_guts_setter),T1,port_);
  QRET(T0);
}

FUNCODEDEF(fun_Pvacated_486) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPvacated));
  QRET(T0);
}

FUNCODEDEF(fun_Pvacated_setter_487) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPvacated));
  QRET(T0);
}

FUNCODEDEF(fun_488) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_Pprimary_modulus_489) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPprimary_modulus));
  QRET(T0);
}

FUNCODEDEF(fun_Pprimary_modulus_setter_490) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPprimary_modulus));
  QRET(T0);
}

FUNCODEDEF(fun_491) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_Psecondary_modulus_492) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPsecondary_modulus));
  QRET(T0);
}

FUNCODEDEF(fun_Psecondary_modulus_setter_493) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPsecondary_modulus));
  QRET(T0);
}

FUNCODEDEF(fun_494) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_Pn_buckets_495) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPn_buckets));
  QRET(T0);
}

FUNCODEDEF(fun_Pn_buckets_setter_496) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPn_buckets));
  QRET(T0);
}

FUNCODEDEF(fun_497) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_Pbucket_depth_498) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPbucket_depth));
  QRET(T0);
}

FUNCODEDEF(fun_Pbucket_depth_setter_499) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPbucket_depth));
  QRET(T0);
}

FUNCODEDEF(fun_500) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_Pdata_501) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPdata));
  QRET(T0);
}

FUNCODEDEF(fun_Pdata_setter_502) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPdata));
  QRET(T0);
}

FUNCODEDEF(fun_503) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_Pgc_state_504) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPgc_state));
  QRET(T0);
}

FUNCODEDEF(fun_Pgc_state_setter_505) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPgc_state));
  QRET(T0);
}

FUNCODEDEF(fun_506) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(YruntimeYfab_table_vector) {
  ARG(secondary_modulus_, 0);
  ARG(primary_modulus_, 1);
  ARG(bucket_depth_, 2);
  ARG(n_buckets_, 3);
  ARG(fill_value_, 4);
  ARG(size_, 5);
  P vF846;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  T12 = (P)YPpair(CHKREF(YruntimeYLsimple_table_vectorG),Ynil);
  T11 = (P)YPpair(CHKREF(YruntimeYPsecondary_modulus),Ynil);
  T10 = (P)YPpair(CHKREF(YruntimeYPprimary_modulus),T11);
  T9 = (P)YPpair(CHKREF(YruntimeYPbucket_depth),T10);
  T8 = (P)YPpair(CHKREF(YruntimeYPn_buckets),T9);
  T7 = (P)YPpair(secondary_modulus_,Ynil);
  T6 = (P)YPpair(primary_modulus_,T7);
  T5 = (P)YPpair(bucket_depth_,T6);
  T4 = (P)YPpair(n_buckets_,T5);
  T3 = CALL3(CHKREF(YPisa),T12,T8,T4);
  vF846 = T3;
  T2 = CALL2(CHKREF(YruntimeYfab),CHKREF(YLvecG),size_);
  T1 = CALL2(CHKREF(YruntimeYfill),T2,fill_value_);
  CALL2(CHKREF(YruntimeYPdata_setter),T1,vF846);
  T0 = vF846;
  RET(T0);
}

FUNCODEDEF(fun_elt_508) {
  ARG(index_, 0);
  ARG(vector_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(YruntimeYPdata),vector_);
  T1 = (P)YPiu(index_);
  T0 = (P)YPvelt(T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_509) {
  ARG(index_, 0);
  ARG(vector_, 1);
  ARG(new_value_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = CALL1(CHKREF(YruntimeYPdata),vector_);
  T1 = (P)YPiu(index_);
  T0 = (P)YPvelt_setter(new_value_,T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_clrX_510) {
  ARG(fill_value_, 0);
  ARG(vector_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(YruntimeYPdata),vector_);
  CALL2(CHKREF(YruntimeYfill),T0,fill_value_);
  T1 = CALL2(CHKREF(YruntimeYPvacated_setter),YPint((P)0),vector_);
  QRET(T1);
}

FUNCODEDEF(YruntimeYtrace) {
  ARG(args_, 0);
  ARG(msg_, 1);
  ARG(port_, 2);
  P tmpF847;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  tmpF847 = CHKREF(YruntimeYTdebug_tablesQT);
  if (tmpF847 != YPfalse) {
    T4 = CALL2(CHKREF(Ylst),port_,msg_);
    T3 = CALL2(CHKREF(YmacrosYcat),T4,args_);
    T2 = CALL2(CHKREF(Yapply),CHKREF(YruntimeYformat),T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_table_growth_factor_512) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYtable_growth_factor));
  QRET(T0);
}

FUNCODEDEF(fun_table_growth_factor_setter_513) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYtable_growth_factor));
  QRET(T0);
}

FUNCODEDEF(fun_514) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_77));
}

FUNCODEDEF(fun_table_growth_threshold_515) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYtable_growth_threshold));
  QRET(T0);
}

FUNCODEDEF(fun_table_growth_threshold_setter_516) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYtable_growth_threshold));
  QRET(T0);
}

FUNCODEDEF(fun_517) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_510));
}

FUNCODEDEF(fun_table_shrink_threshold_518) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYtable_shrink_threshold));
  QRET(T0);
}

FUNCODEDEF(fun_table_shrink_threshold_setter_519) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYtable_shrink_threshold));
  QRET(T0);
}

FUNCODEDEF(fun_520) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(lit_513));
}

FUNCODEDEF(fun_Pcount_521) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPcount));
  QRET(T0);
}

FUNCODEDEF(fun_Pcount_setter_522) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPcount));
  QRET(T0);
}

FUNCODEDEF(fun_523) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_Pvector_524) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPvector));
  QRET(T0);
}

FUNCODEDEF(fun_Pvector_setter_525) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPvector));
  QRET(T0);
}

FUNCODEDEF(fun_526) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_table_protocol_527) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYtup),CHKREF(YmacrosYEE),CHKREF(YruntimeYid_hash));
  RET(T0);
}

FUNCODEDEF(YruntimeYhash_moduli) {
  ARG(secondary_, 0);
  ARG(primary_, 1);
  ARG(hash_, 2);
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = CALL2(CHKREF(YruntimeYmodulo),hash_,primary_);
  T2 = CALL2(CHKREF(YruntimeYmodulo),hash_,secondary_);
  T1 = CALL2(CHKREF(YruntimeYA),T2,YPint((P)1));
  T0 = CALL2(CHKREF(YmacrosYtup),T3,T1);
  RET(T0);
}

FUNCODEDEF(fun_fab_529) {
  ARG(size_, 0);
  ARG(type_, 1);
  P tableF853;
  P tup20F852;
  P bucket_depthF851;
  P tup20F850;
  P n_bucketsF849;
  P tup20F848;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
loop:
  T16 = CALL1(CHKREF(YruntimeYchoose_table_geometry),size_);
  tup20F848 = T16;
  T15 = CALL1(CHKREF(Yhead),tup20F848);
  n_bucketsF849 = T15;
  T14 = CALL1(CHKREF(Ytail),tup20F848);
  tup20F850 = T14;
  T13 = CALL1(CHKREF(Yhead),tup20F850);
  bucket_depthF851 = T13;
  T12 = CALL1(CHKREF(Ytail),tup20F850);
  tup20F852 = T12;
  T11 = (P)YPpair(type_,Ynil);
  T10 = CALL3(CHKREF(YPisa),T11,Ynil,Ynil);
  tableF853 = T10;
  T9 = CALL2(CHKREF(YruntimeYT),bucket_depthF851,YPint((P)2));
  T8 = CALL2(CHKREF(YruntimeYT),n_bucketsF849,T9);
  T7 = CALL2(CHKREF(YruntimeY_),n_bucketsF849,YPint((P)2));
  T6 = CALLN(CHKREF(YruntimeYfab_table_vector),6,T8,CHKREF(YruntimeYDempty_cell_marker),n_bucketsF849,bucket_depthF851,n_bucketsF849,T7);
  CALL2(CHKREF(YruntimeYPvector_setter),T6,tableF853);
  T5 = tableF853;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_x_1203_530) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_531) {
  ARG(return_, 0);
  P x_1202F873;
  P x_1202F872;
  P x_1202F871;
  P x_1202F870;
  P x_1202F869;
  P x_1202F868;
  P x_1202F867;
  P x_1202F866;
  P x_1202F865;
  P x_1202F864;
  P x_1202F863;
  P x_1202F862;
  P x_1202F861;
  P bodyF860;
  P keyF859;
  P tableF858;
  P bucket_offsetF857;
  P bucket_indexF856;
  P x_1202F855;
  P x_1203F854;
  P T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89;
  P T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73;
  P T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57;
  P T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T104 = FUNSHELL(0,fun_x_1203_530,1);
  x_1203F854 = T104;
  FUNINIT(x_1203F854, 1,return_);
  x_1202F855 = FREEREF(0);
  bucket_indexF856 = YPfalse;
  bucket_indexF856 = BOXFAB(bucket_indexF856);
  bucket_offsetF857 = YPfalse;
  bucket_offsetF857 = BOXFAB(bucket_offsetF857);
  tableF858 = YPfalse;
  tableF858 = BOXFAB(tableF858);
  keyF859 = YPfalse;
  keyF859 = BOXFAB(keyF859);
  bodyF860 = YPfalse;
  bodyF860 = BOXFAB(bodyF860);
  T43 = CALL2(CHKREF(YisaQ),x_1202F855,CHKREF(YLlstG));
  if (T43 != YPfalse) {
    T42 = CALL3(CHKREF(YmacrosYmatch_atom),x_1202F855,CHKREF(lit_533),x_1203F854);
    x_1202F861 = T42;
    T40 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1202F861,x_1203F854);
    x_1202F862 = T40;
    T38 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1202F862,x_1203F854);
    x_1202F863 = T38;
    T37 = CALL3(CHKREF(YmacrosYmatch_atom),x_1202F863,CHKREF(lit_526),x_1203F854);
    x_1202F864 = T37;
    T35 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1202F864,x_1203F854);
    BOXVAL(bucket_indexF856) = T35;
    T36 = CALL1(CHKREF(Ytail),x_1202F864);
    x_1202F865 = T36;
    T33 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1202F865,x_1203F854);
    BOXVAL(bucket_offsetF857) = T33;
    T34 = CALL1(CHKREF(Ytail),x_1202F865);
    x_1202F866 = T34;
    T32 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1202F866,x_1203F854);
    T31 = T32;
    T30 = T31;
    T29 = T30;
    T39 = CALL1(CHKREF(Ytail),x_1202F862);
    x_1202F867 = T39;
    T27 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1202F867,x_1203F854);
    x_1202F868 = T27;
    T25 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1202F868,x_1203F854);
    BOXVAL(tableF858) = T25;
    T26 = CALL1(CHKREF(Ytail),x_1202F868);
    x_1202F869 = T26;
    T23 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1202F869,x_1203F854);
    BOXVAL(keyF859) = T23;
    T24 = CALL1(CHKREF(Ytail),x_1202F869);
    x_1202F870 = T24;
    T22 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1202F870,x_1203F854);
    T21 = T22;
    T20 = T21;
    T28 = CALL1(CHKREF(Ytail),x_1202F867);
    x_1202F871 = T28;
    T19 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1202F871,x_1203F854);
    T18 = T19;
    T17 = T18;
    T41 = CALL1(CHKREF(Ytail),x_1202F861);
    x_1202F872 = T41;
    BOXVAL(bodyF860) = x_1202F872;
    x_1202F873 = Ynil;
    T16 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1202F873,x_1203F854);
    T15 = T16;
    T14 = T15;
    T13 = T14;
  } else {
    T12 = CALL2(x_1203F854,CHKREF(lit_532),x_1202F855);
  }
  T103 = CALL1(CHKREF(Ylst),CHKREF(lit_531));
  T102 = CALL1(CHKREF(Ylst),CHKREF(lit_526));
  T101 = CALL1(CHKREF(Ylst),CHKREF(lit_530));
  T100 = CALL1(CHKREF(Ylst),CHKREF(lit_528));
  T99 = CALLN(CHKREF(YmacrosYcat),4,T102,T101,T100,Ynil);
  T98 = CALL1(CHKREF(Ylst),T99);
  T97 = CALL1(CHKREF(Ylst),CHKREF(lit_518));
  T96 = BOXVAL(tableF858);
  T95 = CALL1(CHKREF(Ylst),T96);
  T94 = CALL3(CHKREF(YmacrosYcat),T97,T95,Ynil);
  T93 = CALL1(CHKREF(Ylst),T94);
  T92 = CALL3(CHKREF(YmacrosYcat),T98,T93,Ynil);
  T91 = CALL1(CHKREF(Ylst),T92);
  T90 = CALL1(CHKREF(Ylst),CHKREF(lit_526));
  T89 = CALL1(CHKREF(Ylst),CHKREF(lit_524));
  T88 = CALL1(CHKREF(Ylst),CHKREF(lit_529));
  T87 = CALL3(CHKREF(YmacrosYcat),T89,T88,Ynil);
  T86 = CALL1(CHKREF(Ylst),T87);
  T85 = CALL1(CHKREF(Ylst),CHKREF(lit_162));
  T84 = CALLN(CHKREF(YmacrosYcat),4,T90,T86,T85,Ynil);
  T83 = CALL1(CHKREF(Ylst),T84);
  T82 = CALL1(CHKREF(Ylst),CHKREF(lit_528));
  T81 = BOXVAL(keyF859);
  T80 = CALL1(CHKREF(Ylst),T81);
  T79 = CALL3(CHKREF(YmacrosYcat),T82,T80,Ynil);
  T78 = CALL1(CHKREF(Ylst),T79);
  T77 = CALL3(CHKREF(YmacrosYcat),T83,T78,Ynil);
  T76 = CALL1(CHKREF(Ylst),T77);
  T75 = CALL1(CHKREF(Ylst),CHKREF(lit_500));
  T74 = CALL1(CHKREF(Ylst),CHKREF(lit_516));
  T73 = CALL1(CHKREF(Ylst),CHKREF(lit_527));
  T72 = CALL3(CHKREF(YmacrosYcat),T74,T73,Ynil);
  T71 = CALL1(CHKREF(Ylst),T72);
  T70 = CALL3(CHKREF(YmacrosYcat),T75,T71,Ynil);
  T69 = CALL1(CHKREF(Ylst),T70);
  T68 = CALL1(CHKREF(Ylst),CHKREF(lit_526));
  T67 = BOXVAL(bucket_indexF856);
  T66 = CALL1(CHKREF(Ylst),T67);
  T65 = BOXVAL(bucket_offsetF857);
  T64 = CALL1(CHKREF(Ylst),T65);
  T63 = CALLN(CHKREF(YmacrosYcat),4,T68,T66,T64,Ynil);
  T62 = CALL1(CHKREF(Ylst),T63);
  T61 = CALL1(CHKREF(Ylst),CHKREF(lit_521));
  T60 = CALL1(CHKREF(Ylst),CHKREF(lit_524));
  T59 = CALL1(CHKREF(Ylst),CHKREF(lit_481));
  T58 = CALL1(CHKREF(Ylst),CHKREF(lit_500));
  T57 = CALL3(CHKREF(YmacrosYcat),T59,T58,Ynil);
  T56 = CALL1(CHKREF(Ylst),T57);
  T55 = CALL1(CHKREF(Ylst),CHKREF(lit_483));
  T54 = CALL1(CHKREF(Ylst),CHKREF(lit_500));
  T53 = CALL3(CHKREF(YmacrosYcat),T55,T54,Ynil);
  T52 = CALL1(CHKREF(Ylst),T53);
  T51 = CALLN(CHKREF(YmacrosYcat),5,T61,T60,T56,T52,Ynil);
  T50 = CALL1(CHKREF(Ylst),T51);
  T49 = CALL3(CHKREF(YmacrosYcat),T62,T50,Ynil);
  T48 = CALL1(CHKREF(Ylst),T49);
  T47 = CALLN(CHKREF(YmacrosYcat),5,T91,T76,T69,T48,Ynil);
  T46 = CALL1(CHKREF(Ylst),T47);
  T45 = BOXVAL(bodyF860);
  T44 = CALLN(CHKREF(YmacrosYcat),4,T103,T46,T45,Ynil);
  T10 = T44;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_532) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_531,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_inner_533) {
  ARG(this_bucket_raw_index_, 0);
  ARG(i_, 1);
  P this_keyF874;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T12 = CALL2(CHKREF(YruntimeYL),i_,FREEREF(2));
  if (T12 != YPfalse) {
    T11 = CALL2(CHKREF(YruntimeYelt),FREEREF(0),this_bucket_raw_index_);
    this_keyF874 = T11;
    T3 = CALL2(CHKREF(YmacrosYEE),this_keyF874,CHKREF(YruntimeYDempty_cell_marker));
    if (T3 != YPfalse) {
      T2 = CALL1(FREEREF(3),CHKREF(Ynul));
    } else {
    }
    T7 = CALL2(FREEREF(5),FREEREF(4),this_keyF874);
    if (T7 != YPfalse) {
      T6 = CALL2(CHKREF(YruntimeYA),this_bucket_raw_index_,FREEREF(2));
      T5 = CALL2(CHKREF(YruntimeYelt),FREEREF(0),T6);
      T4 = CALL1(FREEREF(3),T5);
    } else {
    }
    T10 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    T9 = CALL2(CHKREF(YruntimeYA),this_bucket_raw_index_,YPint((P)1));
    a1 = T10;
    a2 = T9;
    i_ = a1;
    this_bucket_raw_index_ = a2;
    goto loop;
    T1 = T8;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_outer_534) {
  ARG(probes_, 0);
  P innerF876;
  P indexF875;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = CALL2(CHKREF(YruntimeYL),probes_,FREEREF(3));
  if (T16 != YPfalse) {
    T15 = BOXVAL(FREEREF(1));
    T14 = CALL2(CHKREF(YruntimeYT),FREEREF(0),YPint((P)2));
    T13 = CALL2(CHKREF(YruntimeYT),T15,T14);
    indexF875 = T13;
    T3 = FUNSHELL(1,fun_inner_533,6);
    innerF876 = T3;
    FUNINIT(innerF876, 6,FREEREF(8),innerF876,FREEREF(0),FREEREF(7),FREEREF(6),FREEREF(5));
    T2 = KCALL2(innerF876,YPint((P)0),indexF875);
    T5 = BOXVAL(FREEREF(1));
    T4 = CALL2(CHKREF(YruntimeY_),T5,FREEREF(4));
    BOXVAL(FREEREF(1)) = T4;
    T10 = BOXVAL(FREEREF(1));
    T9 = CALL1(CHKREF(YruntimeYnegQ),T10);
    if (T9 != YPfalse) {
      T8 = BOXVAL(FREEREF(1));
      T7 = CALL2(CHKREF(YruntimeYA),T8,FREEREF(3));
      T6 = BOXVAL(FREEREF(1)) = T7;
    } else {
    }
    T12 = CALL2(CHKREF(YruntimeYA),probes_,YPint((P)1));
    a1 = T12;
    probes_ = a1;
    goto loop;
    T1 = T11;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_535) {
  ARG(return_, 0);
  P outerF895;
  P tup23F894;
  P bucket_offsetF893;
  P tup23F892;
  P bucket_indexF891;
  P tup23F890;
  P bucket_depthF889;
  P n_bucketsF888;
  P vectorF887;
  P tup22F886;
  P stateF885;
  P tup22F884;
  P hashF883;
  P tup22F882;
  P tup21F881;
  P hash_functionF880;
  P tup21F879;
  P test_functionF878;
  P tup21F877;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T41 = CALL1(CHKREF(YruntimeYtable_protocol),FREEREF(0));
  tup21F877 = T41;
  T40 = CALL1(CHKREF(Yhead),tup21F877);
  test_functionF878 = T40;
  T39 = CALL1(CHKREF(Ytail),tup21F877);
  tup21F879 = T39;
  T38 = CALL1(CHKREF(Yhead),tup21F879);
  hash_functionF880 = T38;
  T37 = CALL1(CHKREF(Ytail),tup21F879);
  tup21F881 = T37;
  T36 = CALL1(hash_functionF880,FREEREF(1));
  tup22F882 = T36;
  T35 = CALL1(CHKREF(Yhead),tup22F882);
  check_type(T35,CHKREF(YLintG));
  hashF883 = T35;
  T34 = CALL1(CHKREF(Ytail),tup22F882);
  tup22F884 = T34;
  T33 = CALL1(CHKREF(Yhead),tup22F884);
  stateF885 = T33;
  T32 = CALL1(CHKREF(Ytail),tup22F884);
  tup22F886 = T32;
  T31 = CALL1(CHKREF(YruntimeYPvector),FREEREF(0));
  vectorF887 = T31;
  T30 = CALL1(CHKREF(YruntimeYPn_buckets),vectorF887);
  n_bucketsF888 = T30;
  T29 = CALL1(CHKREF(YruntimeYPbucket_depth),vectorF887);
  bucket_depthF889 = T29;
  T28 = CALL1(CHKREF(YruntimeYPprimary_modulus),vectorF887);
  T27 = CALL1(CHKREF(YruntimeYPsecondary_modulus),vectorF887);
  T26 = CALL3(CHKREF(YruntimeYhash_moduli),hashF883,T28,T27);
  tup23F890 = T26;
  T25 = CALL1(CHKREF(Yhead),tup23F890);
  bucket_indexF891 = T25;
  bucket_indexF891 = BOXFAB(bucket_indexF891);
  T24 = CALL1(CHKREF(Ytail),tup23F890);
  tup23F892 = T24;
  T23 = CALL1(CHKREF(Yhead),tup23F892);
  bucket_offsetF893 = T23;
  T22 = CALL1(CHKREF(Ytail),tup23F892);
  tup23F894 = T22;
  T20 = FUNSHELL(1,fun_outer_534,9);
  outerF895 = T20;
  FUNINIT(outerF895, 9,bucket_depthF889,bucket_indexF891,outerF895,n_bucketsF888,bucket_offsetF893,test_functionF878,FREEREF(1),return_,vectorF887);
  T19 = KCALL1(outerF895,YPint((P)0));
  T21 = CALL1(CHKREF(Yerror),CHKREF(lit_535));
  T18 = T21;
  T17 = T18;
  T16 = T17;
  T14 = T16;
  T13 = T14;
  T12 = T13;
  T11 = T12;
  T10 = T11;
  T9 = T10;
  T8 = T9;
  T7 = T8;
  T6 = T7;
  T5 = T6;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_elt_536) {
  ARG(key_, 0);
  ARG(table_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = FUNFAB(fun_535,2,table_,key_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_inner_537) {
  ARG(this_bucket_raw_index_, 0);
  ARG(i_, 1);
  P x_1204F900;
  P indexF899;
  P x_1205F898;
  P this_keyF897;
  P vacancy_indexF896;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T36 = CALL2(CHKREF(YruntimeYL),i_,FREEREF(4));
  if (T36 != YPfalse) {
    vacancy_indexF896 = YPfalse;
    vacancy_indexF896 = BOXFAB(vacancy_indexF896);
    T35 = BOXVAL(FREEREF(0));
    T34 = CALL2(CHKREF(YruntimeYelt),T35,this_bucket_raw_index_);
    this_keyF897 = T34;
    T30 = CALL2(CHKREF(YmacrosYEE),this_keyF897,CHKREF(YruntimeYDempty_cell_marker));
    if (T30 != YPfalse) {
      T29 = BOXVAL(vacancy_indexF896);
      if (T29 != YPfalse) {
        T27 = BOXVAL(FREEREF(0));
        x_1205F898 = T27;
        T26 = CALL1(CHKREF(YruntimeYPvacated),x_1205F898);
        T25 = CALL2(CHKREF(YruntimeY_),T26,YPint((P)1));
        T24 = CALL2(CHKREF(YruntimeYPvacated_setter),T25,x_1205F898);
        T28 = BOXVAL(vacancy_indexF896);
        T23 = T28;
      } else {
        T23 = this_bucket_raw_index_;
      }
      indexF899 = T23;
      T16 = BOXVAL(FREEREF(0));
      CALL3(CHKREF(YruntimeYelt_setter),FREEREF(5),T16,indexF899);
      T18 = BOXVAL(FREEREF(0));
      T17 = CALL2(CHKREF(YruntimeYA),indexF899,FREEREF(4));
      CALL3(CHKREF(YruntimeYelt_setter),FREEREF(2),T18,T17);
      x_1204F900 = FREEREF(7);
      T21 = CALL1(CHKREF(YruntimeYPcount),x_1204F900);
      T20 = CALL2(CHKREF(YruntimeYA),T21,YPint((P)1));
      T19 = CALL2(CHKREF(YruntimeYPcount_setter),T20,x_1204F900);
      T22 = CALL1(FREEREF(3),FREEREF(2));
      T15 = T22;
    } else {
      T14 = CALL2(CHKREF(YmacrosYEE),this_keyF897,CHKREF(YruntimeYDvacated_cell_marker));
      if (T14 != YPfalse) {
        T13 = BOXVAL(vacancy_indexF896);
        T12 = CALL1(CHKREF(Ynot),T13);
        if (T12 != YPfalse) {
          T11 = BOXVAL(vacancy_indexF896) = this_bucket_raw_index_;
          T10 = T11;
        } else {
          T10 = YPfalse;
        }
        T4 = T10;
      } else {
        T9 = CALL2(FREEREF(6),FREEREF(5),this_keyF897);
        if (T9 != YPfalse) {
          T7 = BOXVAL(FREEREF(0));
          T6 = CALL2(CHKREF(YruntimeYA),this_bucket_raw_index_,FREEREF(4));
          CALL3(CHKREF(YruntimeYelt_setter),FREEREF(2),T7,T6);
          T8 = CALL1(FREEREF(3),FREEREF(2));
          T5 = T8;
        } else {
          T5 = YPfalse;
        }
        T4 = T5;
      }
    }
    T33 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    T32 = CALL2(CHKREF(YruntimeYA),this_bucket_raw_index_,YPint((P)1));
    a1 = T33;
    a2 = T32;
    i_ = a1;
    this_bucket_raw_index_ = a2;
    goto loop;
    T3 = T31;
    T1 = T3;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_outer_538) {
  ARG(probes_, 0);
  P innerF902;
  P indexF901;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = CALL2(CHKREF(YruntimeYL),probes_,FREEREF(3));
  if (T16 != YPfalse) {
    T15 = BOXVAL(FREEREF(1));
    T14 = CALL2(CHKREF(YruntimeYT),FREEREF(0),YPint((P)2));
    T13 = CALL2(CHKREF(YruntimeYT),T15,T14);
    indexF901 = T13;
    T3 = FUNSHELL(1,fun_inner_537,8);
    innerF902 = T3;
    FUNINIT(innerF902, 8,FREEREF(10),innerF902,FREEREF(9),FREEREF(8),FREEREF(0),FREEREF(7),FREEREF(6),FREEREF(5));
    T2 = CALL2(innerF902,YPint((P)0),indexF901);
    T5 = BOXVAL(FREEREF(1));
    T4 = CALL2(CHKREF(YruntimeY_),T5,FREEREF(4));
    BOXVAL(FREEREF(1)) = T4;
    T10 = BOXVAL(FREEREF(1));
    T9 = CALL1(CHKREF(YruntimeYnegQ),T10);
    if (T9 != YPfalse) {
      T8 = BOXVAL(FREEREF(1));
      T7 = CALL2(CHKREF(YruntimeYA),T8,FREEREF(3));
      T6 = BOXVAL(FREEREF(1)) = T7;
    } else {
    }
    T12 = CALL2(CHKREF(YruntimeYA),probes_,YPint((P)1));
    a1 = T12;
    probes_ = a1;
    goto loop;
    T1 = T11;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_539) {
  ARG(return_, 0);
  P outerF920;
  P tup26F919;
  P bucket_offsetF918;
  P tup26F917;
  P bucket_indexF916;
  P tup26F915;
  P n_bucketsF914;
  P bucket_depthF913;
  P tup25F912;
  P stateF911;
  P tup25F910;
  P hashF909;
  P tup25F908;
  P tup24F907;
  P hash_functionF906;
  P tup24F905;
  P test_functionF904;
  P tup24F903;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T43 = CALL1(CHKREF(YruntimeYtable_protocol),FREEREF(0));
  tup24F903 = T43;
  T42 = CALL1(CHKREF(Yhead),tup24F903);
  test_functionF904 = T42;
  T41 = CALL1(CHKREF(Ytail),tup24F903);
  tup24F905 = T41;
  T40 = CALL1(CHKREF(Yhead),tup24F905);
  hash_functionF906 = T40;
  T39 = CALL1(CHKREF(Ytail),tup24F905);
  tup24F907 = T39;
  T38 = CALL1(hash_functionF906,FREEREF(1));
  tup25F908 = T38;
  T37 = CALL1(CHKREF(Yhead),tup25F908);
  check_type(T37,CHKREF(YLintG));
  hashF909 = T37;
  T36 = CALL1(CHKREF(Ytail),tup25F908);
  tup25F910 = T36;
  T35 = CALL1(CHKREF(Yhead),tup25F910);
  stateF911 = T35;
  T34 = CALL1(CHKREF(Ytail),tup25F910);
  tup25F912 = T34;
  T33 = BOXVAL(FREEREF(2));
  T32 = CALL1(CHKREF(YruntimeYPbucket_depth),T33);
  bucket_depthF913 = T32;
  T31 = BOXVAL(FREEREF(2));
  T30 = CALL1(CHKREF(YruntimeYPn_buckets),T31);
  n_bucketsF914 = T30;
  T29 = BOXVAL(FREEREF(2));
  T28 = CALL1(CHKREF(YruntimeYPprimary_modulus),T29);
  T27 = BOXVAL(FREEREF(2));
  T26 = CALL1(CHKREF(YruntimeYPsecondary_modulus),T27);
  T25 = CALL3(CHKREF(YruntimeYhash_moduli),hashF909,T28,T26);
  tup26F915 = T25;
  T24 = CALL1(CHKREF(Yhead),tup26F915);
  bucket_indexF916 = T24;
  bucket_indexF916 = BOXFAB(bucket_indexF916);
  T23 = CALL1(CHKREF(Ytail),tup26F915);
  tup26F917 = T23;
  T22 = CALL1(CHKREF(Yhead),tup26F917);
  bucket_offsetF918 = T22;
  T21 = CALL1(CHKREF(Ytail),tup26F917);
  tup26F919 = T21;
  T19 = FUNSHELL(1,fun_outer_538,11);
  outerF920 = T19;
  FUNINIT(outerF920, 11,bucket_depthF913,bucket_indexF916,outerF920,n_bucketsF914,bucket_offsetF918,FREEREF(0),test_functionF904,FREEREF(1),return_,FREEREF(3),FREEREF(2));
  T18 = CALL1(outerF920,YPint((P)0));
  T20 = CALL1(CHKREF(Yerror),CHKREF(lit_539));
  T17 = T20;
  T16 = T17;
  T15 = T16;
  T13 = T15;
  T12 = T13;
  T11 = T12;
  T10 = T11;
  T9 = T10;
  T8 = T9;
  T7 = T8;
  T6 = T7;
  T5 = T6;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_540) {
  ARG(key_, 0);
  ARG(table_, 1);
  ARG(value_, 2);
  P vectorF921;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3;
loop:
  T32 = CALL1(CHKREF(YruntimeYPvector),table_);
  vectorF921 = T32;
  vectorF921 = BOXFAB(vectorF921);
  T29 = CALL1(CHKREF(YruntimeYPcount),table_);
  T28 = BOXVAL(vectorF921);
  T27 = CALL1(CHKREF(YruntimeYPn_buckets),T28);
  T26 = BOXVAL(vectorF921);
  T25 = CALL1(CHKREF(YruntimeYPbucket_depth),T26);
  T24 = CALL2(CHKREF(YruntimeYT),T27,T25);
  T23 = CALL1(CHKREF(YruntimeYtable_growth_threshold),table_);
  T22 = CALL2(CHKREF(YruntimeYT),T24,T23);
  T21 = CALL2(CHKREF(YruntimeYG),T29,T22);
  if (T21 != YPfalse) {
    T20 = CALL1(CHKREF(YruntimeYgrow_table),table_);
    T19 = CALL1(CHKREF(YruntimeYPvector),T20);
    T18 = BOXVAL(vectorF921) = T19;
  } else {
    T17 = CALL1(CHKREF(YruntimeYPcount),table_);
    T16 = BOXVAL(vectorF921);
    T15 = CALL1(CHKREF(YruntimeYPvacated),T16);
    T14 = CALL2(CHKREF(YruntimeYA),T17,T15);
    T13 = BOXVAL(vectorF921);
    T12 = CALL1(CHKREF(YruntimeYPn_buckets),T13);
    T11 = BOXVAL(vectorF921);
    T10 = CALL1(CHKREF(YruntimeYPbucket_depth),T11);
    T9 = CALL2(CHKREF(YruntimeYT),T12,T10);
    T8 = CALL1(CHKREF(YruntimeYtable_growth_threshold),table_);
    T7 = CALL2(CHKREF(YruntimeYT),T9,T8);
    T6 = CALL2(CHKREF(YruntimeYG),T14,T7);
    if (T6 != YPfalse) {
      T5 = CALL1(CHKREF(YruntimeYrehash_table),table_);
      T4 = CALL1(CHKREF(YruntimeYPvector),T5);
      T3 = BOXVAL(vectorF921) = T4;
      T2 = T3;
    } else {
      T2 = YPfalse;
    }
  }
  T31 = FUNFAB(fun_539,4,table_,key_,vectorF921,value_);
  T30 = with_exit(T31);
  T0 = T30;
  QRET(T0);
}

FUNCODEDEF(fun_inner_541) {
  ARG(this_bucket_raw_index_, 0);
  ARG(i_, 1);
  P tmpF925;
  P x_1206F924;
  P x_1207F923;
  P this_keyF922;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T19 = CALL2(CHKREF(YruntimeYL),i_,FREEREF(6));
  if (T19 != YPfalse) {
    T18 = CALL2(CHKREF(YruntimeYelt),FREEREF(0),this_bucket_raw_index_);
    this_keyF922 = T18;
    T3 = CALL2(CHKREF(YmacrosYEE),this_keyF922,CHKREF(YruntimeYDempty_cell_marker));
    if (T3 != YPfalse) {
      T2 = CALL1(FREEREF(2),YPfalse);
    } else {
    }
    T14 = CALL2(CHKREF(YruntimeYNEE),this_keyF922,CHKREF(YruntimeYDvacated_cell_marker));
    tmpF925 = T14;
    if (tmpF925 != YPfalse) {
      T13 = CALL2(FREEREF(5),FREEREF(4),this_keyF922);
      T12 = T13;
    } else {
      T12 = YPfalse;
    }
    T11 = T12;
    if (T11 != YPfalse) {
      CALL3(CHKREF(YruntimeYelt_setter),CHKREF(YruntimeYDvacated_cell_marker),FREEREF(0),this_bucket_raw_index_);
      x_1206F924 = FREEREF(3);
      T6 = CALL1(CHKREF(YruntimeYPcount),x_1206F924);
      T5 = CALL2(CHKREF(YruntimeY_),T6,YPint((P)1));
      T4 = CALL2(CHKREF(YruntimeYPcount_setter),T5,x_1206F924);
      x_1207F923 = FREEREF(0);
      T9 = CALL1(CHKREF(YruntimeYPvacated),x_1207F923);
      T8 = CALL2(CHKREF(YruntimeYA),T9,YPint((P)1));
      T7 = CALL2(CHKREF(YruntimeYPvacated_setter),T8,x_1207F923);
      T10 = CALL1(FREEREF(2),YPtrue);
    } else {
    }
    T17 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    T16 = CALL2(CHKREF(YruntimeYA),this_bucket_raw_index_,YPint((P)1));
    a1 = T17;
    a2 = T16;
    i_ = a1;
    this_bucket_raw_index_ = a2;
    goto loop;
    T1 = T15;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_outer_542) {
  ARG(probes_, 0);
  P innerF927;
  P indexF926;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = CALL2(CHKREF(YruntimeYL),probes_,FREEREF(3));
  if (T16 != YPfalse) {
    T15 = BOXVAL(FREEREF(1));
    T14 = CALL2(CHKREF(YruntimeYT),FREEREF(0),YPint((P)2));
    T13 = CALL2(CHKREF(YruntimeYT),T15,T14);
    check_type(T13,CHKREF(YLintG));
    indexF926 = T13;
    T3 = FUNSHELL(1,fun_inner_541,7);
    innerF927 = T3;
    FUNINIT(innerF927, 7,FREEREF(9),innerF927,FREEREF(8),FREEREF(7),FREEREF(6),FREEREF(5),FREEREF(0));
    T2 = CALL2(innerF927,YPint((P)0),indexF926);
    T5 = BOXVAL(FREEREF(1));
    T4 = CALL2(CHKREF(YruntimeY_),T5,FREEREF(4));
    BOXVAL(FREEREF(1)) = T4;
    T10 = BOXVAL(FREEREF(1));
    T9 = CALL1(CHKREF(YruntimeYnegQ),T10);
    if (T9 != YPfalse) {
      T8 = BOXVAL(FREEREF(1));
      T7 = CALL2(CHKREF(YruntimeYA),T8,FREEREF(3));
      T6 = BOXVAL(FREEREF(1)) = T7;
    } else {
    }
    T12 = CALL2(CHKREF(YruntimeYA),probes_,YPint((P)1));
    a1 = T12;
    probes_ = a1;
    goto loop;
    T1 = T11;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_543) {
  ARG(return_, 0);
  P outerF946;
  P tup29F945;
  P bucket_offsetF944;
  P tup29F943;
  P bucket_indexF942;
  P tup29F941;
  P bucket_depthF940;
  P n_bucketsF939;
  P vectorF938;
  P tup28F937;
  P stateF936;
  P tup28F935;
  P hashF934;
  P tup28F933;
  P tup27F932;
  P hash_functionF931;
  P tup27F930;
  P test_functionF929;
  P tup27F928;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T41 = CALL1(CHKREF(YruntimeYtable_protocol),FREEREF(0));
  tup27F928 = T41;
  T40 = CALL1(CHKREF(Yhead),tup27F928);
  test_functionF929 = T40;
  T39 = CALL1(CHKREF(Ytail),tup27F928);
  tup27F930 = T39;
  T38 = CALL1(CHKREF(Yhead),tup27F930);
  hash_functionF931 = T38;
  T37 = CALL1(CHKREF(Ytail),tup27F930);
  tup27F932 = T37;
  T36 = CALL1(hash_functionF931,FREEREF(1));
  tup28F933 = T36;
  T35 = CALL1(CHKREF(Yhead),tup28F933);
  check_type(T35,CHKREF(YLintG));
  hashF934 = T35;
  T34 = CALL1(CHKREF(Ytail),tup28F933);
  tup28F935 = T34;
  T33 = CALL1(CHKREF(Yhead),tup28F935);
  stateF936 = T33;
  T32 = CALL1(CHKREF(Ytail),tup28F935);
  tup28F937 = T32;
  T31 = CALL1(CHKREF(YruntimeYPvector),FREEREF(0));
  vectorF938 = T31;
  T30 = CALL1(CHKREF(YruntimeYPn_buckets),vectorF938);
  n_bucketsF939 = T30;
  T29 = CALL1(CHKREF(YruntimeYPbucket_depth),vectorF938);
  bucket_depthF940 = T29;
  T28 = CALL1(CHKREF(YruntimeYPprimary_modulus),vectorF938);
  T27 = CALL1(CHKREF(YruntimeYPsecondary_modulus),vectorF938);
  T26 = CALL3(CHKREF(YruntimeYhash_moduli),hashF934,T28,T27);
  tup29F941 = T26;
  T25 = CALL1(CHKREF(Yhead),tup29F941);
  bucket_indexF942 = T25;
  bucket_indexF942 = BOXFAB(bucket_indexF942);
  T24 = CALL1(CHKREF(Ytail),tup29F941);
  tup29F943 = T24;
  T23 = CALL1(CHKREF(Yhead),tup29F943);
  bucket_offsetF944 = T23;
  T22 = CALL1(CHKREF(Ytail),tup29F943);
  tup29F945 = T22;
  T20 = FUNSHELL(1,fun_outer_542,10);
  outerF946 = T20;
  FUNINIT(outerF946, 10,bucket_depthF940,bucket_indexF942,outerF946,n_bucketsF939,bucket_offsetF944,test_functionF929,FREEREF(1),FREEREF(0),return_,vectorF938);
  T19 = CALL1(outerF946,YPint((P)0));
  T21 = CALL1(CHKREF(Yerror),CHKREF(lit_541));
  T18 = T21;
  T17 = T18;
  T16 = T17;
  T14 = T16;
  T13 = T14;
  T12 = T13;
  T11 = T12;
  T10 = T11;
  T9 = T10;
  T8 = T9;
  T7 = T8;
  T6 = T7;
  T5 = T6;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_del_key_544) {
  ARG(key_, 0);
  ARG(table_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = FUNFAB(fun_543,2,table_,key_);
  T0 = with_exit(T1);
  RET(T0);
}

FUNCODEDEF(fun_inner_545) {
  ARG(i_, 0);
  P tmpF949;
  P indexF948;
  P keyF947;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T20 = CALL2(CHKREF(YruntimeYL),i_,FREEREF(1));
  if (T20 != YPfalse) {
    T17 = CALL2(CHKREF(YruntimeYT),FREEREF(1),YPint((P)2));
    T16 = CALL2(CHKREF(YruntimeYT),FREEREF(2),T17);
    T15 = CALL2(CHKREF(YruntimeYA),i_,T16);
    T14 = CALL2(CHKREF(YruntimeYelt),FREEREF(3),T15);
    keyF947 = T14;
    T13 = CALL2(CHKREF(YmacrosYEE),keyF947,CHKREF(YruntimeYDempty_cell_marker));
    tmpF949 = T13;
    if (tmpF949 != YPfalse) {
      T11 = tmpF949;
    } else {
      T12 = CALL2(CHKREF(YmacrosYEE),keyF947,CHKREF(YruntimeYDvacated_cell_marker));
      T11 = T12;
    }
    T10 = T11;
    T9 = CALL1(CHKREF(Ynot),T10);
    if (T9 != YPfalse) {
      CALLN(CHKREF(YruntimeYtrace),4,CHKREF(YruntimeYout),CHKREF(lit_544),FREEREF(2),i_);
      T8 = CALL2(CHKREF(YruntimeYT),FREEREF(1),YPint((P)2));
      T7 = CALL2(CHKREF(YruntimeYT),FREEREF(2),T8);
      T6 = CALL2(CHKREF(YruntimeYA),T7,FREEREF(1));
      T5 = CALL2(CHKREF(YruntimeYA),i_,T6);
      indexF948 = T5;
      T4 = CALL2(CHKREF(YruntimeYelt),FREEREF(3),indexF948);
      T3 = CALL2(FREEREF(4),keyF947,T4);
      T2 = T3;
      T1 = T2;
    } else {
      T1 = YPfalse;
    }
    T19 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T19;
    i_ = a1;
    goto loop;
    T0 = T18;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_outer_546) {
  ARG(b_, 0);
  P innerF950;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL2(CHKREF(YruntimeYL),b_,FREEREF(4));
  if (T5 != YPfalse) {
    T2 = FUNSHELL(1,fun_inner_545,5);
    innerF950 = T2;
    FUNINIT(innerF950, 5,innerF950,FREEREF(3),b_,FREEREF(2),FREEREF(1));
    T1 = CALL1(innerF950,YPint((P)0));
    T4 = CALL2(CHKREF(YruntimeYA),b_,YPint((P)1));
    a1 = T4;
    b_ = a1;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_do_keyed_547) {
  ARG(table_, 0);
  ARG(function_, 1);
  P outerF954;
  P depthF953;
  P n_bucketsF952;
  P vectorF951;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL1(CHKREF(YruntimeYPvector),table_);
  vectorF951 = T8;
  T7 = CALL1(CHKREF(YruntimeYPn_buckets),vectorF951);
  n_bucketsF952 = T7;
  T6 = CALL1(CHKREF(YruntimeYPbucket_depth),vectorF951);
  depthF953 = T6;
  T5 = FUNSHELL(1,fun_outer_546,5);
  outerF954 = T5;
  FUNINIT(outerF954, 5,outerF954,function_,vectorF951,depthF953,n_bucketsF952);
  T4 = CALL1(outerF954,YPint((P)0));
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_inner_548) {
  ARG(i_, 0);
  P tmpF957;
  P indexF956;
  P keyF955;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T20 = CALL2(CHKREF(YruntimeYL),i_,FREEREF(1));
  if (T20 != YPfalse) {
    T17 = CALL2(CHKREF(YruntimeYT),FREEREF(1),YPint((P)2));
    T16 = CALL2(CHKREF(YruntimeYT),FREEREF(2),T17);
    T15 = CALL2(CHKREF(YruntimeYA),i_,T16);
    T14 = CALL2(CHKREF(YruntimeYelt),FREEREF(3),T15);
    keyF955 = T14;
    T13 = CALL2(CHKREF(YmacrosYEE),keyF955,CHKREF(YruntimeYDempty_cell_marker));
    tmpF957 = T13;
    if (tmpF957 != YPfalse) {
      T11 = tmpF957;
    } else {
      T12 = CALL2(CHKREF(YmacrosYEE),keyF955,CHKREF(YruntimeYDvacated_cell_marker));
      T11 = T12;
    }
    T10 = T11;
    T9 = CALL1(CHKREF(Ynot),T10);
    if (T9 != YPfalse) {
      T8 = CALL2(CHKREF(YruntimeYT),FREEREF(1),YPint((P)2));
      T7 = CALL2(CHKREF(YruntimeYT),FREEREF(2),T8);
      T6 = CALL2(CHKREF(YruntimeYA),T7,FREEREF(1));
      T5 = CALL2(CHKREF(YruntimeYA),i_,T6);
      indexF956 = T5;
      T4 = CALL2(CHKREF(YruntimeYelt),FREEREF(3),indexF956);
      T3 = CALL1(FREEREF(4),T4);
      T2 = T3;
      T1 = T2;
    } else {
      T1 = YPfalse;
    }
    T19 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T19;
    i_ = a1;
    goto loop;
    T0 = T18;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_outer_549) {
  ARG(b_, 0);
  P innerF958;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL2(CHKREF(YruntimeYL),b_,FREEREF(4));
  if (T5 != YPfalse) {
    T2 = FUNSHELL(1,fun_inner_548,5);
    innerF958 = T2;
    FUNINIT(innerF958, 5,innerF958,FREEREF(3),b_,FREEREF(2),FREEREF(1));
    T1 = CALL1(innerF958,YPint((P)0));
    T4 = CALL2(CHKREF(YruntimeYA),b_,YPint((P)1));
    a1 = T4;
    b_ = a1;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_do_550) {
  ARG(table_, 0);
  ARG(function_, 1);
  P outerF962;
  P depthF961;
  P n_bucketsF960;
  P vectorF959;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = CALL1(CHKREF(YruntimeYPvector),table_);
  vectorF959 = T8;
  T7 = CALL1(CHKREF(YruntimeYPn_buckets),vectorF959);
  n_bucketsF960 = T7;
  T6 = CALL1(CHKREF(YruntimeYPbucket_depth),vectorF959);
  depthF961 = T6;
  T5 = FUNSHELL(1,fun_outer_549,5);
  outerF962 = T5;
  FUNINIT(outerF962, 5,outerF962,function_,vectorF959,depthF961,n_bucketsF960);
  T4 = CALL1(outerF962,YPint((P)0));
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_del_keys_551) {
  ARG(table_, 0);
  P T1,T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeYPvector),table_);
  CALL2(CHKREF(YruntimeYclrX),T0,CHKREF(YruntimeYDempty_cell_marker));
  T1 = CALL2(CHKREF(YruntimeYPcount_setter),YPint((P)0),table_);
  QRET(T1);
}

FUNCODEDEF(fun_len_552) {
  ARG(table_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YruntimeYPcount),table_);
  RET(T0);
}

FUNCODEDEF(fun_Pvector_553) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPvector));
  QRET(T0);
}

FUNCODEDEF(fun_Pvector_setter_554) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPvector));
  QRET(T0);
}

FUNCODEDEF(fun_555) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_Pbucket_556) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPbucket));
  QRET(T0);
}

FUNCODEDEF(fun_Pbucket_setter_557) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPbucket));
  QRET(T0);
}

FUNCODEDEF(fun_558) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_Pindex_559) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YruntimeYPindex));
  QRET(T0);
}

FUNCODEDEF(fun_Pindex_setter_560) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YruntimeYPindex));
  QRET(T0);
}

FUNCODEDEF(fun_561) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_inner_562) {
  ARG(i_, 0);
  P tmpF964;
  P keyF963;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T22 = CALL2(CHKREF(YruntimeYL),i_,FREEREF(0));
  if (T22 != YPfalse) {
    T21 = CALL2(CHKREF(YruntimeYT),FREEREF(0),YPint((P)2));
    T20 = CALL2(CHKREF(YruntimeYT),FREEREF(1),T21);
    T19 = CALL2(CHKREF(YruntimeYA),i_,T20);
    T18 = CALL2(CHKREF(YruntimeYelt),FREEREF(2),T19);
    keyF963 = T18;
    T15 = CALL2(CHKREF(YmacrosYEE),keyF963,CHKREF(YruntimeYDempty_cell_marker));
    tmpF964 = T15;
    if (tmpF964 != YPfalse) {
      T13 = tmpF964;
    } else {
      T14 = CALL2(CHKREF(YmacrosYEE),keyF963,CHKREF(YruntimeYDvacated_cell_marker));
      T13 = T14;
    }
    T12 = T13;
    T11 = CALL1(CHKREF(Ynot),T12);
    if (T11 != YPfalse) {
      T10 = (P)YPpair(CHKREF(YruntimeYLtab_stateG),Ynil);
      T9 = (P)YPpair(CHKREF(YruntimeYPindex),Ynil);
      T8 = (P)YPpair(CHKREF(YruntimeYPbucket),T9);
      T7 = (P)YPpair(CHKREF(YruntimeYPvector),T8);
      T6 = (P)YPpair(i_,Ynil);
      T5 = (P)YPpair(FREEREF(1),T6);
      T4 = (P)YPpair(FREEREF(2),T5);
      T3 = CALL3(CHKREF(YPisa),T10,T7,T4);
      T2 = CALL1(FREEREF(4),T3);
    } else {
    }
    T17 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T17;
    i_ = a1;
    goto loop;
    T1 = T16;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_outer_563) {
  ARG(b_, 0);
  P innerF965;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = CALL2(CHKREF(YruntimeYL),b_,FREEREF(4));
  if (T5 != YPfalse) {
    T2 = FUNSHELL(1,fun_inner_562,5);
    innerF965 = T2;
    FUNINIT(innerF965, 5,FREEREF(3),b_,FREEREF(2),innerF965,FREEREF(1));
    T1 = CALL1(innerF965,YPint((P)0));
    T4 = CALL2(CHKREF(YruntimeYA),b_,YPint((P)1));
    a1 = T4;
    b_ = a1;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_564) {
  ARG(return_, 0);
  P outerF969;
  P depthF968;
  P n_bucketsF967;
  P vectorF966;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(YruntimeYPvector),FREEREF(0));
  vectorF966 = T7;
  T6 = CALL1(CHKREF(YruntimeYPn_buckets),vectorF966);
  n_bucketsF967 = T6;
  T5 = CALL1(CHKREF(YruntimeYPbucket_depth),vectorF966);
  depthF968 = T5;
  T4 = FUNSHELL(1,fun_outer_563,5);
  outerF969 = T4;
  FUNINIT(outerF969, 5,outerF969,return_,vectorF966,depthF968,n_bucketsF967);
  T3 = CALL1(outerF969,YPint((P)0));
  T2 = YPfalse;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_ini_state_565) {
  ARG(table_, 0);
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL1(CHKREF(YruntimeYlen),table_);
  T3 = CALL2(CHKREF(YruntimeYE),T4,YPint((P)0));
  if (T3 != YPfalse) {
    T0 = YPfalse;
  } else {
    T2 = FUNFAB(fun_564,1,table_);
    T1 = with_exit(T2);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_inner_566) {
  ARG(i_, 0);
  P tmpF971;
  P keyF970;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T14 = CALL2(CHKREF(YruntimeYL),i_,FREEREF(0));
  if (T14 != YPfalse) {
    T13 = CALL2(CHKREF(YruntimeYT),FREEREF(0),YPint((P)2));
    T12 = CALL2(CHKREF(YruntimeYT),FREEREF(1),T13);
    T11 = CALL2(CHKREF(YruntimeYA),i_,T12);
    T10 = CALL2(CHKREF(YruntimeYelt),FREEREF(2),T11);
    keyF970 = T10;
    T7 = CALL2(CHKREF(YmacrosYEE),keyF970,CHKREF(YruntimeYDempty_cell_marker));
    tmpF971 = T7;
    if (tmpF971 != YPfalse) {
      T5 = tmpF971;
    } else {
      T6 = CALL2(CHKREF(YmacrosYEE),keyF970,CHKREF(YruntimeYDvacated_cell_marker));
      T5 = T6;
    }
    T4 = T5;
    T3 = CALL1(CHKREF(Ynot),T4);
    if (T3 != YPfalse) {
      CALL2(CHKREF(YruntimeYPbucket_setter),FREEREF(1),FREEREF(4));
      CALL2(CHKREF(YruntimeYPindex_setter),i_,FREEREF(4));
      T2 = CALL1(FREEREF(5),FREEREF(4));
    } else {
    }
    T9 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T9;
    i_ = a1;
    goto loop;
    T1 = T8;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_outer_567) {
  ARG(firstQ_, 0);
  ARG(b_, 1);
  P innerF972;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = CALL2(CHKREF(YruntimeYL),b_,FREEREF(6));
  if (T7 != YPfalse) {
    T4 = FUNSHELL(1,fun_inner_566,6);
    innerF972 = T4;
    FUNINIT(innerF972, 6,FREEREF(4),b_,FREEREF(3),innerF972,FREEREF(2),FREEREF(1));
    if (firstQ_ != YPfalse) {
      T3 = CALL2(CHKREF(YruntimeYA),FREEREF(5),YPint((P)1));
      T2 = T3;
    } else {
      T2 = YPint((P)0);
    }
    T1 = CALL1(innerF972,T2);
    T6 = CALL2(CHKREF(YruntimeYA),b_,YPint((P)1));
    a1 = T6;
    a2 = YPfalse;
    b_ = a1;
    firstQ_ = a2;
    goto loop;
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_568) {
  ARG(return_, 0);
  P outerF973;
  P T1,T0;
  P a1;
loop:
  T1 = FUNSHELL(1,fun_outer_567,7);
  outerF973 = T1;
  FUNINIT(outerF973, 7,outerF973,return_,FREEREF(4),FREEREF(3),FREEREF(2),FREEREF(1),FREEREF(0));
  T0 = CALL2(outerF973,FREEREF(5),YPtrue);
  QRET(YPfalse);
}

FUNCODEDEF(fun_nxt_state_569) {
  ARG(state_, 0);
  ARG(table_, 1);
  P indexF978;
  P bucketF977;
  P depthF976;
  P n_bucketsF975;
  P vectorF974;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = CALL1(CHKREF(YruntimeYPvector),state_);
  vectorF974 = T11;
  T10 = CALL1(CHKREF(YruntimeYPn_buckets),vectorF974);
  n_bucketsF975 = T10;
  T9 = CALL1(CHKREF(YruntimeYPbucket_depth),vectorF974);
  depthF976 = T9;
  T8 = CALL1(CHKREF(YruntimeYPbucket),state_);
  bucketF977 = T8;
  T7 = CALL1(CHKREF(YruntimeYPindex),state_);
  indexF978 = T7;
  T6 = FUNFAB(fun_568,6,n_bucketsF975,indexF978,depthF976,vectorF974,state_,bucketF977);
  T5 = with_exit(T6);
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_fin_stateQ_570) {
  ARG(state_, 0);
  ARG(table_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(Ynot),state_);
  RET(T0);
}

FUNCODEDEF(fun_now_key_571) {
  ARG(state_, 0);
  ARG(table_, 1);
  P depthF980;
  P vectorF979;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL1(CHKREF(YruntimeYPvector),state_);
  vectorF979 = T9;
  T8 = CALL1(CHKREF(YruntimeYPbucket_depth),vectorF979);
  depthF980 = T8;
  T7 = CALL1(CHKREF(YruntimeYPindex),state_);
  T6 = CALL1(CHKREF(YruntimeYPbucket),state_);
  T5 = CALL2(CHKREF(YruntimeYT),depthF980,YPint((P)2));
  T4 = CALL2(CHKREF(YruntimeYT),T6,T5);
  T3 = CALL2(CHKREF(YruntimeYA),T7,T4);
  T2 = CALL2(CHKREF(YruntimeYelt),vectorF979,T3);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_now_elt_572) {
  ARG(state_, 0);
  ARG(table_, 1);
  P depthF982;
  P vectorF981;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL1(CHKREF(YruntimeYPvector),state_);
  vectorF981 = T10;
  T9 = CALL1(CHKREF(YruntimeYPbucket_depth),vectorF981);
  depthF982 = T9;
  T8 = CALL1(CHKREF(YruntimeYPindex),state_);
  T7 = CALL1(CHKREF(YruntimeYPbucket),state_);
  T6 = CALL2(CHKREF(YruntimeYT),depthF982,YPint((P)2));
  T5 = CALL2(CHKREF(YruntimeYT),T7,T6);
  T4 = CALL2(CHKREF(YruntimeYA),depthF982,T5);
  T3 = CALL2(CHKREF(YruntimeYA),T8,T4);
  T2 = CALL2(CHKREF(YruntimeYelt),vectorF981,T3);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_now_elt_setter_573) {
  ARG(state_, 0);
  ARG(table_, 1);
  ARG(value_, 2);
  P depthF985;
  P indexF984;
  P vectorF983;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T11 = CALL1(CHKREF(YruntimeYPvector),state_);
  vectorF983 = T11;
  T10 = CALL1(CHKREF(YruntimeYPindex),state_);
  indexF984 = T10;
  T9 = CALL1(CHKREF(YruntimeYPbucket_depth),vectorF983);
  depthF985 = T9;
  T8 = CALL1(CHKREF(YruntimeYPbucket),state_);
  T7 = CALL2(CHKREF(YruntimeYT),depthF985,YPint((P)2));
  T6 = CALL2(CHKREF(YruntimeYT),T8,T7);
  T5 = CALL2(CHKREF(YruntimeYA),depthF985,T6);
  T4 = CALL2(CHKREF(YruntimeYA),indexF984,T5);
  T3 = CALL3(CHKREF(YruntimeYelt_setter),value_,vectorF983,T4);
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_copy_state_574) {
  ARG(state_, 0);
  ARG(table_, 1);
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = (P)YPpair(CHKREF(YruntimeYLtab_stateG),Ynil);
  T9 = (P)YPpair(CHKREF(YruntimeYPindex),Ynil);
  T8 = (P)YPpair(CHKREF(YruntimeYPbucket),T9);
  T7 = (P)YPpair(CHKREF(YruntimeYPvector),T8);
  T6 = CALL1(CHKREF(YruntimeYPvector),state_);
  T5 = CALL1(CHKREF(YruntimeYPbucket),state_);
  T4 = CALL1(CHKREF(YruntimeYPindex),state_);
  T3 = (P)YPpair(T4,Ynil);
  T2 = (P)YPpair(T5,T3);
  T1 = (P)YPpair(T6,T2);
  T0 = CALL3(CHKREF(YPisa),T10,T7,T1);
  RET(T0);
}

FUNCODEDEF(fun_575) {
  ARG(v_, 0);
  ARG(k_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(CHKREF(YmacrosYpair),k_,T2);
  T0 = BOXVAL(FREEREF(0)) = T1;
  QRET(T0);
}

FUNCODEDEF(fun_tab_keys_576) {
  ARG(table_, 0);
  P collector_F986;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  collector_F986 = Ynil;
  collector_F986 = BOXFAB(collector_F986);
  T2 = FUNFAB(fun_575,1,collector_F986);
  CALL2(CHKREF(YruntimeYdo_keyed),T2,table_);
  T4 = BOXVAL(collector_F986);
  T3 = CALL1(CHKREF(YruntimeYrevX),T4);
  T0 = T3;
  RET(T0);
}

FUNCODEDEF(fun_grow_table_577) {
  ARG(table_, 0);
  P new_vectorF993;
  P tup30F992;
  P new_bucket_depthF991;
  P tup30F990;
  P new_n_bucketsF989;
  P tup30F988;
  P vectorF987;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T23 = CALL1(CHKREF(YruntimeYPvector),table_);
  vectorF987 = T23;
  T22 = CALL1(CHKREF(YruntimeYPn_buckets),vectorF987);
  T21 = CALL1(CHKREF(YruntimeYPbucket_depth),vectorF987);
  T20 = CALL2(CHKREF(YruntimeYT),T22,T21);
  T19 = CALL1(CHKREF(YruntimeYtable_growth_factor),table_);
  T18 = CALL2(CHKREF(YruntimeYT),T20,T19);
  T17 = CALL1(CHKREF(YruntimeYfloor),T18);
  T16 = CALL2(CHKREF(YruntimeYelt),T17,YPint((P)0));
  T15 = CALL1(CHKREF(YruntimeYchoose_table_geometry),T16);
  tup30F988 = T15;
  T14 = CALL1(CHKREF(Yhead),tup30F988);
  new_n_bucketsF989 = T14;
  T13 = CALL1(CHKREF(Ytail),tup30F988);
  tup30F990 = T13;
  T12 = CALL1(CHKREF(Yhead),tup30F990);
  new_bucket_depthF991 = T12;
  T11 = CALL1(CHKREF(Ytail),tup30F990);
  tup30F992 = T11;
  T10 = CALL2(CHKREF(YruntimeYT),new_bucket_depthF991,YPint((P)2));
  T9 = CALL2(CHKREF(YruntimeYT),new_n_bucketsF989,T10);
  T8 = CALL2(CHKREF(YruntimeY_),new_n_bucketsF989,YPint((P)2));
  T7 = CALLN(CHKREF(YruntimeYfab_table_vector),6,T9,CHKREF(YruntimeYDempty_cell_marker),new_n_bucketsF989,new_bucket_depthF991,new_n_bucketsF989,T8);
  new_vectorF993 = T7;
  CALL2(CHKREF(YruntimeYcopy_to_new_vector),table_,new_vectorF993);
  CALL2(CHKREF(YruntimeYPvector_setter),new_vectorF993,table_);
  T6 = table_;
  T5 = T6;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_rehash_table_578) {
  ARG(table_, 0);
  P new_vectorF995;
  P vectorF994;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = CALL1(CHKREF(YruntimeYPvector),table_);
  vectorF994 = T11;
  T10 = CALL1(CHKREF(YruntimeYPn_buckets),vectorF994);
  T9 = CALL1(CHKREF(YruntimeYPbucket_depth),vectorF994);
  T8 = CALL2(CHKREF(YruntimeYT),T9,YPint((P)2));
  T7 = CALL2(CHKREF(YruntimeYT),T10,T8);
  T6 = CALL1(CHKREF(YruntimeYPn_buckets),vectorF994);
  T5 = CALL1(CHKREF(YruntimeYPbucket_depth),vectorF994);
  T4 = CALL1(CHKREF(YruntimeYPprimary_modulus),vectorF994);
  T3 = CALL1(CHKREF(YruntimeYPsecondary_modulus),vectorF994);
  T2 = CALLN(CHKREF(YruntimeYfab_table_vector),6,T7,CHKREF(YruntimeYDempty_cell_marker),T6,T5,T4,T3);
  new_vectorF995 = T2;
  CALL2(CHKREF(YruntimeYcopy_to_new_vector),table_,new_vectorF995);
  CALL2(CHKREF(YruntimeYPvector_setter),new_vectorF995,table_);
  T1 = table_;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_579) {
  ARG(p_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL2(CHKREF(YruntimeYceilingS),FREEREF(2),FREEREF(0));
  T5 = CALL2(CHKREF(YruntimeYelt),T6,YPint((P)0));
  T4 = CALL2(CHKREF(YruntimeYG),p_,T5);
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YruntimeYA),p_,YPint((P)2));
    T2 = CALL2(CHKREF(YmacrosYtup),T3,FREEREF(0));
    T1 = CALL1(FREEREF(1),T2);
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_580) {
  ARG(return_, 0);
  P depthF996;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T13 = CALL2(CHKREF(YruntimeYL),FREEREF(0),YPint((P)2000));
  if (T13 != YPfalse) {
    T3 = YPint((P)1);
  } else {
    T12 = CALL2(CHKREF(YruntimeYL),FREEREF(0),YPint((P)5000));
    if (T12 != YPfalse) {
      T4 = YPint((P)2);
    } else {
      T11 = CALL2(CHKREF(YruntimeYL),FREEREF(0),YPint((P)15000));
      if (T11 != YPfalse) {
        T5 = YPint((P)4);
      } else {
        T10 = CALL2(CHKREF(YruntimeYL),FREEREF(0),YPint((P)50000));
        if (T10 != YPfalse) {
          T6 = YPint((P)8);
        } else {
          T9 = CALL2(CHKREF(YruntimeYL),FREEREF(0),YPint((P)250000));
          if (T9 != YPfalse) {
            T7 = YPint((P)16);
          } else {
            if (YPtrue != YPfalse) {
              T8 = YPint((P)32);
            } else {
              T8 = YPfalse;
            }
            T7 = T8;
          }
          T6 = T7;
        }
        T5 = T6;
      }
      T4 = T5;
    }
    T3 = T4;
  }
  depthF996 = T3;
  T1 = FUNFAB(fun_579,3,depthF996,return_,FREEREF(0));
  CALL2(CHKREF(YruntimeYdo),T1,CHKREF(YruntimeYTtwin_primesT));
  T2 = CALL1(CHKREF(Yerror),CHKREF(lit_558));
  T0 = T2;
  QRET(T0);
}

FUNCODEDEF(YruntimeYchoose_table_geometry) {
  ARG(capacity_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_580,1,capacity_);
  T0 = with_exit(T1);
  RET(T0);
}

FUNCODEDEF(fun_inner_582) {
  ARG(index_, 0);
  ARG(i_, 1);
  P this_keyF997;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL2(CHKREF(YruntimeYL),i_,FREEREF(3));
  if (T9 != YPfalse) {
    T8 = CALL2(CHKREF(YruntimeYelt),FREEREF(0),index_);
    this_keyF997 = T8;
    T4 = CALL2(CHKREF(YmacrosYEE),this_keyF997,CHKREF(YruntimeYDempty_cell_marker));
    if (T4 != YPfalse) {
      CALL3(CHKREF(YruntimeYelt_setter),FREEREF(5),FREEREF(0),index_);
      T2 = CALL2(CHKREF(YruntimeYA),index_,FREEREF(3));
      CALL3(CHKREF(YruntimeYelt_setter),FREEREF(4),FREEREF(0),T2);
      T3 = CALL1(FREEREF(2),YPfalse);
    } else {
    }
    T7 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    T6 = CALL2(CHKREF(YruntimeYA),index_,YPint((P)1));
    a1 = T7;
    a2 = T6;
    i_ = a1;
    index_ = a2;
    goto loop;
    T1 = T5;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_outer_583) {
  ARG(probes_, 0);
  P innerF999;
  P bucket_startF998;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
loop:
  T16 = CALL2(CHKREF(YruntimeYL),probes_,FREEREF(3));
  if (T16 != YPfalse) {
    T15 = BOXVAL(FREEREF(1));
    T14 = CALL2(CHKREF(YruntimeYT),FREEREF(0),YPint((P)2));
    T13 = CALL2(CHKREF(YruntimeYT),T15,T14);
    bucket_startF998 = T13;
    T3 = FUNSHELL(1,fun_inner_582,6);
    innerF999 = T3;
    FUNINIT(innerF999, 6,FREEREF(8),innerF999,FREEREF(7),FREEREF(0),FREEREF(6),FREEREF(5));
    T2 = CALL2(innerF999,YPint((P)0),bucket_startF998);
    T5 = BOXVAL(FREEREF(1));
    T4 = CALL2(CHKREF(YruntimeY_),T5,FREEREF(4));
    BOXVAL(FREEREF(1)) = T4;
    T10 = BOXVAL(FREEREF(1));
    T9 = CALL1(CHKREF(YruntimeYnegQ),T10);
    if (T9 != YPfalse) {
      T8 = BOXVAL(FREEREF(1));
      T7 = CALL2(CHKREF(YruntimeYA),T8,FREEREF(3));
      T6 = BOXVAL(FREEREF(1)) = T7;
    } else {
    }
    T12 = CALL2(CHKREF(YruntimeYA),probes_,YPint((P)1));
    a1 = T12;
    probes_ = a1;
    goto loop;
    T1 = T11;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_584) {
  ARG(return_, 0);
  P outerF1019;
  P tup33F1018;
  P new_bucket_offsetF1017;
  P tup33F1016;
  P new_bucket_indexF1015;
  P tup33F1014;
  P new_secondary_modulusF1013;
  P new_primary_modulusF1012;
  P new_bucket_depthF1011;
  P new_n_bucketsF1010;
  P tup32F1009;
  P stateF1008;
  P tup32F1007;
  P hashF1006;
  P tup32F1005;
  P tup31F1004;
  P hash_functionF1003;
  P tup31F1002;
  P test_functionF1001;
  P tup31F1000;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T41 = CALL1(CHKREF(YruntimeYtable_protocol),FREEREF(0));
  tup31F1000 = T41;
  T40 = CALL1(CHKREF(Yhead),tup31F1000);
  test_functionF1001 = T40;
  T39 = CALL1(CHKREF(Ytail),tup31F1000);
  tup31F1002 = T39;
  T38 = CALL1(CHKREF(Yhead),tup31F1002);
  hash_functionF1003 = T38;
  T37 = CALL1(CHKREF(Ytail),tup31F1002);
  tup31F1004 = T37;
  T36 = CALL1(hash_functionF1003,FREEREF(1));
  tup32F1005 = T36;
  T35 = CALL1(CHKREF(Yhead),tup32F1005);
  check_type(T35,CHKREF(YLintG));
  hashF1006 = T35;
  T34 = CALL1(CHKREF(Ytail),tup32F1005);
  tup32F1007 = T34;
  T33 = CALL1(CHKREF(Yhead),tup32F1007);
  stateF1008 = T33;
  T32 = CALL1(CHKREF(Ytail),tup32F1007);
  tup32F1009 = T32;
  T31 = CALL1(CHKREF(YruntimeYPn_buckets),FREEREF(2));
  new_n_bucketsF1010 = T31;
  T30 = CALL1(CHKREF(YruntimeYPbucket_depth),FREEREF(2));
  new_bucket_depthF1011 = T30;
  T29 = CALL1(CHKREF(YruntimeYPprimary_modulus),FREEREF(2));
  new_primary_modulusF1012 = T29;
  T28 = CALL1(CHKREF(YruntimeYPsecondary_modulus),FREEREF(2));
  new_secondary_modulusF1013 = T28;
  T27 = CALL3(CHKREF(YruntimeYhash_moduli),hashF1006,new_primary_modulusF1012,new_secondary_modulusF1013);
  tup33F1014 = T27;
  T26 = CALL1(CHKREF(Yhead),tup33F1014);
  new_bucket_indexF1015 = T26;
  new_bucket_indexF1015 = BOXFAB(new_bucket_indexF1015);
  T25 = CALL1(CHKREF(Ytail),tup33F1014);
  tup33F1016 = T25;
  T24 = CALL1(CHKREF(Yhead),tup33F1016);
  new_bucket_offsetF1017 = T24;
  T23 = CALL1(CHKREF(Ytail),tup33F1016);
  tup33F1018 = T23;
  T21 = FUNSHELL(1,fun_outer_583,9);
  outerF1019 = T21;
  FUNINIT(outerF1019, 9,new_bucket_depthF1011,new_bucket_indexF1015,outerF1019,new_n_bucketsF1010,new_bucket_offsetF1017,FREEREF(1),FREEREF(3),return_,FREEREF(2));
  T20 = CALL1(outerF1019,YPint((P)0));
  T22 = CALL1(CHKREF(Yerror),CHKREF(lit_561));
  T19 = T22;
  T18 = T19;
  T17 = T18;
  T15 = T17;
  T14 = T15;
  T13 = T14;
  T12 = T13;
  T11 = T12;
  T10 = T11;
  T9 = T10;
  T8 = T9;
  T7 = T8;
  T6 = T7;
  T5 = T6;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_585) {
  ARG(v_, 0);
  ARG(k_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = FUNFAB(fun_584,4,FREEREF(1),k_,FREEREF(0),v_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_copy_to_new_vector_586) {
  ARG(new_vector_, 0);
  ARG(table_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = FUNFAB(fun_585,2,new_vector_,table_);
  T0 = CALL2(CHKREF(YruntimeYdo_keyed),T1,table_);
  QRET(T0);
}

FUNCODEDEF(YruntimeYcurrent_gc_state) {
loop:
  QRET(CHKREF(YruntimeYDpermanent_hash_state));
}

FUNCODEDEF(fun_id_hash_588) {
  ARG(x_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(YruntimeYaddress_of),x_);
  T1 = CALL0(CHKREF(YruntimeYcurrent_gc_state));
  T0 = CALL2(CHKREF(YmacrosYtup),T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_589) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  if (x_ != YPfalse) {
    T1 = YPint((P)131);
  } else {
    T1 = YPint((P)149);
  }
  T0 = CALL2(CHKREF(YmacrosYtup),T1,CHKREF(YruntimeYDpermanent_hash_state));
  QRET(T0);
}

FUNCODEDEF(YruntimeYrot) {
  ARG(a_, 0);
  ARG(x_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = CALL1(CHKREF(YruntimeYneg),a_);
  T2 = CALL2(CHKREF(YruntimeYash),x_,T3);
  T1 = CALL2(CHKREF(YruntimeYash),x_,a_);
  T0 = CALL2(CHKREF(YruntimeYlogior),T2,T1);
  RET(T0);
}

FUNCODEDEF(fun_id_hash_591) {
  ARG(x_, 0);
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL2(CHKREF(YruntimeYrot),x_,YPint((P)15));
  T3 = CALL2(CHKREF(YruntimeY_),T4,x_);
  T2 = CALL2(CHKREF(YruntimeYA),T3,YPint((P)31));
  T1 = CALL1(CHKREF(YruntimeYabs),T2);
  T0 = CALL2(CHKREF(YmacrosYtup),T1,CHKREF(YruntimeYDpermanent_hash_state));
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_592) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),x_);
  T0 = CALL1(CHKREF(YruntimeYid_hash),T1);
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_593) {
  ARG(x_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(YruntimeYflo_bits),x_);
  T1 = CALL2(CHKREF(YruntimeYA),T2,YPint((P)89));
  T0 = CALL2(CHKREF(YmacrosYtup),T1,CHKREF(YruntimeYDpermanent_hash_state));
  QRET(T0);
}

FUNCODEDEF(fun_loop_594) {
  ARG(hash_, 0);
  ARG(i_, 1);
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL2(CHKREF(YruntimeYL),i_,FREEREF(2));
  if (T10 != YPfalse) {
    T9 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    T8 = CALL2(CHKREF(YruntimeYash),hash_,YPint((P)6));
    T7 = CALL2(CHKREF(YruntimeYelt),FREEREF(0),i_);
    T6 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),T7);
    T5 = CALL2(CHKREF(YruntimeYlogand),T6,YPint((P)159));
    T4 = CALL2(CHKREF(YruntimeYA),T8,T5);
    T3 = CALL2(CHKREF(YruntimeYmodulo),T4,YPint((P)970747));
    a1 = T9;
    a2 = T3;
    i_ = a1;
    hash_ = a2;
    goto loop;
    T0 = T2;
  } else {
    T1 = CALL2(CHKREF(YmacrosYtup),hash_,CHKREF(YruntimeYDpermanent_hash_state));
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YruntimeYcase_insensitive_string_hash) {
  ARG(x_, 0);
  P loopF1022;
  P eF1021;
  P sF1020;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  sF1020 = YPint((P)0);
  T5 = CALL1(CHKREF(YruntimeYlen),x_);
  eF1021 = T5;
  T4 = FUNSHELL(1,fun_loop_594,3);
  loopF1022 = T4;
  FUNINIT(loopF1022, 3,x_,loopF1022,eF1021);
  T3 = CALL2(loopF1022,sF1020,YPint((P)0));
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_loop_596) {
  ARG(i_, 0);
  P tmpF1027;
  P tmpF1026;
  P cyF1025;
  P cxF1024;
  P tmpF1023;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
loop:
  T17 = CALL2(CHKREF(YmacrosYEE),i_,FREEREF(0));
  tmpF1023 = T17;
  if (tmpF1023 != YPfalse) {
    T1 = tmpF1023;
  } else {
    T16 = CALL2(CHKREF(YruntimeY_),i_,FREEREF(1));
    T15 = CALL2(CHKREF(YruntimeYelt),FREEREF(2),T16);
    check_type(T15,CHKREF(YLchrG));
    cxF1024 = T15;
    T14 = CALL2(CHKREF(YruntimeYelt),FREEREF(3),i_);
    check_type(T14,CHKREF(YLchrG));
    cyF1025 = T14;
    T13 = CALL2(CHKREF(YmacrosYEE),cxF1024,cyF1025);
    tmpF1026 = T13;
    if (tmpF1026 != YPfalse) {
      T9 = tmpF1026;
    } else {
      T12 = CALL1(CHKREF(YruntimeYas_lowercase),cxF1024);
      T11 = CALL1(CHKREF(YruntimeYas_lowercase),cyF1025);
      T10 = CALL2(CHKREF(YmacrosYEE),T12,T11);
      T9 = T10;
    }
    T8 = T9;
    tmpF1027 = T8;
    if (tmpF1027 != YPfalse) {
      T7 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
      a1 = T7;
      i_ = a1;
      goto loop;
      T5 = T6;
    } else {
      T5 = YPfalse;
    }
    T4 = T5;
    T3 = T4;
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YruntimeYcase_insensitive_string_equal) {
  ARG(y_, 0);
  ARG(x_, 1);
  P loopF1030;
  P eyF1029;
  P syF1028;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  syF1028 = YPint((P)0);
  T9 = CALL1(CHKREF(YruntimeYlen),y_);
  eyF1029 = T9;
  T8 = CALL1(CHKREF(YruntimeYlen),x_);
  T7 = CALL2(CHKREF(YruntimeY_),eyF1029,syF1028);
  T6 = CALL2(CHKREF(YmacrosYEE),T8,T7);
  if (T6 != YPfalse) {
    T5 = FUNSHELL(1,fun_loop_596,5);
    loopF1030 = T5;
    FUNINIT(loopF1030, 5,eyF1029,syF1028,x_,y_,loopF1030);
    T4 = CALL1(loopF1030,syF1028);
    T3 = T4;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_table_protocol_598) {
  ARG(U_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YmacrosYtup),CHKREF(YruntimeYcase_insensitive_string_equal),CHKREF(YruntimeYcase_insensitive_string_hash));
  RET(T0);
}

P YruntimeYbooted_fab_sym_using(P name_,P given_sym_) {
  P tmpF1032;
  P symF1031;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = CALL2(CHKREF(YruntimeYelt),CHKREF(YruntimeYsymbols),name_);
  symF1031 = T10;
  T9 = CALL2(CHKREF(YmacrosYEE),symF1031,CHKREF(Ynul));
  if (T9 != YPfalse) {
    tmpF1032 = given_sym_;
    if (tmpF1032 != YPfalse) {
      T4 = tmpF1032;
    } else {
      T8 = (P)YPpair(CHKREF(YLsymG),Ynil);
      T7 = (P)YPpair(CHKREF(Ysym_name),Ynil);
      T6 = (P)YPpair(name_,Ynil);
      T5 = CALL3(CHKREF(YPisa),T8,T7,T6);
      T4 = T5;
    }
    T3 = T4;
    T2 = CALL3(CHKREF(YruntimeYelt_setter),T3,CHKREF(YruntimeYsymbols),name_);
    T1 = T2;
  } else {
    T1 = symF1031;
  }
  T0 = T1;
  return T0;
}

FUNCODEDEF(YruntimeYbooted_fab_sym) {
  ARG(name_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YruntimeYbooted_fab_sym_using(name_,YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_boot_601) {
  ARG(syms_, 0);
  P symF1033;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(YmacrosYemptyQ),syms_);
  T6 = CALL1(CHKREF(Ynot),T7);
  if (T6 != YPfalse) {
    T3 = CALL1(CHKREF(Yhead),syms_);
    symF1033 = T3;
    T2 = CALL1(CHKREF(Ysym_name),symF1033);
    T1 = (P)YruntimeYbooted_fab_sym_using(T2,symF1033);
    T5 = CALL1(CHKREF(Ytail),syms_);
    a1 = T5;
    syms_ = a1;
    goto loop;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(YruntimeYboot_symbols) {
  P bootF1034;
  P T2,T1,T0;
loop:
  T2 = FUNSHELL(1,fun_boot_601,1);
  bootF1034 = T2;
  FUNINIT(bootF1034, 1,bootF1034);
  T1 = KCALL1(bootF1034,CHKREF(YPsymbols));
  T0 = T1;
  QRET(T0);
}

P YruntimeY___main_0___() {
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
  lit_0 = YPPsym((P)"match-empty-list");
  lit_1 = YPPsym((P)"fail");
  lit_2 = YPPsym((P)"x");
  lit_3 = YPsb((P)"Match Empty Failure of %=");
  T0 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_1)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YmacrosYmatch_empty_list = YPmet(FUNCODEREF(YmacrosYmatch_empty_list),CHKREF(lit_0),T0,ENVNUL);
  T1 = YmacrosYmatch_empty_list;
  YmacrosYmatch_empty_list = T1;
  lit_4 = YPPsym((P)"match-unquote");
  lit_5 = YPsb((P)"Match Failure Empty List on Unquote");
  T2 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_1)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YmacrosYmatch_unquote = YPmet(FUNCODEREF(YmacrosYmatch_unquote),CHKREF(lit_4),T2,ENVNUL);
  T3 = YmacrosYmatch_unquote;
  YmacrosYmatch_unquote = T3;
  lit_6 = YPPsym((P)"match-atom");
  lit_7 = YPPsym((P)"pat");
  lit_8 = YPsb((P)"Match Failure of %= on %=");
  lit_9 = YPsb((P)"Match Failure Empty List on %=");
  T4 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_7),CHKREF(lit_1)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  YmacrosYmatch_atom = YPmet(FUNCODEREF(YmacrosYmatch_atom),CHKREF(lit_6),T4,ENVNUL);
  T5 = YmacrosYmatch_atom;
  YmacrosYmatch_atom = T5;
  lit_10 = YPPsym((P)"match-sublist");
  lit_11 = YPsb((P)"Match Failure on Sub List on %=");
  T6 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_1)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YmacrosYmatch_sublist = YPmet(FUNCODEREF(YmacrosYmatch_sublist),CHKREF(lit_10),T6,ENVNUL);
  T7 = YmacrosYmatch_sublist;
  YmacrosYmatch_sublist = T7;
  lit_12 = YPPsym((P)"make-sym");
  lit_13 = YPsb((P)"");
  lit_14 = YPPsym((P)"e");
  lit_15 = YPPsym((P)"r");
  T9 = YPsig(YPPlist(2,CHKREF(lit_15),CHKREF(lit_14)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T9,ENVNUL);
  T8 = YPsig(YPPlist(1,CHKREF(lit_2)),Ynil,YPtrue,YPint((P)0),CHKREF(YLsymG));
  fun_make_sym_5 = YPmet(FUNCODEREF(fun_make_sym_5),CHKREF(lit_12),T8,ENVNUL);
  T13 = BOUNDP(YmacrosYmake_sym);
  if (T13 != YPfalse) {
    T12 = CHKREF(YmacrosYmake_sym);
  } else {
    T12 = YPfalse;
  }
  T11 = fun_make_sym_5;
  T10 = CALL2(CHKREF(YPdefine_method),T12,T11);
  YmacrosYmake_sym = T10;
  YruntimeYTgensym_counterT = YPint((P)1000);
  lit_16 = YPPsym((P)"gensym");
  lit_17 = YPsb((P)"x-");
  T14 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLsymG));
  fun_gensym_6 = YPmet(FUNCODEREF(fun_gensym_6),CHKREF(lit_16),T14,ENVNUL);
  T18 = BOUNDP(YmacrosYgensym);
  if (T18 != YPfalse) {
    T17 = CHKREF(YmacrosYgensym);
  } else {
    T17 = YPfalse;
  }
  T16 = fun_gensym_6;
  T15 = CALL2(CHKREF(YPdefine_method),T17,T16);
  YmacrosYgensym = T15;
  lit_18 = YPPsym((P)"make-setter-name");
  lit_19 = YPsb((P)"-setter");
  T19 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLsymG));
  fun_make_setter_name_7 = YPmet(FUNCODEREF(fun_make_setter_name_7),CHKREF(lit_18),T19,ENVNUL);
  T23 = BOUNDP(YmacrosYmake_setter_name);
  if (T23 != YPfalse) {
    T22 = CHKREF(YmacrosYmake_setter_name);
  } else {
    T22 = YPfalse;
  }
  T21 = fun_make_setter_name_7;
  T20 = CALL2(CHKREF(YPdefine_method),T22,T21);
  YmacrosYmake_setter_name = T20;
  lit_20 = YPPsym((P)"var-name");
  T24 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_var_name_8 = YPmet(FUNCODEREF(fun_var_name_8),CHKREF(lit_20),T24,ENVNUL);
  T28 = BOUNDP(YmacrosYvar_name);
  if (T28 != YPfalse) {
    T27 = CHKREF(YmacrosYvar_name);
  } else {
    T27 = YPfalse;
  }
  T26 = fun_var_name_8;
  T25 = CALL2(CHKREF(YPdefine_method),T27,T26);
  YmacrosYvar_name = T25;
  T29 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_var_name_9 = YPmet(FUNCODEREF(fun_var_name_9),CHKREF(lit_20),T29,ENVNUL);
  T33 = BOUNDP(YmacrosYvar_name);
  if (T33 != YPfalse) {
    T32 = CHKREF(YmacrosYvar_name);
  } else {
    T32 = YPfalse;
  }
  T31 = fun_var_name_9;
  T30 = CALL2(CHKREF(YPdefine_method),T32,T31);
  YmacrosYvar_name = T30;
  lit_21 = YPPsym((P)"var-type");
  lit_22 = YPPsym((P)"<any>");
  T34 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_var_type_10 = YPmet(FUNCODEREF(fun_var_type_10),CHKREF(lit_21),T34,ENVNUL);
  T38 = BOUNDP(YmacrosYvar_type);
  if (T38 != YPfalse) {
    T37 = CHKREF(YmacrosYvar_type);
  } else {
    T37 = YPfalse;
  }
  T36 = fun_var_type_10;
  T35 = CALL2(CHKREF(YPdefine_method),T37,T36);
  YmacrosYvar_type = T35;
  T39 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_var_type_11 = YPmet(FUNCODEREF(fun_var_type_11),CHKREF(lit_21),T39,ENVNUL);
  T43 = BOUNDP(YmacrosYvar_type);
  if (T43 != YPfalse) {
    T42 = CHKREF(YmacrosYvar_type);
  } else {
    T42 = YPfalse;
  }
  T41 = fun_var_type_11;
  T40 = CALL2(CHKREF(YPdefine_method),T42,T41);
  YmacrosYvar_type = T40;
  lit_23 = YPPsym((P)"t+");
  lit_24 = YPPsym((P)"args");
  T44 = YPsig(YPPlist(1,CHKREF(lit_24)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG));
  YruntimeYtA = YPmet(FUNCODEREF(YruntimeYtA),CHKREF(lit_23),T44,ENVNUL);
  T45 = YruntimeYtA;
  YruntimeYtA = T45;
  lit_25 = YPPsym((P)"t=");
  T46 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YruntimeYtE = YPmet(FUNCODEREF(YruntimeYtE),CHKREF(lit_25),T46,ENVNUL);
  T47 = YruntimeYtE;
  YruntimeYtE = T47;
  lit_26 = YPPsym((P)"t<");
  T48 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YruntimeYtL = YPmet(FUNCODEREF(YruntimeYtL),CHKREF(lit_26),T48,ENVNUL);
  T49 = YruntimeYtL;
  YruntimeYtL = T49;
  lit_27 = YPPsym((P)"false-or");
  T50 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YruntimeYfalse_or = YPmet(FUNCODEREF(YruntimeYfalse_or),CHKREF(lit_27),T50,ENVNUL);
  T51 = YruntimeYfalse_or;
  YruntimeYfalse_or = T51;
  lit_28 = YPPsym((P)"nul?");
  T52 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  YruntimeYnulQ = YPmet(FUNCODEREF(YruntimeYnulQ),CHKREF(lit_28),T52,ENVNUL);
  T53 = YruntimeYnulQ;
  YruntimeYnulQ = T53;
  lit_29 = YPPsym((P)"nyi-error");
  T54 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_nyi_error_17 = YPmet(FUNCODEREF(fun_nyi_error_17),CHKREF(lit_29),T54,ENVNUL);
  T58 = BOUNDP(YruntimeYnyi_error);
  if (T58 != YPfalse) {
    T57 = CHKREF(YruntimeYnyi_error);
  } else {
    T57 = YPfalse;
  }
  T56 = fun_nyi_error_17;
  T55 = CALL2(CHKREF(YPdefine_method),T57,T56);
  YruntimeYnyi_error = T55;
  lit_30 = YPPsym((P)"to-str");
  lit_31 = YPsb((P)") }");
  lit_32 = YPsb((P)"{ obj(");
  T59 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_to_str_18 = YPmet(FUNCODEREF(fun_to_str_18),CHKREF(lit_30),T59,ENVNUL);
  T63 = BOUNDP(YruntimeYto_str);
  if (T63 != YPfalse) {
    T62 = CHKREF(YruntimeYto_str);
  } else {
    T62 = YPfalse;
  }
  T61 = fun_to_str_18;
  T60 = CALL2(CHKREF(YPdefine_method),T62,T61);
  YruntimeYto_str = T60;
  lit_33 = YPPsym((P)"address-of");
  T64 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  YruntimeYaddress_of = YPmet(FUNCODEREF(YruntimeYaddress_of),CHKREF(lit_33),T64,ENVNUL);
  T65 = YruntimeYaddress_of;
  YruntimeYaddress_of = T65;
  lit_34 = YPPsym((P)"<bot>");
  T67 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T66 = CALL2(CHKREF(Yfab_class),CHKREF(lit_34),T67);
  YruntimeYLbotG = T66;
  lit_35 = YPsb((P)"#t");
  T69 = CALL1(CHKREF(YruntimeYtE),YPtrue);
  T68 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,T69),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_to_str_20 = YPmet(FUNCODEREF(fun_to_str_20),CHKREF(lit_30),T68,ENVNUL);
  T73 = BOUNDP(YruntimeYto_str);
  if (T73 != YPfalse) {
    T72 = CHKREF(YruntimeYto_str);
  } else {
    T72 = YPfalse;
  }
  T71 = fun_to_str_20;
  T70 = CALL2(CHKREF(YPdefine_method),T72,T71);
  YruntimeYto_str = T70;
  lit_36 = YPsb((P)"#f");
  T75 = CALL1(CHKREF(YruntimeYtE),YPfalse);
  T74 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,T75),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_to_str_21 = YPmet(FUNCODEREF(fun_to_str_21),CHKREF(lit_30),T74,ENVNUL);
  T79 = BOUNDP(YruntimeYto_str);
  if (T79 != YPfalse) {
    T78 = CHKREF(YruntimeYto_str);
  } else {
    T78 = YPfalse;
  }
  T77 = fun_to_str_21;
  T76 = CALL2(CHKREF(YPdefine_method),T78,T77);
  YruntimeYto_str = T76;
  lit_37 = YPPsym((P)"as");
  lit_38 = YPPsym((P)"type");
  lit_39 = YPsb((P)"NO AS METHOD FOR %= AND %=");
  T80 = YPsig(YPPlist(2,CHKREF(lit_38),CHKREF(lit_2)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_as_22 = YPmet(FUNCODEREF(fun_as_22),CHKREF(lit_37),T80,ENVNUL);
  T84 = BOUNDP(YruntimeYas);
  if (T84 != YPfalse) {
    T83 = CHKREF(YruntimeYas);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_as_22;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  YruntimeYas = T81;
  lit_40 = YPPsym((P)"==");
  lit_41 = YPPsym((P)"y");
  T85 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_EE_23 = YPmet(FUNCODEREF(fun_EE_23),CHKREF(lit_40),T85,ENVNUL);
  T89 = BOUNDP(YmacrosYEE);
  if (T89 != YPfalse) {
    T88 = CHKREF(YmacrosYEE);
  } else {
    T88 = YPfalse;
  }
  T87 = fun_EE_23;
  T86 = CALL2(CHKREF(YPdefine_method),T88,T87);
  YmacrosYEE = T86;
  lit_42 = YPPsym((P)"=");
  T90 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_E_24 = YPmet(FUNCODEREF(fun_E_24),CHKREF(lit_42),T90,ENVNUL);
  T94 = BOUNDP(YruntimeYE);
  if (T94 != YPfalse) {
    T93 = CHKREF(YruntimeYE);
  } else {
    T93 = YPfalse;
  }
  T92 = fun_E_24;
  T91 = CALL2(CHKREF(YPdefine_method),T93,T92);
  YruntimeYE = T91;
  lit_43 = YPPsym((P)"~=");
  T95 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_NE_25 = YPmet(FUNCODEREF(fun_NE_25),CHKREF(lit_43),T95,ENVNUL);
  T99 = BOUNDP(YruntimeYNE);
  if (T99 != YPfalse) {
    T98 = CHKREF(YruntimeYNE);
  } else {
    T98 = YPfalse;
  }
  T97 = fun_NE_25;
  T96 = CALL2(CHKREF(YPdefine_method),T98,T97);
  YruntimeYNE = T96;
  lit_44 = YPPsym((P)"~==");
  T100 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_NEE_26 = YPmet(FUNCODEREF(fun_NEE_26),CHKREF(lit_44),T100,ENVNUL);
  T104 = BOUNDP(YruntimeYNEE);
  if (T104 != YPfalse) {
    T103 = CHKREF(YruntimeYNEE);
  } else {
    T103 = YPfalse;
  }
  T102 = fun_NEE_26;
  T101 = CALL2(CHKREF(YPdefine_method),T103,T102);
  YruntimeYNEE = T101;
  lit_45 = YPPsym((P)">");
  T105 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_G_27 = YPmet(FUNCODEREF(fun_G_27),CHKREF(lit_45),T105,ENVNUL);
  T109 = BOUNDP(YruntimeYG);
  if (T109 != YPfalse) {
    T108 = CHKREF(YruntimeYG);
  } else {
    T108 = YPfalse;
  }
  T107 = fun_G_27;
  T106 = CALL2(CHKREF(YPdefine_method),T108,T107);
  YruntimeYG = T106;
  lit_46 = YPPsym((P)"<=");
  T110 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_LE_28 = YPmet(FUNCODEREF(fun_LE_28),CHKREF(lit_46),T110,ENVNUL);
  T114 = BOUNDP(YruntimeYLE);
  if (T114 != YPfalse) {
    T113 = CHKREF(YruntimeYLE);
  } else {
    T113 = YPfalse;
  }
  T112 = fun_LE_28;
  T111 = CALL2(CHKREF(YPdefine_method),T113,T112);
  YruntimeYLE = T111;
  lit_47 = YPPsym((P)">=");
  T115 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_GE_29 = YPmet(FUNCODEREF(fun_GE_29),CHKREF(lit_47),T115,ENVNUL);
  T119 = BOUNDP(YruntimeYGE);
  if (T119 != YPfalse) {
    T118 = CHKREF(YruntimeYGE);
  } else {
    T118 = YPfalse;
  }
  T117 = fun_GE_29;
  T116 = CALL2(CHKREF(YPdefine_method),T118,T117);
  YruntimeYGE = T116;
  lit_48 = YPPsym((P)"min");
  T120 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLnumG));
  fun_min_30 = YPmet(FUNCODEREF(fun_min_30),CHKREF(lit_48),T120,ENVNUL);
  T124 = BOUNDP(YruntimeYmin);
  if (T124 != YPfalse) {
    T123 = CHKREF(YruntimeYmin);
  } else {
    T123 = YPfalse;
  }
  T122 = fun_min_30;
  T121 = CALL2(CHKREF(YPdefine_method),T123,T122);
  YruntimeYmin = T121;
  lit_49 = YPPsym((P)"max");
  T125 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLnumG));
  fun_max_31 = YPmet(FUNCODEREF(fun_max_31),CHKREF(lit_49),T125,ENVNUL);
  T129 = BOUNDP(YruntimeYmax);
  if (T129 != YPfalse) {
    T128 = CHKREF(YruntimeYmax);
  } else {
    T128 = YPfalse;
  }
  T127 = fun_max_31;
  T126 = CALL2(CHKREF(YPdefine_method),T128,T127);
  YruntimeYmax = T126;
  lit_50 = YPPsym((P)"i");
  lit_51 = YPPsym((P)"_");
  T131 = CALL1(CHKREF(YruntimeYtE),CHKREF(YLchrG));
  T130 = YPsig(YPPlist(2,CHKREF(lit_51),CHKREF(lit_50)),YPPlist(2,T131,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLchrG));
  fun_as_32 = YPmet(FUNCODEREF(fun_as_32),CHKREF(lit_37),T130,ENVNUL);
  T135 = BOUNDP(YruntimeYas);
  if (T135 != YPfalse) {
    T134 = CHKREF(YruntimeYas);
  } else {
    T134 = YPfalse;
  }
  T133 = fun_as_32;
  T132 = CALL2(CHKREF(YPdefine_method),T134,T133);
  YruntimeYas = T132;
  lit_52 = YPPsym((P)"c");
  T137 = CALL1(CHKREF(YruntimeYtE),CHKREF(YLintG));
  T136 = YPsig(YPPlist(2,CHKREF(lit_51),CHKREF(lit_52)),YPPlist(2,T137,CHKREF(YLchrG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun_as_33 = YPmet(FUNCODEREF(fun_as_33),CHKREF(lit_37),T136,ENVNUL);
  T141 = BOUNDP(YruntimeYas);
  if (T141 != YPfalse) {
    T140 = CHKREF(YruntimeYas);
  } else {
    T140 = YPfalse;
  }
  T139 = fun_as_33;
  T138 = CALL2(CHKREF(YPdefine_method),T140,T139);
  YruntimeYas = T138;
  lit_53 = YPPsym((P)"<");
  T142 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLchrG),CHKREF(YLchrG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_L_34 = YPmet(FUNCODEREF(fun_L_34),CHKREF(lit_53),T142,ENVNUL);
  T146 = BOUNDP(YruntimeYL);
  if (T146 != YPfalse) {
    T145 = CHKREF(YruntimeYL);
  } else {
    T145 = YPfalse;
  }
  T144 = fun_L_34;
  T143 = CALL2(CHKREF(YPdefine_method),T145,T144);
  YruntimeYL = T143;
  T147 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLchrG),CHKREF(YLchrG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_EE_35 = YPmet(FUNCODEREF(fun_EE_35),CHKREF(lit_40),T147,ENVNUL);
  T151 = BOUNDP(YmacrosYEE);
  if (T151 != YPfalse) {
    T150 = CHKREF(YmacrosYEE);
  } else {
    T150 = YPfalse;
  }
  T149 = fun_EE_35;
  T148 = CALL2(CHKREF(YPdefine_method),T150,T149);
  YmacrosYEE = T148;
  lit_54 = YPPsym((P)"lowercase?");
  T152 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_lowercaseQ_36 = YPmet(FUNCODEREF(fun_lowercaseQ_36),CHKREF(lit_54),T152,ENVNUL);
  T156 = BOUNDP(YruntimeYlowercaseQ);
  if (T156 != YPfalse) {
    T155 = CHKREF(YruntimeYlowercaseQ);
  } else {
    T155 = YPfalse;
  }
  T154 = fun_lowercaseQ_36;
  T153 = CALL2(CHKREF(YPdefine_method),T155,T154);
  YruntimeYlowercaseQ = T153;
  lit_55 = YPPsym((P)"uppercase?");
  T157 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_uppercaseQ_37 = YPmet(FUNCODEREF(fun_uppercaseQ_37),CHKREF(lit_55),T157,ENVNUL);
  T161 = BOUNDP(YruntimeYuppercaseQ);
  if (T161 != YPfalse) {
    T160 = CHKREF(YruntimeYuppercaseQ);
  } else {
    T160 = YPfalse;
  }
  T159 = fun_uppercaseQ_37;
  T158 = CALL2(CHKREF(YPdefine_method),T160,T159);
  YruntimeYuppercaseQ = T158;
  lit_56 = YPPsym((P)"as-lowercase");
  T162 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLchrG));
  fun_as_lowercase_38 = YPmet(FUNCODEREF(fun_as_lowercase_38),CHKREF(lit_56),T162,ENVNUL);
  T166 = BOUNDP(YruntimeYas_lowercase);
  if (T166 != YPfalse) {
    T165 = CHKREF(YruntimeYas_lowercase);
  } else {
    T165 = YPfalse;
  }
  T164 = fun_as_lowercase_38;
  T163 = CALL2(CHKREF(YPdefine_method),T165,T164);
  YruntimeYas_lowercase = T163;
  lit_57 = YPPsym((P)"as-uppercase");
  T167 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLchrG));
  fun_as_uppercase_39 = YPmet(FUNCODEREF(fun_as_uppercase_39),CHKREF(lit_57),T167,ENVNUL);
  T171 = BOUNDP(YruntimeYas_uppercase);
  if (T171 != YPfalse) {
    T170 = CHKREF(YruntimeYas_uppercase);
  } else {
    T170 = YPfalse;
  }
  T169 = fun_as_uppercase_39;
  T168 = CALL2(CHKREF(YPdefine_method),T170,T169);
  YruntimeYas_uppercase = T168;
  T172 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_to_str_40 = YPmet(FUNCODEREF(fun_to_str_40),CHKREF(lit_30),T172,ENVNUL);
  T176 = BOUNDP(YruntimeYto_str);
  if (T176 != YPfalse) {
    T175 = CHKREF(YruntimeYto_str);
  } else {
    T175 = YPfalse;
  }
  T174 = fun_to_str_40;
  T173 = CALL2(CHKREF(YPdefine_method),T175,T174);
  YruntimeYto_str = T173;
  lit_58 = YPPsym((P)"alphabetic?");
  T177 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_alphabeticQ_41 = YPmet(FUNCODEREF(fun_alphabeticQ_41),CHKREF(lit_58),T177,ENVNUL);
  T181 = BOUNDP(YruntimeYalphabeticQ);
  if (T181 != YPfalse) {
    T180 = CHKREF(YruntimeYalphabeticQ);
  } else {
    T180 = YPfalse;
  }
  T179 = fun_alphabeticQ_41;
  T178 = CALL2(CHKREF(YPdefine_method),T180,T179);
  YruntimeYalphabeticQ = T178;
  lit_59 = YPPsym((P)"numeric?");
  T182 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_numericQ_42 = YPmet(FUNCODEREF(fun_numericQ_42),CHKREF(lit_59),T182,ENVNUL);
  T186 = BOUNDP(YruntimeYnumericQ);
  if (T186 != YPfalse) {
    T185 = CHKREF(YruntimeYnumericQ);
  } else {
    T185 = YPfalse;
  }
  T184 = fun_numericQ_42;
  T183 = CALL2(CHKREF(YPdefine_method),T185,T184);
  YruntimeYnumericQ = T183;
  lit_60 = YPPsym((P)"to-digit");
  lit_61 = YPPsym((P)"digit");
  T187 = YPsig(YPPlist(1,CHKREF(lit_61)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  fun_to_digit_43 = YPmet(FUNCODEREF(fun_to_digit_43),CHKREF(lit_60),T187,ENVNUL);
  T191 = BOUNDP(YruntimeYto_digit);
  if (T191 != YPfalse) {
    T190 = CHKREF(YruntimeYto_digit);
  } else {
    T190 = YPfalse;
  }
  T189 = fun_to_digit_43;
  T188 = CALL2(CHKREF(YPdefine_method),T190,T189);
  YruntimeYto_digit = T188;
  lit_62 = YPPsym((P)"contagious-type");
  T194 = CALL1(CHKREF(YruntimeYtL),CHKREF(YLnumG));
  T193 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),T194);
  T192 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_62),T193,Ynil,YPfalse);
  YruntimeYcontagious_type = T192;
  lit_63 = YPPsym((P)"f");
  lit_64 = YPPsym((P)"contagious-call");
  T196 = YPsig(YPPlist(3,CHKREF(lit_63),CHKREF(lit_2),CHKREF(lit_41)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  T195 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_64),T196,Ynil,YPfalse);
  YruntimeYcontagious_call = T195;
  T197 = YPsig(YPPlist(3,CHKREF(lit_63),CHKREF(lit_2),CHKREF(lit_41)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_contagious_call_44 = YPmet(FUNCODEREF(fun_contagious_call_44),CHKREF(lit_64),T197,ENVNUL);
  T201 = BOUNDP(YruntimeYcontagious_call);
  if (T201 != YPfalse) {
    T200 = CHKREF(YruntimeYcontagious_call);
  } else {
    T200 = YPfalse;
  }
  T199 = fun_contagious_call_44;
  T198 = CALL2(CHKREF(YPdefine_method),T200,T199);
  YruntimeYcontagious_call = T198;
  T202 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_L_45 = YPmet(FUNCODEREF(fun_L_45),CHKREF(lit_53),T202,ENVNUL);
  T206 = BOUNDP(YruntimeYL);
  if (T206 != YPfalse) {
    T205 = CHKREF(YruntimeYL);
  } else {
    T205 = YPfalse;
  }
  T204 = fun_L_45;
  T203 = CALL2(CHKREF(YPdefine_method),T205,T204);
  YruntimeYL = T203;
  lit_65 = YPPsym((P)"+");
  T207 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLnumG));
  fun_A_46 = YPmet(FUNCODEREF(fun_A_46),CHKREF(lit_65),T207,ENVNUL);
  T211 = BOUNDP(YruntimeYA);
  if (T211 != YPfalse) {
    T210 = CHKREF(YruntimeYA);
  } else {
    T210 = YPfalse;
  }
  T209 = fun_A_46;
  T208 = CALL2(CHKREF(YPdefine_method),T210,T209);
  YruntimeYA = T208;
  lit_66 = YPPsym((P)"-");
  T212 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLnumG));
  fun___47 = YPmet(FUNCODEREF(fun___47),CHKREF(lit_66),T212,ENVNUL);
  T216 = BOUNDP(YruntimeY_);
  if (T216 != YPfalse) {
    T215 = CHKREF(YruntimeY_);
  } else {
    T215 = YPfalse;
  }
  T214 = fun___47;
  T213 = CALL2(CHKREF(YPdefine_method),T215,T214);
  YruntimeY_ = T213;
  lit_67 = YPPsym((P)"*");
  T217 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLnumG));
  fun_T_48 = YPmet(FUNCODEREF(fun_T_48),CHKREF(lit_67),T217,ENVNUL);
  T221 = BOUNDP(YruntimeYT);
  if (T221 != YPfalse) {
    T220 = CHKREF(YruntimeYT);
  } else {
    T220 = YPfalse;
  }
  T219 = fun_T_48;
  T218 = CALL2(CHKREF(YPdefine_method),T220,T219);
  YruntimeYT = T218;
  lit_68 = YPPsym((P)"floor");
  T222 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLtupG));
  fun_floor_49 = YPmet(FUNCODEREF(fun_floor_49),CHKREF(lit_68),T222,ENVNUL);
  T226 = BOUNDP(YruntimeYfloor);
  if (T226 != YPfalse) {
    T225 = CHKREF(YruntimeYfloor);
  } else {
    T225 = YPfalse;
  }
  T224 = fun_floor_49;
  T223 = CALL2(CHKREF(YPdefine_method),T225,T224);
  YruntimeYfloor = T223;
  lit_69 = YPPsym((P)"ceiling");
  T227 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLtupG));
  fun_ceiling_50 = YPmet(FUNCODEREF(fun_ceiling_50),CHKREF(lit_69),T227,ENVNUL);
  T231 = BOUNDP(YruntimeYceiling);
  if (T231 != YPfalse) {
    T230 = CHKREF(YruntimeYceiling);
  } else {
    T230 = YPfalse;
  }
  T229 = fun_ceiling_50;
  T228 = CALL2(CHKREF(YPdefine_method),T230,T229);
  YruntimeYceiling = T228;
  lit_70 = YPPsym((P)"round");
  T232 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLtupG));
  fun_round_51 = YPmet(FUNCODEREF(fun_round_51),CHKREF(lit_70),T232,ENVNUL);
  T236 = BOUNDP(YruntimeYround);
  if (T236 != YPfalse) {
    T235 = CHKREF(YruntimeYround);
  } else {
    T235 = YPfalse;
  }
  T234 = fun_round_51;
  T233 = CALL2(CHKREF(YPdefine_method),T235,T234);
  YruntimeYround = T233;
  lit_71 = YPPsym((P)"truncate");
  T237 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLtupG));
  fun_truncate_52 = YPmet(FUNCODEREF(fun_truncate_52),CHKREF(lit_71),T237,ENVNUL);
  T241 = BOUNDP(YruntimeYtruncate);
  if (T241 != YPfalse) {
    T240 = CHKREF(YruntimeYtruncate);
  } else {
    T240 = YPfalse;
  }
  T239 = fun_truncate_52;
  T238 = CALL2(CHKREF(YPdefine_method),T240,T239);
  YruntimeYtruncate = T238;
  lit_72 = YPPsym((P)"floor/");
  lit_73 = YPPsym((P)"divisor");
  lit_74 = YPPsym((P)"real");
  T242 = YPsig(YPPlist(2,CHKREF(lit_74),CHKREF(lit_73)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLtupG));
  fun_floorS_53 = YPmet(FUNCODEREF(fun_floorS_53),CHKREF(lit_72),T242,ENVNUL);
  T246 = BOUNDP(YruntimeYfloorS);
  if (T246 != YPfalse) {
    T245 = CHKREF(YruntimeYfloorS);
  } else {
    T245 = YPfalse;
  }
  T244 = fun_floorS_53;
  T243 = CALL2(CHKREF(YPdefine_method),T245,T244);
  YruntimeYfloorS = T243;
  lit_75 = YPPsym((P)"ceiling/");
  T247 = YPsig(YPPlist(2,CHKREF(lit_74),CHKREF(lit_73)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLtupG));
  fun_ceilingS_54 = YPmet(FUNCODEREF(fun_ceilingS_54),CHKREF(lit_75),T247,ENVNUL);
  T251 = BOUNDP(YruntimeYceilingS);
  if (T251 != YPfalse) {
    T250 = CHKREF(YruntimeYceilingS);
  } else {
    T250 = YPfalse;
  }
  T249 = fun_ceilingS_54;
  T248 = CALL2(CHKREF(YPdefine_method),T250,T249);
  YruntimeYceilingS = T248;
  lit_76 = YPPsym((P)"round/");
  lit_77 = YPflo(FLOINT(2.0));
  T252 = YPsig(YPPlist(2,CHKREF(lit_74),CHKREF(lit_73)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLtupG));
  fun_roundS_55 = YPmet(FUNCODEREF(fun_roundS_55),CHKREF(lit_76),T252,ENVNUL);
  T256 = BOUNDP(YruntimeYroundS);
  if (T256 != YPfalse) {
    T255 = CHKREF(YruntimeYroundS);
  } else {
    T255 = YPfalse;
  }
  T254 = fun_roundS_55;
  T253 = CALL2(CHKREF(YPdefine_method),T255,T254);
  YruntimeYroundS = T253;
  lit_78 = YPPsym((P)"truncate/");
  T257 = YPsig(YPPlist(2,CHKREF(lit_74),CHKREF(lit_73)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLtupG));
  fun_truncateS_56 = YPmet(FUNCODEREF(fun_truncateS_56),CHKREF(lit_78),T257,ENVNUL);
  T261 = BOUNDP(YruntimeYtruncateS);
  if (T261 != YPfalse) {
    T260 = CHKREF(YruntimeYtruncateS);
  } else {
    T260 = YPfalse;
  }
  T259 = fun_truncateS_56;
  T258 = CALL2(CHKREF(YPdefine_method),T260,T259);
  YruntimeYtruncateS = T258;
  lit_79 = YPPsym((P)"modulo");
  T262 = YPsig(YPPlist(2,CHKREF(lit_74),CHKREF(lit_73)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLnumG));
  fun_modulo_57 = YPmet(FUNCODEREF(fun_modulo_57),CHKREF(lit_79),T262,ENVNUL);
  T266 = BOUNDP(YruntimeYmodulo);
  if (T266 != YPfalse) {
    T265 = CHKREF(YruntimeYmodulo);
  } else {
    T265 = YPfalse;
  }
  T264 = fun_modulo_57;
  T263 = CALL2(CHKREF(YPdefine_method),T265,T264);
  YruntimeYmodulo = T263;
  lit_80 = YPPsym((P)"remainder");
  T269 = YPsig(YPPlist(2,CHKREF(lit_74),CHKREF(lit_73)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLnumG));
  T268 = fun_remainder_58 = YPmet(FUNCODEREF(fun_remainder_58),CHKREF(lit_80),T269,ENVNUL);
  T274 = BOUNDP(YruntimeYremainder);
  if (T274 != YPfalse) {
    T273 = CHKREF(YruntimeYremainder);
  } else {
    T273 = YPfalse;
  }
  T272 = fun_remainder_58;
  T271 = CALL2(CHKREF(YPdefine_method),T273,T272);
  T270 = YruntimeYremainder = T271;
  T267 = T270;
  return T267;
}

P YruntimeY___main_1___() {
  P T330,T329,T328,T327,T326,T325,T324,T323,T322,T321,T320,T319,T318,T317,T316,T315;
  P T314,T313,T312,T311,T310,T309,T308,T307,T306,T305,T304,T303,T302,T301,T300,T299;
  P T298,T297,T296,T295,T294,T293,T292,T291,T290,T289,T288,T287,T286,T285,T284,T283;
  P T282,T281,T280,T279,T278,T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267;
  P T266,T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251;
  P T250,T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235;
  P T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219;
  P T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203;
  P T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187;
  P T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171;
  P T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155;
  P T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139;
  P T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123;
  P T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107;
  P T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91;
  P T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75;
  P T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_81 = YPPsym((P)"pos?");
  T0 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_posQ_59 = YPmet(FUNCODEREF(fun_posQ_59),CHKREF(lit_81),T0,ENVNUL);
  T4 = BOUNDP(YruntimeYposQ);
  if (T4 != YPfalse) {
    T3 = CHKREF(YruntimeYposQ);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_posQ_59;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YruntimeYposQ = T1;
  lit_82 = YPPsym((P)"zero?");
  T5 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_zeroQ_60 = YPmet(FUNCODEREF(fun_zeroQ_60),CHKREF(lit_82),T5,ENVNUL);
  T9 = BOUNDP(YruntimeYzeroQ);
  if (T9 != YPfalse) {
    T8 = CHKREF(YruntimeYzeroQ);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_zeroQ_60;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YruntimeYzeroQ = T6;
  lit_83 = YPPsym((P)"neg?");
  T10 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_negQ_61 = YPmet(FUNCODEREF(fun_negQ_61),CHKREF(lit_83),T10,ENVNUL);
  T14 = BOUNDP(YruntimeYnegQ);
  if (T14 != YPfalse) {
    T13 = CHKREF(YruntimeYnegQ);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_negQ_61;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  YruntimeYnegQ = T11;
  lit_84 = YPPsym((P)"neg");
  T15 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLnumG));
  fun_neg_62 = YPmet(FUNCODEREF(fun_neg_62),CHKREF(lit_84),T15,ENVNUL);
  T19 = BOUNDP(YruntimeYneg);
  if (T19 != YPfalse) {
    T18 = CHKREF(YruntimeYneg);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_neg_62;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  YruntimeYneg = T16;
  lit_85 = YPPsym((P)"abs");
  T20 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLnumG));
  fun_abs_63 = YPmet(FUNCODEREF(fun_abs_63),CHKREF(lit_85),T20,ENVNUL);
  T24 = BOUNDP(YruntimeYabs);
  if (T24 != YPfalse) {
    T23 = CHKREF(YruntimeYabs);
  } else {
    T23 = YPfalse;
  }
  T22 = fun_abs_63;
  T21 = CALL2(CHKREF(YPdefine_method),T23,T22);
  YruntimeYabs = T21;
  T25 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_to_str_64 = YPmet(FUNCODEREF(fun_to_str_64),CHKREF(lit_30),T25,ENVNUL);
  T29 = BOUNDP(YruntimeYto_str);
  if (T29 != YPfalse) {
    T28 = CHKREF(YruntimeYto_str);
  } else {
    T28 = YPfalse;
  }
  T27 = fun_to_str_64;
  T26 = CALL2(CHKREF(YPdefine_method),T28,T27);
  YruntimeYto_str = T26;
  lit_86 = YPPsym((P)"str-to-num");
  lit_87 = YPPsym((P)"string");
  lit_88 = YPPsym((P)"loop");
  lit_89 = YPPsym((P)"looking-at-alphabetic?");
  lit_90 = YPPsym((P)"match-digit!");
  lit_91 = YPPsym((P)"return");
  lit_92 = YPsb((P)"string->number: Two decimal points: %=");
  lit_93 = YPPsym((P)"fail!!");
  lit_94 = YPPsym((P)"match");
  lit_95 = YPPsym((P)"char");
  T36 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_loop_65 = YPmet(FUNCODEREF(fun_loop_65),CHKREF(lit_88),T36,ENVNUL);
  T35 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_looking_at_alphabeticQ_66 = YPmet(FUNCODEREF(fun_looking_at_alphabeticQ_66),CHKREF(lit_89),T35,ENVNUL);
  T34 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_failXX_67 = YPmet(FUNCODEREF(fun_failXX_67),CHKREF(lit_93),T34,ENVNUL);
  T33 = YPsig(YPPlist(1,CHKREF(lit_91)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T33,ENVNUL);
  T32 = YPsig(YPPlist(1,CHKREF(lit_51)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_match_digitX_69 = YPmet(FUNCODEREF(fun_match_digitX_69),CHKREF(lit_90),T32,ENVNUL);
  T31 = YPsig(YPPlist(1,CHKREF(lit_95)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_match_70 = YPmet(FUNCODEREF(fun_match_70),CHKREF(lit_94),T31,ENVNUL);
  T30 = YPsig(YPPlist(1,CHKREF(lit_87)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_str_to_num_71 = YPmet(FUNCODEREF(fun_str_to_num_71),CHKREF(lit_86),T30,ENVNUL);
  T40 = BOUNDP(YruntimeYstr_to_num);
  if (T40 != YPfalse) {
    T39 = CHKREF(YruntimeYstr_to_num);
  } else {
    T39 = YPfalse;
  }
  T38 = fun_str_to_num_71;
  T37 = CALL2(CHKREF(YPdefine_method),T39,T38);
  YruntimeYstr_to_num = T37;
  T41 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLtypeG));
  fun_contagious_type_72 = YPmet(FUNCODEREF(fun_contagious_type_72),CHKREF(lit_62),T41,ENVNUL);
  T45 = BOUNDP(YruntimeYcontagious_type);
  if (T45 != YPfalse) {
    T44 = CHKREF(YruntimeYcontagious_type);
  } else {
    T44 = YPfalse;
  }
  T43 = fun_contagious_type_72;
  T42 = CALL2(CHKREF(YPdefine_method),T44,T43);
  YruntimeYcontagious_type = T42;
  T46 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLtypeG));
  fun_contagious_type_73 = YPmet(FUNCODEREF(fun_contagious_type_73),CHKREF(lit_62),T46,ENVNUL);
  T50 = BOUNDP(YruntimeYcontagious_type);
  if (T50 != YPfalse) {
    T49 = CHKREF(YruntimeYcontagious_type);
  } else {
    T49 = YPfalse;
  }
  T48 = fun_contagious_type_73;
  T47 = CALL2(CHKREF(YPdefine_method),T49,T48);
  YruntimeYcontagious_type = T47;
  T51 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLintG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLtypeG));
  fun_contagious_type_74 = YPmet(FUNCODEREF(fun_contagious_type_74),CHKREF(lit_62),T51,ENVNUL);
  T55 = BOUNDP(YruntimeYcontagious_type);
  if (T55 != YPfalse) {
    T54 = CHKREF(YruntimeYcontagious_type);
  } else {
    T54 = YPfalse;
  }
  T53 = fun_contagious_type_74;
  T52 = CALL2(CHKREF(YPdefine_method),T54,T53);
  YruntimeYcontagious_type = T52;
  T56 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLtypeG));
  fun_contagious_type_75 = YPmet(FUNCODEREF(fun_contagious_type_75),CHKREF(lit_62),T56,ENVNUL);
  T60 = BOUNDP(YruntimeYcontagious_type);
  if (T60 != YPfalse) {
    T59 = CHKREF(YruntimeYcontagious_type);
  } else {
    T59 = YPfalse;
  }
  T58 = fun_contagious_type_75;
  T57 = CALL2(CHKREF(YPdefine_method),T59,T58);
  YruntimeYcontagious_type = T57;
  T61 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_EE_76 = YPmet(FUNCODEREF(fun_EE_76),CHKREF(lit_40),T61,ENVNUL);
  T65 = BOUNDP(YmacrosYEE);
  if (T65 != YPfalse) {
    T64 = CHKREF(YmacrosYEE);
  } else {
    T64 = YPfalse;
  }
  T63 = fun_EE_76;
  T62 = CALL2(CHKREF(YPdefine_method),T64,T63);
  YmacrosYEE = T62;
  T66 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_L_77 = YPmet(FUNCODEREF(fun_L_77),CHKREF(lit_53),T66,ENVNUL);
  T70 = BOUNDP(YruntimeYL);
  if (T70 != YPfalse) {
    T69 = CHKREF(YruntimeYL);
  } else {
    T69 = YPfalse;
  }
  T68 = fun_L_77;
  T67 = CALL2(CHKREF(YPdefine_method),T69,T68);
  YruntimeYL = T67;
  T71 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun_A_78 = YPmet(FUNCODEREF(fun_A_78),CHKREF(lit_65),T71,ENVNUL);
  T75 = BOUNDP(YruntimeYA);
  if (T75 != YPfalse) {
    T74 = CHKREF(YruntimeYA);
  } else {
    T74 = YPfalse;
  }
  T73 = fun_A_78;
  T72 = CALL2(CHKREF(YPdefine_method),T74,T73);
  YruntimeYA = T72;
  T76 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun___79 = YPmet(FUNCODEREF(fun___79),CHKREF(lit_66),T76,ENVNUL);
  T80 = BOUNDP(YruntimeY_);
  if (T80 != YPfalse) {
    T79 = CHKREF(YruntimeY_);
  } else {
    T79 = YPfalse;
  }
  T78 = fun___79;
  T77 = CALL2(CHKREF(YPdefine_method),T79,T78);
  YruntimeY_ = T77;
  T81 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun_T_80 = YPmet(FUNCODEREF(fun_T_80),CHKREF(lit_67),T81,ENVNUL);
  T85 = BOUNDP(YruntimeYT);
  if (T85 != YPfalse) {
    T84 = CHKREF(YruntimeYT);
  } else {
    T84 = YPfalse;
  }
  T83 = fun_T_80;
  T82 = CALL2(CHKREF(YPdefine_method),T84,T83);
  YruntimeYT = T82;
  T86 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLtupG));
  fun_floor_81 = YPmet(FUNCODEREF(fun_floor_81),CHKREF(lit_68),T86,ENVNUL);
  T90 = BOUNDP(YruntimeYfloor);
  if (T90 != YPfalse) {
    T89 = CHKREF(YruntimeYfloor);
  } else {
    T89 = YPfalse;
  }
  T88 = fun_floor_81;
  T87 = CALL2(CHKREF(YPdefine_method),T89,T88);
  YruntimeYfloor = T87;
  T91 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLtupG));
  fun_ceiling_82 = YPmet(FUNCODEREF(fun_ceiling_82),CHKREF(lit_69),T91,ENVNUL);
  T95 = BOUNDP(YruntimeYceiling);
  if (T95 != YPfalse) {
    T94 = CHKREF(YruntimeYceiling);
  } else {
    T94 = YPfalse;
  }
  T93 = fun_ceiling_82;
  T92 = CALL2(CHKREF(YPdefine_method),T94,T93);
  YruntimeYceiling = T92;
  T96 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLtupG));
  fun_round_83 = YPmet(FUNCODEREF(fun_round_83),CHKREF(lit_70),T96,ENVNUL);
  T100 = BOUNDP(YruntimeYround);
  if (T100 != YPfalse) {
    T99 = CHKREF(YruntimeYround);
  } else {
    T99 = YPfalse;
  }
  T98 = fun_round_83;
  T97 = CALL2(CHKREF(YPdefine_method),T99,T98);
  YruntimeYround = T97;
  T101 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLtupG));
  fun_truncate_84 = YPmet(FUNCODEREF(fun_truncate_84),CHKREF(lit_71),T101,ENVNUL);
  T105 = BOUNDP(YruntimeYtruncate);
  if (T105 != YPfalse) {
    T104 = CHKREF(YruntimeYtruncate);
  } else {
    T104 = YPfalse;
  }
  T103 = fun_truncate_84;
  T102 = CALL2(CHKREF(YPdefine_method),T104,T103);
  YruntimeYtruncate = T102;
  T106 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLtupG));
  fun_truncateS_85 = YPmet(FUNCODEREF(fun_truncateS_85),CHKREF(lit_78),T106,ENVNUL);
  T110 = BOUNDP(YruntimeYtruncateS);
  if (T110 != YPfalse) {
    T109 = CHKREF(YruntimeYtruncateS);
  } else {
    T109 = YPfalse;
  }
  T108 = fun_truncateS_85;
  T107 = CALL2(CHKREF(YPdefine_method),T109,T108);
  YruntimeYtruncateS = T107;
  T111 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun_modulo_86 = YPmet(FUNCODEREF(fun_modulo_86),CHKREF(lit_79),T111,ENVNUL);
  T115 = BOUNDP(YruntimeYmodulo);
  if (T115 != YPfalse) {
    T114 = CHKREF(YruntimeYmodulo);
  } else {
    T114 = YPfalse;
  }
  T113 = fun_modulo_86;
  T112 = CALL2(CHKREF(YPdefine_method),T114,T113);
  YruntimeYmodulo = T112;
  lit_96 = YPPsym((P)"logior");
  T116 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun_logior_87 = YPmet(FUNCODEREF(fun_logior_87),CHKREF(lit_96),T116,ENVNUL);
  T120 = BOUNDP(YruntimeYlogior);
  if (T120 != YPfalse) {
    T119 = CHKREF(YruntimeYlogior);
  } else {
    T119 = YPfalse;
  }
  T118 = fun_logior_87;
  T117 = CALL2(CHKREF(YPdefine_method),T119,T118);
  YruntimeYlogior = T117;
  lit_97 = YPPsym((P)"logxor");
  T121 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun_logxor_88 = YPmet(FUNCODEREF(fun_logxor_88),CHKREF(lit_97),T121,ENVNUL);
  T125 = BOUNDP(YruntimeYlogxor);
  if (T125 != YPfalse) {
    T124 = CHKREF(YruntimeYlogxor);
  } else {
    T124 = YPfalse;
  }
  T123 = fun_logxor_88;
  T122 = CALL2(CHKREF(YPdefine_method),T124,T123);
  YruntimeYlogxor = T122;
  lit_98 = YPPsym((P)"logand");
  T126 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun_logand_89 = YPmet(FUNCODEREF(fun_logand_89),CHKREF(lit_98),T126,ENVNUL);
  T130 = BOUNDP(YruntimeYlogand);
  if (T130 != YPfalse) {
    T129 = CHKREF(YruntimeYlogand);
  } else {
    T129 = YPfalse;
  }
  T128 = fun_logand_89;
  T127 = CALL2(CHKREF(YPdefine_method),T129,T128);
  YruntimeYlogand = T127;
  lit_99 = YPPsym((P)"lognot");
  T131 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  fun_lognot_90 = YPmet(FUNCODEREF(fun_lognot_90),CHKREF(lit_99),T131,ENVNUL);
  T135 = BOUNDP(YruntimeYlognot);
  if (T135 != YPfalse) {
    T134 = CHKREF(YruntimeYlognot);
  } else {
    T134 = YPfalse;
  }
  T133 = fun_lognot_90;
  T132 = CALL2(CHKREF(YPdefine_method),T134,T133);
  YruntimeYlognot = T132;
  lit_100 = YPPsym((P)"logbit?");
  lit_101 = YPPsym((P)"o");
  T136 = YPsig(YPPlist(2,CHKREF(lit_101),CHKREF(lit_2)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun_logbitQ_91 = YPmet(FUNCODEREF(fun_logbitQ_91),CHKREF(lit_100),T136,ENVNUL);
  T140 = BOUNDP(YruntimeYlogbitQ);
  if (T140 != YPfalse) {
    T139 = CHKREF(YruntimeYlogbitQ);
  } else {
    T139 = YPfalse;
  }
  T138 = fun_logbitQ_91;
  T137 = CALL2(CHKREF(YPdefine_method),T139,T138);
  YruntimeYlogbitQ = T137;
  lit_102 = YPPsym((P)"even?");
  T141 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_evenQ_92 = YPmet(FUNCODEREF(fun_evenQ_92),CHKREF(lit_102),T141,ENVNUL);
  T145 = BOUNDP(YruntimeYevenQ);
  if (T145 != YPfalse) {
    T144 = CHKREF(YruntimeYevenQ);
  } else {
    T144 = YPfalse;
  }
  T143 = fun_evenQ_92;
  T142 = CALL2(CHKREF(YPdefine_method),T144,T143);
  YruntimeYevenQ = T142;
  lit_103 = YPPsym((P)"odd?");
  T146 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_oddQ_93 = YPmet(FUNCODEREF(fun_oddQ_93),CHKREF(lit_103),T146,ENVNUL);
  T150 = BOUNDP(YruntimeYoddQ);
  if (T150 != YPfalse) {
    T149 = CHKREF(YruntimeYoddQ);
  } else {
    T149 = YPfalse;
  }
  T148 = fun_oddQ_93;
  T147 = CALL2(CHKREF(YPdefine_method),T149,T148);
  YruntimeYoddQ = T147;
  lit_104 = YPPsym((P)"ash");
  lit_105 = YPPsym((P)"a");
  T151 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_105)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun_ash_94 = YPmet(FUNCODEREF(fun_ash_94),CHKREF(lit_104),T151,ENVNUL);
  T155 = BOUNDP(YruntimeYash);
  if (T155 != YPfalse) {
    T154 = CHKREF(YruntimeYash);
  } else {
    T154 = YPfalse;
  }
  T153 = fun_ash_94;
  T152 = CALL2(CHKREF(YPdefine_method),T154,T153);
  YruntimeYash = T152;
  lit_106 = YPPsym((P)"lsh");
  T156 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_105)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun_lsh_95 = YPmet(FUNCODEREF(fun_lsh_95),CHKREF(lit_106),T156,ENVNUL);
  T160 = BOUNDP(YruntimeYlsh);
  if (T160 != YPfalse) {
    T159 = CHKREF(YruntimeYlsh);
  } else {
    T159 = YPfalse;
  }
  T158 = fun_lsh_95;
  T157 = CALL2(CHKREF(YPdefine_method),T159,T158);
  YruntimeYlsh = T157;
  lit_107 = YPPsym((P)"power-of-two-ceiling");
  lit_108 = YPPsym((P)"search");
  lit_109 = YPPsym((P)"po2");
  T162 = YPsig(YPPlist(1,CHKREF(lit_109)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_search_96 = YPmet(FUNCODEREF(fun_search_96),CHKREF(lit_108),T162,ENVNUL);
  T161 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  fun_power_of_two_ceiling_97 = YPmet(FUNCODEREF(fun_power_of_two_ceiling_97),CHKREF(lit_107),T161,ENVNUL);
  T166 = BOUNDP(YruntimeYpower_of_two_ceiling);
  if (T166 != YPfalse) {
    T165 = CHKREF(YruntimeYpower_of_two_ceiling);
  } else {
    T165 = YPfalse;
  }
  T164 = fun_power_of_two_ceiling_97;
  T163 = CALL2(CHKREF(YPdefine_method),T165,T164);
  YruntimeYpower_of_two_ceiling = T163;
  lit_110 = YPsb((P)"0123456789abcdefghijklmnopqrstuvwxyz");
  YruntimeYDdigit_to_char = CHKREF(lit_110);
  YruntimeYTprint_baseT = YPint((P)10);
  lit_111 = YPflo(FLOINT(0.0000009999999));
  YruntimeYepsilon = CHKREF(lit_111);
  lit_112 = YPPsym((P)"decode-radix-option");
  lit_113 = YPPsym((P)"caller-name");
  lit_114 = YPPsym((P)"default");
  lit_115 = YPPsym((P)"rest");
  lit_116 = YPsb((P)"too many arguments: %=, %=");
  T167 = YPsig(YPPlist(3,CHKREF(lit_115),CHKREF(lit_114),CHKREF(lit_113)),YPPlist(3,CHKREF(YLoptsG),CHKREF(YLintG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLintG));
  fun_decode_radix_option_98 = YPmet(FUNCODEREF(fun_decode_radix_option_98),CHKREF(lit_112),T167,ENVNUL);
  T171 = BOUNDP(YruntimeYdecode_radix_option);
  if (T171 != YPfalse) {
    T170 = CHKREF(YruntimeYdecode_radix_option);
  } else {
    T170 = YPfalse;
  }
  T169 = fun_decode_radix_option_98;
  T168 = CALL2(CHKREF(YPdefine_method),T170,T169);
  YruntimeYdecode_radix_option = T168;
  lit_117 = YPPsym((P)"num-to-str");
  lit_118 = YPPsym((P)"radix-option");
  lit_119 = YPPsym((P)"num");
  lit_120 = YPsb((P)"0");
  lit_121 = YPPsym((P)"digit-list");
  T173 = YPsig(YPPlist(2,CHKREF(lit_121),CHKREF(lit_119)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_99 = YPmet(FUNCODEREF(fun_loop_99),CHKREF(lit_88),T173,ENVNUL);
  T172 = YPsig(YPPlist(2,CHKREF(lit_119),CHKREF(lit_118)),YPPlist(1,CHKREF(YLintG)),YPtrue,YPint((P)1),CHKREF(YLstrG));
  fun_num_to_str_100 = YPmet(FUNCODEREF(fun_num_to_str_100),CHKREF(lit_117),T172,ENVNUL);
  T177 = BOUNDP(YruntimeYnum_to_str);
  if (T177 != YPfalse) {
    T176 = CHKREF(YruntimeYnum_to_str);
  } else {
    T176 = YPfalse;
  }
  T175 = fun_num_to_str_100;
  T174 = CALL2(CHKREF(YPdefine_method),T176,T175);
  YruntimeYnum_to_str = T174;
  lit_122 = YPPsym((P)"flo-bits");
  T178 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLfloG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  YruntimeYflo_bits = YPmet(FUNCODEREF(YruntimeYflo_bits),CHKREF(lit_122),T178,ENVNUL);
  T179 = YruntimeYflo_bits;
  YruntimeYflo_bits = T179;
  T181 = CALL1(CHKREF(YruntimeYtE),CHKREF(YLfloG));
  T180 = YPsig(YPPlist(2,CHKREF(lit_51),CHKREF(lit_2)),YPPlist(2,T181,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLfloG));
  fun_as_102 = YPmet(FUNCODEREF(fun_as_102),CHKREF(lit_37),T180,ENVNUL);
  T185 = BOUNDP(YruntimeYas);
  if (T185 != YPfalse) {
    T184 = CHKREF(YruntimeYas);
  } else {
    T184 = YPfalse;
  }
  T183 = fun_as_102;
  T182 = CALL2(CHKREF(YPdefine_method),T184,T183);
  YruntimeYas = T182;
  T186 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_EE_103 = YPmet(FUNCODEREF(fun_EE_103),CHKREF(lit_40),T186,ENVNUL);
  T190 = BOUNDP(YmacrosYEE);
  if (T190 != YPfalse) {
    T189 = CHKREF(YmacrosYEE);
  } else {
    T189 = YPfalse;
  }
  T188 = fun_EE_103;
  T187 = CALL2(CHKREF(YPdefine_method),T189,T188);
  YmacrosYEE = T187;
  T191 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_L_104 = YPmet(FUNCODEREF(fun_L_104),CHKREF(lit_53),T191,ENVNUL);
  T195 = BOUNDP(YruntimeYL);
  if (T195 != YPfalse) {
    T194 = CHKREF(YruntimeYL);
  } else {
    T194 = YPfalse;
  }
  T193 = fun_L_104;
  T192 = CALL2(CHKREF(YPdefine_method),T194,T193);
  YruntimeYL = T192;
  T196 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLfloG));
  fun_A_105 = YPmet(FUNCODEREF(fun_A_105),CHKREF(lit_65),T196,ENVNUL);
  T200 = BOUNDP(YruntimeYA);
  if (T200 != YPfalse) {
    T199 = CHKREF(YruntimeYA);
  } else {
    T199 = YPfalse;
  }
  T198 = fun_A_105;
  T197 = CALL2(CHKREF(YPdefine_method),T199,T198);
  YruntimeYA = T197;
  T201 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLfloG));
  fun___106 = YPmet(FUNCODEREF(fun___106),CHKREF(lit_66),T201,ENVNUL);
  T205 = BOUNDP(YruntimeY_);
  if (T205 != YPfalse) {
    T204 = CHKREF(YruntimeY_);
  } else {
    T204 = YPfalse;
  }
  T203 = fun___106;
  T202 = CALL2(CHKREF(YPdefine_method),T204,T203);
  YruntimeY_ = T202;
  T206 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLfloG));
  fun_T_107 = YPmet(FUNCODEREF(fun_T_107),CHKREF(lit_67),T206,ENVNUL);
  T210 = BOUNDP(YruntimeYT);
  if (T210 != YPfalse) {
    T209 = CHKREF(YruntimeYT);
  } else {
    T209 = YPfalse;
  }
  T208 = fun_T_107;
  T207 = CALL2(CHKREF(YPdefine_method),T209,T208);
  YruntimeYT = T207;
  lit_123 = YPPsym((P)"/");
  T211 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLfloG));
  fun_S_108 = YPmet(FUNCODEREF(fun_S_108),CHKREF(lit_123),T211,ENVNUL);
  T215 = BOUNDP(YruntimeYS);
  if (T215 != YPfalse) {
    T214 = CHKREF(YruntimeYS);
  } else {
    T214 = YPfalse;
  }
  T213 = fun_S_108;
  T212 = CALL2(CHKREF(YPdefine_method),T214,T213);
  YruntimeYS = T212;
  T216 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLfloG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLtupG));
  fun_truncateS_109 = YPmet(FUNCODEREF(fun_truncateS_109),CHKREF(lit_78),T216,ENVNUL);
  T220 = BOUNDP(YruntimeYtruncateS);
  if (T220 != YPfalse) {
    T219 = CHKREF(YruntimeYtruncateS);
  } else {
    T219 = YPfalse;
  }
  T218 = fun_truncateS_109;
  T217 = CALL2(CHKREF(YPdefine_method),T219,T218);
  YruntimeYtruncateS = T217;
  lit_124 = YPsb((P)"-");
  lit_125 = YPsb((P)"0.0000000000000");
  lit_126 = YPsb((P)".");
  lit_127 = YPsb((P)"0.");
  lit_128 = YPsb((P)".0");
  lit_129 = YPPsym((P)"p");
  T222 = YPsig(YPPlist(2,CHKREF(lit_129),CHKREF(lit_14)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_110 = YPmet(FUNCODEREF(fun_loop_110),CHKREF(lit_88),T222,ENVNUL);
  T221 = YPsig(YPPlist(2,CHKREF(lit_119),CHKREF(lit_118)),YPPlist(1,CHKREF(YLfloG)),YPtrue,YPint((P)1),CHKREF(YLstrG));
  fun_num_to_str_111 = YPmet(FUNCODEREF(fun_num_to_str_111),CHKREF(lit_117),T221,ENVNUL);
  T226 = BOUNDP(YruntimeYnum_to_str);
  if (T226 != YPfalse) {
    T225 = CHKREF(YruntimeYnum_to_str);
  } else {
    T225 = YPfalse;
  }
  T224 = fun_num_to_str_111;
  T223 = CALL2(CHKREF(YPdefine_method),T225,T224);
  YruntimeYnum_to_str = T223;
  lit_130 = YPPsym((P)"fabs");
  lit_131 = YPPsym((P)"objects");
  T228 = CALL1(CHKREF(YruntimeYtL),CHKREF(YLcolG));
  T227 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_131)),YPPlist(1,T228),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_fabs_112 = YPmet(FUNCODEREF(fun_fabs_112),CHKREF(lit_130),T227,ENVNUL);
  T232 = BOUNDP(YruntimeYfabs);
  if (T232 != YPfalse) {
    T231 = CHKREF(YruntimeYfabs);
  } else {
    T231 = YPfalse;
  }
  T230 = fun_fabs_112;
  T229 = CALL2(CHKREF(YPdefine_method),T231,T230);
  YruntimeYfabs = T229;
  lit_132 = YPPsym((P)"empty?");
  T233 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YLcolG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_emptyQ_113 = YPmet(FUNCODEREF(fun_emptyQ_113),CHKREF(lit_132),T233,ENVNUL);
  T237 = BOUNDP(YmacrosYemptyQ);
  if (T237 != YPfalse) {
    T236 = CHKREF(YmacrosYemptyQ);
  } else {
    T236 = YPfalse;
  }
  T235 = fun_emptyQ_113;
  T234 = CALL2(CHKREF(YPdefine_method),T236,T235);
  YmacrosYemptyQ = T234;
  lit_133 = YPPsym((P)"empty");
  T239 = CALL1(CHKREF(YruntimeYtL),CHKREF(YLcolG));
  T238 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,T239),YPfalse,YPint((P)1),CHKREF(YLcolG));
  fun_empty_114 = YPmet(FUNCODEREF(fun_empty_114),CHKREF(lit_133),T238,ENVNUL);
  T243 = BOUNDP(YruntimeYempty);
  if (T243 != YPfalse) {
    T242 = CHKREF(YruntimeYempty);
  } else {
    T242 = YPfalse;
  }
  T241 = fun_empty_114;
  T240 = CALL2(CHKREF(YPdefine_method),T242,T241);
  YruntimeYempty = T240;
  T245 = CALL1(CHKREF(YruntimeYtL),CHKREF(YLcolG));
  T244 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,T245),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_default_115 = YPmet(FUNCODEREF(fun_default_115),CHKREF(lit_114),T244,ENVNUL);
  T249 = BOUNDP(YruntimeYdefault);
  if (T249 != YPfalse) {
    T248 = CHKREF(YruntimeYdefault);
  } else {
    T248 = YPfalse;
  }
  T247 = fun_default_115;
  T246 = CALL2(CHKREF(YPdefine_method),T248,T247);
  YruntimeYdefault = T246;
  lit_134 = YPPsym((P)"as-copy");
  T250 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_2)),YPPlist(2,CHKREF(YLcolG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLcolG));
  fun_as_copy_116 = YPmet(FUNCODEREF(fun_as_copy_116),CHKREF(lit_134),T250,ENVNUL);
  T254 = BOUNDP(YruntimeYas_copy);
  if (T254 != YPfalse) {
    T253 = CHKREF(YruntimeYas_copy);
  } else {
    T253 = YPfalse;
  }
  T252 = fun_as_copy_116;
  T251 = CALL2(CHKREF(YPdefine_method),T253,T252);
  YruntimeYas_copy = T251;
  lit_135 = YPPsym((P)"c2");
  lit_136 = YPPsym((P)"c1");
  lit_137 = YPPsym((P)"eq");
  lit_138 = YPPsym((P)"s2");
  lit_139 = YPPsym((P)"s1");
  T256 = YPsig(YPPlist(2,CHKREF(lit_139),CHKREF(lit_138)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_eq_117 = YPmet(FUNCODEREF(fun_eq_117),CHKREF(lit_137),T256,ENVNUL);
  T255 = YPsig(YPPlist(2,CHKREF(lit_136),CHKREF(lit_135)),YPPlist(2,CHKREF(YLcolG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_E_118 = YPmet(FUNCODEREF(fun_E_118),CHKREF(lit_42),T255,ENVNUL);
  T260 = BOUNDP(YruntimeYE);
  if (T260 != YPfalse) {
    T259 = CHKREF(YruntimeYE);
  } else {
    T259 = YPfalse;
  }
  T258 = fun_E_118;
  T257 = CALL2(CHKREF(YPdefine_method),T259,T258);
  YruntimeYE = T257;
  lit_140 = YPPsym((P)"fab");
  lit_141 = YPPsym((P)"s");
  T262 = CALL1(CHKREF(YruntimeYtL),CHKREF(YLcolG));
  T261 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_141)),YPPlist(2,T262,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLbotG));
  fun_fab_119 = YPmet(FUNCODEREF(fun_fab_119),CHKREF(lit_140),T261,ENVNUL);
  T266 = BOUNDP(YruntimeYfab);
  if (T266 != YPfalse) {
    T265 = CHKREF(YruntimeYfab);
  } else {
    T265 = YPfalse;
  }
  T264 = fun_fab_119;
  T263 = CALL2(CHKREF(YPdefine_method),T265,T264);
  YruntimeYfab = T263;
  T268 = CALL1(CHKREF(YruntimeYtL),CHKREF(YLcolG));
  T267 = YPsig(YPPlist(2,CHKREF(lit_129),CHKREF(lit_2)),YPPlist(2,T268,CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLcolG));
  fun_as_120 = YPmet(FUNCODEREF(fun_as_120),CHKREF(lit_37),T267,ENVNUL);
  T272 = BOUNDP(YruntimeYas);
  if (T272 != YPfalse) {
    T271 = CHKREF(YruntimeYas);
  } else {
    T271 = YPfalse;
  }
  T270 = fun_as_120;
  T269 = CALL2(CHKREF(YPdefine_method),T271,T270);
  YruntimeYas = T269;
  lit_142 = YPPsym((P)"keys");
  lit_143 = YPPsym((P)"con");
  lit_144 = YPPsym((P)"res");
  T274 = YPsig(YPPlist(2,CHKREF(lit_144),CHKREF(lit_141)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_con_121 = YPmet(FUNCODEREF(fun_con_121),CHKREF(lit_143),T274,ENVNUL);
  T273 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YLcolG)),YPfalse,YPint((P)1),CHKREF(YLseqG));
  fun_keys_122 = YPmet(FUNCODEREF(fun_keys_122),CHKREF(lit_142),T273,ENVNUL);
  T278 = BOUNDP(YruntimeYkeys);
  if (T278 != YPfalse) {
    T277 = CHKREF(YruntimeYkeys);
  } else {
    T277 = YPfalse;
  }
  T276 = fun_keys_122;
  T275 = CALL2(CHKREF(YPdefine_method),T277,T276);
  YruntimeYkeys = T275;
  lit_145 = YPPsym((P)"do-key-vals");
  lit_146 = YPPsym((P)"key-vals");
  lit_147 = YPPsym((P)"fn");
  lit_148 = YPPsym((P)"rep");
  T280 = YPsig(YPPlist(1,CHKREF(lit_146)),YPPlist(1,CHKREF(YLoptsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_rep_123 = YPmet(FUNCODEREF(fun_rep_123),CHKREF(lit_148),T280,ENVNUL);
  T279 = YPsig(YPPlist(2,CHKREF(lit_147),CHKREF(lit_146)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLoptsG)),YPfalse,YPint((P)2),CHKREF(YLtupG));
  fun_do_key_vals_124 = YPmet(FUNCODEREF(fun_do_key_vals_124),CHKREF(lit_145),T279,ENVNUL);
  T284 = BOUNDP(YruntimeYdo_key_vals);
  if (T284 != YPfalse) {
    T283 = CHKREF(YruntimeYdo_key_vals);
  } else {
    T283 = YPfalse;
  }
  T282 = fun_do_key_vals_124;
  T281 = CALL2(CHKREF(YPdefine_method),T283,T282);
  YruntimeYdo_key_vals = T281;
  lit_149 = YPPsym((P)"len");
  lit_150 = YPPsym((P)"count");
  T286 = YPsig(YPPlist(2,CHKREF(lit_141),CHKREF(lit_50)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_count_125 = YPmet(FUNCODEREF(fun_count_125),CHKREF(lit_150),T286,ENVNUL);
  T285 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLcolG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  fun_len_126 = YPmet(FUNCODEREF(fun_len_126),CHKREF(lit_149),T285,ENVNUL);
  T290 = BOUNDP(YruntimeYlen);
  if (T290 != YPfalse) {
    T289 = CHKREF(YruntimeYlen);
  } else {
    T289 = YPfalse;
  }
  T288 = fun_len_126;
  T287 = CALL2(CHKREF(YPdefine_method),T289,T288);
  YruntimeYlen = T287;
  lit_151 = YPPsym((P)"alter");
  lit_152 = YPPsym((P)"src");
  lit_153 = YPPsym((P)"dst");
  lit_154 = YPPsym((P)"in");
  lit_155 = YPPsym((P)"ss");
  T292 = YPsig(YPPlist(1,CHKREF(lit_155)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_in_127 = YPmet(FUNCODEREF(fun_in_127),CHKREF(lit_154),T292,ENVNUL);
  T291 = YPsig(YPPlist(2,CHKREF(lit_153),CHKREF(lit_152)),YPPlist(2,CHKREF(YLcolG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLcolG));
  fun_alter_128 = YPmet(FUNCODEREF(fun_alter_128),CHKREF(lit_151),T291,ENVNUL);
  T296 = BOUNDP(YruntimeYalter);
  if (T296 != YPfalse) {
    T295 = CHKREF(YruntimeYalter);
  } else {
    T295 = YPfalse;
  }
  T294 = fun_alter_128;
  T293 = CALL2(CHKREF(YPdefine_method),T295,T294);
  YruntimeYalter = T293;
  lit_156 = YPPsym((P)"fill");
  lit_157 = YPPsym((P)"val");
  lit_158 = YPPsym((P)"ds");
  T298 = YPsig(YPPlist(1,CHKREF(lit_158)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_in_129 = YPmet(FUNCODEREF(fun_in_129),CHKREF(lit_154),T298,ENVNUL);
  T297 = YPsig(YPPlist(2,CHKREF(lit_153),CHKREF(lit_157)),YPPlist(2,CHKREF(YLcolG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLcolG));
  fun_fill_130 = YPmet(FUNCODEREF(fun_fill_130),CHKREF(lit_156),T297,ENVNUL);
  T302 = BOUNDP(YruntimeYfill);
  if (T302 != YPfalse) {
    T301 = CHKREF(YruntimeYfill);
  } else {
    T301 = YPfalse;
  }
  T300 = fun_fill_130;
  T299 = CALL2(CHKREF(YPdefine_method),T301,T300);
  YruntimeYfill = T299;
  lit_159 = YPPsym((P)"any?");
  lit_160 = YPPsym((P)"test");
  lit_161 = YPPsym((P)"fnd");
  lit_162 = YPPsym((P)"state");
  T304 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_fnd_131 = YPmet(FUNCODEREF(fun_fnd_131),CHKREF(lit_161),T304,ENVNUL);
  T303 = YPsig(YPPlist(2,CHKREF(lit_160),CHKREF(lit_52)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_anyQ_132 = YPmet(FUNCODEREF(fun_anyQ_132),CHKREF(lit_159),T303,ENVNUL);
  T308 = BOUNDP(YruntimeYanyQ);
  if (T308 != YPfalse) {
    T307 = CHKREF(YruntimeYanyQ);
  } else {
    T307 = YPfalse;
  }
  T306 = fun_anyQ_132;
  T305 = CALL2(CHKREF(YPdefine_method),T307,T306);
  YruntimeYanyQ = T305;
  lit_163 = YPPsym((P)"any2?");
  lit_164 = YPPsym((P)"sy");
  lit_165 = YPPsym((P)"sx");
  T310 = YPsig(YPPlist(2,CHKREF(lit_165),CHKREF(lit_164)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fnd_133 = YPmet(FUNCODEREF(fun_fnd_133),CHKREF(lit_161),T310,ENVNUL);
  T309 = YPsig(YPPlist(3,CHKREF(lit_160),CHKREF(lit_2),CHKREF(lit_41)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLcolG),CHKREF(YLcolG)),YPfalse,YPint((P)3),CHKREF(YLlogG));
  fun_any2Q_134 = YPmet(FUNCODEREF(fun_any2Q_134),CHKREF(lit_163),T309,ENVNUL);
  T314 = BOUNDP(YruntimeYany2Q);
  if (T314 != YPfalse) {
    T313 = CHKREF(YruntimeYany2Q);
  } else {
    T313 = YPfalse;
  }
  T312 = fun_any2Q_134;
  T311 = CALL2(CHKREF(YPdefine_method),T313,T312);
  YruntimeYany2Q = T311;
  lit_166 = YPPsym((P)"all?");
  T316 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_fnd_135 = YPmet(FUNCODEREF(fun_fnd_135),CHKREF(lit_161),T316,ENVNUL);
  T315 = YPsig(YPPlist(2,CHKREF(lit_160),CHKREF(lit_52)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_allQ_136 = YPmet(FUNCODEREF(fun_allQ_136),CHKREF(lit_166),T315,ENVNUL);
  T320 = BOUNDP(YruntimeYallQ);
  if (T320 != YPfalse) {
    T319 = CHKREF(YruntimeYallQ);
  } else {
    T319 = YPfalse;
  }
  T318 = fun_allQ_136;
  T317 = CALL2(CHKREF(YPdefine_method),T319,T318);
  YruntimeYallQ = T317;
  lit_167 = YPPsym((P)"all2?");
  T325 = YPsig(YPPlist(2,CHKREF(lit_165),CHKREF(lit_164)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  T324 = fun_fnd_137 = YPmet(FUNCODEREF(fun_fnd_137),CHKREF(lit_161),T325,ENVNUL);
  T323 = YPsig(YPPlist(3,CHKREF(lit_160),CHKREF(lit_2),CHKREF(lit_41)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLcolG),CHKREF(YLcolG)),YPfalse,YPint((P)3),CHKREF(YLlogG));
  T322 = fun_all2Q_138 = YPmet(FUNCODEREF(fun_all2Q_138),CHKREF(lit_167),T323,ENVNUL);
  T330 = BOUNDP(YruntimeYall2Q);
  if (T330 != YPfalse) {
    T329 = CHKREF(YruntimeYall2Q);
  } else {
    T329 = YPfalse;
  }
  T328 = fun_all2Q_138;
  T327 = CALL2(CHKREF(YPdefine_method),T329,T328);
  T326 = YruntimeYall2Q = T327;
  T321 = T326;
  return T321;
}

P YruntimeY___main_2___() {
  P T319,T318,T317,T316,T315,T314,T313,T312,T311,T310,T309,T308,T307,T306,T305,T304;
  P T303,T302,T301,T300,T299,T298,T297,T296,T295,T294,T293,T292,T291,T290,T289,T288;
  P T287,T286,T285,T284,T283,T282,T281,T280,T279,T278,T277,T276,T275,T274,T273,T272;
  P T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260,T259,T258,T257,T256;
  P T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244,T243,T242,T241,T240;
  P T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224;
  P T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208;
  P T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192;
  P T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176;
  P T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160;
  P T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144;
  P T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128;
  P T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112;
  P T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96;
  P T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80;
  P T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64;
  P T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48;
  P T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_168 = YPPsym((P)"reduce");
  lit_169 = YPPsym((P)"init");
  lit_170 = YPPsym((P)"combine");
  lit_171 = YPPsym((P)"red");
  T1 = YPsig(YPPlist(2,CHKREF(lit_144),CHKREF(lit_162)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_red_139 = YPmet(FUNCODEREF(fun_red_139),CHKREF(lit_171),T1,ENVNUL);
  T0 = YPsig(YPPlist(3,CHKREF(lit_170),CHKREF(lit_169),CHKREF(lit_52)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLanyG),CHKREF(YLcolG)),YPfalse,YPint((P)3),CHKREF(YLcolG));
  fun_reduce_140 = YPmet(FUNCODEREF(fun_reduce_140),CHKREF(lit_168),T0,ENVNUL);
  T5 = BOUNDP(YruntimeYreduce);
  if (T5 != YPfalse) {
    T4 = CHKREF(YruntimeYreduce);
  } else {
    T4 = YPfalse;
  }
  T3 = fun_reduce_140;
  T2 = CALL2(CHKREF(YPdefine_method),T4,T3);
  YruntimeYreduce = T2;
  lit_172 = YPPsym((P)"reduce+");
  T7 = YPsig(YPPlist(2,CHKREF(lit_144),CHKREF(lit_162)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_red_141 = YPmet(FUNCODEREF(fun_red_141),CHKREF(lit_171),T7,ENVNUL);
  T6 = YPsig(YPPlist(2,CHKREF(lit_170),CHKREF(lit_52)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLcolG));
  fun_reduceA_142 = YPmet(FUNCODEREF(fun_reduceA_142),CHKREF(lit_172),T6,ENVNUL);
  T11 = BOUNDP(YruntimeYreduceA);
  if (T11 != YPfalse) {
    T10 = CHKREF(YruntimeYreduceA);
  } else {
    T10 = YPfalse;
  }
  T9 = fun_reduceA_142;
  T8 = CALL2(CHKREF(YPdefine_method),T10,T9);
  YruntimeYreduceA = T8;
  lit_173 = YPPsym((P)"find-key");
  T13 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_fnd_143 = YPmet(FUNCODEREF(fun_fnd_143),CHKREF(lit_161),T13,ENVNUL);
  T12 = YPsig(YPPlist(2,CHKREF(lit_63),CHKREF(lit_52)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_find_key_144 = YPmet(FUNCODEREF(fun_find_key_144),CHKREF(lit_173),T12,ENVNUL);
  T17 = BOUNDP(YruntimeYfind_key);
  if (T17 != YPfalse) {
    T16 = CHKREF(YruntimeYfind_key);
  } else {
    T16 = YPfalse;
  }
  T15 = fun_find_key_144;
  T14 = CALL2(CHKREF(YPdefine_method),T16,T15);
  YruntimeYfind_key = T14;
  lit_174 = YPPsym((P)"map");
  T19 = YPsig(YPPlist(2,CHKREF(lit_144),CHKREF(lit_141)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_con_145 = YPmet(FUNCODEREF(fun_con_145),CHKREF(lit_143),T19,ENVNUL);
  T18 = YPsig(YPPlist(2,CHKREF(lit_63),CHKREF(lit_52)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLcolG));
  fun_map_146 = YPmet(FUNCODEREF(fun_map_146),CHKREF(lit_174),T18,ENVNUL);
  T23 = BOUNDP(YmacrosYmap);
  if (T23 != YPfalse) {
    T22 = CHKREF(YmacrosYmap);
  } else {
    T22 = YPfalse;
  }
  T21 = fun_map_146;
  T20 = CALL2(CHKREF(YPdefine_method),T22,T21);
  YmacrosYmap = T20;
  lit_175 = YPPsym((P)"do");
  lit_176 = YPPsym((P)"lop");
  T25 = YPsig(YPPlist(1,CHKREF(lit_141)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_lop_147 = YPmet(FUNCODEREF(fun_lop_147),CHKREF(lit_176),T25,ENVNUL);
  T24 = YPsig(YPPlist(2,CHKREF(lit_63),CHKREF(lit_52)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_do_148 = YPmet(FUNCODEREF(fun_do_148),CHKREF(lit_175),T24,ENVNUL);
  T29 = BOUNDP(YruntimeYdo);
  if (T29 != YPfalse) {
    T28 = CHKREF(YruntimeYdo);
  } else {
    T28 = YPfalse;
  }
  T27 = fun_do_148;
  T26 = CALL2(CHKREF(YPdefine_method),T28,T27);
  YruntimeYdo = T26;
  lit_177 = YPPsym((P)"map2");
  T31 = YPsig(YPPlist(3,CHKREF(lit_144),CHKREF(lit_165),CHKREF(lit_164)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_con_149 = YPmet(FUNCODEREF(fun_con_149),CHKREF(lit_143),T31,ENVNUL);
  T30 = YPsig(YPPlist(3,CHKREF(lit_63),CHKREF(lit_2),CHKREF(lit_41)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLcolG),CHKREF(YLcolG)),YPfalse,YPint((P)3),CHKREF(YLcolG));
  fun_map2_150 = YPmet(FUNCODEREF(fun_map2_150),CHKREF(lit_177),T30,ENVNUL);
  T35 = BOUNDP(YruntimeYmap2);
  if (T35 != YPfalse) {
    T34 = CHKREF(YruntimeYmap2);
  } else {
    T34 = YPfalse;
  }
  T33 = fun_map2_150;
  T32 = CALL2(CHKREF(YPdefine_method),T34,T33);
  YruntimeYmap2 = T32;
  lit_178 = YPPsym((P)"do2");
  T37 = YPsig(YPPlist(2,CHKREF(lit_165),CHKREF(lit_164)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_lop_151 = YPmet(FUNCODEREF(fun_lop_151),CHKREF(lit_176),T37,ENVNUL);
  T36 = YPsig(YPPlist(3,CHKREF(lit_63),CHKREF(lit_2),CHKREF(lit_41)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLcolG),CHKREF(YLcolG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_do2_152 = YPmet(FUNCODEREF(fun_do2_152),CHKREF(lit_178),T36,ENVNUL);
  T41 = BOUNDP(YruntimeYdo2);
  if (T41 != YPfalse) {
    T40 = CHKREF(YruntimeYdo2);
  } else {
    T40 = YPfalse;
  }
  T39 = fun_do2_152;
  T38 = CALL2(CHKREF(YPdefine_method),T40,T39);
  YruntimeYdo2 = T38;
  lit_179 = YPPsym((P)"do3");
  lit_180 = YPPsym((P)"z");
  lit_181 = YPPsym((P)"sz");
  T43 = YPsig(YPPlist(3,CHKREF(lit_165),CHKREF(lit_164),CHKREF(lit_181)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_lop_153 = YPmet(FUNCODEREF(fun_lop_153),CHKREF(lit_176),T43,ENVNUL);
  T42 = YPsig(YPPlist(4,CHKREF(lit_63),CHKREF(lit_2),CHKREF(lit_41),CHKREF(lit_180)),YPPlist(4,CHKREF(YLfunG),CHKREF(YLcolG),CHKREF(YLcolG),CHKREF(YLcolG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_do3_154 = YPmet(FUNCODEREF(fun_do3_154),CHKREF(lit_179),T42,ENVNUL);
  T47 = BOUNDP(YruntimeYdo3);
  if (T47 != YPfalse) {
    T46 = CHKREF(YruntimeYdo3);
  } else {
    T46 = YPfalse;
  }
  T45 = fun_do3_154;
  T44 = CALL2(CHKREF(YPdefine_method),T46,T45);
  YruntimeYdo3 = T44;
  lit_182 = YPPsym((P)"map-keyed");
  T49 = YPsig(YPPlist(2,CHKREF(lit_144),CHKREF(lit_141)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_con_155 = YPmet(FUNCODEREF(fun_con_155),CHKREF(lit_143),T49,ENVNUL);
  T48 = YPsig(YPPlist(2,CHKREF(lit_63),CHKREF(lit_52)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLcolG));
  fun_map_keyed_156 = YPmet(FUNCODEREF(fun_map_keyed_156),CHKREF(lit_182),T48,ENVNUL);
  T53 = BOUNDP(YruntimeYmap_keyed);
  if (T53 != YPfalse) {
    T52 = CHKREF(YruntimeYmap_keyed);
  } else {
    T52 = YPfalse;
  }
  T51 = fun_map_keyed_156;
  T50 = CALL2(CHKREF(YPdefine_method),T52,T51);
  YruntimeYmap_keyed = T50;
  lit_183 = YPPsym((P)"do-keyed");
  T55 = YPsig(YPPlist(1,CHKREF(lit_141)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_lop_157 = YPmet(FUNCODEREF(fun_lop_157),CHKREF(lit_176),T55,ENVNUL);
  T54 = YPsig(YPPlist(2,CHKREF(lit_63),CHKREF(lit_52)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLcolG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_do_keyed_158 = YPmet(FUNCODEREF(fun_do_keyed_158),CHKREF(lit_183),T54,ENVNUL);
  T59 = BOUNDP(YruntimeYdo_keyed);
  if (T59 != YPfalse) {
    T58 = CHKREF(YruntimeYdo_keyed);
  } else {
    T58 = YPfalse;
  }
  T57 = fun_do_keyed_158;
  T56 = CALL2(CHKREF(YPdefine_method),T58,T57);
  YruntimeYdo_keyed = T56;
  lit_184 = YPPsym((P)"mem?");
  T61 = YPsig(YPPlist(1,CHKREF(lit_14)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_159 = YPmet(FUNCODEREF(fun_159),YPfalse,T61,ENVNUL);
  T60 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_2)),YPPlist(2,CHKREF(YLcolG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_memQ_160 = YPmet(FUNCODEREF(fun_memQ_160),CHKREF(lit_184),T60,ENVNUL);
  T65 = BOUNDP(YruntimeYmemQ);
  if (T65 != YPfalse) {
    T64 = CHKREF(YruntimeYmemQ);
  } else {
    T64 = YPfalse;
  }
  T63 = fun_memQ_160;
  T62 = CALL2(CHKREF(YPdefine_method),T64,T63);
  YruntimeYmemQ = T62;
  lit_185 = YPPsym((P)"<map>");
  T67 = (P)YPpair(CHKREF(YLcolG),Ynil);
  T66 = CALL2(CHKREF(Yfab_class),CHKREF(lit_185),T67);
  YruntimeYLmapG = T66;
  lit_186 = YPPsym((P)"fab-map");
  lit_187 = YPPsym((P)"key");
  T70 = YPsig(YPPlist(2,CHKREF(lit_187),CHKREF(lit_157)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_161 = YPmet(FUNCODEREF(fun_161),YPfalse,T70,ENVNUL);
  T69 = CALL1(CHKREF(YruntimeYtL),CHKREF(YruntimeYLmapG));
  T68 = YPsig(YPPlist(2,CHKREF(lit_129),CHKREF(lit_146)),YPPlist(1,T69),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_fab_map_162 = YPmet(FUNCODEREF(fun_fab_map_162),CHKREF(lit_186),T68,ENVNUL);
  T74 = BOUNDP(YruntimeYfab_map);
  if (T74 != YPfalse) {
    T73 = CHKREF(YruntimeYfab_map);
  } else {
    T73 = YPfalse;
  }
  T72 = fun_fab_map_162;
  T71 = CALL2(CHKREF(YPdefine_method),T73,T72);
  YruntimeYfab_map = T71;
  lit_188 = YPPsym((P)"<assocs>");
  T76 = (P)YPpair(CHKREF(YruntimeYLmapG),Ynil);
  T75 = CALL2(CHKREF(Yfab_class),CHKREF(lit_188),T76);
  YruntimeYLassocsG = T75;
  lit_189 = YPPsym((P)"assocs-test");
  lit_190 = YPPsym((P)"_x");
  T77 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLassocsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_assocs_test_163 = YPmet(FUNCODEREF(fun_assocs_test_163),CHKREF(lit_189),T77,ENVNUL);
  T81 = BOUNDP(YruntimeYassocs_test);
  if (T81 != YPfalse) {
    T80 = CHKREF(YruntimeYassocs_test);
  } else {
    T80 = YPfalse;
  }
  T79 = fun_assocs_test_163;
  T78 = CALL2(CHKREF(YPdefine_method),T80,T79);
  YruntimeYassocs_test = T78;
  lit_191 = YPPsym((P)"assocs-test-setter");
  lit_192 = YPPsym((P)"_z");
  T82 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLfunG),CHKREF(YruntimeYLassocsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_assocs_test_setter_164 = YPmet(FUNCODEREF(fun_assocs_test_setter_164),CHKREF(lit_191),T82,ENVNUL);
  T86 = BOUNDP(YruntimeYassocs_test_setter);
  if (T86 != YPfalse) {
    T85 = CHKREF(YruntimeYassocs_test_setter);
  } else {
    T85 = YPfalse;
  }
  T84 = fun_assocs_test_setter_164;
  T83 = CALL2(CHKREF(YPdefine_method),T85,T84);
  YruntimeYassocs_test_setter = T83;
  T87 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_165 = YPmet(FUNCODEREF(fun_165),YPfalse,T87,ENVNUL);
  T88 = fun_165;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLassocsG),CHKREF(YruntimeYassocs_test),CHKREF(YruntimeYassocs_test_setter),CHKREF(YLfunG),T88);
  lit_193 = YPPsym((P)"assocs-keys");
  T89 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLassocsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_assocs_keys_166 = YPmet(FUNCODEREF(fun_assocs_keys_166),CHKREF(lit_193),T89,ENVNUL);
  T93 = BOUNDP(YruntimeYassocs_keys);
  if (T93 != YPfalse) {
    T92 = CHKREF(YruntimeYassocs_keys);
  } else {
    T92 = YPfalse;
  }
  T91 = fun_assocs_keys_166;
  T90 = CALL2(CHKREF(YPdefine_method),T92,T91);
  YruntimeYassocs_keys = T90;
  lit_194 = YPPsym((P)"assocs-keys-setter");
  T94 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLlstG),CHKREF(YruntimeYLassocsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_assocs_keys_setter_167 = YPmet(FUNCODEREF(fun_assocs_keys_setter_167),CHKREF(lit_194),T94,ENVNUL);
  T98 = BOUNDP(YruntimeYassocs_keys_setter);
  if (T98 != YPfalse) {
    T97 = CHKREF(YruntimeYassocs_keys_setter);
  } else {
    T97 = YPfalse;
  }
  T96 = fun_assocs_keys_setter_167;
  T95 = CALL2(CHKREF(YPdefine_method),T97,T96);
  YruntimeYassocs_keys_setter = T95;
  T99 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_168 = YPmet(FUNCODEREF(fun_168),YPfalse,T99,ENVNUL);
  T100 = fun_168;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLassocsG),CHKREF(YruntimeYassocs_keys),CHKREF(YruntimeYassocs_keys_setter),CHKREF(YLlstG),T100);
  lit_195 = YPPsym((P)"assocs-vals");
  T101 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLassocsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_assocs_vals_169 = YPmet(FUNCODEREF(fun_assocs_vals_169),CHKREF(lit_195),T101,ENVNUL);
  T105 = BOUNDP(YruntimeYassocs_vals);
  if (T105 != YPfalse) {
    T104 = CHKREF(YruntimeYassocs_vals);
  } else {
    T104 = YPfalse;
  }
  T103 = fun_assocs_vals_169;
  T102 = CALL2(CHKREF(YPdefine_method),T104,T103);
  YruntimeYassocs_vals = T102;
  lit_196 = YPPsym((P)"assocs-vals-setter");
  T106 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLlstG),CHKREF(YruntimeYLassocsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_assocs_vals_setter_170 = YPmet(FUNCODEREF(fun_assocs_vals_setter_170),CHKREF(lit_196),T106,ENVNUL);
  T110 = BOUNDP(YruntimeYassocs_vals_setter);
  if (T110 != YPfalse) {
    T109 = CHKREF(YruntimeYassocs_vals_setter);
  } else {
    T109 = YPfalse;
  }
  T108 = fun_assocs_vals_setter_170;
  T107 = CALL2(CHKREF(YPdefine_method),T109,T108);
  YruntimeYassocs_vals_setter = T107;
  T111 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_171 = YPmet(FUNCODEREF(fun_171),YPfalse,T111,ENVNUL);
  T112 = fun_171;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLassocsG),CHKREF(YruntimeYassocs_vals),CHKREF(YruntimeYassocs_vals_setter),CHKREF(YLlstG),T112);
  T114 = CALL1(CHKREF(YruntimeYtE),CHKREF(YruntimeYLassocsG));
  T113 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_141)),YPPlist(2,T114,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLassocsG));
  fun_fab_172 = YPmet(FUNCODEREF(fun_fab_172),CHKREF(lit_140),T113,ENVNUL);
  T118 = BOUNDP(YruntimeYfab);
  if (T118 != YPfalse) {
    T117 = CHKREF(YruntimeYfab);
  } else {
    T117 = YPfalse;
  }
  T116 = fun_fab_172;
  T115 = CALL2(CHKREF(YPdefine_method),T117,T116);
  YruntimeYfab = T115;
  T119 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YruntimeYLassocsG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  fun_len_173 = YPmet(FUNCODEREF(fun_len_173),CHKREF(lit_149),T119,ENVNUL);
  T123 = BOUNDP(YruntimeYlen);
  if (T123 != YPfalse) {
    T122 = CHKREF(YruntimeYlen);
  } else {
    T122 = YPfalse;
  }
  T121 = fun_len_173;
  T120 = CALL2(CHKREF(YPdefine_method),T122,T121);
  YruntimeYlen = T120;
  lit_197 = YPPsym((P)"elt");
  lit_198 = YPPsym((P)"vals");
  T125 = YPsig(YPPlist(2,CHKREF(lit_142),CHKREF(lit_198)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fnd_174 = YPmet(FUNCODEREF(fun_fnd_174),CHKREF(lit_161),T125,ENVNUL);
  T124 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_187)),YPPlist(2,CHKREF(YruntimeYLassocsG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_elt_175 = YPmet(FUNCODEREF(fun_elt_175),CHKREF(lit_197),T124,ENVNUL);
  T129 = BOUNDP(YruntimeYelt);
  if (T129 != YPfalse) {
    T128 = CHKREF(YruntimeYelt);
  } else {
    T128 = YPfalse;
  }
  T127 = fun_elt_175;
  T126 = CALL2(CHKREF(YPdefine_method),T128,T127);
  YruntimeYelt = T126;
  lit_199 = YPPsym((P)"elt-setter");
  T131 = YPsig(YPPlist(2,CHKREF(lit_142),CHKREF(lit_198)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fnd_176 = YPmet(FUNCODEREF(fun_fnd_176),CHKREF(lit_161),T131,ENVNUL);
  T130 = YPsig(YPPlist(3,CHKREF(lit_157),CHKREF(lit_2),CHKREF(lit_187)),YPPlist(3,CHKREF(YLanyG),CHKREF(YruntimeYLassocsG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_elt_setter_177 = YPmet(FUNCODEREF(fun_elt_setter_177),CHKREF(lit_199),T130,ENVNUL);
  T135 = BOUNDP(YruntimeYelt_setter);
  if (T135 != YPfalse) {
    T134 = CHKREF(YruntimeYelt_setter);
  } else {
    T134 = YPfalse;
  }
  T133 = fun_elt_setter_177;
  T132 = CALL2(CHKREF(YPdefine_method),T134,T133);
  YruntimeYelt_setter = T132;
  lit_200 = YPPsym((P)"d");
  T137 = CALL1(CHKREF(YruntimeYtL),CHKREF(YLseqG));
  T136 = YPsig(YPPlist(2,CHKREF(lit_200),CHKREF(lit_141)),YPPlist(2,T137,CHKREF(YLseqG)),YPfalse,YPint((P)2),CHKREF(YLseqG));
  fun_as_178 = YPmet(FUNCODEREF(fun_as_178),CHKREF(lit_37),T136,ENVNUL);
  T141 = BOUNDP(YruntimeYas);
  if (T141 != YPfalse) {
    T140 = CHKREF(YruntimeYas);
  } else {
    T140 = YPfalse;
  }
  T139 = fun_as_178;
  T138 = CALL2(CHKREF(YPdefine_method),T140,T139);
  YruntimeYas = T138;
  T142 = YPsig(YPPlist(1,CHKREF(lit_200)),YPPlist(1,CHKREF(YLseqG)),YPfalse,YPint((P)1),CHKREF(YLseqG));
  fun_keys_179 = YPmet(FUNCODEREF(fun_keys_179),CHKREF(lit_142),T142,ENVNUL);
  T146 = BOUNDP(YruntimeYkeys);
  if (T146 != YPfalse) {
    T145 = CHKREF(YruntimeYkeys);
  } else {
    T145 = YPfalse;
  }
  T144 = fun_keys_179;
  T143 = CALL2(CHKREF(YPdefine_method),T145,T144);
  YruntimeYkeys = T143;
  T148 = YPsig(YPPlist(2,CHKREF(lit_158),CHKREF(lit_155)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_in_180 = YPmet(FUNCODEREF(fun_in_180),CHKREF(lit_154),T148,ENVNUL);
  T147 = YPsig(YPPlist(2,CHKREF(lit_153),CHKREF(lit_152)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLseqG)),YPfalse,YPint((P)2),CHKREF(YLseqG));
  fun_alter_181 = YPmet(FUNCODEREF(fun_alter_181),CHKREF(lit_151),T147,ENVNUL);
  T152 = BOUNDP(YruntimeYalter);
  if (T152 != YPfalse) {
    T151 = CHKREF(YruntimeYalter);
  } else {
    T151 = YPfalse;
  }
  T150 = fun_alter_181;
  T149 = CALL2(CHKREF(YPdefine_method),T151,T150);
  YruntimeYalter = T149;
  lit_201 = YPPsym((P)"range-error");
  lit_202 = YPsb((P)"RANGE ERROR %= %=");
  T153 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_50)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YruntimeYrange_error = YPmet(FUNCODEREF(YruntimeYrange_error),CHKREF(lit_201),T153,ENVNUL);
  T154 = YruntimeYrange_error;
  YruntimeYrange_error = T154;
  lit_203 = YPPsym((P)"range-check");
  T155 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_50)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YruntimeYrange_check = YPmet(FUNCODEREF(YruntimeYrange_check),CHKREF(lit_203),T155,ENVNUL);
  T156 = YruntimeYrange_check;
  YruntimeYrange_check = T156;
  lit_204 = YPPsym((P)"1st");
  T157 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLseqG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_1st_184 = YPmet(FUNCODEREF(fun_1st_184),CHKREF(lit_204),T157,ENVNUL);
  T161 = BOUNDP(YruntimeY1st);
  if (T161 != YPfalse) {
    T160 = CHKREF(YruntimeY1st);
  } else {
    T160 = YPfalse;
  }
  T159 = fun_1st_184;
  T158 = CALL2(CHKREF(YPdefine_method),T160,T159);
  YruntimeY1st = T158;
  lit_205 = YPPsym((P)"2nd");
  T162 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLseqG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_2nd_185 = YPmet(FUNCODEREF(fun_2nd_185),CHKREF(lit_205),T162,ENVNUL);
  T166 = BOUNDP(YruntimeY2nd);
  if (T166 != YPfalse) {
    T165 = CHKREF(YruntimeY2nd);
  } else {
    T165 = YPfalse;
  }
  T164 = fun_2nd_185;
  T163 = CALL2(CHKREF(YPdefine_method),T165,T164);
  YruntimeY2nd = T163;
  lit_206 = YPPsym((P)"3rd");
  T167 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLseqG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_3rd_186 = YPmet(FUNCODEREF(fun_3rd_186),CHKREF(lit_206),T167,ENVNUL);
  T171 = BOUNDP(YruntimeY3rd);
  if (T171 != YPfalse) {
    T170 = CHKREF(YruntimeY3rd);
  } else {
    T170 = YPfalse;
  }
  T169 = fun_3rd_186;
  T168 = CALL2(CHKREF(YPdefine_method),T170,T169);
  YruntimeY3rd = T168;
  lit_207 = YPPsym((P)"last");
  T172 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLseqG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_last_187 = YPmet(FUNCODEREF(fun_last_187),CHKREF(lit_207),T172,ENVNUL);
  T176 = BOUNDP(YruntimeYlast);
  if (T176 != YPfalse) {
    T175 = CHKREF(YruntimeYlast);
  } else {
    T175 = YPfalse;
  }
  T174 = fun_last_187;
  T173 = CALL2(CHKREF(YPdefine_method),T175,T174);
  YruntimeYlast = T173;
  lit_208 = YPPsym((P)"add");
  T178 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_2)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLseqG));
  T177 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_208),T178,Ynil,YPfalse);
  YruntimeYadd = T177;
  lit_209 = YPPsym((P)"add-new");
  T179 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_2)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLseqG));
  fun_add_new_188 = YPmet(FUNCODEREF(fun_add_new_188),CHKREF(lit_209),T179,ENVNUL);
  T183 = BOUNDP(YruntimeYadd_new);
  if (T183 != YPfalse) {
    T182 = CHKREF(YruntimeYadd_new);
  } else {
    T182 = YPfalse;
  }
  T181 = fun_add_new_188;
  T180 = CALL2(CHKREF(YPdefine_method),T182,T181);
  YruntimeYadd_new = T180;
  lit_210 = YPPsym((P)"add!");
  T184 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_2)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLseqG));
  fun_addX_189 = YPmet(FUNCODEREF(fun_addX_189),CHKREF(lit_210),T184,ENVNUL);
  T188 = BOUNDP(YruntimeYaddX);
  if (T188 != YPfalse) {
    T187 = CHKREF(YruntimeYaddX);
  } else {
    T187 = YPfalse;
  }
  T186 = fun_addX_189;
  T185 = CALL2(CHKREF(YPdefine_method),T187,T186);
  YruntimeYaddX = T185;
  lit_211 = YPPsym((P)"pos");
  lit_212 = YPPsym((P)"v");
  T189 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_212)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_pos_190 = YPmet(FUNCODEREF(fun_pos_190),CHKREF(lit_211),T189,ENVNUL);
  T193 = BOUNDP(YruntimeYpos);
  if (T193 != YPfalse) {
    T192 = CHKREF(YruntimeYpos);
  } else {
    T192 = YPfalse;
  }
  T191 = fun_pos_190;
  T190 = CALL2(CHKREF(YPdefine_method),T192,T191);
  YruntimeYpos = T190;
  lit_213 = YPPsym((P)"into");
  lit_214 = YPPsym((P)"below");
  lit_215 = YPPsym((P)"from");
  T195 = YPsig(YPPlist(2,CHKREF(lit_158),CHKREF(lit_155)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_in_191 = YPmet(FUNCODEREF(fun_in_191),CHKREF(lit_154),T195,ENVNUL);
  T194 = YPsig(YPPlist(4,CHKREF(lit_153),CHKREF(lit_152),CHKREF(lit_215),CHKREF(lit_214)),YPPlist(4,CHKREF(YLseqG),CHKREF(YLseqG),CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)4),CHKREF(YLseqG));
  fun_into_192 = YPmet(FUNCODEREF(fun_into_192),CHKREF(lit_213),T194,ENVNUL);
  T199 = BOUNDP(YruntimeYinto);
  if (T199 != YPfalse) {
    T198 = CHKREF(YruntimeYinto);
  } else {
    T198 = YPfalse;
  }
  T197 = fun_into_192;
  T196 = CALL2(CHKREF(YPdefine_method),T198,T197);
  YruntimeYinto = T196;
  lit_216 = YPPsym((P)"sub-setter");
  lit_217 = YPPsym((P)"copy");
  lit_218 = YPPsym((P)"nds");
  lit_219 = YPPsym((P)"insert");
  lit_220 = YPPsym((P)"skip");
  lit_221 = YPPsym((P)"onto");
  lit_222 = YPPsym((P)"find");
  T206 = YPsig(YPPlist(3,CHKREF(lit_218),CHKREF(lit_158),CHKREF(lit_50)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_onto_193 = YPmet(FUNCODEREF(fun_onto_193),CHKREF(lit_221),T206,ENVNUL);
  T205 = YPsig(YPPlist(2,CHKREF(lit_158),CHKREF(lit_50)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_skip_194 = YPmet(FUNCODEREF(fun_skip_194),CHKREF(lit_220),T205,ENVNUL);
  T204 = YPsig(YPPlist(2,CHKREF(lit_218),CHKREF(lit_155)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_insert_195 = YPmet(FUNCODEREF(fun_insert_195),CHKREF(lit_219),T204,ENVNUL);
  T203 = YPsig(YPPlist(3,CHKREF(lit_218),CHKREF(lit_158),CHKREF(lit_50)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_copy_196 = YPmet(FUNCODEREF(fun_copy_196),CHKREF(lit_217),T203,ENVNUL);
  T202 = YPsig(YPPlist(2,CHKREF(lit_158),CHKREF(lit_155)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_in_197 = YPmet(FUNCODEREF(fun_in_197),CHKREF(lit_154),T202,ENVNUL);
  T201 = YPsig(YPPlist(2,CHKREF(lit_158),CHKREF(lit_50)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_find_198 = YPmet(FUNCODEREF(fun_find_198),CHKREF(lit_222),T201,ENVNUL);
  T200 = YPsig(YPPlist(4,CHKREF(lit_152),CHKREF(lit_153),CHKREF(lit_215),CHKREF(lit_214)),YPPlist(4,CHKREF(YLseqG),CHKREF(YLseqG),CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)4),CHKREF(YLseqG));
  fun_sub_setter_199 = YPmet(FUNCODEREF(fun_sub_setter_199),CHKREF(lit_216),T200,ENVNUL);
  T210 = BOUNDP(YruntimeYsub_setter);
  if (T210 != YPfalse) {
    T209 = CHKREF(YruntimeYsub_setter);
  } else {
    T209 = YPfalse;
  }
  T208 = fun_sub_setter_199;
  T207 = CALL2(CHKREF(YPdefine_method),T209,T208);
  YruntimeYsub_setter = T207;
  lit_223 = YPPsym((P)"rev");
  lit_224 = YPPsym((P)"sta");
  lit_225 = YPPsym((P)"seq");
  T212 = YPsig(YPPlist(2,CHKREF(lit_225),CHKREF(lit_224)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_con_200 = YPmet(FUNCODEREF(fun_con_200),CHKREF(lit_143),T212,ENVNUL);
  T211 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLseqG)),YPfalse,YPint((P)1),CHKREF(YLseqG));
  fun_rev_201 = YPmet(FUNCODEREF(fun_rev_201),CHKREF(lit_223),T211,ENVNUL);
  T216 = BOUNDP(YruntimeYrev);
  if (T216 != YPfalse) {
    T215 = CHKREF(YruntimeYrev);
  } else {
    T215 = YPfalse;
  }
  T214 = fun_rev_201;
  T213 = CALL2(CHKREF(YPdefine_method),T215,T214);
  YruntimeYrev = T213;
  lit_226 = YPPsym((P)"cat2");
  lit_227 = YPPsym((P)"con-x");
  lit_228 = YPPsym((P)"con-y");
  T219 = YPsig(YPPlist(2,CHKREF(lit_225),CHKREF(lit_224)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_con_y_202 = YPmet(FUNCODEREF(fun_con_y_202),CHKREF(lit_228),T219,ENVNUL);
  T218 = YPsig(YPPlist(2,CHKREF(lit_225),CHKREF(lit_224)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_con_x_203 = YPmet(FUNCODEREF(fun_con_x_203),CHKREF(lit_227),T218,ENVNUL);
  T217 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLseqG)),YPfalse,YPint((P)2),CHKREF(YLseqG));
  fun_cat2_204 = YPmet(FUNCODEREF(fun_cat2_204),CHKREF(lit_226),T217,ENVNUL);
  T223 = BOUNDP(YruntimeYcat2);
  if (T223 != YPfalse) {
    T222 = CHKREF(YruntimeYcat2);
  } else {
    T222 = YPfalse;
  }
  T221 = fun_cat2_204;
  T220 = CALL2(CHKREF(YPdefine_method),T222,T221);
  YruntimeYcat2 = T220;
  lit_229 = YPPsym((P)"cat");
  T224 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_155)),YPPlist(1,CHKREF(YLseqG)),YPtrue,YPint((P)1),CHKREF(YLseqG));
  fun_cat_205 = YPmet(FUNCODEREF(fun_cat_205),CHKREF(lit_229),T224,ENVNUL);
  T228 = BOUNDP(YmacrosYcat);
  if (T228 != YPfalse) {
    T227 = CHKREF(YmacrosYcat);
  } else {
    T227 = YPfalse;
  }
  T226 = fun_cat_205;
  T225 = CALL2(CHKREF(YPdefine_method),T227,T226);
  YmacrosYcat = T225;
  lit_230 = YPPsym((P)"cat!");
  lit_231 = YPPsym((P)"more");
  T229 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_231)),YPPlist(1,CHKREF(YLseqG)),YPtrue,YPint((P)1),CHKREF(YLseqG));
  fun_catX_206 = YPmet(FUNCODEREF(fun_catX_206),CHKREF(lit_230),T229,ENVNUL);
  T233 = BOUNDP(YruntimeYcatX);
  if (T233 != YPfalse) {
    T232 = CHKREF(YruntimeYcatX);
  } else {
    T232 = YPfalse;
  }
  T231 = fun_catX_206;
  T230 = CALL2(CHKREF(YPdefine_method),T232,T231);
  YruntimeYcatX = T230;
  lit_232 = YPPsym((P)"find-result");
  lit_233 = YPPsym((P)"connect");
  lit_234 = YPPsym((P)"find-tail");
  T237 = YPsig(YPPlist(1,CHKREF(lit_129)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_find_tail_207 = YPmet(FUNCODEREF(fun_find_tail_207),CHKREF(lit_234),T237,ENVNUL);
  T236 = YPsig(YPPlist(2,CHKREF(lit_129),CHKREF(lit_231)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_connect_208 = YPmet(FUNCODEREF(fun_connect_208),CHKREF(lit_233),T236,ENVNUL);
  T235 = YPsig(YPPlist(2,CHKREF(lit_15),CHKREF(lit_231)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_find_result_209 = YPmet(FUNCODEREF(fun_find_result_209),CHKREF(lit_232),T235,ENVNUL);
  T234 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_231)),YPPlist(1,CHKREF(YLlstG)),YPtrue,YPint((P)1),CHKREF(YLlstG));
  fun_catX_210 = YPmet(FUNCODEREF(fun_catX_210),CHKREF(lit_230),T234,ENVNUL);
  T241 = BOUNDP(YruntimeYcatX);
  if (T241 != YPfalse) {
    T240 = CHKREF(YruntimeYcatX);
  } else {
    T240 = YPfalse;
  }
  T239 = fun_catX_210;
  T238 = CALL2(CHKREF(YPdefine_method),T240,T239);
  YruntimeYcatX = T238;
  lit_235 = YPPsym((P)"sub");
  T243 = YPsig(YPPlist(3,CHKREF(lit_225),CHKREF(lit_50),CHKREF(lit_224)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLintG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_con_x_211 = YPmet(FUNCODEREF(fun_con_x_211),CHKREF(lit_227),T243,ENVNUL);
  T242 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_215),CHKREF(lit_214)),YPPlist(3,CHKREF(YLseqG),CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLseqG));
  fun_sub_212 = YPmet(FUNCODEREF(fun_sub_212),CHKREF(lit_235),T242,ENVNUL);
  T247 = BOUNDP(YruntimeYsub);
  if (T247 != YPfalse) {
    T246 = CHKREF(YruntimeYsub);
  } else {
    T246 = YPfalse;
  }
  T245 = fun_sub_212;
  T244 = CALL2(CHKREF(YPdefine_method),T246,T245);
  YruntimeYsub = T244;
  lit_236 = YPPsym((P)"pick");
  T249 = YPsig(YPPlist(2,CHKREF(lit_225),CHKREF(lit_224)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_con_213 = YPmet(FUNCODEREF(fun_con_213),CHKREF(lit_143),T249,ENVNUL);
  T248 = YPsig(YPPlist(2,CHKREF(lit_160),CHKREF(lit_2)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLseqG)),YPfalse,YPint((P)2),CHKREF(YLseqG));
  fun_pick_214 = YPmet(FUNCODEREF(fun_pick_214),CHKREF(lit_236),T248,ENVNUL);
  T253 = BOUNDP(YruntimeYpick);
  if (T253 != YPfalse) {
    T252 = CHKREF(YruntimeYpick);
  } else {
    T252 = YPfalse;
  }
  T251 = fun_pick_214;
  T250 = CALL2(CHKREF(YPdefine_method),T252,T251);
  YruntimeYpick = T250;
  lit_237 = YPPsym((P)"del-dups");
  T255 = YPsig(YPPlist(2,CHKREF(lit_141),CHKREF(lit_14)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T255,ENVNUL);
  T254 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLseqG)),YPfalse,YPint((P)1),CHKREF(YLseqG));
  fun_del_dups_216 = YPmet(FUNCODEREF(fun_del_dups_216),CHKREF(lit_237),T254,ENVNUL);
  T259 = BOUNDP(YruntimeYdel_dups);
  if (T259 != YPfalse) {
    T258 = CHKREF(YruntimeYdel_dups);
  } else {
    T258 = YPfalse;
  }
  T257 = fun_del_dups_216;
  T256 = CALL2(CHKREF(YPdefine_method),T258,T257);
  YruntimeYdel_dups = T256;
  lit_238 = YPPsym((P)"del");
  T261 = YPsig(YPPlist(1,CHKREF(lit_14)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_217 = YPmet(FUNCODEREF(fun_217),YPfalse,T261,ENVNUL);
  T260 = YPsig(YPPlist(2,CHKREF(lit_141),CHKREF(lit_2)),YPPlist(2,CHKREF(YLseqG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLseqG));
  fun_del_218 = YPmet(FUNCODEREF(fun_del_218),CHKREF(lit_238),T260,ENVNUL);
  T265 = BOUNDP(YruntimeYdel);
  if (T265 != YPfalse) {
    T264 = CHKREF(YruntimeYdel);
  } else {
    T264 = YPfalse;
  }
  T263 = fun_del_218;
  T262 = CALL2(CHKREF(YPdefine_method),T264,T263);
  YruntimeYdel = T262;
  lit_239 = YPPsym((P)"vals-to-str");
  lit_240 = YPsb((P)" ");
  T267 = YPsig(YPPlist(2,CHKREF(lit_141),CHKREF(lit_14)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T267,ENVNUL);
  T266 = YPsig(YPPlist(1,CHKREF(lit_141)),YPPlist(1,CHKREF(YLseqG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_vals_to_str_220 = YPmet(FUNCODEREF(fun_vals_to_str_220),CHKREF(lit_239),T266,ENVNUL);
  T271 = BOUNDP(YruntimeYvals_to_str);
  if (T271 != YPfalse) {
    T270 = CHKREF(YruntimeYvals_to_str);
  } else {
    T270 = YPfalse;
  }
  T269 = fun_vals_to_str_220;
  T268 = CALL2(CHKREF(YPdefine_method),T270,T269);
  YruntimeYvals_to_str = T268;
  YruntimeYLlistG = CHKREF(YLlstG);
  lit_241 = YPsb((P)")");
  lit_242 = YPsb((P)"(");
  T272 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_to_str_221 = YPmet(FUNCODEREF(fun_to_str_221),CHKREF(lit_30),T272,ENVNUL);
  T276 = BOUNDP(YruntimeYto_str);
  if (T276 != YPfalse) {
    T275 = CHKREF(YruntimeYto_str);
  } else {
    T275 = YPfalse;
  }
  T274 = fun_to_str_221;
  T273 = CALL2(CHKREF(YPdefine_method),T275,T274);
  YruntimeYto_str = T273;
  lit_243 = YPPsym((P)"pair");
  lit_244 = YPPsym((P)"t");
  lit_245 = YPPsym((P)"h");
  T277 = YPsig(YPPlist(2,CHKREF(lit_245),CHKREF(lit_244)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_pair_222 = YPmet(FUNCODEREF(fun_pair_222),CHKREF(lit_243),T277,ENVNUL);
  T281 = BOUNDP(YmacrosYpair);
  if (T281 != YPfalse) {
    T280 = CHKREF(YmacrosYpair);
  } else {
    T280 = YPfalse;
  }
  T279 = fun_pair_222;
  T278 = CALL2(CHKREF(YPdefine_method),T280,T279);
  YmacrosYpair = T278;
  T283 = CALL1(CHKREF(YruntimeYtE),CHKREF(YLlstG));
  T282 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,T283),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_empty_223 = YPmet(FUNCODEREF(fun_empty_223),CHKREF(lit_133),T282,ENVNUL);
  T287 = BOUNDP(YruntimeYempty);
  if (T287 != YPfalse) {
    T286 = CHKREF(YruntimeYempty);
  } else {
    T286 = YPfalse;
  }
  T285 = fun_empty_223;
  T284 = CALL2(CHKREF(YPdefine_method),T286,T285);
  YruntimeYempty = T284;
  T288 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_emptyQ_224 = YPmet(FUNCODEREF(fun_emptyQ_224),CHKREF(lit_132),T288,ENVNUL);
  T292 = BOUNDP(YmacrosYemptyQ);
  if (T292 != YPfalse) {
    T291 = CHKREF(YmacrosYemptyQ);
  } else {
    T291 = YPfalse;
  }
  T290 = fun_emptyQ_224;
  T289 = CALL2(CHKREF(YPdefine_method),T291,T290);
  YmacrosYemptyQ = T289;
  T295 = YPsig(YPPlist(2,CHKREF(lit_50),CHKREF(lit_144)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fab_225 = YPmet(FUNCODEREF(fun_fab_225),CHKREF(lit_140),T295,ENVNUL);
  T294 = CALL1(CHKREF(YruntimeYtE),CHKREF(YLlstG));
  T293 = YPsig(YPPlist(2,CHKREF(lit_244),CHKREF(lit_141)),YPPlist(2,T294,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_fab_226 = YPmet(FUNCODEREF(fun_fab_226),CHKREF(lit_140),T293,ENVNUL);
  T299 = BOUNDP(YruntimeYfab);
  if (T299 != YPfalse) {
    T298 = CHKREF(YruntimeYfab);
  } else {
    T298 = YPfalse;
  }
  T297 = fun_fab_226;
  T296 = CALL2(CHKREF(YPdefine_method),T298,T297);
  YruntimeYfab = T296;
  T301 = CALL1(CHKREF(YruntimeYtE),CHKREF(YLlstG));
  T300 = YPsig(YPPlist(2,CHKREF(lit_129),CHKREF(lit_2)),YPPlist(2,T301,CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_as_227 = YPmet(FUNCODEREF(fun_as_227),CHKREF(lit_37),T300,ENVNUL);
  T305 = BOUNDP(YruntimeYas);
  if (T305 != YPfalse) {
    T304 = CHKREF(YruntimeYas);
  } else {
    T304 = YPfalse;
  }
  T303 = fun_as_227;
  T302 = CALL2(CHKREF(YPdefine_method),T304,T303);
  YruntimeYas = T302;
  lit_246 = YPPsym((P)"build");
  lit_247 = YPPsym((P)"result");
  lit_248 = YPPsym((P)"index");
  T308 = YPsig(YPPlist(2,CHKREF(lit_248),CHKREF(lit_247)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_build_228 = YPmet(FUNCODEREF(fun_build_228),CHKREF(lit_246),T308,ENVNUL);
  T307 = CALL1(CHKREF(YruntimeYtL),CHKREF(YLlstG));
  T306 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_131)),YPPlist(1,T307),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_fabs_229 = YPmet(FUNCODEREF(fun_fabs_229),CHKREF(lit_130),T306,ENVNUL);
  T312 = BOUNDP(YruntimeYfabs);
  if (T312 != YPfalse) {
    T311 = CHKREF(YruntimeYfabs);
  } else {
    T311 = YPfalse;
  }
  T310 = fun_fabs_229;
  T309 = CALL2(CHKREF(YPdefine_method),T311,T310);
  YruntimeYfabs = T309;
  lit_249 = YPPsym((P)"lst");
  T313 = YPsig(YPPlist(1,CHKREF(lit_131)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG));
  fun_lst_230 = YPmet(FUNCODEREF(fun_lst_230),CHKREF(lit_249),T313,ENVNUL);
  T317 = BOUNDP(Ylst);
  if (T317 != YPfalse) {
    T316 = CHKREF(Ylst);
  } else {
    T316 = YPfalse;
  }
  T315 = fun_lst_230;
  T314 = CALL2(CHKREF(YPdefine_method),T316,T315);
  Ylst = T314;
  YruntimeYlist = CHKREF(Ylst);
  YruntimeYPlist = CHKREF(YruntimeYlist);
  T319 = YruntimeYPcat = CHKREF(YmacrosYcat);
  T318 = T319;
  return T318;
}

P YruntimeY___main_3___() {
  P T306,T305,T304,T303,T302,T301,T300,T299,T298,T297,T296,T295,T294,T293,T292,T291;
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
  lit_250 = YPPsym((P)"sum");
  T1 = YPsig(YPPlist(2,CHKREF(lit_150),CHKREF(lit_2)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_sum_231 = YPmet(FUNCODEREF(fun_sum_231),CHKREF(lit_250),T1,ENVNUL);
  T0 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  fun_len_232 = YPmet(FUNCODEREF(fun_len_232),CHKREF(lit_149),T0,ENVNUL);
  T5 = BOUNDP(YruntimeYlen);
  if (T5 != YPfalse) {
    T4 = CHKREF(YruntimeYlen);
  } else {
    T4 = YPfalse;
  }
  T3 = fun_len_232;
  T2 = CALL2(CHKREF(YPdefine_method),T4,T3);
  YruntimeYlen = T2;
  T7 = YPsig(YPPlist(2,CHKREF(lit_150),CHKREF(lit_2)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fnd_233 = YPmet(FUNCODEREF(fun_fnd_233),CHKREF(lit_161),T7,ENVNUL);
  T6 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_187)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_elt_234 = YPmet(FUNCODEREF(fun_elt_234),CHKREF(lit_197),T6,ENVNUL);
  T11 = BOUNDP(YruntimeYelt);
  if (T11 != YPfalse) {
    T10 = CHKREF(YruntimeYelt);
  } else {
    T10 = YPfalse;
  }
  T9 = fun_elt_234;
  T8 = CALL2(CHKREF(YPdefine_method),T10,T9);
  YruntimeYelt = T8;
  T13 = YPsig(YPPlist(2,CHKREF(lit_150),CHKREF(lit_2)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fnd_235 = YPmet(FUNCODEREF(fun_fnd_235),CHKREF(lit_161),T13,ENVNUL);
  T12 = YPsig(YPPlist(3,CHKREF(lit_180),CHKREF(lit_2),CHKREF(lit_187)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_elt_setter_236 = YPmet(FUNCODEREF(fun_elt_setter_236),CHKREF(lit_199),T12,ENVNUL);
  T17 = BOUNDP(YruntimeYelt_setter);
  if (T17 != YPfalse) {
    T16 = CHKREF(YruntimeYelt_setter);
  } else {
    T16 = YPfalse;
  }
  T15 = fun_elt_setter_236;
  T14 = CALL2(CHKREF(YPdefine_method),T16,T15);
  YruntimeYelt_setter = T14;
  T18 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_2)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_add_237 = YPmet(FUNCODEREF(fun_add_237),CHKREF(lit_208),T18,ENVNUL);
  T22 = BOUNDP(YruntimeYadd);
  if (T22 != YPfalse) {
    T21 = CHKREF(YruntimeYadd);
  } else {
    T21 = YPfalse;
  }
  T20 = fun_add_237;
  T19 = CALL2(CHKREF(YPdefine_method),T21,T20);
  YruntimeYadd = T19;
  lit_251 = YPPsym((P)"push");
  T23 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_2)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_push_238 = YPmet(FUNCODEREF(fun_push_238),CHKREF(lit_251),T23,ENVNUL);
  T27 = BOUNDP(YruntimeYpush);
  if (T27 != YPfalse) {
    T26 = CHKREF(YruntimeYpush);
  } else {
    T26 = YPfalse;
  }
  T25 = fun_push_238;
  T24 = CALL2(CHKREF(YPdefine_method),T26,T25);
  YruntimeYpush = T24;
  lit_252 = YPPsym((P)"pop");
  T28 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLtupG));
  fun_pop_239 = YPmet(FUNCODEREF(fun_pop_239),CHKREF(lit_252),T28,ENVNUL);
  T32 = BOUNDP(YruntimeYpop);
  if (T32 != YPfalse) {
    T31 = CHKREF(YruntimeYpop);
  } else {
    T31 = YPfalse;
  }
  T30 = fun_pop_239;
  T29 = CALL2(CHKREF(YPdefine_method),T31,T30);
  YruntimeYpop = T29;
  lit_253 = YPPsym((P)"rev!");
  lit_254 = YPPsym((P)"l");
  T34 = YPsig(YPPlist(2,CHKREF(lit_254),CHKREF(lit_15)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_240 = YPmet(FUNCODEREF(fun_loop_240),CHKREF(lit_88),T34,ENVNUL);
  T33 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_revX_241 = YPmet(FUNCODEREF(fun_revX_241),CHKREF(lit_253),T33,ENVNUL);
  T38 = BOUNDP(YruntimeYrevX);
  if (T38 != YPfalse) {
    T37 = CHKREF(YruntimeYrevX);
  } else {
    T37 = YPfalse;
  }
  T36 = fun_revX_241;
  T35 = CALL2(CHKREF(YPdefine_method),T37,T36);
  YruntimeYrevX = T35;
  lit_255 = YPPsym((P)"assq");
  T39 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_254)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_assq_242 = YPmet(FUNCODEREF(fun_assq_242),CHKREF(lit_255),T39,ENVNUL);
  T43 = BOUNDP(YruntimeYassq);
  if (T43 != YPfalse) {
    T42 = CHKREF(YruntimeYassq);
  } else {
    T42 = YPfalse;
  }
  T41 = fun_assq_242;
  T40 = CALL2(CHKREF(YPdefine_method),T42,T41);
  YruntimeYassq = T40;
  lit_256 = YPPsym((P)"assqn");
  T44 = YPsig(YPPlist(3,CHKREF(lit_2),CHKREF(lit_254),CHKREF(lit_211)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_assqn_243 = YPmet(FUNCODEREF(fun_assqn_243),CHKREF(lit_256),T44,ENVNUL);
  T48 = BOUNDP(YruntimeYassqn);
  if (T48 != YPfalse) {
    T47 = CHKREF(YruntimeYassqn);
  } else {
    T47 = YPfalse;
  }
  T46 = fun_assqn_243;
  T45 = CALL2(CHKREF(YPdefine_method),T47,T46);
  YruntimeYassqn = T45;
  lit_257 = YPPsym((P)"px");
  T50 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_257)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fnd_244 = YPmet(FUNCODEREF(fun_fnd_244),CHKREF(lit_161),T50,ENVNUL);
  T49 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_last_245 = YPmet(FUNCODEREF(fun_last_245),CHKREF(lit_207),T49,ENVNUL);
  T54 = BOUNDP(YruntimeYlast);
  if (T54 != YPfalse) {
    T53 = CHKREF(YruntimeYlast);
  } else {
    T53 = YPfalse;
  }
  T52 = fun_last_245;
  T51 = CALL2(CHKREF(YPdefine_method),T53,T52);
  YruntimeYlast = T51;
  lit_258 = YPPsym((P)"ini-state");
  T55 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_ini_state_246 = YPmet(FUNCODEREF(fun_ini_state_246),CHKREF(lit_258),T55,ENVNUL);
  T59 = BOUNDP(YruntimeYini_state);
  if (T59 != YPfalse) {
    T58 = CHKREF(YruntimeYini_state);
  } else {
    T58 = YPfalse;
  }
  T57 = fun_ini_state_246;
  T56 = CALL2(CHKREF(YPdefine_method),T58,T57);
  YruntimeYini_state = T56;
  lit_259 = YPPsym((P)"fin-state?");
  T60 = YPsig(YPPlist(2,CHKREF(lit_51),CHKREF(lit_162)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_fin_stateQ_247 = YPmet(FUNCODEREF(fun_fin_stateQ_247),CHKREF(lit_259),T60,ENVNUL);
  T64 = BOUNDP(YruntimeYfin_stateQ);
  if (T64 != YPfalse) {
    T63 = CHKREF(YruntimeYfin_stateQ);
  } else {
    T63 = YPfalse;
  }
  T62 = fun_fin_stateQ_247;
  T61 = CALL2(CHKREF(YPdefine_method),T63,T62);
  YruntimeYfin_stateQ = T61;
  lit_260 = YPPsym((P)"nxt-state");
  T65 = YPsig(YPPlist(2,CHKREF(lit_51),CHKREF(lit_162)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_nxt_state_248 = YPmet(FUNCODEREF(fun_nxt_state_248),CHKREF(lit_260),T65,ENVNUL);
  T69 = BOUNDP(YruntimeYnxt_state);
  if (T69 != YPfalse) {
    T68 = CHKREF(YruntimeYnxt_state);
  } else {
    T68 = YPfalse;
  }
  T67 = fun_nxt_state_248;
  T66 = CALL2(CHKREF(YPdefine_method),T68,T67);
  YruntimeYnxt_state = T66;
  lit_261 = YPPsym((P)"now-elt");
  T70 = YPsig(YPPlist(2,CHKREF(lit_51),CHKREF(lit_162)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_now_elt_249 = YPmet(FUNCODEREF(fun_now_elt_249),CHKREF(lit_261),T70,ENVNUL);
  T74 = BOUNDP(YruntimeYnow_elt);
  if (T74 != YPfalse) {
    T73 = CHKREF(YruntimeYnow_elt);
  } else {
    T73 = YPfalse;
  }
  T72 = fun_now_elt_249;
  T71 = CALL2(CHKREF(YPdefine_method),T73,T72);
  YruntimeYnow_elt = T71;
  lit_262 = YPPsym((P)"now-elt-setter");
  T75 = YPsig(YPPlist(3,CHKREF(lit_180),CHKREF(lit_51),CHKREF(lit_162)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_now_elt_setter_250 = YPmet(FUNCODEREF(fun_now_elt_setter_250),CHKREF(lit_262),T75,ENVNUL);
  T79 = BOUNDP(YruntimeYnow_elt_setter);
  if (T79 != YPfalse) {
    T78 = CHKREF(YruntimeYnow_elt_setter);
  } else {
    T78 = YPfalse;
  }
  T77 = fun_now_elt_setter_250;
  T76 = CALL2(CHKREF(YPdefine_method),T78,T77);
  YruntimeYnow_elt_setter = T76;
  lit_263 = YPPsym((P)"now-key");
  T81 = YPsig(YPPlist(2,CHKREF(lit_187),CHKREF(lit_52)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fnd_251 = YPmet(FUNCODEREF(fun_fnd_251),CHKREF(lit_161),T81,ENVNUL);
  T80 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_162)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun_now_key_252 = YPmet(FUNCODEREF(fun_now_key_252),CHKREF(lit_263),T80,ENVNUL);
  T85 = BOUNDP(YruntimeYnow_key);
  if (T85 != YPfalse) {
    T84 = CHKREF(YruntimeYnow_key);
  } else {
    T84 = YPfalse;
  }
  T83 = fun_now_key_252;
  T82 = CALL2(CHKREF(YPdefine_method),T84,T83);
  YruntimeYnow_key = T82;
  lit_264 = YPPsym((P)"copy-state");
  T86 = YPsig(YPPlist(2,CHKREF(lit_51),CHKREF(lit_162)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  fun_copy_state_253 = YPmet(FUNCODEREF(fun_copy_state_253),CHKREF(lit_264),T86,ENVNUL);
  T90 = BOUNDP(YruntimeYcopy_state);
  if (T90 != YPfalse) {
    T89 = CHKREF(YruntimeYcopy_state);
  } else {
    T89 = YPfalse;
  }
  T88 = fun_copy_state_253;
  T87 = CALL2(CHKREF(YPdefine_method),T89,T88);
  YruntimeYcopy_state = T87;
  YmacrosYtup = CHKREF(Ylst);
  T91 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YLflatG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  fun_ini_state_254 = YPmet(FUNCODEREF(fun_ini_state_254),CHKREF(lit_258),T91,ENVNUL);
  T95 = BOUNDP(YruntimeYini_state);
  if (T95 != YPfalse) {
    T94 = CHKREF(YruntimeYini_state);
  } else {
    T94 = YPfalse;
  }
  T93 = fun_ini_state_254;
  T92 = CALL2(CHKREF(YPdefine_method),T94,T93);
  YruntimeYini_state = T92;
  T96 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_162)),YPPlist(2,CHKREF(YLflatG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_fin_stateQ_255 = YPmet(FUNCODEREF(fun_fin_stateQ_255),CHKREF(lit_259),T96,ENVNUL);
  T100 = BOUNDP(YruntimeYfin_stateQ);
  if (T100 != YPfalse) {
    T99 = CHKREF(YruntimeYfin_stateQ);
  } else {
    T99 = YPfalse;
  }
  T98 = fun_fin_stateQ_255;
  T97 = CALL2(CHKREF(YPdefine_method),T99,T98);
  YruntimeYfin_stateQ = T97;
  T101 = YPsig(YPPlist(2,CHKREF(lit_51),CHKREF(lit_162)),YPPlist(2,CHKREF(YLflatG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun_nxt_state_256 = YPmet(FUNCODEREF(fun_nxt_state_256),CHKREF(lit_260),T101,ENVNUL);
  T105 = BOUNDP(YruntimeYnxt_state);
  if (T105 != YPfalse) {
    T104 = CHKREF(YruntimeYnxt_state);
  } else {
    T104 = YPfalse;
  }
  T103 = fun_nxt_state_256;
  T102 = CALL2(CHKREF(YPdefine_method),T104,T103);
  YruntimeYnxt_state = T102;
  T106 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_162)),YPPlist(2,CHKREF(YLflatG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_now_elt_257 = YPmet(FUNCODEREF(fun_now_elt_257),CHKREF(lit_261),T106,ENVNUL);
  T110 = BOUNDP(YruntimeYnow_elt);
  if (T110 != YPfalse) {
    T109 = CHKREF(YruntimeYnow_elt);
  } else {
    T109 = YPfalse;
  }
  T108 = fun_now_elt_257;
  T107 = CALL2(CHKREF(YPdefine_method),T109,T108);
  YruntimeYnow_elt = T107;
  T111 = YPsig(YPPlist(3,CHKREF(lit_180),CHKREF(lit_52),CHKREF(lit_162)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLflatG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_now_elt_setter_258 = YPmet(FUNCODEREF(fun_now_elt_setter_258),CHKREF(lit_262),T111,ENVNUL);
  T115 = BOUNDP(YruntimeYnow_elt_setter);
  if (T115 != YPfalse) {
    T114 = CHKREF(YruntimeYnow_elt_setter);
  } else {
    T114 = YPfalse;
  }
  T113 = fun_now_elt_setter_258;
  T112 = CALL2(CHKREF(YPdefine_method),T114,T113);
  YruntimeYnow_elt_setter = T112;
  T116 = YPsig(YPPlist(2,CHKREF(lit_51),CHKREF(lit_162)),YPPlist(2,CHKREF(YLflatG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun_now_key_259 = YPmet(FUNCODEREF(fun_now_key_259),CHKREF(lit_263),T116,ENVNUL);
  T120 = BOUNDP(YruntimeYnow_key);
  if (T120 != YPfalse) {
    T119 = CHKREF(YruntimeYnow_key);
  } else {
    T119 = YPfalse;
  }
  T118 = fun_now_key_259;
  T117 = CALL2(CHKREF(YPdefine_method),T119,T118);
  YruntimeYnow_key = T117;
  T121 = YPsig(YPPlist(2,CHKREF(lit_51),CHKREF(lit_162)),YPPlist(2,CHKREF(YLflatG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  fun_copy_state_260 = YPmet(FUNCODEREF(fun_copy_state_260),CHKREF(lit_264),T121,ENVNUL);
  T125 = BOUNDP(YruntimeYcopy_state);
  if (T125 != YPfalse) {
    T124 = CHKREF(YruntimeYcopy_state);
  } else {
    T124 = YPfalse;
  }
  T123 = fun_copy_state_260;
  T122 = CALL2(CHKREF(YPdefine_method),T124,T123);
  YruntimeYcopy_state = T122;
  T127 = CALL1(CHKREF(YruntimeYtE),CHKREF(YLvecG));
  T126 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,T127),YPfalse,YPint((P)1),CHKREF(YLvecG));
  fun_empty_261 = YPmet(FUNCODEREF(fun_empty_261),CHKREF(lit_133),T126,ENVNUL);
  T131 = BOUNDP(YruntimeYempty);
  if (T131 != YPfalse) {
    T130 = CHKREF(YruntimeYempty);
  } else {
    T130 = YPfalse;
  }
  T129 = fun_empty_261;
  T128 = CALL2(CHKREF(YPdefine_method),T130,T129);
  YruntimeYempty = T128;
  lit_265 = YPPsym((P)"vec");
  T132 = YPsig(YPPlist(1,CHKREF(lit_131)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG));
  YruntimeYvec = YPmet(FUNCODEREF(YruntimeYvec),CHKREF(lit_265),T132,ENVNUL);
  T133 = YruntimeYvec;
  YruntimeYvec = T133;
  T135 = CALL1(CHKREF(YruntimeYtE),CHKREF(YLvecG));
  T134 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_141)),YPPlist(2,T135,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLvecG));
  fun_fab_263 = YPmet(FUNCODEREF(fun_fab_263),CHKREF(lit_140),T134,ENVNUL);
  T139 = BOUNDP(YruntimeYfab);
  if (T139 != YPfalse) {
    T138 = CHKREF(YruntimeYfab);
  } else {
    T138 = YPfalse;
  }
  T137 = fun_fab_263;
  T136 = CALL2(CHKREF(YPdefine_method),T138,T137);
  YruntimeYfab = T136;
  T140 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLvecG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  fun_len_264 = YPmet(FUNCODEREF(fun_len_264),CHKREF(lit_149),T140,ENVNUL);
  T144 = BOUNDP(YruntimeYlen);
  if (T144 != YPfalse) {
    T143 = CHKREF(YruntimeYlen);
  } else {
    T143 = YPfalse;
  }
  T142 = fun_len_264;
  T141 = CALL2(CHKREF(YPdefine_method),T143,T142);
  YruntimeYlen = T141;
  lit_266 = YPPsym((P)"low-elt");
  T145 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_50)),YPPlist(2,CHKREF(YLvecG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_low_elt_265 = YPmet(FUNCODEREF(fun_low_elt_265),CHKREF(lit_266),T145,ENVNUL);
  T149 = BOUNDP(YruntimeYlow_elt);
  if (T149 != YPfalse) {
    T148 = CHKREF(YruntimeYlow_elt);
  } else {
    T148 = YPfalse;
  }
  T147 = fun_low_elt_265;
  T146 = CALL2(CHKREF(YPdefine_method),T148,T147);
  YruntimeYlow_elt = T146;
  lit_267 = YPPsym((P)"low-elt-setter");
  T150 = YPsig(YPPlist(3,CHKREF(lit_180),CHKREF(lit_2),CHKREF(lit_50)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLvecG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_low_elt_setter_266 = YPmet(FUNCODEREF(fun_low_elt_setter_266),CHKREF(lit_267),T150,ENVNUL);
  T154 = BOUNDP(YruntimeYlow_elt_setter);
  if (T154 != YPfalse) {
    T153 = CHKREF(YruntimeYlow_elt_setter);
  } else {
    T153 = YPfalse;
  }
  T152 = fun_low_elt_setter_266;
  T151 = CALL2(CHKREF(YPdefine_method),T153,T152);
  YruntimeYlow_elt_setter = T151;
  T155 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_50)),YPPlist(2,CHKREF(YLvecG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_elt_267 = YPmet(FUNCODEREF(fun_elt_267),CHKREF(lit_197),T155,ENVNUL);
  T159 = BOUNDP(YruntimeYelt);
  if (T159 != YPfalse) {
    T158 = CHKREF(YruntimeYelt);
  } else {
    T158 = YPfalse;
  }
  T157 = fun_elt_267;
  T156 = CALL2(CHKREF(YPdefine_method),T158,T157);
  YruntimeYelt = T156;
  T160 = YPsig(YPPlist(3,CHKREF(lit_180),CHKREF(lit_2),CHKREF(lit_50)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLvecG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_elt_setter_268 = YPmet(FUNCODEREF(fun_elt_setter_268),CHKREF(lit_199),T160,ENVNUL);
  T164 = BOUNDP(YruntimeYelt_setter);
  if (T164 != YPfalse) {
    T163 = CHKREF(YruntimeYelt_setter);
  } else {
    T163 = YPfalse;
  }
  T162 = fun_elt_setter_268;
  T161 = CALL2(CHKREF(YPdefine_method),T163,T162);
  YruntimeYelt_setter = T161;
  lit_268 = YPsb((P)")");
  lit_269 = YPsb((P)"#(");
  T165 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLvecG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_to_str_269 = YPmet(FUNCODEREF(fun_to_str_269),CHKREF(lit_30),T165,ENVNUL);
  T169 = BOUNDP(YruntimeYto_str);
  if (T169 != YPfalse) {
    T168 = CHKREF(YruntimeYto_str);
  } else {
    T168 = YPfalse;
  }
  T167 = fun_to_str_269;
  T166 = CALL2(CHKREF(YPdefine_method),T168,T167);
  YruntimeYto_str = T166;
  lit_270 = YPPsym((P)"<buf>");
  T171 = (P)YPpair(CHKREF(YLflatG),Ynil);
  T170 = CALL2(CHKREF(Yfab_class),CHKREF(lit_270),T171);
  YruntimeYLbufG = T170;
  lit_271 = YPPsym((P)"buf-len");
  T172 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLbufG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_buf_len_270 = YPmet(FUNCODEREF(fun_buf_len_270),CHKREF(lit_271),T172,ENVNUL);
  T176 = BOUNDP(YruntimeYbuf_len);
  if (T176 != YPfalse) {
    T175 = CHKREF(YruntimeYbuf_len);
  } else {
    T175 = YPfalse;
  }
  T174 = fun_buf_len_270;
  T173 = CALL2(CHKREF(YPdefine_method),T175,T174);
  YruntimeYbuf_len = T173;
  lit_272 = YPPsym((P)"buf-len-setter");
  T177 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLbufG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_buf_len_setter_271 = YPmet(FUNCODEREF(fun_buf_len_setter_271),CHKREF(lit_272),T177,ENVNUL);
  T181 = BOUNDP(YruntimeYbuf_len_setter);
  if (T181 != YPfalse) {
    T180 = CHKREF(YruntimeYbuf_len_setter);
  } else {
    T180 = YPfalse;
  }
  T179 = fun_buf_len_setter_271;
  T178 = CALL2(CHKREF(YPdefine_method),T180,T179);
  YruntimeYbuf_len_setter = T178;
  T182 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_272 = YPmet(FUNCODEREF(fun_272),YPfalse,T182,ENVNUL);
  T183 = fun_272;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLbufG),CHKREF(YruntimeYbuf_len),CHKREF(YruntimeYbuf_len_setter),CHKREF(YLintG),T183);
  lit_273 = YPPsym((P)"buf-dat");
  T184 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLbufG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_buf_dat_273 = YPmet(FUNCODEREF(fun_buf_dat_273),CHKREF(lit_273),T184,ENVNUL);
  T188 = BOUNDP(YruntimeYbuf_dat);
  if (T188 != YPfalse) {
    T187 = CHKREF(YruntimeYbuf_dat);
  } else {
    T187 = YPfalse;
  }
  T186 = fun_buf_dat_273;
  T185 = CALL2(CHKREF(YPdefine_method),T187,T186);
  YruntimeYbuf_dat = T185;
  lit_274 = YPPsym((P)"buf-dat-setter");
  T189 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLvecG),CHKREF(YruntimeYLbufG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_buf_dat_setter_274 = YPmet(FUNCODEREF(fun_buf_dat_setter_274),CHKREF(lit_274),T189,ENVNUL);
  T193 = BOUNDP(YruntimeYbuf_dat_setter);
  if (T193 != YPfalse) {
    T192 = CHKREF(YruntimeYbuf_dat_setter);
  } else {
    T192 = YPfalse;
  }
  T191 = fun_buf_dat_setter_274;
  T190 = CALL2(CHKREF(YPdefine_method),T192,T191);
  YruntimeYbuf_dat_setter = T190;
  lit_275 = CALLN(YruntimeYvec, 0);
  T194 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_275 = YPmet(FUNCODEREF(fun_275),YPfalse,T194,ENVNUL);
  T195 = fun_275;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLbufG),CHKREF(YruntimeYbuf_dat),CHKREF(YruntimeYbuf_dat_setter),CHKREF(YLvecG),T195);
  T197 = CALL1(CHKREF(YruntimeYtE),CHKREF(YruntimeYLbufG));
  T196 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,T197),YPfalse,YPint((P)1),CHKREF(YruntimeYLbufG));
  fun_empty_276 = YPmet(FUNCODEREF(fun_empty_276),CHKREF(lit_133),T196,ENVNUL);
  T201 = BOUNDP(YruntimeYempty);
  if (T201 != YPfalse) {
    T200 = CHKREF(YruntimeYempty);
  } else {
    T200 = YPfalse;
  }
  T199 = fun_empty_276;
  T198 = CALL2(CHKREF(YPdefine_method),T200,T199);
  YruntimeYempty = T198;
  T203 = CALL1(CHKREF(YruntimeYtE),CHKREF(YruntimeYLbufG));
  T202 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_141)),YPPlist(2,T203,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLbufG));
  fun_fab_277 = YPmet(FUNCODEREF(fun_fab_277),CHKREF(lit_140),T202,ENVNUL);
  T207 = BOUNDP(YruntimeYfab);
  if (T207 != YPfalse) {
    T206 = CHKREF(YruntimeYfab);
  } else {
    T206 = YPfalse;
  }
  T205 = fun_fab_277;
  T204 = CALL2(CHKREF(YPdefine_method),T206,T205);
  YruntimeYfab = T204;
  lit_276 = YPPsym((P)"buf");
  lit_277 = YPPsym((P)"elts");
  T208 = YPsig(YPPlist(1,CHKREF(lit_277)),Ynil,YPtrue,YPint((P)0),CHKREF(YruntimeYLbufG));
  fun_buf_278 = YPmet(FUNCODEREF(fun_buf_278),CHKREF(lit_276),T208,ENVNUL);
  T212 = BOUNDP(YruntimeYbuf);
  if (T212 != YPfalse) {
    T211 = CHKREF(YruntimeYbuf);
  } else {
    T211 = YPfalse;
  }
  T210 = fun_buf_278;
  T209 = CALL2(CHKREF(YPdefine_method),T211,T210);
  YruntimeYbuf = T209;
  T213 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YruntimeYLbufG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  fun_len_279 = YPmet(FUNCODEREF(fun_len_279),CHKREF(lit_149),T213,ENVNUL);
  T217 = BOUNDP(YruntimeYlen);
  if (T217 != YPfalse) {
    T216 = CHKREF(YruntimeYlen);
  } else {
    T216 = YPfalse;
  }
  T215 = fun_len_279;
  T214 = CALL2(CHKREF(YPdefine_method),T216,T215);
  YruntimeYlen = T214;
  lit_278 = YPPsym((P)"len-setter");
  lit_279 = YPPsym((P)"new-len");
  T219 = YPsig(YPPlist(1,CHKREF(lit_50)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_fill_280 = YPmet(FUNCODEREF(fun_fill_280),CHKREF(lit_156),T219,ENVNUL);
  T218 = YPsig(YPPlist(2,CHKREF(lit_279),CHKREF(lit_52)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLbufG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_len_setter_281 = YPmet(FUNCODEREF(fun_len_setter_281),CHKREF(lit_278),T218,ENVNUL);
  T223 = BOUNDP(YruntimeYlen_setter);
  if (T223 != YPfalse) {
    T222 = CHKREF(YruntimeYlen_setter);
  } else {
    T222 = YPfalse;
  }
  T221 = fun_len_setter_281;
  T220 = CALL2(CHKREF(YPdefine_method),T222,T221);
  YruntimeYlen_setter = T220;
  T224 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_50)),YPPlist(2,CHKREF(YruntimeYLbufG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_low_elt_282 = YPmet(FUNCODEREF(fun_low_elt_282),CHKREF(lit_266),T224,ENVNUL);
  T228 = BOUNDP(YruntimeYlow_elt);
  if (T228 != YPfalse) {
    T227 = CHKREF(YruntimeYlow_elt);
  } else {
    T227 = YPfalse;
  }
  T226 = fun_low_elt_282;
  T225 = CALL2(CHKREF(YPdefine_method),T227,T226);
  YruntimeYlow_elt = T225;
  T229 = YPsig(YPPlist(3,CHKREF(lit_180),CHKREF(lit_2),CHKREF(lit_50)),YPPlist(3,CHKREF(YLanyG),CHKREF(YruntimeYLbufG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_low_elt_setter_283 = YPmet(FUNCODEREF(fun_low_elt_setter_283),CHKREF(lit_267),T229,ENVNUL);
  T233 = BOUNDP(YruntimeYlow_elt_setter);
  if (T233 != YPfalse) {
    T232 = CHKREF(YruntimeYlow_elt_setter);
  } else {
    T232 = YPfalse;
  }
  T231 = fun_low_elt_setter_283;
  T230 = CALL2(CHKREF(YPdefine_method),T232,T231);
  YruntimeYlow_elt_setter = T230;
  T234 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_50)),YPPlist(2,CHKREF(YruntimeYLbufG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_elt_284 = YPmet(FUNCODEREF(fun_elt_284),CHKREF(lit_197),T234,ENVNUL);
  T238 = BOUNDP(YruntimeYelt);
  if (T238 != YPfalse) {
    T237 = CHKREF(YruntimeYelt);
  } else {
    T237 = YPfalse;
  }
  T236 = fun_elt_284;
  T235 = CALL2(CHKREF(YPdefine_method),T237,T236);
  YruntimeYelt = T235;
  T239 = YPsig(YPPlist(3,CHKREF(lit_180),CHKREF(lit_52),CHKREF(lit_50)),YPPlist(3,CHKREF(YLanyG),CHKREF(YruntimeYLbufG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_elt_setter_285 = YPmet(FUNCODEREF(fun_elt_setter_285),CHKREF(lit_199),T239,ENVNUL);
  T243 = BOUNDP(YruntimeYelt_setter);
  if (T243 != YPfalse) {
    T242 = CHKREF(YruntimeYelt_setter);
  } else {
    T242 = YPfalse;
  }
  T241 = fun_elt_setter_285;
  T240 = CALL2(CHKREF(YPdefine_method),T242,T241);
  YruntimeYelt_setter = T240;
  T244 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_2)),YPPlist(2,CHKREF(YruntimeYLbufG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLbufG));
  fun_addX_286 = YPmet(FUNCODEREF(fun_addX_286),CHKREF(lit_210),T244,ENVNUL);
  T248 = BOUNDP(YruntimeYaddX);
  if (T248 != YPfalse) {
    T247 = CHKREF(YruntimeYaddX);
  } else {
    T247 = YPfalse;
  }
  T246 = fun_addX_286;
  T245 = CALL2(CHKREF(YPdefine_method),T247,T246);
  YruntimeYaddX = T245;
  lit_280 = YPPsym((P)"push-last!");
  T249 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_2)),YPPlist(2,CHKREF(YruntimeYLbufG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLbufG));
  fun_push_lastX_287 = YPmet(FUNCODEREF(fun_push_lastX_287),CHKREF(lit_280),T249,ENVNUL);
  T253 = BOUNDP(YruntimeYpush_lastX);
  if (T253 != YPfalse) {
    T252 = CHKREF(YruntimeYpush_lastX);
  } else {
    T252 = YPfalse;
  }
  T251 = fun_push_lastX_287;
  T250 = CALL2(CHKREF(YPdefine_method),T252,T251);
  YruntimeYpush_lastX = T250;
  lit_281 = YPPsym((P)"pop-last!");
  T254 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YruntimeYLbufG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_pop_lastX_288 = YPmet(FUNCODEREF(fun_pop_lastX_288),CHKREF(lit_281),T254,ENVNUL);
  T258 = BOUNDP(YruntimeYpop_lastX);
  if (T258 != YPfalse) {
    T257 = CHKREF(YruntimeYpop_lastX);
  } else {
    T257 = YPfalse;
  }
  T256 = fun_pop_lastX_288;
  T255 = CALL2(CHKREF(YPdefine_method),T257,T256);
  YruntimeYpop_lastX = T255;
  lit_282 = YPPsym((P)"outer");
  lit_283 = YPPsym((P)"inner");
  T261 = YPsig(YPPlist(1,CHKREF(lit_224)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_inner_289 = YPmet(FUNCODEREF(fun_inner_289),CHKREF(lit_283),T261,ENVNUL);
  T260 = YPsig(YPPlist(1,CHKREF(lit_231)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_outer_290 = YPmet(FUNCODEREF(fun_outer_290),CHKREF(lit_282),T260,ENVNUL);
  T259 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_231)),YPPlist(1,CHKREF(YruntimeYLbufG)),YPtrue,YPint((P)1),CHKREF(YruntimeYLbufG));
  fun_catX_291 = YPmet(FUNCODEREF(fun_catX_291),CHKREF(lit_230),T259,ENVNUL);
  T265 = BOUNDP(YruntimeYcatX);
  if (T265 != YPfalse) {
    T264 = CHKREF(YruntimeYcatX);
  } else {
    T264 = YPfalse;
  }
  T263 = fun_catX_291;
  T262 = CALL2(CHKREF(YPdefine_method),T264,T263);
  YruntimeYcatX = T262;
  lit_284 = YPPsym((P)"<range>");
  T267 = (P)YPpair(CHKREF(YLseqG),Ynil);
  T266 = CALL2(CHKREF(Yfab_class),CHKREF(lit_284),T267);
  YruntimeYLrangeG = T266;
  lit_285 = YPPsym((P)"range-from");
  T268 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_range_from_292 = YPmet(FUNCODEREF(fun_range_from_292),CHKREF(lit_285),T268,ENVNUL);
  T272 = BOUNDP(YruntimeYrange_from);
  if (T272 != YPfalse) {
    T271 = CHKREF(YruntimeYrange_from);
  } else {
    T271 = YPfalse;
  }
  T270 = fun_range_from_292;
  T269 = CALL2(CHKREF(YPdefine_method),T271,T270);
  YruntimeYrange_from = T269;
  lit_286 = YPPsym((P)"range-from-setter");
  T273 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLnumG),CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_range_from_setter_293 = YPmet(FUNCODEREF(fun_range_from_setter_293),CHKREF(lit_286),T273,ENVNUL);
  T277 = BOUNDP(YruntimeYrange_from_setter);
  if (T277 != YPfalse) {
    T276 = CHKREF(YruntimeYrange_from_setter);
  } else {
    T276 = YPfalse;
  }
  T275 = fun_range_from_setter_293;
  T274 = CALL2(CHKREF(YPdefine_method),T276,T275);
  YruntimeYrange_from_setter = T274;
  T278 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_294 = YPmet(FUNCODEREF(fun_294),YPfalse,T278,ENVNUL);
  T279 = fun_294;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLrangeG),CHKREF(YruntimeYrange_from),CHKREF(YruntimeYrange_from_setter),CHKREF(YLnumG),T279);
  lit_287 = YPPsym((P)"range-to");
  T280 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_range_to_295 = YPmet(FUNCODEREF(fun_range_to_295),CHKREF(lit_287),T280,ENVNUL);
  T284 = BOUNDP(YruntimeYrange_to);
  if (T284 != YPfalse) {
    T283 = CHKREF(YruntimeYrange_to);
  } else {
    T283 = YPfalse;
  }
  T282 = fun_range_to_295;
  T281 = CALL2(CHKREF(YPdefine_method),T283,T282);
  YruntimeYrange_to = T281;
  lit_288 = YPPsym((P)"range-to-setter");
  T285 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLnumG),CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_range_to_setter_296 = YPmet(FUNCODEREF(fun_range_to_setter_296),CHKREF(lit_288),T285,ENVNUL);
  T289 = BOUNDP(YruntimeYrange_to_setter);
  if (T289 != YPfalse) {
    T288 = CHKREF(YruntimeYrange_to_setter);
  } else {
    T288 = YPfalse;
  }
  T287 = fun_range_to_setter_296;
  T286 = CALL2(CHKREF(YPdefine_method),T288,T287);
  YruntimeYrange_to_setter = T286;
  T290 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_297 = YPmet(FUNCODEREF(fun_297),YPfalse,T290,ENVNUL);
  T291 = fun_297;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLrangeG),CHKREF(YruntimeYrange_to),CHKREF(YruntimeYrange_to_setter),CHKREF(YLnumG),T291);
  lit_289 = YPPsym((P)"range-below");
  T292 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_range_below_298 = YPmet(FUNCODEREF(fun_range_below_298),CHKREF(lit_289),T292,ENVNUL);
  T296 = BOUNDP(YruntimeYrange_below);
  if (T296 != YPfalse) {
    T295 = CHKREF(YruntimeYrange_below);
  } else {
    T295 = YPfalse;
  }
  T294 = fun_range_below_298;
  T293 = CALL2(CHKREF(YPdefine_method),T295,T294);
  YruntimeYrange_below = T293;
  lit_290 = YPPsym((P)"range-below-setter");
  T297 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLnumG),CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_range_below_setter_299 = YPmet(FUNCODEREF(fun_range_below_setter_299),CHKREF(lit_290),T297,ENVNUL);
  T301 = BOUNDP(YruntimeYrange_below_setter);
  if (T301 != YPfalse) {
    T300 = CHKREF(YruntimeYrange_below_setter);
  } else {
    T300 = YPfalse;
  }
  T299 = fun_range_below_setter_299;
  T298 = CALL2(CHKREF(YPdefine_method),T300,T299);
  YruntimeYrange_below_setter = T298;
  T304 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T303 = fun_300 = YPmet(FUNCODEREF(fun_300),YPfalse,T304,ENVNUL);
  T306 = fun_300;
  T305 = CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLrangeG),CHKREF(YruntimeYrange_below),CHKREF(YruntimeYrange_below_setter),CHKREF(YLnumG),T306);
  T302 = T305;
  return T302;
}

P YruntimeY___main_4___() {
  P initF1038;
  P ascii_charsF1037;
  P loopF1036;
  P end259F1035;
  P T295,T294,T293,T292,T291,T290,T289,T288,T287,T286,T285,T284,T283,T282,T281,T280;
  P T279,T278,T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264;
  P T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248;
  P T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232;
  P T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216;
  P T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200;
  P T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184;
  P T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168;
  P T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152;
  P T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136;
  P T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120;
  P T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104;
  P T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88;
  P T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72;
  P T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_291 = YPPsym((P)"range-above");
  T0 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_range_above_301 = YPmet(FUNCODEREF(fun_range_above_301),CHKREF(lit_291),T0,ENVNUL);
  T4 = BOUNDP(YruntimeYrange_above);
  if (T4 != YPfalse) {
    T3 = CHKREF(YruntimeYrange_above);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_range_above_301;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YruntimeYrange_above = T1;
  lit_292 = YPPsym((P)"range-above-setter");
  T5 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLnumG),CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_range_above_setter_302 = YPmet(FUNCODEREF(fun_range_above_setter_302),CHKREF(lit_292),T5,ENVNUL);
  T9 = BOUNDP(YruntimeYrange_above_setter);
  if (T9 != YPfalse) {
    T8 = CHKREF(YruntimeYrange_above_setter);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_range_above_setter_302;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YruntimeYrange_above_setter = T6;
  T10 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_303 = YPmet(FUNCODEREF(fun_303),YPfalse,T10,ENVNUL);
  T11 = fun_303;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLrangeG),CHKREF(YruntimeYrange_above),CHKREF(YruntimeYrange_above_setter),CHKREF(YLnumG),T11);
  lit_293 = YPPsym((P)"range-by");
  T12 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_range_by_304 = YPmet(FUNCODEREF(fun_range_by_304),CHKREF(lit_293),T12,ENVNUL);
  T16 = BOUNDP(YruntimeYrange_by);
  if (T16 != YPfalse) {
    T15 = CHKREF(YruntimeYrange_by);
  } else {
    T15 = YPfalse;
  }
  T14 = fun_range_by_304;
  T13 = CALL2(CHKREF(YPdefine_method),T15,T14);
  YruntimeYrange_by = T13;
  lit_294 = YPPsym((P)"range-by-setter");
  T17 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLnumG),CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_range_by_setter_305 = YPmet(FUNCODEREF(fun_range_by_setter_305),CHKREF(lit_294),T17,ENVNUL);
  T21 = BOUNDP(YruntimeYrange_by_setter);
  if (T21 != YPfalse) {
    T20 = CHKREF(YruntimeYrange_by_setter);
  } else {
    T20 = YPfalse;
  }
  T19 = fun_range_by_setter_305;
  T18 = CALL2(CHKREF(YPdefine_method),T20,T19);
  YruntimeYrange_by_setter = T18;
  T22 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_306 = YPmet(FUNCODEREF(fun_306),YPfalse,T22,ENVNUL);
  T23 = fun_306;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLrangeG),CHKREF(YruntimeYrange_by),CHKREF(YruntimeYrange_by_setter),CHKREF(YLnumG),T23);
  T25 = CALL1(CHKREF(YruntimeYtE),CHKREF(YruntimeYLrangeG));
  T24 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_141)),YPPlist(2,T25,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLrangeG));
  fun_fab_307 = YPmet(FUNCODEREF(fun_fab_307),CHKREF(lit_140),T24,ENVNUL);
  T29 = BOUNDP(YruntimeYfab);
  if (T29 != YPfalse) {
    T28 = CHKREF(YruntimeYfab);
  } else {
    T28 = YPfalse;
  }
  T27 = fun_fab_307;
  T26 = CALL2(CHKREF(YPdefine_method),T28,T27);
  YruntimeYfab = T26;
  T30 = YPsig(YPPlist(1,CHKREF(lit_215)),YPPlist(1,CHKREF(YLnumG)),YPfalse,YPint((P)1),CHKREF(YruntimeYLrangeG));
  fun_from_308 = YPmet(FUNCODEREF(fun_from_308),CHKREF(lit_215),T30,ENVNUL);
  T34 = BOUNDP(YruntimeYfrom);
  if (T34 != YPfalse) {
    T33 = CHKREF(YruntimeYfrom);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_from_308;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  YruntimeYfrom = T31;
  lit_295 = YPPsym((P)"from-by");
  lit_296 = YPPsym((P)"by");
  T35 = YPsig(YPPlist(2,CHKREF(lit_215),CHKREF(lit_296)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLrangeG));
  fun_from_by_309 = YPmet(FUNCODEREF(fun_from_by_309),CHKREF(lit_295),T35,ENVNUL);
  T39 = BOUNDP(YruntimeYfrom_by);
  if (T39 != YPfalse) {
    T38 = CHKREF(YruntimeYfrom_by);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_from_by_309;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YruntimeYfrom_by = T36;
  lit_297 = YPPsym((P)"from-to");
  lit_298 = YPPsym((P)"to");
  T40 = YPsig(YPPlist(2,CHKREF(lit_215),CHKREF(lit_298)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLrangeG));
  fun_from_to_310 = YPmet(FUNCODEREF(fun_from_to_310),CHKREF(lit_297),T40,ENVNUL);
  T44 = BOUNDP(YruntimeYfrom_to);
  if (T44 != YPfalse) {
    T43 = CHKREF(YruntimeYfrom_to);
  } else {
    T43 = YPfalse;
  }
  T42 = fun_from_to_310;
  T41 = CALL2(CHKREF(YPdefine_method),T43,T42);
  YruntimeYfrom_to = T41;
  lit_299 = YPPsym((P)"from-to-by");
  T45 = YPsig(YPPlist(3,CHKREF(lit_215),CHKREF(lit_298),CHKREF(lit_296)),YPPlist(3,CHKREF(YLnumG),CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)3),CHKREF(YruntimeYLrangeG));
  fun_from_to_by_311 = YPmet(FUNCODEREF(fun_from_to_by_311),CHKREF(lit_299),T45,ENVNUL);
  T49 = BOUNDP(YruntimeYfrom_to_by);
  if (T49 != YPfalse) {
    T48 = CHKREF(YruntimeYfrom_to_by);
  } else {
    T48 = YPfalse;
  }
  T47 = fun_from_to_by_311;
  T46 = CALL2(CHKREF(YPdefine_method),T48,T47);
  YruntimeYfrom_to_by = T46;
  lit_300 = YPPsym((P)"from-below");
  T50 = YPsig(YPPlist(2,CHKREF(lit_215),CHKREF(lit_214)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLrangeG));
  fun_from_below_312 = YPmet(FUNCODEREF(fun_from_below_312),CHKREF(lit_300),T50,ENVNUL);
  T54 = BOUNDP(YruntimeYfrom_below);
  if (T54 != YPfalse) {
    T53 = CHKREF(YruntimeYfrom_below);
  } else {
    T53 = YPfalse;
  }
  T52 = fun_from_below_312;
  T51 = CALL2(CHKREF(YPdefine_method),T53,T52);
  YruntimeYfrom_below = T51;
  lit_301 = YPPsym((P)"from-below-by");
  T55 = YPsig(YPPlist(3,CHKREF(lit_215),CHKREF(lit_214),CHKREF(lit_296)),YPPlist(3,CHKREF(YLnumG),CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)3),CHKREF(YruntimeYLrangeG));
  fun_from_below_by_313 = YPmet(FUNCODEREF(fun_from_below_by_313),CHKREF(lit_301),T55,ENVNUL);
  T59 = BOUNDP(YruntimeYfrom_below_by);
  if (T59 != YPfalse) {
    T58 = CHKREF(YruntimeYfrom_below_by);
  } else {
    T58 = YPfalse;
  }
  T57 = fun_from_below_by_313;
  T56 = CALL2(CHKREF(YPdefine_method),T58,T57);
  YruntimeYfrom_below_by = T56;
  lit_302 = YPPsym((P)"from-above");
  lit_303 = YPPsym((P)"above");
  T60 = YPsig(YPPlist(2,CHKREF(lit_215),CHKREF(lit_303)),YPPlist(2,CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLrangeG));
  fun_from_above_314 = YPmet(FUNCODEREF(fun_from_above_314),CHKREF(lit_302),T60,ENVNUL);
  T64 = BOUNDP(YruntimeYfrom_above);
  if (T64 != YPfalse) {
    T63 = CHKREF(YruntimeYfrom_above);
  } else {
    T63 = YPfalse;
  }
  T62 = fun_from_above_314;
  T61 = CALL2(CHKREF(YPdefine_method),T63,T62);
  YruntimeYfrom_above = T61;
  lit_304 = YPPsym((P)"from-above-by");
  T65 = YPsig(YPPlist(3,CHKREF(lit_215),CHKREF(lit_303),CHKREF(lit_296)),YPPlist(3,CHKREF(YLnumG),CHKREF(YLnumG),CHKREF(YLnumG)),YPfalse,YPint((P)3),CHKREF(YruntimeYLrangeG));
  fun_from_above_by_315 = YPmet(FUNCODEREF(fun_from_above_by_315),CHKREF(lit_304),T65,ENVNUL);
  T69 = BOUNDP(YruntimeYfrom_above_by);
  if (T69 != YPfalse) {
    T68 = CHKREF(YruntimeYfrom_above_by);
  } else {
    T68 = YPfalse;
  }
  T67 = fun_from_above_by_315;
  T66 = CALL2(CHKREF(YPdefine_method),T68,T67);
  YruntimeYfrom_above_by = T66;
  T70 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YruntimeYLrangeG)),YPfalse,YPint((P)1),CHKREF(YLnumG));
  fun_ini_state_316 = YPmet(FUNCODEREF(fun_ini_state_316),CHKREF(lit_258),T70,ENVNUL);
  T74 = BOUNDP(YruntimeYini_state);
  if (T74 != YPfalse) {
    T73 = CHKREF(YruntimeYini_state);
  } else {
    T73 = YPfalse;
  }
  T72 = fun_ini_state_316;
  T71 = CALL2(CHKREF(YPdefine_method),T73,T72);
  YruntimeYini_state = T71;
  T75 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_162)),YPPlist(2,CHKREF(YruntimeYLrangeG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_fin_stateQ_317 = YPmet(FUNCODEREF(fun_fin_stateQ_317),CHKREF(lit_259),T75,ENVNUL);
  T79 = BOUNDP(YruntimeYfin_stateQ);
  if (T79 != YPfalse) {
    T78 = CHKREF(YruntimeYfin_stateQ);
  } else {
    T78 = YPfalse;
  }
  T77 = fun_fin_stateQ_317;
  T76 = CALL2(CHKREF(YPdefine_method),T78,T77);
  YruntimeYfin_stateQ = T76;
  T80 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_162)),YPPlist(2,CHKREF(YruntimeYLrangeG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLnumG));
  fun_nxt_state_318 = YPmet(FUNCODEREF(fun_nxt_state_318),CHKREF(lit_260),T80,ENVNUL);
  T84 = BOUNDP(YruntimeYnxt_state);
  if (T84 != YPfalse) {
    T83 = CHKREF(YruntimeYnxt_state);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_nxt_state_318;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  YruntimeYnxt_state = T81;
  T85 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_162)),YPPlist(2,CHKREF(YruntimeYLrangeG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_now_elt_319 = YPmet(FUNCODEREF(fun_now_elt_319),CHKREF(lit_261),T85,ENVNUL);
  T89 = BOUNDP(YruntimeYnow_elt);
  if (T89 != YPfalse) {
    T88 = CHKREF(YruntimeYnow_elt);
  } else {
    T88 = YPfalse;
  }
  T87 = fun_now_elt_319;
  T86 = CALL2(CHKREF(YPdefine_method),T88,T87);
  YruntimeYnow_elt = T86;
  T90 = YPsig(YPPlist(2,CHKREF(lit_51),CHKREF(lit_162)),YPPlist(2,CHKREF(YruntimeYLrangeG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLnumG));
  fun_copy_state_320 = YPmet(FUNCODEREF(fun_copy_state_320),CHKREF(lit_264),T90,ENVNUL);
  T94 = BOUNDP(YruntimeYcopy_state);
  if (T94 != YPfalse) {
    T93 = CHKREF(YruntimeYcopy_state);
  } else {
    T93 = YPfalse;
  }
  T92 = fun_copy_state_320;
  T91 = CALL2(CHKREF(YPdefine_method),T93,T92);
  YruntimeYcopy_state = T91;
  lit_305 = YPPsym((P)"<step>");
  T96 = (P)YPpair(CHKREF(YLseqG),Ynil);
  T95 = CALL2(CHKREF(Yfab_class),CHKREF(lit_305),T96);
  YruntimeYLstepG = T95;
  lit_306 = YPPsym((P)"step-first");
  T97 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLstepG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_step_first_321 = YPmet(FUNCODEREF(fun_step_first_321),CHKREF(lit_306),T97,ENVNUL);
  T101 = BOUNDP(YruntimeYstep_first);
  if (T101 != YPfalse) {
    T100 = CHKREF(YruntimeYstep_first);
  } else {
    T100 = YPfalse;
  }
  T99 = fun_step_first_321;
  T98 = CALL2(CHKREF(YPdefine_method),T100,T99);
  YruntimeYstep_first = T98;
  lit_307 = YPPsym((P)"step-first-setter");
  T102 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLanyG),CHKREF(YruntimeYLstepG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_step_first_setter_322 = YPmet(FUNCODEREF(fun_step_first_setter_322),CHKREF(lit_307),T102,ENVNUL);
  T106 = BOUNDP(YruntimeYstep_first_setter);
  if (T106 != YPfalse) {
    T105 = CHKREF(YruntimeYstep_first_setter);
  } else {
    T105 = YPfalse;
  }
  T104 = fun_step_first_setter_322;
  T103 = CALL2(CHKREF(YPdefine_method),T105,T104);
  YruntimeYstep_first_setter = T103;
  T107 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_323 = YPmet(FUNCODEREF(fun_323),YPfalse,T107,ENVNUL);
  T108 = fun_323;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLstepG),CHKREF(YruntimeYstep_first),CHKREF(YruntimeYstep_first_setter),CHKREF(YLanyG),T108);
  lit_308 = YPPsym((P)"step-then");
  T109 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLstepG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_step_then_324 = YPmet(FUNCODEREF(fun_step_then_324),CHKREF(lit_308),T109,ENVNUL);
  T113 = BOUNDP(YruntimeYstep_then);
  if (T113 != YPfalse) {
    T112 = CHKREF(YruntimeYstep_then);
  } else {
    T112 = YPfalse;
  }
  T111 = fun_step_then_324;
  T110 = CALL2(CHKREF(YPdefine_method),T112,T111);
  YruntimeYstep_then = T110;
  lit_309 = YPPsym((P)"step-then-setter");
  T114 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLanyG),CHKREF(YruntimeYLstepG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_step_then_setter_325 = YPmet(FUNCODEREF(fun_step_then_setter_325),CHKREF(lit_309),T114,ENVNUL);
  T118 = BOUNDP(YruntimeYstep_then_setter);
  if (T118 != YPfalse) {
    T117 = CHKREF(YruntimeYstep_then_setter);
  } else {
    T117 = YPfalse;
  }
  T116 = fun_step_then_setter_325;
  T115 = CALL2(CHKREF(YPdefine_method),T117,T116);
  YruntimeYstep_then_setter = T115;
  T119 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_326 = YPmet(FUNCODEREF(fun_326),YPfalse,T119,ENVNUL);
  T120 = fun_326;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLstepG),CHKREF(YruntimeYstep_then),CHKREF(YruntimeYstep_then_setter),CHKREF(YLanyG),T120);
  lit_310 = YPPsym((P)"first-then");
  lit_311 = YPPsym((P)"then");
  lit_312 = YPPsym((P)"first");
  T121 = YPsig(YPPlist(2,CHKREF(lit_312),CHKREF(lit_311)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLstepG));
  fun_first_then_327 = YPmet(FUNCODEREF(fun_first_then_327),CHKREF(lit_310),T121,ENVNUL);
  T125 = BOUNDP(YruntimeYfirst_then);
  if (T125 != YPfalse) {
    T124 = CHKREF(YruntimeYfirst_then);
  } else {
    T124 = YPfalse;
  }
  T123 = fun_first_then_327;
  T122 = CALL2(CHKREF(YPdefine_method),T124,T123);
  YruntimeYfirst_then = T122;
  T126 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YruntimeYLstepG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_ini_state_328 = YPmet(FUNCODEREF(fun_ini_state_328),CHKREF(lit_258),T126,ENVNUL);
  T130 = BOUNDP(YruntimeYini_state);
  if (T130 != YPfalse) {
    T129 = CHKREF(YruntimeYini_state);
  } else {
    T129 = YPfalse;
  }
  T128 = fun_ini_state_328;
  T127 = CALL2(CHKREF(YPdefine_method),T129,T128);
  YruntimeYini_state = T127;
  T131 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_162)),YPPlist(2,CHKREF(YruntimeYLstepG),CHKREF(YLlogG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_fin_stateQ_329 = YPmet(FUNCODEREF(fun_fin_stateQ_329),CHKREF(lit_259),T131,ENVNUL);
  T135 = BOUNDP(YruntimeYfin_stateQ);
  if (T135 != YPfalse) {
    T134 = CHKREF(YruntimeYfin_stateQ);
  } else {
    T134 = YPfalse;
  }
  T133 = fun_fin_stateQ_329;
  T132 = CALL2(CHKREF(YPdefine_method),T134,T133);
  YruntimeYfin_stateQ = T132;
  T136 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_162)),YPPlist(2,CHKREF(YruntimeYLstepG),CHKREF(YLlogG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_nxt_state_330 = YPmet(FUNCODEREF(fun_nxt_state_330),CHKREF(lit_260),T136,ENVNUL);
  T140 = BOUNDP(YruntimeYnxt_state);
  if (T140 != YPfalse) {
    T139 = CHKREF(YruntimeYnxt_state);
  } else {
    T139 = YPfalse;
  }
  T138 = fun_nxt_state_330;
  T137 = CALL2(CHKREF(YPdefine_method),T139,T138);
  YruntimeYnxt_state = T137;
  T141 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_162)),YPPlist(2,CHKREF(YruntimeYLstepG),CHKREF(YLlogG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_now_elt_331 = YPmet(FUNCODEREF(fun_now_elt_331),CHKREF(lit_261),T141,ENVNUL);
  T145 = BOUNDP(YruntimeYnow_elt);
  if (T145 != YPfalse) {
    T144 = CHKREF(YruntimeYnow_elt);
  } else {
    T144 = YPfalse;
  }
  T143 = fun_now_elt_331;
  T142 = CALL2(CHKREF(YPdefine_method),T144,T143);
  YruntimeYnow_elt = T142;
  T146 = YPsig(YPPlist(2,CHKREF(lit_51),CHKREF(lit_162)),YPPlist(2,CHKREF(YruntimeYLstepG),CHKREF(YLlogG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_copy_state_332 = YPmet(FUNCODEREF(fun_copy_state_332),CHKREF(lit_264),T146,ENVNUL);
  T150 = BOUNDP(YruntimeYcopy_state);
  if (T150 != YPfalse) {
    T149 = CHKREF(YruntimeYcopy_state);
  } else {
    T149 = YPfalse;
  }
  T148 = fun_copy_state_332;
  T147 = CALL2(CHKREF(YPdefine_method),T149,T148);
  YruntimeYcopy_state = T147;
  lit_313 = YPPsym((P)"<assoc>");
  T152 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T151 = CALL2(CHKREF(Yfab_class),CHKREF(lit_313),T152);
  YruntimeYLassocG = T151;
  lit_314 = YPPsym((P)"assoc-key");
  T153 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLassocG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_assoc_key_333 = YPmet(FUNCODEREF(fun_assoc_key_333),CHKREF(lit_314),T153,ENVNUL);
  T157 = BOUNDP(YruntimeYassoc_key);
  if (T157 != YPfalse) {
    T156 = CHKREF(YruntimeYassoc_key);
  } else {
    T156 = YPfalse;
  }
  T155 = fun_assoc_key_333;
  T154 = CALL2(CHKREF(YPdefine_method),T156,T155);
  YruntimeYassoc_key = T154;
  lit_315 = YPPsym((P)"assoc-key-setter");
  T158 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLanyG),CHKREF(YruntimeYLassocG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_assoc_key_setter_334 = YPmet(FUNCODEREF(fun_assoc_key_setter_334),CHKREF(lit_315),T158,ENVNUL);
  T162 = BOUNDP(YruntimeYassoc_key_setter);
  if (T162 != YPfalse) {
    T161 = CHKREF(YruntimeYassoc_key_setter);
  } else {
    T161 = YPfalse;
  }
  T160 = fun_assoc_key_setter_334;
  T159 = CALL2(CHKREF(YPdefine_method),T161,T160);
  YruntimeYassoc_key_setter = T159;
  T163 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_335 = YPmet(FUNCODEREF(fun_335),YPfalse,T163,ENVNUL);
  T164 = fun_335;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLassocG),CHKREF(YruntimeYassoc_key),CHKREF(YruntimeYassoc_key_setter),CHKREF(YLanyG),T164);
  lit_316 = YPPsym((P)"assoc-value");
  T165 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLassocG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_assoc_value_336 = YPmet(FUNCODEREF(fun_assoc_value_336),CHKREF(lit_316),T165,ENVNUL);
  T169 = BOUNDP(YruntimeYassoc_value);
  if (T169 != YPfalse) {
    T168 = CHKREF(YruntimeYassoc_value);
  } else {
    T168 = YPfalse;
  }
  T167 = fun_assoc_value_336;
  T166 = CALL2(CHKREF(YPdefine_method),T168,T167);
  YruntimeYassoc_value = T166;
  lit_317 = YPPsym((P)"assoc-value-setter");
  T170 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLanyG),CHKREF(YruntimeYLassocG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_assoc_value_setter_337 = YPmet(FUNCODEREF(fun_assoc_value_setter_337),CHKREF(lit_317),T170,ENVNUL);
  T174 = BOUNDP(YruntimeYassoc_value_setter);
  if (T174 != YPfalse) {
    T173 = CHKREF(YruntimeYassoc_value_setter);
  } else {
    T173 = YPfalse;
  }
  T172 = fun_assoc_value_setter_337;
  T171 = CALL2(CHKREF(YPdefine_method),T173,T172);
  YruntimeYassoc_value_setter = T171;
  T175 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_338 = YPmet(FUNCODEREF(fun_338),YPfalse,T175,ENVNUL);
  T176 = fun_338;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLassocG),CHKREF(YruntimeYassoc_value),CHKREF(YruntimeYassoc_value_setter),CHKREF(YLanyG),T176);
  lit_318 = YPPsym((P)"assoc");
  T177 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLassocG));
  YruntimeYassoc = YPmet(FUNCODEREF(YruntimeYassoc),CHKREF(lit_318),T177,ENVNUL);
  T178 = YruntimeYassoc;
  YruntimeYassoc = T178;
  lit_319 = YPPsym((P)"assocq");
  T179 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_254)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_assocq_340 = YPmet(FUNCODEREF(fun_assocq_340),CHKREF(lit_319),T179,ENVNUL);
  T183 = BOUNDP(YruntimeYassocq);
  if (T183 != YPfalse) {
    T182 = CHKREF(YruntimeYassocq);
  } else {
    T182 = YPfalse;
  }
  T181 = fun_assocq_340;
  T180 = CALL2(CHKREF(YPdefine_method),T182,T181);
  YruntimeYassocq = T180;
  lit_320 = YPsb((P)"]");
  lit_321 = YPsb((P)"#[");
  T184 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YruntimeYLbufG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_to_str_341 = YPmet(FUNCODEREF(fun_to_str_341),CHKREF(lit_30),T184,ENVNUL);
  T188 = BOUNDP(YruntimeYto_str);
  if (T188 != YPfalse) {
    T187 = CHKREF(YruntimeYto_str);
  } else {
    T187 = YPfalse;
  }
  T186 = fun_to_str_341;
  T185 = CALL2(CHKREF(YPdefine_method),T187,T186);
  YruntimeYto_str = T185;
  T190 = CALL1(CHKREF(YruntimeYtE),CHKREF(YLstrG));
  T189 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,T190),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_empty_342 = YPmet(FUNCODEREF(fun_empty_342),CHKREF(lit_133),T189,ENVNUL);
  T194 = BOUNDP(YruntimeYempty);
  if (T194 != YPfalse) {
    T193 = CHKREF(YruntimeYempty);
  } else {
    T193 = YPfalse;
  }
  T192 = fun_empty_342;
  T191 = CALL2(CHKREF(YPdefine_method),T193,T192);
  YruntimeYempty = T191;
  T196 = CALL1(CHKREF(YruntimeYtE),CHKREF(YLstrG));
  T195 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,T196),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_default_343 = YPmet(FUNCODEREF(fun_default_343),CHKREF(lit_114),T195,ENVNUL);
  T200 = BOUNDP(YruntimeYdefault);
  if (T200 != YPfalse) {
    T199 = CHKREF(YruntimeYdefault);
  } else {
    T199 = YPfalse;
  }
  T198 = fun_default_343;
  T197 = CALL2(CHKREF(YPdefine_method),T199,T198);
  YruntimeYdefault = T197;
  T202 = CALL1(CHKREF(YruntimeYtE),CHKREF(YLstrG));
  T201 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_141)),YPPlist(2,T202,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLstrG));
  fun_fab_344 = YPmet(FUNCODEREF(fun_fab_344),CHKREF(lit_140),T201,ENVNUL);
  T206 = BOUNDP(YruntimeYfab);
  if (T206 != YPfalse) {
    T205 = CHKREF(YruntimeYfab);
  } else {
    T205 = YPfalse;
  }
  T204 = fun_fab_344;
  T203 = CALL2(CHKREF(YPdefine_method),T205,T204);
  YruntimeYfab = T203;
  lit_322 = YPPsym((P)"str");
  T207 = YPsig(YPPlist(1,CHKREF(lit_131)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG));
  fun_str_345 = YPmet(FUNCODEREF(fun_str_345),CHKREF(lit_322),T207,ENVNUL);
  T211 = BOUNDP(YruntimeYstr);
  if (T211 != YPfalse) {
    T210 = CHKREF(YruntimeYstr);
  } else {
    T210 = YPfalse;
  }
  T209 = fun_str_345;
  T208 = CALL2(CHKREF(YPdefine_method),T210,T209);
  YruntimeYstr = T208;
  T212 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  fun_len_346 = YPmet(FUNCODEREF(fun_len_346),CHKREF(lit_149),T212,ENVNUL);
  T216 = BOUNDP(YruntimeYlen);
  if (T216 != YPfalse) {
    T215 = CHKREF(YruntimeYlen);
  } else {
    T215 = YPfalse;
  }
  T214 = fun_len_346;
  T213 = CALL2(CHKREF(YPdefine_method),T215,T214);
  YruntimeYlen = T213;
  T217 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_50)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLchrG));
  fun_low_elt_347 = YPmet(FUNCODEREF(fun_low_elt_347),CHKREF(lit_266),T217,ENVNUL);
  T221 = BOUNDP(YruntimeYlow_elt);
  if (T221 != YPfalse) {
    T220 = CHKREF(YruntimeYlow_elt);
  } else {
    T220 = YPfalse;
  }
  T219 = fun_low_elt_347;
  T218 = CALL2(CHKREF(YPdefine_method),T220,T219);
  YruntimeYlow_elt = T218;
  T222 = YPsig(YPPlist(3,CHKREF(lit_180),CHKREF(lit_2),CHKREF(lit_50)),YPPlist(3,CHKREF(YLchrG),CHKREF(YLstrG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_low_elt_setter_348 = YPmet(FUNCODEREF(fun_low_elt_setter_348),CHKREF(lit_267),T222,ENVNUL);
  T226 = BOUNDP(YruntimeYlow_elt_setter);
  if (T226 != YPfalse) {
    T225 = CHKREF(YruntimeYlow_elt_setter);
  } else {
    T225 = YPfalse;
  }
  T224 = fun_low_elt_setter_348;
  T223 = CALL2(CHKREF(YPdefine_method),T225,T224);
  YruntimeYlow_elt_setter = T223;
  T227 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_50)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLchrG));
  fun_elt_349 = YPmet(FUNCODEREF(fun_elt_349),CHKREF(lit_197),T227,ENVNUL);
  T231 = BOUNDP(YruntimeYelt);
  if (T231 != YPfalse) {
    T230 = CHKREF(YruntimeYelt);
  } else {
    T230 = YPfalse;
  }
  T229 = fun_elt_349;
  T228 = CALL2(CHKREF(YPdefine_method),T230,T229);
  YruntimeYelt = T228;
  T232 = YPsig(YPPlist(3,CHKREF(lit_180),CHKREF(lit_2),CHKREF(lit_50)),YPPlist(3,CHKREF(YLchrG),CHKREF(YLstrG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_elt_setter_350 = YPmet(FUNCODEREF(fun_elt_setter_350),CHKREF(lit_199),T232,ENVNUL);
  T236 = BOUNDP(YruntimeYelt_setter);
  if (T236 != YPfalse) {
    T235 = CHKREF(YruntimeYelt_setter);
  } else {
    T235 = YPfalse;
  }
  T234 = fun_elt_setter_350;
  T233 = CALL2(CHKREF(YPdefine_method),T235,T234);
  YruntimeYelt_setter = T233;
  T237 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_to_str_351 = YPmet(FUNCODEREF(fun_to_str_351),CHKREF(lit_30),T237,ENVNUL);
  T241 = BOUNDP(YruntimeYto_str);
  if (T241 != YPfalse) {
    T240 = CHKREF(YruntimeYto_str);
  } else {
    T240 = YPfalse;
  }
  T239 = fun_to_str_351;
  T238 = CALL2(CHKREF(YPdefine_method),T240,T239);
  YruntimeYto_str = T238;
  T242 = YPsig(YPPlist(2,CHKREF(lit_141),CHKREF(lit_52)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLchrG)),YPfalse,YPint((P)2),CHKREF(YLstrG));
  fun_add_352 = YPmet(FUNCODEREF(fun_add_352),CHKREF(lit_208),T242,ENVNUL);
  T246 = BOUNDP(YruntimeYadd);
  if (T246 != YPfalse) {
    T245 = CHKREF(YruntimeYadd);
  } else {
    T245 = YPfalse;
  }
  T244 = fun_add_352;
  T243 = CALL2(CHKREF(YPdefine_method),T245,T244);
  YruntimeYadd = T243;
  YruntimeYascii_limit = YPint((P)128);
  lit_323 = YPsb((P)"`abcdefghijklmnopqrstuvwxyz{|}~");
  lit_324 = YPsb((P)"@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_");
  lit_325 = YPsb((P)" !\"#$%&'()*+,-./0123456789:;<=>?");
  lit_326 = YPsb((P)"\r");
  lit_327 = YPsb((P)"\f");
  lit_328 = YPsb((P)"\n");
  lit_329 = YPsb((P)"\t");
  lit_330 = YPPsym((P)"j");
  T248 = YPsig(YPPlist(2,CHKREF(lit_50),CHKREF(lit_330)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_353 = YPmet(FUNCODEREF(fun_loop_353),CHKREF(lit_88),T248,ENVNUL);
  T247 = YPsig(YPPlist(2,CHKREF(lit_50),CHKREF(lit_141)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_354 = YPmet(FUNCODEREF(fun_354),YPfalse,T247,ENVNUL);
  T253 = CALL2(CHKREF(YruntimeYfab),CHKREF(YLvecG),CHKREF(YruntimeYascii_limit));
  T252 = CALL2(CHKREF(YruntimeYfill),T253,YPfalse);
  ascii_charsF1037 = T252;
  T251 = FUNFAB(fun_354,1,ascii_charsF1037);
  initF1038 = T251;
  CALL2(initF1038,YPint((P)9),CHKREF(lit_329));
  CALL2(initF1038,YPint((P)10),CHKREF(lit_328));
  CALL2(initF1038,YPint((P)12),CHKREF(lit_327));
  CALL2(initF1038,YPint((P)13),CHKREF(lit_326));
  CALL2(initF1038,YPint((P)32),CHKREF(lit_325));
  CALL2(initF1038,YPint((P)64),CHKREF(lit_324));
  CALL2(initF1038,YPint((P)96),CHKREF(lit_323));
  T250 = ascii_charsF1037;
  T249 = T250;
  YruntimeYascii_chars = T249;
  lit_331 = YPPsym((P)"ascii->char");
  lit_332 = YPPsym((P)"n");
  lit_333 = YPsb((P)"not a standard character's ASCII code: %=");
  T254 = YPsig(YPPlist(1,CHKREF(lit_332)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLchrG));
  fun_ascii_Gchar_355 = YPmet(FUNCODEREF(fun_ascii_Gchar_355),CHKREF(lit_331),T254,ENVNUL);
  T258 = BOUNDP(YruntimeYascii_Gchar);
  if (T258 != YPfalse) {
    T257 = CHKREF(YruntimeYascii_Gchar);
  } else {
    T257 = YPfalse;
  }
  T256 = fun_ascii_Gchar_355;
  T255 = CALL2(CHKREF(YPdefine_method),T257,T256);
  YruntimeYascii_Gchar = T255;
  lit_334 = YPPsym((P)"char->integer");
  T259 = YPsig(YPPlist(1,CHKREF(lit_95)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  fun_char_Ginteger_356 = YPmet(FUNCODEREF(fun_char_Ginteger_356),CHKREF(lit_334),T259,ENVNUL);
  T263 = BOUNDP(YruntimeYchar_Ginteger);
  if (T263 != YPfalse) {
    T262 = CHKREF(YruntimeYchar_Ginteger);
  } else {
    T262 = YPfalse;
  }
  T261 = fun_char_Ginteger_356;
  T260 = CALL2(CHKREF(YPdefine_method),T262,T261);
  YruntimeYchar_Ginteger = T260;
  lit_335 = YPPsym((P)"integer->char");
  T264 = YPsig(YPPlist(1,CHKREF(lit_332)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLchrG));
  fun_integer_Gchar_357 = YPmet(FUNCODEREF(fun_integer_Gchar_357),CHKREF(lit_335),T264,ENVNUL);
  T268 = BOUNDP(YruntimeYinteger_Gchar);
  if (T268 != YPfalse) {
    T267 = CHKREF(YruntimeYinteger_Gchar);
  } else {
    T267 = YPfalse;
  }
  T266 = fun_integer_Gchar_357;
  T265 = CALL2(CHKREF(YPdefine_method),T267,T266);
  YruntimeYinteger_Gchar = T265;
  lit_336 = YPPsym((P)"greatest");
  lit_337 = YPPsym((P)"least");
  T270 = YPsig(YPPlist(1,CHKREF(lit_50)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_358 = YPmet(FUNCODEREF(fun_loop_358),CHKREF(lit_88),T270,ENVNUL);
  T269 = YPsig(YPPlist(3,CHKREF(lit_50),CHKREF(lit_337),CHKREF(lit_336)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_loop_359 = YPmet(FUNCODEREF(fun_loop_359),CHKREF(lit_88),T269,ENVNUL);
  T275 = CALL1(CHKREF(YruntimeYlen),CHKREF(YruntimeYascii_chars));
  end259F1035 = T275;
  T274 = FUNSHELL(1,fun_loop_359,2);
  loopF1036 = T274;
  FUNINIT(loopF1036, 2,loopF1036,end259F1035);
  T273 = KCALL3(loopF1036,YPint((P)0),YPfalse,YPfalse);
  T272 = T273;
  T271 = T272;
  YruntimeYnative_chars = T271;
  lit_338 = YPPsym((P)"char->ascii");
  lit_339 = YPsb((P)"not a standard character: %=");
  T276 = YPsig(YPPlist(1,CHKREF(lit_95)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  fun_char_Gascii_360 = YPmet(FUNCODEREF(fun_char_Gascii_360),CHKREF(lit_338),T276,ENVNUL);
  T280 = BOUNDP(YruntimeYchar_Gascii);
  if (T280 != YPfalse) {
    T279 = CHKREF(YruntimeYchar_Gascii);
  } else {
    T279 = YPfalse;
  }
  T278 = fun_char_Gascii_360;
  T277 = CALL2(CHKREF(YPdefine_method),T279,T278);
  YruntimeYchar_Gascii = T277;
  lit_340 = YPPlist(5,YPint((P)32),YPint((P)10),YPint((P)9),YPint((P)12),YPint((P)13));
  YruntimeYascii_whitespaces = CHKREF(lit_340);
  T282 = CALL1(CHKREF(YruntimeYtE),CHKREF(YLstrG));
  T281 = YPsig(YPPlist(2,CHKREF(lit_51),CHKREF(lit_141)),YPPlist(2,T282,CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLstrG));
  fun_as_361 = YPmet(FUNCODEREF(fun_as_361),CHKREF(lit_37),T281,ENVNUL);
  T286 = BOUNDP(YruntimeYas);
  if (T286 != YPfalse) {
    T285 = CHKREF(YruntimeYas);
  } else {
    T285 = YPfalse;
  }
  T284 = fun_as_361;
  T283 = CALL2(CHKREF(YPdefine_method),T285,T284);
  YruntimeYas = T283;
  T290 = CALL1(CHKREF(YruntimeYtE),CHKREF(YLsymG));
  T289 = YPsig(YPPlist(2,CHKREF(lit_51),CHKREF(lit_141)),YPPlist(2,T290,CHKREF(YLstrG)),YPfalse,YPint((P)2),CHKREF(YLsymG));
  T288 = fun_as_362 = YPmet(FUNCODEREF(fun_as_362),CHKREF(lit_37),T289,ENVNUL);
  T295 = BOUNDP(YruntimeYas);
  if (T295 != YPfalse) {
    T294 = CHKREF(YruntimeYas);
  } else {
    T294 = YPfalse;
  }
  T293 = fun_as_362;
  T292 = CALL2(CHKREF(YPdefine_method),T294,T293);
  T291 = YruntimeYas = T292;
  T287 = T291;
  return T287;
}

P YruntimeY___main_5___() {
  P T251,T250,T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236;
  P T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220;
  P T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204;
  P T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188;
  P T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172;
  P T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156;
  P T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140;
  P T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124;
  P T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108;
  P T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92;
  P T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76;
  P T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60;
  P T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLsymG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_L_363 = YPmet(FUNCODEREF(fun_L_363),CHKREF(lit_53),T0,ENVNUL);
  T4 = BOUNDP(YruntimeYL);
  if (T4 != YPfalse) {
    T3 = CHKREF(YruntimeYL);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_L_363;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YruntimeYL = T1;
  T5 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_to_str_364 = YPmet(FUNCODEREF(fun_to_str_364),CHKREF(lit_30),T5,ENVNUL);
  T9 = BOUNDP(YruntimeYto_str);
  if (T9 != YPfalse) {
    T8 = CHKREF(YruntimeYto_str);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_to_str_364;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YruntimeYto_str = T6;
  lit_341 = YPPsym((P)"identity");
  T10 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_identity_365 = YPmet(FUNCODEREF(fun_identity_365),CHKREF(lit_341),T10,ENVNUL);
  T14 = BOUNDP(YruntimeYidentity);
  if (T14 != YPfalse) {
    T13 = CHKREF(YruntimeYidentity);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_identity_365;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  YruntimeYidentity = T11;
  lit_342 = YPPsym((P)"compose");
  lit_343 = YPPsym((P)"fy");
  lit_344 = YPPsym((P)"fx");
  T16 = YPsig(YPPlist(1,CHKREF(lit_24)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG));
  fun_366 = YPmet(FUNCODEREF(fun_366),YPfalse,T16,ENVNUL);
  T15 = YPsig(YPPlist(2,CHKREF(lit_344),CHKREF(lit_343)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLfunG));
  fun_compose_367 = YPmet(FUNCODEREF(fun_compose_367),CHKREF(lit_342),T15,ENVNUL);
  T20 = BOUNDP(YruntimeYcompose);
  if (T20 != YPfalse) {
    T19 = CHKREF(YruntimeYcompose);
  } else {
    T19 = YPfalse;
  }
  T18 = fun_compose_367;
  T17 = CALL2(CHKREF(YPdefine_method),T19,T18);
  YruntimeYcompose = T17;
  lit_345 = YPPsym((P)"rcurry");
  lit_346 = YPPsym((P)"curried");
  T22 = YPsig(YPPlist(1,CHKREF(lit_24)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG));
  fun_368 = YPmet(FUNCODEREF(fun_368),YPfalse,T22,ENVNUL);
  T21 = YPsig(YPPlist(2,CHKREF(lit_63),CHKREF(lit_346)),YPPlist(1,CHKREF(YLfunG)),YPtrue,YPint((P)1),CHKREF(YLfunG));
  fun_rcurry_369 = YPmet(FUNCODEREF(fun_rcurry_369),CHKREF(lit_345),T21,ENVNUL);
  T26 = BOUNDP(YruntimeYrcurry);
  if (T26 != YPfalse) {
    T25 = CHKREF(YruntimeYrcurry);
  } else {
    T25 = YPfalse;
  }
  T24 = fun_rcurry_369;
  T23 = CALL2(CHKREF(YPdefine_method),T25,T24);
  YruntimeYrcurry = T23;
  lit_347 = YPPsym((P)"curry");
  T28 = YPsig(YPPlist(1,CHKREF(lit_24)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG));
  fun_370 = YPmet(FUNCODEREF(fun_370),YPfalse,T28,ENVNUL);
  T27 = YPsig(YPPlist(2,CHKREF(lit_63),CHKREF(lit_346)),YPPlist(1,CHKREF(YLfunG)),YPtrue,YPint((P)1),CHKREF(YLfunG));
  fun_curry_371 = YPmet(FUNCODEREF(fun_curry_371),CHKREF(lit_347),T27,ENVNUL);
  T32 = BOUNDP(YruntimeYcurry);
  if (T32 != YPfalse) {
    T31 = CHKREF(YruntimeYcurry);
  } else {
    T31 = YPfalse;
  }
  T30 = fun_curry_371;
  T29 = CALL2(CHKREF(YPdefine_method),T31,T30);
  YruntimeYcurry = T29;
  lit_348 = YPPsym((P)"always");
  T34 = YPsig(YPPlist(1,CHKREF(lit_24)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG));
  fun_372 = YPmet(FUNCODEREF(fun_372),YPfalse,T34,ENVNUL);
  T33 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLfunG));
  fun_always_373 = YPmet(FUNCODEREF(fun_always_373),CHKREF(lit_348),T33,ENVNUL);
  T38 = BOUNDP(YruntimeYalways);
  if (T38 != YPfalse) {
    T37 = CHKREF(YruntimeYalways);
  } else {
    T37 = YPfalse;
  }
  T36 = fun_always_373;
  T35 = CALL2(CHKREF(YPdefine_method),T37,T36);
  YruntimeYalways = T35;
  lit_349 = YPPsym((P)"<condition>");
  T40 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T39 = CALL2(CHKREF(Yfab_class),CHKREF(lit_349),T40);
  YruntimeYLconditionG = T39;
  lit_350 = YPPsym((P)"default-handler");
  T41 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YruntimeYLconditionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_default_handler_374 = YPmet(FUNCODEREF(fun_default_handler_374),CHKREF(lit_350),T41,ENVNUL);
  T45 = BOUNDP(YruntimeYdefault_handler);
  if (T45 != YPfalse) {
    T44 = CHKREF(YruntimeYdefault_handler);
  } else {
    T44 = YPfalse;
  }
  T43 = fun_default_handler_374;
  T42 = CALL2(CHKREF(YPdefine_method),T44,T43);
  YruntimeYdefault_handler = T42;
  lit_351 = YPPsym((P)"describe-condition");
  lit_352 = YPsb((P)"Anonymous condition %=");
  T46 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YruntimeYLconditionG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_describe_condition_375 = YPmet(FUNCODEREF(fun_describe_condition_375),CHKREF(lit_351),T46,ENVNUL);
  T50 = BOUNDP(YruntimeYdescribe_condition);
  if (T50 != YPfalse) {
    T49 = CHKREF(YruntimeYdescribe_condition);
  } else {
    T49 = YPfalse;
  }
  T48 = fun_describe_condition_375;
  T47 = CALL2(CHKREF(YPdefine_method),T49,T48);
  YruntimeYdescribe_condition = T47;
  lit_353 = YPPsym((P)"default-handler-description");
  lit_354 = YPPsym((P)"cond-type");
  lit_355 = YPsb((P)"Anonymous handler for %s");
  T51 = YPsig(YPPlist(1,CHKREF(lit_354)),YPPlist(1,CHKREF(YruntimeYLconditionG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_default_handler_description_376 = YPmet(FUNCODEREF(fun_default_handler_description_376),CHKREF(lit_353),T51,ENVNUL);
  T55 = BOUNDP(YruntimeYdefault_handler_description);
  if (T55 != YPfalse) {
    T54 = CHKREF(YruntimeYdefault_handler_description);
  } else {
    T54 = YPfalse;
  }
  T53 = fun_default_handler_description_376;
  T52 = CALL2(CHKREF(YPdefine_method),T54,T53);
  YruntimeYdefault_handler_description = T52;
  lit_356 = YPPsym((P)"build-condition-interactively");
  lit_357 = YPPsym((P)"out");
  T56 = YPsig(YPPlist(3,CHKREF(lit_354),CHKREF(lit_154),CHKREF(lit_357)),YPPlist(3,CHKREF(YruntimeYLconditionG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YruntimeYLconditionG));
  fun_build_condition_interactively_377 = YPmet(FUNCODEREF(fun_build_condition_interactively_377),CHKREF(lit_356),T56,ENVNUL);
  T60 = BOUNDP(YruntimeYbuild_condition_interactively);
  if (T60 != YPfalse) {
    T59 = CHKREF(YruntimeYbuild_condition_interactively);
  } else {
    T59 = YPfalse;
  }
  T58 = fun_build_condition_interactively_377;
  T57 = CALL2(CHKREF(YPdefine_method),T59,T58);
  YruntimeYbuild_condition_interactively = T57;
  lit_358 = YPPsym((P)"<simple-condition>");
  T62 = (P)YPpair(CHKREF(YruntimeYLconditionG),Ynil);
  T61 = CALL2(CHKREF(Yfab_class),CHKREF(lit_358),T62);
  YruntimeYLsimple_conditionG = T61;
  lit_359 = YPPsym((P)"condition-message");
  T63 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLsimple_conditionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_condition_message_378 = YPmet(FUNCODEREF(fun_condition_message_378),CHKREF(lit_359),T63,ENVNUL);
  T67 = BOUNDP(YruntimeYcondition_message);
  if (T67 != YPfalse) {
    T66 = CHKREF(YruntimeYcondition_message);
  } else {
    T66 = YPfalse;
  }
  T65 = fun_condition_message_378;
  T64 = CALL2(CHKREF(YPdefine_method),T66,T65);
  YruntimeYcondition_message = T64;
  lit_360 = YPPsym((P)"condition-message-setter");
  T68 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLstrG),CHKREF(YruntimeYLsimple_conditionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_condition_message_setter_379 = YPmet(FUNCODEREF(fun_condition_message_setter_379),CHKREF(lit_360),T68,ENVNUL);
  T72 = BOUNDP(YruntimeYcondition_message_setter);
  if (T72 != YPfalse) {
    T71 = CHKREF(YruntimeYcondition_message_setter);
  } else {
    T71 = YPfalse;
  }
  T70 = fun_condition_message_setter_379;
  T69 = CALL2(CHKREF(YPdefine_method),T71,T70);
  YruntimeYcondition_message_setter = T69;
  T73 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_380 = YPmet(FUNCODEREF(fun_380),YPfalse,T73,ENVNUL);
  T74 = fun_380;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_conditionG),CHKREF(YruntimeYcondition_message),CHKREF(YruntimeYcondition_message_setter),CHKREF(YLstrG),T74);
  lit_361 = YPPsym((P)"condition-arguments");
  T75 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLsimple_conditionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_condition_arguments_381 = YPmet(FUNCODEREF(fun_condition_arguments_381),CHKREF(lit_361),T75,ENVNUL);
  T79 = BOUNDP(YruntimeYcondition_arguments);
  if (T79 != YPfalse) {
    T78 = CHKREF(YruntimeYcondition_arguments);
  } else {
    T78 = YPfalse;
  }
  T77 = fun_condition_arguments_381;
  T76 = CALL2(CHKREF(YPdefine_method),T78,T77);
  YruntimeYcondition_arguments = T76;
  lit_362 = YPPsym((P)"condition-arguments-setter");
  T80 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLlstG),CHKREF(YruntimeYLsimple_conditionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_condition_arguments_setter_382 = YPmet(FUNCODEREF(fun_condition_arguments_setter_382),CHKREF(lit_362),T80,ENVNUL);
  T84 = BOUNDP(YruntimeYcondition_arguments_setter);
  if (T84 != YPfalse) {
    T83 = CHKREF(YruntimeYcondition_arguments_setter);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_condition_arguments_setter_382;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  YruntimeYcondition_arguments_setter = T81;
  T85 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_383 = YPmet(FUNCODEREF(fun_383),YPfalse,T85,ENVNUL);
  T86 = fun_383;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_conditionG),CHKREF(YruntimeYcondition_arguments),CHKREF(YruntimeYcondition_arguments_setter),CHKREF(YLlstG),T86);
  T87 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YruntimeYLsimple_conditionG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_describe_condition_384 = YPmet(FUNCODEREF(fun_describe_condition_384),CHKREF(lit_351),T87,ENVNUL);
  T91 = BOUNDP(YruntimeYdescribe_condition);
  if (T91 != YPfalse) {
    T90 = CHKREF(YruntimeYdescribe_condition);
  } else {
    T90 = YPfalse;
  }
  T89 = fun_describe_condition_384;
  T88 = CALL2(CHKREF(YPdefine_method),T90,T89);
  YruntimeYdescribe_condition = T88;
  lit_363 = YPsb((P)"Condition format arguments: ");
  lit_364 = YPsb((P)"Condition format string: ");
  T92 = YPsig(YPPlist(3,CHKREF(lit_354),CHKREF(lit_154),CHKREF(lit_357)),YPPlist(3,CHKREF(YruntimeYLsimple_conditionG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YruntimeYLconditionG));
  fun_build_condition_interactively_385 = YPmet(FUNCODEREF(fun_build_condition_interactively_385),CHKREF(lit_356),T92,ENVNUL);
  T96 = BOUNDP(YruntimeYbuild_condition_interactively);
  if (T96 != YPfalse) {
    T95 = CHKREF(YruntimeYbuild_condition_interactively);
  } else {
    T95 = YPfalse;
  }
  T94 = fun_build_condition_interactively_385;
  T93 = CALL2(CHKREF(YPdefine_method),T95,T94);
  YruntimeYbuild_condition_interactively = T93;
  lit_365 = YPPsym((P)"<serious-condition>");
  T98 = (P)YPpair(CHKREF(YruntimeYLconditionG),Ynil);
  T97 = CALL2(CHKREF(Yfab_class),CHKREF(lit_365),T98);
  YruntimeYLserious_conditionG = T97;
  lit_366 = YPsb((P)"%s\n");
  T99 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YruntimeYLserious_conditionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_default_handler_386 = YPmet(FUNCODEREF(fun_default_handler_386),CHKREF(lit_350),T99,ENVNUL);
  T103 = BOUNDP(YruntimeYdefault_handler);
  if (T103 != YPfalse) {
    T102 = CHKREF(YruntimeYdefault_handler);
  } else {
    T102 = YPfalse;
  }
  T101 = fun_default_handler_386;
  T100 = CALL2(CHKREF(YPdefine_method),T102,T101);
  YruntimeYdefault_handler = T100;
  lit_367 = YPPsym((P)"<error>");
  T105 = (P)YPpair(CHKREF(YruntimeYLserious_conditionG),Ynil);
  T104 = CALL2(CHKREF(Yfab_class),CHKREF(lit_367),T105);
  YruntimeYLerrorG = T104;
  lit_368 = YPPsym((P)"<simple-error>");
  T108 = (P)YPpair(CHKREF(YruntimeYLsimple_conditionG),Ynil);
  T107 = (P)YPpair(CHKREF(YruntimeYLerrorG),T108);
  T106 = CALL2(CHKREF(Yfab_class),CHKREF(lit_368),T107);
  YruntimeYLsimple_errorG = T106;
  lit_369 = YPPsym((P)"<restart>");
  T110 = (P)YPpair(CHKREF(YruntimeYLconditionG),Ynil);
  T109 = CALL2(CHKREF(Yfab_class),CHKREF(lit_369),T110);
  YruntimeYLrestartG = T109;
  lit_370 = YPsb((P)"Anonymous restart of type %s");
  T111 = YPsig(YPPlist(1,CHKREF(lit_354)),YPPlist(1,CHKREF(YruntimeYLrestartG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_default_handler_description_387 = YPmet(FUNCODEREF(fun_default_handler_description_387),CHKREF(lit_353),T111,ENVNUL);
  T115 = BOUNDP(YruntimeYdefault_handler_description);
  if (T115 != YPfalse) {
    T114 = CHKREF(YruntimeYdefault_handler_description);
  } else {
    T114 = YPfalse;
  }
  T113 = fun_default_handler_description_387;
  T112 = CALL2(CHKREF(YPdefine_method),T114,T113);
  YruntimeYdefault_handler_description = T112;
  lit_371 = YPPsym((P)"<incongruent-method-error>");
  T117 = (P)YPpair(CHKREF(YruntimeYLerrorG),Ynil);
  T116 = CALL2(CHKREF(Yfab_class),CHKREF(lit_371),T117);
  YruntimeYLincongruent_method_errorG = T116;
  lit_372 = YPPsym((P)"incongruent-method-error-generic");
  T118 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_incongruent_method_error_generic_388 = YPmet(FUNCODEREF(fun_incongruent_method_error_generic_388),CHKREF(lit_372),T118,ENVNUL);
  T122 = BOUNDP(YruntimeYincongruent_method_error_generic);
  if (T122 != YPfalse) {
    T121 = CHKREF(YruntimeYincongruent_method_error_generic);
  } else {
    T121 = YPfalse;
  }
  T120 = fun_incongruent_method_error_generic_388;
  T119 = CALL2(CHKREF(YPdefine_method),T121,T120);
  YruntimeYincongruent_method_error_generic = T119;
  lit_373 = YPPsym((P)"incongruent-method-error-generic-setter");
  T123 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLgenG),CHKREF(YruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_incongruent_method_error_generic_setter_389 = YPmet(FUNCODEREF(fun_incongruent_method_error_generic_setter_389),CHKREF(lit_373),T123,ENVNUL);
  T127 = BOUNDP(YruntimeYincongruent_method_error_generic_setter);
  if (T127 != YPfalse) {
    T126 = CHKREF(YruntimeYincongruent_method_error_generic_setter);
  } else {
    T126 = YPfalse;
  }
  T125 = fun_incongruent_method_error_generic_setter_389;
  T124 = CALL2(CHKREF(YPdefine_method),T126,T125);
  YruntimeYincongruent_method_error_generic_setter = T124;
  T128 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_390 = YPmet(FUNCODEREF(fun_390),YPfalse,T128,ENVNUL);
  T129 = fun_390;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLincongruent_method_errorG),CHKREF(YruntimeYincongruent_method_error_generic),CHKREF(YruntimeYincongruent_method_error_generic_setter),CHKREF(YLgenG),T129);
  lit_374 = YPPsym((P)"incongruent-method-error-method");
  T130 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_incongruent_method_error_method_391 = YPmet(FUNCODEREF(fun_incongruent_method_error_method_391),CHKREF(lit_374),T130,ENVNUL);
  T134 = BOUNDP(YruntimeYincongruent_method_error_method);
  if (T134 != YPfalse) {
    T133 = CHKREF(YruntimeYincongruent_method_error_method);
  } else {
    T133 = YPfalse;
  }
  T132 = fun_incongruent_method_error_method_391;
  T131 = CALL2(CHKREF(YPdefine_method),T133,T132);
  YruntimeYincongruent_method_error_method = T131;
  lit_375 = YPPsym((P)"incongruent-method-error-method-setter");
  T135 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLmetG),CHKREF(YruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_incongruent_method_error_method_setter_392 = YPmet(FUNCODEREF(fun_incongruent_method_error_method_setter_392),CHKREF(lit_375),T135,ENVNUL);
  T139 = BOUNDP(YruntimeYincongruent_method_error_method_setter);
  if (T139 != YPfalse) {
    T138 = CHKREF(YruntimeYincongruent_method_error_method_setter);
  } else {
    T138 = YPfalse;
  }
  T137 = fun_incongruent_method_error_method_setter_392;
  T136 = CALL2(CHKREF(YPdefine_method),T138,T137);
  YruntimeYincongruent_method_error_method_setter = T136;
  T140 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_393 = YPmet(FUNCODEREF(fun_393),YPfalse,T140,ENVNUL);
  T141 = fun_393;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLincongruent_method_errorG),CHKREF(YruntimeYincongruent_method_error_method),CHKREF(YruntimeYincongruent_method_error_method_setter),CHKREF(YLmetG),T141);
  lit_376 = YPsb((P)"Method %= incongruent with generic %=.\n");
  T142 = YPsig(YPPlist(1,CHKREF(lit_52)),YPPlist(1,CHKREF(YruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_describe_condition_394 = YPmet(FUNCODEREF(fun_describe_condition_394),CHKREF(lit_351),T142,ENVNUL);
  T146 = BOUNDP(YruntimeYdescribe_condition);
  if (T146 != YPfalse) {
    T145 = CHKREF(YruntimeYdescribe_condition);
  } else {
    T145 = YPfalse;
  }
  T144 = fun_describe_condition_394;
  T143 = CALL2(CHKREF(YPdefine_method),T145,T144);
  YruntimeYdescribe_condition = T143;
  lit_377 = YPPsym((P)"<replace-generic-restart>");
  T148 = (P)YPpair(CHKREF(YruntimeYLrestartG),Ynil);
  T147 = CALL2(CHKREF(Yfab_class),CHKREF(lit_377),T148);
  YLreplace_generic_restartG = T147;
  lit_378 = YPsb((P)"Replace the generic function with an empty, congruent one");
  T149 = YPsig(YPPlist(1,CHKREF(lit_354)),YPPlist(1,CHKREF(YLreplace_generic_restartG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_default_handler_description_395 = YPmet(FUNCODEREF(fun_default_handler_description_395),CHKREF(lit_353),T149,ENVNUL);
  T153 = BOUNDP(YruntimeYdefault_handler_description);
  if (T153 != YPfalse) {
    T152 = CHKREF(YruntimeYdefault_handler_description);
  } else {
    T152 = YPfalse;
  }
  T151 = fun_default_handler_description_395;
  T150 = CALL2(CHKREF(YPdefine_method),T152,T151);
  YruntimeYdefault_handler_description = T150;
  lit_379 = YPPsym((P)"<handler-info>");
  T155 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T154 = CALL2(CHKREF(Yfab_class),CHKREF(lit_379),T155);
  YruntimeYLhandler_infoG = T154;
  lit_380 = YPPsym((P)"describe-handler");
  lit_381 = YPPsym((P)"condition-type");
  lit_382 = YPPsym((P)"info");
  T156 = YPsig(YPPlist(2,CHKREF(lit_382),CHKREF(lit_381)),YPPlist(2,CHKREF(YruntimeYLhandler_infoG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLstrG));
  fun_describe_handler_396 = YPmet(FUNCODEREF(fun_describe_handler_396),CHKREF(lit_380),T156,ENVNUL);
  T160 = BOUNDP(YruntimeYdescribe_handler);
  if (T160 != YPfalse) {
    T159 = CHKREF(YruntimeYdescribe_handler);
  } else {
    T159 = YPfalse;
  }
  T158 = fun_describe_handler_396;
  T157 = CALL2(CHKREF(YPdefine_method),T159,T158);
  YruntimeYdescribe_handler = T157;
  lit_383 = YPPsym((P)"build-condition-for-handler-interactively");
  T161 = YPsig(YPPlist(4,CHKREF(lit_382),CHKREF(lit_381),CHKREF(lit_154),CHKREF(lit_357)),YPPlist(4,CHKREF(YruntimeYLhandler_infoG),CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)4),CHKREF(YruntimeYLconditionG));
  fun_build_condition_for_handler_interactively_397 = YPmet(FUNCODEREF(fun_build_condition_for_handler_interactively_397),CHKREF(lit_383),T161,ENVNUL);
  T165 = BOUNDP(YruntimeYbuild_condition_for_handler_interactively);
  if (T165 != YPfalse) {
    T164 = CHKREF(YruntimeYbuild_condition_for_handler_interactively);
  } else {
    T164 = YPfalse;
  }
  T163 = fun_build_condition_for_handler_interactively_397;
  T162 = CALL2(CHKREF(YPdefine_method),T164,T163);
  YruntimeYbuild_condition_for_handler_interactively = T162;
  T167 = (P)YPpair(CHKREF(YruntimeYLhandler_infoG),Ynil);
  T166 = CALL3(CHKREF(YPisa),T167,Ynil,Ynil);
  YruntimeYDdefault_handler_info = T166;
  lit_384 = YPPsym((P)"<simple-handler-info>");
  T169 = (P)YPpair(CHKREF(YruntimeYLhandler_infoG),Ynil);
  T168 = CALL2(CHKREF(Yfab_class),CHKREF(lit_384),T169);
  YLsimple_handler_infoG = T168;
  lit_385 = YPPsym((P)"handler-info-message");
  T170 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YLsimple_handler_infoG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_handler_info_message_398 = YPmet(FUNCODEREF(fun_handler_info_message_398),CHKREF(lit_385),T170,ENVNUL);
  T174 = BOUNDP(Yhandler_info_message);
  if (T174 != YPfalse) {
    T173 = CHKREF(Yhandler_info_message);
  } else {
    T173 = YPfalse;
  }
  T172 = fun_handler_info_message_398;
  T171 = CALL2(CHKREF(YPdefine_method),T173,T172);
  Yhandler_info_message = T171;
  lit_386 = YPPsym((P)"handler-info-message-setter");
  T175 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsimple_handler_infoG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_handler_info_message_setter_399 = YPmet(FUNCODEREF(fun_handler_info_message_setter_399),CHKREF(lit_386),T175,ENVNUL);
  T179 = BOUNDP(YruntimeYhandler_info_message_setter);
  if (T179 != YPfalse) {
    T178 = CHKREF(YruntimeYhandler_info_message_setter);
  } else {
    T178 = YPfalse;
  }
  T177 = fun_handler_info_message_setter_399;
  T176 = CALL2(CHKREF(YPdefine_method),T178,T177);
  YruntimeYhandler_info_message_setter = T176;
  T180 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_400 = YPmet(FUNCODEREF(fun_400),YPfalse,T180,ENVNUL);
  T181 = fun_400;
  CALLN(CHKREF(YPslot),5,CHKREF(YLsimple_handler_infoG),CHKREF(Yhandler_info_message),CHKREF(YruntimeYhandler_info_message_setter),CHKREF(YLstrG),T181);
  lit_387 = YPPsym((P)"handler-info-arguments");
  T182 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YLsimple_handler_infoG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_handler_info_arguments_401 = YPmet(FUNCODEREF(fun_handler_info_arguments_401),CHKREF(lit_387),T182,ENVNUL);
  T186 = BOUNDP(Yhandler_info_arguments);
  if (T186 != YPfalse) {
    T185 = CHKREF(Yhandler_info_arguments);
  } else {
    T185 = YPfalse;
  }
  T184 = fun_handler_info_arguments_401;
  T183 = CALL2(CHKREF(YPdefine_method),T185,T184);
  Yhandler_info_arguments = T183;
  lit_388 = YPPsym((P)"handler-info-arguments-setter");
  T187 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsimple_handler_infoG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_handler_info_arguments_setter_402 = YPmet(FUNCODEREF(fun_handler_info_arguments_setter_402),CHKREF(lit_388),T187,ENVNUL);
  T191 = BOUNDP(YruntimeYhandler_info_arguments_setter);
  if (T191 != YPfalse) {
    T190 = CHKREF(YruntimeYhandler_info_arguments_setter);
  } else {
    T190 = YPfalse;
  }
  T189 = fun_handler_info_arguments_setter_402;
  T188 = CALL2(CHKREF(YPdefine_method),T190,T189);
  YruntimeYhandler_info_arguments_setter = T188;
  T192 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_403 = YPmet(FUNCODEREF(fun_403),YPfalse,T192,ENVNUL);
  T193 = fun_403;
  CALLN(CHKREF(YPslot),5,CHKREF(YLsimple_handler_infoG),CHKREF(Yhandler_info_arguments),CHKREF(YruntimeYhandler_info_arguments_setter),CHKREF(YLstrG),T193);
  T194 = YPsig(YPPlist(2,CHKREF(lit_382),CHKREF(lit_381)),YPPlist(2,CHKREF(YLsimple_handler_infoG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLstrG));
  fun_describe_handler_404 = YPmet(FUNCODEREF(fun_describe_handler_404),CHKREF(lit_380),T194,ENVNUL);
  T198 = BOUNDP(YruntimeYdescribe_handler);
  if (T198 != YPfalse) {
    T197 = CHKREF(YruntimeYdescribe_handler);
  } else {
    T197 = YPfalse;
  }
  T196 = fun_describe_handler_404;
  T195 = CALL2(CHKREF(YPdefine_method),T197,T196);
  YruntimeYdescribe_handler = T195;
  YruntimeYTcurrent_handlersT = Ynil;
  lit_389 = YPPsym((P)"<handler>");
  T200 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T199 = CALL2(CHKREF(Yfab_class),CHKREF(lit_389),T200);
  YruntimeYLhandlerG = T199;
  lit_390 = YPPsym((P)"handler-condition-type");
  T201 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_handler_condition_type_405 = YPmet(FUNCODEREF(fun_handler_condition_type_405),CHKREF(lit_390),T201,ENVNUL);
  T205 = BOUNDP(YruntimeYhandler_condition_type);
  if (T205 != YPfalse) {
    T204 = CHKREF(YruntimeYhandler_condition_type);
  } else {
    T204 = YPfalse;
  }
  T203 = fun_handler_condition_type_405;
  T202 = CALL2(CHKREF(YPdefine_method),T204,T203);
  YruntimeYhandler_condition_type = T202;
  lit_391 = YPPsym((P)"handler-condition-type-setter");
  T207 = CALL1(CHKREF(YruntimeYtL),CHKREF(YruntimeYLconditionG));
  T206 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,T207,CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_handler_condition_type_setter_406 = YPmet(FUNCODEREF(fun_handler_condition_type_setter_406),CHKREF(lit_391),T206,ENVNUL);
  T211 = BOUNDP(YruntimeYhandler_condition_type_setter);
  if (T211 != YPfalse) {
    T210 = CHKREF(YruntimeYhandler_condition_type_setter);
  } else {
    T210 = YPfalse;
  }
  T209 = fun_handler_condition_type_setter_406;
  T208 = CALL2(CHKREF(YPdefine_method),T210,T209);
  YruntimeYhandler_condition_type_setter = T208;
  T212 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_407 = YPmet(FUNCODEREF(fun_407),YPfalse,T212,ENVNUL);
  T214 = CALL1(CHKREF(YruntimeYtL),CHKREF(YruntimeYLconditionG));
  T213 = fun_407;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLhandlerG),CHKREF(YruntimeYhandler_condition_type),CHKREF(YruntimeYhandler_condition_type_setter),T214,T213);
  lit_392 = YPPsym((P)"handler-info");
  T215 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_handler_info_408 = YPmet(FUNCODEREF(fun_handler_info_408),CHKREF(lit_392),T215,ENVNUL);
  T219 = BOUNDP(YruntimeYhandler_info);
  if (T219 != YPfalse) {
    T218 = CHKREF(YruntimeYhandler_info);
  } else {
    T218 = YPfalse;
  }
  T217 = fun_handler_info_408;
  T216 = CALL2(CHKREF(YPdefine_method),T218,T217);
  YruntimeYhandler_info = T216;
  lit_393 = YPPsym((P)"handler-info-setter");
  T220 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YruntimeYLhandler_infoG),CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_handler_info_setter_409 = YPmet(FUNCODEREF(fun_handler_info_setter_409),CHKREF(lit_393),T220,ENVNUL);
  T224 = BOUNDP(YruntimeYhandler_info_setter);
  if (T224 != YPfalse) {
    T223 = CHKREF(YruntimeYhandler_info_setter);
  } else {
    T223 = YPfalse;
  }
  T222 = fun_handler_info_setter_409;
  T221 = CALL2(CHKREF(YPdefine_method),T223,T222);
  YruntimeYhandler_info_setter = T221;
  T225 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_410 = YPmet(FUNCODEREF(fun_410),YPfalse,T225,ENVNUL);
  T226 = fun_410;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLhandlerG),CHKREF(YruntimeYhandler_info),CHKREF(YruntimeYhandler_info_setter),CHKREF(YruntimeYLhandler_infoG),T226);
  lit_394 = YPPsym((P)"handler-test");
  T227 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_handler_test_411 = YPmet(FUNCODEREF(fun_handler_test_411),CHKREF(lit_394),T227,ENVNUL);
  T231 = BOUNDP(YruntimeYhandler_test);
  if (T231 != YPfalse) {
    T230 = CHKREF(YruntimeYhandler_test);
  } else {
    T230 = YPfalse;
  }
  T229 = fun_handler_test_411;
  T228 = CALL2(CHKREF(YPdefine_method),T230,T229);
  YruntimeYhandler_test = T228;
  lit_395 = YPPsym((P)"handler-test-setter");
  T232 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLfunG),CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_handler_test_setter_412 = YPmet(FUNCODEREF(fun_handler_test_setter_412),CHKREF(lit_395),T232,ENVNUL);
  T236 = BOUNDP(YruntimeYhandler_test_setter);
  if (T236 != YPfalse) {
    T235 = CHKREF(YruntimeYhandler_test_setter);
  } else {
    T235 = YPfalse;
  }
  T234 = fun_handler_test_setter_412;
  T233 = CALL2(CHKREF(YPdefine_method),T235,T234);
  YruntimeYhandler_test_setter = T233;
  T237 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_413 = YPmet(FUNCODEREF(fun_413),YPfalse,T237,ENVNUL);
  T238 = fun_413;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLhandlerG),CHKREF(YruntimeYhandler_test),CHKREF(YruntimeYhandler_test_setter),CHKREF(YLfunG),T238);
  lit_396 = YPPsym((P)"handler-function");
  T239 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_handler_function_414 = YPmet(FUNCODEREF(fun_handler_function_414),CHKREF(lit_396),T239,ENVNUL);
  T243 = BOUNDP(YruntimeYhandler_function);
  if (T243 != YPfalse) {
    T242 = CHKREF(YruntimeYhandler_function);
  } else {
    T242 = YPfalse;
  }
  T241 = fun_handler_function_414;
  T240 = CALL2(CHKREF(YPdefine_method),T242,T241);
  YruntimeYhandler_function = T240;
  lit_397 = YPPsym((P)"handler-function-setter");
  T246 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLfunG),CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  T245 = fun_handler_function_setter_415 = YPmet(FUNCODEREF(fun_handler_function_setter_415),CHKREF(lit_397),T246,ENVNUL);
  T251 = BOUNDP(YruntimeYhandler_function_setter);
  if (T251 != YPfalse) {
    T250 = CHKREF(YruntimeYhandler_function_setter);
  } else {
    T250 = YPfalse;
  }
  T249 = fun_handler_function_setter_415;
  T248 = CALL2(CHKREF(YPdefine_method),T250,T249);
  T247 = YruntimeYhandler_function_setter = T248;
  T244 = T247;
  return T244;
}

P YruntimeY___main_6___() {
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
  T0 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_416 = YPmet(FUNCODEREF(fun_416),YPfalse,T0,ENVNUL);
  T1 = fun_416;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLhandlerG),CHKREF(YruntimeYhandler_function),CHKREF(YruntimeYhandler_function_setter),CHKREF(YLfunG),T1);
  lit_398 = YPPsym((P)"make-handler");
  T3 = CALL1(CHKREF(YruntimeYtL),CHKREF(YruntimeYLconditionG));
  T2 = YPsig(YPPlist(4,CHKREF(lit_38),CHKREF(lit_382),CHKREF(lit_160),CHKREF(lit_63)),YPPlist(4,T3,CHKREF(YruntimeYLhandler_infoG),CHKREF(YLfunG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YruntimeYLhandlerG));
  YruntimeYmake_handler = YPmet(FUNCODEREF(YruntimeYmake_handler),CHKREF(lit_398),T2,ENVNUL);
  T4 = YruntimeYmake_handler;
  YruntimeYmake_handler = T4;
  lit_399 = YPPsym((P)"handler-active?");
  lit_400 = YPPsym((P)"handler");
  T5 = YPsig(YPPlist(1,CHKREF(lit_400)),YPPlist(1,CHKREF(YruntimeYLhandlerG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  YruntimeYhandler_activeQ = YPmet(FUNCODEREF(YruntimeYhandler_activeQ),CHKREF(lit_399),T5,ENVNUL);
  T6 = YruntimeYhandler_activeQ;
  YruntimeYhandler_activeQ = T6;
  lit_401 = YPPsym((P)"handler-matches?");
  lit_402 = YPPsym((P)"condition");
  T7 = YPsig(YPPlist(2,CHKREF(lit_400),CHKREF(lit_402)),YPPlist(2,CHKREF(YruntimeYLhandlerG),CHKREF(YruntimeYLconditionG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  YruntimeYhandler_matchesQ = YPmet(FUNCODEREF(YruntimeYhandler_matchesQ),CHKREF(lit_401),T7,ENVNUL);
  T8 = YruntimeYhandler_matchesQ;
  YruntimeYhandler_matchesQ = T8;
  lit_403 = YPPsym((P)"%with-monitor");
  lit_404 = YPPsym((P)"main-fun");
  lit_405 = YPPsym((P)"user-handler");
  lit_406 = YPPsym((P)"test-fun");
  lit_407 = YPPsym((P)"_unwind-exception_");
  lit_408 = YPPsym((P)"_handler-function_");
  lit_409 = YPPsym((P)"_next-handler_");
  lit_410 = YPPsym((P)"_resume_");
  T15 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_420 = YPmet(FUNCODEREF(fun_420),YPfalse,T15,ENVNUL);
  T14 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_421 = YPmet(FUNCODEREF(fun_421),YPfalse,T14,ENVNUL);
  T13 = YPsig(YPPlist(1,CHKREF(lit_410)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_422 = YPmet(FUNCODEREF(fun_422),YPfalse,T13,ENVNUL);
  T12 = YPsig(YPPlist(2,CHKREF(lit_402),CHKREF(lit_409)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_Uhandler_functionU_423 = YPmet(FUNCODEREF(fun_Uhandler_functionU_423),CHKREF(lit_408),T12,ENVNUL);
  T11 = YPsig(YPPlist(1,CHKREF(lit_407)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_424 = YPmet(FUNCODEREF(fun_424),YPfalse,T11,ENVNUL);
  T10 = CALL1(CHKREF(YruntimeYtL),CHKREF(YruntimeYLconditionG));
  T9 = YPsig(YPPlist(5,CHKREF(lit_38),CHKREF(lit_382),CHKREF(lit_406),CHKREF(lit_405),CHKREF(lit_404)),YPPlist(5,T10,CHKREF(YruntimeYLhandler_infoG),CHKREF(YLfunG),CHKREF(YLfunG),CHKREF(YLfunG)),YPfalse,YPint((P)5),CHKREF(YLanyG));
  YruntimeYPwith_monitor = YPmet(FUNCODEREF(YruntimeYPwith_monitor),CHKREF(lit_403),T9,ENVNUL);
  T16 = YruntimeYPwith_monitor;
  YruntimeYPwith_monitor = T16;
  lit_411 = YPPsym((P)"signal-handler-list");
  lit_412 = YPPsym((P)"handlers");
  T18 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_426 = YPmet(FUNCODEREF(fun_426),YPfalse,T18,ENVNUL);
  T17 = YPsig(YPPlist(2,CHKREF(lit_402),CHKREF(lit_412)),YPPlist(2,CHKREF(YruntimeYLconditionG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YruntimeYsignal_handler_list = YPmet(FUNCODEREF(YruntimeYsignal_handler_list),CHKREF(lit_411),T17,ENVNUL);
  T19 = YruntimeYsignal_handler_list;
  YruntimeYsignal_handler_list = T19;
  lit_413 = YPPsym((P)"sig");
  T20 = YPsig(YPPlist(2,CHKREF(lit_402),CHKREF(lit_24)),YPPlist(1,CHKREF(YruntimeYLconditionG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_sig_428 = YPmet(FUNCODEREF(fun_sig_428),CHKREF(lit_413),T20,ENVNUL);
  T24 = BOUNDP(YruntimeYsig);
  if (T24 != YPfalse) {
    T23 = CHKREF(YruntimeYsig);
  } else {
    T23 = YPfalse;
  }
  T22 = fun_sig_428;
  T21 = CALL2(CHKREF(YPdefine_method),T23,T22);
  YruntimeYsig = T21;
  T25 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_24)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_sig_429 = YPmet(FUNCODEREF(fun_sig_429),CHKREF(lit_413),T25,ENVNUL);
  T29 = BOUNDP(YruntimeYsig);
  if (T29 != YPfalse) {
    T28 = CHKREF(YruntimeYsig);
  } else {
    T28 = YPfalse;
  }
  T27 = fun_sig_429;
  T26 = CALL2(CHKREF(YPdefine_method),T28,T27);
  YruntimeYsig = T26;
  lit_414 = YPPsym((P)"error");
  T30 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_24)),YPPlist(1,CHKREF(YruntimeYLerrorG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_error_430 = YPmet(FUNCODEREF(fun_error_430),CHKREF(lit_414),T30,ENVNUL);
  T34 = BOUNDP(Yerror);
  if (T34 != YPfalse) {
    T33 = CHKREF(Yerror);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_error_430;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  Yerror = T31;
  T35 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_24)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_error_431 = YPmet(FUNCODEREF(fun_error_431),CHKREF(lit_414),T35,ENVNUL);
  T39 = BOUNDP(Yerror);
  if (T39 != YPfalse) {
    T38 = CHKREF(Yerror);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_error_431;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  Yerror = T36;
  lit_415 = YPPsym((P)"wrong-number-arguments-error");
  lit_416 = YPPsym((P)"fun");
  lit_417 = YPsb((P)"%= CALLED WITH %= ARGUMENTS EXPECTED %=");
  T40 = YPsig(YPPlist(2,CHKREF(lit_416),CHKREF(lit_332)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Ywrong_number_arguments_error = YPmet(FUNCODEREF(Ywrong_number_arguments_error),CHKREF(lit_415),T40,ENVNUL);
  T41 = Ywrong_number_arguments_error;
  Ywrong_number_arguments_error = T41;
  lit_418 = YPPsym((P)"unknown-function-error");
  lit_419 = YPsb((P)"UNKNOWN FUNCTION %= CALLED");
  T42 = YPsig(YPPlist(1,CHKREF(lit_416)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yunknown_function_error = YPmet(FUNCODEREF(Yunknown_function_error),CHKREF(lit_418),T42,ENVNUL);
  T43 = Yunknown_function_error;
  Yunknown_function_error = T43;
  lit_420 = YPPsym((P)"type-error");
  lit_421 = YPPsym((P)"arg");
  lit_422 = YPsb((P)"TYPE ERROR %= SHOULD BE A %=");
  T44 = YPsig(YPPlist(2,CHKREF(lit_421),CHKREF(lit_38)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Ytype_error = YPmet(FUNCODEREF(Ytype_error),CHKREF(lit_420),T44,ENVNUL);
  T45 = Ytype_error;
  Ytype_error = T45;
  lit_423 = YPPsym((P)"incongruent-method-error");
  lit_424 = YPPsym((P)"met");
  lit_425 = YPPsym((P)"gen");
  T46 = YPsig(YPPlist(2,CHKREF(lit_425),CHKREF(lit_424)),YPPlist(2,CHKREF(YLgenG),CHKREF(YLmetG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yincongruent_method_error = YPmet(FUNCODEREF(Yincongruent_method_error),CHKREF(lit_423),T46,ENVNUL);
  T47 = Yincongruent_method_error;
  Yincongruent_method_error = T47;
  lit_426 = YPPsym((P)"do-handlers-of-type");
  T50 = YPsig(YPPlist(1,CHKREF(lit_412)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_search_436 = YPmet(FUNCODEREF(fun_search_436),CHKREF(lit_108),T50,ENVNUL);
  T49 = CALL1(CHKREF(YruntimeYtL),CHKREF(YruntimeYLconditionG));
  T48 = YPsig(YPPlist(2,CHKREF(lit_38),CHKREF(lit_63)),YPPlist(2,T49,CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YruntimeYdo_handlers_of_type = YPmet(FUNCODEREF(YruntimeYdo_handlers_of_type),CHKREF(lit_426),T48,ENVNUL);
  T51 = YruntimeYdo_handlers_of_type;
  YruntimeYdo_handlers_of_type = T51;
  lit_427 = YPPsym((P)"list-handlers");
  lit_428 = YPsb((P)"%d. %s.\n");
  T54 = YPsig(YPPlist(1,CHKREF(lit_400)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_438 = YPmet(FUNCODEREF(fun_438),YPfalse,T54,ENVNUL);
  T53 = CALL1(CHKREF(YruntimeYtL),CHKREF(YruntimeYLconditionG));
  T52 = YPsig(YPPlist(2,CHKREF(lit_38),CHKREF(lit_357)),YPPlist(2,T53,CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLbufG));
  YruntimeYlist_handlers = YPmet(FUNCODEREF(YruntimeYlist_handlers),CHKREF(lit_427),T52,ENVNUL);
  T55 = YruntimeYlist_handlers;
  YruntimeYlist_handlers = T55;
  lit_429 = YPPsym((P)"invoke-handler-interactively");
  lit_430 = YPsb((P)"Handler %= is not installed");
  lit_431 = YPsb((P)"Handler %= does not match condition %=");
  T58 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_440 = YPmet(FUNCODEREF(fun_440),YPfalse,T58,ENVNUL);
  T57 = YPsig(YPPlist(1,CHKREF(lit_412)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_search_441 = YPmet(FUNCODEREF(fun_search_441),CHKREF(lit_108),T57,ENVNUL);
  T56 = YPsig(YPPlist(3,CHKREF(lit_400),CHKREF(lit_154),CHKREF(lit_357)),YPPlist(3,CHKREF(YruntimeYLhandlerG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  YruntimeYinvoke_handler_interactively = YPmet(FUNCODEREF(YruntimeYinvoke_handler_interactively),CHKREF(lit_429),T56,ENVNUL);
  T59 = YruntimeYinvoke_handler_interactively;
  YruntimeYinvoke_handler_interactively = T59;
  lit_432 = YPPsym((P)"choose-handler");
  lit_433 = YPsb((P)"No such handler %d");
  lit_434 = YPsb((P)"Please pick a handler: ");
  T61 = CALL1(CHKREF(YruntimeYtL),CHKREF(YruntimeYLconditionG));
  T60 = YPsig(YPPlist(3,CHKREF(lit_38),CHKREF(lit_154),CHKREF(lit_357)),YPPlist(3,T61,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  YruntimeYchoose_handler = YPmet(FUNCODEREF(YruntimeYchoose_handler),CHKREF(lit_432),T60,ENVNUL);
  T62 = YruntimeYchoose_handler;
  YruntimeYchoose_handler = T62;
  YTrestarts_okQT = YPtrue;
  lit_435 = YPPsym((P)"locative-value");
  T63 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLlocG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YruntimeYlocative_value = YPmet(FUNCODEREF(YruntimeYlocative_value),CHKREF(lit_435),T63,ENVNUL);
  T64 = YruntimeYlocative_value;
  YruntimeYlocative_value = T64;
  lit_436 = YPPsym((P)"locative-value-setter");
  T65 = YPsig(YPPlist(2,CHKREF(lit_180),CHKREF(lit_2)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlocG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YruntimeYlocative_value_setter = YPmet(FUNCODEREF(YruntimeYlocative_value_setter),CHKREF(lit_436),T65,ENVNUL);
  T66 = YruntimeYlocative_value_setter;
  YruntimeYlocative_value_setter = T66;
  lit_437 = YPPsym((P)"app-filename");
  T67 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  YruntimeYapp_filename = YPmet(FUNCODEREF(YruntimeYapp_filename),CHKREF(lit_437),T67,ENVNUL);
  T68 = YruntimeYapp_filename;
  YruntimeYapp_filename = T68;
  lit_438 = YPPsym((P)"app-args");
  T69 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  YruntimeYapp_args = YPmet(FUNCODEREF(YruntimeYapp_args),CHKREF(lit_438),T69,ENVNUL);
  T70 = YruntimeYapp_args;
  YruntimeYapp_args = T70;
  lit_439 = YPPsym((P)"<port>");
  T72 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T71 = CALL2(CHKREF(Yfab_class),CHKREF(lit_439),T72);
  YruntimeYLportG = T71;
  lit_440 = YPPsym((P)"port-handle");
  T73 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLportG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_port_handle_448 = YPmet(FUNCODEREF(fun_port_handle_448),CHKREF(lit_440),T73,ENVNUL);
  T77 = BOUNDP(YruntimeYport_handle);
  if (T77 != YPfalse) {
    T76 = CHKREF(YruntimeYport_handle);
  } else {
    T76 = YPfalse;
  }
  T75 = fun_port_handle_448;
  T74 = CALL2(CHKREF(YPdefine_method),T76,T75);
  YruntimeYport_handle = T74;
  lit_441 = YPPsym((P)"port-handle-setter");
  T78 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLanyG),CHKREF(YruntimeYLportG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_port_handle_setter_449 = YPmet(FUNCODEREF(fun_port_handle_setter_449),CHKREF(lit_441),T78,ENVNUL);
  T82 = BOUNDP(YruntimeYport_handle_setter);
  if (T82 != YPfalse) {
    T81 = CHKREF(YruntimeYport_handle_setter);
  } else {
    T81 = YPfalse;
  }
  T80 = fun_port_handle_setter_449;
  T79 = CALL2(CHKREF(YPdefine_method),T81,T80);
  YruntimeYport_handle_setter = T79;
  T83 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_450 = YPmet(FUNCODEREF(fun_450),YPfalse,T83,ENVNUL);
  T84 = fun_450;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLportG),CHKREF(YruntimeYport_handle),CHKREF(YruntimeYport_handle_setter),CHKREF(YLanyG),T84);
  lit_442 = YPPsym((P)"<input-port>");
  T86 = (P)YPpair(CHKREF(YruntimeYLportG),Ynil);
  T85 = CALL2(CHKREF(Yfab_class),CHKREF(lit_442),T86);
  YruntimeYLinput_portG = T85;
  lit_443 = YPPsym((P)"<output-port>");
  T88 = (P)YPpair(CHKREF(YruntimeYLportG),Ynil);
  T87 = CALL2(CHKREF(Yfab_class),CHKREF(lit_443),T88);
  YruntimeYLoutput_portG = T87;
  lit_444 = YPPsym((P)"<file-port>");
  T90 = (P)YPpair(CHKREF(YruntimeYLportG),Ynil);
  T89 = CALL2(CHKREF(Yfab_class),CHKREF(lit_444),T90);
  YruntimeYLfile_portG = T89;
  lit_445 = YPPsym((P)"<file-input-port>");
  T93 = (P)YPpair(CHKREF(YruntimeYLinput_portG),Ynil);
  T92 = (P)YPpair(CHKREF(YruntimeYLfile_portG),T93);
  T91 = CALL2(CHKREF(Yfab_class),CHKREF(lit_445),T92);
  YruntimeYLfile_input_portG = T91;
  lit_446 = YPPsym((P)"<file-output-port>");
  T96 = (P)YPpair(CHKREF(YruntimeYLoutput_portG),Ynil);
  T95 = (P)YPpair(CHKREF(YruntimeYLfile_portG),T96);
  T94 = CALL2(CHKREF(Yfab_class),CHKREF(lit_446),T95);
  YruntimeYLfile_output_portG = T94;
  lit_447 = YPPsym((P)"open-input-file");
  lit_448 = YPPsym((P)"filename");
  T97 = YPsig(YPPlist(1,CHKREF(lit_448)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YruntimeYLfile_input_portG));
  fun_open_input_file_451 = YPmet(FUNCODEREF(fun_open_input_file_451),CHKREF(lit_447),T97,ENVNUL);
  T101 = BOUNDP(YruntimeYopen_input_file);
  if (T101 != YPfalse) {
    T100 = CHKREF(YruntimeYopen_input_file);
  } else {
    T100 = YPfalse;
  }
  T99 = fun_open_input_file_451;
  T98 = CALL2(CHKREF(YPdefine_method),T100,T99);
  YruntimeYopen_input_file = T98;
  lit_449 = YPPsym((P)"file-opening-error");
  lit_450 = YPsb((P)"Cannot open file named %=");
  T102 = YPsig(YPPlist(1,CHKREF(lit_448)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_file_opening_error_452 = YPmet(FUNCODEREF(fun_file_opening_error_452),CHKREF(lit_449),T102,ENVNUL);
  T106 = BOUNDP(Yfile_opening_error);
  if (T106 != YPfalse) {
    T105 = CHKREF(Yfile_opening_error);
  } else {
    T105 = YPfalse;
  }
  T104 = fun_file_opening_error_452;
  T103 = CALL2(CHKREF(YPdefine_method),T105,T104);
  Yfile_opening_error = T103;
  lit_451 = YPPsym((P)"open-output-file");
  T107 = YPsig(YPPlist(1,CHKREF(lit_448)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YruntimeYLfile_output_portG));
  fun_open_output_file_453 = YPmet(FUNCODEREF(fun_open_output_file_453),CHKREF(lit_451),T107,ENVNUL);
  T111 = BOUNDP(YruntimeYopen_output_file);
  if (T111 != YPfalse) {
    T110 = CHKREF(YruntimeYopen_output_file);
  } else {
    T110 = YPfalse;
  }
  T109 = fun_open_output_file_453;
  T108 = CALL2(CHKREF(YPdefine_method),T110,T109);
  YruntimeYopen_output_file = T108;
  lit_452 = YPPsym((P)"close-input-port");
  lit_453 = YPPsym((P)"port");
  T112 = YPsig(YPPlist(1,CHKREF(lit_453)),YPPlist(1,CHKREF(YruntimeYLfile_input_portG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_close_input_port_454 = YPmet(FUNCODEREF(fun_close_input_port_454),CHKREF(lit_452),T112,ENVNUL);
  T116 = BOUNDP(YruntimeYclose_input_port);
  if (T116 != YPfalse) {
    T115 = CHKREF(YruntimeYclose_input_port);
  } else {
    T115 = YPfalse;
  }
  T114 = fun_close_input_port_454;
  T113 = CALL2(CHKREF(YPdefine_method),T115,T114);
  YruntimeYclose_input_port = T113;
  lit_454 = YPPsym((P)"close-output-port");
  T117 = YPsig(YPPlist(1,CHKREF(lit_453)),YPPlist(1,CHKREF(YruntimeYLfile_output_portG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_close_output_port_455 = YPmet(FUNCODEREF(fun_close_output_port_455),CHKREF(lit_454),T117,ENVNUL);
  T121 = BOUNDP(YruntimeYclose_output_port);
  if (T121 != YPfalse) {
    T120 = CHKREF(YruntimeYclose_output_port);
  } else {
    T120 = YPfalse;
  }
  T119 = fun_close_output_port_455;
  T118 = CALL2(CHKREF(YPdefine_method),T120,T119);
  YruntimeYclose_output_port = T118;
  lit_455 = YPPsym((P)"call-with-input-file");
  lit_456 = YPPsym((P)"proc");
  T124 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_456 = YPmet(FUNCODEREF(fun_456),YPfalse,T124,ENVNUL);
  T123 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_457 = YPmet(FUNCODEREF(fun_457),YPfalse,T123,ENVNUL);
  T122 = YPsig(YPPlist(2,CHKREF(lit_87),CHKREF(lit_456)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_call_with_input_file_458 = YPmet(FUNCODEREF(fun_call_with_input_file_458),CHKREF(lit_455),T122,ENVNUL);
  T128 = BOUNDP(YruntimeYcall_with_input_file);
  if (T128 != YPfalse) {
    T127 = CHKREF(YruntimeYcall_with_input_file);
  } else {
    T127 = YPfalse;
  }
  T126 = fun_call_with_input_file_458;
  T125 = CALL2(CHKREF(YPdefine_method),T127,T126);
  YruntimeYcall_with_input_file = T125;
  lit_457 = YPPsym((P)"call-with-output-file");
  T131 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_459 = YPmet(FUNCODEREF(fun_459),YPfalse,T131,ENVNUL);
  T130 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_460 = YPmet(FUNCODEREF(fun_460),YPfalse,T130,ENVNUL);
  T129 = YPsig(YPPlist(2,CHKREF(lit_87),CHKREF(lit_456)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_call_with_output_file_461 = YPmet(FUNCODEREF(fun_call_with_output_file_461),CHKREF(lit_457),T129,ENVNUL);
  T135 = BOUNDP(YruntimeYcall_with_output_file);
  if (T135 != YPfalse) {
    T134 = CHKREF(YruntimeYcall_with_output_file);
  } else {
    T134 = YPfalse;
  }
  T133 = fun_call_with_output_file_461;
  T132 = CALL2(CHKREF(YPdefine_method),T134,T133);
  YruntimeYcall_with_output_file = T132;
  T140 = (P)YPpair(CHKREF(YruntimeYLfile_input_portG),Ynil);
  T139 = (P)YPpair(CHKREF(YruntimeYport_handle),Ynil);
  T138 = (P)YPcurrent_input_port();
  T137 = (P)YPpair(T138,Ynil);
  T136 = CALL3(CHKREF(YPisa),T140,T139,T137);
  YruntimeYin = T136;
  T145 = (P)YPpair(CHKREF(YruntimeYLfile_output_portG),Ynil);
  T144 = (P)YPpair(CHKREF(YruntimeYport_handle),Ynil);
  T143 = (P)YPcurrent_output_port();
  T142 = (P)YPpair(T143,Ynil);
  T141 = CALL3(CHKREF(YPisa),T145,T144,T142);
  YruntimeYout = T141;
  lit_458 = YPPsym((P)"eof-object?");
  T146 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_eof_objectQ_462 = YPmet(FUNCODEREF(fun_eof_objectQ_462),CHKREF(lit_458),T146,ENVNUL);
  T150 = BOUNDP(YruntimeYeof_objectQ);
  if (T150 != YPfalse) {
    T149 = CHKREF(YruntimeYeof_objectQ);
  } else {
    T149 = YPfalse;
  }
  T148 = fun_eof_objectQ_462;
  T147 = CALL2(CHKREF(YPdefine_method),T149,T148);
  YruntimeYeof_objectQ = T147;
  T151 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_eof_objectQ_463 = YPmet(FUNCODEREF(fun_eof_objectQ_463),CHKREF(lit_458),T151,ENVNUL);
  T155 = BOUNDP(YruntimeYeof_objectQ);
  if (T155 != YPfalse) {
    T154 = CHKREF(YruntimeYeof_objectQ);
  } else {
    T154 = YPfalse;
  }
  T153 = fun_eof_objectQ_463;
  T152 = CALL2(CHKREF(YPdefine_method),T154,T153);
  YruntimeYeof_objectQ = T152;
  lit_459 = YPPsym((P)"eof-object");
  T156 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLchrG));
  fun_eof_object_464 = YPmet(FUNCODEREF(fun_eof_object_464),CHKREF(lit_459),T156,ENVNUL);
  T160 = BOUNDP(YruntimeYeof_object);
  if (T160 != YPfalse) {
    T159 = CHKREF(YruntimeYeof_object);
  } else {
    T159 = YPfalse;
  }
  T158 = fun_eof_object_464;
  T157 = CALL2(CHKREF(YPdefine_method),T159,T158);
  YruntimeYeof_object = T157;
  lit_460 = YPPsym((P)"read-char");
  T161 = YPsig(YPPlist(1,CHKREF(lit_453)),YPPlist(1,CHKREF(YruntimeYLfile_input_portG)),YPfalse,YPint((P)1),CHKREF(YLchrG));
  fun_read_char_465 = YPmet(FUNCODEREF(fun_read_char_465),CHKREF(lit_460),T161,ENVNUL);
  T165 = BOUNDP(YruntimeYread_char);
  if (T165 != YPfalse) {
    T164 = CHKREF(YruntimeYread_char);
  } else {
    T164 = YPfalse;
  }
  T163 = fun_read_char_465;
  T162 = CALL2(CHKREF(YPdefine_method),T164,T163);
  YruntimeYread_char = T162;
  lit_461 = YPPsym((P)"peek-char");
  T166 = YPsig(YPPlist(1,CHKREF(lit_453)),YPPlist(1,CHKREF(YruntimeYLfile_input_portG)),YPfalse,YPint((P)1),CHKREF(YLchrG));
  fun_peek_char_466 = YPmet(FUNCODEREF(fun_peek_char_466),CHKREF(lit_461),T166,ENVNUL);
  T170 = BOUNDP(YruntimeYpeek_char);
  if (T170 != YPfalse) {
    T169 = CHKREF(YruntimeYpeek_char);
  } else {
    T169 = YPfalse;
  }
  T168 = fun_peek_char_466;
  T167 = CALL2(CHKREF(YPdefine_method),T169,T168);
  YruntimeYpeek_char = T167;
  lit_462 = YPPsym((P)"char-ready?");
  T171 = YPsig(YPPlist(1,CHKREF(lit_453)),YPPlist(1,CHKREF(YruntimeYLfile_input_portG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_char_readyQ_467 = YPmet(FUNCODEREF(fun_char_readyQ_467),CHKREF(lit_462),T171,ENVNUL);
  T175 = BOUNDP(YruntimeYchar_readyQ);
  if (T175 != YPfalse) {
    T174 = CHKREF(YruntimeYchar_readyQ);
  } else {
    T174 = YPfalse;
  }
  T173 = fun_char_readyQ_467;
  T172 = CALL2(CHKREF(YPdefine_method),T174,T173);
  YruntimeYchar_readyQ = T172;
  lit_463 = YPPsym((P)"newline");
  T176 = YPsig(YPPlist(1,CHKREF(lit_453)),YPPlist(1,CHKREF(YruntimeYLoutput_portG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_newline_468 = YPmet(FUNCODEREF(fun_newline_468),CHKREF(lit_463),T176,ENVNUL);
  T180 = BOUNDP(YruntimeYnewline);
  if (T180 != YPfalse) {
    T179 = CHKREF(YruntimeYnewline);
  } else {
    T179 = YPfalse;
  }
  T178 = fun_newline_468;
  T177 = CALL2(CHKREF(YPdefine_method),T179,T178);
  YruntimeYnewline = T177;
  lit_464 = YPPsym((P)"force-output");
  T181 = YPsig(YPPlist(1,CHKREF(lit_453)),YPPlist(1,CHKREF(YruntimeYLfile_output_portG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_force_output_469 = YPmet(FUNCODEREF(fun_force_output_469),CHKREF(lit_464),T181,ENVNUL);
  T185 = BOUNDP(YruntimeYforce_output);
  if (T185 != YPfalse) {
    T184 = CHKREF(YruntimeYforce_output);
  } else {
    T184 = YPfalse;
  }
  T183 = fun_force_output_469;
  T182 = CALL2(CHKREF(YPdefine_method),T184,T183);
  YruntimeYforce_output = T182;
  lit_465 = YPPsym((P)"write-char");
  T186 = YPsig(YPPlist(2,CHKREF(lit_453),CHKREF(lit_52)),YPPlist(2,CHKREF(YruntimeYLfile_output_portG),CHKREF(YLchrG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_write_char_470 = YPmet(FUNCODEREF(fun_write_char_470),CHKREF(lit_465),T186,ENVNUL);
  T190 = BOUNDP(YruntimeYwrite_char);
  if (T190 != YPfalse) {
    T189 = CHKREF(YruntimeYwrite_char);
  } else {
    T189 = YPfalse;
  }
  T188 = fun_write_char_470;
  T187 = CALL2(CHKREF(YPdefine_method),T189,T188);
  YruntimeYwrite_char = T187;
  lit_466 = YPPsym((P)"write-string");
  T191 = YPsig(YPPlist(2,CHKREF(lit_453),CHKREF(lit_141)),YPPlist(2,CHKREF(YruntimeYLfile_output_portG),CHKREF(YLstrG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_write_string_471 = YPmet(FUNCODEREF(fun_write_string_471),CHKREF(lit_466),T191,ENVNUL);
  T195 = BOUNDP(YruntimeYwrite_string);
  if (T195 != YPfalse) {
    T194 = CHKREF(YruntimeYwrite_string);
  } else {
    T194 = YPfalse;
  }
  T193 = fun_write_string_471;
  T192 = CALL2(CHKREF(YPdefine_method),T194,T193);
  YruntimeYwrite_string = T192;
  lit_467 = YPPsym((P)"<string-port>");
  T197 = (P)YPpair(CHKREF(YruntimeYLportG),Ynil);
  T196 = CALL2(CHKREF(Yfab_class),CHKREF(lit_467),T197);
  YruntimeYLstring_portG = T196;
  lit_468 = YPPsym((P)"port-guts");
  T198 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLstring_portG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_port_guts_472 = YPmet(FUNCODEREF(fun_port_guts_472),CHKREF(lit_468),T198,ENVNUL);
  T202 = BOUNDP(YruntimeYport_guts);
  if (T202 != YPfalse) {
    T201 = CHKREF(YruntimeYport_guts);
  } else {
    T201 = YPfalse;
  }
  T200 = fun_port_guts_472;
  T199 = CALL2(CHKREF(YPdefine_method),T201,T200);
  YruntimeYport_guts = T199;
  lit_469 = YPPsym((P)"port-guts-setter");
  T203 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLseqG),CHKREF(YruntimeYLstring_portG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_port_guts_setter_473 = YPmet(FUNCODEREF(fun_port_guts_setter_473),CHKREF(lit_469),T203,ENVNUL);
  T207 = BOUNDP(YruntimeYport_guts_setter);
  if (T207 != YPfalse) {
    T206 = CHKREF(YruntimeYport_guts_setter);
  } else {
    T206 = YPfalse;
  }
  T205 = fun_port_guts_setter_473;
  T204 = CALL2(CHKREF(YPdefine_method),T206,T205);
  YruntimeYport_guts_setter = T204;
  T208 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_474 = YPmet(FUNCODEREF(fun_474),YPfalse,T208,ENVNUL);
  T209 = fun_474;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLstring_portG),CHKREF(YruntimeYport_guts),CHKREF(YruntimeYport_guts_setter),CHKREF(YLseqG),T209);
  lit_470 = YPPsym((P)"port-contents");
  T210 = YPsig(YPPlist(1,CHKREF(lit_453)),YPPlist(1,CHKREF(YruntimeYLstring_portG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_port_contents_475 = YPmet(FUNCODEREF(fun_port_contents_475),CHKREF(lit_470),T210,ENVNUL);
  T214 = BOUNDP(YruntimeYport_contents);
  if (T214 != YPfalse) {
    T213 = CHKREF(YruntimeYport_contents);
  } else {
    T213 = YPfalse;
  }
  T212 = fun_port_contents_475;
  T211 = CALL2(CHKREF(YPdefine_method),T213,T212);
  YruntimeYport_contents = T211;
  lit_471 = YPPsym((P)"<string-input-port>");
  T217 = (P)YPpair(CHKREF(YruntimeYLinput_portG),Ynil);
  T216 = (P)YPpair(CHKREF(YruntimeYLstring_portG),T217);
  T215 = CALL2(CHKREF(Yfab_class),CHKREF(lit_471),T216);
  YruntimeYLstring_input_portG = T215;
  lit_472 = YPPsym((P)"port-index");
  T218 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLstring_input_portG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_port_index_476 = YPmet(FUNCODEREF(fun_port_index_476),CHKREF(lit_472),T218,ENVNUL);
  T222 = BOUNDP(YruntimeYport_index);
  if (T222 != YPfalse) {
    T221 = CHKREF(YruntimeYport_index);
  } else {
    T221 = YPfalse;
  }
  T220 = fun_port_index_476;
  T219 = CALL2(CHKREF(YPdefine_method),T221,T220);
  YruntimeYport_index = T219;
  lit_473 = YPPsym((P)"port-index-setter");
  T223 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLstring_input_portG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_port_index_setter_477 = YPmet(FUNCODEREF(fun_port_index_setter_477),CHKREF(lit_473),T223,ENVNUL);
  T227 = BOUNDP(YruntimeYport_index_setter);
  if (T227 != YPfalse) {
    T226 = CHKREF(YruntimeYport_index_setter);
  } else {
    T226 = YPfalse;
  }
  T225 = fun_port_index_setter_477;
  T224 = CALL2(CHKREF(YPdefine_method),T226,T225);
  YruntimeYport_index_setter = T224;
  T228 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_478 = YPmet(FUNCODEREF(fun_478),YPfalse,T228,ENVNUL);
  T229 = fun_478;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLstring_input_portG),CHKREF(YruntimeYport_index),CHKREF(YruntimeYport_index_setter),CHKREF(YLintG),T229);
  lit_474 = YPPsym((P)"<string-output-port>");
  T232 = (P)YPpair(CHKREF(YruntimeYLoutput_portG),Ynil);
  T231 = (P)YPpair(CHKREF(YruntimeYLstring_portG),T232);
  T230 = CALL2(CHKREF(Yfab_class),CHKREF(lit_474),T231);
  YruntimeYLstring_output_portG = T230;
  lit_475 = YPPsym((P)"call-with-string-input-port");
  T233 = YPsig(YPPlist(2,CHKREF(lit_87),CHKREF(lit_456)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_call_with_string_input_port_479 = YPmet(FUNCODEREF(fun_call_with_string_input_port_479),CHKREF(lit_475),T233,ENVNUL);
  T237 = BOUNDP(YruntimeYcall_with_string_input_port);
  if (T237 != YPfalse) {
    T236 = CHKREF(YruntimeYcall_with_string_input_port);
  } else {
    T236 = YPfalse;
  }
  T235 = fun_call_with_string_input_port_479;
  T234 = CALL2(CHKREF(YPdefine_method),T236,T235);
  YruntimeYcall_with_string_input_port = T234;
  lit_476 = YPPsym((P)"call-with-string-output-port");
  T240 = YPsig(YPPlist(1,CHKREF(lit_456)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T239 = fun_call_with_string_output_port_480 = YPmet(FUNCODEREF(fun_call_with_string_output_port_480),CHKREF(lit_476),T240,ENVNUL);
  T245 = BOUNDP(YruntimeYcall_with_string_output_port);
  if (T245 != YPfalse) {
    T244 = CHKREF(YruntimeYcall_with_string_output_port);
  } else {
    T244 = YPfalse;
  }
  T243 = fun_call_with_string_output_port_480;
  T242 = CALL2(CHKREF(YPdefine_method),T244,T243);
  T241 = YruntimeYcall_with_string_output_port = T242;
  T238 = T241;
  return T238;
}

P YruntimeY___main_7___() {
  P T264,T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249;
  P T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233;
  P T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217;
  P T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201;
  P T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185;
  P T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169;
  P T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153;
  P T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137;
  P T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121;
  P T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105;
  P T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89;
  P T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73;
  P T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57;
  P T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(1,CHKREF(lit_453)),YPPlist(1,CHKREF(YruntimeYLstring_input_portG)),YPfalse,YPint((P)1),CHKREF(YLchrG));
  fun_peek_char_481 = YPmet(FUNCODEREF(fun_peek_char_481),CHKREF(lit_461),T0,ENVNUL);
  T4 = BOUNDP(YruntimeYpeek_char);
  if (T4 != YPfalse) {
    T3 = CHKREF(YruntimeYpeek_char);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_peek_char_481;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YruntimeYpeek_char = T1;
  T5 = YPsig(YPPlist(1,CHKREF(lit_453)),YPPlist(1,CHKREF(YruntimeYLstring_input_portG)),YPfalse,YPint((P)1),CHKREF(YLchrG));
  fun_read_char_482 = YPmet(FUNCODEREF(fun_read_char_482),CHKREF(lit_460),T5,ENVNUL);
  T9 = BOUNDP(YruntimeYread_char);
  if (T9 != YPfalse) {
    T8 = CHKREF(YruntimeYread_char);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_read_char_482;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YruntimeYread_char = T6;
  T10 = YPsig(YPPlist(1,CHKREF(lit_453)),YPPlist(1,CHKREF(YruntimeYLstring_input_portG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_char_readyQ_483 = YPmet(FUNCODEREF(fun_char_readyQ_483),CHKREF(lit_462),T10,ENVNUL);
  T14 = BOUNDP(YruntimeYchar_readyQ);
  if (T14 != YPfalse) {
    T13 = CHKREF(YruntimeYchar_readyQ);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_char_readyQ_483;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  YruntimeYchar_readyQ = T11;
  T15 = YPsig(YPPlist(2,CHKREF(lit_453),CHKREF(lit_52)),YPPlist(2,CHKREF(YruntimeYLstring_output_portG),CHKREF(YLchrG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_write_char_484 = YPmet(FUNCODEREF(fun_write_char_484),CHKREF(lit_465),T15,ENVNUL);
  T19 = BOUNDP(YruntimeYwrite_char);
  if (T19 != YPfalse) {
    T18 = CHKREF(YruntimeYwrite_char);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_write_char_484;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  YruntimeYwrite_char = T16;
  T20 = YPsig(YPPlist(2,CHKREF(lit_453),CHKREF(lit_141)),YPPlist(2,CHKREF(YruntimeYLstring_output_portG),CHKREF(YLstrG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_write_string_485 = YPmet(FUNCODEREF(fun_write_string_485),CHKREF(lit_466),T20,ENVNUL);
  T24 = BOUNDP(YruntimeYwrite_string);
  if (T24 != YPfalse) {
    T23 = CHKREF(YruntimeYwrite_string);
  } else {
    T23 = YPfalse;
  }
  T22 = fun_write_string_485;
  T21 = CALL2(CHKREF(YPdefine_method),T23,T22);
  YruntimeYwrite_string = T21;
  lit_477 = YPPlist(275,YPint((P)3),YPint((P)5),YPint((P)11),YPint((P)17),YPint((P)29),YPint((P)41),YPint((P)47),YPint((P)59),YPint((P)71),YPint((P)101),YPint((P)107),YPint((P)137),YPint((P)149),YPint((P)167),YPint((P)179),YPint((P)191),YPint((P)197),YPint((P)227),YPint((P)239),YPint((P)269),YPint((P)281),YPint((P)311),YPint((P)347),YPint((P)419),YPint((P)431),YPint((P)461),YPint((P)521),YPint((P)569),YPint((P)599),YPint((P)617),YPint((P)641),YPint((P)659),YPint((P)809),YPint((P)839),YPint((P)881),YPint((P)1019),YPint((P)1049),YPint((P)1091),YPint((P)1151),YPint((P)1229),YPint((P)1277),YPint((P)1319),YPint((P)1367),YPint((P)1427),YPint((P)1481),YPint((P)1607),YPint((P)1667),YPint((P)1721),YPint((P)1787),YPint((P)1871),YPint((P)1931),YPint((P)1997),YPint((P)2081),YPint((P)2141),YPint((P)2207),YPint((P)2267),YPint((P)2339),YPint((P)2549),YPint((P)2657),YPint((P)2729),YPint((P)2801),YPint((P)2969),YPint((P)3119),YPint((P)3251),YPint((P)3359),YPint((P)3461),YPint((P)3557),YPint((P)3671),YPint((P)3767),YPint((P)3917),YPint((P)4019),YPint((P)4127),YPint((P)4241),YPint((P)4421),YPint((P)4547),YPint((P)4721),YPint((P)4931),YPint((P)5099),YPint((P)5231),YPint((P)5417),YPint((P)5639),YPint((P)5849),YPint((P)6089),YPint((P)6269),YPint((P)6449),YPint((P)6659),YPint((P)6827),YPint((P)7127),YPint((P)7307),YPint((P)7547),YPint((P)7757),YPint((P)8009),YPint((P)8219),YPint((P)8429),YPint((P)8819),YPint((P)9041),YPint((P)9281),YPint((P)9629),YPint((P)9929),YPint((P)10271),YPint((P)10529),YPint((P)10859),YPint((P)11159),YPint((P)11447),YPint((P)11777),YPint((P)12107),YPint((P)12539),YPint((P)12917),YPint((P)13337),YPint((P)13679),YPint((P)14081),YPint((P)14447),YPint((P)14867),YPint((P)15269),YPint((P)15731),YPint((P)16139),YPint((P)16631),YPint((P)17189),YPint((P)17657),YPint((P)18119),YPint((P)18911),YPint((P)19421),YPint((P)19961),YPint((P)20477),YPint((P)21011),YPint((P)21557),YPint((P)22109),YPint((P)22697),YPint((P)23291),YPint((P)23909),YPint((P)24917),YPint((P)25577),YPint((P)26249),YPint((P)26951),YPint((P)27689),YPint((P)28409),YPint((P)29129),YPint((P)29879),YPint((P)30839),YPint((P)31721),YPint((P)32531),YPint((P)33347),YPint((P)34211),YPint((P)35081),YPint((P)36011),YPint((P)36929),YPint((P)37991),YPint((P)39041),YPint((P)40037),YPint((P)41141),YPint((P)42179),YPint((P)43319),YPint((P)44531),YPint((P)45821),YPint((P)47057),YPint((P)48311),YPint((P)49529),YPint((P)50891),YPint((P)52181),YPint((P)53549),YPint((P)54917),YPint((P)56477),YPint((P)57899),YPint((P)59357),YPint((P)60887),YPint((P)62927),YPint((P)64577),YPint((P)66359),YPint((P)68111),YPint((P)69827),YPint((P)71711),YPint((P)73607),YPint((P)75539),YPint((P)77477),YPint((P)79559),YPint((P)81551),YPint((P)83639),YPint((P)85817),YPint((P)88001),YPint((P)90371),YPint((P)92639),YPint((P)95087),YPint((P)97499),YPint((P)99989),YPint((P)102497),YPint((P)105227),YPint((P)108011),YPint((P)110729),YPint((P)113537),YPint((P)116531),YPint((P)119549),YPint((P)122597),YPint((P)125789),YPint((P)128939),YPint((P)132329),YPint((P)135647),YPint((P)139121),YPint((P)142607),YPint((P)146297),YPint((P)149969),YPint((P)153887),YPint((P)157769),YPint((P)161729),YPint((P)166301),YPint((P)170537),YPint((P)174929),YPint((P)179381),YPint((P)183917),YPint((P)188831),YPint((P)193601),YPint((P)198461),YPint((P)203429),YPint((P)208589),YPint((P)213947),YPint((P)219311),YPint((P)224909),YPint((P)230561),YPint((P)236477),YPint((P)242447),YPint((P)248639),YPint((P)254927),YPint((P)261431),YPint((P)268517),YPint((P)275321),YPint((P)282239),YPint((P)289841),YPint((P)297467),YPint((P)304979),YPint((P)312617),YPint((P)320561),YPint((P)328589),YPint((P)336827),YPint((P)345461),YPint((P)354251),YPint((P)363149),YPint((P)372269),YPint((P)381629),YPint((P)391217),YPint((P)401309),YPint((P)411527),YPint((P)422087),YPint((P)432659),YPint((P)443561),YPint((P)454709),YPint((P)466181),YPint((P)478067),YPint((P)490031),YPint((P)502499),YPint((P)515087),YPint((P)527981),YPint((P)541361),YPint((P)555041),YPint((P)569081),YPint((P)583337),YPint((P)598049),YPint((P)613007),YPint((P)628679),YPint((P)644489),YPint((P)660617),YPint((P)677231),YPint((P)694259),YPint((P)711707),YPint((P)729557),YPint((P)747827),YPint((P)766541),YPint((P)785777),YPint((P)805499),YPint((P)825827),YPint((P)846749),YPint((P)868121),YPint((P)889871),YPint((P)912449),YPint((P)935591),YPint((P)959207),YPint((P)983327));
  T25 = CALL2(CHKREF(YruntimeYas),CHKREF(YLvecG),CHKREF(lit_477));
  YruntimeYTtwin_primesT = T25;
  lit_478 = YPPsym((P)"<simple-table-vector>");
  T27 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T26 = CALL2(CHKREF(Yfab_class),CHKREF(lit_478),T27);
  YruntimeYLsimple_table_vectorG = T26;
  lit_479 = YPPsym((P)"%vacated");
  T28 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_Pvacated_486 = YPmet(FUNCODEREF(fun_Pvacated_486),CHKREF(lit_479),T28,ENVNUL);
  T32 = BOUNDP(YruntimeYPvacated);
  if (T32 != YPfalse) {
    T31 = CHKREF(YruntimeYPvacated);
  } else {
    T31 = YPfalse;
  }
  T30 = fun_Pvacated_486;
  T29 = CALL2(CHKREF(YPdefine_method),T31,T30);
  YruntimeYPvacated = T29;
  lit_480 = YPPsym((P)"%vacated-setter");
  T33 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_Pvacated_setter_487 = YPmet(FUNCODEREF(fun_Pvacated_setter_487),CHKREF(lit_480),T33,ENVNUL);
  T37 = BOUNDP(YruntimeYPvacated_setter);
  if (T37 != YPfalse) {
    T36 = CHKREF(YruntimeYPvacated_setter);
  } else {
    T36 = YPfalse;
  }
  T35 = fun_Pvacated_setter_487;
  T34 = CALL2(CHKREF(YPdefine_method),T36,T35);
  YruntimeYPvacated_setter = T34;
  T38 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_488 = YPmet(FUNCODEREF(fun_488),YPfalse,T38,ENVNUL);
  T39 = fun_488;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYPvacated),CHKREF(YruntimeYPvacated_setter),CHKREF(YLintG),T39);
  lit_481 = YPPsym((P)"%primary-modulus");
  T40 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_Pprimary_modulus_489 = YPmet(FUNCODEREF(fun_Pprimary_modulus_489),CHKREF(lit_481),T40,ENVNUL);
  T44 = BOUNDP(YruntimeYPprimary_modulus);
  if (T44 != YPfalse) {
    T43 = CHKREF(YruntimeYPprimary_modulus);
  } else {
    T43 = YPfalse;
  }
  T42 = fun_Pprimary_modulus_489;
  T41 = CALL2(CHKREF(YPdefine_method),T43,T42);
  YruntimeYPprimary_modulus = T41;
  lit_482 = YPPsym((P)"%primary-modulus-setter");
  T45 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_Pprimary_modulus_setter_490 = YPmet(FUNCODEREF(fun_Pprimary_modulus_setter_490),CHKREF(lit_482),T45,ENVNUL);
  T49 = BOUNDP(YruntimeYPprimary_modulus_setter);
  if (T49 != YPfalse) {
    T48 = CHKREF(YruntimeYPprimary_modulus_setter);
  } else {
    T48 = YPfalse;
  }
  T47 = fun_Pprimary_modulus_setter_490;
  T46 = CALL2(CHKREF(YPdefine_method),T48,T47);
  YruntimeYPprimary_modulus_setter = T46;
  T50 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_491 = YPmet(FUNCODEREF(fun_491),YPfalse,T50,ENVNUL);
  T51 = fun_491;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYPprimary_modulus),CHKREF(YruntimeYPprimary_modulus_setter),CHKREF(YLintG),T51);
  lit_483 = YPPsym((P)"%secondary-modulus");
  T52 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_Psecondary_modulus_492 = YPmet(FUNCODEREF(fun_Psecondary_modulus_492),CHKREF(lit_483),T52,ENVNUL);
  T56 = BOUNDP(YruntimeYPsecondary_modulus);
  if (T56 != YPfalse) {
    T55 = CHKREF(YruntimeYPsecondary_modulus);
  } else {
    T55 = YPfalse;
  }
  T54 = fun_Psecondary_modulus_492;
  T53 = CALL2(CHKREF(YPdefine_method),T55,T54);
  YruntimeYPsecondary_modulus = T53;
  lit_484 = YPPsym((P)"%secondary-modulus-setter");
  T57 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_Psecondary_modulus_setter_493 = YPmet(FUNCODEREF(fun_Psecondary_modulus_setter_493),CHKREF(lit_484),T57,ENVNUL);
  T61 = BOUNDP(YruntimeYPsecondary_modulus_setter);
  if (T61 != YPfalse) {
    T60 = CHKREF(YruntimeYPsecondary_modulus_setter);
  } else {
    T60 = YPfalse;
  }
  T59 = fun_Psecondary_modulus_setter_493;
  T58 = CALL2(CHKREF(YPdefine_method),T60,T59);
  YruntimeYPsecondary_modulus_setter = T58;
  T62 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_494 = YPmet(FUNCODEREF(fun_494),YPfalse,T62,ENVNUL);
  T63 = fun_494;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYPsecondary_modulus),CHKREF(YruntimeYPsecondary_modulus_setter),CHKREF(YLintG),T63);
  lit_485 = YPPsym((P)"%n-buckets");
  T64 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_Pn_buckets_495 = YPmet(FUNCODEREF(fun_Pn_buckets_495),CHKREF(lit_485),T64,ENVNUL);
  T68 = BOUNDP(YruntimeYPn_buckets);
  if (T68 != YPfalse) {
    T67 = CHKREF(YruntimeYPn_buckets);
  } else {
    T67 = YPfalse;
  }
  T66 = fun_Pn_buckets_495;
  T65 = CALL2(CHKREF(YPdefine_method),T67,T66);
  YruntimeYPn_buckets = T65;
  lit_486 = YPPsym((P)"%n-buckets-setter");
  T69 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_Pn_buckets_setter_496 = YPmet(FUNCODEREF(fun_Pn_buckets_setter_496),CHKREF(lit_486),T69,ENVNUL);
  T73 = BOUNDP(YruntimeYPn_buckets_setter);
  if (T73 != YPfalse) {
    T72 = CHKREF(YruntimeYPn_buckets_setter);
  } else {
    T72 = YPfalse;
  }
  T71 = fun_Pn_buckets_setter_496;
  T70 = CALL2(CHKREF(YPdefine_method),T72,T71);
  YruntimeYPn_buckets_setter = T70;
  T74 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_497 = YPmet(FUNCODEREF(fun_497),YPfalse,T74,ENVNUL);
  T75 = fun_497;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYPn_buckets),CHKREF(YruntimeYPn_buckets_setter),CHKREF(YLintG),T75);
  lit_487 = YPPsym((P)"%bucket-depth");
  T76 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_Pbucket_depth_498 = YPmet(FUNCODEREF(fun_Pbucket_depth_498),CHKREF(lit_487),T76,ENVNUL);
  T80 = BOUNDP(YruntimeYPbucket_depth);
  if (T80 != YPfalse) {
    T79 = CHKREF(YruntimeYPbucket_depth);
  } else {
    T79 = YPfalse;
  }
  T78 = fun_Pbucket_depth_498;
  T77 = CALL2(CHKREF(YPdefine_method),T79,T78);
  YruntimeYPbucket_depth = T77;
  lit_488 = YPPsym((P)"%bucket-depth-setter");
  T81 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_Pbucket_depth_setter_499 = YPmet(FUNCODEREF(fun_Pbucket_depth_setter_499),CHKREF(lit_488),T81,ENVNUL);
  T85 = BOUNDP(YruntimeYPbucket_depth_setter);
  if (T85 != YPfalse) {
    T84 = CHKREF(YruntimeYPbucket_depth_setter);
  } else {
    T84 = YPfalse;
  }
  T83 = fun_Pbucket_depth_setter_499;
  T82 = CALL2(CHKREF(YPdefine_method),T84,T83);
  YruntimeYPbucket_depth_setter = T82;
  T86 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_500 = YPmet(FUNCODEREF(fun_500),YPfalse,T86,ENVNUL);
  T87 = fun_500;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYPbucket_depth),CHKREF(YruntimeYPbucket_depth_setter),CHKREF(YLintG),T87);
  lit_489 = YPPsym((P)"%data");
  T88 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_Pdata_501 = YPmet(FUNCODEREF(fun_Pdata_501),CHKREF(lit_489),T88,ENVNUL);
  T92 = BOUNDP(YruntimeYPdata);
  if (T92 != YPfalse) {
    T91 = CHKREF(YruntimeYPdata);
  } else {
    T91 = YPfalse;
  }
  T90 = fun_Pdata_501;
  T89 = CALL2(CHKREF(YPdefine_method),T91,T90);
  YruntimeYPdata = T89;
  lit_490 = YPPsym((P)"%data-setter");
  T93 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLvecG),CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_Pdata_setter_502 = YPmet(FUNCODEREF(fun_Pdata_setter_502),CHKREF(lit_490),T93,ENVNUL);
  T97 = BOUNDP(YruntimeYPdata_setter);
  if (T97 != YPfalse) {
    T96 = CHKREF(YruntimeYPdata_setter);
  } else {
    T96 = YPfalse;
  }
  T95 = fun_Pdata_setter_502;
  T94 = CALL2(CHKREF(YPdefine_method),T96,T95);
  YruntimeYPdata_setter = T94;
  T98 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_503 = YPmet(FUNCODEREF(fun_503),YPfalse,T98,ENVNUL);
  T99 = fun_503;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYPdata),CHKREF(YruntimeYPdata_setter),CHKREF(YLvecG),T99);
  lit_491 = YPPsym((P)"%gc-state");
  T100 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_Pgc_state_504 = YPmet(FUNCODEREF(fun_Pgc_state_504),CHKREF(lit_491),T100,ENVNUL);
  T104 = BOUNDP(YruntimeYPgc_state);
  if (T104 != YPfalse) {
    T103 = CHKREF(YruntimeYPgc_state);
  } else {
    T103 = YPfalse;
  }
  T102 = fun_Pgc_state_504;
  T101 = CALL2(CHKREF(YPdefine_method),T103,T102);
  YruntimeYPgc_state = T101;
  lit_492 = YPPsym((P)"%gc-state-setter");
  T105 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLanyG),CHKREF(YruntimeYLsimple_table_vectorG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_Pgc_state_setter_505 = YPmet(FUNCODEREF(fun_Pgc_state_setter_505),CHKREF(lit_492),T105,ENVNUL);
  T109 = BOUNDP(YruntimeYPgc_state_setter);
  if (T109 != YPfalse) {
    T108 = CHKREF(YruntimeYPgc_state_setter);
  } else {
    T108 = YPfalse;
  }
  T107 = fun_Pgc_state_setter_505;
  T106 = CALL2(CHKREF(YPdefine_method),T108,T107);
  YruntimeYPgc_state_setter = T106;
  T110 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_506 = YPmet(FUNCODEREF(fun_506),YPfalse,T110,ENVNUL);
  T111 = fun_506;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYPgc_state),CHKREF(YruntimeYPgc_state_setter),CHKREF(YLanyG),T111);
  lit_493 = YPPsym((P)"fab-table-vector");
  lit_494 = YPPsym((P)"secondary-modulus");
  lit_495 = YPPsym((P)"primary-modulus");
  lit_496 = YPPsym((P)"bucket-depth");
  lit_497 = YPPsym((P)"n-buckets");
  lit_498 = YPPsym((P)"fill-value");
  lit_499 = YPPsym((P)"size");
  T112 = YPsig(YPPlist(6,CHKREF(lit_499),CHKREF(lit_498),CHKREF(lit_497),CHKREF(lit_496),CHKREF(lit_495),CHKREF(lit_494)),YPPlist(6,CHKREF(YLintG),CHKREF(YLanyG),CHKREF(YLintG),CHKREF(YLintG),CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)6),CHKREF(YruntimeYLsimple_table_vectorG));
  YruntimeYfab_table_vector = YPmet(FUNCODEREF(YruntimeYfab_table_vector),CHKREF(lit_493),T112,ENVNUL);
  T113 = YruntimeYfab_table_vector;
  YruntimeYfab_table_vector = T113;
  lit_500 = YPPsym((P)"vector");
  T114 = YPsig(YPPlist(2,CHKREF(lit_500),CHKREF(lit_248)),YPPlist(2,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_elt_508 = YPmet(FUNCODEREF(fun_elt_508),CHKREF(lit_197),T114,ENVNUL);
  T118 = BOUNDP(YruntimeYelt);
  if (T118 != YPfalse) {
    T117 = CHKREF(YruntimeYelt);
  } else {
    T117 = YPfalse;
  }
  T116 = fun_elt_508;
  T115 = CALL2(CHKREF(YPdefine_method),T117,T116);
  YruntimeYelt = T115;
  lit_501 = YPPsym((P)"new-value");
  T119 = YPsig(YPPlist(3,CHKREF(lit_501),CHKREF(lit_500),CHKREF(lit_248)),YPPlist(3,CHKREF(YLanyG),CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_elt_setter_509 = YPmet(FUNCODEREF(fun_elt_setter_509),CHKREF(lit_199),T119,ENVNUL);
  T123 = BOUNDP(YruntimeYelt_setter);
  if (T123 != YPfalse) {
    T122 = CHKREF(YruntimeYelt_setter);
  } else {
    T122 = YPfalse;
  }
  T121 = fun_elt_setter_509;
  T120 = CALL2(CHKREF(YPdefine_method),T122,T121);
  YruntimeYelt_setter = T120;
  lit_502 = YPPsym((P)"clr!");
  T124 = YPsig(YPPlist(2,CHKREF(lit_500),CHKREF(lit_498)),YPPlist(2,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_clrX_510 = YPmet(FUNCODEREF(fun_clrX_510),CHKREF(lit_502),T124,ENVNUL);
  T128 = BOUNDP(YruntimeYclrX);
  if (T128 != YPfalse) {
    T127 = CHKREF(YruntimeYclrX);
  } else {
    T127 = YPfalse;
  }
  T126 = fun_clrX_510;
  T125 = CALL2(CHKREF(YPdefine_method),T127,T126);
  YruntimeYclrX = T125;
  YruntimeYTdebug_tablesQT = YPfalse;
  lit_503 = YPPsym((P)"trace");
  lit_504 = YPPsym((P)"msg");
  T129 = YPsig(YPPlist(3,CHKREF(lit_453),CHKREF(lit_504),CHKREF(lit_24)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPtrue,YPint((P)2),CHKREF(YLanyG));
  YruntimeYtrace = YPmet(FUNCODEREF(YruntimeYtrace),CHKREF(lit_503),T129,ENVNUL);
  T130 = YruntimeYtrace;
  YruntimeYtrace = T130;
  lit_505 = YPPsym((P)"<tab>");
  T132 = (P)YPpair(CHKREF(YruntimeYLmapG),Ynil);
  T131 = CALL2(CHKREF(Yfab_class),CHKREF(lit_505),T132);
  YruntimeYLtabG = T131;
  lit_506 = YPPsym((P)"table-growth-factor");
  T133 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_table_growth_factor_512 = YPmet(FUNCODEREF(fun_table_growth_factor_512),CHKREF(lit_506),T133,ENVNUL);
  T137 = BOUNDP(YruntimeYtable_growth_factor);
  if (T137 != YPfalse) {
    T136 = CHKREF(YruntimeYtable_growth_factor);
  } else {
    T136 = YPfalse;
  }
  T135 = fun_table_growth_factor_512;
  T134 = CALL2(CHKREF(YPdefine_method),T136,T135);
  YruntimeYtable_growth_factor = T134;
  lit_507 = YPPsym((P)"table-growth-factor-setter");
  T138 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLfloG),CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_table_growth_factor_setter_513 = YPmet(FUNCODEREF(fun_table_growth_factor_setter_513),CHKREF(lit_507),T138,ENVNUL);
  T142 = BOUNDP(YruntimeYtable_growth_factor_setter);
  if (T142 != YPfalse) {
    T141 = CHKREF(YruntimeYtable_growth_factor_setter);
  } else {
    T141 = YPfalse;
  }
  T140 = fun_table_growth_factor_setter_513;
  T139 = CALL2(CHKREF(YPdefine_method),T141,T140);
  YruntimeYtable_growth_factor_setter = T139;
  T143 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_514 = YPmet(FUNCODEREF(fun_514),YPfalse,T143,ENVNUL);
  T144 = fun_514;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYtable_growth_factor),CHKREF(YruntimeYtable_growth_factor_setter),CHKREF(YLfloG),T144);
  lit_508 = YPPsym((P)"table-growth-threshold");
  T145 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_table_growth_threshold_515 = YPmet(FUNCODEREF(fun_table_growth_threshold_515),CHKREF(lit_508),T145,ENVNUL);
  T149 = BOUNDP(YruntimeYtable_growth_threshold);
  if (T149 != YPfalse) {
    T148 = CHKREF(YruntimeYtable_growth_threshold);
  } else {
    T148 = YPfalse;
  }
  T147 = fun_table_growth_threshold_515;
  T146 = CALL2(CHKREF(YPdefine_method),T148,T147);
  YruntimeYtable_growth_threshold = T146;
  lit_509 = YPPsym((P)"table-growth-threshold-setter");
  T150 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLfloG),CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_table_growth_threshold_setter_516 = YPmet(FUNCODEREF(fun_table_growth_threshold_setter_516),CHKREF(lit_509),T150,ENVNUL);
  T154 = BOUNDP(YruntimeYtable_growth_threshold_setter);
  if (T154 != YPfalse) {
    T153 = CHKREF(YruntimeYtable_growth_threshold_setter);
  } else {
    T153 = YPfalse;
  }
  T152 = fun_table_growth_threshold_setter_516;
  T151 = CALL2(CHKREF(YPdefine_method),T153,T152);
  YruntimeYtable_growth_threshold_setter = T151;
  lit_510 = YPflo(FLOINT(0.8));
  T155 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_517 = YPmet(FUNCODEREF(fun_517),YPfalse,T155,ENVNUL);
  T156 = fun_517;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYtable_growth_threshold),CHKREF(YruntimeYtable_growth_threshold_setter),CHKREF(YLfloG),T156);
  lit_511 = YPPsym((P)"table-shrink-threshold");
  T157 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_table_shrink_threshold_518 = YPmet(FUNCODEREF(fun_table_shrink_threshold_518),CHKREF(lit_511),T157,ENVNUL);
  T161 = BOUNDP(YruntimeYtable_shrink_threshold);
  if (T161 != YPfalse) {
    T160 = CHKREF(YruntimeYtable_shrink_threshold);
  } else {
    T160 = YPfalse;
  }
  T159 = fun_table_shrink_threshold_518;
  T158 = CALL2(CHKREF(YPdefine_method),T160,T159);
  YruntimeYtable_shrink_threshold = T158;
  lit_512 = YPPsym((P)"table-shrink-threshold-setter");
  T162 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLfloG),CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_table_shrink_threshold_setter_519 = YPmet(FUNCODEREF(fun_table_shrink_threshold_setter_519),CHKREF(lit_512),T162,ENVNUL);
  T166 = BOUNDP(YruntimeYtable_shrink_threshold_setter);
  if (T166 != YPfalse) {
    T165 = CHKREF(YruntimeYtable_shrink_threshold_setter);
  } else {
    T165 = YPfalse;
  }
  T164 = fun_table_shrink_threshold_setter_519;
  T163 = CALL2(CHKREF(YPdefine_method),T165,T164);
  YruntimeYtable_shrink_threshold_setter = T163;
  lit_513 = YPflo(FLOINT(0.5));
  T167 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_520 = YPmet(FUNCODEREF(fun_520),YPfalse,T167,ENVNUL);
  T168 = fun_520;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYtable_shrink_threshold),CHKREF(YruntimeYtable_shrink_threshold_setter),CHKREF(YLfloG),T168);
  lit_514 = YPPsym((P)"%count");
  T169 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_Pcount_521 = YPmet(FUNCODEREF(fun_Pcount_521),CHKREF(lit_514),T169,ENVNUL);
  T173 = BOUNDP(YruntimeYPcount);
  if (T173 != YPfalse) {
    T172 = CHKREF(YruntimeYPcount);
  } else {
    T172 = YPfalse;
  }
  T171 = fun_Pcount_521;
  T170 = CALL2(CHKREF(YPdefine_method),T172,T171);
  YruntimeYPcount = T170;
  lit_515 = YPPsym((P)"%count-setter");
  T174 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_Pcount_setter_522 = YPmet(FUNCODEREF(fun_Pcount_setter_522),CHKREF(lit_515),T174,ENVNUL);
  T178 = BOUNDP(YruntimeYPcount_setter);
  if (T178 != YPfalse) {
    T177 = CHKREF(YruntimeYPcount_setter);
  } else {
    T177 = YPfalse;
  }
  T176 = fun_Pcount_setter_522;
  T175 = CALL2(CHKREF(YPdefine_method),T177,T176);
  YruntimeYPcount_setter = T175;
  T179 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_523 = YPmet(FUNCODEREF(fun_523),YPfalse,T179,ENVNUL);
  T180 = fun_523;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYPcount),CHKREF(YruntimeYPcount_setter),CHKREF(YLintG),T180);
  lit_516 = YPPsym((P)"%vector");
  T181 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_Pvector_524 = YPmet(FUNCODEREF(fun_Pvector_524),CHKREF(lit_516),T181,ENVNUL);
  T185 = BOUNDP(YruntimeYPvector);
  if (T185 != YPfalse) {
    T184 = CHKREF(YruntimeYPvector);
  } else {
    T184 = YPfalse;
  }
  T183 = fun_Pvector_524;
  T182 = CALL2(CHKREF(YPdefine_method),T184,T183);
  YruntimeYPvector = T182;
  lit_517 = YPPsym((P)"%vector-setter");
  T186 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_Pvector_setter_525 = YPmet(FUNCODEREF(fun_Pvector_setter_525),CHKREF(lit_517),T186,ENVNUL);
  T190 = BOUNDP(YruntimeYPvector_setter);
  if (T190 != YPfalse) {
    T189 = CHKREF(YruntimeYPvector_setter);
  } else {
    T189 = YPfalse;
  }
  T188 = fun_Pvector_setter_525;
  T187 = CALL2(CHKREF(YPdefine_method),T189,T188);
  YruntimeYPvector_setter = T187;
  T191 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_526 = YPmet(FUNCODEREF(fun_526),YPfalse,T191,ENVNUL);
  T192 = fun_526;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYPvector),CHKREF(YruntimeYPvector_setter),CHKREF(YruntimeYLsimple_table_vectorG),T192);
  lit_518 = YPPsym((P)"table-protocol");
  T194 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLtupG));
  T193 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_518),T194,Ynil,YPfalse);
  YruntimeYtable_protocol = T193;
  T195 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLtupG));
  fun_table_protocol_527 = YPmet(FUNCODEREF(fun_table_protocol_527),CHKREF(lit_518),T195,ENVNUL);
  T199 = BOUNDP(YruntimeYtable_protocol);
  if (T199 != YPfalse) {
    T198 = CHKREF(YruntimeYtable_protocol);
  } else {
    T198 = YPfalse;
  }
  T197 = fun_table_protocol_527;
  T196 = CALL2(CHKREF(YPdefine_method),T198,T197);
  YruntimeYtable_protocol = T196;
  lit_519 = YPsb((P)"empty cell");
  T200 = CALL1(CHKREF(Ylst),CHKREF(lit_519));
  YruntimeYDempty_cell_marker = T200;
  lit_520 = YPsb((P)"vacated cell");
  T201 = CALL1(CHKREF(Ylst),CHKREF(lit_520));
  YruntimeYDvacated_cell_marker = T201;
  lit_521 = YPPsym((P)"hash-moduli");
  lit_522 = YPPsym((P)"secondary");
  lit_523 = YPPsym((P)"primary");
  lit_524 = YPPsym((P)"hash");
  T202 = YPsig(YPPlist(3,CHKREF(lit_524),CHKREF(lit_523),CHKREF(lit_522)),YPPlist(3,CHKREF(YLintG),CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLtupG));
  YruntimeYhash_moduli = YPmet(FUNCODEREF(YruntimeYhash_moduli),CHKREF(lit_521),T202,ENVNUL);
  T203 = YruntimeYhash_moduli;
  YruntimeYhash_moduli = T203;
  T205 = CALL1(CHKREF(YruntimeYtL),CHKREF(YruntimeYLtabG));
  T204 = YPsig(YPPlist(2,CHKREF(lit_38),CHKREF(lit_499)),YPPlist(2,T205,CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLtabG));
  fun_fab_529 = YPmet(FUNCODEREF(fun_fab_529),CHKREF(lit_140),T204,ENVNUL);
  T209 = BOUNDP(YruntimeYfab);
  if (T209 != YPfalse) {
    T208 = CHKREF(YruntimeYfab);
  } else {
    T208 = YPfalse;
  }
  T207 = fun_fab_529;
  T206 = CALL2(CHKREF(YPdefine_method),T208,T207);
  YruntimeYfab = T206;
  lit_525 = YPPsym((P)"exp");
  lit_526 = YPPsym((P)"tup");
  lit_527 = YPPsym((P)"table");
  lit_528 = YPPsym((P)"hash-function");
  lit_529 = YPPsym((P)"<int>");
  lit_530 = YPPsym((P)"test-function");
  lit_531 = YPPsym((P)"let");
  lit_532 = YPsb((P)"Match Pattern Failure");
  lit_533 = YPPsym((P)"with-hash");
  lit_534 = YPPsym((P)"x-1203");
  T212 = YPsig(YPPlist(2,CHKREF(lit_504),CHKREF(lit_24)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1203_530 = YPmet(FUNCODEREF(fun_x_1203_530),CHKREF(lit_534),T212,ENVNUL);
  T211 = YPsig(YPPlist(1,CHKREF(lit_91)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_531 = YPmet(FUNCODEREF(fun_531),YPfalse,T211,ENVNUL);
  T210 = YPsig(YPPlist(1,CHKREF(lit_525)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_532 = YPmet(FUNCODEREF(fun_532),YPfalse,T210,ENVNUL);
  T213 = fun_532;
  YPmacro(YPPsym((P)"runtime"),YPPsym((P)"with-hash"),T213);
  lit_535 = YPsb((P)"The table is totally full this shouldn't happen");
  lit_536 = YPPsym((P)"probes");
  lit_537 = YPPsym((P)"this-bucket-raw-index");
  T217 = YPsig(YPPlist(2,CHKREF(lit_50),CHKREF(lit_537)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_inner_533 = YPmet(FUNCODEREF(fun_inner_533),CHKREF(lit_283),T217,ENVNUL);
  T216 = YPsig(YPPlist(1,CHKREF(lit_536)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_outer_534 = YPmet(FUNCODEREF(fun_outer_534),CHKREF(lit_282),T216,ENVNUL);
  T215 = YPsig(YPPlist(1,CHKREF(lit_91)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_535 = YPmet(FUNCODEREF(fun_535),YPfalse,T215,ENVNUL);
  T214 = YPsig(YPPlist(2,CHKREF(lit_527),CHKREF(lit_187)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_elt_536 = YPmet(FUNCODEREF(fun_elt_536),CHKREF(lit_197),T214,ENVNUL);
  T221 = BOUNDP(YruntimeYelt);
  if (T221 != YPfalse) {
    T220 = CHKREF(YruntimeYelt);
  } else {
    T220 = YPfalse;
  }
  T219 = fun_elt_536;
  T218 = CALL2(CHKREF(YPdefine_method),T220,T219);
  YruntimeYelt = T218;
  lit_538 = YPPsym((P)"value");
  lit_539 = YPsb((P)"The table is totally full this shouldn't happen");
  T225 = YPsig(YPPlist(2,CHKREF(lit_50),CHKREF(lit_537)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_inner_537 = YPmet(FUNCODEREF(fun_inner_537),CHKREF(lit_283),T225,ENVNUL);
  T224 = YPsig(YPPlist(1,CHKREF(lit_536)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_outer_538 = YPmet(FUNCODEREF(fun_outer_538),CHKREF(lit_282),T224,ENVNUL);
  T223 = YPsig(YPPlist(1,CHKREF(lit_91)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_539 = YPmet(FUNCODEREF(fun_539),YPfalse,T223,ENVNUL);
  T222 = YPsig(YPPlist(3,CHKREF(lit_538),CHKREF(lit_527),CHKREF(lit_187)),YPPlist(3,CHKREF(YLanyG),CHKREF(YruntimeYLtabG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_elt_setter_540 = YPmet(FUNCODEREF(fun_elt_setter_540),CHKREF(lit_199),T222,ENVNUL);
  T229 = BOUNDP(YruntimeYelt_setter);
  if (T229 != YPfalse) {
    T228 = CHKREF(YruntimeYelt_setter);
  } else {
    T228 = YPfalse;
  }
  T227 = fun_elt_setter_540;
  T226 = CALL2(CHKREF(YPdefine_method),T228,T227);
  YruntimeYelt_setter = T226;
  lit_540 = YPPsym((P)"del-key");
  lit_541 = YPsb((P)"The table is totally full this shouldn't happen");
  T233 = YPsig(YPPlist(2,CHKREF(lit_50),CHKREF(lit_537)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_inner_541 = YPmet(FUNCODEREF(fun_inner_541),CHKREF(lit_283),T233,ENVNUL);
  T232 = YPsig(YPPlist(1,CHKREF(lit_536)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_outer_542 = YPmet(FUNCODEREF(fun_outer_542),CHKREF(lit_282),T232,ENVNUL);
  T231 = YPsig(YPPlist(1,CHKREF(lit_91)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_543 = YPmet(FUNCODEREF(fun_543),YPfalse,T231,ENVNUL);
  T230 = YPsig(YPPlist(2,CHKREF(lit_527),CHKREF(lit_187)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_del_key_544 = YPmet(FUNCODEREF(fun_del_key_544),CHKREF(lit_540),T230,ENVNUL);
  T237 = BOUNDP(YruntimeYdel_key);
  if (T237 != YPfalse) {
    T236 = CHKREF(YruntimeYdel_key);
  } else {
    T236 = YPfalse;
  }
  T235 = fun_del_key_544;
  T234 = CALL2(CHKREF(YPdefine_method),T236,T235);
  YruntimeYdel_key = T234;
  lit_542 = YPPsym((P)"function");
  lit_543 = YPPsym((P)"b");
  lit_544 = YPsb((P)"B %= I %=\n");
  T240 = YPsig(YPPlist(1,CHKREF(lit_50)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_inner_545 = YPmet(FUNCODEREF(fun_inner_545),CHKREF(lit_283),T240,ENVNUL);
  T239 = YPsig(YPPlist(1,CHKREF(lit_543)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_outer_546 = YPmet(FUNCODEREF(fun_outer_546),CHKREF(lit_282),T239,ENVNUL);
  T238 = YPsig(YPPlist(2,CHKREF(lit_542),CHKREF(lit_527)),YPPlist(2,CHKREF(YLfunG),CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_do_keyed_547 = YPmet(FUNCODEREF(fun_do_keyed_547),CHKREF(lit_183),T238,ENVNUL);
  T244 = BOUNDP(YruntimeYdo_keyed);
  if (T244 != YPfalse) {
    T243 = CHKREF(YruntimeYdo_keyed);
  } else {
    T243 = YPfalse;
  }
  T242 = fun_do_keyed_547;
  T241 = CALL2(CHKREF(YPdefine_method),T243,T242);
  YruntimeYdo_keyed = T241;
  T247 = YPsig(YPPlist(1,CHKREF(lit_50)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_inner_548 = YPmet(FUNCODEREF(fun_inner_548),CHKREF(lit_283),T247,ENVNUL);
  T246 = YPsig(YPPlist(1,CHKREF(lit_543)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_outer_549 = YPmet(FUNCODEREF(fun_outer_549),CHKREF(lit_282),T246,ENVNUL);
  T245 = YPsig(YPPlist(2,CHKREF(lit_542),CHKREF(lit_527)),YPPlist(2,CHKREF(YLfunG),CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_do_550 = YPmet(FUNCODEREF(fun_do_550),CHKREF(lit_175),T245,ENVNUL);
  T251 = BOUNDP(YruntimeYdo);
  if (T251 != YPfalse) {
    T250 = CHKREF(YruntimeYdo);
  } else {
    T250 = YPfalse;
  }
  T249 = fun_do_550;
  T248 = CALL2(CHKREF(YPdefine_method),T250,T249);
  YruntimeYdo = T248;
  lit_545 = YPPsym((P)"del-keys");
  T252 = YPsig(YPPlist(1,CHKREF(lit_527)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_del_keys_551 = YPmet(FUNCODEREF(fun_del_keys_551),CHKREF(lit_545),T252,ENVNUL);
  T256 = BOUNDP(YruntimeYdel_keys);
  if (T256 != YPfalse) {
    T255 = CHKREF(YruntimeYdel_keys);
  } else {
    T255 = YPfalse;
  }
  T254 = fun_del_keys_551;
  T253 = CALL2(CHKREF(YPdefine_method),T255,T254);
  YruntimeYdel_keys = T253;
  T259 = YPsig(YPPlist(1,CHKREF(lit_527)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  T258 = fun_len_552 = YPmet(FUNCODEREF(fun_len_552),CHKREF(lit_149),T259,ENVNUL);
  T264 = BOUNDP(YruntimeYlen);
  if (T264 != YPfalse) {
    T263 = CHKREF(YruntimeYlen);
  } else {
    T263 = YPfalse;
  }
  T262 = fun_len_552;
  T261 = CALL2(CHKREF(YPdefine_method),T263,T262);
  T260 = YruntimeYlen = T261;
  T257 = T260;
  return T257;
}

P YruntimeY___main_8___() {
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
  lit_546 = YPPsym((P)"<tab-state>");
  T1 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T0 = CALL2(CHKREF(Yfab_class),CHKREF(lit_546),T1);
  YruntimeYLtab_stateG = T0;
  T2 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_Pvector_553 = YPmet(FUNCODEREF(fun_Pvector_553),CHKREF(lit_516),T2,ENVNUL);
  T6 = BOUNDP(YruntimeYPvector);
  if (T6 != YPfalse) {
    T5 = CHKREF(YruntimeYPvector);
  } else {
    T5 = YPfalse;
  }
  T4 = fun_Pvector_553;
  T3 = CALL2(CHKREF(YPdefine_method),T5,T4);
  YruntimeYPvector = T3;
  T7 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YruntimeYLsimple_table_vectorG),CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_Pvector_setter_554 = YPmet(FUNCODEREF(fun_Pvector_setter_554),CHKREF(lit_517),T7,ENVNUL);
  T11 = BOUNDP(YruntimeYPvector_setter);
  if (T11 != YPfalse) {
    T10 = CHKREF(YruntimeYPvector_setter);
  } else {
    T10 = YPfalse;
  }
  T9 = fun_Pvector_setter_554;
  T8 = CALL2(CHKREF(YPdefine_method),T10,T9);
  YruntimeYPvector_setter = T8;
  T12 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_555 = YPmet(FUNCODEREF(fun_555),YPfalse,T12,ENVNUL);
  T13 = fun_555;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLtab_stateG),CHKREF(YruntimeYPvector),CHKREF(YruntimeYPvector_setter),CHKREF(YruntimeYLsimple_table_vectorG),T13);
  lit_547 = YPPsym((P)"%bucket");
  T14 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_Pbucket_556 = YPmet(FUNCODEREF(fun_Pbucket_556),CHKREF(lit_547),T14,ENVNUL);
  T18 = BOUNDP(YruntimeYPbucket);
  if (T18 != YPfalse) {
    T17 = CHKREF(YruntimeYPbucket);
  } else {
    T17 = YPfalse;
  }
  T16 = fun_Pbucket_556;
  T15 = CALL2(CHKREF(YPdefine_method),T17,T16);
  YruntimeYPbucket = T15;
  lit_548 = YPPsym((P)"%bucket-setter");
  T19 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_Pbucket_setter_557 = YPmet(FUNCODEREF(fun_Pbucket_setter_557),CHKREF(lit_548),T19,ENVNUL);
  T23 = BOUNDP(YruntimeYPbucket_setter);
  if (T23 != YPfalse) {
    T22 = CHKREF(YruntimeYPbucket_setter);
  } else {
    T22 = YPfalse;
  }
  T21 = fun_Pbucket_setter_557;
  T20 = CALL2(CHKREF(YPdefine_method),T22,T21);
  YruntimeYPbucket_setter = T20;
  T24 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_558 = YPmet(FUNCODEREF(fun_558),YPfalse,T24,ENVNUL);
  T25 = fun_558;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLtab_stateG),CHKREF(YruntimeYPbucket),CHKREF(YruntimeYPbucket_setter),CHKREF(YLintG),T25);
  lit_549 = YPPsym((P)"%index");
  T26 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_Pindex_559 = YPmet(FUNCODEREF(fun_Pindex_559),CHKREF(lit_549),T26,ENVNUL);
  T30 = BOUNDP(YruntimeYPindex);
  if (T30 != YPfalse) {
    T29 = CHKREF(YruntimeYPindex);
  } else {
    T29 = YPfalse;
  }
  T28 = fun_Pindex_559;
  T27 = CALL2(CHKREF(YPdefine_method),T29,T28);
  YruntimeYPindex = T27;
  lit_550 = YPPsym((P)"%index-setter");
  T31 = YPsig(YPPlist(2,CHKREF(lit_192),CHKREF(lit_190)),YPPlist(2,CHKREF(YLintG),CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_Pindex_setter_560 = YPmet(FUNCODEREF(fun_Pindex_setter_560),CHKREF(lit_550),T31,ENVNUL);
  T35 = BOUNDP(YruntimeYPindex_setter);
  if (T35 != YPfalse) {
    T34 = CHKREF(YruntimeYPindex_setter);
  } else {
    T34 = YPfalse;
  }
  T33 = fun_Pindex_setter_560;
  T32 = CALL2(CHKREF(YPdefine_method),T34,T33);
  YruntimeYPindex_setter = T32;
  T36 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_561 = YPmet(FUNCODEREF(fun_561),YPfalse,T36,ENVNUL);
  T37 = fun_561;
  CALLN(CHKREF(YPslot),5,CHKREF(YruntimeYLtab_stateG),CHKREF(YruntimeYPindex),CHKREF(YruntimeYPindex_setter),CHKREF(YLintG),T37);
  T41 = YPsig(YPPlist(1,CHKREF(lit_50)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_inner_562 = YPmet(FUNCODEREF(fun_inner_562),CHKREF(lit_283),T41,ENVNUL);
  T40 = YPsig(YPPlist(1,CHKREF(lit_543)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_outer_563 = YPmet(FUNCODEREF(fun_outer_563),CHKREF(lit_282),T40,ENVNUL);
  T39 = YPsig(YPPlist(1,CHKREF(lit_91)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_564 = YPmet(FUNCODEREF(fun_564),YPfalse,T39,ENVNUL);
  T38 = YPsig(YPPlist(1,CHKREF(lit_527)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_ini_state_565 = YPmet(FUNCODEREF(fun_ini_state_565),CHKREF(lit_258),T38,ENVNUL);
  T45 = BOUNDP(YruntimeYini_state);
  if (T45 != YPfalse) {
    T44 = CHKREF(YruntimeYini_state);
  } else {
    T44 = YPfalse;
  }
  T43 = fun_ini_state_565;
  T42 = CALL2(CHKREF(YPdefine_method),T44,T43);
  YruntimeYini_state = T42;
  lit_551 = YPPsym((P)"first?");
  T49 = YPsig(YPPlist(1,CHKREF(lit_50)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_inner_566 = YPmet(FUNCODEREF(fun_inner_566),CHKREF(lit_283),T49,ENVNUL);
  T48 = YPsig(YPPlist(2,CHKREF(lit_543),CHKREF(lit_551)),YPPlist(2,CHKREF(YLintG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_outer_567 = YPmet(FUNCODEREF(fun_outer_567),CHKREF(lit_282),T48,ENVNUL);
  T47 = YPsig(YPPlist(1,CHKREF(lit_91)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_568 = YPmet(FUNCODEREF(fun_568),YPfalse,T47,ENVNUL);
  T46 = YPsig(YPPlist(2,CHKREF(lit_527),CHKREF(lit_162)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_nxt_state_569 = YPmet(FUNCODEREF(fun_nxt_state_569),CHKREF(lit_260),T46,ENVNUL);
  T53 = BOUNDP(YruntimeYnxt_state);
  if (T53 != YPfalse) {
    T52 = CHKREF(YruntimeYnxt_state);
  } else {
    T52 = YPfalse;
  }
  T51 = fun_nxt_state_569;
  T50 = CALL2(CHKREF(YPdefine_method),T52,T51);
  YruntimeYnxt_state = T50;
  T54 = YPsig(YPPlist(2,CHKREF(lit_527),CHKREF(lit_162)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_fin_stateQ_570 = YPmet(FUNCODEREF(fun_fin_stateQ_570),CHKREF(lit_259),T54,ENVNUL);
  T58 = BOUNDP(YruntimeYfin_stateQ);
  if (T58 != YPfalse) {
    T57 = CHKREF(YruntimeYfin_stateQ);
  } else {
    T57 = YPfalse;
  }
  T56 = fun_fin_stateQ_570;
  T55 = CALL2(CHKREF(YPdefine_method),T57,T56);
  YruntimeYfin_stateQ = T55;
  T59 = YPsig(YPPlist(2,CHKREF(lit_527),CHKREF(lit_162)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_now_key_571 = YPmet(FUNCODEREF(fun_now_key_571),CHKREF(lit_263),T59,ENVNUL);
  T63 = BOUNDP(YruntimeYnow_key);
  if (T63 != YPfalse) {
    T62 = CHKREF(YruntimeYnow_key);
  } else {
    T62 = YPfalse;
  }
  T61 = fun_now_key_571;
  T60 = CALL2(CHKREF(YPdefine_method),T62,T61);
  YruntimeYnow_key = T60;
  T64 = YPsig(YPPlist(2,CHKREF(lit_527),CHKREF(lit_162)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_now_elt_572 = YPmet(FUNCODEREF(fun_now_elt_572),CHKREF(lit_261),T64,ENVNUL);
  T68 = BOUNDP(YruntimeYnow_elt);
  if (T68 != YPfalse) {
    T67 = CHKREF(YruntimeYnow_elt);
  } else {
    T67 = YPfalse;
  }
  T66 = fun_now_elt_572;
  T65 = CALL2(CHKREF(YPdefine_method),T67,T66);
  YruntimeYnow_elt = T65;
  T69 = YPsig(YPPlist(3,CHKREF(lit_538),CHKREF(lit_527),CHKREF(lit_162)),YPPlist(3,CHKREF(YLanyG),CHKREF(YruntimeYLtabG),CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_now_elt_setter_573 = YPmet(FUNCODEREF(fun_now_elt_setter_573),CHKREF(lit_262),T69,ENVNUL);
  T73 = BOUNDP(YruntimeYnow_elt_setter);
  if (T73 != YPfalse) {
    T72 = CHKREF(YruntimeYnow_elt_setter);
  } else {
    T72 = YPfalse;
  }
  T71 = fun_now_elt_setter_573;
  T70 = CALL2(CHKREF(YPdefine_method),T72,T71);
  YruntimeYnow_elt_setter = T70;
  T74 = YPsig(YPPlist(2,CHKREF(lit_527),CHKREF(lit_162)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YruntimeYLtab_stateG)),YPfalse,YPint((P)2),CHKREF(YruntimeYLtab_stateG));
  fun_copy_state_574 = YPmet(FUNCODEREF(fun_copy_state_574),CHKREF(lit_264),T74,ENVNUL);
  T78 = BOUNDP(YruntimeYcopy_state);
  if (T78 != YPfalse) {
    T77 = CHKREF(YruntimeYcopy_state);
  } else {
    T77 = YPfalse;
  }
  T76 = fun_copy_state_574;
  T75 = CALL2(CHKREF(YPdefine_method),T77,T76);
  YruntimeYcopy_state = T75;
  lit_552 = YPPsym((P)"tab-keys");
  lit_553 = YPPsym((P)"k");
  T80 = YPsig(YPPlist(2,CHKREF(lit_553),CHKREF(lit_212)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_575 = YPmet(FUNCODEREF(fun_575),YPfalse,T80,ENVNUL);
  T79 = YPsig(YPPlist(1,CHKREF(lit_527)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  fun_tab_keys_576 = YPmet(FUNCODEREF(fun_tab_keys_576),CHKREF(lit_552),T79,ENVNUL);
  T84 = BOUNDP(YruntimeYtab_keys);
  if (T84 != YPfalse) {
    T83 = CHKREF(YruntimeYtab_keys);
  } else {
    T83 = YPfalse;
  }
  T82 = fun_tab_keys_576;
  T81 = CALL2(CHKREF(YPdefine_method),T83,T82);
  YruntimeYtab_keys = T81;
  lit_554 = YPPsym((P)"grow-table");
  T85 = YPsig(YPPlist(1,CHKREF(lit_527)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YruntimeYLtabG));
  fun_grow_table_577 = YPmet(FUNCODEREF(fun_grow_table_577),CHKREF(lit_554),T85,ENVNUL);
  T89 = BOUNDP(YruntimeYgrow_table);
  if (T89 != YPfalse) {
    T88 = CHKREF(YruntimeYgrow_table);
  } else {
    T88 = YPfalse;
  }
  T87 = fun_grow_table_577;
  T86 = CALL2(CHKREF(YPdefine_method),T88,T87);
  YruntimeYgrow_table = T86;
  lit_555 = YPPsym((P)"rehash-table");
  T90 = YPsig(YPPlist(1,CHKREF(lit_527)),YPPlist(1,CHKREF(YruntimeYLtabG)),YPfalse,YPint((P)1),CHKREF(YruntimeYLtabG));
  fun_rehash_table_578 = YPmet(FUNCODEREF(fun_rehash_table_578),CHKREF(lit_555),T90,ENVNUL);
  T94 = BOUNDP(YruntimeYrehash_table);
  if (T94 != YPfalse) {
    T93 = CHKREF(YruntimeYrehash_table);
  } else {
    T93 = YPfalse;
  }
  T92 = fun_rehash_table_578;
  T91 = CALL2(CHKREF(YPdefine_method),T93,T92);
  YruntimeYrehash_table = T91;
  lit_556 = YPPsym((P)"choose-table-geometry");
  lit_557 = YPPsym((P)"capacity");
  lit_558 = YPsb((P)"Not enough primes to compute new table size");
  T97 = YPsig(YPPlist(1,CHKREF(lit_129)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_579 = YPmet(FUNCODEREF(fun_579),YPfalse,T97,ENVNUL);
  T96 = YPsig(YPPlist(1,CHKREF(lit_91)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_580 = YPmet(FUNCODEREF(fun_580),YPfalse,T96,ENVNUL);
  T95 = YPsig(YPPlist(1,CHKREF(lit_557)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLtupG));
  YruntimeYchoose_table_geometry = YPmet(FUNCODEREF(YruntimeYchoose_table_geometry),CHKREF(lit_556),T95,ENVNUL);
  T98 = YruntimeYchoose_table_geometry;
  YruntimeYchoose_table_geometry = T98;
  lit_559 = YPPsym((P)"copy-to-new-vector");
  lit_560 = YPPsym((P)"new-vector");
  lit_561 = YPsb((P)"The table is totally full this shouldn't happen");
  T103 = YPsig(YPPlist(2,CHKREF(lit_50),CHKREF(lit_248)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_inner_582 = YPmet(FUNCODEREF(fun_inner_582),CHKREF(lit_283),T103,ENVNUL);
  T102 = YPsig(YPPlist(1,CHKREF(lit_536)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_outer_583 = YPmet(FUNCODEREF(fun_outer_583),CHKREF(lit_282),T102,ENVNUL);
  T101 = YPsig(YPPlist(1,CHKREF(lit_91)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_584 = YPmet(FUNCODEREF(fun_584),YPfalse,T101,ENVNUL);
  T100 = YPsig(YPPlist(2,CHKREF(lit_553),CHKREF(lit_212)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_585 = YPmet(FUNCODEREF(fun_585),YPfalse,T100,ENVNUL);
  T99 = YPsig(YPPlist(2,CHKREF(lit_527),CHKREF(lit_560)),YPPlist(2,CHKREF(YruntimeYLtabG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_copy_to_new_vector_586 = YPmet(FUNCODEREF(fun_copy_to_new_vector_586),CHKREF(lit_559),T99,ENVNUL);
  T107 = BOUNDP(YruntimeYcopy_to_new_vector);
  if (T107 != YPfalse) {
    T106 = CHKREF(YruntimeYcopy_to_new_vector);
  } else {
    T106 = YPfalse;
  }
  T105 = fun_copy_to_new_vector_586;
  T104 = CALL2(CHKREF(YPdefine_method),T106,T105);
  YruntimeYcopy_to_new_vector = T104;
  YruntimeYDpermanent_hash_state = YPfalse;
  lit_562 = YPPsym((P)"current-gc-state");
  T108 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  YruntimeYcurrent_gc_state = YPmet(FUNCODEREF(YruntimeYcurrent_gc_state),CHKREF(lit_562),T108,ENVNUL);
  T109 = YruntimeYcurrent_gc_state;
  YruntimeYcurrent_gc_state = T109;
  lit_563 = YPPsym((P)"id-hash");
  T110 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_id_hash_588 = YPmet(FUNCODEREF(fun_id_hash_588),CHKREF(lit_563),T110,ENVNUL);
  T114 = BOUNDP(YruntimeYid_hash);
  if (T114 != YPfalse) {
    T113 = CHKREF(YruntimeYid_hash);
  } else {
    T113 = YPfalse;
  }
  T112 = fun_id_hash_588;
  T111 = CALL2(CHKREF(YPdefine_method),T113,T112);
  YruntimeYid_hash = T111;
  T115 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLlogG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_id_hash_589 = YPmet(FUNCODEREF(fun_id_hash_589),CHKREF(lit_563),T115,ENVNUL);
  T119 = BOUNDP(YruntimeYid_hash);
  if (T119 != YPfalse) {
    T118 = CHKREF(YruntimeYid_hash);
  } else {
    T118 = YPfalse;
  }
  T117 = fun_id_hash_589;
  T116 = CALL2(CHKREF(YPdefine_method),T118,T117);
  YruntimeYid_hash = T116;
  lit_564 = YPPsym((P)"rot");
  T120 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_105)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  YruntimeYrot = YPmet(FUNCODEREF(YruntimeYrot),CHKREF(lit_564),T120,ENVNUL);
  T121 = YruntimeYrot;
  YruntimeYrot = T121;
  T122 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_id_hash_591 = YPmet(FUNCODEREF(fun_id_hash_591),CHKREF(lit_563),T122,ENVNUL);
  T126 = BOUNDP(YruntimeYid_hash);
  if (T126 != YPfalse) {
    T125 = CHKREF(YruntimeYid_hash);
  } else {
    T125 = YPfalse;
  }
  T124 = fun_id_hash_591;
  T123 = CALL2(CHKREF(YPdefine_method),T125,T124);
  YruntimeYid_hash = T123;
  T127 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_id_hash_592 = YPmet(FUNCODEREF(fun_id_hash_592),CHKREF(lit_563),T127,ENVNUL);
  T131 = BOUNDP(YruntimeYid_hash);
  if (T131 != YPfalse) {
    T130 = CHKREF(YruntimeYid_hash);
  } else {
    T130 = YPfalse;
  }
  T129 = fun_id_hash_592;
  T128 = CALL2(CHKREF(YPdefine_method),T130,T129);
  YruntimeYid_hash = T128;
  T132 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLfloG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_id_hash_593 = YPmet(FUNCODEREF(fun_id_hash_593),CHKREF(lit_563),T132,ENVNUL);
  T136 = BOUNDP(YruntimeYid_hash);
  if (T136 != YPfalse) {
    T135 = CHKREF(YruntimeYid_hash);
  } else {
    T135 = YPfalse;
  }
  T134 = fun_id_hash_593;
  T133 = CALL2(CHKREF(YPdefine_method),T135,T134);
  YruntimeYid_hash = T133;
  lit_565 = YPPsym((P)"case-insensitive-string-hash");
  T138 = YPsig(YPPlist(2,CHKREF(lit_50),CHKREF(lit_524)),YPPlist(2,CHKREF(YLintG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_594 = YPmet(FUNCODEREF(fun_loop_594),CHKREF(lit_88),T138,ENVNUL);
  T137 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLtupG));
  YruntimeYcase_insensitive_string_hash = YPmet(FUNCODEREF(YruntimeYcase_insensitive_string_hash),CHKREF(lit_565),T137,ENVNUL);
  T139 = YruntimeYcase_insensitive_string_hash;
  YruntimeYcase_insensitive_string_hash = T139;
  lit_566 = YPPsym((P)"case-insensitive-string-equal");
  T141 = YPsig(YPPlist(1,CHKREF(lit_50)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_596 = YPmet(FUNCODEREF(fun_loop_596),CHKREF(lit_88),T141,ENVNUL);
  T140 = YPsig(YPPlist(2,CHKREF(lit_2),CHKREF(lit_41)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLstrG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  YruntimeYcase_insensitive_string_equal = YPmet(FUNCODEREF(YruntimeYcase_insensitive_string_equal),CHKREF(lit_566),T140,ENVNUL);
  T142 = YruntimeYcase_insensitive_string_equal;
  YruntimeYcase_insensitive_string_equal = T142;
  lit_567 = YPPsym((P)"<str-tab>");
  T144 = (P)YPpair(CHKREF(YruntimeYLtabG),Ynil);
  T143 = CALL2(CHKREF(Yfab_class),CHKREF(lit_567),T144);
  YruntimeYLstr_tabG = T143;
  T145 = YPsig(YPPlist(1,CHKREF(lit_51)),YPPlist(1,CHKREF(YruntimeYLstr_tabG)),YPfalse,YPint((P)1),CHKREF(YLtupG));
  fun_table_protocol_598 = YPmet(FUNCODEREF(fun_table_protocol_598),CHKREF(lit_518),T145,ENVNUL);
  T149 = BOUNDP(YruntimeYtable_protocol);
  if (T149 != YPfalse) {
    T148 = CHKREF(YruntimeYtable_protocol);
  } else {
    T148 = YPfalse;
  }
  T147 = fun_table_protocol_598;
  T146 = CALL2(CHKREF(YPdefine_method),T148,T147);
  YruntimeYtable_protocol = T146;
  T150 = CALL2(CHKREF(YruntimeYfab),CHKREF(YruntimeYLstr_tabG),YPint((P)3000));
  YruntimeYsymbols = T150;
  lit_568 = YPPsym((P)"booted-fab-sym");
  lit_569 = YPPsym((P)"name");
  T151 = YPsig(YPPlist(1,CHKREF(lit_569)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YruntimeYbooted_fab_sym = YPmet(FUNCODEREF(YruntimeYbooted_fab_sym),CHKREF(lit_568),T151,ENVNUL);
  T152 = YruntimeYbooted_fab_sym;
  YruntimeYbooted_fab_sym = T152;
  lit_570 = YPPsym((P)"boot-symbols");
  lit_571 = YPPsym((P)"boot");
  lit_572 = YPPsym((P)"syms");
  T154 = YPsig(YPPlist(1,CHKREF(lit_572)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_boot_601 = YPmet(FUNCODEREF(fun_boot_601),CHKREF(lit_571),T154,ENVNUL);
  T153 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  YruntimeYboot_symbols = YPmet(FUNCODEREF(YruntimeYboot_symbols),CHKREF(lit_570),T153,ENVNUL);
  T155 = YruntimeYboot_symbols;
  YruntimeYboot_symbols = T155;
  CALL0(CHKREF(YruntimeYboot_symbols));
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
  T156 = YPfalse;
  return T156;
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
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"quote", &module_info_boot, "quote"},
  {"%i?", &module_info_boot, "%i?"},
  {"%fb", &module_info_boot, "%fb"},
  {"<num>", &module_info_boot, "<num>"},
  {"fun", &module_info_boot, "fun"},
  {"ds", &module_info_boot, "ds"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%bb", &module_info_boot, "%bb"},
  {"%f+", &module_info_boot, "%f+"},
  {"bound?", &module_info_boot, "bound?"},
  {"nul", &module_info_boot, "nul"},
  {"collected", &module_info_macros, "collected"},
  {"%su", &module_info_boot, "%su"},
  {"%i&", &module_info_boot, "%i&"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"%cu", &module_info_boot, "%cu"},
  {"var-type", &module_info_macros, "var-type"},
  {"%c<", &module_info_boot, "%c<"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"popf", &module_info_macros, "popf"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"%i+", &module_info_boot, "%i+"},
  {"%snul", &module_info_boot, "%snul"},
  {"next-method", &module_info_macros, "next-method"},
  {"<union>", &module_info_boot, "<union>"},
  {"slot", &module_info_boot, "slot"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"loc", &module_info_boot, "loc"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"<log>", &module_info_boot, "<log>"},
  {"tup", &module_info_macros, "tup"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"tail", &module_info_boot, "tail"},
  {"%im", &module_info_boot, "%im"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"%selt", &module_info_boot, "%selt"},
  {"%f=", &module_info_boot, "%f="},
  {"%sb", &module_info_boot, "%sb"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"==", &module_info_macros, "=="},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"<any>", &module_info_boot, "<any>"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"for", &module_info_macros, "for"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"var-name", &module_info_macros, "var-name"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"%pair", &module_info_boot, "%pair"},
  {"df", &module_info_boot, "df"},
  {"isa?", &module_info_boot, "isa?"},
  {"select", &module_info_macros, "select"},
  {"type-object", &module_info_boot, "type-object"},
  {"fin", &module_info_boot, "fin"},
  {"rep", &module_info_boot, "rep"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%iu", &module_info_boot, "%iu"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"not", &module_info_boot, "not"},
  {"dlet", &module_info_macros, "dlet"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"use", &module_info_boot, "use"},
  {"dec", &module_info_macros, "dec"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"collect", &module_info_macros, "collect"},
  {"lab", &module_info_boot, "lab"},
  {"assert", &module_info_macros, "assert"},
  {"%i-", &module_info_boot, "%i-"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"isa", &module_info_boot, "isa"},
  {"<class>", &module_info_boot, "<class>"},
  {"set", &module_info_boot, "set"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"type-error", &module_info_boot, "type-error"},
  {"error", &module_info_boot, "error"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"or", &module_info_macros, "or"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"<type>", &module_info_boot, "<type>"},
  {"%velt", &module_info_boot, "%velt"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"pair", &module_info_macros, "pair"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"fapply", &module_info_boot, "fapply"},
  {"%fu", &module_info_boot, "%fu"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"head", &module_info_boot, "head"},
  {"empty?", &module_info_macros, "empty?"},
  {"gensym", &module_info_macros, "gensym"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"dv", &module_info_boot, "dv"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"%raw", &module_info_boot, "%raw"},
  {"%i^", &module_info_boot, "%i^"},
  {"unless", &module_info_macros, "unless"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"dc", &module_info_boot, "dc"},
  {"%c=", &module_info_boot, "%c="},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"dp", &module_info_boot, "dp"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"if", &module_info_boot, "if"},
  {"<str>", &module_info_boot, "<str>"},
  {"object-class", &module_info_boot, "object-class"},
  {"%f/", &module_info_boot, "%f/"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"nil", &module_info_boot, "nil"},
  {"%call-next-method", &module_info_boot, "%call-next-method"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"dm", &module_info_boot, "dm"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"and", &module_info_macros, "and"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"seq", &module_info_boot, "seq"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"%f<", &module_info_boot, "%f<"},
  {"try", &module_info_boot, "try"},
  {"%vec", &module_info_boot, "%vec"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"%i=", &module_info_boot, "%i="},
  {"<flat>", &module_info_boot, "<flat>"},
  {"%cb", &module_info_boot, "%cb"},
  {"<met>", &module_info_boot, "<met>"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"map", &module_info_macros, "map"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"lst", &module_info_boot, "lst"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"pushf", &module_info_macros, "pushf"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"%isa", &module_info_boot, "%isa"},
  {"%f-", &module_info_boot, "%f-"},
  {"%ib", &module_info_boot, "%ib"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"%lu", &module_info_boot, "%lu"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-name", &module_info_boot, "class-name"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"%i*", &module_info_boot, "%i*"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"cat", &module_info_macros, "cat"},
  {"<col>", &module_info_boot, "<col>"},
  {"apply", &module_info_boot, "apply"},
  {"%f*", &module_info_boot, "%f*"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"case", &module_info_macros, "case"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"export", &module_info_boot, "export"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"%it/", &module_info_boot, "%it/"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"mif", &module_info_boot, "mif"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%i!", &module_info_boot, "%i!"},
  {"%iv", &module_info_boot, "%iv"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"%slot", &module_info_boot, "%slot"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"collecting", &module_info_macros, "collecting"},
  {"%i<", &module_info_boot, "%i<"},
  {"%slen", &module_info_boot, "%slen"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"when", &module_info_macros, "when"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"dss", &module_info_boot, "dss"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"ct", &module_info_boot, "ct"},
  {"type-class", &module_info_boot, "type-class"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"let", &module_info_boot, "let"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"<int>", &module_info_boot, "<int>"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"%ft", &module_info_boot, "%ft"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"dg", &module_info_boot, "dg"},
  {"%str", &module_info_boot, "%str"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"inc", &module_info_macros, "inc"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"add", &YruntimeYadd},
  {"<handler-info>", &YruntimeYLhandler_infoG},
  {"$vacated-cell-marker", &YruntimeYDvacated_cell_marker},
  {"elt", &YruntimeYelt},
  {"integer->char", &YruntimeYinteger_Gchar},
  {"condition-arguments", &YruntimeYcondition_arguments},
  {"from-below-by", &YruntimeYfrom_below_by},
  {"elt-setter", &YruntimeYelt_setter},
  {"identity", &YruntimeYidentity},
  {"from", &YruntimeYfrom},
  {"<tab-state>", &YruntimeYLtab_stateG},
  {"---main-2---", NULL},
  {"logbit?", &YruntimeYlogbitQ},
  {"step-first", &YruntimeYstep_first},
  {"char->ascii", &YruntimeYchar_Gascii},
  {"~==", &YruntimeYNEE},
  {"keys", &YruntimeYkeys},
  {"with-hash", NULL},
  {"even?", &YruntimeYevenQ},
  {"<assoc>", &YruntimeYLassocG},
  {"push-last!", &YruntimeYpush_lastX},
  {"%bucket-depth-setter", &YruntimeYPbucket_depth_setter},
  {"%bucket-depth", &YruntimeYPbucket_depth},
  {"<file-input-port>", &YruntimeYLfile_input_portG},
  {"describe-handler", &YruntimeYdescribe_handler},
  {"len", &YruntimeYlen},
  {"+", &YruntimeYA},
  {"%bucket", &YruntimeYPbucket},
  {"handler-function", &YruntimeYhandler_function},
  {"from-to", &YruntimeYfrom_to},
  {"format-to-string", &YruntimeYformat_to_string},
  {"char-ready?", &YruntimeYchar_readyQ},
  {"---main-3---", NULL},
  {"%secondary-modulus-setter", &YruntimeYPsecondary_modulus_setter},
  {"str-to-num", &YruntimeYstr_to_num},
  {"to-str", &YruntimeYto_str},
  {"in", &YruntimeYin},
  {"as-lowercase", &YruntimeYas_lowercase},
  {"into", &YruntimeYinto},
  {"clr!", &YruntimeYclrX},
  {"do-handlers-of-type", &YruntimeYdo_handlers_of_type},
  {"<simple-error>", &YruntimeYLsimple_errorG},
  {"current-gc-state", &YruntimeYcurrent_gc_state},
  {"list", &YruntimeYlist},
  {"any?", &YruntimeYanyQ},
  {"incongruent-method-error-generic", &YruntimeYincongruent_method_error_generic},
  {"<tab>", &YruntimeYLtabG},
  {"fab-table-vector", &YruntimeYfab_table_vector},
  {"step-first-setter", &YruntimeYstep_first_setter},
  {"table-growth-factor-setter", &YruntimeYtable_growth_factor_setter},
  {"do-key-vals", &YruntimeYdo_key_vals},
  {"all?", &YruntimeYallQ},
  {"<range>", &YruntimeYLrangeG},
  {"range-below", &YruntimeYrange_below},
  {"<condition>", &YruntimeYLconditionG},
  {"fill", &YruntimeYfill},
  {"close-output-port", &YruntimeYclose_output_port},
  {"%index-setter", &YruntimeYPindex_setter},
  {"$default-handler-info", &YruntimeYDdefault_handler_info},
  {"1st", &YruntimeY1st},
  {"<string-port>", &YruntimeYLstring_portG},
  {"ascii-whitespaces", &YruntimeYascii_whitespaces},
  {"<port>", &YruntimeYLportG},
  {"pop", &YruntimeYpop},
  {"vec", &YruntimeYvec},
  {"native-chars", &YruntimeYnative_chars},
  {"numeric?", &YruntimeYnumericQ},
  {"<restart>", &YruntimeYLrestartG},
  {"assoc-value", &YruntimeYassoc_value},
  {"<list>", &YruntimeYLlistG},
  {"<file-port>", &YruntimeYLfile_portG},
  {"assocq", &YruntimeYassocq},
  {"*current-handlers*", &YruntimeYTcurrent_handlersT},
  {"alter", &YruntimeYalter},
  {"tab-keys", &YruntimeYtab_keys},
  {"str", &YruntimeYstr},
  {"pick", &YruntimeYpick},
  {"<str-tab>", &YruntimeYLstr_tabG},
  {"assocs-keys", &YruntimeYassocs_keys},
  {"app-args", &YruntimeYapp_args},
  {"range-below-setter", &YruntimeYrange_below_setter},
  {"from-by", &YruntimeYfrom_by},
  {"assoc-value-setter", &YruntimeYassoc_value_setter},
  {"condition-arguments-setter", &YruntimeYcondition_arguments_setter},
  {"<input-port>", &YruntimeYLinput_portG},
  {"del-keys", &YruntimeYdel_keys},
  {"*debug-tables?*", &YruntimeYTdebug_tablesQT},
  {"<handler>", &YruntimeYLhandlerG},
  {"2nd", &YruntimeY2nd},
  {"port-index-setter", &YruntimeYport_index_setter},
  {"%bucket-setter", &YruntimeYPbucket_setter},
  {"/", &YruntimeYS},
  {"ascii-chars", &YruntimeYascii_chars},
  {"app-filename", &YruntimeYapp_filename},
  {"<step>", &YruntimeYLstepG},
  {"truncate", &YruntimeYtruncate},
  {"rot", &YruntimeYrot},
  {"port-handle", &YruntimeYport_handle},
  {"pos", &YruntimeYpos},
  {"range-check", &YruntimeYrange_check},
  {"table-shrink-threshold-setter", &YruntimeYtable_shrink_threshold_setter},
  {"min", &YruntimeYmin},
  {"del-dups", &YruntimeYdel_dups},
  {"*gensym-counter*", &YruntimeYTgensym_counterT},
  {"fabs", &YruntimeYfabs},
  {"do3", &YruntimeYdo3},
  {"table-growth-threshold-setter", &YruntimeYtable_growth_threshold_setter},
  {"odd?", &YruntimeYoddQ},
  {"$digit-to-char", &YruntimeYDdigit_to_char},
  {"from-above-by", &YruntimeYfrom_above_by},
  {"assq", &YruntimeYassq},
  {"len-setter", &YruntimeYlen_setter},
  {"---main-5---", NULL},
  {"id-hash", &YruntimeYid_hash},
  {"---main-6---", NULL},
  {"table-shrink-threshold", &YruntimeYtable_shrink_threshold},
  {"any2?", &YruntimeYany2Q},
  {"---main-7---", NULL},
  {"assoc", &YruntimeYassoc},
  {"handler-test", &YruntimeYhandler_test},
  {"neg", &YruntimeYneg},
  {"ini-state", &YruntimeYini_state},
  {"as-uppercase", &YruntimeYas_uppercase},
  {"handler-condition-type", &YruntimeYhandler_condition_type},
  {"write-string", &YruntimeYwrite_string},
  {"%primary-modulus-setter", &YruntimeYPprimary_modulus_setter},
  {"table-growth-threshold", &YruntimeYtable_growth_threshold},
  {"locative-value-setter", &YruntimeYlocative_value_setter},
  {"grow-table", &YruntimeYgrow_table},
  {"open-input-file", &YruntimeYopen_input_file},
  {"eof-object?", &YruntimeYeof_objectQ},
  {"%n-buckets", &YruntimeYPn_buckets},
  {"incongruent-method-error-generic-setter", &YruntimeYincongruent_method_error_generic_setter},
  {"from-below", &YruntimeYfrom_below},
  {"case-insensitive-string-equal", &YruntimeYcase_insensitive_string_equal},
  {"range-by", &YruntimeYrange_by},
  {"%gc-state-setter", &YruntimeYPgc_state_setter},
  {"fin-state?", &YruntimeYfin_stateQ},
  {"range-error", &YruntimeYrange_error},
  {"call-with-input-file", &YruntimeYcall_with_input_file},
  {"---main-8---", NULL},
  {"%vector-setter", &YruntimeYPvector_setter},
  {"contagious-call", &YruntimeYcontagious_call},
  {"to-digit", &YruntimeYto_digit},
  {"epsilon", &YruntimeYepsilon},
  {"<buf>", &YruntimeYLbufG},
  {"handler-info-arguments-setter", &YruntimeYhandler_info_arguments_setter},
  {"range-by-setter", &YruntimeYrange_by_setter},
  {"-", &YruntimeY_},
  {"locative-value", &YruntimeYlocative_value},
  {"condition-message", &YruntimeYcondition_message},
  {"neg?", &YruntimeYnegQ},
  {"call-with-output-file", &YruntimeYcall_with_output_file},
  {"rcurry", &YruntimeYrcurry},
  {"booted-fab-sym-using", NULL},
  {"step-then", &YruntimeYstep_then},
  {"del", &YruntimeYdel},
  {"assocs-keys-setter", &YruntimeYassocs_keys_setter},
  {"call-with-string-output-port", &YruntimeYcall_with_string_output_port},
  {"read", &YruntimeYread},
  {"table-growth-factor", &YruntimeYtable_growth_factor},
  {"ceiling/", &YruntimeYceilingS},
  {"now-key", &YruntimeYnow_key},
  {"<bot>", &YruntimeYLbotG},
  {"---main-4---", NULL},
  {"<incongruent-method-error>", &YruntimeYLincongruent_method_errorG},
  {"round", &YruntimeYround},
  {"call-with-string-input-port", &YruntimeYcall_with_string_input_port},
  {"floor/", &YruntimeYfloorS},
  {"compose", &YruntimeYcompose},
  {"describe-condition", &YruntimeYdescribe_condition},
  {"rehash-table", &YruntimeYrehash_table},
  {"%vector", &YruntimeYPvector},
  {"do2", &YruntimeYdo2},
  {"range-above", &YruntimeYrange_above},
  {"sub", &YruntimeYsub},
  {"now-elt", &YruntimeYnow_elt},
  {"now-elt-setter", &YruntimeYnow_elt_setter},
  {"port-guts-setter", &YruntimeYport_guts_setter},
  {"vals-to-str", &YruntimeYvals_to_str},
  {"range-above-setter", &YruntimeYrange_above_setter},
  {"round/", &YruntimeYroundS},
  {"port-handle-setter", &YruntimeYport_handle_setter},
  {"num-to-str", &YruntimeYnum_to_str},
  {"lsh", &YruntimeYlsh},
  {"address-of", &YruntimeYaddress_of},
  {"ash", &YruntimeYash},
  {"case-insensitive-string-hash", &YruntimeYcase_insensitive_string_hash},
  {"flo-bits", &YruntimeYflo_bits},
  {"del-key", &YruntimeYdel_key},
  {"<file-output-port>", &YruntimeYLfile_output_portG},
  {"%count", &YruntimeYPcount},
  {"nxt-state", &YruntimeYnxt_state},
  {"%index", &YruntimeYPindex},
  {"from-above", &YruntimeYfrom_above},
  {"write-char", &YruntimeYwrite_char},
  {"%primary-modulus", &YruntimeYPprimary_modulus},
  {"table-protocol", &YruntimeYtable_protocol},
  {"newline", &YruntimeYnewline},
  {"abs", &YruntimeYabs},
  {"format", &YruntimeYformat},
  {"%vacated-setter", &YruntimeYPvacated_setter},
  {"assqn", &YruntimeYassqn},
  {"copy-to-new-vector", &YruntimeYcopy_to_new_vector},
  {"handler-test-setter", &YruntimeYhandler_test_setter},
  {"<string-output-port>", &YruntimeYLstring_output_portG},
  {"incongruent-method-error-method", &YruntimeYincongruent_method_error_method},
  {"---main-0---", NULL},
  {"*", &YruntimeYT},
  {"assocs-vals", &YruntimeYassocs_vals},
  {"%with-monitor", &YruntimeYPwith_monitor},
  {"power-of-two-ceiling", &YruntimeYpower_of_two_ceiling},
  {"truncate/", &YruntimeYtruncateS},
  {"handler-condition-type-setter", &YruntimeYhandler_condition_type_setter},
  {"peek-char", &YruntimeYpeek_char},
  {"curry", &YruntimeYcurry},
  {"contagious-type", &YruntimeYcontagious_type},
  {"%count-setter", &YruntimeYPcount_setter},
  {"read-char", &YruntimeYread_char},
  {"3rd", &YruntimeY3rd},
  {"nyi-error", &YruntimeYnyi_error},
  {"---main-1---", NULL},
  {"max", &YruntimeYmax},
  {"eof-object", &YruntimeYeof_object},
  {"%vacated", &YruntimeYPvacated},
  {"%gc-state", &YruntimeYPgc_state},
  {"range-to", &YruntimeYrange_to},
  {"floor", &YruntimeYfloor},
  {"choose-handler", &YruntimeYchoose_handler},
  {"low-elt-setter", &YruntimeYlow_elt_setter},
  {"ascii->char", &YruntimeYascii_Gchar},
  {"modulo", &YruntimeYmodulo},
  {"default", &YruntimeYdefault},
  {"fab-map", &YruntimeYfab_map},
  {"range-from", &YruntimeYrange_from},
  {"find-key", &YruntimeYfind_key},
  {"reduce+", &YruntimeYreduceA},
  {"condition-message-setter", &YruntimeYcondition_message_setter},
  {"buf-dat", &YruntimeYbuf_dat},
  {"range-to-setter", &YruntimeYrange_to_setter},
  {"assoc-key", &YruntimeYassoc_key},
  {"nul?", &YruntimeYnulQ},
  {"$permanent-hash-state", &YruntimeYDpermanent_hash_state},
  {"nyi", &YruntimeYnyi},
  {"empty", &YruntimeYempty},
  {"step-then-setter", &YruntimeYstep_then_setter},
  {"port-index", &YruntimeYport_index},
  {"buf-dat-setter", &YruntimeYbuf_dat_setter},
  {"buf-len", &YruntimeYbuf_len},
  {"first-then", &YruntimeYfirst_then},
  {"range-from-setter", &YruntimeYrange_from_setter},
  {"remainder", &YruntimeYremainder},
  {"logior", &YruntimeYlogior},
  {"<assocs>", &YruntimeYLassocsG},
  {"decode-radix-option", &YruntimeYdecode_radix_option},
  {"*print-base*", &YruntimeYTprint_baseT},
  {"<=", &YruntimeYLE},
  {"=", &YruntimeYE},
  {"map-keyed", &YruntimeYmap_keyed},
  {"map2", &YruntimeYmap2},
  {"assoc-key-setter", &YruntimeYassoc_key_setter},
  {"handler-matches?", &YruntimeYhandler_matchesQ},
  {"default-handler-description", &YruntimeYdefault_handler_description},
  {"lowercase?", &YruntimeYlowercaseQ},
  {"choose-table-geometry", &YruntimeYchoose_table_geometry},
  {"pos?", &YruntimeYposQ},
  {"<string-input-port>", &YruntimeYLstring_input_portG},
  {"false-or", &YruntimeYfalse_or},
  {"<serious-condition>", &YruntimeYLserious_conditionG},
  {"<", &YruntimeYL},
  {"buf-len-setter", &YruntimeYbuf_len_setter},
  {"logxor", &YruntimeYlogxor},
  {"always", &YruntimeYalways},
  {"<output-port>", &YruntimeYLoutput_portG},
  {"sub-setter", &YruntimeYsub_setter},
  {"handler-info", &YruntimeYhandler_info},
  {"push", &YruntimeYpush},
  {"open-output-file", &YruntimeYopen_output_file},
  {"reduce", &YruntimeYreduce},
  {"buf", &YruntimeYbuf},
  {"invoke-handler-interactively", &YruntimeYinvoke_handler_interactively},
  {"~=", &YruntimeYNE},
  {"incongruent-method-error-method-setter", &YruntimeYincongruent_method_error_method_setter},
  {"assocs-vals-setter", &YruntimeYassocs_vals_setter},
  {">", &YruntimeYG},
  {"last", &YruntimeYlast},
  {"logand", &YruntimeYlogand},
  {"handler-active?", &YruntimeYhandler_activeQ},
  {"handler-info-message-setter", &YruntimeYhandler_info_message_setter},
  {"t<", &YruntimeYtL},
  {"from-to-by", &YruntimeYfrom_to_by},
  {"<simple-condition>", &YruntimeYLsimple_conditionG},
  {"trace", &YruntimeYtrace},
  {"do", &YruntimeYdo},
  {"boot-symbols", &YruntimeYboot_symbols},
  {"char->integer", &YruntimeYchar_Ginteger},
  {"force-output", &YruntimeYforce_output},
  {"fab", &YruntimeYfab},
  {"ceiling", &YruntimeYceiling},
  {"lognot", &YruntimeYlognot},
  {"rev!", &YruntimeYrevX},
  {"as", &YruntimeYas},
  {"sig", &YruntimeYsig},
  {"out", &YruntimeYout},
  {"%data-setter", &YruntimeYPdata_setter},
  {"assocs-test", &YruntimeYassocs_test},
  {"symbols", &YruntimeYsymbols},
  {"ascii-limit", &YruntimeYascii_limit},
  {"low-elt", &YruntimeYlow_elt},
  {"default-handler", &YruntimeYdefault_handler},
  {"t=", &YruntimeYtE},
  {"%list", &YruntimeYPlist},
  {"%data", &YruntimeYPdata},
  {"rev", &YruntimeYrev},
  {"<simple-table-vector>", &YruntimeYLsimple_table_vectorG},
  {"build-condition-interactively", &YruntimeYbuild_condition_interactively},
  {"%cat", &YruntimeYPcat},
  {"port-guts", &YruntimeYport_guts},
  {"all2?", &YruntimeYall2Q},
  {"*twin-primes*", &YruntimeYTtwin_primesT},
  {"uppercase?", &YruntimeYuppercaseQ},
  {"do-keyed", &YruntimeYdo_keyed},
  {"booted-fab-sym", &YruntimeYbooted_fab_sym},
  {"t+", &YruntimeYtA},
  {"add-new", &YruntimeYadd_new},
  {"$empty-cell-marker", &YruntimeYDempty_cell_marker},
  {"cat2", &YruntimeYcat2},
  {"copy-state", &YruntimeYcopy_state},
  {"mem?", &YruntimeYmemQ},
  {"alphabetic?", &YruntimeYalphabeticQ},
  {"zero?", &YruntimeYzeroQ},
  {"list-handlers", &YruntimeYlist_handlers},
  {"cat!", &YruntimeYcatX},
  {"%n-buckets-setter", &YruntimeYPn_buckets_setter},
  {"handler-info-setter", &YruntimeYhandler_info_setter},
  {"build-condition-for-handler-interactively", &YruntimeYbuild_condition_for_handler_interactively},
  {"signal-handler-list", &YruntimeYsignal_handler_list},
  {"<error>", &YruntimeYLerrorG},
  {"close-input-port", &YruntimeYclose_input_port},
  {">=", &YruntimeYGE},
  {"handler-function-setter", &YruntimeYhandler_function_setter},
  {"port-contents", &YruntimeYport_contents},
  {"as-copy", &YruntimeYas_copy},
  {"pop-last!", &YruntimeYpop_lastX},
  {"hash-moduli", &YruntimeYhash_moduli},
  {"add!", &YruntimeYaddX},
  {"assocs-test-setter", &YruntimeYassocs_test_setter},
  {"make-handler", &YruntimeYmake_handler},
  {"%secondary-modulus", &YruntimeYPsecondary_modulus},
  {"<map>", &YruntimeYLmapG},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"add", "add"},
  {"<handler-info>", "<handler-info>"},
  {"round", "round"},
  {"elt", "elt"},
  {"condition-arguments", "condition-arguments"},
  {"from-below-by", "from-below-by"},
  {"<simple-condition>", "<simple-condition>"},
  {"elt-setter", "elt-setter"},
  {"from", "from"},
  {"logbit?", "logbit?"},
  {"identity", "identity"},
  {"~==", "~=="},
  {"keys", "keys"},
  {"even?", "even?"},
  {"call-with-string-input-port", "call-with-string-input-port"},
  {"var-type", "var-type"},
  {"describe-handler", "describe-handler"},
  {"len", "len"},
  {"build-condition-for-handler-interactively", "build-condition-for-handler-interactively"},
  {"from-to", "from-to"},
  {"format-to-string", "format-to-string"},
  {"char-ready?", "char-ready?"},
  {"str-to-num", "str-to-num"},
  {"in", "in"},
  {"as-lowercase", "as-lowercase"},
  {"neg?", "neg?"},
  {"<simple-error>", "<simple-error>"},
  {"list", "list"},
  {"any?", "any?"},
  {"all?", "all?"},
  {"<condition>", "<condition>"},
  {"fill", "fill"},
  {"close-output-port", "close-output-port"},
  {"$default-handler-info", "$default-handler-info"},
  {"1st", "1st"},
  {"<string-port>", "<string-port>"},
  {"ascii-whitespaces", "ascii-whitespaces"},
  {"<port>", "<port>"},
  {"pop", "pop"},
  {"vec", "vec"},
  {"numeric?", "numeric?"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"<restart>", "<restart>"},
  {"assoc-value", "assoc-value"},
  {"<list>", "<list>"},
  {"<file-port>", "<file-port>"},
  {"var-name", "var-name"},
  {"assocq", "assocq"},
  {"match-unquote", "match-unquote"},
  {"alter", "alter"},
  {"str", "str"},
  {"sub", "sub"},
  {"<str-tab>", "<str-tab>"},
  {"app-args", "app-args"},
  {"default-handler", "default-handler"},
  {"from-by", "from-by"},
  {"<input-port>", "<input-port>"},
  {"del-keys", "del-keys"},
  {"table-growth-threshold", "table-growth-threshold"},
  {"<handler>", "<handler>"},
  {"/", "/"},
  {"app-filename", "app-filename"},
  {"<step>", "<step>"},
  {"truncate", "truncate"},
  {"pick", "pick"},
  {"pos", "pos"},
  {"min", "min"},
  {"<replace-generic-restart>", "<replace-generic-restart>"},
  {"del-dups", "del-dups"},
  {"fabs", "fabs"},
  {"do3", "do3"},
  {"odd?", "odd?"},
  {"from-above-by", "from-above-by"},
  {"assq", "assq"},
  {"len-setter", "len-setter"},
  {"id-hash", "id-hash"},
  {"<tab>", "<tab>"},
  {"table-shrink-threshold", "table-shrink-threshold"},
  {"assoc", "assoc"},
  {"neg", "neg"},
  {"ini-state", "ini-state"},
  {"as-uppercase", "as-uppercase"},
  {"write-string", "write-string"},
  {"current-gc-state", "current-gc-state"},
  {"locative-value-setter", "locative-value-setter"},
  {"open-input-file", "open-input-file"},
  {"eof-object?", "eof-object?"},
  {"<range>", "<range>"},
  {"from-below", "from-below"},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"match-empty-list", "match-empty-list"},
  {"$permanent-hash-state", "$permanent-hash-state"},
  {"push-last!", "push-last!"},
  {"fin-state?", "fin-state?"},
  {"2nd", "2nd"},
  {"call-with-input-file", "call-with-input-file"},
  {"pair", "pair"},
  {"<buf>", "<buf>"},
  {"-", "-"},
  {"locative-value", "locative-value"},
  {"condition-message", "condition-message"},
  {"zero?", "zero?"},
  {"call-with-output-file", "call-with-output-file"},
  {"rcurry", "rcurry"},
  {"del", "del"},
  {"call-with-string-output-port", "call-with-string-output-port"},
  {"empty?", "empty?"},
  {"read", "read"},
  {"table-growth-factor", "table-growth-factor"},
  {"ceiling/", "ceiling/"},
  {"<incongruent-method-error>", "<incongruent-method-error>"},
  {"to-digit", "to-digit"},
  {"floor/", "floor/"},
  {"compose", "compose"},
  {"describe-condition", "describe-condition"},
  {"do2", "do2"},
  {"now-elt", "now-elt"},
  {"now-elt-setter", "now-elt-setter"},
  {"write-char", "write-char"},
  {"round/", "round/"},
  {"num-to-str", "num-to-str"},
  {"lsh", "lsh"},
  {"to-str", "to-str"},
  {"ash", "ash"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"char->ascii", "char->ascii"},
  {"flo-bits", "flo-bits"},
  {"del-key", "del-key"},
  {"<file-output-port>", "<file-output-port>"},
  {"nxt-state", "nxt-state"},
  {"match-atom", "match-atom"},
  {"from-above", "from-above"},
  {"address-of", "address-of"},
  {"table-protocol", "table-protocol"},
  {"==", "=="},
  {"newline", "newline"},
  {"error", "error"},
  {"abs", "abs"},
  {"now-key", "now-key"},
  {"format", "format"},
  {"assqn", "assqn"},
  {"tup", "tup"},
  {"<string-output-port>", "<string-output-port>"},
  {"*", "*"},
  {"rev!", "rev!"},
  {"%with-monitor", "%with-monitor"},
  {"+", "+"},
  {"truncate/", "truncate/"},
  {"peek-char", "peek-char"},
  {"curry", "curry"},
  {"handler-info-message", "handler-info-message"},
  {"read-char", "read-char"},
  {"3rd", "3rd"},
  {"max", "max"},
  {"eof-object", "eof-object"},
  {"floor", "floor"},
  {"choose-handler", "choose-handler"},
  {"modulo", "modulo"},
  {"default", "default"},
  {"find-key", "find-key"},
  {"reduce+", "reduce+"},
  {"map", "map"},
  {"gensym", "gensym"},
  {"nul?", "nul?"},
  {"empty", "empty"},
  {"port-index", "port-index"},
  {"lst", "lst"},
  {"first-then", "first-then"},
  {"remainder", "remainder"},
  {"logior", "logior"},
  {"<assocs>", "<assocs>"},
  {"*print-base*", "*print-base*"},
  {"<=", "<="},
  {"=", "="},
  {"map2", "map2"},
  {"handler-matches?", "handler-matches?"},
  {"default-handler-description", "default-handler-description"},
  {"lowercase?", "lowercase?"},
  {"pos?", "pos?"},
  {"<string-input-port>", "<string-input-port>"},
  {"false-or", "false-or"},
  {"<serious-condition>", "<serious-condition>"},
  {"<", "<"},
  {"handler-function", "handler-function"},
  {"logxor", "logxor"},
  {"always", "always"},
  {"<output-port>", "<output-port>"},
  {"sub-setter", "sub-setter"},
  {"push", "push"},
  {"open-output-file", "open-output-file"},
  {"buf", "buf"},
  {"invoke-handler-interactively", "invoke-handler-interactively"},
  {"~=", "~="},
  {"cat", "cat"},
  {">", ">"},
  {"last", "last"},
  {"logand", "logand"},
  {"t<", "t<"},
  {"from-to-by", "from-to-by"},
  {"do", "do"},
  {"force-output", "force-output"},
  {"fab", "fab"},
  {"ceiling", "ceiling"},
  {"lognot", "lognot"},
  {"as", "as"},
  {"out", "out"},
  {"assocs-test", "assocs-test"},
  {"ascii-limit", "ascii-limit"},
  {"t=", "t="},
  {"rev", "rev"},
  {"make-sym", "make-sym"},
  {"build-condition-interactively", "build-condition-interactively"},
  {"<file-input-port>", "<file-input-port>"},
  {"reduce", "reduce"},
  {"sig", "sig"},
  {"uppercase?", "uppercase?"},
  {"do-keyed", "do-keyed"},
  {"map-keyed", "map-keyed"},
  {"t+", "t+"},
  {"cat2", "cat2"},
  {"copy-state", "copy-state"},
  {"mem?", "mem?"},
  {"alphabetic?", "alphabetic?"},
  {"match-sublist", "match-sublist"},
  {"list-handlers", "list-handlers"},
  {"cat!", "cat!"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"<error>", "<error>"},
  {"close-input-port", "close-input-port"},
  {">=", ">="},
  {"port-contents", "port-contents"},
  {"make-setter-name", "make-setter-name"},
  {"pop-last!", "pop-last!"},
  {"add!", "add!"},
  {"make-handler", "make-handler"},
  {"<map>", "<map>"},
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
