/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: read */

EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YLlocG,"boot","<loc>");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YLseqG,"boot","<seq>");
DEF(YreadYsub_read,"read","sub-read");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YruntimeYfrom_below,"runtime","from-below");
DEF(YreadYDstring_escape_chars,"read","$string-escape-chars");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYroundS,"runtime","round/");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YruntimeYE,"runtime","=");
EXT(Yslot_init,"boot","slot-init");
EXT(YruntimeYrev,"runtime","rev");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YLtraitsG,"boot","<traits>");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfapply,"boot","fapply");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YruntimeYreduce,"runtime","reduce");
DEF(YreadYtoken_message_setter,"read","token-message-setter");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YobjectL,"boot","object<");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YruntimeYtA,"runtime","t+");
EXT(YruntimeYfrom,"runtime","from");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YruntimeYcompose,"runtime","compose");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeY1st,"runtime","1st");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYL,"runtime","<");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yslot_setter,"boot","slot-setter");
DEF(YreadYTsharp_macrosT,"read","*sharp-macros*");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYas,"runtime","as");
EXT(YPsnul,"boot","%snul");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYNE,"runtime","~=");
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYsig,"runtime","sig");
DEF(YreadYsub_read_list,"read","sub-read-list");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YruntimeYmax,"runtime","max");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(Yerror,"boot","error");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYLE,"runtime","<=");
DEF(YreadYsub_read_token,"read","sub-read-token");
EXT(Ysig_value,"boot","sig-value");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YLvecG,"boot","<vec>");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYidentity,"runtime","identity");
EXT(Ynil,"boot","nil");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(Ytype_error,"boot","type-error");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
DEF(YreadYreverse_list_Gstring,"read","reverse-list->string");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
DEF(YreadYmake_reader_token,"read","make-reader-token");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYabs,"runtime","abs");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(Ytail,"boot","tail");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYpop,"runtime","pop");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
DEF(YreadYset_standard_syntaxX,"read","set-standard-syntax!");
EXT(YruntimeYlist,"runtime","list");
EXT(YruntimeYround,"runtime","round");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YLtupG,"boot","<tup>");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYcurry,"runtime","curry");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YruntimeYdel,"runtime","del");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YruntimeYlast,"runtime","last");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(Ynul,"boot","nul");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(Ysig_names,"boot","sig-names");
EXT(YLlogG,"boot","<log>");
EXT(YPisa,"boot","%isa");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YruntimeYlen,"runtime","len");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YruntimeYdo,"runtime","do");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YisaQ,"boot","isa?");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yapply,"boot","apply");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
DEF(YreadYTread_terminatingQ_vectorT,"read","*read-terminating?-vector*");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
DEF(YreadYDdot,"read","$dot");
DEF(YreadYparse_token,"read","parse-token");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYassq,"runtime","assq");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(Ynot,"boot","not");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYmin,"runtime","min");
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(Yobject_slots,"boot","object-slots");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
DEF(YreadYsub_read_carefully,"read","sub-read-carefully");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYdo2,"runtime","do2");
DEF(YreadYLreader_tokenG,"read","<reader-token>");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYA,"runtime","+");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYkeys,"runtime","keys");
DEF(YreadYtoken_message,"read","token-message");
EXT(Yfind_setter,"boot","find-setter");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Ysym_name,"boot","sym-name");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YPdefine_method,"boot","%define-method");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeYto_digit,"runtime","to-digit");
DEF(YreadYTread_dispatch_vectorT,"read","*read-dispatch-vector*");
EXT(Yslot_getter,"boot","slot-getter");
EXT(Yobject_direct_parents,"boot","object-direct-parents");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYvec,"runtime","vec");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YruntimeYalways,"runtime","always");
EXT(YruntimeYsub,"runtime","sub");
DEF(YreadYsub_read_constituent,"read","sub-read-constituent");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YruntimeYmemQ,"runtime","mem?");
DEF(YreadYread_string_literal,"read","read-string-literal");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYin,"runtime","in");
DEF(YreadYpreferred_case,"read","preferred-case");
EXT(YruntimeYfill,"runtime","fill");
DEF(YreadYreader_tokenQ,"read","reader-token?");
DEF(YreadYwarn,"read","warn");
DEF(YreadYdefine_sharp_macro,"read","define-sharp-macro");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYout,"runtime","out");
DEF(YreadYmake_immutableX,"read","make-immutable!");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
DEF(YreadYset_standard_read_macroX,"read","set-standard-read-macro!");
EXT(Ylst,"boot","lst");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yobject_direct_slots,"boot","object-direct-slots");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYempty,"runtime","empty");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeYtL,"runtime","t<");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(Yhead,"boot","head");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYdefault,"runtime","default");
EXT(Yslot_value,"boot","slot-value");
DEF(YreadYDclose_paren,"read","$close-paren");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(Yfun_value,"boot","fun-value");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Yfun_names,"boot","fun-names");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYGE,"runtime",">=");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYLmapG,"runtime","<map>");
DEF(YreadYread_from_string,"read","read-from-string");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YPvnul,"boot","%vnul");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYneg,"runtime","neg");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YLflatG,"boot","<flat>");
DEF(YreadYDstrange_symbol_names,"read","$strange-symbol-names");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YruntimeYforce_output,"runtime","force-output");
DEF(YreadYreading_error,"read","reading-error");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YLlstG,"boot","<lst>");
EXT(Yhead_setter,"boot","head-setter");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YPcall_next_method,"boot","%call-next-method");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYtE,"runtime","t=");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
DEF(YreadYDchar_long_names,"read","$char-long-names");
DEF(YreadYgobble_line,"read","gobble-line");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_49);
DEFLIT(lit_26);
DEFLIT(lit_11);
DEFLIT(lit_46);
DEFLIT(lit_17);
DEFLIT(lit_16);
DEFLIT(lit_50);
DEFLIT(lit_35);
DEFLIT(lit_64);
DEFLIT(lit_12);
DEFLIT(lit_27);
DEFLIT(lit_59);
DEFLIT(lit_29);
DEFLIT(lit_28);
DEFLIT(lit_53);
DEFLIT(lit_39);
DEFLIT(lit_5);
DEFLIT(lit_3);
DEFLIT(lit_2);
DEFLIT(lit_19);
DEFLIT(lit_1);
DEFLIT(lit_7);
DEFLIT(lit_60);
DEFLIT(lit_24);
DEFLIT(lit_57);
DEFLIT(lit_41);
DEFLIT(lit_52);
DEFLIT(lit_56);
DEFLIT(lit_4);
DEFLIT(lit_40);
DEFLIT(lit_9);
DEFLIT(lit_62);
DEFLIT(lit_8);
DEFLIT(lit_48);
DEFLIT(lit_30);
DEFLIT(lit_20);
DEFLIT(lit_67);
DEFLIT(lit_58);
DEFLIT(lit_14);
DEFLIT(lit_54);
DEFLIT(lit_66);
DEFLIT(lit_31);
DEFLIT(lit_21);
DEFLIT(lit_22);
DEFLIT(lit_25);
DEFLIT(lit_45);
DEFLIT(lit_63);
DEFLIT(lit_37);
DEFLIT(lit_32);
DEFLIT(lit_36);
DEFLIT(lit_13);
DEFLIT(lit_15);
DEFLIT(lit_65);
DEFLIT(lit_42);
DEFLIT(lit_61);
DEFLIT(lit_47);
DEFLIT(lit_44);
DEFLIT(lit_18);
DEFLIT(lit_0);
DEFLIT(lit_38);
DEFLIT(lit_10);
DEFLIT(lit_43);
DEFLIT(lit_23);
DEFLIT(lit_33);
DEFLIT(lit_34);
DEFLIT(lit_55);
DEFLIT(lit_51);
DEFLIT(lit_6);

