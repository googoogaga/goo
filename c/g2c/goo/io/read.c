/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: read */

DEF(YreadYgobble_line,"read","gobble-line");
EXT(YruntimeYadd,"runtime","add");
DEF(YreadYpreferred_case,"read","preferred-case");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YruntimeYfab_map,"runtime","fab-map");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYmax,"runtime","max");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYabs,"runtime","abs");
EXT(YLlogG,"boot","<log>");
EXT(YLslotG,"boot","<slot>");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYaddress_of,"runtime","address-of");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
EXT(YruntimeYpos,"runtime","pos");
DEF(YreadYwarn,"read","warn");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YruntimeYassoc,"runtime","assoc");
DEF(YreadYmake_reader_token,"read","make-reader-token");
EXT(YruntimeYdefault,"runtime","default");
EXT(YruntimeYfloor,"runtime","floor");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YruntimeYempty,"runtime","empty");
EXT(YDmin_int,"boot","$min-int");
EXT(Ynot,"boot","not");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(Yslot_value,"boot","slot-value");
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YruntimeYfrom,"runtime","from");
EXT(YruntimeYLincongruent_method_errorG,"runtime","<incongruent-method-error>");
EXT(YLunionG,"boot","<union>");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YruntimeYout,"runtime","out");
EXT(Yerror,"boot","error");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYelt_or,"runtime","elt-or");
DEF(YreadYparse_token,"read","parse-token");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYLE,"runtime","<=");
DEF(YreadYDstring_escape_chars,"read","$string-escape-chars");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYlogior,"runtime","logior");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
DEF(YreadYTread_dispatch_vectorT,"read","*read-dispatch-vector*");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYNE,"runtime","~=");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeY1st,"runtime","1st");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(Ytail,"boot","tail");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YLtupG,"boot","<tup>");
EXT(YmacrosYEE,"macros","==");
EXT(YruntimeYreduce,"runtime","reduce");
DEF(YreadYread_from_string,"read","read-from-string");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(Yclass_slots,"boot","class-slots");
EXT(YmacrosYnapply,"macros","napply");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YruntimeYlogand,"runtime","logand");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeYas,"runtime","as");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YruntimeYcurrent_gc_state,"runtime","current-gc-state");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYtL,"runtime","t<");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(Ytype_elts,"boot","type-elts");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
EXT(YruntimeYdel_dups,"runtime","del-dups");
DEF(YreadYset_standard_read_macroX,"read","set-standard-read-macro!");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YPdefine_method,"boot","%define-method");
EXT(Yadd_slot,"boot","add-slot");
DEF(YreadYDchar_long_names,"read","$char-long-names");
DEF(YreadYmake_immutableX,"read","make-immutable!");
DEF(YreadYreading_error,"read","reading-error");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYpush,"runtime","push");
DEF(YreadYTsharp_macrosT,"read","*sharp-macros*");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYtE,"runtime","t=");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YLtypeG,"boot","<type>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
EXT(YLclassG,"boot","<class>");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(Yfab_sym,"boot","fab-sym");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYnow_key,"runtime","now-key");
DEF(YreadYsub_read_constituent,"read","sub-read-constituent");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YruntimeYGE,"runtime",">=");
EXT(YruntimeYE,"runtime","=");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYfrom_below,"runtime","from-below");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYtA,"runtime","t+");
EXT(YLsymG,"boot","<sym>");
EXT(YruntimeYsig,"runtime","sig");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYnow_elt,"runtime","now-elt");
EXT(YruntimeYdel,"runtime","del");
EXT(YruntimeYalphabeticQ,"runtime","alphabetic?");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(YruntimeYallQ,"runtime","all?");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(Ysig_names,"boot","sig-names");
DEF(YreadYTread_terminatingQ_vectorT,"read","*read-terminating?-vector*");
EXT(YPvnul,"boot","%vnul");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YruntimeYvec,"runtime","vec");
DEF(YreadYread_string_literal,"read","read-string-literal");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(Yobject_slots,"boot","object-slots");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYsub,"runtime","sub");
DEF(YreadYDdot,"read","$dot");
EXT(Ylst,"boot","lst");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(Yfind_setter,"boot","find-setter");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YruntimeYround,"runtime","round");
DEF(YreadYLreader_tokenG,"read","<reader-token>");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
DEF(YreadYset_standard_syntaxX,"read","set-standard-syntax!");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YLvecG,"boot","<vec>");
EXT(YPsnul,"boot","%snul");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(Ytype_class,"boot","type-class");
EXT(YruntimeYalways,"runtime","always");
EXT(Ynul,"boot","nul");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeYlen,"runtime","len");
EXT(YruntimeYini_state,"runtime","ini-state");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
DEF(YreadYreader_tokenQ,"read","reader-token?");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YLflatG,"boot","<flat>");
EXT(YLmetG,"boot","<met>");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(Yfun_names,"boot","fun-names");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYdo,"runtime","do");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYfab,"runtime","fab");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYmake_handler,"runtime","make-handler");
DEF(YreadYreverse_list_Gstring,"read","reverse-list->string");
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYanyQ,"runtime","any?");
DEF(YreadYDstrange_symbol_names,"read","$strange-symbol-names");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYfill,"runtime","fill");
EXT(Yobject_class,"boot","object-class");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YruntimeYA,"runtime","+");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYnumericQ,"runtime","numeric?");
DEF(YreadYDclose_paren,"read","$close-paren");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
DEF(YreadYdefine_sharp_macro,"read","define-sharp-macro");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYassq,"runtime","assq");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YruntimeYalter,"runtime","alter");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YDmax_int,"boot","$max-int");
DEF(YreadYtoken_message,"read","token-message");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYmin,"runtime","min");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYpop,"runtime","pop");
EXT(Yslot_getter,"boot","slot-getter");
DEF(YreadYsub_read_list,"read","sub-read-list");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YruntimeYG,"runtime",">");
EXT(YLcolG,"boot","<col>");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YruntimeYLrangeG,"runtime","<range>");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
EXT(YruntimeYread_char,"runtime","read-char");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YmacrosYtup,"macros","tup");
EXT(Ynil,"boot","nil");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YruntimeYfabs,"runtime","fabs");
EXT(YruntimeYlast,"runtime","last");
EXT(YruntimeYlow_elt,"runtime","low-elt");
EXT(YruntimeYL,"runtime","<");
EXT(YLlocG,"boot","<loc>");
EXT(Yfab_class,"boot","fab-class");
EXT(YruntimeYformat,"runtime","format");
DEF(YreadYsub_read_carefully,"read","sub-read-carefully");
EXT(YruntimeYneg,"runtime","neg");
EXT(YruntimeYlist,"runtime","list");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYfrom_to,"runtime","from-to");
EXT(Ytype_object,"boot","type-object");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(Yhead_setter,"boot","head-setter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYcompose,"runtime","compose");
DEF(YreadYsub_read_token,"read","sub-read-token");
EXT(YruntimeYeof_objectQ,"runtime","eof-object?");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(Yhead,"boot","head");
EXT(YruntimeYas_uppercase,"runtime","as-uppercase");
EXT(YruntimeYrev,"runtime","rev");
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YruntimeYkeys,"runtime","keys");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(Yslot_init,"boot","slot-init");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYnow_elt_setter,"runtime","now-elt-setter");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YruntimeYin,"runtime","in");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
EXT(Ysym_name,"boot","sym-name");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YruntimeYcat2,"runtime","cat2");
EXT(YruntimeYfloorS,"runtime","floor/");
DEF(YreadYtoken_message_setter,"read","token-message-setter");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YLnumG,"boot","<num>");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYdo2,"runtime","do2");
EXT(Yfun_value,"boot","fun-value");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YmacrosYpair,"macros","pair");
DEF(YreadYsub_read,"read","sub-read");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(Ytype_error,"boot","type-error");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYroundS,"runtime","round/");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_24);
DEFLIT(lit_9);
DEFLIT(lit_63);
DEFLIT(lit_27);
DEFLIT(lit_67);
DEFLIT(lit_31);
DEFLIT(lit_13);
DEFLIT(lit_61);
DEFLIT(lit_29);
DEFLIT(lit_64);
DEFLIT(lit_43);
DEFLIT(lit_6);
DEFLIT(lit_50);
DEFLIT(lit_33);
DEFLIT(lit_55);
DEFLIT(lit_54);
DEFLIT(lit_68);
DEFLIT(lit_57);
DEFLIT(lit_40);
DEFLIT(lit_22);
DEFLIT(lit_10);
DEFLIT(lit_1);
DEFLIT(lit_38);
DEFLIT(lit_23);
DEFLIT(lit_65);
DEFLIT(lit_20);
DEFLIT(lit_58);
DEFLIT(lit_16);
DEFLIT(lit_62);
DEFLIT(lit_60);
DEFLIT(lit_45);
DEFLIT(lit_18);
DEFLIT(lit_7);
DEFLIT(lit_49);
DEFLIT(lit_28);
DEFLIT(lit_0);
DEFLIT(lit_14);
DEFLIT(lit_8);
DEFLIT(lit_4);
DEFLIT(lit_3);
DEFLIT(lit_51);
DEFLIT(lit_25);
DEFLIT(lit_59);
DEFLIT(lit_17);
DEFLIT(lit_47);
DEFLIT(lit_48);
DEFLIT(lit_19);
DEFLIT(lit_36);
DEFLIT(lit_21);
DEFLIT(lit_44);
DEFLIT(lit_39);
DEFLIT(lit_2);
DEFLIT(lit_30);
DEFLIT(lit_37);
DEFLIT(lit_5);
DEFLIT(lit_56);
DEFLIT(lit_66);
DEFLIT(lit_41);
DEFLIT(lit_35);
DEFLIT(lit_32);
DEFLIT(lit_42);
DEFLIT(lit_26);
DEFLIT(lit_52);
DEFLIT(lit_53);
DEFLIT(lit_15);
DEFLIT(lit_34);
DEFLIT(lit_11);
DEFLIT(lit_12);
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
  P formF1085;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = CALL1(1,CHKREF(YreadYsub_read),FREEREF(0));
  formF1085 = T1;
  T4 = CALL1(1,CHKREF(YreadYreader_tokenQ),formF1085);
  T3 = CALL1(1,CHKREF(Ynot),T4);
  if (T3 != YPfalse) {
    T2 = formF1085;
  } else {
    T6 = CALL2(1,CHKREF(YmacrosYEE),formF1085,CHKREF(YreadYDclose_paren));
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
  P loopF1086;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_0,2);
  loopF1086 = T1;
  FUNINIT(loopF1086, 2,port_,loopF1086);
  T2 = CALL0(0,loopF1086);
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
  P formF1087;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,CHKREF(YreadYsub_read),port_);
  formF1087 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYeof_objectQ),formF1087);
  if (T3 != YPfalse) {
    T4 = CALL2(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_7));
    T2 = T4;
  } else {
    T6 = CALL1(1,CHKREF(YreadYreader_tokenQ),formF1087);
    if (T6 != YPfalse) {
      T8 = CALL1(1,CHKREF(Ytail),formF1087);
      T7 = CALL2(1,CHKREF(YreadYreading_error),port_,T8);
      T5 = T7;
    } else {
      T5 = formF1087;
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
  P cF1088;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYread_char),port_);
  cF1088 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYeof_objectQ),cF1088);
  if (T3 != YPfalse) {
    T2 = cF1088;
  } else {
    T6 = CALL1(1,CHKREF(YruntimeYchar_Gascii),cF1088);
    T5 = CALL2(1,CHKREF(YruntimeYelt),CHKREF(YreadYTread_dispatch_vectorT),T6);
    T4 = CALL2(1,T5,cF1088,port_);
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
  P another_formF1091;
  P last_formF1090;
  P formF1089;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,CHKREF(YreadYsub_read),port_);
  formF1089 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYeof_objectQ),formF1089);
  if (T3 != YPfalse) {
    T4 = CALL2(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_32));
    T2 = T4;
  } else {
    T6 = CALL2(1,CHKREF(YmacrosYEE),formF1089,CHKREF(YreadYDclose_paren));
    if (T6 != YPfalse) {
      T5 = Ynil;
    } else {
      T8 = CALL2(1,CHKREF(YmacrosYEE),formF1089,CHKREF(YreadYDdot));
      if (T8 != YPfalse) {
        T10 = CALL1(1,CHKREF(YreadYsub_read_carefully),port_);
        last_formF1090 = T10;
        T12 = CALL1(1,CHKREF(YreadYsub_read),port_);
        another_formF1091 = T12;
        T14 = CALL2(1,CHKREF(YmacrosYEE),another_formF1091,CHKREF(YreadYDclose_paren));
        if (T14 != YPfalse) {
          T13 = last_formF1090;
        } else {
          T15 = CALL3(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_33),another_formF1091);
          T13 = T15;
        }
        T11 = T13;
        T9 = T11;
        T7 = T9;
      } else {
        T17 = CALL2(1,CHKREF(YreadYsub_read_list),c_,port_);
        T16 = CALL2(1,CHKREF(YmacrosYpair),formF1089,T17);
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
  P keywordF1093;
  P nextF1092;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYpeek_char),port_);
  nextF1092 = T1;
  T4 = CALL1(1,CHKREF(YruntimeYeof_objectQ),nextF1092);
  if (T4 != YPfalse) {
    T5 = CALL2(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_36));
    T3 = T5;
  } else {
    T7 = CALL2(1,CHKREF(YruntimeYE),nextF1092,YPchr((P)64));
    if (T7 != YPfalse) {
      CALL1(1,CHKREF(YruntimeYread_char),port_);
      T6 = CHKREF(lit_37);
    } else {
      T6 = CHKREF(lit_38);
    }
    T3 = T6;
  }
  keywordF1093 = T3;
  T9 = CALL1(1,CHKREF(YreadYsub_read_carefully),port_);
  T8 = CALL2(1,CHKREF(Ylst),keywordF1093,T9);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_22) {
  P l_,i_;
  P ecF1097;
  P tmpF1096;
  P cF1095;
  P cF1094;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYread_char),FREEREF(0));
  cF1094 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYeof_objectQ),cF1094);
  if (T3 != YPfalse) {
    T4 = CALL2(1,CHKREF(YreadYreading_error),FREEREF(0),CHKREF(lit_42));
    T2 = T4;
  } else {
    T6 = CALL2(1,CHKREF(YruntimeYE),cF1094,YPchr((P)92));
    if (T6 != YPfalse) {
      T8 = CALL1(1,CHKREF(YruntimeYread_char),FREEREF(0));
      cF1095 = T8;
      T10 = CALL1(1,CHKREF(YruntimeYeof_objectQ),cF1095);
      if (T10 != YPfalse) {
        T11 = CALL2(1,CHKREF(YreadYreading_error),FREEREF(0),CHKREF(lit_43));
        T9 = T11;
      } else {
        T14 = CALL2(1,CHKREF(YruntimeYE),cF1095,YPchr((P)92));
        tmpF1096 = T14;
        if (tmpF1096 != YPfalse) {
          T15 = tmpF1096;
        } else {
          T16 = CALL2(1,CHKREF(YruntimeYE),cF1095,YPchr((P)34));
          T15 = T16;
        }
        T13 = T15;
        if (T13 != YPfalse) {
          T18 = CALL2(1,CHKREF(YmacrosYpair),cF1095,l_);
          T19 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
          a1 = T18;
          a2 = T19;
          l_ = a1;
          i_ = a2;
          goto loop;
          T12 = T17;
        } else {
          T22 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),cF1095);
          T21 = CALL2(1,CHKREF(YruntimeYelt),CHKREF(YreadYDstring_escape_chars),T22);
          ecF1097 = T21;
          if (ecF1097 != YPfalse) {
            T25 = CALL2(1,CHKREF(YmacrosYpair),ecF1097,l_);
            T26 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
            a1 = T25;
            a2 = T26;
            l_ = a1;
            i_ = a2;
            goto loop;
            T23 = T24;
          } else {
            T27 = CALL3(1,CHKREF(YreadYreading_error),FREEREF(0),CHKREF(lit_44),cF1095);
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
      T29 = CALL2(1,CHKREF(YruntimeYE),cF1094,YPchr((P)34));
      if (T29 != YPfalse) {
        T30 = CALL2(1,CHKREF(YreadYreverse_list_Gstring),l_,i_);
        T28 = T30;
      } else {
        T32 = CALL2(1,CHKREF(YmacrosYpair),cF1094,l_);
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
  P loopF1098;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_22,2);
  loopF1098 = T1;
  FUNINIT(loopF1098, 2,port_,loopF1098);
  T2 = CALL2(0,loopF1098,Ynil,YPint((P)0));
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
  P cF1099;
  P T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = CALL1(1,CHKREF(YruntimeYread_char),FREEREF(0));
  cF1099 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYeof_objectQ),cF1099);
  if (T3 != YPfalse) {
    T2 = cF1099;
  } else {
    T5 = CALL2(1,CHKREF(YruntimeYE),cF1099,YPchr((P)10));
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
  P loopF1100;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_25,2);
  loopF1100 = T1;
  FUNINIT(loopF1100, 2,port_,loopF1100);
  T2 = CALL0(0,loopF1100);
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
  P probeF1103;
  P cF1102;
  P cF1101;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYpeek_char),port_);
  cF1101 = T1;
  T4 = CALL1(1,CHKREF(YruntimeYeof_objectQ),cF1101);
  if (T4 != YPfalse) {
    T5 = CALL2(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_47));
    T3 = T5;
  } else {
    T6 = CALL1(1,CHKREF(YruntimeYas_lowercase),cF1101);
    T3 = T6;
  }
  cF1102 = T3;
  T8 = CALL2(1,CHKREF(YruntimeYassq),cF1102,CHKREF(YreadYTsharp_macrosT));
  probeF1103 = T8;
  if (probeF1103 != YPfalse) {
    T12 = CALL1(1,CHKREF(Ytail),probeF1103);
    T11 = CALL1(1,CHKREF(Yhead),T12);
    T10 = CALL2(1,T11,cF1102,port_);
    T9 = T10;
  } else {
    T13 = CALL3(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_48),cF1102);
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
  P tempF1106;
  P nameF1105;
  P cF1104;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,CHKREF(YruntimeYread_char),port_);
  T1 = CALL1(1,CHKREF(YruntimeYpeek_char),port_);
  cF1104 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYeof_objectQ),cF1104);
  if (T3 != YPfalse) {
    T4 = CALL2(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_50));
    T2 = T4;
  } else {
    T6 = CALL1(1,CHKREF(YruntimeYalphabeticQ),cF1104);
    if (T6 != YPfalse) {
      T8 = CALL1(1,CHKREF(YreadYsub_read_carefully),port_);
      nameF1105 = T8;
      T12 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLstrG),nameF1105);
      T11 = CALL1(1,CHKREF(YruntimeYlen),T12);
      T10 = CALL2(1,CHKREF(YruntimeYE),T11,YPint((P)1));
      if (T10 != YPfalse) {
        T9 = cF1104;
      } else {
        T14 = CALL2(1,CHKREF(YruntimeYassq),nameF1105,CHKREF(YreadYDchar_long_names));
        tempF1106 = T14;
        if (tempF1106 != YPfalse) {
          T17 = CALL1(1,CHKREF(Ytail),tempF1106);
          T16 = CALL1(1,CHKREF(Yhead),T17);
          T15 = T16;
        } else {
          T18 = CALL3(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_51),nameF1105);
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
  P tmpF1108;
  P stringF1107;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL2(1,CHKREF(YreadYsub_read_token),YPchr((P)35),port_);
  stringF1107 = T1;
  T3 = CALL1(1,CHKREF(YruntimeYstr_to_num),stringF1107);
  tmpF1108 = T3;
  if (tmpF1108 != YPfalse) {
    T4 = tmpF1108;
  } else {
    T5 = CALL3(1,CHKREF(YreadYreading_error),port_,CHKREF(lit_52),stringF1107);
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
  P tmpF1110;
  P cF1109;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYpeek_char),FREEREF(0));
  cF1109 = T1;
  T4 = CALL1(1,CHKREF(YruntimeYeof_objectQ),cF1109);
  tmpF1110 = T4;
  if (tmpF1110 != YPfalse) {
    T5 = tmpF1110;
  } else {
    T7 = CALL1(1,CHKREF(YruntimeYchar_Gascii),cF1109);
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
  P loopF1111;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_35,2);
  loopF1111 = T1;
  FUNINIT(loopF1111, 2,port_,loopF1111);
  T4 = CALL1(1,CHKREF(YreadYpreferred_case),c_);
  T3 = CALL1(1,CHKREF(Ylst),T4);
  T2 = CALL2(0,loopF1111,T3,YPint((P)1));
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
  P maybe_numberF1116;
  P tmpF1115;
  P tmpF1114;
  P tmpF1113;
  P cF1112;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(string_, 0);
  ARG(port_, 1);
