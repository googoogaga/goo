/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/runtime */

EXT(YLoptsG,"goo/boot","<opts>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooSruntimeYhandler_condition_type_setter,"goo/runtime","handler-condition-type-setter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
EXT(Yerror,"goo/boot","error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
DEF(YgooSruntimeYboot_symbols,"goo/runtime","boot-symbols");
DEF(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Ytup,"goo/boot","tup");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
DEF(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
DEF(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooStypesY2nd,"goo/types","2nd");
DEF(YgooSruntimeYhandler_function_setter,"goo/runtime","handler-function-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YgooSruntimeYzipped,"goo/runtime","zipped");
DEF(YgooSruntimeYcondition_message_setter,"goo/runtime","condition-message-setter");
DEF(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(YgooSruntimeYbooted_fab_sym,"goo/runtime","booted-fab-sym");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
DEF(YgooSruntimeYhandler_info_arguments_setter,"goo/runtime","handler-info-arguments-setter");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
DEF(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YtT,"goo/boot","t*");
DEF(YgooSruntimeYhandler_condition_type,"goo/runtime","handler-condition-type");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YgooSruntimeYalways,"goo/runtime","always");
DEF(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSruntimeYhandler_activeQ,"goo/runtime","handler-active?");
DEF(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
DEF(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
DEF(YgooSruntimeYhandler_info_setter,"goo/runtime","handler-info-setter");
DEF(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YgooSruntimeYLincongruent_method_errorG,"goo/runtime","<incongruent-method-error>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YgooSruntimeYcurry,"goo/runtime","curry");
DEF(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YgooSruntimeYincongruent_method_error_generic_setter,"goo/runtime","incongruent-method-error-generic-setter");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YgooSruntimeYdo_handlers_of_type,"goo/runtime","do-handlers-of-type");
DEF(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yhead,"goo/boot","head");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YgooSruntimeYcondition_arguments_setter,"goo/runtime","condition-arguments-setter");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYA,"goo/math","+");
DEF(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
DEF(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLintG,"goo/boot","<int>");
DEF(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YgooSruntimeYhandler_info,"goo/runtime","handler-info");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
DEF(YgooSruntimeYsignal_handler_list,"goo/runtime","signal-handler-list");
DEF(YgooSruntimeYhandler_test,"goo/runtime","handler-test");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YgooSruntimeYincongruent_method_error_generic,"goo/runtime","incongruent-method-error-generic");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
DEF(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSportYgets,"goo/io/port","gets");
DEF(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
DEF(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
DEF(YgooSruntimeYsymbols,"goo/runtime","symbols");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Ynot,"goo/boot","not");
DEF(YgooSruntimeYhandler_info_message_setter,"goo/runtime","handler-info-message-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YgooSruntimeYhandler_test_setter,"goo/runtime","handler-test-setter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSportYget,"goo/io/port","get");
DEF(YgooSruntimeYincongruent_method_error_method_setter,"goo/runtime","incongruent-method-error-method-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YOlst,"goo/boot","@lst");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YgooSruntimeYincongruent_method_error_method,"goo/runtime","incongruent-method-error-method");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Ynew,"goo/boot","new");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
DEF(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmathYT,"goo/math","*");
DEF(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Ynul,"goo/boot","nul");
DEF(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_6);
DEFLIT(lit_40);
DEFLIT(lit_135);
DEFLIT(lit_108);
DEFLIT(lit_98);
DEFLIT(lit_37);
DEFLIT(lit_56);
DEFLIT(lit_89);
DEFLIT(lit_62);
DEFLIT(lit_46);
DEFLIT(lit_97);
DEFLIT(lit_99);
DEFLIT(lit_43);
DEFLIT(lit_27);
DEFLIT(lit_0);
DEFLIT(lit_24);
DEFLIT(lit_11);
DEFLIT(lit_121);
DEFLIT(lit_34);
DEFLIT(lit_111);
DEFLIT(lit_93);
DEFLIT(lit_134);
DEFLIT(lit_55);
DEFLIT(lit_53);
DEFLIT(lit_72);
DEFLIT(lit_17);
DEFLIT(lit_109);
DEFLIT(lit_5);
DEFLIT(lit_131);
DEFLIT(lit_79);
DEFLIT(lit_81);
DEFLIT(lit_35);
DEFLIT(lit_30);
DEFLIT(lit_84);
DEFLIT(lit_41);
DEFLIT(lit_67);
DEFLIT(lit_10);
DEFLIT(lit_58);
DEFLIT(lit_133);
DEFLIT(lit_29);
DEFLIT(lit_21);
DEFLIT(lit_26);
DEFLIT(lit_92);
DEFLIT(lit_120);
DEFLIT(lit_96);
DEFLIT(lit_31);
DEFLIT(lit_33);
DEFLIT(lit_112);
DEFLIT(lit_54);
DEFLIT(lit_57);
DEFLIT(lit_15);
DEFLIT(lit_47);
DEFLIT(lit_71);
DEFLIT(lit_100);
DEFLIT(lit_132);
DEFLIT(lit_4);
DEFLIT(lit_32);
DEFLIT(lit_68);
DEFLIT(lit_9);
DEFLIT(lit_63);
DEFLIT(lit_28);
DEFLIT(lit_22);
DEFLIT(lit_51);
DEFLIT(lit_101);
DEFLIT(lit_118);
DEFLIT(lit_61);
DEFLIT(lit_19);
DEFLIT(lit_75);
DEFLIT(lit_65);
DEFLIT(lit_123);
DEFLIT(lit_110);
DEFLIT(lit_129);
DEFLIT(lit_83);
DEFLIT(lit_82);
DEFLIT(lit_23);
DEFLIT(lit_87);
DEFLIT(lit_76);
DEFLIT(lit_127);
DEFLIT(lit_136);
DEFLIT(lit_8);
DEFLIT(lit_137);
DEFLIT(lit_49);
DEFLIT(lit_48);
DEFLIT(lit_85);
DEFLIT(lit_2);
DEFLIT(lit_124);
DEFLIT(lit_128);
DEFLIT(lit_102);
DEFLIT(lit_117);
DEFLIT(lit_39);
DEFLIT(lit_18);
DEFLIT(lit_69);
DEFLIT(lit_36);
DEFLIT(lit_38);
DEFLIT(lit_12);
DEFLIT(lit_50);
DEFLIT(lit_138);
DEFLIT(lit_64);
DEFLIT(lit_95);
DEFLIT(lit_113);
DEFLIT(lit_52);
DEFLIT(lit_125);
DEFLIT(lit_80);
DEFLIT(lit_119);
DEFLIT(lit_3);
DEFLIT(lit_7);
DEFLIT(lit_105);
DEFLIT(lit_104);
DEFLIT(lit_115);
DEFLIT(lit_66);
DEFLIT(lit_44);
DEFLIT(lit_45);
DEFLIT(lit_114);
DEFLIT(lit_116);
DEFLIT(lit_74);
DEFLIT(lit_126);
DEFLIT(lit_60);
DEFLIT(lit_88);
DEFLIT(lit_59);
DEFLIT(lit_42);
DEFLIT(lit_77);
DEFLIT(lit_94);
DEFLIT(lit_13);
DEFLIT(lit_122);
DEFLIT(lit_130);
DEFLIT(lit_91);
DEFLIT(lit_73);
DEFLIT(lit_107);
DEFLIT(lit_25);
DEFLIT(lit_78);
DEFLIT(lit_103);
DEFLIT(lit_70);
DEFLIT(lit_86);
DEFLIT(lit_14);
DEFLIT(lit_106);
DEFLIT(lit_16);
DEFLIT(lit_1);
DEFLIT(lit_90);
DEFLIT(lit_20);

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
LOCFOR(fun_zipped_22);
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
FUNFOR(YgooSruntimeYfab_handler);
FUNFOR(YgooSruntimeYhandler_activeQ);
FUNFOR(YgooSruntimeYhandler_matchesQ);
LOCFOR(fun_62);
LOCFOR(fun_Uhandler_functionU_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
FUNFOR(YPwith_monitor);
LOCFOR(fun_67);
FUNFOR(YgooSruntimeYsignal_handler_list);
LOCFOR(fun_sig_69);
LOCFOR(fun_sig_70);
LOCFOR(fun_error_71);
LOCFOR(fun_error_72);
FUNFOR(Ywrong_number_arguments_error);
FUNFOR(Yunknown_function_error);
FUNFOR(Ytype_error);
FUNFOR(Yincongruent_method_error);
LOCFOR(fun_search_77);
FUNFOR(YgooSruntimeYdo_handlers_of_type);
LOCFOR(fun_79);
FUNFOR(YgooSruntimeYlist_handlers);
LOCFOR(fun_81);
LOCFOR(fun_search_82);
FUNFOR(YgooSruntimeYinvoke_handler_interactively);
FUNFOR(YgooSruntimeYchoose_handler);
FUNFOR(YgooSruntimeYloc_val);
FUNFOR(YgooSruntimeYloc_val_setter);
FUNFOR(YgooSruntimeYapp_filename);
FUNFOR(YgooSruntimeYapp_args);
FUNFOR(YgooSruntimeYbooted_fab_sym);
LOCFOR(fun_boot_90);
FUNFOR(YgooSruntimeYboot_symbols);
extern P YgooSruntimeY___main_0___ ();
extern P YgooSruntimeY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSmacrosYmatch_empty_list) {
  P x_,fail_;
  P T0,T1,T2;
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
  P T0,T1,T2,T3;
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
  P expF1353;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
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
    expF1353 = T4;
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),expF1353,pat_);
    if (T6 != YPfalse) {
      T7 = CALL1(1,VARREF(Ytail),x_);
      T5 = T7;
    } else {
      T8 = CALL3(1,fail_,LITREF(lit_9),expF1353,pat_);
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
  P xF1354;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(fail_, 1);
loop:
  T1 = CALL1(1,VARREF(Yhead),x_);
  xF1354 = T1;
  T3 = CALL2(1,VARREF(YisaQ),xF1354,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T2 = xF1354;
  } else {
    T4 = CALL2(1,fail_,LITREF(lit_11),xF1354);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  P r_,e_;
  P T0,T1;
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
  P T0,T1,T2;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
  T2 = fun_4;
  T1 = CALL3(1,VARREF(YgooScolsScolYfold),T2,LITREF(lit_15),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_gensym_6) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T2 = CALL2(1,VARREF(YgooSmathYA),VARREF(YgooSruntimeYTgensym_counterT),YPint((P)1));
  T1 = VARSET(YgooSruntimeYTgensym_counterT,T2);
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
  P T0,T1;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,args_);
  T0 = CALL1(1,FREEREF(1),T1);
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
  T0 = FUNFAB(fun_13,2,fy_,fx_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_15) {
  P args_;
  P T0,T1;
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
  P savedcurriedF1355;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  NARGS(curried_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),curried_);
  savedcurriedF1355 = T1;
  T2 = FUNFAB(fun_15,2,f_,savedcurriedF1355);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_17) {
  P args_;
  P T0,T1;
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
  P savedcurriedF1356;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  NARGS(curried_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),curried_);
  savedcurriedF1356 = T1;
  T2 = FUNFAB(fun_17,2,f_,savedcurriedF1356);
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

FUNCODEDEF(fun_zipped_22) {
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
  T0 = CALL2(1,VARREF(YgooSruntimeYmsg_to_str),LITREF(lit_39),c_);
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
  T0 = CALL2(1,VARREF(YgooSruntimeYmsg_to_str),LITREF(lit_42),cond_type_);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSruntimeYcondition_message));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSruntimeYcondition_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSruntimeYcondition_arguments));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSruntimeYcondition_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_describe_condition_33) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSruntimeYcondition_message),c_);
  T2 = CALL1(1,VARREF(YgooSruntimeYcondition_arguments),c_);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSruntimeYmsg_to_str),YPfalse,T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_interactively_34) {
  P cond_type_,in_,out_;
  P condF1358;
  P next_metsF1357;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(cond_type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T2 = (P)YPnext_methods();
  next_metsF1357 = T2;
  if (next_metsF1357 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),next_metsF1357);
    T6 = CALL1(1,VARREF(Ytail),next_metsF1357);
    T4 = CALLN(1,VARREF(YgooSmacrosYnapp),6,T5,T6,cond_type_,in_,out_,Ynil);
    T3 = T4;
  } else {
    T7 = CALL1(1,VARREF(Yerror),LITREF(lit_53));
    T3 = T7;
  }
  T1 = T3;
  condF1358 = T1;
  CALL2(1,VARREF(YgooSruntimeYmsg),out_,LITREF(lit_54));
  T8 = CALL1(1,VARREF(YgooSruntimeYread),in_);
  CALL2(1,VARREF(YgooSruntimeYcondition_message_setter),T8,condF1358);
  CALL2(1,VARREF(YgooSruntimeYmsg),out_,LITREF(lit_55));
  T9 = CALL1(1,VARREF(YgooSruntimeYread),in_);
  CALL2(1,VARREF(YgooSruntimeYcondition_arguments_setter),T9,condF1358);
  T0 = condF1358;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_35) {
  P c_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSruntimeYdescribe_condition),c_);
  CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_57),T0);
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
  T0 = CALL2(1,VARREF(YgooSruntimeYmsg_to_str),LITREF(lit_61),cond_type_);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSruntimeYincongruent_method_error_generic));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSruntimeYincongruent_method_error_generic));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSruntimeYincongruent_method_error_method));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSruntimeYincongruent_method_error_method));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_41) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSruntimeYincongruent_method_error_method),c_);
  T2 = CALL1(1,VARREF(YgooSruntimeYincongruent_method_error_generic),c_);
  T0 = CALL3(1,VARREF(YgooSruntimeYmsg_to_str),LITREF(lit_67),T1,T2);
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
  T0 = CALL1(1,VARREF(YgooSruntimeYdefault_handler_description),condition_type_);
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
  T0 = CALL3(1,VARREF(YgooSruntimeYbuild_condition_interactively),condition_type_,in_,out_);
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
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_describe_handler_50) {
  P info_,condition_type_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
loop:
  T1 = CALL1(1,VARREF(Yhandler_info_message),info_);
  T2 = CALL1(1,VARREF(Yhandler_info_arguments),info_);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSruntimeYmsg_to_str),YPfalse,T1,T2);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSruntimeYhandler_condition_type));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSruntimeYhandler_condition_type));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSruntimeYhandler_info));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSruntimeYhandler_info));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSruntimeYhandler_test));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSruntimeYhandler_test));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSruntimeYhandler_function));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSruntimeYhandler_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYfab_handler) {
  P type_,info_,test_,f_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_, 2);
  ARG(f_, 3);
