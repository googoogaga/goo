/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: write */

EXT(YruntimeYreduceA,"runtime","reduce+");
DEF(YwriteYquotationQ,"write","quotation?");
DEF(YwriteYwriteln,"write","writeln");
EXT(YmacrosYmap,"macros","map");
EXT(Ynul,"boot","nul");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YruntimeYtable_protocol,"runtime","table-protocol");
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
DEF(YwriteYwrite_flat,"write","write-flat");
EXT(YruntimeYceilingS,"runtime","ceiling/");
EXT(YruntimeYcall_with_input_file,"runtime","call-with-input-file");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYport_index,"runtime","port-index");
EXT(YruntimeYfloorS,"runtime","floor/");
EXT(YruntimeYnow_key,"runtime","now-key");
DEF(YwriteYwrite_to_string,"write","write-to-string");
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
DEF(YwriteYwrite_list,"write","write-list");
EXT(YLlogG,"boot","<log>");
EXT(YruntimeYflo_bits,"runtime","flo-bits");
EXT(YruntimeYlsh,"runtime","lsh");
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
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YruntimeY_,"runtime","-");
EXT(Yfun_name,"boot","fun-name");
EXT(YruntimeYabs,"runtime","abs");
EXT(Yclass_parents,"boot","class-parents");
EXT(YruntimeYto_str,"runtime","to-str");
EXT(YruntimeYmax,"runtime","max");
EXT(YLanyG,"boot","<any>");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YruntimeYsub_setter,"runtime","sub-setter");
EXT(YruntimeYT,"runtime","*");
EXT(YruntimeYtable_growth_threshold,"runtime","table-growth-threshold");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YruntimeYfin_stateQ,"runtime","fin-state?");
DEF(YwriteYwrite,"write","write");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(YLunionG,"boot","<union>");
EXT(Ylst,"boot","lst");
EXT(Yslot_value,"boot","slot-value");
EXT(YDmax_int,"boot","$max-int");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYcat,"macros","cat");
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
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
DEF(YwriteYwrite_char_literal,"write","write-char-literal");
EXT(YruntimeYformat,"runtime","format");
EXT(YruntimeYall2Q,"runtime","all2?");
EXT(YruntimeYdo_keyed,"runtime","do-keyed");
EXT(YruntimeYlow_elt_setter,"runtime","low-elt-setter");
EXT(Yunexec,"boot","unexec");
EXT(YruntimeYmemQ,"runtime","mem?");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YruntimeYremainder,"runtime","remainder");
EXT(YruntimeYcondition_message,"runtime","condition-message");
DEF(YwriteYdisplay,"write","display");
EXT(YPsnul,"boot","%snul");
EXT(Yerror,"boot","error");
EXT(YruntimeYlogior,"runtime","logior");
DEF(YwriteYwrite_map,"write","write-map");
EXT(YruntimeYrev,"runtime","rev");
EXT(YruntimeYclose_output_port,"runtime","close-output-port");
EXT(YruntimeYLstepG,"runtime","<step>");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(YruntimeYLmapG,"runtime","<map>");
EXT(YruntimeYlowercaseQ,"runtime","lowercase?");
DEF(YwriteYTmax_print_depthT,"write","*max-print-depth*");
EXT(YruntimeYposQ,"runtime","pos?");
EXT(YruntimeYG,"runtime",">");
EXT(YruntimeYNE,"runtime","~=");
EXT(YruntimeYLrestartG,"runtime","<restart>");
DEF(YwriteYas_binding_name,"write","as-binding-name");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
DEF(YwriteYrecurring_write_type,"write","recurring-write-type");
EXT(YPvnul,"boot","%vnul");
EXT(YruntimeYpop_lastX,"runtime","pop-last!");
EXT(YruntimeYsig,"runtime","sig");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYcopy_state,"runtime","copy-state");
DEF(YwriteYwrite_number,"write","write-number");
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
EXT(YruntimeYdefault,"runtime","default");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYkeys,"runtime","keys");
EXT(YruntimeYlogand,"runtime","logand");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YruntimeYcatX,"runtime","cat!");
EXT(YruntimeYlen,"runtime","len");
EXT(YmacrosYnapply,"macros","napply");
EXT(YruntimeYE,"runtime","=");
EXT(YmacrosYtup,"macros","tup");
DEF(YwriteYdo_display,"write","do-display");
EXT(YruntimeYadd,"runtime","add");
EXT(YruntimeYceiling,"runtime","ceiling");
EXT(YruntimeYLinput_portG,"runtime","<input-port>");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YruntimeYaddX,"runtime","add!");
EXT(YruntimeYid_hash,"runtime","id-hash");
EXT(YruntimeYtruncateS,"runtime","truncate/");
EXT(YruntimeYeof_object,"runtime","eof-object");
DEF(YwriteYwrite_type,"write","write-type");
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
EXT(YruntimeYcompose,"runtime","compose");
EXT(YruntimeYopen_input_file,"runtime","open-input-file");
EXT(YruntimeYfill,"runtime","fill");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYout,"runtime","out");
EXT(YruntimeYcall_with_output_file,"runtime","call-with-output-file");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YruntimeYLbufG,"runtime","<buf>");
EXT(YruntimeYchar_Gascii,"runtime","char->ascii");
EXT(YruntimeYfrom,"runtime","from");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(YruntimeYfirst_then,"runtime","first-then");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(Yslot_init,"boot","slot-init");
EXT(YruntimeYlen_setter,"runtime","len-setter");
EXT(YruntimeYDpermanent_hash_state,"runtime","$permanent-hash-state");
EXT(YruntimeYfalse_or,"runtime","false-or");
EXT(YruntimeYuppercaseQ,"runtime","uppercase?");
EXT(YPsymbols,"boot","%symbols");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YruntimeYzeroQ,"runtime","zero?");
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
EXT(YruntimeYLstring_output_portG,"runtime","<string-output-port>");
EXT(YruntimeYvec,"runtime","vec");
DEF(YwriteYcharacter_name,"write","character-name");
EXT(YLstrG,"boot","<str>");
EXT(YruntimeYstr,"runtime","str");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YruntimeYNEE,"runtime","~==");
EXT(YruntimeYcase_insensitive_string_equal,"runtime","case-insensitive-string-equal");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYrevX,"runtime","rev!");
EXT(YruntimeY1st,"runtime","1st");
EXT(YruntimeYwrite_string,"runtime","write-string");
EXT(YruntimeYpos,"runtime","pos");
DEF(YwriteYwrite_fun_guts,"write","write-fun-guts");
EXT(YruntimeYdo3,"runtime","do3");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YruntimeYforce_output,"runtime","force-output");
EXT(YruntimeYdo,"runtime","do");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
DEF(YwriteYwrite_params,"write","write-params");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YruntimeYround,"runtime","round");
EXT(YLvecG,"boot","<vec>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YruntimeYascii_whitespaces,"runtime","ascii-whitespaces");
DEF(YwriteYwrite_boolean,"write","write-boolean");
EXT(YruntimeYLtabG,"runtime","<tab>");
EXT(YruntimeYlogbitQ,"runtime","logbit?");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(YruntimeYnulQ,"runtime","nul?");
EXT(Yhead_setter,"boot","head-setter");
DEF(YwriteYTmax_print_lengthT,"write","*max-print-length*");
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
EXT(YruntimeYcall_with_string_input_port,"runtime","call-with-string-input-port");
EXT(YruntimeYempty,"runtime","empty");
EXT(YreadYDchar_long_names,"read","$char-long-names");
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
DEF(YwriteYrecurring_write,"write","recurring-write");
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
EXT(YruntimeYdel_key,"runtime","del-key");
EXT(YruntimeYdel,"runtime","del");
EXT(Yunknown_function_error,"boot","unknown-function-error");
DEF(YwriteYwrite_string_literal,"write","write-string-literal");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
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

/* FORWARD QUOTATIONS: */

DEFLIT(lit_93);
DEFLIT(lit_12);
DEFLIT(lit_14);
DEFLIT(lit_40);
DEFLIT(lit_75);
DEFLIT(lit_48);
DEFLIT(lit_7);
DEFLIT(lit_5);
DEFLIT(lit_43);
DEFLIT(lit_47);
DEFLIT(lit_15);
DEFLIT(lit_21);
DEFLIT(lit_60);
DEFLIT(lit_79);
DEFLIT(lit_16);
DEFLIT(lit_41);
DEFLIT(lit_4);
DEFLIT(lit_92);
DEFLIT(lit_25);
DEFLIT(lit_54);
DEFLIT(lit_59);
DEFLIT(lit_28);
DEFLIT(lit_77);
DEFLIT(lit_62);
DEFLIT(lit_66);
DEFLIT(lit_80);
DEFLIT(lit_49);
DEFLIT(lit_37);
DEFLIT(lit_46);
DEFLIT(lit_30);
DEFLIT(lit_3);
DEFLIT(lit_64);
DEFLIT(lit_68);
DEFLIT(lit_42);
DEFLIT(lit_94);
DEFLIT(lit_2);
DEFLIT(lit_56);
DEFLIT(lit_63);
DEFLIT(lit_31);
DEFLIT(lit_74);
DEFLIT(lit_0);
DEFLIT(lit_36);
DEFLIT(lit_10);
DEFLIT(lit_95);
DEFLIT(lit_89);
DEFLIT(lit_71);
DEFLIT(lit_61);
DEFLIT(lit_44);
DEFLIT(lit_73);
DEFLIT(lit_27);
DEFLIT(lit_11);
DEFLIT(lit_32);
DEFLIT(lit_83);
DEFLIT(lit_18);
DEFLIT(lit_38);
DEFLIT(lit_76);
DEFLIT(lit_57);
DEFLIT(lit_52);
DEFLIT(lit_70);
DEFLIT(lit_84);
DEFLIT(lit_1);
DEFLIT(lit_9);
DEFLIT(lit_39);
DEFLIT(lit_78);
DEFLIT(lit_90);
DEFLIT(lit_55);
DEFLIT(lit_72);
DEFLIT(lit_17);
DEFLIT(lit_22);
DEFLIT(lit_81);
DEFLIT(lit_85);
DEFLIT(lit_50);
DEFLIT(lit_65);
DEFLIT(lit_53);
DEFLIT(lit_13);
DEFLIT(lit_69);
DEFLIT(lit_58);
DEFLIT(lit_35);
DEFLIT(lit_45);
DEFLIT(lit_88);
DEFLIT(lit_19);
DEFLIT(lit_51);
DEFLIT(lit_67);
DEFLIT(lit_24);
DEFLIT(lit_34);
DEFLIT(lit_26);
DEFLIT(lit_91);
DEFLIT(lit_86);
DEFLIT(lit_8);
DEFLIT(lit_87);
DEFLIT(lit_29);
DEFLIT(lit_23);
DEFLIT(lit_33);
DEFLIT(lit_20);
DEFLIT(lit_6);
DEFLIT(lit_82);

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
LOCFOR(fun_x_1241_30);
LOCFOR(fun_31);
LOCFOR(fun_write_map_32);
LOCFOR(fun_recurring_write_33);
LOCFOR(fun_recurring_write_34);
LOCFOR(fun_x_1248_35);
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
LOCFOR(fun_recur_47);
LOCFOR(fun_write_type_48);
LOCFOR(fun_recurring_write_49);
LOCFOR(fun_x_1253_50);
LOCFOR(fun_51);
LOCFOR(fun_recurring_write_52);
LOCFOR(fun_recurring_write_53);
LOCFOR(fun_recurring_write_54);
LOCFOR(fun_arg_55);
LOCFOR(fun_56);
LOCFOR(fun_format_57);
LOCFOR(fun_58);
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
  T0 = CALL2(1,VARREF(YruntimeYas),VARREF(YLstrG),name_);
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
  T0 = CALL2(1,VARREF(YruntimeYwrite_string),port_,x_);
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
  T0 = CALL2(1,VARREF(YruntimeYwrite_char),port_,x_);
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
  T0 = CALLN(1,VARREF(YwriteYrecurring_write),4,port_,x_,d_,recur_);
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
  T1 = CALL2(1,VARREF(YruntimeYGE),d_,VARREF(YwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YruntimeYwrite_string),FREEREF(0),LITREF(lit_8));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YruntimeYA),d_,YPint((P)1));
    T3 = CALLN(1,VARREF(YwriteYdo_display),4,FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_display_5) {
  P port_,x_;
  P recurF1102;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF1102 = T1;
  FUNINIT(recurF1102, 2,port_,recurF1102);
  T2 = CALL2(0,recurF1102,x_,YPint((P)-1));
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
  T1 = CALL2(1,VARREF(YruntimeYrcurry),VARREF(YwriteYwrite),x_);
  T0 = CALL1(1,VARREF(YruntimeYcall_with_string_output_port),T1);
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
  T1 = CALL2(1,VARREF(YruntimeYGE),d_,VARREF(YwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YruntimeYwrite_string),FREEREF(0),LITREF(lit_11));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YruntimeYA),d_,YPint((P)1));
    T3 = CALLN(1,VARREF(YwriteYrecurring_write),4,FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_8) {
  P port_,x_;
  P recurF1103;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_7,2);
  recurF1103 = T1;
  FUNINIT(recurF1103, 2,port_,recurF1103);
  T2 = CALL2(0,recurF1103,x_,YPint((P)-1));
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
  CALL2(1,VARREF(YwriteYwrite),port_,x_);
  T0 = CALL1(1,VARREF(YruntimeYnewline),port_);
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
  T1 = CALL1(1,VARREF(YmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_14));
    T0 = T2;
  } else {
    T3 = CALLN(1,VARREF(YwriteYwrite_list),4,port_,x_,d_,recur_);
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
  T0 = CALLN(1,VARREF(YwriteYwrite_flat),4,port_,x_,d_,recur_);
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
  T0 = CALLN(1,VARREF(YwriteYwrite_map),4,port_,x_,d_,recur_);
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
    T1 = CALL2(1,VARREF(YwriteYwrite_boolean),port_,LITREF(lit_15));
    T0 = T1;
  } else {
    T2 = CALL2(1,VARREF(YwriteYwrite_boolean),port_,LITREF(lit_16));
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
  T1 = CALL2(1,VARREF(YruntimeYas),VARREF(YLstrG),x_);
  T0 = CALL2(1,VARREF(YruntimeYwrite_string),port_,T1);
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
  CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_17));
  T2 = (P)YPlu(x_);
  T1 = (P)YPib(T2);
  T0 = CALL2(1,VARREF(YruntimeYnum_to_str),T1,YPint((P)16));
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
  T1 = CALL2(1,VARREF(YmacrosYEE),x_,VARREF(YLnumG));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YwriteYas_binding_name),LITREF(lit_18));
    T2 = CALL2(1,VARREF(YruntimeYwrite_string),port_,T3);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YwriteYwrite_number),port_,x_);
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
  T0 = CALL2(1,VARREF(YwriteYwrite_string_literal),port_,x_);
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
  T0 = CALL2(1,VARREF(YwriteYwrite_char_literal),port_,x_);
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
  CALL2(1,VARREF(YruntimeYwrite_char),port_,YPchr((P)35));
  T0 = CALL2(1,VARREF(YwriteYwrite),port_,mumble_);
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
  T1 = CALL2(1,VARREF(YruntimeYnum_to_str),x_,YPint((P)10));
  T0 = CALL2(1,VARREF(YruntimeYwrite_string),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_char_literal_21) {
  P port_,x_;
  P probeF1104;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YwriteYcharacter_name),x_);
  probeF1104 = T1;
  CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_23));
  if (probeF1104 != YPfalse) {
    T3 = CALL2(1,VARREF(YwriteYwrite),port_,probeF1104);
    T2 = T3;
  } else {
    T4 = CALL2(1,VARREF(YruntimeYwrite_char),port_,x_);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_character_name_22) {
  P char_;
  P tmpF1106;
  P assocF1105;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T1 = CALL3(1,VARREF(YruntimeYassqn),char_,VARREF(YreadYDchar_long_names),YPint((P)1));
  assocF1105 = T1;
  tmpF1106 = assocF1105;
  if (tmpF1106 != YPfalse) {
    T4 = CALL1(1,VARREF(YruntimeY1st),assocF1105);
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
  P tmpF1108;
  P cF1107;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YruntimeYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YruntimeYwrite_char),FREEREF(1),YPchr((P)34));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YmacrosYelt),FREEREF(2),i_);
    cF1107 = T4;
    T6 = CALL2(1,VARREF(YruntimeYE),cF1107,YPchr((P)92));
    tmpF1108 = T6;
    if (tmpF1108 != YPfalse) {
      T7 = tmpF1108;
    } else {
      T8 = CALL2(1,VARREF(YruntimeYE),cF1107,YPchr((P)34));
      T7 = T8;
    }
    T5 = T7;
    if (T5 != YPfalse) {
      T9 = CALL2(1,VARREF(YruntimeYwrite_char),FREEREF(1),YPchr((P)92));
    } else {
    }
    CALL2(1,VARREF(YruntimeYwrite_char),FREEREF(1),cF1107);
    T11 = CALL2(1,VARREF(YruntimeYA),i_,YPint((P)1));
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
  P loopF1110;
  P lenF1109;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YruntimeYwrite_char),port_,YPchr((P)34));
  T1 = CALL1(1,VARREF(YruntimeYlen),x_);
  lenF1109 = T1;
  T3 = FUNSHELL(1,fun_loop_23,4);
  loopF1110 = T3;
  FUNINIT(loopF1110, 4,lenF1109,port_,x_,loopF1110);
  T4 = CALL1(0,loopF1110,YPint((P)0));
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
  T2 = CALL1(1,VARREF(YmacrosYemptyQ),l_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YruntimeYGE),n_,VARREF(YwriteYTmax_print_lengthT));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YruntimeYwrite_string),FREEREF(0),LITREF(lit_32));
      T3 = T5;
    } else {
      CALL2(1,VARREF(YruntimeYwrite_char),FREEREF(0),YPchr((P)32));
      T6 = CALL1(1,VARREF(Yhead),l_);
      CALL2(1,FREEREF(1),T6,FREEREF(2));
      T8 = CALL1(1,VARREF(Ytail),l_);
      T9 = CALL2(1,VARREF(YruntimeYA),n_,YPint((P)1));
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
  P loopF1111;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL1(1,VARREF(YwriteYquotationQ),x_);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YruntimeYwrite_char),port_,YPchr((P)39));
    T4 = CALL1(1,VARREF(Ytail),x_);
    T3 = CALL1(1,VARREF(Yhead),T4);
    T2 = CALL2(1,recur_,T3,d_);
    T0 = T2;
  } else {
    CALL2(1,VARREF(YruntimeYwrite_char),port_,YPchr((P)40));
    T5 = CALL1(1,VARREF(Yhead),x_);
    CALL2(1,recur_,T5,d_);
    T6 = FUNSHELL(1,fun_loop_25,4);
    loopF1111 = T6;
    FUNINIT(loopF1111, 4,port_,recur_,d_,loopF1111);
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(0,loopF1111,T8,YPint((P)1));
    T9 = CALL2(1,VARREF(YruntimeYwrite_char),port_,YPchr((P)41));
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_quotationQ_27) {
  P x_;
  P tmpF1114;
  P tmpF1113;
  P tmpF1112;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF1112 = T1;
  if (tmpF1112 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL2(1,VARREF(YmacrosYEE),T5,LITREF(lit_34));
    tmpF1113 = T4;
    if (tmpF1113 != YPfalse) {
      T9 = CALL1(1,VARREF(Ytail),x_);
      T8 = CALL2(1,VARREF(YisaQ),T9,VARREF(YLlstG));
      tmpF1114 = T8;
      if (tmpF1114 != YPfalse) {
        T13 = CALL1(1,VARREF(Ytail),x_);
        T12 = CALL1(1,VARREF(Ytail),T13);
        T11 = CALL1(1,VARREF(YmacrosYemptyQ),T12);
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
  T1 = CALL2(1,VARREF(YruntimeYGE),i_,VARREF(YwriteYTmax_print_lengthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YruntimeYwrite_string),FREEREF(0),LITREF(lit_39));
    T0 = T2;
  } else {
    T5 = CALL2(1,VARREF(YruntimeYGE),i_,FREEREF(1));
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      CALL2(1,VARREF(YruntimeYwrite_char),FREEREF(0),YPchr((P)32));
      T6 = CALL2(1,VARREF(YmacrosYelt),FREEREF(3),i_);
      CALL2(1,FREEREF(2),T6,FREEREF(4));
      T8 = CALL2(1,VARREF(YruntimeYA),i_,YPint((P)1));
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
  P loopF1116;
  P zF1115;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLvecG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_36));
  } else {
    CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_37));
    T3 = CALL1(1,VARREF(Yobject_class),x_);
    T2 = CALL1(1,VARREF(Yclass_name),T3);
    CALL2(1,VARREF(YwriteYdisplay),port_,T2);
    T4 = CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_38));
  }
  T5 = CALL1(1,VARREF(YruntimeYlen),x_);
  zF1115 = T5;
  T7 = CALL2(1,VARREF(YruntimeYG),zF1115,YPint((P)0));
  if (T7 != YPfalse) {
    T8 = CALL2(1,VARREF(YmacrosYelt),x_,YPint((P)0));
    CALL2(1,recur_,T8,d_);
    T10 = FUNSHELL(1,fun_loop_28,6);
    loopF1116 = T10;
    FUNINIT(loopF1116, 6,port_,zF1115,recur_,x_,d_,loopF1116);
    T11 = CALL1(0,loopF1116,YPint((P)1));
    T9 = T11;
    T6 = T9;
  } else {
    T6 = YPfalse;
  }
  T12 = CALL2(1,VARREF(YruntimeYwrite_char),port_,YPchr((P)41));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_x_1241_30) {
  P x_1239_,x_1237_;
  P valF1121;
  P keyF1120;
  P tup39F1119;
  P iF1118;
  P tmpF1117;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1239_, 0);
  ARG(x_1237_, 1);
