/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/io/write */

EXT(YgooSmathYabs,"goo/math","abs");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YPprop,"runtime/boot","%prop");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScollectionsSlistYassq,"goo/collections/list","assq");
EXT(YPisa,"runtime/boot","%isa");
EXT(YruntimeSruntimeYloc_val_setter,"runtime/runtime","loc-val-setter");
EXT(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YruntimeSruntimeYcurry,"runtime/runtime","curry");
EXT(YgooScollectionsSsequenceYinsX,"goo/collections/sequence","ins!");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
DEF(YgooSioSwriteYrecurring_write_type,"goo/io/write","recurring-write-type");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YruntimeSruntimeYbuild_condition_for_handler_interactively,"runtime/runtime","build-condition-for-handler-interactively");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YruntimeSruntimeYbuild_condition_interactively,"runtime/runtime","build-condition-interactively");
EXT(YruntimeSruntimeYloc_val,"runtime/runtime","loc-val");
EXT(YruntimeSruntimeYdefault_handler,"runtime/runtime","default-handler");
EXT(YgooScollectionsStableYid_hash,"goo/collections/table","id-hash");
EXT(Yhead,"runtime/boot","head");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(YgooSioSwriteYwrite_boolean,"goo/io/write","write-boolean");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YgooScollectionsSzipYLzipG,"goo/collections/zip","<zip>");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooScollectionsSstringYascii_limit,"goo/collections/string","ascii-limit");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YLmetG,"runtime/boot","<met>");
DEF(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
DEF(YgooSioSwriteYwrite_fun_guts,"goo/io/write","write-fun-guts");
DEF(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(YgooScollectionsSassocYLassocsG,"goo/collections/assoc","<assocs>");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
DEF(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(YruntimeSruntimeYdescribe_condition,"runtime/runtime","describe-condition");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooScollectionsStableYtab_hash,"goo/collections/table","tab-hash");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YruntimeSruntimeYdefault_handler_description,"runtime/runtime","default-handler-description");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YruntimeSruntimeYlist_handlers,"runtime/runtime","list-handlers");
EXT(YruntimeSruntimeYidentity,"runtime/runtime","identity");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YruntimeSruntimeYapp_args,"runtime/runtime","app-args");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYT,"goo/math","*");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Ynot,"runtime/boot","not");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(YruntimeSruntimeYchoose_handler,"runtime/runtime","choose-handler");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScollectionsScycleYcycle,"goo/collections/cycle","cycle");
EXT(YruntimeSruntimeYspread,"runtime/runtime","spread");
EXT(YruntimeSruntimeYhandler_matchesQ,"runtime/runtime","handler-matches?");
EXT(YruntimeSruntimeYrcurry,"runtime/runtime","rcurry");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YruntimeSruntimeYsig,"runtime/runtime","sig");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YgooScollectionsScycleYLcycleG,"goo/collections/cycle","<cycle>");
EXT(YgooScollectionsSlistYassqn,"goo/collections/list","assqn");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ylst,"runtime/boot","lst");
EXT(YruntimeSruntimeYDdefault_handler_info,"runtime/runtime","$default-handler-info");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(YruntimeSruntimeYcondition_arguments,"runtime/runtime","condition-arguments");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(YOlst,"runtime/boot","@lst");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScollectionsStableYtab_test,"goo/collections/table","tab-test");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YruntimeSruntimeYformat_to_string,"runtime/runtime","format-to-string");
EXT(YruntimeSruntimeYfab_handler,"runtime/runtime","fab-handler");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(Yerror,"runtime/boot","error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooScollectionsSsequenceYins,"goo/collections/sequence","ins");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YruntimeSruntimeYread,"runtime/runtime","read");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YgooScollectionsSsequenceYdo_key_vals,"goo/collections/sequence","do-key-vals");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YruntimeSruntimeYLhandler_infoG,"runtime/runtime","<handler-info>");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScollectionsStableYcase_insensitive_string_equal,"goo/collections/table","case-insensitive-string-equal");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YruntimeSruntimeYTgensym_counterT,"runtime/runtime","*gensym-counter*");
DEF(YgooSioSwriteYwrite_number,"goo/io/write","write-number");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(YgooScollectionsStableYDpermanent_hash_state,"goo/collections/table","$permanent-hash-state");
EXT(YgooScollectionsSrangeYrange_by,"goo/collections/range","range-by");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(Ynil,"runtime/boot","nil");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YgooSioSwriteYdo_display,"goo/io/write","do-display");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YruntimeSruntimeYhandler_function,"runtime/runtime","handler-function");
EXT(YgooScollectionsSstringYstr_to_num,"goo/collections/string","str-to-num");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
DEF(YgooSioSwriteYwrite_params,"goo/io/write","write-params");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yprop_value,"runtime/boot","prop-value");
DEF(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YgooScollectionsSsequenceYvals_to_str,"goo/collections/sequence","vals-to-str");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooScollectionsSmapYfab_map,"goo/collections/map","fab-map");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YgooScollectionsSsequenceYrange_checkQ,"goo/collections/sequence","range-check?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooScollectionsStableYLstr_tabG,"goo/collections/table","<str-tab>");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(YruntimeSruntimeYcondition_message,"runtime/runtime","condition-message");
EXT(Yvec,"runtime/boot","vec");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YgooScollectionsStableYcase_insensitive_string_hash,"goo/collections/table","case-insensitive-string-hash");
EXT(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(YruntimeSruntimeYLconditionG,"runtime/runtime","<condition>");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(Yfind_setter,"runtime/boot","find-setter");
DEF(YgooSioSwriteYwrite_map,"goo/io/write","write-map");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYE,"goo/math","=");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YgooScollectionsSsequenceYrange_check,"goo/collections/sequence","range-check");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScollectionsSassocYassocs_test_setter,"goo/collections/assoc","assocs-test-setter");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YruntimeSruntimeYformat,"runtime/runtime","format");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
DEF(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
DEF(YgooSioSwriteYwrite_string_literal,"goo/io/write","write-string-literal");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(YruntimeSruntimeYapp_filename,"runtime/runtime","app-filename");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
DEF(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YPsymbols,"runtime/boot","%symbols");
DEF(YgooSioSwriteYwrite_char_literal,"goo/io/write","write-char-literal");
EXT(YgooScollectionsSstringYstr,"goo/collections/string","str");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScollectionsStableYtab_growth_threshold_setter,"goo/collections/table","tab-growth-threshold-setter");
EXT(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
EXT(Ytail,"runtime/boot","tail");
DEF(YgooSioSwriteYwrite_flat,"goo/io/write","write-flat");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YgooScollectionsSrangeYrange,"goo/collections/range","range");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
DEF(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YruntimeSruntimeYLrestartG,"runtime/runtime","<restart>");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(YruntimeSruntimeYinvoke_handler_interactively,"runtime/runtime","invoke-handler-interactively");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YgooScollectionsStableYtab_shrink_threshold_setter,"goo/collections/table","tab-shrink-threshold-setter");
DEF(YgooSioSwriteYquotationQ,"goo/io/write","quotation?");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(YgooScollectionsSrangeYfrom,"goo/collections/range","from");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooScollectionsStableYtab_gc_state,"goo/collections/table","tab-gc-state");
EXT(YgooScollectionsSsequenceYfinds,"goo/collections/sequence","finds");
EXT(YruntimeSruntimeYLsimple_conditionG,"runtime/runtime","<simple-condition>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(YruntimeSruntimeYLsimple_errorG,"runtime/runtime","<simple-error>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScollectionsSassocYassocs_test,"goo/collections/assoc","assocs-test");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(YgooScollectionsStableYtab_shrink_threshold,"goo/collections/table","tab-shrink-threshold");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScollectionsSstringYascii_whitespaces,"goo/collections/string","ascii-whitespaces");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(YgooScollectionsStableYtab_growth_threshold,"goo/collections/table","tab-growth-threshold");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSzipYzip,"goo/collections/zip","zip");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(YgooScollectionsSzipYunzip,"goo/collections/zip","unzip");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YgooScollectionsStableYtab_growth_factor_setter,"goo/collections/table","tab-growth-factor-setter");
EXT(YgooScollectionsStableYtab_growth_factor,"goo/collections/table","tab-growth-factor");
EXT(YgooScollectionsSstepYfirst_then,"goo/collections/step","first-then");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YruntimeSruntimeYLhandlerG,"runtime/runtime","<handler>");
EXT(YgooScollectionsStableYLsetG,"goo/collections/table","<set>");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YruntimeSruntimeYLserious_conditionG,"runtime/runtime","<serious-condition>");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(YPsnul,"runtime/boot","%snul");
EXT(YruntimeSruntimeYcompose,"runtime/runtime","compose");
EXT(YgooScollectionsSstringYTprint_baseT,"goo/collections/string","*print-base*");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YruntimeSruntimeYdescribe_handler,"runtime/runtime","describe-handler");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YgooScollectionsSrangeYLrangeG,"goo/collections/range","<range>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
DEF(YgooSioSwriteYwrite_list,"goo/io/write","write-list");
DEF(YgooSioSwriteYcharacter_name,"goo/io/write","character-name");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(YgooScollectionsSstepYLstepG,"goo/collections/step","<step>");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YruntimeSruntimeYLerrorG,"runtime/runtime","<error>");
DEF(YgooSioSwriteYas_binding_name,"goo/io/write","as-binding-name");
EXT(YgooScollectionsSlistYlist,"goo/collections/list","list");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScollectionsSmapYLmapG,"goo/collections/map","<map>");
EXT(YgooScollectionsSstringYnum_to_str_base,"goo/collections/string","num-to-str-base");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YruntimeSruntimeYalways,"runtime/runtime","always");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_26);
DEFLIT(lit_63);
DEFLIT(lit_60);
DEFLIT(lit_42);
DEFLIT(lit_29);
DEFLIT(lit_37);
DEFLIT(lit_71);
DEFLIT(lit_61);
DEFLIT(lit_87);
DEFLIT(lit_75);
DEFLIT(lit_13);
DEFLIT(lit_34);
DEFLIT(lit_2);
DEFLIT(lit_84);
DEFLIT(lit_28);
DEFLIT(lit_30);
DEFLIT(lit_27);
DEFLIT(lit_52);
DEFLIT(lit_57);
DEFLIT(lit_19);
DEFLIT(lit_18);
DEFLIT(lit_76);
DEFLIT(lit_62);
DEFLIT(lit_69);
DEFLIT(lit_32);
DEFLIT(lit_81);
DEFLIT(lit_94);
DEFLIT(lit_41);
DEFLIT(lit_78);
DEFLIT(lit_72);
DEFLIT(lit_66);
DEFLIT(lit_47);
DEFLIT(lit_53);
DEFLIT(lit_12);
DEFLIT(lit_20);
DEFLIT(lit_82);
DEFLIT(lit_23);
DEFLIT(lit_49);
DEFLIT(lit_6);
DEFLIT(lit_4);
DEFLIT(lit_89);
DEFLIT(lit_3);
DEFLIT(lit_16);
DEFLIT(lit_24);
DEFLIT(lit_36);
DEFLIT(lit_54);
DEFLIT(lit_88);
DEFLIT(lit_38);
DEFLIT(lit_70);
DEFLIT(lit_67);
DEFLIT(lit_44);
DEFLIT(lit_85);
DEFLIT(lit_40);
DEFLIT(lit_77);
DEFLIT(lit_50);
DEFLIT(lit_90);
DEFLIT(lit_35);
DEFLIT(lit_86);
DEFLIT(lit_1);
DEFLIT(lit_8);
DEFLIT(lit_10);
DEFLIT(lit_39);
DEFLIT(lit_5);
DEFLIT(lit_9);
DEFLIT(lit_80);
DEFLIT(lit_56);
DEFLIT(lit_59);
DEFLIT(lit_55);
DEFLIT(lit_46);
DEFLIT(lit_64);
DEFLIT(lit_83);
DEFLIT(lit_43);
DEFLIT(lit_17);
DEFLIT(lit_74);
DEFLIT(lit_45);
DEFLIT(lit_33);
DEFLIT(lit_68);
DEFLIT(lit_73);
DEFLIT(lit_11);
DEFLIT(lit_7);
DEFLIT(lit_91);
DEFLIT(lit_15);
DEFLIT(lit_48);
DEFLIT(lit_92);
DEFLIT(lit_93);
DEFLIT(lit_31);
DEFLIT(lit_58);
DEFLIT(lit_25);
DEFLIT(lit_14);
DEFLIT(lit_21);
DEFLIT(lit_65);
DEFLIT(lit_22);
DEFLIT(lit_79);
DEFLIT(lit_95);
DEFLIT(lit_51);
DEFLIT(lit_0);

