/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: write */

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
DEF(YwriteYwrite,"write","write");
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
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYin,"runtime","in");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYas_lowercase,"runtime","as-lowercase");
EXT(YLlogG,"boot","<log>");
EXT(YmacrosYtup,"macros","tup");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(Yfun_specs,"boot","fun-specs");
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
EXT(YruntimeYLstring_portG,"runtime","<string-port>");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYLportG,"runtime","<port>");
EXT(YLanyG,"boot","<any>");
EXT(YruntimeYpop,"runtime","pop");
EXT(YruntimeYvec,"runtime","vec");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(YPdefine_method,"boot","%define-method");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYassoc_value,"runtime","assoc-value");
DEF(YwriteYwriteln,"write","writeln");
EXT(YruntimeYLlistG,"runtime","<list>");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YruntimeYassocq,"runtime","assocq");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYalter,"runtime","alter");
EXT(YruntimeYpick,"runtime","pick");
EXT(YruntimeYLstr_tabG,"runtime","<str-tab>");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Ytype_object,"boot","type-object");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeY2nd,"runtime","2nd");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(Yslot_init,"boot","slot-init");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYpos,"runtime","pos");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Ynot,"boot","not");
EXT(YruntimeYmin,"runtime","min");
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
DEF(YwriteYdo_display,"write","do-display");
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
EXT(Yslot_owner,"boot","slot-owner");
EXT(YmacrosYpair,"macros","pair");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYlocative_value,"runtime","locative-value");
DEF(YwriteYwrite_vector,"write","write-vector");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YruntimeYnegQ,"runtime","neg?");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYrcurry,"runtime","rcurry");
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
DEF(YwriteYwrite_fun_guts,"write","write-fun-guts");
EXT(YruntimeYfrom_above,"runtime","from-above");
EXT(YruntimeYwrite_char,"runtime","write-char");
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
DEF(YwriteYwrite_char_literal,"write","write-char-literal");
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
DEF(YwriteYas_binding_name,"write","as-binding-name");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YruntimeYmax,"runtime","max");
EXT(YruntimeYeof_object,"runtime","eof-object");
DEF(YwriteYquotationQ,"write","quotation?");
EXT(YruntimeYfloor,"runtime","floor");
DEF(YwriteYrecurring_write,"write","recurring-write");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
DEF(YwriteYdisplay,"write","display");
EXT(Yclass_slots,"boot","class-slots");
EXT(YruntimeYmodulo,"runtime","modulo");
EXT(YruntimeYdefault,"runtime","default");
DEF(YwriteYwrite_string_literal,"write","write-string-literal");
EXT(YLflatG,"boot","<flat>");
EXT(YruntimeYfind_key,"runtime","find-key");
EXT(YruntimeYreduceA,"runtime","reduce+");
EXT(YLmetG,"boot","<met>");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYempty,"runtime","empty");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(Ylst,"boot","lst");
EXT(YLtupG,"boot","<tup>");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(Yfab_class,"boot","fab-class");
EXT(YruntimeYlogior,"runtime","logior");
EXT(YreadYDchar_long_names,"read","$char-long-names");
EXT(Yfun_value,"boot","fun-value");
EXT(YruntimeYLassocsG,"runtime","<assocs>");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYTprint_baseT,"runtime","*print-base*");
DEF(YwriteYTmax_print_lengthT,"write","*max-print-length*");
EXT(Ytype_elts,"boot","type-elts");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYE,"runtime","=");
EXT(YruntimeYmap_keyed,"runtime","map-keyed");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YLlstG,"boot","<lst>");
DEF(YwriteYwrite_map,"write","write-map");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YPisa,"boot","%isa");
EXT(YruntimeYLstring_input_portG,"runtime","<string-input-port>");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYL,"runtime","<");
EXT(YLfunG,"boot","<fun>");
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
DEF(YwriteYwrite_list,"write","write-list");
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYlast,"runtime","last");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYtL,"runtime","t<");
EXT(YLcolG,"boot","<col>");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
DEF(YwriteYTmax_print_depthT,"write","*max-print-depth*");
EXT(Yapply,"boot","apply");
EXT(YruntimeYdo,"runtime","do");
EXT(YruntimeYforce_output,"runtime","force-output");
DEF(YwriteYwrite_to_string,"write","write-to-string");
EXT(YruntimeYfab,"runtime","fab");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeYlognot,"runtime","lognot");
EXT(YruntimeYas,"runtime","as");
EXT(YruntimeYsig,"runtime","sig");
EXT(YruntimeYout,"runtime","out");
EXT(Yfun_arity,"boot","fun-arity");
DEF(YwriteYwrite_params,"write","write-params");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(Yslot_setter,"boot","slot-setter");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYtE,"runtime","t=");
DEF(YwriteYwrite_number,"write","write-number");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YruntimeYrev,"runtime","rev");
EXT(YreadYread_from_string,"read","read-from-string");
DEF(YwriteYcharacter_name,"write","character-name");
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
EXT(Ytype_class,"boot","type-class");
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
DEF(YwriteYwrite_boolean,"write","write-boolean");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_71);
DEFLIT(lit_46);
DEFLIT(lit_90);
DEFLIT(lit_8);
DEFLIT(lit_20);
DEFLIT(lit_14);
DEFLIT(lit_25);
DEFLIT(lit_52);
DEFLIT(lit_77);
DEFLIT(lit_39);
DEFLIT(lit_51);
DEFLIT(lit_13);
DEFLIT(lit_58);
DEFLIT(lit_84);
DEFLIT(lit_12);
DEFLIT(lit_6);
DEFLIT(lit_72);
DEFLIT(lit_53);
DEFLIT(lit_40);
DEFLIT(lit_65);
DEFLIT(lit_34);
DEFLIT(lit_29);
DEFLIT(lit_83);
DEFLIT(lit_32);
DEFLIT(lit_3);
DEFLIT(lit_55);
DEFLIT(lit_30);
DEFLIT(lit_0);
DEFLIT(lit_31);
DEFLIT(lit_69);
DEFLIT(lit_59);
DEFLIT(lit_36);
DEFLIT(lit_9);
DEFLIT(lit_17);
DEFLIT(lit_74);
DEFLIT(lit_1);
DEFLIT(lit_76);
DEFLIT(lit_45);
DEFLIT(lit_75);
DEFLIT(lit_87);
DEFLIT(lit_67);
DEFLIT(lit_11);
DEFLIT(lit_18);
DEFLIT(lit_4);
DEFLIT(lit_49);
DEFLIT(lit_26);
DEFLIT(lit_16);
DEFLIT(lit_56);
DEFLIT(lit_15);
DEFLIT(lit_82);
DEFLIT(lit_37);
DEFLIT(lit_5);
DEFLIT(lit_89);
DEFLIT(lit_85);
DEFLIT(lit_88);
DEFLIT(lit_22);
DEFLIT(lit_63);
DEFLIT(lit_44);
DEFLIT(lit_68);
DEFLIT(lit_19);
DEFLIT(lit_62);
DEFLIT(lit_61);
DEFLIT(lit_27);
DEFLIT(lit_57);
DEFLIT(lit_47);
DEFLIT(lit_2);
DEFLIT(lit_73);
DEFLIT(lit_48);
DEFLIT(lit_24);
DEFLIT(lit_7);
DEFLIT(lit_10);
DEFLIT(lit_33);
DEFLIT(lit_38);
DEFLIT(lit_80);
DEFLIT(lit_21);
DEFLIT(lit_43);
DEFLIT(lit_86);
DEFLIT(lit_66);
DEFLIT(lit_35);
DEFLIT(lit_70);
DEFLIT(lit_78);
DEFLIT(lit_50);
DEFLIT(lit_81);
DEFLIT(lit_64);
DEFLIT(lit_28);
DEFLIT(lit_42);
DEFLIT(lit_23);
DEFLIT(lit_79);
DEFLIT(lit_54);
DEFLIT(lit_60);
DEFLIT(lit_41);

/* FUNCTIONS: */