loop:
  T3 = CALL2(1,VARREF(YruntimeYfin_stateQ),FREEREF(0),x_1239_);
  tmpF1117 = T3;
  if (tmpF1117 != YPfalse) {
    T4 = tmpF1117;
  } else {
    T5 = CALL2(1,VARREF(YruntimeYfin_stateQ),FREEREF(1),x_1237_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL2(1,VARREF(YruntimeYnow_elt),FREEREF(0),x_1239_);
    iF1118 = T7;
    T10 = CALL2(1,VARREF(YruntimeYnow_key),FREEREF(1),x_1237_);
    T11 = CALL2(1,VARREF(YruntimeYnow_elt),FREEREF(1),x_1237_);
    T9 = CALL2(1,VARREF(YmacrosYtup),T10,T11);
    tup39F1119 = T9;
    T13 = CALL2(1,VARREF(YmacrosYelt),tup39F1119,YPint((P)0));
    keyF1120 = T13;
    T15 = CALL2(1,VARREF(YmacrosYelt),tup39F1119,YPint((P)1));
    valF1121 = T15;
    T16 = CALL2(1,VARREF(YruntimeYGE),iF1118,VARREF(YwriteYTmax_print_lengthT));
    if (T16 != YPfalse) {
      CALL2(1,VARREF(YruntimeYwrite_string),FREEREF(2),LITREF(lit_46));
      T17 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL2(1,VARREF(YruntimeYwrite_char),FREEREF(2),YPchr((P)32));
    CALL2(1,FREEREF(4),keyF1120,FREEREF(5));
    CALL2(1,VARREF(YruntimeYwrite_string),FREEREF(2),LITREF(lit_47));
    CALL2(1,FREEREF(4),valF1121,FREEREF(5));
    T19 = CALL2(1,VARREF(YruntimeYnxt_state),FREEREF(0),x_1239_);
    T20 = CALL2(1,VARREF(YruntimeYnxt_state),FREEREF(1),x_1237_);
    a1 = T19;
    a2 = T20;
    x_1239_ = a1;
    x_1237_ = a2;
    goto loop;
    T14 = T18;
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
  P x_1241F1124;
  P x_1238F1123;
  P x_1240F1122;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = CALL1(1,VARREF(YruntimeYfrom),YPint((P)0));
  x_1240F1122 = T1;
  x_1238F1123 = FREEREF(0);
  T4 = FUNSHELL(1,fun_x_1241_30,7);
  x_1241F1124 = T4;
  FUNINIT(x_1241F1124, 7,x_1240F1122,x_1238F1123,FREEREF(1),blow_,FREEREF(2),FREEREF(3),x_1241F1124);
  T6 = CALL1(1,VARREF(YruntimeYini_state),x_1240F1122);
  T7 = CALL1(1,VARREF(YruntimeYini_state),x_1238F1123);
  T5 = CALL2(0,x_1241F1124,T6,T7);
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
  CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_41));
  T1 = CALL1(1,VARREF(Yobject_class),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YwriteYdisplay),port_,T0);
  T2 = FUNFAB(fun_31,4,x_,port_,recur_,d_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YruntimeYwrite_char),port_,YPchr((P)93));
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
  T0 = CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_48));
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
  T0 = CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_49));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1248_35) {
  P x_1246_,x_1244_,x_1242_;
  P iF1129;
  P specF1128;
  P firstQF1127;
  P tmpF1126;
  P tmpF1125;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1246_, 0);
  ARG(x_1244_, 1);
  ARG(x_1242_, 2);