loop:
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSruntimeYLhandlerG),VARREF(YgooSruntimeYhandler_condition_type),type_,VARREF(YgooSruntimeYhandler_info),info_,VARREF(YgooSruntimeYhandler_test),test_,VARREF(YgooSruntimeYhandler_function),f_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSruntimeYhandler_activeQ) {
  P handler_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(handler_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSruntimeYhandler_test),handler_);
  T0 = CALL0(1,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSruntimeYhandler_matchesQ) {
  P handler_,condition_;
  P tmpF1359;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(handler_, 0);
  ARG(condition_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSruntimeYhandler_condition_type),handler_);
  T1 = CALL2(1,VARREF(YisaQ),condition_,T2);
  tmpF1359 = T1;
  if (tmpF1359 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSruntimeYhandler_activeQ),handler_);
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
  CALL2(1,FREEREF(1),FREEREF(0),UresumeU_);
  T0 = CALL0(1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Uhandler_functionU_63) {
  P condition_,Unext_handlerU_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(condition_, 0);
  ARG(Unext_handlerU_, 1);
loop:
  T1 = FUNFAB(fun_62,3,condition_,FREEREF(0),Unext_handlerU_);
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
  T0 = VARSET(YgooSruntimeYTcurrent_handlersT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPwith_monitor) {
  P type_,info_,test_fun_,user_handler_,main_fun_;
  P Uhandler_functionUF1361;
  P Uoriginal_handlersUF1360;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_fun_, 2);
  ARG(user_handler_, 3);
  ARG(main_fun_, 4);
loop:
  Uoriginal_handlersUF1360 = VARREF(YgooSruntimeYTcurrent_handlersT);
  T2 = FUNSHELL(0,fun_Uhandler_functionU_63,1);
  Uhandler_functionUF1361 = T2;
  FUNINIT(Uhandler_functionUF1361, 1,user_handler_);
  T4 = CALL4(1,VARREF(YgooSruntimeYfab_handler),type_,info_,test_fun_,Uhandler_functionUF1361);
  T3 = CALL2(1,VARREF(YgooScolsSseqxYpushX),VARREF(YgooSruntimeYTcurrent_handlersT),T4);
  VARSET(YgooSruntimeYTcurrent_handlersT,T3);
  T6 = FUNFAB(fun_64,1,main_fun_);
  T7 = FUNFAB(fun_65,1,Uoriginal_handlersUF1360);
  T5 = with_cleanup(T6,T7);
  T1 = T5;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSruntimeYsignal_handler_list),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYsignal_handler_list) {
  P condition_,handlers_;
  P remainingF1363;
  P handlerF1362;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(condition_, 0);
  ARG(handlers_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlers_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSruntimeYdefault_handler),condition_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),handlers_);
    handlerF1362 = T4;
    T6 = CALL1(1,VARREF(Ytail),handlers_);
    remainingF1363 = T6;
    T8 = CALL2(1,VARREF(YgooSruntimeYhandler_matchesQ),handlerF1362,condition_);
    if (T8 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooSruntimeYhandler_function),handlerF1362);
      T10 = FUNFAB(fun_67,2,condition_,remainingF1363);
      T9 = CALL2(1,T11,condition_,T10);
      T7 = T9;
    } else {
      T12 = CALL2(1,VARREF(YgooSruntimeYsignal_handler_list),condition_,remainingF1363);
      T7 = T12;
    }
    T5 = T7;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sig_69) {
  P condition_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(condition_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSruntimeYsignal_handler_list),condition_,VARREF(YgooSruntimeYTcurrent_handlersT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sig_70) {
  P c_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSruntimeYLsimple_conditionG),VARREF(YgooSruntimeYcondition_message),c_,VARREF(YgooSruntimeYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSruntimeYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_error_71) {
  P c_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,VARREF(YgooSruntimeYsig),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_error_72) {
  P c_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSruntimeYLsimple_errorG),VARREF(YgooSruntimeYcondition_message),c_,VARREF(YgooSruntimeYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(Yerror),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ywrong_number_arguments_error) {
  P fun_,n_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(fun_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,VARREF(Yfun_arity),fun_);
  T0 = CALL4(1,VARREF(Yerror),LITREF(lit_110),fun_,n_,T1);
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
  T0 = CALL2(1,VARREF(Yerror),LITREF(lit_112),fun_);
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
  T0 = CALL3(1,VARREF(Yerror),LITREF(lit_115),arg_,type_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yincongruent_method_error) {
  P gen_,met_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
loop:
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSruntimeYLincongruent_method_errorG),VARREF(YgooSruntimeYincongruent_method_error_generic),gen_,VARREF(YgooSruntimeYincongruent_method_error_method),met_);
  T0 = CALL1(1,VARREF(Yerror),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_search_77) {
  P handlers_;
  P tmpF1366;
  P remainingF1365;
  P handlerF1364;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(handlers_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlers_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T3 = CALL1(1,VARREF(Yhead),handlers_);
    handlerF1364 = T3;
    T5 = CALL1(1,VARREF(Ytail),handlers_);
    remainingF1365 = T5;
    T8 = CALL1(1,VARREF(YgooSruntimeYhandler_condition_type),handlerF1364);
    T7 = CALL2(1,VARREF(YsubtypeQ),T8,FREEREF(0));
    tmpF1366 = T7;
    if (tmpF1366 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooSruntimeYhandler_activeQ),handlerF1364);
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T6 = T9;
    if (T6 != YPfalse) {
      T11 = CALL1(1,FREEREF(1),handlerF1364);
    } else {
    }
    a1 = remainingF1365;
    handlers_ = a1;
    goto loop;
    T4 = T12;
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYdo_handlers_of_type) {
  P type_,f_;
  P searchF1367;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(f_, 1);
loop:
  T1 = FUNSHELL(1,fun_search_77,3);
  searchF1367 = T1;
  FUNINIT(searchF1367, 3,type_,f_,searchF1367);
  T2 = CALL1(0,searchF1367,VARREF(YgooSruntimeYTcurrent_handlersT));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P handler_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(handler_, 0);
loop:
  T0 = BOXVAL(FREEREF(1));
  T2 = CALL1(1,VARREF(YgooSruntimeYhandler_info),handler_);
  T3 = CALL1(1,VARREF(YgooSruntimeYhandler_condition_type),handler_);
  T1 = CALL2(1,VARREF(YgooSruntimeYdescribe_handler),T2,T3);
  CALL4(1,VARREF(YgooSruntimeYmsg),FREEREF(0),LITREF(lit_122),T0,T1);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),FREEREF(2),handler_);
  T6 = BOXVAL(FREEREF(1));
  T5 = CALL2(1,VARREF(YgooSmathYA),T6,YPint((P)1));
  T4 = BOXVAL(FREEREF(1)) = T5;
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(YgooSruntimeYlist_handlers) {
  P type_,out_;
  P applicableF1369;
  P iF1368;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(out_, 1);
loop:
  iF1368 = YPint((P)1);
  iF1368 = BOXFAB(iF1368);
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  applicableF1369 = T3;
  T4 = FUNFAB(fun_79,3,out_,iF1368,applicableF1369);
  CALL2(1,VARREF(YgooSruntimeYdo_handlers_of_type),type_,T4);
  T2 = applicableF1369;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_81) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSruntimeYsignal_handler_list),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_search_82) {
  P handlers_;
  P remainingF1371;
  P currentF1370;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(handlers_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlers_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yerror),LITREF(lit_125),FREEREF(0));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),handlers_);
    currentF1370 = T4;
    T6 = CALL1(1,VARREF(Ytail),handlers_);
    remainingF1371 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),currentF1370);
    if (T8 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooSruntimeYhandler_function),FREEREF(0));
      T10 = FUNFAB(fun_81,2,FREEREF(1),remainingF1371);
      T9 = CALL2(1,T11,FREEREF(1),T10);
      T7 = T9;
    } else {
      a1 = remainingF1371;
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

FUNCODEDEF(YgooSruntimeYinvoke_handler_interactively) {
  P handler_,in_,out_;
  P searchF1373;
  P conditionF1372;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(handler_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T2 = CALL1(1,VARREF(YgooSruntimeYhandler_info),handler_);
  T3 = CALL1(1,VARREF(YgooSruntimeYhandler_condition_type),handler_);
  T1 = CALL4(1,VARREF(YgooSruntimeYbuild_condition_for_handler_interactively),T2,T3,in_,out_);
  conditionF1372 = T1;
  T5 = CALL2(1,VARREF(YgooSruntimeYhandler_matchesQ),handler_,conditionF1372);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_124),handler_,conditionF1372);
  } else {
  }
  T8 = FUNSHELL(1,fun_search_82,3);
  searchF1373 = T8;
  FUNINIT(searchF1373, 3,handler_,conditionF1372,searchF1373);
  T9 = CALL1(0,searchF1373,VARREF(YgooSruntimeYTcurrent_handlersT));
  T7 = T9;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYchoose_handler) {
  P type_,in_,out_;
  P tmpF1376;
  P nF1375;
  P handlersF1374;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),type_,out_);
  handlersF1374 = T1;
  CALL2(1,VARREF(YgooSruntimeYmsg),out_,LITREF(lit_127));
  T4 = CALL1(1,VARREF(YgooSruntimeYread),in_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  nF1375 = T3;
  T6 = CALL2(1,VARREF(YgooSmagYL),nF1375,YPint((P)0));
  tmpF1376 = T6;
  if (tmpF1376 != YPfalse) {
    T7 = tmpF1376;
  } else {
    T9 = CALL1(1,VARREF(YgooStypesYlen),handlersF1374);
    T8 = CALL2(1,VARREF(YgooSmagYGE),nF1375,T9);
    T7 = T8;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T10 = CALL2(1,VARREF(Yerror),LITREF(lit_128),nF1375);
  } else {
  }
  T12 = CALL2(1,VARREF(YgooSmacrosYelt),handlersF1374,nF1375);
  T11 = CALL3(1,VARREF(YgooSruntimeYinvoke_handler_interactively),T12,in_,out_);
  T2 = T11;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYloc_val) {
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

FUNCODEDEF(YgooSruntimeYloc_val_setter) {
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

FUNCODEDEF(YgooSruntimeYapp_filename) {
  P T0;
LINK_STACK();
loop:
  T0 = (P)YPapp_filename();
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYapp_args) {
  P T0;
LINK_STACK();
loop:
  T0 = (P)YPapp_args();
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYbooted_fab_sym) {
  P name_;
  P tmpF1377;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),VARREF(YgooSruntimeYsymbols),name_,YPfalse);
  tmpF1377 = T1;
  if (tmpF1377 != YPfalse) {
    T2 = tmpF1377;
  } else {
    T4 = CALL3(1,VARREF(Ynew),VARREF(YLsymG),VARREF(Ysym_name),name_);
    T3 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),T4,VARREF(YgooSruntimeYsymbols),name_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boot_90) {
  P syms_;
  P symF1378;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(syms_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),syms_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),syms_);
    symF1378 = T4;
    T5 = CALL1(1,VARREF(Ysym_name),symF1378);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),symF1378,VARREF(YgooSruntimeYsymbols),T5);
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

