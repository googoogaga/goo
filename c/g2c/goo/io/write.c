/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: write */

DEF(YwriteYwrite_char_literal,"write","write-char-literal");
EXT(YruntimeYlogxor,"runtime","logxor");
EXT(YruntimeYdel_dups,"runtime","del-dups");
EXT(YLlocG,"boot","<loc>");
DEF(YwriteYTmax_print_lengthT,"write","*max-print-length*");
EXT(YruntimeYpeek_char,"runtime","peek-char");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YruntimeYfrom_below,"runtime","from-below");
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
DEF(YwriteYwrite_boolean,"write","write-boolean");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YLtraitsG,"boot","<traits>");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfapply,"boot","fapply");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYdo3,"runtime","do3");
DEF(YwriteYwrite,"write","write");
EXT(YruntimeYreduce,"runtime","reduce");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYini_state,"runtime","ini-state");
DEF(YwriteYas_binding_name,"write","as-binding-name");
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
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYas,"runtime","as");
EXT(YPsnul,"boot","%snul");
EXT(Yfab_gen,"boot","fab-gen");
DEF(YwriteYenv_object_name,"write","env-object-name");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYNE,"runtime","~=");
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYpush,"runtime","push");
EXT(YruntimeYsig,"runtime","sig");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
DEF(YwriteYwrite_to_string,"write","write-to-string");
EXT(YruntimeYmax,"runtime","max");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YmacrosYcat,"macros","cat");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
DEF(YwriteYwrite_vector,"write","write-vector");
EXT(Yerror,"boot","error");
EXT(YruntimeYopen_output_file,"runtime","open-output-file");
DEF(YwriteYquotationQ,"write","quotation?");
EXT(YruntimeYLE,"runtime","<=");
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
DEF(YwriteYdisplay,"write","display");
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
EXT(YruntimeYoddQ,"runtime","odd?");
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
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
DEF(YwriteYwrite_map,"write","write-map");
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
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYassoc,"runtime","assoc");
EXT(YruntimeYcase_insensitive_string_hash,"runtime","case-insensitive-string-hash");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
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
DEF(YwriteYTglo_nameQT,"write","*glo-name?*");
EXT(YruntimeYwrite_char,"runtime","write-char");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYassq,"runtime","assq");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(Ynot,"boot","not");
EXT(YLchrG,"boot","<chr>");
DEF(YwriteYwrite_params,"write","write-params");
EXT(YruntimeYtable_shrink_threshold,"runtime","table-shrink-threshold");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYmin,"runtime","min");
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYnxt_state,"runtime","nxt-state");
DEF(YwriteYwrite_string_literal,"write","write-string-literal");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(Yobject_slots,"boot","object-slots");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYchar_readyQ,"runtime","char-ready?");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYdo2,"runtime","do2");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYA,"runtime","+");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYpos,"runtime","pos");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYkeys,"runtime","keys");
EXT(Yfind_setter,"boot","find-setter");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YLnumG,"boot","<num>");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YLstrG,"boot","<str>");
DEF(YwriteYwrite_number,"write","write-number");
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
DEF(YwriteYwriteln,"write","writeln");
EXT(YruntimeYsub,"runtime","sub");
DEF(YwriteYTmax_print_depthT,"write","*max-print-depth*");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YruntimeYlsh,"runtime","lsh");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYin,"runtime","in");
DEF(YwriteYobject_name,"write","object-name");
EXT(YruntimeYfill,"runtime","fill");
DEF(YwriteYwrite_fun_guts,"write","write-fun-guts");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYout,"runtime","out");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYfrom_below_by,"runtime","from-below-by");
EXT(YruntimeYLoutput_portG,"runtime","<output-port>");
DEF(YwriteYdo_display,"write","do-display");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
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
EXT(YruntimeYanyQ,"runtime","any?");
EXT(Yfun_value,"boot","fun-value");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Yfun_names,"boot","fun-names");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(YruntimeYevenQ,"runtime","even?");
EXT(YruntimeYGE,"runtime",">=");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
DEF(YwriteYcharacter_name,"write","character-name");
EXT(YPvnul,"boot","%vnul");
DEF(YwriteYwrite_list,"write","write-list");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYLfile_output_portG,"runtime","<file-output-port>");
EXT(YLfloG,"boot","<flo>");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYneg,"runtime","neg");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYclose_input_port,"runtime","close-input-port");
EXT(YruntimeYeof_object,"runtime","eof-object");
EXT(YruntimeYforce_output,"runtime","force-output");
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
DEF(YwriteYrecurring_write,"write","recurring-write");
EXT(YruntimeY3rd,"runtime","3rd");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YreadYDchar_long_names,"read","$char-long-names");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_11);
DEFLIT(lit_98);
DEFLIT(lit_52);
DEFLIT(lit_67);
DEFLIT(lit_17);
DEFLIT(lit_87);
DEFLIT(lit_69);
DEFLIT(lit_34);
DEFLIT(lit_39);
DEFLIT(lit_10);
DEFLIT(lit_26);
DEFLIT(lit_75);
DEFLIT(lit_9);
DEFLIT(lit_46);
DEFLIT(lit_42);
DEFLIT(lit_14);
DEFLIT(lit_63);
DEFLIT(lit_62);
DEFLIT(lit_88);
DEFLIT(lit_84);
DEFLIT(lit_23);
DEFLIT(lit_5);
DEFLIT(lit_54);
DEFLIT(lit_22);
DEFLIT(lit_96);
DEFLIT(lit_83);
DEFLIT(lit_44);
DEFLIT(lit_53);
DEFLIT(lit_8);
DEFLIT(lit_99);
DEFLIT(lit_80);
DEFLIT(lit_0);
DEFLIT(lit_37);
DEFLIT(lit_95);
DEFLIT(lit_41);
DEFLIT(lit_66);
DEFLIT(lit_6);
DEFLIT(lit_61);
DEFLIT(lit_50);
DEFLIT(lit_28);
DEFLIT(lit_1);
DEFLIT(lit_58);
DEFLIT(lit_70);
DEFLIT(lit_72);
DEFLIT(lit_56);
DEFLIT(lit_64);
DEFLIT(lit_38);
DEFLIT(lit_85);
DEFLIT(lit_97);
DEFLIT(lit_73);
DEFLIT(lit_91);
DEFLIT(lit_101);
DEFLIT(lit_68);
DEFLIT(lit_21);
DEFLIT(lit_57);
DEFLIT(lit_71);
DEFLIT(lit_19);
DEFLIT(lit_7);
DEFLIT(lit_36);
DEFLIT(lit_25);
DEFLIT(lit_59);
DEFLIT(lit_43);
DEFLIT(lit_78);
DEFLIT(lit_104);
DEFLIT(lit_79);
DEFLIT(lit_32);
DEFLIT(lit_55);
DEFLIT(lit_15);
DEFLIT(lit_60);
DEFLIT(lit_86);
DEFLIT(lit_45);
DEFLIT(lit_93);
DEFLIT(lit_100);
DEFLIT(lit_51);
DEFLIT(lit_27);
DEFLIT(lit_81);
DEFLIT(lit_89);
DEFLIT(lit_13);
DEFLIT(lit_77);
DEFLIT(lit_29);
DEFLIT(lit_90);
DEFLIT(lit_31);
DEFLIT(lit_16);
DEFLIT(lit_47);
DEFLIT(lit_76);
DEFLIT(lit_92);
DEFLIT(lit_12);
DEFLIT(lit_18);
DEFLIT(lit_4);
DEFLIT(lit_24);
DEFLIT(lit_48);
DEFLIT(lit_30);
DEFLIT(lit_3);
DEFLIT(lit_40);
DEFLIT(lit_74);
DEFLIT(lit_35);
DEFLIT(lit_33);
DEFLIT(lit_65);
DEFLIT(lit_82);
DEFLIT(lit_102);
DEFLIT(lit_103);
DEFLIT(lit_2);
DEFLIT(lit_20);
DEFLIT(lit_94);
DEFLIT(lit_49);

/* FUNCTIONS: */

LOCFOR(fun_0);
LOCFOR(fun_x_1205_1);
LOCFOR(fun_2);
LOCFOR(fun_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_6);
LOCFOR(fun_recur_7);
LOCFOR(fun_8);
LOCFOR(fun_9);
LOCFOR(fun_recur_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_13);
LOCFOR(fun_14);
LOCFOR(fun_15);
LOCFOR(fun_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_loop_26);
LOCFOR(fun_27);
LOCFOR(fun_loop_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_loop_31);
LOCFOR(fun_32);
LOCFOR(fun_x_1210_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_x_1217_39);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_x_1222_45);
LOCFOR(fun_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_arg_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
FUNFOR(YruntimeYformat_to_string);
extern P YwriteY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_0) {
  ARG(name_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),name_);
  QRET(T0);
}