LOCFOR(fun_as_binding_name_0);
LOCFOR(fun_do_display_1);
LOCFOR(fun_do_display_2);
LOCFOR(fun_do_display_3);
LOCFOR(fun_recur_4);
LOCFOR(fun_display_5);
LOCFOR(fun_write_to_string_6);
LOCFOR(fun_recur_7);
LOCFOR(fun_write_8);
LOCFOR(fun_writeln_9);
LOCFOR(fun_recurring_write_10);
LOCFOR(fun_recurring_write_11);
LOCFOR(fun_recurring_write_12);
LOCFOR(fun_recurring_write_13);
LOCFOR(fun_recurring_write_14);
LOCFOR(fun_recurring_write_15);
LOCFOR(fun_recurring_write_16);
LOCFOR(fun_recurring_write_17);
LOCFOR(fun_recurring_write_18);
LOCFOR(fun_write_boolean_19);
LOCFOR(fun_write_number_20);
LOCFOR(fun_write_char_literal_21);
LOCFOR(fun_character_name_22);
LOCFOR(fun_loop_23);
LOCFOR(fun_write_string_literal_24);
LOCFOR(fun_loop_25);
LOCFOR(fun_write_list_26);
LOCFOR(fun_quotationQ_27);
LOCFOR(fun_loop_28);
LOCFOR(fun_write_vector_29);
LOCFOR(fun_x_1212_30);
LOCFOR(fun_31);
LOCFOR(fun_write_map_32);
LOCFOR(fun_recurring_write_33);
LOCFOR(fun_recurring_write_34);
LOCFOR(fun_x_1219_35);
LOCFOR(fun_write_params_36);
LOCFOR(fun_write_fun_guts_37);
LOCFOR(fun_recurring_write_38);
LOCFOR(fun_recurring_write_39);
LOCFOR(fun_recurring_write_40);
LOCFOR(fun_recurring_write_41);
LOCFOR(fun_recurring_write_42);
LOCFOR(fun_recurring_write_43);
LOCFOR(fun_recurring_write_44);
LOCFOR(fun_x_1224_45);
LOCFOR(fun_46);
LOCFOR(fun_recurring_write_47);
LOCFOR(fun_recurring_write_48);
LOCFOR(fun_49);
LOCFOR(fun_arg_50);
LOCFOR(fun_format_51);
LOCFOR(fun_52);
FUNFOR(YruntimeYformat_to_string);
extern P YwriteY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_as_binding_name_0) {
  ARG(name_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),name_);
  QRET(T0);
}

FUNCODEDEF(fun_do_display_1) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALL2(CHKREF(YruntimeYwrite_string),port_,x_);
  QRET(T0);
}

FUNCODEDEF(fun_do_display_2) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALL2(CHKREF(YruntimeYwrite_char),port_,x_);
  QRET(T0);
}

FUNCODEDEF(fun_do_display_3) {
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

FUNCODEDEF(fun_recur_4) {
  ARG(d_, 0);
  ARG(x_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(YruntimeYGE),d_,CHKREF(YwriteYTmax_print_depthT));
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(1),CHKREF(lit_8));
    T0 = T3;
  } else {
    T2 = CALL2(CHKREF(YruntimeYA),d_,YPint((P)1));
    T1 = CALLN(CHKREF(YwriteYdo_display),4,FREEREF(1),x_,T2,FREEREF(0));
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_display_5) {
  ARG(x_, 0);
  ARG(port_, 1);
  P recurF1075;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(0,fun_recur_4,2);
  recurF1075 = T2;
  FUNINIT(recurF1075, 2,recurF1075,port_);
  T1 = KCALL2(recurF1075,x_,YPint((P)-1));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_write_to_string_6) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YruntimeYrcurry),CHKREF(YwriteYwrite),x_);
  T0 = CALL1(CHKREF(YruntimeYcall_with_string_output_port),T1);
  RET(T0);
}

FUNCODEDEF(fun_recur_7) {
  ARG(d_, 0);
  ARG(x_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(YruntimeYGE),d_,CHKREF(YwriteYTmax_print_depthT));
  if (T4 != YPfalse) {
    T3 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(1),CHKREF(lit_11));
    T0 = T3;
  } else {
    T2 = CALL2(CHKREF(YruntimeYA),d_,YPint((P)1));
    T1 = CALLN(CHKREF(YwriteYrecurring_write),4,FREEREF(1),x_,T2,FREEREF(0));
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_write_8) {
  ARG(x_, 0);
  ARG(port_, 1);
  P recurF1076;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(0,fun_recur_7,2);
  recurF1076 = T2;
  FUNINIT(recurF1076, 2,recurF1076,port_);
  T1 = KCALL2(recurF1076,x_,YPint((P)-1));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_writeln_9) {
  ARG(x_, 0);
  ARG(port_, 1);
  P T0;
  P a1,a2;
loop:
  CALL2(CHKREF(YwriteYwrite),port_,x_);
  T0 = CALL1(CHKREF(YruntimeYnewline),port_);
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_10) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T3 = CALL1(CHKREF(YmacrosYemptyQ),x_);
  if (T3 != YPfalse) {
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_14));
    T0 = T2;
  } else {
    T1 = CALLN(CHKREF(YwriteYwrite_list),4,port_,x_,d_,recur_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_11) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALLN(CHKREF(YwriteYwrite_vector),4,port_,x_,d_,recur_);
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_12) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALLN(CHKREF(YwriteYwrite_map),4,port_,x_,d_,recur_);
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_13) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  if (x_ != YPfalse) {
    T2 = CALL2(CHKREF(YwriteYwrite_boolean),port_,CHKREF(lit_16));
    T0 = T2;
  } else {
    T1 = CALL2(CHKREF(YwriteYwrite_boolean),port_,CHKREF(lit_15));
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_14) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  T1 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),x_);
  T0 = CALL2(CHKREF(YruntimeYwrite_string),port_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_15) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_17));
  T2 = (P)YPlu(x_);
  T1 = (P)YPib(T2);
  T0 = CALL2(CHKREF(YruntimeYnum_to_str),T1,YPint((P)16));
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_16) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T4 = CALL2(CHKREF(YmacrosYEE),x_,CHKREF(YLnumG));
  if (T4 != YPfalse) {
    T3 = CALL1(CHKREF(YwriteYas_binding_name),CHKREF(lit_18));
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T1 = CALL2(CHKREF(YwriteYwrite_number),port_,x_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_17) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALL2(CHKREF(YwriteYwrite_string_literal),port_,x_);
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_18) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALL2(CHKREF(YwriteYwrite_char_literal),port_,x_);
  QRET(T0);
}

FUNCODEDEF(fun_write_boolean_19) {
  ARG(mumble_, 0);
  ARG(port_, 1);
  P T0;
  P a1,a2;
loop:
  CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)35));
  T0 = CALL2(CHKREF(YwriteYwrite),port_,mumble_);
  QRET(T0);
}

FUNCODEDEF(fun_write_number_20) {
  ARG(x_, 0);
  ARG(port_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YruntimeYnum_to_str),x_,YPint((P)10));
  T0 = CALL2(CHKREF(YruntimeYwrite_string),port_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_write_char_literal_21) {
  ARG(x_, 0);
  ARG(port_, 1);
  P probeF1077;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YwriteYcharacter_name),x_);
  probeF1077 = T4;
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_23));
  if (probeF1077 != YPfalse) {
    T3 = CALL2(CHKREF(YwriteYwrite),port_,probeF1077);
    T1 = T3;
  } else {
    T2 = CALL2(CHKREF(YruntimeYwrite_char),port_,x_);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_character_name_22) {
  ARG(char_, 0);
  P tmpF1079;
  P assocF1078;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = CALL3(CHKREF(YruntimeYassqn),char_,CHKREF(YreadYDchar_long_names),YPint((P)1));
  assocF1078 = T4;
  tmpF1079 = assocF1078;
  if (tmpF1079 != YPfalse) {
    T3 = CALL1(CHKREF(YruntimeY1st),assocF1078);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_23) {
  ARG(i_, 0);
  P tmpF1081;
  P cF1080;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = CALL2(CHKREF(YruntimeYE),i_,FREEREF(3));
  if (T11 != YPfalse) {
    T10 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(2),YPchr((P)34));
    T0 = T10;
  } else {
    T9 = CALL2(CHKREF(YruntimeYelt),FREEREF(0),i_);
    cF1080 = T9;
    T6 = CALL2(CHKREF(YruntimeYE),cF1080,YPchr((P)92));
    tmpF1081 = T6;
    if (tmpF1081 != YPfalse) {
      T4 = tmpF1081;
    } else {
      T5 = CALL2(CHKREF(YruntimeYE),cF1080,YPchr((P)34));
      T4 = T5;
    }
    T3 = T4;
    if (T3 != YPfalse) {
      T2 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(2),YPchr((P)92));
    } else {
    }
    CALL2(CHKREF(YruntimeYwrite_char),FREEREF(2),cF1080);
    T8 = CALL2(CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T8;
    i_ = a1;
    goto loop;
    T1 = T7;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_write_string_literal_24) {
  ARG(x_, 0);
  ARG(port_, 1);
  P loopF1083;
  P lenF1082;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)34));
  T4 = CALL1(CHKREF(YruntimeYlen),x_);
  lenF1082 = T4;
  T3 = FUNSHELL(1,fun_loop_23,4);
  loopF1083 = T3;
  FUNINIT(loopF1083, 4,x_,loopF1083,port_,lenF1082);
  T2 = KCALL1(loopF1083,YPint((P)0));
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_25) {
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
      T6 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(3),CHKREF(lit_32));
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

FUNCODEDEF(fun_write_list_26) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P loopF1084;
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
    T4 = FUNSHELL(1,fun_loop_25,4);
    loopF1084 = T4;
    FUNINIT(loopF1084, 4,loopF1084,d_,recur_,port_);
    T3 = CALL1(CHKREF(Ytail),x_);
    T2 = KCALL2(loopF1084,T3,YPint((P)1));
    T5 = CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)41));
    T0 = T5;
  }
  QRET(T0);
}

