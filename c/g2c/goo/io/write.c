/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: write */

EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
EXT(Ytype_error,"boot","type-error");
EXT(YLoptsG,"boot","<opts>");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYTgensym_counterT,"runtime","*gensym-counter*");
EXT(YprotoScollectionsSassocYassocs_test,"proto/collections/assoc","assocs-test");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YprotoSmathYzeroQ,"proto/math","zero?");
EXT(YprotoScollectionsSstringYTprint_baseT,"proto/collections/string","*print-base*");
EXT(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
EXT(YDmin_int,"boot","$min-int");
EXT(YprotoSmathYE,"proto/math","=");
EXT(YprotoSmathYnulQ,"proto/math","nul?");
EXT(YprotoScollectionsSlistYLlistG,"proto/collections/list","<list>");
EXT(YmacrosYfin_stateQ,"macros","fin-state?");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YprotoSmathYuppercaseQ,"proto/math","uppercase?");
EXT(YruntimeYalways,"runtime","always");
EXT(YprotoScollectionsStableYtable_shrink_threshold,"proto/collections/table","table-shrink-threshold");
EXT(YprotoScollectionsSrangeYfrom,"proto/collections/range","from");
EXT(YprotoScollectionsScollectionYall2Q,"proto/collections/collection","all2?");
EXT(YruntimeYlocative_value_setter,"runtime","locative-value-setter");
EXT(YprotoScollectionsScollectionYnow_elt_setter,"proto/collections/collection","now-elt-setter");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YprotoSmathYto_str,"proto/math","to-str");
EXT(YprotoSmathYroundS,"proto/math","round/");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(Ytype_object,"boot","type-object");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYini_state,"macros","ini-state");
EXT(YLclassG,"boot","<class>");
EXT(YprotoScollectionsScollectionYlen,"proto/collections/collection","len");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YprotoSportsYLoutput_portG,"proto/ports","<output-port>");
EXT(YprotoScollectionsSrangeYfrom_to_by,"proto/collections/range","from-to-by");
EXT(YprotoSmathYA,"proto/math","+");
EXT(YruntimeYread,"runtime","read");
EXT(YruntimeYformat,"runtime","format");
EXT(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
EXT(YprotoScollectionsStableYLstr_tabG,"proto/collections/table","<str-tab>");
EXT(YprotoSmathYto_digit,"proto/math","to-digit");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(YLtypeG,"boot","<type>");
EXT(YprotoStypesYfalse_or,"proto/types","false-or");
EXT(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YprotoSmathYevenQ,"proto/math","even?");
EXT(YprotoSmathYLE,"proto/math","<=");
EXT(YprotoSmathYcontagious_type,"proto/math","contagious-type");
EXT(YprotoScollectionsStableYtable_growth_factor_setter,"proto/collections/table","table-growth-factor-setter");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YruntimeYlocative_value,"runtime","locative-value");
EXT(YprotoScollectionsScollectionYdel_keys,"proto/collections/collection","del-keys");
EXT(YruntimeYdescribe_handler,"runtime","describe-handler");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YprotoScollectionsSbufferYlen_setter,"proto/collections/buffer","len-setter");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YprotoSportsYLstring_portG,"proto/ports","<string-port>");
EXT(YLgenG,"boot","<gen>");
EXT(Yslot_init,"boot","slot-init");
EXT(YprotoSportsYchar_readyQ,"proto/ports","char-ready?");
EXT(YprotoScollectionsSlistYassqn,"proto/collections/list","assqn");
EXT(YruntimeYLrestartG,"runtime","<restart>");
EXT(YprotoScollectionsScollectionYinto,"proto/collections/collection","into");
EXT(YprotoSportsYLfile_output_portG,"proto/ports","<file-output-port>");
EXT(Yobject_slots,"boot","object-slots");
EXT(YprotoScollectionsStableYid_hash,"proto/collections/table","id-hash");
EXT(YLsymG,"boot","<sym>");
EXT(YprotoStypesYtL,"proto/types","t<");
EXT(YprotoScollectionsSassocYassocs_test_setter,"proto/collections/assoc","assocs-test-setter");
EXT(Yfind_setter,"boot","find-setter");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YprotoSmathYlogior,"proto/math","logior");
EXT(YprotoSmathYfabs,"proto/math","fabs");
EXT(YprotoSmathYLbotG,"proto/math","<bot>");
EXT(YprotoSmathYflo_bits,"proto/math","flo-bits");
EXT(YprotoSmathYround,"proto/math","round");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
EXT(YprotoSportsYpeek_char,"proto/ports","peek-char");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YLstrG,"boot","<str>");
EXT(YprotoSmathYtruncateS,"proto/math","truncate/");
EXT(YruntimeYsig,"runtime","sig");
DEF(YwriteYwrite_type,"write","write-type");
EXT(YprotoScollectionsStableYtable_protocol,"proto/collections/table","table-protocol");
EXT(YprotoSmathYas_log,"proto/math","as-log");
EXT(YprotoSportsYcall_with_output_file,"proto/ports","call-with-output-file");
EXT(YPvnul,"boot","%vnul");
EXT(YprotoScollectionsScollectionYdel_key,"proto/collections/collection","del-key");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YprotoStypesYtE,"proto/types","t=");
DEF(YwriteYwrite_map,"write","write-map");
EXT(YprotoScollectionsScollectionYdo,"proto/collections/collection","do");
EXT(YprotoSmathYG,"proto/math",">");
EXT(YprotoSmathYL,"proto/math","<");
EXT(Yerror,"boot","error");
EXT(YprotoSmathYmax,"proto/math","max");
EXT(YprotoSportsYcall_with_input_file,"proto/ports","call-with-input-file");
EXT(YLvecG,"boot","<vec>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(YruntimeYdefault_handler_description,"runtime","default-handler-description");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
EXT(Yhead_setter,"boot","head-setter");
EXT(YprotoScollectionsSsequenceYdo_key_vals,"proto/collections/sequence","do-key-vals");
EXT(YprotoScollectionsSbufferYlenSfill_setter,"proto/collections/buffer","len/fill-setter");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YprotoScollectionsSsequenceYrange_checkQ,"proto/collections/sequence","range-check?");
EXT(YprotoSportsYclose_output_port,"proto/ports","close-output-port");
EXT(YruntimeYchoose_handler,"runtime","choose-handler");
DEF(YwriteYcharacter_name,"write","character-name");
EXT(YprotoScollectionsSsequenceYcatX,"proto/collections/sequence","cat!");
EXT(YprotoSportsYport_index,"proto/ports","port-index");
EXT(Yfind_getter,"boot","find-getter");
EXT(YmacrosYpair,"macros","pair");
EXT(YLflatG,"boot","<flat>");
EXT(Yhead,"boot","head");
EXT(YprotoScollectionsSrangeYfrom_above,"proto/collections/range","from-above");
EXT(YprotoSportsYread_char,"proto/ports","read-char");
DEF(YwriteYwrite_string_literal,"write","write-string-literal");
EXT(YprotoSmathYnegQ,"proto/math","neg?");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YprotoSportsYclose_input_port,"proto/ports","close-input-port");
EXT(YprotoStypesYtA,"proto/types","t+");
EXT(YprotoScollectionsScollectionYfind_key,"proto/collections/collection","find-key");
EXT(Ynul,"boot","nul");
EXT(Yobject_class,"boot","object-class");
EXT(YprotoSmathYlogxor,"proto/math","logxor");
DEF(YwriteYquotationQ,"write","quotation?");
EXT(YprotoSmathYNEE,"proto/math","~==");
EXT(YprotoSportsYLstring_output_portG,"proto/ports","<string-output-port>");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YprotoScollectionsSbufferYpop_lastX,"proto/collections/buffer","pop-last!");
EXT(Ysym_name,"boot","sym-name");
EXT(YprotoSportsYopen_output_file,"proto/ports","open-output-file");
EXT(YprotoSmathYas_lowercase,"proto/math","as-lowercase");
EXT(YprotoSmathYS,"proto/math","/");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YprotoScollectionsStableYtable_shrink_threshold_setter,"proto/collections/table","table-shrink-threshold-setter");
EXT(YprotoSmathYeof_objectQ,"proto/math","eof-object?");
EXT(YprotoSportsYcall_with_string_output_port,"proto/ports","call-with-string-output-port");
EXT(YLfunG,"boot","<fun>");
EXT(YprotoSmathYmodulo,"proto/math","modulo");
EXT(YprotoSportsYLfile_input_portG,"proto/ports","<file-input-port>");
EXT(YprotoSportsYLstring_input_portG,"proto/ports","<string-input-port>");
EXT(YmacrosYnapply,"macros","napply");
EXT(YprotoScollectionsSsequenceYrange_check,"proto/collections/sequence","range-check");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YLlstG,"boot","<lst>");
EXT(YPsnul,"boot","%snul");
EXT(YprotoScollectionsSsequenceYaddX,"proto/collections/sequence","add!");
EXT(YDmax_int,"boot","$max-int");
EXT(YruntimeYmake_handler,"runtime","make-handler");
EXT(YprotoScollectionsSmapYfab_map,"proto/collections/map","fab-map");
EXT(YprotoSmathYT,"proto/math","*");
EXT(YprotoSmathYoddQ,"proto/math","odd?");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YprotoSportsYopen_input_file,"proto/ports","open-input-file");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YprotoScollectionsScollectionYreduceA,"proto/collections/collection","reduce+");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YLseqG,"boot","<seq>");
EXT(YmacrosYcat,"macros","cat");
EXT(YprotoSmathY_,"proto/math","-");
EXT(YprotoSportsYport_contents,"proto/ports","port-contents");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
EXT(YruntimeYinvoke_handler_interactively,"runtime","invoke-handler-interactively");
EXT(Ytail,"boot","tail");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YprotoScollectionsStableYLtabG,"proto/collections/table","<tab>");
EXT(YprotoScollectionsSstringYascii_limit,"proto/collections/string","ascii-limit");
EXT(YprotoStypesYas,"proto/types","as");
EXT(YprotoScollectionsSbufferYpush_lastX,"proto/collections/buffer","push-last!");
EXT(YprotoScollectionsSrangeYfrom_to,"proto/collections/range","from-to");
EXT(Ylst,"boot","lst");
EXT(Yclass_slots,"boot","class-slots");
EXT(YprotoScollectionsSsequenceYrange_error,"proto/collections/sequence","range-error");
EXT(YprotoSmathYalphabeticQ,"proto/math","alphabetic?");
EXT(YLcolG,"boot","<col>");
EXT(YprotoScollectionsSsequenceYvals_to_str,"proto/collections/sequence","vals-to-str");
DEF(YwriteYwrite_char_literal,"write","write-char-literal");
EXT(YprotoSmathYGE,"proto/math",">=");
EXT(YprotoScollectionsStableYtable_growth_threshold,"proto/collections/table","table-growth-threshold");
EXT(Yfab_class,"boot","fab-class");
EXT(YprotoSmathYlogand,"proto/math","logand");
EXT(YprotoSportsYLfile_portG,"proto/ports","<file-port>");
EXT(YLtupG,"boot","<tup>");
EXT(YprotoScollectionsScollectionYdefault,"proto/collections/collection","default");
EXT(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
EXT(YprotoSmathYtruncate,"proto/math","truncate");
EXT(YprotoSmathYeof_object,"proto/math","eof-object");
EXT(YLsigG,"boot","<sig>");
EXT(YprotoSportsYout,"proto/ports","out");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YruntimeYcompose,"runtime","compose");
DEF(YwriteYwrite_number,"write","write-number");
DEF(YwriteYas_binding_name,"write","as-binding-name");
EXT(YprotoScollectionsSlistYlist,"proto/collections/list","list");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YLlocG,"boot","<loc>");
EXT(YprotoSmathYaddress_of,"proto/math","address-of");
EXT(YprotoSportsYcall_with_string_input_port,"proto/ports","call-with-string-input-port");
EXT(YprotoScollectionsSbufferYbuf,"proto/collections/buffer","buf");
EXT(YprotoSmathYremainder,"proto/math","remainder");
EXT(YprotoScollectionsScollectionYreduce,"proto/collections/collection","reduce");
EXT(YprotoScollectionsScollectionYkeys,"proto/collections/collection","keys");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YprotoScollectionsSsequenceYdel_dups,"proto/collections/sequence","del-dups");
EXT(Ytype_elts,"boot","type-elts");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
DEF(YwriteYTmax_print_depthT,"write","*max-print-depth*");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
EXT(YprotoScollectionsSrangeYfrom_below_by,"proto/collections/range","from-below-by");
EXT(YPisa,"boot","%isa");
DEF(YwriteYwrite_to_string,"write","write-to-string");
EXT(YruntimeYbuild_condition_interactively,"runtime","build-condition-interactively");
EXT(YLfloG,"boot","<flo>");
EXT(YprotoScollectionsStableYcase_insensitive_string_equal,"proto/collections/table","case-insensitive-string-equal");
EXT(YprotoSmathYfloor,"proto/math","floor");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
EXT(YprotoSportsYwrite_string,"proto/ports","write-string");
EXT(YreadYDchar_long_names,"read","$char-long-names");
EXT(YprotoSportsYport_line,"proto/ports","port-line");
EXT(Ysig_value,"boot","sig-value");
EXT(YprotoSportsYin,"proto/ports","in");
EXT(Yclass_name,"boot","class-name");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
EXT(YprotoScollectionsSsequenceYdel,"proto/collections/sequence","del");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YprotoSportsYport_index_setter,"proto/ports","port-index-setter");
DEF(YwriteYrecurring_write,"write","recurring-write");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YprotoScollectionsSbufferYLbufG,"proto/collections/buffer","<buf>");
EXT(YprotoSmathYneg,"proto/math","neg");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YruntimeYlist_handlers,"runtime","list-handlers");
EXT(YLnumG,"boot","<num>");
EXT(YLintG,"boot","<int>");
EXT(Ynil,"boot","nil");
EXT(YprotoScollectionsSstringYstr_to_num,"proto/collections/string","str-to-num");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YmacrosYEE,"macros","==");
DEF(YwriteYwriteln,"write","writeln");
EXT(Yfun_value,"boot","fun-value");
EXT(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
EXT(YprotoScollectionsSstepYLstepG,"proto/collections/step","<step>");
EXT(YprotoSmathYlognot,"proto/math","lognot");
EXT(YprotoScollectionsSmapYLmapG,"proto/collections/map","<map>");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
DEF(YwriteYwrite_flat,"write","write-flat");
EXT(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YprotoSportsYLportG,"proto/ports","<port>");
EXT(YPslot,"boot","%slot");
EXT(YruntimeYbuild_condition_for_handler_interactively,"runtime","build-condition-for-handler-interactively");
EXT(YprotoScollectionsStableYcurrent_gc_state,"proto/collections/table","current-gc-state");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(Ysig_names,"boot","sig-names");
EXT(YprotoSmathYas_uppercase,"proto/math","as-uppercase");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YprotoSmathYash,"proto/math","ash");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YPsymbols,"boot","%symbols");
EXT(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
DEF(YwriteYwrite_fun_guts,"write","write-fun-guts");
EXT(YLlogG,"boot","<log>");
DEF(YwriteYwrite_params,"write","write-params");
EXT(YprotoScollectionsStableYcase_insensitive_string_hash,"proto/collections/table","case-insensitive-string-hash");
EXT(Yvec,"boot","vec");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YprotoSmathYposQ,"proto/math","pos?");
EXT(YLslotG,"boot","<slot>");
EXT(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YprotoSmathYlowercaseQ,"proto/math","lowercase?");
EXT(YPPmacro,"boot","%%macro");
EXT(YprotoSmathYchar_Gascii,"proto/math","char->ascii");
EXT(Ynot,"boot","not");
EXT(YprotoScollectionsScollectionYanyQ,"proto/collections/collection","any?");
EXT(YruntimeYformat_to_string,"runtime","format-to-string");
EXT(Yfun_name,"boot","fun-name");
EXT(YprotoScollectionsScollectionYdo3,"proto/collections/collection","do3");
EXT(Yclass_parents,"boot","class-parents");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YLanyG,"boot","<any>");
EXT(YprotoScollectionsSrangeYLrangeG,"proto/collections/range","<range>");
EXT(YprotoSportsYforce_output,"proto/ports","force-output");
EXT(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
DEF(YwriteYdo_display,"write","do-display");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YprotoScollectionsSstringYstr,"proto/collections/string","str");
EXT(YprotoSmathYnumericQ,"proto/math","numeric?");
EXT(YLunionG,"boot","<union>");
EXT(YprotoSmathYfloorS,"proto/math","floor/");
EXT(Yslot_value,"boot","slot-value");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YprotoScollectionsSsequenceY3rd,"proto/collections/sequence","3rd");
EXT(YprotoScollectionsSsequenceYfrom_below,"proto/collections/sequence","from-below");
EXT(YprotoScollectionsStableYtable_growth_threshold_setter,"proto/collections/table","table-growth-threshold-setter");
EXT(YprotoScollectionsStableYtable_growth_factor,"proto/collections/table","table-growth-factor");
EXT(YprotoSportsYLinput_portG,"proto/ports","<input-port>");
EXT(YmacrosYmap,"macros","map");
EXT(YprotoSmathYlsh,"proto/math","lsh");
EXT(YprotoSportsYnewline,"proto/ports","newline");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YprotoScollectionsSstringYascii_whitespaces,"proto/collections/string","ascii-whitespaces");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YprotoScollectionsSstepYfirst_then,"proto/collections/step","first-then");
EXT(YprotoScollectionsSlistYpush,"proto/collections/list","push");
EXT(YprotoScollectionsSlistYpop,"proto/collections/list","pop");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YmacrosYrevX,"macros","rev!");
EXT(YprotoScollectionsSrangeYfrom_above_by,"proto/collections/range","from-above-by");
EXT(YprotoSmathYmin,"proto/math","min");
EXT(YprotoScollectionsSrangeYfrom_by,"proto/collections/range","from-by");
EXT(YprotoSportsYport_line_setter,"proto/ports","port-line-setter");
EXT(YprotoScollectionsScollectionYas_copy,"proto/collections/collection","as-copy");
DEF(YwriteYwrite_boolean,"write","write-boolean");
EXT(YprotoScollectionsScollectionYalter,"proto/collections/collection","alter");
EXT(YprotoScollectionsSassocYLassocsG,"proto/collections/assoc","<assocs>");
EXT(YprotoScollectionsScollectionYcopy_state,"proto/collections/collection","copy-state");
EXT(YprotoScollectionsScollectionYelt_setter,"proto/collections/collection","elt-setter");
EXT(Yunexec,"boot","unexec");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YruntimeYhandler_function,"runtime","handler-function");
DEF(YwriteYwrite,"write","write");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YprotoScollectionsSsequenceY2nd,"proto/collections/sequence","2nd");
EXT(Ytup,"boot","tup");
EXT(YprotoSmathYceiling,"proto/math","ceiling");
DEF(YwriteYdisplay,"write","display");
EXT(YprotoScollectionsStableYDpermanent_hash_state,"proto/collections/table","$permanent-hash-state");
EXT(YmacrosYnxt_state,"macros","nxt-state");
EXT(YprotoSmathYabs,"proto/math","abs");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
DEF(YwriteYTmax_print_lengthT,"write","*max-print-length*");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(YprotoSportsYwrite_char,"proto/ports","write-char");
EXT(Yadd_slot,"boot","add-slot");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(YprotoSmathYnyi_error,"proto/math","nyi-error");
EXT(YisaQ,"boot","isa?");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YmacrosYnow_elt,"macros","now-elt");
EXT(YprotoSmathYNE,"proto/math","~=");
DEF(YwriteYwrite_list,"write","write-list");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YprotoSmathYlogbitQ,"proto/math","logbit?");
EXT(YprotoSmathYcontagious_call,"proto/math","contagious-call");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YmacrosYelt,"macros","elt");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
EXT(YprotoScollectionsSlistYassq,"proto/collections/list","assq");
DEF(YwriteYrecurring_write_type,"write","recurring-write-type");
EXT(YprotoSmathYpower_of_two_ceiling,"proto/math","power-of-two-ceiling");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_56);
DEFLIT(lit_58);
DEFLIT(lit_18);
DEFLIT(lit_72);
DEFLIT(lit_82);
DEFLIT(lit_55);
DEFLIT(lit_44);
DEFLIT(lit_59);
DEFLIT(lit_52);
DEFLIT(lit_80);
DEFLIT(lit_36);
DEFLIT(lit_25);
DEFLIT(lit_21);
DEFLIT(lit_19);
DEFLIT(lit_75);
DEFLIT(lit_34);
DEFLIT(lit_39);
DEFLIT(lit_24);
DEFLIT(lit_87);
DEFLIT(lit_62);
DEFLIT(lit_5);
DEFLIT(lit_81);
DEFLIT(lit_67);
DEFLIT(lit_13);
DEFLIT(lit_51);
DEFLIT(lit_37);
DEFLIT(lit_31);
DEFLIT(lit_88);
DEFLIT(lit_20);
DEFLIT(lit_11);
DEFLIT(lit_0);
DEFLIT(lit_76);
DEFLIT(lit_90);
DEFLIT(lit_91);
DEFLIT(lit_40);
DEFLIT(lit_53);
DEFLIT(lit_43);
DEFLIT(lit_49);
DEFLIT(lit_14);
DEFLIT(lit_10);
DEFLIT(lit_17);
DEFLIT(lit_73);
DEFLIT(lit_89);
DEFLIT(lit_9);
DEFLIT(lit_23);
DEFLIT(lit_6);
DEFLIT(lit_26);
DEFLIT(lit_66);
DEFLIT(lit_22);
DEFLIT(lit_65);
DEFLIT(lit_15);
DEFLIT(lit_86);
DEFLIT(lit_2);
DEFLIT(lit_54);
DEFLIT(lit_16);
DEFLIT(lit_85);
DEFLIT(lit_32);
DEFLIT(lit_79);
DEFLIT(lit_4);
DEFLIT(lit_47);
DEFLIT(lit_46);
DEFLIT(lit_29);
DEFLIT(lit_94);
DEFLIT(lit_41);
DEFLIT(lit_50);
DEFLIT(lit_63);
DEFLIT(lit_42);
DEFLIT(lit_77);
DEFLIT(lit_45);
DEFLIT(lit_7);
DEFLIT(lit_28);
DEFLIT(lit_57);
DEFLIT(lit_70);
DEFLIT(lit_30);
DEFLIT(lit_74);
DEFLIT(lit_95);
DEFLIT(lit_48);
DEFLIT(lit_8);
DEFLIT(lit_1);
DEFLIT(lit_33);
DEFLIT(lit_64);
DEFLIT(lit_69);
DEFLIT(lit_84);
DEFLIT(lit_68);
DEFLIT(lit_35);
DEFLIT(lit_12);
DEFLIT(lit_3);
DEFLIT(lit_71);
DEFLIT(lit_38);
DEFLIT(lit_78);
DEFLIT(lit_92);
DEFLIT(lit_60);
DEFLIT(lit_27);
DEFLIT(lit_83);
DEFLIT(lit_61);
DEFLIT(lit_93);

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
LOCFOR(fun_x_1272_30);
LOCFOR(fun_31);
LOCFOR(fun_write_map_32);
LOCFOR(fun_recurring_write_33);
LOCFOR(fun_recurring_write_34);
LOCFOR(fun_x_1279_35);
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
LOCFOR(fun_x_1284_50);
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
  T0 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLstrG),name_);
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
  T0 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,x_);
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
  T0 = CALL2(1,VARREF(YprotoSportsYwrite_char),port_,x_);
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
  T1 = CALL2(1,VARREF(YprotoSmathYGE),d_,VARREF(YwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YprotoSportsYwrite_string),FREEREF(0),LITREF(lit_8));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YprotoSmathYA),d_,YPint((P)1));
    T3 = CALLN(1,VARREF(YwriteYdo_display),4,FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_display_5) {
  P port_,x_;
  P recurF1153;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF1153 = T1;
  FUNINIT(recurF1153, 2,port_,recurF1153);
  T2 = CALL2(0,recurF1153,x_,YPint((P)-1));
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
  T0 = CALL1(1,VARREF(YprotoSportsYcall_with_string_output_port),T1);
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
  T1 = CALL2(1,VARREF(YprotoSmathYGE),d_,VARREF(YwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YprotoSportsYwrite_string),FREEREF(0),LITREF(lit_11));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YprotoSmathYA),d_,YPint((P)1));
    T3 = CALLN(1,VARREF(YwriteYrecurring_write),4,FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_8) {
  P port_,x_;
  P recurF1154;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_7,2);
  recurF1154 = T1;
  FUNINIT(recurF1154, 2,port_,recurF1154);
  T2 = CALL2(0,recurF1154,x_,YPint((P)-1));
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
  T0 = CALL1(1,VARREF(YprotoSportsYnewline),port_);
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
    T2 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_14));
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
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLstrG),x_);
  T0 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,T1);
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
  CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_17));
  T2 = (P)YPlu(x_);
  T1 = (P)YPib(T2);
  T0 = CALL2(1,VARREF(YprotoSmathYnum_to_str),T1,YPint((P)16));
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
    T2 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,T3);
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
  CALL2(1,VARREF(YprotoSportsYwrite_char),port_,YPchr((P)35));
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
  T1 = CALL2(1,VARREF(YprotoSmathYnum_to_str),x_,YPint((P)10));
  T0 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_char_literal_21) {
  P port_,x_;
  P probeF1155;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YwriteYcharacter_name),x_);
  probeF1155 = T1;
  CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_23));
  if (probeF1155 != YPfalse) {
    T3 = CALL2(1,VARREF(YwriteYwrite),port_,probeF1155);
    T2 = T3;
  } else {
    T4 = CALL2(1,VARREF(YprotoSportsYwrite_char),port_,x_);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_character_name_22) {
  P char_;
  P tmpF1157;
  P assocF1156;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T1 = CALL3(1,VARREF(YprotoScollectionsSlistYassqn),char_,VARREF(YreadYDchar_long_names),YPint((P)1));
  assocF1156 = T1;
  tmpF1157 = assocF1156;
  if (tmpF1157 != YPfalse) {
    T4 = CALL1(1,VARREF(YprotoScollectionsSsequenceY1st),assocF1156);
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
  P tmpF1159;
  P cF1158;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YprotoSportsYwrite_char),FREEREF(1),YPchr((P)34));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YmacrosYelt),FREEREF(2),i_);
    cF1158 = T4;
    T6 = CALL2(1,VARREF(YprotoSmathYE),cF1158,YPchr((P)92));
    tmpF1159 = T6;
    if (tmpF1159 != YPfalse) {
      T7 = tmpF1159;
    } else {
      T8 = CALL2(1,VARREF(YprotoSmathYE),cF1158,YPchr((P)34));
      T7 = T8;
    }
    T5 = T7;
    if (T5 != YPfalse) {
      T9 = CALL2(1,VARREF(YprotoSportsYwrite_char),FREEREF(1),YPchr((P)92));
    } else {
    }
    CALL2(1,VARREF(YprotoSportsYwrite_char),FREEREF(1),cF1158);
    T11 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
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
  P loopF1161;
  P lenF1160;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YprotoSportsYwrite_char),port_,YPchr((P)34));
  T1 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),x_);
  lenF1160 = T1;
  T3 = FUNSHELL(1,fun_loop_23,4);
  loopF1161 = T3;
  FUNINIT(loopF1161, 4,lenF1160,port_,x_,loopF1161);
  T4 = CALL1(0,loopF1161,YPint((P)0));
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
    T4 = CALL2(1,VARREF(YprotoSmathYGE),n_,VARREF(YwriteYTmax_print_lengthT));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YprotoSportsYwrite_string),FREEREF(0),LITREF(lit_32));
      T3 = T5;
    } else {
      CALL2(1,VARREF(YprotoSportsYwrite_char),FREEREF(0),YPchr((P)32));
      T6 = CALL1(1,VARREF(Yhead),l_);
      CALL2(1,FREEREF(1),T6,FREEREF(2));
      T8 = CALL1(1,VARREF(Ytail),l_);
      T9 = CALL2(1,VARREF(YprotoSmathYA),n_,YPint((P)1));
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
  P loopF1162;
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
    CALL2(1,VARREF(YprotoSportsYwrite_char),port_,YPchr((P)39));
    T4 = CALL1(1,VARREF(Ytail),x_);
    T3 = CALL1(1,VARREF(Yhead),T4);
    T2 = CALL2(1,recur_,T3,d_);
    T0 = T2;
  } else {
    CALL2(1,VARREF(YprotoSportsYwrite_char),port_,YPchr((P)40));
    T5 = CALL1(1,VARREF(Yhead),x_);
    CALL2(1,recur_,T5,d_);
    T6 = FUNSHELL(1,fun_loop_25,4);
    loopF1162 = T6;
    FUNINIT(loopF1162, 4,port_,recur_,d_,loopF1162);
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(0,loopF1162,T8,YPint((P)1));
    T9 = CALL2(1,VARREF(YprotoSportsYwrite_char),port_,YPchr((P)41));
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_quotationQ_27) {
  P x_;
  P tmpF1165;
  P tmpF1164;
  P tmpF1163;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF1163 = T1;
  if (tmpF1163 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL2(1,VARREF(YmacrosYEE),T5,LITREF(lit_34));
    tmpF1164 = T4;
    if (tmpF1164 != YPfalse) {
      T9 = CALL1(1,VARREF(Ytail),x_);
      T8 = CALL2(1,VARREF(YisaQ),T9,VARREF(YLlstG));
      tmpF1165 = T8;
      if (tmpF1165 != YPfalse) {
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
  T1 = CALL2(1,VARREF(YprotoSmathYGE),i_,VARREF(YwriteYTmax_print_lengthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YprotoSportsYwrite_string),FREEREF(0),LITREF(lit_39));
    T0 = T2;
  } else {
    T5 = CALL2(1,VARREF(YprotoSmathYGE),i_,FREEREF(1));
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      CALL2(1,VARREF(YprotoSportsYwrite_char),FREEREF(0),YPchr((P)32));
      T6 = CALL2(1,VARREF(YmacrosYelt),FREEREF(3),i_);
      CALL2(1,FREEREF(2),T6,FREEREF(4));
      T8 = CALL2(1,VARREF(YprotoSmathYA),i_,YPint((P)1));
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
  P loopF1167;
  P zF1166;
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
    T1 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_36));
  } else {
    CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_37));
    T3 = CALL1(1,VARREF(Yobject_class),x_);
    T2 = CALL1(1,VARREF(Yclass_name),T3);
    CALL2(1,VARREF(YwriteYdisplay),port_,T2);
    T4 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_38));
  }
  T5 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),x_);
  zF1166 = T5;
  T7 = CALL2(1,VARREF(YprotoSmathYG),zF1166,YPint((P)0));
  if (T7 != YPfalse) {
    T8 = CALL2(1,VARREF(YmacrosYelt),x_,YPint((P)0));
    CALL2(1,recur_,T8,d_);
    T10 = FUNSHELL(1,fun_loop_28,6);
    loopF1167 = T10;
    FUNINIT(loopF1167, 6,port_,zF1166,recur_,x_,d_,loopF1167);
    T11 = CALL1(0,loopF1167,YPint((P)1));
    T9 = T11;
    T6 = T9;
  } else {
    T6 = YPfalse;
  }
  T12 = CALL2(1,VARREF(YprotoSportsYwrite_char),port_,YPchr((P)41));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_x_1272_30) {
  P x_1270_,x_1268_;
  P valF1172;
  P keyF1171;
  P tup39F1170;
  P iF1169;
  P tmpF1168;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1270_, 0);
  ARG(x_1268_, 1);