FUNCODEDEF(fun_x_1205_1) {
  ARG(args_, 0);
  ARG(msg_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL1(FREEREF(0),YPfalse);
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  ARG(return_, 0);
  P x_1204F1063;
  P x_1204F1062;
  P x_1204F1061;
  P x_1204F1060;
  P x_1204F1059;
  P x_1204F1058;
  P x_1204F1057;
  P bodyF1056;
  P protoF1055;
  P xF1054;
  P portF1053;
  P x_1204F1052;
  P x_1205F1051;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T55 = FUNSHELL(0,fun_x_1205_1,1);
  x_1205F1051 = T55;
  FUNINIT(x_1205F1051, 1,return_);
  x_1204F1052 = FREEREF(0);
  portF1053 = YPfalse;
  portF1053 = BOXFAB(portF1053);
  xF1054 = YPfalse;
  xF1054 = BOXFAB(xF1054);
  protoF1055 = YPfalse;
  protoF1055 = BOXFAB(protoF1055);
  bodyF1056 = YPfalse;
  bodyF1056 = BOXFAB(bodyF1056);
  T28 = CALL2(CHKREF(YisaQ),x_1204F1052,CHKREF(YLlstG));
  if (T28 != YPfalse) {
    T27 = CALL3(CHKREF(YmacrosYmatch_atom),x_1204F1052,CHKREF(lit_10),x_1205F1051);
    x_1204F1057 = T27;
    T25 = CALL2(CHKREF(YmacrosYmatch_sublist),x_1204F1057,x_1205F1051);
    x_1204F1058 = T25;
    T23 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1204F1058,x_1205F1051);
    BOXVAL(portF1053) = T23;
    T24 = CALL1(CHKREF(Ytail),x_1204F1058);
    x_1204F1059 = T24;
    T21 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1204F1059,x_1205F1051);
    BOXVAL(xF1054) = T21;
    T22 = CALL1(CHKREF(Ytail),x_1204F1059);
    x_1204F1060 = T22;
    T19 = CALL2(CHKREF(YmacrosYmatch_unquote),x_1204F1060,x_1205F1051);
    BOXVAL(protoF1055) = T19;
    T20 = CALL1(CHKREF(Ytail),x_1204F1060);
    x_1204F1061 = T20;
    T18 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1204F1061,x_1205F1051);
    T17 = T18;
    T16 = T17;
    T15 = T16;
    T26 = CALL1(CHKREF(Ytail),x_1204F1057);
    x_1204F1062 = T26;
    BOXVAL(bodyF1056) = x_1204F1062;
    x_1204F1063 = Ynil;
    T14 = CALL2(CHKREF(YmacrosYmatch_empty_list),x_1204F1063,x_1205F1051);
    T13 = T14;
    T12 = T13;
    T11 = T12;
  } else {
    T10 = CALL2(x_1205F1051,CHKREF(lit_9),x_1204F1052);
  }
  T54 = CALL1(CHKREF(Ylst),CHKREF(lit_8));
  T53 = CALL1(CHKREF(Ylst),CHKREF(lit_7));
  T52 = BOXVAL(xF1054);
  T51 = CALL1(CHKREF(Ylst),T52);
  T50 = BOXVAL(protoF1055);
  T49 = CALL1(CHKREF(Ylst),T50);
  T48 = CALLN(CHKREF(YmacrosYcat),4,T53,T51,T49,Ynil);
  T47 = CALL1(CHKREF(Ylst),T48);
  T46 = CALL1(CHKREF(Ylst),CHKREF(lit_6));
  T45 = BOXVAL(portF1053);
  T44 = CALL1(CHKREF(Ylst),T45);
  T43 = CALL1(CHKREF(Ylst),CHKREF(lit_0));
  T42 = CALL1(CHKREF(Ylst),CHKREF(lit_5));
  T41 = BOXVAL(protoF1055);
  T40 = CALL1(CHKREF(Ylst),T41);
  T39 = CALL3(CHKREF(YmacrosYcat),T42,T40,Ynil);
  T38 = CALL1(CHKREF(Ylst),T39);
  T37 = CALL3(CHKREF(YmacrosYcat),T43,T38,Ynil);
  T36 = CALL1(CHKREF(Ylst),T37);
  T35 = CALLN(CHKREF(YmacrosYcat),4,T46,T44,T36,Ynil);
  T34 = CALL1(CHKREF(Ylst),T35);
  T33 = CALL1(CHKREF(Ylst),CHKREF(lit_4));
  T32 = BOXVAL(bodyF1056);
  T31 = CALL3(CHKREF(YmacrosYcat),T33,T32,Ynil);
  T30 = CALL1(CHKREF(Ylst),T31);
  T29 = CALLN(CHKREF(YmacrosYcat),5,T54,T47,T34,T30,Ynil);
  T8 = T29;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_3) {
  ARG(exp_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = FUNFAB(fun_2,1,exp_);
  T0 = with_exit(T1);
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLstrG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_19));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALL2(CHKREF(YruntimeYwrite_string),port_,x_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLchrG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_20));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALL2(CHKREF(YruntimeYwrite_char),port_,x_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALLN(CHKREF(YwriteYrecurring_write),4,port_,x_,d_,recur_);
  QRET(T0);
}

FUNCODEDEF(fun_recur_7) {
  ARG(d_, 0);
  ARG(x_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(YruntimeYGE),d_,CHKREF(YwriteYTmax_print_depthT));
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(1),CHKREF(lit_22));
    T0 = T3;
  } else {
    T2 = CALL2(CHKREF(YruntimeYA),d_,YPint((P)1));
    T1 = CALLN(CHKREF(YwriteYdo_display),4,FREEREF(1),x_,T2,FREEREF(0));
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  ARG(x_, 0);
  ARG(port_, 1);
  P recurF1064;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(0,fun_recur_7,2);
  recurF1064 = T2;
  FUNINIT(recurF1064, 2,recurF1064,port_);
  T1 = KCALL2(recurF1064,x_,YPint((P)-1));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YruntimeYrcurry),CHKREF(YwriteYwrite),x_);
  T0 = CALL1(CHKREF(YruntimeYcall_with_string_output_port),T1);
  RET(T0);
}

FUNCODEDEF(fun_recur_10) {
  ARG(d_, 0);
  ARG(x_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(YruntimeYGE),d_,CHKREF(YwriteYTmax_print_depthT));
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(1),CHKREF(lit_25));
    T0 = T3;
  } else {
    T2 = CALL2(CHKREF(YruntimeYA),d_,YPint((P)1));
    T1 = CALLN(CHKREF(YwriteYrecurring_write),4,FREEREF(1),x_,T2,FREEREF(0));
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  ARG(x_, 0);
  ARG(port_, 1);
  P recurF1065;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(0,fun_recur_10,2);
  recurF1065 = T2;
  FUNINIT(recurF1065, 2,recurF1065,port_);
  T1 = KCALL2(recurF1065,x_,YPint((P)-1));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  ARG(x_, 0);
  ARG(port_, 1);
  P T0;
  P a1,a2;
loop:
  CALL2(CHKREF(YwriteYwrite),port_,x_);
  T0 = CALL1(CHKREF(YruntimeYnewline),port_);
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T7 = CALL1(CHKREF(YmacrosYemptyQ),x_);
  if (T7 != YPfalse) {
    T6 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_29));
    T0 = T6;
  } else {
    T5 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLlstG));
    if (T5 != YPfalse) {
      T4 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_28));
      T3 = CALL2(CHKREF(YruntimeYwrite_string),port_,T4);
      T1 = T3;
    } else {
      T2 = CALLN(CHKREF(YwriteYwrite_list),4,port_,x_,d_,recur_);
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_14) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLvecG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_30));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALLN(CHKREF(YwriteYwrite_vector),4,port_,x_,d_,recur_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YruntimeYLmapG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_31));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALLN(CHKREF(YwriteYwrite_map),4,port_,x_,d_,recur_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_16) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  if (x_ != YPfalse) {
    T2 = CALL2(CHKREF(YwriteYwrite_boolean),port_,CHKREF(lit_33));
    T0 = T2;
  } else {
    T1 = CALL2(CHKREF(YwriteYwrite_boolean),port_,CHKREF(lit_32));
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T5 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLsymG));
  if (T5 != YPfalse) {
    T4 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_34));
    T3 = CALL2(CHKREF(YruntimeYwrite_string),port_,T4);
    T0 = T3;
  } else {
    T2 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),x_);
    T1 = CALL2(CHKREF(YruntimeYwrite_string),port_,T2);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T6 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLlocG));
  if (T6 != YPfalse) {
    T5 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_36));
    T4 = CALL2(CHKREF(YruntimeYwrite_string),port_,T5);
    T0 = T4;
  } else {
    CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_35));
    T3 = (P)YPlu(x_);
    T2 = (P)YPib(T3);
    T1 = CALL2(CHKREF(YruntimeYnum_to_str),T2,YPint((P)16));
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLnumG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_37));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALL2(CHKREF(YwriteYwrite_number),port_,x_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLstrG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_19));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALL2(CHKREF(YwriteYwrite_string_literal),port_,x_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLchrG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_20));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALL2(CHKREF(YwriteYwrite_char_literal),port_,x_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  ARG(mumble_, 0);
  ARG(port_, 1);
  P T0;
  P a1,a2;
loop:
  CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)35));
  T0 = CALL2(CHKREF(YwriteYwrite),port_,mumble_);
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  ARG(x_, 0);
  ARG(port_, 1);
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLintG));
  if (T9 != YPfalse) {
    T8 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_42));
    T7 = CALL2(CHKREF(YruntimeYwrite_string),port_,T8);
    T0 = T7;
  } else {
    T6 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLfloG));
    if (T6 != YPfalse) {
      T5 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_41));
      T4 = CALL2(CHKREF(YruntimeYwrite_string),port_,T5);
      T1 = T4;
    } else {
      T3 = CALL2(CHKREF(YruntimeYnum_to_str),x_,YPint((P)10));
      T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  ARG(x_, 0);
  ARG(port_, 1);
  P probeF1066;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YwriteYcharacter_name),x_);
  probeF1066 = T4;
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_44));
  if (probeF1066 != YPfalse) {
    T3 = CALL2(CHKREF(YwriteYwrite),port_,probeF1066);
    T1 = T3;
  } else {
    T2 = CALL2(CHKREF(YruntimeYwrite_char),port_,x_);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  ARG(char_, 0);
  P tmpF1068;
  P assocF1067;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL3(CHKREF(YruntimeYassqn),char_,CHKREF(YreadYDchar_long_names),YPint((P)1));
  assocF1067 = T4;
  tmpF1068 = assocF1067;
  if (tmpF1068 != YPfalse) {
    T3 = CALL1(CHKREF(YruntimeY1st),assocF1067);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_26) {
  ARG(i_, 0);
  P tmpF1070;
  P cF1069;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = CALL2(CHKREF(YruntimeYE),i_,FREEREF(3));
  if (T11 != YPfalse) {
    T10 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(2),YPchr((P)34));
    T0 = T10;
  } else {
    T9 = CALL2(CHKREF(YruntimeYelt),FREEREF(0),i_);
    cF1069 = T9;
    T6 = CALL2(CHKREF(YruntimeYE),cF1069,YPchr((P)92));
    tmpF1070 = T6;
    if (tmpF1070 != YPfalse) {
      T4 = tmpF1070;
    } else {
      T5 = CALL2(CHKREF(YruntimeYE),cF1069,YPchr((P)34));
      T4 = T5;
    }
    T3 = T4;
    if (T3 != YPfalse) {
      T2 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(2),YPchr((P)92));
    } else {
    }
    CALL2(CHKREF(YruntimeYwrite_char),FREEREF(2),cF1069);
    T8 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T8;
    i_ = a1;
    goto loop;
    T1 = T7;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  ARG(x_, 0);
  ARG(port_, 1);
  P loopF1072;
  P lenF1071;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)34));
  T4 = CALL1(CHKREF(YruntimeYlen),x_);
  lenF1071 = T4;
  T3 = FUNSHELL(1,fun_loop_26,4);
  loopF1072 = T3;
  FUNINIT(loopF1072, 4,x_,loopF1072,port_,lenF1071);
  T2 = KCALL1(loopF1072,YPint((P)0));
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_28) {
  ARG(n_, 0);
  ARG(l_, 1);
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = CALL1(CHKREF(YmacrosYemptyQ),l_);
  T8 = CALL1(CHKREF(Ynot),T9);
  if (T8 != YPfalse) {
    T7 = CALL2(CHKREF(YruntimeYGE),n_,CHKREF(YwriteYTmax_print_lengthT));
    if (T7 != YPfalse) {
      T6 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(3),CHKREF(lit_53));
      T1 = T6;
    } else {
      CALL2(CHKREF(YruntimeYwrite_char),FREEREF(3),YPchr((P)32));
      T2 = CALL1(CHKREF(Yhead),l_);
      CALL2(FREEREF(2),T2,FREEREF(1));
      T5 = CALL1(CHKREF(Ytail),l_);
      T4 = CALL2(CHKREF(YruntimeYA),n_,YPint((P)1));
      a1 = T5;
      a2 = T4;
      l_ = a1;
      n_ = a2;
      goto loop;
      T1 = T3;
    }
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P loopF1073;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T9 = CALL1(CHKREF(YwriteYquotationQ),x_);
  if (T9 != YPfalse) {
    CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)39));
    T8 = CALL1(CHKREF(Ytail),x_);
    T7 = CALL1(CHKREF(Yhead),T8);
    T6 = CALL2(recur_,T7,d_);
    T0 = T6;
  } else {
    CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)40));
    T1 = CALL1(CHKREF(Yhead),x_);
    CALL2(recur_,T1,d_);
    T4 = FUNSHELL(1,fun_loop_28,4);
    loopF1073 = T4;
    FUNINIT(loopF1073, 4,loopF1073,d_,recur_,port_);
    T3 = CALL1(CHKREF(Ytail),x_);
    T2 = KCALL2(loopF1073,T3,YPint((P)1));
    T5 = CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)41));
    T0 = T5;
  }
  QRET(T0);
}

