/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/io/read */

EXT(YLoptsG,"goo/boot","<opts>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YgooSioSreadYgobble_line,"goo/io/read","gobble-line");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yerror,"goo/boot","error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Ytup,"goo/boot","tup");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YgooSioSreadYtoken_message,"goo/io/read","token-message");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YgooSioSreadYDdot,"goo/io/read","$dot");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
DEF(YgooSioSreadYDstring_escape_chars,"goo/io/read","$string-escape-chars");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YgooSioSreadYsub_read_list,"goo/io/read","sub-read-list");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
DEF(YgooSioSreadYDvert_sym,"goo/io/read","$vert-sym");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YgooSioSreadYgobble_nested_comment,"goo/io/read","gobble-nested-comment");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
DEF(YgooSioSreadYdefine_sharp_macro,"goo/io/read","define-sharp-macro");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
DEF(YgooSioSreadYread_string_literal,"goo/io/read","read-string-literal");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSioSreadYpreferred_case,"goo/io/read","preferred-case");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YgooSioSreadYDvert_proxy,"goo/io/read","$vert-proxy");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYN,"goo/math","~");
DEF(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YgooSioSreadYsub_read_token,"goo/io/read","sub-read-token");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
DEF(YgooSioSreadYreverse_list_Gstring,"goo/io/read","reverse-list->string");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooSioSreadYsub_read_constituent,"goo/io/read","sub-read-constituent");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YgooSioSreadYflush_whitespace,"goo/io/read","flush-whitespace");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSioSreadYsub_read,"goo/io/read","sub-read");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YgooSioSreadYreader_tokenQ,"goo/io/read","reader-token?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yhead,"goo/boot","head");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
DEF(YgooSioSreadYtoken_message_setter,"goo/io/read","token-message-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
DEF(YgooSioSreadYparse_token,"goo/io/read","parse-token");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
DEF(YgooSioSreadYLreader_tokenG,"goo/io/read","<reader-token>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YgooSioSreadYset_standard_syntaxX,"goo/io/read","set-standard-syntax!");
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
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(YgooSioSreadYDclose_paren,"goo/io/read","$close-paren");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(YgooSioSreadYsub_read_vertical,"goo/io/read","sub-read-vertical");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
DEF(YgooSioSreadYTsharp_macrosT,"goo/io/read","*sharp-macros*");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YgooSioSreadYTread_terminatingQ_vectorT,"goo/io/read","*read-terminating?-vector*");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YgooSioSreadYDstrange_symbol_names,"goo/io/read","$strange-symbol-names");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YgooSioSreadYreading_error,"goo/io/read","reading-error");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
DEF(YgooSioSreadYsub_read_carefully,"goo/io/read","sub-read-carefully");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Ynot,"goo/boot","not");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
DEF(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
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
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YOlst,"goo/boot","@lst");
DEF(YgooSioSreadYmake_immutableX,"goo/io/read","make-immutable!");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
DEF(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Ynew,"goo/boot","new");
DEF(YgooSioSreadYmake_reader_token,"goo/io/read","make-reader-token");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YgooSioSreadYsub_read_list_eof_error,"goo/io/read","sub-read-list-eof-error");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YgooSioSreadYTread_dispatch_vectorT,"goo/io/read","*read-dispatch-vector*");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(YgooSioSreadYwarn,"goo/io/read","warn");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_28);
DEFLIT(lit_2);
DEFLIT(lit_17);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_23);
DEFLIT(lit_78);
DEFLIT(lit_74);
DEFLIT(lit_77);
DEFLIT(lit_12);
DEFLIT(lit_24);
DEFLIT(lit_10);
DEFLIT(lit_49);
DEFLIT(lit_38);
DEFLIT(lit_13);
DEFLIT(lit_80);
DEFLIT(lit_59);
DEFLIT(lit_66);
DEFLIT(lit_52);
DEFLIT(lit_18);
DEFLIT(lit_37);
DEFLIT(lit_60);
DEFLIT(lit_42);
DEFLIT(lit_69);
DEFLIT(lit_19);
DEFLIT(lit_64);
DEFLIT(lit_61);
DEFLIT(lit_32);
DEFLIT(lit_9);
DEFLIT(lit_21);
DEFLIT(lit_41);
DEFLIT(lit_43);
DEFLIT(lit_70);
DEFLIT(lit_27);
DEFLIT(lit_53);
DEFLIT(lit_31);
DEFLIT(lit_25);
DEFLIT(lit_73);
DEFLIT(lit_40);
DEFLIT(lit_72);
DEFLIT(lit_16);
DEFLIT(lit_67);
DEFLIT(lit_20);
DEFLIT(lit_47);
DEFLIT(lit_3);
DEFLIT(lit_50);
DEFLIT(lit_8);
DEFLIT(lit_79);
DEFLIT(lit_7);
DEFLIT(lit_63);
DEFLIT(lit_44);
DEFLIT(lit_76);
DEFLIT(lit_62);
DEFLIT(lit_75);
DEFLIT(lit_0);
DEFLIT(lit_55);
DEFLIT(lit_54);
DEFLIT(lit_22);
DEFLIT(lit_56);
DEFLIT(lit_11);
DEFLIT(lit_33);
DEFLIT(lit_34);
DEFLIT(lit_46);
DEFLIT(lit_39);
DEFLIT(lit_57);
DEFLIT(lit_36);
DEFLIT(lit_71);
DEFLIT(lit_1);
DEFLIT(lit_58);
DEFLIT(lit_51);
DEFLIT(lit_26);
DEFLIT(lit_48);
DEFLIT(lit_68);
DEFLIT(lit_15);
DEFLIT(lit_65);
DEFLIT(lit_14);
DEFLIT(lit_45);
DEFLIT(lit_35);
DEFLIT(lit_29);
DEFLIT(lit_30);
DEFLIT(lit_4);

/* FUNCTIONS: */