loop:
  T3 = CALL2(1,VARREF(YruntimeYfin_stateQ),FREEREF(0),x_1246_);
  tmpF1125 = T3;
  if (tmpF1125 != YPfalse) {
    T4 = tmpF1125;
  } else {
    T6 = CALL2(1,VARREF(YruntimeYfin_stateQ),FREEREF(1),x_1244_);
    tmpF1126 = T6;
    if (tmpF1126 != YPfalse) {
      T7 = tmpF1126;
    } else {
      T8 = CALL2(1,VARREF(YruntimeYfin_stateQ),FREEREF(2),x_1242_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL2(1,VARREF(YruntimeYnow_elt),FREEREF(0),x_1246_);
    firstQF1127 = T10;
    T12 = CALL2(1,VARREF(YruntimeYnow_elt),FREEREF(1),x_1244_);
    specF1128 = T12;
    T14 = CALL2(1,VARREF(YruntimeYnow_elt),FREEREF(2),x_1242_);
    iF1129 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF1127);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YruntimeYwrite_char),FREEREF(3),YPchr((P)32));
    } else {
    }
    T17 = CALL1(1,VARREF(YmacrosYemptyQ),FREEREF(4));
    if (T17 != YPfalse) {
      T18 = CALL2(1,VARREF(YwriteYwrite_type),FREEREF(3),specF1128);
    } else {
      T20 = CALL2(1,VARREF(YmacrosYelt),FREEREF(4),iF1129);
      T19 = CALL2(1,VARREF(YruntimeYas),VARREF(YLstrG),T20);
      CALL3(1,VARREF(YruntimeYformat),FREEREF(3),LITREF(lit_55),T19);
      CALL2(1,VARREF(YwriteYwrite_type),FREEREF(3),specF1128);
      T21 = CALL2(1,VARREF(YruntimeYwrite_char),FREEREF(3),YPchr((P)41));
    }
    T23 = CALL2(1,VARREF(YruntimeYnxt_state),FREEREF(0),x_1246_);
    T24 = CALL2(1,VARREF(YruntimeYnxt_state),FREEREF(1),x_1244_);
    T25 = CALL2(1,VARREF(YruntimeYnxt_state),FREEREF(2),x_1242_);
    a1 = T23;
    a2 = T24;
    a3 = T25;
    x_1246_ = a1;
    x_1244_ = a2;
    x_1242_ = a3;
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
  P tmpF1137;
  P valueF1136;
  P x_1248F1135;
  P x_1243F1134;
  P x_1245F1133;
  P x_1247F1132;
  P namesF1131;
  P namesF1130;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