FUNCODEDEF(fun_30) {
  ARG(x_, 0);
  P tmpF1076;
  P tmpF1075;
  P tmpF1074;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T13 = CALL2(CHKREF(YisaQ),x_,CHKREF(YLlstG));
  tmpF1074 = T13;
  if (tmpF1074 != YPfalse) {
    T12 = CALL1(CHKREF(Yhead),x_);
    T11 = CALL2(CHKREF(YmacrosYEE),T12,CHKREF(lit_5));
    tmpF1075 = T11;
    if (tmpF1075 != YPfalse) {
      T10 = CALL1(CHKREF(Ytail),x_);
      T9 = CALL2(CHKREF(YisaQ),T10,CHKREF(YLlstG));
      tmpF1076 = T9;
      if (tmpF1076 != YPfalse) {
        T8 = CALL1(CHKREF(Ytail),x_);
        T7 = CALL1(CHKREF(Ytail),T8);
        T6 = CALL1(CHKREF(YmacrosYemptyQ),T7);
        T5 = T6;
      } else {
        T5 = YPfalse;
      }
      T4 = T5;
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
  RET(T0);
}

FUNCODEDEF(fun_loop_31) {
  ARG(i_, 0);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL2(CHKREF(YruntimeYGE),i_,CHKREF(YwriteYTmax_print_lengthT));
  if (T8 != YPfalse) {
    T7 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(4),CHKREF(lit_56));
    T0 = T7;
  } else {
    T6 = CALL2(CHKREF(YruntimeYGE),i_,FREEREF(5));
    T5 = CALL1(CHKREF(Ynot),T6);
    if (T5 != YPfalse) {
      CALL2(CHKREF(YruntimeYwrite_char),FREEREF(4),YPchr((P)32));
      T2 = CALL2(CHKREF(YruntimeYelt),FREEREF(2),i_);
      CALL2(FREEREF(3),T2,FREEREF(1));
      T4 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
      a1 = T4;
      i_ = a1;
      goto loop;
      T1 = T3;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P loopF1078;
  P zF1077;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_57));
  T6 = CALL1(CHKREF(YruntimeYlen),x_);
  zF1077 = T6;
  T5 = CALL2(CHKREF(YruntimeYG),zF1077,YPint((P)0));
  if (T5 != YPfalse) {
    T1 = CALL2(CHKREF(YruntimeYelt),x_,YPint((P)0));
    CALL2(recur_,T1,d_);
    T4 = FUNSHELL(1,fun_loop_31,6);
    loopF1078 = T4;
    FUNINIT(loopF1078, 6,loopF1078,d_,x_,recur_,port_,zF1077);
    T3 = KCALL1(loopF1078,YPint((P)1));
    T2 = T3;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
  T7 = CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)41));
  QRET(T7);
}