/* FUNCTIONS: */

LOCFOR(fun_as_binding_name_0);
LOCFOR(fun_do_display_1);
LOCFOR(fun_do_display_2);
LOCFOR(fun_do_display_3);
LOCFOR(fun_recur_4);
LOCFOR(fun_display_5);
LOCFOR(fun_6);
LOCFOR(fun_7);
LOCFOR(fun_write_to_string_8);
LOCFOR(fun_recur_9);
LOCFOR(fun_write_10);
LOCFOR(fun_writeln_11);
LOCFOR(fun_recurring_write_12);
LOCFOR(fun_recurring_write_13);
LOCFOR(fun_recurring_write_14);
LOCFOR(fun_recurring_write_15);
LOCFOR(fun_recurring_write_16);
LOCFOR(fun_recurring_write_17);
LOCFOR(fun_recurring_write_18);
LOCFOR(fun_recurring_write_19);
LOCFOR(fun_recurring_write_20);
LOCFOR(fun_write_boolean_21);
LOCFOR(fun_write_number_22);
LOCFOR(fun_write_char_literal_23);
LOCFOR(fun_character_name_24);
LOCFOR(fun_loop_25);
LOCFOR(fun_write_string_literal_26);
LOCFOR(fun_loop_27);
LOCFOR(fun_write_list_28);
LOCFOR(fun_quotationQ_29);
LOCFOR(fun_loop_30);
LOCFOR(fun_write_flat_31);
LOCFOR(fun_x_1362_32);
LOCFOR(fun_33);
LOCFOR(fun_write_map_34);
LOCFOR(fun_recurring_write_35);
LOCFOR(fun_recurring_write_36);
LOCFOR(fun_x_1366_37);
LOCFOR(fun_write_params_38);
LOCFOR(fun_write_fun_guts_39);
LOCFOR(fun_recurring_write_40);
LOCFOR(fun_recurring_write_41);
LOCFOR(fun_recurring_write_42);
LOCFOR(fun_recurring_write_43);
LOCFOR(fun_recurring_write_44);
LOCFOR(fun_45);
LOCFOR(fun_recurring_write_46);
LOCFOR(fun_recurring_write_type_47);
LOCFOR(fun_recurring_write_type_48);
LOCFOR(fun_recur_49);
LOCFOR(fun_write_type_50);
LOCFOR(fun_recurring_write_51);
LOCFOR(fun_x_1370_52);
LOCFOR(fun_53);
LOCFOR(fun_54);
LOCFOR(fun_55);
LOCFOR(fun_recurring_write_56);
LOCFOR(fun_recurring_write_57);
LOCFOR(fun_recurring_write_58);
LOCFOR(fun_arg_59);
LOCFOR(fun_60);
LOCFOR(fun_format_61);
LOCFOR(fun_62);
LOCFOR(fun_63);
FUNFOR(YruntimeSruntimeYformat_to_string);
extern P YgooSioSwriteY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_as_binding_name_0) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
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
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,x_);
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
  T0 = CALL2(1,VARREF(YgooSioSportYput),port_,x_);
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
  T0 = CALLN(1,VARREF(YgooSioSwriteYrecurring_write),4,port_,x_,d_,recur_);
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
  T1 = CALL2(1,VARREF(YgooSmagnitudeYGE),d_,VARREF(YgooSioSwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_8));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    T3 = CALLN(1,VARREF(YgooSioSwriteYdo_display),4,FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_display_5) {
  P port_,x_;
  P recurF1370;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF1370 = T1;
  FUNINIT(recurF1370, 2,port_,recurF1370);
  T2 = CALL2(0,recurF1370,x_,YPint((P)-1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_10));
  BOXVAL(FREEREF(0)) = T0;
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSioSwriteYwrite),T2,FREEREF(1));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_7) {
  P tmpF1371;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF1371 = T1;
  if (tmpF1371 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,VARREF(YgooSioSportYclose),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_to_string_8) {
  P x_;
  P portF1372;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  portF1372 = YPfalse;
  portF1372 = BOXFAB(portF1372);
  T3 = FUNFAB(fun_6,2,portF1372,x_);
  T4 = FUNFAB(fun_7,1,portF1372);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_recur_9) {
  P x_,d_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagnitudeYGE),d_,VARREF(YgooSioSwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_12));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    T3 = CALLN(1,VARREF(YgooSioSwriteYrecurring_write),4,FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_10) {
  P port_,x_;
  P recurF1373;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_9,2);
  recurF1373 = T1;
  FUNINIT(recurF1373, 2,port_,recurF1373);
  T2 = CALL2(0,recurF1373,x_,YPint((P)-1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_writeln_11) {
  P port_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YgooSioSwriteYwrite),port_,x_);
  T0 = CALL1(1,VARREF(YgooSioSportYnewline),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_12) {
  P port_,x_,d_,recur_;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_15));
    T0 = T2;
  } else {
    T3 = CALLN(1,VARREF(YgooSioSwriteYwrite_list),4,port_,x_,d_,recur_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_13) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),4,port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_14) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_map),4,port_,x_,d_,recur_);
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
  if (x_ != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSwriteYwrite_boolean),port_,LITREF(lit_16));
    T0 = T1;
  } else {
    T2 = CALL2(1,VARREF(YgooSioSwriteYwrite_boolean),port_,LITREF(lit_17));
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_16) {
  P port_,x_,d_,recur_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),x_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_17) {
  P port_,x_,d_,recur_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_18));
  T2 = (P)YPlu(x_);
  T1 = (P)YPib(T2);
  T0 = CALL2(1,VARREF(YgooScollectionsSstringYnum_to_str_base),T1,YPint((P)16));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_18) {
  P port_,x_,d_,recur_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YLnumG));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSioSwriteYas_binding_name),LITREF(lit_19));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,T3);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSioSwriteYwrite_number),port_,x_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_19) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_string_literal),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_20) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_char_literal),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_boolean_21) {
  P port_,mumble_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(mumble_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)35));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,mumble_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_number_22) {
  P port_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_char_literal_23) {
  P port_,x_;
  P probeF1374;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSwriteYcharacter_name),x_);
  probeF1374 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_24));
  if (probeF1374 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,probeF1374);
    T2 = T3;
  } else {
    T4 = CALL2(1,VARREF(YgooSioSportYput),port_,x_);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_character_name_24) {
  P char_;
  P tmpF1376;
  P assocF1375;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooScollectionsSlistYassqn),char_,VARREF(YgooSioSreadYDchar_long_names),YPint((P)1));
  assocF1375 = T1;
  tmpF1376 = assocF1375;
  if (tmpF1376 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScollectionsSsequenceY1st),assocF1375);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_25) {
  P i_;
  P tmpF1378;
  P cF1377;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)34));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),i_);
    cF1377 = T4;
    T6 = CALL2(1,VARREF(YgooSmathYE),cF1377,YPchr((P)92));
    tmpF1378 = T6;
    if (tmpF1378 != YPfalse) {
      T7 = tmpF1378;
    } else {
      T8 = CALL2(1,VARREF(YgooSmathYE),cF1377,YPchr((P)34));
      T7 = T8;
    }
    T5 = T7;
    if (T5 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)92));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),cF1377);
    T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T11;
    i_ = a1;
    goto loop;
    T3 = T10;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_string_literal_26) {
  P port_,x_;
  P loopF1380;
  P lenF1379;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  lenF1379 = T1;
  T3 = FUNSHELL(1,fun_loop_25,4);
  loopF1380 = T3;
  FUNINIT(loopF1380, 4,lenF1379,port_,x_,loopF1380);
  T4 = CALL1(0,loopF1380,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_27) {
  P l_,n_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmagnitudeYGE),n_,VARREF(YgooSioSwriteYTmax_print_lengthT));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_33));
      T3 = T5;
    } else {
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
      T6 = CALL1(1,VARREF(Yhead),l_);
      CALL2(1,FREEREF(1),T6,FREEREF(2));
      T8 = CALL1(1,VARREF(Ytail),l_);
      T9 = CALL2(1,VARREF(YgooSmathYA),n_,YPint((P)1));
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

FUNCODEDEF(fun_write_list_28) {
  P port_,x_,d_,recur_;
  P loopF1381;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooSioSwriteYquotationQ),x_);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)39));
    T4 = CALL1(1,VARREF(Ytail),x_);
    T3 = CALL1(1,VARREF(Yhead),T4);
    T2 = CALL2(1,recur_,T3,d_);
    T0 = T2;
  } else {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
    T5 = CALL1(1,VARREF(Yhead),x_);
    CALL2(1,recur_,T5,d_);
    T6 = FUNSHELL(1,fun_loop_27,4);
    loopF1381 = T6;
    FUNINIT(loopF1381, 4,port_,recur_,d_,loopF1381);
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(0,loopF1381,T8,YPint((P)1));
    T9 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_quotationQ_29) {
  P x_;
  P tmpF1384;
  P tmpF1383;
  P tmpF1382;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF1382 = T1;
  if (tmpF1382 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_35));
    tmpF1383 = T4;
    if (tmpF1383 != YPfalse) {
      T9 = CALL1(1,VARREF(Ytail),x_);
      T8 = CALL2(1,VARREF(YisaQ),T9,VARREF(YLlstG));
      tmpF1384 = T8;
      if (tmpF1384 != YPfalse) {
        T13 = CALL1(1,VARREF(Ytail),x_);
        T12 = CALL1(1,VARREF(Ytail),T13);
        T11 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T12);
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

FUNCODEDEF(fun_loop_30) {
  P i_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagnitudeYGE),i_,VARREF(YgooSioSwriteYTmax_print_lengthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_40));
    T0 = T2;
  } else {
    T5 = CALL2(1,VARREF(YgooSmagnitudeYGE),i_,FREEREF(1));
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
      T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),i_);
      CALL2(1,FREEREF(2),T6,FREEREF(4));
      T8 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
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