LOCFOR(fun_loop_0);
LOCFOR(fun_read_1);
LOCFOR(fun_2);
LOCFOR(fun_3);
LOCFOR(fun_read_from_string_4);
LOCFOR(fun_sub_read_carefully_5);
LOCFOR(fun_token_message_6);
LOCFOR(fun_token_message_setter_7);
LOCFOR(fun_make_reader_token_8);
LOCFOR(fun_reader_tokenQ_9);
LOCFOR(fun_sub_read_10);
LOCFOR(fun_11);
LOCFOR(fun_set_standard_syntaxX_12);
LOCFOR(fun_13);
LOCFOR(fun_14);
FUNFOR(YgooSioSreadYflush_whitespace);
LOCFOR(fun_loop_16);
FUNFOR(YgooSioSreadYread_delimited_list);
FUNFOR(YgooSioSreadYsub_read_constituent);
LOCFOR(fun_19);
LOCFOR(fun_set_standard_read_macroX_20);
LOCFOR(fun_get_standard_read_macro_21);
LOCFOR(fun_sub_read_vertical_22);
FUNFOR(YgooSioSreadYsub_read_list_eof_error);
LOCFOR(fun_read_next_24);
LOCFOR(fun_sub_read_list_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_loop_30);
FUNFOR(YgooSioSreadYread_string_literal);
LOCFOR(fun_32);
LOCFOR(fun_loop_33);
LOCFOR(fun_gobble_line_34);
LOCFOR(fun_define_sharp_macro_35);
LOCFOR(fun_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_loop_40);
FUNFOR(YgooSioSreadYgobble_nested_comment);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_46);
LOCFOR(fun_loop_47);
LOCFOR(fun_sub_read_token_48);
LOCFOR(fun_49);
LOCFOR(fun_parse_token_50);
LOCFOR(fun_reading_error_51);
LOCFOR(fun_warn_52);
LOCFOR(fun_reverse_list_Gstring_53);
LOCFOR(fun_make_immutableX_54);
extern P YgooSioSreadY___main_0___ ();
extern P YgooSioSreadY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_loop_0) {
  P formF1392;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),FREEREF(0));
  formF1392 = T1;
  T4 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF1392);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T2 = formF1392;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),formF1392,VARREF(YgooSioSreadYDclose_paren));
    if (T6 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSioSreadYwarn),LITREF(lit_3));
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
  P loopF1393;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_0,2);
  loopF1393 = T1;
  FUNINIT(loopF1393, 2,port_,loopF1393);
  T2 = CALL0(0,loopF1393);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSruntimeYread),T2);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_3) {
  P tmpF1394;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF1394 = T1;
  if (tmpF1394 != YPfalse) {
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

FUNCODEDEF(fun_read_from_string_4) {
  P x_;
  P portF1395;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  portF1395 = YPfalse;
  portF1395 = BOXFAB(portF1395);
  T3 = FUNFAB(fun_2,2,portF1395,x_);
  T4 = FUNFAB(fun_3,1,portF1395);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_carefully_5) {
  P port_;
  P formF1396;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF1396 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF1396);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_7));
    T2 = T4;
  } else {
    T6 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF1396);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),formF1396);
      T7 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,T8);
      T5 = T7;
    } else {
      T5 = formF1396;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_token_message_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSreadYtoken_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_token_message_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSreadYtoken_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_make_reader_token_8) {
  P message_;
  P T0;
  P a1;
LINK_STACK();
  ARG(message_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSreadYLreader_tokenG),VARREF(YgooSioSreadYtoken_message),message_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reader_tokenQ_9) {
  P form_;
  P T0;
  P a1;
LINK_STACK();
  ARG(form_, 0);
loop:
  T0 = CALL2(1,VARREF(YisaQ),form_,VARREF(YgooSioSreadYLreader_tokenG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sub_read_10) {
  P port_;
  P cF1397;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF1397 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1397);
  if (T3 != YPfalse) {
    T2 = cF1397;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF1397);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T6);
    T4 = CALL2(1,T5,cF1397,port_);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_21),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_set_standard_syntaxX_12) {
  P char_,terminatingQ_,reader_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(char_, 0);
  ARG(terminatingQ_, 1);
  ARG(reader_, 2);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYchar_Gascii),char_);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),reader_,VARREF(YgooSioSreadYTread_dispatch_vectorT),T0);
  T2 = CALL1(1,VARREF(YgooSmathYchar_Gascii),char_);
  T1 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),terminatingQ_,VARREF(YgooSioSreadYTread_terminatingQ_vectorT),T2);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_13) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_14) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),FREEREF(0),VARREF(YgooSioSreadYTread_dispatch_vectorT),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYflush_whitespace) {
  P port_;
  P cF1398;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF1398 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF1398);
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),VARREF(YgooScolsSstrYascii_whitespaces),T4);
  if (T3 != YPfalse) {
    CALL1(1,VARREF(YgooSioSportYget),port_);
    T5 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
    T2 = T5;
  } else {
    T2 = cF1398;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_16) {
  P c_;
  P UF1399;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),c_,FREEREF(0));
  if (T1 != YPfalse) {
    CALL1(1,VARREF(YgooSioSportYget),FREEREF(1));
    T3 = BOXVAL(FREEREF(2));
    T2 = CALL1(1,VARREF(YgooScolsSseqYrev),T3);
    T0 = T2;
  } else {
    T4 = BOXVAL(FREEREF(2));
    UF1399 = T4;
    T7 = CALL1(1,VARREF(YgooSruntimeYread),FREEREF(1));
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,UF1399);
    T5 = BOXVAL(FREEREF(2)) = T6;
    T9 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),FREEREF(1));
    a1 = T9;
    c_ = a1;
    goto loop;
    T0 = T8;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_delimited_list) {
  P endchar_,port_;
  P loopF1401;
  P retlistF1400;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(endchar_, 0);
  ARG(port_, 1);
loop:
  retlistF1400 = VARREF(Ynil);
  retlistF1400 = BOXFAB(retlistF1400);
  T3 = FUNSHELL(1,fun_loop_16,4);
  loopF1401 = T3;
  FUNINIT(loopF1401, 4,endchar_,port_,retlistF1400,loopF1401);
  T5 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
  T4 = CALL1(0,loopF1401,T5);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYsub_read_constituent) {
  P c_,port_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),c_,port_);
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooSioSreadYset_standard_syntaxX),c_,YPfalse,VARREF(YgooSioSreadYsub_read_constituent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_set_standard_read_macroX_20) {
  P char_,terminatingQ_,proc_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(char_, 0);
  ARG(terminatingQ_, 1);
  ARG(proc_, 2);
loop:
  T0 = CALL3(1,VARREF(YgooSioSreadYset_standard_syntaxX),char_,terminatingQ_,proc_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_get_standard_read_macro_21) {
  P char_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYchar_Gascii),char_);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_vertical_22) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),LITREF(lit_36),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYsub_read_list_eof_error) {
  P port_;
  P T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_40));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_next_24) {
  P c_,prev_,form_;
  P nextF1403;
  P prevF1402;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2,a3;
LINK_STACK();
  ARG(c_, 0);
  ARG(prev_, 1);
  ARG(form_, 2);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),prev_,VARREF(YgooSioSreadYDvert_proxy));
  if (T2 != YPfalse) {
    T1 = VARREF(YgooSioSreadYDvert_sym);
  } else {
    T1 = prev_;
  }
  prevF1402 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),form_);
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),FREEREF(0));
    T3 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDclose_paren));
    if (T7 != YPfalse) {
      T8 = CALL1(1,VARREF(Ylst),prevF1402);
      T6 = T8;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDvert_sym));
      if (T10 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),FREEREF(0));
        nextF1403 = T12;
        T14 = CALL2(1,VARREF(Ylst),prevF1402,nextF1403);
        T15 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,FREEREF(0));
        T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,T15);
        T11 = T13;
        T9 = T11;
      } else {
        if (YPtrue != YPfalse) {
          T19 = CALL1(1,VARREF(YgooSioSreadYsub_read),FREEREF(0));
          T18 = CALL3(1,FREEREF(1),c_,form_,T19);
          T17 = CALL2(1,VARREF(YgooSmacrosYpair),prevF1402,T18);
          T16 = T17;
        } else {
          T16 = YPfalse;
        }
        T9 = T16;
      }
      T6 = T9;
    }
    T3 = T6;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_list_25) {
  P c_,port_;
  P read_nextF1405;
  P formF1404;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF1404 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF1404);
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),port_);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),formF1404,VARREF(YgooSioSreadYDclose_paren));
    if (T6 != YPfalse) {
      T5 = Ynil;
    } else {
      if (YPtrue != YPfalse) {
        T9 = FUNSHELL(1,fun_read_next_24,2);
        read_nextF1405 = T9;
        FUNINIT(read_nextF1405, 2,port_,read_nextF1405);
        T11 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
        T10 = CALL3(1,read_nextF1405,c_,formF1404,T11);
        T8 = T10;
        T7 = T8;
      } else {
        T7 = YPfalse;
      }
      T5 = T7;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_paren));
}