FUNCODEDEF(fun_quotationQ_27) {
  ARG(x_, 0);
  P tmpF1087;
  P tmpF1086;
  P tmpF1085;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T13 = CALL2(CHKREF(YisaQ),x_,CHKREF(YLlstG));
  tmpF1085 = T13;
  if (tmpF1085 != YPfalse) {
    T12 = CALL1(CHKREF(Yhead),x_);
    T11 = CALL2(CHKREF(YmacrosYEE),T12,CHKREF(lit_34));
    tmpF1086 = T11;
    if (tmpF1086 != YPfalse) {
      T10 = CALL1(CHKREF(Ytail),x_);
      T9 = CALL2(CHKREF(YisaQ),T10,CHKREF(YLlstG));
      tmpF1087 = T9;
      if (tmpF1087 != YPfalse) {
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

FUNCODEDEF(fun_loop_28) {
  ARG(i_, 0);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL2(CHKREF(YruntimeYGE),i_,CHKREF(YwriteYTmax_print_lengthT));
  if (T8 != YPfalse) {
    T7 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(4),CHKREF(lit_36));
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

FUNCODEDEF(fun_write_vector_29) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P loopF1089;
  P zF1088;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_37));
  T6 = CALL1(CHKREF(YruntimeYlen),x_);
  zF1088 = T6;
  T5 = CALL2(CHKREF(YruntimeYG),zF1088,YPint((P)0));
  if (T5 != YPfalse) {
    T1 = CALL2(CHKREF(YruntimeYelt),x_,YPint((P)0));
    CALL2(recur_,T1,d_);
    T4 = FUNSHELL(1,fun_loop_28,6);
    loopF1089 = T4;
    FUNINIT(loopF1089, 6,loopF1089,d_,x_,recur_,port_,zF1088);
    T3 = KCALL1(loopF1089,YPint((P)1));
    T2 = T3;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
  T7 = CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)41));
  QRET(T7);
}

FUNCODEDEF(fun_x_1212_30) {
  ARG(x_1208_, 0);
  ARG(x_1210_, 1);
  P tmpF1096;
  P tup34F1095;
  P valF1094;
  P tup34F1093;
  P keyF1092;
  P tup34F1091;
  P iF1090;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T24 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1210_);
  tmpF1096 = T24;
  if (tmpF1096 != YPfalse) {
    T22 = tmpF1096;
  } else {
    T23 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),x_1208_);
    T22 = T23;
  }
  T21 = T22;
  T20 = CALL1(CHKREF(Ynot),T21);
  if (T20 != YPfalse) {
    T19 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),x_1210_);
    iF1090 = T19;
    T18 = CALL2(CHKREF(YruntimeYnow_key),FREEREF(1),x_1208_);
    T17 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(1),x_1208_);
    T16 = CALL2(CHKREF(YmacrosYtup),T18,T17);
    tup34F1091 = T16;
    T15 = CALL1(CHKREF(Yhead),tup34F1091);
    keyF1092 = T15;
    T14 = CALL1(CHKREF(Ytail),tup34F1091);
    tup34F1093 = T14;
    T13 = CALL1(CHKREF(Yhead),tup34F1093);
    valF1094 = T13;
    T12 = CALL1(CHKREF(Ytail),tup34F1093);
    tup34F1095 = T12;
    T8 = CALL2(CHKREF(YruntimeYGE),iF1090,CHKREF(YwriteYTmax_print_lengthT));
    if (T8 != YPfalse) {
      CALL2(CHKREF(YruntimeYwrite_string),FREEREF(5),CHKREF(lit_44));
      T7 = CALL1(FREEREF(6),YPfalse);
    } else {
    }
    CALL2(CHKREF(YruntimeYwrite_char),FREEREF(5),YPchr((P)32));
    CALL2(FREEREF(4),keyF1092,FREEREF(3));
    CALL2(CHKREF(YruntimeYwrite_string),FREEREF(5),CHKREF(lit_43));
    CALL2(FREEREF(4),valF1094,FREEREF(3));
    T11 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),x_1210_);
    T10 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),x_1208_);
    a1 = T11;
    a2 = T10;
    x_1210_ = a1;
    x_1208_ = a2;
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

FUNCODEDEF(fun_31) {
  ARG(blow_, 0);
  P x_1212F1099;
  P x_1209F1098;
  P x_1211F1097;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = CALL1(CHKREF(YruntimeYfrom),YPint((P)0));
  x_1211F1097 = T7;
  x_1209F1098 = FREEREF(0);
  T6 = FUNSHELL(1,fun_x_1212_30,7);
  x_1212F1099 = T6;
  FUNINIT(x_1212F1099, 7,x_1211F1097,x_1209F1098,x_1212F1099,FREEREF(3),FREEREF(2),FREEREF(1),blow_);
  T5 = CALL1(CHKREF(YruntimeYini_state),x_1211F1097);
  T4 = CALL1(CHKREF(YruntimeYini_state),x_1209F1098);
  T3 = KCALL2(x_1212F1099,T5,T4);
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_write_map_32) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_45));
  T1 = CALL1(CHKREF(Yobject_class),x_);
  T0 = CALL1(CHKREF(Yclass_name),T1);
  CALL2(CHKREF(YwriteYdisplay),port_,T0);
  T2 = FUNFAB(fun_31,4,x_,port_,recur_,d_);
  with_exit(T2);
  T3 = CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)93));
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_33) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_46));
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_34) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_47));
  QRET(T0);
}

FUNCODEDEF(fun_x_1219_35) {
  ARG(x_1213_, 0);
  ARG(x_1215_, 1);
  ARG(x_1217_, 2);
  P tmpF1104;
  P tmpF1103;
  P iF1102;
  P specF1101;
  P firstQF1100;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T25 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1217_);
  tmpF1103 = T25;
  if (tmpF1103 != YPfalse) {
    T20 = tmpF1103;
  } else {
    T24 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),x_1215_);
    tmpF1104 = T24;
    if (tmpF1104 != YPfalse) {
      T22 = tmpF1104;
    } else {
      T23 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(2),x_1213_);
      T22 = T23;
    }
    T21 = T22;
    T20 = T21;
  }
  T19 = T20;
  T18 = CALL1(CHKREF(Ynot),T19);
  if (T18 != YPfalse) {
    T17 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),x_1217_);
    firstQF1100 = T17;
    T16 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(1),x_1215_);
    specF1101 = T16;
    T15 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(2),x_1213_);
    iF1102 = T15;
    T5 = CALL1(CHKREF(Ynot),firstQF1100);
    if (T5 != YPfalse) {
      T4 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(5),YPchr((P)32));
    } else {
    }
    T10 = CALL1(CHKREF(YmacrosYemptyQ),FREEREF(4));
    if (T10 != YPfalse) {
      T9 = CALL2(CHKREF(YwriteYwrite),FREEREF(5),specF1101);
    } else {
      T8 = CALL2(CHKREF(YruntimeYelt),FREEREF(4),iF1102);
      T7 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),T8);
      T6 = CALLN(CHKREF(YruntimeYformat),4,FREEREF(5),CHKREF(lit_54),T7,specF1101);
    }
    T14 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),x_1217_);
    T13 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),x_1215_);
    T12 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(2),x_1213_);
    a1 = T14;
    a2 = T13;
    a3 = T12;
    x_1217_ = a1;
    x_1215_ = a2;
    x_1213_ = a3;
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

FUNCODEDEF(fun_write_params_36) {
  ARG(recur_, 0);
  ARG(x_, 1);
  ARG(port_, 2);
  P x_1219F1112;
  P x_1214F1111;
  P x_1216F1110;
  P x_1218F1109;
  P namesF1108;
  P tmpF1107;
  P valueF1106;
  P namesF1105;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T23 = CALL1(CHKREF(Yfun_names),x_);
  namesF1105 = T23;
  CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)40));
  T13 = CALL1(CHKREF(Yfun_names),x_);
  namesF1108 = T13;
  T12 = CALL2(CHKREF(YruntimeYfirst_then),YPtrue,YPfalse);
  x_1218F1109 = T12;
  T11 = CALL1(CHKREF(Yfun_specs),x_);
  x_1216F1110 = T11;
  T10 = CALL1(CHKREF(YruntimeYfrom),YPint((P)0));
  x_1214F1111 = T10;
  T9 = FUNSHELL(1,fun_x_1219_35,6);
  x_1219F1112 = T9;
  FUNINIT(x_1219F1112, 6,x_1218F1109,x_1216F1110,x_1214F1111,x_1219F1112,namesF1108,port_);
  T8 = CALL1(CHKREF(YruntimeYini_state),x_1218F1109);
  T7 = CALL1(CHKREF(YruntimeYini_state),x_1216F1110);
  T6 = CALL1(CHKREF(YruntimeYini_state),x_1214F1111);
  T5 = KCALL3(x_1219F1112,T8,T7,T6);
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T21 = CALL1(CHKREF(Yfun_value),x_);
  valueF1106 = T21;
  T20 = CALL1(CHKREF(Ynot),valueF1106);
  tmpF1107 = T20;
  if (tmpF1107 != YPfalse) {
    T18 = tmpF1107;
  } else {
    T19 = CALL2(CHKREF(YmacrosYEE),valueF1106,CHKREF(YLanyG));
    T18 = T19;
  }
  T17 = T18;
  T16 = CALL1(CHKREF(Ynot),T17);
  if (T16 != YPfalse) {
    T15 = CALL3(CHKREF(YruntimeYformat),port_,CHKREF(lit_49),valueF1106);
    T14 = T15;
  } else {
    T14 = YPfalse;
  }
  T22 = CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)41));
  T0 = T22;
  QRET(T0);
}