FUNCODEDEF(fun_x_1210_33) {
  ARG(x_1206_, 0);
  ARG(x_1208_, 1);
  P tmpF1085;
  P tup33F1084;
  P valF1083;
  P tup33F1082;
  P keyF1081;
  P tup33F1080;
  P iF1079;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T24 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1208_);
  tmpF1085 = T24;
  if (tmpF1085 != YPfalse) {
    T22 = tmpF1085;
  } else {
    T23 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),x_1206_);
    T22 = T23;
  }
  T21 = T22;
  T20 = CALL1(CHKREF(Ynot),T21);
  if (T20 != YPfalse) {
    T19 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),x_1208_);
    iF1079 = T19;
    T18 = CALL2(CHKREF(YruntimeYnow_key),FREEREF(1),x_1206_);
    T17 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(1),x_1206_);
    T16 = CALL2(CHKREF(YmacrosYtup),T18,T17);
    tup33F1080 = T16;
    T15 = CALL1(CHKREF(Yhead),tup33F1080);
    keyF1081 = T15;
    T14 = CALL1(CHKREF(Ytail),tup33F1080);
    tup33F1082 = T14;
    T13 = CALL1(CHKREF(Yhead),tup33F1082);
    valF1083 = T13;
    T12 = CALL1(CHKREF(Ytail),tup33F1082);
    tup33F1084 = T12;
    T8 = CALL2(CHKREF(YruntimeYGE),iF1079,CHKREF(YwriteYTmax_print_lengthT));
    if (T8 != YPfalse) {
      CALL2(CHKREF(YruntimeYwrite_string),FREEREF(5),CHKREF(lit_64));
      T7 = CALL1(FREEREF(6),YPfalse);
    } else {
    }
    CALL2(CHKREF(YruntimeYwrite_char),FREEREF(5),YPchr((P)32));
    CALL2(FREEREF(4),keyF1081,FREEREF(3));
    CALL2(CHKREF(YruntimeYwrite_string),FREEREF(5),CHKREF(lit_63));
    CALL2(FREEREF(4),valF1083,FREEREF(3));
    T11 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),x_1208_);
    T10 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),x_1206_);
    a1 = T11;
    a2 = T10;
    x_1208_ = a1;
    x_1206_ = a2;
    goto loop;
    T6 = T9;
    T5 = T6;
    T4 = T5;
    T3 = T4;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  ARG(blow_, 0);
  P x_1210F1088;
  P x_1207F1087;
  P x_1209F1086;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(YruntimeYfrom),YPint((P)0));
  x_1209F1086 = T7;
  x_1207F1087 = FREEREF(0);
  T6 = FUNSHELL(1,fun_x_1210_33,7);
  x_1210F1088 = T6;
  FUNINIT(x_1210F1088, 7,x_1209F1086,x_1207F1087,x_1210F1088,FREEREF(3),FREEREF(2),FREEREF(1),blow_);
  T5 = CALL1(CHKREF(YruntimeYini_state),x_1209F1086);
  T4 = CALL1(CHKREF(YruntimeYini_state),x_1207F1087);
  T3 = KCALL2(x_1210F1088,T5,T4);
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P ownerF1090;
  P nameF1089;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T10 = CALL1(CHKREF(YwriteYobject_name),x_);
  nameF1089 = T10;
  if (nameF1089 != YPfalse) {
    T9 = CALL1(CHKREF(YwriteYas_binding_name),nameF1089);
    T8 = CALL2(CHKREF(YruntimeYwrite_string),port_,T9);
    T1 = T8;
  } else {
    CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_65));
    T6 = CALL1(CHKREF(Yobject_parents),x_);
    T5 = CALL1(CHKREF(YruntimeY1st),T6);
    T4 = CALL1(CHKREF(YwriteYobject_name),T5);
    ownerF1090 = T4;
    CALL2(CHKREF(YwriteYdisplay),port_,ownerF1090);
    T3 = FUNFAB(fun_34,4,x_,port_,recur_,d_);
    T2 = with_exit(T3);
    T7 = CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)93));
    T1 = T7;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_66));
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_67));
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  ARG(x_, 0);
  P tmpF1094;
  P nameF1093;
  P tmpF1092;
  P tmpF1091;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = (P)YPbinding_name(x_);
  tmpF1091 = T9;
  if (tmpF1091 != YPfalse) {
    T5 = tmpF1091;
  } else {
    tmpF1092 = CHKREF(YwriteYTglo_nameQT);
    if (tmpF1092 != YPfalse) {
      T8 = CALL1(CHKREF(YwriteYenv_object_name),x_);
      T7 = T8;
    } else {
      T7 = YPfalse;
    }
    T6 = T7;
    T5 = T6;
  }
  T4 = T5;
  nameF1093 = T4;
  tmpF1094 = nameF1093;
  if (tmpF1094 != YPfalse) {
    T3 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),nameF1093);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_x_1217_39) {
  ARG(x_1211_, 0);
  ARG(x_1213_, 1);
  ARG(x_1215_, 2);
  P tmpF1099;
  P tmpF1098;
  P iF1097;
  P specF1096;
  P firstQF1095;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T25 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1215_);
  tmpF1098 = T25;
  if (tmpF1098 != YPfalse) {
    T20 = tmpF1098;
  } else {
    T24 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),x_1213_);
    tmpF1099 = T24;
    if (tmpF1099 != YPfalse) {
      T22 = tmpF1099;
    } else {
      T23 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(2),x_1211_);
      T22 = T23;
    }
    T21 = T22;
    T20 = T21;
  }
  T19 = T20;
  T18 = CALL1(CHKREF(Ynot),T19);
  if (T18 != YPfalse) {
    T17 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),x_1215_);
    firstQF1095 = T17;
    T16 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(1),x_1213_);
    specF1096 = T16;
    T15 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(2),x_1211_);
    iF1097 = T15;
    T5 = CALL1(CHKREF(Ynot),firstQF1095);
    if (T5 != YPfalse) {
      T4 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(5),YPchr((P)32));
    } else {
    }
    T10 = CALL1(CHKREF(YmacrosYemptyQ),FREEREF(4));
    if (T10 != YPfalse) {
      T9 = CALL2(CHKREF(YwriteYwrite),FREEREF(5),specF1096);
    } else {
      T8 = CALL2(CHKREF(YruntimeYelt),FREEREF(4),iF1097);
      T7 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),T8);
      T6 = CALLN(CHKREF(YruntimeYformat),4,FREEREF(5),CHKREF(lit_75),T7,specF1096);
    }
    T14 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),x_1215_);
    T13 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),x_1213_);
    T12 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(2),x_1211_);
    a1 = T14;
    a2 = T13;
    a3 = T12;
    x_1215_ = a1;
    x_1213_ = a2;
    x_1211_ = a3;
    goto loop;
    T3 = T11;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  ARG(recur_, 0);
  ARG(x_, 1);
  ARG(port_, 2);
  P x_1217F1107;
  P x_1212F1106;
  P x_1214F1105;
  P x_1216F1104;
  P namesF1103;
  P tmpF1102;
  P valueF1101;
  P namesF1100;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T23 = CALL1(CHKREF(Yfun_names),x_);
  namesF1100 = T23;
  CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)40));
  T13 = CALL1(CHKREF(Yfun_names),x_);
  namesF1103 = T13;
  T12 = CALL2(CHKREF(YruntimeYfirst_then),YPtrue,YPfalse);
  x_1216F1104 = T12;
  T11 = CALL1(CHKREF(Yfun_specs),x_);
  x_1214F1105 = T11;
  T10 = CALL1(CHKREF(YruntimeYfrom),YPint((P)0));
  x_1212F1106 = T10;
  T9 = FUNSHELL(1,fun_x_1217_39,6);
  x_1217F1107 = T9;
  FUNINIT(x_1217F1107, 6,x_1216F1104,x_1214F1105,x_1212F1106,x_1217F1107,namesF1103,port_);
  T8 = CALL1(CHKREF(YruntimeYini_state),x_1216F1104);
  T7 = CALL1(CHKREF(YruntimeYini_state),x_1214F1105);
  T6 = CALL1(CHKREF(YruntimeYini_state),x_1212F1106);
  T5 = KCALL3(x_1217F1107,T8,T7,T6);
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T21 = CALL1(CHKREF(Yfun_value),x_);
  valueF1101 = T21;
  T20 = CALL1(CHKREF(Ynot),valueF1101);
  tmpF1102 = T20;
  if (tmpF1102 != YPfalse) {
    T18 = tmpF1102;
  } else {
    T19 = CALL2(CHKREF(YmacrosYEE),valueF1101,CHKREF(YLanyG));
    T18 = T19;
  }
  T17 = T18;
  T16 = CALL1(CHKREF(Ynot),T17);
  if (T16 != YPfalse) {
    T15 = CALL3(CHKREF(YruntimeYformat),port_,CHKREF(lit_70),valueF1101);
    T14 = T15;
  } else {
    T14 = YPfalse;
  }
  T22 = CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)41));
  T0 = T22;
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  ARG(recur_, 0);
  ARG(name_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P tmpF1109;
  P nameF1108;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_78));
  CALL2(CHKREF(YruntimeYwrite_string),port_,name_);
  T4 = CALL1(CHKREF(Yfun_name),x_);
  nameF1108 = T4;
  tmpF1109 = nameF1108;
  if (tmpF1109 != YPfalse) {
    CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)32));
    T3 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),nameF1108);
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)32));
  CALL3(CHKREF(YwriteYwrite_params),port_,x_,recur_);
  T5 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_77));
  QRET(T5);
}

FUNCODEDEF(fun_42) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLgenG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_80));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALLN(CHKREF(YwriteYwrite_fun_guts),4,port_,x_,CHKREF(lit_79),recur_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLmetG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_82));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALLN(CHKREF(YwriteYwrite_fun_guts),4,port_,x_,CHKREF(lit_81),recur_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_84));
  T0 = CALL1(CHKREF(Yslot_getter),x_);
  CALL2(recur_,T0,d_);
  T1 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_83));
  QRET(T1);
}