FUNCODEDEF(YgooSruntimeYboot_symbols) {
  P bootF1379;
  P T0,T1,T2;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_boot_90,1);
  bootF1379 = T1;
  FUNINIT(bootF1379, 1,bootF1379);
  T2 = CALL1(0,bootF1379,VARREF(YPsymbols));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YgooSruntimeY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197;
DEFCREGS();
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
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YgooSmacrosYcat_sym,T10);
  VARSET(YgooSruntimeYTgensym_counterT,YPint((P)1000));
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
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T18);
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
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
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
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
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
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
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
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
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
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooSmacrosYvar_type,T40);
  lit_23 = YPPsym((P)"identity");
  T44 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_identity_12 = YPmet(FUNCODEREF(fun_identity_12),LITREF(lit_23),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YgooSruntimeYidentity);
  if (T47 != YPfalse) {
    T46 = VARREF(YgooSruntimeYidentity);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_identity_12;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YgooSruntimeYidentity,T45);
  lit_24 = YPPsym((P)"compose");
  lit_25 = YPPsym((P)"fx");
  lit_26 = YPPsym((P)"fy");
  lit_27 = YPPsym((P)"args");
  T50 = YPsig(YPPlist(1,LITREF(lit_27)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(2,LITREF(lit_25),LITREF(lit_26)),YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLfunG),Ynil);
  fun_compose_14 = YPmet(FUNCODEREF(fun_compose_14),LITREF(lit_24),T49,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YgooSruntimeYcompose);
  if (T53 != YPfalse) {
    T52 = VARREF(YgooSruntimeYcompose);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_compose_14;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YgooSruntimeYcompose,T51);
  lit_28 = YPPsym((P)"rcurry");
  lit_29 = YPPsym((P)"f");
  lit_30 = YPPsym((P)"curried");
  T56 = YPsig(YPPlist(1,LITREF(lit_27)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(2,LITREF(lit_29),LITREF(lit_30)),YPPlist(1,VARREF(YLfunG)),YPtrue,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_rcurry_16 = YPmet(FUNCODEREF(fun_rcurry_16),LITREF(lit_28),T55,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YgooSruntimeYrcurry);
  if (T59 != YPfalse) {
    T58 = VARREF(YgooSruntimeYrcurry);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_rcurry_16;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YgooSruntimeYrcurry,T57);
  lit_31 = YPPsym((P)"curry");
  T62 = YPsig(YPPlist(1,LITREF(lit_27)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(2,LITREF(lit_29),LITREF(lit_30)),YPPlist(1,VARREF(YLfunG)),YPtrue,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_curry_18 = YPmet(FUNCODEREF(fun_curry_18),LITREF(lit_31),T61,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YgooSruntimeYcurry);
  if (T65 != YPfalse) {
    T64 = VARREF(YgooSruntimeYcurry);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_curry_18;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YgooSruntimeYcurry,T63);
  lit_32 = YPPsym((P)"always");
  T68 = YPsig(YPPlist(1,LITREF(lit_27)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_always_20 = YPmet(FUNCODEREF(fun_always_20),LITREF(lit_32),T67,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YgooSruntimeYalways);
  if (T71 != YPfalse) {
    T70 = VARREF(YgooSruntimeYalways);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_always_20;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YgooSruntimeYalways,T69);
  lit_33 = YPPsym((P)"zipped");
  lit_34 = YPPsym((P)"t");
  T74 = YPsig(YPPlist(1,LITREF(lit_34)),YPPlist(1,VARREF(YLtupG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_zipped_22 = YPmet(FUNCODEREF(fun_zipped_22),LITREF(lit_33),T73,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YgooSruntimeYzipped);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooSruntimeYzipped);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_zipped_22;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooSruntimeYzipped,T75);
  lit_35 = YPPsym((P)"<condition>");
  T80 = (P)YPpair(VARREF(YLanyG),Ynil);
  T79 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_35),T80);
  VARSET(YgooSruntimeYLconditionG,T79);
  lit_36 = YPPsym((P)"default-handler");
  lit_37 = YPPsym((P)"c");
  T81 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YgooSruntimeYLconditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_handler_23 = YPmet(FUNCODEREF(fun_default_handler_23),LITREF(lit_36),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YgooSruntimeYdefault_handler);
  if (T84 != YPfalse) {
    T83 = VARREF(YgooSruntimeYdefault_handler);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_default_handler_23;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YgooSruntimeYdefault_handler,T82);
  lit_38 = YPPsym((P)"describe-condition");
  lit_39 = YPsb((P)"Anonymous condition %=");
  T86 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YgooSruntimeYLconditionG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_24 = YPmet(FUNCODEREF(fun_describe_condition_24),LITREF(lit_38),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YgooSruntimeYdescribe_condition);
  if (T89 != YPfalse) {
    T88 = VARREF(YgooSruntimeYdescribe_condition);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_describe_condition_24;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YgooSruntimeYdescribe_condition,T87);
  lit_40 = YPPsym((P)"default-handler-description");
  lit_41 = YPPsym((P)"cond-type");
  lit_42 = YPsb((P)"Anonymous handler for %s");
  T92 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSruntimeYLconditionG));
  T91 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,T92),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_25 = YPmet(FUNCODEREF(fun_default_handler_description_25),LITREF(lit_40),T91,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YgooSruntimeYdefault_handler_description);
  if (T95 != YPfalse) {
    T94 = VARREF(YgooSruntimeYdefault_handler_description);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_default_handler_description_25;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YgooSruntimeYdefault_handler_description,T93);
  lit_43 = YPPsym((P)"build-condition-interactively");
  lit_44 = YPPsym((P)"in");
  lit_45 = YPPsym((P)"out");
  T98 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSruntimeYLconditionG));
  T97 = YPsig(YPPlist(3,LITREF(lit_41),LITREF(lit_44),LITREF(lit_45)),YPPlist(3,T98,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YgooSruntimeYLconditionG),Ynil);
  fun_build_condition_interactively_26 = YPmet(FUNCODEREF(fun_build_condition_interactively_26),LITREF(lit_43),T97,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(YgooSruntimeYbuild_condition_interactively);
  if (T101 != YPfalse) {
    T100 = VARREF(YgooSruntimeYbuild_condition_interactively);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_build_condition_interactively_26;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YgooSruntimeYbuild_condition_interactively,T99);
  lit_46 = YPPsym((P)"<simple-condition>");
  T104 = (P)YPpair(VARREF(YgooSruntimeYLconditionG),Ynil);
  T103 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_46),T104);
  VARSET(YgooSruntimeYLsimple_conditionG,T103);
  lit_47 = YPPsym((P)"condition-message");
  lit_48 = YPPsym((P)"_x");
  T105 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YgooSruntimeYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_condition_message_27 = YPmet(FUNCODEREF(fun_condition_message_27),LITREF(lit_47),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YgooSruntimeYcondition_message);
  if (T108 != YPfalse) {
    T107 = VARREF(YgooSruntimeYcondition_message);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_condition_message_27;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YgooSruntimeYcondition_message,T106);
  lit_49 = YPPsym((P)"condition-message-setter");
  lit_50 = YPPsym((P)"_z");
  T110 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YLstrG),VARREF(YgooSruntimeYLsimple_conditionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_condition_message_setter_28 = YPmet(FUNCODEREF(fun_condition_message_setter_28),LITREF(lit_49),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YgooSruntimeYcondition_message_setter);
  if (T113 != YPfalse) {
    T112 = VARREF(YgooSruntimeYcondition_message_setter);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_condition_message_setter_28;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YgooSruntimeYcondition_message_setter,T111);
  T115 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T116 = fun_29;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSruntimeYLsimple_conditionG),VARREF(YgooSruntimeYcondition_message),VARREF(YgooSruntimeYcondition_message_setter),VARREF(YLstrG),T116);
  lit_51 = YPPsym((P)"condition-arguments");
  T117 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YgooSruntimeYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_condition_arguments_30 = YPmet(FUNCODEREF(fun_condition_arguments_30),LITREF(lit_51),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YgooSruntimeYcondition_arguments);
  if (T120 != YPfalse) {
    T119 = VARREF(YgooSruntimeYcondition_arguments);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_condition_arguments_30;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YgooSruntimeYcondition_arguments,T118);
  lit_52 = YPPsym((P)"condition-arguments-setter");
  T122 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YLlstG),VARREF(YgooSruntimeYLsimple_conditionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_condition_arguments_setter_31 = YPmet(FUNCODEREF(fun_condition_arguments_setter_31),LITREF(lit_52),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YgooSruntimeYcondition_arguments_setter);
  if (T125 != YPfalse) {
    T124 = VARREF(YgooSruntimeYcondition_arguments_setter);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_condition_arguments_setter_31;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YgooSruntimeYcondition_arguments_setter,T123);
  T127 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T128 = fun_32;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSruntimeYLsimple_conditionG),VARREF(YgooSruntimeYcondition_arguments),VARREF(YgooSruntimeYcondition_arguments_setter),VARREF(YLlstG),T128);
  T129 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YgooSruntimeYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_33 = YPmet(FUNCODEREF(fun_describe_condition_33),LITREF(lit_38),T129,ENVNUL,PNUL,YPfalse);
  T132 = BOUNDP(YgooSruntimeYdescribe_condition);
  if (T132 != YPfalse) {
    T131 = VARREF(YgooSruntimeYdescribe_condition);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_describe_condition_33;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YgooSruntimeYdescribe_condition,T130);
  lit_53 = YPsb((P)"No next methods");
  lit_54 = YPsb((P)"Condition format string: ");
  lit_55 = YPsb((P)"Condition format arguments: ");
  T135 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSruntimeYLsimple_conditionG));
  T134 = YPsig(YPPlist(3,LITREF(lit_41),LITREF(lit_44),LITREF(lit_45)),YPPlist(3,T135,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YgooSruntimeYLconditionG),Ynil);
  fun_build_condition_interactively_34 = YPmet(FUNCODEREF(fun_build_condition_interactively_34),LITREF(lit_43),T134,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YgooSruntimeYbuild_condition_interactively);
  if (T138 != YPfalse) {
    T137 = VARREF(YgooSruntimeYbuild_condition_interactively);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_build_condition_interactively_34;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YgooSruntimeYbuild_condition_interactively,T136);
  lit_56 = YPPsym((P)"<serious-condition>");
  T141 = (P)YPpair(VARREF(YgooSruntimeYLconditionG),Ynil);
  T140 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_56),T141);
  VARSET(YgooSruntimeYLserious_conditionG,T140);
  lit_57 = YPsb((P)"%s\n");
  T142 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YgooSruntimeYLserious_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_handler_35 = YPmet(FUNCODEREF(fun_default_handler_35),LITREF(lit_36),T142,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YgooSruntimeYdefault_handler);
  if (T145 != YPfalse) {
    T144 = VARREF(YgooSruntimeYdefault_handler);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_default_handler_35;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YgooSruntimeYdefault_handler,T143);
  lit_58 = YPPsym((P)"<error>");
  T148 = (P)YPpair(VARREF(YgooSruntimeYLserious_conditionG),Ynil);
  T147 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_58),T148);
  VARSET(YgooSruntimeYLerrorG,T147);
  lit_59 = YPPsym((P)"<simple-error>");
  T151 = (P)YPpair(VARREF(YgooSruntimeYLsimple_conditionG),Ynil);
  T150 = (P)YPpair(VARREF(YgooSruntimeYLerrorG),T151);
  T149 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_59),T150);
  VARSET(YgooSruntimeYLsimple_errorG,T149);
  lit_60 = YPPsym((P)"<restart>");
  T153 = (P)YPpair(VARREF(YgooSruntimeYLconditionG),Ynil);
  T152 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_60),T153);
  VARSET(YgooSruntimeYLrestartG,T152);
  lit_61 = YPsb((P)"Anonymous restart of type %s");
  T155 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSruntimeYLrestartG));
  T154 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,T155),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_36 = YPmet(FUNCODEREF(fun_default_handler_description_36),LITREF(lit_40),T154,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YgooSruntimeYdefault_handler_description);
  if (T158 != YPfalse) {
    T157 = VARREF(YgooSruntimeYdefault_handler_description);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_default_handler_description_36;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YgooSruntimeYdefault_handler_description,T156);
  lit_62 = YPPsym((P)"<incongruent-method-error>");
  T161 = (P)YPpair(VARREF(YgooSruntimeYLerrorG),Ynil);
  T160 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_62),T161);
  VARSET(YgooSruntimeYLincongruent_method_errorG,T160);
  lit_63 = YPPsym((P)"incongruent-method-error-generic");
  T162 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YgooSruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_generic_37 = YPmet(FUNCODEREF(fun_incongruent_method_error_generic_37),LITREF(lit_63),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YgooSruntimeYincongruent_method_error_generic);
  if (T165 != YPfalse) {
    T164 = VARREF(YgooSruntimeYincongruent_method_error_generic);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_incongruent_method_error_generic_37;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YgooSruntimeYincongruent_method_error_generic,T163);
  lit_64 = YPPsym((P)"incongruent-method-error-generic-setter");
  T167 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YLgenG),VARREF(YgooSruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_generic_setter_38 = YPmet(FUNCODEREF(fun_incongruent_method_error_generic_setter_38),LITREF(lit_64),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YgooSruntimeYincongruent_method_error_generic_setter);
  if (T170 != YPfalse) {
    T169 = VARREF(YgooSruntimeYincongruent_method_error_generic_setter);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_incongruent_method_error_generic_setter_38;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YgooSruntimeYincongruent_method_error_generic_setter,T168);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSruntimeYLincongruent_method_errorG),VARREF(YgooSruntimeYincongruent_method_error_generic),VARREF(YgooSruntimeYincongruent_method_error_generic_setter),VARREF(YLgenG),VARREF(YPprop_unbound_error));
  lit_65 = YPPsym((P)"incongruent-method-error-method");
  T172 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YgooSruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_method_39 = YPmet(FUNCODEREF(fun_incongruent_method_error_method_39),LITREF(lit_65),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YgooSruntimeYincongruent_method_error_method);
  if (T175 != YPfalse) {
    T174 = VARREF(YgooSruntimeYincongruent_method_error_method);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_incongruent_method_error_method_39;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YgooSruntimeYincongruent_method_error_method,T173);
  lit_66 = YPPsym((P)"incongruent-method-error-method-setter");
  T177 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YLmetG),VARREF(YgooSruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_method_setter_40 = YPmet(FUNCODEREF(fun_incongruent_method_error_method_setter_40),LITREF(lit_66),T177,ENVNUL,PNUL,YPfalse);
  T180 = BOUNDP(YgooSruntimeYincongruent_method_error_method_setter);
  if (T180 != YPfalse) {
    T179 = VARREF(YgooSruntimeYincongruent_method_error_method_setter);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_incongruent_method_error_method_setter_40;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YgooSruntimeYincongruent_method_error_method_setter,T178);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSruntimeYLincongruent_method_errorG),VARREF(YgooSruntimeYincongruent_method_error_method),VARREF(YgooSruntimeYincongruent_method_error_method_setter),VARREF(YLmetG),VARREF(YPprop_unbound_error));
  lit_67 = YPsb((P)"Method %= incongruent with generic %=.\n");
  T182 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YgooSruntimeYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_41 = YPmet(FUNCODEREF(fun_describe_condition_41),LITREF(lit_38),T182,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YgooSruntimeYdescribe_condition);
  if (T185 != YPfalse) {
    T184 = VARREF(YgooSruntimeYdescribe_condition);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_describe_condition_41;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YgooSruntimeYdescribe_condition,T183);
  lit_68 = YPPsym((P)"<replace-generic-restart>");
  T188 = (P)YPpair(VARREF(YgooSruntimeYLrestartG),Ynil);
  T187 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_68),T188);
  VARSET(YLreplace_generic_restartG,T187);
  lit_69 = YPsb((P)"Replace the generic function with an empty, congruent one");
  T192 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLreplace_generic_restartG));
  T191 = YPsig(YPPlist(1,LITREF(lit_41)),YPPlist(1,T192),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T190 = fun_default_handler_description_42 = YPmet(FUNCODEREF(fun_default_handler_description_42),LITREF(lit_40),T191,ENVNUL,PNUL,YPfalse);
  T196 = BOUNDP(YgooSruntimeYdefault_handler_description);
  if (T196 != YPfalse) {
    T195 = VARREF(YgooSruntimeYdefault_handler_description);
  } else {
    T195 = YPfalse;
  }
  T197 = fun_default_handler_description_42;
  T194 = XCALL2(1,VARREF(YPdefine_method),T195,T197);
  T193 = VARSET(YgooSruntimeYdefault_handler_description,T194);
  T189 = T193;
  return T189;
}

