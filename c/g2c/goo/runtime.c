/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: runtime/runtime */

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
DEF(YruntimeSruntimeYloc_val_setter,"runtime/runtime","loc-val-setter");
EXT(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
DEF(YruntimeSruntimeYhandler_function_setter,"runtime/runtime","handler-function-setter");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
DEF(YruntimeSruntimeYcondition_arguments_setter,"runtime/runtime","condition-arguments-setter");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(YruntimeSruntimeYcurry,"runtime/runtime","curry");
EXT(YgooScollectionsSsequenceYinsX,"goo/collections/sequence","ins!");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YruntimeSruntimeYincongruent_method_error_method,"runtime/runtime","incongruent-method-error-method");
DEF(YruntimeSruntimeYbuild_condition_for_handler_interactively,"runtime/runtime","build-condition-for-handler-interactively");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
DEF(YruntimeSruntimeYbuild_condition_interactively,"runtime/runtime","build-condition-interactively");
DEF(YruntimeSruntimeYloc_val,"runtime/runtime","loc-val");
DEF(YruntimeSruntimeYdefault_handler,"runtime/runtime","default-handler");
EXT(YgooScollectionsStableYid_hash,"goo/collections/table","id-hash");
EXT(Yhead,"runtime/boot","head");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
DEF(YruntimeSruntimeYdescribe_condition,"runtime/runtime","describe-condition");
DEF(YruntimeSruntimeYhandler_activeQ,"runtime/runtime","handler-active?");
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
DEF(YruntimeSruntimeYdefault_handler_description,"runtime/runtime","default-handler-description");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYatan,"goo/math","atan");
DEF(YruntimeSruntimeYlist_handlers,"runtime/runtime","list-handlers");
DEF(YruntimeSruntimeYidentity,"runtime/runtime","identity");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
DEF(YruntimeSruntimeYapp_args,"runtime/runtime","app-args");
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
DEF(YruntimeSruntimeYchoose_handler,"runtime/runtime","choose-handler");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
DEF(YruntimeSruntimeYspread,"runtime/runtime","spread");
DEF(YruntimeSruntimeYhandler_matchesQ,"runtime/runtime","handler-matches?");
DEF(YruntimeSruntimeYrcurry,"runtime/runtime","rcurry");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
DEF(YruntimeSruntimeYsignal_handler_list,"runtime/runtime","signal-handler-list");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
DEF(YruntimeSruntimeYincongruent_method_error_generic_setter,"runtime/runtime","incongruent-method-error-generic-setter");
EXT(YgooScollectionsSlistYassqn,"goo/collections/list","assqn");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ylst,"runtime/boot","lst");
DEF(YruntimeSruntimeYDdefault_handler_info,"runtime/runtime","$default-handler-info");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
DEF(YruntimeSruntimeYcondition_arguments,"runtime/runtime","condition-arguments");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(YOlst,"runtime/boot","@lst");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScollectionsStableYtab_test,"goo/collections/table","tab-test");
DEF(YruntimeSruntimeYdo_handlers_of_type,"runtime/runtime","do-handlers-of-type");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YruntimeSruntimeYformat_to_string,"runtime/runtime","format-to-string");
DEF(YruntimeSruntimeYhandler_test,"runtime/runtime","handler-test");
DEF(YruntimeSruntimeYfab_handler,"runtime/runtime","fab-handler");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(Yerror,"runtime/boot","error");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YruntimeSruntimeYincongruent_method_error_method_setter,"runtime/runtime","incongruent-method-error-method-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooScollectionsSsequenceYins,"goo/collections/sequence","ins");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YruntimeSruntimeYread,"runtime/runtime","read");
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
DEF(YruntimeSruntimeYLhandler_infoG,"runtime/runtime","<handler-info>");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooScollectionsStableYcase_insensitive_string_equal,"goo/collections/table","case-insensitive-string-equal");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YruntimeSruntimeYTgensym_counterT,"runtime/runtime","*gensym-counter*");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(YgooScollectionsStableYDpermanent_hash_state,"goo/collections/table","$permanent-hash-state");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
DEF(YruntimeSruntimeYhandler_info_message_setter,"runtime/runtime","handler-info-message-setter");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
DEF(YruntimeSruntimeYhandler_info_setter,"runtime/runtime","handler-info-setter");
EXT(Ynil,"runtime/boot","nil");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(YruntimeSruntimeYhandler_function,"runtime/runtime","handler-function");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YgooScollectionsSsequenceYvals_to_str,"goo/collections/sequence","vals-to-str");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYall2Q,"goo/types","all2?");
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
DEF(YruntimeSruntimeYLincongruent_method_errorG,"runtime/runtime","<incongruent-method-error>");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
DEF(YruntimeSruntimeYsymbols,"runtime/runtime","symbols");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
DEF(YruntimeSruntimeYcondition_message,"runtime/runtime","condition-message");
EXT(Yvec,"runtime/boot","vec");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YgooScollectionsStableYcase_insensitive_string_hash,"goo/collections/table","case-insensitive-string-hash");
EXT(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
DEF(YruntimeSruntimeYLconditionG,"runtime/runtime","<condition>");
EXT(Yfun_names,"runtime/boot","fun-names");
DEF(YruntimeSruntimeYhandler_condition_type,"runtime/runtime","handler-condition-type");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YruntimeSruntimeYcondition_message_setter,"runtime/runtime","condition-message-setter");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYE,"goo/math","=");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YgooScollectionsSsequenceYrange_check,"goo/collections/sequence","range-check");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YruntimeSruntimeYformat,"runtime/runtime","format");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
DEF(YruntimeSruntimeYhandler_info,"runtime/runtime","handler-info");
EXT(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
DEF(YruntimeSruntimeYapp_filename,"runtime/runtime","app-filename");
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
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScollectionsStableYtab_growth_threshold_setter,"goo/collections/table","tab-growth-threshold-setter");
EXT(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
EXT(Ytail,"runtime/boot","tail");
DEF(YruntimeSruntimeYTcurrent_handlersT,"runtime/runtime","*current-handlers*");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
DEF(YruntimeSruntimeYboot_symbols,"runtime/runtime","boot-symbols");
EXT(YgooSmathYas_log,"goo/math","as-log");
DEF(YruntimeSruntimeYLrestartG,"runtime/runtime","<restart>");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
DEF(YruntimeSruntimeYinvoke_handler_interactively,"runtime/runtime","invoke-handler-interactively");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YgooScollectionsStableYtab_shrink_threshold_setter,"goo/collections/table","tab-shrink-threshold-setter");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooScollectionsStableYtab_gc_state,"goo/collections/table","tab-gc-state");
EXT(YgooScollectionsSsequenceYfinds,"goo/collections/sequence","finds");
DEF(YruntimeSruntimeYLsimple_conditionG,"runtime/runtime","<simple-condition>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPPmacro,"runtime/boot","%%macro");
DEF(YruntimeSruntimeYLsimple_errorG,"runtime/runtime","<simple-error>");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YruntimeSruntimeYsig,"runtime/runtime","sig");
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
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(YgooScollectionsStableYtab_growth_threshold,"goo/collections/table","tab-growth-threshold");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YgooScollectionsStableYtab_growth_factor_setter,"goo/collections/table","tab-growth-factor-setter");
EXT(YgooScollectionsStableYtab_growth_factor,"goo/collections/table","tab-growth-factor");
DEF(YruntimeSruntimeYhandler_test_setter,"runtime/runtime","handler-test-setter");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YruntimeSruntimeYLhandlerG,"runtime/runtime","<handler>");
DEF(YruntimeSruntimeYbooted_fab_sym,"runtime/runtime","booted-fab-sym");
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
DEF(YruntimeSruntimeYLserious_conditionG,"runtime/runtime","<serious-condition>");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(YPsnul,"runtime/boot","%snul");
DEF(YruntimeSruntimeYcompose,"runtime/runtime","compose");
DEF(YruntimeSruntimeYhandler_condition_type_setter,"runtime/runtime","handler-condition-type-setter");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
DEF(YruntimeSruntimeYhandler_info_arguments_setter,"runtime/runtime","handler-info-arguments-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YruntimeSruntimeYdescribe_handler,"runtime/runtime","describe-handler");
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
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YruntimeSruntimeYLerrorG,"runtime/runtime","<error>");
EXT(YgooScollectionsSlistYlist,"goo/collections/list","list");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YruntimeSruntimeYincongruent_method_error_generic,"runtime/runtime","incongruent-method-error-generic");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YruntimeSruntimeYalways,"runtime/runtime","always");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_19);
DEFLIT(lit_74);
DEFLIT(lit_80);
DEFLIT(lit_18);
DEFLIT(lit_105);
DEFLIT(lit_41);
DEFLIT(lit_14);
DEFLIT(lit_62);
DEFLIT(lit_116);
DEFLIT(lit_133);
DEFLIT(lit_60);
DEFLIT(lit_53);
DEFLIT(lit_2);
DEFLIT(lit_36);
DEFLIT(lit_71);
DEFLIT(lit_23);
DEFLIT(lit_139);
DEFLIT(lit_115);
DEFLIT(lit_119);
DEFLIT(lit_20);
DEFLIT(lit_11);
DEFLIT(lit_89);
DEFLIT(lit_94);
DEFLIT(lit_126);
DEFLIT(lit_47);
DEFLIT(lit_97);
DEFLIT(lit_102);
DEFLIT(lit_120);
DEFLIT(lit_128);
DEFLIT(lit_61);
DEFLIT(lit_35);
DEFLIT(lit_7);
DEFLIT(lit_124);
DEFLIT(lit_78);
DEFLIT(lit_127);
DEFLIT(lit_117);
DEFLIT(lit_130);
DEFLIT(lit_111);
DEFLIT(lit_106);
DEFLIT(lit_59);
DEFLIT(lit_81);
DEFLIT(lit_136);
DEFLIT(lit_84);
DEFLIT(lit_110);
DEFLIT(lit_83);
DEFLIT(lit_64);
DEFLIT(lit_30);
DEFLIT(lit_118);
DEFLIT(lit_86);
DEFLIT(lit_31);
DEFLIT(lit_5);
DEFLIT(lit_73);
DEFLIT(lit_75);
DEFLIT(lit_50);
DEFLIT(lit_42);
DEFLIT(lit_112);
DEFLIT(lit_46);
DEFLIT(lit_131);
DEFLIT(lit_43);
DEFLIT(lit_76);
DEFLIT(lit_51);
DEFLIT(lit_40);
DEFLIT(lit_85);
DEFLIT(lit_10);
DEFLIT(lit_3);
DEFLIT(lit_99);
DEFLIT(lit_16);
DEFLIT(lit_135);
DEFLIT(lit_140);
DEFLIT(lit_122);
DEFLIT(lit_138);
DEFLIT(lit_1);
DEFLIT(lit_88);
DEFLIT(lit_34);
DEFLIT(lit_0);
DEFLIT(lit_125);
DEFLIT(lit_87);
DEFLIT(lit_4);
DEFLIT(lit_95);
DEFLIT(lit_69);
DEFLIT(lit_77);
DEFLIT(lit_57);
DEFLIT(lit_121);
DEFLIT(lit_123);
DEFLIT(lit_91);
DEFLIT(lit_8);
DEFLIT(lit_44);
DEFLIT(lit_66);
DEFLIT(lit_13);
DEFLIT(lit_25);
DEFLIT(lit_104);
DEFLIT(lit_22);
DEFLIT(lit_15);
DEFLIT(lit_68);
DEFLIT(lit_93);
DEFLIT(lit_134);
DEFLIT(lit_70);
DEFLIT(lit_58);
DEFLIT(lit_39);
DEFLIT(lit_72);
DEFLIT(lit_79);
DEFLIT(lit_28);
DEFLIT(lit_17);
DEFLIT(lit_27);
DEFLIT(lit_21);
DEFLIT(lit_38);
DEFLIT(lit_109);
DEFLIT(lit_63);
DEFLIT(lit_29);
DEFLIT(lit_137);
DEFLIT(lit_132);
DEFLIT(lit_90);
DEFLIT(lit_108);
DEFLIT(lit_96);
DEFLIT(lit_103);
DEFLIT(lit_33);
DEFLIT(lit_82);
DEFLIT(lit_26);
DEFLIT(lit_37);
DEFLIT(lit_107);
DEFLIT(lit_100);
DEFLIT(lit_114);
DEFLIT(lit_52);
DEFLIT(lit_98);
DEFLIT(lit_65);
DEFLIT(lit_49);
DEFLIT(lit_24);
DEFLIT(lit_6);
DEFLIT(lit_129);
DEFLIT(lit_56);
DEFLIT(lit_54);
DEFLIT(lit_92);
DEFLIT(lit_48);
DEFLIT(lit_12);
DEFLIT(lit_32);
DEFLIT(lit_55);
DEFLIT(lit_45);
DEFLIT(lit_67);
DEFLIT(lit_101);
DEFLIT(lit_113);
DEFLIT(lit_9);

