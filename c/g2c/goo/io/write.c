/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: write */

EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
DEF(YwriteYdisplay,"write","display");
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
DEF(YwriteYwrite_boolean,"write","write-boolean");
EXT(YruntimeYLfile_portG,"runtime","<file-port>");
EXT(YruntimeYassoc,"runtime","assoc");
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
DEF(YwriteYrecurring_write,"write","recurring-write");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYmap,"macros","map");
EXT(YruntimeYelt_or,"runtime","elt-or");
EXT(YruntimeYelt,"runtime","elt");
EXT(YruntimeYLE,"runtime","<=");
EXT(YruntimeYelt_setter,"runtime","elt-setter");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYassocs_test,"runtime","assocs-test");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(YruntimeYport_index,"runtime","port-index");
DEF(YwriteYwrite_char_literal,"write","write-char-literal");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
DEF(YwriteYwrite_string_literal,"write","write-string-literal");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYmap2,"runtime","map2");
EXT(YruntimeYlogior,"runtime","logior");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YruntimeYPwith_monitor,"runtime","%with-monitor");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
DEF(YwriteYquotationQ,"write","quotation?");
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
EXT(YreadYread_from_string,"read","read-from-string");
EXT(YruntimeYLfile_input_portG,"runtime","<file-input-port>");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
EXT(YruntimeYport_contents,"runtime","port-contents");
EXT(YruntimeYnewline,"runtime","newline");
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(Yclass_slots,"boot","class-slots");
DEF(YwriteYTmax_print_lengthT,"write","*max-print-length*");
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
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YPPmacro,"boot","%%macro");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YPdefine_method,"boot","%define-method");
EXT(Yadd_slot,"boot","add-slot");
EXT(YreadYDchar_long_names,"read","$char-long-names");
DEF(YwriteYwriteln,"write","writeln");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYpush,"runtime","push");
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
DEF(YwriteYwrite_number,"write","write-number");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YruntimeYzeroQ,"runtime","zero?");
EXT(Yobject_parents,"boot","object-parents");
EXT(YruntimeYnow_key,"runtime","now-key");
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
EXT(YPvnul,"boot","%vnul");
EXT(Yslot_setter,"boot","slot-setter");
DEF(YwriteYas_binding_name,"write","as-binding-name");
EXT(YruntimeYLmapG,"runtime","<map>");
DEF(YwriteYwrite_params,"write","write-params");
EXT(YruntimeYvec,"runtime","vec");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(Yobject_slots,"boot","object-slots");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYsub,"runtime","sub");
EXT(Ylst,"boot","lst");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(Yfind_setter,"boot","find-setter");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YruntimeYround,"runtime","round");
EXT(YruntimeYbuf,"runtime","buf");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
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
DEF(YwriteYwrite_flat,"write","write-flat");
EXT(YruntimeYpush_lastX,"runtime","push-last!");
EXT(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
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
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYstr_to_num,"runtime","str-to-num");
EXT(YruntimeYanyQ,"runtime","any?");
EXT(YruntimeYcall_with_string_output_port,"runtime","call-with-string-output-port");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(Yfind_getter,"boot","find-getter");
EXT(YruntimeYfill,"runtime","fill");
EXT(Yobject_class,"boot","object-class");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
DEF(YwriteYwrite_to_string,"write","write-to-string");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YruntimeYdel_keys,"runtime","del-keys");
EXT(YruntimeYA,"runtime","+");
EXT(YLlstG,"boot","<lst>");
EXT(YruntimeYnumericQ,"runtime","numeric?");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YruntimeYfrom_to_by,"runtime","from-to-by");
EXT(YLfunG,"boot","<fun>");
EXT(YruntimeYassq,"runtime","assq");
DEF(YwriteYwrite_list,"write","write-list");
DEF(YwriteYwrite_fun_guts,"write","write-fun-guts");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YruntimeYalter,"runtime","alter");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YDmax_int,"boot","$max-int");
EXT(YLseqG,"boot","<seq>");
EXT(YruntimeYpeek_char,"runtime","peek-char");
DEF(YwriteYwrite,"write","write");
EXT(YruntimeYmin,"runtime","min");
EXT(YruntimeYtable_growth_factor,"runtime","table-growth-factor");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYtruncate,"runtime","truncate");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YruntimeYS,"runtime","/");
EXT(YruntimeYpop,"runtime","pop");
EXT(Yslot_getter,"boot","slot-getter");
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
DEF(YwriteYTmax_print_depthT,"write","*max-print-depth*");
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
EXT(YruntimeYneg,"runtime","neg");
EXT(YruntimeYlist,"runtime","list");
EXT(YLsigG,"boot","<sig>");
EXT(YruntimeYfrom_to,"runtime","from-to");
DEF(YwriteYrecurring_write_type,"write","recurring-write-type");
EXT(Ytype_object,"boot","type-object");
EXT(YruntimeYcopy_state,"runtime","copy-state");
EXT(Yhead_setter,"boot","head-setter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YruntimeYfrom_by,"runtime","from-by");
EXT(YruntimeYcompose,"runtime","compose");
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
DEF(YwriteYcharacter_name,"write","character-name");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
EXT(YruntimeYassqn,"runtime","assqn");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYto_digit,"runtime","to-digit");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
DEF(YwriteYwrite_type,"write","write-type");
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
EXT(YmacrosYgensym,"macros","gensym");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YLnumG,"boot","<num>");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYceilingS,"runtime","ceiling/");
DEF(YwriteYwrite_map,"write","write-map");
EXT(YruntimeYascii_limit,"runtime","ascii-limit");
EXT(YruntimeYfrom_above_by,"runtime","from-above-by");
EXT(YruntimeYdo2,"runtime","do2");
DEF(YwriteYdo_display,"write","do-display");
EXT(Yfun_value,"boot","fun-value");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYash,"runtime","ash");
EXT(YruntimeY_,"runtime","-");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YruntimeYnum_to_str,"runtime","num-to-str");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(YmacrosYpair,"macros","pair");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(Ytype_error,"boot","type-error");
EXT(YLchrG,"boot","<chr>");
EXT(YruntimeYroundS,"runtime","round/");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_69);
DEFLIT(lit_37);
DEFLIT(lit_22);
DEFLIT(lit_16);
DEFLIT(lit_31);
DEFLIT(lit_89);
DEFLIT(lit_41);
DEFLIT(lit_58);
DEFLIT(lit_8);
DEFLIT(lit_80);
DEFLIT(lit_44);
DEFLIT(lit_4);
DEFLIT(lit_30);
DEFLIT(lit_56);
DEFLIT(lit_53);
DEFLIT(lit_54);
DEFLIT(lit_10);
DEFLIT(lit_59);
DEFLIT(lit_61);
DEFLIT(lit_87);
DEFLIT(lit_90);
DEFLIT(lit_92);
DEFLIT(lit_47);
DEFLIT(lit_93);
DEFLIT(lit_35);
DEFLIT(lit_3);
DEFLIT(lit_84);
DEFLIT(lit_11);
DEFLIT(lit_50);
DEFLIT(lit_7);
DEFLIT(lit_34);
DEFLIT(lit_72);
DEFLIT(lit_70);
DEFLIT(lit_76);
DEFLIT(lit_81);
DEFLIT(lit_38);
DEFLIT(lit_18);
DEFLIT(lit_51);
DEFLIT(lit_33);
DEFLIT(lit_21);
DEFLIT(lit_85);
DEFLIT(lit_9);
DEFLIT(lit_6);
DEFLIT(lit_15);
DEFLIT(lit_1);
DEFLIT(lit_48);
DEFLIT(lit_25);
DEFLIT(lit_86);
DEFLIT(lit_26);
DEFLIT(lit_40);
DEFLIT(lit_0);
DEFLIT(lit_64);
DEFLIT(lit_46);
DEFLIT(lit_74);
DEFLIT(lit_2);
DEFLIT(lit_65);
DEFLIT(lit_79);
DEFLIT(lit_52);
DEFLIT(lit_29);
DEFLIT(lit_39);
DEFLIT(lit_73);
DEFLIT(lit_32);
DEFLIT(lit_20);
DEFLIT(lit_28);
DEFLIT(lit_68);
DEFLIT(lit_49);
DEFLIT(lit_43);
DEFLIT(lit_83);
DEFLIT(lit_62);
DEFLIT(lit_94);
DEFLIT(lit_13);
DEFLIT(lit_60);
DEFLIT(lit_71);
DEFLIT(lit_88);
DEFLIT(lit_67);
DEFLIT(lit_77);
DEFLIT(lit_14);
DEFLIT(lit_82);
DEFLIT(lit_55);
DEFLIT(lit_57);
DEFLIT(lit_24);
DEFLIT(lit_75);
DEFLIT(lit_78);
DEFLIT(lit_17);
DEFLIT(lit_23);
DEFLIT(lit_42);
DEFLIT(lit_66);
DEFLIT(lit_12);
DEFLIT(lit_27);
DEFLIT(lit_91);
DEFLIT(lit_5);
DEFLIT(lit_63);
DEFLIT(lit_36);
DEFLIT(lit_45);
DEFLIT(lit_19);

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
LOCFOR(fun_write_flat_29);
LOCFOR(fun_x_1233_30);
LOCFOR(fun_31);
LOCFOR(fun_write_map_32);
LOCFOR(fun_recurring_write_33);
LOCFOR(fun_recurring_write_34);
LOCFOR(fun_x_1240_35);
LOCFOR(fun_write_params_36);
LOCFOR(fun_write_fun_guts_37);
LOCFOR(fun_recurring_write_38);
LOCFOR(fun_recurring_write_39);
LOCFOR(fun_recurring_write_40);
LOCFOR(fun_recurring_write_41);
LOCFOR(fun_recurring_write_42);
LOCFOR(fun_43);
LOCFOR(fun_recurring_write_44);
LOCFOR(fun_recurring_write_type_45);
LOCFOR(fun_recurring_write_type_46);
LOCFOR(fun_write_type_47);
LOCFOR(fun_recurring_write_48);
LOCFOR(fun_x_1245_49);
LOCFOR(fun_50);
LOCFOR(fun_recurring_write_51);
LOCFOR(fun_recurring_write_52);
LOCFOR(fun_arg_53);
LOCFOR(fun_54);
LOCFOR(fun_format_55);
LOCFOR(fun_56);
FUNFOR(YruntimeYformat_to_string);
extern P YwriteY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_as_binding_name_0) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLstrG),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_display_1) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_display_2) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYwrite_char),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_display_3) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,CHKREF(YwriteYrecurring_write),4,port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recur_4) {
  P x_,d_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYGE),d_,CHKREF(YwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,CHKREF(YruntimeYwrite_string),FREEREF(0),CHKREF(lit_8));
    T0 = T2;
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYA),d_,YPint((P)1));
    T3 = CALLN(1,CHKREF(YwriteYdo_display),4,FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_display_5) {
  P port_,x_;
  P recurF1121;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF1121 = T1;
  FUNINIT(recurF1121, 2,port_,recurF1121);
  T2 = CALL2(0,recurF1121,x_,YPint((P)-1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_to_string_6) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYrcurry),CHKREF(YwriteYwrite),x_);
  T0 = CALL1(1,CHKREF(YruntimeYcall_with_string_output_port),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_recur_7) {
  P x_,d_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYGE),d_,CHKREF(YwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,CHKREF(YruntimeYwrite_string),FREEREF(0),CHKREF(lit_11));
    T0 = T2;
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYA),d_,YPint((P)1));
    T3 = CALLN(1,CHKREF(YwriteYrecurring_write),4,FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_8) {
  P port_,x_;
  P recurF1122;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_7,2);
  recurF1122 = T1;
  FUNINIT(recurF1122, 2,port_,recurF1122);
  T2 = CALL2(0,recurF1122,x_,YPint((P)-1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_writeln_9) {
  P port_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,CHKREF(YwriteYwrite),port_,x_);
  T0 = CALL1(1,CHKREF(YruntimeYnewline),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_10) {
  P port_,x_,d_,recur_;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL1(1,CHKREF(YmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_14));
    T0 = T2;
  } else {
    T3 = CALLN(1,CHKREF(YwriteYwrite_list),4,port_,x_,d_,recur_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_11) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,CHKREF(YwriteYwrite_flat),4,port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_12) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,CHKREF(YwriteYwrite_map),4,port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_13) {
  P port_,x_,d_,recur_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  if (x_ != YPfalse) {
    T1 = CALL2(1,CHKREF(YwriteYwrite_boolean),port_,CHKREF(lit_15));
    T0 = T1;
  } else {
    T2 = CALL2(1,CHKREF(YwriteYwrite_boolean),port_,CHKREF(lit_16));
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_14) {
  P port_,x_,d_,recur_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLstrG),x_);
  T0 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_15) {
  P port_,x_,d_,recur_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_17));
  T2 = (P)YPlu(x_);
  T1 = (P)YPib(T2);
  T0 = CALL2(1,CHKREF(YruntimeYnum_to_str),T1,YPint((P)16));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_16) {
  P port_,x_,d_,recur_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL2(1,CHKREF(YmacrosYEE),x_,CHKREF(YLnumG));
  if (T1 != YPfalse) {
    T3 = CALL1(1,CHKREF(YwriteYas_binding_name),CHKREF(lit_18));
    T2 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T4 = CALL2(1,CHKREF(YwriteYwrite_number),port_,x_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_17) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,CHKREF(YwriteYwrite_string_literal),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_18) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,CHKREF(YwriteYwrite_char_literal),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_boolean_19) {
  P port_,mumble_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(mumble_, 1);
loop:
  CALL2(1,CHKREF(YruntimeYwrite_char),port_,YPchr((P)35));
  T0 = CALL2(1,CHKREF(YwriteYwrite),port_,mumble_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_number_20) {
  P port_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYnum_to_str),x_,YPint((P)10));
  T0 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_char_literal_21) {
  P port_,x_;
  P probeF1123;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,CHKREF(YwriteYcharacter_name),x_);
  probeF1123 = T1;
  CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_23));
  if (probeF1123 != YPfalse) {
    T3 = CALL2(1,CHKREF(YwriteYwrite),port_,probeF1123);
    T2 = T3;
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYwrite_char),port_,x_);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_character_name_22) {
  P char_;
  P tmpF1125;
  P assocF1124;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T1 = CALL3(1,CHKREF(YruntimeYassqn),char_,CHKREF(YreadYDchar_long_names),YPint((P)1));
  assocF1124 = T1;
  tmpF1125 = assocF1124;
  if (tmpF1125 != YPfalse) {
    T4 = CALL1(1,CHKREF(YruntimeY1st),assocF1124);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_23) {
  P i_;
  P tmpF1127;
  P cF1126;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,CHKREF(YruntimeYwrite_char),FREEREF(1),YPchr((P)34));
    T0 = T2;
  } else {
    T4 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(2),i_);
    cF1126 = T4;
    T6 = CALL2(1,CHKREF(YruntimeYE),cF1126,YPchr((P)92));
    tmpF1127 = T6;
    if (tmpF1127 != YPfalse) {
      T7 = tmpF1127;
    } else {
      T8 = CALL2(1,CHKREF(YruntimeYE),cF1126,YPchr((P)34));
      T7 = T8;
    }
    T5 = T7;
    if (T5 != YPfalse) {
      T9 = CALL2(1,CHKREF(YruntimeYwrite_char),FREEREF(1),YPchr((P)92));
    } else {
    }
    CALL2(1,CHKREF(YruntimeYwrite_char),FREEREF(1),cF1126);
    T11 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
    a1 = T11;
    i_ = a1;
    goto loop;
    T3 = T10;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_string_literal_24) {
  P port_,x_;
  P loopF1129;
  P lenF1128;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,CHKREF(YruntimeYwrite_char),port_,YPchr((P)34));
  T1 = CALL1(1,CHKREF(YruntimeYlen),x_);
  lenF1128 = T1;
  T3 = FUNSHELL(1,fun_loop_23,4);
  loopF1129 = T3;
  FUNINIT(loopF1129, 4,lenF1128,port_,x_,loopF1129);
  T4 = CALL1(0,loopF1129,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_25) {
  P l_,n_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T2 = CALL1(1,CHKREF(YmacrosYemptyQ),l_);
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,CHKREF(YruntimeYGE),n_,CHKREF(YwriteYTmax_print_lengthT));
    if (T4 != YPfalse) {
      T5 = CALL2(1,CHKREF(YruntimeYwrite_string),FREEREF(0),CHKREF(lit_32));
      T3 = T5;
    } else {
      CALL2(1,CHKREF(YruntimeYwrite_char),FREEREF(0),YPchr((P)32));
      T6 = CALL1(1,CHKREF(Yhead),l_);
      CALL2(1,FREEREF(1),T6,FREEREF(2));
      T8 = CALL1(1,CHKREF(Ytail),l_);
      T9 = CALL2(1,CHKREF(YruntimeYA),n_,YPint((P)1));
      a1 = T8;
      a2 = T9;
      l_ = a1;
      n_ = a2;
      goto loop;
      T3 = T7;
    }
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_list_26) {
  P port_,x_,d_,recur_;
  P loopF1130;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL1(1,CHKREF(YwriteYquotationQ),x_);
  if (T1 != YPfalse) {
    CALL2(1,CHKREF(YruntimeYwrite_char),port_,YPchr((P)39));
    T4 = CALL1(1,CHKREF(Ytail),x_);
    T3 = CALL1(1,CHKREF(Yhead),T4);
    T2 = CALL2(1,recur_,T3,d_);
    T0 = T2;
  } else {
    CALL2(1,CHKREF(YruntimeYwrite_char),port_,YPchr((P)40));
    T5 = CALL1(1,CHKREF(Yhead),x_);
    CALL2(1,recur_,T5,d_);
    T6 = FUNSHELL(1,fun_loop_25,4);
    loopF1130 = T6;
    FUNINIT(loopF1130, 4,port_,recur_,d_,loopF1130);
    T8 = CALL1(1,CHKREF(Ytail),x_);
    T7 = CALL2(0,loopF1130,T8,YPint((P)1));
    T9 = CALL2(1,CHKREF(YruntimeYwrite_char),port_,YPchr((P)41));
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_quotationQ_27) {
  P x_;
  P tmpF1133;
  P tmpF1132;
  P tmpF1131;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YisaQ),x_,CHKREF(YLlstG));
  tmpF1131 = T1;
  if (tmpF1131 != YPfalse) {
    T5 = CALL1(1,CHKREF(Yhead),x_);
    T4 = CALL2(1,CHKREF(YmacrosYEE),T5,CHKREF(lit_34));
    tmpF1132 = T4;
    if (tmpF1132 != YPfalse) {
      T9 = CALL1(1,CHKREF(Ytail),x_);
      T8 = CALL2(1,CHKREF(YisaQ),T9,CHKREF(YLlstG));
      tmpF1133 = T8;
      if (tmpF1133 != YPfalse) {
        T13 = CALL1(1,CHKREF(Ytail),x_);
        T12 = CALL1(1,CHKREF(Ytail),T13);
        T11 = CALL1(1,CHKREF(YmacrosYemptyQ),T12);
        T10 = T11;
      } else {
        T10 = YPfalse;
      }
      T7 = T10;
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T3 = T6;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_28) {
  P i_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,CHKREF(YruntimeYGE),i_,CHKREF(YwriteYTmax_print_lengthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,CHKREF(YruntimeYwrite_string),FREEREF(0),CHKREF(lit_39));
    T0 = T2;
  } else {
    T5 = CALL2(1,CHKREF(YruntimeYGE),i_,FREEREF(1));
    T4 = CALL1(1,CHKREF(Ynot),T5);
    if (T4 != YPfalse) {
      CALL2(1,CHKREF(YruntimeYwrite_char),FREEREF(0),YPchr((P)32));
      T6 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(3),i_);
      CALL2(1,FREEREF(2),T6,FREEREF(4));
      T8 = CALL2(1,CHKREF(YruntimeYA),i_,YPint((P)1));
      a1 = T8;
      i_ = a1;
      goto loop;
      T3 = T7;
    } else {
      T3 = YPfalse;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_flat_29) {
  P port_,x_,d_,recur_;
  P loopF1135;
  P zF1134;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,CHKREF(YisaQ),x_,CHKREF(YLvecG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_36));
  } else {
    CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_37));
    T3 = CALL1(1,CHKREF(Yobject_class),x_);
    T2 = CALL1(1,CHKREF(Yclass_name),T3);
    CALL2(1,CHKREF(YwriteYdisplay),port_,T2);
    T4 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_38));
  }
  T5 = CALL1(1,CHKREF(YruntimeYlen),x_);
  zF1134 = T5;
  T7 = CALL2(1,CHKREF(YruntimeYG),zF1134,YPint((P)0));
  if (T7 != YPfalse) {
    T8 = CALL2(1,CHKREF(YruntimeYelt),x_,YPint((P)0));
    CALL2(1,recur_,T8,d_);
    T10 = FUNSHELL(1,fun_loop_28,6);
    loopF1135 = T10;
    FUNINIT(loopF1135, 6,port_,zF1134,recur_,x_,d_,loopF1135);
    T11 = CALL1(0,loopF1135,YPint((P)1));
    T9 = T11;
    T6 = T9;
  } else {
    T6 = YPfalse;
  }
  T12 = CALL2(1,CHKREF(YruntimeYwrite_char),port_,YPchr((P)41));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_x_1233_30) {
  P x_1231_,x_1229_;
  P tup36F1142;
  P valF1141;
  P tup36F1140;
  P keyF1139;
  P tup36F1138;
  P iF1137;
  P tmpF1136;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1231_, 0);
  ARG(x_1229_, 1);