loop:
  T2 = CALL2(1,CHKREF(YruntimeYelt),string_,YPint((P)0));
  cF1112 = T2;
  T4 = CALL1(1,CHKREF(YruntimeYnumericQ),cF1112);
  tmpF1113 = T4;
  if (tmpF1113 != YPfalse) {
    T5 = tmpF1113;
  } else {
    T7 = CALL2(1,CHKREF(YruntimeYE),cF1112,YPchr((P)43));
    tmpF1114 = T7;
    if (tmpF1114 != YPfalse) {
      T8 = tmpF1114;
    } else {
      T10 = CALL2(1,CHKREF(YruntimeYE),cF1112,YPchr((P)45));
      tmpF1115 = T10;
      if (tmpF1115 != YPfalse) {
        T11 = tmpF1115;
      } else {
        T12 = CALL2(1,CHKREF(YruntimeYE),cF1112,YPchr((P)46));
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
    maybe_numberF1116 = T14;
    if (maybe_numberF1116 != YPfalse) {
      T15 = maybe_numberF1116;
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
  P number_sharp_macroF1120;
  P vecF1119;
  P str10496F1118;
  P sub_read_whitespaceF1117;
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
  sub_read_whitespaceF1117 = T60;
  T62 = FUNFAB(fun_13,1,sub_read_whitespaceF1117);
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
  str10496F1118 = T66;
  T68 = fun_15;
  T67 = CALL2(1,CHKREF(YruntimeYdo),T68,str10496F1118);
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
  vecF1119 = T88;
  T90 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)116));
  CALL3(1,CHKREF(YruntimeYelt_setter),YPchr((P)9),vecF1119,T90);
  T91 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)102));
  CALL3(1,CHKREF(YruntimeYelt_setter),YPchr((P)12),vecF1119,T91);
  T92 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)114));
  CALL3(1,CHKREF(YruntimeYelt_setter),YPchr((P)13),vecF1119,T92);
  T93 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLintG),YPchr((P)110));
  CALL3(1,CHKREF(YruntimeYelt_setter),YPchr((P)10),vecF1119,T93);
  T87 = vecF1119;
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
  number_sharp_macroF1120 = T122;
  T124 = FUNFAB(fun_34,1,number_sharp_macroF1120);
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
  {"add", &module_info_runtime, "add"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"add!", &module_info_runtime, "add!"},
  {"flo-bits", &module_info_runtime, "flo-bits"},
  {"lsh", &module_info_runtime, "lsh"},
  {"fab-map", &module_info_runtime, "fab-map"},
  {"case", &module_info_macros, "case"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"max", &module_info_runtime, "max"},
  {"open-output-file", &module_info_runtime, "open-output-file"},
  {"set", &module_info_boot, "set"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"%slot", &module_info_boot, "%slot"},
  {"*", &module_info_runtime, "*"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"export", &module_info_boot, "export"},
  {"table-growth-threshold", &module_info_runtime, "table-growth-threshold"},
  {"abs", &module_info_runtime, "abs"},
  {"<log>", &module_info_boot, "<log>"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"truncate/", &module_info_runtime, "truncate/"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"address-of", &module_info_runtime, "address-of"},
  {"from-above", &module_info_runtime, "from-above"},
  {"%f*", &module_info_boot, "%f*"},
  {"<file-output-port>", &module_info_runtime, "<file-output-port>"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"table-protocol", &module_info_runtime, "table-protocol"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%i-", &module_info_boot, "%i-"},
  {"pos", &module_info_runtime, "pos"},
  {"dec", &module_info_macros, "dec"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"<file-port>", &module_info_runtime, "<file-port>"},
  {"assoc", &module_info_runtime, "assoc"},
  {"collect", &module_info_macros, "collect"},
  {"default", &module_info_runtime, "default"},
  {"floor", &module_info_runtime, "floor"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"when", &module_info_macros, "when"},
  {"empty", &module_info_runtime, "empty"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"not", &module_info_boot, "not"},
  {"modulo", &module_info_runtime, "modulo"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"<any>", &module_info_boot, "<any>"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"<assocs>", &module_info_runtime, "<assocs>"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"from", &module_info_runtime, "from"},
  {"<incongruent-method-error>", &module_info_runtime, "<incongruent-method-error>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"<union>", &module_info_boot, "<union>"},
  {"find-key", &module_info_runtime, "find-key"},
  {"reduce+", &module_info_runtime, "reduce+"},
  {"out", &module_info_runtime, "out"},
  {"error", &module_info_boot, "error"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"apply", &module_info_macros, "apply"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"map", &module_info_macros, "map"},
  {"elt-or", &module_info_runtime, "elt-or"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"elt", &module_info_runtime, "elt"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"<=", &module_info_runtime, "<="},
  {"%fb", &module_info_boot, "%fb"},
  {"elt-setter", &module_info_runtime, "elt-setter"},
  {"remainder", &module_info_runtime, "remainder"},
  {"assocs-test", &module_info_runtime, "assocs-test"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"nul?", &module_info_runtime, "nul?"},
  {"port-index", &module_info_runtime, "port-index"},
  {"char->ascii", &module_info_runtime, "char->ascii"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"quote", &module_info_boot, "quote"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"%f/", &module_info_boot, "%f/"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"map2", &module_info_runtime, "map2"},
  {"logior", &module_info_runtime, "logior"},
  {"fun", &module_info_boot, "fun"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"lowercase?", &module_info_runtime, "lowercase?"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"%i&", &module_info_boot, "%i&"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"%with-monitor", &module_info_runtime, "%with-monitor"},
  {"%i=", &module_info_boot, "%i="},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"call-with-output-file", &module_info_runtime, "call-with-output-file"},
  {"~=", &module_info_runtime, "~="},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"dg", &module_info_boot, "dg"},
  {"<str-tab>", &module_info_runtime, "<str-tab>"},
  {"1st", &module_info_runtime, "1st"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%ft", &module_info_boot, "%ft"},
  {"tail", &module_info_boot, "tail"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"pos?", &module_info_runtime, "pos?"},
  {"<tab>", &module_info_runtime, "<tab>"},
  {"logxor", &module_info_runtime, "logxor"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"==", &module_info_macros, "=="},
  {"reduce", &module_info_runtime, "reduce"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"<file-input-port>", &module_info_runtime, "<file-input-port>"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"opf", &module_info_macros, "opf"},
  {"port-contents", &module_info_runtime, "port-contents"},
  {"newline", &module_info_runtime, "newline"},
  {"<string-output-port>", &module_info_runtime, "<string-output-port>"},
  {"false-or", &module_info_runtime, "false-or"},
  {"%i?", &module_info_boot, "%i?"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"%i*", &module_info_boot, "%i*"},
  {"napply", &module_info_macros, "napply"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"%untag", &module_info_boot, "%untag"},
  {"%su", &module_info_boot, "%su"},
  {"id-hash", &module_info_runtime, "id-hash"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"logand", &module_info_runtime, "logand"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"read", &module_info_runtime, "read"},
  {"%vec", &module_info_boot, "%vec"},
  {"<string-input-port>", &module_info_runtime, "<string-input-port>"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"as", &module_info_runtime, "as"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"current-gc-state", &module_info_runtime, "current-gc-state"},
  {"%velt", &module_info_boot, "%velt"},
  {"pick", &module_info_runtime, "pick"},
  {"if", &module_info_boot, "if"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"%c<", &module_info_boot, "%c<"},
  {"t<", &module_info_runtime, "t<"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"lognot", &module_info_runtime, "lognot"},
  {"force-output", &module_info_runtime, "force-output"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"<input-port>", &module_info_runtime, "<input-port>"},
  {"*print-base*", &module_info_runtime, "*print-base*"},
  {"del-dups", &module_info_runtime, "del-dups"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"ceiling", &module_info_runtime, "ceiling"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"%pair", &module_info_boot, "%pair"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"case-insensitive-string-equal", &module_info_runtime, "case-insensitive-string-equal"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"<buf>", &module_info_runtime, "<buf>"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"push", &module_info_runtime, "push"},
  {"eof-object", &module_info_runtime, "eof-object"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"class-name", &module_info_boot, "class-name"},
  {"isa?", &module_info_boot, "isa?"},
  {"dss", &module_info_boot, "dss"},
  {"select", &module_info_macros, "select"},
  {"t=", &module_info_runtime, "t="},
  {"use", &module_info_boot, "use"},
  {"map-keyed", &module_info_runtime, "map-keyed"},
  {"isa", &module_info_boot, "isa"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"write-char", &module_info_runtime, "write-char"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"<type>", &module_info_boot, "<type>"},
  {"nxt-state", &module_info_runtime, "nxt-state"},
  {"<class>", &module_info_boot, "<class>"},
  {"uppercase?", &module_info_runtime, "uppercase?"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"let", &module_info_boot, "let"},
  {"pushf", &module_info_macros, "pushf"},
  {"2nd", &module_info_runtime, "2nd"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"identity", &module_info_runtime, "identity"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {"zero?", &module_info_runtime, "zero?"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"now-key", &module_info_runtime, "now-key"},
  {"fin", &module_info_boot, "fin"},
  {"mem?", &module_info_runtime, "mem?"},
  {">=", &module_info_runtime, ">="},
  {"=", &module_info_runtime, "="},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"from-below", &module_info_runtime, "from-below"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"t+", &module_info_runtime, "t+"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"sig", &module_info_runtime, "sig"},
  {"from-below-by", &module_info_runtime, "from-below-by"},
  {"next-method", &module_info_macros, "next-method"},
  {"now-elt", &module_info_runtime, "now-elt"},
  {"del", &module_info_runtime, "del"},
  {"alphabetic?", &module_info_runtime, "alphabetic?"},
  {"case-insensitive-string-hash", &module_info_runtime, "case-insensitive-string-hash"},
  {"all?", &module_info_runtime, "all?"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"%cu", &module_info_boot, "%cu"},
  {"<map>", &module_info_runtime, "<map>"},
  {"vec", &module_info_runtime, "vec"},
  {"call-with-input-file", &module_info_runtime, "call-with-input-file"},
  {"%selt", &module_info_boot, "%selt"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"rev!", &module_info_runtime, "rev!"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"~==", &module_info_runtime, "~=="},
  {"<str>", &module_info_boot, "<str>"},
  {"sub", &module_info_runtime, "sub"},
  {"lst", &module_info_boot, "lst"},
  {"assert", &module_info_macros, "assert"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"round", &module_info_runtime, "round"},
  {"buf", &module_info_runtime, "buf"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"fin-state?", &module_info_runtime, "fin-state?"},
  {"%lu", &module_info_boot, "%lu"},
  {"pop-last!", &module_info_runtime, "pop-last!"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"%snul", &module_info_boot, "%snul"},
  {"logbit?", &module_info_runtime, "logbit?"},
  {"type-class", &module_info_boot, "type-class"},
  {"always", &module_info_runtime, "always"},
  {"nul", &module_info_boot, "nul"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"len", &module_info_runtime, "len"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"ini-state", &module_info_runtime, "ini-state"},
  {"dlet", &module_info_macros, "dlet"},
  {"collected", &module_info_macros, "collected"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%lb", &module_info_boot, "%lb"},
  {"or", &module_info_macros, "or"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"even?", &module_info_runtime, "even?"},
  {"push-last!", &module_info_runtime, "push-last!"},
  {"low-elt-setter", &module_info_runtime, "low-elt-setter"},
  {"%raw", &module_info_boot, "%raw"},
  {"%i^", &module_info_boot, "%i^"},
  {"char-ready?", &module_info_runtime, "char-ready?"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"<met>", &module_info_boot, "<met>"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"@<", &module_info_boot, "@<"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"dp", &module_info_boot, "dp"},
  {"var-type", &module_info_macros, "var-type"},
  {"do", &module_info_runtime, "do"},
  {"seq", &module_info_boot, "seq"},
  {"try", &module_info_boot, "try"},
  {"3rd", &module_info_runtime, "3rd"},
  {"open-input-file", &module_info_runtime, "open-input-file"},
  {"as-lowercase", &module_info_runtime, "as-lowercase"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"fab", &module_info_runtime, "fab"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"%str", &module_info_boot, "%str"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"close-output-port", &module_info_runtime, "close-output-port"},
  {"neg?", &module_info_runtime, "neg?"},
  {"%im", &module_info_boot, "%im"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"collecting", &module_info_macros, "collecting"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"str", &module_info_runtime, "str"},
  {"str-to-num", &module_info_runtime, "str-to-num"},
  {"any?", &module_info_runtime, "any?"},
  {"dm", &module_info_boot, "dm"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"rep", &module_info_boot, "rep"},
  {"call-with-string-output-port", &module_info_runtime, "call-with-string-output-port"},
  {"to-str", &module_info_runtime, "to-str"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"%i+", &module_info_boot, "%i+"},
  {"fill", &module_info_runtime, "fill"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"object-class", &module_info_boot, "object-class"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"del-keys", &module_info_runtime, "del-keys"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"unless", &module_info_macros, "unless"},
  {"+", &module_info_runtime, "+"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"numeric?", &module_info_runtime, "numeric?"},
  {"loc", &module_info_boot, "loc"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"from-to-by", &module_info_runtime, "from-to-by"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"dv", &module_info_boot, "dv"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"mif", &module_info_boot, "mif"},
  {"@+", &module_info_boot, "@+"},
  {"assq", &module_info_runtime, "assq"},
  {"%sb", &module_info_boot, "%sb"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"alter", &module_info_runtime, "alter"},
  {"var-name", &module_info_macros, "var-name"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"peek-char", &module_info_runtime, "peek-char"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"min", &module_info_runtime, "min"},
  {"table-growth-factor", &module_info_runtime, "table-growth-factor"},
  {"sub-setter", &module_info_runtime, "sub-setter"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"truncate", &module_info_runtime, "truncate"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"/", &module_info_runtime, "/"},
  {"pop", &module_info_runtime, "pop"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"inc", &module_info_macros, "inc"},
  {">", &module_info_runtime, ">"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"<col>", &module_info_boot, "<col>"},
  {"cat", &module_info_macros, "cat"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"<range>", &module_info_runtime, "<range>"},
  {"table-shrink-threshold", &module_info_runtime, "table-shrink-threshold"},
  {"odd?", &module_info_runtime, "odd?"},
  {"assoc-value", &module_info_runtime, "assoc-value"},
  {"read-char", &module_info_runtime, "read-char"},
  {"<list>", &module_info_runtime, "<list>"},
  {"and", &module_info_macros, "and"},
  {"first-then", &module_info_runtime, "first-then"},
  {"<string-port>", &module_info_runtime, "<string-port>"},
  {"do3", &module_info_runtime, "do3"},
  {"tup", &module_info_macros, "tup"},
  {"nil", &module_info_boot, "nil"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"<port>", &module_info_runtime, "<port>"},
  {"fabs", &module_info_runtime, "fabs"},
  {"last", &module_info_runtime, "last"},
  {"low-elt", &module_info_runtime, "low-elt"},
  {"<", &module_info_runtime, "<"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"lab", &module_info_boot, "lab"},
  {"format", &module_info_runtime, "format"},
  {"%f+", &module_info_boot, "%f+"},
  {"neg", &module_info_runtime, "neg"},
  {"%f=", &module_info_boot, "%f="},
  {"list", &module_info_runtime, "list"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"dc", &module_info_boot, "dc"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"from-to", &module_info_runtime, "from-to"},
  {"@olen", &module_info_boot, "@olen"},
  {"type-object", &module_info_boot, "type-object"},
  {"copy-state", &module_info_runtime, "copy-state"},
  {"%i<", &module_info_boot, "%i<"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"$permanent-hash-state", &module_info_runtime, "$permanent-hash-state"},
  {"from-by", &module_info_runtime, "from-by"},
  {"popf", &module_info_macros, "popf"},
  {"compose", &module_info_runtime, "compose"},
  {"%bb", &module_info_boot, "%bb"},
  {"eof-object?", &module_info_runtime, "eof-object?"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"call-with-string-input-port", &module_info_runtime, "call-with-string-input-port"},
  {"app-args", &module_info_runtime, "app-args"},
  {"%isa", &module_info_boot, "%isa"},
  {"%ib", &module_info_boot, "%ib"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"<error>", &module_info_runtime, "<error>"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"head", &module_info_boot, "head"},
  {"as-uppercase", &module_info_runtime, "as-uppercase"},
  {"rev", &module_info_runtime, "rev"},
  {"del-key", &module_info_runtime, "del-key"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"ascii-whitespaces", &module_info_runtime, "ascii-whitespaces"},
  {"%iu", &module_info_boot, "%iu"},
  {"ds", &module_info_boot, "ds"},
  {"assqn", &module_info_runtime, "assqn"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"to-digit", &module_info_runtime, "to-digit"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"keys", &module_info_runtime, "keys"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"%cb", &module_info_boot, "%cb"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"<int>", &module_info_boot, "<int>"},
  {"now-elt-setter", &module_info_runtime, "now-elt-setter"},
  {"close-input-port", &module_info_runtime, "close-input-port"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"%fu", &module_info_boot, "%fu"},
  {"in", &module_info_runtime, "in"},
  {"empty?", &module_info_macros, "empty?"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"<output-port>", &module_info_runtime, "<output-port>"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"assocq", &module_info_runtime, "assocq"},
  {"write-string", &module_info_runtime, "write-string"},
  {"curry", &module_info_runtime, "curry"},
  {"%slen", &module_info_boot, "%slen"},
  {"cat2", &module_info_runtime, "cat2"},
  {"floor/", &module_info_runtime, "floor/"},
  {"gensym", &module_info_macros, "gensym"},
  {"bound?", &module_info_boot, "bound?"},
  {"len-setter", &module_info_runtime, "len-setter"},
  {"<num>", &module_info_boot, "<num>"},
  {"%f-", &module_info_boot, "%f-"},
  {"%i!", &module_info_boot, "%i!"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"ceiling/", &module_info_runtime, "ceiling/"},
  {"%it/", &module_info_boot, "%it/"},
  {"ascii-limit", &module_info_runtime, "ascii-limit"},
  {"from-above-by", &module_info_runtime, "from-above-by"},
  {"do2", &module_info_runtime, "do2"},
  {"fun-value", &module_info_boot, "fun-value"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"slot", &module_info_boot, "slot"},
  {"cat!", &module_info_runtime, "cat!"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"ash", &module_info_runtime, "ash"},
  {"-", &module_info_runtime, "-"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"ct", &module_info_boot, "ct"},
  {"num-to-str", &module_info_runtime, "num-to-str"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"pair", &module_info_macros, "pair"},
  {"%iv", &module_info_boot, "%iv"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"%f<", &module_info_boot, "%f<"},
  {"df", &module_info_boot, "df"},
  {"<step>", &module_info_runtime, "<step>"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"type-error", &module_info_boot, "type-error"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"%c=", &module_info_boot, "%c="},
  {"for", &module_info_macros, "for"},
  {"round/", &module_info_runtime, "round/"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"gobble-line", &YreadYgobble_line},
  {"preferred-case", &YreadYpreferred_case},
  {"warn", &YreadYwarn},
  {"make-reader-token", &YreadYmake_reader_token},
  {"parse-token", &YreadYparse_token},
  {"$string-escape-chars", &YreadYDstring_escape_chars},
  {"*read-dispatch-vector*", &YreadYTread_dispatch_vectorT},
  {"read-from-string", &YreadYread_from_string},
  {"set-standard-read-macro!", &YreadYset_standard_read_macroX},
  {"$char-long-names", &YreadYDchar_long_names},
  {"make-immutable!", &YreadYmake_immutableX},
  {"reading-error", &YreadYreading_error},
  {"*sharp-macros*", &YreadYTsharp_macrosT},
  {"sub-read-constituent", &YreadYsub_read_constituent},
  {"---main-0---", NULL},
  {"*read-terminating?-vector*", &YreadYTread_terminatingQ_vectorT},
  {"read-string-literal", &YreadYread_string_literal},
  {"$dot", &YreadYDdot},
  {"<reader-token>", &YreadYLreader_tokenG},
  {"set-standard-syntax!", &YreadYset_standard_syntaxX},
  {"reader-token?", &YreadYreader_tokenQ},
  {"reverse-list->string", &YreadYreverse_list_Gstring},
  {"$strange-symbol-names", &YreadYDstrange_symbol_names},
  {"$close-paren", &YreadYDclose_paren},
  {"define-sharp-macro", &YreadYdefine_sharp_macro},
  {"token-message", &YreadYtoken_message},
  {"sub-read-list", &YreadYsub_read_list},
  {"sub-read-carefully", &YreadYsub_read_carefully},
  {"sub-read-token", &YreadYsub_read_token},
  {"token-message-setter", &YreadYtoken_message_setter},
  {"sub-read", &YreadYsub_read},
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