/* FUNCTIONS: */

FUNFOR(YgooSmacrosYmatch_empty_list);
FUNFOR(YgooSmacrosYmatch_unquote);
FUNFOR(YgooSmacrosYmatch_atom);
FUNFOR(YgooSmacrosYmatch_sublist);
LOCFOR(fun_4);
LOCFOR(fun_cat_sym_5);
LOCFOR(fun_gensym_6);
LOCFOR(fun_fab_setter_name_7);
LOCFOR(fun_var_name_8);
LOCFOR(fun_var_name_9);
LOCFOR(fun_var_type_10);
LOCFOR(fun_var_type_11);
LOCFOR(fun_identity_12);
LOCFOR(fun_13);
LOCFOR(fun_compose_14);
LOCFOR(fun_15);
LOCFOR(fun_rcurry_16);
LOCFOR(fun_17);
LOCFOR(fun_curry_18);
LOCFOR(fun_19);
LOCFOR(fun_always_20);
LOCFOR(fun_21);
LOCFOR(fun_spread_22);
LOCFOR(fun_default_handler_23);
LOCFOR(fun_describe_condition_24);
LOCFOR(fun_default_handler_description_25);
LOCFOR(fun_build_condition_interactively_26);
LOCFOR(fun_condition_message_27);
LOCFOR(fun_condition_message_setter_28);
LOCFOR(fun_29);
LOCFOR(fun_condition_arguments_30);
LOCFOR(fun_condition_arguments_setter_31);
LOCFOR(fun_32);
LOCFOR(fun_describe_condition_33);
LOCFOR(fun_build_condition_interactively_34);
LOCFOR(fun_default_handler_35);
LOCFOR(fun_default_handler_description_36);
LOCFOR(fun_incongruent_method_error_generic_37);
LOCFOR(fun_incongruent_method_error_generic_setter_38);
LOCFOR(fun_incongruent_method_error_method_39);
LOCFOR(fun_incongruent_method_error_method_setter_40);
LOCFOR(fun_describe_condition_41);
LOCFOR(fun_default_handler_description_42);
LOCFOR(fun_describe_handler_43);
LOCFOR(fun_build_condition_for_handler_interactively_44);
LOCFOR(fun_handler_info_message_45);
LOCFOR(fun_handler_info_message_setter_46);
LOCFOR(fun_handler_info_arguments_47);
LOCFOR(fun_handler_info_arguments_setter_48);
LOCFOR(fun_49);
LOCFOR(fun_describe_handler_50);
LOCFOR(fun_handler_condition_type_51);
LOCFOR(fun_handler_condition_type_setter_52);
LOCFOR(fun_handler_info_53);
LOCFOR(fun_handler_info_setter_54);
LOCFOR(fun_handler_test_55);
LOCFOR(fun_handler_test_setter_56);
LOCFOR(fun_handler_function_57);
LOCFOR(fun_handler_function_setter_58);
FUNFOR(YruntimeSruntimeYfab_handler);
FUNFOR(YruntimeSruntimeYhandler_activeQ);
FUNFOR(YruntimeSruntimeYhandler_matchesQ);
LOCFOR(fun_62);
LOCFOR(fun_Uhandler_functionU_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_66);
FUNFOR(YPwith_monitor);
LOCFOR(fun_68);
FUNFOR(YruntimeSruntimeYsignal_handler_list);
LOCFOR(fun_sig_70);
LOCFOR(fun_sig_71);
LOCFOR(fun_error_72);
LOCFOR(fun_error_73);
FUNFOR(Ywrong_number_arguments_error);
FUNFOR(Yunknown_function_error);
FUNFOR(Ytype_error);
FUNFOR(Yincongruent_method_error);
LOCFOR(fun_search_78);
FUNFOR(YruntimeSruntimeYdo_handlers_of_type);
LOCFOR(fun_80);
FUNFOR(YruntimeSruntimeYlist_handlers);
LOCFOR(fun_82);
LOCFOR(fun_search_83);
FUNFOR(YruntimeSruntimeYinvoke_handler_interactively);
FUNFOR(YruntimeSruntimeYchoose_handler);
FUNFOR(YruntimeSruntimeYloc_val);
FUNFOR(YruntimeSruntimeYloc_val_setter);
FUNFOR(YruntimeSruntimeYapp_filename);
FUNFOR(YruntimeSruntimeYapp_args);
extern P YruntimeSruntimeYbooted_fab_sym_using (P,P);
FUNFOR(YruntimeSruntimeYbooted_fab_sym);
LOCFOR(fun_boot_92);
FUNFOR(YruntimeSruntimeYboot_symbols);
extern P YruntimeSruntimeY___main_0___ ();
extern P YruntimeSruntimeY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSmacrosYmatch_empty_list) {
  P x_,fail_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(fail_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,Ynil);
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T2 = CALL2(1,fail_,LITREF(lit_3),x_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYmatch_unquote) {
  P x_,fail_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(fail_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,Ynil);
  if (T1 != YPfalse) {
    T2 = CALL1(1,fail_,LITREF(lit_5));
    T0 = T2;
  } else {
    T3 = CALL1(1,VARREF(Yhead),x_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYmatch_atom) {
  P x_,pat_,fail_;
  P expF1213;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(pat_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,Ynil);
  if (T1 != YPfalse) {
    T2 = CALL2(1,fail_,LITREF(lit_8),pat_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),x_);
    expF1213 = T4;
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),expF1213,pat_);
    if (T6 != YPfalse) {
      T7 = CALL1(1,VARREF(Ytail),x_);
      T5 = T7;
    } else {
      T8 = CALL3(1,fail_,LITREF(lit_9),expF1213,pat_);
      T5 = T8;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYmatch_sublist) {
  P x_,fail_;
  P xF1214;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(fail_, 1);
loop:
  T1 = CALL1(1,VARREF(Yhead),x_);
  xF1214 = T1;
  T3 = CALL2(1,VARREF(YisaQ),xF1214,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T2 = xF1214;
  } else {
    T4 = CALL2(1,fail_,LITREF(lit_11),xF1214);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  P r_,e_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(r_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYto_str),e_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),r_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_cat_sym_5) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
  T2 = fun_4;
  T1 = CALL3(1,VARREF(YgooScollectionsScollectionYfold),T2,LITREF(lit_15),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_gensym_6) {
  P T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL2(1,VARREF(YgooSmathYA),VARREF(YruntimeSruntimeYTgensym_counterT),YPint((P)1));
  T1 = VARSET(YruntimeSruntimeYTgensym_counterT,T2);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_17),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_setter_name_7) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYcat_sym),x_,LITREF(lit_19));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_var_name_8) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_var_name_9) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_var_type_10) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_22));
}

FUNCODEDEF(fun_var_type_11) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_identity_12) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_13) {
  P args_;
  P T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(1),YPfalse,args_);
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compose_14) {
  P fx_,fy_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(fx_, 0);
  ARG(fy_, 1);
loop:
  T0 = FUNFAB(fun_13,2,fx_,fy_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_15) {
  P args_;
  P T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),Ynil,args_,FREEREF(1));
  T0 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rcurry_16) {
  P f_,curried_;
  P savedcurriedF1215;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  NARGS(curried_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLvecG),curried_);
  savedcurriedF1215 = T1;
  T2 = FUNFAB(fun_15,2,f_,savedcurriedF1215);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_17) {
  P args_;
  P T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),Ynil,FREEREF(1),args_);
  T0 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_curry_18) {
  P f_,curried_;
  P savedcurriedF1216;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  NARGS(curried_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLvecG),curried_);
  savedcurriedF1216 = T1;
  T2 = FUNFAB(fun_17,2,f_,savedcurriedF1216);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_19) {
  P args_;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
UNLINK_STACK();
  QRET(FREEREF(0));
}

FUNCODEDEF(fun_always_20) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = FUNFAB(fun_19,1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_21) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_spread_22) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = FUNFAB(fun_21,1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_23) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_describe_condition_24) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL2(1,VARREF(YruntimeSruntimeYformat_to_string),LITREF(lit_39),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_description_25) {
  P cond_type_;
  P T0;
  P a1;
LINK_STACK();
  ARG(cond_type_, 0);
loop:
  T0 = CALL2(1,VARREF(YruntimeSruntimeYformat_to_string),LITREF(lit_42),cond_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_interactively_26) {
  P cond_type_,in_,out_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(cond_type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T0 = CALL1(1,VARREF(Ynew),cond_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_condition_message_27) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YruntimeSruntimeYcondition_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_condition_message_setter_28) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YruntimeSruntimeYcondition_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_15));
}

FUNCODEDEF(fun_condition_arguments_30) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YruntimeSruntimeYcondition_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_condition_arguments_setter_31) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YruntimeSruntimeYcondition_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_describe_condition_33) {
  P c_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YruntimeSruntimeYcondition_message),c_);
  T2 = CALL1(1,VARREF(YruntimeSruntimeYcondition_arguments),c_);
  T0 = CALLN(1,VARREF(YgooSmacrosYnapp),4,VARREF(YruntimeSruntimeYformat_to_string),YPfalse,T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_interactively_34) {
  P cond_type_,in_,out_;
  P condF1218;
  P next_metsF1217;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(cond_type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T2 = (P)YPnext_methods();
  next_metsF1217 = T2;
  if (next_metsF1217 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),next_metsF1217);
    T6 = CALL1(1,VARREF(Ytail),next_metsF1217);
    T4 = CALLN(1,VARREF(YgooSmacrosYnapp),6,T5,T6,cond_type_,in_,out_,Ynil);
    T3 = T4;
  } else {
    T7 = CALL1(1,VARREF(Yerror),LITREF(lit_53));
    T3 = T7;
  }
  T1 = T3;
  condF1218 = T1;
  CALL2(1,VARREF(YruntimeSruntimeYformat),out_,LITREF(lit_54));
  T8 = CALL1(1,VARREF(YruntimeSruntimeYread),in_);
  CALL2(1,VARREF(YruntimeSruntimeYcondition_message_setter),T8,condF1218);
  CALL2(1,VARREF(YruntimeSruntimeYformat),out_,LITREF(lit_55));
  T9 = CALL1(1,VARREF(YruntimeSruntimeYread),in_);
  CALL2(1,VARREF(YruntimeSruntimeYcondition_arguments_setter),T9,condF1218);
  T0 = condF1218;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_35) {
  P c_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(YruntimeSruntimeYdescribe_condition),c_);
  CALL3(1,VARREF(YruntimeSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_57),T0);
  T1 = (P)YPinvoke_debugger(c_);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_default_handler_description_36) {
  P cond_type_;
  P T0;
  P a1;
LINK_STACK();
  ARG(cond_type_, 0);
loop:
  T0 = CALL2(1,VARREF(YruntimeSruntimeYformat_to_string),LITREF(lit_61),cond_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_generic_37) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YruntimeSruntimeYincongruent_method_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_generic_setter_38) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YruntimeSruntimeYincongruent_method_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_method_39) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YruntimeSruntimeYincongruent_method_error_method));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_method_setter_40) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YruntimeSruntimeYincongruent_method_error_method));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_41) {
  P c_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YruntimeSruntimeYincongruent_method_error_method),c_);
  T2 = CALL1(1,VARREF(YruntimeSruntimeYincongruent_method_error_generic),c_);
  T0 = CALL3(1,VARREF(YruntimeSruntimeYformat_to_string),LITREF(lit_67),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_description_42) {
  P cond_type_;
  P a1;
LINK_STACK();
  ARG(cond_type_, 0);
loop:
UNLINK_STACK();
  RET(LITREF(lit_69));
}

FUNCODEDEF(fun_describe_handler_43) {
  P info_,condition_type_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
loop:
  T0 = CALL1(1,VARREF(YruntimeSruntimeYdefault_handler_description),condition_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_for_handler_interactively_44) {
  P info_,condition_type_,in_,out_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
  ARG(in_, 2);
  ARG(out_, 3);
loop:
  T0 = CALL3(1,VARREF(YruntimeSruntimeYbuild_condition_interactively),condition_type_,in_,out_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_handler_info_message_45) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yhandler_info_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_message_setter_46) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yhandler_info_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_arguments_47) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yhandler_info_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_arguments_setter_48) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yhandler_info_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_describe_handler_50) {
  P info_,condition_type_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
loop:
  T1 = CALL1(1,VARREF(Yhandler_info_message),info_);
  T2 = CALL1(1,VARREF(Yhandler_info_arguments),info_);
  T0 = CALLN(1,VARREF(YgooSmacrosYnapp),4,VARREF(YruntimeSruntimeYformat_to_string),YPfalse,T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_handler_condition_type_51) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YruntimeSruntimeYhandler_condition_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_condition_type_setter_52) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YruntimeSruntimeYhandler_condition_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_53) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YruntimeSruntimeYhandler_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_setter_54) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YruntimeSruntimeYhandler_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_test_55) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YruntimeSruntimeYhandler_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_test_setter_56) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YruntimeSruntimeYhandler_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_function_57) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YruntimeSruntimeYhandler_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_function_setter_58) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YruntimeSruntimeYhandler_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeSruntimeYfab_handler) {
  P type_,info_,test_,f_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_, 2);
  ARG(f_, 3);