loop:
  T3 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),x_1270_);
  tmpF1168 = T3;
  if (tmpF1168 != YPfalse) {
    T4 = tmpF1168;
  } else {
    T5 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(1),x_1268_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),x_1270_);
    iF1169 = T7;
    T10 = CALL2(1,VARREF(YprotoScollectionsScollectionYnow_key),FREEREF(1),x_1268_);
    T11 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(1),x_1268_);
    T9 = CALL2(1,VARREF(Ytup),T10,T11);
    tup39F1170 = T9;
    T13 = CALL2(1,VARREF(YmacrosYelt),tup39F1170,YPint((P)0));
    keyF1171 = T13;
    T15 = CALL2(1,VARREF(YmacrosYelt),tup39F1170,YPint((P)1));
    valF1172 = T15;
    T16 = CALL2(1,VARREF(YprotoSmathYGE),iF1169,VARREF(YwriteYTmax_print_lengthT));
    if (T16 != YPfalse) {
      CALL2(1,VARREF(YprotoSportsYwrite_string),FREEREF(2),LITREF(lit_46));
      T17 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    CALL2(1,VARREF(YprotoSportsYwrite_char),FREEREF(2),YPchr((P)32));
    CALL2(1,FREEREF(4),keyF1171,FREEREF(5));
    CALL2(1,VARREF(YprotoSportsYwrite_string),FREEREF(2),LITREF(lit_47));
    CALL2(1,FREEREF(4),valF1172,FREEREF(5));
    T19 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),x_1270_);
    T20 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(1),x_1268_);
    a1 = T19;
    a2 = T20;
    x_1270_ = a1;
    x_1268_ = a2;
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
  P x_1272F1175;
  P x_1269F1174;
  P x_1271F1173;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSrangeYfrom),YPint((P)0));
  x_1271F1173 = T1;
  x_1269F1174 = FREEREF(0);
  T4 = FUNSHELL(1,fun_x_1272_30,7);
  x_1272F1175 = T4;
  FUNINIT(x_1272F1175, 7,x_1271F1173,x_1269F1174,FREEREF(1),blow_,FREEREF(2),FREEREF(3),x_1272F1175);
  T6 = CALL1(1,VARREF(YmacrosYini_state),x_1271F1173);
  T7 = CALL1(1,VARREF(YmacrosYini_state),x_1269F1174);
  T5 = CALL2(0,x_1272F1175,T6,T7);
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
  CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_41));
  T1 = CALL1(1,VARREF(Yobject_class),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YwriteYdisplay),port_,T0);
  T2 = FUNFAB(fun_31,4,x_,port_,recur_,d_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YprotoSportsYwrite_char),port_,YPchr((P)93));
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
  T0 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_48));
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
  T0 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_49));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1279_35) {
  P x_1277_,x_1275_,x_1273_;
  P iF1180;
  P specF1179;
  P firstQF1178;
  P tmpF1177;
  P tmpF1176;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1277_, 0);
  ARG(x_1275_, 1);
  ARG(x_1273_, 2);
