/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: read */

EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YruntimeYfrom,"runtime","from");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(Ynul,"boot","nul");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YruntimeYlen,"runtime","len");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YLoptsG,"boot","<opts>");
EXT(YPsnul,"boot","%snul");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YLunionG,"boot","<union>");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
DEF(YreadYsub_read_list,"read","sub-read-list");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYin,"runtime","in");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YLlogG,"boot","<log>");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(Yfun_specs,"boot","fun-specs");
DEF(YreadYpreferred_case,"read","preferred-case");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YruntimeYlist,"runtime","list");
EXT(Ytail,"boot","tail");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYfill,"runtime","fill");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeY1st,"runtime","1st");
DEF(YreadYmake_immutableX,"read","make-immutable!");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYpop,"runtime","pop");
EXT(YruntimeYvec,"runtime","vec");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YPdefine_method,"boot","%define-method");
DEF(YreadYsub_read_constituent,"read","sub-read-constituent");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeYapp_args,"runtime","app-args");
DEF(YreadYset_standard_read_macroX,"read","set-standard-read-macro!");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Ytype_object,"boot","type-object");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
DEF(YreadYtoken_message,"read","token-message");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
DEF(YreadYsub_read_token,"read","sub-read-token");
EXT(Yslot_init,"boot","slot-init");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(Yobject_parents,"boot","object-parents");
DEF(YreadYset_standard_syntaxX,"read","set-standard-syntax!");
EXT(YruntimeYpos,"runtime","pos");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Ynot,"boot","not");
EXT(YruntimeYmin,"runtime","min");
DEF(YreadYdefine_sharp_macro,"read","define-sharp-macro");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(Yfun_names,"boot","fun-names");
EXT(Ysig_value,"boot","sig-value");
EXT(Ysym_name,"boot","sym-name");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYassq,"runtime","assq");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYneg,"runtime","neg");
EXT(Yobject_slots,"boot","object-slots");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
DEF(YreadYDstring_escape_chars,"read","$string-escape-chars");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Ytype_error,"boot","type-error");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(Yerror,"boot","error");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(Yfind_setter,"boot","find-setter");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YLtypeG,"boot","<type>");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(Ysig_names,"boot","sig-names");
DEF(YreadYDdot,"read","$dot");
DEF(YreadYDclose_paren,"read","$close-paren");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYrcurry,"runtime","rcurry");
DEF(YreadYparse_token,"read","parse-token");
DEF(YreadYreverse_list_Gstring,"read","reverse-list->string");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YruntimeYdel,"runtime","del");
EXT(Yfapply,"boot","fapply");
EXT(Yadd_slot,"boot","add-slot");
EXT(Yhead,"boot","head");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YruntimeYround,"runtime","round");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YruntimeYdo2,"runtime","do2");
EXT(YruntimeYsub,"runtime","sub");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yhead_setter,"boot","head-setter");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(Yobject_class,"boot","object-class");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
DEF(YreadYLreader_tokenG,"read","<reader-token>");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYwrite_char,"runtime","write-char");
DEF(YreadYgobble_line,"read","gobble-line");
EXT(YLgenG,"boot","<gen>");
EXT(Ynil,"boot","nil");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYabs,"runtime","abs");
EXT(YruntimeYformat,"runtime","format");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YruntimeYA,"runtime","+");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYcurry,"runtime","curry");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YLvecG,"boot","<vec>");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYmax,"runtime","max");
EXT(YruntimeYeof_object,"runtime","eof-object");
DEF(YreadYreading_error,"read","reading-error");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYdefault,"runtime","default");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YLmetG,"boot","<met>");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYempty,"runtime","empty");
DEF(YreadYread_string_literal,"read","read-string-literal");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(Ylst,"boot","lst");
EXT(YLtupG,"boot","<tup>");
DEF(YreadYsub_read_carefully,"read","sub-read-carefully");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(Yfab_class,"boot","fab-class");
EXT(YruntimeYlogior,"runtime","logior");
DEF(YreadYDchar_long_names,"read","$char-long-names");
EXT(Yfun_value,"boot","fun-value");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(Ytype_elts,"boot","type-elts");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYE,"runtime","=");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YLlstG,"boot","<lst>");
DEF(YreadYTread_dispatch_vectorT,"read","*read-dispatch-vector*");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YPisa,"boot","%isa");
DEF(YreadYreader_tokenQ,"read","reader-token?");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYL,"runtime","<");
EXT(YLfunG,"boot","<fun>");
DEF(YreadYtoken_message_setter,"read","token-message-setter");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYalways,"runtime","always");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YruntimeYNE,"runtime","~=");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYlast,"runtime","last");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYtL,"runtime","t<");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(Yapply,"boot","apply");
DEF(YreadYsub_read,"read","sub-read");
EXT(YruntimeYdo,"runtime","do");
DEF(YreadYTsharp_macrosT,"read","*sharp-macros*");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYsig,"runtime","sig");
EXT(YruntimeYout,"runtime","out");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(Yslot_setter,"boot","slot-setter");
EXT(Ymet_appQ,"boot","met-app?");
DEF(YreadYDstrange_symbol_names,"read","$strange-symbol-names");
EXT(YruntimeYtE,"runtime","t=");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YruntimeYrev,"runtime","rev");
DEF(YreadYread_from_string,"read","read-from-string");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YLlocG,"boot","<loc>");
EXT(YLsigG,"boot","<sig>");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(Yfun_mets,"boot","fun-mets");
EXT(Yclass_parents,"boot","class-parents");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYtA,"runtime","t+");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yslot_value,"boot","slot-value");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YruntimeYcatX,"runtime","cat!");
DEF(YreadYmake_reader_token,"read","make-reader-token");
EXT(Ytype_class,"boot","type-class");
DEF(YreadYTread_terminatingQ_vectorT,"read","*read-terminating?-vector*");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYGE,"runtime",">=");
EXT(YLintG,"boot","<int>");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
DEF(YreadYwarn,"read","warn");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_30);
DEFLIT(lit_14);
DEFLIT(lit_15);
DEFLIT(lit_25);
DEFLIT(lit_63);
DEFLIT(lit_1);
DEFLIT(lit_57);
DEFLIT(lit_26);
DEFLIT(lit_68);
DEFLIT(lit_50);
DEFLIT(lit_54);
DEFLIT(lit_22);
DEFLIT(lit_48);
DEFLIT(lit_37);
DEFLIT(lit_23);
DEFLIT(lit_5);
DEFLIT(lit_27);
DEFLIT(lit_64);
DEFLIT(lit_67);
DEFLIT(lit_51);
DEFLIT(lit_32);
DEFLIT(lit_3);
DEFLIT(lit_13);
DEFLIT(lit_44);
DEFLIT(lit_33);
DEFLIT(lit_31);
DEFLIT(lit_24);
DEFLIT(lit_45);
DEFLIT(lit_49);
DEFLIT(lit_35);
DEFLIT(lit_61);
DEFLIT(lit_53);
DEFLIT(lit_38);
DEFLIT(lit_55);
DEFLIT(lit_59);
DEFLIT(lit_46);
DEFLIT(lit_0);
DEFLIT(lit_36);
DEFLIT(lit_17);
DEFLIT(lit_16);
DEFLIT(lit_29);
DEFLIT(lit_18);
DEFLIT(lit_39);
DEFLIT(lit_12);
DEFLIT(lit_43);
DEFLIT(lit_21);
DEFLIT(lit_47);
DEFLIT(lit_28);
DEFLIT(lit_2);
DEFLIT(lit_52);
DEFLIT(lit_19);
DEFLIT(lit_41);
DEFLIT(lit_42);
DEFLIT(lit_6);
DEFLIT(lit_58);
DEFLIT(lit_66);
DEFLIT(lit_56);
DEFLIT(lit_4);
DEFLIT(lit_9);
DEFLIT(lit_34);
DEFLIT(lit_20);
DEFLIT(lit_7);
DEFLIT(lit_10);
DEFLIT(lit_8);
DEFLIT(lit_40);
DEFLIT(lit_60);
DEFLIT(lit_11);
DEFLIT(lit_62);
DEFLIT(lit_65);

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
  P formF1039;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T8 = CALL1(CHKREF(YreadYsub_read),FREEREF(0));
  formF1039 = T8;
  T7 = CALL1(CHKREF(YreadYreader_tokenQ),formF1039);
  T6 = CALL1(CHKREF(Ynot),T7);
  if (T6 != YPfalse) {
    T1 = formF1039;
  } else {
    T5 = CALL2(CHKREF(YmacrosYEE),formF1039,CHKREF(YreadYDclose_paren));
    if (T5 != YPfalse) {
      T4 = CALL1(CHKREF(YreadYwarn),CHKREF(lit_3));
      T2 = T4;
    } else {
      goto loop;
      T2 = T3;
    }
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_read_1) {
  ARG(port_, 0);
  P loopF1040;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_0,2);
  loopF1040 = T2;
  FUNINIT(loopF1040, 2,port_,loopF1040);
  T1 = KCALL0(loopF1040);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_read_from_string_2) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYcall_with_string_input_port),x_,CHKREF(YruntimeYread));
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_carefully_3) {
  ARG(port_, 0);
  P formF1041;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(YreadYsub_read),port_);
  formF1041 = T8;
  T7 = CALL1(CHKREF(YruntimeYeof_objectQ),formF1041);
  if (T7 != YPfalse) {
    T6 = CALL2(CHKREF(YreadYreading_error),port_,CHKREF(lit_7));
    T1 = T6;
  } else {
    T5 = CALL1(CHKREF(YreadYreader_tokenQ),formF1041);
    if (T5 != YPfalse) {
      T4 = CALL1(CHKREF(Ytail),formF1041);
      T3 = CALL2(CHKREF(YreadYreading_error),port_,T4);
      T2 = T3;
    } else {
      T2 = formF1041;
    }
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_token_message_4) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YreadYtoken_message));
  QRET(T0);
}