P YgooSruntimeY___main_1___() {
  P tmpF1382;
  P tmpF1381;
  P tmpF1380;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163;
DEFCREGS();
loop:
  lit_70 = YPPsym((P)"<handler-info>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_70),T1);
  VARSET(YgooSruntimeYLhandler_infoG,T0);
  lit_71 = YPPsym((P)"describe-handler");
  lit_72 = YPPsym((P)"info");
  lit_73 = YPPsym((P)"condition-type");
  T2 = YPsig(YPPlist(2,LITREF(lit_72),LITREF(lit_73)),YPPlist(2,VARREF(YgooSruntimeYLhandler_infoG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_describe_handler_43 = YPmet(FUNCODEREF(fun_describe_handler_43),LITREF(lit_71),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YgooSruntimeYdescribe_handler);
  if (T5 != YPfalse) {
    T4 = VARREF(YgooSruntimeYdescribe_handler);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_describe_handler_43;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YgooSruntimeYdescribe_handler,T3);
  lit_74 = YPPsym((P)"build-condition-for-handler-interactively");
  T7 = YPsig(YPPlist(4,LITREF(lit_72),LITREF(lit_73),LITREF(lit_44),LITREF(lit_45)),YPPlist(4,VARREF(YgooSruntimeYLhandler_infoG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YgooSruntimeYLconditionG),Ynil);
  fun_build_condition_for_handler_interactively_44 = YPmet(FUNCODEREF(fun_build_condition_for_handler_interactively_44),LITREF(lit_74),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YgooSruntimeYbuild_condition_for_handler_interactively);
  if (T10 != YPfalse) {
    T9 = VARREF(YgooSruntimeYbuild_condition_for_handler_interactively);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_build_condition_for_handler_interactively_44;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YgooSruntimeYbuild_condition_for_handler_interactively,T8);
  T12 = XCALL1(1,VARREF(Ynew),VARREF(YgooSruntimeYLhandler_infoG));
  VARSET(YgooSruntimeYDdefault_handler_info,T12);
  lit_75 = YPPsym((P)"<simple-handler-info>");
  T14 = (P)YPpair(VARREF(YgooSruntimeYLhandler_infoG),Ynil);
  T13 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_75),T14);
  VARSET(YLsimple_handler_infoG,T13);
  lit_76 = YPPsym((P)"handler-info-message");
  T15 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_message_45 = YPmet(FUNCODEREF(fun_handler_info_message_45),LITREF(lit_76),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(Yhandler_info_message);
  if (T18 != YPfalse) {
    T17 = VARREF(Yhandler_info_message);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_handler_info_message_45;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(Yhandler_info_message,T16);
  lit_77 = YPPsym((P)"handler-info-message-setter");
  T20 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YLstrG),VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_info_message_setter_46 = YPmet(FUNCODEREF(fun_handler_info_message_setter_46),LITREF(lit_77),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YgooSruntimeYhandler_info_message_setter);
  if (T23 != YPfalse) {
    T22 = VARREF(YgooSruntimeYhandler_info_message_setter);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_handler_info_message_setter_46;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YgooSruntimeYhandler_info_message_setter,T21);
  XCALL5(1,VARREF(YPprop),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),VARREF(YgooSruntimeYhandler_info_message_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_78 = YPPsym((P)"handler-info-arguments");
  T25 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_arguments_47 = YPmet(FUNCODEREF(fun_handler_info_arguments_47),LITREF(lit_78),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(Yhandler_info_arguments);
  if (T28 != YPfalse) {
    T27 = VARREF(Yhandler_info_arguments);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_handler_info_arguments_47;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(Yhandler_info_arguments,T26);
  lit_79 = YPPsym((P)"handler-info-arguments-setter");
  T30 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YLlstG),VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_info_arguments_setter_48 = YPmet(FUNCODEREF(fun_handler_info_arguments_setter_48),LITREF(lit_79),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YgooSruntimeYhandler_info_arguments_setter);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooSruntimeYhandler_info_arguments_setter);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_handler_info_arguments_setter_48;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooSruntimeYhandler_info_arguments_setter,T31);
  T35 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T36 = fun_49;
  XCALL5(1,VARREF(YPprop),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_arguments),VARREF(YgooSruntimeYhandler_info_arguments_setter),VARREF(YLlstG),T36);
  T37 = YPsig(YPPlist(2,LITREF(lit_72),LITREF(lit_73)),YPPlist(2,VARREF(YLsimple_handler_infoG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_describe_handler_50 = YPmet(FUNCODEREF(fun_describe_handler_50),LITREF(lit_71),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YgooSruntimeYdescribe_handler);
  if (T40 != YPfalse) {
    T39 = VARREF(YgooSruntimeYdescribe_handler);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_describe_handler_50;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YgooSruntimeYdescribe_handler,T38);
  VARSET(YgooSruntimeYTcurrent_handlersT,Ynil);
  lit_80 = YPPsym((P)"<handler>");
  T43 = (P)YPpair(VARREF(YLanyG),Ynil);
  T42 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_80),T43);
  VARSET(YgooSruntimeYLhandlerG,T42);
  lit_81 = YPPsym((P)"handler-condition-type");
  T44 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YgooSruntimeYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_condition_type_51 = YPmet(FUNCODEREF(fun_handler_condition_type_51),LITREF(lit_81),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YgooSruntimeYhandler_condition_type);
  if (T47 != YPfalse) {
    T46 = VARREF(YgooSruntimeYhandler_condition_type);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_handler_condition_type_51;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YgooSruntimeYhandler_condition_type,T45);
  lit_82 = YPPsym((P)"handler-condition-type-setter");
  T50 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSruntimeYLconditionG));
  T49 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,T50,VARREF(YgooSruntimeYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_condition_type_setter_52 = YPmet(FUNCODEREF(fun_handler_condition_type_setter_52),LITREF(lit_82),T49,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YgooSruntimeYhandler_condition_type_setter);
  if (T53 != YPfalse) {
    T52 = VARREF(YgooSruntimeYhandler_condition_type_setter);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_handler_condition_type_setter_52;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YgooSruntimeYhandler_condition_type_setter,T51);
  T55 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSruntimeYLconditionG));
  XCALL5(1,VARREF(YPprop),VARREF(YgooSruntimeYLhandlerG),VARREF(YgooSruntimeYhandler_condition_type),VARREF(YgooSruntimeYhandler_condition_type_setter),T55,VARREF(YPprop_unbound_error));
  lit_83 = YPPsym((P)"handler-info");
  T56 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YgooSruntimeYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_53 = YPmet(FUNCODEREF(fun_handler_info_53),LITREF(lit_83),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YgooSruntimeYhandler_info);
  if (T59 != YPfalse) {
    T58 = VARREF(YgooSruntimeYhandler_info);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_handler_info_53;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YgooSruntimeYhandler_info,T57);
  lit_84 = YPPsym((P)"handler-info-setter");
  T61 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YgooSruntimeYLhandler_infoG),VARREF(YgooSruntimeYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_info_setter_54 = YPmet(FUNCODEREF(fun_handler_info_setter_54),LITREF(lit_84),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YgooSruntimeYhandler_info_setter);
  if (T64 != YPfalse) {
    T63 = VARREF(YgooSruntimeYhandler_info_setter);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_handler_info_setter_54;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YgooSruntimeYhandler_info_setter,T62);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSruntimeYLhandlerG),VARREF(YgooSruntimeYhandler_info),VARREF(YgooSruntimeYhandler_info_setter),VARREF(YgooSruntimeYLhandler_infoG),VARREF(YPprop_unbound_error));
  lit_85 = YPPsym((P)"handler-test");
  T66 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YgooSruntimeYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_test_55 = YPmet(FUNCODEREF(fun_handler_test_55),LITREF(lit_85),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YgooSruntimeYhandler_test);
  if (T69 != YPfalse) {
    T68 = VARREF(YgooSruntimeYhandler_test);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_handler_test_55;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YgooSruntimeYhandler_test,T67);
  lit_86 = YPPsym((P)"handler-test-setter");
  T71 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YLfunG),VARREF(YgooSruntimeYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_test_setter_56 = YPmet(FUNCODEREF(fun_handler_test_setter_56),LITREF(lit_86),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YgooSruntimeYhandler_test_setter);
  if (T74 != YPfalse) {
    T73 = VARREF(YgooSruntimeYhandler_test_setter);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_handler_test_setter_56;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YgooSruntimeYhandler_test_setter,T72);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSruntimeYLhandlerG),VARREF(YgooSruntimeYhandler_test),VARREF(YgooSruntimeYhandler_test_setter),VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_87 = YPPsym((P)"handler-function");
  T76 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YgooSruntimeYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_function_57 = YPmet(FUNCODEREF(fun_handler_function_57),LITREF(lit_87),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YgooSruntimeYhandler_function);
  if (T79 != YPfalse) {
    T78 = VARREF(YgooSruntimeYhandler_function);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_handler_function_57;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YgooSruntimeYhandler_function,T77);
  lit_88 = YPPsym((P)"handler-function-setter");
  T81 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_48)),YPPlist(2,VARREF(YLfunG),VARREF(YgooSruntimeYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_function_setter_58 = YPmet(FUNCODEREF(fun_handler_function_setter_58),LITREF(lit_88),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YgooSruntimeYhandler_function_setter);
  if (T84 != YPfalse) {
    T83 = VARREF(YgooSruntimeYhandler_function_setter);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_handler_function_setter_58;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YgooSruntimeYhandler_function_setter,T82);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSruntimeYLhandlerG),VARREF(YgooSruntimeYhandler_function),VARREF(YgooSruntimeYhandler_function_setter),VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_89 = YPPsym((P)"fab-handler");
  lit_90 = YPPsym((P)"type");
  lit_91 = YPPsym((P)"test");
  T87 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSruntimeYLconditionG));
  T86 = YPsig(YPPlist(4,LITREF(lit_90),LITREF(lit_72),LITREF(lit_91),LITREF(lit_29)),YPPlist(4,T87,VARREF(YgooSruntimeYLhandler_infoG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YgooSruntimeYLhandlerG),Ynil);
  YgooSruntimeYfab_handler = YPmet(FUNCODEREF(YgooSruntimeYfab_handler),LITREF(lit_89),T86,ENVNUL,PNUL,YPfalse);
  T88 = YgooSruntimeYfab_handler;
  VARSET(YgooSruntimeYfab_handler,T88);
  lit_92 = YPPsym((P)"handler-active?");
  lit_93 = YPPsym((P)"handler");
  T89 = YPsig(YPPlist(1,LITREF(lit_93)),YPPlist(1,VARREF(YgooSruntimeYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSruntimeYhandler_activeQ = YPmet(FUNCODEREF(YgooSruntimeYhandler_activeQ),LITREF(lit_92),T89,ENVNUL,PNUL,YPfalse);
  T90 = YgooSruntimeYhandler_activeQ;
  VARSET(YgooSruntimeYhandler_activeQ,T90);
  lit_94 = YPPsym((P)"handler-matches?");
  lit_95 = YPPsym((P)"condition");
  T91 = YPsig(YPPlist(2,LITREF(lit_93),LITREF(lit_95)),YPPlist(2,VARREF(YgooSruntimeYLhandlerG),VARREF(YgooSruntimeYLconditionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSruntimeYhandler_matchesQ = YPmet(FUNCODEREF(YgooSruntimeYhandler_matchesQ),LITREF(lit_94),T91,ENVNUL,PNUL,YPfalse);
  T92 = YgooSruntimeYhandler_matchesQ;
  VARSET(YgooSruntimeYhandler_matchesQ,T92);
  lit_96 = YPPsym((P)"%with-monitor");
  lit_97 = YPPsym((P)"test-fun");
  lit_98 = YPPsym((P)"user-handler");
  lit_99 = YPPsym((P)"main-fun");
  lit_100 = YPPsym((P)"_handler-function_");
  lit_101 = YPPsym((P)"_next-handler_");
  lit_102 = YPPsym((P)"_resume_");
  T98 = YPsig(YPPlist(1,LITREF(lit_102)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(2,LITREF(lit_95),LITREF(lit_101)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Uhandler_functionU_63 = YPmet(FUNCODEREF(fun_Uhandler_functionU_63),LITREF(lit_100),T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T94 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSruntimeYLconditionG));
  T93 = YPsig(YPPlist(5,LITREF(lit_90),LITREF(lit_72),LITREF(lit_97),LITREF(lit_98),LITREF(lit_99)),YPPlist(5,T94,VARREF(YgooSruntimeYLhandler_infoG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YPwith_monitor = YPmet(FUNCODEREF(YPwith_monitor),LITREF(lit_96),T93,ENVNUL,PNUL,YPfalse);
  T99 = YPwith_monitor;
  VARSET(YPwith_monitor,T99);
  lit_103 = YPPsym((P)"signal-handler-list");
  lit_104 = YPPsym((P)"handlers");
  T101 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(YPPlist(2,LITREF(lit_95),LITREF(lit_104)),YPPlist(2,VARREF(YgooSruntimeYLconditionG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSruntimeYsignal_handler_list = YPmet(FUNCODEREF(YgooSruntimeYsignal_handler_list),LITREF(lit_103),T100,ENVNUL,PNUL,YPfalse);
  T102 = YgooSruntimeYsignal_handler_list;
  VARSET(YgooSruntimeYsignal_handler_list,T102);
  lit_105 = YPPsym((P)"sig");
  T103 = YPsig(YPPlist(2,LITREF(lit_95),LITREF(lit_27)),YPPlist(1,VARREF(YgooSruntimeYLconditionG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sig_69 = YPmet(FUNCODEREF(fun_sig_69),LITREF(lit_105),T103,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(YgooSruntimeYsig);
  if (T106 != YPfalse) {
    T105 = VARREF(YgooSruntimeYsig);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_sig_69;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YgooSruntimeYsig,T104);
  T108 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_27)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sig_70 = YPmet(FUNCODEREF(fun_sig_70),LITREF(lit_105),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YgooSruntimeYsig);
  if (T111 != YPfalse) {
    T110 = VARREF(YgooSruntimeYsig);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_sig_70;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YgooSruntimeYsig,T109);
  lit_106 = YPPsym((P)"error");
  T113 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_27)),YPPlist(1,VARREF(YgooSruntimeYLerrorG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_error_71 = YPmet(FUNCODEREF(fun_error_71),LITREF(lit_106),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(Yerror);
  if (T116 != YPfalse) {
    T115 = VARREF(Yerror);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_error_71;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(Yerror,T114);
  T118 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_27)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_error_72 = YPmet(FUNCODEREF(fun_error_72),LITREF(lit_106),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(Yerror);
  if (T121 != YPfalse) {
    T120 = VARREF(Yerror);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_error_72;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(Yerror,T119);
  lit_107 = YPPsym((P)"wrong-number-arguments-error");
  lit_108 = YPPsym((P)"fun");
  lit_109 = YPPsym((P)"n");
  lit_110 = YPsb((P)"%= CALLED WITH %= ARGUMENTS EXPECTED %=");
  T123 = YPsig(YPPlist(2,LITREF(lit_108),LITREF(lit_109)),YPPlist(2,VARREF(YLfunG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ywrong_number_arguments_error = YPmet(FUNCODEREF(Ywrong_number_arguments_error),LITREF(lit_107),T123,ENVNUL,PNUL,YPfalse);
  T124 = Ywrong_number_arguments_error;
  VARSET(Ywrong_number_arguments_error,T124);
  lit_111 = YPPsym((P)"unknown-function-error");
  lit_112 = YPsb((P)"UNKNOWN FUNCTION %= CALLED");
  T125 = YPsig(YPPlist(1,LITREF(lit_108)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yunknown_function_error = YPmet(FUNCODEREF(Yunknown_function_error),LITREF(lit_111),T125,ENVNUL,PNUL,YPfalse);
  T126 = Yunknown_function_error;
  VARSET(Yunknown_function_error,T126);
  lit_113 = YPPsym((P)"type-error");
  lit_114 = YPPsym((P)"arg");
  lit_115 = YPsb((P)"TYPE ERROR %= SHOULD BE A %=");
  T127 = YPsig(YPPlist(2,LITREF(lit_114),LITREF(lit_90)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ytype_error = YPmet(FUNCODEREF(Ytype_error),LITREF(lit_113),T127,ENVNUL,PNUL,YPfalse);
  T128 = Ytype_error;
  VARSET(Ytype_error,T128);
  lit_116 = YPPsym((P)"incongruent-method-error");
  lit_117 = YPPsym((P)"gen");
  lit_118 = YPPsym((P)"met");
  T129 = YPsig(YPPlist(2,LITREF(lit_117),LITREF(lit_118)),YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yincongruent_method_error = YPmet(FUNCODEREF(Yincongruent_method_error),LITREF(lit_116),T129,ENVNUL,PNUL,YPfalse);
  T130 = Yincongruent_method_error;
  VARSET(Yincongruent_method_error,T130);
  lit_119 = YPPsym((P)"do-handlers-of-type");
  lit_120 = YPPsym((P)"search");
  T133 = YPsig(YPPlist(1,LITREF(lit_104)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_search_77 = YPmet(FUNCODEREF(fun_search_77),LITREF(lit_120),T133,ENVNUL,PNUL,YPfalse);
  T132 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSruntimeYLconditionG));
  T131 = YPsig(YPPlist(2,LITREF(lit_90),LITREF(lit_29)),YPPlist(2,T132,VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSruntimeYdo_handlers_of_type = YPmet(FUNCODEREF(YgooSruntimeYdo_handlers_of_type),LITREF(lit_119),T131,ENVNUL,PNUL,YPfalse);
  T134 = YgooSruntimeYdo_handlers_of_type;
  VARSET(YgooSruntimeYdo_handlers_of_type,T134);
  lit_121 = YPPsym((P)"list-handlers");
  lit_122 = YPsb((P)"%d. %s.\n");
  T137 = YPsig(YPPlist(1,LITREF(lit_93)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T136 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSruntimeYLconditionG));
  T135 = YPsig(YPPlist(2,LITREF(lit_90),LITREF(lit_45)),YPPlist(2,T136,VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  YgooSruntimeYlist_handlers = YPmet(FUNCODEREF(YgooSruntimeYlist_handlers),LITREF(lit_121),T135,ENVNUL,PNUL,YPfalse);
  T138 = YgooSruntimeYlist_handlers;
  VARSET(YgooSruntimeYlist_handlers,T138);
  lit_123 = YPPsym((P)"invoke-handler-interactively");
  lit_124 = YPsb((P)"Handler %= does not match condition %=");
  lit_125 = YPsb((P)"Handler %= is not installed");
  T141 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_104)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_search_82 = YPmet(FUNCODEREF(fun_search_82),LITREF(lit_120),T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(3,LITREF(lit_93),LITREF(lit_44),LITREF(lit_45)),YPPlist(3,VARREF(YgooSruntimeYLhandlerG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSruntimeYinvoke_handler_interactively = YPmet(FUNCODEREF(YgooSruntimeYinvoke_handler_interactively),LITREF(lit_123),T139,ENVNUL,PNUL,YPfalse);
  T142 = YgooSruntimeYinvoke_handler_interactively;
  VARSET(YgooSruntimeYinvoke_handler_interactively,T142);
  lit_126 = YPPsym((P)"choose-handler");
  lit_127 = YPsb((P)"Please pick a handler: ");
  lit_128 = YPsb((P)"No such handler %d");
  T144 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSruntimeYLconditionG));
  T143 = YPsig(YPPlist(3,LITREF(lit_90),LITREF(lit_44),LITREF(lit_45)),YPPlist(3,T144,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSruntimeYchoose_handler = YPmet(FUNCODEREF(YgooSruntimeYchoose_handler),LITREF(lit_126),T143,ENVNUL,PNUL,YPfalse);
  T145 = YgooSruntimeYchoose_handler;
  VARSET(YgooSruntimeYchoose_handler,T145);
  VARSET(YTrestarts_okQT,YPtrue);
  lit_129 = YPPsym((P)"loc-val");
  T146 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSruntimeYloc_val = YPmet(FUNCODEREF(YgooSruntimeYloc_val),LITREF(lit_129),T146,ENVNUL,PNUL,YPfalse);
  T147 = YgooSruntimeYloc_val;
  VARSET(YgooSruntimeYloc_val,T147);
  lit_130 = YPPsym((P)"loc-val-setter");
  lit_131 = YPPsym((P)"z");
  T148 = YPsig(YPPlist(2,LITREF(lit_131),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSruntimeYloc_val_setter = YPmet(FUNCODEREF(YgooSruntimeYloc_val_setter),LITREF(lit_130),T148,ENVNUL,PNUL,YPfalse);
  T149 = YgooSruntimeYloc_val_setter;
  VARSET(YgooSruntimeYloc_val_setter,T149);
  lit_132 = YPPsym((P)"app-filename");
  T150 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSruntimeYapp_filename = YPmet(FUNCODEREF(YgooSruntimeYapp_filename),LITREF(lit_132),T150,ENVNUL,PNUL,YPfalse);
  T151 = YgooSruntimeYapp_filename;
  VARSET(YgooSruntimeYapp_filename,T151);
  lit_133 = YPPsym((P)"app-args");
  T152 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSruntimeYapp_args = YPmet(FUNCODEREF(YgooSruntimeYapp_args),LITREF(lit_133),T152,ENVNUL,PNUL,YPfalse);
  T153 = YgooSruntimeYapp_args;
  VARSET(YgooSruntimeYapp_args,T153);
  T154 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsStabYLstr_tabG),YPint((P)10000));
  VARSET(YgooSruntimeYsymbols,T154);
  lit_134 = YPPsym((P)"booted-fab-sym");
  lit_135 = YPPsym((P)"name");
  T155 = YPsig(YPPlist(1,LITREF(lit_135)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSruntimeYbooted_fab_sym = YPmet(FUNCODEREF(YgooSruntimeYbooted_fab_sym),LITREF(lit_134),T155,ENVNUL,PNUL,YPfalse);
  T156 = YgooSruntimeYbooted_fab_sym;
  VARSET(YgooSruntimeYbooted_fab_sym,T156);
  lit_136 = YPPsym((P)"boot-symbols");
  lit_137 = YPPsym((P)"boot");
  lit_138 = YPPsym((P)"syms");
  T158 = YPsig(YPPlist(1,LITREF(lit_138)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boot_90 = YPmet(FUNCODEREF(fun_boot_90),LITREF(lit_137),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSruntimeYboot_symbols = YPmet(FUNCODEREF(YgooSruntimeYboot_symbols),LITREF(lit_136),T157,ENVNUL,PNUL,YPfalse);
  T159 = YgooSruntimeYboot_symbols;
  VARSET(YgooSruntimeYboot_symbols,T159);
  XCALL0(1,VARREF(YgooSruntimeYboot_symbols));
  VARSET(Yfab_sym,VARREF(YgooSruntimeYbooted_fab_sym));
  tmpF1380 = YPfalse;
  if (tmpF1380 != YPfalse) {
    T160 = VARREF(YgooSruntimeYread);
  } else {
    T160 = YPfalse;
  }
  tmpF1381 = YPfalse;
  if (tmpF1381 != YPfalse) {
    T161 = VARREF(YgooSruntimeYmsg);
  } else {
    T161 = YPfalse;
  }
  tmpF1382 = YPfalse;
  if (tmpF1382 != YPfalse) {
    T162 = VARREF(YgooSruntimeYmsg_to_str);
  } else {
    T162 = YPfalse;
  }
  T163 = YPfalse;
  return T163;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSapp;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSopts;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsStup;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooSapp},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {&module_info_gooScolsSopts},
  {&module_info_gooScolsSlst},
  {&module_info_gooScolsStup},
  {&module_info_gooScolsSvec},
  {&module_info_gooScolsStab},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"until", &module_info_gooSmacros, "until"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%str", &module_info_gooSboot, "%str"},
  {"close", &module_info_gooSioSport, "close"},
  {"error", &module_info_gooSboot, "error"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"out", &module_info_gooSioSport, "out"},
  {"lst", &module_info_gooSboot, "lst"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"round/", &module_info_gooSmath, "round/"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"when", &module_info_gooSmacros, "when"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"tail", &module_info_gooSboot, "tail"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"dv", &module_info_gooSboot, "dv"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"set", &module_info_gooSboot, "set"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"col", &module_info_gooScolsScol, "col"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"1-", &module_info_gooSmath, "1-"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"mif", &module_info_gooSboot, "mif"},
  {"as", &module_info_gooStypes, "as"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {">=", &module_info_gooSmag, ">="},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"def", &module_info_gooSboot, "def"},
  {"len", &module_info_gooStypes, "len"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"if", &module_info_gooSboot, "if"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%su", &module_info_gooSboot, "%su"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"logn", &module_info_gooSmath, "logn"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"do", &module_info_gooSmacros, "do"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"open", &module_info_gooSioSport, "open"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"match", &module_info_gooSmacros, "match"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%im", &module_info_gooSboot, "%im"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"and", &module_info_gooSmacros, "and"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<=", &module_info_gooSmag, "<="},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"op", &module_info_gooSmacros, "op"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"~", &module_info_gooSmath, "~"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"let", &module_info_gooSboot, "let"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"add", &module_info_gooScolsScol, "add"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"while", &module_info_gooSmacros, "while"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"|", &module_info_gooSmath, "|"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"use", &module_info_gooSboot, "use"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"seq", &module_info_gooSboot, "seq"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"~=", &module_info_gooSmath, "~="},
  {"find", &module_info_gooScolsScol, "find"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"into", &module_info_gooScolsScol, "into"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"acos", &module_info_gooSmath, "acos"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"for", &module_info_gooSmacros, "for"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"-", &module_info_gooSmath, "-"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"or", &module_info_gooSmacros, "or"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"head", &module_info_gooSboot, "head"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"dss", &module_info_gooSboot, "dss"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"+", &module_info_gooSmath, "+"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"export", &module_info_gooSboot, "export"},
  {"map", &module_info_gooSmacros, "map"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"try", &module_info_gooSboot, "try"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"app", &module_info_gooSmacros, "app"},
  {"1+", &module_info_gooSmath, "1+"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"items", &module_info_gooScolsScol, "items"},
  {"sin", &module_info_gooSmath, "sin"},
  {"div", &module_info_gooSmath, "div"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"@<", &module_info_gooSboot, "@<"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dl", &module_info_gooSboot, "dl"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {">>", &module_info_gooSmath, ">>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"abs", &module_info_gooSmath, "abs"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"&", &module_info_gooSmath, "&"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"t?", &module_info_gooStypes, "t?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"in", &module_info_gooSioSport, "in"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {">", &module_info_gooSmag, ">"},
  {"==", &module_info_gooSmacros, "=="},
  {"peek", &module_info_gooSioSport, "peek"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"round", &module_info_gooSmath, "round"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"fin", &module_info_gooSboot, "fin"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"any?", &module_info_gooStypes, "any?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<", &module_info_gooSmag, "<"},
  {"case", &module_info_gooSmacros, "case"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"t<", &module_info_gooStypes, "t<"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"=", &module_info_gooSmath, "="},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"@len", &module_info_gooSboot, "@len"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"esc", &module_info_gooSboot, "esc"},
  {"@==", &module_info_gooSboot, "@=="},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"/", &module_info_gooSmath, "/"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"asin", &module_info_gooSmath, "asin"},
  {"neg", &module_info_gooSmath, "neg"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"not", &module_info_gooSboot, "not"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"t=", &module_info_gooStypes, "t="},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%get", &module_info_gooSboot, "%get"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"get", &module_info_gooSioSport, "get"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"log", &module_info_gooSmath, "log"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"rem", &module_info_gooSmath, "rem"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"df", &module_info_gooSboot, "df"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"^", &module_info_gooSmath, "^"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"t+", &module_info_gooStypes, "t+"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"~==", &module_info_gooSmath, "~=="},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"%time", &module_info_gooSboot, "%time"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"put", &module_info_gooSioSport, "put"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"dg", &module_info_gooSboot, "dg"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"even?", &module_info_gooSmath, "even?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"dc", &module_info_gooSboot, "dc"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"tan", &module_info_gooSmath, "tan"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"floor", &module_info_gooSmath, "floor"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"del", &module_info_gooScolsScol, "del"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"new", &module_info_gooSboot, "new"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"@+", &module_info_gooSboot, "@+"},
  {"max", &module_info_gooSmag, "max"},
  {"*", &module_info_gooSmath, "*"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"nul", &module_info_gooSboot, "nul"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"handler-condition-type-setter", CVAR, &YgooSruntimeYhandler_condition_type_setter},
  {"*current-handlers*", CVAR, &YgooSruntimeYTcurrent_handlersT},
  {"boot-symbols", CVAR, &YgooSruntimeYboot_symbols},
  {"<restart>", CVAR, &YgooSruntimeYLrestartG},
  {"---main-1---", PVAR, NULL},
  {"*gensym-counter*", CVAR, &YgooSruntimeYTgensym_counterT},
  {"compose", CVAR, &YgooSruntimeYcompose},
  {"handler-function-setter", CVAR, &YgooSruntimeYhandler_function_setter},
  {"zipped", CVAR, &YgooSruntimeYzipped},
  {"condition-message-setter", CVAR, &YgooSruntimeYcondition_message_setter},
  {"build-condition-interactively", CVAR, &YgooSruntimeYbuild_condition_interactively},
  {"booted-fab-sym", CVAR, &YgooSruntimeYbooted_fab_sym},
  {"handler-info-arguments-setter", CVAR, &YgooSruntimeYhandler_info_arguments_setter},
  {"invoke-handler-interactively", CVAR, &YgooSruntimeYinvoke_handler_interactively},
  {"identity", CVAR, &YgooSruntimeYidentity},
  {"handler-condition-type", CVAR, &YgooSruntimeYhandler_condition_type},
  {"handler-matches?", CVAR, &YgooSruntimeYhandler_matchesQ},
  {"always", CVAR, &YgooSruntimeYalways},
  {"handler-function", CVAR, &YgooSruntimeYhandler_function},
  {"handler-active?", CVAR, &YgooSruntimeYhandler_activeQ},
  {"condition-message", CVAR, &YgooSruntimeYcondition_message},
  {"list-handlers", CVAR, &YgooSruntimeYlist_handlers},
  {"default-handler-description", CVAR, &YgooSruntimeYdefault_handler_description},
  {"<handler-info>", CVAR, &YgooSruntimeYLhandler_infoG},
  {"handler-info-setter", CVAR, &YgooSruntimeYhandler_info_setter},
  {"<simple-error>", CVAR, &YgooSruntimeYLsimple_errorG},
  {"<incongruent-method-error>", CVAR, &YgooSruntimeYLincongruent_method_errorG},
  {"read", CVAR, &YgooSruntimeYread},
  {"curry", CVAR, &YgooSruntimeYcurry},
  {"msg", CVAR, &YgooSruntimeYmsg},
  {"incongruent-method-error-generic-setter", CVAR, &YgooSruntimeYincongruent_method_error_generic_setter},
  {"do-handlers-of-type", CVAR, &YgooSruntimeYdo_handlers_of_type},
  {"sig", CVAR, &YgooSruntimeYsig},
  {"condition-arguments-setter", CVAR, &YgooSruntimeYcondition_arguments_setter},
  {"describe-condition", CVAR, &YgooSruntimeYdescribe_condition},
  {"fab-handler", CVAR, &YgooSruntimeYfab_handler},
  {"---main-0---", PVAR, NULL},
  {"<handler>", CVAR, &YgooSruntimeYLhandlerG},
  {"msg-to-str", CVAR, &YgooSruntimeYmsg_to_str},
  {"handler-info", CVAR, &YgooSruntimeYhandler_info},
  {"loc-val-setter", CVAR, &YgooSruntimeYloc_val_setter},
  {"signal-handler-list", CVAR, &YgooSruntimeYsignal_handler_list},
  {"handler-test", CVAR, &YgooSruntimeYhandler_test},
  {"incongruent-method-error-generic", CVAR, &YgooSruntimeYincongruent_method_error_generic},
  {"default-handler", CVAR, &YgooSruntimeYdefault_handler},
  {"condition-arguments", CVAR, &YgooSruntimeYcondition_arguments},
  {"<serious-condition>", CVAR, &YgooSruntimeYLserious_conditionG},
  {"app-args", CVAR, &YgooSruntimeYapp_args},
  {"rcurry", CVAR, &YgooSruntimeYrcurry},
  {"app-filename", CVAR, &YgooSruntimeYapp_filename},
  {"build-condition-for-handler-interactively", CVAR, &YgooSruntimeYbuild_condition_for_handler_interactively},
  {"symbols", CVAR, &YgooSruntimeYsymbols},
  {"handler-info-message-setter", CVAR, &YgooSruntimeYhandler_info_message_setter},
  {"$default-handler-info", CVAR, &YgooSruntimeYDdefault_handler_info},
  {"handler-test-setter", CVAR, &YgooSruntimeYhandler_test_setter},
  {"<simple-condition>", CVAR, &YgooSruntimeYLsimple_conditionG},
  {"incongruent-method-error-method-setter", CVAR, &YgooSruntimeYincongruent_method_error_method_setter},
  {"loc-val", CVAR, &YgooSruntimeYloc_val},
  {"incongruent-method-error-method", CVAR, &YgooSruntimeYincongruent_method_error_method},
  {"<condition>", CVAR, &YgooSruntimeYLconditionG},
  {"describe-handler", CVAR, &YgooSruntimeYdescribe_handler},
  {"choose-handler", CVAR, &YgooSruntimeYchoose_handler},
  {"<error>", CVAR, &YgooSruntimeYLerrorG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"error", "error"},
  {"<restart>", "<restart>"},
  {"%with-monitor", "%with-monitor"},
  {"*gensym-counter*", "*gensym-counter*"},
  {"zipped", "zipped"},
  {"build-condition-interactively", "build-condition-interactively"},
  {"cat-sym", "cat-sym"},
  {"<replace-generic-restart>", "<replace-generic-restart>"},
  {"invoke-handler-interactively", "invoke-handler-interactively"},
  {"identity", "identity"},
  {"napp", "napp"},
  {"handler-matches?", "handler-matches?"},
  {"match-sublist", "match-sublist"},
  {"always", "always"},
  {"handler-function", "handler-function"},
  {"condition-message", "condition-message"},
  {"list-handlers", "list-handlers"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"default-handler-description", "default-handler-description"},
  {"<handler-info>", "<handler-info>"},
  {"match-atom", "match-atom"},
  {"<simple-error>", "<simple-error>"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"read", "read"},
  {"curry", "curry"},
  {"msg", "msg"},
  {"var-type", "var-type"},
  {"sig", "sig"},
  {"describe-condition", "describe-condition"},
  {"match-unquote", "match-unquote"},
  {"fab-handler", "fab-handler"},
  {"<handler>", "<handler>"},
  {"msg-to-str", "msg-to-str"},
  {"default-handler", "default-handler"},
  {"condition-arguments", "condition-arguments"},
  {"match-empty-list", "match-empty-list"},
  {"<serious-condition>", "<serious-condition>"},
  {"app-args", "app-args"},
  {"compose", "compose"},
  {"app-filename", "app-filename"},
  {"rcurry", "rcurry"},
  {"build-condition-for-handler-interactively", "build-condition-for-handler-interactively"},
  {"var-name", "var-name"},
  {"$default-handler-info", "$default-handler-info"},
  {"<simple-condition>", "<simple-condition>"},
  {"loc-val-setter", "loc-val-setter"},
  {"loc-val", "loc-val"},
  {"fab-setter-name", "fab-setter-name"},
  {"handler-info-message", "handler-info-message"},
  {"gensym", "gensym"},
  {"<condition>", "<condition>"},
  {"describe-handler", "describe-handler"},
  {"choose-handler", "choose-handler"},
  {"<error>", "<error>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSruntime;
MODULE_INFO module_info_gooSruntime = {
  "goo/runtime",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSapp (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);
extern void load_module_gooScolsSopts (void);
extern void load_module_gooScolsSlst (void);
extern void load_module_gooScolsStup (void);
extern void load_module_gooScolsSvec (void);
extern void load_module_gooScolsStab (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_gooSruntime (void);

void load_module_gooSruntime (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooSapp();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();
  load_module_gooScolsSopts();
  load_module_gooScolsSlst();
  load_module_gooScolsStup();
  load_module_gooScolsSvec();
  load_module_gooScolsStab();
  load_module_gooSioSport();

  (P)YgooSruntimeY___main_0___();
  (P)YgooSruntimeY___main_1___();

}

/* END OF GENERATED CODE. */
