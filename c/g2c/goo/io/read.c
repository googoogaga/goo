/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: read */

EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YmacrosYmap,"macros","map");
EXT(Ynul,"boot","nul");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
DEF(YreadYLreader_tokenG,"read","<reader-token>");
EXT(Ysig_value,"boot","sig-value");
EXT(YruntimeYin,"runtime","in");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYalways,"runtime","always");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YLintG,"boot","<int>");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(Yfun_value,"boot","fun-value");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(Ysig_names,"boot","sig-names");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YDmin_int,"boot","$min-int");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YLlogG,"boot","<log>");
DEF(YreadYread_string_literal,"read","read-string-literal");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYlsh,"runtime","lsh");
DEF(YreadYDstrange_symbol_names,"read","$strange-symbol-names");
DEF(YreadYmake_immutableX,"read","make-immutable!");
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
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Ynot,"boot","not");
DEF(YreadYsub_read_carefully,"read","sub-read-carefully");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
DEF(YreadYset_standard_syntaxX,"read","set-standard-syntax!");
EXT(YruntimeY_,"runtime","-");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYabs,"runtime","abs");
EXT(Yclass_parents,"boot","class-parents");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYmax,"runtime","max");
DEF(YreadYTsharp_macrosT,"read","*sharp-macros*");
EXT(YLanyG,"boot","<any>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
DEF(YreadYreading_error,"read","reading-error");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YLunionG,"boot","<union>");
EXT(Ylst,"boot","lst");
EXT(Yslot_value,"boot","slot-value");
EXT(YDmax_int,"boot","$max-int");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYcat,"macros","cat");
DEF(YreadYsub_read_constituent,"read","sub-read-constituent");
DEF(YreadYreverse_list_Gstring,"read","reverse-list->string");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYpick,"runtime","pick");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YruntimeYlast,"runtime","last");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YruntimeYlow_elt,"runtime","low-elt");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
DEF(YreadYparse_token,"read","parse-token");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYall2Q,"runtime","all2?");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
EXT(Yunexec,"boot","unexec");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YPsnul,"boot","%snul");
EXT(Yerror,"boot","error");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYrev,"runtime","rev");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYNE,"runtime","~=");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYsig,"runtime","sig");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYL,"runtime","<");
EXT(YruntimeYpop,"runtime","pop");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
DEF(YreadYtoken_message_setter,"read","token-message-setter");
EXT(YruntimeYdefault,"runtime","default");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYcatX,"runtime","cat!");
DEF(YreadYDstring_escape_chars,"read","$string-escape-chars");
EXT(YruntimeYlen,"runtime","len");
EXT(YmacrosYnapply,"macros","napply");
EXT(YruntimeYE,"runtime","=");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYany2Q,"runtime","any2?");
EXT(Ytype_object,"boot","type-object");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YruntimeYassq,"runtime","assq");
EXT(YLtypeG,"boot","<type>");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeYpush,"runtime","push");
DEF(YreadYDclose_paren,"read","$close-paren");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYfill,"runtime","fill");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
DEF(YreadYsub_read_list,"read","sub-read-list");
EXT(YruntimeYfrom,"runtime","from");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYfirst_then,"runtime","first-then");
DEF(YreadYread_from_string,"read","read-from-string");
EXT(Yslot_init,"boot","slot-init");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
DEF(YreadYdefine_sharp_macro,"read","define-sharp-macro");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYzeroQ,"runtime","zero?");
DEF(YreadYsub_read,"read","sub-read");
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
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YruntimeYnewline,"runtime","newline");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
DEF(YreadYTread_dispatch_vectorT,"read","*read-dispatch-vector*");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYvec,"runtime","vec");
EXT(YLstrG,"boot","<str>");
DEF(YreadYgobble_line,"read","gobble-line");
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeY1st,"runtime","1st");
DEF(YreadYTread_terminatingQ_vectorT,"read","*read-terminating?-vector*");
DEF(YreadYsub_read_token,"read","sub-read-token");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYdo,"runtime","do");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
DEF(YreadYtoken_message,"read","token-message");
EXT(YruntimeYapp_filename,"runtime","app-filename");
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
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYlist,"runtime","list");
EXT(Yhead,"boot","head");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
DEF(YreadYwarn,"read","warn");
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
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YLfunG,"boot","<fun>");
DEF(YreadYreader_tokenQ,"read","reader-token?");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYempty,"runtime","empty");
DEF(YreadYDchar_long_names,"read","$char-long-names");
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
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYlocative_value,"runtime","locative-value");
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
DEF(YreadYset_standard_read_macroX,"read","set-standard-read-macro!");
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
DEF(YreadYpreferred_case,"read","preferred-case");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYdel,"runtime","del");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
DEF(YreadYDdot,"read","$dot");
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
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(Ytype_elts,"boot","type-elts");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYneg,"runtime","neg");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYfind_key,"runtime","find-key");
DEF(YreadYmake_reader_token,"read","make-reader-token");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_12);
DEFLIT(lit_35);
DEFLIT(lit_56);
DEFLIT(lit_40);
DEFLIT(lit_68);
DEFLIT(lit_22);
DEFLIT(lit_19);
DEFLIT(lit_60);
DEFLIT(lit_17);
DEFLIT(lit_11);
DEFLIT(lit_18);
DEFLIT(lit_10);
DEFLIT(lit_41);
DEFLIT(lit_24);
DEFLIT(lit_50);
DEFLIT(lit_21);
DEFLIT(lit_25);
DEFLIT(lit_34);
DEFLIT(lit_26);
DEFLIT(lit_51);
DEFLIT(lit_28);
DEFLIT(lit_29);
DEFLIT(lit_31);
DEFLIT(lit_37);
DEFLIT(lit_3);
DEFLIT(lit_14);
DEFLIT(lit_7);
DEFLIT(lit_49);
DEFLIT(lit_63);
DEFLIT(lit_52);
DEFLIT(lit_47);
DEFLIT(lit_20);
DEFLIT(lit_0);
DEFLIT(lit_43);
DEFLIT(lit_2);
DEFLIT(lit_4);
DEFLIT(lit_5);
DEFLIT(lit_6);
DEFLIT(lit_55);
DEFLIT(lit_16);
DEFLIT(lit_62);
DEFLIT(lit_58);
DEFLIT(lit_8);
DEFLIT(lit_38);
DEFLIT(lit_45);
DEFLIT(lit_54);
DEFLIT(lit_32);
DEFLIT(lit_57);
DEFLIT(lit_13);
DEFLIT(lit_61);
DEFLIT(lit_48);
DEFLIT(lit_1);
DEFLIT(lit_23);
DEFLIT(lit_53);
DEFLIT(lit_30);
DEFLIT(lit_64);
DEFLIT(lit_15);
DEFLIT(lit_27);
DEFLIT(lit_9);
DEFLIT(lit_42);
DEFLIT(lit_59);
DEFLIT(lit_36);
DEFLIT(lit_66);
DEFLIT(lit_65);
DEFLIT(lit_44);
DEFLIT(lit_67);
DEFLIT(lit_46);
DEFLIT(lit_39);
DEFLIT(lit_33);