FUNCODEDEF(fun_token_message_setter_5) {
  ARG(Ux_, 0);
  ARG(Uz_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YreadYtoken_message));
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_make_reader_token_7) {
  ARG(message_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YPpair(CHKREF(YreadYLreader_tokenG),Ynil);
  T2 = (P)YPpair(CHKREF(YreadYtoken_message),Ynil);
  T1 = (P)YPpair(message_,Ynil);
  T0 = CALL3(CHKREF(YPisa),T3,T2,T1);
  QRET(T0);
}

FUNCODEDEF(fun_reader_tokenQ_8) {
  ARG(form_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YisaQ),form_,CHKREF(YreadYLreader_tokenG));
  RET(T0);
}

FUNCODEDEF(fun_sub_read_9) {
  ARG(port_, 0);
  P cF1042;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL1(CHKREF(YruntimeYread_char),port_);
  cF1042 = T6;
  T5 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1042);
  if (T5 != YPfalse) {
    T1 = cF1042;
  } else {
    T4 = CALL1(CHKREF(YruntimeYchar_Gascii),cF1042);
    T3 = CALL2(CHKREF(YruntimeYelt),CHKREF(YreadYTread_dispatch_vectorT),T4);
    T2 = CALL2(T3,cF1042,port_);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  ARG(port_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_21),c_);
  QRET(T0);
}

FUNCODEDEF(fun_set_standard_syntaxX_11) {
  ARG(reader_, 0);
  ARG(terminatingQ_, 1);
  ARG(char_, 2);
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T0 = CALL1(CHKREF(YruntimeYchar_Gascii),char_);
  CALL3(CHKREF(YruntimeYelt_setter),reader_,CHKREF(YreadYTread_dispatch_vectorT),T0);
  T2 = CALL1(CHKREF(YruntimeYchar_Gascii),char_);
  T1 = CALL3(CHKREF(YruntimeYelt_setter),terminatingQ_,CHKREF(YreadYTread_terminatingQ_vectorT),T2);
  QRET(T1);
}

FUNCODEDEF(fun_12) {
  ARG(c_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YruntimeYelt_setter),FREEREF(0),CHKREF(YreadYTread_dispatch_vectorT),c_);
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  ARG(port_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(CHKREF(YreadYsub_read),port_);
  QRET(T0);
}

FUNCODEDEF(YreadYsub_read_constituent) {
  ARG(port_, 0);
  ARG(c_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YreadYsub_read_token),c_,port_);
  T0 = CALL2(CHKREF(YreadYparse_token),T1,port_);
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  ARG(c_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL3(CHKREF(YreadYset_standard_syntaxX),c_,YPfalse,CHKREF(YreadYsub_read_constituent));
  QRET(T0);
}