FUNCODEDEF(fun_write_fun_guts_37) {
  ARG(recur_, 0);
  ARG(name_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P tmpF1114;
  P nameF1113;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_57));
  CALL2(CHKREF(YruntimeYwrite_string),port_,name_);
  T4 = CALL1(CHKREF(Yfun_name),x_);
  nameF1113 = T4;
  tmpF1114 = nameF1113;
  if (tmpF1114 != YPfalse) {
    CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)32));
    T3 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),nameF1113);
    T2 = CALL2(CHKREF(YruntimeYwrite_string),port_,T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  CALL2(CHKREF(YruntimeYwrite_char),port_,YPchr((P)32));
  CALL3(CHKREF(YwriteYwrite_params),port_,x_,recur_);
  T5 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_56));
  QRET(T5);
}

FUNCODEDEF(fun_recurring_write_38) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALLN(CHKREF(YwriteYwrite_fun_guts),4,port_,x_,CHKREF(lit_58),recur_);
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_39) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALLN(CHKREF(YwriteYwrite_fun_guts),4,port_,x_,CHKREF(lit_59),recur_);
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_40) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_62));
  T1 = CALL1(CHKREF(Yclass_name),x_);
  T0 = CALL2(CHKREF(YruntimeYas),CHKREF(YLstrG),T1);
  CALL2(CHKREF(YruntimeYwrite_string),port_,T0);
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_61));
  T3 = CALL1(CHKREF(Yclass_direct_parents),x_);
  T2 = CALL2(CHKREF(YmacrosYmap),CHKREF(Yclass_name),T3);
  CALL2(recur_,T2,d_);
  T4 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_60));
  QRET(T4);
}

FUNCODEDEF(fun_recurring_write_41) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_64));
  T0 = CALL1(CHKREF(Ytype_object),x_);
  CALL2(recur_,T0,d_);
  T1 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_63));
  QRET(T1);
}

FUNCODEDEF(fun_recurring_write_42) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_66));
  T0 = CALL1(CHKREF(Ytype_class),x_);
  CALL2(recur_,T0,d_);
  T1 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_65));
  QRET(T1);
}

FUNCODEDEF(fun_recurring_write_43) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_68));
  T0 = CALL1(CHKREF(Ytype_class),x_);
  CALL2(recur_,T0,d_);
  T1 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_67));
  QRET(T1);
}

FUNCODEDEF(fun_recurring_write_44) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_70));
  T0 = CALL1(CHKREF(Yslot_getter),x_);
  CALL2(recur_,T0,d_);
  T1 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_69));
  QRET(T1);
}

