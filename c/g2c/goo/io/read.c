/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: read */

EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(Yslot_owner,"boot","slot-owner");
DEF(YreadYsub_read_list,"read","sub-read-list");
EXT(YPslot,"boot","%slot");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YLlogG,"boot","<log>");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYneg,"runtime","neg");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(Ynot,"boot","not");
EXT(YruntimeYNE,"runtime","~=");
EXT(Yslot_value,"boot","slot-value");
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
DEF(YreadYsub_read_carefully,"read","sub-read-carefully");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YLunionG,"boot","<union>");
EXT(YruntimeYassq,"runtime","assq");
EXT(YPsnul,"boot","%snul");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYto_digit,"runtime","to-digit");
DEF(YreadYsub_read_constituent,"read","sub-read-constituent");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
DEF(YreadYread_from_string,"read","read-from-string");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YruntimeYbuf,"runtime","buf");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYformat,"runtime","format");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYlast,"runtime","last");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(Ytail,"boot","tail");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
DEF(YreadYtoken_message_setter,"read","token-message-setter");
DEF(YreadYDstrange_symbol_names,"read","$strange-symbol-names");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YruntimeYroundS,"runtime","round/");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYrev,"runtime","rev");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YruntimeYabs,"runtime","abs");
DEF(YreadYDchar_long_names,"read","$char-long-names");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YruntimeYdo2,"runtime","do2");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(Ynil,"boot","nil");
DEF(YreadYtoken_message,"read","token-message");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYT,"runtime","*");
DEF(YreadYmake_reader_token,"read","make-reader-token");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYmax,"runtime","max");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(Ytype_elts,"boot","type-elts");
EXT(YruntimeYcompose,"runtime","compose");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYdefault,"runtime","default");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YPdefine_method,"boot","%define-method");
EXT(YruntimeYfloor,"runtime","floor");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYcat2,"runtime","cat2");
DEF(YreadYDdot,"read","$dot");
DEF(YreadYsub_read_token,"read","sub-read-token");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYcatX,"runtime","cat!");
DEF(YreadYTsharp_macrosT,"read","*sharp-macros*");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
DEF(YreadYDstring_escape_chars,"read","$string-escape-chars");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYempty,"runtime","empty");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYA,"runtime","+");
EXT(YLtypeG,"boot","<type>");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YruntimeYcurry,"runtime","curry");
DEF(YreadYmake_immutableX,"read","make-immutable!");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YruntimeYE,"runtime","=");
DEF(YreadYset_standard_read_macroX,"read","set-standard-read-macro!");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(Ytype_error,"boot","type-error");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(Ysig_names,"boot","sig-names");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYpop,"runtime","pop");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(YLgenG,"boot","<gen>");
EXT(Yobject_slots,"boot","object-slots");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(Yfun_name_setter,"boot","fun-name-setter");
DEF(YreadYparse_token,"read","parse-token");
EXT(YruntimeYfrom,"runtime","from");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
DEF(YreadYreading_error,"read","reading-error");
EXT(YmacrosYEE,"macros","==");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(Yfind_setter,"boot","find-setter");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YruntimeYstr,"runtime","str");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YLvecG,"boot","<vec>");
EXT(Ytype_class,"boot","type-class");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YruntimeYlognot,"runtime","lognot");
DEF(YreadYset_standard_syntaxX,"read","set-standard-syntax!");
EXT(Ylst,"boot","lst");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeY1st,"runtime","1st");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
DEF(YreadYTread_dispatch_vectorT,"read","*read-dispatch-vector*");
EXT(YruntimeYalways,"runtime","always");
EXT(YruntimeYtL,"runtime","t<");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YLflatG,"boot","<flat>");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYout,"runtime","out");
EXT(Yfun_names,"boot","fun-names");
EXT(YruntimeYdo,"runtime","do");
EXT(YruntimeYnewline,"runtime","newline");
DEF(YreadYsub_read,"read","sub-read");
DEF(YreadYread_string_literal,"read","read-string-literal");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YruntimeYforce_output,"runtime","force-output");
DEF(YreadYreverse_list_Gstring,"read","reverse-list->string");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
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
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYnow_key,"runtime","now-key");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
DEF(YreadYreader_tokenQ,"read","reader-token?");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYGE,"runtime",">=");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYtA,"runtime","t+");
EXT(YruntimeYnow_elt,"runtime","now-elt");
DEF(YreadYTread_terminatingQ_vectorT,"read","*read-terminating?-vector*");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
DEF(YreadYpreferred_case,"read","preferred-case");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYG,"runtime",">");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYround,"runtime","round");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(Ynul,"boot","nul");
EXT(YruntimeYL,"runtime","<");
EXT(YLlocG,"boot","<loc>");
EXT(Yfab_class,"boot","fab-class");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YruntimeYdel,"runtime","del");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYlist,"runtime","list");
EXT(Ytype_object,"boot","type-object");
EXT(Yhead_setter,"boot","head-setter");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YLtupG,"boot","<tup>");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(Yhead,"boot","head");
EXT(Yerror,"boot","error");
DEF(YreadYLreader_tokenG,"read","<reader-token>");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYlen,"runtime","len");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YruntimeYsub,"runtime","sub");
EXT(Ysig_naryQ,"boot","sig-nary?");
DEF(YreadYdefine_sharp_macro,"read","define-sharp-macro");
DEF(YreadYDclose_paren,"read","$close-paren");
EXT(Yslot_init,"boot","slot-init");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYsig,"runtime","sig");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYin,"runtime","in");
DEF(YreadYgobble_line,"read","gobble-line");
EXT(YruntimeYkeys,"runtime","keys");
EXT(Ysym_name,"boot","sym-name");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YmacrosYnapply,"macros","napply");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
DEF(YreadYwarn,"read","warn");
EXT(YruntimeYfill,"runtime","fill");
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
EXT(YruntimeYmin,"runtime","min");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYvec,"runtime","vec");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_19);
DEFLIT(lit_30);
DEFLIT(lit_58);
DEFLIT(lit_28);
DEFLIT(lit_22);
DEFLIT(lit_21);
DEFLIT(lit_60);
DEFLIT(lit_59);
DEFLIT(lit_26);
DEFLIT(lit_45);
DEFLIT(lit_7);
DEFLIT(lit_3);
DEFLIT(lit_43);
DEFLIT(lit_8);
DEFLIT(lit_51);
DEFLIT(lit_32);
DEFLIT(lit_2);
DEFLIT(lit_57);
DEFLIT(lit_33);
DEFLIT(lit_38);
DEFLIT(lit_68);
DEFLIT(lit_5);
DEFLIT(lit_47);
DEFLIT(lit_16);
DEFLIT(lit_23);
DEFLIT(lit_48);
DEFLIT(lit_54);
DEFLIT(lit_50);
DEFLIT(lit_65);
DEFLIT(lit_63);
DEFLIT(lit_12);
DEFLIT(lit_56);
DEFLIT(lit_4);
DEFLIT(lit_17);
DEFLIT(lit_49);
DEFLIT(lit_35);
DEFLIT(lit_66);
DEFLIT(lit_42);
DEFLIT(lit_0);
DEFLIT(lit_61);
DEFLIT(lit_62);
DEFLIT(lit_67);
DEFLIT(lit_27);
DEFLIT(lit_34);
DEFLIT(lit_39);
DEFLIT(lit_14);
DEFLIT(lit_10);
DEFLIT(lit_29);
DEFLIT(lit_24);
DEFLIT(lit_40);
DEFLIT(lit_36);
DEFLIT(lit_64);
DEFLIT(lit_11);
DEFLIT(lit_18);
DEFLIT(lit_53);
DEFLIT(lit_20);
DEFLIT(lit_25);
DEFLIT(lit_37);
DEFLIT(lit_13);
DEFLIT(lit_1);
DEFLIT(lit_41);
DEFLIT(lit_9);
DEFLIT(lit_31);
DEFLIT(lit_55);
DEFLIT(lit_15);
DEFLIT(lit_44);
DEFLIT(lit_52);
DEFLIT(lit_6);
DEFLIT(lit_46);

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
  P formF1071;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = CALL1(1,CHKREF(YreadYsub_read),FREEREF(0));
  formF1071 = T1;
  T4 = CALL1(1,CHKREF(YreadYreader_tokenQ),formF1071);
  T3 = CALL1(1,CHKREF(Ynot),T4);
  if (T3 != YPfalse) {
    T2 = formF1071;
  } else {
    T6 = CALL2(1,CHKREF(YmacrosYEE),formF1071,CHKREF(YreadYDclose_paren));
    if (T6 != YPfalse) {
      T7 = CALL1(1,CHKREF(YreadYwarn),CHKREF(lit_3));
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
  P loopF1072;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_0,2);
  loopF1072 = T1;
  FUNINIT(loopF1072, 2,port_,loopF1072);
  T2 = CALL0(0,loopF1072);
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
  T0 = CALL2(1,CHKREF(YruntimeYcall_with_string_input_port),x_,CHKREF(YruntimeYread));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_carefully_3) {
  P port_;
  P formF1073;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,CHKREF(YreadYsub_read),port_);
  formF1073 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYeof_objectQ),formF1073);
  if (T3 != YPfalse) {
    T4 = CALL2(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_7));
    T2 = T4;
  } else {
    T6 = CALL1(1,CHKREF(YreadYreader_tokenQ),formF1073);
    if (T6 != YPfalse) {
      T8 = CALL1(1,CHKREF(Ytail),formF1073);
      T7 = CALL2(1,CHKREF(YreadYreading_error),port_,T8);
      T5 = T7;
    } else {
      T5 = formF1073;
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
  T0 = CALL2(1,CHKREF(Yslot_value),Ux_,CHKREF(YreadYtoken_message));
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
  T0 = CALL3(1,CHKREF(Yslot_value_setter),Uz_,Ux_,CHKREF(YreadYtoken_message));
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
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(fun_make_reader_token_7) {
  P message_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(message_, 0);
loop:
  T1 = (P)YPpair(CHKREF(YreadYLreader_tokenG),Ynil);
  T2 = (P)YPpair(CHKREF(YreadYtoken_message),Ynil);
  T3 = (P)YPpair(message_,Ynil);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T3);
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
  T0 = CALL2(1,CHKREF(YisaQ),form_,CHKREF(YreadYLreader_tokenG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sub_read_9) {
  P port_;
  P cF1074;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYread_char),port_);
  cF1074 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYeof_objectQ),cF1074);
  if (T3 != YPfalse) {
    T2 = cF1074;
  } else {
    T6 = CALL1(1,CHKREF(YruntimeYchar_Gascii),cF1074);
    T5 = CALL2(1,CHKREF(YruntimeYelt),CHKREF(YreadYTread_dispatch_vectorT),T6);
    T4 = CALL2(1,T5,cF1074,port_);
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
  T0 = CALL3(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_21),c_);
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
  T0 = CALL1(1,CHKREF(YruntimeYchar_Gascii),char_);
  CALL3(1,CHKREF(YruntimeYelt_setter),reader_,CHKREF(YreadYTread_dispatch_vectorT),T0);
  T2 = CALL1(1,CHKREF(YruntimeYchar_Gascii),char_);
  T1 = CALL3(1,CHKREF(YruntimeYelt_setter),terminatingQ_,CHKREF(YreadYTread_terminatingQ_vectorT),T2);
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
  T0 = CALL1(1,CHKREF(YreadYsub_read),port_);
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
  T0 = CALL3(1,CHKREF(YruntimeYelt_setter),FREEREF(0),CHKREF(YreadYTread_dispatch_vectorT),c_);
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
  T1 = CALL2(1,CHKREF(YreadYsub_read_token),c_,port_);
  T0 = CALL2(1,CHKREF(YreadYparse_token),T1,port_);
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
  T0 = CALL3(1,CHKREF(YreadYset_standard_syntaxX),c_,YPfalse,CHKREF(YreadYsub_read_constituent));
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
  T0 = CALL3(1,CHKREF(YreadYset_standard_syntaxX),char_,terminatingQ_,proc_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_list_17) {
  P c_,port_;
  P another_formF1077;
  P last_formF1076;
  P formF1075;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,CHKREF(YreadYsub_read),port_);
  formF1075 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYeof_objectQ),formF1075);
  if (T3 != YPfalse) {
    T4 = CALL2(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_32));
    T2 = T4;
  } else {
    T6 = CALL2(1,CHKREF(YmacrosYEE),formF1075,CHKREF(YreadYDclose_paren));
    if (T6 != YPfalse) {
      T5 = Ynil;
    } else {
      T8 = CALL2(1,CHKREF(YmacrosYEE),formF1075,CHKREF(YreadYDdot));
      if (T8 != YPfalse) {
        T10 = CALL1(1,CHKREF(YreadYsub_read_carefully),port_);
        last_formF1076 = T10;
        T12 = CALL1(1,CHKREF(YreadYsub_read),port_);
        another_formF1077 = T12;
        T14 = CALL2(1,CHKREF(YmacrosYEE),another_formF1077,CHKREF(YreadYDclose_paren));
        if (T14 != YPfalse) {
          T13 = last_formF1076;
        } else {
          T15 = CALL3(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_33),another_formF1077);
          T13 = T15;
        }
        T11 = T13;
        T9 = T11;
        T7 = T9;
      } else {
        T17 = CALL2(1,CHKREF(YreadYsub_read_list),c_,port_);
        T16 = CALL2(1,CHKREF(YmacrosYpair),formF1075,T17);
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
  QRET(CHKREF(YreadYDclose_paren));
}

FUNCODEDEF(fun_19) {
  P c_,port_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,CHKREF(YreadYsub_read_carefully),port_);
  T0 = CALL2(1,CHKREF(Ylst),CHKREF(lit_34),T1);
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
  T1 = CALL1(1,CHKREF(YreadYsub_read_carefully),port_);
  T0 = CALL2(1,CHKREF(Ylst),CHKREF(lit_35),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  P c_,port_;
  P keywordF1079;
  P nextF1078;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYpeek_char),port_);
  nextF1078 = T1;
  T4 = CALL1(1,CHKREF(YruntimeYeof_objectQ),nextF1078);
  if (T4 != YPfalse) {
    T5 = CALL2(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_36));
    T3 = T5;
  } else {
    T7 = CALL2(1,CHKREF(YruntimeYE),nextF1078,YPchr((P)64));
    if (T7 != YPfalse) {
      CALL1(1,CHKREF(YruntimeYread_char),port_);
      T6 = CHKREF(lit_37);
    } else {
      T6 = CHKREF(lit_38);
    }
    T3 = T6;
  }
  keywordF1079 = T3;
  T9 = CALL1(1,CHKREF(YreadYsub_read_carefully),port_);
  T8 = CALL2(1,CHKREF(Ylst),keywordF1079,T9);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_22) {
  P l_,i_;
  P ecF1083;
  P tmpF1082;
  P cF1081;
  P cF1080;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYread_char),FREEREF(0));
  cF1080 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYeof_objectQ),cF1080);
  if (T3 != YPfalse) {
    T4 = CALL2(1,CHKREF(YreadYreading_error),FREEREF(0),CHKREF(lit_42));
    T2 = T4;
  } else {
    T6 = CALL2(1,CHKREF(YruntimeYE),cF1080,YPchr((P)92));
    if (T6 != YPfalse) {
      T8 = CALL1(1,CHKREF(YruntimeYread_char),FREEREF(0));
      cF1081 = T8;
      T10 = CALL1(1,CHKREF(YruntimeYeof_objectQ),cF1081);
      if (T10 != YPfalse) {
        T11 = CALL2(1,CHKREF(YreadYreading_error),FREEREF(0),CHKREF(lit_43));
        T9 = T11;
      } else {
        T14 = CALL2(1,CHKREF(YruntimeYE),cF1081,YPchr((P)92));
        tmpF1082 = T14;
        if (tmpF1082 != YPfalse) {
          T15 = tmpF1082;
        } else {
          T16 = CALL2(1,CHKREF(YruntimeYE),cF1081,YPchr((P)34));
          T15 = T16;
        }
        T13 = T15;
        if (T13 != YPfalse) {
          T18 = CALL2(1,CHKREF(YmacrosYpair),cF1081,l_);
          T19 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
          a1 = T18;
          a2 = T19;
          l_ = a1;
          i_ = a2;
          goto loop;
          T12 = T17;
        } else {
          T22 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),cF1081);
          T21 = CALL2(1,CHKREF(YruntimeYelt),CHKREF(YreadYDstring_escape_chars),T22);
          ecF1083 = T21;
          if (ecF1083 != YPfalse) {
            T25 = CALL2(1,CHKREF(YmacrosYpair),ecF1083,l_);
            T26 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
            a1 = T25;
            a2 = T26;
            l_ = a1;
            i_ = a2;
            goto loop;
            T23 = T24;
          } else {
            T27 = CALL3(1,CHKREF(YreadYreading_error),FREEREF(0),CHKREF(lit_44),cF1081);
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
      T29 = CALL2(1,CHKREF(YruntimeYE),cF1080,YPchr((P)34));
      if (T29 != YPfalse) {
        T30 = CALL2(1,CHKREF(YreadYreverse_list_Gstring),l_,i_);
        T28 = T30;
      } else {
        T32 = CALL2(1,CHKREF(YmacrosYpair),cF1080,l_);
        T33 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
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
  P loopF1084;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_22,2);
  loopF1084 = T1;
  FUNINIT(loopF1084, 2,port_,loopF1084);
  T2 = CALL2(0,loopF1084,Ynil,YPint((P)0));
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
  CALL1(1,CHKREF(YreadYgobble_line),port_);
  T0 = CALL1(1,CHKREF(YreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_25) {
  P cF1085;
  P T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = CALL1(1,CHKREF(YruntimeYread_char),FREEREF(0));
  cF1085 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYeof_objectQ),cF1085);
  if (T3 != YPfalse) {
    T2 = cF1085;
  } else {
    T5 = CALL2(1,CHKREF(YruntimeYE),cF1085,YPchr((P)10));
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
  P loopF1086;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_25,2);
  loopF1086 = T1;
  FUNINIT(loopF1086, 2,port_,loopF1086);
  T2 = CALL0(0,loopF1086);
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
  T2 = CALL2(1,CHKREF(Ylst),c_,proc_);
  T1 = CALL2(1,CHKREF(YmacrosYpair),T2,CHKREF(YreadYTsharp_macrosT));
  T0 = YreadYTsharp_macrosT = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P c_,port_;
  P probeF1089;
  P cF1088;
  P cF1087;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYpeek_char),port_);
  cF1087 = T1;
  T4 = CALL1(1,CHKREF(YruntimeYeof_objectQ),cF1087);
  if (T4 != YPfalse) {
    T5 = CALL2(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_47));
    T3 = T5;
  } else {
    T6 = CALL1(1,CHKREF(YruntimeYas_lowercase),cF1087);
    T3 = T6;
  }
  cF1088 = T3;
  T8 = CALL2(1,CHKREF(YruntimeYassq),cF1088,CHKREF(YreadYTsharp_macrosT));
  probeF1089 = T8;
  if (probeF1089 != YPfalse) {
    T12 = CALL1(1,CHKREF(Ytail),probeF1089);
    T11 = CALL1(1,CHKREF(Yhead),T12);
    T10 = CALL2(1,T11,cF1088,port_);
    T9 = T10;
  } else {
    T13 = CALL3(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_48),cF1088);
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
  CALL1(1,CHKREF(YruntimeYread_char),port_);
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
  CALL1(1,CHKREF(YruntimeYread_char),port_);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_31) {
  P c_,port_;
  P tempF1092;
  P nameF1091;
  P cF1090;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,CHKREF(YruntimeYread_char),port_);
  T1 = CALL1(1,CHKREF(YruntimeYpeek_char),port_);
  cF1090 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYeof_objectQ),cF1090);
  if (T3 != YPfalse) {
    T4 = CALL2(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_50));
    T2 = T4;
  } else {
    T6 = CALL1(1,CHKREF(YruntimeYalphabeticQ),cF1090);
    if (T6 != YPfalse) {
      T8 = CALL1(1,CHKREF(YreadYsub_read_carefully),port_);
      nameF1091 = T8;
      T12 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLstrG),nameF1091);
      T11 = CALL1(1,CHKREF(YruntimeYlen),T12);
      T10 = CALL2(1,CHKREF(YruntimeYE),T11,YPint((P)1));
      if (T10 != YPfalse) {
        T9 = cF1090;
      } else {
        T14 = CALL2(1,CHKREF(YruntimeYassq),nameF1091,CHKREF(YreadYDchar_long_names));
        tempF1092 = T14;
        if (tempF1092 != YPfalse) {
          T17 = CALL1(1,CHKREF(Ytail),tempF1092);
          T16 = CALL1(1,CHKREF(Yhead),T17);
          T15 = T16;
        } else {
          T18 = CALL3(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_51),nameF1091);
          T15 = T18;
        }
        T13 = T15;
        T9 = T13;
      }
      T7 = T9;
      T5 = T7;
    } else {
      T19 = CALL1(1,CHKREF(YruntimeYread_char),port_);
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
  CALL1(1,CHKREF(YruntimeYread_char),port_);
  T1 = CALL2(1,CHKREF(YreadYsub_read_list),c_,port_);
  T0 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLvecG),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P c_,port_;
  P tmpF1094;
  P stringF1093;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL2(1,CHKREF(YreadYsub_read_token),YPchr((P)35),port_);
  stringF1093 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYstr_to_num),stringF1093);
  tmpF1094 = T3;
  if (tmpF1094 != YPfalse) {
    T4 = tmpF1094;
  } else {
    T5 = CALL3(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_52),stringF1093);
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
  T0 = CALL2(1,CHKREF(YreadYdefine_sharp_macro),c_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_35) {
  P l_,n_;
  P tmpF1096;
  P cF1095;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYpeek_char),FREEREF(0));
  cF1095 = T1;
  T4 = CALL1(1,CHKREF(YruntimeYeof_objectQ),cF1095);
  tmpF1096 = T4;
  if (tmpF1096 != YPfalse) {
    T5 = tmpF1096;
  } else {
    T7 = CALL1(1,CHKREF(YruntimeYchar_Gascii),cF1095);
    T6 = CALL2(1,CHKREF(YruntimeYelt),CHKREF(YreadYTread_terminatingQ_vectorT),T7);
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T8 = CALL2(1,CHKREF(YreadYreverse_list_Gstring),l_,n_);
    T2 = T8;
  } else {
    T12 = CALL1(1,CHKREF(YruntimeYread_char),FREEREF(0));
    T11 = CALL1(1,CHKREF(YreadYpreferred_case),T12);
    T10 = CALL2(1,CHKREF(YmacrosYpair),T11,l_);
    T13 = CALL2(1,CHKREF(YruntimeYA),n_,YPint((P)1));
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
  P loopF1097;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_35,2);
  loopF1097 = T1;
  FUNINIT(loopF1097, 2,port_,loopF1097);
  T4 = CALL1(1,CHKREF(YreadYpreferred_case),c_);
  T3 = CALL1(1,CHKREF(Ylst),T4);
  T2 = CALL2(0,loopF1097,T3,YPint((P)1));
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
  T0 = CALL2(1,CHKREF(YruntimeYE),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_token_38) {
  P string_,port_;
  P maybe_numberF1102;
  P tmpF1101;
  P tmpF1100;
  P tmpF1099;
  P cF1098;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(string_, 0);
  ARG(port_, 1);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYelt),string_,YPint((P)0));
  cF1098 = T2;
  T4 = CALL1(1,CHKREF(YruntimeYnumericQ),cF1098);
  tmpF1099 = T4;
  if (tmpF1099 != YPfalse) {
    T5 = tmpF1099;
  } else {
    T7 = CALL2(1,CHKREF(YruntimeYE),cF1098,YPchr((P)43));
    tmpF1100 = T7;
    if (tmpF1100 != YPfalse) {
      T8 = tmpF1100;
    } else {
      T10 = CALL2(1,CHKREF(YruntimeYE),cF1098,YPchr((P)45));
      tmpF1101 = T10;
      if (tmpF1101 != YPfalse) {
        T11 = tmpF1101;
      } else {
        T12 = CALL2(1,CHKREF(YruntimeYE),cF1098,YPchr((P)46));
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
    T14 = CALL1(1,CHKREF(YruntimeYstr_to_num),string_);
    maybe_numberF1102 = T14;
    if (maybe_numberF1102 != YPfalse) {
      T15 = maybe_numberF1102;
    } else {
      T18 = FUNFAB(fun_37,1,string_);
      T17 = CALL2(1,CHKREF(YruntimeYanyQ),T18,CHKREF(YreadYDstrange_symbol_names));
      if (T17 != YPfalse) {
        T20 = CALL1(1,CHKREF(YreadYmake_immutableX),string_);
        T19 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLsymG),T20);
        T16 = T19;
      } else {
        T22 = CALL2(1,CHKREF(YruntimeYE),string_,CHKREF(lit_58));
        if (T22 != YPfalse) {
          T21 = CHKREF(YreadYDdot);
        } else {
          T23 = CALL3(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_59),string_);
          T21 = T23;
        }
        T16 = T21;
      }
      T15 = T16;
    }
    T13 = T15;
    T0 = T13;
  } else {
    T25 = CALL1(1,CHKREF(YreadYmake_immutableX),string_);
    T24 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLsymG),T25);
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
  T1 = CALL2(1,CHKREF(YmacrosYcat),message_,CHKREF(lit_64));
  T3 = CALL1(1,CHKREF(Ylst),port_);
  T2 = CALL2(1,CHKREF(YmacrosYcat),irritants_,T3);
  T0 = CALL2(1,CHKREF(Yerror),T1,T2);
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
  T1 = CALL1(1,CHKREF(YruntimeYrevX),l_);
  T0 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLstrG),T1);
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
  P number_sharp_macroF1106;
  P vecF1105;
  P str10496F1104;
  P sub_read_whitespaceF1103;
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
  T1 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_loop_0 = YPmet(FUNCODEREF(fun_loop_0),CHKREF(lit_2),T1,ENVNUL);
  T0 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YruntimeYLinput_portG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_read_1 = YPmet(FUNCODEREF(fun_read_1),CHKREF(lit_0),T0,ENVNUL);
  T4 = BOUNDP(YruntimeYread);
  if (T4 != YPfalse) {
    T3 = CHKREF(YruntimeYread);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_read_1;
  T2 = CALL2(1,CHKREF(YPdefine_method),T3,T5);
  YruntimeYread = T2;
  lit_4 = YPPsym((P)"read-from-string");
  lit_5 = YPPsym((P)"x");
  T6 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_read_from_string_2 = YPmet(FUNCODEREF(fun_read_from_string_2),CHKREF(lit_4),T6,ENVNUL);
  T9 = BOUNDP(YreadYread_from_string);
  if (T9 != YPfalse) {
    T8 = CHKREF(YreadYread_from_string);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_read_from_string_2;
  T7 = CALL2(1,CHKREF(YPdefine_method),T8,T10);
  YreadYread_from_string = T7;
  lit_6 = YPPsym((P)"sub-read-carefully");
  lit_7 = YPsb((P)"unexpected end of file");
  T11 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YruntimeYLportG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sub_read_carefully_3 = YPmet(FUNCODEREF(fun_sub_read_carefully_3),CHKREF(lit_6),T11,ENVNUL);
  T14 = BOUNDP(YreadYsub_read_carefully);
  if (T14 != YPfalse) {
    T13 = CHKREF(YreadYsub_read_carefully);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_sub_read_carefully_3;
  T12 = CALL2(1,CHKREF(YPdefine_method),T13,T15);
  YreadYsub_read_carefully = T12;
  lit_8 = YPPsym((P)"<reader-token>");
  T17 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T16 = CALL2(1,CHKREF(Yfab_class),CHKREF(lit_8),T17);
  YreadYLreader_tokenG = T16;
  lit_9 = YPPsym((P)"token-message");
  lit_10 = YPPsym((P)"_x");
  T18 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YreadYLreader_tokenG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_token_message_4 = YPmet(FUNCODEREF(fun_token_message_4),CHKREF(lit_9),T18,ENVNUL);
  T21 = BOUNDP(YreadYtoken_message);
  if (T21 != YPfalse) {
    T20 = CHKREF(YreadYtoken_message);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_token_message_4;
  T19 = CALL2(1,CHKREF(YPdefine_method),T20,T22);
  YreadYtoken_message = T19;
  lit_11 = YPPsym((P)"token-message-setter");
  lit_12 = YPPsym((P)"_z");
  T23 = YPsig(YPPlist(2,CHKREF(lit_12),CHKREF(lit_10)),YPPlist(2,CHKREF(YLstrG),CHKREF(YreadYLreader_tokenG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_token_message_setter_5 = YPmet(FUNCODEREF(fun_token_message_setter_5),CHKREF(lit_11),T23,ENVNUL);
  T26 = BOUNDP(YreadYtoken_message_setter);
  if (T26 != YPfalse) {
    T25 = CHKREF(YreadYtoken_message_setter);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_token_message_setter_5;
  T24 = CALL2(1,CHKREF(YPdefine_method),T25,T27);
  YreadYtoken_message_setter = T24;
  T28 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T28,ENVNUL);
  T29 = fun_6;
  CALLN(1,CHKREF(YPslot),5,CHKREF(YreadYLreader_tokenG),CHKREF(YreadYtoken_message),CHKREF(YreadYtoken_message_setter),CHKREF(YLstrG),T29);
  lit_13 = YPPsym((P)"make-reader-token");
  lit_14 = YPPsym((P)"message");
  T30 = YPsig(YPPlist(1,CHKREF(lit_14)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_make_reader_token_7 = YPmet(FUNCODEREF(fun_make_reader_token_7),CHKREF(lit_13),T30,ENVNUL);
  T33 = BOUNDP(YreadYmake_reader_token);
  if (T33 != YPfalse) {
    T32 = CHKREF(YreadYmake_reader_token);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_make_reader_token_7;
  T31 = CALL2(1,CHKREF(YPdefine_method),T32,T34);
  YreadYmake_reader_token = T31;
  lit_15 = YPPsym((P)"reader-token?");
  lit_16 = YPPsym((P)"form");
  T35 = YPsig(YPPlist(1,CHKREF(lit_16)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_reader_tokenQ_8 = YPmet(FUNCODEREF(fun_reader_tokenQ_8),CHKREF(lit_15),T35,ENVNUL);
  T38 = BOUNDP(YreadYreader_tokenQ);
  if (T38 != YPfalse) {
    T37 = CHKREF(YreadYreader_tokenQ);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_reader_tokenQ_8;
  T36 = CALL2(1,CHKREF(YPdefine_method),T37,T39);
  YreadYreader_tokenQ = T36;
  lit_17 = YPsb((P)"unexpected right parenthesis");
  T40 = CALL1(1,CHKREF(YreadYmake_reader_token),CHKREF(lit_17));
  YreadYDclose_paren = T40;
  lit_18 = YPsb((P)"unexpected \" . \"");
  T41 = CALL1(1,CHKREF(YreadYmake_reader_token),CHKREF(lit_18));
  YreadYDdot = T41;
  lit_19 = YPPsym((P)"sub-read");
  T42 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YruntimeYLportG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_sub_read_9 = YPmet(FUNCODEREF(fun_sub_read_9),CHKREF(lit_19),T42,ENVNUL);
  T45 = BOUNDP(YreadYsub_read);
  if (T45 != YPfalse) {
    T44 = CHKREF(YreadYsub_read);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_sub_read_9;
  T43 = CALL2(1,CHKREF(YPdefine_method),T44,T46);
  YreadYsub_read = T43;
  lit_20 = YPPsym((P)"c");
  lit_21 = YPsb((P)"illegal character read");
  T47 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T47,ENVNUL);
  T49 = CALL2(1,CHKREF(YruntimeYfab),CHKREF(YLvecG),CHKREF(YruntimeYascii_limit));
  T50 = fun_10;
  T48 = CALL2(1,CHKREF(YruntimeYfill),T49,T50);
  YreadYTread_dispatch_vectorT = T48;
  T52 = CALL2(1,CHKREF(YruntimeYfab),CHKREF(YLvecG),CHKREF(YruntimeYascii_limit));
  T51 = CALL2(1,CHKREF(YruntimeYfill),T52,YPtrue);
  YreadYTread_terminatingQ_vectorT = T51;
  lit_22 = YPPsym((P)"set-standard-syntax!");
  lit_23 = YPPsym((P)"char");
  lit_24 = YPPsym((P)"terminating?");
  lit_25 = YPPsym((P)"reader");
  T53 = YPsig(YPPlist(3,CHKREF(lit_23),CHKREF(lit_24),CHKREF(lit_25)),YPPlist(3,CHKREF(YLchrG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_set_standard_syntaxX_11 = YPmet(FUNCODEREF(fun_set_standard_syntaxX_11),CHKREF(lit_22),T53,ENVNUL);
  T56 = BOUNDP(YreadYset_standard_syntaxX);
  if (T56 != YPfalse) {
    T55 = CHKREF(YreadYset_standard_syntaxX);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_set_standard_syntaxX_11;
  T54 = CALL2(1,CHKREF(YPdefine_method),T55,T57);
  YreadYset_standard_syntaxX = T54;
  T59 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T59,ENVNUL);
  T58 = YPsig(YPPlist(1,CHKREF(lit_20)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T58,ENVNUL);
  T60 = fun_12;
  sub_read_whitespaceF1103 = T60;
  T62 = FUNFAB(fun_13,1,sub_read_whitespaceF1103);
  T61 = CALL2(1,CHKREF(YruntimeYdo),T62,CHKREF(YruntimeYascii_whitespaces));
  lit_26 = YPPsym((P)"sub-read-constituent");
  T63 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YreadYsub_read_constituent = YPmet(FUNCODEREF(YreadYsub_read_constituent),CHKREF(lit_26),T63,ENVNUL);
  T64 = YreadYsub_read_constituent;
  YreadYsub_read_constituent = T64;
  lit_27 = YPsb((P)"!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM");
  lit_28 = YPsb((P)"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  T65 = YPsig(YPPlist(1,CHKREF(lit_20)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T65,ENVNUL);
  T66 = CALL2(1,CHKREF(YmacrosYcat),CHKREF(lit_27),CHKREF(lit_28));
  str10496F1104 = T66;
  T68 = fun_15;
  T67 = CALL2(1,CHKREF(YruntimeYdo),T68,str10496F1104);
  lit_29 = YPPsym((P)"set-standard-read-macro!");
  lit_30 = YPPsym((P)"proc");
  T69 = YPsig(YPPlist(3,CHKREF(lit_23),CHKREF(lit_24),CHKREF(lit_30)),YPPlist(3,CHKREF(YLchrG),CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_set_standard_read_macroX_16 = YPmet(FUNCODEREF(fun_set_standard_read_macroX_16),CHKREF(lit_29),T69,ENVNUL);
  T72 = BOUNDP(YreadYset_standard_read_macroX);
  if (T72 != YPfalse) {
    T71 = CHKREF(YreadYset_standard_read_macroX);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_set_standard_read_macroX_16;
  T70 = CALL2(1,CHKREF(YPdefine_method),T71,T73);
  YreadYset_standard_read_macroX = T70;
  lit_31 = YPPsym((P)"sub-read-list");
  lit_32 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  lit_33 = YPsb((P)"randomness after form after dot");
  T74 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLchrG),CHKREF(YruntimeYLportG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_sub_read_list_17 = YPmet(FUNCODEREF(fun_sub_read_list_17),CHKREF(lit_31),T74,ENVNUL);
  T77 = BOUNDP(YreadYsub_read_list);
  if (T77 != YPfalse) {
    T76 = CHKREF(YreadYsub_read_list);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_sub_read_list_17;
  T75 = CALL2(1,CHKREF(YPdefine_method),T76,T78);
  YreadYsub_read_list = T75;
  CALL3(1,CHKREF(YreadYset_standard_read_macroX),YPchr((P)40),YPtrue,CHKREF(YreadYsub_read_list));
  T79 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T79,ENVNUL);
  T80 = fun_18;
  CALL3(1,CHKREF(YreadYset_standard_read_macroX),YPchr((P)41),YPtrue,T80);
  lit_34 = YPPsym((P)"quote");
  T81 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T81,ENVNUL);
  T82 = fun_19;
  CALL3(1,CHKREF(YreadYset_standard_read_macroX),YPchr((P)39),YPtrue,T82);
  lit_35 = YPPsym((P)"quasiquote");
  T83 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T83,ENVNUL);
  T84 = fun_20;
  CALL3(1,CHKREF(YreadYset_standard_read_macroX),YPchr((P)96),YPtrue,T84);
  lit_36 = YPsb((P)"end of file after ,");
  lit_37 = YPPsym((P)"unquote-splicing");
  lit_38 = YPPsym((P)"unquote");
  T85 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T85,ENVNUL);
  T86 = fun_21;
  CALL3(1,CHKREF(YreadYset_standard_read_macroX),YPchr((P)44),YPtrue,T86);
  T89 = CALL2(1,CHKREF(YruntimeYfab),CHKREF(YLvecG),CHKREF(YruntimeYascii_limit));
  T88 = CALL2(1,CHKREF(YruntimeYfill),T89,YPfalse);
  vecF1105 = T88;
  T90 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)116));
  CALL3(1,CHKREF(YruntimeYelt_setter),YPchr((P)9),vecF1105,T90);
  T91 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)102));
  CALL3(1,CHKREF(YruntimeYelt_setter),YPchr((P)12),vecF1105,T91);
  T92 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)114));
  CALL3(1,CHKREF(YruntimeYelt_setter),YPchr((P)13),vecF1105,T92);
  T93 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)110));
  CALL3(1,CHKREF(YruntimeYelt_setter),YPchr((P)10),vecF1105,T93);
  T87 = vecF1105;
  YreadYDstring_escape_chars = T87;
  lit_39 = YPPsym((P)"read-string-literal");
  lit_40 = YPPsym((P)"l");
  lit_41 = YPPsym((P)"i");
  lit_42 = YPsb((P)"end of file within a string");
  lit_43 = YPsb((P)"end of file within a string");
  lit_44 = YPsb((P)"invalid escaped character in string");
  T95 = YPsig(YPPlist(2,CHKREF(lit_40),CHKREF(lit_41)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_22 = YPmet(FUNCODEREF(fun_loop_22),CHKREF(lit_2),T95,ENVNUL);
  T94 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YreadYread_string_literal = YPmet(FUNCODEREF(YreadYread_string_literal),CHKREF(lit_39),T94,ENVNUL);
  T96 = YreadYread_string_literal;
  YreadYread_string_literal = T96;
  CALL3(1,CHKREF(YreadYset_standard_read_macroX),YPchr((P)34),YPtrue,CHKREF(YreadYread_string_literal));
  T97 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T97,ENVNUL);
  T98 = fun_24;
  CALL3(1,CHKREF(YreadYset_standard_read_macroX),YPchr((P)59),YPtrue,T98);
  lit_45 = YPPsym((P)"gobble-line");
  T100 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_loop_25 = YPmet(FUNCODEREF(fun_loop_25),CHKREF(lit_2),T100,ENVNUL);
  T99 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YruntimeYLportG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_gobble_line_26 = YPmet(FUNCODEREF(fun_gobble_line_26),CHKREF(lit_45),T99,ENVNUL);
  T103 = BOUNDP(YreadYgobble_line);
  if (T103 != YPfalse) {
    T102 = CHKREF(YreadYgobble_line);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_gobble_line_26;
  T101 = CALL2(1,CHKREF(YPdefine_method),T102,T104);
  YreadYgobble_line = T101;
  YreadYTsharp_macrosT = Ynil;
  lit_46 = YPPsym((P)"define-sharp-macro");
  T105 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_30)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_define_sharp_macro_27 = YPmet(FUNCODEREF(fun_define_sharp_macro_27),CHKREF(lit_46),T105,ENVNUL);
  T108 = BOUNDP(YreadYdefine_sharp_macro);
  if (T108 != YPfalse) {
    T107 = CHKREF(YreadYdefine_sharp_macro);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_define_sharp_macro_27;
  T106 = CALL2(1,CHKREF(YPdefine_method),T107,T109);
  YreadYdefine_sharp_macro = T106;
  lit_47 = YPsb((P)"end of file after #");
  lit_48 = YPsb((P)"unknown # syntax");
  T110 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T110,ENVNUL);
  T111 = fun_28;
  CALL3(1,CHKREF(YreadYset_standard_read_macroX),YPchr((P)35),YPfalse,T111);
  T112 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T112,ENVNUL);
  T113 = fun_29;
  CALL2(1,CHKREF(YreadYdefine_sharp_macro),YPchr((P)102),T113);
  T114 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T114,ENVNUL);
  T115 = fun_30;
  CALL2(1,CHKREF(YreadYdefine_sharp_macro),YPchr((P)116),T115);
  lit_49 = YPPlist(5,YPPlist(2,YPPsym((P)"tab"),YPchr((P)9)),YPPlist(2,YPPsym((P)"page"),YPchr((P)12)),YPPlist(2,YPPsym((P)"return"),YPchr((P)13)),YPPlist(2,YPPsym((P)"newline"),YPchr((P)10)),YPPlist(2,YPPsym((P)"space"),YPchr((P)32)));
  YreadYDchar_long_names = CHKREF(lit_49);
  lit_50 = YPsb((P)"end of file after #\\");
  lit_51 = YPsb((P)"unknown #\\ name");
  T116 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T116,ENVNUL);
  T117 = fun_31;
  CALL2(1,CHKREF(YreadYdefine_sharp_macro),YPchr((P)92),T117);
  T118 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T118,ENVNUL);
  T119 = fun_32;
  CALL2(1,CHKREF(YreadYdefine_sharp_macro),YPchr((P)40),T119);
  lit_52 = YPsb((P)"unsupported number syntax");
  lit_53 = YPPlist(6,YPchr((P)98),YPchr((P)111),YPchr((P)100),YPchr((P)120),YPchr((P)105),YPchr((P)101));
  T121 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T121,ENVNUL);
  T120 = YPsig(YPPlist(1,CHKREF(lit_20)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T120,ENVNUL);
  T122 = fun_33;
  number_sharp_macroF1106 = T122;
  T124 = FUNFAB(fun_34,1,number_sharp_macroF1106);
  T123 = CALL2(1,CHKREF(YruntimeYdo),T124,CHKREF(lit_53));
  lit_54 = YPPsym((P)"sub-read-token");
  lit_55 = YPPsym((P)"n");
  T126 = YPsig(YPPlist(2,CHKREF(lit_40),CHKREF(lit_55)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_35 = YPmet(FUNCODEREF(fun_loop_35),CHKREF(lit_2),T126,ENVNUL);
  T125 = YPsig(YPPlist(2,CHKREF(lit_20),CHKREF(lit_1)),YPPlist(2,CHKREF(YLchrG),CHKREF(YruntimeYLportG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_sub_read_token_36 = YPmet(FUNCODEREF(fun_sub_read_token_36),CHKREF(lit_54),T125,ENVNUL);
  T129 = BOUNDP(YreadYsub_read_token);
  if (T129 != YPfalse) {
    T128 = CHKREF(YreadYsub_read_token);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_sub_read_token_36;
  T127 = CALL2(1,CHKREF(YPdefine_method),T128,T130);
  YreadYsub_read_token = T127;
  lit_56 = YPPsym((P)"parse-token");
  lit_57 = YPPsym((P)"string");
  lit_58 = YPsb((P)".");
  lit_59 = YPsb((P)"unsupported number syntax");
  T132 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T132,ENVNUL);
  T131 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_1)),YPPlist(2,CHKREF(YLstrG),CHKREF(YruntimeYLportG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_parse_token_38 = YPmet(FUNCODEREF(fun_parse_token_38),CHKREF(lit_56),T131,ENVNUL);
  T135 = BOUNDP(YreadYparse_token);
  if (T135 != YPfalse) {
    T134 = CHKREF(YreadYparse_token);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_parse_token_38;
  T133 = CALL2(1,CHKREF(YPdefine_method),T134,T136);
  YreadYparse_token = T133;
  lit_60 = YPPlist(9,YPsb((P)"+"),YPsb((P)"-"),YPsb((P)"..."),YPsb((P)"1st"),YPsb((P)"2nd"),YPsb((P)"3rd"),YPsb((P)"1+"),YPsb((P)"1-"),YPsb((P)"->"));
  YreadYDstrange_symbol_names = CHKREF(lit_60);
  lit_61 = YPPsym((P)"t");
  T140 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLstrG),CHKREF(lit_61));
  T139 = CALL2(1,CHKREF(YruntimeYelt),T140,YPint((P)0));
  T138 = CALL2(1,CHKREF(YruntimeYE),T139,YPchr((P)84));
  if (T138 != YPfalse) {
    T137 = CHKREF(YruntimeYas_uppercase);
  } else {
    T137 = CHKREF(YruntimeYas_lowercase);
  }
  YreadYpreferred_case = T137;
  lit_62 = YPPsym((P)"reading-error");
  lit_63 = YPPsym((P)"irritants");
  lit_64 = YPsb((P)": %=");
  T141 = YPsig(YPPlist(3,CHKREF(lit_1),CHKREF(lit_14),CHKREF(lit_63)),YPPlist(2,CHKREF(YruntimeYLportG),CHKREF(YLstrG)),YPtrue,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_reading_error_39 = YPmet(FUNCODEREF(fun_reading_error_39),CHKREF(lit_62),T141,ENVNUL);
  T144 = BOUNDP(YreadYreading_error);
  if (T144 != YPfalse) {
    T143 = CHKREF(YreadYreading_error);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_reading_error_39;
  T142 = CALL2(1,CHKREF(YPdefine_method),T143,T145);
  YreadYreading_error = T142;
  lit_65 = YPPsym((P)"warn");
  lit_66 = YPPsym((P)"irritants-and-port");
  T146 = YPsig(YPPlist(2,CHKREF(lit_57),CHKREF(lit_66)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_warn_40 = YPmet(FUNCODEREF(fun_warn_40),CHKREF(lit_65),T146,ENVNUL);
  T149 = BOUNDP(YreadYwarn);
  if (T149 != YPfalse) {
    T148 = CHKREF(YreadYwarn);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_warn_40;
  T147 = CALL2(1,CHKREF(YPdefine_method),T148,T150);
  YreadYwarn = T147;
  lit_67 = YPPsym((P)"reverse-list->string");
  T151 = YPsig(YPPlist(2,CHKREF(lit_40),CHKREF(lit_55)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLstrG),Ynil);
  fun_reverse_list_Gstring_41 = YPmet(FUNCODEREF(fun_reverse_list_Gstring_41),CHKREF(lit_67),T151,ENVNUL);
  T154 = BOUNDP(YreadYreverse_list_Gstring);
  if (T154 != YPfalse) {
    T153 = CHKREF(YreadYreverse_list_Gstring);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_reverse_list_Gstring_41;
  T152 = CALL2(1,CHKREF(YPdefine_method),T153,T155);
  YreadYreverse_list_Gstring = T152;
  lit_68 = YPPsym((P)"make-immutable!");
  T156 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_make_immutableX_42 = YPmet(FUNCODEREF(fun_make_immutableX_42),CHKREF(lit_68),T156,ENVNUL);
  T159 = BOUNDP(YreadYmake_immutableX);
  if (T159 != YPfalse) {
    T158 = CHKREF(YreadYmake_immutableX);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_make_immutableX_42;
  T157 = CALL2(1,CHKREF(YPdefine_method),T158,T160);
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
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"odd?", &module_info_runtime, "odd?"},
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
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"%iu", &module_info_boot, "%iu"},
  {"fabs", &module_info_runtime, "fabs"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"ct", &module_info_boot, "ct"},
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
  {"%i<", &module_info_boot, "%i<"},
  {"not", &module_info_boot, "not"},
  {"~=", &module_info_runtime, "~="},
  {"slot-value", &module_info_boot, "slot-value"},
  {"<any>", &module_info_boot, "<any>"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
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
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"loc", &module_info_boot, "loc"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"apply", &module_info_macros, "apply"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"cat", &module_info_macros, "cat"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"dg", &module_info_boot, "dg"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"next-method", &module_info_macros, "next-method"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"fun", &module_info_boot, "fun"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"empty?", &module_info_macros, "empty?"},
  {"buf", &module_info_runtime, "buf"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"port-index", &module_info_runtime, "port-index"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"read", &module_info_runtime, "read"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"format", &module_info_runtime, "format"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"%iv", &module_info_boot, "%iv"},
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
  {"bound?", &module_info_boot, "bound?"},
  {"<port>", &module_info_runtime, "<port>"},
  {"%velt", &module_info_boot, "%velt"},
  {"collected", &module_info_macros, "collected"},
  {"for", &module_info_macros, "for"},
  {"do2", &module_info_runtime, "do2"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"nil", &module_info_boot, "nil"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"*", &module_info_runtime, "*"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"case", &module_info_macros, "case"},
  {"<list>", &module_info_runtime, "<list>"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"max", &module_info_runtime, "max"},
  {"<error>", &module_info_runtime, "<error>"},
  {"%i^", &module_info_boot, "%i^"},
  {"%ib", &module_info_boot, "%ib"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"compose", &module_info_runtime, "compose"},
  {"export", &module_info_boot, "export"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"app-args", &module_info_runtime, "app-args"},
  {"write-char", &module_info_runtime, "write-char"},
  {"default", &module_info_runtime, "default"},
  {"address-of", &module_info_runtime, "address-of"},
  {"%f+", &module_info_boot, "%f+"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"floor", &module_info_runtime, "floor"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"cat2", &module_info_runtime, "cat2"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"modulo", &module_info_runtime, "modulo"},
  {"collecting", &module_info_macros, "collecting"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"cat!", &module_info_runtime, "cat!"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"%bb", &module_info_boot, "%bb"},
  {"class-name", &module_info_boot, "class-name"},
  {"when", &module_info_macros, "when"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%vec", &module_info_boot, "%vec"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"isa?", &module_info_boot, "isa?"},
  {"empty", &module_info_runtime, "empty"},
  {"assqn", &module_info_runtime, "assqn"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"add!", &module_info_runtime, "add!"},
  {"+", &module_info_runtime, "+"},
  {"<type>", &module_info_boot, "<type>"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"<class>", &module_info_boot, "<class>"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
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
  {"object-parents", &module_info_boot, "object-parents"},
  {"<=", &module_info_runtime, "<="},
  {"elt-setter", &module_info_runtime, "elt-setter"},
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
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"map", &module_info_macros, "map"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"pop", &module_info_runtime, "pop"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"map2", &module_info_runtime, "map2"},
  {"pos?", &module_info_runtime, "pos?"},
  {"logxor", &module_info_runtime, "logxor"},
  {"%cu", &module_info_boot, "%cu"},
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
  {"==", &module_info_macros, "=="},
  {"dc", &module_info_boot, "dc"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"tup", &module_info_macros, "tup"},
  {"logand", &module_info_runtime, "logand"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"false-or", &module_info_runtime, "false-or"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"reduce", &module_info_runtime, "reduce"},
  {"str", &module_info_runtime, "str"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"type-class", &module_info_boot, "type-class"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"lognot", &module_info_runtime, "lognot"},
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
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"do", &module_info_runtime, "do"},
  {"newline", &module_info_runtime, "newline"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"fab", &module_info_runtime, "fab"},
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
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"isa", &module_info_boot, "isa"},
  {"%read-char", &module_info_boot, "%read-char"},
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
  {"%cb", &module_info_boot, "%cb"},
  {"pair", &module_info_macros, "pair"},
  {"now-key", &module_info_runtime, "now-key"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"fin", &module_info_boot, "fin"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"%f/", &module_info_boot, "%f/"},
  {"<seq>", &module_info_boot, "<seq>"},
  {">=", &module_info_runtime, ">="},
  {"-", &module_info_runtime, "-"},
  {"t+", &module_info_runtime, "t+"},
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
  {"del", &module_info_runtime, "del"},
  {"%it/", &module_info_boot, "%it/"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"list", &module_info_runtime, "list"},
  {"type-object", &module_info_boot, "type-object"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"%fu", &module_info_boot, "%fu"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"%raw", &module_info_boot, "%raw"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"dlet", &module_info_macros, "dlet"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"%i-", &module_info_boot, "%i-"},
  {"%untag", &module_info_boot, "%untag"},
  {"mif", &module_info_boot, "mif"},
  {"or", &module_info_macros, "or"},
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
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"neg?", &module_info_runtime, "neg?"},
  {"len", &module_info_runtime, "len"},
  {"<map>", &module_info_runtime, "<map>"},
  {"ds", &module_info_boot, "ds"},
  {"identity", &module_info_runtime, "identity"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"var-type", &module_info_macros, "var-type"},
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
  {"slot-init", &module_info_boot, "slot-init"},
  {"<int>", &module_info_boot, "<int>"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"%lu", &module_info_boot, "%lu"},
  {"dm", &module_info_boot, "dm"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"rep", &module_info_boot, "rep"},
  {"sig", &module_info_runtime, "sig"},
  {"to-str", &module_info_runtime, "to-str"},
  {"in", &module_info_runtime, "in"},
  {"keys", &module_info_runtime, "keys"},
  {"sym-name", &module_info_boot, "sym-name"},
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
  {"fill", &module_info_runtime, "fill"},
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
  {"min", &module_info_runtime, "min"},
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
  {"sub-read-list", &YreadYsub_read_list},
  {"sub-read-carefully", &YreadYsub_read_carefully},
  {"sub-read-constituent", &YreadYsub_read_constituent},
  {"read-from-string", &YreadYread_from_string},
  {"token-message-setter", &YreadYtoken_message_setter},
  {"$strange-symbol-names", &YreadYDstrange_symbol_names},
  {"$char-long-names", &YreadYDchar_long_names},
  {"token-message", &YreadYtoken_message},
  {"make-reader-token", &YreadYmake_reader_token},
  {"$dot", &YreadYDdot},
  {"sub-read-token", &YreadYsub_read_token},
  {"*sharp-macros*", &YreadYTsharp_macrosT},
  {"$string-escape-chars", &YreadYDstring_escape_chars},
  {"make-immutable!", &YreadYmake_immutableX},
  {"set-standard-read-macro!", &YreadYset_standard_read_macroX},
  {"---main-0---", NULL},
  {"parse-token", &YreadYparse_token},
  {"reading-error", &YreadYreading_error},
  {"set-standard-syntax!", &YreadYset_standard_syntaxX},
  {"*read-dispatch-vector*", &YreadYTread_dispatch_vectorT},
  {"sub-read", &YreadYsub_read},
  {"read-string-literal", &YreadYread_string_literal},
  {"reverse-list->string", &YreadYreverse_list_Gstring},
  {"reader-token?", &YreadYreader_tokenQ},
  {"*read-terminating?-vector*", &YreadYTread_terminatingQ_vectorT},
  {"preferred-case", &YreadYpreferred_case},
  {"<reader-token>", &YreadYLreader_tokenG},
  {"define-sharp-macro", &YreadYdefine_sharp_macro},
  {"$close-paren", &YreadYDclose_paren},
  {"gobble-line", &YreadYgobble_line},
  {"warn", &YreadYwarn},
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