FUNCODEDEF(fun_write_flat_31) {
  P port_,x_,d_,recur_;
  P loopF1386;
  P zF1385;
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
    T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_37));
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_38));
    T3 = CALL1(1,VARREF(Yobject_class),x_);
    T2 = CALL1(1,VARREF(Yclass_name),T3);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),port_,T2);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_39));
  }
  T6 = CALL1(1,VARREF(YgooStypesYlen),x_);
  zF1385 = T6;
  T7 = CALL2(1,VARREF(YgooSmagnitudeYG),zF1385,YPint((P)0));
  if (T7 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
    CALL2(1,recur_,T8,d_);
    T10 = FUNSHELL(1,fun_loop_30,6);
    loopF1386 = T10;
    FUNINIT(loopF1386, 6,port_,zF1385,recur_,x_,d_,loopF1386);
    T11 = CALL1(0,loopF1386,YPint((P)1));
    T9 = T11;
  } else {
  }
  T12 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
  T5 = T12;
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_x_1362_32) {
  P x_1361_,x_1360_;
  P valF1391;
  P keyF1390;
  P tup34F1389;
  P iF1388;
  P tmpF1387;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1361_, 0);
  ARG(x_1360_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1361_);
  tmpF1387 = T3;
  if (tmpF1387 != YPfalse) {
    T4 = tmpF1387;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1360_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1361_);
    iF1388 = T7;
    T10 = CALL1(1,VARREF(YgooScollectionsScollectionYnow_key),x_1360_);
    T11 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1360_);
    T9 = CALL2(1,VARREF(Ytup),T10,T11);
    tup34F1389 = T9;
    T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup34F1389,YPint((P)0));
    keyF1390 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYelt),tup34F1389,YPint((P)1));
    valF1391 = T15;
    T16 = CALL2(1,VARREF(YgooSmagnitudeYGE),iF1388,VARREF(YgooSioSwriteYTmax_print_lengthT));
    if (T16 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_47));
      T17 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    CALL2(1,FREEREF(2),keyF1390,FREEREF(3));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_48));
    CALL2(1,FREEREF(2),valF1391,FREEREF(3));
    T19 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1361_);
    T20 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1360_);
    a1 = T19;
    a2 = T20;
    x_1361_ = a1;
    x_1360_ = a2;
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

FUNCODEDEF(fun_33) {
  P blow_;
  P x_1362F1392;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_x_1362_32,5);
  x_1362F1392 = T1;
  FUNINIT(x_1362F1392, 5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),x_1362F1392);
  T4 = CALL1(1,VARREF(YgooScollectionsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T4);
  T5 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),FREEREF(3));
  T2 = CALL2(0,x_1362F1392,T3,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_map_34) {
  P port_,x_,d_,recur_;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_42));
  T1 = CALL1(1,VARREF(Yobject_class),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),port_,T0);
  T2 = FUNFAB(fun_33,4,port_,recur_,d_,x_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)93));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_35) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_49));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_36) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_50));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1366_37) {
  P x_1365_,x_1364_,x_1363_;
  P iF1397;
  P specF1396;
  P firstQF1395;
  P tmpF1394;
  P tmpF1393;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1365_, 0);
  ARG(x_1364_, 1);
  ARG(x_1363_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1365_);
  tmpF1393 = T3;
  if (tmpF1393 != YPfalse) {
    T4 = tmpF1393;
  } else {
    T6 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1364_);
    tmpF1394 = T6;
    if (tmpF1394 != YPfalse) {
      T7 = tmpF1394;
    } else {
      T8 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1363_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1365_);
    firstQF1395 = T10;
    T12 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1364_);
    specF1396 = T12;
    T14 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1363_);
    iF1397 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF1395);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    } else {
    }
    T17 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(1));
    if (T17 != YPfalse) {
      T18 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF1396);
    } else {
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),iF1397);
      T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T20);
      CALL3(1,VARREF(YruntimeSruntimeYformat),FREEREF(0),LITREF(lit_56),T19);
      CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),specF1396);
      T21 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)41));
    }
    T23 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1365_);
    T24 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1364_);
    T25 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1363_);
    a1 = T23;
    a2 = T24;
    a3 = T25;
    x_1365_ = a1;
    x_1364_ = a2;
    x_1363_ = a3;
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