/* FUNCTIONS: */

LOCFOR(fun_loop_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_13);
FUNFOR(YreadYsub_read_constituent);
LOCFOR(fun_15);
LOCFOR(fun_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_loop_22);
FUNFOR(YreadYread_string_literal);
LOCFOR(fun_24);
LOCFOR(fun_loop_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_loop_35);
LOCFOR(fun_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
extern P YreadY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_loop_0) {
  P formF1015;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T8 = CALL1(CHKREF(YreadYsub_read),FREEREF(0));
  formF1015 = T8;
  T7 = CALL1(CHKREF(YreadYreader_tokenQ),formF1015);
  T6 = CALL1(CHKREF(Ynot),T7);
  if (T6 != YPfalse) {
    T1 = formF1015;
  } else {
    T5 = CALL2(CHKREF(YmacrosYEE),formF1015,CHKREF(YreadYDclose_paren));
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

FUNCODEDEF(fun_1) {
  ARG(port_, 0);
  P loopF1016;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_0,2);
  loopF1016 = T2;
  FUNINIT(loopF1016, 2,port_,loopF1016);
  T1 = KCALL0(loopF1016);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYcall_with_string_input_port),x_,CHKREF(YruntimeYread));
  QRET(T0);
}

FUNCODEDEF(fun_3) {
  ARG(port_, 0);
  P formF1017;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(YreadYsub_read),port_);
  formF1017 = T8;
  T7 = CALL1(CHKREF(YruntimeYeof_objectQ),formF1017);
  if (T7 != YPfalse) {
    T6 = CALL2(CHKREF(YreadYreading_error),port_,CHKREF(lit_7));
    T1 = T6;
  } else {
    T5 = CALL1(CHKREF(YreadYreader_tokenQ),formF1017);
    if (T5 != YPfalse) {
      T4 = CALL1(CHKREF(Ytail),formF1017);
      T3 = CALL2(CHKREF(YreadYreading_error),port_,T4);
      T2 = T3;
    } else {
      T2 = formF1017;
    }
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  ARG(Ux_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yslot_value),Ux_,CHKREF(YreadYtoken_message));
  QRET(T0);
}

FUNCODEDEF(fun_5) {
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

FUNCODEDEF(fun_7) {
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

FUNCODEDEF(fun_8) {
  ARG(form_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YisaQ),form_,CHKREF(YreadYLreader_tokenG));
  RET(T0);
}

FUNCODEDEF(fun_9) {
  ARG(port_, 0);
  P cF1018;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = CALL1(CHKREF(YruntimeYread_char),port_);
  cF1018 = T6;
  T5 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1018);
  if (T5 != YPfalse) {
    T1 = cF1018;
  } else {
    T4 = CALL1(CHKREF(YruntimeYchar_Gascii),cF1018);
    T3 = CALL2(CHKREF(YruntimeYelt),CHKREF(YreadYTread_dispatch_vectorT),T4);
    T2 = CALL2(T3,cF1018,port_);
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
  T0 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_20),c_);
  QRET(T0);
}