FUNCODEDEF(fun_x_1224_45) {
  ARG(x_1220_, 0);
  ARG(x_1222_, 1);
  P tmpF1118;
  P getterF1117;
  P slotF1116;
  P iF1115;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
loop:
  T18 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1222_);
  tmpF1118 = T18;
  if (tmpF1118 != YPfalse) {
    T16 = tmpF1118;
  } else {
    T17 = CALL2(CHKREF(YruntimeYfin_stateQ),FREEREF(1),x_1220_);
    T16 = T17;
  }
  T15 = T16;
  T14 = CALL1(CHKREF(Ynot),T15);
  if (T14 != YPfalse) {
    T13 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(0),x_1222_);
    iF1115 = T13;
    T12 = CALL2(CHKREF(YruntimeYnow_elt),FREEREF(1),x_1220_);
    slotF1116 = T12;
    T4 = CALL2(CHKREF(YruntimeYGE),iF1115,CHKREF(YwriteYTmax_print_lengthT));
    if (T4 != YPfalse) {
      CALL2(CHKREF(YruntimeYwrite_string),FREEREF(6),CHKREF(lit_76));
      T3 = CALL1(FREEREF(7),YPfalse);
    } else {
    }
    T8 = CALL1(CHKREF(Yslot_getter),slotF1116);
    getterF1117 = T8;
    CALL2(CHKREF(YruntimeYwrite_char),FREEREF(6),YPchr((P)32));
    T5 = CALL1(CHKREF(Yfun_name),getterF1117);
    CALL2(CHKREF(YwriteYdisplay),FREEREF(6),T5);
    CALL2(CHKREF(YruntimeYwrite_string),FREEREF(6),CHKREF(lit_75));
    T7 = CALL1(getterF1117,FREEREF(4));
    T6 = CALL2(FREEREF(5),T7,FREEREF(3));
    T11 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(0),x_1222_);
    T10 = CALL2(CHKREF(YruntimeYnxt_state),FREEREF(1),x_1220_);
    a1 = T11;
    a2 = T10;
    x_1222_ = a1;
    x_1220_ = a2;
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
  P x_1224F1121;
  P x_1221F1120;
  P x_1223F1119;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = CALL1(CHKREF(YruntimeYfrom),YPint((P)0));
  x_1223F1119 = T8;
  T7 = CALL1(CHKREF(Yobject_slots),FREEREF(0));
  x_1221F1120 = T7;
  T6 = FUNSHELL(1,fun_x_1224_45,8);
  x_1224F1121 = T6;
  FUNINIT(x_1224F1121, 8,x_1223F1119,x_1221F1120,x_1224F1121,FREEREF(3),FREEREF(0),FREEREF(2),FREEREF(1),blow_);
  T5 = CALL1(CHKREF(YruntimeYini_state),x_1223F1119);
  T4 = CALL1(CHKREF(YruntimeYini_state),x_1221F1120);
  T3 = KCALL2(x_1224F1121,T5,T4);
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_47) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_77));
  T1 = CALL1(CHKREF(Yobject_class),x_);
  T0 = CALL1(CHKREF(Yclass_name),T1);
  CALL2(CHKREF(YwriteYdisplay),port_,T0);
  T2 = FUNFAB(fun_46,4,x_,port_,recur_,d_);
  with_exit(T2);
  T3 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_71));
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_48) {
  ARG(recur_, 0);
  ARG(d_, 1);
  ARG(x_, 2);
  ARG(port_, 3);
  P T0;
  P a1,a2,a3,a4;
loop:
  T0 = CALL2(CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_78));
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  ARG(c_, 0);
  P x_1232F1129;
  P x_1231F1128;
  P x_1230F1127;
  P x_1229F1126;
  P x_1228F1125;
  P x_1227F1124;
  P x_1226F1123;
  P x_1225F1122;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T50 = BOXVAL(FREEREF(1));
  if (T50 != YPfalse) {
    T48 = CALL1(CHKREF(YruntimeYas_uppercase),c_);
    x_1225F1122 = T48;
    T47 = CALL2(CHKREF(YmacrosYEE),x_1225F1122,YPchr((P)68));
    if (T47 != YPfalse) {
      T46 = CALL2(FREEREF(3),c_,CHKREF(YLnumG));
      T45 = CALL1(CHKREF(YruntimeYnum_to_str),T46);
      T44 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(0),T45);
      T5 = T44;
    } else {
      x_1226F1123 = x_1225F1122;
      T43 = CALL2(CHKREF(YmacrosYEE),x_1226F1123,YPchr((P)66));
      if (T43 != YPfalse) {
        T42 = CALL2(FREEREF(3),c_,CHKREF(YLintG));
        T41 = CALL2(CHKREF(YruntimeYnum_to_str),T42,YPint((P)2));
        T40 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(0),T41);
        T7 = T40;
      } else {
        x_1227F1124 = x_1226F1123;
        T39 = CALL2(CHKREF(YmacrosYEE),x_1227F1124,YPchr((P)79));
        if (T39 != YPfalse) {
          T38 = CALL2(FREEREF(3),c_,CHKREF(YLintG));
          T37 = CALL2(CHKREF(YruntimeYnum_to_str),T38,YPint((P)8));
          T36 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(0),T37);
          T9 = T36;
        } else {
          x_1228F1125 = x_1227F1124;
          T35 = CALL2(CHKREF(YmacrosYEE),x_1228F1125,YPchr((P)88));
          if (T35 != YPfalse) {
            T34 = CALL2(FREEREF(3),c_,CHKREF(YLintG));
            T33 = CALL2(CHKREF(YruntimeYnum_to_str),T34,YPint((P)16));
            T32 = CALL2(CHKREF(YruntimeYwrite_string),FREEREF(0),T33);
            T11 = T32;
          } else {
            x_1229F1126 = x_1228F1125;
            T31 = CALL2(CHKREF(YmacrosYEE),x_1229F1126,YPchr((P)67));
            if (T31 != YPfalse) {
              T30 = CALL2(FREEREF(3),c_,CHKREF(YLchrG));
              T29 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(0),T30);
              T13 = T29;
            } else {
              x_1230F1127 = x_1229F1126;
              T28 = CALL2(CHKREF(YmacrosYEE),x_1230F1127,YPchr((P)83));
              if (T28 != YPfalse) {
                T27 = CALL2(FREEREF(3),c_,CHKREF(YLanyG));
                T26 = CALL2(CHKREF(YwriteYdisplay),FREEREF(0),T27);
                T15 = T26;
              } else {
                x_1231F1128 = x_1230F1127;
                T25 = CALL2(CHKREF(YmacrosYEE),x_1231F1128,YPchr((P)61));
                if (T25 != YPfalse) {
                  T24 = CALL2(FREEREF(3),c_,CHKREF(YLanyG));
                  T23 = CALL2(CHKREF(YwriteYwrite),FREEREF(0),T24);
                  T17 = T23;
                } else {
                  x_1232F1129 = x_1231F1128;
                  T22 = CALL2(CHKREF(YmacrosYEE),x_1232F1129,YPchr((P)37));
                  if (T22 != YPfalse) {
                    T21 = CALL2(CHKREF(YruntimeYwrite_char),FREEREF(0),YPchr((P)37));
                    T19 = T21;
                  } else {
                    T20 = CALL3(CHKREF(Yerror),CHKREF(lit_84),c_,FREEREF(2));
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
  P tmpF1132;
  P argumentF1131;
  P current_indexF1130;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T14 = BOXVAL(FREEREF(0));
  current_indexF1130 = T14;
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(CHKREF(YruntimeYA),T2,YPint((P)1));
  BOXVAL(FREEREF(0)) = T1;
  T5 = CALL2(CHKREF(YruntimeYL),current_indexF1130,FREEREF(3));
  T4 = CALL1(CHKREF(Ynot),T5);
  if (T4 != YPfalse) {
    T3 = CALL3(CHKREF(Yerror),CHKREF(lit_88),FREEREF(2),FREEREF(1));
  } else {
  }
  T13 = CALL2(CHKREF(YruntimeYelt),FREEREF(1),current_indexF1130);
  argumentF1131 = T13;
  T12 = CALL2(CHKREF(YmacrosYEE),class_,CHKREF(YLanyG));
  tmpF1132 = T12;
  if (tmpF1132 != YPfalse) {
    T10 = tmpF1132;
  } else {
    T11 = CALL2(CHKREF(YisaQ),argumentF1131,class_);
    T10 = T11;
  }
  T9 = T10;
  T8 = CALL1(CHKREF(Ynot),T9);
  if (T8 != YPfalse) {
    T7 = CALLN(CHKREF(Yerror),4,CHKREF(lit_87),char_,class_,argumentF1131);
  } else {
  }
  T6 = argumentF1131;
  T0 = T6;
  QRET(T0);
}

FUNCODEDEF(fun_format_51) {
  ARG(arguments_, 0);
  ARG(message_, 1);
  ARG(port_, 2);
  P argF1136;
  P num_argumentsF1135;
  P argument_indexF1134;
  P found_percentQF1133;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  found_percentQF1133 = YPfalse;
  found_percentQF1133 = BOXFAB(found_percentQF1133);
  check_type(YPint((P)0),CHKREF(YLintG));
  argument_indexF1134 = YPint((P)0);
  argument_indexF1134 = BOXFAB(argument_indexF1134);
  T13 = CALL1(CHKREF(YruntimeYlen),arguments_);
  num_argumentsF1135 = T13;
  T7 = FUNSHELL(1,fun_arg_50,4);
  argF1136 = T7;
  FUNINIT(argF1136, 4,argument_indexF1134,arguments_,message_,num_argumentsF1135);
  T6 = FUNFAB(fun_49,4,port_,found_percentQF1133,message_,argF1136);
  T5 = CALL2(CHKREF(YruntimeYdo),T6,message_);
  T12 = BOXVAL(found_percentQF1133);
  T11 = CALL1(CHKREF(Ynot),T12);
  T10 = CALL1(CHKREF(Ynot),T11);
  if (T10 != YPfalse) {
    T9 = CALL2(CHKREF(Yerror),CHKREF(lit_82),message_);
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
  YwriteYTmax_print_depthT = YPint((P)4);
  YwriteYTmax_print_lengthT = YPint((P)12);
  lit_0 = YPPsym((P)"as-binding-name");
  lit_1 = YPPsym((P)"name");
  T0 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_as_binding_name_0 = YPmet(FUNCODEREF(fun_as_binding_name_0),CHKREF(lit_0),T0,ENVNUL);
  T4 = BOUNDP(YwriteYas_binding_name);
  if (T4 != YPfalse) {
    T3 = CHKREF(YwriteYas_binding_name);
  } else {
    T3 = YPfalse;
  }
  T2 = fun_as_binding_name_0;
  T1 = CALL2(CHKREF(YPdefine_method),T3,T2);
  YwriteYas_binding_name = T1;
  lit_2 = YPPsym((P)"do-display");
  lit_3 = YPPsym((P)"recur");
  lit_4 = YPPsym((P)"d");
  lit_5 = YPPsym((P)"x");
  lit_6 = YPPsym((P)"port");
  T5 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLstrG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_do_display_1 = YPmet(FUNCODEREF(fun_do_display_1),CHKREF(lit_2),T5,ENVNUL);
  T9 = BOUNDP(YwriteYdo_display);
  if (T9 != YPfalse) {
    T8 = CHKREF(YwriteYdo_display);
  } else {
    T8 = YPfalse;
  }
  T7 = fun_do_display_1;
  T6 = CALL2(CHKREF(YPdefine_method),T8,T7);
  YwriteYdo_display = T6;
  T10 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLchrG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_do_display_2 = YPmet(FUNCODEREF(fun_do_display_2),CHKREF(lit_2),T10,ENVNUL);
  T14 = BOUNDP(YwriteYdo_display);
  if (T14 != YPfalse) {
    T13 = CHKREF(YwriteYdo_display);
  } else {
    T13 = YPfalse;
  }
  T12 = fun_do_display_2;
  T11 = CALL2(CHKREF(YPdefine_method),T13,T12);
  YwriteYdo_display = T11;
  T15 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_do_display_3 = YPmet(FUNCODEREF(fun_do_display_3),CHKREF(lit_2),T15,ENVNUL);
  T19 = BOUNDP(YwriteYdo_display);
  if (T19 != YPfalse) {
    T18 = CHKREF(YwriteYdo_display);
  } else {
    T18 = YPfalse;
  }
  T17 = fun_do_display_3;
  T16 = CALL2(CHKREF(YPdefine_method),T18,T17);
  YwriteYdo_display = T16;
  lit_7 = YPPsym((P)"display");
  lit_8 = YPsb((P)"*");
  T21 = YPsig(YPPlist(2,CHKREF(lit_5),CHKREF(lit_4)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_recur_4 = YPmet(FUNCODEREF(fun_recur_4),CHKREF(lit_3),T21,ENVNUL);
  T20 = YPsig(YPPlist(2,CHKREF(lit_6),CHKREF(lit_5)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_display_5 = YPmet(FUNCODEREF(fun_display_5),CHKREF(lit_7),T20,ENVNUL);
  T25 = BOUNDP(YwriteYdisplay);
  if (T25 != YPfalse) {
    T24 = CHKREF(YwriteYdisplay);
  } else {
    T24 = YPfalse;
  }
  T23 = fun_display_5;
  T22 = CALL2(CHKREF(YPdefine_method),T24,T23);
  YwriteYdisplay = T22;
  lit_9 = YPPsym((P)"write-to-string");
  T26 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLstrG));
  fun_write_to_string_6 = YPmet(FUNCODEREF(fun_write_to_string_6),CHKREF(lit_9),T26,ENVNUL);
  T30 = BOUNDP(YwriteYwrite_to_string);
  if (T30 != YPfalse) {
    T29 = CHKREF(YwriteYwrite_to_string);
  } else {
    T29 = YPfalse;
  }
  T28 = fun_write_to_string_6;
  T27 = CALL2(CHKREF(YPdefine_method),T29,T28);
  YwriteYwrite_to_string = T27;
  lit_10 = YPPsym((P)"write");
  lit_11 = YPsb((P)"*");
  T32 = YPsig(YPPlist(2,CHKREF(lit_5),CHKREF(lit_4)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_recur_7 = YPmet(FUNCODEREF(fun_recur_7),CHKREF(lit_3),T32,ENVNUL);
  T31 = YPsig(YPPlist(2,CHKREF(lit_6),CHKREF(lit_5)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_write_8 = YPmet(FUNCODEREF(fun_write_8),CHKREF(lit_10),T31,ENVNUL);
  T36 = BOUNDP(YwriteYwrite);
  if (T36 != YPfalse) {
    T35 = CHKREF(YwriteYwrite);
  } else {
    T35 = YPfalse;
  }
  T34 = fun_write_8;
  T33 = CALL2(CHKREF(YPdefine_method),T35,T34);
  YwriteYwrite = T33;
  lit_12 = YPPsym((P)"writeln");
  T37 = YPsig(YPPlist(2,CHKREF(lit_6),CHKREF(lit_5)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_writeln_9 = YPmet(FUNCODEREF(fun_writeln_9),CHKREF(lit_12),T37,ENVNUL);
  T41 = BOUNDP(YwriteYwriteln);
  if (T41 != YPfalse) {
    T40 = CHKREF(YwriteYwriteln);
  } else {
    T40 = YPfalse;
  }
  T39 = fun_writeln_9;
  T38 = CALL2(CHKREF(YPdefine_method),T40,T39);
  YwriteYwriteln = T38;
  lit_13 = YPPsym((P)"recurring-write");
  lit_14 = YPsb((P)"()");
  T42 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLlstG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_10 = YPmet(FUNCODEREF(fun_recurring_write_10),CHKREF(lit_13),T42,ENVNUL);
  T46 = BOUNDP(YwriteYrecurring_write);
  if (T46 != YPfalse) {
    T45 = CHKREF(YwriteYrecurring_write);
  } else {
    T45 = YPfalse;
  }
  T44 = fun_recurring_write_10;
  T43 = CALL2(CHKREF(YPdefine_method),T45,T44);
  YwriteYrecurring_write = T43;
  T47 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLvecG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_11 = YPmet(FUNCODEREF(fun_recurring_write_11),CHKREF(lit_13),T47,ENVNUL);
  T51 = BOUNDP(YwriteYrecurring_write);
  if (T51 != YPfalse) {
    T50 = CHKREF(YwriteYrecurring_write);
  } else {
    T50 = YPfalse;
  }
  T49 = fun_recurring_write_11;
  T48 = CALL2(CHKREF(YPdefine_method),T50,T49);
  YwriteYrecurring_write = T48;
  T52 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YruntimeYLmapG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_12 = YPmet(FUNCODEREF(fun_recurring_write_12),CHKREF(lit_13),T52,ENVNUL);
  T56 = BOUNDP(YwriteYrecurring_write);
  if (T56 != YPfalse) {
    T55 = CHKREF(YwriteYrecurring_write);
  } else {
    T55 = YPfalse;
  }
  T54 = fun_recurring_write_12;
  T53 = CALL2(CHKREF(YPdefine_method),T55,T54);
  YwriteYrecurring_write = T53;
  lit_15 = YPPsym((P)"f");
  lit_16 = YPPsym((P)"t");
  T57 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLlogG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_13 = YPmet(FUNCODEREF(fun_recurring_write_13),CHKREF(lit_13),T57,ENVNUL);
  T61 = BOUNDP(YwriteYrecurring_write);
  if (T61 != YPfalse) {
    T60 = CHKREF(YwriteYrecurring_write);
  } else {
    T60 = YPfalse;
  }
  T59 = fun_recurring_write_13;
  T58 = CALL2(CHKREF(YPdefine_method),T60,T59);
  YwriteYrecurring_write = T58;
  T62 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLsymG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_14 = YPmet(FUNCODEREF(fun_recurring_write_14),CHKREF(lit_13),T62,ENVNUL);
  T66 = BOUNDP(YwriteYrecurring_write);
  if (T66 != YPfalse) {
    T65 = CHKREF(YwriteYrecurring_write);
  } else {
    T65 = YPfalse;
  }
  T64 = fun_recurring_write_14;
  T63 = CALL2(CHKREF(YPdefine_method),T65,T64);
  YwriteYrecurring_write = T63;
  lit_17 = YPsb((P)"&0x");
  T67 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLlocG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_15 = YPmet(FUNCODEREF(fun_recurring_write_15),CHKREF(lit_13),T67,ENVNUL);
  T71 = BOUNDP(YwriteYrecurring_write);
  if (T71 != YPfalse) {
    T70 = CHKREF(YwriteYrecurring_write);
  } else {
    T70 = YPfalse;
  }
  T69 = fun_recurring_write_15;
  T68 = CALL2(CHKREF(YPdefine_method),T70,T69);
  YwriteYrecurring_write = T68;
  lit_18 = YPsb((P)"<num>");
  T72 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLnumG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_16 = YPmet(FUNCODEREF(fun_recurring_write_16),CHKREF(lit_13),T72,ENVNUL);
  T76 = BOUNDP(YwriteYrecurring_write);
  if (T76 != YPfalse) {
    T75 = CHKREF(YwriteYrecurring_write);
  } else {
    T75 = YPfalse;
  }
  T74 = fun_recurring_write_16;
  T73 = CALL2(CHKREF(YPdefine_method),T75,T74);
  YwriteYrecurring_write = T73;
  T77 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLstrG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_17 = YPmet(FUNCODEREF(fun_recurring_write_17),CHKREF(lit_13),T77,ENVNUL);
  T81 = BOUNDP(YwriteYrecurring_write);
  if (T81 != YPfalse) {
    T80 = CHKREF(YwriteYrecurring_write);
  } else {
    T80 = YPfalse;
  }
  T79 = fun_recurring_write_17;
  T78 = CALL2(CHKREF(YPdefine_method),T80,T79);
  YwriteYrecurring_write = T78;
  T82 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLchrG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_18 = YPmet(FUNCODEREF(fun_recurring_write_18),CHKREF(lit_13),T82,ENVNUL);
  T86 = BOUNDP(YwriteYrecurring_write);
  if (T86 != YPfalse) {
    T85 = CHKREF(YwriteYrecurring_write);
  } else {
    T85 = YPfalse;
  }
  T84 = fun_recurring_write_18;
  T83 = CALL2(CHKREF(YPdefine_method),T85,T84);
  YwriteYrecurring_write = T83;
  lit_19 = YPPsym((P)"write-boolean");
  lit_20 = YPPsym((P)"mumble");
  T87 = YPsig(YPPlist(2,CHKREF(lit_6),CHKREF(lit_20)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_write_boolean_19 = YPmet(FUNCODEREF(fun_write_boolean_19),CHKREF(lit_19),T87,ENVNUL);
  T91 = BOUNDP(YwriteYwrite_boolean);
  if (T91 != YPfalse) {
    T90 = CHKREF(YwriteYwrite_boolean);
  } else {
    T90 = YPfalse;
  }
  T89 = fun_write_boolean_19;
  T88 = CALL2(CHKREF(YPdefine_method),T90,T89);
  YwriteYwrite_boolean = T88;
  lit_21 = YPPsym((P)"write-number");
  T92 = YPsig(YPPlist(2,CHKREF(lit_6),CHKREF(lit_5)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_write_number_20 = YPmet(FUNCODEREF(fun_write_number_20),CHKREF(lit_21),T92,ENVNUL);
  T96 = BOUNDP(YwriteYwrite_number);
  if (T96 != YPfalse) {
    T95 = CHKREF(YwriteYwrite_number);
  } else {
    T95 = YPfalse;
  }
  T94 = fun_write_number_20;
  T93 = CALL2(CHKREF(YPdefine_method),T95,T94);
  YwriteYwrite_number = T93;
  lit_22 = YPPsym((P)"write-char-literal");
  lit_23 = YPsb((P)"#\\");
  T97 = YPsig(YPPlist(2,CHKREF(lit_6),CHKREF(lit_5)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_write_char_literal_21 = YPmet(FUNCODEREF(fun_write_char_literal_21),CHKREF(lit_22),T97,ENVNUL);
  T101 = BOUNDP(YwriteYwrite_char_literal);
  if (T101 != YPfalse) {
    T100 = CHKREF(YwriteYwrite_char_literal);
  } else {
    T100 = YPfalse;
  }
  T99 = fun_write_char_literal_21;
  T98 = CALL2(CHKREF(YPdefine_method),T100,T99);
  YwriteYwrite_char_literal = T98;
  lit_24 = YPPsym((P)"character-name");
  lit_25 = YPPsym((P)"char");
  T102 = YPsig(YPPlist(1,CHKREF(lit_25)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_character_name_22 = YPmet(FUNCODEREF(fun_character_name_22),CHKREF(lit_24),T102,ENVNUL);
  T106 = BOUNDP(YwriteYcharacter_name);
  if (T106 != YPfalse) {
    T105 = CHKREF(YwriteYcharacter_name);
  } else {
    T105 = YPfalse;
  }
  T104 = fun_character_name_22;
  T103 = CALL2(CHKREF(YPdefine_method),T105,T104);
  YwriteYcharacter_name = T103;
  lit_26 = YPPsym((P)"write-string-literal");
  lit_27 = YPPsym((P)"loop");
  lit_28 = YPPsym((P)"i");
  T108 = YPsig(YPPlist(1,CHKREF(lit_28)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_23 = YPmet(FUNCODEREF(fun_loop_23),CHKREF(lit_27),T108,ENVNUL);
  T107 = YPsig(YPPlist(2,CHKREF(lit_6),CHKREF(lit_5)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_write_string_literal_24 = YPmet(FUNCODEREF(fun_write_string_literal_24),CHKREF(lit_26),T107,ENVNUL);
  T112 = BOUNDP(YwriteYwrite_string_literal);
  if (T112 != YPfalse) {
    T111 = CHKREF(YwriteYwrite_string_literal);
  } else {
    T111 = YPfalse;
  }
  T110 = fun_write_string_literal_24;
  T109 = CALL2(CHKREF(YPdefine_method),T111,T110);
  YwriteYwrite_string_literal = T109;
  lit_29 = YPPsym((P)"write-list");
  lit_30 = YPPsym((P)"n");
  lit_31 = YPPsym((P)"l");
  lit_32 = YPsb((P)" ...");
  T114 = YPsig(YPPlist(2,CHKREF(lit_31),CHKREF(lit_30)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_25 = YPmet(FUNCODEREF(fun_loop_25),CHKREF(lit_27),T114,ENVNUL);
  T113 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLlstG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_write_list_26 = YPmet(FUNCODEREF(fun_write_list_26),CHKREF(lit_29),T113,ENVNUL);
  T118 = BOUNDP(YwriteYwrite_list);
  if (T118 != YPfalse) {
    T117 = CHKREF(YwriteYwrite_list);
  } else {
    T117 = YPfalse;
  }
  T116 = fun_write_list_26;
  T115 = CALL2(CHKREF(YPdefine_method),T117,T116);
  YwriteYwrite_list = T115;
  lit_33 = YPPsym((P)"quotation?");
  lit_34 = YPPsym((P)"quote");
  T119 = YPsig(YPPlist(1,CHKREF(lit_5)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  fun_quotationQ_27 = YPmet(FUNCODEREF(fun_quotationQ_27),CHKREF(lit_33),T119,ENVNUL);
  T123 = BOUNDP(YwriteYquotationQ);
  if (T123 != YPfalse) {
    T122 = CHKREF(YwriteYquotationQ);
  } else {
    T122 = YPfalse;
  }
  T121 = fun_quotationQ_27;
  T120 = CALL2(CHKREF(YPdefine_method),T122,T121);
  YwriteYquotationQ = T120;
  lit_35 = YPPsym((P)"write-vector");
  lit_36 = YPsb((P)" ...");
  lit_37 = YPsb((P)"#(");
  T125 = YPsig(YPPlist(1,CHKREF(lit_28)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_28 = YPmet(FUNCODEREF(fun_loop_28),CHKREF(lit_27),T125,ENVNUL);
  T124 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLvecG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_write_vector_29 = YPmet(FUNCODEREF(fun_write_vector_29),CHKREF(lit_35),T124,ENVNUL);
  T129 = BOUNDP(YwriteYwrite_vector);
  if (T129 != YPfalse) {
    T128 = CHKREF(YwriteYwrite_vector);
  } else {
    T128 = YPfalse;
  }
  T127 = fun_write_vector_29;
  T126 = CALL2(CHKREF(YPdefine_method),T128,T127);
  YwriteYwrite_vector = T126;
  lit_38 = YPPsym((P)"write-map");
  lit_39 = YPPsym((P)"blow");
  lit_40 = YPPsym((P)"x-1212");
  lit_41 = YPPsym((P)"x-1208");
  lit_42 = YPPsym((P)"x-1210");
  lit_43 = YPsb((P)": ");
  lit_44 = YPsb((P)" ...");
  lit_45 = YPsb((P)"#[");
  T132 = YPsig(YPPlist(2,CHKREF(lit_42),CHKREF(lit_41)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_x_1212_30 = YPmet(FUNCODEREF(fun_x_1212_30),CHKREF(lit_40),T132,ENVNUL);
  T131 = YPsig(YPPlist(1,CHKREF(lit_39)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T131,ENVNUL);
  T130 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YruntimeYLmapG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_write_map_32 = YPmet(FUNCODEREF(fun_write_map_32),CHKREF(lit_38),T130,ENVNUL);
  T136 = BOUNDP(YwriteYwrite_map);
  if (T136 != YPfalse) {
    T135 = CHKREF(YwriteYwrite_map);
  } else {
    T135 = YPfalse;
  }
  T134 = fun_write_map_32;
  T133 = CALL2(CHKREF(YPdefine_method),T135,T134);
  YwriteYwrite_map = T133;
  lit_46 = YPsb((P)"#{Input-port}");
  T137 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YruntimeYLinput_portG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_33 = YPmet(FUNCODEREF(fun_recurring_write_33),CHKREF(lit_13),T137,ENVNUL);
  T141 = BOUNDP(YwriteYrecurring_write);
  if (T141 != YPfalse) {
    T140 = CHKREF(YwriteYrecurring_write);
  } else {
    T140 = YPfalse;
  }
  T139 = fun_recurring_write_33;
  T138 = CALL2(CHKREF(YPdefine_method),T140,T139);
  YwriteYrecurring_write = T138;
  lit_47 = YPsb((P)"#{Output-port}");
  T142 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YruntimeYLoutput_portG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_34 = YPmet(FUNCODEREF(fun_recurring_write_34),CHKREF(lit_13),T142,ENVNUL);
  T146 = BOUNDP(YwriteYrecurring_write);
  if (T146 != YPfalse) {
    T145 = CHKREF(YwriteYrecurring_write);
  } else {
    T145 = YPfalse;
  }
  T144 = fun_recurring_write_34;
  T143 = CALL2(CHKREF(YPdefine_method),T145,T144);
  YwriteYrecurring_write = T143;
  lit_48 = YPPsym((P)"write-params");
  lit_49 = YPsb((P)" => %=");
  lit_50 = YPPsym((P)"x-1219");
  lit_51 = YPPsym((P)"x-1213");
  lit_52 = YPPsym((P)"x-1215");
  lit_53 = YPPsym((P)"x-1217");
  lit_54 = YPsb((P)"(%s %=)");
  T148 = YPsig(YPPlist(3,CHKREF(lit_53),CHKREF(lit_52),CHKREF(lit_51)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_x_1219_35 = YPmet(FUNCODEREF(fun_x_1219_35),CHKREF(lit_50),T148,ENVNUL);
  T147 = YPsig(YPPlist(3,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_3)),YPPlist(3,CHKREF(YruntimeYLoutput_portG),CHKREF(YLfunG),CHKREF(YLfunG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_write_params_36 = YPmet(FUNCODEREF(fun_write_params_36),CHKREF(lit_48),T147,ENVNUL);
  T152 = BOUNDP(YwriteYwrite_params);
  if (T152 != YPfalse) {
    T151 = CHKREF(YwriteYwrite_params);
  } else {
    T151 = YPfalse;
  }
  T150 = fun_write_params_36;
  T149 = CALL2(CHKREF(YPdefine_method),T151,T150);
  YwriteYwrite_params = T149;
  lit_55 = YPPsym((P)"write-fun-guts");
  lit_56 = YPsb((P)"}");
  lit_57 = YPsb((P)"#{");
  T153 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_1),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLfunG),CHKREF(YLstrG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_write_fun_guts_37 = YPmet(FUNCODEREF(fun_write_fun_guts_37),CHKREF(lit_55),T153,ENVNUL);
  T157 = BOUNDP(YwriteYwrite_fun_guts);
  if (T157 != YPfalse) {
    T156 = CHKREF(YwriteYwrite_fun_guts);
  } else {
    T156 = YPfalse;
  }
  T155 = fun_write_fun_guts_37;
  T154 = CALL2(CHKREF(YPdefine_method),T156,T155);
  YwriteYwrite_fun_guts = T154;
  lit_58 = YPsb((P)"Gen");
  T158 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLgenG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_38 = YPmet(FUNCODEREF(fun_recurring_write_38),CHKREF(lit_13),T158,ENVNUL);
  T162 = BOUNDP(YwriteYrecurring_write);
  if (T162 != YPfalse) {
    T161 = CHKREF(YwriteYrecurring_write);
  } else {
    T161 = YPfalse;
  }
  T160 = fun_recurring_write_38;
  T159 = CALL2(CHKREF(YPdefine_method),T161,T160);
  YwriteYrecurring_write = T159;
  lit_59 = YPsb((P)"Met");
  T163 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLmetG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_39 = YPmet(FUNCODEREF(fun_recurring_write_39),CHKREF(lit_13),T163,ENVNUL);
  T167 = BOUNDP(YwriteYrecurring_write);
  if (T167 != YPfalse) {
    T166 = CHKREF(YwriteYrecurring_write);
  } else {
    T166 = YPfalse;
  }
  T165 = fun_recurring_write_39;
  T164 = CALL2(CHKREF(YPdefine_method),T166,T165);
  YwriteYrecurring_write = T164;
  lit_60 = YPsb((P)"}");
  lit_61 = YPsb((P)" ");
  lit_62 = YPsb((P)"#{Class ");
  T168 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLclassG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_40 = YPmet(FUNCODEREF(fun_recurring_write_40),CHKREF(lit_13),T168,ENVNUL);
  T172 = BOUNDP(YwriteYrecurring_write);
  if (T172 != YPfalse) {
    T171 = CHKREF(YwriteYrecurring_write);
  } else {
    T171 = YPfalse;
  }
  T170 = fun_recurring_write_40;
  T169 = CALL2(CHKREF(YPdefine_method),T171,T170);
  YwriteYrecurring_write = T169;
  lit_63 = YPsb((P)"}");
  lit_64 = YPsb((P)"#{T= ");
  T173 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLsingletonG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_41 = YPmet(FUNCODEREF(fun_recurring_write_41),CHKREF(lit_13),T173,ENVNUL);
  T177 = BOUNDP(YwriteYrecurring_write);
  if (T177 != YPfalse) {
    T176 = CHKREF(YwriteYrecurring_write);
  } else {
    T176 = YPfalse;
  }
  T175 = fun_recurring_write_41;
  T174 = CALL2(CHKREF(YPdefine_method),T176,T175);
  YwriteYrecurring_write = T174;
  lit_65 = YPsb((P)"}");
  lit_66 = YPsb((P)"#{T< ");
  T178 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLsubclassG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_42 = YPmet(FUNCODEREF(fun_recurring_write_42),CHKREF(lit_13),T178,ENVNUL);
  T182 = BOUNDP(YwriteYrecurring_write);
  if (T182 != YPfalse) {
    T181 = CHKREF(YwriteYrecurring_write);
  } else {
    T181 = YPfalse;
  }
  T180 = fun_recurring_write_42;
  T179 = CALL2(CHKREF(YPdefine_method),T181,T180);
  YwriteYrecurring_write = T179;
  lit_67 = YPsb((P)"}");
  lit_68 = YPsb((P)"#{T+ ");
  T183 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLunionG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_43 = YPmet(FUNCODEREF(fun_recurring_write_43),CHKREF(lit_13),T183,ENVNUL);
  T187 = BOUNDP(YwriteYrecurring_write);
  if (T187 != YPfalse) {
    T186 = CHKREF(YwriteYrecurring_write);
  } else {
    T186 = YPfalse;
  }
  T185 = fun_recurring_write_43;
  T184 = CALL2(CHKREF(YPdefine_method),T186,T185);
  YwriteYrecurring_write = T184;
  lit_69 = YPsb((P)"}");
  lit_70 = YPsb((P)"#{Slot ");
  T188 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLslotG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_44 = YPmet(FUNCODEREF(fun_recurring_write_44),CHKREF(lit_13),T188,ENVNUL);
  T192 = BOUNDP(YwriteYrecurring_write);
  if (T192 != YPfalse) {
    T191 = CHKREF(YwriteYrecurring_write);
  } else {
    T191 = YPfalse;
  }
  T190 = fun_recurring_write_44;
  T189 = CALL2(CHKREF(YPdefine_method),T191,T190);
  YwriteYrecurring_write = T189;
  lit_71 = YPsb((P)"}");
  lit_72 = YPPsym((P)"x-1224");
  lit_73 = YPPsym((P)"x-1220");
  lit_74 = YPPsym((P)"x-1222");
  lit_75 = YPsb((P)": ");
  lit_76 = YPsb((P)" ...");
  lit_77 = YPsb((P)"#{");
  T195 = YPsig(YPPlist(2,CHKREF(lit_74),CHKREF(lit_73)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_x_1224_45 = YPmet(FUNCODEREF(fun_x_1224_45),CHKREF(lit_72),T195,ENVNUL);
  T194 = YPsig(YPPlist(1,CHKREF(lit_39)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T194,ENVNUL);
  T193 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_47 = YPmet(FUNCODEREF(fun_recurring_write_47),CHKREF(lit_13),T193,ENVNUL);
  T199 = BOUNDP(YwriteYrecurring_write);
  if (T199 != YPfalse) {
    T198 = CHKREF(YwriteYrecurring_write);
  } else {
    T198 = YPfalse;
  }
  T197 = fun_recurring_write_47;
  T196 = CALL2(CHKREF(YPdefine_method),T198,T197);
  YwriteYrecurring_write = T196;
  lit_78 = YPsb((P)"#{End-of-file}");
  T202 = CALL0(CHKREF(YruntimeYeof_object));
  T201 = CALL1(CHKREF(YruntimeYtE),T202);
  T200 = YPsig(YPPlist(4,CHKREF(lit_6),CHKREF(lit_5),CHKREF(lit_4),CHKREF(lit_3)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),T201,CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG));
  fun_recurring_write_48 = YPmet(FUNCODEREF(fun_recurring_write_48),CHKREF(lit_13),T200,ENVNUL);
  T206 = BOUNDP(YwriteYrecurring_write);
  if (T206 != YPfalse) {
    T205 = CHKREF(YwriteYrecurring_write);
  } else {
    T205 = YPfalse;
  }
  T204 = fun_recurring_write_48;
  T203 = CALL2(CHKREF(YPdefine_method),T205,T204);
  YwriteYrecurring_write = T203;
  lit_79 = YPPsym((P)"format");
  lit_80 = YPPsym((P)"arguments");
  lit_81 = YPPsym((P)"message");
  lit_82 = YPsb((P)"Incomplete format directive in \"%s\"");
  lit_83 = YPPsym((P)"c");
  lit_84 = YPsb((P)"Invalid format directive '%s' in \"%s\"");
  lit_85 = YPPsym((P)"arg");
  lit_86 = YPPsym((P)"class");
  lit_87 = YPsb((P)"Format argument for directive '%%%c' not of class %s: %=");
  lit_88 = YPsb((P)"Too few arguments for format string %=: %=");
  T209 = YPsig(YPPlist(1,CHKREF(lit_83)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T209,ENVNUL);
  T208 = YPsig(YPPlist(2,CHKREF(lit_25),CHKREF(lit_86)),YPPlist(2,CHKREF(YLchrG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_arg_50 = YPmet(FUNCODEREF(fun_arg_50),CHKREF(lit_85),T208,ENVNUL);
  T207 = YPsig(YPPlist(3,CHKREF(lit_6),CHKREF(lit_81),CHKREF(lit_80)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLstrG)),YPtrue,YPint((P)2),CHKREF(YLanyG));
  fun_format_51 = YPmet(FUNCODEREF(fun_format_51),CHKREF(lit_79),T207,ENVNUL);
  T213 = BOUNDP(YruntimeYformat);
  if (T213 != YPfalse) {
    T212 = CHKREF(YruntimeYformat);
  } else {
    T212 = YPfalse;
  }
  T211 = fun_format_51;
  T210 = CALL2(CHKREF(YPdefine_method),T212,T211);
  YruntimeYformat = T210;
  lit_89 = YPPsym((P)"format-to-string");
  lit_90 = YPPsym((P)"out");
  T215 = YPsig(YPPlist(1,CHKREF(lit_90)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T215,ENVNUL);
  T214 = YPsig(YPPlist(2,CHKREF(lit_81),CHKREF(lit_80)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLstrG));
  YruntimeYformat_to_string = YPmet(FUNCODEREF(YruntimeYformat_to_string),CHKREF(lit_89),T214,ENVNUL);
  T216 = YruntimeYformat_to_string;
  YruntimeYformat_to_string = T216;
  T217 = YPfalse;
  return T217;
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
  {"$char-long-names", &module_info_read, "$char-long-names"},
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
  {"read-from-string", &module_info_read, "read-from-string"},
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
  {"write", &YwriteYwrite},
  {"writeln", &YwriteYwriteln},
  {"do-display", &YwriteYdo_display},
  {"write-vector", &YwriteYwrite_vector},
  {"write-fun-guts", &YwriteYwrite_fun_guts},
  {"write-char-literal", &YwriteYwrite_char_literal},
  {"---main-0---", NULL},
  {"as-binding-name", &YwriteYas_binding_name},
  {"quotation?", &YwriteYquotationQ},
  {"recurring-write", &YwriteYrecurring_write},
  {"display", &YwriteYdisplay},
  {"write-string-literal", &YwriteYwrite_string_literal},
  {"*max-print-length*", &YwriteYTmax_print_lengthT},
  {"write-map", &YwriteYwrite_map},
  {"write-list", &YwriteYwrite_list},
  {"*max-print-depth*", &YwriteYTmax_print_depthT},
  {"write-to-string", &YwriteYwrite_to_string},
  {"write-params", &YwriteYwrite_params},
  {"write-number", &YwriteYwrite_number},
  {"character-name", &YwriteYcharacter_name},
  {"write-boolean", &YwriteYwrite_boolean},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"format-to-string", "format-to-string"},
  {"writeln", "writeln"},
  {"write", "write"},
  {"format", "format"},
  {"display", "display"},
  {"write-to-string", "write-to-string"},
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