loop:
  T3 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),x_1277_);
  tmpF1176 = T3;
  if (tmpF1176 != YPfalse) {
    T4 = tmpF1176;
  } else {
    T6 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(1),x_1275_);
    tmpF1177 = T6;
    if (tmpF1177 != YPfalse) {
      T7 = tmpF1177;
    } else {
      T8 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(2),x_1273_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),x_1277_);
    firstQF1178 = T10;
    T12 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(1),x_1275_);
    specF1179 = T12;
    T14 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(2),x_1273_);
    iF1180 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF1178);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YprotoSportsYwrite_char),FREEREF(3),YPchr((P)32));
    } else {
    }
    T17 = CALL1(1,VARREF(YmacrosYemptyQ),FREEREF(4));
    if (T17 != YPfalse) {
      T18 = CALL2(1,VARREF(YwriteYwrite_type),FREEREF(3),specF1179);
    } else {
      T20 = CALL2(1,VARREF(YmacrosYelt),FREEREF(4),iF1180);
      T19 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLstrG),T20);
      CALL3(1,VARREF(YruntimeYformat),FREEREF(3),LITREF(lit_55),T19);
      CALL2(1,VARREF(YwriteYwrite_type),FREEREF(3),specF1179);
      T21 = CALL2(1,VARREF(YprotoSportsYwrite_char),FREEREF(3),YPchr((P)41));
    }
    T23 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),x_1277_);
    T24 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(1),x_1275_);
    T25 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(2),x_1273_);
    a1 = T23;
    a2 = T24;
    a3 = T25;
    x_1277_ = a1;
    x_1275_ = a2;
    x_1273_ = a3;
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
  P tmpF1188;
  P valueF1187;
  P x_1279F1186;
  P x_1274F1185;
  P x_1276F1184;
  P x_1278F1183;
  P namesF1182;
  P namesF1181;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