loop:
  T1 = CALL1(1,VARREF(Yfun_names),x_);
  namesF1130 = T1;
  CALL2(1,VARREF(YruntimeYwrite_char),port_,YPchr((P)40));
  T2 = CALL1(1,VARREF(Yfun_names),x_);
  namesF1131 = T2;
  T4 = CALL2(1,VARREF(YruntimeYfirst_then),YPtrue,YPfalse);
  x_1247F1132 = T4;
  T6 = CALL1(1,VARREF(Yfun_specs),x_);
  x_1245F1133 = T6;
  T8 = CALL1(1,VARREF(YruntimeYfrom),YPint((P)0));
  x_1243F1134 = T8;
  T10 = FUNSHELL(1,fun_x_1248_35,6);
  x_1248F1135 = T10;
  FUNINIT(x_1248F1135, 6,x_1247F1132,x_1245F1133,x_1243F1134,port_,namesF1131,x_1248F1135);
  T12 = CALL1(1,VARREF(YruntimeYini_state),x_1247F1132);
  T13 = CALL1(1,VARREF(YruntimeYini_state),x_1245F1133);
  T14 = CALL1(1,VARREF(YruntimeYini_state),x_1243F1134);
  T11 = CALL3(0,x_1248F1135,T12,T13,T14);
  T9 = T11;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T15 = CALL1(1,VARREF(Yfun_value),x_);
  valueF1136 = T15;
  T19 = CALL1(1,VARREF(Ynot),valueF1136);
  tmpF1137 = T19;
  if (tmpF1137 != YPfalse) {
    T20 = tmpF1137;
  } else {
    T21 = CALL2(1,VARREF(YmacrosYEE),valueF1136,VARREF(YLanyG));
    T20 = T21;
  }
  T18 = T20;
  T17 = CALL1(1,VARREF(Ynot),T18);
  if (T17 != YPfalse) {
    CALL2(1,VARREF(YruntimeYformat),port_,LITREF(lit_56));
    T22 = CALL2(1,VARREF(YwriteYwrite_type),port_,valueF1136);
    T16 = T22;
  } else {
    T16 = YPfalse;
  }
  T23 = CALL2(1,VARREF(YruntimeYwrite_char),port_,YPchr((P)41));
  T0 = T23;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_fun_guts_37) {
  P port_,x_,name_,recur_;
  P tmpF1139;
  P nameF1138;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(name_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_58));
  CALL2(1,VARREF(YruntimeYwrite_string),port_,name_);
  T0 = CALL1(1,VARREF(Yfun_name),x_);
  nameF1138 = T0;
  tmpF1139 = nameF1138;
  if (tmpF1139 != YPfalse) {
    CALL2(1,VARREF(YruntimeYwrite_char),port_,YPchr((P)32));
    T4 = CALL2(1,VARREF(YruntimeYas),VARREF(YLstrG),nameF1138);
    T3 = CALL2(1,VARREF(YruntimeYwrite_string),port_,T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  CALL2(1,VARREF(YruntimeYwrite_char),port_,YPchr((P)32));
  CALL3(1,VARREF(YwriteYwrite_params),port_,x_,recur_);
  T5 = CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_59));
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
  T0 = CALLN(1,VARREF(YwriteYwrite_fun_guts),4,port_,x_,LITREF(lit_60),recur_);
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
  T0 = CALLN(1,VARREF(YwriteYwrite_fun_guts),4,port_,x_,LITREF(lit_61),recur_);
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
  CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_62));
  T1 = CALL1(1,VARREF(Yclass_name),x_);
  T0 = CALL2(1,VARREF(YruntimeYas),VARREF(YLstrG),T1);
  CALL2(1,VARREF(YruntimeYwrite_string),port_,T0);
  CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_63));
  T3 = CALL1(1,VARREF(Yclass_direct_parents),x_);
  T2 = CALL2(1,VARREF(YmacrosYmap),VARREF(Yclass_name),T3);
  CALL2(1,recur_,T2,d_);
  T4 = CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_64));
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
  CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_65));
  T0 = CALL1(1,VARREF(Ytype_object),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_66));
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
  CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_67));
  T0 = CALL1(1,VARREF(Ytype_class),x_);
  CALL2(1,VARREF(YwriteYwrite_type),port_,T0);
  T1 = CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_68));
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
  CALL2(1,VARREF(YruntimeYwrite_char),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YwriteYwrite_type),FREEREF(0),t_);
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
  CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_69));
  T0 = FUNFAB(fun_43,1,port_);
  T1 = CALL1(1,VARREF(Ytype_elts),x_);
  CALL2(1,VARREF(YruntimeYdo),T0,T1);
  T2 = CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_70));
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
  T2 = CALL1(1,VARREF(Yclass_name),x_);
  T1 = CALL2(1,VARREF(YruntimeYas),VARREF(YLstrG),T2);
  T0 = CALL2(1,VARREF(YruntimeYwrite_string),port_,T1);
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
  T0 = CALLN(1,VARREF(YwriteYrecurring_write),4,port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recur_47) {
  P x_,d_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
loop:
  T0 = CALLN(1,VARREF(YwriteYrecurring_write_type),4,FREEREF(0),x_,d_,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_type_48) {
  P port_,x_;
  P recurF1140;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_47,2);
  recurF1140 = T1;
  FUNINIT(recurF1140, 2,port_,recurF1140);
  T2 = CALL2(0,recurF1140,x_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_49) {
  P port_,x_,d_,recur_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_73));
  T0 = CALL1(1,VARREF(Yslot_getter),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_74));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_x_1253_50) {
  P x_1251_,x_1249_;
  P getterF1144;
  P slotF1143;
  P iF1142;
  P tmpF1141;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1251_, 0);
  ARG(x_1249_, 1);