FUNCODEDEF(fun_27) {
  P c_,port_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_44),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P c_,port_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_45),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P c_,port_;
  P keywordF1407;
  P nextF1406;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  nextF1406 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),nextF1406);
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_46));
    T3 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),nextF1406,YPchr((P)64));
    if (T7 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T6 = LITREF(lit_47);
    } else {
      T6 = LITREF(lit_48);
    }
    T3 = T6;
  }
  keywordF1407 = T3;
  T9 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T8 = CALL2(1,VARREF(Ylst),keywordF1407,T9);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_30) {
  P l_,i_;
  P ecF1411;
  P tmpF1410;
  P cF1409;
  P cF1408;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
  cF1408 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1408);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),FREEREF(0),LITREF(lit_52));
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYE),cF1408,YPchr((P)92));
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
      cF1409 = T8;
      T10 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1409);
      if (T10 != YPfalse) {
        T11 = CALL2(1,VARREF(YgooSioSreadYreading_error),FREEREF(0),LITREF(lit_53));
        T9 = T11;
      } else {
        T14 = CALL2(1,VARREF(YgooSmathYE),cF1409,YPchr((P)92));
        tmpF1410 = T14;
        if (tmpF1410 != YPfalse) {
          T15 = tmpF1410;
        } else {
          T16 = CALL2(1,VARREF(YgooSmathYE),cF1409,YPchr((P)34));
          T15 = T16;
        }
        T13 = T15;
        if (T13 != YPfalse) {
          T18 = CALL2(1,VARREF(YgooSmacrosYpair),cF1409,l_);
          T19 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
          a1 = T18;
          a2 = T19;
          l_ = a1;
          i_ = a2;
          goto loop;
          T12 = T17;
        } else {
          T22 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF1409);
          T21 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYDstring_escape_chars),T22);
          ecF1411 = T21;
          if (ecF1411 != YPfalse) {
            T25 = CALL2(1,VARREF(YgooSmacrosYpair),ecF1411,l_);
            T26 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
            a1 = T25;
            a2 = T26;
            l_ = a1;
            i_ = a2;
            goto loop;
            T23 = T24;
          } else {
            T27 = CALL3(1,VARREF(YgooSioSreadYreading_error),FREEREF(0),LITREF(lit_54),cF1409);
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
      T29 = CALL2(1,VARREF(YgooSmathYE),cF1408,YPchr((P)34));
      if (T29 != YPfalse) {
        T30 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),l_,i_);
        T28 = T30;
      } else {
        T32 = CALL2(1,VARREF(YgooSmacrosYpair),cF1408,l_);
        T33 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
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

FUNCODEDEF(YgooSioSreadYread_string_literal) {
  P c_,port_;
  P loopF1412;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_30,2);
  loopF1412 = T1;
  FUNINIT(loopF1412, 2,port_,loopF1412);
  T2 = CALL2(0,loopF1412,Ynil,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSreadYgobble_line),port_);
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_33) {
  P cF1413;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
  cF1413 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1413);
  if (T3 != YPfalse) {
    T2 = cF1413;
  } else {
    T5 = CALL2(1,VARREF(YgooSmathYE),cF1413,YPchr((P)10));
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

FUNCODEDEF(fun_gobble_line_34) {
  P port_;
  P loopF1414;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_33,2);
  loopF1414 = T1;
  FUNINIT(loopF1414, 2,port_,loopF1414);
  T2 = CALL0(0,loopF1414);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_define_sharp_macro_35) {
  P c_,proc_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(proc_, 1);
loop:
  T2 = CALL2(1,VARREF(Ylst),c_,proc_);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,VARREF(YgooSioSreadYTsharp_macrosT));
  T0 = VARSET(YgooSioSreadYTsharp_macrosT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  P c_,port_;
  P probeF1417;
  P cF1416;
  P cF1415;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF1415 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1415);
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_57));
    T3 = T5;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYto_lower),cF1415);
    T3 = T6;
  }
  cF1416 = T3;
  T8 = CALL2(1,VARREF(YgooScolsSlstYassq),cF1416,VARREF(YgooSioSreadYTsharp_macrosT));
  probeF1417 = T8;
  if (probeF1417 != YPfalse) {
    T12 = CALL1(1,VARREF(Ytail),probeF1417);
    T11 = CALL1(1,VARREF(Yhead),T12);
    T10 = CALL2(1,T11,cF1416,port_);
    T9 = T10;
  } else {
    T13 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_58),cF1416);
    T9 = T13;
  }
  T7 = T9;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_38) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_39) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDvert_proxy));
}