loop:
  T1 = CALL1(1,VARREF(Yfun_names),x_);
  namesF1181 = T1;
  CALL2(1,VARREF(YprotoSportsYwrite_char),port_,YPchr((P)40));
  T2 = CALL1(1,VARREF(Yfun_names),x_);
  namesF1182 = T2;
  T4 = CALL2(1,VARREF(YprotoScollectionsSstepYfirst_then),YPtrue,YPfalse);
  x_1278F1183 = T4;
  T6 = CALL1(1,VARREF(Yfun_specs),x_);
  x_1276F1184 = T6;
  T8 = CALL1(1,VARREF(YprotoScollectionsSrangeYfrom),YPint((P)0));
  x_1274F1185 = T8;
  T10 = FUNSHELL(1,fun_x_1279_35,6);
  x_1279F1186 = T10;
  FUNINIT(x_1279F1186, 6,x_1278F1183,x_1276F1184,x_1274F1185,port_,namesF1182,x_1279F1186);
  T12 = CALL1(1,VARREF(YmacrosYini_state),x_1278F1183);
  T13 = CALL1(1,VARREF(YmacrosYini_state),x_1276F1184);
  T14 = CALL1(1,VARREF(YmacrosYini_state),x_1274F1185);
  T11 = CALL3(0,x_1279F1186,T12,T13,T14);
  T9 = T11;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T15 = CALL1(1,VARREF(Yfun_value),x_);
  valueF1187 = T15;
  T19 = CALL1(1,VARREF(Ynot),valueF1187);
  tmpF1188 = T19;
  if (tmpF1188 != YPfalse) {
    T20 = tmpF1188;
  } else {
    T21 = CALL2(1,VARREF(YmacrosYEE),valueF1187,VARREF(YLanyG));
    T20 = T21;
  }
  T18 = T20;
  T17 = CALL1(1,VARREF(Ynot),T18);
  if (T17 != YPfalse) {
    CALL2(1,VARREF(YruntimeYformat),port_,LITREF(lit_56));
    T22 = CALL2(1,VARREF(YwriteYwrite_type),port_,valueF1187);
    T16 = T22;
  } else {
    T16 = YPfalse;
  }
  T23 = CALL2(1,VARREF(YprotoSportsYwrite_char),port_,YPchr((P)41));
  T0 = T23;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_fun_guts_37) {
  P port_,x_,name_,recur_;
  P tmpF1190;
  P nameF1189;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(name_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_58));
  CALL2(1,VARREF(YprotoSportsYwrite_string),port_,name_);
  T0 = CALL1(1,VARREF(Yfun_name),x_);
  nameF1189 = T0;
  tmpF1190 = nameF1189;
  if (tmpF1190 != YPfalse) {
    CALL2(1,VARREF(YprotoSportsYwrite_char),port_,YPchr((P)32));
    T4 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLstrG),nameF1189);
    T3 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  CALL2(1,VARREF(YprotoSportsYwrite_char),port_,YPchr((P)32));
  CALL3(1,VARREF(YwriteYwrite_params),port_,x_,recur_);
  T5 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_59));
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
  CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_62));
  T1 = CALL1(1,VARREF(Yclass_name),x_);
  T0 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLstrG),T1);
  CALL2(1,VARREF(YprotoSportsYwrite_string),port_,T0);
  CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_63));
  T3 = CALL1(1,VARREF(Yclass_direct_parents),x_);
  T2 = CALL2(1,VARREF(YmacrosYmap),VARREF(Yclass_name),T3);
  CALL2(1,recur_,T2,d_);
  T4 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_64));
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
  CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_65));
  T0 = CALL1(1,VARREF(Ytype_object),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_66));
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
  CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_67));
  T0 = CALL1(1,VARREF(Ytype_class),x_);
  CALL2(1,VARREF(YwriteYwrite_type),port_,T0);
  T1 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_68));
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
  CALL2(1,VARREF(YprotoSportsYwrite_char),FREEREF(0),YPchr((P)32));
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
  CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_69));
  T0 = FUNFAB(fun_43,1,port_);
  T1 = CALL1(1,VARREF(Ytype_elts),x_);
  CALL2(1,VARREF(YprotoScollectionsScollectionYdo),T0,T1);
  T2 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_70));
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
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLstrG),T2);
  T0 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,T1);
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
  P recurF1191;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_47,2);
  recurF1191 = T1;
  FUNINIT(recurF1191, 2,port_,recurF1191);
  T2 = CALL2(0,recurF1191,x_,YPint((P)0));
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
  CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_73));
  T0 = CALL1(1,VARREF(Yslot_getter),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_74));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_x_1284_50) {
  P x_1282_,x_1280_;
  P getterF1195;
  P slotF1194;
  P iF1193;
  P tmpF1192;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1282_, 0);
  ARG(x_1280_, 1);