FUNCODEDEF(fun_11) {
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

FUNCODEDEF(fun_16) {
  ARG(proc_, 0);
  ARG(terminatingQ_, 1);
  ARG(char_, 2);
  P T0;
  P a1,a2,a3;
loop:
  T0 = CALL3(CHKREF(YreadYset_standard_syntaxX),char_,terminatingQ_,proc_);
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  ARG(port_, 0);
  ARG(c_, 1);
  P another_formF1021;
  P last_formF1020;
  P formF1019;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
loop:
  T17 = CALL1(CHKREF(YreadYsub_read),port_);
  formF1019 = T17;
  T16 = CALL1(CHKREF(YruntimeYeof_objectQ),formF1019);
  if (T16 != YPfalse) {
    T15 = CALL2(CHKREF(YreadYreading_error),port_,CHKREF(lit_32));
    T1 = T15;
  } else {
    T14 = CALL2(CHKREF(YmacrosYEE),formF1019,CHKREF(YreadYDclose_paren));
    if (T14 != YPfalse) {
      T2 = Ynil;
    } else {
      T13 = CALL2(CHKREF(YmacrosYEE),formF1019,CHKREF(YreadYDdot));
      if (T13 != YPfalse) {
        T12 = CALL1(CHKREF(YreadYsub_read_carefully),port_);
        last_formF1020 = T12;
        T11 = CALL1(CHKREF(YreadYsub_read),port_);
        another_formF1021 = T11;
        T10 = CALL2(CHKREF(YmacrosYEE),another_formF1021,CHKREF(YreadYDclose_paren));
        if (T10 != YPfalse) {
          T8 = last_formF1020;
        } else {
          T9 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_31),another_formF1021);
          T8 = T9;
        }
        T7 = T8;
        T6 = T7;
        T3 = T6;
      } else {
        T5 = CALL2(CHKREF(YreadYsub_read_list),c_,port_);
        T4 = CALL2(CHKREF(YmacrosYpair),formF1019,T5);
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
  T0 = CALL2(CHKREF(Ylst),CHKREF(lit_33),T1);
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  ARG(port_, 0);
  ARG(c_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YreadYsub_read_carefully),port_);
  T0 = CALL2(CHKREF(Ylst),CHKREF(lit_34),T1);
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  ARG(port_, 0);
  ARG(c_, 1);
  P keywordF1023;
  P nextF1022;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL1(CHKREF(YruntimeYpeek_char),port_);
  nextF1022 = T9;
  T8 = CALL1(CHKREF(YruntimeYeof_objectQ),nextF1022);
  if (T8 != YPfalse) {
    T7 = CALL2(CHKREF(YreadYreading_error),port_,CHKREF(lit_37));
    T4 = T7;
  } else {
    T6 = CALL2(CHKREF(YruntimeYE),nextF1022,YPchr((P)64));
    if (T6 != YPfalse) {
      CALL1(CHKREF(YruntimeYread_char),port_);
      T5 = CHKREF(lit_36);
    } else {
      T5 = CHKREF(lit_35);
    }
    T4 = T5;
  }
  keywordF1023 = T4;
  T3 = CALL1(CHKREF(YreadYsub_read_carefully),port_);
  T2 = CALL2(CHKREF(Ylst),keywordF1023,T3);
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_22) {
  ARG(i_, 0);
  ARG(l_, 1);
  P tmpF1027;
  P ecF1026;
  P cF1025;
  P cF1024;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
loop:
  T33 = CALL1(CHKREF(YruntimeYread_char),FREEREF(0));
  cF1024 = T33;
  T32 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1024);
  if (T32 != YPfalse) {
    T31 = CALL2(CHKREF(YreadYreading_error),FREEREF(0),CHKREF(lit_43));
    T1 = T31;
  } else {
    T30 = CALL2(CHKREF(YruntimeYE),cF1024,YPchr((P)92));
    if (T30 != YPfalse) {
      T29 = CALL1(CHKREF(YruntimeYread_char),FREEREF(0));
      cF1025 = T29;
      T28 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1025);
      if (T28 != YPfalse) {
        T27 = CALL2(CHKREF(YreadYreading_error),FREEREF(0),CHKREF(lit_42));
        T10 = T27;
      } else {
        T26 = CALL2(CHKREF(YruntimeYE),cF1025,YPchr((P)92));
        tmpF1027 = T26;
        if (tmpF1027 != YPfalse) {
          T24 = tmpF1027;
        } else {
          T25 = CALL2(CHKREF(YruntimeYE),cF1025,YPchr((P)34));
          T24 = T25;
        }
        T23 = T24;
        if (T23 != YPfalse) {
          T22 = CALL2(CHKREF(YmacrosYpair),cF1025,l_);
          T21 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
          a1 = T22;
          a2 = T21;
          l_ = a1;
          i_ = a2;
          goto loop;
          T11 = T20;
        } else {
          T19 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),cF1025);
          T18 = CALL2(CHKREF(YruntimeYelt),CHKREF(YreadYDstring_escape_chars),T19);
          ecF1026 = T18;
          if (ecF1026 != YPfalse) {
            T17 = CALL2(CHKREF(YmacrosYpair),ecF1026,l_);
            T16 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
            a1 = T17;
            a2 = T16;
            l_ = a1;
            i_ = a2;
            goto loop;
            T13 = T15;
          } else {
            T14 = CALL3(CHKREF(YreadYreading_error),FREEREF(0),CHKREF(lit_41),cF1025);
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
      T8 = CALL2(CHKREF(YruntimeYE),cF1024,YPchr((P)34));
      if (T8 != YPfalse) {
        T7 = CALL2(CHKREF(YreadYreverse_list_Gstring),l_,i_);
        T3 = T7;
      } else {
        T6 = CALL2(CHKREF(YmacrosYpair),cF1024,l_);
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
  P loopF1028;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_22,2);
  loopF1028 = T2;
  FUNINIT(loopF1028, 2,port_,loopF1028);
  T1 = KCALL2(loopF1028,Ynil,YPint((P)0));
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
  P cF1029;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  T6 = CALL1(CHKREF(YruntimeYread_char),FREEREF(0));
  cF1029 = T6;
  T5 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1029);
  if (T5 != YPfalse) {
    T1 = cF1029;
  } else {
    T4 = CALL2(CHKREF(YruntimeYE),cF1029,YPchr((P)10));
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

FUNCODEDEF(fun_26) {
  ARG(port_, 0);
  P loopF1030;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_25,2);
  loopF1030 = T2;
  FUNINIT(loopF1030, 2,port_,loopF1030);
  T1 = KCALL0(loopF1030);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_27) {
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
  P probeF1033;
  P cF1032;
  P cF1031;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = CALL1(CHKREF(YruntimeYpeek_char),port_);
  cF1031 = T13;
  T12 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1031);
  if (T12 != YPfalse) {
    T11 = CALL2(CHKREF(YreadYreading_error),port_,CHKREF(lit_47));
    T9 = T11;
  } else {
    T10 = CALL1(CHKREF(YruntimeYas_lowercase),cF1031);
    T9 = T10;
  }
  cF1032 = T9;
  T8 = CALL2(CHKREF(YruntimeYassq),cF1032,CHKREF(YreadYTsharp_macrosT));
  probeF1033 = T8;
  if (probeF1033 != YPfalse) {
    T7 = CALL1(CHKREF(Ytail),probeF1033);
    T6 = CALL1(CHKREF(Yhead),T7);
    T5 = CALL2(T6,cF1032,port_);
    T3 = T5;
  } else {
    T4 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_46),cF1032);
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
  P tempF1036;
  P nameF1035;
  P cF1034;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  CALL1(CHKREF(YruntimeYread_char),port_);
  T19 = CALL1(CHKREF(YruntimeYpeek_char),port_);
  cF1034 = T19;
  T18 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1034);
  if (T18 != YPfalse) {
    T17 = CALL2(CHKREF(YreadYreading_error),port_,CHKREF(lit_50));
    T1 = T17;
  } else {
    T16 = CALL1(CHKREF(YruntimeYalphabeticQ),cF1034);
    if (T16 != YPfalse) {
      T15 = CALL1(CHKREF(YreadYsub_read_carefully),port_);
      nameF1035 = T15;
      T14 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),nameF1035);
      T13 = CALL1(CHKREF(YruntimeYlen),T14);
      T12 = CALL2(CHKREF(YruntimeYE),T13,YPint((P)1));
      if (T12 != YPfalse) {
        T5 = cF1034;
      } else {
        T11 = CALL2(CHKREF(YruntimeYassq),nameF1035,CHKREF(YreadYDchar_long_names));
        tempF1036 = T11;
        if (tempF1036 != YPfalse) {
          T10 = CALL1(CHKREF(Ytail),tempF1036);
          T9 = CALL1(CHKREF(Yhead),T10);
          T7 = T9;
        } else {
          T8 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_49),nameF1035);
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
  P tmpF1038;
  P stringF1037;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = CALL2(CHKREF(YreadYsub_read_token),YPchr((P)35),port_);
  stringF1037 = T5;
  T4 = CALL1(CHKREF(YruntimeYstr_to_num),stringF1037);
  tmpF1038 = T4;
  if (tmpF1038 != YPfalse) {
    T2 = tmpF1038;
  } else {
    T3 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_52),stringF1037);
    T2 = T3;
  }
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_35) {
  ARG(n_, 0);
  ARG(l_, 1);
  P tmpF1040;
  P cF1039;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = CALL1(CHKREF(YruntimeYpeek_char),FREEREF(0));
  cF1039 = T13;
  T12 = CALL1(CHKREF(YruntimeYeof_objectQ),cF1039);
  tmpF1040 = T12;
  if (tmpF1040 != YPfalse) {
    T9 = tmpF1040;
  } else {
    T11 = CALL1(CHKREF(YruntimeYchar_Gascii),cF1039);
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

FUNCODEDEF(fun_36) {
  ARG(port_, 0);
  ARG(c_, 1);
  P loopF1041;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = FUNSHELL(1,fun_loop_35,2);
  loopF1041 = T4;
  FUNINIT(loopF1041, 2,port_,loopF1041);
  T3 = CALL1(CHKREF(YreadYpreferred_case),c_);
  T2 = CALL1(CHKREF(Ylst),T3);
  T1 = KCALL2(loopF1041,T2,YPint((P)1));
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

FUNCODEDEF(fun_38) {
  ARG(port_, 0);
  ARG(string_, 1);
  P tmpF1046;
  P tmpF1045;
  P tmpF1044;
  P cF1043;
  P maybe_numberF1042;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T25 = CALL2(CHKREF(YruntimeYelt),string_,YPint((P)0));
  cF1043 = T25;
  T24 = CALL1(CHKREF(YruntimeYnumericQ),cF1043);
  tmpF1044 = T24;
  if (tmpF1044 != YPfalse) {
    T16 = tmpF1044;
  } else {
    T23 = CALL2(CHKREF(YruntimeYE),cF1043,YPchr((P)43));
    tmpF1045 = T23;
    if (tmpF1045 != YPfalse) {
      T18 = tmpF1045;
    } else {
      T22 = CALL2(CHKREF(YruntimeYE),cF1043,YPchr((P)45));
      tmpF1046 = T22;
      if (tmpF1046 != YPfalse) {
        T20 = tmpF1046;
      } else {
        T21 = CALL2(CHKREF(YruntimeYE),cF1043,YPchr((P)46));
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
    maybe_numberF1042 = T13;
    if (maybe_numberF1042 != YPfalse) {
      T4 = maybe_numberF1042;
    } else {
      T12 = FUNFAB(fun_37,1,string_);
      T11 = CALL2(CHKREF(YruntimeYanyQ),T12,CHKREF(YreadYDstrange_symbol_names));
      if (T11 != YPfalse) {
        T10 = CALL1(CHKREF(YreadYmake_immutableX),string_);
        T9 = CALL2(CHKREF(YruntimeYas),CHKREF(YLsymG),T10);
        T5 = T9;
      } else {
        T8 = CALL2(CHKREF(YruntimeYE),string_,CHKREF(lit_58));
        if (T8 != YPfalse) {
          T6 = CHKREF(YreadYDdot);
        } else {
          T7 = CALL3(CHKREF(YreadYreading_error),port_,CHKREF(lit_57),string_);
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

FUNCODEDEF(fun_39) {
  ARG(irritants_, 0);
  ARG(message_, 1);
  ARG(port_, 2);
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = CALL2(CHKREF(YmacrosYcat),message_,CHKREF(lit_63));
  T2 = CALL1(CHKREF(Ylst),port_);
  T1 = CALL2(CHKREF(YmacrosYcat),irritants_,T2);
  T0 = CALL2(CHKREF(Yerror),T3,T1);
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  ARG(irritants_and_port_, 0);
  ARG(string_, 1);
  P a1,a2;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_41) {
  ARG(n_, 0);
  ARG(l_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YruntimeYrevX),l_);
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),T1);
  RET(T0);
}

FUNCODEDEF(fun_42) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(x_);
}

P YreadY___main_0___() {
  P sub_read_whitespaceF1050;
  P str10496F1049;
  P vecF1048;
  P number_sharp_macroF1047;
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
  fun_1 = YPmet(FUNCODEREF(fun_1),CHKREF(lit_0),T0,ENVNUL);
  T5 = BOUNDP(YruntimeYread);
  if (T5 != YPfalse) {
    T4 = CHKREF(YruntimeYread);
  } else {
    T4 = YPfalse;
  }
  T3 = fun_1;
  T2 = CALL2(CHKREF(YPdefine_method),T4,T3);
  YruntimeYread = T2;
  regsym(&YruntimeYread,"runtime","read");
  lit_4 = YPPsym((P)"read-from-string");
  lit_5 = YPPsym((P)"x");
  T6 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_2 = YPmet(FUNCODEREF(fun_2),CHKREF(lit_4),T6,ENVNUL);
  T10 = BOUNDP(YreadYread_from_string);
  if (T10 != YPfalse) {
    T9 = CHKREF(YreadYread_from_string);
  } else {
    T9 = YPfalse;
  }
  T8 = fun_2;
  T7 = CALL2(CHKREF(YPdefine_method),T9,T8);
  YreadYread_from_string = T7;
  regsym(&YreadYread_from_string,"read","read-from-string");
  lit_6 = YPPsym((P)"sub-read-carefully");
  lit_7 = YPsb((P)"unexpected end of file");
  T11 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YruntimeYLportG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_3 = YPmet(FUNCODEREF(fun_3),CHKREF(lit_6),T11,ENVNUL);
  T15 = BOUNDP(YreadYsub_read_carefully);
  if (T15 != YPfalse) {
    T14 = CHKREF(YreadYsub_read_carefully);
  } else {
    T14 = YPfalse;
  }
  T13 = fun_3;
  T12 = CALL2(CHKREF(YPdefine_method),T14,T13);
  YreadYsub_read_carefully = T12;
  regsym(&YreadYsub_read_carefully,"read","sub-read-carefully");
  T17 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T16 = CALL3(CHKREF(YPisa),T17,Ynil,Ynil);
  YreadYLreader_tokenG = T16;
  regsym(&YreadYLreader_tokenG,"read","<reader-token>");
  lit_8 = YPPsym((P)"token-message");
  lit_9 = YPPsym((P)"_x");
  T18 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YreadYLreader_tokenG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_4 = YPmet(FUNCODEREF(fun_4),CHKREF(lit_8),T18,ENVNUL);
  T22 = BOUNDP(YreadYtoken_message);
  if (T22 != YPfalse) {
    T21 = CHKREF(YreadYtoken_message);
  } else {
    T21 = YPfalse;
  }
  T20 = fun_4;
  T19 = CALL2(CHKREF(YPdefine_method),T21,T20);
  YreadYtoken_message = T19;
  regsym(&YreadYtoken_message,"read","token-message");
  lit_10 = YPPsym((P)"token-message-setter");
  lit_11 = YPPsym((P)"_z");
  T23 = YPsig(YPPlist(2,CHKREF(lit_11),CHKREF(lit_9)),YPPlist(2,CHKREF(YLstrG),CHKREF(YreadYLreader_tokenG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_5 = YPmet(FUNCODEREF(fun_5),CHKREF(lit_10),T23,ENVNUL);
  T27 = BOUNDP(YreadYtoken_message_setter);
  if (T27 != YPfalse) {
    T26 = CHKREF(YreadYtoken_message_setter);
  } else {
    T26 = YPfalse;
  }
  T25 = fun_5;
  T24 = CALL2(CHKREF(YPdefine_method),T26,T25);
  YreadYtoken_message_setter = T24;
  regsym(&YreadYtoken_message_setter,"read","token-message-setter");
  T28 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T28,ENVNUL);
  T29 = fun_6;
  CALLN(CHKREF(YPslot),5,CHKREF(YreadYLreader_tokenG),CHKREF(YreadYtoken_message),CHKREF(YreadYtoken_message_setter),CHKREF(YLstrG),T29);
  lit_12 = YPPsym((P)"make-reader-token");
  lit_13 = YPPsym((P)"message");
  T30 = YPsig(YPPlist(1,CHKREF(lit_13)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_7 = YPmet(FUNCODEREF(fun_7),CHKREF(lit_12),T30,ENVNUL);
  T34 = BOUNDP(YreadYmake_reader_token);
  if (T34 != YPfalse) {
    T33 = CHKREF(YreadYmake_reader_token);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_7;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  YreadYmake_reader_token = T31;
  regsym(&YreadYmake_reader_token,"read","make-reader-token");
  lit_14 = YPPsym((P)"reader-token?");
  lit_15 = YPPsym((P)"form");
  T35 = YPsig(YPPlist(1,CHKREF(lit_15)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_8 = YPmet(FUNCODEREF(fun_8),CHKREF(lit_14),T35,ENVNUL);
  T39 = BOUNDP(YreadYreader_tokenQ);
  if (T39 != YPfalse) {
    T38 = CHKREF(YreadYreader_tokenQ);
  } else {
    T38 = YPfalse;
  }
  T37 = fun_8;
  T36 = CALL2(CHKREF(YPdefine_method),T38,T37);
  YreadYreader_tokenQ = T36;
  regsym(&YreadYreader_tokenQ,"read","reader-token?");
  lit_16 = YPsb((P)"unexpected right parenthesis");
  T40 = CALL1(CHKREF(YreadYmake_reader_token),CHKREF(lit_16));
  YreadYDclose_paren = T40;
  regsym(&YreadYDclose_paren,"read","$close-paren");
  lit_17 = YPsb((P)"unexpected \" . \"");
  T41 = CALL1(CHKREF(YreadYmake_reader_token),CHKREF(lit_17));
  YreadYDdot = T41;
  regsym(&YreadYDdot,"read","$dot");
  lit_18 = YPPsym((P)"sub-read");
  T42 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YruntimeYLportG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_9 = YPmet(FUNCODEREF(fun_9),CHKREF(lit_18),T42,ENVNUL);
  T46 = BOUNDP(YreadYsub_read);
  if (T46 != YPfalse) {
    T45 = CHKREF(YreadYsub_read);
  } else {
    T45 = YPfalse;
  }
  T44 = fun_9;
  T43 = CALL2(CHKREF(YPdefine_method),T45,T44);
  YreadYsub_read = T43;
  regsym(&YreadYsub_read,"read","sub-read");
  lit_19 = YPPsym((P)"c");
  lit_20 = YPsb((P)"illegal character read");
  T47 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T47,ENVNUL);
  T50 = CALL2(CHKREF(YruntimeYfab),CHKREF(YLvecG),CHKREF(YruntimeYascii_limit));
  T49 = fun_10;
  T48 = CALL2(CHKREF(YruntimeYfill),T50,T49);
  YreadYTread_dispatch_vectorT = T48;
  regsym(&YreadYTread_dispatch_vectorT,"read","*read-dispatch-vector*");
  T52 = CALL2(CHKREF(YruntimeYfab),CHKREF(YLvecG),CHKREF(YruntimeYascii_limit));
  T51 = CALL2(CHKREF(YruntimeYfill),T52,YPtrue);
  YreadYTread_terminatingQ_vectorT = T51;
  regsym(&YreadYTread_terminatingQ_vectorT,"read","*read-terminating?-vector*");
  lit_21 = YPPsym((P)"set-standard-syntax!");
  lit_22 = YPPsym((P)"reader");
  lit_23 = YPPsym((P)"terminating?");
  lit_24 = YPPsym((P)"char");
  T53 = YPsig(YPPlist(3,CHKREF(lit_24),CHKREF(lit_23),CHKREF(lit_22)),YPPlist(3,CHKREF(YLchrG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_11 = YPmet(FUNCODEREF(fun_11),CHKREF(lit_21),T53,ENVNUL);
  T57 = BOUNDP(YreadYset_standard_syntaxX);
  if (T57 != YPfalse) {
    T56 = CHKREF(YreadYset_standard_syntaxX);
  } else {
    T56 = YPfalse;
  }
  T55 = fun_11;
  T54 = CALL2(CHKREF(YPdefine_method),T56,T55);
  YreadYset_standard_syntaxX = T54;
  regsym(&YreadYset_standard_syntaxX,"read","set-standard-syntax!");
  T59 = YPsig(YPPlist(1,CHKREF(lit_19)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T59,ENVNUL);
  T58 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T58,ENVNUL);
  T62 = fun_13;
  sub_read_whitespaceF1050 = T62;
  T61 = FUNFAB(fun_12,1,sub_read_whitespaceF1050);
  T60 = CALL2(CHKREF(YruntimeYdo),T61,CHKREF(YruntimeYascii_whitespaces));
  lit_25 = YPPsym((P)"sub-read-constituent");
  T63 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YreadYsub_read_constituent = YPmet(FUNCODEREF(YreadYsub_read_constituent),CHKREF(lit_25),T63,ENVNUL);
  T64 = YreadYsub_read_constituent;
  YreadYsub_read_constituent = T64;
  regsym(&YreadYsub_read_constituent,"read","sub-read-constituent");
  lit_26 = YPsb((P)"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  lit_27 = YPsb((P)"!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM");
  T65 = YPsig(YPPlist(1,CHKREF(lit_19)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T65,ENVNUL);
  T68 = CALL2(CHKREF(YmacrosYcat),CHKREF(lit_27),CHKREF(lit_26));
  str10496F1049 = T68;
  T67 = fun_15;
  T66 = CALL2(CHKREF(YruntimeYdo),T67,str10496F1049);
  lit_28 = YPPsym((P)"set-standard-read-macro!");
  lit_29 = YPPsym((P)"proc");
  T69 = YPsig(YPPlist(3,CHKREF(lit_24),CHKREF(lit_23),CHKREF(lit_29)),YPPlist(3,CHKREF(YLchrG),CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_16 = YPmet(FUNCODEREF(fun_16),CHKREF(lit_28),T69,ENVNUL);
  T73 = BOUNDP(YreadYset_standard_read_macroX);
  if (T73 != YPfalse) {
    T72 = CHKREF(YreadYset_standard_read_macroX);
  } else {
    T72 = YPfalse;
  }
  T71 = fun_16;
  T70 = CALL2(CHKREF(YPdefine_method),T72,T71);
  YreadYset_standard_read_macroX = T70;
  regsym(&YreadYset_standard_read_macroX,"read","set-standard-read-macro!");
  lit_30 = YPPsym((P)"sub-read-list");
  lit_31 = YPsb((P)"randomness after form after dot");
  lit_32 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T74 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLchrG),CHKREF(YruntimeYLportG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_17 = YPmet(FUNCODEREF(fun_17),CHKREF(lit_30),T74,ENVNUL);
  T78 = BOUNDP(YreadYsub_read_list);
  if (T78 != YPfalse) {
    T77 = CHKREF(YreadYsub_read_list);
  } else {
    T77 = YPfalse;
  }
  T76 = fun_17;
  T75 = CALL2(CHKREF(YPdefine_method),T77,T76);
  YreadYsub_read_list = T75;
  regsym(&YreadYsub_read_list,"read","sub-read-list");
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)40),YPtrue,CHKREF(YreadYsub_read_list));
  T79 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T79,ENVNUL);
  T80 = fun_18;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)41),YPtrue,T80);
  lit_33 = YPPsym((P)"quote");
  T81 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T81,ENVNUL);
  T82 = fun_19;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)39),YPtrue,T82);
  lit_34 = YPPsym((P)"quasiquote");
  T83 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T83,ENVNUL);
  T84 = fun_20;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)96),YPtrue,T84);
  lit_35 = YPPsym((P)"unquote");
  lit_36 = YPPsym((P)"unquote-splicing");
  lit_37 = YPsb((P)"end of file after ,");
  T85 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T85,ENVNUL);
  T86 = fun_21;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)44),YPtrue,T86);
  T93 = CALL2(CHKREF(YruntimeYfab),CHKREF(YLvecG),CHKREF(YruntimeYascii_limit));
  T92 = CALL2(CHKREF(YruntimeYfill),T93,YPfalse);
  vecF1048 = T92;
  T88 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)116));
  CALL3(CHKREF(YruntimeYelt_setter),YPchr((P)9),vecF1048,T88);
  T89 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)102));
  CALL3(CHKREF(YruntimeYelt_setter),YPchr((P)12),vecF1048,T89);
  T90 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)114));
  CALL3(CHKREF(YruntimeYelt_setter),YPchr((P)13),vecF1048,T90);
  T91 = CALL2(CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)110));
  CALL3(CHKREF(YruntimeYelt_setter),YPchr((P)10),vecF1048,T91);
  T87 = vecF1048;
  YreadYDstring_escape_chars = T87;
  regsym(&YreadYDstring_escape_chars,"read","$string-escape-chars");
  lit_38 = YPPsym((P)"read-string-literal");
  lit_39 = YPPsym((P)"i");
  lit_40 = YPPsym((P)"l");
  lit_41 = YPsb((P)"invalid escaped character in string");
  lit_42 = YPsb((P)"end of file within a string");
  lit_43 = YPsb((P)"end of file within a string");
  T95 = YPsig(YPPlist(2,CHKREF(lit_40),CHKREF(lit_39)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_22 = YPmet(FUNCODEREF(fun_loop_22),CHKREF(lit_2),T95,ENVNUL);
  T94 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YreadYread_string_literal = YPmet(FUNCODEREF(YreadYread_string_literal),CHKREF(lit_38),T94,ENVNUL);
  T96 = YreadYread_string_literal;
  YreadYread_string_literal = T96;
  regsym(&YreadYread_string_literal,"read","read-string-literal");
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)34),YPtrue,CHKREF(YreadYread_string_literal));
  T97 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T97,ENVNUL);
  T98 = fun_24;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)59),YPtrue,T98);
  lit_44 = YPPsym((P)"gobble-line");
  T100 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_loop_25 = YPmet(FUNCODEREF(fun_loop_25),CHKREF(lit_2),T100,ENVNUL);
  T99 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YruntimeYLportG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_26 = YPmet(FUNCODEREF(fun_26),CHKREF(lit_44),T99,ENVNUL);
  T104 = BOUNDP(YreadYgobble_line);
  if (T104 != YPfalse) {
    T103 = CHKREF(YreadYgobble_line);
  } else {
    T103 = YPfalse;
  }
  T102 = fun_26;
  T101 = CALL2(CHKREF(YPdefine_method),T103,T102);
  YreadYgobble_line = T101;
  regsym(&YreadYgobble_line,"read","gobble-line");
  YreadYTsharp_macrosT = Ynil;
  regsym(&YreadYTsharp_macrosT,"read","*sharp-macros*");
  lit_45 = YPPsym((P)"define-sharp-macro");
  T105 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_29)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_27 = YPmet(FUNCODEREF(fun_27),CHKREF(lit_45),T105,ENVNUL);
  T109 = BOUNDP(YreadYdefine_sharp_macro);
  if (T109 != YPfalse) {
    T108 = CHKREF(YreadYdefine_sharp_macro);
  } else {
    T108 = YPfalse;
  }
  T107 = fun_27;
  T106 = CALL2(CHKREF(YPdefine_method),T108,T107);
  YreadYdefine_sharp_macro = T106;
  regsym(&YreadYdefine_sharp_macro,"read","define-sharp-macro");
  lit_46 = YPsb((P)"unknown # syntax");
  lit_47 = YPsb((P)"end of file after #");
  T110 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T110,ENVNUL);
  T111 = fun_28;
  CALL3(CHKREF(YreadYset_standard_read_macroX),YPchr((P)35),YPfalse,T111);
  T112 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T112,ENVNUL);
  T113 = fun_29;
  CALL2(CHKREF(YreadYdefine_sharp_macro),YPchr((P)102),T113);
  T114 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T114,ENVNUL);
  T115 = fun_30;
  CALL2(CHKREF(YreadYdefine_sharp_macro),YPchr((P)116),T115);
  lit_48 = YPPlist(5,YPPlist(2,YPPsym((P)"tab"),YPchr((P)9)),YPPlist(2,YPPsym((P)"page"),YPchr((P)12)),YPPlist(2,YPPsym((P)"return"),YPchr((P)13)),YPPlist(2,YPPsym((P)"newline"),YPchr((P)10)),YPPlist(2,YPPsym((P)"space"),YPchr((P)32)));
  YreadYDchar_long_names = CHKREF(lit_48);
  regsym(&YreadYDchar_long_names,"read","$char-long-names");
  lit_49 = YPsb((P)"unknown #\\ name");
  lit_50 = YPsb((P)"end of file after #\\");
  T116 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T116,ENVNUL);
  T117 = fun_31;
  CALL2(CHKREF(YreadYdefine_sharp_macro),YPchr((P)92),T117);
  T118 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T118,ENVNUL);
  T119 = fun_32;
  CALL2(CHKREF(YreadYdefine_sharp_macro),YPchr((P)40),T119);
  lit_51 = YPPlist(6,YPchr((P)98),YPchr((P)111),YPchr((P)100),YPchr((P)120),YPchr((P)105),YPchr((P)101));
  lit_52 = YPsb((P)"unsupported number syntax");
  T121 = YPsig(YPPlist(1,CHKREF(lit_19)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T121,ENVNUL);
  T120 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T120,ENVNUL);
  T124 = fun_34;
  number_sharp_macroF1047 = T124;
  T123 = FUNFAB(fun_33,1,number_sharp_macroF1047);
  T122 = CALL2(CHKREF(YruntimeYdo),T123,CHKREF(lit_51));
  lit_53 = YPPsym((P)"sub-read-token");
  lit_54 = YPPsym((P)"n");
  T126 = YPsig(YPPlist(2,CHKREF(lit_40),CHKREF(lit_54)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_35 = YPmet(FUNCODEREF(fun_loop_35),CHKREF(lit_2),T126,ENVNUL);
  T125 = YPsig(YPPlist(2,CHKREF(lit_19),CHKREF(lit_1)),YPPlist(2,CHKREF(YLchrG),CHKREF(YruntimeYLportG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_36 = YPmet(FUNCODEREF(fun_36),CHKREF(lit_53),T125,ENVNUL);
  T130 = BOUNDP(YreadYsub_read_token);
  if (T130 != YPfalse) {
    T129 = CHKREF(YreadYsub_read_token);
  } else {
    T129 = YPfalse;
  }
  T128 = fun_36;
  T127 = CALL2(CHKREF(YPdefine_method),T129,T128);
  YreadYsub_read_token = T127;
  regsym(&YreadYsub_read_token,"read","sub-read-token");
  lit_55 = YPPsym((P)"parse-token");
  lit_56 = YPPsym((P)"string");
  lit_57 = YPsb((P)"unsupported number syntax");
  lit_58 = YPsb((P)".");
  T132 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T132,ENVNUL);
  T131 = YPsig(YPPlist(2,CHKREF(lit_56),CHKREF(lit_1)),YPPlist(2,CHKREF(YLstrG),CHKREF(YruntimeYLportG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_38 = YPmet(FUNCODEREF(fun_38),CHKREF(lit_55),T131,ENVNUL);
  T136 = BOUNDP(YreadYparse_token);
  if (T136 != YPfalse) {
    T135 = CHKREF(YreadYparse_token);
  } else {
    T135 = YPfalse;
  }
  T134 = fun_38;
  T133 = CALL2(CHKREF(YPdefine_method),T135,T134);
  YreadYparse_token = T133;
  regsym(&YreadYparse_token,"read","parse-token");
  lit_59 = YPPlist(9,YPsb((P)"+"),YPsb((P)"-"),YPsb((P)"..."),YPsb((P)"1st"),YPsb((P)"2nd"),YPsb((P)"3rd"),YPsb((P)"1+"),YPsb((P)"1-"),YPsb((P)"->"));
  YreadYDstrange_symbol_names = CHKREF(lit_59);
  regsym(&YreadYDstrange_symbol_names,"read","$strange-symbol-names");
  lit_60 = YPPsym((P)"t");
  T140 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),CHKREF(lit_60));
  T139 = CALL2(CHKREF(YruntimeYelt),T140,YPint((P)0));
  T138 = CALL2(CHKREF(YruntimeYE),T139,YPchr((P)84));
  if (T138 != YPfalse) {
    T137 = CHKREF(YruntimeYas_uppercase);
  } else {
    T137 = CHKREF(YruntimeYas_lowercase);
  }
  YreadYpreferred_case = T137;
  regsym(&YreadYpreferred_case,"read","preferred-case");
  lit_61 = YPPsym((P)"reading-error");
  lit_62 = YPPsym((P)"irritants");
  lit_63 = YPsb((P)": %=");
  T141 = YPsig(YPPlist(3,CHKREF(lit_1),CHKREF(lit_13),CHKREF(lit_62)),YPPlist(2,CHKREF(YruntimeYLportG),CHKREF(YLstrG)),YPtrue,YPint((P)2),CHKREF(YLanyG));
  fun_39 = YPmet(FUNCODEREF(fun_39),CHKREF(lit_61),T141,ENVNUL);
  T145 = BOUNDP(YreadYreading_error);
  if (T145 != YPfalse) {
    T144 = CHKREF(YreadYreading_error);
  } else {
    T144 = YPfalse;
  }
  T143 = fun_39;
  T142 = CALL2(CHKREF(YPdefine_method),T144,T143);
  YreadYreading_error = T142;
  regsym(&YreadYreading_error,"read","reading-error");
  lit_64 = YPPsym((P)"warn");
  lit_65 = YPPsym((P)"irritants-and-port");
  T146 = YPsig(YPPlist(2,CHKREF(lit_56),CHKREF(lit_65)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_40 = YPmet(FUNCODEREF(fun_40),CHKREF(lit_64),T146,ENVNUL);
  T150 = BOUNDP(YreadYwarn);
  if (T150 != YPfalse) {
    T149 = CHKREF(YreadYwarn);
  } else {
    T149 = YPfalse;
  }
  T148 = fun_40;
  T147 = CALL2(CHKREF(YPdefine_method),T149,T148);
  YreadYwarn = T147;
  regsym(&YreadYwarn,"read","warn");
  lit_66 = YPPsym((P)"reverse-list->string");
  T151 = YPsig(YPPlist(2,CHKREF(lit_40),CHKREF(lit_54)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLstrG));
  fun_41 = YPmet(FUNCODEREF(fun_41),CHKREF(lit_66),T151,ENVNUL);
  T155 = BOUNDP(YreadYreverse_list_Gstring);
  if (T155 != YPfalse) {
    T154 = CHKREF(YreadYreverse_list_Gstring);
  } else {
    T154 = YPfalse;
  }
  T153 = fun_41;
  T152 = CALL2(CHKREF(YPdefine_method),T154,T153);
  YreadYreverse_list_Gstring = T152;
  regsym(&YreadYreverse_list_Gstring,"read","reverse-list->string");
  lit_67 = YPPsym((P)"make-immutable!");
  T156 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_42 = YPmet(FUNCODEREF(fun_42),CHKREF(lit_67),T156,ENVNUL);
  T160 = BOUNDP(YreadYmake_immutableX);
  if (T160 != YPfalse) {
    T159 = CHKREF(YreadYmake_immutableX);
  } else {
    T159 = YPfalse;
  }
  T158 = fun_42;
  T157 = CALL2(CHKREF(YPdefine_method),T159,T158);
  YreadYmake_immutableX = T157;
  regsym(&YreadYmake_immutableX,"read","make-immutable!");
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
  {"%fb", &module_info_boot, "%fb"},
  {"dss", &module_info_boot, "dss"},
  {"logxor", &module_info_runtime, "logxor"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"unless", &module_info_macros, "unless"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"/", &module_info_runtime, "/"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"from-below", &module_info_runtime, "from-below"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"fabs", &module_info_runtime, "fabs"},
  {"%ft", &module_info_boot, "%ft"},
  {"round/", &module_info_runtime, "round/"},
  {"%im", &module_info_boot, "%im"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"=", &module_info_runtime, "="},
  {"slot-init", &module_info_boot, "slot-init"},
  {"rev", &module_info_runtime, "rev"},
  {"export", &module_info_boot, "export"},
  {"pair", &module_info_macros, "pair"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"%f/", &module_info_boot, "%f/"},
  {"zero?", &module_info_runtime, "zero?"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"<traits>", &module_info_boot, "<traits>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"fapply", &module_info_boot, "fapply"},
  {"var-name", &module_info_macros, "var-name"},
  {"map2", &module_info_runtime, "map2"},
  {"do3", &module_info_runtime, "do3"},
  {"if", &module_info_boot, "if"},
  {"reduce", &module_info_runtime, "reduce"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"%i^", &module_info_boot, "%i^"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"assert", &module_info_macros, "assert"},
  {"port-index", &module_info_runtime, "port-index"},
  {"when", &module_info_macros, "when"},
  {"object<", &module_info_boot, "object<"},
  {"%i!", &module_info_boot, "%i!"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"t+", &module_info_runtime, "t+"},
  {"from", &module_info_runtime, "from"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"popf", &module_info_macros, "popf"},
  {"compose", &module_info_runtime, "compose"},
  {"let", &module_info_boot, "let"},
  {"%f=", &module_info_boot, "%f="},
  {"%cb", &module_info_boot, "%cb"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"1st", &module_info_runtime, "1st"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"<", &module_info_runtime, "<"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"%i*", &module_info_boot, "%i*"},
  {"as", &module_info_runtime, "as"},
  {"%snul", &module_info_boot, "%snul"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"assqn", &module_info_runtime, "assqn"},
  {"%slen", &module_info_boot, "%slen"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"logand", &module_info_runtime, "logand"},
  {"~=", &module_info_runtime, "~="},
  {"df", &module_info_boot, "df"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"str", &module_info_runtime, "str"},
  {"or", &module_info_macros, "or"},
  {"push", &module_info_runtime, "push"},
  {"sig", &module_info_runtime, "sig"},
  {"dv", &module_info_boot, "dv"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"<col>", &module_info_boot, "<col>"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"%lu", &module_info_boot, "%lu"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"max", &module_info_runtime, "max"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"cat", &module_info_macros, "cat"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"error", &module_info_boot, "error"},
  {"%do-runtime-bindings", &module_info_boot, "%do-runtime-bindings"},
  {"%cu", &module_info_boot, "%cu"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"<=", &module_info_runtime, "<="},
  {"%pair", &module_info_boot, "%pair"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"seq", &module_info_boot, "seq"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"tup", &module_info_macros, "tup"},
  {"from-above", &module_info_runtime, "from-above"},
  {"%sb", &module_info_boot, "%sb"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"pushf", &module_info_macros, "pushf"},
  {"quote", &module_info_boot, "quote"},
  {"format", &module_info_runtime, "format"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"pick", &module_info_runtime, "pick"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"%it/", &module_info_boot, "%it/"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {">", &module_info_runtime, ">"},
  {"loc", &module_info_boot, "loc"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"%i=", &module_info_boot, "%i="},
  {"floor", &module_info_runtime, "floor"},
  {"identity", &module_info_runtime, "identity"},
  {"dec", &module_info_macros, "dec"},
  {"%ib", &module_info_boot, "%ib"},
  {"nil", &module_info_boot, "nil"},
  {"%c<", &module_info_boot, "%c<"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"newline", &module_info_runtime, "newline"},
  {"address-of", &module_info_runtime, "address-of"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"type-error", &module_info_boot, "type-error"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"odd?", &module_info_runtime, "odd?"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"from-by", &module_info_runtime, "from-by"},
  {"cat2", &module_info_runtime, "cat2"},
  {"abs", &module_info_runtime, "abs"},
  {"assocq", &module_info_runtime, "assocq"},
  {"tail", &module_info_boot, "tail"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"%fu", &module_info_boot, "%fu"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"pop", &module_info_runtime, "pop"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"collected", &module_info_macros, "collected"},
  {"lognot", &module_info_runtime, "lognot"},
  {"%f<", &module_info_boot, "%f<"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"list", &module_info_runtime, "list"},
  {"round", &module_info_runtime, "round"},
  {"*", &module_info_runtime, "*"},
  {"fab", &module_info_runtime, "fab"},
  {"elt", &module_info_runtime, "elt"},
  {"modulo", &module_info_runtime, "modulo"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"now-key", &module_info_runtime, "now-key"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"next-method", &module_info_macros, "next-method"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"curry", &module_info_runtime, "curry"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"%f*", &module_info_boot, "%f*"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"dp", &module_info_boot, "dp"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"del", &module_info_runtime, "del"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"dm", &module_info_boot, "dm"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"%iu", &module_info_boot, "%iu"},
  {"last", &module_info_runtime, "last"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"nul", &module_info_boot, "nul"},
  {"<step>", &module_info_runtime, "<step>"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"write-string", &module_info_runtime, "write-string"},
  {"<port>", &module_info_runtime, "<port>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"<log>", &module_info_boot, "<log>"},
  {"mif", &module_info_boot, "mif"},
  {"%isa", &module_info_boot, "%isa"},
  {"dc", &module_info_boot, "dc"},
  {"dg", &module_info_boot, "dg"},
  {"<range>", &module_info_runtime, "<range>"},
  {"len", &module_info_runtime, "len"},
  {"read-char", &module_info_runtime, "read-char"},
  {"do", &module_info_runtime, "do"},
  {"empty?", &module_info_macros, "empty?"},
  {"buf", &module_info_runtime, "buf"},
  {"inc", &module_info_macros, "inc"},
  {"isa?", &module_info_boot, "isa?"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"apply", &module_info_boot, "apply"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"<list>", &module_info_runtime, "<list>"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"assoc", &module_info_runtime, "assoc"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"-", &module_info_runtime, "-"},
  {"del-key", &module_info_runtime, "del-key"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"isa", &module_info_boot, "isa"},
  {"neg?", &module_info_runtime, "neg?"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"fun", &module_info_boot, "fun"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"read", &module_info_runtime, "read"},
  {"remainder", &module_info_runtime, "remainder"},
  {"==", &module_info_macros, "=="},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"to-str", &module_info_runtime, "to-str"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"write-char", &module_info_runtime, "write-char"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"assq", &module_info_runtime, "assq"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"%i<", &module_info_boot, "%i<"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"not", &module_info_boot, "not"},
  {"%i+", &module_info_boot, "%i+"},
  {"try", &module_info_boot, "try"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"map", &module_info_macros, "map"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"2nd", &module_info_runtime, "2nd"},
  {"min", &module_info_runtime, "min"},
  {"<any>", &module_info_boot, "<any>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"fin", &module_info_boot, "fin"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"truncate", &module_info_runtime, "truncate"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"ds", &module_info_boot, "ds"},
  {"nul?", &module_info_runtime, "nul?"},
  {"floor/", &module_info_runtime, "floor/"},
  {"<error>", &module_info_runtime, "<error>"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"do2", &module_info_runtime, "do2"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"+", &module_info_runtime, "+"},
  {"select", &module_info_macros, "select"},
  {"<int>", &module_info_boot, "<int>"},
  {"%vec", &module_info_boot, "%vec"},
  {"pos", &module_info_runtime, "pos"},
  {"cat!", &module_info_runtime, "cat!"},
  {"keys", &module_info_runtime, "keys"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"var-type", &module_info_macros, "var-type"},
  {"pos?", &module_info_runtime, "pos?"},
  {"<num>", &module_info_boot, "<num>"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%su", &module_info_boot, "%su"},
  {"dlet", &module_info_macros, "dlet"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"<str>", &module_info_boot, "<str>"},
  {"case", &module_info_macros, "case"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"%bb", &module_info_boot, "%bb"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"gensym", &module_info_macros, "gensym"},
  {"ash", &module_info_runtime, "ash"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"object-direct-parents", &module_info_boot, "object-direct-parents"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"vec", &module_info_runtime, "vec"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"false-or", &module_info_runtime, "false-or"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"always", &module_info_runtime, "always"},
  {"%raw", &module_info_boot, "%raw"},
  {"sub", &module_info_runtime, "sub"},
  {"%f-", &module_info_boot, "%f-"},
  {"%f+", &module_info_boot, "%f+"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"lsh", &module_info_runtime, "lsh"},
  {"use", &module_info_boot, "use"},
  {"%i&", &module_info_boot, "%i&"},
  {"mem?", &module_info_runtime, "mem?"},
  {"find-key", &module_info_runtime, "find-key"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"in", &module_info_runtime, "in"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"fill", &module_info_runtime, "fill"},
  {"ct", &module_info_boot, "ct"},
  {"alter", &module_info_runtime, "alter"},
  {"out", &module_info_runtime, "out"},
  {"%iv", &module_info_boot, "%iv"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"and", &module_info_macros, "and"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"add", &module_info_runtime, "add"},
  {"%selt", &module_info_boot, "%selt"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"for", &module_info_macros, "for"},
  {"lst", &module_info_boot, "lst"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"object-direct-slots", &module_info_boot, "object-direct-slots"},
  {"~==", &module_info_runtime, "~=="},
  {"empty", &module_info_runtime, "empty"},
  {"lab", &module_info_boot, "lab"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"<met>", &module_info_boot, "<met>"},
  {"all?", &module_info_runtime, "all?"},
  {"t<", &module_info_runtime, "t<"},
  {"logior", &module_info_runtime, "logior"},
  {"%slot", &module_info_boot, "%slot"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"%i?", &module_info_boot, "%i?"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"head", &module_info_boot, "head"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"default", &module_info_runtime, "default"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"slot", &module_info_boot, "slot"},
  {"any?", &module_info_runtime, "any?"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"even?", &module_info_runtime, "even?"},
  {">=", &module_info_runtime, ">="},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"%velt", &module_info_boot, "%velt"},
  {"<map>", &module_info_runtime, "<map>"},
  {"collect", &module_info_macros, "collect"},
  {"%str", &module_info_boot, "%str"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"add!", &module_info_runtime, "add!"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"first-then", &module_info_runtime, "first-then"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"neg", &module_info_runtime, "neg"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"rep", &module_info_boot, "rep"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"force-output", &module_info_runtime, "force-output"},
  {"app-args", &module_info_runtime, "app-args"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%i-", &module_info_boot, "%i-"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"collecting", &module_info_macros, "collecting"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"bound?", &module_info_boot, "bound?"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"%call-next-method", &module_info_boot, "%call-next-method"},
  {"rev!", &module_info_runtime, "rev!"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"set", &module_info_boot, "set"},
  {"t=", &module_info_runtime, "t="},
  {"%c=", &module_info_boot, "%c="},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"from-to", &module_info_runtime, "from-to"},
  {"3rd", &module_info_runtime, "3rd"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sub-read", &YreadYsub_read},
  {"$string-escape-chars", &YreadYDstring_escape_chars},
  {"token-message-setter", &YreadYtoken_message_setter},
  {"*sharp-macros*", &YreadYTsharp_macrosT},
  {"sub-read-list", &YreadYsub_read_list},
  {"sub-read-token", &YreadYsub_read_token},
  {"reverse-list->string", &YreadYreverse_list_Gstring},
  {"make-reader-token", &YreadYmake_reader_token},
  {"set-standard-syntax!", &YreadYset_standard_syntaxX},
  {"*read-terminating?-vector*", &YreadYTread_terminatingQ_vectorT},
  {"$dot", &YreadYDdot},
  {"parse-token", &YreadYparse_token},
  {"sub-read-carefully", &YreadYsub_read_carefully},
  {"<reader-token>", &YreadYLreader_tokenG},
  {"token-message", &YreadYtoken_message},
  {"*read-dispatch-vector*", &YreadYTread_dispatch_vectorT},
  {"sub-read-constituent", &YreadYsub_read_constituent},
  {"read-string-literal", &YreadYread_string_literal},
  {"preferred-case", &YreadYpreferred_case},
  {"reader-token?", &YreadYreader_tokenQ},
  {"warn", &YreadYwarn},
  {"define-sharp-macro", &YreadYdefine_sharp_macro},
  {"make-immutable!", &YreadYmake_immutableX},
  {"set-standard-read-macro!", &YreadYset_standard_read_macroX},
  {"$close-paren", &YreadYDclose_paren},
  {"read-from-string", &YreadYread_from_string},
  {"---main-0---", NULL},
  {"$strange-symbol-names", &YreadYDstrange_symbol_names},
  {"reading-error", &YreadYreading_error},
  {"$char-long-names", &YreadYDchar_long_names},
  {"gobble-line", &YreadYgobble_line},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"read", "read"},
  {"read-from-string", "read-from-string"},
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