loop:
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YruntimeSruntimeYLhandlerG),VARREF(YruntimeSruntimeYhandler_condition_type),type_,VARREF(YruntimeSruntimeYhandler_info),info_,VARREF(YruntimeSruntimeYhandler_test),test_,VARREF(YruntimeSruntimeYhandler_function),f_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YruntimeSruntimeYhandler_activeQ) {
  P handler_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(handler_, 0);
loop:
  T1 = CALL1(1,VARREF(YruntimeSruntimeYhandler_test),handler_);
  T0 = CALL0(1,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YruntimeSruntimeYhandler_matchesQ) {
  P handler_,condition_;
  P tmpF1219;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(handler_, 0);
  ARG(condition_, 1);
loop:
  T2 = CALL1(1,VARREF(YruntimeSruntimeYhandler_condition_type),handler_);
  T1 = CALL2(1,VARREF(YisaQ),condition_,T2);
  tmpF1219 = T1;
  if (tmpF1219 != YPfalse) {
    T4 = CALL1(1,VARREF(YruntimeSruntimeYhandler_activeQ),handler_);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_62) {
  P UresumeU_;
  P T0;
  P a1;
LINK_STACK();
  ARG(UresumeU_, 0);
loop:
  CALL2(1,FREEREF(0),FREEREF(1),UresumeU_);
  T0 = CALL0(1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Uhandler_functionU_63) {
  P condition_,Unext_handlerU_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(condition_, 0);
  ARG(Unext_handlerU_, 1);
loop:
  T1 = FUNFAB(fun_62,3,FREEREF(0),condition_,Unext_handlerU_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL0(1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(YruntimeSruntimeYTcurrent_handlersT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_66) {
  P Uunwind_exceptionU_;
  P Uhandler_functionUF1221;
  P Uoriginal_handlersUF1220;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(Uunwind_exceptionU_, 0);
loop:
  Uoriginal_handlersUF1220 = VARREF(YruntimeSruntimeYTcurrent_handlersT);
  T2 = FUNSHELL(0,fun_Uhandler_functionU_63,1);
  Uhandler_functionUF1221 = T2;
  FUNINIT(Uhandler_functionUF1221, 1,FREEREF(0));
  T4 = CALLN(1,VARREF(YruntimeSruntimeYfab_handler),4,FREEREF(1),FREEREF(2),FREEREF(3),Uhandler_functionUF1221);
  T3 = CALL2(1,VARREF(YgooScollectionsSlistYpush),VARREF(YruntimeSruntimeYTcurrent_handlersT),T4);
  VARSET(YruntimeSruntimeYTcurrent_handlersT,T3);
  T6 = FUNFAB(fun_64,1,FREEREF(4));
  T7 = FUNFAB(fun_65,1,Uoriginal_handlersUF1220);
  T5 = with_cleanup(T6,T7);
  T1 = T5;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPwith_monitor) {
  P type_,info_,test_fun_,user_handler_,main_fun_;
  P T1,T0;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_fun_, 2);
  ARG(user_handler_, 3);
  ARG(main_fun_, 4);
loop:
  T1 = FUNFAB(fun_66,5,user_handler_,type_,info_,test_fun_,main_fun_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_68) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YruntimeSruntimeYsignal_handler_list),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeSruntimeYsignal_handler_list) {
  P condition_,handlers_;
  P remainingF1223;
  P handlerF1222;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(condition_, 0);
  ARG(handlers_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlers_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YruntimeSruntimeYdefault_handler),condition_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),handlers_);
    handlerF1222 = T4;
    T6 = CALL1(1,VARREF(Ytail),handlers_);
    remainingF1223 = T6;
    T8 = CALL2(1,VARREF(YruntimeSruntimeYhandler_matchesQ),handlerF1222,condition_);
    if (T8 != YPfalse) {
      T10 = CALL1(1,VARREF(YruntimeSruntimeYhandler_function),handlerF1222);
      T11 = FUNFAB(fun_68,2,condition_,remainingF1223);
      T9 = CALL2(1,T10,condition_,T11);
      T7 = T9;
    } else {
      T12 = CALL2(1,VARREF(YruntimeSruntimeYsignal_handler_list),condition_,remainingF1223);
      T7 = T12;
    }
    T5 = T7;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sig_70) {
  P condition_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(condition_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL2(1,VARREF(YruntimeSruntimeYsignal_handler_list),condition_,VARREF(YruntimeSruntimeYTcurrent_handlersT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sig_71) {
  P c_,args_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALLN(1,VARREF(Ynew),5,VARREF(YruntimeSruntimeYLsimple_conditionG),VARREF(YruntimeSruntimeYcondition_message),c_,VARREF(YruntimeSruntimeYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YruntimeSruntimeYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_error_72) {
  P c_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,VARREF(YruntimeSruntimeYsig),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_error_73) {
  P c_,args_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALLN(1,VARREF(Ynew),5,VARREF(YruntimeSruntimeYLsimple_errorG),VARREF(YruntimeSruntimeYcondition_message),c_,VARREF(YruntimeSruntimeYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(Yerror),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ywrong_number_arguments_error) {
  P fun_,n_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(fun_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,VARREF(Yfun_arity),fun_);
  T0 = CALLN(1,VARREF(Yerror),4,LITREF(lit_111),fun_,n_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yunknown_function_error) {
  P fun_;
  P T0;
  P a1;
LINK_STACK();
  ARG(fun_, 0);
loop:
  T0 = CALL2(1,VARREF(Yerror),LITREF(lit_113),fun_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ytype_error) {
  P arg_,type_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(arg_, 0);
  ARG(type_, 1);
loop:
  T0 = CALL3(1,VARREF(Yerror),LITREF(lit_116),arg_,type_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yincongruent_method_error) {
  P gen_,met_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
loop:
  T1 = CALLN(1,VARREF(Ynew),5,VARREF(YruntimeSruntimeYLincongruent_method_errorG),VARREF(YruntimeSruntimeYincongruent_method_error_generic),gen_,VARREF(YruntimeSruntimeYincongruent_method_error_method),met_);
  T0 = CALL1(1,VARREF(Yerror),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_search_78) {
  P handlers_;
  P tmpF1226;
  P remainingF1225;
  P handlerF1224;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(handlers_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlers_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T3 = CALL1(1,VARREF(Yhead),handlers_);
    handlerF1224 = T3;
    T5 = CALL1(1,VARREF(Ytail),handlers_);
    remainingF1225 = T5;
    T8 = CALL1(1,VARREF(YruntimeSruntimeYhandler_condition_type),handlerF1224);
    T7 = CALL2(1,VARREF(YsubtypeQ),T8,FREEREF(0));
    tmpF1226 = T7;
    if (tmpF1226 != YPfalse) {
      T10 = CALL1(1,VARREF(YruntimeSruntimeYhandler_activeQ),handlerF1224);
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T6 = T9;
    if (T6 != YPfalse) {
      T11 = CALL1(1,FREEREF(1),handlerF1224);
    } else {
    }
    a1 = remainingF1225;
    handlers_ = a1;
    goto loop;
    T4 = T12;
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeSruntimeYdo_handlers_of_type) {
  P type_,f_;
  P searchF1227;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(f_, 1);
loop:
  T1 = FUNSHELL(1,fun_search_78,3);
  searchF1227 = T1;
  FUNINIT(searchF1227, 3,type_,f_,searchF1227);
  T2 = CALL1(0,searchF1227,VARREF(YruntimeSruntimeYTcurrent_handlersT));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P handler_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(handler_, 0);
loop:
  T0 = BOXVAL(FREEREF(1));
  T2 = CALL1(1,VARREF(YruntimeSruntimeYhandler_info),handler_);
  T3 = CALL1(1,VARREF(YruntimeSruntimeYhandler_condition_type),handler_);
  T1 = CALL2(1,VARREF(YruntimeSruntimeYdescribe_handler),T2,T3);
  CALLN(1,VARREF(YruntimeSruntimeYformat),4,FREEREF(0),LITREF(lit_123),T0,T1);
  CALL2(1,VARREF(YgooScollectionsSbufferYpush_lastX),FREEREF(2),handler_);
  T6 = BOXVAL(FREEREF(1));
  T5 = CALL2(1,VARREF(YgooSmathYA),T6,YPint((P)1));
  T4 = BOXVAL(FREEREF(1)) = T5;
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(YruntimeSruntimeYlist_handlers) {
  P type_,out_;
  P applicableF1229;
  P iF1228;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(out_, 1);
loop:
  iF1228 = YPint((P)1);
  iF1228 = BOXFAB(iF1228);
  T3 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YgooScollectionsSbufferYLbufG),YPint((P)0));
  applicableF1229 = T3;
  T4 = FUNFAB(fun_80,3,out_,iF1228,applicableF1229);
  CALL2(1,VARREF(YruntimeSruntimeYdo_handlers_of_type),type_,T4);
  T2 = applicableF1229;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_82) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YruntimeSruntimeYsignal_handler_list),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_search_83) {
  P handlers_;
  P remainingF1231;
  P currentF1230;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(handlers_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlers_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yerror),LITREF(lit_126),FREEREF(0));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),handlers_);
    currentF1230 = T4;
    T6 = CALL1(1,VARREF(Ytail),handlers_);
    remainingF1231 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),currentF1230);
    if (T8 != YPfalse) {
      T10 = CALL1(1,VARREF(YruntimeSruntimeYhandler_function),FREEREF(0));
      T11 = FUNFAB(fun_82,2,FREEREF(1),remainingF1231);
      T9 = CALL2(1,T10,FREEREF(1),T11);
      T7 = T9;
    } else {
      a1 = remainingF1231;
      handlers_ = a1;
      goto loop;
      T7 = T12;
    }
    T5 = T7;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeSruntimeYinvoke_handler_interactively) {
  P handler_,in_,out_;
  P searchF1233;
  P conditionF1232;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(handler_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T2 = CALL1(1,VARREF(YruntimeSruntimeYhandler_info),handler_);
  T3 = CALL1(1,VARREF(YruntimeSruntimeYhandler_condition_type),handler_);
  T1 = CALLN(1,VARREF(YruntimeSruntimeYbuild_condition_for_handler_interactively),4,T2,T3,in_,out_);
  conditionF1232 = T1;
  T5 = CALL2(1,VARREF(YruntimeSruntimeYhandler_matchesQ),handler_,conditionF1232);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_125),handler_,conditionF1232);
  } else {
  }
  T8 = FUNSHELL(1,fun_search_83,3);
  searchF1233 = T8;
  FUNINIT(searchF1233, 3,handler_,conditionF1232,searchF1233);
  T9 = CALL1(0,searchF1233,VARREF(YruntimeSruntimeYTcurrent_handlersT));
  T7 = T9;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeSruntimeYchoose_handler) {
  P type_,in_,out_;
  P tmpF1236;
  P nF1235;
  P handlersF1234;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T1 = CALL2(1,VARREF(YruntimeSruntimeYlist_handlers),type_,out_);
  handlersF1234 = T1;
  CALL2(1,VARREF(YruntimeSruntimeYformat),out_,LITREF(lit_128));
  T4 = CALL1(1,VARREF(YruntimeSruntimeYread),in_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  nF1235 = T3;
  T6 = CALL2(1,VARREF(YgooSmagnitudeYL),nF1235,YPint((P)0));
  tmpF1236 = T6;
  if (tmpF1236 != YPfalse) {
    T7 = tmpF1236;
  } else {
    T9 = CALL1(1,VARREF(YgooStypesYlen),handlersF1234);
    T8 = CALL2(1,VARREF(YgooSmagnitudeYGE),nF1235,T9);
    T7 = T8;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T10 = CALL2(1,VARREF(Yerror),LITREF(lit_129),nF1235);
  } else {
  }
  T12 = CALL2(1,VARREF(YgooSmacrosYelt),handlersF1234,nF1235);
  T11 = CALL3(1,VARREF(YruntimeSruntimeYinvoke_handler_interactively),T12,in_,out_);
  T2 = T11;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeSruntimeYloc_val) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPloc_val(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeSruntimeYloc_val_setter) {
  P z_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T0 = (P)YPloc_val_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeSruntimeYapp_filename) {
  P T0;
LINK_STACK();
loop:
  T0 = (P)YPapp_filename();
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeSruntimeYapp_args) {
  P T0;
LINK_STACK();
loop:
  T0 = (P)YPapp_args();
UNLINK_STACK();
  QRET(T0);
}

P YruntimeSruntimeYbooted_fab_sym_using(P name_,P given_sym_) {
  P tmpF1238;
  P tmpF1237;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = CALL3(1,VARREF(YgooScollectionsScollectionYelt_or),VARREF(YruntimeSruntimeYsymbols),name_,YPfalse);
  tmpF1237 = T1;
  if (tmpF1237 != YPfalse) {
    T2 = tmpF1237;
  } else {
    tmpF1238 = given_sym_;
    if (tmpF1238 != YPfalse) {
      T5 = tmpF1238;
    } else {
      T6 = CALL3(1,VARREF(Ynew),VARREF(YLsymG),VARREF(Ysym_name),name_);
      T5 = T6;
    }
    T4 = T5;
    T3 = CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),T4,VARREF(YruntimeSruntimeYsymbols),name_);
    T2 = T3;
  }
  T0 = T2;
  return T0;
}

FUNCODEDEF(YruntimeSruntimeYbooted_fab_sym) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = (P)YruntimeSruntimeYbooted_fab_sym_using(name_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boot_92) {
  P syms_;
  P symF1239;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(syms_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),syms_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),syms_);
    symF1239 = T4;
    T5 = CALL1(1,VARREF(Ysym_name),symF1239);
    (P)YruntimeSruntimeYbooted_fab_sym_using(T5,symF1239);
    T7 = CALL1(1,VARREF(Ytail),syms_);
    a1 = T7;
    syms_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YruntimeSruntimeYboot_symbols) {
  P bootF1240;
  P T2,T1,T0;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_boot_92,1);
  bootF1240 = T1;
  FUNINIT(bootF1240, 1,bootF1240);
  T2 = CALL1(0,bootF1240,VARREF(YPsymbols));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YruntimeSruntimeY___main_0___() {
  P T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189;
  P T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173;
  P T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157;
  P T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141;
  P T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125;
  P T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109;
  P T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93;
  P T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77;
  P T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"match-empty-list");
  lit_1 = YPPsym((P)"x");
  lit_2 = YPPsym((P)"fail");
  lit_3 = YPsb((P)"Match Empty Failure of %=");
  T0 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmatch_empty_list = YPmet(FUNCODEREF(YgooSmacrosYmatch_empty_list),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T1 = YgooSmacrosYmatch_empty_list;
  VARSET(YgooSmacrosYmatch_empty_list,T1);
  lit_4 = YPPsym((P)"match-unquote");
  lit_5 = YPsb((P)"Match Failure Empty List on Unquote");
  T2 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmatch_unquote = YPmet(FUNCODEREF(YgooSmacrosYmatch_unquote),LITREF(lit_4),T2,ENVNUL,PNUL,YPfalse);
  T3 = YgooSmacrosYmatch_unquote;
  VARSET(YgooSmacrosYmatch_unquote,T3);
  lit_6 = YPPsym((P)"match-atom");
  lit_7 = YPPsym((P)"pat");
  lit_8 = YPsb((P)"Match Failure Empty List on %=");
  lit_9 = YPsb((P)"Match Failure of %= on %=");
  T4 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_7),LITREF(lit_2)),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSmacrosYmatch_atom = YPmet(FUNCODEREF(YgooSmacrosYmatch_atom),LITREF(lit_6),T4,ENVNUL,PNUL,YPfalse);
  T5 = YgooSmacrosYmatch_atom;
  VARSET(YgooSmacrosYmatch_atom,T5);
  lit_10 = YPPsym((P)"match-sublist");
  lit_11 = YPsb((P)"Match Failure on Sub List on %=");
  T6 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmatch_sublist = YPmet(FUNCODEREF(YgooSmacrosYmatch_sublist),LITREF(lit_10),T6,ENVNUL,PNUL,YPfalse);
  T7 = YgooSmacrosYmatch_sublist;
  VARSET(YgooSmacrosYmatch_sublist,T7);
  lit_12 = YPPsym((P)"cat-sym");
  lit_13 = YPPsym((P)"r");
  lit_14 = YPPsym((P)"e");
  lit_15 = YPsb((P)"");
  T9 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_14)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_1)),Ynil,YPtrue,YPint((P)0),VARREF(YLsymG),Ynil);
  fun_cat_sym_5 = YPmet(FUNCODEREF(fun_cat_sym_5),LITREF(lit_12),T8,ENVNUL,PNUL,YPfalse);
  T12 = BOUNDP(YgooSmacrosYcat_sym);
  if (T12 != YPfalse) {
    T11 = VARREF(YgooSmacrosYcat_sym);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_cat_sym_5;
  T10 = CALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YgooSmacrosYcat_sym,T10);
  VARSET(YruntimeSruntimeYTgensym_counterT,YPint((P)1000));
  lit_16 = YPPsym((P)"gensym");
  lit_17 = YPsb((P)"x-");
  T14 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLsymG),Ynil);
  fun_gensym_6 = YPmet(FUNCODEREF(fun_gensym_6),LITREF(lit_16),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(YgooSmacrosYgensym);
  if (T17 != YPfalse) {
    T16 = VARREF(YgooSmacrosYgensym);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_gensym_6;
  T15 = CALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YgooSmacrosYgensym,T15);
  lit_18 = YPPsym((P)"fab-setter-name");
  lit_19 = YPsb((P)"-setter");
  T19 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_fab_setter_name_7 = YPmet(FUNCODEREF(fun_fab_setter_name_7),LITREF(lit_18),T19,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YgooSmacrosYfab_setter_name);
  if (T22 != YPfalse) {
    T21 = VARREF(YgooSmacrosYfab_setter_name);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_fab_setter_name_7;
  T20 = CALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YgooSmacrosYfab_setter_name,T20);
  lit_20 = YPPsym((P)"var-name");
  T24 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_var_name_8 = YPmet(FUNCODEREF(fun_var_name_8),LITREF(lit_20),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YgooSmacrosYvar_name);
  if (T27 != YPfalse) {
    T26 = VARREF(YgooSmacrosYvar_name);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_var_name_8;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YgooSmacrosYvar_name,T25);
  T29 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_var_name_9 = YPmet(FUNCODEREF(fun_var_name_9),LITREF(lit_20),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YgooSmacrosYvar_name);
  if (T32 != YPfalse) {
    T31 = VARREF(YgooSmacrosYvar_name);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_var_name_9;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YgooSmacrosYvar_name,T30);
  lit_21 = YPPsym((P)"var-type");
  lit_22 = YPPsym((P)"<any>");
  T34 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_var_type_10 = YPmet(FUNCODEREF(fun_var_type_10),LITREF(lit_21),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YgooSmacrosYvar_type);
  if (T37 != YPfalse) {
    T36 = VARREF(YgooSmacrosYvar_type);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_var_type_10;
  T35 = CALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YgooSmacrosYvar_type,T35);
  T39 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_var_type_11 = YPmet(FUNCODEREF(fun_var_type_11),LITREF(lit_21),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YgooSmacrosYvar_type);
  if (T42 != YPfalse) {
    T41 = VARREF(YgooSmacrosYvar_type);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_var_type_11;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooSmacrosYvar_type,T40);
  lit_23 = YPPsym((P)"identity");
  T44 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_identity_12 = YPmet(FUNCODEREF(fun_identity_12),LITREF(lit_23),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YruntimeSruntimeYidentity);
  if (T47 != YPfalse) {
    T46 = VARREF(YruntimeSruntimeYidentity);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_identity_12;
  T45 = CALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YruntimeSruntimeYidentity,T45);
  lit_24 = YPPsym((P)"compose");
  lit_25 = YPPsym((P)"fx");
  lit_26 = YPPsym((P)"fy");
  lit_27 = YPPsym((P)"args");
  T50 = YPsig(YPPlist(1,LITREF(lit_27)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(2,LITREF(lit_25),LITREF(lit_26)),YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLfunG),Ynil);
  fun_compose_14 = YPmet(FUNCODEREF(fun_compose_14),LITREF(lit_24),T49,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YruntimeSruntimeYcompose);
  if (T53 != YPfalse) {
    T52 = VARREF(YruntimeSruntimeYcompose);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_compose_14;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YruntimeSruntimeYcompose,T51);
  lit_28 = YPPsym((P)"rcurry");
  lit_29 = YPPsym((P)"f");
  lit_30 = YPPsym((P)"curried");
  T56 = YPsig(YPPlist(1,LITREF(lit_27)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(2,LITREF(lit_29),LITREF(lit_30)),YPPlist(1,VARREF(YLfunG)),YPtrue,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_rcurry_16 = YPmet(FUNCODEREF(fun_rcurry_16),LITREF(lit_28),T55,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YruntimeSruntimeYrcurry);
  if (T59 != YPfalse) {
    T58 = VARREF(YruntimeSruntimeYrcurry);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_rcurry_16;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YruntimeSruntimeYrcurry,T57);
  lit_31 = YPPsym((P)"curry");
  T62 = YPsig(YPPlist(1,LITREF(lit_27)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(2,LITREF(lit_29),LITREF(lit_30)),YPPlist(1,VARREF(YLfunG)),YPtrue,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_curry_18 = YPmet(FUNCODEREF(fun_curry_18),LITREF(lit_31),T61,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YruntimeSruntimeYcurry);
  if (T65 != YPfalse) {
    T64 = VARREF(YruntimeSruntimeYcurry);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_curry_18;
  T63 = CALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YruntimeSruntimeYcurry,T63);
  lit_32 = YPPsym((P)"always");
  T68 = YPsig(YPPlist(1,LITREF(lit_27)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_always_20 = YPmet(FUNCODEREF(fun_always_20),LITREF(lit_32),T67,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YruntimeSruntimeYalways);
  if (T71 != YPfalse) {
    T70 = VARREF(YruntimeSruntimeYalways);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_always_20;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YruntimeSruntimeYalways,T69);
  lit_33 = YPPsym((P)"spread");
  lit_34 = YPPsym((P)"t");
  T74 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLtupG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_spread_22 = YPmet(FUNCODEREF(fun_spread_22),LITREF(lit_33),T73,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YruntimeSruntimeYspread);
  if (T77 != YPfalse) {
    T76 = VARREF(YruntimeSruntimeYspread);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_spread_22;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YruntimeSruntimeYspread,T75);
  lit_35 = YPPsym((P)"<condition>");
  T80 = (P)YPpair(VARREF(YLanyG),Ynil);
  T79 = CALL2(1,VARREF(Yfab_class),LITREF(lit_35),T80);
  VARSET(YruntimeSruntimeYLconditionG,T79);
  lit_36 = YPPsym((P)"default-handler");
  lit_37 = YPPsym((P)"c");
  T81 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YruntimeSruntimeYLconditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_handler_23 = YPmet(FUNCODEREF(fun_default_handler_23),LITREF(lit_36),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YruntimeSruntimeYdefault_handler);
  if (T84 != YPfalse) {
    T83 = VARREF(YruntimeSruntimeYdefault_handler);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_default_handler_23;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YruntimeSruntimeYdefault_handler,T82);
  lit_38 = YPPsym((P)"describe-condition");
  lit_39 = YPsb((P)"Anonymous condition %=");
  T86 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YruntimeSruntimeYLconditionG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_24 = YPmet(FUNCODEREF(fun_describe_condition_24),LITREF(lit_38),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YruntimeSruntimeYdescribe_condition);
  if (T89 != YPfalse) {
    T88 = VARREF(YruntimeSruntimeYdescribe_condition);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_describe_condition_24;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YruntimeSruntimeYdescribe_condition,T87);
  lit_40 = YPPsym((P)"default-handler-description");
  lit_41 = YPPsym((P)"cond-type");
  lit_42 = YPsb((P)"Anonymous handler for %s");
  T92 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YruntimeSruntimeYLconditionG));
  T91 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,T92),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_25 = YPmet(FUNCODEREF(fun_default_handler_description_25),LITREF(lit_40),T91,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YruntimeSruntimeYdefault_handler_description);
  if (T95 != YPfalse) {
    T94 = VARREF(YruntimeSruntimeYdefault_handler_description);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_default_handler_description_25;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YruntimeSruntimeYdefault_handler_description,T93);
  lit_43 = YPPsym((P)"build-condition-interactively");
  lit_44 = YPPsym((P)"in");
  lit_45 = YPPsym((P)"out");
  T98 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YruntimeSruntimeYLconditionG));
  T97 = YPsig(YPPlist(3,LITREF(lit_41),LITREF(lit_44),LITREF(lit_45)),YPPlist(3,T98,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YruntimeSruntimeYLconditionG),Ynil);
  fun_build_condition_interactively_26 = YPmet(FUNCODEREF(fun_build_condition_interactively_26),LITREF(lit_43),T97,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(YruntimeSruntimeYbuild_condition_interactively);
  if (T101 != YPfalse) {
    T100 = VARREF(YruntimeSruntimeYbuild_condition_interactively);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_build_condition_interactively_26;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YruntimeSruntimeYbuild_condition_interactively,T99);
  lit_46 = YPPsym((P)"<simple-condition>");
  T104 = (P)YPpair(VARREF(YruntimeSruntimeYLconditionG),Ynil);
  T103 = CALL2(1,VARREF(Yfab_class),LITREF(lit_46),T104);
  VARSET(YruntimeSruntimeYLsimple_conditionG,T103);
  lit_47 = YPPsym((P)"condition-message");
  lit_48 = YPPsym((P)"_x");
  T105 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YruntimeSruntimeYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_condition_message_27 = YPmet(FUNCODEREF(fun_condition_message_27),LITREF(lit_47),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YruntimeSruntimeYcondition_message);
  if (T108 != YPfalse) {
    T107 = VARREF(YruntimeSruntimeYcondition_message);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_condition_message_27;
  T106 = CALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YruntimeSruntimeYcondition_message,T106);
  lit_49 = YPPsym((P)"condition-message-setter");
  lit_50 = YPPsym((P)"_z");
  T110 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YLstrG),VARREF(YruntimeSruntimeYLsimple_conditionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_condition_message_setter_28 = YPmet(FUNCODEREF(fun_condition_message_setter_28),LITREF(lit_49),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YruntimeSruntimeYcondition_message_setter);
  if (T113 != YPfalse) {
    T112 = VARREF(YruntimeSruntimeYcondition_message_setter);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_condition_message_setter_28;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YruntimeSruntimeYcondition_message_setter,T111);
  T115 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T116 = fun_29;
  CALLN(1,VARREF(YPprop),5,VARREF(YruntimeSruntimeYLsimple_conditionG),VARREF(YruntimeSruntimeYcondition_message),VARREF(YruntimeSruntimeYcondition_message_setter),VARREF(YLstrG),T116);
  lit_51 = YPPsym((P)"condition-arguments");
  T117 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YruntimeSruntimeYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_condition_arguments_30 = YPmet(FUNCODEREF(fun_condition_arguments_30),LITREF(lit_51),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YruntimeSruntimeYcondition_arguments);
  if (T120 != YPfalse) {
    T119 = VARREF(YruntimeSruntimeYcondition_arguments);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_condition_arguments_30;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YruntimeSruntimeYcondition_arguments,T118);
  lit_52 = YPPsym((P)"condition-arguments-setter");
  T122 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YLlstG),VARREF(YruntimeSruntimeYLsimple_conditionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_condition_arguments_setter_31 = YPmet(FUNCODEREF(fun_condition_arguments_setter_31),LITREF(lit_52),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YruntimeSruntimeYcondition_arguments_setter);
  if (T125 != YPfalse) {
    T124 = VARREF(YruntimeSruntimeYcondition_arguments_setter);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_condition_arguments_setter_31;
  T123 = CALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YruntimeSruntimeYcondition_arguments_setter,T123);
  T127 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T128 = fun_32;
  CALLN(1,VARREF(YPprop),5,VARREF(YruntimeSruntimeYLsimple_conditionG),VARREF(YruntimeSruntimeYcondition_arguments),VARREF(YruntimeSruntimeYcondition_arguments_setter),VARREF(YLlstG),T128);
  T129 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YruntimeSruntimeYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_33 = YPmet(FUNCODEREF(fun_describe_condition_33),LITREF(lit_38),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YruntimeSruntimeYdescribe_condition);
  if (T132 != YPfalse) {
    T131 = VARREF(YruntimeSruntimeYdescribe_condition);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_describe_condition_33;
  T130 = CALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YruntimeSruntimeYdescribe_condition,T130);
  lit_53 = YPsb((P)"No next methods");
  lit_54 = YPsb((P)"Condition format string: ");
  lit_55 = YPsb((P)"Condition format arguments: ");
  T135 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YruntimeSruntimeYLsimple_conditionG));
  T134 = YPsig(YPPlist(3,LITREF(lit_41),LITREF(lit_44),LITREF(lit_45)),YPPlist(3,T135,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YruntimeSruntimeYLconditionG),Ynil);
  fun_build_condition_interactively_34 = YPmet(FUNCODEREF(fun_build_condition_interactively_34),LITREF(lit_43),T134,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YruntimeSruntimeYbuild_condition_interactively);
  if (T138 != YPfalse) {
    T137 = VARREF(YruntimeSruntimeYbuild_condition_interactively);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_build_condition_interactively_34;
  T136 = CALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YruntimeSruntimeYbuild_condition_interactively,T136);
  lit_56 = YPPsym((P)"<serious-condition>");
  T141 = (P)YPpair(VARREF(YruntimeSruntimeYLconditionG),Ynil);
  T140 = CALL2(1,VARREF(Yfab_class),LITREF(lit_56),T141);
  VARSET(YruntimeSruntimeYLserious_conditionG,T140);
  lit_57 = YPsb((P)"%s\n");
  T142 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YruntimeSruntimeYLserious_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_handler_35 = YPmet(FUNCODEREF(fun_default_handler_35),LITREF(lit_36),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YruntimeSruntimeYdefault_handler);
  if (T145 != YPfalse) {
    T144 = VARREF(YruntimeSruntimeYdefault_handler);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_default_handler_35;
  T143 = CALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YruntimeSruntimeYdefault_handler,T143);
  lit_58 = YPPsym((P)"<error>");
  T148 = (P)YPpair(VARREF(YruntimeSruntimeYLserious_conditionG),Ynil);
  T147 = CALL2(1,VARREF(Yfab_class),LITREF(lit_58),T148);
  VARSET(YruntimeSruntimeYLerrorG,T147);
  lit_59 = YPPsym((P)"<simple-error>");
  T151 = (P)YPpair(VARREF(YruntimeSruntimeYLsimple_conditionG),Ynil);
  T150 = (P)YPpair(VARREF(YruntimeSruntimeYLerrorG),T151);
  T149 = CALL2(1,VARREF(Yfab_class),LITREF(lit_59),T150);
  VARSET(YruntimeSruntimeYLsimple_errorG,T149);
  lit_60 = YPPsym((P)"<restart>");
  T153 = (P)YPpair(VARREF(YruntimeSruntimeYLconditionG),Ynil);
  T152 = CALL2(1,VARREF(Yfab_class),LITREF(lit_60),T153);
  VARSET(YruntimeSruntimeYLrestartG,T152);
  lit_61 = YPsb((P)"Anonymous restart of type %s");
  T155 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YruntimeSruntimeYLrestartG));
  T154 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,T155),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_36 = YPmet(FUNCODEREF(fun_default_handler_description_36),LITREF(lit_40),T154,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YruntimeSruntimeYdefault_handler_description);
  if (T158 != YPfalse) {
    T157 = VARREF(YruntimeSruntimeYdefault_handler_description);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_default_handler_description_36;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YruntimeSruntimeYdefault_handler_description,T156);
  lit_62 = YPPsym((P)"<incongruent-method-error>");
  T161 = (P)YPpair(VARREF(YruntimeSruntimeYLerrorG),Ynil);
  T160 = CALL2(1,VARREF(Yfab_class),LITREF(lit_62),T161);
  VARSET(YruntimeSruntimeYLincongruent_method_errorG,T160);
  lit_63 = YPPsym((P)"incongruent-method-error-generic");
  T162 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YruntimeSruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_generic_37 = YPmet(FUNCODEREF(fun_incongruent_method_error_generic_37),LITREF(lit_63),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YruntimeSruntimeYincongruent_method_error_generic);
  if (T165 != YPfalse) {
    T164 = VARREF(YruntimeSruntimeYincongruent_method_error_generic);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_incongruent_method_error_generic_37;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YruntimeSruntimeYincongruent_method_error_generic,T163);
  lit_64 = YPPsym((P)"incongruent-method-error-generic-setter");
  T167 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YLgenG),VARREF(YruntimeSruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_generic_setter_38 = YPmet(FUNCODEREF(fun_incongruent_method_error_generic_setter_38),LITREF(lit_64),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YruntimeSruntimeYincongruent_method_error_generic_setter);
  if (T170 != YPfalse) {
    T169 = VARREF(YruntimeSruntimeYincongruent_method_error_generic_setter);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_incongruent_method_error_generic_setter_38;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YruntimeSruntimeYincongruent_method_error_generic_setter,T168);
  CALLN(1,VARREF(YPprop),5,VARREF(YruntimeSruntimeYLincongruent_method_errorG),VARREF(YruntimeSruntimeYincongruent_method_error_generic),VARREF(YruntimeSruntimeYincongruent_method_error_generic_setter),VARREF(YLgenG),VARREF(YPprop_unbound_error));
  lit_65 = YPPsym((P)"incongruent-method-error-method");
  T172 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YruntimeSruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_method_39 = YPmet(FUNCODEREF(fun_incongruent_method_error_method_39),LITREF(lit_65),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YruntimeSruntimeYincongruent_method_error_method);
  if (T175 != YPfalse) {
    T174 = VARREF(YruntimeSruntimeYincongruent_method_error_method);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_incongruent_method_error_method_39;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YruntimeSruntimeYincongruent_method_error_method,T173);
  lit_66 = YPPsym((P)"incongruent-method-error-method-setter");
  T177 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YLmetG),VARREF(YruntimeSruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_method_setter_40 = YPmet(FUNCODEREF(fun_incongruent_method_error_method_setter_40),LITREF(lit_66),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YruntimeSruntimeYincongruent_method_error_method_setter);
  if (T180 != YPfalse) {
    T179 = VARREF(YruntimeSruntimeYincongruent_method_error_method_setter);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_incongruent_method_error_method_setter_40;
  T178 = CALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YruntimeSruntimeYincongruent_method_error_method_setter,T178);
  CALLN(1,VARREF(YPprop),5,VARREF(YruntimeSruntimeYLincongruent_method_errorG),VARREF(YruntimeSruntimeYincongruent_method_error_method),VARREF(YruntimeSruntimeYincongruent_method_error_method_setter),VARREF(YLmetG),VARREF(YPprop_unbound_error));
  lit_67 = YPsb((P)"Method %= incongruent with generic %=.\n");
  T182 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YruntimeSruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_41 = YPmet(FUNCODEREF(fun_describe_condition_41),LITREF(lit_38),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YruntimeSruntimeYdescribe_condition);
  if (T185 != YPfalse) {
    T184 = VARREF(YruntimeSruntimeYdescribe_condition);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_describe_condition_41;
  T183 = CALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YruntimeSruntimeYdescribe_condition,T183);
  lit_68 = YPPsym((P)"<replace-generic-restart>");
  T188 = (P)YPpair(VARREF(YruntimeSruntimeYLrestartG),Ynil);
  T187 = CALL2(1,VARREF(Yfab_class),LITREF(lit_68),T188);
  VARSET(YLreplace_generic_restartG,T187);
  lit_69 = YPsb((P)"Replace the generic function with an empty, congruent one");
  T190 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YLreplace_generic_restartG));
  T189 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,T190),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_42 = YPmet(FUNCODEREF(fun_default_handler_description_42),LITREF(lit_40),T189,ENVNUL,PNUL,YPfalse);
  T193 = BOUNDP(YruntimeSruntimeYdefault_handler_description);
  if (T193 != YPfalse) {
    T192 = VARREF(YruntimeSruntimeYdefault_handler_description);
  } else {
    T192 = YPfalse;
  }
  T194 = fun_default_handler_description_42;
  T191 = CALL2(1,VARREF(YPdefine_method),T192,T194);
  VARSET(YruntimeSruntimeYdefault_handler_description,T191);
  lit_70 = YPPsym((P)"<handler-info>");
  T196 = (P)YPpair(VARREF(YLanyG),Ynil);
  T195 = CALL2(1,VARREF(Yfab_class),LITREF(lit_70),T196);
  VARSET(YruntimeSruntimeYLhandler_infoG,T195);
  lit_71 = YPPsym((P)"describe-handler");
  lit_72 = YPPsym((P)"info");
  lit_73 = YPPsym((P)"condition-type");
  T199 = YPsig(YPPlist(2,LITREF(lit_72),LITREF(lit_73)),YPPlist(2,VARREF(YruntimeSruntimeYLhandler_infoG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  T198 = fun_describe_handler_43 = YPmet(FUNCODEREF(fun_describe_handler_43),LITREF(lit_71),T199,ENVNUL,PNUL,YPfalse);
  T203 = BOUNDP(YruntimeSruntimeYdescribe_handler);
  if (T203 != YPfalse) {
    T202 = VARREF(YruntimeSruntimeYdescribe_handler);
  } else {
    T202 = YPfalse;
  }
  T204 = fun_describe_handler_43;
  T201 = CALL2(1,VARREF(YPdefine_method),T202,T204);
  T200 = VARSET(YruntimeSruntimeYdescribe_handler,T201);
  T197 = T200;
  return T197;
}

P YruntimeSruntimeY___main_1___() {
  P tmpF1243;
  P tmpF1242;
  P tmpF1241;
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
  lit_74 = YPPsym((P)"build-condition-for-handler-interactively");
  T0 = YPsig(YPPlist(4,LITREF(lit_72),LITREF(lit_73),LITREF(lit_44),LITREF(lit_45)),YPPlist(4,VARREF(YruntimeSruntimeYLhandler_infoG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YruntimeSruntimeYLconditionG),Ynil);
  fun_build_condition_for_handler_interactively_44 = YPmet(FUNCODEREF(fun_build_condition_for_handler_interactively_44),LITREF(lit_74),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YruntimeSruntimeYbuild_condition_for_handler_interactively);
  if (T3 != YPfalse) {
    T2 = VARREF(YruntimeSruntimeYbuild_condition_for_handler_interactively);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_build_condition_for_handler_interactively_44;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YruntimeSruntimeYbuild_condition_for_handler_interactively,T1);
  T5 = CALL1(1,VARREF(Ynew),VARREF(YruntimeSruntimeYLhandler_infoG));
  VARSET(YruntimeSruntimeYDdefault_handler_info,T5);
  lit_75 = YPPsym((P)"<simple-handler-info>");
  T7 = (P)YPpair(VARREF(YruntimeSruntimeYLhandler_infoG),Ynil);
  T6 = CALL2(1,VARREF(Yfab_class),LITREF(lit_75),T7);
  VARSET(YLsimple_handler_infoG,T6);
  lit_76 = YPPsym((P)"handler-info-message");
  T8 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_message_45 = YPmet(FUNCODEREF(fun_handler_info_message_45),LITREF(lit_76),T8,ENVNUL,PNUL,YPfalse);
  T11 = BOUNDP(Yhandler_info_message);
  if (T11 != YPfalse) {
    T10 = VARREF(Yhandler_info_message);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_handler_info_message_45;
  T9 = CALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(Yhandler_info_message,T9);
  lit_77 = YPPsym((P)"handler-info-message-setter");
  T13 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YLstrG),VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_info_message_setter_46 = YPmet(FUNCODEREF(fun_handler_info_message_setter_46),LITREF(lit_77),T13,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YruntimeSruntimeYhandler_info_message_setter);
  if (T16 != YPfalse) {
    T15 = VARREF(YruntimeSruntimeYhandler_info_message_setter);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_handler_info_message_setter_46;
  T14 = CALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YruntimeSruntimeYhandler_info_message_setter,T14);
  CALLN(1,VARREF(YPprop),5,VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),VARREF(YruntimeSruntimeYhandler_info_message_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_78 = YPPsym((P)"handler-info-arguments");
  T18 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_arguments_47 = YPmet(FUNCODEREF(fun_handler_info_arguments_47),LITREF(lit_78),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(Yhandler_info_arguments);
  if (T21 != YPfalse) {
    T20 = VARREF(Yhandler_info_arguments);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_handler_info_arguments_47;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(Yhandler_info_arguments,T19);
  lit_79 = YPPsym((P)"handler-info-arguments-setter");
  T23 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YLlstG),VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_info_arguments_setter_48 = YPmet(FUNCODEREF(fun_handler_info_arguments_setter_48),LITREF(lit_79),T23,ENVNUL,PNUL,YPfalse);
  T26 = BOUNDP(YruntimeSruntimeYhandler_info_arguments_setter);
  if (T26 != YPfalse) {
    T25 = VARREF(YruntimeSruntimeYhandler_info_arguments_setter);
  } else {
    T25 = YPfalse;
  }
  T27 = fun_handler_info_arguments_setter_48;
  T24 = CALL2(1,VARREF(YPdefine_method),T25,T27);
  VARSET(YruntimeSruntimeYhandler_info_arguments_setter,T24);
  T28 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T29 = fun_49;
  CALLN(1,VARREF(YPprop),5,VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_arguments),VARREF(YruntimeSruntimeYhandler_info_arguments_setter),VARREF(YLlstG),T29);
  T30 = YPsig(YPPlist(2,LITREF(lit_72),LITREF(lit_73)),YPPlist(2,VARREF(YLsimple_handler_infoG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_describe_handler_50 = YPmet(FUNCODEREF(fun_describe_handler_50),LITREF(lit_71),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YruntimeSruntimeYdescribe_handler);
  if (T33 != YPfalse) {
    T32 = VARREF(YruntimeSruntimeYdescribe_handler);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_describe_handler_50;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YruntimeSruntimeYdescribe_handler,T31);
  VARSET(YruntimeSruntimeYTcurrent_handlersT,Ynil);
  lit_80 = YPPsym((P)"<handler>");
  T36 = (P)YPpair(VARREF(YLanyG),Ynil);
  T35 = CALL2(1,VARREF(Yfab_class),LITREF(lit_80),T36);
  VARSET(YruntimeSruntimeYLhandlerG,T35);
  lit_81 = YPPsym((P)"handler-condition-type");
  T37 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YruntimeSruntimeYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_condition_type_51 = YPmet(FUNCODEREF(fun_handler_condition_type_51),LITREF(lit_81),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YruntimeSruntimeYhandler_condition_type);
  if (T40 != YPfalse) {
    T39 = VARREF(YruntimeSruntimeYhandler_condition_type);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_handler_condition_type_51;
  T38 = CALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YruntimeSruntimeYhandler_condition_type,T38);
  lit_82 = YPPsym((P)"handler-condition-type-setter");
  T43 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YruntimeSruntimeYLconditionG));
  T42 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,T43,VARREF(YruntimeSruntimeYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_condition_type_setter_52 = YPmet(FUNCODEREF(fun_handler_condition_type_setter_52),LITREF(lit_82),T42,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YruntimeSruntimeYhandler_condition_type_setter);
  if (T46 != YPfalse) {
    T45 = VARREF(YruntimeSruntimeYhandler_condition_type_setter);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_handler_condition_type_setter_52;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YruntimeSruntimeYhandler_condition_type_setter,T44);
  T48 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YruntimeSruntimeYLconditionG));
  CALLN(1,VARREF(YPprop),5,VARREF(YruntimeSruntimeYLhandlerG),VARREF(YruntimeSruntimeYhandler_condition_type),VARREF(YruntimeSruntimeYhandler_condition_type_setter),T48,VARREF(YPprop_unbound_error));
  lit_83 = YPPsym((P)"handler-info");
  T49 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YruntimeSruntimeYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_53 = YPmet(FUNCODEREF(fun_handler_info_53),LITREF(lit_83),T49,ENVNUL,PNUL,YPfalse);
  T52 = BOUNDP(YruntimeSruntimeYhandler_info);
  if (T52 != YPfalse) {
    T51 = VARREF(YruntimeSruntimeYhandler_info);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_handler_info_53;
  T50 = CALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YruntimeSruntimeYhandler_info,T50);
  lit_84 = YPPsym((P)"handler-info-setter");
  T54 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YruntimeSruntimeYLhandler_infoG),VARREF(YruntimeSruntimeYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_info_setter_54 = YPmet(FUNCODEREF(fun_handler_info_setter_54),LITREF(lit_84),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YruntimeSruntimeYhandler_info_setter);
  if (T57 != YPfalse) {
    T56 = VARREF(YruntimeSruntimeYhandler_info_setter);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_handler_info_setter_54;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YruntimeSruntimeYhandler_info_setter,T55);
  CALLN(1,VARREF(YPprop),5,VARREF(YruntimeSruntimeYLhandlerG),VARREF(YruntimeSruntimeYhandler_info),VARREF(YruntimeSruntimeYhandler_info_setter),VARREF(YruntimeSruntimeYLhandler_infoG),VARREF(YPprop_unbound_error));
  lit_85 = YPPsym((P)"handler-test");
  T59 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YruntimeSruntimeYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_test_55 = YPmet(FUNCODEREF(fun_handler_test_55),LITREF(lit_85),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YruntimeSruntimeYhandler_test);
  if (T62 != YPfalse) {
    T61 = VARREF(YruntimeSruntimeYhandler_test);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_handler_test_55;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YruntimeSruntimeYhandler_test,T60);
  lit_86 = YPPsym((P)"handler-test-setter");
  T64 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YLfunG),VARREF(YruntimeSruntimeYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_test_setter_56 = YPmet(FUNCODEREF(fun_handler_test_setter_56),LITREF(lit_86),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YruntimeSruntimeYhandler_test_setter);
  if (T67 != YPfalse) {
    T66 = VARREF(YruntimeSruntimeYhandler_test_setter);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_handler_test_setter_56;
  T65 = CALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YruntimeSruntimeYhandler_test_setter,T65);
  CALLN(1,VARREF(YPprop),5,VARREF(YruntimeSruntimeYLhandlerG),VARREF(YruntimeSruntimeYhandler_test),VARREF(YruntimeSruntimeYhandler_test_setter),VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_87 = YPPsym((P)"handler-function");
  T69 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YruntimeSruntimeYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_function_57 = YPmet(FUNCODEREF(fun_handler_function_57),LITREF(lit_87),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YruntimeSruntimeYhandler_function);
  if (T72 != YPfalse) {
    T71 = VARREF(YruntimeSruntimeYhandler_function);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_handler_function_57;
  T70 = CALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YruntimeSruntimeYhandler_function,T70);
  lit_88 = YPPsym((P)"handler-function-setter");
  T74 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YLfunG),VARREF(YruntimeSruntimeYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_function_setter_58 = YPmet(FUNCODEREF(fun_handler_function_setter_58),LITREF(lit_88),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YruntimeSruntimeYhandler_function_setter);
  if (T77 != YPfalse) {
    T76 = VARREF(YruntimeSruntimeYhandler_function_setter);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_handler_function_setter_58;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YruntimeSruntimeYhandler_function_setter,T75);
  CALLN(1,VARREF(YPprop),5,VARREF(YruntimeSruntimeYLhandlerG),VARREF(YruntimeSruntimeYhandler_function),VARREF(YruntimeSruntimeYhandler_function_setter),VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_89 = YPPsym((P)"fab-handler");
  lit_90 = YPPsym((P)"type");
  lit_91 = YPPsym((P)"test");
  T80 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YruntimeSruntimeYLconditionG));
  T79 = YPsig(YPPlist(4,LITREF(lit_90),LITREF(lit_72),LITREF(lit_91),LITREF(lit_29)),YPPlist(4,T80,VARREF(YruntimeSruntimeYLhandler_infoG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YruntimeSruntimeYLhandlerG),Ynil);
  YruntimeSruntimeYfab_handler = YPmet(FUNCODEREF(YruntimeSruntimeYfab_handler),LITREF(lit_89),T79,ENVNUL,PNUL,YPfalse);
  T81 = YruntimeSruntimeYfab_handler;
  VARSET(YruntimeSruntimeYfab_handler,T81);
  lit_92 = YPPsym((P)"handler-active?");
  lit_93 = YPPsym((P)"handler");
  T82 = YPsig(YPPlist(1,LITREF(lit_93)),YPPlist(1,VARREF(YruntimeSruntimeYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YruntimeSruntimeYhandler_activeQ = YPmet(FUNCODEREF(YruntimeSruntimeYhandler_activeQ),LITREF(lit_92),T82,ENVNUL,PNUL,YPfalse);
  T83 = YruntimeSruntimeYhandler_activeQ;
  VARSET(YruntimeSruntimeYhandler_activeQ,T83);
  lit_94 = YPPsym((P)"handler-matches?");
  lit_95 = YPPsym((P)"condition");
  T84 = YPsig(YPPlist(2,LITREF(lit_93),LITREF(lit_95)),YPPlist(2,VARREF(YruntimeSruntimeYLhandlerG),VARREF(YruntimeSruntimeYLconditionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YruntimeSruntimeYhandler_matchesQ = YPmet(FUNCODEREF(YruntimeSruntimeYhandler_matchesQ),LITREF(lit_94),T84,ENVNUL,PNUL,YPfalse);
  T85 = YruntimeSruntimeYhandler_matchesQ;
  VARSET(YruntimeSruntimeYhandler_matchesQ,T85);
  lit_96 = YPPsym((P)"%with-monitor");
  lit_97 = YPPsym((P)"test-fun");
  lit_98 = YPPsym((P)"user-handler");
  lit_99 = YPPsym((P)"main-fun");
  lit_100 = YPPsym((P)"_unwind-exception_");
  lit_101 = YPPsym((P)"_handler-function_");
  lit_102 = YPPsym((P)"_next-handler_");
  lit_103 = YPPsym((P)"_resume_");
  T92 = YPsig(YPPlist(1,LITREF(lit_103)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(YPPlist(2,LITREF(lit_95),LITREF(lit_102)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Uhandler_functionU_63 = YPmet(FUNCODEREF(fun_Uhandler_functionU_63),LITREF(lit_101),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(YPPlist(1,LITREF(lit_100)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YruntimeSruntimeYLconditionG));
  T86 = YPsig(YPPlist(5,LITREF(lit_90),LITREF(lit_72),LITREF(lit_97),LITREF(lit_98),LITREF(lit_99)),YPPlist(5,T87,VARREF(YruntimeSruntimeYLhandler_infoG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YPwith_monitor = YPmet(FUNCODEREF(YPwith_monitor),LITREF(lit_96),T86,ENVNUL,PNUL,YPfalse);
  T93 = YPwith_monitor;
  VARSET(YPwith_monitor,T93);
  lit_104 = YPPsym((P)"signal-handler-list");
  lit_105 = YPPsym((P)"handlers");
  T95 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(2,LITREF(lit_95),LITREF(lit_105)),YPPlist(2,VARREF(YruntimeSruntimeYLconditionG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YruntimeSruntimeYsignal_handler_list = YPmet(FUNCODEREF(YruntimeSruntimeYsignal_handler_list),LITREF(lit_104),T94,ENVNUL,PNUL,YPfalse);
  T96 = YruntimeSruntimeYsignal_handler_list;
  VARSET(YruntimeSruntimeYsignal_handler_list,T96);
  lit_106 = YPPsym((P)"sig");
  T97 = YPsig(YPPlist(2,LITREF(lit_95),LITREF(lit_27)),YPPlist(1,VARREF(YruntimeSruntimeYLconditionG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sig_70 = YPmet(FUNCODEREF(fun_sig_70),LITREF(lit_106),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YruntimeSruntimeYsig);
  if (T100 != YPfalse) {
    T99 = VARREF(YruntimeSruntimeYsig);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_sig_70;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YruntimeSruntimeYsig,T98);
  T102 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_27)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sig_71 = YPmet(FUNCODEREF(fun_sig_71),LITREF(lit_106),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YruntimeSruntimeYsig);
  if (T105 != YPfalse) {
    T104 = VARREF(YruntimeSruntimeYsig);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_sig_71;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YruntimeSruntimeYsig,T103);
  lit_107 = YPPsym((P)"error");
  T107 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_27)),YPPlist(1,VARREF(YruntimeSruntimeYLerrorG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_error_72 = YPmet(FUNCODEREF(fun_error_72),LITREF(lit_107),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(Yerror);
  if (T110 != YPfalse) {
    T109 = VARREF(Yerror);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_error_72;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(Yerror,T108);
  T112 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_27)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_error_73 = YPmet(FUNCODEREF(fun_error_73),LITREF(lit_107),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(Yerror);
  if (T115 != YPfalse) {
    T114 = VARREF(Yerror);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_error_73;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(Yerror,T113);
  lit_108 = YPPsym((P)"wrong-number-arguments-error");
  lit_109 = YPPsym((P)"fun");
  lit_110 = YPPsym((P)"n");
  lit_111 = YPsb((P)"%= CALLED WITH %= ARGUMENTS EXPECTED %=");
  T117 = YPsig(YPPlist(2,LITREF(lit_109),LITREF(lit_110)),YPPlist(2,VARREF(YLfunG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ywrong_number_arguments_error = YPmet(FUNCODEREF(Ywrong_number_arguments_error),LITREF(lit_108),T117,ENVNUL,PNUL,YPfalse);
  T118 = Ywrong_number_arguments_error;
  VARSET(Ywrong_number_arguments_error,T118);
  lit_112 = YPPsym((P)"unknown-function-error");
  lit_113 = YPsb((P)"UNKNOWN FUNCTION %= CALLED");
  T119 = YPsig(YPPlist(1,LITREF(lit_109)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yunknown_function_error = YPmet(FUNCODEREF(Yunknown_function_error),LITREF(lit_112),T119,ENVNUL,PNUL,YPfalse);
  T120 = Yunknown_function_error;
  VARSET(Yunknown_function_error,T120);
  lit_114 = YPPsym((P)"type-error");
  lit_115 = YPPsym((P)"arg");
  lit_116 = YPsb((P)"TYPE ERROR %= SHOULD BE A %=");
  T121 = YPsig(YPPlist(2,LITREF(lit_115),LITREF(lit_90)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ytype_error = YPmet(FUNCODEREF(Ytype_error),LITREF(lit_114),T121,ENVNUL,PNUL,YPfalse);
  T122 = Ytype_error;
  VARSET(Ytype_error,T122);
  lit_117 = YPPsym((P)"incongruent-method-error");
  lit_118 = YPPsym((P)"gen");
  lit_119 = YPPsym((P)"met");
  T123 = YPsig(YPPlist(2,LITREF(lit_118),LITREF(lit_119)),YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yincongruent_method_error = YPmet(FUNCODEREF(Yincongruent_method_error),LITREF(lit_117),T123,ENVNUL,PNUL,YPfalse);
  T124 = Yincongruent_method_error;
  VARSET(Yincongruent_method_error,T124);
  lit_120 = YPPsym((P)"do-handlers-of-type");
  lit_121 = YPPsym((P)"search");
  T127 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_search_78 = YPmet(FUNCODEREF(fun_search_78),LITREF(lit_121),T127,ENVNUL,PNUL,YPfalse);
  T126 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YruntimeSruntimeYLconditionG));
  T125 = YPsig(YPPlist(2,LITREF(lit_90),LITREF(lit_29)),YPPlist(2,T126,VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YruntimeSruntimeYdo_handlers_of_type = YPmet(FUNCODEREF(YruntimeSruntimeYdo_handlers_of_type),LITREF(lit_120),T125,ENVNUL,PNUL,YPfalse);
  T128 = YruntimeSruntimeYdo_handlers_of_type;
  VARSET(YruntimeSruntimeYdo_handlers_of_type,T128);
  lit_122 = YPPsym((P)"list-handlers");
  lit_123 = YPsb((P)"%d. %s.\n");
  T131 = YPsig(YPPlist(1,LITREF(lit_93)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YruntimeSruntimeYLconditionG));
  T129 = YPsig(YPPlist(2,LITREF(lit_90),LITREF(lit_45)),YPPlist(2,T130,VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScollectionsSbufferYLbufG),Ynil);
  YruntimeSruntimeYlist_handlers = YPmet(FUNCODEREF(YruntimeSruntimeYlist_handlers),LITREF(lit_122),T129,ENVNUL,PNUL,YPfalse);
  T132 = YruntimeSruntimeYlist_handlers;
  VARSET(YruntimeSruntimeYlist_handlers,T132);
  lit_124 = YPPsym((P)"invoke-handler-interactively");
  lit_125 = YPsb((P)"Handler %= does not match condition %=");
  lit_126 = YPsb((P)"Handler %= is not installed");
  T135 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_search_83 = YPmet(FUNCODEREF(fun_search_83),LITREF(lit_121),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(3,LITREF(lit_93),LITREF(lit_44),LITREF(lit_45)),YPPlist(3,VARREF(YruntimeSruntimeYLhandlerG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YruntimeSruntimeYinvoke_handler_interactively = YPmet(FUNCODEREF(YruntimeSruntimeYinvoke_handler_interactively),LITREF(lit_124),T133,ENVNUL,PNUL,YPfalse);
  T136 = YruntimeSruntimeYinvoke_handler_interactively;
  VARSET(YruntimeSruntimeYinvoke_handler_interactively,T136);
  lit_127 = YPPsym((P)"choose-handler");
  lit_128 = YPsb((P)"Please pick a handler: ");
  lit_129 = YPsb((P)"No such handler %d");
  T138 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YruntimeSruntimeYLconditionG));
  T137 = YPsig(YPPlist(3,LITREF(lit_90),LITREF(lit_44),LITREF(lit_45)),YPPlist(3,T138,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YruntimeSruntimeYchoose_handler = YPmet(FUNCODEREF(YruntimeSruntimeYchoose_handler),LITREF(lit_127),T137,ENVNUL,PNUL,YPfalse);
  T139 = YruntimeSruntimeYchoose_handler;
  VARSET(YruntimeSruntimeYchoose_handler,T139);
  VARSET(YTrestarts_okQT,YPtrue);
  lit_130 = YPPsym((P)"loc-val");
  T140 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YruntimeSruntimeYloc_val = YPmet(FUNCODEREF(YruntimeSruntimeYloc_val),LITREF(lit_130),T140,ENVNUL,PNUL,YPfalse);
  T141 = YruntimeSruntimeYloc_val;
  VARSET(YruntimeSruntimeYloc_val,T141);
  lit_131 = YPPsym((P)"loc-val-setter");
  lit_132 = YPPsym((P)"z");
  T142 = YPsig(YPPlist(2,LITREF(lit_132),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YruntimeSruntimeYloc_val_setter = YPmet(FUNCODEREF(YruntimeSruntimeYloc_val_setter),LITREF(lit_131),T142,ENVNUL,PNUL,YPfalse);
  T143 = YruntimeSruntimeYloc_val_setter;
  VARSET(YruntimeSruntimeYloc_val_setter,T143);
  lit_133 = YPPsym((P)"app-filename");
  T144 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YruntimeSruntimeYapp_filename = YPmet(FUNCODEREF(YruntimeSruntimeYapp_filename),LITREF(lit_133),T144,ENVNUL,PNUL,YPfalse);
  T145 = YruntimeSruntimeYapp_filename;
  VARSET(YruntimeSruntimeYapp_filename,T145);
  lit_134 = YPPsym((P)"app-args");
  T146 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YruntimeSruntimeYapp_args = YPmet(FUNCODEREF(YruntimeSruntimeYapp_args),LITREF(lit_134),T146,ENVNUL,PNUL,YPfalse);
  T147 = YruntimeSruntimeYapp_args;
  VARSET(YruntimeSruntimeYapp_args,T147);
  T148 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YgooScollectionsStableYLstr_tabG),YPint((P)10000));
  VARSET(YruntimeSruntimeYsymbols,T148);
  lit_135 = YPPsym((P)"booted-fab-sym");
  lit_136 = YPPsym((P)"name");
  T149 = YPsig(YPPlist(1,LITREF(lit_136)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YruntimeSruntimeYbooted_fab_sym = YPmet(FUNCODEREF(YruntimeSruntimeYbooted_fab_sym),LITREF(lit_135),T149,ENVNUL,PNUL,YPfalse);
  T150 = YruntimeSruntimeYbooted_fab_sym;
  VARSET(YruntimeSruntimeYbooted_fab_sym,T150);
  lit_137 = YPPsym((P)"boot-symbols");
  lit_138 = YPPsym((P)"boot");
  lit_139 = YPPsym((P)"syms");
  T152 = YPsig(YPPlist(1,LITREF(lit_139)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boot_92 = YPmet(FUNCODEREF(fun_boot_92),LITREF(lit_138),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YruntimeSruntimeYboot_symbols = YPmet(FUNCODEREF(YruntimeSruntimeYboot_symbols),LITREF(lit_137),T151,ENVNUL,PNUL,YPfalse);
  T153 = YruntimeSruntimeYboot_symbols;
  VARSET(YruntimeSruntimeYboot_symbols,T153);
  CALL0(1,VARREF(YruntimeSruntimeYboot_symbols));
  VARSET(Yfab_sym,VARREF(YruntimeSruntimeYbooted_fab_sym));
  tmpF1241 = YPfalse;
  if (tmpF1241 != YPfalse) {
    T154 = VARREF(YruntimeSruntimeYread);
  } else {
    T154 = YPfalse;
  }
  tmpF1242 = YPfalse;
  if (tmpF1242 != YPfalse) {
    T155 = VARREF(YruntimeSruntimeYformat);
  } else {
    T155 = YPfalse;
  }
  tmpF1243 = YPfalse;
  if (tmpF1243 != YPfalse) {
    T156 = VARREF(YruntimeSruntimeYformat_to_string);
  } else {
    T156 = YPfalse;
  }
  lit_140 = YPsb((P)"  always\n  app-args app-filename\n  as\n  ascii-limit ascii-whitespaces\n  buf <buf>\n  ceil ceiling/\n  describe-condition\n  port-contents\n  case-insensitive-string-hash\n  case-insensitive-string-equal\n  cat cat2 cat!\n  char->ascii\n  ready?\n  compose\n  <condition> condition-arguments condition-message\n  current-gc-state\n  curry\n  default\n  default-handler\n  del-vals\n  del-dups\n  del zap\n  do do2 do3 do-keyed\n  elt elt-setter elt-or low-elt low-elt-setter\n  empty empty?\n  eof-object eof-object?\n  error <error> <simple-error>\n  even?\n  fab fabs\n  <file-port> <file-in-port> \n  <file-out-port> \n  fill\n  fin-state?\n  first-then\n  find\n  flo-bits\n  floor floor/\n  force-out\n  from from-below from-to from-by from-to-by from-below-by from-above\n  from-above from-above-by\n  gensym\n  <handler> handler-function fab-handler handler-matches?\n  id-hash\n  identity\n  in\n  <incongruent-method-error>\n  ini-state copy-state\n  <in-port> port-line \n  keys\n  last\n  len len-setter len/fill-setter\n  list <list>\n  loc-val loc-val-setter\n  | ^ & ~ bit?\n  lower? upper?\n  lst\n  fab-setter-name\n  cat-sym\n  map map2 map-keyed\n  <map>\n  fab-map\n  match-atom match-empty-list match-sublist match-unquote\n  max min \n  modulo remainder\n  mem?\n  napp\n  neg neg?\n  newline\n  now-elt now-elt-setter\n  now-key\n  nul?\n  num-to-str\n  digit?\n  nxt-state\n  odd?\n  out\n  <out-port>\n  pair\n  pick\n  peek\n  $permanent-hash-state\n  <port> port-index\n  pos pos?\n  pop pop-last! push push-last!\n  *print-base*\n  <range>\n  rcurry\n  get\n  fold fold+\n  rev!\n  rev\n  round round/\n  <serious-condition>\n  sig\n  <simple-condition>\n  <step>\n  str\n  <str-tab>\n  str-to-num\n  <str-port> <str-in-port> <str-out-port>\n  sub sub-setter\n  <tab>\n  tab-growth-factor tab-growth-threshold tab-shrink-threshold tab-test tab-hash\n  to-digit\n  to-str\n  trunc\n  trunc/\n  tup\n  t+ t= t< t?\n  var-name var-type\n  vec\n  %with-monitor\n  put puts\n  zero?\n  )\n");
  T157 = LITREF(lit_140);
  return T157;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_runtimeSapply;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooScollectionsSoptionals;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_gooScollectionsSbuffer;
extern MODULE_INFO module_info_gooScollectionsStable;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmagnitude;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_runtimeSapply},
  {&module_info_gooScollectionsScollection},
  {&module_info_gooScollectionsSsequence},
  {&module_info_gooScollectionsSoptionals},
  {&module_info_gooScollectionsSlist},
  {&module_info_gooScollectionsSbuffer},
  {&module_info_gooScollectionsStable},
  {&module_info_gooSioSport},
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
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"ins!", &module_info_gooScollectionsSsequence, "ins!"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"~=", &module_info_gooSmath, "~="},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"@len", &module_info_runtimeSboot, "@len"},
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
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
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
  {"dc", &module_info_runtimeSboot, "dc"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
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
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"assqn", &module_info_gooScollectionsSlist, "assqn"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"~", &module_info_gooSmath, "~"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"~==", &module_info_gooSmath, "~=="},
  {"tab-test", &module_info_gooScollectionsStable, "tab-test"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"map", &module_info_gooSmacros, "map"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
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
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"case-insensitive-string-equal", &module_info_gooScollectionsStable, "case-insensitive-string-equal"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"$permanent-hash-state", &module_info_gooScollectionsStable, "$permanent-hash-state"},
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
  {"esc", &module_info_runtimeSboot, "esc"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
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
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
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
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"tab-gc-state", &module_info_gooScollectionsStable, "tab-gc-state"},
  {"finds", &module_info_gooScollectionsSsequence, "finds"},
  {"round", &module_info_gooSmath, "round"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"pow", &module_info_gooSmath, "pow"},
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
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"tab-growth-threshold", &module_info_gooScollectionsStable, "tab-growth-threshold"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"len", &module_info_gooStypes, "len"},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
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
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"range-error", &module_info_gooScollectionsScollection, "range-error"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
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
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"do", &module_info_gooSmacros, "do"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
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
  {"neg", &module_info_gooSmath, "neg"},
  {"push-last!", &module_info_gooScollectionsSbuffer, "push-last!"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"/", &module_info_gooSmath, "/"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"sinh", &module_info_gooSmath, "sinh"},
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
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"loc-val-setter", &YruntimeSruntimeYloc_val_setter},
  {"handler-function-setter", &YruntimeSruntimeYhandler_function_setter},
  {"condition-arguments-setter", &YruntimeSruntimeYcondition_arguments_setter},
  {"curry", &YruntimeSruntimeYcurry},
  {"incongruent-method-error-method", &YruntimeSruntimeYincongruent_method_error_method},
  {"build-condition-for-handler-interactively", &YruntimeSruntimeYbuild_condition_for_handler_interactively},
  {"build-condition-interactively", &YruntimeSruntimeYbuild_condition_interactively},
  {"loc-val", &YruntimeSruntimeYloc_val},
  {"default-handler", &YruntimeSruntimeYdefault_handler},
  {"---main-0---", NULL},
  {"---main-1---", NULL},
  {"describe-condition", &YruntimeSruntimeYdescribe_condition},
  {"handler-active?", &YruntimeSruntimeYhandler_activeQ},
  {"default-handler-description", &YruntimeSruntimeYdefault_handler_description},
  {"list-handlers", &YruntimeSruntimeYlist_handlers},
  {"identity", &YruntimeSruntimeYidentity},
  {"app-args", &YruntimeSruntimeYapp_args},
  {"choose-handler", &YruntimeSruntimeYchoose_handler},
  {"spread", &YruntimeSruntimeYspread},
  {"booted-fab-sym-using", NULL},
  {"handler-matches?", &YruntimeSruntimeYhandler_matchesQ},
  {"rcurry", &YruntimeSruntimeYrcurry},
  {"signal-handler-list", &YruntimeSruntimeYsignal_handler_list},
  {"incongruent-method-error-generic-setter", &YruntimeSruntimeYincongruent_method_error_generic_setter},
  {"$default-handler-info", &YruntimeSruntimeYDdefault_handler_info},
  {"condition-arguments", &YruntimeSruntimeYcondition_arguments},
  {"do-handlers-of-type", &YruntimeSruntimeYdo_handlers_of_type},
  {"format-to-string", &YruntimeSruntimeYformat_to_string},
  {"handler-test", &YruntimeSruntimeYhandler_test},
  {"fab-handler", &YruntimeSruntimeYfab_handler},
  {"incongruent-method-error-method-setter", &YruntimeSruntimeYincongruent_method_error_method_setter},
  {"read", &YruntimeSruntimeYread},
  {"<handler-info>", &YruntimeSruntimeYLhandler_infoG},
  {"*gensym-counter*", &YruntimeSruntimeYTgensym_counterT},
  {"handler-info-message-setter", &YruntimeSruntimeYhandler_info_message_setter},
  {"handler-info-setter", &YruntimeSruntimeYhandler_info_setter},
  {"handler-function", &YruntimeSruntimeYhandler_function},
  {"<incongruent-method-error>", &YruntimeSruntimeYLincongruent_method_errorG},
  {"symbols", &YruntimeSruntimeYsymbols},
  {"condition-message", &YruntimeSruntimeYcondition_message},
  {"<condition>", &YruntimeSruntimeYLconditionG},
  {"handler-condition-type", &YruntimeSruntimeYhandler_condition_type},
  {"condition-message-setter", &YruntimeSruntimeYcondition_message_setter},
  {"format", &YruntimeSruntimeYformat},
  {"handler-info", &YruntimeSruntimeYhandler_info},
  {"app-filename", &YruntimeSruntimeYapp_filename},
  {"*current-handlers*", &YruntimeSruntimeYTcurrent_handlersT},
  {"boot-symbols", &YruntimeSruntimeYboot_symbols},
  {"<restart>", &YruntimeSruntimeYLrestartG},
  {"invoke-handler-interactively", &YruntimeSruntimeYinvoke_handler_interactively},
  {"<simple-condition>", &YruntimeSruntimeYLsimple_conditionG},
  {"<simple-error>", &YruntimeSruntimeYLsimple_errorG},
  {"sig", &YruntimeSruntimeYsig},
  {"handler-test-setter", &YruntimeSruntimeYhandler_test_setter},
  {"<handler>", &YruntimeSruntimeYLhandlerG},
  {"booted-fab-sym", &YruntimeSruntimeYbooted_fab_sym},
  {"<serious-condition>", &YruntimeSruntimeYLserious_conditionG},
  {"compose", &YruntimeSruntimeYcompose},
  {"handler-condition-type-setter", &YruntimeSruntimeYhandler_condition_type_setter},
  {"handler-info-arguments-setter", &YruntimeSruntimeYhandler_info_arguments_setter},
  {"describe-handler", &YruntimeSruntimeYdescribe_handler},
  {"<error>", &YruntimeSruntimeYLerrorG},
  {"incongruent-method-error-generic", &YruntimeSruntimeYincongruent_method_error_generic},
  {"always", &YruntimeSruntimeYalways},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"match-empty-list", "match-empty-list"},
  {"var-type", "var-type"},
  {"loc-val-setter", "loc-val-setter"},
  {"curry", "curry"},
  {"build-condition-for-handler-interactively", "build-condition-for-handler-interactively"},
  {"build-condition-interactively", "build-condition-interactively"},
  {"default-handler", "default-handler"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"cat-sym", "cat-sym"},
  {"describe-condition", "describe-condition"},
  {"default-handler-description", "default-handler-description"},
  {"loc-val", "loc-val"},
  {"<replace-generic-restart>", "<replace-generic-restart>"},
  {"choose-handler", "choose-handler"},
  {"spread", "spread"},
  {"rcurry", "rcurry"},
  {"$default-handler-info", "$default-handler-info"},
  {"condition-arguments", "condition-arguments"},
  {"match-sublist", "match-sublist"},
  {"format-to-string", "format-to-string"},
  {"error", "error"},
  {"read", "read"},
  {"<handler-info>", "<handler-info>"},
  {"gensym", "gensym"},
  {"handler-function", "handler-function"},
  {"%with-monitor", "%with-monitor"},
  {"napp", "napp"},
  {"condition-message", "condition-message"},
  {"fab-handler", "fab-handler"},
  {"<condition>", "<condition>"},
  {"handler-info-message", "handler-info-message"},
  {"app-args", "app-args"},
  {"format", "format"},
  {"app-filename", "app-filename"},
  {"<restart>", "<restart>"},
  {"invoke-handler-interactively", "invoke-handler-interactively"},
  {"<simple-condition>", "<simple-condition>"},
  {"<simple-error>", "<simple-error>"},
  {"match-unquote", "match-unquote"},
  {"sig", "sig"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"fab-setter-name", "fab-setter-name"},
  {"<handler>", "<handler>"},
  {"identity", "identity"},
  {"var-name", "var-name"},
  {"match-atom", "match-atom"},
  {"<serious-condition>", "<serious-condition>"},
  {"compose", "compose"},
  {"*gensym-counter*", "*gensym-counter*"},
  {"describe-handler", "describe-handler"},
  {"handler-matches?", "handler-matches?"},
  {"<error>", "<error>"},
  {"list-handlers", "list-handlers"},
  {"always", "always"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_runtimeSruntime;
MODULE_INFO module_info_runtimeSruntime = {
  "runtime/runtime",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_runtimeSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_runtimeSapply (void);
extern void load_module_gooScollectionsScollection (void);
extern void load_module_gooScollectionsSsequence (void);
extern void load_module_gooScollectionsSoptionals (void);
extern void load_module_gooScollectionsSlist (void);
extern void load_module_gooScollectionsSbuffer (void);
extern void load_module_gooScollectionsStable (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_runtimeSruntime (void);

void load_module_runtimeSruntime (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_runtimeSapply();
  load_module_gooScollectionsScollection();
  load_module_gooScollectionsSsequence();
  load_module_gooScollectionsSoptionals();
  load_module_gooScollectionsSlist();
  load_module_gooScollectionsSbuffer();
  load_module_gooScollectionsStable();
  load_module_gooSioSport();

  (P)YruntimeSruntimeY___main_0___();
  (P)YruntimeSruntimeY___main_1___();

}

/* END OF GENERATED CODE. */