FUNCODEDEF(fun_set_standard_read_macroX_16) {
  ARG(proc_, 0);
  ARG(terminatingQ_, 1);
  ARG(char_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL3(CHKREF(YreadYset_standard_syntaxX),char_,terminatingQ_,proc_);
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_list_17) {
  ARG(port_, 0);
  ARG(c_, 1);
  P another_formF1045;
  P last_formF1044;
  P formF1043;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
loop:
  T17 = CALL1(CHKREF(YreadYsub_read),port_);
  formF1043 = T17;
  T16 = CALL1(CHKREF(YruntimeYeof_objectQ),formF1043);
  if (T16 != YPfalse) {
    T15 = CALL2(CHKREF(YreadYreading_error),port_,CHKREF(lit_33));
    T1 = T15;
  } else {
    T14 = CALL2(CHKREF(YmacrosYEE),formF1043,CHKREF(YreadYDclose_paren));
    if (T14 != YPfalse) {
      T2 = Ynil;
    } else {
      T13 = CALL2(CHKREF(YmacrosYEE),formF1043,CHKREF(YreadYDdot));
      if (T13 != YPfalse) {
        T12 = CALL1(CHKREF(YreadYsub_read_carefully),port_);
        last_formF1044 = T12;
        T11 = CALL1(CHKREF(YreadYsub_read),port_);
        another_formF1045 = T11;
        T10 = CALL2(CHKREF(YmacrosYEE),another_formF1045,CHKREF(YreadYDclose_paren));
        if (T10 != YPfalse) {
          T8 = last_formF1044;
        } else {
          T9 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_32),another_formF1045);
          T8 = T9;
        }
        T7 = T8;
        T6 = T7;
        T3 = T6;
      } else {
        T5 = CALL2(CHKREF(YreadYsub_read_list),c_,port_);
        T4 = CALL2(CHKREF(YmacrosYpair),formF1043,T5);
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  ARG(port_, 0);
  ARG(c_, 1);
  P a1,a2;
loop:
  QRET(CHKREF(YreadYDclose_paren));
}

FUNCODEDEF(fun_19) {
  ARG(port_, 0);
  ARG(c_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YreadYsub_read_carefully),port_);
  T0 = CALL2(CHKREF(Ylst),CHKREF(lit_34),T1);
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  ARG(port_, 0);
  ARG(c_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YreadYsub_read_carefully),port_);
  T0 = CALL2(CHKREF(Ylst),CHKREF(lit_35),T1);
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  ARG(port_, 0);
  ARG(c_, 1);
  P keywordF1047;
  P nextF1046;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL1(CHKREF(YruntimeYpeek_char),port_);
  nextF1046 = T9;
  T8 = CALL1(CHKREF(YruntimeYeof_objectQ),nextF1046);
  if (T8 != YPfalse) {
    T7 = CALL2(CHKREF(YreadYreading_error),port_,CHKREF(lit_38));
    T4 = T7;
  } else {
    T6 = CALL2(CHKREF(YruntimeYE),nextF1046,YPchr((P)64));
    if (T6 != YPfalse) {
      CALL1(CHKREF(YruntimeYread_char),port_);
      T5 = CHKREF(lit_37);
    } else {
      T5 = CHKREF(lit_36);
    }
    T4 = T5;
  }
  keywordF1047 = T4;
  T3 = CALL1(CHKREF(YreadYsub_read_carefully),port_);
  T2 = CALL2(CHKREF(Ylst),keywordF1047,T3);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_22) {
  ARG(i_, 0);
  ARG(l_, 1);
  P tmpF1051;
  P ecF1050;
  P cF1049;
  P cF1048;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
loop:
  T33 = CALL1(CHKREF(YruntimeYread_char),FREEREF(0));
  cF1048 = T33;
  T32 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1048);
  if (T32 != YPfalse) {
    T31 = CALL2(CHKREF(YreadYreading_error),FREEREF(0),CHKREF(lit_44));
    T1 = T31;
  } else {
    T30 = CALL2(CHKREF(YruntimeYE),cF1048,YPchr((P)92));
    if (T30 != YPfalse) {
      T29 = CALL1(CHKREF(YruntimeYread_char),FREEREF(0));
      cF1049 = T29;
      T28 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1049);
      if (T28 != YPfalse) {
        T27 = CALL2(CHKREF(YreadYreading_error),FREEREF(0),CHKREF(lit_43));
        T10 = T27;
      } else {
        T26 = CALL2(CHKREF(YruntimeYE),cF1049,YPchr((P)92));
        tmpF1051 = T26;
        if (tmpF1051 != YPfalse) {
          T24 = tmpF1051;
        } else {
          T25 = CALL2(CHKREF(YruntimeYE),cF1049,YPchr((P)34));
          T24 = T25;
        }
        T23 = T24;
        if (T23 != YPfalse) {
          T22 = CALL2(CHKREF(YmacrosYpair),cF1049,l_);
          T21 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
          a1 = T22;
          a2 = T21;
          l_ = a1;
          i_ = a2;
          goto loop;
          T11 = T20;
        } else {
          T19 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),cF1049);
          T18 = CALL2(CHKREF(YruntimeYelt),CHKREF(YreadYDstring_escape_chars),T19);
          ecF1050 = T18;
          if (ecF1050 != YPfalse) {
            T17 = CALL2(CHKREF(YmacrosYpair),ecF1050,l_);
            T16 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
            a1 = T17;
            a2 = T16;
            l_ = a1;
            i_ = a2;
            goto loop;
            T13 = T15;
          } else {
            T14 = CALL3(CHKREF(YreadYreading_error),FREEREF(0),CHKREF(lit_42),cF1049);
            T13 = T14;
          }
          T12 = T13;
          T11 = T12;
        }
        T10 = T11;
      }
      T9 = T10;
      T2 = T9;
    } else {
      T8 = CALL2(CHKREF(YruntimeYE),cF1048,YPchr((P)34));
      if (T8 != YPfalse) {
        T7 = CALL2(CHKREF(YreadYreverse_list_Gstring),l_,i_);
        T3 = T7;
      } else {
        T6 = CALL2(CHKREF(YmacrosYpair),cF1048,l_);
        T5 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
        a1 = T6;
        a2 = T5;
        l_ = a1;
        i_ = a2;
        goto loop;
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YreadYread_string_literal) {
  ARG(port_, 0);
  ARG(c_, 1);
  P loopF1052;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_22,2);
  loopF1052 = T2;
  FUNINIT(loopF1052, 2,port_,loopF1052);
  T1 = KCALL2(loopF1052,Ynil,YPint((P)0));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  ARG(port_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  CALL1(CHKREF(YreadYgobble_line),port_);
  T0 = CALL1(CHKREF(YreadYsub_read),port_);
  QRET(T0);
}

FUNCODEDEF(fun_loop_25) {
  P cF1053;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  T6 = CALL1(CHKREF(YruntimeYread_char),FREEREF(0));
  cF1053 = T6;
  T5 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1053);
  if (T5 != YPfalse) {
    T1 = cF1053;
  } else {
    T4 = CALL2(CHKREF(YruntimeYE),cF1053,YPchr((P)10));
    if (T4 != YPfalse) {
      T2 = YPfalse;
    } else {
      goto loop;
      T2 = T3;
    }
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_gobble_line_26) {
  ARG(port_, 0);
  P loopF1054;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_25,2);
  loopF1054 = T2;
  FUNINIT(loopF1054, 2,port_,loopF1054);
  T1 = KCALL0(loopF1054);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_define_sharp_macro_27) {
  ARG(proc_, 0);
  ARG(c_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL2(CHKREF(Ylst),c_,proc_);
  T1 = CALL2(CHKREF(YmacrosYpair),T2,CHKREF(YreadYTsharp_macrosT));
  T0 = YreadYTsharp_macrosT = T1;
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  ARG(port_, 0);
  ARG(c_, 1);
  P probeF1057;
  P cF1056;
  P cF1055;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = CALL1(CHKREF(YruntimeYpeek_char),port_);
  cF1055 = T13;
  T12 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1055);
  if (T12 != YPfalse) {
    T11 = CALL2(CHKREF(YreadYreading_error),port_,CHKREF(lit_48));
    T9 = T11;
  } else {
    T10 = CALL1(CHKREF(YruntimeYas_lowercase),cF1055);
    T9 = T10;
  }
  cF1056 = T9;
  T8 = CALL2(CHKREF(YruntimeYassq),cF1056,CHKREF(YreadYTsharp_macrosT));
  probeF1057 = T8;
  if (probeF1057 != YPfalse) {
    T7 = CALL1(CHKREF(Ytail),probeF1057);
    T6 = CALL1(CHKREF(Yhead),T7);
    T5 = CALL2(T6,cF1056,port_);
    T3 = T5;
  } else {
    T4 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_47),cF1056);
    T3 = T4;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  ARG(port_, 0);
  ARG(c_, 1);
  P a1,a2;
loop:
  CALL1(CHKREF(YruntimeYread_char),port_);
  QRET(YPfalse);
}

FUNCODEDEF(fun_30) {
  ARG(port_, 0);
  ARG(c_, 1);
  P a1,a2;
loop:
  CALL1(CHKREF(YruntimeYread_char),port_);
  QRET(YPtrue);
}

FUNCODEDEF(fun_31) {
  ARG(port_, 0);
  ARG(c_, 1);
  P tempF1060;
  P nameF1059;
  P cF1058;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  CALL1(CHKREF(YruntimeYread_char),port_);
  T19 = CALL1(CHKREF(YruntimeYpeek_char),port_);
  cF1058 = T19;
  T18 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1058);
  if (T18 != YPfalse) {
    T17 = CALL2(CHKREF(YreadYreading_error),port_,CHKREF(lit_51));
    T1 = T17;
  } else {
    T16 = CALL1(CHKREF(YruntimeYalphabeticQ),cF1058);
    if (T16 != YPfalse) {
      T15 = CALL1(CHKREF(YreadYsub_read_carefully),port_);
      nameF1059 = T15;
      T14 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),nameF1059);
      T13 = CALL1(CHKREF(YruntimeYlen),T14);
      T12 = CALL2(CHKREF(YruntimeYE),T13,YPint((P)1));
      if (T12 != YPfalse) {
        T5 = cF1058;
      } else {
        T11 = CALL2(CHKREF(YruntimeYassq),nameF1059,CHKREF(YreadYDchar_long_names));
        tempF1060 = T11;
        if (tempF1060 != YPfalse) {
          T10 = CALL1(CHKREF(Ytail),tempF1060);
          T9 = CALL1(CHKREF(Yhead),T10);
          T7 = T9;
        } else {
          T8 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_50),nameF1059);
          T7 = T8;
        }
        T6 = T7;
        T5 = T6;
      }
      T4 = T5;
      T2 = T4;
    } else {
      T3 = CALL1(CHKREF(YruntimeYread_char),port_);
      T2 = T3;
    }
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  ARG(port_, 0);
  ARG(c_, 1);
  P T1,T0;
  P a1,a2;