loop:
  T3 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1231_);
  tmpF1136 = T3;
  if (tmpF1136 != YPfalse) {
    T4 = tmpF1136;
  } else {
    T5 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(1),x_1229_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),x_1231_);
    iF1137 = T7;
    T10 = CALL2(1,CHKREF(YruntimeYnow_key),FREEREF(1),x_1229_);
    T11 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(1),x_1229_);
    T9 = CALL2(1,CHKREF(YmacrosYtup),T10,T11);
    tup36F1138 = T9;
    T13 = CALL1(1,CHKREF(Yhead),tup36F1138);
    keyF1139 = T13;
    T15 = CALL1(1,CHKREF(Ytail),tup36F1138);
    tup36F1140 = T15;
    T17 = CALL1(1,CHKREF(Yhead),tup36F1140);
    valF1141 = T17;
    T19 = CALL1(1,CHKREF(Ytail),tup36F1140);
    tup36F1142 = T19;
    T20 = CALL2(1,CHKREF(YruntimeYGE),iF1137,CHKREF(YwriteYTmax_print_lengthT));
    if (T20 != YPfalse) {
      CALL2(1,CHKREF(YruntimeYwrite_string),FREEREF(2),CHKREF(lit_46));
      T21 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL2(1,CHKREF(YruntimeYwrite_char),FREEREF(2),YPchr((P)32));
    CALL2(1,FREEREF(4),keyF1139,FREEREF(5));
    CALL2(1,CHKREF(YruntimeYwrite_string),FREEREF(2),CHKREF(lit_47));
    CALL2(1,FREEREF(4),valF1141,FREEREF(5));
    T23 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),x_1231_);
    T24 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(1),x_1229_);
    a1 = T23;
    a2 = T24;
    x_1231_ = a1;
    x_1229_ = a2;
    goto loop;
    T18 = T22;
    T16 = T18;
    T14 = T16;
    T12 = T14;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  P blow_;
  P x_1233F1145;
  P x_1230F1144;
  P x_1232F1143;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYfrom),YPint((P)0));
  x_1232F1143 = T1;
  x_1230F1144 = FREEREF(0);
  T4 = FUNSHELL(1,fun_x_1233_30,7);
  x_1233F1145 = T4;
  FUNINIT(x_1233F1145, 7,x_1232F1143,x_1230F1144,FREEREF(1),blow_,FREEREF(2),FREEREF(3),x_1233F1145);
  T6 = CALL1(1,CHKREF(YruntimeYini_state),x_1232F1143);
  T7 = CALL1(1,CHKREF(YruntimeYini_state),x_1230F1144);
  T5 = CALL2(0,x_1233F1145,T6,T7);
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_map_32) {
  P port_,x_,d_,recur_;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_41));
  T1 = CALL1(1,CHKREF(Yobject_class),x_);
  T0 = CALL1(1,CHKREF(Yclass_name),T1);
  CALL2(1,CHKREF(YwriteYdisplay),port_,T0);
  T2 = FUNFAB(fun_31,4,x_,port_,recur_,d_);
  with_exit(T2);
  T3 = CALL2(1,CHKREF(YruntimeYwrite_char),port_,YPchr((P)93));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_33) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_48));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_34) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_49));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1240_35) {
  P x_1238_,x_1236_,x_1234_;
  P iF1150;
  P specF1149;
  P firstQF1148;
  P tmpF1147;
  P tmpF1146;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1238_, 0);
  ARG(x_1236_, 1);
  ARG(x_1234_, 2);