FUNCODEDEF(fun_write_params_38) {
  P port_,x_,recur_;
  P tmpF1402;
  P valueF1401;
  P x_1366F1400;
  P namesF1399;
  P namesF1398;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
loop:
  T1 = CALL1(1,VARREF(Yfun_names),x_);
  namesF1398 = T1;
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
  T3 = CALL1(1,VARREF(Yfun_names),x_);
  namesF1399 = T3;
  T4 = FUNSHELL(1,fun_x_1366_37,3);
  x_1366F1400 = T4;
  FUNINIT(x_1366F1400, 3,port_,namesF1399,x_1366F1400);
  T7 = CALL2(1,VARREF(YgooScollectionsSstepYfirst_then),YPtrue,YPfalse);
  T6 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T7);
  T9 = CALL1(1,VARREF(Yfun_specs),x_);
  T8 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T9);
  T11 = CALL1(1,VARREF(YgooScollectionsSrangeYfrom),YPint((P)0));
  T10 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T11);
  T5 = CALL3(0,x_1366F1400,T6,T8,T10);
  T13 = CALL1(1,VARREF(Yfun_val),x_);
  valueF1401 = T13;
  T16 = CALL1(1,VARREF(Ynot),valueF1401);
  tmpF1402 = T16;
  if (tmpF1402 != YPfalse) {
    T17 = tmpF1402;
  } else {
    T18 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1401,VARREF(YLanyG));
    T17 = T18;
  }
  T15 = T17;
  T14 = CALL1(1,VARREF(Ynot),T15);
  if (T14 != YPfalse) {
    CALL2(1,VARREF(YruntimeSruntimeYformat),port_,LITREF(lit_57));
    T19 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,valueF1401);
  } else {
  }
  T20 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
  T12 = T20;
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_fun_guts_39) {
  P port_,x_,name_,recur_;
  P tmpF1404;
  P nameF1403;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(name_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_59));
  CALL2(1,VARREF(YgooSioSportYputs),port_,name_);
  T1 = CALL1(1,VARREF(Yfun_name),x_);
  nameF1403 = T1;
  tmpF1404 = nameF1403;
  if (tmpF1404 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF1403);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
  CALL3(1,VARREF(YgooSioSwriteYwrite_params),port_,x_,recur_);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_60));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_40) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_fun_guts),4,port_,x_,LITREF(lit_61),recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_41) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_fun_guts),4,port_,x_,LITREF(lit_62),recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_42) {
  P port_,x_,d_,recur_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_63));
  T1 = CALL1(1,VARREF(Yclass_name),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
  CALL2(1,VARREF(YgooSioSportYputs),port_,T0);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_64));
  T3 = CALL1(1,VARREF(Yclass_parents),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yclass_name),T3);
  CALL2(1,recur_,T2,d_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_65));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_recurring_write_43) {
  P port_,x_,d_,recur_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_66));
  T0 = CALL1(1,VARREF(Ytype_object),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_67));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_recurring_write_44) {
  P port_,x_,d_,recur_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_68));
  T0 = CALL1(1,VARREF(Ytype_class),x_);
  CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_69));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_45) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_46) {
  P port_,x_,d_,recur_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_70));
  T0 = FUNFAB(fun_45,1,port_);
  T1 = CALL1(1,VARREF(Ytype_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_71));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_recurring_write_type_47) {
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
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_type_48) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALLN(1,VARREF(YgooSioSwriteYrecurring_write),4,port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recur_49) {
  P x_,d_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
loop:
  T0 = CALLN(1,VARREF(YgooSioSwriteYrecurring_write_type),4,FREEREF(0),x_,d_,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_type_50) {
  P port_,x_;
  P recurF1405;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(0,fun_recur_49,2);
  recurF1405 = T1;
  FUNINIT(recurF1405, 2,port_,recurF1405);
  T2 = CALL2(0,recurF1405,x_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_51) {
  P port_,x_,d_,recur_;
  P T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_74));
  T0 = CALL1(1,VARREF(Yprop_getter),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_75));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_x_1370_52) {
  P x_1369_,x_1368_;
  P getterF1409;
  P propF1408;
  P iF1407;
  P tmpF1406;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_1369_, 0);
  ARG(x_1368_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1369_);
  tmpF1406 = T3;
  if (tmpF1406 != YPfalse) {
    T4 = tmpF1406;
  } else {
    T5 = CALL1(1,VARREF(YgooScollectionsScollectionYfinQ),x_1368_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1369_);
    iF1407 = T7;
    T9 = CALL1(1,VARREF(YgooScollectionsScollectionYnow),x_1368_);
    propF1408 = T9;
    T10 = CALL2(1,VARREF(YgooSmagnitudeYGE),iF1407,VARREF(YgooSioSwriteYTmax_print_lengthT));
    if (T10 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_80));
      T11 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    T13 = CALL1(1,VARREF(Yprop_getter),propF1408);
    getterF1409 = T13;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
    T14 = CALL1(1,VARREF(Yfun_name),getterF1409);
    CALL2(1,VARREF(YgooSioSwriteYdisplay),FREEREF(0),T14);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_81));
    T15 = CALL1(1,getterF1409,FREEREF(3));
    CALL2(1,FREEREF(2),T15,FREEREF(4));
    T17 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1369_);
    T18 = CALL1(1,VARREF(YgooScollectionsScollectionYnxt),x_1368_);
    a1 = T17;
    a2 = T18;
    x_1369_ = a1;
    x_1368_ = a2;
    goto loop;
    T12 = T16;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P x_1370F1410;
  P T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  VARSET(YTreport_prop_unbound_errorsQT,YPfalse);
  T1 = FUNSHELL(1,fun_x_1370_52,6);
  x_1370F1410 = T1;
  FUNINIT(x_1370F1410, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),x_1370F1410);
  T4 = CALL1(1,VARREF(YgooScollectionsSrangeYfrom),YPint((P)0));
  T3 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T4);
  T6 = CALL1(1,VARREF(Yobject_props),FREEREF(3));
  T5 = CALL1(1,VARREF(YgooScollectionsScollectionYenum),T6);
  T2 = CALL2(0,x_1370F1410,T3,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YTreport_prop_unbound_errorsQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P blow_;
  P x_1367F1411;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  x_1367F1411 = VARREF(YTreport_prop_unbound_errorsQT);
  T2 = FUNFAB(fun_53,5,FREEREF(0),blow_,FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_54,1,x_1367F1411);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_56) {
  P port_,x_,d_,recur_;
  P T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_76));
  T1 = CALL1(1,VARREF(Yobject_class),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYdisplay),port_,T0);
  T2 = FUNFAB(fun_55,4,port_,recur_,x_,d_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_82));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_57) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_83));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_58) {
  P port_,x_,d_,recur_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_84));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_59) {
  P char_,class_;
  P tmpF1414;
  P argumentF1413;
  P current_indexF1412;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
loop:
  T1 = BOXVAL(FREEREF(0));
  current_indexF1412 = T1;
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  BOXVAL(FREEREF(0)) = T2;
  T5 = CALL2(1,VARREF(YgooSmagnitudeYL),current_indexF1412,FREEREF(1));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_90),FREEREF(2),FREEREF(3));
  } else {
  }
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),current_indexF1412);
  argumentF1413 = T8;
  T11 = CALL2(1,VARREF(YgooSmacrosYEE),class_,VARREF(YLanyG));
  tmpF1414 = T11;
  if (tmpF1414 != YPfalse) {
    T12 = tmpF1414;
  } else {
    T13 = CALL2(1,VARREF(YisaQ),argumentF1413,class_);
    T12 = T13;
  }
  T10 = T12;
  T9 = CALL1(1,VARREF(Ynot),T10);
  if (T9 != YPfalse) {
    T14 = CALLN(1,VARREF(Yerror),4,LITREF(lit_91),char_,class_,argumentF1413);
  } else {
  }
  T7 = argumentF1413;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  P c_;
  P x_1372F1416;
  P x_1371F1415;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYto_upper),c_);
    x_1371F1415 = T2;
    x_1372F1416 = VARREF(YgooSmacrosYEE);
    T5 = CALL2(1,x_1372F1416,x_1371F1415,YPchr((P)68));
    if (T5 != YPfalse) {
      T8 = CALL2(1,FREEREF(2),c_,VARREF(YLnumG));
      T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
      T6 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T7);
      T4 = T6;
    } else {
      T10 = CALL2(1,x_1372F1416,x_1371F1415,YPchr((P)66));
      if (T10 != YPfalse) {
        T13 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
        T12 = CALL2(1,VARREF(YgooSmathYnum_to_str),T13,YPint((P)2));
        T11 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T12);
        T9 = T11;
      } else {
        T15 = CALL2(1,x_1372F1416,x_1371F1415,YPchr((P)79));
        if (T15 != YPfalse) {
          T18 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
          T17 = CALL2(1,VARREF(YgooSmathYnum_to_str),T18,YPint((P)8));
          T16 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T17);
          T14 = T16;
        } else {
          T20 = CALL2(1,x_1372F1416,x_1371F1415,YPchr((P)88));
          if (T20 != YPfalse) {
            T23 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
            T22 = CALL2(1,VARREF(YgooSmathYnum_to_str),T23,YPint((P)16));
            T21 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T22);
            T19 = T21;
          } else {
            T25 = CALL2(1,x_1372F1416,x_1371F1415,YPchr((P)67));
            if (T25 != YPfalse) {
              T27 = CALL2(1,FREEREF(2),c_,VARREF(YLchrG));
              T26 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),T27);
              T24 = T26;
            } else {
              T29 = CALL2(1,x_1372F1416,x_1371F1415,YPchr((P)83));
              if (T29 != YPfalse) {
                T31 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                T30 = CALL2(1,VARREF(YgooSioSwriteYdisplay),FREEREF(1),T31);
                T28 = T30;
              } else {
                T33 = CALL2(1,x_1372F1416,x_1371F1415,YPchr((P)61));
                if (T33 != YPfalse) {
                  T35 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                  T34 = CALL2(1,VARREF(YgooSioSwriteYwrite),FREEREF(1),T35);
                  T32 = T34;
                } else {
                  T37 = CALL2(1,x_1372F1416,x_1371F1415,YPchr((P)37));
                  if (T37 != YPfalse) {
                    T38 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)37));
                    T36 = T38;
                  } else {
                    T39 = CALL3(1,VARREF(Yerror),LITREF(lit_93),c_,FREEREF(3));
                    T36 = T39;
                  }
                  T32 = T36;
                }
                T28 = T32;
              }
              T24 = T28;
            }
            T19 = T24;
          }
          T14 = T19;
        }
        T9 = T14;
      }
      T4 = T9;
    }
    T3 = T4;
    T40 = BOXVAL(FREEREF(0)) = YPfalse;
    T0 = T40;
  } else {
    T42 = CALL2(1,VARREF(YgooSmacrosYEE),c_,YPchr((P)37));
    if (T42 != YPfalse) {
      T43 = BOXVAL(FREEREF(0)) = YPtrue;
      T41 = T43;
    } else {
      T44 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),c_);
      T41 = T44;
    }
    T0 = T41;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_format_61) {
  P port_,message_,arguments_;
  P argF1420;
  P num_argumentsF1419;
  P argument_indexF1418;
  P found_percentQF1417;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
loop:
  found_percentQF1417 = YPfalse;
  found_percentQF1417 = BOXFAB(found_percentQF1417);
  check_type(YPint((P)0),VARREF(YLintG));
  argument_indexF1418 = YPint((P)0);
  argument_indexF1418 = BOXFAB(argument_indexF1418);
  T5 = CALL1(1,VARREF(YgooStypesYlen),arguments_);
  num_argumentsF1419 = T5;
  T6 = FUNSHELL(1,fun_arg_59,4);
  argF1420 = T6;
  FUNINIT(argF1420, 4,argument_indexF1418,num_argumentsF1419,message_,arguments_);
  T8 = FUNFAB(fun_60,4,found_percentQF1417,port_,argF1420,message_);
  T7 = CALL2(1,VARREF(YgooSmacrosYdo),T8,message_);
  T12 = BOXVAL(found_percentQF1417);
  T11 = CALL1(1,VARREF(Ynot),T12);
  T10 = CALL1(1,VARREF(Ynot),T11);
  if (T10 != YPfalse) {
    T13 = CALL2(1,VARREF(Yerror),LITREF(lit_94),message_);
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

FUNCODEDEF(fun_62) {
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_10));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  CALLN(1,VARREF(YgooSmacrosYnapp),5,VARREF(YruntimeSruntimeYformat),YPfalse,T1,FREEREF(1),FREEREF(2));
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,VARREF(YgooSioSportYport_contents),T3);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_63) {
  P tmpF1421;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF1421 = T1;
  if (tmpF1421 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,VARREF(YgooSioSportYclose),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeSruntimeYformat_to_string) {
  P message_,arguments_;
  P portF1422;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
loop:
  portF1422 = YPfalse;
  portF1422 = BOXFAB(portF1422);
  T3 = FUNFAB(fun_62,3,portF1422,message_,arguments_);
  T4 = FUNFAB(fun_63,1,portF1422);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

P YgooSioSwriteY___main_0___() {
  P T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230;
  P T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214;
  P T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198;
  P T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182;
  P T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166;
  P T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150;
  P T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134;
  P T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118;
  P T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102;
  P T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86;
  P T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70;
  P T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54;
  P T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38;
  P T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
loop:
  VARSET(YgooSioSwriteYTmax_print_depthT,YPint((P)4));
  VARSET(YgooSioSwriteYTmax_print_lengthT,YPint((P)12));
  lit_0 = YPPsym((P)"as-binding-name");
  lit_1 = YPPsym((P)"name");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_binding_name_0 = YPmet(FUNCODEREF(fun_as_binding_name_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YgooSioSwriteYas_binding_name);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSioSwriteYas_binding_name);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_as_binding_name_0;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSioSwriteYas_binding_name,T1);
  lit_2 = YPPsym((P)"do-display");
  lit_3 = YPPsym((P)"port");
  lit_4 = YPPsym((P)"x");
  lit_5 = YPPsym((P)"d");
  lit_6 = YPPsym((P)"recur");
  T5 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_display_1 = YPmet(FUNCODEREF(fun_do_display_1),LITREF(lit_2),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YgooSioSwriteYdo_display);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooSioSwriteYdo_display);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_do_display_1;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooSioSwriteYdo_display,T6);
  T10 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_display_2 = YPmet(FUNCODEREF(fun_do_display_2),LITREF(lit_2),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YgooSioSwriteYdo_display);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooSioSwriteYdo_display);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_do_display_2;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooSioSwriteYdo_display,T11);
  T15 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_display_3 = YPmet(FUNCODEREF(fun_do_display_3),LITREF(lit_2),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YgooSioSwriteYdo_display);
  if (T18 != YPfalse) {
    T17 = VARREF(YgooSioSwriteYdo_display);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_do_display_3;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YgooSioSwriteYdo_display,T16);
  lit_7 = YPPsym((P)"display");
  lit_8 = YPsb((P)"*");
  T21 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_4 = YPmet(FUNCODEREF(fun_recur_4),LITREF(lit_6),T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_display_5 = YPmet(FUNCODEREF(fun_display_5),LITREF(lit_7),T20,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YgooSioSwriteYdisplay);
  if (T24 != YPfalse) {
    T23 = VARREF(YgooSioSwriteYdisplay);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_display_5;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YgooSioSwriteYdisplay,T22);
  lit_9 = YPPsym((P)"write-to-string");
  lit_10 = YPsb((P)"");
  T28 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_write_to_string_8 = YPmet(FUNCODEREF(fun_write_to_string_8),LITREF(lit_9),T26,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YgooSioSwriteYwrite_to_string);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooSioSwriteYwrite_to_string);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_write_to_string_8;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YgooSioSwriteYwrite_to_string,T29);
  lit_11 = YPPsym((P)"write");
  lit_12 = YPsb((P)"*");
  T34 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_9 = YPmet(FUNCODEREF(fun_recur_9),LITREF(lit_6),T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_10 = YPmet(FUNCODEREF(fun_write_10),LITREF(lit_11),T33,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YgooSioSwriteYwrite);
  if (T37 != YPfalse) {
    T36 = VARREF(YgooSioSwriteYwrite);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_write_10;
  T35 = CALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YgooSioSwriteYwrite,T35);
  lit_13 = YPPsym((P)"writeln");
  T39 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_writeln_11 = YPmet(FUNCODEREF(fun_writeln_11),LITREF(lit_13),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YgooSioSwriteYwriteln);
  if (T42 != YPfalse) {
    T41 = VARREF(YgooSioSwriteYwriteln);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_writeln_11;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooSioSwriteYwriteln,T40);
  lit_14 = YPPsym((P)"recurring-write");
  lit_15 = YPsb((P)"()");
  T44 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_12 = YPmet(FUNCODEREF(fun_recurring_write_12),LITREF(lit_14),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T47 != YPfalse) {
    T46 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_recurring_write_12;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YgooSioSwriteYrecurring_write,T45);
  T49 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLflatG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_13 = YPmet(FUNCODEREF(fun_recurring_write_13),LITREF(lit_14),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T52 != YPfalse) {
    T51 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_recurring_write_13;
  T50 = CALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YgooSioSwriteYrecurring_write,T50);
  T54 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScollectionsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_14 = YPmet(FUNCODEREF(fun_recurring_write_14),LITREF(lit_14),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_recurring_write_14;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooSioSwriteYrecurring_write,T55);
  lit_16 = YPPsym((P)"t");
  lit_17 = YPPsym((P)"f");
  T59 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_15 = YPmet(FUNCODEREF(fun_recurring_write_15),LITREF(lit_14),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T62 != YPfalse) {
    T61 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_recurring_write_15;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YgooSioSwriteYrecurring_write,T60);
  T64 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsymG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_16 = YPmet(FUNCODEREF(fun_recurring_write_16),LITREF(lit_14),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_recurring_write_16;
  T65 = CALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooSioSwriteYrecurring_write,T65);
  lit_18 = YPsb((P)"&0x");
  T69 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlocG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_17 = YPmet(FUNCODEREF(fun_recurring_write_17),LITREF(lit_14),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_recurring_write_17;
  T70 = CALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSioSwriteYrecurring_write,T70);
  lit_19 = YPsb((P)"<num>");
  T74 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_18 = YPmet(FUNCODEREF(fun_recurring_write_18),LITREF(lit_14),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_recurring_write_18;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooSioSwriteYrecurring_write,T75);
  T79 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_19 = YPmet(FUNCODEREF(fun_recurring_write_19),LITREF(lit_14),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T82 != YPfalse) {
    T81 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_recurring_write_19;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YgooSioSwriteYrecurring_write,T80);
  T84 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_20 = YPmet(FUNCODEREF(fun_recurring_write_20),LITREF(lit_14),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T87 != YPfalse) {
    T86 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_recurring_write_20;
  T85 = CALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YgooSioSwriteYrecurring_write,T85);
  lit_20 = YPPsym((P)"write-boolean");
  lit_21 = YPPsym((P)"mumble");
  T89 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_21)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_boolean_21 = YPmet(FUNCODEREF(fun_write_boolean_21),LITREF(lit_20),T89,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YgooSioSwriteYwrite_boolean);
  if (T92 != YPfalse) {
    T91 = VARREF(YgooSioSwriteYwrite_boolean);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_write_boolean_21;
  T90 = CALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YgooSioSwriteYwrite_boolean,T90);
  lit_22 = YPPsym((P)"write-number");
  T94 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_number_22 = YPmet(FUNCODEREF(fun_write_number_22),LITREF(lit_22),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YgooSioSwriteYwrite_number);
  if (T97 != YPfalse) {
    T96 = VARREF(YgooSioSwriteYwrite_number);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_write_number_22;
  T95 = CALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YgooSioSwriteYwrite_number,T95);
  lit_23 = YPPsym((P)"write-char-literal");
  lit_24 = YPsb((P)"#\\");
  T99 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_char_literal_23 = YPmet(FUNCODEREF(fun_write_char_literal_23),LITREF(lit_23),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YgooSioSwriteYwrite_char_literal);
  if (T102 != YPfalse) {
    T101 = VARREF(YgooSioSwriteYwrite_char_literal);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_write_char_literal_23;
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YgooSioSwriteYwrite_char_literal,T100);
  lit_25 = YPPsym((P)"character-name");
  lit_26 = YPPsym((P)"char");
  T104 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_character_name_24 = YPmet(FUNCODEREF(fun_character_name_24),LITREF(lit_25),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YgooSioSwriteYcharacter_name);
  if (T107 != YPfalse) {
    T106 = VARREF(YgooSioSwriteYcharacter_name);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_character_name_24;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YgooSioSwriteYcharacter_name,T105);
  lit_27 = YPPsym((P)"write-string-literal");
  lit_28 = YPPsym((P)"loop");
  lit_29 = YPPsym((P)"i");
  T110 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_25 = YPmet(FUNCODEREF(fun_loop_25),LITREF(lit_28),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_string_literal_26 = YPmet(FUNCODEREF(fun_write_string_literal_26),LITREF(lit_27),T109,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YgooSioSwriteYwrite_string_literal);
  if (T113 != YPfalse) {
    T112 = VARREF(YgooSioSwriteYwrite_string_literal);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_write_string_literal_26;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YgooSioSwriteYwrite_string_literal,T111);
  lit_30 = YPPsym((P)"write-list");
  lit_31 = YPPsym((P)"l");
  lit_32 = YPPsym((P)"n");
  lit_33 = YPsb((P)" ...");
  T116 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_32)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_27 = YPmet(FUNCODEREF(fun_loop_27),LITREF(lit_28),T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_list_28 = YPmet(FUNCODEREF(fun_write_list_28),LITREF(lit_30),T115,ENVNUL,PNUL,YPfalse);
  T119 = BOUNDP(YgooSioSwriteYwrite_list);
  if (T119 != YPfalse) {
    T118 = VARREF(YgooSioSwriteYwrite_list);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_write_list_28;
  T117 = CALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YgooSioSwriteYwrite_list,T117);
  lit_34 = YPPsym((P)"quotation?");
  lit_35 = YPPsym((P)"quote");
  T121 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_quotationQ_29 = YPmet(FUNCODEREF(fun_quotationQ_29),LITREF(lit_34),T121,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YgooSioSwriteYquotationQ);
  if (T124 != YPfalse) {
    T123 = VARREF(YgooSioSwriteYquotationQ);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_quotationQ_29;
  T122 = CALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YgooSioSwriteYquotationQ,T122);
  lit_36 = YPPsym((P)"write-flat");
  lit_37 = YPsb((P)"#(");
  lit_38 = YPsb((P)"$$");
  lit_39 = YPsb((P)"(");
  lit_40 = YPsb((P)" ...");
  T127 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_30 = YPmet(FUNCODEREF(fun_loop_30),LITREF(lit_28),T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLflatG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_flat_31 = YPmet(FUNCODEREF(fun_write_flat_31),LITREF(lit_36),T126,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YgooSioSwriteYwrite_flat);
  if (T130 != YPfalse) {
    T129 = VARREF(YgooSioSwriteYwrite_flat);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_write_flat_31;
  T128 = CALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YgooSioSwriteYwrite_flat,T128);
  lit_41 = YPPsym((P)"write-map");
  lit_42 = YPsb((P)"#[");
  lit_43 = YPPsym((P)"blow");
  lit_44 = YPPsym((P)"x-1362");
  lit_45 = YPPsym((P)"x-1361");
  lit_46 = YPPsym((P)"x-1360");
  lit_47 = YPsb((P)" ...");
  lit_48 = YPsb((P)": ");
  T134 = YPsig(YPPlist(2,LITREF(lit_45),LITREF(lit_46)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1362_32 = YPmet(FUNCODEREF(fun_x_1362_32),LITREF(lit_44),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScollectionsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_map_34 = YPmet(FUNCODEREF(fun_write_map_34),LITREF(lit_41),T132,ENVNUL,PNUL,YPfalse);
  T137 = BOUNDP(YgooSioSwriteYwrite_map);
  if (T137 != YPfalse) {
    T136 = VARREF(YgooSioSwriteYwrite_map);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_write_map_34;
  T135 = CALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YgooSioSwriteYwrite_map,T135);
  lit_49 = YPsb((P)"#{In-port}");
  T139 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLin_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_35 = YPmet(FUNCODEREF(fun_recurring_write_35),LITREF(lit_14),T139,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T142 != YPfalse) {
    T141 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_recurring_write_35;
  T140 = CALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YgooSioSwriteYrecurring_write,T140);
  lit_50 = YPsb((P)"#{Out-port}");
  T144 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLout_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_36 = YPmet(FUNCODEREF(fun_recurring_write_36),LITREF(lit_14),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T147 != YPfalse) {
    T146 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_recurring_write_36;
  T145 = CALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YgooSioSwriteYrecurring_write,T145);
  lit_51 = YPPsym((P)"write-params");
  lit_52 = YPPsym((P)"x-1366");
  lit_53 = YPPsym((P)"x-1365");
  lit_54 = YPPsym((P)"x-1364");
  lit_55 = YPPsym((P)"x-1363");
  lit_56 = YPsb((P)"(%s ");
  lit_57 = YPsb((P)" => ");
  T150 = YPsig(YPPlist(3,LITREF(lit_53),LITREF(lit_54),LITREF(lit_55)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1366_37 = YPmet(FUNCODEREF(fun_x_1366_37),LITREF(lit_52),T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_4),LITREF(lit_6)),YPPlist(3,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_write_params_38 = YPmet(FUNCODEREF(fun_write_params_38),LITREF(lit_51),T149,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YgooSioSwriteYwrite_params);
  if (T153 != YPfalse) {
    T152 = VARREF(YgooSioSwriteYwrite_params);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_write_params_38;
  T151 = CALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YgooSioSwriteYwrite_params,T151);
  lit_58 = YPPsym((P)"write-fun-guts");
  lit_59 = YPsb((P)"#{");
  lit_60 = YPsb((P)"}");
  T155 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_1),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_fun_guts_39 = YPmet(FUNCODEREF(fun_write_fun_guts_39),LITREF(lit_58),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YgooSioSwriteYwrite_fun_guts);
  if (T158 != YPfalse) {
    T157 = VARREF(YgooSioSwriteYwrite_fun_guts);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_write_fun_guts_39;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YgooSioSwriteYwrite_fun_guts,T156);
  lit_61 = YPsb((P)"Gen");
  T160 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLgenG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_40 = YPmet(FUNCODEREF(fun_recurring_write_40),LITREF(lit_14),T160,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T163 != YPfalse) {
    T162 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_recurring_write_40;
  T161 = CALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YgooSioSwriteYrecurring_write,T161);
  lit_62 = YPsb((P)"Met");
  T165 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLmetG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_41 = YPmet(FUNCODEREF(fun_recurring_write_41),LITREF(lit_14),T165,ENVNUL,PNUL,YPfalse);
  T168 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T168 != YPfalse) {
    T167 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T167 = YPfalse;
  }
  T169 = fun_recurring_write_41;
  T166 = CALL2(1,VARREF(YPdefine_method),T167,T169);
  VARSET(YgooSioSwriteYrecurring_write,T166);
  lit_63 = YPsb((P)"#{Class ");
  lit_64 = YPsb((P)" ");
  lit_65 = YPsb((P)"}");
  T170 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_42 = YPmet(FUNCODEREF(fun_recurring_write_42),LITREF(lit_14),T170,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T173 != YPfalse) {
    T172 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_recurring_write_42;
  T171 = CALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YgooSioSwriteYrecurring_write,T171);
  lit_66 = YPsb((P)"#{T= ");
  lit_67 = YPsb((P)"}");
  T175 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsingletonG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_43 = YPmet(FUNCODEREF(fun_recurring_write_43),LITREF(lit_14),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T178 != YPfalse) {
    T177 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_recurring_write_43;
  T176 = CALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YgooSioSwriteYrecurring_write,T176);
  lit_68 = YPsb((P)"#{T< ");
  lit_69 = YPsb((P)"}");
  T180 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsubclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_44 = YPmet(FUNCODEREF(fun_recurring_write_44),LITREF(lit_14),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T183 != YPfalse) {
    T182 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_recurring_write_44;
  T181 = CALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YgooSioSwriteYrecurring_write,T181);
  lit_70 = YPsb((P)"#{T+");
  lit_71 = YPsb((P)"}");
  T186 = YPsig(YPPlist(1,LITREF(lit_16)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T186,ENVNUL,PNUL,YPfalse);
  T185 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLunionG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_46 = YPmet(FUNCODEREF(fun_recurring_write_46),LITREF(lit_14),T185,ENVNUL,PNUL,YPfalse);
  T189 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T189 != YPfalse) {
    T188 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_recurring_write_46;
  T187 = CALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(YgooSioSwriteYrecurring_write,T187);
  lit_72 = YPPsym((P)"recurring-write-type");
  T191 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_47 = YPmet(FUNCODEREF(fun_recurring_write_type_47),LITREF(lit_72),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YgooSioSwriteYrecurring_write_type);
  if (T194 != YPfalse) {
    T193 = VARREF(YgooSioSwriteYrecurring_write_type);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_recurring_write_type_47;
  T192 = CALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YgooSioSwriteYrecurring_write_type,T192);
  T196 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_48 = YPmet(FUNCODEREF(fun_recurring_write_type_48),LITREF(lit_72),T196,ENVNUL,PNUL,YPfalse);
  T199 = BOUNDP(YgooSioSwriteYrecurring_write_type);
  if (T199 != YPfalse) {
    T198 = VARREF(YgooSioSwriteYrecurring_write_type);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_recurring_write_type_48;
  T197 = CALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YgooSioSwriteYrecurring_write_type,T197);
  lit_73 = YPPsym((P)"write-type");
  T202 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_49 = YPmet(FUNCODEREF(fun_recur_49),LITREF(lit_6),T202,ENVNUL,PNUL,YPfalse);
  T201 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_type_50 = YPmet(FUNCODEREF(fun_write_type_50),LITREF(lit_73),T201,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YgooSioSwriteYwrite_type);
  if (T205 != YPfalse) {
    T204 = VARREF(YgooSioSwriteYwrite_type);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_write_type_50;
  T203 = CALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YgooSioSwriteYwrite_type,T203);
  lit_74 = YPsb((P)"#{Prop ");
  lit_75 = YPsb((P)"}");
  T207 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLpropG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_51 = YPmet(FUNCODEREF(fun_recurring_write_51),LITREF(lit_14),T207,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T210 != YPfalse) {
    T209 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_recurring_write_51;
  T208 = CALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YgooSioSwriteYrecurring_write,T208);
  lit_76 = YPsb((P)"#{");
  lit_77 = YPPsym((P)"x-1370");
  lit_78 = YPPsym((P)"x-1369");
  lit_79 = YPPsym((P)"x-1368");
  lit_80 = YPsb((P)" ...");
  lit_81 = YPsb((P)": ");
  lit_82 = YPsb((P)"}");
  T216 = YPsig(YPPlist(2,LITREF(lit_78),LITREF(lit_79)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1370_52 = YPmet(FUNCODEREF(fun_x_1370_52),LITREF(lit_77),T216,ENVNUL,PNUL,YPfalse);
  T215 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T215,ENVNUL,PNUL,YPfalse);
  T214 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T214,ENVNUL,PNUL,YPfalse);
  T213 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T213,ENVNUL,PNUL,YPfalse);
  T212 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_56 = YPmet(FUNCODEREF(fun_recurring_write_56),LITREF(lit_14),T212,ENVNUL,PNUL,YPfalse);
  T219 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T219 != YPfalse) {
    T218 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T218 = YPfalse;
  }
  T220 = fun_recurring_write_56;
  T217 = CALL2(1,VARREF(YPdefine_method),T218,T220);
  VARSET(YgooSioSwriteYrecurring_write,T217);
  lit_83 = YPsb((P)"#{End-of-file}");
  T223 = CALL0(1,VARREF(YgooSmathYeof_object));
  T222 = CALL1(1,VARREF(YgooStypesYtE),T223);
  T221 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),T222,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_57 = YPmet(FUNCODEREF(fun_recurring_write_57),LITREF(lit_14),T221,ENVNUL,PNUL,YPfalse);
  T226 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T226 != YPfalse) {
    T225 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T225 = YPfalse;
  }
  T227 = fun_recurring_write_57;
  T224 = CALL2(1,VARREF(YPdefine_method),T225,T227);
  VARSET(YgooSioSwriteYrecurring_write,T224);
  lit_84 = YPsb((P)"nul");
  T229 = CALL1(1,VARREF(YgooStypesYtE),VARREF(Ynul));
  T228 = YPsig(YPPlist(4,LITREF(lit_3),LITREF(lit_4),LITREF(lit_5),LITREF(lit_6)),YPPlist(4,VARREF(YgooSioSportYLout_portG),T229,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_58 = YPmet(FUNCODEREF(fun_recurring_write_58),LITREF(lit_14),T228,ENVNUL,PNUL,YPfalse);
  T232 = BOUNDP(YgooSioSwriteYrecurring_write);
  if (T232 != YPfalse) {
    T231 = VARREF(YgooSioSwriteYrecurring_write);
  } else {
    T231 = YPfalse;
  }
  T233 = fun_recurring_write_58;
  T230 = CALL2(1,VARREF(YPdefine_method),T231,T233);
  VARSET(YgooSioSwriteYrecurring_write,T230);
  lit_85 = YPPsym((P)"format");
  lit_86 = YPPsym((P)"message");
  lit_87 = YPPsym((P)"arguments");
  lit_88 = YPPsym((P)"arg");
  lit_89 = YPPsym((P)"class");
  lit_90 = YPsb((P)"Too few arguments for format string %=: %=");
  lit_91 = YPsb((P)"Format argument for directive '%%%c' not of class %s: %=");
  lit_92 = YPPsym((P)"c");
  lit_93 = YPsb((P)"Invalid format directive '%s' in \"%s\"");
  lit_94 = YPsb((P)"Incomplete format directive in \"%s\"");
  T236 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_89)),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_arg_59 = YPmet(FUNCODEREF(fun_arg_59),LITREF(lit_88),T236,ENVNUL,PNUL,YPfalse);
  T235 = YPsig(YPPlist(1,LITREF(lit_92)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T235,ENVNUL,PNUL,YPfalse);
  T234 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_86),LITREF(lit_87)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_format_61 = YPmet(FUNCODEREF(fun_format_61),LITREF(lit_85),T234,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YruntimeSruntimeYformat);
  if (T239 != YPfalse) {
    T238 = VARREF(YruntimeSruntimeYformat);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_format_61;
  T237 = CALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YruntimeSruntimeYformat,T237);
  lit_95 = YPPsym((P)"format-to-string");
  T243 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T243,ENVNUL,PNUL,YPfalse);
  T242 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T242,ENVNUL,PNUL,YPfalse);
  T241 = YPsig(YPPlist(2,LITREF(lit_86),LITREF(lit_87)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLstrG),Ynil);
  YruntimeSruntimeYformat_to_string = YPmet(FUNCODEREF(YruntimeSruntimeYformat_to_string),LITREF(lit_95),T241,ENVNUL,PNUL,YPfalse);
  T244 = YruntimeSruntimeYformat_to_string;
  VARSET(YruntimeSruntimeYformat_to_string,T244);
  T245 = YPfalse;
  return T245;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScollections;