loop:
  CALL1(CHKREF(YruntimeYread_char),port_);
  T1 = CALL2(CHKREF(YreadYsub_read_list),c_,port_);
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLvecG),T1);
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  ARG(c_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YreadYdefine_sharp_macro),c_,FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  ARG(port_, 0);
  ARG(c_, 1);
  P tmpF1062;
  P stringF1061;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL2(CHKREF(YreadYsub_read_token),YPchr((P)35),port_);
  stringF1061 = T5;
  T4 = CALL1(CHKREF(YruntimeYstr_to_num),stringF1061);
  tmpF1062 = T4;
  if (tmpF1062 != YPfalse) {
    T2 = tmpF1062;
  } else {
    T3 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_53),stringF1061);
    T2 = T3;
  }
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_35) {
  ARG(n_, 0);
  ARG(l_, 1);
  P tmpF1064;
  P cF1063;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = CALL1(CHKREF(YruntimeYpeek_char),FREEREF(0));
  cF1063 = T13;
  T12 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1063);
  tmpF1064 = T12;
  if (tmpF1064 != YPfalse) {
    T9 = tmpF1064;
  } else {
    T11 = CALL1(CHKREF(YruntimeYchar_Gascii),cF1063);
    T10 = CALL2(CHKREF(YruntimeYelt),CHKREF(YreadYTread_terminatingQ_vectorT),T11);
    T9 = T10;
  }
  T8 = T9;
  if (T8 != YPfalse) {
    T7 = CALL2(CHKREF(YreadYreverse_list_Gstring),l_,n_);
    T1 = T7;
  } else {
    T6 = CALL1(CHKREF(YruntimeYread_char),FREEREF(0));
    T5 = CALL1(CHKREF(YreadYpreferred_case),T6);
    T4 = CALL2(CHKREF(YmacrosYpair),T5,l_);
    T3 = CALL2(CHKREF(YruntimeYA),n_,YPint((P)1));
    a1 = T4;
    a2 = T3;
    l_ = a1;
    n_ = a2;
    goto loop;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_token_36) {
  ARG(port_, 0);
  ARG(c_, 1);
  P loopF1065;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = FUNSHELL(1,fun_loop_35,2);
  loopF1065 = T4;
  FUNINIT(loopF1065, 2,port_,loopF1065);
  T3 = CALL1(CHKREF(YreadYpreferred_case),c_);
  T2 = CALL1(CHKREF(Ylst),T3);
  T1 = KCALL2(loopF1065,T2,YPint((P)1));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYE),FREEREF(0),x_);
  QRET(T0);
}

FUNCODEDEF(fun_parse_token_38) {
  ARG(port_, 0);
  ARG(string_, 1);
  P tmpF1070;
  P tmpF1069;
  P tmpF1068;
  P cF1067;
  P maybe_numberF1066;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T25 = CALL2(CHKREF(YruntimeYelt),string_,YPint((P)0));
  cF1067 = T25;
  T24 = CALL1(CHKREF(YruntimeYnumericQ),cF1067);
  tmpF1068 = T24;
  if (tmpF1068 != YPfalse) {
    T16 = tmpF1068;
  } else {
    T23 = CALL2(CHKREF(YruntimeYE),cF1067,YPchr((P)43));
    tmpF1069 = T23;
    if (tmpF1069 != YPfalse) {
      T18 = tmpF1069;
    } else {
      T22 = CALL2(CHKREF(YruntimeYE),cF1067,YPchr((P)45));
      tmpF1070 = T22;
      if (tmpF1070 != YPfalse) {
        T20 = tmpF1070;
      } else {
        T21 = CALL2(CHKREF(YruntimeYE),cF1067,YPchr((P)46));
        T20 = T21;
      }
      T19 = T20;
      T18 = T19;
    }
    T17 = T18;
    T16 = T17;
  }
  T15 = T16;
  T14 = T15;
  if (T14 != YPfalse) {
    T13 = CALL1(CHKREF(YruntimeYstr_to_num),string_);
    maybe_numberF1066 = T13;
    if (maybe_numberF1066 != YPfalse) {
      T4 = maybe_numberF1066;
    } else {
      T12 = FUNFAB(fun_37,1,string_);
      T11 = CALL2(CHKREF(YruntimeYanyQ),T12,CHKREF(YreadYDstrange_symbol_names));
      if (T11 != YPfalse) {
        T10 = CALL1(CHKREF(YreadYmake_immutableX),string_);
        T9 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),T10);
        T5 = T9;
      } else {
        T8 = CALL2(CHKREF(YruntimeYE),string_,CHKREF(lit_59));
        if (T8 != YPfalse) {
          T6 = CHKREF(YreadYDdot);
        } else {
          T7 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_58),string_);
          T6 = T7;
        }
        T5 = T6;
      }
      T4 = T5;
    }
    T3 = T4;
    T0 = T3;
  } else {
    T2 = CALL1(CHKREF(YreadYmake_immutableX),string_);
    T1 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),T2);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_reading_error_39) {
  ARG(irritants_, 0);
  ARG(message_, 1);
  ARG(port_, 2);
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = CALL2(CHKREF(YmacrosYcat),message_,CHKREF(lit_64));
  T2 = CALL1(CHKREF(Ylst),port_);
  T1 = CALL2(CHKREF(YmacrosYcat),irritants_,T2);
  T0 = CALL2(CHKREF(Yerror),T3,T1);
  QRET(T0);
}

FUNCODEDEF(fun_warn_40) {
  ARG(irritants_and_port_, 0);
  ARG(string_, 1);
  P a1,a2;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_reverse_list_Gstring_41) {
  ARG(n_, 0);
  ARG(l_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YruntimeYrevX),l_);
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),T1);
  RET(T0);
}

FUNCODEDEF(fun_make_immutableX_42) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(x_);
}