loop:
  T3 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1238_);
  tmpF1146 = T3;
  if (tmpF1146 != YPfalse) {
    T4 = tmpF1146;
  } else {
    T6 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(1),x_1236_);
    tmpF1147 = T6;
    if (tmpF1147 != YPfalse) {
      T7 = tmpF1147;
    } else {
      T8 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(2),x_1234_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),x_1238_);
    firstQF1148 = T10;
    T12 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(1),x_1236_);
    specF1149 = T12;
    T14 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(2),x_1234_);
    iF1150 = T14;
    T15 = CALL1(1,CHKREF(Ynot),firstQF1148);
    if (T15 != YPfalse) {
      T16 = CALL2(1,CHKREF(YruntimeYwrite_char),FREEREF(3),YPchr((P)32));
    } else {
    }
    T17 = CALL1(1,CHKREF(YmacrosYemptyQ),FREEREF(4));
    if (T17 != YPfalse) {
      T18 = CALL2(1,CHKREF(YwriteYwrite_type),FREEREF(3),specF1149);
    } else {
      T20 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(4),iF1150);
      T19 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLstrG),T20);
      CALL3(1,CHKREF(YruntimeYformat),FREEREF(3),CHKREF(lit_55),T19);
      CALL2(1,CHKREF(YwriteYwrite_type),FREEREF(3),specF1149);
      T21 = CALL2(1,CHKREF(YruntimeYwrite_char),FREEREF(3),YPchr((P)41));
    }
    T23 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),x_1238_);
    T24 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(1),x_1236_);
    T25 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(2),x_1234_);
    a1 = T23;
    a2 = T24;
    a3 = T25;
    x_1238_ = a1;
    x_1236_ = a2;
    x_1234_ = a3;
    goto loop;
    T13 = T22;
    T11 = T13;
    T9 = T11;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_params_36) {
  P port_,x_,recur_;
  P tmpF1158;
  P valueF1157;
  P x_1240F1156;
  P x_1235F1155;
  P x_1237F1154;
  P x_1239F1153;
  P namesF1152;
  P namesF1151;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
loop:
  T1 = CALL1(1,CHKREF(Yfun_names),x_);
  namesF1151 = T1;
  CALL2(1,CHKREF(YruntimeYwrite_char),port_,YPchr((P)40));
  T2 = CALL1(1,CHKREF(Yfun_names),x_);
  namesF1152 = T2;
  T4 = CALL2(1,CHKREF(YruntimeYfirst_then),YPtrue,YPfalse);
  x_1239F1153 = T4;
  T6 = CALL1(1,CHKREF(Yfun_specs),x_);
  x_1237F1154 = T6;
  T8 = CALL1(1,CHKREF(YruntimeYfrom),YPint((P)0));
  x_1235F1155 = T8;
  T10 = FUNSHELL(1,fun_x_1240_35,6);
  x_1240F1156 = T10;
  FUNINIT(x_1240F1156, 6,x_1239F1153,x_1237F1154,x_1235F1155,port_,namesF1152,x_1240F1156);
  T12 = CALL1(1,CHKREF(YruntimeYini_state),x_1239F1153);
  T13 = CALL1(1,CHKREF(YruntimeYini_state),x_1237F1154);
  T14 = CALL1(1,CHKREF(YruntimeYini_state),x_1235F1155);
  T11 = CALL3(0,x_1240F1156,T12,T13,T14);
  T9 = T11;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T15 = CALL1(1,CHKREF(Yfun_value),x_);
  valueF1157 = T15;
  T19 = CALL1(1,CHKREF(Ynot),valueF1157);
  tmpF1158 = T19;
  if (tmpF1158 != YPfalse) {
    T20 = tmpF1158;
  } else {
    T21 = CALL2(1,CHKREF(YmacrosYEE),valueF1157,CHKREF(YLanyG));
    T20 = T21;
  }
  T18 = T20;
  T17 = CALL1(1,CHKREF(Ynot),T18);
  if (T17 != YPfalse) {
    CALL2(1,CHKREF(YruntimeYformat),port_,CHKREF(lit_56));
    T22 = CALL2(1,CHKREF(YwriteYwrite_type),port_,valueF1157);
    T16 = T22;
  } else {
    T16 = YPfalse;
  }
  T23 = CALL2(1,CHKREF(YruntimeYwrite_char),port_,YPchr((P)41));
  T0 = T23;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_fun_guts_37) {
  P port_,x_,name_,recur_;
  P tmpF1160;
  P nameF1159;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(name_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_58));
  CALL2(1,CHKREF(YruntimeYwrite_string),port_,name_);
  T0 = CALL1(1,CHKREF(Yfun_name),x_);
  nameF1159 = T0;
  tmpF1160 = nameF1159;
  if (tmpF1160 != YPfalse) {
    CALL2(1,CHKREF(YruntimeYwrite_char),port_,YPchr((P)32));
    T4 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLstrG),nameF1159);
    T3 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  CALL2(1,CHKREF(YruntimeYwrite_char),port_,YPchr((P)32));
  CALL3(1,CHKREF(YwriteYwrite_params),port_,x_,recur_);
  T5 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_59));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_recurring_write_38) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,CHKREF(YwriteYwrite_fun_guts),4,port_,x_,CHKREF(lit_60),recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_39) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,CHKREF(YwriteYwrite_fun_guts),4,port_,x_,CHKREF(lit_61),recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_40) {
  P port_,x_,d_,recur_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_62));
  T1 = CALL1(1,CHKREF(Yclass_name),x_);
  T0 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLstrG),T1);
  CALL2(1,CHKREF(YruntimeYwrite_string),port_,T0);
  CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_63));
  T3 = CALL1(1,CHKREF(Yclass_direct_parents),x_);
  T2 = CALL2(1,CHKREF(YmacrosYmap),CHKREF(Yclass_name),T3);
  CALL2(1,recur_,T2,d_);
  T4 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_64));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_recurring_write_41) {
  P port_,x_,d_,recur_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_65));
  T0 = CALL1(1,CHKREF(Ytype_object),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_66));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_recurring_write_42) {
  P port_,x_,d_,recur_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_67));
  T0 = CALL1(1,CHKREF(Ytype_class),x_);
  CALL2(1,CHKREF(YwriteYwrite_type),port_,T0);
  T1 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_68));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_43) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  CALL2(1,CHKREF(YruntimeYwrite_char),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,CHKREF(YwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_44) {
  P port_,x_,d_,recur_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_69));
  T0 = FUNFAB(fun_43,1,port_);
  T1 = CALL1(1,CHKREF(Ytype_elts),x_);
  CALL2(1,CHKREF(YruntimeYdo),T0,T1);
  T2 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_70));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_recurring_write_type_45) {
  P port_,x_,d_,recur_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T2 = CALL1(1,CHKREF(Yclass_name),x_);
  T1 = CALL2(1,CHKREF(YruntimeYas),CHKREF(YLstrG),T2);
  T0 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_type_46) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,CHKREF(YwriteYrecurring_write),4,port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_type_47) {
  P port_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T0 = CALLN(1,CHKREF(YwriteYrecurring_write_type),4,port_,x_,YPint((P)0),CHKREF(YwriteYrecurring_write));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_48) {
  P port_,x_,d_,recur_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_73));
  T0 = CALL1(1,CHKREF(Yslot_getter),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_74));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_x_1245_49) {
  P x_1243_,x_1241_;
  P getterF1164;
  P slotF1163;
  P iF1162;
  P tmpF1161;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1243_, 0);
  ARG(x_1241_, 1);