loop:
  T3 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(0),x_1282_);
  tmpF1192 = T3;
  if (tmpF1192 != YPfalse) {
    T4 = tmpF1192;
  } else {
    T5 = CALL2(1,VARREF(YmacrosYfin_stateQ),FREEREF(1),x_1280_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(0),x_1282_);
    iF1193 = T7;
    T9 = CALL2(1,VARREF(YmacrosYnow_elt),FREEREF(1),x_1280_);
    slotF1194 = T9;
    T10 = CALL2(1,VARREF(YprotoSmathYGE),iF1193,VARREF(YwriteYTmax_print_lengthT));
    if (T10 != YPfalse) {
      CALL2(1,VARREF(YprotoSportsYwrite_string),FREEREF(2),LITREF(lit_79));
      T11 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T12 = CALL1(1,VARREF(Yslot_getter),slotF1194);
    getterF1195 = T12;
    CALL2(1,VARREF(YprotoSportsYwrite_char),FREEREF(2),YPchr((P)32));
    T13 = CALL1(1,VARREF(Yfun_name),getterF1195);
    CALL2(1,VARREF(YwriteYdisplay),FREEREF(2),T13);
    CALL2(1,VARREF(YprotoSportsYwrite_string),FREEREF(2),LITREF(lit_80));
    T15 = CALL1(1,getterF1195,FREEREF(5));
    T14 = CALL2(1,FREEREF(4),T15,FREEREF(6));
    T17 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(0),x_1282_);
    T18 = CALL2(1,VARREF(YmacrosYnxt_state),FREEREF(1),x_1280_);
    a1 = T17;
    a2 = T18;
    x_1282_ = a1;
    x_1280_ = a2;
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
  P x_1284F1198;
  P x_1281F1197;
  P x_1283F1196;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoScollectionsSrangeYfrom),YPint((P)0));
  x_1283F1196 = T1;
  T3 = CALL1(1,VARREF(Yobject_slots),FREEREF(0));
  x_1281F1197 = T3;
  T5 = FUNSHELL(1,fun_x_1284_50,8);
  x_1284F1198 = T5;
  FUNINIT(x_1284F1198, 8,x_1283F1196,x_1281F1197,FREEREF(1),blow_,FREEREF(2),FREEREF(0),FREEREF(3),x_1284F1198);
  T7 = CALL1(1,VARREF(YmacrosYini_state),x_1283F1196);
  T8 = CALL1(1,VARREF(YmacrosYini_state),x_1281F1197);
  T6 = CALL2(0,x_1284F1198,T7,T8);
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
  CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_75));
  T1 = CALL1(1,VARREF(Yobject_class),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YwriteYdisplay),port_,T0);
  T2 = FUNFAB(fun_51,4,x_,port_,recur_,d_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_81));
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
  T0 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_82));
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
  T0 = CALL2(1,VARREF(YprotoSportsYwrite_string),port_,LITREF(lit_83));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_55) {
  P char_,class_;
  P tmpF1201;
  P argumentF1200;
  P current_indexF1199;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
loop:
  T1 = BOXVAL(FREEREF(0));
  current_indexF1199 = T1;
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YprotoSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(0)) = T2;
  T5 = CALL2(1,VARREF(YprotoSmathYL),current_indexF1199,FREEREF(1));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_89),FREEREF(2),FREEREF(3));
  } else {
  }
  T8 = CALL2(1,VARREF(YmacrosYelt),FREEREF(3),current_indexF1199);
  argumentF1200 = T8;
  T11 = CALL2(1,VARREF(YmacrosYEE),class_,VARREF(YLanyG));
  tmpF1201 = T11;
  if (tmpF1201 != YPfalse) {
    T12 = tmpF1201;
  } else {
    T13 = CALL2(1,VARREF(YisaQ),argumentF1200,class_);
    T12 = T13;
  }
  T10 = T12;
  T9 = CALL1(1,VARREF(Ynot),T10);
  if (T9 != YPfalse) {
    T14 = CALLN(1,VARREF(Yerror),4,LITREF(lit_90),char_,class_,argumentF1200);
  } else {
  }
  T7 = argumentF1200;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P c_;
  P x_1292F1209;
  P x_1291F1208;
  P x_1290F1207;
  P x_1289F1206;
  P x_1288F1205;
  P x_1287F1204;
  P x_1286F1203;
  P x_1285F1202;
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
    T2 = CALL1(1,VARREF(YprotoSmathYas_uppercase),c_);
    x_1285F1202 = T2;
    T4 = CALL2(1,VARREF(YmacrosYEE),x_1285F1202,YPchr((P)68));
    if (T4 != YPfalse) {
      T7 = CALL2(1,FREEREF(2),c_,VARREF(YLnumG));
      T6 = CALL1(1,VARREF(YprotoSmathYnum_to_str),T7);
      T5 = CALL2(1,VARREF(YprotoSportsYwrite_string),FREEREF(1),T6);
      T3 = T5;
    } else {
      x_1286F1203 = x_1285F1202;
      T10 = CALL2(1,VARREF(YmacrosYEE),x_1286F1203,YPchr((P)66));
      if (T10 != YPfalse) {
        T13 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
        T12 = CALL2(1,VARREF(YprotoSmathYnum_to_str),T13,YPint((P)2));
        T11 = CALL2(1,VARREF(YprotoSportsYwrite_string),FREEREF(1),T12);
        T9 = T11;
      } else {
        x_1287F1204 = x_1286F1203;
        T16 = CALL2(1,VARREF(YmacrosYEE),x_1287F1204,YPchr((P)79));
        if (T16 != YPfalse) {
          T19 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
          T18 = CALL2(1,VARREF(YprotoSmathYnum_to_str),T19,YPint((P)8));
          T17 = CALL2(1,VARREF(YprotoSportsYwrite_string),FREEREF(1),T18);
          T15 = T17;
        } else {
          x_1288F1205 = x_1287F1204;
          T22 = CALL2(1,VARREF(YmacrosYEE),x_1288F1205,YPchr((P)88));
          if (T22 != YPfalse) {
            T25 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
            T24 = CALL2(1,VARREF(YprotoSmathYnum_to_str),T25,YPint((P)16));
            T23 = CALL2(1,VARREF(YprotoSportsYwrite_string),FREEREF(1),T24);
            T21 = T23;
          } else {
            x_1289F1206 = x_1288F1205;
            T28 = CALL2(1,VARREF(YmacrosYEE),x_1289F1206,YPchr((P)67));
            if (T28 != YPfalse) {
              T30 = CALL2(1,FREEREF(2),c_,VARREF(YLchrG));
              T29 = CALL2(1,VARREF(YprotoSportsYwrite_char),FREEREF(1),T30);
              T27 = T29;
            } else {
              x_1290F1207 = x_1289F1206;
              T33 = CALL2(1,VARREF(YmacrosYEE),x_1290F1207,YPchr((P)83));
              if (T33 != YPfalse) {
                T35 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                T34 = CALL2(1,VARREF(YwriteYdisplay),FREEREF(1),T35);
                T32 = T34;
              } else {
                x_1291F1208 = x_1290F1207;
                T38 = CALL2(1,VARREF(YmacrosYEE),x_1291F1208,YPchr((P)61));
                if (T38 != YPfalse) {
                  T40 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                  T39 = CALL2(1,VARREF(YwriteYwrite),FREEREF(1),T40);
                  T37 = T39;
                } else {
                  x_1292F1209 = x_1291F1208;
                  T43 = CALL2(1,VARREF(YmacrosYEE),x_1292F1209,YPchr((P)37));
                  if (T43 != YPfalse) {
                    T44 = CALL2(1,VARREF(YprotoSportsYwrite_char),FREEREF(1),YPchr((P)37));
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
      T50 = CALL2(1,VARREF(YprotoSportsYwrite_char),FREEREF(1),c_);
      T47 = T50;
    }
    T0 = T47;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_format_57) {
  P port_,message_,arguments_;
  P argF1213;
  P num_argumentsF1212;
  P argument_indexF1211;
  P found_percentQF1210;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
loop:
  found_percentQF1210 = YPfalse;
  found_percentQF1210 = BOXFAB(found_percentQF1210);
  check_type(YPint((P)0),VARREF(YLintG));
  argument_indexF1211 = YPint((P)0);
  argument_indexF1211 = BOXFAB(argument_indexF1211);
  T5 = CALL1(1,VARREF(YprotoScollectionsScollectionYlen),arguments_);
  num_argumentsF1212 = T5;
  T6 = FUNSHELL(1,fun_arg_55,4);
  argF1213 = T6;
  FUNINIT(argF1213, 4,argument_indexF1211,num_argumentsF1212,message_,arguments_);
  T8 = FUNFAB(fun_56,4,found_percentQF1210,port_,argF1213,message_);
  T7 = CALL2(1,VARREF(YprotoScollectionsScollectionYdo),T8,message_);
  T12 = BOXVAL(found_percentQF1210);
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
  T0 = CALL1(1,VARREF(YprotoSportsYport_contents),out_);
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
  T0 = CALL1(1,VARREF(YprotoSportsYcall_with_string_output_port),T1);
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
  T5 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T10 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T15 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T20 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YprotoSportsYLoutput_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
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
  T31 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YprotoSportsYLoutput_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
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
  T37 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YprotoSportsYLoutput_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
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
  T42 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T47 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLflatG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T52 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YprotoScollectionsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T57 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T62 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLsymG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T67 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLlocG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T72 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLnumG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T77 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T82 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T87 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_20)),YPPlist(2,VARREF(YprotoSportsYLoutput_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
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
  T92 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YprotoSportsYLoutput_portG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
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
  T97 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YprotoSportsYLoutput_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
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
  T107 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YprotoSportsYLoutput_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
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
  T113 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T124 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLflatG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  lit_43 = YPPsym((P)"x-1272");
  lit_44 = YPPsym((P)"x-1270");
  lit_45 = YPPsym((P)"x-1268");
  lit_46 = YPsb((P)" ...");
  lit_47 = YPsb((P)": ");
  T132 = YPsig(YPPlist(2,LITREF(lit_44),LITREF(lit_45)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1272_30 = YPmet(FUNCODEREF(fun_x_1272_30),LITREF(lit_43),T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YprotoScollectionsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T137 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YprotoSportsYLinput_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T142 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YprotoSportsYLoutput_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  lit_51 = YPPsym((P)"x-1279");
  lit_52 = YPPsym((P)"x-1277");
  lit_53 = YPPsym((P)"x-1275");
  lit_54 = YPPsym((P)"x-1273");
  lit_55 = YPsb((P)"(%s ");
  lit_56 = YPsb((P)" => ");
  T148 = YPsig(YPPlist(3,LITREF(lit_52),LITREF(lit_53),LITREF(lit_54)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1279_35 = YPmet(FUNCODEREF(fun_x_1279_35),LITREF(lit_51),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_4),LITREF(lit_6)),YPPlist(3,VARREF(YprotoSportsYLoutput_portG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
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
  T153 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_1),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLfunG),VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T158 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLgenG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T163 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLmetG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T168 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T173 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLsingletonG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T178 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLsubclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T183 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLunionG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T189 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T194 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T199 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YprotoSportsYLoutput_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
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
  T205 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLslotG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  lit_76 = YPPsym((P)"x-1284");
  lit_77 = YPPsym((P)"x-1282");
  lit_78 = YPPsym((P)"x-1280");
  lit_79 = YPsb((P)" ...");
  lit_80 = YPsb((P)": ");
  lit_81 = YPsb((P)"}");
  T212 = YPsig(YPPlist(2,LITREF(lit_77),LITREF(lit_78)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1284_50 = YPmet(FUNCODEREF(fun_x_1284_50),LITREF(lit_76),T212,ENVNUL,PNUL,YPfalse);
  T211 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T211,ENVNUL,PNUL,YPfalse);
  T210 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T219 = CALL0(1,VARREF(YprotoSmathYeof_object));
  T218 = CALL1(1,VARREF(YprotoStypesYtE),T219);
  T217 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),T218,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T225 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(Ynul));
  T224 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YprotoSportsYLoutput_portG),T225,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
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
  T230 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_85),LITREF(lit_86)),YPPlist(2,VARREF(YprotoSportsYLoutput_portG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
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
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoSmath;
extern MODULE_INFO module_info_protoSports;
extern MODULE_INFO module_info_protoScollections;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_read;
extern MODULE_INFO module_info_protoScollectionsSsequence;
extern MODULE_INFO module_info_protoScollectionsSassoc;
extern MODULE_INFO module_info_protoScollectionsSstring;
extern MODULE_INFO module_info_protoScollectionsScollection;
extern MODULE_INFO module_info_protoScollectionsSlist;
extern MODULE_INFO module_info_protoScollectionsStable;
extern MODULE_INFO module_info_protoScollectionsSrange;
extern MODULE_INFO module_info_protoScollectionsSbuffer;
extern MODULE_INFO module_info_protoScollectionsSmap;
extern MODULE_INFO module_info_protoScollectionsSstep;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_protoStypes},
  {&module_info_protoSmath},
  {&module_info_protoSports},
  {&module_info_protoScollections},
  {&module_info_runtime},
  {&module_info_read},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"last", &module_info_protoScollectionsSsequence, "last"},
  {"type-error", &module_info_boot, "type-error"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"identity", &module_info_runtime, "identity"},
  {"var-type", &module_info_macros, "var-type"},
  {"*gensym-counter*", &module_info_runtime, "*gensym-counter*"},
  {"assocs-test", &module_info_protoScollectionsSassoc, "assocs-test"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"zero?", &module_info_protoSmath, "zero?"},
  {"*print-base*", &module_info_protoScollectionsSstring, "*print-base*"},
  {"fill", &module_info_protoScollectionsScollection, "fill"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"=", &module_info_protoSmath, "="},
  {"nul?", &module_info_protoSmath, "nul?"},
  {"<list>", &module_info_protoScollectionsSlist, "<list>"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"dv", &module_info_boot, "dv"},
  {"%f=", &module_info_boot, "%f="},
  {"fin-state?", &module_info_macros, "fin-state?"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"uppercase?", &module_info_protoSmath, "uppercase?"},
  {"always", &module_info_runtime, "always"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%iu", &module_info_boot, "%iu"},
  {"table-shrink-threshold", &module_info_protoScollectionsStable, "table-shrink-threshold"},
  {"from", &module_info_protoScollectionsSrange, "from"},
  {"all2?", &module_info_protoScollectionsScollection, "all2?"},
  {"locative-value-setter", &module_info_runtime, "locative-value-setter"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"now-elt-setter", &module_info_protoScollectionsScollection, "now-elt-setter"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"use", &module_info_boot, "use"},
  {"%lu", &module_info_boot, "%lu"},
  {"to-str", &module_info_protoSmath, "to-str"},
  {"round/", &module_info_protoSmath, "round/"},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"type-object", &module_info_boot, "type-object"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"ini-state", &module_info_macros, "ini-state"},
  {"<class>", &module_info_boot, "<class>"},
  {"len", &module_info_protoScollectionsScollection, "len"},
  {"dp", &module_info_boot, "dp"},
  {"gensym", &module_info_macros, "gensym"},
  {"<output-port>", &module_info_protoSports, "<output-port>"},
  {"from-to-by", &module_info_protoScollectionsSrange, "from-to-by"},
  {"+", &module_info_protoSmath, "+"},
  {"read", &module_info_runtime, "read"},
  {"ddv", &module_info_macros, "ddv"},
  {"format", &module_info_runtime, "format"},
  {"%pair", &module_info_boot, "%pair"},
  {"and", &module_info_macros, "and"},
  {"%i-", &module_info_boot, "%i-"},
  {"sub", &module_info_protoScollectionsSsequence, "sub"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"<str-tab>", &module_info_protoScollectionsStable, "<str-tab>"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"to-digit", &module_info_protoSmath, "to-digit"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"<type>", &module_info_boot, "<type>"},
  {"false-or", &module_info_protoStypes, "false-or"},
  {"add", &module_info_protoScollectionsScollection, "add"},
  {"even?", &module_info_protoSmath, "even?"},
  {"<=", &module_info_protoSmath, "<="},
  {"contagious-type", &module_info_protoSmath, "contagious-type"},
  {"table-growth-factor-setter", &module_info_protoScollectionsStable, "table-growth-factor-setter"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"locative-value", &module_info_runtime, "locative-value"},
  {"del-keys", &module_info_protoScollectionsScollection, "del-keys"},
  {"describe-handler", &module_info_runtime, "describe-handler"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"len-setter", &module_info_protoScollectionsSbuffer, "len-setter"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<string-port>", &module_info_protoSports, "<string-port>"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"char-ready?", &module_info_protoSports, "char-ready?"},
  {"assqn", &module_info_protoScollectionsSlist, "assqn"},
  {"<restart>", &module_info_runtime, "<restart>"},
  {"rep", &module_info_boot, "rep"},
  {"into", &module_info_protoScollectionsScollection, "into"},
  {"<file-output-port>", &module_info_protoSports, "<file-output-port>"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"id-hash", &module_info_protoScollectionsStable, "id-hash"},
  {"%c<", &module_info_boot, "%c<"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"t<", &module_info_protoStypes, "t<"},
  {"assocs-test-setter", &module_info_protoScollectionsSassoc, "assocs-test-setter"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"inc", &module_info_macros, "inc"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%c=", &module_info_boot, "%c="},
  {"logior", &module_info_protoSmath, "logior"},
  {"fabs", &module_info_protoSmath, "fabs"},
  {"<bot>", &module_info_protoSmath, "<bot>"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"flo-bits", &module_info_protoSmath, "flo-bits"},
  {"round", &module_info_protoSmath, "round"},
  {"lab", &module_info_boot, "lab"},
  {"exported", &module_info_macros, "exported"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"cat2", &module_info_protoScollectionsSsequence, "cat2"},
  {"peek-char", &module_info_protoSports, "peek-char"},
  {"curry", &module_info_runtime, "curry"},
  {"<str>", &module_info_boot, "<str>"},
  {"truncate/", &module_info_protoSmath, "truncate/"},
  {"dss", &module_info_boot, "dss"},
  {"sig", &module_info_runtime, "sig"},
  {"isa", &module_info_boot, "isa"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"export", &module_info_boot, "export"},
  {"table-protocol", &module_info_protoScollectionsStable, "table-protocol"},
  {"%iv", &module_info_boot, "%iv"},
  {"as-log", &module_info_protoSmath, "as-log"},
  {"call-with-output-file", &module_info_protoSports, "call-with-output-file"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"del-key", &module_info_protoScollectionsScollection, "del-key"},
  {"@==", &module_info_boot, "@=="},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"pos", &module_info_protoScollectionsSsequence, "pos"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"t=", &module_info_protoStypes, "t="},
  {"do", &module_info_protoScollectionsScollection, "do"},
  {">", &module_info_protoSmath, ">"},
  {"<", &module_info_protoSmath, "<"},
  {"error", &module_info_boot, "error"},
  {"max", &module_info_protoSmath, "max"},
  {"call-with-input-file", &module_info_protoSports, "call-with-input-file"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"default-handler-description", &module_info_runtime, "default-handler-description"},
  {"%slen", &module_info_boot, "%slen"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"<met>", &module_info_boot, "<met>"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"do-key-vals", &module_info_protoScollectionsSsequence, "do-key-vals"},
  {"len/fill-setter", &module_info_protoScollectionsSbuffer, "len/fill-setter"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"range-check?", &module_info_protoScollectionsSsequence, "range-check?"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"close-output-port", &module_info_protoSports, "close-output-port"},
  {"choose-handler", &module_info_runtime, "choose-handler"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"cat!", &module_info_protoScollectionsSsequence, "cat!"},
  {"port-index", &module_info_protoSports, "port-index"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"quote", &module_info_boot, "quote"},
  {"pair", &module_info_macros, "pair"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"head", &module_info_boot, "head"},
  {"from-above", &module_info_protoScollectionsSrange, "from-above"},
  {"read-char", &module_info_protoSports, "read-char"},
  {"neg?", &module_info_protoSmath, "neg?"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"close-input-port", &module_info_protoSports, "close-input-port"},
  {"when", &module_info_macros, "when"},
  {"t+", &module_info_protoStypes, "t+"},
  {"find-key", &module_info_protoScollectionsScollection, "find-key"},
  {"nul", &module_info_boot, "nul"},
  {"apply", &module_info_macros, "apply"},
  {"object-class", &module_info_boot, "object-class"},
  {"logxor", &module_info_protoSmath, "logxor"},
  {"~==", &module_info_protoSmath, "~=="},
  {"%i<", &module_info_boot, "%i<"},
  {"%sb", &module_info_boot, "%sb"},
  {"%str", &module_info_boot, "%str"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"<string-output-port>", &module_info_protoSports, "<string-output-port>"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"pop-last!", &module_info_protoScollectionsSbuffer, "pop-last!"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"set", &module_info_boot, "set"},
  {"open-output-file", &module_info_protoSports, "open-output-file"},
  {"as-lowercase", &module_info_protoSmath, "as-lowercase"},
  {"%i&", &module_info_boot, "%i&"},
  {"/", &module_info_protoSmath, "/"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"table-shrink-threshold-setter", &module_info_protoScollectionsStable, "table-shrink-threshold-setter"},
  {"eof-object?", &module_info_protoSmath, "eof-object?"},
  {"%raw", &module_info_boot, "%raw"},
  {"call-with-string-output-port", &module_info_protoSports, "call-with-string-output-port"},
  {"case", &module_info_macros, "case"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"modulo", &module_info_protoSmath, "modulo"},
  {"swapf", &module_info_macros, "swapf"},
  {"opf", &module_info_macros, "opf"},
  {"%untag", &module_info_boot, "%untag"},
  {"ct", &module_info_boot, "ct"},
  {"<file-input-port>", &module_info_protoSports, "<file-input-port>"},
  {"<string-input-port>", &module_info_protoSports, "<string-input-port>"},
  {"napply", &module_info_macros, "napply"},
  {"range-check", &module_info_protoScollectionsSsequence, "range-check"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%fb", &module_info_boot, "%fb"},
  {"mem?", &module_info_protoScollectionsScollection, "mem?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%snul", &module_info_boot, "%snul"},
  {"add!", &module_info_protoScollectionsSsequence, "add!"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"make-handler", &module_info_runtime, "make-handler"},
  {"%cb", &module_info_boot, "%cb"},
  {"fab-map", &module_info_protoScollectionsSmap, "fab-map"},
  {"%i+", &module_info_boot, "%i+"},
  {"collect", &module_info_macros, "collect"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"*", &module_info_protoSmath, "*"},
  {"dc", &module_info_boot, "dc"},
  {"odd?", &module_info_protoSmath, "odd?"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"open-input-file", &module_info_protoSports, "open-input-file"},
  {"use/export", &module_info_boot, "use/export"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"reduce+", &module_info_protoScollectionsScollection, "reduce+"},
  {"fin", &module_info_boot, "fin"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"if", &module_info_boot, "if"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"cat", &module_info_macros, "cat"},
  {"%i!", &module_info_boot, "%i!"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"-", &module_info_protoSmath, "-"},
  {"port-contents", &module_info_protoSports, "port-contents"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%f*", &module_info_boot, "%f*"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"all?", &module_info_protoScollectionsScollection, "all?"},
  {"invoke-handler-interactively", &module_info_runtime, "invoke-handler-interactively"},
  {"tail", &module_info_boot, "tail"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"<tab>", &module_info_protoScollectionsStable, "<tab>"},
  {"ascii-limit", &module_info_protoScollectionsSstring, "ascii-limit"},
  {"as", &module_info_protoStypes, "as"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"push-last!", &module_info_protoScollectionsSbuffer, "push-last!"},
  {"from-to", &module_info_protoScollectionsSrange, "from-to"},
  {"%f+", &module_info_boot, "%f+"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"lst", &module_info_boot, "lst"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"range-error", &module_info_protoScollectionsSsequence, "range-error"},
  {"alphabetic?", &module_info_protoSmath, "alphabetic?"},
  {"%vec", &module_info_boot, "%vec"},
  {"<col>", &module_info_boot, "<col>"},
  {"vals-to-str", &module_info_protoScollectionsSsequence, "vals-to-str"},
  {">=", &module_info_protoSmath, ">="},
  {"table-growth-threshold", &module_info_protoScollectionsStable, "table-growth-threshold"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"logand", &module_info_protoSmath, "logand"},
  {"<file-port>", &module_info_protoSports, "<file-port>"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"default", &module_info_protoScollectionsScollection, "default"},
  {"map-keyed", &module_info_protoScollectionsScollection, "map-keyed"},
  {"truncate", &module_info_protoSmath, "truncate"},
  {"dg", &module_info_boot, "dg"},
  {"eof-object", &module_info_protoSmath, "eof-object"},
  {"for", &module_info_macros, "for"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"out", &module_info_protoSports, "out"},
  {"<error>", &module_info_runtime, "<error>"},
  {"compose", &module_info_runtime, "compose"},
  {"try", &module_info_boot, "try"},
  {"list", &module_info_protoScollectionsSlist, "list"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"address-of", &module_info_protoSmath, "address-of"},
  {"call-with-string-input-port", &module_info_protoSports, "call-with-string-input-port"},
  {"dec", &module_info_macros, "dec"},
  {"buf", &module_info_protoScollectionsSbuffer, "buf"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"let", &module_info_boot, "let"},
  {"remainder", &module_info_protoSmath, "remainder"},
  {"reduce", &module_info_protoScollectionsScollection, "reduce"},
  {"keys", &module_info_protoScollectionsScollection, "keys"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"del-dups", &module_info_protoScollectionsSsequence, "del-dups"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"num-to-str", &module_info_protoSmath, "num-to-str"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"ds", &module_info_boot, "ds"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"rev", &module_info_protoScollectionsSsequence, "rev"},
  {"from-below-by", &module_info_protoScollectionsSrange, "from-below-by"},
  {"%i=", &module_info_boot, "%i="},
  {"dlet", &module_info_macros, "dlet"},
  {"%isa", &module_info_boot, "%isa"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"%i?", &module_info_boot, "%i?"},
  {"build-condition-interactively", &module_info_runtime, "build-condition-interactively"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"@+", &module_info_boot, "@+"},
  {"case-insensitive-string-equal", &module_info_protoScollectionsStable, "case-insensitive-string-equal"},
  {"floor", &module_info_protoSmath, "floor"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%fu", &module_info_boot, "%fu"},
  {"next-method", &module_info_macros, "next-method"},
  {"do-keyed", &module_info_protoScollectionsScollection, "do-keyed"},
  {"df", &module_info_boot, "df"},
  {"write-string", &module_info_protoSports, "write-string"},
  {"$char-long-names", &module_info_read, "$char-long-names"},
  {"port-line", &module_info_protoSports, "port-line"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"in", &module_info_protoSports, "in"},
  {"class-name", &module_info_boot, "class-name"},
  {"empty", &module_info_protoScollectionsScollection, "empty"},
  {"%bb", &module_info_boot, "%bb"},
  {"del", &module_info_protoScollectionsSsequence, "del"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"port-index-setter", &module_info_protoSports, "port-index-setter"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"<buf>", &module_info_protoScollectionsSbuffer, "<buf>"},
  {"neg", &module_info_protoSmath, "neg"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"list-handlers", &module_info_runtime, "list-handlers"},
  {"<num>", &module_info_boot, "<num>"},
  {"<int>", &module_info_boot, "<int>"},
  {"nil", &module_info_boot, "nil"},
  {"str-to-num", &module_info_protoScollectionsSstring, "str-to-num"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%i^", &module_info_boot, "%i^"},
  {"==", &module_info_macros, "=="},
  {"fun-value", &module_info_boot, "fun-value"},
  {"any2?", &module_info_protoScollectionsScollection, "any2?"},
  {"<step>", &module_info_protoScollectionsSstep, "<step>"},
  {"%f/", &module_info_boot, "%f/"},
  {"lognot", &module_info_protoSmath, "lognot"},
  {"<map>", &module_info_protoScollectionsSmap, "<map>"},
  {"%su", &module_info_boot, "%su"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"%cu", &module_info_boot, "%cu"},
  {"low-elt-setter", &module_info_protoScollectionsScollection, "low-elt-setter"},
  {"empty?", &module_info_macros, "empty?"},
  {"<port>", &module_info_protoSports, "<port>"},
  {"%slot", &module_info_boot, "%slot"},
  {"build-condition-for-handler-interactively", &module_info_runtime, "build-condition-for-handler-interactively"},
  {"current-gc-state", &module_info_protoScollectionsStable, "current-gc-state"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"as-uppercase", &module_info_protoSmath, "as-uppercase"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"ash", &module_info_protoSmath, "ash"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"bound?", &module_info_boot, "bound?"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"map2", &module_info_protoScollectionsScollection, "map2"},
  {"<log>", &module_info_boot, "<log>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"case-insensitive-string-hash", &module_info_protoScollectionsStable, "case-insensitive-string-hash"},
  {"vec", &module_info_boot, "vec"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"pos?", &module_info_protoSmath, "pos?"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"pick", &module_info_protoScollectionsSsequence, "pick"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"lowercase?", &module_info_protoSmath, "lowercase?"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"char->ascii", &module_info_protoSmath, "char->ascii"},
  {"not", &module_info_boot, "not"},
  {"any?", &module_info_protoScollectionsScollection, "any?"},
  {"%selt", &module_info_boot, "%selt"},
  {"@<", &module_info_boot, "@<"},
  {"format-to-string", &module_info_runtime, "format-to-string"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"do3", &module_info_protoScollectionsScollection, "do3"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<any>", &module_info_boot, "<any>"},
  {"<range>", &module_info_protoScollectionsSrange, "<range>"},
  {"dm", &module_info_boot, "dm"},
  {"force-output", &module_info_protoSports, "force-output"},
  {"low-elt", &module_info_protoScollectionsScollection, "low-elt"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"type-class", &module_info_boot, "type-class"},
  {"%im", &module_info_boot, "%im"},
  {"str", &module_info_protoScollectionsSstring, "str"},
  {"%it/", &module_info_boot, "%it/"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"numeric?", &module_info_protoSmath, "numeric?"},
  {"<union>", &module_info_boot, "<union>"},
  {"floor/", &module_info_protoSmath, "floor/"},
  {"select", &module_info_macros, "select"},
  {"seq", &module_info_boot, "seq"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"mif", &module_info_boot, "mif"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"3rd", &module_info_protoScollectionsSsequence, "3rd"},
  {"from-below", &module_info_protoScollectionsSsequence, "from-below"},
  {"table-growth-threshold-setter", &module_info_protoScollectionsStable, "table-growth-threshold-setter"},
  {"table-growth-factor", &module_info_protoScollectionsStable, "table-growth-factor"},
  {"<input-port>", &module_info_protoSports, "<input-port>"},
  {"map", &module_info_macros, "map"},
  {"fun", &module_info_boot, "fun"},
  {"%i*", &module_info_boot, "%i*"},
  {"lsh", &module_info_protoSmath, "lsh"},
  {"newline", &module_info_protoSports, "newline"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"%f<", &module_info_boot, "%f<"},
  {"collected", &module_info_macros, "collected"},
  {"ascii-whitespaces", &module_info_protoScollectionsSstring, "ascii-whitespaces"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"first-then", &module_info_protoScollectionsSstep, "first-then"},
  {"push", &module_info_protoScollectionsSlist, "push"},
  {"pop", &module_info_protoScollectionsSlist, "pop"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"rev!", &module_info_macros, "rev!"},
  {"or", &module_info_macros, "or"},
  {"unless", &module_info_macros, "unless"},
  {"from-above-by", &module_info_protoScollectionsSrange, "from-above-by"},
  {"min", &module_info_protoSmath, "min"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"from-by", &module_info_protoScollectionsSrange, "from-by"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"port-line-setter", &module_info_protoSports, "port-line-setter"},
  {"as-copy", &module_info_protoScollectionsScollection, "as-copy"},
  {"alter", &module_info_protoScollectionsScollection, "alter"},
  {"<assocs>", &module_info_protoScollectionsSassoc, "<assocs>"},
  {"copy-state", &module_info_protoScollectionsScollection, "copy-state"},
  {"elt-setter", &module_info_protoScollectionsScollection, "elt-setter"},
  {"unexec", &module_info_boot, "unexec"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"%ib", &module_info_boot, "%ib"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"@olen", &module_info_boot, "@olen"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"2nd", &module_info_protoScollectionsSsequence, "2nd"},
  {"pushf", &module_info_macros, "pushf"},
  {"tup", &module_info_boot, "tup"},
  {"ceiling", &module_info_protoSmath, "ceiling"},
  {"$permanent-hash-state", &module_info_protoScollectionsStable, "$permanent-hash-state"},
  {"nxt-state", &module_info_macros, "nxt-state"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"collecting", &module_info_macros, "collecting"},
  {"abs", &module_info_protoSmath, "abs"},
  {"ceiling/", &module_info_protoSmath, "ceiling/"},
  {"loc", &module_info_boot, "loc"},
  {"%lb", &module_info_boot, "%lb"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"app-args", &module_info_runtime, "app-args"},
  {"%f-", &module_info_boot, "%f-"},
  {"%velt", &module_info_boot, "%velt"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"now-key", &module_info_protoScollectionsScollection, "now-key"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"sub-setter", &module_info_protoScollectionsSsequence, "sub-setter"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"popf", &module_info_macros, "popf"},
  {"write-char", &module_info_protoSports, "write-char"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"nyi-error", &module_info_protoSmath, "nyi-error"},
  {"isa?", &module_info_boot, "isa?"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"now-elt", &module_info_macros, "now-elt"},
  {"~=", &module_info_protoSmath, "~="},
  {"do2", &module_info_protoScollectionsScollection, "do2"},
  {"1st", &module_info_protoScollectionsSsequence, "1st"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"logbit?", &module_info_protoSmath, "logbit?"},
  {"contagious-call", &module_info_protoSmath, "contagious-call"},
  {"assert", &module_info_macros, "assert"},
  {"var-name", &module_info_macros, "var-name"},
  {"elt", &module_info_macros, "elt"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"assq", &module_info_protoScollectionsSlist, "assq"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {"power-of-two-ceiling", &module_info_protoSmath, "power-of-two-ceiling"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"write-type", &YwriteYwrite_type},
  {"write-map", &YwriteYwrite_map},
  {"character-name", &YwriteYcharacter_name},
  {"write-string-literal", &YwriteYwrite_string_literal},
  {"quotation?", &YwriteYquotationQ},
  {"---main-0---", NULL},
  {"write-char-literal", &YwriteYwrite_char_literal},
  {"write-number", &YwriteYwrite_number},
  {"as-binding-name", &YwriteYas_binding_name},
  {"*max-print-depth*", &YwriteYTmax_print_depthT},
  {"write-to-string", &YwriteYwrite_to_string},
  {"recurring-write", &YwriteYrecurring_write},
  {"writeln", &YwriteYwriteln},
  {"write-flat", &YwriteYwrite_flat},
  {"write-fun-guts", &YwriteYwrite_fun_guts},
  {"write-params", &YwriteYwrite_params},
  {"do-display", &YwriteYdo_display},
  {"write-boolean", &YwriteYwrite_boolean},
  {"write", &YwriteYwrite},
  {"display", &YwriteYdisplay},
  {"*max-print-length*", &YwriteYTmax_print_lengthT},
  {"write-list", &YwriteYwrite_list},
  {"recurring-write-type", &YwriteYrecurring_write_type},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"format", "format"},
  {"*max-print-length*", "*max-print-length*"},
  {"*max-print-depth*", "*max-print-depth*"},
  {"write-to-string", "write-to-string"},
  {"recurring-write", "recurring-write"},
  {"writeln", "writeln"},
  {"format-to-string", "format-to-string"},
  {"write", "write"},
  {"display", "display"},
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
extern void load_module_protoStypes (void);
extern void load_module_protoSmath (void);
extern void load_module_protoSports (void);
extern void load_module_protoScollections (void);
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
  load_module_protoStypes();
  load_module_protoSmath();
  load_module_protoSports();
  load_module_protoScollections();
  load_module_runtime();
  load_module_read();

  (P)YwriteY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