FUNCODEDEF(fun_loop_40) {
  P found_slashQ_;
  P x_1383F1420;
  P x_1382F1419;
  P cF1418;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(found_slashQ_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
  cF1418 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1418);
  if (T3 != YPfalse) {
    T2 = cF1418;
  } else {
    x_1382F1419 = cF1418;
    x_1383F1420 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_1383F1420,x_1382F1419,YPchr((P)47));
    if (T7 != YPfalse) {
      a1 = YPtrue;
      found_slashQ_ = a1;
      goto loop;
      T6 = T8;
    } else {
      T10 = CALL2(1,x_1383F1420,x_1382F1419,YPchr((P)35));
      if (T10 != YPfalse) {
        if (found_slashQ_ != YPfalse) {
          T11 = YPfalse;
        } else {
          a1 = YPfalse;
          found_slashQ_ = a1;
          goto loop;
          T11 = T12;
        }
        T9 = T11;
      } else {
        a1 = YPfalse;
        found_slashQ_ = a1;
        goto loop;
        T9 = T13;
      }
      T6 = T9;
    }
    T5 = T6;
    T4 = T5;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYgobble_nested_comment) {
  P port_;
  P loopF1421;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_40,2);
  loopF1421 = T1;
  FUNINIT(loopF1421, 2,port_,loopF1421);
  T2 = CALL1(0,loopF1421,YPfalse);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P c_,port_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSreadYgobble_nested_comment),port_);
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P c_,port_;
  P tempF1424;
  P nameF1423;
  P cF1422;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF1422 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1422);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_62));
    T2 = T4;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYalphaQ),cF1422);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
      nameF1423 = T8;
      T12 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF1423);
      T11 = CALL1(1,VARREF(YgooStypesYlen),T12);
      T10 = CALL2(1,VARREF(YgooSmathYE),T11,YPint((P)1));
      if (T10 != YPfalse) {
        T9 = cF1422;
      } else {
        T14 = CALL2(1,VARREF(YgooScolsSlstYassq),nameF1423,VARREF(YgooSioSreadYDchar_long_names));
        tempF1424 = T14;
        if (tempF1424 != YPfalse) {
          T17 = CALL1(1,VARREF(Ytail),tempF1424);
          T16 = CALL1(1,VARREF(Yhead),T17);
          T15 = T16;
        } else {
          T18 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_63),nameF1423);
          T15 = T18;
        }
        T13 = T15;
        T9 = T13;
      }
      T7 = T9;
      T5 = T7;
    } else {
      T19 = CALL1(1,VARREF(YgooSioSportYget),port_);
      T5 = T19;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P c_,port_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P c_,port_;
  P tmpF1426;
  P stringF1425;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),YPchr((P)35),port_);
  stringF1425 = T1;
  T3 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),stringF1425);
  tmpF1426 = T3;
  if (tmpF1426 != YPfalse) {
    T4 = tmpF1426;
  } else {
    T5 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_64),stringF1425);
    T4 = T5;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),c_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_47) {
  P l_,n_;
  P tmpF1428;
  P cF1427;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),FREEREF(0));
  cF1427 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF1427);
  tmpF1428 = T4;
  if (tmpF1428 != YPfalse) {
    T5 = tmpF1428;
  } else {
    T7 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF1427);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_terminatingQ_vectorT),T7);
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),l_,n_);
    T2 = T8;
  } else {
    T12 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
    T11 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),T12);
    T10 = CALL2(1,VARREF(YgooSmacrosYpair),T11,l_);
    T13 = CALL2(1,VARREF(YgooSmathYA),n_,YPint((P)1));
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

FUNCODEDEF(fun_sub_read_token_48) {
  P c_,port_;
  P loopF1429;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_47,2);
  loopF1429 = T1;
  FUNINIT(loopF1429, 2,port_,loopF1429);
  T4 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),c_);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T2 = CALL2(0,loopF1429,T3,YPint((P)1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYE),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_token_50) {
  P string_,port_;
  P maybe_numberF1434;
  P tmpF1433;
  P tmpF1432;
  P tmpF1431;
  P cF1430;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2;
LINK_STACK();
  ARG(string_, 0);
  ARG(port_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),string_,YPint((P)0));
  cF1430 = T2;
  T4 = CALL1(1,VARREF(YgooSmathYdigitQ),cF1430);
  tmpF1431 = T4;
  if (tmpF1431 != YPfalse) {
    T5 = tmpF1431;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),cF1430,YPchr((P)43));
    tmpF1432 = T7;
    if (tmpF1432 != YPfalse) {
      T8 = tmpF1432;
    } else {
      T10 = CALL2(1,VARREF(YgooSmathYE),cF1430,YPchr((P)45));
      tmpF1433 = T10;
      if (tmpF1433 != YPfalse) {
        T11 = tmpF1433;
      } else {
        T12 = CALL2(1,VARREF(YgooSmathYE),cF1430,YPchr((P)46));
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
    T14 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),string_);
    maybe_numberF1434 = T14;
    if (maybe_numberF1434 != YPfalse) {
      T15 = maybe_numberF1434;
    } else {
      T18 = FUNFAB(fun_49,1,string_);
      T17 = CALL2(1,VARREF(YgooStypesYanyQ),T18,VARREF(YgooSioSreadYDstrange_symbol_names));
      if (T17 != YPfalse) {
        T20 = CALL1(1,VARREF(YgooSioSreadYmake_immutableX),string_);
        T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T20);
        T16 = T19;
      } else {
        T22 = CALL2(1,VARREF(YgooSmathYE),string_,LITREF(lit_70));
        if (T22 != YPfalse) {
          T21 = VARREF(YgooSioSreadYDdot);
        } else {
          T23 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_71),string_);
          T21 = T23;
        }
        T16 = T21;
      }
      T15 = T16;
    }
    T13 = T15;
    T0 = T13;
  } else {
    T25 = CALL1(1,VARREF(YgooSioSreadYmake_immutableX),string_);
    T24 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T25);
    T0 = T24;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reading_error_51) {
  P port_,message_,irritants_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(irritants_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),message_,LITREF(lit_76));
  T3 = CALL1(1,VARREF(Ylst),port_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),irritants_,T3);
  T0 = CALL2(1,VARREF(Yerror),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_warn_52) {
  P string_,irritants_and_port_;
  P a1,a2;
LINK_STACK();
  ARG(string_, 0);
  NARGS(irritants_and_port_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_reverse_list_Gstring_53) {
  P l_,n_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),l_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_make_immutableX_54) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