loop:
  T3 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(0),x_1243_);
  tmpF1161 = T3;
  if (tmpF1161 != YPfalse) {
    T4 = tmpF1161;
  } else {
    T5 = CALL2(1,CHKREF(YruntimeYfin_stateQ),FREEREF(1),x_1241_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(0),x_1243_);
    iF1162 = T7;
    T9 = CALL2(1,CHKREF(YruntimeYnow_elt),FREEREF(1),x_1241_);
    slotF1163 = T9;
    T10 = CALL2(1,CHKREF(YruntimeYGE),iF1162,CHKREF(YwriteYTmax_print_lengthT));
    if (T10 != YPfalse) {
      CALL2(1,CHKREF(YruntimeYwrite_string),FREEREF(2),CHKREF(lit_79));
      T11 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T12 = CALL1(1,CHKREF(Yslot_getter),slotF1163);
    getterF1164 = T12;
    CALL2(1,CHKREF(YruntimeYwrite_char),FREEREF(2),YPchr((P)32));
    T13 = CALL1(1,CHKREF(Yfun_name),getterF1164);
    CALL2(1,CHKREF(YwriteYdisplay),FREEREF(2),T13);
    CALL2(1,CHKREF(YruntimeYwrite_string),FREEREF(2),CHKREF(lit_80));
    T15 = CALL1(1,getterF1164,FREEREF(5));
    T14 = CALL2(1,FREEREF(4),T15,FREEREF(6));
    T17 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(0),x_1243_);
    T18 = CALL2(1,CHKREF(YruntimeYnxt_state),FREEREF(1),x_1241_);
    a1 = T17;
    a2 = T18;
    x_1243_ = a1;
    x_1241_ = a2;
    goto loop;
    T8 = T16;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_50) {
  P blow_;
  P x_1245F1167;
  P x_1242F1166;
  P x_1244F1165;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = CALL1(1,CHKREF(YruntimeYfrom),YPint((P)0));
  x_1244F1165 = T1;
  T3 = CALL1(1,CHKREF(Yobject_slots),FREEREF(0));
  x_1242F1166 = T3;
  T5 = FUNSHELL(1,fun_x_1245_49,8);
  x_1245F1167 = T5;
  FUNINIT(x_1245F1167, 8,x_1244F1165,x_1242F1166,FREEREF(1),blow_,FREEREF(2),FREEREF(0),FREEREF(3),x_1245F1167);
  T7 = CALL1(1,CHKREF(YruntimeYini_state),x_1244F1165);
  T8 = CALL1(1,CHKREF(YruntimeYini_state),x_1242F1166);
  T6 = CALL2(0,x_1245F1167,T7,T8);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_51) {
  P port_,x_,d_,recur_;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_75));
  T1 = CALL1(1,CHKREF(Yobject_class),x_);
  T0 = CALL1(1,CHKREF(Yclass_name),T1);
  CALL2(1,CHKREF(YwriteYdisplay),port_,T0);
  T2 = FUNFAB(fun_50,4,x_,port_,recur_,d_);
  with_exit(T2);
  T3 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_81));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_52) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,CHKREF(YruntimeYwrite_string),port_,CHKREF(lit_82));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_53) {
  P char_,class_;
  P tmpF1170;
  P argumentF1169;
  P current_indexF1168;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
loop:
  T1 = BOXVAL(FREEREF(0));
  current_indexF1168 = T1;
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,CHKREF(YruntimeYA),T3,YPint((P)1));
  BOXVAL(FREEREF(0)) = T2;
  T5 = CALL2(1,CHKREF(YruntimeYL),current_indexF1168,FREEREF(1));
  T4 = CALL1(1,CHKREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,CHKREF(Yerror),CHKREF(lit_88),FREEREF(2),FREEREF(3));
  } else {
  }
  T8 = CALL2(1,CHKREF(YruntimeYelt),FREEREF(3),current_indexF1168);
  argumentF1169 = T8;
  T11 = CALL2(1,CHKREF(YmacrosYEE),class_,CHKREF(YLanyG));
  tmpF1170 = T11;
  if (tmpF1170 != YPfalse) {
    T12 = tmpF1170;
  } else {
    T13 = CALL2(1,CHKREF(YisaQ),argumentF1169,class_);
    T12 = T13;
  }
  T10 = T12;
  T9 = CALL1(1,CHKREF(Ynot),T10);
  if (T9 != YPfalse) {
    T14 = CALLN(1,CHKREF(Yerror),4,CHKREF(lit_89),char_,class_,argumentF1169);
  } else {
  }
  T7 = argumentF1169;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P c_;
  P x_1253F1178;
  P x_1252F1177;
  P x_1251F1176;
  P x_1250F1175;
  P x_1249F1174;
  P x_1248F1173;
  P x_1247F1172;
  P x_1246F1171;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,CHKREF(YruntimeYas_uppercase),c_);
    x_1246F1171 = T2;
    T4 = CALL2(1,CHKREF(YmacrosYEE),x_1246F1171,YPchr((P)68));
    if (T4 != YPfalse) {
      T7 = CALL2(1,FREEREF(2),c_,CHKREF(YLnumG));
      T6 = CALL1(1,CHKREF(YruntimeYnum_to_str),T7);
      T5 = CALL2(1,CHKREF(YruntimeYwrite_string),FREEREF(1),T6);
      T3 = T5;
    } else {
      x_1247F1172 = x_1246F1171;
      T10 = CALL2(1,CHKREF(YmacrosYEE),x_1247F1172,YPchr((P)66));
      if (T10 != YPfalse) {
        T13 = CALL2(1,FREEREF(2),c_,CHKREF(YLintG));
        T12 = CALL2(1,CHKREF(YruntimeYnum_to_str),T13,YPint((P)2));
        T11 = CALL2(1,CHKREF(YruntimeYwrite_string),FREEREF(1),T12);
        T9 = T11;
      } else {
        x_1248F1173 = x_1247F1172;
        T16 = CALL2(1,CHKREF(YmacrosYEE),x_1248F1173,YPchr((P)79));
        if (T16 != YPfalse) {
          T19 = CALL2(1,FREEREF(2),c_,CHKREF(YLintG));
          T18 = CALL2(1,CHKREF(YruntimeYnum_to_str),T19,YPint((P)8));
          T17 = CALL2(1,CHKREF(YruntimeYwrite_string),FREEREF(1),T18);
          T15 = T17;
        } else {
          x_1249F1174 = x_1248F1173;
          T22 = CALL2(1,CHKREF(YmacrosYEE),x_1249F1174,YPchr((P)88));
          if (T22 != YPfalse) {
            T25 = CALL2(1,FREEREF(2),c_,CHKREF(YLintG));
            T24 = CALL2(1,CHKREF(YruntimeYnum_to_str),T25,YPint((P)16));
            T23 = CALL2(1,CHKREF(YruntimeYwrite_string),FREEREF(1),T24);
            T21 = T23;
          } else {
            x_1250F1175 = x_1249F1174;
            T28 = CALL2(1,CHKREF(YmacrosYEE),x_1250F1175,YPchr((P)67));
            if (T28 != YPfalse) {
              T30 = CALL2(1,FREEREF(2),c_,CHKREF(YLchrG));
              T29 = CALL2(1,CHKREF(YruntimeYwrite_char),FREEREF(1),T30);
              T27 = T29;
            } else {
              x_1251F1176 = x_1250F1175;
              T33 = CALL2(1,CHKREF(YmacrosYEE),x_1251F1176,YPchr((P)83));
              if (T33 != YPfalse) {
                T35 = CALL2(1,FREEREF(2),c_,CHKREF(YLanyG));
                T34 = CALL2(1,CHKREF(YwriteYdisplay),FREEREF(1),T35);
                T32 = T34;
              } else {
                x_1252F1177 = x_1251F1176;
                T38 = CALL2(1,CHKREF(YmacrosYEE),x_1252F1177,YPchr((P)61));
                if (T38 != YPfalse) {
                  T40 = CALL2(1,FREEREF(2),c_,CHKREF(YLanyG));
                  T39 = CALL2(1,CHKREF(YwriteYwrite),FREEREF(1),T40);
                  T37 = T39;
                } else {
                  x_1253F1178 = x_1252F1177;
                  T43 = CALL2(1,CHKREF(YmacrosYEE),x_1253F1178,YPchr((P)37));
                  if (T43 != YPfalse) {
                    T44 = CALL2(1,CHKREF(YruntimeYwrite_char),FREEREF(1),YPchr((P)37));
                    T42 = T44;
                  } else {
                    T45 = CALL3(1,CHKREF(Yerror),CHKREF(lit_91),c_,FREEREF(3));
                    T42 = T45;
                  }
                  T41 = T42;
                  T37 = T41;
                }
                T36 = T37;
                T32 = T36;
              }
              T31 = T32;
              T27 = T31;
            }
            T26 = T27;
            T21 = T26;
          }
          T20 = T21;
          T15 = T20;
        }
        T14 = T15;
        T9 = T14;
      }
      T8 = T9;
      T3 = T8;
    }
    T46 = BOXVAL(FREEREF(0)) = YPfalse;
    T0 = T46;
  } else {
    T48 = CALL2(1,CHKREF(YmacrosYEE),c_,YPchr((P)37));
    if (T48 != YPfalse) {
      T49 = BOXVAL(FREEREF(0)) = YPtrue;
      T47 = T49;
    } else {
      T50 = CALL2(1,CHKREF(YruntimeYwrite_char),FREEREF(1),c_);
      T47 = T50;
    }
    T0 = T47;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_format_55) {
  P port_,message_,arguments_;
  P argF1182;
  P num_argumentsF1181;
  P argument_indexF1180;
  P found_percentQF1179;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
loop:
  found_percentQF1179 = YPfalse;
  found_percentQF1179 = BOXFAB(found_percentQF1179);
  check_type(YPint((P)0),CHKREF(YLintG));
  argument_indexF1180 = YPint((P)0);
  argument_indexF1180 = BOXFAB(argument_indexF1180);
  T5 = CALL1(1,CHKREF(YruntimeYlen),arguments_);
  num_argumentsF1181 = T5;
  T6 = FUNSHELL(1,fun_arg_53,4);
  argF1182 = T6;
  FUNINIT(argF1182, 4,argument_indexF1180,num_argumentsF1181,message_,arguments_);
  T8 = FUNFAB(fun_54,4,found_percentQF1179,port_,argF1182,message_);
  T7 = CALL2(1,CHKREF(YruntimeYdo),T8,message_);
  T12 = BOXVAL(found_percentQF1179);
  T11 = CALL1(1,CHKREF(Ynot),T12);
  T10 = CALL1(1,CHKREF(Ynot),T11);
  if (T10 != YPfalse) {
    T13 = CALL2(1,CHKREF(Yerror),CHKREF(lit_92),message_);
    T9 = T13;
  } else {
    T9 = YPfalse;
  }
  T4 = T9;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P out_;
  P T0;
  P a1;
LINK_STACK();
  ARG(out_, 0);
loop:
  CALLN(1,CHKREF(YmacrosYnapply),5,CHKREF(YruntimeYformat),YPfalse,out_,FREEREF(0),FREEREF(1));
  T0 = CALL1(1,CHKREF(YruntimeYport_contents),out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeYformat_to_string) {
  P message_,arguments_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
loop:
  T1 = FUNFAB(fun_56,2,message_,arguments_);
  T0 = CALL1(1,CHKREF(YruntimeYcall_with_string_output_port),T1);
UNLINK_STACK();
  RET(T0);
}

P YwriteY___main_0___() {
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
  YwriteYTmax_print_depthT = YPint((P)4);
  YwriteYTmax_print_lengthT = YPint((P)12);
  lit_0 = YPPsym((P)"as-binding-name");
  lit_1 = YPPsym((P)"name");
  T0 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_as_binding_name_0 = YPmet(FUNCODEREF(fun_as_binding_name_0),CHKREF(lit_0),T0,ENVNUL);
  T3 = BOUNDP(YwriteYas_binding_name);
  if (T3 != YPfalse) {
    T2 = CHKREF(YwriteYas_binding_name);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_as_binding_name_0;
  T1 = CALL2(1,CHKREF(YPdefine_method),T2,T4);
  YwriteYas_binding_name = T1;
  lit_2 = YPPsym((P)"do-display");
  lit_3 = YPPsym((P)"port");
  lit_4 = YPPsym((P)"x");
  lit_5 = YPPsym((P)"d");
  lit_6 = YPPsym((P)"recur");
  T5 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLstrG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_do_display_1 = YPmet(FUNCODEREF(fun_do_display_1),CHKREF(lit_2),T5,ENVNUL);
  T8 = BOUNDP(YwriteYdo_display);
  if (T8 != YPfalse) {
    T7 = CHKREF(YwriteYdo_display);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_do_display_1;
  T6 = CALL2(1,CHKREF(YPdefine_method),T7,T9);
  YwriteYdo_display = T6;
  T10 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLchrG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_do_display_2 = YPmet(FUNCODEREF(fun_do_display_2),CHKREF(lit_2),T10,ENVNUL);
  T13 = BOUNDP(YwriteYdo_display);
  if (T13 != YPfalse) {
    T12 = CHKREF(YwriteYdo_display);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_do_display_2;
  T11 = CALL2(1,CHKREF(YPdefine_method),T12,T14);
  YwriteYdo_display = T11;
  T15 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_do_display_3 = YPmet(FUNCODEREF(fun_do_display_3),CHKREF(lit_2),T15,ENVNUL);
  T18 = BOUNDP(YwriteYdo_display);
  if (T18 != YPfalse) {
    T17 = CHKREF(YwriteYdo_display);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_do_display_3;
  T16 = CALL2(1,CHKREF(YPdefine_method),T17,T19);
  YwriteYdo_display = T16;
  lit_7 = YPPsym((P)"display");
  lit_8 = YPsb((P)"*");
  T21 = YPsig(YPPlist(2,CHKREF(lit_4),CHKREF(lit_5)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_recur_4 = YPmet(FUNCODEREF(fun_recur_4),CHKREF(lit_6),T21,ENVNUL);
  T20 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_display_5 = YPmet(FUNCODEREF(fun_display_5),CHKREF(lit_7),T20,ENVNUL);
  T24 = BOUNDP(YwriteYdisplay);
  if (T24 != YPfalse) {
    T23 = CHKREF(YwriteYdisplay);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_display_5;
  T22 = CALL2(1,CHKREF(YPdefine_method),T23,T25);
  YwriteYdisplay = T22;
  lit_9 = YPPsym((P)"write-to-string");
  T26 = YPsig(YPPlist(1,CHKREF(lit_4)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLstrG),Ynil);
  fun_write_to_string_6 = YPmet(FUNCODEREF(fun_write_to_string_6),CHKREF(lit_9),T26,ENVNUL);
  T29 = BOUNDP(YwriteYwrite_to_string);
  if (T29 != YPfalse) {
    T28 = CHKREF(YwriteYwrite_to_string);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_write_to_string_6;
  T27 = CALL2(1,CHKREF(YPdefine_method),T28,T30);
  YwriteYwrite_to_string = T27;
  lit_10 = YPPsym((P)"write");
  lit_11 = YPsb((P)"*");
  T32 = YPsig(YPPlist(2,CHKREF(lit_4),CHKREF(lit_5)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_recur_7 = YPmet(FUNCODEREF(fun_recur_7),CHKREF(lit_6),T32,ENVNUL);
  T31 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_write_8 = YPmet(FUNCODEREF(fun_write_8),CHKREF(lit_10),T31,ENVNUL);
  T35 = BOUNDP(YwriteYwrite);
  if (T35 != YPfalse) {
    T34 = CHKREF(YwriteYwrite);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_write_8;
  T33 = CALL2(1,CHKREF(YPdefine_method),T34,T36);
  YwriteYwrite = T33;
  lit_12 = YPPsym((P)"writeln");
  T37 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_writeln_9 = YPmet(FUNCODEREF(fun_writeln_9),CHKREF(lit_12),T37,ENVNUL);
  T40 = BOUNDP(YwriteYwriteln);
  if (T40 != YPfalse) {
    T39 = CHKREF(YwriteYwriteln);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_writeln_9;
  T38 = CALL2(1,CHKREF(YPdefine_method),T39,T41);
  YwriteYwriteln = T38;
  lit_13 = YPPsym((P)"recurring-write");
  lit_14 = YPsb((P)"()");
  T42 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLlstG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_10 = YPmet(FUNCODEREF(fun_recurring_write_10),CHKREF(lit_13),T42,ENVNUL);
  T45 = BOUNDP(YwriteYrecurring_write);
  if (T45 != YPfalse) {
    T44 = CHKREF(YwriteYrecurring_write);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_recurring_write_10;
  T43 = CALL2(1,CHKREF(YPdefine_method),T44,T46);
  YwriteYrecurring_write = T43;
  T47 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLflatG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_11 = YPmet(FUNCODEREF(fun_recurring_write_11),CHKREF(lit_13),T47,ENVNUL);
  T50 = BOUNDP(YwriteYrecurring_write);
  if (T50 != YPfalse) {
    T49 = CHKREF(YwriteYrecurring_write);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_recurring_write_11;
  T48 = CALL2(1,CHKREF(YPdefine_method),T49,T51);
  YwriteYrecurring_write = T48;
  T52 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YruntimeYLmapG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_12 = YPmet(FUNCODEREF(fun_recurring_write_12),CHKREF(lit_13),T52,ENVNUL);
  T55 = BOUNDP(YwriteYrecurring_write);
  if (T55 != YPfalse) {
    T54 = CHKREF(YwriteYrecurring_write);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_recurring_write_12;
  T53 = CALL2(1,CHKREF(YPdefine_method),T54,T56);
  YwriteYrecurring_write = T53;
  lit_15 = YPPsym((P)"t");
  lit_16 = YPPsym((P)"f");
  T57 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLlogG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_13 = YPmet(FUNCODEREF(fun_recurring_write_13),CHKREF(lit_13),T57,ENVNUL);
  T60 = BOUNDP(YwriteYrecurring_write);
  if (T60 != YPfalse) {
    T59 = CHKREF(YwriteYrecurring_write);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_recurring_write_13;
  T58 = CALL2(1,CHKREF(YPdefine_method),T59,T61);
  YwriteYrecurring_write = T58;
  T62 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLsymG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_14 = YPmet(FUNCODEREF(fun_recurring_write_14),CHKREF(lit_13),T62,ENVNUL);
  T65 = BOUNDP(YwriteYrecurring_write);
  if (T65 != YPfalse) {
    T64 = CHKREF(YwriteYrecurring_write);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_recurring_write_14;
  T63 = CALL2(1,CHKREF(YPdefine_method),T64,T66);
  YwriteYrecurring_write = T63;
  lit_17 = YPsb((P)"&0x");
  T67 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLlocG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_15 = YPmet(FUNCODEREF(fun_recurring_write_15),CHKREF(lit_13),T67,ENVNUL);
  T70 = BOUNDP(YwriteYrecurring_write);
  if (T70 != YPfalse) {
    T69 = CHKREF(YwriteYrecurring_write);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_recurring_write_15;
  T68 = CALL2(1,CHKREF(YPdefine_method),T69,T71);
  YwriteYrecurring_write = T68;
  lit_18 = YPsb((P)"<num>");
  T72 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLnumG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_16 = YPmet(FUNCODEREF(fun_recurring_write_16),CHKREF(lit_13),T72,ENVNUL);
  T75 = BOUNDP(YwriteYrecurring_write);
  if (T75 != YPfalse) {
    T74 = CHKREF(YwriteYrecurring_write);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_recurring_write_16;
  T73 = CALL2(1,CHKREF(YPdefine_method),T74,T76);
  YwriteYrecurring_write = T73;
  T77 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLstrG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_17 = YPmet(FUNCODEREF(fun_recurring_write_17),CHKREF(lit_13),T77,ENVNUL);
  T80 = BOUNDP(YwriteYrecurring_write);
  if (T80 != YPfalse) {
    T79 = CHKREF(YwriteYrecurring_write);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_recurring_write_17;
  T78 = CALL2(1,CHKREF(YPdefine_method),T79,T81);
  YwriteYrecurring_write = T78;
  T82 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLchrG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_18 = YPmet(FUNCODEREF(fun_recurring_write_18),CHKREF(lit_13),T82,ENVNUL);
  T85 = BOUNDP(YwriteYrecurring_write);
  if (T85 != YPfalse) {
    T84 = CHKREF(YwriteYrecurring_write);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_recurring_write_18;
  T83 = CALL2(1,CHKREF(YPdefine_method),T84,T86);
  YwriteYrecurring_write = T83;
  lit_19 = YPPsym((P)"write-boolean");
  lit_20 = YPPsym((P)"mumble");
  T87 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_20)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_write_boolean_19 = YPmet(FUNCODEREF(fun_write_boolean_19),CHKREF(lit_19),T87,ENVNUL);
  T90 = BOUNDP(YwriteYwrite_boolean);
  if (T90 != YPfalse) {
    T89 = CHKREF(YwriteYwrite_boolean);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_write_boolean_19;
  T88 = CALL2(1,CHKREF(YPdefine_method),T89,T91);
  YwriteYwrite_boolean = T88;
  lit_21 = YPPsym((P)"write-number");
  T92 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLnumG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_write_number_20 = YPmet(FUNCODEREF(fun_write_number_20),CHKREF(lit_21),T92,ENVNUL);
  T95 = BOUNDP(YwriteYwrite_number);
  if (T95 != YPfalse) {
    T94 = CHKREF(YwriteYwrite_number);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_write_number_20;
  T93 = CALL2(1,CHKREF(YPdefine_method),T94,T96);
  YwriteYwrite_number = T93;
  lit_22 = YPPsym((P)"write-char-literal");
  lit_23 = YPsb((P)"#\\");
  T97 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_write_char_literal_21 = YPmet(FUNCODEREF(fun_write_char_literal_21),CHKREF(lit_22),T97,ENVNUL);
  T100 = BOUNDP(YwriteYwrite_char_literal);
  if (T100 != YPfalse) {
    T99 = CHKREF(YwriteYwrite_char_literal);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_write_char_literal_21;
  T98 = CALL2(1,CHKREF(YPdefine_method),T99,T101);
  YwriteYwrite_char_literal = T98;
  lit_24 = YPPsym((P)"character-name");
  lit_25 = YPPsym((P)"char");
  T102 = YPsig(YPPlist(1,CHKREF(lit_25)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_character_name_22 = YPmet(FUNCODEREF(fun_character_name_22),CHKREF(lit_24),T102,ENVNUL);
  T105 = BOUNDP(YwriteYcharacter_name);
  if (T105 != YPfalse) {
    T104 = CHKREF(YwriteYcharacter_name);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_character_name_22;
  T103 = CALL2(1,CHKREF(YPdefine_method),T104,T106);
  YwriteYcharacter_name = T103;
  lit_26 = YPPsym((P)"write-string-literal");
  lit_27 = YPPsym((P)"loop");
  lit_28 = YPPsym((P)"i");
  T108 = YPsig(YPPlist(1,CHKREF(lit_28)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_23 = YPmet(FUNCODEREF(fun_loop_23),CHKREF(lit_27),T108,ENVNUL);
  T107 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_write_string_literal_24 = YPmet(FUNCODEREF(fun_write_string_literal_24),CHKREF(lit_26),T107,ENVNUL);
  T111 = BOUNDP(YwriteYwrite_string_literal);
  if (T111 != YPfalse) {
    T110 = CHKREF(YwriteYwrite_string_literal);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_write_string_literal_24;
  T109 = CALL2(1,CHKREF(YPdefine_method),T110,T112);
  YwriteYwrite_string_literal = T109;
  lit_29 = YPPsym((P)"write-list");
  lit_30 = YPPsym((P)"l");
  lit_31 = YPPsym((P)"n");
  lit_32 = YPsb((P)" ...");
  T114 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_31)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_25 = YPmet(FUNCODEREF(fun_loop_25),CHKREF(lit_27),T114,ENVNUL);
  T113 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLlstG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_write_list_26 = YPmet(FUNCODEREF(fun_write_list_26),CHKREF(lit_29),T113,ENVNUL);
  T117 = BOUNDP(YwriteYwrite_list);
  if (T117 != YPfalse) {
    T116 = CHKREF(YwriteYwrite_list);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_write_list_26;
  T115 = CALL2(1,CHKREF(YPdefine_method),T116,T118);
  YwriteYwrite_list = T115;
  lit_33 = YPPsym((P)"quotation?");
  lit_34 = YPPsym((P)"quote");
  T119 = YPsig(YPPlist(1,CHKREF(lit_4)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  fun_quotationQ_27 = YPmet(FUNCODEREF(fun_quotationQ_27),CHKREF(lit_33),T119,ENVNUL);
  T122 = BOUNDP(YwriteYquotationQ);
  if (T122 != YPfalse) {
    T121 = CHKREF(YwriteYquotationQ);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_quotationQ_27;
  T120 = CALL2(1,CHKREF(YPdefine_method),T121,T123);
  YwriteYquotationQ = T120;
  lit_35 = YPPsym((P)"write-flat");
  lit_36 = YPsb((P)"#(");
  lit_37 = YPsb((P)"$$");
  lit_38 = YPsb((P)"(");
  lit_39 = YPsb((P)" ...");
  T125 = YPsig(YPPlist(1,CHKREF(lit_28)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_28 = YPmet(FUNCODEREF(fun_loop_28),CHKREF(lit_27),T125,ENVNUL);
  T124 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLflatG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_write_flat_29 = YPmet(FUNCODEREF(fun_write_flat_29),CHKREF(lit_35),T124,ENVNUL);
  T128 = BOUNDP(YwriteYwrite_flat);
  if (T128 != YPfalse) {
    T127 = CHKREF(YwriteYwrite_flat);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_write_flat_29;
  T126 = CALL2(1,CHKREF(YPdefine_method),T127,T129);
  YwriteYwrite_flat = T126;
  lit_40 = YPPsym((P)"write-map");
  lit_41 = YPsb((P)"#[");
  lit_42 = YPPsym((P)"blow");
  lit_43 = YPPsym((P)"x-1233");
  lit_44 = YPPsym((P)"x-1231");
  lit_45 = YPPsym((P)"x-1229");
  lit_46 = YPsb((P)" ...");
  lit_47 = YPsb((P)": ");
  T132 = YPsig(YPPlist(2,CHKREF(lit_44),CHKREF(lit_45)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_x_1233_30 = YPmet(FUNCODEREF(fun_x_1233_30),CHKREF(lit_43),T132,ENVNUL);
  T131 = YPsig(YPPlist(1,CHKREF(lit_42)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T131,ENVNUL);
  T130 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YruntimeYLmapG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_write_map_32 = YPmet(FUNCODEREF(fun_write_map_32),CHKREF(lit_40),T130,ENVNUL);
  T135 = BOUNDP(YwriteYwrite_map);
  if (T135 != YPfalse) {
    T134 = CHKREF(YwriteYwrite_map);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_write_map_32;
  T133 = CALL2(1,CHKREF(YPdefine_method),T134,T136);
  YwriteYwrite_map = T133;
  lit_48 = YPsb((P)"#{Input-port}");
  T137 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YruntimeYLinput_portG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_33 = YPmet(FUNCODEREF(fun_recurring_write_33),CHKREF(lit_13),T137,ENVNUL);
  T140 = BOUNDP(YwriteYrecurring_write);
  if (T140 != YPfalse) {
    T139 = CHKREF(YwriteYrecurring_write);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_recurring_write_33;
  T138 = CALL2(1,CHKREF(YPdefine_method),T139,T141);
  YwriteYrecurring_write = T138;
  lit_49 = YPsb((P)"#{Output-port}");
  T142 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YruntimeYLoutput_portG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_34 = YPmet(FUNCODEREF(fun_recurring_write_34),CHKREF(lit_13),T142,ENVNUL);
  T145 = BOUNDP(YwriteYrecurring_write);
  if (T145 != YPfalse) {
    T144 = CHKREF(YwriteYrecurring_write);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_recurring_write_34;
  T143 = CALL2(1,CHKREF(YPdefine_method),T144,T146);
  YwriteYrecurring_write = T143;
  lit_50 = YPPsym((P)"write-params");
  lit_51 = YPPsym((P)"x-1240");
  lit_52 = YPPsym((P)"x-1238");
  lit_53 = YPPsym((P)"x-1236");
  lit_54 = YPPsym((P)"x-1234");
  lit_55 = YPsb((P)"(%s ");
  lit_56 = YPsb((P)" => ");
  T148 = YPsig(YPPlist(3,CHKREF(lit_52),CHKREF(lit_53),CHKREF(lit_54)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_x_1240_35 = YPmet(FUNCODEREF(fun_x_1240_35),CHKREF(lit_51),T148,ENVNUL);
  T147 = YPsig(YPPlist(3,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_6)),YPPlist(3,CHKREF(YruntimeYLoutput_portG),CHKREF(YLfunG),CHKREF(YLfunG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_write_params_36 = YPmet(FUNCODEREF(fun_write_params_36),CHKREF(lit_50),T147,ENVNUL);
  T151 = BOUNDP(YwriteYwrite_params);
  if (T151 != YPfalse) {
    T150 = CHKREF(YwriteYwrite_params);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_write_params_36;
  T149 = CALL2(1,CHKREF(YPdefine_method),T150,T152);
  YwriteYwrite_params = T149;
  lit_57 = YPPsym((P)"write-fun-guts");
  lit_58 = YPsb((P)"#{");
  lit_59 = YPsb((P)"}");
  T153 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_1),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLfunG),CHKREF(YLstrG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_write_fun_guts_37 = YPmet(FUNCODEREF(fun_write_fun_guts_37),CHKREF(lit_57),T153,ENVNUL);
  T156 = BOUNDP(YwriteYwrite_fun_guts);
  if (T156 != YPfalse) {
    T155 = CHKREF(YwriteYwrite_fun_guts);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_write_fun_guts_37;
  T154 = CALL2(1,CHKREF(YPdefine_method),T155,T157);
  YwriteYwrite_fun_guts = T154;
  lit_60 = YPsb((P)"Gen");
  T158 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLgenG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_38 = YPmet(FUNCODEREF(fun_recurring_write_38),CHKREF(lit_13),T158,ENVNUL);
  T161 = BOUNDP(YwriteYrecurring_write);
  if (T161 != YPfalse) {
    T160 = CHKREF(YwriteYrecurring_write);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_recurring_write_38;
  T159 = CALL2(1,CHKREF(YPdefine_method),T160,T162);
  YwriteYrecurring_write = T159;
  lit_61 = YPsb((P)"Met");
  T163 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLmetG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_39 = YPmet(FUNCODEREF(fun_recurring_write_39),CHKREF(lit_13),T163,ENVNUL);
  T166 = BOUNDP(YwriteYrecurring_write);
  if (T166 != YPfalse) {
    T165 = CHKREF(YwriteYrecurring_write);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_recurring_write_39;
  T164 = CALL2(1,CHKREF(YPdefine_method),T165,T167);
  YwriteYrecurring_write = T164;
  lit_62 = YPsb((P)"#{Class ");
  lit_63 = YPsb((P)" ");
  lit_64 = YPsb((P)"}");
  T168 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLclassG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_40 = YPmet(FUNCODEREF(fun_recurring_write_40),CHKREF(lit_13),T168,ENVNUL);
  T171 = BOUNDP(YwriteYrecurring_write);
  if (T171 != YPfalse) {
    T170 = CHKREF(YwriteYrecurring_write);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_recurring_write_40;
  T169 = CALL2(1,CHKREF(YPdefine_method),T170,T172);
  YwriteYrecurring_write = T169;
  lit_65 = YPsb((P)"#{T= ");
  lit_66 = YPsb((P)"}");
  T173 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLsingletonG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_41 = YPmet(FUNCODEREF(fun_recurring_write_41),CHKREF(lit_13),T173,ENVNUL);
  T176 = BOUNDP(YwriteYrecurring_write);
  if (T176 != YPfalse) {
    T175 = CHKREF(YwriteYrecurring_write);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_recurring_write_41;
  T174 = CALL2(1,CHKREF(YPdefine_method),T175,T177);
  YwriteYrecurring_write = T174;
  lit_67 = YPsb((P)"#{T< ");
  lit_68 = YPsb((P)"}");
  T178 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLsubclassG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_42 = YPmet(FUNCODEREF(fun_recurring_write_42),CHKREF(lit_13),T178,ENVNUL);
  T181 = BOUNDP(YwriteYrecurring_write);
  if (T181 != YPfalse) {
    T180 = CHKREF(YwriteYrecurring_write);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_recurring_write_42;
  T179 = CALL2(1,CHKREF(YPdefine_method),T180,T182);
  YwriteYrecurring_write = T179;
  lit_69 = YPsb((P)"#{T+");
  lit_70 = YPsb((P)"}");
  T184 = YPsig(YPPlist(1,CHKREF(lit_15)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T184,ENVNUL);
  T183 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLunionG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_44 = YPmet(FUNCODEREF(fun_recurring_write_44),CHKREF(lit_13),T183,ENVNUL);
  T187 = BOUNDP(YwriteYrecurring_write);
  if (T187 != YPfalse) {
    T186 = CHKREF(YwriteYrecurring_write);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_recurring_write_44;
  T185 = CALL2(1,CHKREF(YPdefine_method),T186,T188);
  YwriteYrecurring_write = T185;
  lit_71 = YPPsym((P)"recurring-write-type");
  T189 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLclassG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_type_45 = YPmet(FUNCODEREF(fun_recurring_write_type_45),CHKREF(lit_71),T189,ENVNUL);
  T192 = BOUNDP(YwriteYrecurring_write_type);
  if (T192 != YPfalse) {
    T191 = CHKREF(YwriteYrecurring_write_type);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_recurring_write_type_45;
  T190 = CALL2(1,CHKREF(YPdefine_method),T191,T193);
  YwriteYrecurring_write_type = T190;
  T194 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_type_46 = YPmet(FUNCODEREF(fun_recurring_write_type_46),CHKREF(lit_71),T194,ENVNUL);
  T197 = BOUNDP(YwriteYrecurring_write_type);
  if (T197 != YPfalse) {
    T196 = CHKREF(YwriteYrecurring_write_type);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_recurring_write_type_46;
  T195 = CALL2(1,CHKREF(YPdefine_method),T196,T198);
  YwriteYrecurring_write_type = T195;
  lit_72 = YPPsym((P)"write-type");
  T199 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_4)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_write_type_47 = YPmet(FUNCODEREF(fun_write_type_47),CHKREF(lit_72),T199,ENVNUL);
  T202 = BOUNDP(YwriteYwrite_type);
  if (T202 != YPfalse) {
    T201 = CHKREF(YwriteYwrite_type);
  } else {
    T201 = YPfalse;
  }
  T203 = fun_write_type_47;
  T200 = CALL2(1,CHKREF(YPdefine_method),T201,T203);
  YwriteYwrite_type = T200;
  lit_73 = YPsb((P)"#{Slot ");
  lit_74 = YPsb((P)"}");
  T204 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLslotG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_48 = YPmet(FUNCODEREF(fun_recurring_write_48),CHKREF(lit_13),T204,ENVNUL);
  T207 = BOUNDP(YwriteYrecurring_write);
  if (T207 != YPfalse) {
    T206 = CHKREF(YwriteYrecurring_write);
  } else {
    T206 = YPfalse;
  }
  T208 = fun_recurring_write_48;
  T205 = CALL2(1,CHKREF(YPdefine_method),T206,T208);
  YwriteYrecurring_write = T205;
  lit_75 = YPsb((P)"#{");
  lit_76 = YPPsym((P)"x-1245");
  lit_77 = YPPsym((P)"x-1243");
  lit_78 = YPPsym((P)"x-1241");
  lit_79 = YPsb((P)" ...");
  lit_80 = YPsb((P)": ");
  lit_81 = YPsb((P)"}");
  T211 = YPsig(YPPlist(2,CHKREF(lit_77),CHKREF(lit_78)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_x_1245_49 = YPmet(FUNCODEREF(fun_x_1245_49),CHKREF(lit_76),T211,ENVNUL);
  T210 = YPsig(YPPlist(1,CHKREF(lit_42)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T210,ENVNUL);
  T209 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),CHKREF(YLanyG),CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_51 = YPmet(FUNCODEREF(fun_recurring_write_51),CHKREF(lit_13),T209,ENVNUL);
  T214 = BOUNDP(YwriteYrecurring_write);
  if (T214 != YPfalse) {
    T213 = CHKREF(YwriteYrecurring_write);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_recurring_write_51;
  T212 = CALL2(1,CHKREF(YPdefine_method),T213,T215);
  YwriteYrecurring_write = T212;
  lit_82 = YPsb((P)"#{End-of-file}");
  T218 = CALL0(1,CHKREF(YruntimeYeof_object));
  T217 = CALL1(1,CHKREF(YruntimeYtE),T218);
  T216 = YPsig(YPPlist(4,CHKREF(lit_3),CHKREF(lit_4),CHKREF(lit_5),CHKREF(lit_6)),YPPlist(4,CHKREF(YruntimeYLoutput_portG),T217,CHKREF(YLintG),CHKREF(YLfunG)),YPfalse,YPint((P)4),CHKREF(YLanyG),Ynil);
  fun_recurring_write_52 = YPmet(FUNCODEREF(fun_recurring_write_52),CHKREF(lit_13),T216,ENVNUL);
  T221 = BOUNDP(YwriteYrecurring_write);
  if (T221 != YPfalse) {
    T220 = CHKREF(YwriteYrecurring_write);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_recurring_write_52;
  T219 = CALL2(1,CHKREF(YPdefine_method),T220,T222);
  YwriteYrecurring_write = T219;
  lit_83 = YPPsym((P)"format");
  lit_84 = YPPsym((P)"message");
  lit_85 = YPPsym((P)"arguments");
  lit_86 = YPPsym((P)"arg");
  lit_87 = YPPsym((P)"class");
  lit_88 = YPsb((P)"Too few arguments for format string %=: %=");
  lit_89 = YPsb((P)"Format argument for directive '%%%c' not of class %s: %=");
  lit_90 = YPPsym((P)"c");
  lit_91 = YPsb((P)"Invalid format directive '%s' in \"%s\"");
  lit_92 = YPsb((P)"Incomplete format directive in \"%s\"");
  T225 = YPsig(YPPlist(2,CHKREF(lit_25),CHKREF(lit_87)),YPPlist(2,CHKREF(YLchrG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_arg_53 = YPmet(FUNCODEREF(fun_arg_53),CHKREF(lit_86),T225,ENVNUL);
  T224 = YPsig(YPPlist(1,CHKREF(lit_90)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T224,ENVNUL);
  T223 = YPsig(YPPlist(3,CHKREF(lit_3),CHKREF(lit_84),CHKREF(lit_85)),YPPlist(2,CHKREF(YruntimeYLoutput_portG),CHKREF(YLstrG)),YPtrue,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_format_55 = YPmet(FUNCODEREF(fun_format_55),CHKREF(lit_83),T223,ENVNUL);
  T228 = BOUNDP(YruntimeYformat);
  if (T228 != YPfalse) {
    T227 = CHKREF(YruntimeYformat);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_format_55;
  T226 = CALL2(1,CHKREF(YPdefine_method),T227,T229);
  YruntimeYformat = T226;
  lit_93 = YPPsym((P)"format-to-string");
  lit_94 = YPPsym((P)"out");
  T231 = YPsig(YPPlist(1,CHKREF(lit_94)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T231,ENVNUL);
  T230 = YPsig(YPPlist(2,CHKREF(lit_84),CHKREF(lit_85)),YPPlist(1,CHKREF(YLstrG)),YPtrue,YPint((P)1),CHKREF(YLstrG),Ynil);
  YruntimeYformat_to_string = YPmet(FUNCODEREF(YruntimeYformat_to_string),CHKREF(lit_93),T230,ENVNUL);
  T232 = YruntimeYformat_to_string;
  YruntimeYformat_to_string = T232;
  T233 = YPfalse;
  return T233;
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
  {"read-from-string", &module_info_read, "read-from-string"},
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
  {"$char-long-names", &module_info_read, "$char-long-names"},
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
  {"display", &YwriteYdisplay},
  {"write-boolean", &YwriteYwrite_boolean},
  {"recurring-write", &YwriteYrecurring_write},
  {"write-char-literal", &YwriteYwrite_char_literal},
  {"write-string-literal", &YwriteYwrite_string_literal},
  {"quotation?", &YwriteYquotationQ},
  {"*max-print-length*", &YwriteYTmax_print_lengthT},
  {"writeln", &YwriteYwriteln},
  {"write-number", &YwriteYwrite_number},
  {"---main-0---", NULL},
  {"as-binding-name", &YwriteYas_binding_name},
  {"write-params", &YwriteYwrite_params},
  {"write-flat", &YwriteYwrite_flat},
  {"write-to-string", &YwriteYwrite_to_string},
  {"write-list", &YwriteYwrite_list},
  {"write-fun-guts", &YwriteYwrite_fun_guts},
  {"write", &YwriteYwrite},
  {"*max-print-depth*", &YwriteYTmax_print_depthT},
  {"recurring-write-type", &YwriteYrecurring_write_type},
  {"character-name", &YwriteYcharacter_name},
  {"write-type", &YwriteYwrite_type},
  {"write-map", &YwriteYwrite_map},
  {"do-display", &YwriteYdo_display},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"display", "display"},
  {"writeln", "writeln"},
  {"write-to-string", "write-to-string"},
  {"write", "write"},
  {"format", "format"},
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