P YreadY___main_0___() {
  P sub_read_whitespaceF1074;
  P str10496F1073;
  P vecF1072;
  P number_sharp_macroF1071;
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
  T1 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_loop_0 = YPmet(FUNCODEREF(fun_loop_0),CHKREF(lit_2),T1,ENVNUL);
  T0 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YruntimeYLinput_portG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_read_1 = YPmet(FUNCODEREF(fun_read_1),CHKREF(lit_0),T0,ENVNUL);
  T5 = BOUNDP(YruntimeYread);
  if (T5 != YPfalse) {
    T4 = CHKREF(YruntimeYread);
  } else {
    T4 = YPfalse;
  }
  T3 = fun_read_1;
  T2 = CALL2(CHKREF(YPdefine_method),T4,T3);
  YruntimeYread = T2;
  lit_4 = YPPsym((P)"read-from-string");
  lit_5 = YPPsym((P)"x");
  T6 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_read_from_string_2 = YPmet(FUNCODEREF(fun_read_from_string_2),CHKREF(lit_4),T6,ENVNUL);
  T10 = BOUNDP(YreadYread_from_string);
  if (T10 != YPfalse) {
    T9 = CHKREF(YreadYread_from_string);
  } else {
    T9 = YPfalse;
  }
  T8 = fun_read_from_string_2;
  T7 = CALL2(CHKREF(YPdefine_method),T9,T8);
  YreadYread_from_string = T7;
  lit_6 = YPPsym((P)"sub-read-carefully");
  lit_7 = YPsb((P)"unexpected end of file");
  T11 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YruntimeYLportG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sub_read_carefully_3 = YPmet(FUNCODEREF(fun_sub_read_carefully_3),CHKREF(lit_6),T11,ENVNUL);
  T15 = BOUNDP(YreadYsub_read_carefully);
  if (T15 != YPfalse) {
    T14 = CHKREF(YreadYsub_read_carefully);
  } else {
    T14 = YPfalse;
  }
  T13 = fun_sub_read_carefully_3;
  T12 = CALL2(CHKREF(YPdefine_method),T14,T13);
  YreadYsub_read_carefully = T12;
  lit_8 = YPPsym((P)"<reader-token>");
  T17 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T16 = CALL2(CHKREF(Yfab_class),CHKREF(lit_8),T17);
  YreadYLreader_tokenG = T16;
  lit_9 = YPPsym((P)"token-message");
  lit_10 = YPPsym((P)"_x");
  T18 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YreadYLreader_tokenG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_token_message_4 = YPmet(FUNCODEREF(fun_token_message_4),CHKREF(lit_9),T18,ENVNUL);
  T22 = BOUNDP(YreadYtoken_message);
  if (T22 != YPfalse) {
    T21 = CHKREF(YreadYtoken_message);
  } else {
    T21 = YPfalse;
  }
  T20 = fun_token_message_4;
  T19 = CALL2(CHKREF(YPdefine_method),T21,T20);
  YreadYtoken_message = T19;
  lit_11 = YPPsym((P)"token-message-setter");
  lit_12 = YPPsym((P)"_z");
  T23 = YPsig(YPPlist(2,CHKREF(lit_12),CHKREF(lit_10)),YPPlist(2,CHKREF(YLstrG),CHKREF(YreadYLreader_tokenG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_token_message_setter_5 = YPmet(FUNCODEREF(fun_token_message_setter_5),CHKREF(lit_11),T23,ENVNUL);
  T27 = BOUNDP(YreadYtoken_message_setter);
  if (T27 != YPfalse) {
    T26 = CHKREF(YreadYtoken_message_setter);
  } else {
    T26 = YPfalse;
  }
  T25 = fun_token_message_setter_5;
  T24 = CALL2(CHKREF(YPdefine_method),T26,T25);
  YreadYtoken_message_setter = T24;
  T28 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T28,ENVNUL);
  T29 = fun_6;
  CALLN(CHKREF(YPslot),5,CHKREF(YreadYLreader_tokenG),CHKREF(YreadYtoken_message),CHKREF(YreadYtoken_message_setter),CHKREF(YLstrG),T29);
  lit_13 = YPPsym((P)"make-reader-token");
  lit_14 = YPPsym((P)"message");
  T30 = YPsig(YPPlist(1,CHKREF(lit_14)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_make_reader_token_7 = YPmet(FUNCODEREF(fun_make_reader_token_7),CHKREF(lit_13),T30,ENVNUL);
  T34 = BOUNDP(YreadYmake_reader_token);
  if (T34 != YPfalse) {
    T33 = CHKREF(YreadYmake_reader_token);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_make_reader_token_7;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  YreadYmake_reader_token = T31;
  lit_15 = YPPsym((P)"reader-token?");
  lit_16 = YPPsym((P)"form");
  T35 = YPsig(YPPlist(1,CHKREF(lit_16)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_reader_tokenQ_8 = YPmet(FUNCODEREF(fun_reader_tokenQ_8),CHKREF(lit_15),T35,ENVNUL);
  T39 = BOUNDP(YreadYreader_tokenQ);
  if (T39 != YPfalse) {
    T38 = CHKREF(YreadYreader_tokenQ);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_reader_tokenQ_8;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YreadYreader_tokenQ = T36;
  lit_17 = YPsb((P)"unexpected right parenthesis");
  T40 = CALL1(CHKREF(YreadYmake_reader_token),CHKREF(lit_17));
  YreadYDclose_paren = T40;
  lit_18 = YPsb((P)"unexpected \" . \"");
  T41 = CALL1(CHKREF(YreadYmake_reader_token),CHKREF(lit_18));
  YreadYDdot = T41;
  lit_19 = YPPsym((P)"sub-read");
  T42 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YruntimeYLportG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_sub_read_9 = YPmet(FUNCODEREF(fun_sub_read_9),CHKREF(lit_19),T42,ENVNUL);
  T46 = BOUNDP(YreadYsub_read);
  if (T46 != YPfalse) {
    T45 = CHKREF(YreadYsub_read);
  } else {
    T45 = YPfalse;
  }
  T44 = fun_sub_read_9;
  T43 = CALL2(CHKREF(YPdefine_method),T45,T44);
  YreadYsub_read = T43;
  lit_20 = YPPsym((P)"c");
  lit_21 = YPsb((P)"illegal character read");
  T47 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T47,ENVNUL);
  T50 = CALL2(CHKREF(YruntimeYfab),CHKREF(YLvecG),CHKREF(YruntimeYascii_limit));
  T49 = fun_10;
  T48 = CALL2(CHKREF(YruntimeYfill),T50,T49);
  YreadYTread_dispatch_vectorT = T48;
  T52 = CALL2(CHKREF(YruntimeYfab),CHKREF(YLvecG),CHKREF(YruntimeYascii_limit));
  T51 = CALL2(CHKREF(YruntimeYfill),T52,YPtrue);
  YreadYTread_terminatingQ_vectorT = T51;
  lit_22 = YPPsym((P)"set-standard-syntax!");
  lit_23 = YPPsym((P)"reader");
  lit_24 = YPPsym((P)"terminating?");
  lit_25 = YPPsym((P)"char");
  T53 = YPsig(YPPlist(3,CHKREF(lit_25),CHKREF(lit_24),CHKREF(lit_23)),YPPlist(3,CHKREF(YLchrG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_set_standard_syntaxX_11 = YPmet(FUNCODEREF(fun_set_standard_syntaxX_11),CHKREF(lit_22),T53,ENVNUL);
  T57 = BOUNDP(YreadYset_standard_syntaxX);
  if (T57 != YPfalse) {
    T56 = CHKREF(YreadYset_standard_syntaxX);
  } else {
    T56 = YPfalse;
  }
  T55 = fun_set_standard_syntaxX_11;
  T54 = CALL2(CHKREF(YPdefine_method),T56,T55);
  YreadYset_standard_syntaxX = T54;
  T59 = YPsig(YPPlist(1,CHKREF(lit_20)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T59,ENVNUL);
  T58 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T58,ENVNUL);
  T62 = fun_13;
  sub_read_whitespaceF1074 = T62;
  T61 = FUNFAB(fun_12,1,sub_read_whitespaceF1074);
  T60 = CALL2(CHKREF(YruntimeYdo),T61,CHKREF(YruntimeYascii_whitespaces));
  lit_26 = YPPsym((P)"sub-read-constituent");
  T63 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YreadYsub_read_constituent = YPmet(FUNCODEREF(YreadYsub_read_constituent),CHKREF(lit_26),T63,ENVNUL);
  T64 = YreadYsub_read_constituent;
  YreadYsub_read_constituent = T64;
  lit_27 = YPsb((P)"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  lit_28 = YPsb((P)"!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM");
  T65 = YPsig(YPPlist(1,CHKREF(lit_20)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T65,ENVNUL);
  T68 = CALL2(CHKREF(YmacrosYcat),CHKREF(lit_28),CHKREF(lit_27));
  str10496F1073 = T68;
  T67 = fun_15;
  T66 = CALL2(CHKREF(YruntimeYdo),T67,str10496F1073);
  lit_29 = YPPsym((P)"set-standard-read-macro!");
  lit_30 = YPPsym((P)"proc");
  T69 = YPsig(YPPlist(3,CHKREF(lit_25),CHKREF(lit_24),CHKREF(lit_30)),YPPlist(3,CHKREF(YLchrG),CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_set_standard_read_macroX_16 = YPmet(FUNCODEREF(fun_set_standard_read_macroX_16),CHKREF(lit_29),T69,ENVNUL);
  T73 = BOUNDP(YreadYset_standard_read_macroX);
  if (T73 != YPfalse) {
    T72 = CHKREF(YreadYset_standard_read_macroX);
  } else {
    T72 = YPfalse;
  }
  T71 = fun_set_standard_read_macroX_16;
  T70 = CALL2(CHKREF(YPdefine_method),T72,T71);
  YreadYset_standard_read_macroX = T70;
  lit_31 = YPPsym((P)"sub-read-list");
  lit_32 = YPsb((P)"randomness after form after dot");
  lit_33 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T74 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLchrG),CHKREF(YruntimeYLportG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_sub_read_list_17 = YPmet(FUNCODEREF(fun_sub_read_list_17),CHKREF(lit_31),T74,ENVNUL);
  T78 = BOUNDP(YreadYsub_read_list);
  if (T78 != YPfalse) {
    T77 = CHKREF(YreadYsub_read_list);
  } else {
    T77 = YPfalse;
  }
  T76 = fun_sub_read_list_17;
  T75 = CALL2(CHKREF(YPdefine_method),T77,T76);
  YreadYsub_read_list = T75;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)40),YPtrue,CHKREF(YreadYsub_read_list));
  T79 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T79,ENVNUL);
  T80 = fun_18;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)41),YPtrue,T80);
  lit_34 = YPPsym((P)"quote");
  T81 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T81,ENVNUL);
  T82 = fun_19;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)39),YPtrue,T82);
  lit_35 = YPPsym((P)"quasiquote");
  T83 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T83,ENVNUL);
  T84 = fun_20;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)96),YPtrue,T84);
  lit_36 = YPPsym((P)"unquote");
  lit_37 = YPPsym((P)"unquote-splicing");
  lit_38 = YPsb((P)"end of file after ,");
  T85 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T85,ENVNUL);
  T86 = fun_21;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)44),YPtrue,T86);
  T93 = CALL2(CHKREF(YruntimeYfab),CHKREF(YLvecG),CHKREF(YruntimeYascii_limit));
  T92 = CALL2(CHKREF(YruntimeYfill),T93,YPfalse);
  vecF1072 = T92;
  T88 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)116));
  CALL3(CHKREF(YruntimeYelt_setter),YPchr((P)9),vecF1072,T88);
  T89 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)102));
  CALL3(CHKREF(YruntimeYelt_setter),YPchr((P)12),vecF1072,T89);
  T90 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)114));
  CALL3(CHKREF(YruntimeYelt_setter),YPchr((P)13),vecF1072,T90);
  T91 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)110));
  CALL3(CHKREF(YruntimeYelt_setter),YPchr((P)10),vecF1072,T91);
  T87 = vecF1072;
  YreadYDstring_escape_chars = T87;
  lit_39 = YPPsym((P)"read-string-literal");
  lit_40 = YPPsym((P)"i");
  lit_41 = YPPsym((P)"l");
  lit_42 = YPsb((P)"invalid escaped character in string");
  lit_43 = YPsb((P)"end of file within a string");
  lit_44 = YPsb((P)"end of file within a string");
  T95 = YPsig(YPPlist(2,CHKREF(lit_41),CHKREF(lit_40)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_22 = YPmet(FUNCODEREF(fun_loop_22),CHKREF(lit_2),T95,ENVNUL);
  T94 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YreadYread_string_literal = YPmet(FUNCODEREF(YreadYread_string_literal),CHKREF(lit_39),T94,ENVNUL);
  T96 = YreadYread_string_literal;
  YreadYread_string_literal = T96;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)34),YPtrue,CHKREF(YreadYread_string_literal));
  T97 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T97,ENVNUL);
  T98 = fun_24;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)59),YPtrue,T98);
  lit_45 = YPPsym((P)"gobble-line");
  T100 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_loop_25 = YPmet(FUNCODEREF(fun_loop_25),CHKREF(lit_2),T100,ENVNUL);
  T99 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YruntimeYLportG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_gobble_line_26 = YPmet(FUNCODEREF(fun_gobble_line_26),CHKREF(lit_45),T99,ENVNUL);
  T104 = BOUNDP(YreadYgobble_line);
  if (T104 != YPfalse) {
    T103 = CHKREF(YreadYgobble_line);
  } else {
    T103 = YPfalse;
  }
  T102 = fun_gobble_line_26;
  T101 = CALL2(CHKREF(YPdefine_method),T103,T102);
  YreadYgobble_line = T101;
  YreadYTsharp_macrosT = Ynil;
  lit_46 = YPPsym((P)"define-sharp-macro");
  T105 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_30)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_define_sharp_macro_27 = YPmet(FUNCODEREF(fun_define_sharp_macro_27),CHKREF(lit_46),T105,ENVNUL);
  T109 = BOUNDP(YreadYdefine_sharp_macro);
  if (T109 != YPfalse) {
    T108 = CHKREF(YreadYdefine_sharp_macro);
  } else {
    T108 = YPfalse;
  }
  T107 = fun_define_sharp_macro_27;
  T106 = CALL2(CHKREF(YPdefine_method),T108,T107);
  YreadYdefine_sharp_macro = T106;
  lit_47 = YPsb((P)"unknown # syntax");
  lit_48 = YPsb((P)"end of file after #");
  T110 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T110,ENVNUL);
  T111 = fun_28;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)35),YPfalse,T111);
  T112 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T112,ENVNUL);
  T113 = fun_29;
  CALL2(CHKREF(YreadYdefine_sharp_macro),YPchr((P)102),T113);
  T114 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T114,ENVNUL);
  T115 = fun_30;
  CALL2(CHKREF(YreadYdefine_sharp_macro),YPchr((P)116),T115);
  lit_49 = YPPlist(5,YPPlist(2,YPPsym((P)"tab"),YPchr((P)9)),YPPlist(2,YPPsym((P)"page"),YPchr((P)12)),YPPlist(2,YPPsym((P)"return"),YPchr((P)13)),YPPlist(2,YPPsym((P)"newline"),YPchr((P)10)),YPPlist(2,YPPsym((P)"space"),YPchr((P)32)));
  YreadYDchar_long_names = CHKREF(lit_49);
  lit_50 = YPsb((P)"unknown #\\ name");
  lit_51 = YPsb((P)"end of file after #\\");
  T116 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T116,ENVNUL);
  T117 = fun_31;
  CALL2(CHKREF(YreadYdefine_sharp_macro),YPchr((P)92),T117);
  T118 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T118,ENVNUL);
  T119 = fun_32;
  CALL2(CHKREF(YreadYdefine_sharp_macro),YPchr((P)40),T119);
  lit_52 = YPPlist(6,YPchr((P)98),YPchr((P)111),YPchr((P)100),YPchr((P)120),YPchr((P)105),YPchr((P)101));
  lit_53 = YPsb((P)"unsupported number syntax");
  T121 = YPsig(YPPlist(1,CHKREF(lit_20)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T121,ENVNUL);
  T120 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T120,ENVNUL);
  T124 = fun_34;
  number_sharp_macroF1071 = T124;
  T123 = FUNFAB(fun_33,1,number_sharp_macroF1071);
  T122 = CALL2(CHKREF(YruntimeYdo),T123,CHKREF(lit_52));
  lit_54 = YPPsym((P)"sub-read-token");
  lit_55 = YPPsym((P)"n");
  T126 = YPsig(YPPlist(2,CHKREF(lit_41),CHKREF(lit_55)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_35 = YPmet(FUNCODEREF(fun_loop_35),CHKREF(lit_2),T126,ENVNUL);
  T125 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLchrG),CHKREF(YruntimeYLportG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_sub_read_token_36 = YPmet(FUNCODEREF(fun_sub_read_token_36),CHKREF(lit_54),T125,ENVNUL);
  T130 = BOUNDP(YreadYsub_read_token);
  if (T130 != YPfalse) {
    T129 = CHKREF(YreadYsub_read_token);
  } else {
    T129 = YPfalse;
  }
  T128 = fun_sub_read_token_36;
  T127 = CALL2(CHKREF(YPdefine_method),T129,T128);
  YreadYsub_read_token = T127;
  lit_56 = YPPsym((P)"parse-token");
  lit_57 = YPPsym((P)"string");
  lit_58 = YPsb((P)"unsupported number syntax");
  lit_59 = YPsb((P)".");
  T132 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T132,ENVNUL);
  T131 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_1)),YPPlist(2,CHKREF(YLstrG),CHKREF(YruntimeYLportG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_parse_token_38 = YPmet(FUNCODEREF(fun_parse_token_38),CHKREF(lit_56),T131,ENVNUL);
  T136 = BOUNDP(YreadYparse_token);
  if (T136 != YPfalse) {
    T135 = CHKREF(YreadYparse_token);
  } else {
    T135 = YPfalse;
  }
  T134 = fun_parse_token_38;
  T133 = CALL2(CHKREF(YPdefine_method),T135,T134);
  YreadYparse_token = T133;
  lit_60 = YPPlist(9,YPsb((P)"+"),YPsb((P)"-"),YPsb((P)"..."),YPsb((P)"1st"),YPsb((P)"2nd"),YPsb((P)"3rd"),YPsb((P)"1+"),YPsb((P)"1-"),YPsb((P)"->"));
  YreadYDstrange_symbol_names = CHKREF(lit_60);
  lit_61 = YPPsym((P)"t");
  T140 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),CHKREF(lit_61));
  T139 = CALL2(CHKREF(YruntimeYelt),T140,YPint((P)0));
  T138 = CALL2(CHKREF(YruntimeYE),T139,YPchr((P)84));
  if (T138 != YPfalse) {
    T137 = CHKREF(YruntimeYas_uppercase);
  } else {
    T137 = CHKREF(YruntimeYas_lowercase);
  }
  YreadYpreferred_case = T137;
  lit_62 = YPPsym((P)"reading-error");
  lit_63 = YPPsym((P)"irritants");
  lit_64 = YPsb((P)": %=");
  T141 = YPsig(YPPlist(3,CHKREF(lit_1),CHKREF(lit_14),CHKREF(lit_63)),YPPlist(2,CHKREF(YruntimeYLportG),CHKREF(YLstrG)),YPtrue,YPint((P)2),CHKREF(YLanyG));
  fun_reading_error_39 = YPmet(FUNCODEREF(fun_reading_error_39),CHKREF(lit_62),T141,ENVNUL);
  T145 = BOUNDP(YreadYreading_error);
  if (T145 != YPfalse) {
    T144 = CHKREF(YreadYreading_error);
  } else {
    T144 = YPfalse;
  }
  T143 = fun_reading_error_39;
  T142 = CALL2(CHKREF(YPdefine_method),T144,T143);
  YreadYreading_error = T142;
  lit_65 = YPPsym((P)"warn");
  lit_66 = YPPsym((P)"irritants-and-port");
  T146 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_66)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_warn_40 = YPmet(FUNCODEREF(fun_warn_40),CHKREF(lit_65),T146,ENVNUL);
  T150 = BOUNDP(YreadYwarn);
  if (T150 != YPfalse) {
    T149 = CHKREF(YreadYwarn);
  } else {
    T149 = YPfalse;
  }
  T148 = fun_warn_40;
  T147 = CALL2(CHKREF(YPdefine_method),T149,T148);
  YreadYwarn = T147;
  lit_67 = YPPsym((P)"reverse-list->string");
  T151 = YPsig(YPPlist(2,CHKREF(lit_41),CHKREF(lit_55)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLstrG));
  fun_reverse_list_Gstring_41 = YPmet(FUNCODEREF(fun_reverse_list_Gstring_41),CHKREF(lit_67),T151,ENVNUL);
  T155 = BOUNDP(YreadYreverse_list_Gstring);
  if (T155 != YPfalse) {
    T154 = CHKREF(YreadYreverse_list_Gstring);
  } else {
    T154 = YPfalse;
  }
  T153 = fun_reverse_list_Gstring_41;
  T152 = CALL2(CHKREF(YPdefine_method),T154,T153);
  YreadYreverse_list_Gstring = T152;
  lit_68 = YPPsym((P)"make-immutable!");
  T156 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_make_immutableX_42 = YPmet(FUNCODEREF(fun_make_immutableX_42),CHKREF(lit_68),T156,ENVNUL);
  T160 = BOUNDP(YreadYmake_immutableX);
  if (T160 != YPfalse) {
    T159 = CHKREF(YreadYmake_immutableX);
  } else {
    T159 = YPfalse;
  }
  T158 = fun_make_immutableX_42;
  T157 = CALL2(CHKREF(YPdefine_method),T159,T158);
  YreadYmake_immutableX = T157;
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
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"add", &module_info_runtime, "add"},
  {"quote", &module_info_boot, "quote"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"%i?", &module_info_boot, "%i?"},
  {"%fb", &module_info_boot, "%fb"},
  {"elt", &module_info_runtime, "elt"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"<num>", &module_info_boot, "<num>"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"fun", &module_info_boot, "fun"},
  {"ds", &module_info_boot, "ds"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"identity", &module_info_runtime, "identity"},
  {"from", &module_info_runtime, "from"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%bb", &module_info_boot, "%bb"},
  {"%f+", &module_info_boot, "%f+"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"bound?", &module_info_boot, "bound?"},
  {"nul", &module_info_boot, "nul"},
  {"~==", &module_info_runtime, "~=="},
  {"keys", &module_info_runtime, "keys"},
  {"collected", &module_info_macros, "collected"},
  {"%su", &module_info_boot, "%su"},
  {"%i&", &module_info_boot, "%i&"},
  {"even?", &module_info_runtime, "even?"},
  {"str", &module_info_runtime, "str"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"%cu", &module_info_boot, "%cu"},
  {"var-type", &module_info_macros, "var-type"},
  {"%c<", &module_info_boot, "%c<"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"popf", &module_info_macros, "popf"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"len", &module_info_runtime, "len"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"%i+", &module_info_boot, "%i+"},
  {"%snul", &module_info_boot, "%snul"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"next-method", &module_info_macros, "next-method"},
  {"<union>", &module_info_boot, "<union>"},
  {"from-to", &module_info_runtime, "from-to"},
  {"slot", &module_info_boot, "slot"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"in", &module_info_runtime, "in"},
  {"to-str", &module_info_runtime, "to-str"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"loc", &module_info_boot, "loc"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"<log>", &module_info_boot, "<log>"},
  {"tup", &module_info_macros, "tup"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"list", &module_info_runtime, "list"},
  {"tail", &module_info_boot, "tail"},
  {"any?", &module_info_runtime, "any?"},
  {"all?", &module_info_runtime, "all?"},
  {"<range>", &module_info_runtime, "<range>"},
  {"%im", &module_info_boot, "%im"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"%selt", &module_info_boot, "%selt"},
  {"%f=", &module_info_boot, "%f="},
  {"fill", &module_info_runtime, "fill"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"%sb", &module_info_boot, "%sb"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"==", &module_info_macros, "=="},
  {"1st", &module_info_runtime, "1st"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"<port>", &module_info_runtime, "<port>"},
  {"<any>", &module_info_boot, "<any>"},
  {"pop", &module_info_runtime, "pop"},
  {"vec", &module_info_runtime, "vec"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"for", &module_info_macros, "for"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"<list>", &module_info_runtime, "<list>"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"var-name", &module_info_macros, "var-name"},
  {"assocq", &module_info_runtime, "assocq"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"alter", &module_info_runtime, "alter"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"%pair", &module_info_boot, "%pair"},
  {"df", &module_info_boot, "df"},
  {"pick", &module_info_runtime, "pick"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"app-args", &module_info_runtime, "app-args"},
  {"isa?", &module_info_boot, "isa?"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"from-by", &module_info_runtime, "from-by"},
  {"select", &module_info_macros, "select"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"type-object", &module_info_boot, "type-object"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"fin", &module_info_boot, "fin"},
  {"rep", &module_info_boot, "rep"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"2nd", &module_info_runtime, "2nd"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%iu", &module_info_boot, "%iu"},
  {"/", &module_info_runtime, "/"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"<step>", &module_info_runtime, "<step>"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"truncate", &module_info_runtime, "truncate"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"pos", &module_info_runtime, "pos"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"not", &module_info_boot, "not"},
  {"dlet", &module_info_macros, "dlet"},
  {"min", &module_info_runtime, "min"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"fabs", &module_info_runtime, "fabs"},
  {"do3", &module_info_runtime, "do3"},
  {"odd?", &module_info_runtime, "odd?"},
  {"use", &module_info_boot, "use"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"assq", &module_info_runtime, "assq"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"dec", &module_info_macros, "dec"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"collect", &module_info_macros, "collect"},
  {"lab", &module_info_boot, "lab"},
  {"assert", &module_info_macros, "assert"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"%i-", &module_info_boot, "%i-"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"assoc", &module_info_runtime, "assoc"},
  {"neg", &module_info_runtime, "neg"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"isa", &module_info_boot, "isa"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"write-string", &module_info_runtime, "write-string"},
  {"<class>", &module_info_boot, "<class>"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"set", &module_info_boot, "set"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"from-below", &module_info_runtime, "from-below"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"type-error", &module_info_boot, "type-error"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"error", &module_info_boot, "error"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"or", &module_info_macros, "or"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"<type>", &module_info_boot, "<type>"},
  {"%velt", &module_info_boot, "%velt"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"lsh", &module_info_runtime, "lsh"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"pair", &module_info_macros, "pair"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"-", &module_info_runtime, "-"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"neg?", &module_info_runtime, "neg?"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"del", &module_info_runtime, "del"},
  {"fapply", &module_info_boot, "fapply"},
  {"%fu", &module_info_boot, "%fu"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"head", &module_info_boot, "head"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"empty?", &module_info_macros, "empty?"},
  {"gensym", &module_info_macros, "gensym"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"read", &module_info_runtime, "read"},
  {"dv", &module_info_boot, "dv"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"now-key", &module_info_runtime, "now-key"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"%raw", &module_info_boot, "%raw"},
  {"%i^", &module_info_boot, "%i^"},
  {"unless", &module_info_macros, "unless"},
  {"round", &module_info_runtime, "round"},
  {"floor/", &module_info_runtime, "floor/"},
  {"compose", &module_info_runtime, "compose"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"do2", &module_info_runtime, "do2"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"dc", &module_info_boot, "dc"},
  {"sub", &module_info_runtime, "sub"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"%c=", &module_info_boot, "%c="},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"dp", &module_info_boot, "dp"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"round/", &module_info_runtime, "round/"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"address-of", &module_info_runtime, "address-of"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"ash", &module_info_runtime, "ash"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"if", &module_info_boot, "if"},
  {"<str>", &module_info_boot, "<str>"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"del-key", &module_info_runtime, "del-key"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"object-class", &module_info_boot, "object-class"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"from-above", &module_info_runtime, "from-above"},
  {"%f/", &module_info_boot, "%f/"},
  {"write-char", &module_info_runtime, "write-char"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"nil", &module_info_boot, "nil"},
  {"%call-next-method", &module_info_boot, "%call-next-method"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"newline", &module_info_runtime, "newline"},
  {"abs", &module_info_runtime, "abs"},
  {"format", &module_info_runtime, "format"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"assqn", &module_info_runtime, "assqn"},
  {"dm", &module_info_boot, "dm"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"*", &module_info_runtime, "*"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"+", &module_info_runtime, "+"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"and", &module_info_macros, "and"},
  {"curry", &module_info_runtime, "curry"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"seq", &module_info_boot, "seq"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"read-char", &module_info_runtime, "read-char"},
  {"3rd", &module_info_runtime, "3rd"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"%f<", &module_info_boot, "%f<"},
  {"try", &module_info_boot, "try"},
  {"%vec", &module_info_boot, "%vec"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"max", &module_info_runtime, "max"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"floor", &module_info_runtime, "floor"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"modulo", &module_info_runtime, "modulo"},
  {"default", &module_info_runtime, "default"},
  {"%i=", &module_info_boot, "%i="},
  {"<flat>", &module_info_boot, "<flat>"},
  {"%cb", &module_info_boot, "%cb"},
  {"find-key", &module_info_runtime, "find-key"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"<met>", &module_info_boot, "<met>"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"map", &module_info_macros, "map"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"nul?", &module_info_runtime, "nul?"},
  {"empty", &module_info_runtime, "empty"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"port-index", &module_info_runtime, "port-index"},
  {"lst", &module_info_boot, "lst"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"first-then", &module_info_runtime, "first-then"},
  {"remainder", &module_info_runtime, "remainder"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"logior", &module_info_runtime, "logior"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"<=", &module_info_runtime, "<="},
  {"=", &module_info_runtime, "="},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"map2", &module_info_runtime, "map2"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"pushf", &module_info_macros, "pushf"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"pos?", &module_info_runtime, "pos?"},
  {"%isa", &module_info_boot, "%isa"},
  {"%f-", &module_info_boot, "%f-"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"false-or", &module_info_runtime, "false-or"},
  {"%ib", &module_info_boot, "%ib"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"<", &module_info_runtime, "<"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"%lu", &module_info_boot, "%lu"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"class-name", &module_info_boot, "class-name"},
  {"logxor", &module_info_runtime, "logxor"},
  {"always", &module_info_runtime, "always"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"push", &module_info_runtime, "push"},
  {"%i*", &module_info_boot, "%i*"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"buf", &module_info_runtime, "buf"},
  {"reduce", &module_info_runtime, "reduce"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"~=", &module_info_runtime, "~="},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"cat", &module_info_macros, "cat"},
  {">", &module_info_runtime, ">"},
  {"last", &module_info_runtime, "last"},
  {"logand", &module_info_runtime, "logand"},
  {"t<", &module_info_runtime, "t<"},
  {"<col>", &module_info_boot, "<col>"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"apply", &module_info_boot, "apply"},
  {"do", &module_info_runtime, "do"},
  {"force-output", &module_info_runtime, "force-output"},
  {"%f*", &module_info_boot, "%f*"},
  {"fab", &module_info_runtime, "fab"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"rev!", &module_info_runtime, "rev!"},
  {"lognot", &module_info_runtime, "lognot"},
  {"as", &module_info_runtime, "as"},
  {"sig", &module_info_runtime, "sig"},
  {"out", &module_info_runtime, "out"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"t=", &module_info_runtime, "t="},
  {"subtype?", &module_info_boot, "subtype?"},
  {"case", &module_info_macros, "case"},
  {"rev", &module_info_runtime, "rev"},
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
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"%i!", &module_info_boot, "%i!"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"%iv", &module_info_boot, "%iv"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"%slot", &module_info_boot, "%slot"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"collecting", &module_info_macros, "collecting"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"%i<", &module_info_boot, "%i<"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"%slen", &module_info_boot, "%slen"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"t+", &module_info_runtime, "t+"},
  {"cat2", &module_info_runtime, "cat2"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"mem?", &module_info_runtime, "mem?"},
  {"zero?", &module_info_runtime, "zero?"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"when", &module_info_macros, "when"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"dss", &module_info_boot, "dss"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"cat!", &module_info_runtime, "cat!"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"ct", &module_info_boot, "ct"},
  {"type-class", &module_info_boot, "type-class"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"let", &module_info_boot, "let"},
  {"<error>", &module_info_runtime, "<error>"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {">=", &module_info_runtime, ">="},
  {"<int>", &module_info_boot, "<int>"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"%ft", &module_info_boot, "%ft"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"dg", &module_info_boot, "dg"},
  {"add!", &module_info_runtime, "add!"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"<map>", &module_info_runtime, "<map>"},
  {"%str", &module_info_boot, "%str"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"inc", &module_info_macros, "inc"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sub-read-list", &YreadYsub_read_list},
  {"preferred-case", &YreadYpreferred_case},
  {"make-immutable!", &YreadYmake_immutableX},
  {"sub-read-constituent", &YreadYsub_read_constituent},
  {"set-standard-read-macro!", &YreadYset_standard_read_macroX},
  {"token-message", &YreadYtoken_message},
  {"sub-read-token", &YreadYsub_read_token},
  {"set-standard-syntax!", &YreadYset_standard_syntaxX},
  {"define-sharp-macro", &YreadYdefine_sharp_macro},
  {"$string-escape-chars", &YreadYDstring_escape_chars},
  {"$dot", &YreadYDdot},
  {"$close-paren", &YreadYDclose_paren},
  {"parse-token", &YreadYparse_token},
  {"reverse-list->string", &YreadYreverse_list_Gstring},
  {"<reader-token>", &YreadYLreader_tokenG},
  {"gobble-line", &YreadYgobble_line},
  {"---main-0---", NULL},
  {"reading-error", &YreadYreading_error},
  {"read-string-literal", &YreadYread_string_literal},
  {"sub-read-carefully", &YreadYsub_read_carefully},
  {"$char-long-names", &YreadYDchar_long_names},
  {"*read-dispatch-vector*", &YreadYTread_dispatch_vectorT},
  {"reader-token?", &YreadYreader_tokenQ},
  {"token-message-setter", &YreadYtoken_message_setter},
  {"sub-read", &YreadYsub_read},
  {"*sharp-macros*", &YreadYTsharp_macrosT},
  {"$strange-symbol-names", &YreadYDstrange_symbol_names},
  {"read-from-string", &YreadYread_from_string},
  {"make-reader-token", &YreadYmake_reader_token},
  {"*read-terminating?-vector*", &YreadYTread_terminatingQ_vectorT},
  {"warn", &YreadYwarn},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"read", "read"},
  {"$char-long-names", "$char-long-names"},
  {"read-from-string", "read-from-string"},
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