extern MODULE_INFO module_info_runtimeSruntime;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_gooScollectionsSbuffer;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooScollectionsStable;
extern MODULE_INFO module_info_gooScollectionsSzip;
extern MODULE_INFO module_info_gooScollectionsSstring;
extern MODULE_INFO module_info_gooSmagnitude;
extern MODULE_INFO module_info_gooScollectionsSassoc;
extern MODULE_INFO module_info_gooScollectionsScycle;
extern MODULE_INFO module_info_gooScollectionsSrange;
extern MODULE_INFO module_info_gooScollectionsSmap;
extern MODULE_INFO module_info_gooScollectionsSstep;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooSioSport},
  {&module_info_gooScollections},
  {&module_info_runtimeSruntime},
  {&module_info_gooSioSread},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"set", &module_info_runtimeSboot, "set"},
  {"abs", &module_info_gooSmath, "abs"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"get", &module_info_gooSioSport, "get"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"as", &module_info_gooStypes, "as"},
  {"out", &module_info_gooSioSport, "out"},
  {"tan", &module_info_gooSmath, "tan"},
  {"assq", &module_info_gooScollectionsSlist, "assq"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"loc-val-setter", &module_info_runtimeSruntime, "loc-val-setter"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"try", &module_info_runtimeSboot, "try"},
  {"buf", &module_info_gooScollectionsSbuffer, "buf"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"curry", &module_info_runtimeSruntime, "curry"},
  {"ins!", &module_info_gooScollectionsSsequence, "ins!"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"~=", &module_info_gooSmath, "~="},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"build-condition-for-handler-interactively", &module_info_runtimeSruntime, "build-condition-for-handler-interactively"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"build-condition-interactively", &module_info_runtimeSruntime, "build-condition-interactively"},
  {"loc-val", &module_info_runtimeSruntime, "loc-val"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"default-handler", &module_info_runtimeSruntime, "default-handler"},
  {"id-hash", &module_info_gooScollectionsStable, "id-hash"},
  {"head", &module_info_runtimeSboot, "head"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"when", &module_info_gooSmacros, "when"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"in", &module_info_gooSioSport, "in"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"<zip>", &module_info_gooScollectionsSzip, "<zip>"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"ascii-limit", &module_info_gooScollectionsSstring, "ascii-limit"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"export", &module_info_runtimeSboot, "export"},
  {"acos", &module_info_gooSmath, "acos"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"<assocs>", &module_info_gooScollectionsSassoc, "<assocs>"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"describe-condition", &module_info_runtimeSruntime, "describe-condition"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"while", &module_info_gooSmacros, "while"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"tab-hash", &module_info_gooScollectionsStable, "tab-hash"},
  {"even?", &module_info_gooSmath, "even?"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"push", &module_info_gooScollectionsSlist, "push"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"default-handler-description", &module_info_runtimeSruntime, "default-handler-description"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"list-handlers", &module_info_runtimeSruntime, "list-handlers"},
  {"identity", &module_info_runtimeSruntime, "identity"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"app-args", &module_info_runtimeSruntime, "app-args"},
  {"1-", &module_info_gooSmath, "1-"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"put", &module_info_gooSioSport, "put"},
  {"*", &module_info_gooSmath, "*"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"not", &module_info_runtimeSboot, "not"},
  {"sin", &module_info_gooSmath, "sin"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"choose-handler", &module_info_runtimeSruntime, "choose-handler"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"cycle", &module_info_gooScollectionsScycle, "cycle"},
  {"spread", &module_info_runtimeSruntime, "spread"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"handler-matches?", &module_info_runtimeSruntime, "handler-matches?"},
  {"rcurry", &module_info_runtimeSruntime, "rcurry"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"sig", &module_info_runtimeSruntime, "sig"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"<cycle>", &module_info_gooScollectionsScycle, "<cycle>"},
  {"assqn", &module_info_gooScollectionsSlist, "assqn"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"~", &module_info_gooSmath, "~"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {"$default-handler-info", &module_info_runtimeSruntime, "$default-handler-info"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"condition-arguments", &module_info_runtimeSruntime, "condition-arguments"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"~==", &module_info_gooSmath, "~=="},
  {"tab-test", &module_info_gooScollectionsStable, "tab-test"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"map", &module_info_gooSmacros, "map"},
  {"format-to-string", &module_info_runtimeSruntime, "format-to-string"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"fab-handler", &module_info_runtimeSruntime, "fab-handler"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"error", &module_info_runtimeSboot, "error"},
  {">>", &module_info_gooSmath, ">>"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"round/", &module_info_gooSmath, "round/"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"ins", &module_info_gooScollectionsSsequence, "ins"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"1+", &module_info_gooSmath, "1+"},
  {"read", &module_info_runtimeSruntime, "read"},
  {"match", &module_info_gooSmacros, "match"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"do-key-vals", &module_info_gooScollectionsSsequence, "do-key-vals"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"^", &module_info_gooSmath, "^"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<handler-info>", &module_info_runtimeSruntime, "<handler-info>"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"case-insensitive-string-equal", &module_info_gooScollectionsStable, "case-insensitive-string-equal"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"*gensym-counter*", &module_info_runtimeSruntime, "*gensym-counter*"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"$permanent-hash-state", &module_info_gooScollectionsStable, "$permanent-hash-state"},
  {"range-by", &module_info_gooScollectionsSrange, "range-by"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"len-setter", &module_info_gooScollectionsSbuffer, "len-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"handler-function", &module_info_runtimeSruntime, "handler-function"},
  {"str-to-num", &module_info_gooScollectionsSstring, "str-to-num"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"mod", &module_info_gooSmath, "mod"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"rem", &module_info_gooSmath, "rem"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {">", &module_info_gooSmagnitude, ">"},
  {"vals-to-str", &module_info_gooScollectionsSsequence, "vals-to-str"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"max", &module_info_gooSmagnitude, "max"},
  {"&", &module_info_gooSmath, "&"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"fab-map", &module_info_gooScollectionsSmap, "fab-map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"|", &module_info_gooSmath, "|"},
  {"df", &module_info_runtimeSboot, "df"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"range-check?", &module_info_gooScollectionsSsequence, "range-check?"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"log", &module_info_gooSmath, "log"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<str-tab>", &module_info_gooScollectionsStable, "<str-tab>"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"<", &module_info_gooSmagnitude, "<"},
  {"do3", &module_info_gooScollectionsScollection, "do3"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"condition-message", &module_info_runtimeSruntime, "condition-message"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"close", &module_info_gooSioSport, "close"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"<buf>", &module_info_gooScollectionsSbuffer, "<buf>"},
  {"case-insensitive-string-hash", &module_info_gooScollectionsStable, "case-insensitive-string-hash"},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"as-copy", &module_info_gooScollectionsScollection, "as-copy"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"<condition>", &module_info_runtimeSruntime, "<condition>"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"if", &module_info_runtimeSboot, "if"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"use", &module_info_runtimeSboot, "use"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"=", &module_info_gooSmath, "="},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"range-check", &module_info_gooScollectionsSsequence, "range-check"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"or", &module_info_gooSmacros, "or"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"until", &module_info_gooSmacros, "until"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"$e", &module_info_gooSmath, "$e"},
  {"assocs-test-setter", &module_info_gooScollectionsSassoc, "assocs-test-setter"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"format", &module_info_runtimeSruntime, "format"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"len/fill-setter", &module_info_gooScollectionsSbuffer, "len/fill-setter"},
  {"def", &module_info_runtimeSboot, "def"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"app-filename", &module_info_runtimeSruntime, "app-filename"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"+", &module_info_gooSmath, "+"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<<", &module_info_gooSmath, "<<"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"and", &module_info_gooSmacros, "and"},
  {"str", &module_info_gooScollectionsSstring, "str"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"tab-growth-threshold-setter", &module_info_gooScollectionsStable, "tab-growth-threshold-setter"},
  {"dup", &module_info_gooScollectionsScollection, "dup"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"range", &module_info_gooScollectionsSrange, "range"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"<restart>", &module_info_runtimeSruntime, "<restart>"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"invoke-handler-interactively", &module_info_runtimeSruntime, "invoke-handler-interactively"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"pop-last!", &module_info_gooScollectionsSbuffer, "pop-last!"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"tab-shrink-threshold-setter", &module_info_gooScollectionsStable, "tab-shrink-threshold-setter"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"from", &module_info_gooScollectionsSrange, "from"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"tab-gc-state", &module_info_gooScollectionsStable, "tab-gc-state"},
  {"finds", &module_info_gooScollectionsSsequence, "finds"},
  {"<simple-condition>", &module_info_runtimeSruntime, "<simple-condition>"},
  {"round", &module_info_gooSmath, "round"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"<simple-error>", &module_info_runtimeSruntime, "<simple-error>"},
  {"pow", &module_info_gooSmath, "pow"},
  {"assocs-test", &module_info_gooScollectionsSassoc, "assocs-test"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"open", &module_info_gooSioSport, "open"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"<list>", &module_info_gooScollectionsSlist, "<list>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"floor", &module_info_gooSmath, "floor"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"tab-shrink-threshold", &module_info_gooScollectionsStable, "tab-shrink-threshold"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"ascii-whitespaces", &module_info_gooScollectionsSstring, "ascii-whitespaces"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"tab-growth-threshold", &module_info_gooScollectionsStable, "tab-growth-threshold"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"zip", &module_info_gooScollectionsSzip, "zip"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"len", &module_info_gooStypes, "len"},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"unzip", &module_info_gooScollectionsSzip, "unzip"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"t<", &module_info_gooStypes, "t<"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"tab-growth-factor-setter", &module_info_gooScollectionsStable, "tab-growth-factor-setter"},
  {"tab-growth-factor", &module_info_gooScollectionsStable, "tab-growth-factor"},
  {"first-then", &module_info_gooScollectionsSstep, "first-then"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"range-error", &module_info_gooScollectionsScollection, "range-error"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"<handler>", &module_info_runtimeSruntime, "<handler>"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"<set>", &module_info_gooScollectionsStable, "<set>"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"new", &module_info_runtimeSboot, "new"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"<serious-condition>", &module_info_runtimeSruntime, "<serious-condition>"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"compose", &module_info_runtimeSruntime, "compose"},
  {"*print-base*", &module_info_gooScollectionsSstring, "*print-base*"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"do", &module_info_gooSmacros, "do"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"describe-handler", &module_info_runtimeSruntime, "describe-handler"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"t=", &module_info_gooStypes, "t="},
  {"-", &module_info_gooSmath, "-"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"<range>", &module_info_gooScollectionsSrange, "<range>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"push-last!", &module_info_gooScollectionsSbuffer, "push-last!"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"/", &module_info_gooSmath, "/"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"<step>", &module_info_gooScollectionsSstep, "<step>"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"<error>", &module_info_runtimeSruntime, "<error>"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"list", &module_info_gooScollectionsSlist, "list"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<map>", &module_info_gooScollectionsSmap, "<map>"},
  {"num-to-str-base", &module_info_gooScollectionsSstring, "num-to-str-base"},
  {"pop", &module_info_gooScollectionsSlist, "pop"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"case", &module_info_gooSmacros, "case"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"always", &module_info_runtimeSruntime, "always"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"recurring-write-type", &YgooSioSwriteYrecurring_write_type},
  {"write-boolean", &YgooSioSwriteYwrite_boolean},
  {"write-type", &YgooSioSwriteYwrite_type},
  {"---main-0---", NULL},
  {"write-fun-guts", &YgooSioSwriteYwrite_fun_guts},
  {"write-to-string", &YgooSioSwriteYwrite_to_string},
  {"*max-print-depth*", &YgooSioSwriteYTmax_print_depthT},
  {"write-number", &YgooSioSwriteYwrite_number},
  {"do-display", &YgooSioSwriteYdo_display},
  {"write-params", &YgooSioSwriteYwrite_params},
  {"recurring-write", &YgooSioSwriteYrecurring_write},
  {"display", &YgooSioSwriteYdisplay},
  {"write-map", &YgooSioSwriteYwrite_map},
  {"write", &YgooSioSwriteYwrite},
  {"write-string-literal", &YgooSioSwriteYwrite_string_literal},
  {"writeln", &YgooSioSwriteYwriteln},
  {"write-char-literal", &YgooSioSwriteYwrite_char_literal},
  {"write-flat", &YgooSioSwriteYwrite_flat},
  {"*max-print-length*", &YgooSioSwriteYTmax_print_lengthT},
  {"quotation?", &YgooSioSwriteYquotationQ},
  {"write-list", &YgooSioSwriteYwrite_list},
  {"character-name", &YgooSioSwriteYcharacter_name},
  {"as-binding-name", &YgooSioSwriteYas_binding_name},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"write-to-string", "write-to-string"},
  {"*max-print-depth*", "*max-print-depth*"},
  {"format-to-string", "format-to-string"},
  {"recurring-write", "recurring-write"},
  {"display", "display"},
  {"format", "format"},
  {"write", "write"},
  {"writeln", "writeln"},
  {"*max-print-length*", "*max-print-length*"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSioSwrite;
MODULE_INFO module_info_gooSioSwrite = {
  "goo/io/write",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_runtimeSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooSioSport (void);
extern void load_module_gooScollections (void);
extern void load_module_runtimeSruntime (void);
extern void load_module_gooSioSread (void);

/* EXPRESSION: */

extern void load_module_gooSioSwrite (void);

void load_module_gooSioSwrite (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooSioSport();
  load_module_gooScollections();
  load_module_runtimeSruntime();
  load_module_gooSioSread();

  (P)YgooSioSwriteY___main_0___();

}

/* END OF GENERATED CODE. */