FUNCODEDEF(fun_x_1222_45) {
  ARG(x_1218_, 0);
  ARG(x_1220_, 1);
  P tmpF1113;
  P getterF1112;
  P slotF1111;
  P iF1110;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
loop:
  T18 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1220_);
  tmpF1113 = T18;
  if (tmpF1113 != YPfalse) {
    T16 = tmpF1113;
  } else {
    T17 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),x_1218_);
    T16 = T17;
  }
  T15 = T16;
  T14 = CALL1(CHKREF(Ynot),T15);
  if (T14 != YPfalse) {
    T13 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),x_1220_);
    iF1110 = T13;
    T12 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(1),x_1218_);
    slotF1111 = T12;
    T4 = CALL2(CHKREF(YruntimeYGE),iF1110,CHKREF(YwriteYTmax_print_lengthT));
    if (T4 != YPfalse) {
      CALL2(CHKREF(YruntimeYwrite_string),FREEREF(6),CHKREF(lit_90));
      T3 = CALL1(FREEREF(7),YPfalse);
    } else {
    }
    T8 = CALL1(CHKREF(Yslot_getter),slotF1111);
    getterF1112 = T8;
    CALL2(CHKREF(YruntimeYwrite_char),FREEREF(6),YPchr((P)32));
    T5 = CALL1(CHKREF(Yfun_name),getterF1112);
    CALL2(CHKREF(YwriteYdisplay),FREEREF(6),T5);
    CALL2(CHKREF(YruntimeYwrite_string),FREEREF(6),CHKREF(lit_89));
    T7 = CALL1(getterF1112,FREEREF(4));
    T6 = CALL2(FREEREF(5),T7,FREEREF(3));
    T11 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),x_1220_);
    T10 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),x_1218_);
    a1 = T11;
    a2 = T10;
    x_1220_ = a1;
    x_1218_ = a2;
    goto loop;
    T2 = T9;
    T1 = T2;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  ARG(blow_, 0);
  P x_1222F1116;
  P x_1219F1115;
  P x_1221F1114;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(YruntimeYfrom),YPint((P)0));
  x_1221F1114 = T8;
  T7 = CALL1(CHKREF(Yobject_slots),FREEREF(0));
  x_1219F1115 = T7;
  T6 = FUNSHELL(1,fun_x_1222_45,8);
  x_1222F1116 = T6;
  FUNINIT(x_1222F1116, 8,x_1221F1114,x_1219F1115,x_1222F1116,FREEREF(3),FREEREF(0),FREEREF(2),FREEREF(1),blow_);
  T5 = CALL1(CHKREF(YruntimeYini_state),x_1221F1114);
  T4 = CALL1(CHKREF(YruntimeYini_state),x_1219F1115);
  T3 = KCALL2(x_1222F1116,T5,T4);
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P ownerF1118;
  P nameF1117;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T10 = CALL1(CHKREF(YwriteYobject_name),x_);
  nameF1117 = T10;
  if (nameF1117 != YPfalse) {
    T9 = CALL1(CHKREF(YwriteYas_binding_name),nameF1117);
    T8 = CALL2(CHKREF(YruntimeYwrite_string),port_,T9);
    T1 = T8;
  } else {
    T7 = CALL1(CHKREF(Yobject_parents),x_);
    T6 = CALL1(CHKREF(YruntimeY1st),T7);
    T5 = CALL1(CHKREF(YwriteYobject_name),T6);
    ownerF1118 = T5;
    CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_91));
    CALL2(CHKREF(YwriteYdisplay),port_,ownerF1118);
    T3 = FUNFAB(fun_46,4,x_,port_,recur_,d_);
    with_exit(T3);
    T4 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_85));
    T2 = T4;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_92));
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  ARG(c_, 0);
  P x_1230F1126;
  P x_1229F1125;
  P x_1228F1124;
  P x_1227F1123;
  P x_1226F1122;
  P x_1225F1121;
  P x_1224F1120;
  P x_1223F1119;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T50 = BOXVAL(FREEREF(1));
  if (T50 != YPfalse) {
    T48 = CALL1(CHKREF(YruntimeYas_uppercase),c_);
    x_1223F1119 = T48;
    T47 = CALL2(CHKREF(YmacrosYEE),x_1223F1119,YPchr((P)68));
    if (T47 != YPfalse) {
      T46 = CALL2(FREEREF(3),c_,CHKREF(YLnumG));
      T45 = CALL1(CHKREF(YruntimeYnum_to_str),T46);
      T44 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(0),T45);
      T5 = T44;
    } else {
      x_1224F1120 = x_1223F1119;
      T43 = CALL2(CHKREF(YmacrosYEE),x_1224F1120,YPchr((P)66));
      if (T43 != YPfalse) {
        T42 = CALL2(FREEREF(3),c_,CHKREF(YLintG));
        T41 = CALL2(CHKREF(YruntimeYnum_to_str),T42,YPint((P)2));
        T40 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(0),T41);
        T7 = T40;
      } else {
        x_1225F1121 = x_1224F1120;
        T39 = CALL2(CHKREF(YmacrosYEE),x_1225F1121,YPchr((P)79));
        if (T39 != YPfalse) {
          T38 = CALL2(FREEREF(3),c_,CHKREF(YLintG));
          T37 = CALL2(CHKREF(YruntimeYnum_to_str),T38,YPint((P)8));
          T36 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(0),T37);
          T9 = T36;
        } else {
          x_1226F1122 = x_1225F1121;
          T35 = CALL2(CHKREF(YmacrosYEE),x_1226F1122,YPchr((P)88));
          if (T35 != YPfalse) {
            T34 = CALL2(FREEREF(3),c_,CHKREF(YLintG));
            T33 = CALL2(CHKREF(YruntimeYnum_to_str),T34,YPint((P)16));
            T32 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(0),T33);
            T11 = T32;
          } else {
            x_1227F1123 = x_1226F1122;
            T31 = CALL2(CHKREF(YmacrosYEE),x_1227F1123,YPchr((P)67));
            if (T31 != YPfalse) {
              T30 = CALL2(FREEREF(3),c_,CHKREF(YLchrG));
              T29 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(0),T30);
              T13 = T29;
            } else {
              x_1228F1124 = x_1227F1123;
              T28 = CALL2(CHKREF(YmacrosYEE),x_1228F1124,YPchr((P)83));
              if (T28 != YPfalse) {
                T27 = CALL2(FREEREF(3),c_,CHKREF(YLanyG));
                T26 = CALL2(CHKREF(YwriteYdisplay),FREEREF(0),T27);
                T15 = T26;
              } else {
                x_1229F1125 = x_1228F1124;
                T25 = CALL2(CHKREF(YmacrosYEE),x_1229F1125,YPchr((P)61));
                if (T25 != YPfalse) {
                  T24 = CALL2(FREEREF(3),c_,CHKREF(YLanyG));
                  T23 = CALL2(CHKREF(YwriteYwrite),FREEREF(0),T24);
                  T17 = T23;
                } else {
                  x_1230F1126 = x_1229F1125;
                  T22 = CALL2(CHKREF(YmacrosYEE),x_1230F1126,YPchr((P)37));
                  if (T22 != YPfalse) {
                    T21 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(0),YPchr((P)37));
                    T19 = T21;
                  } else {
                    T20 = CALL3(CHKREF(Yerror),CHKREF(lit_98),c_,FREEREF(2));
                    T19 = T20;
                  }
                  T18 = T19;
                  T17 = T18;
                }
                T16 = T17;
                T15 = T16;
              }
              T14 = T15;
              T13 = T14;
            }
            T12 = T13;
            T11 = T12;
          }
          T10 = T11;
          T9 = T10;
        }
        T8 = T9;
        T7 = T8;
      }
      T6 = T7;
      T5 = T6;
    }
    T49 = BOXVAL(FREEREF(1)) = YPfalse;
    T0 = T49;
  } else {
    T4 = CALL2(CHKREF(YmacrosYEE),c_,YPchr((P)37));
    if (T4 != YPfalse) {
      T3 = BOXVAL(FREEREF(1)) = YPtrue;
      T1 = T3;
    } else {
      T2 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(0),c_);
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_arg_50) {
  ARG(class_, 0);
  ARG(char_, 1);
  P tmpF1129;
  P argumentF1128;
  P current_indexF1127;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T14 = BOXVAL(FREEREF(0));
  current_indexF1127 = T14;
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(CHKREF(YruntimeYA),T2,YPint((P)1));
  BOXVAL(FREEREF(0)) = T1;
  T5 = CALL2(CHKREF(YruntimeYL),current_indexF1127,FREEREF(3));
  T4 = CALL1(CHKREF(Ynot),T5);
  if (T4 != YPfalse) {
    T3 = CALL3(CHKREF(Yerror),CHKREF(lit_102),FREEREF(2),FREEREF(1));
  } else {
  }
  T13 = CALL2(CHKREF(YruntimeYelt),FREEREF(1),current_indexF1127);
  argumentF1128 = T13;
  T12 = CALL2(CHKREF(YmacrosYEE),class_,CHKREF(YLanyG));
  tmpF1129 = T12;
  if (tmpF1129 != YPfalse) {
    T10 = tmpF1129;
  } else {
    T11 = CALL2(CHKREF(YisaQ),argumentF1128,class_);
    T10 = T11;
  }
  T9 = T10;
  T8 = CALL1(CHKREF(Ynot),T9);
  if (T8 != YPfalse) {
    T7 = CALLN(CHKREF(Yerror),4,CHKREF(lit_101),char_,class_,argumentF1128);
  } else {
  }
  T6 = argumentF1128;
  T0 = T6;
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  ARG(arguments_, 0);
  ARG(message_, 1);
  ARG(port_, 2);
  P argF1133;
  P num_argumentsF1132;
  P argument_indexF1131;
  P found_percentQF1130;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  found_percentQF1130 = YPfalse;
  found_percentQF1130 = BOXFAB(found_percentQF1130);
  check_type(YPint((P)0),CHKREF(YLintG));
  argument_indexF1131 = YPint((P)0);
  argument_indexF1131 = BOXFAB(argument_indexF1131);
  T13 = CALL1(CHKREF(YruntimeYlen),arguments_);
  num_argumentsF1132 = T13;
  T7 = FUNSHELL(1,fun_arg_50,4);
  argF1133 = T7;
  FUNINIT(argF1133, 4,argument_indexF1131,arguments_,message_,num_argumentsF1132);
  T6 = FUNFAB(fun_49,4,port_,found_percentQF1130,message_,argF1133);
  T5 = CALL2(CHKREF(YruntimeYdo),T6,message_);
  T12 = BOXVAL(found_percentQF1130);
  T11 = CALL1(CHKREF(Ynot),T12);
  T10 = CALL1(CHKREF(Ynot),T11);
  if (T10 != YPfalse) {
    T9 = CALL2(CHKREF(Yerror),CHKREF(lit_96),message_);
    T8 = T9;
  } else {
    T8 = YPfalse;
  }
  T4 = T8;
  T2 = T4;
  T0 = T2;
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  ARG(out_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T2 = CALL1(CHKREF(Ylst),out_);
  T1 = CALL1(CHKREF(Ylst),FREEREF(1));
  T0 = CALLN(CHKREF(YmacrosYcat),4,T2,T1,FREEREF(0),Ynil);
  CALL2(CHKREF(Yapply),CHKREF(YruntimeYformat),T0);
  T3 = CALL1(CHKREF(YruntimeYport_contents),out_);
  QRET(T3);
}

FUNCODEDEF(YruntimeYformat_to_string) {
  ARG(arguments_, 0);
  ARG(message_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = FUNFAB(fun_52,2,arguments_,message_);
  T0 = CALL1(CHKREF(YruntimeYcall_with_string_output_port),T1);
  RET(T0);
}

P YwriteY___main_0___() {
  P T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190;
  P T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174;
  P T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158;
  P T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142;
  P T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126;
  P T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110;
  P T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94;
  P T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78;
  P T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62;
  P T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46;
  P T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  YwriteYTmax_print_depthT = YPint((P)4);
  regsym(&YwriteYTmax_print_depthT,"write","*max-print-depth*");
  YwriteYTmax_print_lengthT = YPint((P)12);
  regsym(&YwriteYTmax_print_lengthT,"write","*max-print-length*");
  lit_0 = YPPsym((P)"as-binding-name");
  lit_1 = YPPsym((P)"name");
  T0 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_0 = YPmet(FUNCODEREF(fun_0),CHKREF(lit_0),T0,ENVNUL);
  T4 = BOUNDP(YwriteYas_binding_name);
  if (T4 != YPfalse) {
    T3 = CHKREF(YwriteYas_binding_name);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_0;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YwriteYas_binding_name = T1;
  regsym(&YwriteYas_binding_name,"write","as-binding-name");
  lit_2 = YPPsym((P)"exp");
  lit_3 = YPPsym((P)"return");
  lit_4 = YPPsym((P)"seq");
  lit_5 = YPPsym((P)"quote");
  lit_6 = YPPsym((P)"write-string");
  lit_7 = YPPsym((P)"==");
  lit_8 = YPPsym((P)"if");
  lit_9 = YPsb((P)"Match Pattern Failure");
  lit_10 = YPPsym((P)"maybe-write-proto-name");
  lit_11 = YPPsym((P)"x-1205");
  lit_12 = YPPsym((P)"args");
  lit_13 = YPPsym((P)"msg");
  T7 = YPsig(YPPlist(2,CHKREF(lit_13),CHKREF(lit_12)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  fun_x_1205_1 = YPmet(FUNCODEREF(fun_x_1205_1),CHKREF(lit_11),T7,ENVNUL);
  T6 = YPsig(YPPlist(1,CHKREF(lit_3)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T6,ENVNUL);
  T5 = YPsig(YPPlist(1,CHKREF(lit_2)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_3 = YPmet(FUNCODEREF(fun_3),YPfalse,T5,ENVNUL);
  T8 = fun_3;
  YPmacro(YPPsym((P)"write"),YPPsym((P)"maybe-write-proto-name"),T8);
  lit_14 = YPPsym((P)"do-display");
  lit_15 = YPPsym((P)"recur");
  lit_16 = YPPsym((P)"d");
  lit_17 = YPPsym((P)"x");
  lit_18 = YPPsym((P)"port");
  lit_19 = YPPsym((P)"<str>");
  T9 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLstrG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_4 = YPmet(FUNCODEREF(fun_4),CHKREF(lit_14),T9,ENVNUL);
  T13 = BOUNDP(YwriteYdo_display);
  if (T13 != YPfalse) {
    T12 = CHKREF(YwriteYdo_display);
  } else {
    T12 = YPfalse;
  }
  T11 = fun_4;
  T10 = CALL2(CHKREF(YPdefine_method),T12,T11);
  YwriteYdo_display = T10;
  regsym(&YwriteYdo_display,"write","do-display");
  lit_20 = YPPsym((P)"<chr>");
  T14 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLchrG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_5 = YPmet(FUNCODEREF(fun_5),CHKREF(lit_14),T14,ENVNUL);
  T18 = BOUNDP(YwriteYdo_display);
  if (T18 != YPfalse) {
    T17 = CHKREF(YwriteYdo_display);
  } else {
    T17 = YPfalse;
  }
  T16 = fun_5;
  T15 = CALL2(CHKREF(YPdefine_method),T17,T16);
  YwriteYdo_display = T15;
  regsym(&YwriteYdo_display,"write","do-display");
  T19 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_6 = YPmet(FUNCODEREF(fun_6),CHKREF(lit_14),T19,ENVNUL);
  T23 = BOUNDP(YwriteYdo_display);
  if (T23 != YPfalse) {
    T22 = CHKREF(YwriteYdo_display);
  } else {
    T22 = YPfalse;
  }
  T21 = fun_6;
  T20 = CALL2(CHKREF(YPdefine_method),T22,T21);
  YwriteYdo_display = T20;
  regsym(&YwriteYdo_display,"write","do-display");
  lit_21 = YPPsym((P)"display");
  lit_22 = YPsb((P)"*");
  T25 = YPsig(YPPlist(2,CHKREF(lit_17),CHKREF(lit_16)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_recur_7 = YPmet(FUNCODEREF(fun_recur_7),CHKREF(lit_15),T25,ENVNUL);
  T24 = YPsig(YPPlist(2,CHKREF(lit_18),CHKREF(lit_17)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_8 = YPmet(FUNCODEREF(fun_8),CHKREF(lit_21),T24,ENVNUL);
  T29 = BOUNDP(YwriteYdisplay);
  if (T29 != YPfalse) {
    T28 = CHKREF(YwriteYdisplay);
  } else {
    T28 = YPfalse;
  }
  T27 = fun_8;
  T26 = CALL2(CHKREF(YPdefine_method),T28,T27);
  YwriteYdisplay = T26;
  regsym(&YwriteYdisplay,"write","display");
  lit_23 = YPPsym((P)"write-to-string");
  T30 = YPsig(YPPlist(1,CHKREF(lit_17)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_9 = YPmet(FUNCODEREF(fun_9),CHKREF(lit_23),T30,ENVNUL);
  T34 = BOUNDP(YwriteYwrite_to_string);
  if (T34 != YPfalse) {
    T33 = CHKREF(YwriteYwrite_to_string);
  } else {
    T33 = YPfalse;
  }
  T32 = fun_9;
  T31 = CALL2(CHKREF(YPdefine_method),T33,T32);
  YwriteYwrite_to_string = T31;
  regsym(&YwriteYwrite_to_string,"write","write-to-string");
  lit_24 = YPPsym((P)"write");
  lit_25 = YPsb((P)"*");
  T36 = YPsig(YPPlist(2,CHKREF(lit_17),CHKREF(lit_16)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_recur_10 = YPmet(FUNCODEREF(fun_recur_10),CHKREF(lit_15),T36,ENVNUL);
  T35 = YPsig(YPPlist(2,CHKREF(lit_18),CHKREF(lit_17)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_11 = YPmet(FUNCODEREF(fun_11),CHKREF(lit_24),T35,ENVNUL);
  T40 = BOUNDP(YwriteYwrite);
  if (T40 != YPfalse) {
    T39 = CHKREF(YwriteYwrite);
  } else {
    T39 = YPfalse;
  }
  T38 = fun_11;
  T37 = CALL2(CHKREF(YPdefine_method),T39,T38);
  YwriteYwrite = T37;
  regsym(&YwriteYwrite,"write","write");
  lit_26 = YPPsym((P)"writeln");
  T41 = YPsig(YPPlist(2,CHKREF(lit_18),CHKREF(lit_17)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_12 = YPmet(FUNCODEREF(fun_12),CHKREF(lit_26),T41,ENVNUL);
  T45 = BOUNDP(YwriteYwriteln);
  if (T45 != YPfalse) {
    T44 = CHKREF(YwriteYwriteln);
  } else {
    T44 = YPfalse;
  }
  T43 = fun_12;
  T42 = CALL2(CHKREF(YPdefine_method),T44,T43);
  YwriteYwriteln = T42;
  regsym(&YwriteYwriteln,"write","writeln");
  lit_27 = YPPsym((P)"recurring-write");
  lit_28 = YPPsym((P)"<lst>");
  lit_29 = YPsb((P)"()");
  T46 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLlstG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_13 = YPmet(FUNCODEREF(fun_13),CHKREF(lit_27),T46,ENVNUL);
  T50 = BOUNDP(YwriteYrecurring_write);
  if (T50 != YPfalse) {
    T49 = CHKREF(YwriteYrecurring_write);
  } else {
    T49 = YPfalse;
  }
  T48 = fun_13;
  T47 = CALL2(CHKREF(YPdefine_method),T49,T48);
  YwriteYrecurring_write = T47;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_30 = YPPsym((P)"<vec>");
  T51 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLvecG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_14 = YPmet(FUNCODEREF(fun_14),CHKREF(lit_27),T51,ENVNUL);
  T55 = BOUNDP(YwriteYrecurring_write);
  if (T55 != YPfalse) {
    T54 = CHKREF(YwriteYrecurring_write);
  } else {
    T54 = YPfalse;
  }
  T53 = fun_14;
  T52 = CALL2(CHKREF(YPdefine_method),T54,T53);
  YwriteYrecurring_write = T52;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_31 = YPPsym((P)"<map>");
  T56 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YruntimeYLmapG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_15 = YPmet(FUNCODEREF(fun_15),CHKREF(lit_27),T56,ENVNUL);
  T60 = BOUNDP(YwriteYrecurring_write);
  if (T60 != YPfalse) {
    T59 = CHKREF(YwriteYrecurring_write);
  } else {
    T59 = YPfalse;
  }
  T58 = fun_15;
  T57 = CALL2(CHKREF(YPdefine_method),T59,T58);
  YwriteYrecurring_write = T57;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_32 = YPPsym((P)"f");
  lit_33 = YPPsym((P)"t");
  T61 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLlogG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_16 = YPmet(FUNCODEREF(fun_16),CHKREF(lit_27),T61,ENVNUL);
  T65 = BOUNDP(YwriteYrecurring_write);
  if (T65 != YPfalse) {
    T64 = CHKREF(YwriteYrecurring_write);
  } else {
    T64 = YPfalse;
  }
  T63 = fun_16;
  T62 = CALL2(CHKREF(YPdefine_method),T64,T63);
  YwriteYrecurring_write = T62;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_34 = YPPsym((P)"<sym>");
  T66 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLsymG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_17 = YPmet(FUNCODEREF(fun_17),CHKREF(lit_27),T66,ENVNUL);
  T70 = BOUNDP(YwriteYrecurring_write);
  if (T70 != YPfalse) {
    T69 = CHKREF(YwriteYrecurring_write);
  } else {
    T69 = YPfalse;
  }
  T68 = fun_17;
  T67 = CALL2(CHKREF(YPdefine_method),T69,T68);
  YwriteYrecurring_write = T67;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_35 = YPsb((P)"&0x");
  lit_36 = YPPsym((P)"<loc>");
  T71 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLlocG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_18 = YPmet(FUNCODEREF(fun_18),CHKREF(lit_27),T71,ENVNUL);
  T75 = BOUNDP(YwriteYrecurring_write);
  if (T75 != YPfalse) {
    T74 = CHKREF(YwriteYrecurring_write);
  } else {
    T74 = YPfalse;
  }
  T73 = fun_18;
  T72 = CALL2(CHKREF(YPdefine_method),T74,T73);
  YwriteYrecurring_write = T72;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_37 = YPsb((P)"<num>");
  T76 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLnumG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_19 = YPmet(FUNCODEREF(fun_19),CHKREF(lit_27),T76,ENVNUL);
  T80 = BOUNDP(YwriteYrecurring_write);
  if (T80 != YPfalse) {
    T79 = CHKREF(YwriteYrecurring_write);
  } else {
    T79 = YPfalse;
  }
  T78 = fun_19;
  T77 = CALL2(CHKREF(YPdefine_method),T79,T78);
  YwriteYrecurring_write = T77;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  T81 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLstrG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_20 = YPmet(FUNCODEREF(fun_20),CHKREF(lit_27),T81,ENVNUL);
  T85 = BOUNDP(YwriteYrecurring_write);
  if (T85 != YPfalse) {
    T84 = CHKREF(YwriteYrecurring_write);
  } else {
    T84 = YPfalse;
  }
  T83 = fun_20;
  T82 = CALL2(CHKREF(YPdefine_method),T84,T83);
  YwriteYrecurring_write = T82;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  T86 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLchrG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_21 = YPmet(FUNCODEREF(fun_21),CHKREF(lit_27),T86,ENVNUL);
  T90 = BOUNDP(YwriteYrecurring_write);
  if (T90 != YPfalse) {
    T89 = CHKREF(YwriteYrecurring_write);
  } else {
    T89 = YPfalse;
  }
  T88 = fun_21;
  T87 = CALL2(CHKREF(YPdefine_method),T89,T88);
  YwriteYrecurring_write = T87;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_38 = YPPsym((P)"write-boolean");
  lit_39 = YPPsym((P)"mumble");
  T91 = YPsig(YPPlist(2,CHKREF(lit_18),CHKREF(lit_39)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_22 = YPmet(FUNCODEREF(fun_22),CHKREF(lit_38),T91,ENVNUL);
  T95 = BOUNDP(YwriteYwrite_boolean);
  if (T95 != YPfalse) {
    T94 = CHKREF(YwriteYwrite_boolean);
  } else {
    T94 = YPfalse;
  }
  T93 = fun_22;
  T92 = CALL2(CHKREF(YPdefine_method),T94,T93);
  YwriteYwrite_boolean = T92;
  regsym(&YwriteYwrite_boolean,"write","write-boolean");
  lit_40 = YPPsym((P)"write-number");
  lit_41 = YPPsym((P)"<flo>");
  lit_42 = YPPsym((P)"<int>");
  T96 = YPsig(YPPlist(2,CHKREF(lit_18),CHKREF(lit_17)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_23 = YPmet(FUNCODEREF(fun_23),CHKREF(lit_40),T96,ENVNUL);
  T100 = BOUNDP(YwriteYwrite_number);
  if (T100 != YPfalse) {
    T99 = CHKREF(YwriteYwrite_number);
  } else {
    T99 = YPfalse;
  }
  T98 = fun_23;
  T97 = CALL2(CHKREF(YPdefine_method),T99,T98);
  YwriteYwrite_number = T97;
  regsym(&YwriteYwrite_number,"write","write-number");
  lit_43 = YPPsym((P)"write-char-literal");
  lit_44 = YPsb((P)"#\\");
  T101 = YPsig(YPPlist(2,CHKREF(lit_18),CHKREF(lit_17)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_24 = YPmet(FUNCODEREF(fun_24),CHKREF(lit_43),T101,ENVNUL);
  T105 = BOUNDP(YwriteYwrite_char_literal);
  if (T105 != YPfalse) {
    T104 = CHKREF(YwriteYwrite_char_literal);
  } else {
    T104 = YPfalse;
  }
  T103 = fun_24;
  T102 = CALL2(CHKREF(YPdefine_method),T104,T103);
  YwriteYwrite_char_literal = T102;
  regsym(&YwriteYwrite_char_literal,"write","write-char-literal");
  lit_45 = YPPsym((P)"character-name");
  lit_46 = YPPsym((P)"char");
  T106 = YPsig(YPPlist(1,CHKREF(lit_46)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_25 = YPmet(FUNCODEREF(fun_25),CHKREF(lit_45),T106,ENVNUL);
  T110 = BOUNDP(YwriteYcharacter_name);
  if (T110 != YPfalse) {
    T109 = CHKREF(YwriteYcharacter_name);
  } else {
    T109 = YPfalse;
  }
  T108 = fun_25;
  T107 = CALL2(CHKREF(YPdefine_method),T109,T108);
  YwriteYcharacter_name = T107;
  regsym(&YwriteYcharacter_name,"write","character-name");
  lit_47 = YPPsym((P)"write-string-literal");
  lit_48 = YPPsym((P)"loop");
  lit_49 = YPPsym((P)"i");
  T112 = YPsig(YPPlist(1,CHKREF(lit_49)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_26 = YPmet(FUNCODEREF(fun_loop_26),CHKREF(lit_48),T112,ENVNUL);
  T111 = YPsig(YPPlist(2,CHKREF(lit_18),CHKREF(lit_17)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_27 = YPmet(FUNCODEREF(fun_27),CHKREF(lit_47),T111,ENVNUL);
  T116 = BOUNDP(YwriteYwrite_string_literal);
  if (T116 != YPfalse) {
    T115 = CHKREF(YwriteYwrite_string_literal);
  } else {
    T115 = YPfalse;
  }
  T114 = fun_27;
  T113 = CALL2(CHKREF(YPdefine_method),T115,T114);
  YwriteYwrite_string_literal = T113;
  regsym(&YwriteYwrite_string_literal,"write","write-string-literal");
  lit_50 = YPPsym((P)"write-list");
  lit_51 = YPPsym((P)"n");
  lit_52 = YPPsym((P)"l");
  lit_53 = YPsb((P)" ...");
  T118 = YPsig(YPPlist(2,CHKREF(lit_52),CHKREF(lit_51)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_28 = YPmet(FUNCODEREF(fun_loop_28),CHKREF(lit_48),T118,ENVNUL);
  T117 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLlstG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_29 = YPmet(FUNCODEREF(fun_29),CHKREF(lit_50),T117,ENVNUL);
  T122 = BOUNDP(YwriteYwrite_list);
  if (T122 != YPfalse) {
    T121 = CHKREF(YwriteYwrite_list);
  } else {
    T121 = YPfalse;
  }
  T120 = fun_29;
  T119 = CALL2(CHKREF(YPdefine_method),T121,T120);
  YwriteYwrite_list = T119;
  regsym(&YwriteYwrite_list,"write","write-list");
  lit_54 = YPPsym((P)"quotation?");
  T123 = YPsig(YPPlist(1,CHKREF(lit_17)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_30 = YPmet(FUNCODEREF(fun_30),CHKREF(lit_54),T123,ENVNUL);
  T127 = BOUNDP(YwriteYquotationQ);
  if (T127 != YPfalse) {
    T126 = CHKREF(YwriteYquotationQ);
  } else {
    T126 = YPfalse;
  }
  T125 = fun_30;
  T124 = CALL2(CHKREF(YPdefine_method),T126,T125);
  YwriteYquotationQ = T124;
  regsym(&YwriteYquotationQ,"write","quotation?");
  lit_55 = YPPsym((P)"write-vector");
  lit_56 = YPsb((P)" ...");
  lit_57 = YPsb((P)"#(");
  T129 = YPsig(YPPlist(1,CHKREF(lit_49)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_31 = YPmet(FUNCODEREF(fun_loop_31),CHKREF(lit_48),T129,ENVNUL);
  T128 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLvecG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_32 = YPmet(FUNCODEREF(fun_32),CHKREF(lit_55),T128,ENVNUL);
  T133 = BOUNDP(YwriteYwrite_vector);
  if (T133 != YPfalse) {
    T132 = CHKREF(YwriteYwrite_vector);
  } else {
    T132 = YPfalse;
  }
  T131 = fun_32;
  T130 = CALL2(CHKREF(YPdefine_method),T132,T131);
  YwriteYwrite_vector = T130;
  regsym(&YwriteYwrite_vector,"write","write-vector");
  lit_58 = YPPsym((P)"write-map");
  lit_59 = YPPsym((P)"blow");
  lit_60 = YPPsym((P)"x-1210");
  lit_61 = YPPsym((P)"x-1206");
  lit_62 = YPPsym((P)"x-1208");
  lit_63 = YPsb((P)": ");
  lit_64 = YPsb((P)" ...");
  lit_65 = YPsb((P)"#[");
  T136 = YPsig(YPPlist(2,CHKREF(lit_62),CHKREF(lit_61)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_x_1210_33 = YPmet(FUNCODEREF(fun_x_1210_33),CHKREF(lit_60),T136,ENVNUL);
  T135 = YPsig(YPPlist(1,CHKREF(lit_59)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T135,ENVNUL);
  T134 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YruntimeYLmapG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_35 = YPmet(FUNCODEREF(fun_35),CHKREF(lit_58),T134,ENVNUL);
  T140 = BOUNDP(YwriteYwrite_map);
  if (T140 != YPfalse) {
    T139 = CHKREF(YwriteYwrite_map);
  } else {
    T139 = YPfalse;
  }
  T138 = fun_35;
  T137 = CALL2(CHKREF(YPdefine_method),T139,T138);
  YwriteYwrite_map = T137;
  regsym(&YwriteYwrite_map,"write","write-map");
  lit_66 = YPsb((P)"#{Input-port}");
  T141 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YruntimeYLinput_portG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_36 = YPmet(FUNCODEREF(fun_36),CHKREF(lit_27),T141,ENVNUL);
  T145 = BOUNDP(YwriteYrecurring_write);
  if (T145 != YPfalse) {
    T144 = CHKREF(YwriteYrecurring_write);
  } else {
    T144 = YPfalse;
  }
  T143 = fun_36;
  T142 = CALL2(CHKREF(YPdefine_method),T144,T143);
  YwriteYrecurring_write = T142;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_67 = YPsb((P)"#{Output-port}");
  T146 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YruntimeYLoutput_portG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_37 = YPmet(FUNCODEREF(fun_37),CHKREF(lit_27),T146,ENVNUL);
  T150 = BOUNDP(YwriteYrecurring_write);
  if (T150 != YPfalse) {
    T149 = CHKREF(YwriteYrecurring_write);
  } else {
    T149 = YPfalse;
  }
  T148 = fun_37;
  T147 = CALL2(CHKREF(YPdefine_method),T149,T148);
  YwriteYrecurring_write = T147;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  YwriteYTglo_nameQT = YPfalse;
  regsym(&YwriteYTglo_nameQT,"write","*glo-name?*");
  lit_68 = YPPsym((P)"object-name");
  T151 = YPsig(YPPlist(1,CHKREF(lit_17)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_38 = YPmet(FUNCODEREF(fun_38),CHKREF(lit_68),T151,ENVNUL);
  T155 = BOUNDP(YwriteYobject_name);
  if (T155 != YPfalse) {
    T154 = CHKREF(YwriteYobject_name);
  } else {
    T154 = YPfalse;
  }
  T153 = fun_38;
  T152 = CALL2(CHKREF(YPdefine_method),T154,T153);
  YwriteYobject_name = T152;
  regsym(&YwriteYobject_name,"write","object-name");
  lit_69 = YPPsym((P)"write-params");
  lit_70 = YPsb((P)" => %=");
  lit_71 = YPPsym((P)"x-1217");
  lit_72 = YPPsym((P)"x-1211");
  lit_73 = YPPsym((P)"x-1213");
  lit_74 = YPPsym((P)"x-1215");
  lit_75 = YPsb((P)"(%s %=)");
  T157 = YPsig(YPPlist(3,CHKREF(lit_74),CHKREF(lit_73),CHKREF(lit_72)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_x_1217_39 = YPmet(FUNCODEREF(fun_x_1217_39),CHKREF(lit_71),T157,ENVNUL);
  T156 = YPsig(YPPlist(3,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_15)),YPPlist(3,CHKREF(YruntimeYLoutput_portG),CHKREF(YLfunG),CHKREF(YLfunG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_40 = YPmet(FUNCODEREF(fun_40),CHKREF(lit_69),T156,ENVNUL);
  T161 = BOUNDP(YwriteYwrite_params);
  if (T161 != YPfalse) {
    T160 = CHKREF(YwriteYwrite_params);
  } else {
    T160 = YPfalse;
  }
  T159 = fun_40;
  T158 = CALL2(CHKREF(YPdefine_method),T160,T159);
  YwriteYwrite_params = T158;
  regsym(&YwriteYwrite_params,"write","write-params");
  lit_76 = YPPsym((P)"write-fun-guts");
  lit_77 = YPsb((P)"}");
  lit_78 = YPsb((P)"#{");
  T162 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_1),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLfunG),CHKREF(YLstrG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_41 = YPmet(FUNCODEREF(fun_41),CHKREF(lit_76),T162,ENVNUL);
  T166 = BOUNDP(YwriteYwrite_fun_guts);
  if (T166 != YPfalse) {
    T165 = CHKREF(YwriteYwrite_fun_guts);
  } else {
    T165 = YPfalse;
  }
  T164 = fun_41;
  T163 = CALL2(CHKREF(YPdefine_method),T165,T164);
  YwriteYwrite_fun_guts = T163;
  regsym(&YwriteYwrite_fun_guts,"write","write-fun-guts");
  lit_79 = YPsb((P)"Gen");
  lit_80 = YPPsym((P)"<gen>");
  T167 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLgenG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_42 = YPmet(FUNCODEREF(fun_42),CHKREF(lit_27),T167,ENVNUL);
  T171 = BOUNDP(YwriteYrecurring_write);
  if (T171 != YPfalse) {
    T170 = CHKREF(YwriteYrecurring_write);
  } else {
    T170 = YPfalse;
  }
  T169 = fun_42;
  T168 = CALL2(CHKREF(YPdefine_method),T170,T169);
  YwriteYrecurring_write = T168;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_81 = YPsb((P)"Met");
  lit_82 = YPPsym((P)"<met>");
  T172 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLmetG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_43 = YPmet(FUNCODEREF(fun_43),CHKREF(lit_27),T172,ENVNUL);
  T176 = BOUNDP(YwriteYrecurring_write);
  if (T176 != YPfalse) {
    T175 = CHKREF(YwriteYrecurring_write);
  } else {
    T175 = YPfalse;
  }
  T174 = fun_43;
  T173 = CALL2(CHKREF(YPdefine_method),T175,T174);
  YwriteYrecurring_write = T173;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_83 = YPsb((P)"}");
  lit_84 = YPsb((P)"#{Slot ");
  T177 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLslotG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_44 = YPmet(FUNCODEREF(fun_44),CHKREF(lit_27),T177,ENVNUL);
  T181 = BOUNDP(YwriteYrecurring_write);
  if (T181 != YPfalse) {
    T180 = CHKREF(YwriteYrecurring_write);
  } else {
    T180 = YPfalse;
  }
  T179 = fun_44;
  T178 = CALL2(CHKREF(YPdefine_method),T180,T179);
  YwriteYrecurring_write = T178;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_85 = YPsb((P)"}");
  lit_86 = YPPsym((P)"x-1222");
  lit_87 = YPPsym((P)"x-1218");
  lit_88 = YPPsym((P)"x-1220");
  lit_89 = YPsb((P)": ");
  lit_90 = YPsb((P)" ...");
  lit_91 = YPsb((P)"#{");
  T184 = YPsig(YPPlist(2,CHKREF(lit_88),CHKREF(lit_87)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_x_1222_45 = YPmet(FUNCODEREF(fun_x_1222_45),CHKREF(lit_86),T184,ENVNUL);
  T183 = YPsig(YPPlist(1,CHKREF(lit_59)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T183,ENVNUL);
  T182 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_47 = YPmet(FUNCODEREF(fun_47),CHKREF(lit_27),T182,ENVNUL);
  T188 = BOUNDP(YwriteYrecurring_write);
  if (T188 != YPfalse) {
    T187 = CHKREF(YwriteYrecurring_write);
  } else {
    T187 = YPfalse;
  }
  T186 = fun_47;
  T185 = CALL2(CHKREF(YPdefine_method),T187,T186);
  YwriteYrecurring_write = T185;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_92 = YPsb((P)"#{End-of-file}");
  T190 = CALL0(CHKREF(YruntimeYeof_object));
  T189 = YPsig(YPPlist(4,CHKREF(lit_18),CHKREF(lit_17),CHKREF(lit_16),CHKREF(lit_15)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),T190,CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_48 = YPmet(FUNCODEREF(fun_48),CHKREF(lit_27),T189,ENVNUL);
  T194 = BOUNDP(YwriteYrecurring_write);
  if (T194 != YPfalse) {
    T193 = CHKREF(YwriteYrecurring_write);
  } else {
    T193 = YPfalse;
  }
  T192 = fun_48;
  T191 = CALL2(CHKREF(YPdefine_method),T193,T192);
  YwriteYrecurring_write = T191;
  regsym(&YwriteYrecurring_write,"write","recurring-write");
  lit_93 = YPPsym((P)"format");
  lit_94 = YPPsym((P)"arguments");
  lit_95 = YPPsym((P)"message");
  lit_96 = YPsb((P)"Incomplete format directive in \"%s\"");
  lit_97 = YPPsym((P)"c");
  lit_98 = YPsb((P)"Invalid format directive '%s' in \"%s\"");
  lit_99 = YPPsym((P)"arg");
  lit_100 = YPPsym((P)"class");
  lit_101 = YPsb((P)"Format argument for directive '%%%c' not of class %s: %=");
  lit_102 = YPsb((P)"Too few arguments for format string %=: %=");
  T197 = YPsig(YPPlist(1,CHKREF(lit_97)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T197,ENVNUL);
  T196 = YPsig(YPPlist(2,CHKREF(lit_46),CHKREF(lit_100)),YPPlist(2,CHKREF(YLchrG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_arg_50 = YPmet(FUNCODEREF(fun_arg_50),CHKREF(lit_99),T196,ENVNUL);
  T195 = YPsig(YPPlist(3,CHKREF(lit_18),CHKREF(lit_95),CHKREF(lit_94)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLstrG)),YPtrue,YPint((P)2),CHKREF(YLanyG));
  fun_51 = YPmet(FUNCODEREF(fun_51),CHKREF(lit_93),T195,ENVNUL);
  T201 = BOUNDP(YruntimeYformat);
  if (T201 != YPfalse) {
    T200 = CHKREF(YruntimeYformat);
  } else {
    T200 = YPfalse;
  }
  T199 = fun_51;
  T198 = CALL2(CHKREF(YPdefine_method),T200,T199);
  YruntimeYformat = T198;
  regsym(&YruntimeYformat,"runtime","format");
  lit_103 = YPPsym((P)"format-to-string");
  lit_104 = YPPsym((P)"out");
  T203 = YPsig(YPPlist(1,CHKREF(lit_104)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T203,ENVNUL);
  T202 = YPsig(YPPlist(2,CHKREF(lit_95),CHKREF(lit_94)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLstrG));
  YruntimeYformat_to_string = YPmet(FUNCODEREF(YruntimeYformat_to_string),CHKREF(lit_103),T202,ENVNUL);
  T204 = YruntimeYformat_to_string;
  YruntimeYformat_to_string = T204;
  regsym(&YruntimeYformat_to_string,"runtime","format-to-string");
  if (YPfalse != YPfalse) {
  } else {
  }
  T205 = YPfalse;
  return T205;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_read;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_runtime},
  {&module_info_read},
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
  {"read-from-string", &module_info_read, "read-from-string"},
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
  {"$char-long-names", &module_info_read, "$char-long-names"},
  {"do-keyed", &module_info_runtime, "do-keyed"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"write-char-literal", &YwriteYwrite_char_literal},
  {"*max-print-length*", &YwriteYTmax_print_lengthT},
  {"write-boolean", &YwriteYwrite_boolean},
  {"write", &YwriteYwrite},
  {"as-binding-name", &YwriteYas_binding_name},
  {"env-object-name", &YwriteYenv_object_name},
  {"write-to-string", &YwriteYwrite_to_string},
  {"write-vector", &YwriteYwrite_vector},
  {"quotation?", &YwriteYquotationQ},
  {"display", &YwriteYdisplay},
  {"write-map", &YwriteYwrite_map},
  {"*glo-name?*", &YwriteYTglo_nameQT},
  {"write-params", &YwriteYwrite_params},
  {"maybe-write-proto-name", NULL},
  {"write-string-literal", &YwriteYwrite_string_literal},
  {"write-number", &YwriteYwrite_number},
  {"writeln", &YwriteYwriteln},
  {"*max-print-depth*", &YwriteYTmax_print_depthT},
  {"object-name", &YwriteYobject_name},
  {"write-fun-guts", &YwriteYwrite_fun_guts},
  {"do-display", &YwriteYdo_display},
  {"---main-0---", NULL},
  {"character-name", &YwriteYcharacter_name},
  {"write-list", &YwriteYwrite_list},
  {"recurring-write", &YwriteYrecurring_write},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"write", "write"},
  {"env-object-name", "env-object-name"},
  {"write-to-string", "write-to-string"},
  {"format", "format"},
  {"display", "display"},
  {"writeln", "writeln"},
  {"object-name", "object-name"},
  {"format-to-string", "format-to-string"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_write;
MODULE_INFO module_info_write = {
  "write",
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
extern void load_module_read (void);

/* EXPRESSION: */

extern void load_module_write (void);

void load_module_write (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_runtime();
  load_module_read();

  (P)YwriteY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