/* FUNCTIONS: */

LOCFOR(fun_loop_0);
LOCFOR(fun_read_1);
LOCFOR(fun_read_from_string_2);
LOCFOR(fun_sub_read_carefully_3);
LOCFOR(fun_token_message_4);
LOCFOR(fun_token_message_setter_5);
LOCFOR(fun_6);
LOCFOR(fun_make_reader_token_7);
LOCFOR(fun_reader_tokenQ_8);
LOCFOR(fun_sub_read_9);
LOCFOR(fun_10);
LOCFOR(fun_set_standard_syntaxX_11);
LOCFOR(fun_12);
LOCFOR(fun_13);
FUNFOR(YreadYsub_read_constituent);
LOCFOR(fun_15);
LOCFOR(fun_set_standard_read_macroX_16);
LOCFOR(fun_sub_read_list_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_loop_22);
FUNFOR(YreadYread_string_literal);
LOCFOR(fun_24);
LOCFOR(fun_loop_25);
LOCFOR(fun_gobble_line_26);
LOCFOR(fun_define_sharp_macro_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_loop_35);
LOCFOR(fun_sub_read_token_36);
LOCFOR(fun_37);
LOCFOR(fun_parse_token_38);
LOCFOR(fun_reading_error_39);
LOCFOR(fun_warn_40);
LOCFOR(fun_reverse_list_Gstring_41);
LOCFOR(fun_make_immutableX_42);
extern P YreadY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_loop_0) {
  P formF1066;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YreadYsub_read),FREEREF(0));
  formF1066 = T1;
  T4 = CALL1(1,VARREF(YreadYreader_tokenQ),formF1066);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T2 = formF1066;
  } else {
    T6 = CALL2(1,VARREF(YmacrosYEE),formF1066,VARREF(YreadYDclose_paren));
    if (T6 != YPfalse) {
      T7 = CALL1(1,VARREF(YreadYwarn),LITREF(lit_3));
      T5 = T7;
    } else {
      goto loop;
      T5 = T8;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_1) {
  P port_;
  P loopF1067;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_0,2);
  loopF1067 = T1;
  FUNINIT(loopF1067, 2,port_,loopF1067);
  T2 = CALL0(0,loopF1067);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_from_string_2) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YruntimeYcall_with_string_input_port),x_,VARREF(YruntimeYread));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_carefully_3) {
  P port_;
  P formF1068;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YreadYsub_read),port_);
  formF1068 = T1;
  T3 = CALL1(1,VARREF(YruntimeYeof_objectQ),formF1068);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YreadYreading_error),port_,LITREF(lit_7));
    T2 = T4;
  } else {
    T6 = CALL1(1,VARREF(YreadYreader_tokenQ),formF1068);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),formF1068);
      T7 = CALL2(1,VARREF(YreadYreading_error),port_,T8);
      T5 = T7;
    } else {
      T5 = formF1068;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_token_message_4) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yslot_value),Ux_,VARREF(YreadYtoken_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_token_message_setter_5) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yslot_value_setter),Uz_,Ux_,VARREF(YreadYtoken_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_make_reader_token_7) {
  P message_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(message_, 0);
loop:
  T1 = (P)YPpair(VARREF(YreadYtoken_message),Ynil);
  T2 = (P)YPpair(message_,Ynil);
  T0 = CALL3(1,VARREF(YPisa),VARREF(YreadYLreader_tokenG),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reader_tokenQ_8) {
  P form_;
  P T0;
  P a1;
LINK_STACK();
  ARG(form_, 0);
loop:
  T0 = CALL2(1,VARREF(YisaQ),form_,VARREF(YreadYLreader_tokenG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sub_read_9) {
  P port_;
  P cF1069;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YruntimeYread_char),port_);
  cF1069 = T1;
  T3 = CALL1(1,VARREF(YruntimeYeof_objectQ),cF1069);
  if (T3 != YPfalse) {
    T2 = cF1069;
  } else {
    T6 = CALL1(1,VARREF(YruntimeYchar_Gascii),cF1069);
    T5 = CALL2(1,VARREF(YmacrosYelt),VARREF(YreadYTread_dispatch_vectorT),T6);
    T4 = CALL2(1,T5,cF1069,port_);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T0 = CALL3(1,VARREF(YreadYreading_error),port_,LITREF(lit_21),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_set_standard_syntaxX_11) {
  P char_,terminatingQ_,reader_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(char_, 0);
  ARG(terminatingQ_, 1);
  ARG(reader_, 2);
loop:
  T0 = CALL1(1,VARREF(YruntimeYchar_Gascii),char_);
  CALL3(1,VARREF(YruntimeYelt_setter),reader_,VARREF(YreadYTread_dispatch_vectorT),T0);
  T2 = CALL1(1,VARREF(YruntimeYchar_Gascii),char_);
  T1 = CALL3(1,VARREF(YruntimeYelt_setter),terminatingQ_,VARREF(YreadYTread_terminatingQ_vectorT),T2);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_12) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T0 = CALL1(1,VARREF(YreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL3(1,VARREF(YruntimeYelt_setter),FREEREF(0),VARREF(YreadYTread_dispatch_vectorT),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YreadYsub_read_constituent) {
  P c_,port_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL2(1,VARREF(YreadYsub_read_token),c_,port_);
  T0 = CALL2(1,VARREF(YreadYparse_token),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL3(1,VARREF(YreadYset_standard_syntaxX),c_,YPfalse,VARREF(YreadYsub_read_constituent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_set_standard_read_macroX_16) {
  P char_,terminatingQ_,proc_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(char_, 0);
  ARG(terminatingQ_, 1);
  ARG(proc_, 2);
loop:
  T0 = CALL3(1,VARREF(YreadYset_standard_syntaxX),char_,terminatingQ_,proc_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_list_17) {
  P c_,port_;
  P another_formF1072;
  P last_formF1071;
  P formF1070;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YreadYsub_read),port_);
  formF1070 = T1;
  T3 = CALL1(1,VARREF(YruntimeYeof_objectQ),formF1070);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YreadYreading_error),port_,LITREF(lit_32));
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YmacrosYEE),formF1070,VARREF(YreadYDclose_paren));
    if (T6 != YPfalse) {
      T5 = Ynil;
    } else {
      T8 = CALL2(1,VARREF(YmacrosYEE),formF1070,VARREF(YreadYDdot));
      if (T8 != YPfalse) {
        T10 = CALL1(1,VARREF(YreadYsub_read_carefully),port_);
        last_formF1071 = T10;
        T12 = CALL1(1,VARREF(YreadYsub_read),port_);
        another_formF1072 = T12;
        T14 = CALL2(1,VARREF(YmacrosYEE),another_formF1072,VARREF(YreadYDclose_paren));
        if (T14 != YPfalse) {
          T13 = last_formF1071;
        } else {
          T15 = CALL3(1,VARREF(YreadYreading_error),port_,LITREF(lit_33),another_formF1072);
          T13 = T15;
        }
        T11 = T13;
        T9 = T11;
        T7 = T9;
      } else {
        T17 = CALL2(1,VARREF(YreadYsub_read_list),c_,port_);
        T16 = CALL2(1,VARREF(YmacrosYpair),formF1070,T17);
        T7 = T16;
      }
      T5 = T7;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
UNLINK_STACK();
  QRET(VARREF(YreadYDclose_paren));
}

FUNCODEDEF(fun_19) {
  P c_,port_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_34),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P c_,port_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_35),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  P c_,port_;
  P keywordF1074;
  P nextF1073;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YruntimeYpeek_char),port_);
  nextF1073 = T1;
  T4 = CALL1(1,VARREF(YruntimeYeof_objectQ),nextF1073);
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YreadYreading_error),port_,LITREF(lit_36));
    T3 = T5;
  } else {
    T7 = CALL2(1,VARREF(YruntimeYE),nextF1073,YPchr((P)64));
    if (T7 != YPfalse) {
      CALL1(1,VARREF(YruntimeYread_char),port_);
      T6 = LITREF(lit_37);
    } else {
      T6 = LITREF(lit_38);
    }
    T3 = T6;
  }
  keywordF1074 = T3;
  T9 = CALL1(1,VARREF(YreadYsub_read_carefully),port_);
  T8 = CALL2(1,VARREF(Ylst),keywordF1074,T9);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_22) {
  P l_,i_;
  P ecF1078;
  P tmpF1077;
  P cF1076;
  P cF1075;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YruntimeYread_char),FREEREF(0));
  cF1075 = T1;
  T3 = CALL1(1,VARREF(YruntimeYeof_objectQ),cF1075);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YreadYreading_error),FREEREF(0),LITREF(lit_42));
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YruntimeYE),cF1075,YPchr((P)92));
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(YruntimeYread_char),FREEREF(0));
      cF1076 = T8;
      T10 = CALL1(1,VARREF(YruntimeYeof_objectQ),cF1076);
      if (T10 != YPfalse) {
        T11 = CALL2(1,VARREF(YreadYreading_error),FREEREF(0),LITREF(lit_43));
        T9 = T11;
      } else {
        T14 = CALL2(1,VARREF(YruntimeYE),cF1076,YPchr((P)92));
        tmpF1077 = T14;
        if (tmpF1077 != YPfalse) {
          T15 = tmpF1077;
        } else {
          T16 = CALL2(1,VARREF(YruntimeYE),cF1076,YPchr((P)34));
          T15 = T16;
        }
        T13 = T15;
        if (T13 != YPfalse) {
          T18 = CALL2(1,VARREF(YmacrosYpair),cF1076,l_);
          T19 = CALL2(1,VARREF(YruntimeYA),i_,YPint((P)1));
          a1 = T18;
          a2 = T19;
          l_ = a1;
          i_ = a2;
          goto loop;
          T12 = T17;
        } else {
          T22 = CALL2(1,VARREF(YruntimeYas),VARREF(YLintG),cF1076);
          T21 = CALL2(1,VARREF(YmacrosYelt),VARREF(YreadYDstring_escape_chars),T22);
          ecF1078 = T21;
          if (ecF1078 != YPfalse) {
            T25 = CALL2(1,VARREF(YmacrosYpair),ecF1078,l_);
            T26 = CALL2(1,VARREF(YruntimeYA),i_,YPint((P)1));
            a1 = T25;
            a2 = T26;
            l_ = a1;
            i_ = a2;
            goto loop;
            T23 = T24;
          } else {
            T27 = CALL3(1,VARREF(YreadYreading_error),FREEREF(0),LITREF(lit_44),cF1076);
            T23 = T27;
          }
          T20 = T23;
          T12 = T20;
        }
        T9 = T12;
      }
      T7 = T9;
      T5 = T7;
    } else {
      T29 = CALL2(1,VARREF(YruntimeYE),cF1075,YPchr((P)34));
      if (T29 != YPfalse) {
        T30 = CALL2(1,VARREF(YreadYreverse_list_Gstring),l_,i_);
        T28 = T30;
      } else {
        T32 = CALL2(1,VARREF(YmacrosYpair),cF1075,l_);
        T33 = CALL2(1,VARREF(YruntimeYA),i_,YPint((P)1));
        a1 = T32;
        a2 = T33;
        l_ = a1;
        i_ = a2;
        goto loop;
        T28 = T31;
      }
      T5 = T28;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YreadYread_string_literal) {
  P c_,port_;
  P loopF1079;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_22,2);
  loopF1079 = T1;
  FUNINIT(loopF1079, 2,port_,loopF1079);
  T2 = CALL2(0,loopF1079,Ynil,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YreadYgobble_line),port_);
  T0 = CALL1(1,VARREF(YreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_25) {
  P cF1080;
  P T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YruntimeYread_char),FREEREF(0));
  cF1080 = T1;
  T3 = CALL1(1,VARREF(YruntimeYeof_objectQ),cF1080);
  if (T3 != YPfalse) {
    T2 = cF1080;
  } else {
    T5 = CALL2(1,VARREF(YruntimeYE),cF1080,YPchr((P)10));
    if (T5 != YPfalse) {
      T4 = YPfalse;
    } else {
      goto loop;
      T4 = T6;
    }
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gobble_line_26) {
  P port_;
  P loopF1081;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_25,2);
  loopF1081 = T1;
  FUNINIT(loopF1081, 2,port_,loopF1081);
  T2 = CALL0(0,loopF1081);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_define_sharp_macro_27) {
  P c_,proc_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(proc_, 1);
loop:
  T2 = CALL2(1,VARREF(Ylst),c_,proc_);
  T1 = CALL2(1,VARREF(YmacrosYpair),T2,VARREF(YreadYTsharp_macrosT));
  T0 = VARSET(YreadYTsharp_macrosT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P c_,port_;
  P probeF1084;
  P cF1083;
  P cF1082;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YruntimeYpeek_char),port_);
  cF1082 = T1;
  T4 = CALL1(1,VARREF(YruntimeYeof_objectQ),cF1082);
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YreadYreading_error),port_,LITREF(lit_47));
    T3 = T5;
  } else {
    T6 = CALL1(1,VARREF(YruntimeYas_lowercase),cF1082);
    T3 = T6;
  }
  cF1083 = T3;
  T8 = CALL2(1,VARREF(YruntimeYassq),cF1083,VARREF(YreadYTsharp_macrosT));
  probeF1084 = T8;
  if (probeF1084 != YPfalse) {
    T12 = CALL1(1,VARREF(Ytail),probeF1084);
    T11 = CALL1(1,VARREF(Yhead),T12);
    T10 = CALL2(1,T11,cF1083,port_);
    T9 = T10;
  } else {
    T13 = CALL3(1,VARREF(YreadYreading_error),port_,LITREF(lit_48),cF1083);
    T9 = T13;
  }
  T7 = T9;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YruntimeYread_char),port_);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_30) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YruntimeYread_char),port_);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_31) {
  P c_,port_;
  P tempF1087;
  P nameF1086;
  P cF1085;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YruntimeYread_char),port_);
  T1 = CALL1(1,VARREF(YruntimeYpeek_char),port_);
  cF1085 = T1;
  T3 = CALL1(1,VARREF(YruntimeYeof_objectQ),cF1085);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YreadYreading_error),port_,LITREF(lit_50));
    T2 = T4;
  } else {
    T6 = CALL1(1,VARREF(YruntimeYalphabeticQ),cF1085);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(YreadYsub_read_carefully),port_);
      nameF1086 = T8;
      T12 = CALL2(1,VARREF(YruntimeYas),VARREF(YLstrG),nameF1086);
      T11 = CALL1(1,VARREF(YruntimeYlen),T12);
      T10 = CALL2(1,VARREF(YruntimeYE),T11,YPint((P)1));
      if (T10 != YPfalse) {
        T9 = cF1085;
      } else {
        T14 = CALL2(1,VARREF(YruntimeYassq),nameF1086,VARREF(YreadYDchar_long_names));
        tempF1087 = T14;
        if (tempF1087 != YPfalse) {
          T17 = CALL1(1,VARREF(Ytail),tempF1087);
          T16 = CALL1(1,VARREF(Yhead),T17);
          T15 = T16;
        } else {
          T18 = CALL3(1,VARREF(YreadYreading_error),port_,LITREF(lit_51),nameF1086);
          T15 = T18;
        }
        T13 = T15;
        T9 = T13;
      }
      T7 = T9;
      T5 = T7;
    } else {
      T19 = CALL1(1,VARREF(YruntimeYread_char),port_);
      T5 = T19;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P c_,port_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YruntimeYread_char),port_);
  T1 = CALL2(1,VARREF(YreadYsub_read_list),c_,port_);
  T0 = CALL2(1,VARREF(YruntimeYas),VARREF(YLvecG),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P c_,port_;
  P tmpF1089;
  P stringF1088;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL2(1,VARREF(YreadYsub_read_token),YPchr((P)35),port_);
  stringF1088 = T1;
  T3 = CALL1(1,VARREF(YruntimeYstr_to_num),stringF1088);
  tmpF1089 = T3;
  if (tmpF1089 != YPfalse) {
    T4 = tmpF1089;
  } else {
    T5 = CALL3(1,VARREF(YreadYreading_error),port_,LITREF(lit_52),stringF1088);
    T4 = T5;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL2(1,VARREF(YreadYdefine_sharp_macro),c_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_35) {
  P l_,n_;
  P tmpF1091;
  P cF1090;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,VARREF(YruntimeYpeek_char),FREEREF(0));
  cF1090 = T1;
  T4 = CALL1(1,VARREF(YruntimeYeof_objectQ),cF1090);
  tmpF1091 = T4;
  if (tmpF1091 != YPfalse) {
    T5 = tmpF1091;
  } else {
    T7 = CALL1(1,VARREF(YruntimeYchar_Gascii),cF1090);
    T6 = CALL2(1,VARREF(YmacrosYelt),VARREF(YreadYTread_terminatingQ_vectorT),T7);
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T8 = CALL2(1,VARREF(YreadYreverse_list_Gstring),l_,n_);
    T2 = T8;
  } else {
    T12 = CALL1(1,VARREF(YruntimeYread_char),FREEREF(0));
    T11 = CALL1(1,VARREF(YreadYpreferred_case),T12);
    T10 = CALL2(1,VARREF(YmacrosYpair),T11,l_);
    T13 = CALL2(1,VARREF(YruntimeYA),n_,YPint((P)1));
    a1 = T10;
    a2 = T13;
    l_ = a1;
    n_ = a2;
    goto loop;
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_token_36) {
  P c_,port_;
  P loopF1092;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_35,2);
  loopF1092 = T1;
  FUNINIT(loopF1092, 2,port_,loopF1092);
  T4 = CALL1(1,VARREF(YreadYpreferred_case),c_);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T2 = CALL2(0,loopF1092,T3,YPint((P)1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YruntimeYE),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_token_38) {
  P string_,port_;
  P maybe_numberF1097;
  P tmpF1096;
  P tmpF1095;
  P tmpF1094;
  P cF1093;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(string_, 0);
  ARG(port_, 1);
loop:
  T2 = CALL2(1,VARREF(YmacrosYelt),string_,YPint((P)0));
  cF1093 = T2;
  T4 = CALL1(1,VARREF(YruntimeYnumericQ),cF1093);
  tmpF1094 = T4;
  if (tmpF1094 != YPfalse) {
    T5 = tmpF1094;
  } else {
    T7 = CALL2(1,VARREF(YruntimeYE),cF1093,YPchr((P)43));
    tmpF1095 = T7;
    if (tmpF1095 != YPfalse) {
      T8 = tmpF1095;
    } else {
      T10 = CALL2(1,VARREF(YruntimeYE),cF1093,YPchr((P)45));
      tmpF1096 = T10;
      if (tmpF1096 != YPfalse) {
        T11 = tmpF1096;
      } else {
        T12 = CALL2(1,VARREF(YruntimeYE),cF1093,YPchr((P)46));
        T11 = T12;
      }
      T9 = T11;
      T8 = T9;
    }
    T6 = T8;
    T5 = T6;
  }
  T3 = T5;
  T1 = T3;
  if (T1 != YPfalse) {
    T14 = CALL1(1,VARREF(YruntimeYstr_to_num),string_);
    maybe_numberF1097 = T14;
    if (maybe_numberF1097 != YPfalse) {
      T15 = maybe_numberF1097;
    } else {
      T18 = FUNFAB(fun_37,1,string_);
      T17 = CALL2(1,VARREF(YruntimeYanyQ),T18,VARREF(YreadYDstrange_symbol_names));
      if (T17 != YPfalse) {
        T20 = CALL1(1,VARREF(YreadYmake_immutableX),string_);
        T19 = CALL2(1,VARREF(YruntimeYas),VARREF(YLsymG),T20);
        T16 = T19;
      } else {
        T22 = CALL2(1,VARREF(YruntimeYE),string_,LITREF(lit_58));
        if (T22 != YPfalse) {
          T21 = VARREF(YreadYDdot);
        } else {
          T23 = CALL3(1,VARREF(YreadYreading_error),port_,LITREF(lit_59),string_);
          T21 = T23;
        }
        T16 = T21;
      }
      T15 = T16;
    }
    T13 = T15;
    T0 = T13;
  } else {
    T25 = CALL1(1,VARREF(YreadYmake_immutableX),string_);
    T24 = CALL2(1,VARREF(YruntimeYas),VARREF(YLsymG),T25);
    T0 = T24;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reading_error_39) {
  P port_,message_,irritants_;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(irritants_, 2);
loop:
  T1 = CALL2(1,VARREF(YmacrosYcat),message_,LITREF(lit_64));
  T3 = CALL1(1,VARREF(Ylst),port_);
  T2 = CALL2(1,VARREF(YmacrosYcat),irritants_,T3);
  T0 = CALL2(1,VARREF(Yerror),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_warn_40) {
  P string_,irritants_and_port_;
  P a1,a2;
LINK_STACK();
  ARG(string_, 0);
  NARGS(irritants_and_port_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_reverse_list_Gstring_41) {
  P l_,n_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,VARREF(YruntimeYrevX),l_);
  T0 = CALL2(1,VARREF(YruntimeYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_make_immutableX_42) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

P YreadY___main_0___() {
  P number_sharp_macroF1101;
  P vecF1100;
  P str10496F1099;
  P sub_read_whitespaceF1098;
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
  lit_0 = YPPsym((P)"read");
  lit_1 = YPPsym((P)"port");
  lit_2 = YPPsym((P)"loop");
  lit_3 = YPsb((P)"discarding extraneous right parenthesis");
  T1 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_0 = YPmet(FUNCODEREF(fun_loop_0),LITREF(lit_2),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YruntimeYLinput_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_1 = YPmet(FUNCODEREF(fun_read_1),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(YruntimeYread);
  if (T4 != YPfalse) {
    T3 = VARREF(YruntimeYread);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_read_1;
  T2 = CALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YruntimeYread,T2);
  lit_4 = YPPsym((P)"read-from-string");
  lit_5 = YPPsym((P)"x");
  T6 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_from_string_2 = YPmet(FUNCODEREF(fun_read_from_string_2),LITREF(lit_4),T6,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(YreadYread_from_string);
  if (T9 != YPfalse) {
    T8 = VARREF(YreadYread_from_string);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_read_from_string_2;
  T7 = CALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YreadYread_from_string,T7);
  lit_6 = YPPsym((P)"sub-read-carefully");
  lit_7 = YPsb((P)"unexpected end of file");
  T11 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YruntimeYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_carefully_3 = YPmet(FUNCODEREF(fun_sub_read_carefully_3),LITREF(lit_6),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YreadYsub_read_carefully);
  if (T14 != YPfalse) {
    T13 = VARREF(YreadYsub_read_carefully);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_sub_read_carefully_3;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YreadYsub_read_carefully,T12);
  lit_8 = YPPsym((P)"<reader-token>");
  T17 = (P)YPpair(VARREF(YLanyG),Ynil);
  T16 = CALL2(1,VARREF(Yfab_class),LITREF(lit_8),T17);
  VARSET(YreadYLreader_tokenG,T16);
  lit_9 = YPPsym((P)"token-message");
  lit_10 = YPPsym((P)"_x");
  T18 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YreadYLreader_tokenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_token_message_4 = YPmet(FUNCODEREF(fun_token_message_4),LITREF(lit_9),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YreadYtoken_message);
  if (T21 != YPfalse) {
    T20 = VARREF(YreadYtoken_message);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_token_message_4;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YreadYtoken_message,T19);
  lit_11 = YPPsym((P)"token-message-setter");
  lit_12 = YPPsym((P)"_z");
  T23 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_10)),YPPlist(2,VARREF(YLstrG),VARREF(YreadYLreader_tokenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_token_message_setter_5 = YPmet(FUNCODEREF(fun_token_message_setter_5),LITREF(lit_11),T23,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YreadYtoken_message_setter);
  if (T26 != YPfalse) {
    T25 = VARREF(YreadYtoken_message_setter);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_token_message_setter_5;
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YreadYtoken_message_setter,T24);
  T28 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T29 = fun_6;
  CALLN(1,VARREF(YPslot),5,VARREF(YreadYLreader_tokenG),VARREF(YreadYtoken_message),VARREF(YreadYtoken_message_setter),VARREF(YLstrG),T29);
  lit_13 = YPPsym((P)"make-reader-token");
  lit_14 = YPPsym((P)"message");
  T30 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_reader_token_7 = YPmet(FUNCODEREF(fun_make_reader_token_7),LITREF(lit_13),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YreadYmake_reader_token);
  if (T33 != YPfalse) {
    T32 = VARREF(YreadYmake_reader_token);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_make_reader_token_7;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YreadYmake_reader_token,T31);
  lit_15 = YPPsym((P)"reader-token?");
  lit_16 = YPPsym((P)"form");
  T35 = YPsig(YPPlist(1,LITREF(lit_16)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_reader_tokenQ_8 = YPmet(FUNCODEREF(fun_reader_tokenQ_8),LITREF(lit_15),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YreadYreader_tokenQ);
  if (T38 != YPfalse) {
    T37 = VARREF(YreadYreader_tokenQ);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_reader_tokenQ_8;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YreadYreader_tokenQ,T36);
  lit_17 = YPsb((P)"unexpected right parenthesis");
  T40 = CALL1(1,VARREF(YreadYmake_reader_token),LITREF(lit_17));
  VARSET(YreadYDclose_paren,T40);
  lit_18 = YPsb((P)"unexpected \" . \"");
  T41 = CALL1(1,VARREF(YreadYmake_reader_token),LITREF(lit_18));
  VARSET(YreadYDdot,T41);
  lit_19 = YPPsym((P)"sub-read");
  T42 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YruntimeYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_9 = YPmet(FUNCODEREF(fun_sub_read_9),LITREF(lit_19),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YreadYsub_read);
  if (T45 != YPfalse) {
    T44 = VARREF(YreadYsub_read);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_sub_read_9;
  T43 = CALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YreadYsub_read,T43);
  lit_20 = YPPsym((P)"c");
  lit_21 = YPsb((P)"illegal character read");
  T47 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T49 = CALL2(1,VARREF(YruntimeYfab),VARREF(YLvecG),VARREF(YruntimeYascii_limit));
  T50 = fun_10;
  T48 = CALL2(1,VARREF(YruntimeYfill),T49,T50);
  VARSET(YreadYTread_dispatch_vectorT,T48);
  T52 = CALL2(1,VARREF(YruntimeYfab),VARREF(YLvecG),VARREF(YruntimeYascii_limit));
  T51 = CALL2(1,VARREF(YruntimeYfill),T52,YPtrue);
  VARSET(YreadYTread_terminatingQ_vectorT,T51);
  lit_22 = YPPsym((P)"set-standard-syntax!");
  lit_23 = YPPsym((P)"char");
  lit_24 = YPPsym((P)"terminating?");
  lit_25 = YPPsym((P)"reader");
  T53 = YPsig(YPPlist(3,LITREF(lit_23),LITREF(lit_24),LITREF(lit_25)),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_syntaxX_11 = YPmet(FUNCODEREF(fun_set_standard_syntaxX_11),LITREF(lit_22),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YreadYset_standard_syntaxX);
  if (T56 != YPfalse) {
    T55 = VARREF(YreadYset_standard_syntaxX);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_set_standard_syntaxX_11;
  T54 = CALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YreadYset_standard_syntaxX,T54);
  T59 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T60 = fun_12;
  sub_read_whitespaceF1098 = T60;
  T62 = FUNFAB(fun_13,1,sub_read_whitespaceF1098);
  T61 = CALL2(1,VARREF(YruntimeYdo),T62,VARREF(YruntimeYascii_whitespaces));
  lit_26 = YPPsym((P)"sub-read-constituent");
  T63 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YreadYsub_read_constituent = YPmet(FUNCODEREF(YreadYsub_read_constituent),LITREF(lit_26),T63,ENVNUL,PNUL,YPfalse);
  T64 = YreadYsub_read_constituent;
  VARSET(YreadYsub_read_constituent,T64);
  lit_27 = YPsb((P)"!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM");
  lit_28 = YPsb((P)"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  T65 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T66 = CALL2(1,VARREF(YmacrosYcat),LITREF(lit_27),LITREF(lit_28));
  str10496F1099 = T66;
  T68 = fun_15;
  T67 = CALL2(1,VARREF(YruntimeYdo),T68,str10496F1099);
  lit_29 = YPPsym((P)"set-standard-read-macro!");
  lit_30 = YPPsym((P)"proc");
  T69 = YPsig(YPPlist(3,LITREF(lit_23),LITREF(lit_24),LITREF(lit_30)),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_read_macroX_16 = YPmet(FUNCODEREF(fun_set_standard_read_macroX_16),LITREF(lit_29),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YreadYset_standard_read_macroX);
  if (T72 != YPfalse) {
    T71 = VARREF(YreadYset_standard_read_macroX);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_set_standard_read_macroX_16;
  T70 = CALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YreadYset_standard_read_macroX,T70);
  lit_31 = YPPsym((P)"sub-read-list");
  lit_32 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  lit_33 = YPsb((P)"randomness after form after dot");
  T74 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLchrG),VARREF(YruntimeYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_list_17 = YPmet(FUNCODEREF(fun_sub_read_list_17),LITREF(lit_31),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YreadYsub_read_list);
  if (T77 != YPfalse) {
    T76 = VARREF(YreadYsub_read_list);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_sub_read_list_17;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YreadYsub_read_list,T75);
  CALL3(1,VARREF(YreadYset_standard_read_macroX),YPchr((P)40),YPtrue,VARREF(YreadYsub_read_list));
  T79 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T79,ENVNUL,PNUL,YPfalse);
  T80 = fun_18;
  CALL3(1,VARREF(YreadYset_standard_read_macroX),YPchr((P)41),YPtrue,T80);
  lit_34 = YPPsym((P)"quote");
  T81 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T81,ENVNUL,PNUL,YPfalse);
  T82 = fun_19;
  CALL3(1,VARREF(YreadYset_standard_read_macroX),YPchr((P)39),YPtrue,T82);
  lit_35 = YPPsym((P)"quasiquote");
  T83 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T84 = fun_20;
  CALL3(1,VARREF(YreadYset_standard_read_macroX),YPchr((P)96),YPtrue,T84);
  lit_36 = YPsb((P)"end of file after ,");
  lit_37 = YPPsym((P)"unquote-splicing");
  lit_38 = YPPsym((P)"unquote");
  T85 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T86 = fun_21;
  CALL3(1,VARREF(YreadYset_standard_read_macroX),YPchr((P)44),YPtrue,T86);
  T89 = CALL2(1,VARREF(YruntimeYfab),VARREF(YLvecG),VARREF(YruntimeYascii_limit));
  T88 = CALL2(1,VARREF(YruntimeYfill),T89,YPfalse);
  vecF1100 = T88;
  T90 = CALL2(1,VARREF(YruntimeYas),VARREF(YLintG),YPchr((P)116));
  CALL3(1,VARREF(YruntimeYelt_setter),YPchr((P)9),vecF1100,T90);
  T91 = CALL2(1,VARREF(YruntimeYas),VARREF(YLintG),YPchr((P)102));
  CALL3(1,VARREF(YruntimeYelt_setter),YPchr((P)12),vecF1100,T91);
  T92 = CALL2(1,VARREF(YruntimeYas),VARREF(YLintG),YPchr((P)114));
  CALL3(1,VARREF(YruntimeYelt_setter),YPchr((P)13),vecF1100,T92);
  T93 = CALL2(1,VARREF(YruntimeYas),VARREF(YLintG),YPchr((P)110));
  CALL3(1,VARREF(YruntimeYelt_setter),YPchr((P)10),vecF1100,T93);
  T87 = vecF1100;
  VARSET(YreadYDstring_escape_chars,T87);
  lit_39 = YPPsym((P)"read-string-literal");
  lit_40 = YPPsym((P)"l");
  lit_41 = YPPsym((P)"i");
  lit_42 = YPsb((P)"end of file within a string");
  lit_43 = YPsb((P)"end of file within a string");
  lit_44 = YPsb((P)"invalid escaped character in string");
  T95 = YPsig(YPPlist(2,LITREF(lit_40),LITREF(lit_41)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_22 = YPmet(FUNCODEREF(fun_loop_22),LITREF(lit_2),T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YreadYread_string_literal = YPmet(FUNCODEREF(YreadYread_string_literal),LITREF(lit_39),T94,ENVNUL,PNUL,YPfalse);
  T96 = YreadYread_string_literal;
  VARSET(YreadYread_string_literal,T96);
  CALL3(1,VARREF(YreadYset_standard_read_macroX),YPchr((P)34),YPtrue,VARREF(YreadYread_string_literal));
  T97 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T98 = fun_24;
  CALL3(1,VARREF(YreadYset_standard_read_macroX),YPchr((P)59),YPtrue,T98);
  lit_45 = YPPsym((P)"gobble-line");
  T100 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_25 = YPmet(FUNCODEREF(fun_loop_25),LITREF(lit_2),T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YruntimeYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gobble_line_26 = YPmet(FUNCODEREF(fun_gobble_line_26),LITREF(lit_45),T99,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YreadYgobble_line);
  if (T103 != YPfalse) {
    T102 = VARREF(YreadYgobble_line);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_gobble_line_26;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YreadYgobble_line,T101);
  VARSET(YreadYTsharp_macrosT,Ynil);
  lit_46 = YPPsym((P)"define-sharp-macro");
  T105 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_30)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_define_sharp_macro_27 = YPmet(FUNCODEREF(fun_define_sharp_macro_27),LITREF(lit_46),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YreadYdefine_sharp_macro);
  if (T108 != YPfalse) {
    T107 = VARREF(YreadYdefine_sharp_macro);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_define_sharp_macro_27;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YreadYdefine_sharp_macro,T106);
  lit_47 = YPsb((P)"end of file after #");
  lit_48 = YPsb((P)"unknown # syntax");
  T110 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T111 = fun_28;
  CALL3(1,VARREF(YreadYset_standard_read_macroX),YPchr((P)35),YPfalse,T111);
  T112 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T113 = fun_29;
  CALL2(1,VARREF(YreadYdefine_sharp_macro),YPchr((P)102),T113);
  T114 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T114,ENVNUL,PNUL,YPfalse);
  T115 = fun_30;
  CALL2(1,VARREF(YreadYdefine_sharp_macro),YPchr((P)116),T115);
  lit_49 = YPPlist(5,YPPlist(2,YPPsym((P)"tab"),YPchr((P)9)),YPPlist(2,YPPsym((P)"page"),YPchr((P)12)),YPPlist(2,YPPsym((P)"return"),YPchr((P)13)),YPPlist(2,YPPsym((P)"newline"),YPchr((P)10)),YPPlist(2,YPPsym((P)"space"),YPchr((P)32)));
  VARSET(YreadYDchar_long_names,LITREF(lit_49));
  lit_50 = YPsb((P)"end of file after #\\");
  lit_51 = YPsb((P)"unknown #\\ name");
  T116 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T117 = fun_31;
  CALL2(1,VARREF(YreadYdefine_sharp_macro),YPchr((P)92),T117);
  T118 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T118,ENVNUL,PNUL,YPfalse);
  T119 = fun_32;
  CALL2(1,VARREF(YreadYdefine_sharp_macro),YPchr((P)40),T119);
  lit_52 = YPsb((P)"unsupported number syntax");
  lit_53 = YPPlist(6,YPchr((P)98),YPchr((P)111),YPchr((P)100),YPchr((P)120),YPchr((P)105),YPchr((P)101));
  T121 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T120,ENVNUL,PNUL,YPfalse);
  T122 = fun_33;
  number_sharp_macroF1101 = T122;
  T124 = FUNFAB(fun_34,1,number_sharp_macroF1101);
  T123 = CALL2(1,VARREF(YruntimeYdo),T124,LITREF(lit_53));
  lit_54 = YPPsym((P)"sub-read-token");
  lit_55 = YPPsym((P)"n");
  T126 = YPsig(YPPlist(2,LITREF(lit_40),LITREF(lit_55)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_35 = YPmet(FUNCODEREF(fun_loop_35),LITREF(lit_2),T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLchrG),VARREF(YruntimeYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_token_36 = YPmet(FUNCODEREF(fun_sub_read_token_36),LITREF(lit_54),T125,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YreadYsub_read_token);
  if (T129 != YPfalse) {
    T128 = VARREF(YreadYsub_read_token);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_sub_read_token_36;
  T127 = CALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YreadYsub_read_token,T127);
  lit_56 = YPPsym((P)"parse-token");
  lit_57 = YPPsym((P)"string");
  lit_58 = YPsb((P)".");
  lit_59 = YPsb((P)"unsupported number syntax");
  T132 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(2,LITREF(lit_57),LITREF(lit_1)),YPPlist(2,VARREF(YLstrG),VARREF(YruntimeYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_token_38 = YPmet(FUNCODEREF(fun_parse_token_38),LITREF(lit_56),T131,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YreadYparse_token);
  if (T135 != YPfalse) {
    T134 = VARREF(YreadYparse_token);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_parse_token_38;
  T133 = CALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YreadYparse_token,T133);
  lit_60 = YPPlist(9,YPsb((P)"+"),YPsb((P)"-"),YPsb((P)"..."),YPsb((P)"1st"),YPsb((P)"2nd"),YPsb((P)"3rd"),YPsb((P)"1+"),YPsb((P)"1-"),YPsb((P)"->"));
  VARSET(YreadYDstrange_symbol_names,LITREF(lit_60));
  lit_61 = YPPsym((P)"t");
  T140 = CALL2(1,VARREF(YruntimeYas),VARREF(YLstrG),LITREF(lit_61));
  T139 = CALL2(1,VARREF(YmacrosYelt),T140,YPint((P)0));
  T138 = CALL2(1,VARREF(YruntimeYE),T139,YPchr((P)84));
  if (T138 != YPfalse) {
    T137 = VARREF(YruntimeYas_uppercase);
  } else {
    T137 = VARREF(YruntimeYas_lowercase);
  }
  VARSET(YreadYpreferred_case,T137);
  lit_62 = YPPsym((P)"reading-error");
  lit_63 = YPPsym((P)"irritants");
  lit_64 = YPsb((P)": %=");
  T141 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_14),LITREF(lit_63)),YPPlist(2,VARREF(YruntimeYLportG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reading_error_39 = YPmet(FUNCODEREF(fun_reading_error_39),LITREF(lit_62),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YreadYreading_error);
  if (T144 != YPfalse) {
    T143 = VARREF(YreadYreading_error);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_reading_error_39;
  T142 = CALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YreadYreading_error,T142);
  lit_65 = YPPsym((P)"warn");
  lit_66 = YPPsym((P)"irritants-and-port");
  T146 = YPsig(YPPlist(2,LITREF(lit_57),LITREF(lit_66)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_warn_40 = YPmet(FUNCODEREF(fun_warn_40),LITREF(lit_65),T146,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YreadYwarn);
  if (T149 != YPfalse) {
    T148 = VARREF(YreadYwarn);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_warn_40;
  T147 = CALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YreadYwarn,T147);
  lit_67 = YPPsym((P)"reverse-list->string");
  T151 = YPsig(YPPlist(2,LITREF(lit_40),LITREF(lit_55)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_reverse_list_Gstring_41 = YPmet(FUNCODEREF(fun_reverse_list_Gstring_41),LITREF(lit_67),T151,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YreadYreverse_list_Gstring);
  if (T154 != YPfalse) {
    T153 = VARREF(YreadYreverse_list_Gstring);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_reverse_list_Gstring_41;
  T152 = CALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YreadYreverse_list_Gstring,T152);
  lit_68 = YPPsym((P)"make-immutable!");
  T156 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_immutableX_42 = YPmet(FUNCODEREF(fun_make_immutableX_42),LITREF(lit_68),T156,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YreadYmake_immutableX);
  if (T159 != YPfalse) {
    T158 = VARREF(YreadYmake_immutableX);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_make_immutableX_42;
  T157 = CALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YreadYmake_immutableX,T157);
  T161 = YPfalse;
  return T161;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"reduce+", &module_info_runtime, "reduce+"},
  {"map", &module_info_macros, "map"},
  {"nul", &module_info_boot, "nul"},
  {"swapf", &module_info_macros, "swapf"},
  {"curry", &module_info_runtime, "curry"},
  {"%i<", &module_info_boot, "%i<"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"in", &module_info_runtime, "in"},
  {"class-name", &module_info_boot, "class-name"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"always", &module_info_runtime, "always"},
  {"select", &module_info_macros, "select"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"<int>", &module_info_boot, "<int>"},
  {"<num>", &module_info_boot, "<num>"},
  {"map2", &module_info_runtime, "map2"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"%i^", &module_info_boot, "%i^"},
  {"3rd", &module_info_runtime, "3rd"},
  {"read-char", &module_info_runtime, "read-char"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"%i-", &module_info_boot, "%i-"},
  {"loc", &module_info_boot, "loc"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"%selt", &module_info_boot, "%selt"},
  {"port-index", &module_info_runtime, "port-index"},
  {"floor/", &module_info_runtime, "floor/"},
  {"now-key", &module_info_runtime, "now-key"},
  {"%cu", &module_info_boot, "%cu"},
  {"reduce", &module_info_runtime, "reduce"},
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
  {"dss", &module_info_boot, "dss"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"dp", &module_info_boot, "dp"},
  {"assocq", &module_info_runtime, "assocq"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"%sb", &module_info_boot, "%sb"},
  {"<log>", &module_info_boot, "<log>"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"lsh", &module_info_runtime, "lsh"},
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
  {"%su", &module_info_boot, "%su"},
  {"assert", &module_info_macros, "assert"},
  {"*", &module_info_runtime, "*"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"set", &module_info_boot, "set"},
  {"export", &module_info_boot, "export"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"type-class", &module_info_boot, "type-class"},
  {"ddv", &module_info_macros, "ddv"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"<union>", &module_info_boot, "<union>"},
  {"%bb", &module_info_boot, "%bb"},
  {"lst", &module_info_boot, "lst"},
  {"%ft", &module_info_boot, "%ft"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"cat", &module_info_macros, "cat"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"assoc", &module_info_runtime, "assoc"},
  {"isa", &module_info_boot, "isa"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"floor", &module_info_runtime, "floor"},
  {"<error>", &module_info_runtime, "<error>"},
  {"var-name", &module_info_macros, "var-name"},
  {"%app-args", &module_info_boot, "%app-args"},
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
  {"default-handler", &module_info_runtime, "default-handler"},
  {"dec", &module_info_macros, "dec"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"sig-arity", &module_info_boot, "sig-arity"},
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
  {"unexec", &module_info_boot, "unexec"},
  {"%pair", &module_info_boot, "%pair"},
  {"mem?", &module_info_runtime, "mem?"},
  {"apply", &module_info_macros, "apply"},
  {"%c=", &module_info_boot, "%c="},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"remainder", &module_info_runtime, "remainder"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"%vec", &module_info_boot, "%vec"},
  {"%snul", &module_info_boot, "%snul"},
  {"error", &module_info_boot, "error"},
  {"rep", &module_info_boot, "rep"},
  {"logior", &module_info_runtime, "logior"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"rev", &module_info_runtime, "rev"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
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
  {"pos?", &module_info_runtime, "pos?"},
  {"%ib", &module_info_boot, "%ib"},
  {">", &module_info_runtime, ">"},
  {"unless", &module_info_macros, "unless"},
  {"~=", &module_info_runtime, "~="},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"quote", &module_info_boot, "quote"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"sig", &module_info_runtime, "sig"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"logxor", &module_info_runtime, "logxor"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"%fb", &module_info_boot, "%fb"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"cat2", &module_info_runtime, "cat2"},
  {"<", &module_info_runtime, "<"},
  {"pop", &module_info_runtime, "pop"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"default", &module_info_runtime, "default"},
  {"%f=", &module_info_boot, "%f="},
  {"%process-module", &module_info_boot, "%process-module"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"keys", &module_info_runtime, "keys"},
  {"logand", &module_info_runtime, "logand"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"cat!", &module_info_runtime, "cat!"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"len", &module_info_runtime, "len"},
  {"napply", &module_info_macros, "napply"},
  {"and", &module_info_macros, "and"},
  {"=", &module_info_runtime, "="},
  {"tup", &module_info_macros, "tup"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"add", &module_info_runtime, "add"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"add!", &module_info_runtime, "add!"},
  {"%str", &module_info_boot, "%str"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"@<", &module_info_boot, "@<"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"lognot", &module_info_runtime, "lognot"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"%lb", &module_info_boot, "%lb"},
  {"gensym", &module_info_macros, "gensym"},
  {"any2?", &module_info_runtime, "any2?"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"type-object", &module_info_boot, "type-object"},
  {"if", &module_info_boot, "if"},
  {"<class>", &module_info_boot, "<class>"},
  {"popf", &module_info_macros, "popf"},
  {"as", &module_info_runtime, "as"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"fin", &module_info_boot, "fin"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"any?", &module_info_runtime, "any?"},
  {"assq", &module_info_runtime, "assq"},
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
  {"slot-init", &module_info_boot, "slot-init"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"false-or", &module_info_runtime, "false-or"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
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
  {"write-string", &module_info_runtime, "write-string"},
  {"pos", &module_info_runtime, "pos"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"do3", &module_info_runtime, "do3"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"%lu", &module_info_boot, "%lu"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"force-output", &module_info_runtime, "force-output"},
  {"do", &module_info_runtime, "do"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"case", &module_info_macros, "case"},
  {"for", &module_info_macros, "for"},
  {"app-filename", &module_info_runtime, "app-filename"},
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
  {"@olen", &module_info_boot, "@olen"},
  {"fab", &module_info_runtime, "fab"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"%it/", &module_info_boot, "%it/"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"list", &module_info_runtime, "list"},
  {"head", &module_info_boot, "head"},
  {"make-handler", &module_info_runtime, "make-handler"},
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
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"empty", &module_info_runtime, "empty"},
  {"collecting", &module_info_macros, "collecting"},
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
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"from-below", &module_info_runtime, "from-below"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"locative-value", &module_info_runtime, "locative-value"},
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
  {"mif", &module_info_boot, "mif"},
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
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"isa?", &module_info_boot, "isa?"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"ds", &module_info_boot, "ds"},
  {"neg", &module_info_runtime, "neg"},
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
  {"<reader-token>", &YreadYLreader_tokenG},
  {"read-string-literal", &YreadYread_string_literal},
  {"$strange-symbol-names", &YreadYDstrange_symbol_names},
  {"make-immutable!", &YreadYmake_immutableX},
  {"sub-read-carefully", &YreadYsub_read_carefully},
  {"set-standard-syntax!", &YreadYset_standard_syntaxX},
  {"*sharp-macros*", &YreadYTsharp_macrosT},
  {"reading-error", &YreadYreading_error},
  {"sub-read-constituent", &YreadYsub_read_constituent},
  {"reverse-list->string", &YreadYreverse_list_Gstring},
  {"parse-token", &YreadYparse_token},
  {"token-message-setter", &YreadYtoken_message_setter},
  {"$string-escape-chars", &YreadYDstring_escape_chars},
  {"$close-paren", &YreadYDclose_paren},
  {"sub-read-list", &YreadYsub_read_list},
  {"read-from-string", &YreadYread_from_string},
  {"define-sharp-macro", &YreadYdefine_sharp_macro},
  {"sub-read", &YreadYsub_read},
  {"*read-dispatch-vector*", &YreadYTread_dispatch_vectorT},
  {"gobble-line", &YreadYgobble_line},
  {"*read-terminating?-vector*", &YreadYTread_terminatingQ_vectorT},
  {"sub-read-token", &YreadYsub_read_token},
  {"token-message", &YreadYtoken_message},
  {"warn", &YreadYwarn},
  {"reader-token?", &YreadYreader_tokenQ},
  {"$char-long-names", &YreadYDchar_long_names},
  {"set-standard-read-macro!", &YreadYset_standard_read_macroX},
  {"preferred-case", &YreadYpreferred_case},
  {"$dot", &YreadYDdot},
  {"---main-0---", NULL},
  {"make-reader-token", &YreadYmake_reader_token},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"read-from-string", "read-from-string"},
  {"read", "read"},
  {"$char-long-names", "$char-long-names"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_read;
MODULE_INFO module_info_read = {
  "read",
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

/* EXPRESSION: */

extern void load_module_read (void);

void load_module_read (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_runtime();

  (P)YreadY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