loop:
  T3 = CALL2(1,VARREF(YruntimeYfin_stateQ),FREEREF(0),x_1251_);
  tmpF1141 = T3;
  if (tmpF1141 != YPfalse) {
    T4 = tmpF1141;
  } else {
    T5 = CALL2(1,VARREF(YruntimeYfin_stateQ),FREEREF(1),x_1249_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL2(1,VARREF(YruntimeYnow_elt),FREEREF(0),x_1251_);
    iF1142 = T7;
    T9 = CALL2(1,VARREF(YruntimeYnow_elt),FREEREF(1),x_1249_);
    slotF1143 = T9;
    T10 = CALL2(1,VARREF(YruntimeYGE),iF1142,VARREF(YwriteYTmax_print_lengthT));
    if (T10 != YPfalse) {
      CALL2(1,VARREF(YruntimeYwrite_string),FREEREF(2),LITREF(lit_79));
      T11 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T12 = CALL1(1,VARREF(Yslot_getter),slotF1143);
    getterF1144 = T12;
    CALL2(1,VARREF(YruntimeYwrite_char),FREEREF(2),YPchr((P)32));
    T13 = CALL1(1,VARREF(Yfun_name),getterF1144);
    CALL2(1,VARREF(YwriteYdisplay),FREEREF(2),T13);
    CALL2(1,VARREF(YruntimeYwrite_string),FREEREF(2),LITREF(lit_80));
    T15 = CALL1(1,getterF1144,FREEREF(5));
    T14 = CALL2(1,FREEREF(4),T15,FREEREF(6));
    T17 = CALL2(1,VARREF(YruntimeYnxt_state),FREEREF(0),x_1251_);
    T18 = CALL2(1,VARREF(YruntimeYnxt_state),FREEREF(1),x_1249_);
    a1 = T17;
    a2 = T18;
    x_1251_ = a1;
    x_1249_ = a2;
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

FUNCODEDEF(fun_51) {
  P blow_;
  P x_1253F1147;
  P x_1250F1146;
  P x_1252F1145;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = CALL1(1,VARREF(YruntimeYfrom),YPint((P)0));
  x_1252F1145 = T1;
  T3 = CALL1(1,VARREF(Yobject_slots),FREEREF(0));
  x_1250F1146 = T3;
  T5 = FUNSHELL(1,fun_x_1253_50,8);
  x_1253F1147 = T5;
  FUNINIT(x_1253F1147, 8,x_1252F1145,x_1250F1146,FREEREF(1),blow_,FREEREF(2),FREEREF(0),FREEREF(3),x_1253F1147);
  T7 = CALL1(1,VARREF(YruntimeYini_state),x_1252F1145);
  T8 = CALL1(1,VARREF(YruntimeYini_state),x_1250F1146);
  T6 = CALL2(0,x_1253F1147,T7,T8);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_52) {
  P port_,x_,d_,recur_;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_75));
  T1 = CALL1(1,VARREF(Yobject_class),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YwriteYdisplay),port_,T0);
  T2 = FUNFAB(fun_51,4,x_,port_,recur_,d_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_81));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_53) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_82));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_54) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YruntimeYwrite_string),port_,LITREF(lit_83));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_55) {
  P char_,class_;
  P tmpF1150;
  P argumentF1149;
  P current_indexF1148;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
loop:
  T1 = BOXVAL(FREEREF(0));
  current_indexF1148 = T1;
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YruntimeYA),T3,YPint((P)1));
  BOXVAL(FREEREF(0)) = T2;
  T5 = CALL2(1,VARREF(YruntimeYL),current_indexF1148,FREEREF(1));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_89),FREEREF(2),FREEREF(3));
  } else {
  }
  T8 = CALL2(1,VARREF(YmacrosYelt),FREEREF(3),current_indexF1148);
  argumentF1149 = T8;
  T11 = CALL2(1,VARREF(YmacrosYEE),class_,VARREF(YLanyG));
  tmpF1150 = T11;
  if (tmpF1150 != YPfalse) {
    T12 = tmpF1150;
  } else {
    T13 = CALL2(1,VARREF(YisaQ),argumentF1149,class_);
    T12 = T13;
  }
  T10 = T12;
  T9 = CALL1(1,VARREF(Ynot),T10);
  if (T9 != YPfalse) {
    T14 = CALLN(1,VARREF(Yerror),4,LITREF(lit_90),char_,class_,argumentF1149);
  } else {
  }
  T7 = argumentF1149;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P c_;
  P x_1261F1158;
  P x_1260F1157;
  P x_1259F1156;
  P x_1258F1155;
  P x_1257F1154;
  P x_1256F1153;
  P x_1255F1152;
  P x_1254F1151;
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
    T2 = CALL1(1,VARREF(YruntimeYas_uppercase),c_);
    x_1254F1151 = T2;
    T4 = CALL2(1,VARREF(YmacrosYEE),x_1254F1151,YPchr((P)68));
    if (T4 != YPfalse) {
      T7 = CALL2(1,FREEREF(2),c_,VARREF(YLnumG));
      T6 = CALL1(1,VARREF(YruntimeYnum_to_str),T7);
      T5 = CALL2(1,VARREF(YruntimeYwrite_string),FREEREF(1),T6);
      T3 = T5;
    } else {
      x_1255F1152 = x_1254F1151;
      T10 = CALL2(1,VARREF(YmacrosYEE),x_1255F1152,YPchr((P)66));
      if (T10 != YPfalse) {
        T13 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
        T12 = CALL2(1,VARREF(YruntimeYnum_to_str),T13,YPint((P)2));
        T11 = CALL2(1,VARREF(YruntimeYwrite_string),FREEREF(1),T12);
        T9 = T11;
      } else {
        x_1256F1153 = x_1255F1152;
        T16 = CALL2(1,VARREF(YmacrosYEE),x_1256F1153,YPchr((P)79));
        if (T16 != YPfalse) {
          T19 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
          T18 = CALL2(1,VARREF(YruntimeYnum_to_str),T19,YPint((P)8));
          T17 = CALL2(1,VARREF(YruntimeYwrite_string),FREEREF(1),T18);
          T15 = T17;
        } else {
          x_1257F1154 = x_1256F1153;
          T22 = CALL2(1,VARREF(YmacrosYEE),x_1257F1154,YPchr((P)88));
          if (T22 != YPfalse) {
            T25 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
            T24 = CALL2(1,VARREF(YruntimeYnum_to_str),T25,YPint((P)16));
            T23 = CALL2(1,VARREF(YruntimeYwrite_string),FREEREF(1),T24);
            T21 = T23;
          } else {
            x_1258F1155 = x_1257F1154;
            T28 = CALL2(1,VARREF(YmacrosYEE),x_1258F1155,YPchr((P)67));
            if (T28 != YPfalse) {
              T30 = CALL2(1,FREEREF(2),c_,VARREF(YLchrG));
              T29 = CALL2(1,VARREF(YruntimeYwrite_char),FREEREF(1),T30);
              T27 = T29;
            } else {
              x_1259F1156 = x_1258F1155;
              T33 = CALL2(1,VARREF(YmacrosYEE),x_1259F1156,YPchr((P)83));
              if (T33 != YPfalse) {
                T35 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                T34 = CALL2(1,VARREF(YwriteYdisplay),FREEREF(1),T35);
                T32 = T34;
              } else {
                x_1260F1157 = x_1259F1156;
                T38 = CALL2(1,VARREF(YmacrosYEE),x_1260F1157,YPchr((P)61));
                if (T38 != YPfalse) {
                  T40 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                  T39 = CALL2(1,VARREF(YwriteYwrite),FREEREF(1),T40);
                  T37 = T39;
                } else {
                  x_1261F1158 = x_1260F1157;
                  T43 = CALL2(1,VARREF(YmacrosYEE),x_1261F1158,YPchr((P)37));
                  if (T43 != YPfalse) {
                    T44 = CALL2(1,VARREF(YruntimeYwrite_char),FREEREF(1),YPchr((P)37));
                    T42 = T44;
                  } else {
                    T45 = CALL3(1,VARREF(Yerror),LITREF(lit_92),c_,FREEREF(3));
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
    T48 = CALL2(1,VARREF(YmacrosYEE),c_,YPchr((P)37));
    if (T48 != YPfalse) {
      T49 = BOXVAL(FREEREF(0)) = YPtrue;
      T47 = T49;
    } else {
      T50 = CALL2(1,VARREF(YruntimeYwrite_char),FREEREF(1),c_);
      T47 = T50;
    }
    T0 = T47;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_format_57) {
  P port_,message_,arguments_;
  P argF1162;
  P num_argumentsF1161;
  P argument_indexF1160;
  P found_percentQF1159;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
loop:
  found_percentQF1159 = YPfalse;
  found_percentQF1159 = BOXFAB(found_percentQF1159);
  check_type(YPint((P)0),VARREF(YLintG));
  argument_indexF1160 = YPint((P)0);
  argument_indexF1160 = BOXFAB(argument_indexF1160);
  T5 = CALL1(1,VARREF(YruntimeYlen),arguments_);
  num_argumentsF1161 = T5;
  T6 = FUNSHELL(1,fun_arg_55,4);
  argF1162 = T6;
  FUNINIT(argF1162, 4,argument_indexF1160,num_argumentsF1161,message_,arguments_);
  T8 = FUNFAB(fun_56,4,found_percentQF1159,port_,argF1162,message_);
  T7 = CALL2(1,VARREF(YruntimeYdo),T8,message_);
  T12 = BOXVAL(found_percentQF1159);
  T11 = CALL1(1,VARREF(Ynot),T12);
  T10 = CALL1(1,VARREF(Ynot),T11);
  if (T10 != YPfalse) {
    T13 = CALL2(1,VARREF(Yerror),LITREF(lit_93),message_);
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

FUNCODEDEF(fun_58) {
  P out_;
  P T0;
  P a1;
LINK_STACK();
  ARG(out_, 0);
loop:
  CALLN(1,VARREF(YmacrosYnapply),5,VARREF(YruntimeYformat),YPfalse,out_,FREEREF(0),FREEREF(1));
  T0 = CALL1(1,VARREF(YruntimeYport_contents),out_);
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
  T1 = FUNFAB(fun_58,2,message_,arguments_);
  T0 = CALL1(1,VARREF(YruntimeYcall_with_string_output_port),T1);
UNLINK_STACK();
  RET(T0);
}

P YwriteY___main_0___() {
  P T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225;
  P T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209;
  P T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193;
  P T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177;
  P T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161;
  P T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145;
  P T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129;
  P T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113;
  P T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97;
  P T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81;
  P T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65;
  P T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
loop:
  VARSET(YwriteYTmax_print_depthT,YPint((P)4));
  VARSET(YwriteYTmax_print_lengthT,YPint((P)12));
  lit_0 = YPPsym((P)"as-binding-name");
  lit_1 = YPPsym((P)"name");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_binding_name_0 = YPmet(FUNCODEREF(fun_as_binding_name_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YwriteYas_binding_name);
  if (T3 != YPfalse) {
    T2 = VARREF(YwriteYas_binding_name);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_as_binding_name_0;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YwriteYas_binding_name,T1);
  lit_2 = YPPsym((P)"do-display");
  lit_3 = YPPsym((P)"port");
  lit_4 = YPPsym((P)"x");
  lit_5 = YPPsym((P)"d");
  lit_6 = YPPsym((P)"recur");
  T5 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_display_1 = YPmet(FUNCODEREF(fun_do_display_1),LITREF(lit_2),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YwriteYdo_display);
  if (T8 != YPfalse) {
    T7 = VARREF(YwriteYdo_display);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_do_display_1;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YwriteYdo_display,T6);
  T10 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_display_2 = YPmet(FUNCODEREF(fun_do_display_2),LITREF(lit_2),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YwriteYdo_display);
  if (T13 != YPfalse) {
    T12 = VARREF(YwriteYdo_display);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_do_display_2;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YwriteYdo_display,T11);
  T15 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_display_3 = YPmet(FUNCODEREF(fun_do_display_3),LITREF(lit_2),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YwriteYdo_display);
  if (T18 != YPfalse) {
    T17 = VARREF(YwriteYdo_display);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_do_display_3;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YwriteYdo_display,T16);
  lit_7 = YPPsym((P)"display");
  lit_8 = YPsb((P)"*");
  T21 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_4 = YPmet(FUNCODEREF(fun_recur_4),LITREF(lit_6),T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YruntimeYLoutput_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_display_5 = YPmet(FUNCODEREF(fun_display_5),LITREF(lit_7),T20,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YwriteYdisplay);
  if (T24 != YPfalse) {
    T23 = VARREF(YwriteYdisplay);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_display_5;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YwriteYdisplay,T22);
  lit_9 = YPPsym((P)"write-to-string");
  T26 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_write_to_string_6 = YPmet(FUNCODEREF(fun_write_to_string_6),LITREF(lit_9),T26,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(YwriteYwrite_to_string);
  if (T29 != YPfalse) {
    T28 = VARREF(YwriteYwrite_to_string);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_write_to_string_6;
  T27 = CALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YwriteYwrite_to_string,T27);
  lit_10 = YPPsym((P)"write");
  lit_11 = YPsb((P)"*");
  T32 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_7 = YPmet(FUNCODEREF(fun_recur_7),LITREF(lit_6),T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YruntimeYLoutput_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_8 = YPmet(FUNCODEREF(fun_write_8),LITREF(lit_10),T31,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YwriteYwrite);
  if (T35 != YPfalse) {
    T34 = VARREF(YwriteYwrite);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_write_8;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YwriteYwrite,T33);
  lit_12 = YPPsym((P)"writeln");
  T37 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YruntimeYLoutput_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_writeln_9 = YPmet(FUNCODEREF(fun_writeln_9),LITREF(lit_12),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YwriteYwriteln);
  if (T40 != YPfalse) {
    T39 = VARREF(YwriteYwriteln);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_writeln_9;
  T38 = CALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YwriteYwriteln,T38);
  lit_13 = YPPsym((P)"recurring-write");
  lit_14 = YPsb((P)"()");
  T42 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_10 = YPmet(FUNCODEREF(fun_recurring_write_10),LITREF(lit_13),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YwriteYrecurring_write);
  if (T45 != YPfalse) {
    T44 = VARREF(YwriteYrecurring_write);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_recurring_write_10;
  T43 = CALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YwriteYrecurring_write,T43);
  T47 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLflatG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_11 = YPmet(FUNCODEREF(fun_recurring_write_11),LITREF(lit_13),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YwriteYrecurring_write);
  if (T50 != YPfalse) {
    T49 = VARREF(YwriteYrecurring_write);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_recurring_write_11;
  T48 = CALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YwriteYrecurring_write,T48);
  T52 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YruntimeYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_12 = YPmet(FUNCODEREF(fun_recurring_write_12),LITREF(lit_13),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YwriteYrecurring_write);
  if (T55 != YPfalse) {
    T54 = VARREF(YwriteYrecurring_write);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_recurring_write_12;
  T53 = CALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YwriteYrecurring_write,T53);
  lit_15 = YPPsym((P)"t");
  lit_16 = YPPsym((P)"f");
  T57 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_13 = YPmet(FUNCODEREF(fun_recurring_write_13),LITREF(lit_13),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YwriteYrecurring_write);
  if (T60 != YPfalse) {
    T59 = VARREF(YwriteYrecurring_write);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_recurring_write_13;
  T58 = CALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YwriteYrecurring_write,T58);
  T62 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLsymG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_14 = YPmet(FUNCODEREF(fun_recurring_write_14),LITREF(lit_13),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YwriteYrecurring_write);
  if (T65 != YPfalse) {
    T64 = VARREF(YwriteYrecurring_write);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_recurring_write_14;
  T63 = CALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YwriteYrecurring_write,T63);
  lit_17 = YPsb((P)"&0x");
  T67 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLlocG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_15 = YPmet(FUNCODEREF(fun_recurring_write_15),LITREF(lit_13),T67,ENVNUL,PNUL,YPfalse);
  T70 = BOUNDP(YwriteYrecurring_write);
  if (T70 != YPfalse) {
    T69 = VARREF(YwriteYrecurring_write);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_recurring_write_15;
  T68 = CALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YwriteYrecurring_write,T68);
  lit_18 = YPsb((P)"<num>");
  T72 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLnumG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_16 = YPmet(FUNCODEREF(fun_recurring_write_16),LITREF(lit_13),T72,ENVNUL,PNUL,YPfalse);
  T75 = BOUNDP(YwriteYrecurring_write);
  if (T75 != YPfalse) {
    T74 = VARREF(YwriteYrecurring_write);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_recurring_write_16;
  T73 = CALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YwriteYrecurring_write,T73);
  T77 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_17 = YPmet(FUNCODEREF(fun_recurring_write_17),LITREF(lit_13),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YwriteYrecurring_write);
  if (T80 != YPfalse) {
    T79 = VARREF(YwriteYrecurring_write);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_recurring_write_17;
  T78 = CALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YwriteYrecurring_write,T78);
  T82 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_18 = YPmet(FUNCODEREF(fun_recurring_write_18),LITREF(lit_13),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YwriteYrecurring_write);
  if (T85 != YPfalse) {
    T84 = VARREF(YwriteYrecurring_write);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_recurring_write_18;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YwriteYrecurring_write,T83);
  lit_19 = YPPsym((P)"write-boolean");
  lit_20 = YPPsym((P)"mumble");
  T87 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_20)),YPPlist(2,VARREF(YruntimeYLoutput_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_boolean_19 = YPmet(FUNCODEREF(fun_write_boolean_19),LITREF(lit_19),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YwriteYwrite_boolean);
  if (T90 != YPfalse) {
    T89 = VARREF(YwriteYwrite_boolean);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_write_boolean_19;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YwriteYwrite_boolean,T88);
  lit_21 = YPPsym((P)"write-number");
  T92 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YruntimeYLoutput_portG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_number_20 = YPmet(FUNCODEREF(fun_write_number_20),LITREF(lit_21),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YwriteYwrite_number);
  if (T95 != YPfalse) {
    T94 = VARREF(YwriteYwrite_number);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_write_number_20;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YwriteYwrite_number,T93);
  lit_22 = YPPsym((P)"write-char-literal");
  lit_23 = YPsb((P)"#\\");
  T97 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YruntimeYLoutput_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_char_literal_21 = YPmet(FUNCODEREF(fun_write_char_literal_21),LITREF(lit_22),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YwriteYwrite_char_literal);
  if (T100 != YPfalse) {
    T99 = VARREF(YwriteYwrite_char_literal);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_write_char_literal_21;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YwriteYwrite_char_literal,T98);
  lit_24 = YPPsym((P)"character-name");
  lit_25 = YPPsym((P)"char");
  T102 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_character_name_22 = YPmet(FUNCODEREF(fun_character_name_22),LITREF(lit_24),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YwriteYcharacter_name);
  if (T105 != YPfalse) {
    T104 = VARREF(YwriteYcharacter_name);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_character_name_22;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YwriteYcharacter_name,T103);
  lit_26 = YPPsym((P)"write-string-literal");
  lit_27 = YPPsym((P)"loop");
  lit_28 = YPPsym((P)"i");
  T108 = YPsig(YPPlist(1,LITREF(lit_28)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_23 = YPmet(FUNCODEREF(fun_loop_23),LITREF(lit_27),T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YruntimeYLoutput_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_string_literal_24 = YPmet(FUNCODEREF(fun_write_string_literal_24),LITREF(lit_26),T107,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YwriteYwrite_string_literal);
  if (T111 != YPfalse) {
    T110 = VARREF(YwriteYwrite_string_literal);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_write_string_literal_24;
  T109 = CALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YwriteYwrite_string_literal,T109);
  lit_29 = YPPsym((P)"write-list");
  lit_30 = YPPsym((P)"l");
  lit_31 = YPPsym((P)"n");
  lit_32 = YPsb((P)" ...");
  T114 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_25 = YPmet(FUNCODEREF(fun_loop_25),LITREF(lit_27),T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_list_26 = YPmet(FUNCODEREF(fun_write_list_26),LITREF(lit_29),T113,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YwriteYwrite_list);
  if (T117 != YPfalse) {
    T116 = VARREF(YwriteYwrite_list);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_write_list_26;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YwriteYwrite_list,T115);
  lit_33 = YPPsym((P)"quotation?");
  lit_34 = YPPsym((P)"quote");
  T119 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_quotationQ_27 = YPmet(FUNCODEREF(fun_quotationQ_27),LITREF(lit_33),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YwriteYquotationQ);
  if (T122 != YPfalse) {
    T121 = VARREF(YwriteYquotationQ);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_quotationQ_27;
  T120 = CALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YwriteYquotationQ,T120);
  lit_35 = YPPsym((P)"write-flat");
  lit_36 = YPsb((P)"#(");
  lit_37 = YPsb((P)"$$");
  lit_38 = YPsb((P)"(");
  lit_39 = YPsb((P)" ...");
  T125 = YPsig(YPPlist(1,LITREF(lit_28)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_28 = YPmet(FUNCODEREF(fun_loop_28),LITREF(lit_27),T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLflatG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_flat_29 = YPmet(FUNCODEREF(fun_write_flat_29),LITREF(lit_35),T124,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YwriteYwrite_flat);
  if (T128 != YPfalse) {
    T127 = VARREF(YwriteYwrite_flat);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_write_flat_29;
  T126 = CALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YwriteYwrite_flat,T126);
  lit_40 = YPPsym((P)"write-map");
  lit_41 = YPsb((P)"#[");
  lit_42 = YPPsym((P)"blow");
  lit_43 = YPPsym((P)"x-1241");
  lit_44 = YPPsym((P)"x-1239");
  lit_45 = YPPsym((P)"x-1237");
  lit_46 = YPsb((P)" ...");
  lit_47 = YPsb((P)": ");
  T132 = YPsig(YPPlist(2,LITREF(lit_44),LITREF(lit_45)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1241_30 = YPmet(FUNCODEREF(fun_x_1241_30),LITREF(lit_43),T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YruntimeYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_map_32 = YPmet(FUNCODEREF(fun_write_map_32),LITREF(lit_40),T130,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YwriteYwrite_map);
  if (T135 != YPfalse) {
    T134 = VARREF(YwriteYwrite_map);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_write_map_32;
  T133 = CALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YwriteYwrite_map,T133);
  lit_48 = YPsb((P)"#{Input-port}");
  T137 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YruntimeYLinput_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_33 = YPmet(FUNCODEREF(fun_recurring_write_33),LITREF(lit_13),T137,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(YwriteYrecurring_write);
  if (T140 != YPfalse) {
    T139 = VARREF(YwriteYrecurring_write);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_recurring_write_33;
  T138 = CALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YwriteYrecurring_write,T138);
  lit_49 = YPsb((P)"#{Output-port}");
  T142 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YruntimeYLoutput_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_34 = YPmet(FUNCODEREF(fun_recurring_write_34),LITREF(lit_13),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YwriteYrecurring_write);
  if (T145 != YPfalse) {
    T144 = VARREF(YwriteYrecurring_write);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_recurring_write_34;
  T143 = CALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YwriteYrecurring_write,T143);
  lit_50 = YPPsym((P)"write-params");
  lit_51 = YPPsym((P)"x-1248");
  lit_52 = YPPsym((P)"x-1246");
  lit_53 = YPPsym((P)"x-1244");
  lit_54 = YPPsym((P)"x-1242");
  lit_55 = YPsb((P)"(%s ");
  lit_56 = YPsb((P)" => ");
  T148 = YPsig(YPPlist(3,LITREF(lit_52),LITREF(lit_53),LITREF(lit_54)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1248_35 = YPmet(FUNCODEREF(fun_x_1248_35),LITREF(lit_51),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_4),LITREF(lit_6)),YPPlist(3,VARREF(YruntimeYLoutput_portG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_write_params_36 = YPmet(FUNCODEREF(fun_write_params_36),LITREF(lit_50),T147,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YwriteYwrite_params);
  if (T151 != YPfalse) {
    T150 = VARREF(YwriteYwrite_params);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_write_params_36;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YwriteYwrite_params,T149);
  lit_57 = YPPsym((P)"write-fun-guts");
  lit_58 = YPsb((P)"#{");
  lit_59 = YPsb((P)"}");
  T153 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_1),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLfunG),VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_fun_guts_37 = YPmet(FUNCODEREF(fun_write_fun_guts_37),LITREF(lit_57),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YwriteYwrite_fun_guts);
  if (T156 != YPfalse) {
    T155 = VARREF(YwriteYwrite_fun_guts);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_write_fun_guts_37;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YwriteYwrite_fun_guts,T154);
  lit_60 = YPsb((P)"Gen");
  T158 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLgenG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_38 = YPmet(FUNCODEREF(fun_recurring_write_38),LITREF(lit_13),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YwriteYrecurring_write);
  if (T161 != YPfalse) {
    T160 = VARREF(YwriteYrecurring_write);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_recurring_write_38;
  T159 = CALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YwriteYrecurring_write,T159);
  lit_61 = YPsb((P)"Met");
  T163 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLmetG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_39 = YPmet(FUNCODEREF(fun_recurring_write_39),LITREF(lit_13),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YwriteYrecurring_write);
  if (T166 != YPfalse) {
    T165 = VARREF(YwriteYrecurring_write);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_recurring_write_39;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YwriteYrecurring_write,T164);
  lit_62 = YPsb((P)"#{Class ");
  lit_63 = YPsb((P)" ");
  lit_64 = YPsb((P)"}");
  T168 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_40 = YPmet(FUNCODEREF(fun_recurring_write_40),LITREF(lit_13),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(YwriteYrecurring_write);
  if (T171 != YPfalse) {
    T170 = VARREF(YwriteYrecurring_write);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_recurring_write_40;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YwriteYrecurring_write,T169);
  lit_65 = YPsb((P)"#{T= ");
  lit_66 = YPsb((P)"}");
  T173 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLsingletonG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_41 = YPmet(FUNCODEREF(fun_recurring_write_41),LITREF(lit_13),T173,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(YwriteYrecurring_write);
  if (T176 != YPfalse) {
    T175 = VARREF(YwriteYrecurring_write);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_recurring_write_41;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YwriteYrecurring_write,T174);
  lit_67 = YPsb((P)"#{T< ");
  lit_68 = YPsb((P)"}");
  T178 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLsubclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_42 = YPmet(FUNCODEREF(fun_recurring_write_42),LITREF(lit_13),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(YwriteYrecurring_write);
  if (T181 != YPfalse) {
    T180 = VARREF(YwriteYrecurring_write);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_recurring_write_42;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YwriteYrecurring_write,T179);
  lit_69 = YPsb((P)"#{T+");
  lit_70 = YPsb((P)"}");
  T184 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T184,ENVNUL,PNUL,YPfalse);
  T183 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLunionG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_44 = YPmet(FUNCODEREF(fun_recurring_write_44),LITREF(lit_13),T183,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(YwriteYrecurring_write);
  if (T187 != YPfalse) {
    T186 = VARREF(YwriteYrecurring_write);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_recurring_write_44;
  T185 = CALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(YwriteYrecurring_write,T185);
  lit_71 = YPPsym((P)"recurring-write-type");
  T189 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_45 = YPmet(FUNCODEREF(fun_recurring_write_type_45),LITREF(lit_71),T189,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(YwriteYrecurring_write_type);
  if (T192 != YPfalse) {
    T191 = VARREF(YwriteYrecurring_write_type);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_recurring_write_type_45;
  T190 = CALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YwriteYrecurring_write_type,T190);
  T194 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_46 = YPmet(FUNCODEREF(fun_recurring_write_type_46),LITREF(lit_71),T194,ENVNUL,PNUL,YPfalse);
  T197 = BOUNDP(YwriteYrecurring_write_type);
  if (T197 != YPfalse) {
    T196 = VARREF(YwriteYrecurring_write_type);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_recurring_write_type_46;
  T195 = CALL2(1,VARREF(YPdefine_method),T196,T198);
  VARSET(YwriteYrecurring_write_type,T195);
  lit_72 = YPPsym((P)"write-type");
  T200 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_47 = YPmet(FUNCODEREF(fun_recur_47),LITREF(lit_6),T200,ENVNUL,PNUL,YPfalse);
  T199 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YruntimeYLoutput_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_type_48 = YPmet(FUNCODEREF(fun_write_type_48),LITREF(lit_72),T199,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(YwriteYwrite_type);
  if (T203 != YPfalse) {
    T202 = VARREF(YwriteYwrite_type);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_write_type_48;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  VARSET(YwriteYwrite_type,T201);
  lit_73 = YPsb((P)"#{Slot ");
  lit_74 = YPsb((P)"}");
  T205 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLslotG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_49 = YPmet(FUNCODEREF(fun_recurring_write_49),LITREF(lit_13),T205,ENVNUL,PNUL,YPfalse);
  T208 = BOUNDP(YwriteYrecurring_write);
  if (T208 != YPfalse) {
    T207 = VARREF(YwriteYrecurring_write);
  } else {
    T207 = YPfalse;
  }
  T209 = fun_recurring_write_49;
  T206 = CALL2(1,VARREF(YPdefine_method),T207,T209);
  VARSET(YwriteYrecurring_write,T206);
  lit_75 = YPsb((P)"#{");
  lit_76 = YPPsym((P)"x-1253");
  lit_77 = YPPsym((P)"x-1251");
  lit_78 = YPPsym((P)"x-1249");
  lit_79 = YPsb((P)" ...");
  lit_80 = YPsb((P)": ");
  lit_81 = YPsb((P)"}");
  T212 = YPsig(YPPlist(2,LITREF(lit_77),LITREF(lit_78)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1253_50 = YPmet(FUNCODEREF(fun_x_1253_50),LITREF(lit_76),T212,ENVNUL,PNUL,YPfalse);
  T211 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T211,ENVNUL,PNUL,YPfalse);
  T210 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_52 = YPmet(FUNCODEREF(fun_recurring_write_52),LITREF(lit_13),T210,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(YwriteYrecurring_write);
  if (T215 != YPfalse) {
    T214 = VARREF(YwriteYrecurring_write);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_recurring_write_52;
  T213 = CALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YwriteYrecurring_write,T213);
  lit_82 = YPsb((P)"#{End-of-file}");
  T219 = CALL0(1,VARREF(YruntimeYeof_object));
  T218 = CALL1(1,VARREF(YruntimeYtE),T219);
  T217 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),T218,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_53 = YPmet(FUNCODEREF(fun_recurring_write_53),LITREF(lit_13),T217,ENVNUL,PNUL,YPfalse);
  T222 = BOUNDP(YwriteYrecurring_write);
  if (T222 != YPfalse) {
    T221 = VARREF(YwriteYrecurring_write);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_recurring_write_53;
  T220 = CALL2(1,VARREF(YPdefine_method),T221,T223);
  VARSET(YwriteYrecurring_write,T220);
  lit_83 = YPsb((P)"nul");
  T225 = CALL1(1,VARREF(YruntimeYtE),VARREF(Ynul));
  T224 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YruntimeYLoutput_portG),T225,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_54 = YPmet(FUNCODEREF(fun_recurring_write_54),LITREF(lit_13),T224,ENVNUL,PNUL,YPfalse);
  T228 = BOUNDP(YwriteYrecurring_write);
  if (T228 != YPfalse) {
    T227 = VARREF(YwriteYrecurring_write);
  } else {
    T227 = YPfalse;
  }
  T229 = fun_recurring_write_54;
  T226 = CALL2(1,VARREF(YPdefine_method),T227,T229);
  VARSET(YwriteYrecurring_write,T226);
  lit_84 = YPPsym((P)"format");
  lit_85 = YPPsym((P)"message");
  lit_86 = YPPsym((P)"arguments");
  lit_87 = YPPsym((P)"arg");
  lit_88 = YPPsym((P)"class");
  lit_89 = YPsb((P)"Too few arguments for format string %=: %=");
  lit_90 = YPsb((P)"Format argument for directive '%%%c' not of class %s: %=");
  lit_91 = YPPsym((P)"c");
  lit_92 = YPsb((P)"Invalid format directive '%s' in \"%s\"");
  lit_93 = YPsb((P)"Incomplete format directive in \"%s\"");
  T232 = YPsig(YPPlist(2,LITREF(lit_25),LITREF(lit_88)),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_arg_55 = YPmet(FUNCODEREF(fun_arg_55),LITREF(lit_87),T232,ENVNUL,PNUL,YPfalse);
  T231 = YPsig(YPPlist(1,LITREF(lit_91)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T231,ENVNUL,PNUL,YPfalse);
  T230 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_85),LITREF(lit_86)),YPPlist(2,VARREF(YruntimeYLoutput_portG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_format_57 = YPmet(FUNCODEREF(fun_format_57),LITREF(lit_84),T230,ENVNUL,PNUL,YPfalse);
  T235 = BOUNDP(YruntimeYformat);
  if (T235 != YPfalse) {
    T234 = VARREF(YruntimeYformat);
  } else {
    T234 = YPfalse;
  }
  T236 = fun_format_57;
  T233 = CALL2(1,VARREF(YPdefine_method),T234,T236);
  VARSET(YruntimeYformat,T233);
  lit_94 = YPPsym((P)"format-to-string");
  lit_95 = YPPsym((P)"out");
  T238 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T238,ENVNUL,PNUL,YPfalse);
  T237 = YPsig(YPPlist(2,LITREF(lit_85),LITREF(lit_86)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLstrG),Ynil);
  YruntimeYformat_to_string = YPmet(FUNCODEREF(YruntimeYformat_to_string),LITREF(lit_94),T237,ENVNUL,PNUL,YPfalse);
  T239 = YruntimeYformat_to_string;
  VARSET(YruntimeYformat_to_string,T239);
  T240 = YPfalse;
  return T240;
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
  {"read-from-string", &module_info_read, "read-from-string"},
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
  {"$char-long-names", &module_info_read, "$char-long-names"},
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
  {"quotation?", &YwriteYquotationQ},
  {"writeln", &YwriteYwriteln},
  {"write-flat", &YwriteYwrite_flat},
  {"write-to-string", &YwriteYwrite_to_string},
  {"write-list", &YwriteYwrite_list},
  {"write", &YwriteYwrite},
  {"write-char-literal", &YwriteYwrite_char_literal},
  {"display", &YwriteYdisplay},
  {"write-map", &YwriteYwrite_map},
  {"*max-print-depth*", &YwriteYTmax_print_depthT},
  {"as-binding-name", &YwriteYas_binding_name},
  {"recurring-write-type", &YwriteYrecurring_write_type},
  {"write-number", &YwriteYwrite_number},
  {"do-display", &YwriteYdo_display},
  {"write-type", &YwriteYwrite_type},
  {"character-name", &YwriteYcharacter_name},
  {"write-fun-guts", &YwriteYwrite_fun_guts},
  {"write-params", &YwriteYwrite_params},
  {"write-boolean", &YwriteYwrite_boolean},
  {"*max-print-length*", &YwriteYTmax_print_lengthT},
  {"recurring-write", &YwriteYrecurring_write},
  {"write-string-literal", &YwriteYwrite_string_literal},
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"writeln", "writeln"},
  {"write-to-string", "write-to-string"},
  {"write", "write"},
  {"format", "format"},
  {"display", "display"},
  {"*max-print-depth*", "*max-print-depth*"},
  {"*max-print-length*", "*max-print-length*"},
  {"format-to-string", "format-to-string"},
  {"recurring-write", "recurring-write"},
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