P YgooSioSreadY___main_0___() {
  P number_sharp_macroF1438;
  P vecF1437;
  P str10496F1436;
  P sub_read_whitespaceF1435;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"read");
  lit_1 = YPPsym((P)"port");
  lit_2 = YPPsym((P)"loop");
  lit_3 = YPsb((P)"discarding extraneous right parenthesis");
  T1 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_0 = YPmet(FUNCODEREF(fun_loop_0),LITREF(lit_2),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_1 = YPmet(FUNCODEREF(fun_read_1),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(YgooSruntimeYread);
  if (T4 != YPfalse) {
    T3 = VARREF(YgooSruntimeYread);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_read_1;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YgooSruntimeYread,T2);
  lit_4 = YPPsym((P)"read-from-string");
  lit_5 = YPPsym((P)"x");
  T8 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T7 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_3 = YPmet(FUNCODEREF(fun_3),YPfalse,T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_from_string_4 = YPmet(FUNCODEREF(fun_read_from_string_4),LITREF(lit_4),T6,ENVNUL,PNUL,YPfalse);
  T11 = BOUNDP(YgooSioSreadYread_from_string);
  if (T11 != YPfalse) {
    T10 = VARREF(YgooSioSreadYread_from_string);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_read_from_string_4;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YgooSioSreadYread_from_string,T9);
  lit_6 = YPPsym((P)"sub-read-carefully");
  lit_7 = YPsb((P)"unexpected end of file");
  T13 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_carefully_5 = YPmet(FUNCODEREF(fun_sub_read_carefully_5),LITREF(lit_6),T13,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YgooSioSreadYsub_read_carefully);
  if (T16 != YPfalse) {
    T15 = VARREF(YgooSioSreadYsub_read_carefully);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_sub_read_carefully_5;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YgooSioSreadYsub_read_carefully,T14);
  lit_8 = YPPsym((P)"<reader-token>");
  T19 = (P)YPpair(VARREF(YLanyG),Ynil);
  T18 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_8),T19);
  VARSET(YgooSioSreadYLreader_tokenG,T18);
  lit_9 = YPPsym((P)"token-message");
  lit_10 = YPPsym((P)"_x");
  T20 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YgooSioSreadYLreader_tokenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_token_message_6 = YPmet(FUNCODEREF(fun_token_message_6),LITREF(lit_9),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YgooSioSreadYtoken_message);
  if (T23 != YPfalse) {
    T22 = VARREF(YgooSioSreadYtoken_message);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_token_message_6;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YgooSioSreadYtoken_message,T21);
  lit_11 = YPPsym((P)"token-message-setter");
  lit_12 = YPPsym((P)"_z");
  T25 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_10)),YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSreadYLreader_tokenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_token_message_setter_7 = YPmet(FUNCODEREF(fun_token_message_setter_7),LITREF(lit_11),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YgooSioSreadYtoken_message_setter);
  if (T28 != YPfalse) {
    T27 = VARREF(YgooSioSreadYtoken_message_setter);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_token_message_setter_7;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YgooSioSreadYtoken_message_setter,T26);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSreadYLreader_tokenG),VARREF(YgooSioSreadYtoken_message),VARREF(YgooSioSreadYtoken_message_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_13 = YPPsym((P)"make-reader-token");
  lit_14 = YPPsym((P)"message");
  T30 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_reader_token_8 = YPmet(FUNCODEREF(fun_make_reader_token_8),LITREF(lit_13),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YgooSioSreadYmake_reader_token);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooSioSreadYmake_reader_token);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_make_reader_token_8;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooSioSreadYmake_reader_token,T31);
  lit_15 = YPPsym((P)"reader-token?");
  lit_16 = YPPsym((P)"form");
  T35 = YPsig(YPPlist(1,LITREF(lit_16)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_reader_tokenQ_9 = YPmet(FUNCODEREF(fun_reader_tokenQ_9),LITREF(lit_15),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooSioSreadYreader_tokenQ);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooSioSreadYreader_tokenQ);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_reader_tokenQ_9;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooSioSreadYreader_tokenQ,T36);
  lit_17 = YPsb((P)"unexpected right parenthesis");
  T40 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_17));
  VARSET(YgooSioSreadYDclose_paren,T40);
  lit_18 = YPsb((P)"unexpected \" . \"");
  T41 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_18));
  VARSET(YgooSioSreadYDdot,T41);
  lit_19 = YPPsym((P)"sub-read");
  T42 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_10 = YPmet(FUNCODEREF(fun_sub_read_10),LITREF(lit_19),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YgooSioSreadYsub_read);
  if (T45 != YPfalse) {
    T44 = VARREF(YgooSioSreadYsub_read);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_sub_read_10;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YgooSioSreadYsub_read,T43);
  lit_20 = YPPsym((P)"c");
  lit_21 = YPsb((P)"illegal character read");
  T47 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T49 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T50 = fun_11;
  T48 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T49,T50);
  VARSET(YgooSioSreadYTread_dispatch_vectorT,T48);
  T52 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T51 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T52,YPtrue);
  VARSET(YgooSioSreadYTread_terminatingQ_vectorT,T51);
  lit_22 = YPPsym((P)"set-standard-syntax!");
  lit_23 = YPPsym((P)"char");
  lit_24 = YPPsym((P)"terminating?");
  lit_25 = YPPsym((P)"reader");
  T53 = YPsig(YPPlist(3,LITREF(lit_23),LITREF(lit_24),LITREF(lit_25)),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_syntaxX_12 = YPmet(FUNCODEREF(fun_set_standard_syntaxX_12),LITREF(lit_22),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YgooSioSreadYset_standard_syntaxX);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooSioSreadYset_standard_syntaxX);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_set_standard_syntaxX_12;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooSioSreadYset_standard_syntaxX,T54);
  T59 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T60 = fun_13;
  sub_read_whitespaceF1435 = T60;
  T62 = FUNFAB(fun_14,1,sub_read_whitespaceF1435);
  T61 = XCALL2(1,VARREF(YgooSmacrosYdo),T62,VARREF(YgooScolsSstrYascii_whitespaces));
  lit_26 = YPPsym((P)"flush-whitespace");
  T63 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYflush_whitespace = YPmet(FUNCODEREF(YgooSioSreadYflush_whitespace),LITREF(lit_26),T63,ENVNUL,PNUL,YPfalse);
  T64 = YgooSioSreadYflush_whitespace;
  VARSET(YgooSioSreadYflush_whitespace,T64);
  lit_27 = YPPsym((P)"read-delimited-list");
  lit_28 = YPPsym((P)"endchar");
  T66 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_16 = YPmet(FUNCODEREF(fun_loop_16),LITREF(lit_2),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_1)),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_delimited_list = YPmet(FUNCODEREF(YgooSioSreadYread_delimited_list),LITREF(lit_27),T65,ENVNUL,PNUL,YPfalse);
  T67 = YgooSioSreadYread_delimited_list;
  VARSET(YgooSioSreadYread_delimited_list,T67);
  lit_29 = YPPsym((P)"sub-read-constituent");
  T68 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_constituent = YPmet(FUNCODEREF(YgooSioSreadYsub_read_constituent),LITREF(lit_29),T68,ENVNUL,PNUL,YPfalse);
  T69 = YgooSioSreadYsub_read_constituent;
  VARSET(YgooSioSreadYsub_read_constituent,T69);
  lit_30 = YPsb((P)"!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM");
  lit_31 = YPsb((P)"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  T70 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T70,ENVNUL,PNUL,YPfalse);
  T71 = XCALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_30),LITREF(lit_31));
  str10496F1436 = T71;
  T73 = fun_19;
  T72 = XCALL2(1,VARREF(YgooSmacrosYdo),T73,str10496F1436);
  lit_32 = YPPsym((P)"set-standard-read-macro!");
  lit_33 = YPPsym((P)"proc");
  T74 = YPsig(YPPlist(3,LITREF(lit_23),LITREF(lit_24),LITREF(lit_33)),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_read_macroX_20 = YPmet(FUNCODEREF(fun_set_standard_read_macroX_20),LITREF(lit_32),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YgooSioSreadYset_standard_read_macroX);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooSioSreadYset_standard_read_macroX);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_set_standard_read_macroX_20;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooSioSreadYset_standard_read_macroX,T75);
  lit_34 = YPPsym((P)"get-standard-read-macro");
  T79 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_get_standard_read_macro_21 = YPmet(FUNCODEREF(fun_get_standard_read_macro_21),LITREF(lit_34),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YgooSioSreadYget_standard_read_macro);
  if (T82 != YPfalse) {
    T81 = VARREF(YgooSioSreadYget_standard_read_macro);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_get_standard_read_macro_21;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YgooSioSreadYget_standard_read_macro,T80);
  lit_35 = YPPsym((P)"sub-read-vertical");
  lit_36 = YPsb((P)"|");
  T84 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_vertical_22 = YPmet(FUNCODEREF(fun_sub_read_vertical_22),LITREF(lit_35),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YgooSioSreadYsub_read_vertical);
  if (T87 != YPfalse) {
    T86 = VARREF(YgooSioSreadYsub_read_vertical);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_sub_read_vertical_22;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YgooSioSreadYsub_read_vertical,T85);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)124),YPtrue,VARREF(YgooSioSreadYsub_read_vertical));
  lit_37 = YPsb((P)"|");
  T89 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),LITREF(lit_37));
  VARSET(YgooSioSreadYDvert_sym,T89);
  lit_38 = YPsb((P)"vert-proxy");
  T90 = XCALL1(1,VARREF(Ylst),LITREF(lit_38));
  VARSET(YgooSioSreadYDvert_proxy,T90);
  lit_39 = YPPsym((P)"sub-read-list-eof-error");
  lit_40 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T91 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_list_eof_error = YPmet(FUNCODEREF(YgooSioSreadYsub_read_list_eof_error),LITREF(lit_39),T91,ENVNUL,PNUL,YPfalse);
  T92 = YgooSioSreadYsub_read_list_eof_error;
  VARSET(YgooSioSreadYsub_read_list_eof_error,T92);
  lit_41 = YPPsym((P)"sub-read-list");
  lit_42 = YPPsym((P)"read-next");
  lit_43 = YPPsym((P)"prev");
  T94 = YPsig(YPPlist(3,LITREF(lit_20),LITREF(lit_43),LITREF(lit_16)),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_read_next_24 = YPmet(FUNCODEREF(fun_read_next_24),LITREF(lit_42),T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_list_25 = YPmet(FUNCODEREF(fun_sub_read_list_25),LITREF(lit_41),T93,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YgooSioSreadYsub_read_list);
  if (T97 != YPfalse) {
    T96 = VARREF(YgooSioSreadYsub_read_list);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_sub_read_list_25;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YgooSioSreadYsub_read_list,T95);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)40),YPtrue,VARREF(YgooSioSreadYsub_read_list));
  T99 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T100 = fun_26;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)41),YPtrue,T100);
  lit_44 = YPPsym((P)"quote");
  T101 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T102 = fun_27;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)39),YPtrue,T102);
  lit_45 = YPPsym((P)"quasiquote");
  T103 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T104 = fun_28;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)96),YPtrue,T104);
  lit_46 = YPsb((P)"end of file after ,");
  lit_47 = YPPsym((P)"unquote-splicing");
  lit_48 = YPPsym((P)"unquote");
  T105 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T106 = fun_29;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)44),YPtrue,T106);
  T109 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T108 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T109,YPfalse);
  vecF1437 = T108;
  T110 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)116));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)9),vecF1437,T110);
  T111 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)102));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)12),vecF1437,T111);
  T112 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)114));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)13),vecF1437,T112);
  T113 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)110));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)10),vecF1437,T113);
  T114 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF1437);
  T107 = T114;
  VARSET(YgooSioSreadYDstring_escape_chars,T107);
  lit_49 = YPPsym((P)"read-string-literal");
  lit_50 = YPPsym((P)"l");
  lit_51 = YPPsym((P)"i");
  lit_52 = YPsb((P)"end of file within a string");
  lit_53 = YPsb((P)"end of file within a string");
  lit_54 = YPsb((P)"invalid escaped character in string");
  T116 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_51)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_30 = YPmet(FUNCODEREF(fun_loop_30),LITREF(lit_2),T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_string_literal = YPmet(FUNCODEREF(YgooSioSreadYread_string_literal),LITREF(lit_49),T115,ENVNUL,PNUL,YPfalse);
  T117 = YgooSioSreadYread_string_literal;
  VARSET(YgooSioSreadYread_string_literal,T117);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)34),YPtrue,VARREF(YgooSioSreadYread_string_literal));
  T118 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T118,ENVNUL,PNUL,YPfalse);
  T119 = fun_32;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)59),YPtrue,T119);
  lit_55 = YPPsym((P)"gobble-line");
  T121 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_33 = YPmet(FUNCODEREF(fun_loop_33),LITREF(lit_2),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gobble_line_34 = YPmet(FUNCODEREF(fun_gobble_line_34),LITREF(lit_55),T120,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YgooSioSreadYgobble_line);
  if (T124 != YPfalse) {
    T123 = VARREF(YgooSioSreadYgobble_line);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_gobble_line_34;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YgooSioSreadYgobble_line,T122);
  VARSET(YgooSioSreadYTsharp_macrosT,Ynil);
  lit_56 = YPPsym((P)"define-sharp-macro");
  T126 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_33)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_define_sharp_macro_35 = YPmet(FUNCODEREF(fun_define_sharp_macro_35),LITREF(lit_56),T126,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YgooSioSreadYdefine_sharp_macro);
  if (T129 != YPfalse) {
    T128 = VARREF(YgooSioSreadYdefine_sharp_macro);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_define_sharp_macro_35;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YgooSioSreadYdefine_sharp_macro,T127);
  lit_57 = YPsb((P)"end of file after #");
  lit_58 = YPsb((P)"unknown # syntax");
  T131 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T132 = fun_36;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)35),YPfalse,T132);
  T133 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T134 = fun_37;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)102),T134);
  T135 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T136 = fun_38;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)116),T136);
  T137 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T138 = fun_39;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)124),T138);
  lit_59 = YPPsym((P)"gobble-nested-comment");
  lit_60 = YPPsym((P)"found-slash?");
  T140 = YPsig(YPPlist(1,LITREF(lit_60)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_40 = YPmet(FUNCODEREF(fun_loop_40),LITREF(lit_2),T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYgobble_nested_comment = YPmet(FUNCODEREF(YgooSioSreadYgobble_nested_comment),LITREF(lit_59),T139,ENVNUL,PNUL,YPfalse);
  T141 = YgooSioSreadYgobble_nested_comment;
  VARSET(YgooSioSreadYgobble_nested_comment,T141);
  T142 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T143 = fun_42;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)47),T143);
  lit_61 = YPPlist(5,YPPlist(2,YPPsym((P)"tab"),YPchr((P)9)),YPPlist(2,YPPsym((P)"page"),YPchr((P)12)),YPPlist(2,YPPsym((P)"return"),YPchr((P)13)),YPPlist(2,YPPsym((P)"newline"),YPchr((P)10)),YPPlist(2,YPPsym((P)"space"),YPchr((P)32)));
  VARSET(YgooSioSreadYDchar_long_names,LITREF(lit_61));
  lit_62 = YPsb((P)"end of file after #\\");
  lit_63 = YPsb((P)"unknown #\\ name");
  T144 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T145 = fun_43;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)92),T145);
  T146 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T147 = fun_44;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)40),T147);
  lit_64 = YPsb((P)"unsupported number syntax");
  lit_65 = YPPlist(4,YPchr((P)98),YPchr((P)111),YPchr((P)100),YPchr((P)120));
  T149 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T150 = fun_45;
  number_sharp_macroF1438 = T150;
  T152 = FUNFAB(fun_46,1,number_sharp_macroF1438);
  T151 = XCALL2(1,VARREF(YgooSmacrosYdo),T152,LITREF(lit_65));
  lit_66 = YPPsym((P)"sub-read-token");
  lit_67 = YPPsym((P)"n");
  T154 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_67)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_47 = YPmet(FUNCODEREF(fun_loop_47),LITREF(lit_2),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_1)),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_token_48 = YPmet(FUNCODEREF(fun_sub_read_token_48),LITREF(lit_66),T153,ENVNUL,PNUL,YPfalse);
  T157 = BOUNDP(YgooSioSreadYsub_read_token);
  if (T157 != YPfalse) {
    T156 = VARREF(YgooSioSreadYsub_read_token);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_sub_read_token_48;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YgooSioSreadYsub_read_token,T155);
  lit_68 = YPPsym((P)"parse-token");
  lit_69 = YPPsym((P)"string");
  lit_70 = YPsb((P)".");
  lit_71 = YPsb((P)"unsupported number syntax");
  T160 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_1)),YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_token_50 = YPmet(FUNCODEREF(fun_parse_token_50),LITREF(lit_68),T159,ENVNUL,PNUL,YPfalse);
  T163 = BOUNDP(YgooSioSreadYparse_token);
  if (T163 != YPfalse) {
    T162 = VARREF(YgooSioSreadYparse_token);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_parse_token_50;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YgooSioSreadYparse_token,T161);
  lit_72 = YPPlist(9,YPsb((P)"+"),YPsb((P)"-"),YPsb((P)"..."),YPsb((P)"1st"),YPsb((P)"2nd"),YPsb((P)"3rd"),YPsb((P)"1+"),YPsb((P)"1-"),YPsb((P)"->"));
  VARSET(YgooSioSreadYDstrange_symbol_names,LITREF(lit_72));
  lit_73 = YPPsym((P)"t");
  T168 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),LITREF(lit_73));
  T167 = XCALL2(1,VARREF(YgooSmacrosYelt),T168,YPint((P)0));
  T166 = XCALL2(1,VARREF(YgooSmathYE),T167,YPchr((P)84));
  if (T166 != YPfalse) {
    T165 = VARREF(YgooSmathYto_upper);
  } else {
    T165 = VARREF(YgooSmathYto_lower);
  }
  VARSET(YgooSioSreadYpreferred_case,T165);
  lit_74 = YPPsym((P)"reading-error");
  lit_75 = YPPsym((P)"irritants");
  lit_76 = YPsb((P)": %=");
  T169 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_14),LITREF(lit_75)),YPPlist(2,VARREF(YgooSioSportYLportG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reading_error_51 = YPmet(FUNCODEREF(fun_reading_error_51),LITREF(lit_74),T169,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YgooSioSreadYreading_error);
  if (T172 != YPfalse) {
    T171 = VARREF(YgooSioSreadYreading_error);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_reading_error_51;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YgooSioSreadYreading_error,T170);
  lit_77 = YPPsym((P)"warn");
  lit_78 = YPPsym((P)"irritants-and-port");
  T174 = YPsig(YPPlist(2,LITREF(lit_69),LITREF(lit_78)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_warn_52 = YPmet(FUNCODEREF(fun_warn_52),LITREF(lit_77),T174,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(YgooSioSreadYwarn);
  if (T177 != YPfalse) {
    T176 = VARREF(YgooSioSreadYwarn);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_warn_52;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YgooSioSreadYwarn,T175);
  lit_79 = YPPsym((P)"reverse-list->string");
  T181 = YPsig(YPPlist(2,LITREF(lit_50),LITREF(lit_67)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  T180 = fun_reverse_list_Gstring_53 = YPmet(FUNCODEREF(fun_reverse_list_Gstring_53),LITREF(lit_79),T181,ENVNUL,PNUL,YPfalse);
  T185 = BOUNDP(YgooSioSreadYreverse_list_Gstring);
  if (T185 != YPfalse) {
    T184 = VARREF(YgooSioSreadYreverse_list_Gstring);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_reverse_list_Gstring_53;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  T182 = VARSET(YgooSioSreadYreverse_list_Gstring,T183);
  T179 = T182;
  return T179;
}

P YgooSioSreadY___main_1___() {
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
loop:
  lit_80 = YPPsym((P)"make-immutable!");
  T0 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_immutableX_54 = YPmet(FUNCODEREF(fun_make_immutableX_54),LITREF(lit_80),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YgooSioSreadYmake_immutableX);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSioSreadYmake_immutableX);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_make_immutableX_54;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSioSreadYmake_immutableX,T1);
  T5 = YPfalse;
  return T5;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooSioSport},
  {&module_info_gooScols},
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
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"until", &module_info_gooSmacros, "until"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%str", &module_info_gooSboot, "%str"},
  {"close", &module_info_gooSioSport, "close"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"error", &module_info_gooSboot, "error"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"out", &module_info_gooSioSport, "out"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"compose", &module_info_gooSruntime, "compose"},
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
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
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
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
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
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"set", &module_info_gooSboot, "set"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"col", &module_info_gooScolsScol, "col"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"1-", &module_info_gooSmath, "1-"},
  {"identity", &module_info_gooSruntime, "identity"},
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
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
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
  {"always", &module_info_gooSruntime, "always"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"do", &module_info_gooSmacros, "do"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"finds", &module_info_gooScolsSseq, "finds"},
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
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"range", &module_info_gooScolsSrange, "range"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
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
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"op", &module_info_gooSmacros, "op"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"~", &module_info_gooSmath, "~"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"let", &module_info_gooSboot, "let"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
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
  {"push", &module_info_gooScolsSseq, "push"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"~=", &module_info_gooSmath, "~="},
  {"find", &module_info_gooScolsScol, "find"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%put", &module_info_gooSboot, "%put"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"into", &module_info_gooScolsScol, "into"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"read", &module_info_gooSruntime, "read"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"acos", &module_info_gooSmath, "acos"},
  {"msg", &module_info_gooSruntime, "msg"},
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
  {"sig", &module_info_gooSruntime, "sig"},
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
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"export", &module_info_gooSboot, "export"},
  {"map", &module_info_gooSmacros, "map"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
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
  {"<handler>", &module_info_gooSruntime, "<handler>"},
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
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
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
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"fin", &module_info_gooSboot, "fin"},
  {"any?", &module_info_gooStypes, "any?"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<", &module_info_gooSmag, "<"},
  {"case", &module_info_gooSmacros, "case"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
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
  {"app-args", &module_info_gooSruntime, "app-args"},
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
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
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
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
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
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
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
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
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
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"df", &module_info_gooSboot, "df"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
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
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"put", &module_info_gooSioSport, "put"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"dg", &module_info_gooSboot, "dg"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"even?", &module_info_gooSmath, "even?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
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
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"tan", &module_info_gooSmath, "tan"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
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
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"new", &module_info_gooSboot, "new"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"@+", &module_info_gooSboot, "@+"},
  {"max", &module_info_gooSmag, "max"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
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
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"set-standard-read-macro!", CVAR, &YgooSioSreadYset_standard_read_macroX},
  {"gobble-line", CVAR, &YgooSioSreadYgobble_line},
  {"---main-1---", PVAR, NULL},
  {"token-message", CVAR, &YgooSioSreadYtoken_message},
  {"$dot", CVAR, &YgooSioSreadYDdot},
  {"$string-escape-chars", CVAR, &YgooSioSreadYDstring_escape_chars},
  {"sub-read-list", CVAR, &YgooSioSreadYsub_read_list},
  {"$vert-sym", CVAR, &YgooSioSreadYDvert_sym},
  {"gobble-nested-comment", CVAR, &YgooSioSreadYgobble_nested_comment},
  {"define-sharp-macro", CVAR, &YgooSioSreadYdefine_sharp_macro},
  {"read-string-literal", CVAR, &YgooSioSreadYread_string_literal},
  {"preferred-case", CVAR, &YgooSioSreadYpreferred_case},
  {"$vert-proxy", CVAR, &YgooSioSreadYDvert_proxy},
  {"get-standard-read-macro", CVAR, &YgooSioSreadYget_standard_read_macro},
  {"sub-read-token", CVAR, &YgooSioSreadYsub_read_token},
  {"reverse-list->string", CVAR, &YgooSioSreadYreverse_list_Gstring},
  {"sub-read-constituent", CVAR, &YgooSioSreadYsub_read_constituent},
  {"flush-whitespace", CVAR, &YgooSioSreadYflush_whitespace},
  {"sub-read", CVAR, &YgooSioSreadYsub_read},
  {"reader-token?", CVAR, &YgooSioSreadYreader_tokenQ},
  {"read-from-string", CVAR, &YgooSioSreadYread_from_string},
  {"token-message-setter", CVAR, &YgooSioSreadYtoken_message_setter},
  {"parse-token", CVAR, &YgooSioSreadYparse_token},
  {"<reader-token>", CVAR, &YgooSioSreadYLreader_tokenG},
  {"set-standard-syntax!", CVAR, &YgooSioSreadYset_standard_syntaxX},
  {"$close-paren", CVAR, &YgooSioSreadYDclose_paren},
  {"sub-read-vertical", CVAR, &YgooSioSreadYsub_read_vertical},
  {"*sharp-macros*", CVAR, &YgooSioSreadYTsharp_macrosT},
  {"*read-terminating?-vector*", CVAR, &YgooSioSreadYTread_terminatingQ_vectorT},
  {"$strange-symbol-names", CVAR, &YgooSioSreadYDstrange_symbol_names},
  {"reading-error", CVAR, &YgooSioSreadYreading_error},
  {"sub-read-carefully", CVAR, &YgooSioSreadYsub_read_carefully},
  {"read-delimited-list", CVAR, &YgooSioSreadYread_delimited_list},
  {"---main-0---", PVAR, NULL},
  {"make-immutable!", CVAR, &YgooSioSreadYmake_immutableX},
  {"$char-long-names", CVAR, &YgooSioSreadYDchar_long_names},
  {"make-reader-token", CVAR, &YgooSioSreadYmake_reader_token},
  {"sub-read-list-eof-error", CVAR, &YgooSioSreadYsub_read_list_eof_error},
  {"*read-dispatch-vector*", CVAR, &YgooSioSreadYTread_dispatch_vectorT},
  {"warn", CVAR, &YgooSioSreadYwarn},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"set-standard-read-macro!", "set-standard-read-macro!"},
  {"get-standard-read-macro", "get-standard-read-macro"},
  {"read", "read"},
  {"read-delimited-list", "read-delimited-list"},
  {"$char-long-names", "$char-long-names"},
  {"read-from-string", "read-from-string"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSioSread;
MODULE_INFO module_info_gooSioSread = {
  "goo/io/read",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSruntime (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooSioSport (void);
extern void load_module_gooScols (void);

/* EXPRESSION: */

extern void load_module_gooSioSread (void);

void load_module_gooSioSread (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooSioSport();
  load_module_gooScols();

  (P)YgooSioSreadY___main_0___();
  (P)YgooSioSreadY___main_1___();

}

/* END OF GENERATED CODE. */
