/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/read");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/read */

EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
DEF(YgooSioSreadYsub_read_carefully,"goo/io/read","sub-read-carefully");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosY1st,"goo/macros","1st");
DEF(YgooSioSreadYTsharp_macrosT,"goo/io/read","*sharp-macros*");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YgooSioSreadYsub_read_token,"goo/io/read","sub-read-token");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(YgooSioSreadYDclose_paren,"goo/io/read","$close-paren");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Ynul,"goo/boot","nul");
EXT(Ynil,"goo/boot","nil");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooSioSreadYDstring_escape_chars,"goo/io/read","$string-escape-chars");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
DEF(YgooSioSreadYwarn,"goo/io/read","warn");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YgooSioSreadYreverse_list_Gstring,"goo/io/read","reverse-list->string");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YgooSioSreadYtoken_message_setter,"goo/io/read","token-message-setter");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooSioSreadYTread_dispatch_vectorT,"goo/io/read","*read-dispatch-vector*");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
DEF(YgooSioSreadYsub_read_curlies,"goo/io/read","sub-read-curlies");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
DEF(YgooSioSreadYset_standard_syntaxX,"goo/io/read","set-standard-syntax!");
DEF(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YgooSioSreadYsub_read_list,"goo/io/read","sub-read-list");
EXT(Yfind_getter,"goo/boot","find-getter");
DEF(YgooSioSreadYread_string_literal,"goo/io/read","read-string-literal");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
DEF(YgooSioSreadYsub_read_brackets,"goo/io/read","sub-read-brackets");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
DEF(YgooSioSreadYTread_terminatingQ_vectorT,"goo/io/read","*read-terminating?-vector*");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSioSreadYDclose_bracket,"goo/io/read","$close-bracket");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YgooSioSreadYsub_read_list_eof_error,"goo/io/read","sub-read-list-eof-error");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YgooSioSreadYflush_whitespace,"goo/io/read","flush-whitespace");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YgooSioSreadYreader_tokenQ,"goo/io/read","reader-token?");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
DEF(YgooSioSreadYtoken_message,"goo/io/read","token-message");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYA,"goo/math","+");
DEF(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YgooSioSreadYDstrange_symbol_names,"goo/io/read","$strange-symbol-names");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooSioSreadYDvert_proxy,"goo/io/read","$vert-proxy");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YOanyQ,"goo/boot","@any?");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YgooSioSreadYDclose_curly,"goo/io/read","$close-curly");
DEF(YgooSioSreadYsub_read_vertical,"goo/io/read","sub-read-vertical");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ynot,"goo/boot","not");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YPprop,"goo/boot","%prop");
DEF(YgooSioSreadYsub_read_seq,"goo/io/read","sub-read-seq");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
DEF(YgooSioSreadYmake_reader_token,"goo/io/read","make-reader-token");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YgooSioSreadYparse_token,"goo/io/read","parse-token");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YgooSioSreadYdefine_sharp_macro,"goo/io/read","define-sharp-macro");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(YgooSioSreadYmake_immutableX,"goo/io/read","make-immutable!");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YgooSioSreadYLreader_tokenG,"goo/io/read","<reader-token>");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
DEF(YgooSioSreadYgobble_nested_comment,"goo/io/read","gobble-nested-comment");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YgooSioSreadYreading_error,"goo/io/read","reading-error");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPdefine_method,"goo/boot","%define-method");
DEF(YgooSioSreadYsub_read_constituent,"goo/io/read","sub-read-constituent");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YgooSioSreadYDvert_sym,"goo/io/read","$vert-sym");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
DEF(YgooSioSreadYsub_read,"goo/io/read","sub-read");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
DEF(YgooSioSreadYgobble_line,"goo/io/read","gobble-line");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(YgooSioSreadYpreferred_case,"goo/io/read","preferred-case");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_72);
DEFLIT(lit_22);
DEFLIT(lit_5);
DEFLIT(lit_109);
DEFLIT(lit_45);
DEFLIT(lit_76);
DEFLIT(lit_113);
DEFLIT(lit_106);
DEFLIT(lit_104);
DEFLIT(lit_64);
DEFLIT(lit_123);
DEFLIT(lit_3);
DEFLIT(lit_98);
DEFLIT(lit_23);
DEFLIT(lit_9);
DEFLIT(lit_15);
DEFLIT(lit_20);
DEFLIT(lit_100);
DEFLIT(lit_36);
DEFLIT(lit_54);
DEFLIT(lit_129);
DEFLIT(lit_77);
DEFLIT(lit_37);
DEFLIT(lit_29);
DEFLIT(lit_83);
DEFLIT(lit_110);
DEFLIT(lit_68);
DEFLIT(lit_70);
DEFLIT(lit_101);
DEFLIT(lit_50);
DEFLIT(lit_10);
DEFLIT(lit_55);
DEFLIT(lit_92);
DEFLIT(lit_39);
DEFLIT(lit_117);
DEFLIT(lit_90);
DEFLIT(lit_121);
DEFLIT(lit_128);
DEFLIT(lit_7);
DEFLIT(lit_33);
DEFLIT(lit_130);
DEFLIT(lit_13);
DEFLIT(lit_105);
DEFLIT(lit_124);
DEFLIT(lit_19);
DEFLIT(lit_42);
DEFLIT(lit_82);
DEFLIT(lit_11);
DEFLIT(lit_32);
DEFLIT(lit_111);
DEFLIT(lit_69);
DEFLIT(lit_34);
DEFLIT(lit_6);
DEFLIT(lit_80);
DEFLIT(lit_59);
DEFLIT(lit_41);
DEFLIT(lit_21);
DEFLIT(lit_1);
DEFLIT(lit_102);
DEFLIT(lit_14);
DEFLIT(lit_58);
DEFLIT(lit_126);
DEFLIT(lit_60);
DEFLIT(lit_97);
DEFLIT(lit_18);
DEFLIT(lit_71);
DEFLIT(lit_27);
DEFLIT(lit_61);
DEFLIT(lit_38);
DEFLIT(lit_107);
DEFLIT(lit_53);
DEFLIT(lit_47);
DEFLIT(lit_62);
DEFLIT(lit_95);
DEFLIT(lit_119);
DEFLIT(lit_116);
DEFLIT(lit_87);
DEFLIT(lit_122);
DEFLIT(lit_73);
DEFLIT(lit_103);
DEFLIT(lit_118);
DEFLIT(lit_84);
DEFLIT(lit_48);
DEFLIT(lit_78);
DEFLIT(lit_49);
DEFLIT(lit_75);
DEFLIT(lit_63);
DEFLIT(lit_2);
DEFLIT(lit_115);
DEFLIT(lit_89);
DEFLIT(lit_0);
DEFLIT(lit_40);
DEFLIT(lit_127);
DEFLIT(lit_114);
DEFLIT(lit_44);
DEFLIT(lit_8);
DEFLIT(lit_16);
DEFLIT(lit_66);
DEFLIT(lit_108);
DEFLIT(lit_94);
DEFLIT(lit_52);
DEFLIT(lit_43);
DEFLIT(lit_86);
DEFLIT(lit_93);
DEFLIT(lit_28);
DEFLIT(lit_112);
DEFLIT(lit_131);
DEFLIT(lit_17);
DEFLIT(lit_56);
DEFLIT(lit_12);
DEFLIT(lit_46);
DEFLIT(lit_81);
DEFLIT(lit_125);
DEFLIT(lit_65);
DEFLIT(lit_74);
DEFLIT(lit_31);
DEFLIT(lit_79);
DEFLIT(lit_91);
DEFLIT(lit_24);
DEFLIT(lit_51);
DEFLIT(lit_96);
DEFLIT(lit_88);
DEFLIT(lit_26);
DEFLIT(lit_85);
DEFLIT(lit_35);
DEFLIT(lit_67);
DEFLIT(lit_4);
DEFLIT(lit_57);
DEFLIT(lit_30);
DEFLIT(lit_120);
DEFLIT(lit_25);
DEFLIT(lit_99);

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
LOCFOR(fun_sub_read_seq_26);
LOCFOR(fun_sub_read_brackets_27);
LOCFOR(fun_sub_read_curlies_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_loop_35);
FUNFOR(YgooSioSreadYread_string_literal);
LOCFOR(fun_37);
LOCFOR(fun_loop_38);
LOCFOR(fun_gobble_line_39);
LOCFOR(fun_define_sharp_macro_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_loop_45);
FUNFOR(YgooSioSreadYgobble_nested_comment);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
LOCFOR(fun_loop_53);
LOCFOR(fun_sub_read_token_54);
LOCFOR(fun_55);
LOCFOR(fun_parse_token_56);
LOCFOR(fun_reading_error_57);
LOCFOR(fun_warn_58);
LOCFOR(fun_reverse_list_Gstring_59);
LOCFOR(fun_make_immutableX_60);
extern P YgooSioSreadY___main_0___ ();
extern P YgooSioSreadY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_loop_0) {
  P formF2344;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),FREEREF(0));
  formF2344 = T1;
  T4 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF2344);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T2 = formF2344;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),formF2344,VARREF(YgooSioSreadYDclose_paren));
    if (T6 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSioSreadYwarn),LITREF(lit_4));
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
  P loopF2345;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_0,2);
  loopF2345 = T1;
  FUNINIT(loopF2345, 2,port_,loopF2345);
  T2 = CALL0(0,loopF2345);
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
  T1 = CALL1(1,VARREF(YgooSconditionsYread),T2);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_3) {
  P tmpF2346;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2346 = T1;
  if (tmpF2346 != YPfalse) {
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
  P portF2347;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  portF2347 = YPfalse;
  portF2347 = BOXFAB(portF2347);
  T3 = FUNFAB(fun_2,2,portF2347,x_);
  T4 = FUNFAB(fun_3,1,portF2347);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_carefully_5) {
  P port_;
  P formF2348;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF2348 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF2348);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_9));
    T2 = T4;
  } else {
    T6 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF2348);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),formF2348);
      T7 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,T8);
      T5 = T7;
    } else {
      T5 = formF2348;
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
  P cF2349;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF2349 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2349);
  if (T3 != YPfalse) {
    T2 = cF2349;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF2349);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T6);
    T4 = CALL2(1,T5,cF2349,port_);
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
  T0 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_25),c_);
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
  P cF2350;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF2350 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF2350);
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),VARREF(YgooScolsSstrYascii_whitespaces),T4);
  if (T3 != YPfalse) {
    CALL1(1,VARREF(YgooSioSportYget),port_);
    T5 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
    T2 = T5;
  } else {
    T2 = cF2350;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_16) {
  P c_;
  P UF2351;
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
    UF2351 = T4;
    T7 = CALL1(1,VARREF(YgooSconditionsYread),FREEREF(1));
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,UF2351);
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
  P loopF2353;
  P retlistF2352;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(endchar_, 0);
  ARG(port_, 1);
loop:
  retlistF2352 = VARREF(Ynil);
  retlistF2352 = BOXFAB(retlistF2352);
  T3 = FUNSHELL(1,fun_loop_16,4);
  loopF2353 = T3;
  FUNINIT(loopF2353, 4,endchar_,port_,retlistF2352,loopF2353);
  T5 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
  T4 = CALL1(0,loopF2353,T5);
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
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),LITREF(lit_46),port_);
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
  T0 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_51));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_next_24) {
  P c_,prev_,line_,form_;
  P nextF2355;
  P prevF2354;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(c_, 0);
  ARG(prev_, 1);
  ARG(line_, 2);
  ARG(form_, 3);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),prev_,VARREF(YgooSioSreadYDvert_proxy));
  if (T2 != YPfalse) {
    T1 = VARREF(YgooSioSreadYDvert_sym);
  } else {
    T1 = prev_;
  }
  prevF2354 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),form_);
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),FREEREF(0));
    T3 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDclose_paren));
    if (T7 != YPfalse) {
      T8 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,prevF2354);
      T6 = T8;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDvert_sym));
      if (T10 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),FREEREF(0));
        nextF2355 = T12;
        T15 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,nextF2355);
        T14 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF2354,T15,line_);
        T16 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,FREEREF(0));
        T13 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T14,T16,line_);
        T11 = T13;
        T9 = T11;
      } else {
        if (YPtrue != YPfalse) {
          T20 = CALL1(1,VARREF(YgooSioSportYport_line),FREEREF(0));
          T21 = CALL1(1,VARREF(YgooSioSreadYsub_read),FREEREF(0));
          T19 = CALL4(1,FREEREF(1),c_,form_,T20,T21);
          T18 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF2354,T19,line_);
          T17 = T18;
        } else {
          T17 = YPfalse;
        }
        T9 = T17;
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
  P c_,p_;
  P read_nextF2358;
  P formF2357;
  P lineF2356;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(p_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_line),p_);
  lineF2356 = T1;
  T3 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
  formF2357 = T3;
  T5 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF2357);
  if (T5 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),p_);
    T4 = T6;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),formF2357,VARREF(YgooSioSreadYDclose_paren));
    if (T8 != YPfalse) {
      T7 = Ynil;
    } else {
      if (YPtrue != YPfalse) {
        T11 = FUNSHELL(1,fun_read_next_24,2);
        read_nextF2358 = T11;
        FUNINIT(read_nextF2358, 2,p_,read_nextF2358);
        T13 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
        T12 = CALL4(1,read_nextF2358,c_,formF2357,lineF2356,T13);
        T10 = T12;
        T9 = T10;
      } else {
        T9 = YPfalse;
      }
      T7 = T9;
    }
    T4 = T7;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_seq_26) {
  P c_,e_,port_;
  P formF2359;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(c_, 0);
  ARG(e_, 1);
  ARG(port_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF2359 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF2359);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_58));
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),formF2359,e_);
    if (T6 != YPfalse) {
      T5 = Ynil;
    } else {
      T8 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,e_,port_);
      T7 = CALL2(1,VARREF(YgooSmacrosYpair),formF2359,T8);
      T5 = T7;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_brackets_27) {
  P c_,port_;
  P x_1396F2362;
  P x_1395F2361;
  P formF2360;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_bracket),port_);
  formF2360 = T1;
  T3 = CALL1(1,VARREF(YgooStypesYlen),formF2360);
  x_1395F2361 = T3;
  x_1396F2362 = VARREF(YgooSmacrosYEE);
  T6 = CALL2(1,x_1396F2362,x_1395F2361,YPint((P)2));
  if (T6 != YPfalse) {
    T8 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
    T10 = CALL1(1,VARREF(YgooSmacrosY1st),formF2360);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T12 = CALL1(1,VARREF(YgooSmacrosY2nd),formF2360);
    T11 = CALL1(1,VARREF(Ylst),T12);
    T7 = CALL4(1,VARREF(YgooSmacrosYcat),T8,T9,T11,LITREF(lit_62));
    T5 = T7;
  } else {
    T14 = CALL2(1,x_1396F2362,x_1395F2361,YPint((P)3));
    if (T14 != YPfalse) {
      T17 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF2360);
      T16 = CALL2(1,VARREF(YgooSmacrosYEE),T17,LITREF(lit_63));
      if (T16 != YPfalse) {
        T19 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
        T21 = CALL1(1,VARREF(YgooSmacrosY1st),formF2360);
        T20 = CALL1(1,VARREF(Ylst),T21);
        T23 = CALL1(1,VARREF(YgooSmacrosY2nd),formF2360);
        T22 = CALL1(1,VARREF(Ylst),T23);
        T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T22,LITREF(lit_62));
        T15 = T18;
      } else {
        T25 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
        T27 = CALL1(1,VARREF(YgooSmacrosY1st),formF2360);
        T26 = CALL1(1,VARREF(Ylst),T27);
        T29 = CALL1(1,VARREF(YgooSmacrosY2nd),formF2360);
        T28 = CALL1(1,VARREF(Ylst),T29);
        T31 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF2360);
        T30 = CALL1(1,VARREF(Ylst),T31);
        T24 = CALL5(1,VARREF(YgooSmacrosYcat),T25,T26,T28,T30,LITREF(lit_62));
        T15 = T24;
      }
      T13 = T15;
    } else {
      T32 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_66));
      T13 = T32;
    }
    T5 = T13;
  }
  T4 = T5;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_curlies_28) {
  P c_,port_;
  P dot_indexF2364;
  P formF2363;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_curly),port_);
  formF2363 = T1;
  T3 = CALL2(1,VARREF(YgooScolsSseqYpos),formF2363,LITREF(lit_69));
  dot_indexF2364 = T3;
  if (dot_indexF2364 != YPfalse) {
    T6 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
    T8 = CALL3(1,VARREF(YgooScolsSseqYsub),formF2363,YPint((P)0),dot_indexF2364);
    T7 = CALL1(1,VARREF(Ylst),T8);
    T10 = CALL2(1,VARREF(YgooSmathYA),dot_indexF2364,YPint((P)1));
    T9 = CALL2(1,VARREF(YgooScolsSseqYsubT),formF2363,T10);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T9,LITREF(lit_62));
    T4 = T5;
  } else {
    T12 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
    T13 = CALL1(1,VARREF(Ylst),Ynil);
    T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,formF2363,LITREF(lit_62));
    T4 = T11;
  }
  T2 = T4;
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
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_paren));
}

FUNCODEDEF(fun_30) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_curly));
}

FUNCODEDEF(fun_31) {
  P c_,port_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_bracket));
}

FUNCODEDEF(fun_32) {
  P c_,port_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_75),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P c_,port_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_77),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P c_,port_;
  P keywordF2366;
  P nextF2365;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  nextF2365 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),nextF2365);
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_79));
    T3 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),nextF2365,YPchr((P)64));
    if (T7 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T6 = LITREF(lit_80);
    } else {
      T6 = LITREF(lit_81);
    }
    T3 = T6;
  }
  keywordF2366 = T3;
  T9 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T8 = CALL2(1,VARREF(Ylst),keywordF2366,T9);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_35) {
  P l_,i_;
  P ecF2370;
  P tmpF2369;
  P cF2368;
  P cF2367;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
  cF2367 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2367);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),FREEREF(0),LITREF(lit_85));
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYE),cF2367,YPchr((P)92));
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
      cF2368 = T8;
      T10 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2368);
      if (T10 != YPfalse) {
        T11 = CALL2(1,VARREF(YgooSioSreadYreading_error),FREEREF(0),LITREF(lit_86));
        T9 = T11;
      } else {
        T14 = CALL2(1,VARREF(YgooSmathYE),cF2368,YPchr((P)92));
        tmpF2369 = T14;
        if (tmpF2369 != YPfalse) {
          T15 = tmpF2369;
        } else {
          T16 = CALL2(1,VARREF(YgooSmathYE),cF2368,YPchr((P)34));
          T15 = T16;
        }
        T13 = T15;
        if (T13 != YPfalse) {
          T18 = CALL2(1,VARREF(YgooSmacrosYpair),cF2368,l_);
          T19 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
          a1 = T18;
          a2 = T19;
          l_ = a1;
          i_ = a2;
          goto loop;
          T12 = T17;
        } else {
          T22 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF2368);
          T21 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYDstring_escape_chars),T22);
          ecF2370 = T21;
          if (ecF2370 != YPfalse) {
            T25 = CALL2(1,VARREF(YgooSmacrosYpair),ecF2370,l_);
            T26 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
            a1 = T25;
            a2 = T26;
            l_ = a1;
            i_ = a2;
            goto loop;
            T23 = T24;
          } else {
            T27 = CALL3(1,VARREF(YgooSioSreadYreading_error),FREEREF(0),LITREF(lit_87),cF2368);
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
      T29 = CALL2(1,VARREF(YgooSmathYE),cF2367,YPchr((P)34));
      if (T29 != YPfalse) {
        T30 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),l_,i_);
        T28 = T30;
      } else {
        T32 = CALL2(1,VARREF(YgooSmacrosYpair),cF2367,l_);
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
  P loopF2371;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_35,2);
  loopF2371 = T1;
  FUNINIT(loopF2371, 2,port_,loopF2371);
  T2 = CALL2(0,loopF2371,Ynil,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
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

FUNCODEDEF(fun_loop_38) {
  P cF2372;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
  cF2372 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2372);
  if (T3 != YPfalse) {
    T2 = cF2372;
  } else {
    T5 = CALL2(1,VARREF(YgooSmathYE),cF2372,YPchr((P)10));
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

FUNCODEDEF(fun_gobble_line_39) {
  P port_;
  P loopF2373;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_38,2);
  loopF2373 = T1;
  FUNINIT(loopF2373, 2,port_,loopF2373);
  T2 = CALL0(0,loopF2373);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_define_sharp_macro_40) {
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

FUNCODEDEF(fun_41) {
  P c_,port_;
  P probeF2376;
  P cF2375;
  P cF2374;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF2374 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2374);
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_94));
    T3 = T5;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYto_lower),cF2374);
    T3 = T6;
  }
  cF2375 = T3;
  T8 = CALL2(1,VARREF(YgooScolsSlstYassq),cF2375,VARREF(YgooSioSreadYTsharp_macrosT));
  probeF2376 = T8;
  if (probeF2376 != YPfalse) {
    T12 = CALL1(1,VARREF(Ytail),probeF2376);
    T11 = CALL1(1,VARREF(Yhead),T12);
    T10 = CALL2(1,T11,cF2375,port_);
    T9 = T10;
  } else {
    T13 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_95),cF2375);
    T9 = T13;
  }
  T7 = T9;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
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

FUNCODEDEF(fun_43) {
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

FUNCODEDEF(fun_44) {
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

FUNCODEDEF(fun_loop_45) {
  P found_slashQ_;
  P x_1398F2379;
  P x_1397F2378;
  P cF2377;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(found_slashQ_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
  cF2377 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2377);
  if (T3 != YPfalse) {
    T2 = cF2377;
  } else {
    x_1397F2378 = cF2377;
    x_1398F2379 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_1398F2379,x_1397F2378,YPchr((P)47));
    if (T7 != YPfalse) {
      a1 = YPtrue;
      found_slashQ_ = a1;
      goto loop;
      T6 = T8;
    } else {
      T10 = CALL2(1,x_1398F2379,x_1397F2378,YPchr((P)35));
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
  P loopF2380;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_45,2);
  loopF2380 = T1;
  FUNINIT(loopF2380, 2,port_,loopF2380);
  T2 = CALL1(0,loopF2380,YPfalse);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
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

FUNCODEDEF(fun_48) {
  P c_,port_;
  P tempF2383;
  P nameF2382;
  P cF2381;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF2381 = T1;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2381);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_105));
    T2 = T4;
  } else {
    T6 = CALL1(1,VARREF(YgooSmathYalphaQ),cF2381);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
      nameF2382 = T8;
      T12 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF2382);
      T11 = CALL1(1,VARREF(YgooStypesYlen),T12);
      T10 = CALL2(1,VARREF(YgooSmathYE),T11,YPint((P)1));
      if (T10 != YPfalse) {
        T9 = cF2381;
      } else {
        T14 = CALL2(1,VARREF(YgooScolsSlstYassq),nameF2382,VARREF(YgooSioSreadYDchar_long_names));
        tempF2383 = T14;
        if (tempF2383 != YPfalse) {
          T17 = CALL1(1,VARREF(Ytail),tempF2383);
          T16 = CALL1(1,VARREF(Yhead),T17);
          T15 = T16;
        } else {
          T18 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_106),nameF2382);
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

FUNCODEDEF(fun_49) {
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

FUNCODEDEF(fun_50) {
  P c_,port_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_bracket),port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P c_,port_;
  P tmpF2385;
  P stringF2384;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),YPchr((P)35),port_);
  stringF2384 = T1;
  T3 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),stringF2384);
  tmpF2385 = T3;
  if (tmpF2385 != YPfalse) {
    T4 = tmpF2385;
  } else {
    T5 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_110),stringF2384);
    T4 = T5;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
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

FUNCODEDEF(fun_loop_53) {
  P l_,n_;
  P tmpF2387;
  P cF2386;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYpeek),FREEREF(0));
  cF2386 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2386);
  tmpF2387 = T4;
  if (tmpF2387 != YPfalse) {
    T5 = tmpF2387;
  } else {
    T7 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF2386);
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

FUNCODEDEF(fun_sub_read_token_54) {
  P c_,port_;
  P loopF2388;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_53,2);
  loopF2388 = T1;
  FUNINIT(loopF2388, 2,port_,loopF2388);
  T4 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),c_);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T2 = CALL2(0,loopF2388,T3,YPint((P)1));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
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

FUNCODEDEF(fun_parse_token_56) {
  P string_,port_;
  P maybe_numberF2393;
  P tmpF2392;
  P tmpF2391;
  P tmpF2390;
  P cF2389;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1,a2;
LINK_STACK();
  ARG(string_, 0);
  ARG(port_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),string_,YPint((P)0));
  cF2389 = T2;
  T4 = CALL1(1,VARREF(YgooSmathYdigitQ),cF2389);
  tmpF2390 = T4;
  if (tmpF2390 != YPfalse) {
    T5 = tmpF2390;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),cF2389,YPchr((P)43));
    tmpF2391 = T7;
    if (tmpF2391 != YPfalse) {
      T8 = tmpF2391;
    } else {
      T10 = CALL2(1,VARREF(YgooSmathYE),cF2389,YPchr((P)45));
      tmpF2392 = T10;
      if (tmpF2392 != YPfalse) {
        T11 = tmpF2392;
      } else {
        T12 = CALL2(1,VARREF(YgooSmathYE),cF2389,YPchr((P)46));
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
    maybe_numberF2393 = T14;
    if (maybe_numberF2393 != YPfalse) {
      T15 = maybe_numberF2393;
    } else {
      T18 = FUNFAB(fun_55,1,string_);
      T17 = CALL2(1,VARREF(YgooStypesYanyQ),T18,VARREF(YgooSioSreadYDstrange_symbol_names));
      if (T17 != YPfalse) {
        T20 = CALL1(1,VARREF(YgooSioSreadYmake_immutableX),string_);
        T19 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T20);
        T16 = T19;
      } else {
        T22 = CALL2(1,VARREF(YgooSmathYE),string_,LITREF(lit_119));
        if (T22 != YPfalse) {
          T24 = CALL1(1,VARREF(YgooSioSreadYmake_immutableX),string_);
          T23 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T24);
          T21 = T23;
        } else {
          T25 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_120),string_);
          T21 = T25;
        }
        T16 = T21;
      }
      T15 = T16;
    }
    T13 = T15;
    T0 = T13;
  } else {
    T27 = CALL1(1,VARREF(YgooSioSreadYmake_immutableX),string_);
    T26 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T27);
    T0 = T26;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reading_error_57) {
  P port_,message_,irritants_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(irritants_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),message_,LITREF(lit_125));
  T3 = CALL1(1,VARREF(Ylst),port_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),irritants_,T3);
  T0 = CALL2(1,VARREF(Yerror),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_warn_58) {
  P string_,irritants_and_port_;
  P a1,a2;
LINK_STACK();
  ARG(string_, 0);
  NARGS(irritants_and_port_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_reverse_list_Gstring_59) {
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

FUNCODEDEF(fun_make_immutableX_60) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

P YgooSioSreadY___main_0___() {
  P vecF2396;
  P str10496F2395;
  P sub_read_whitespaceF2394;
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
  P T160,T161,T162,T163,T164,T165;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"read");
  lit_1 = YPPlist(1,YPPsym((P)"port"));
  lit_2 = YPPsym((P)"loop");
  lit_3 = Ynil;
  lit_4 = YPsb((P)"discarding extraneous right parenthesis");
  T1 = YPsig(LITREF(lit_3),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_0 = YPmet(FUNCODEREF(fun_loop_0),LITREF(lit_2),T1,ENVNUL,PNUL,sloc(28));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_1 = YPmet(FUNCODEREF(fun_read_1),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(26));
  T4 = BOUNDP(YgooSconditionsYread);
  if (T4 != YPfalse) {
    T3 = VARREF(YgooSconditionsYread);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_read_1;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YgooSconditionsYread,T2);
  lit_5 = YPPsym((P)"read-from-string");
  lit_6 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPsig(LITREF(lit_3),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T8,ENVNUL,PNUL,sloc(39));
  T7 = YPsig(LITREF(lit_3),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_3 = YPmet(FUNCODEREF(fun_3),YPfalse,T7,ENVNUL,PNUL,sloc(39));
  T6 = YPsig(LITREF(lit_6),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_from_string_4 = YPmet(FUNCODEREF(fun_read_from_string_4),LITREF(lit_5),T6,ENVNUL,PNUL,sloc(38));
  T11 = BOUNDP(YgooSioSreadYread_from_string);
  if (T11 != YPfalse) {
    T10 = VARREF(YgooSioSreadYread_from_string);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_read_from_string_4;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YgooSioSreadYread_from_string,T9);
  lit_7 = YPPsym((P)"sub-read-carefully");
  lit_8 = YPPlist(1,YPPsym((P)"port"));
  lit_9 = YPsb((P)"unexpected end of file");
  T13 = YPsig(LITREF(lit_8),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_carefully_5 = YPmet(FUNCODEREF(fun_sub_read_carefully_5),LITREF(lit_7),T13,ENVNUL,PNUL,sloc(41));
  T16 = BOUNDP(YgooSioSreadYsub_read_carefully);
  if (T16 != YPfalse) {
    T15 = VARREF(YgooSioSreadYsub_read_carefully);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_sub_read_carefully_5;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YgooSioSreadYsub_read_carefully,T14);
  lit_10 = YPPsym((P)"<reader-token>");
  T19 = (P)YPpair(VARREF(YLanyG),Ynil);
  T18 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_10),T19);
  VARSET(YgooSioSreadYLreader_tokenG,T18);
  lit_11 = YPPsym((P)"token-message");
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YgooSioSreadYLreader_tokenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_token_message_6 = YPmet(FUNCODEREF(fun_token_message_6),LITREF(lit_11),T20,ENVNUL,PNUL,sloc(51));
  T23 = BOUNDP(YgooSioSreadYtoken_message);
  if (T23 != YPfalse) {
    T22 = VARREF(YgooSioSreadYtoken_message);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_token_message_6;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YgooSioSreadYtoken_message,T21);
  lit_13 = YPPsym((P)"token-message-setter");
  lit_14 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T25 = YPsig(LITREF(lit_14),YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSreadYLreader_tokenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_token_message_setter_7 = YPmet(FUNCODEREF(fun_token_message_setter_7),LITREF(lit_13),T25,ENVNUL,PNUL,sloc(51));
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
  lit_15 = YPPsym((P)"make-reader-token");
  lit_16 = YPPlist(1,YPPsym((P)"message"));
  T30 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_reader_token_8 = YPmet(FUNCODEREF(fun_make_reader_token_8),LITREF(lit_15),T30,ENVNUL,PNUL,sloc(53));
  T33 = BOUNDP(YgooSioSreadYmake_reader_token);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooSioSreadYmake_reader_token);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_make_reader_token_8;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooSioSreadYmake_reader_token,T31);
  lit_17 = YPPsym((P)"reader-token?");
  lit_18 = YPPlist(1,YPPsym((P)"form"));
  T35 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_reader_tokenQ_9 = YPmet(FUNCODEREF(fun_reader_tokenQ_9),LITREF(lit_17),T35,ENVNUL,PNUL,sloc(56));
  T38 = BOUNDP(YgooSioSreadYreader_tokenQ);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooSioSreadYreader_tokenQ);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_reader_tokenQ_9;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooSioSreadYreader_tokenQ,T36);
  lit_19 = YPsb((P)"unexpected right parenthesis");
  T40 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_19));
  VARSET(YgooSioSreadYDclose_paren,T40);
  lit_20 = YPsb((P)"unexpected right bracket");
  T41 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_20));
  VARSET(YgooSioSreadYDclose_bracket,T41);
  lit_21 = YPsb((P)"unexpected right curly");
  T42 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_21));
  VARSET(YgooSioSreadYDclose_curly,T42);
  lit_22 = YPPsym((P)"sub-read");
  lit_23 = YPPlist(1,YPPsym((P)"port"));
  T43 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_10 = YPmet(FUNCODEREF(fun_sub_read_10),LITREF(lit_22),T43,ENVNUL,PNUL,sloc(65));
  T46 = BOUNDP(YgooSioSreadYsub_read);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooSioSreadYsub_read);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_sub_read_10;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooSioSreadYsub_read,T44);
  lit_24 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_25 = YPsb((P)"illegal character read");
  T48 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T48,ENVNUL,PNUL,sloc(76));
  T50 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T51 = fun_11;
  T49 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T50,T51);
  VARSET(YgooSioSreadYTread_dispatch_vectorT,T49);
  T53 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T52 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T53,YPtrue);
  VARSET(YgooSioSreadYTread_terminatingQ_vectorT,T52);
  lit_26 = YPPsym((P)"set-standard-syntax!");
  lit_27 = YPPlist(3,YPPsym((P)"char"),YPPsym((P)"terminating?"),YPPsym((P)"reader"));
  T54 = YPsig(LITREF(lit_27),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_syntaxX_12 = YPmet(FUNCODEREF(fun_set_standard_syntaxX_12),LITREF(lit_26),T54,ENVNUL,PNUL,sloc(80));
  T57 = BOUNDP(YgooSioSreadYset_standard_syntaxX);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooSioSreadYset_standard_syntaxX);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_set_standard_syntaxX_12;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooSioSreadYset_standard_syntaxX,T55);
  lit_28 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_29 = YPPlist(1,YPPsym((P)"c"));
  T60 = YPsig(LITREF(lit_28),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T60,ENVNUL,PNUL,sloc(84));
  T59 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T59,ENVNUL,PNUL,sloc(85));
  T61 = fun_13;
  sub_read_whitespaceF2394 = T61;
  T63 = FUNFAB(fun_14,1,sub_read_whitespaceF2394);
  T62 = XCALL2(1,VARREF(YgooSmacrosYdo),T63,VARREF(YgooScolsSstrYascii_whitespaces));
  lit_30 = YPPsym((P)"flush-whitespace");
  lit_31 = YPPlist(1,YPPsym((P)"port"));
  T64 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYflush_whitespace = YPmet(FUNCODEREF(YgooSioSreadYflush_whitespace),LITREF(lit_30),T64,ENVNUL,PNUL,sloc(88));
  T65 = YgooSioSreadYflush_whitespace;
  VARSET(YgooSioSreadYflush_whitespace,T65);
  lit_32 = YPPsym((P)"read-delimited-list");
  lit_33 = YPPlist(2,YPPsym((P)"endchar"),YPPsym((P)"port"));
  lit_34 = YPPlist(1,YPPsym((P)"c"));
  T67 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_16 = YPmet(FUNCODEREF(fun_loop_16),LITREF(lit_2),T67,ENVNUL,PNUL,sloc(98));
  T66 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_delimited_list = YPmet(FUNCODEREF(YgooSioSreadYread_delimited_list),LITREF(lit_32),T66,ENVNUL,PNUL,sloc(96));
  T68 = YgooSioSreadYread_delimited_list;
  VARSET(YgooSioSreadYread_delimited_list,T68);
  lit_35 = YPPsym((P)"sub-read-constituent");
  lit_36 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T69 = YPsig(LITREF(lit_36),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_constituent = YPmet(FUNCODEREF(YgooSioSreadYsub_read_constituent),LITREF(lit_35),T69,ENVNUL,PNUL,sloc(104));
  T70 = YgooSioSreadYsub_read_constituent;
  VARSET(YgooSioSreadYsub_read_constituent,T70);
  lit_37 = YPsb((P)"!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM");
  lit_38 = YPsb((P)"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  lit_39 = YPPlist(1,YPPsym((P)"c"));
  T71 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T71,ENVNUL,PNUL,sloc(111));
  T72 = XCALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_37),LITREF(lit_38));
  str10496F2395 = T72;
  T74 = fun_19;
  T73 = XCALL2(1,VARREF(YgooSmacrosYdo),T74,str10496F2395);
  lit_40 = YPPsym((P)"set-standard-read-macro!");
  lit_41 = YPPlist(3,YPPsym((P)"char"),YPPsym((P)"terminating?"),YPPsym((P)"proc"));
  T75 = YPsig(LITREF(lit_41),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_read_macroX_20 = YPmet(FUNCODEREF(fun_set_standard_read_macroX_20),LITREF(lit_40),T75,ENVNUL,PNUL,sloc(116));
  T78 = BOUNDP(YgooSioSreadYset_standard_read_macroX);
  if (T78 != YPfalse) {
    T77 = VARREF(YgooSioSreadYset_standard_read_macroX);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_set_standard_read_macroX_20;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YgooSioSreadYset_standard_read_macroX,T76);
  lit_42 = YPPsym((P)"get-standard-read-macro");
  lit_43 = YPPlist(1,YPPsym((P)"char"));
  T80 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_get_standard_read_macro_21 = YPmet(FUNCODEREF(fun_get_standard_read_macro_21),LITREF(lit_42),T80,ENVNUL,PNUL,sloc(119));
  T83 = BOUNDP(YgooSioSreadYget_standard_read_macro);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooSioSreadYget_standard_read_macro);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_get_standard_read_macro_21;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooSioSreadYget_standard_read_macro,T81);
  lit_44 = YPPsym((P)"sub-read-vertical");
  lit_45 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_46 = YPsb((P)"|");
  T85 = YPsig(LITREF(lit_45),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_vertical_22 = YPmet(FUNCODEREF(fun_sub_read_vertical_22),LITREF(lit_44),T85,ENVNUL,PNUL,sloc(122));
  T88 = BOUNDP(YgooSioSreadYsub_read_vertical);
  if (T88 != YPfalse) {
    T87 = VARREF(YgooSioSreadYsub_read_vertical);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sub_read_vertical_22;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooSioSreadYsub_read_vertical,T86);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)124),YPtrue,VARREF(YgooSioSreadYsub_read_vertical));
  lit_47 = YPsb((P)"|");
  T90 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),LITREF(lit_47));
  VARSET(YgooSioSreadYDvert_sym,T90);
  lit_48 = YPsb((P)"vert-proxy");
  T91 = XCALL1(1,VARREF(Ylst),LITREF(lit_48));
  VARSET(YgooSioSreadYDvert_proxy,T91);
  lit_49 = YPPsym((P)"sub-read-list-eof-error");
  lit_50 = YPPlist(1,YPPsym((P)"port"));
  lit_51 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T92 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_list_eof_error = YPmet(FUNCODEREF(YgooSioSreadYsub_read_list_eof_error),LITREF(lit_49),T92,ENVNUL,PNUL,sloc(130));
  T93 = YgooSioSreadYsub_read_list_eof_error;
  VARSET(YgooSioSreadYsub_read_list_eof_error,T93);
  lit_52 = YPPsym((P)"sub-read-list");
  lit_53 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"p"));
  lit_54 = YPPsym((P)"read-next");
  lit_55 = YPPlist(4,YPPsym((P)"c"),YPPsym((P)"prev"),YPPsym((P)"line"),YPPsym((P)"form"));
  T95 = YPsig(LITREF(lit_55),YPPlist(4,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_read_next_24 = YPmet(FUNCODEREF(fun_read_next_24),LITREF(lit_54),T95,ENVNUL,PNUL,sloc(140));
  T94 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_list_25 = YPmet(FUNCODEREF(fun_sub_read_list_25),LITREF(lit_52),T94,ENVNUL,PNUL,sloc(133));
  T98 = BOUNDP(YgooSioSreadYsub_read_list);
  if (T98 != YPfalse) {
    T97 = VARREF(YgooSioSreadYsub_read_list);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sub_read_list_25;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YgooSioSreadYsub_read_list,T96);
  lit_56 = YPPsym((P)"sub-read-seq");
  lit_57 = YPPlist(3,YPPsym((P)"c"),YPPsym((P)"e"),YPPsym((P)"port"));
  lit_58 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T100 = YPsig(LITREF(lit_57),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_sub_read_seq_26 = YPmet(FUNCODEREF(fun_sub_read_seq_26),LITREF(lit_56),T100,ENVNUL,PNUL,sloc(157));
  T103 = BOUNDP(YgooSioSreadYsub_read_seq);
  if (T103 != YPfalse) {
    T102 = VARREF(YgooSioSreadYsub_read_seq);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sub_read_seq_26;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YgooSioSreadYsub_read_seq,T101);
  lit_59 = YPPsym((P)"sub-read-brackets");
  lit_60 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_61 = YPPsym((P)"elt");
  lit_62 = Ynil;
  lit_63 = YPPsym((P)"*");
  lit_64 = YPPsym((P)"sub*");
  lit_65 = YPPsym((P)"sub");
  lit_66 = YPsb((P)"invalid [ ... ] form");
  T105 = YPsig(LITREF(lit_60),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_brackets_27 = YPmet(FUNCODEREF(fun_sub_read_brackets_27),LITREF(lit_59),T105,ENVNUL,PNUL,sloc(166));
  T108 = BOUNDP(YgooSioSreadYsub_read_brackets);
  if (T108 != YPfalse) {
    T107 = VARREF(YgooSioSreadYsub_read_brackets);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sub_read_brackets_27;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YgooSioSreadYsub_read_brackets,T106);
  lit_67 = YPPsym((P)"sub-read-curlies");
  lit_68 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_69 = YPPsym((P)".");
  lit_70 = YPPsym((P)"fun");
  T110 = YPsig(LITREF(lit_68),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_curlies_28 = YPmet(FUNCODEREF(fun_sub_read_curlies_28),LITREF(lit_67),T110,ENVNUL,PNUL,sloc(175));
  T113 = BOUNDP(YgooSioSreadYsub_read_curlies);
  if (T113 != YPfalse) {
    T112 = VARREF(YgooSioSreadYsub_read_curlies);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sub_read_curlies_28;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YgooSioSreadYsub_read_curlies,T111);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)40),YPtrue,VARREF(YgooSioSreadYsub_read_list));
  lit_71 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T115 = YPsig(LITREF(lit_71),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T115,ENVNUL,PNUL,sloc(184));
  T116 = fun_29;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)41),YPtrue,T116);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)123),YPtrue,VARREF(YgooSioSreadYsub_read_curlies));
  lit_72 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T117 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T117,ENVNUL,PNUL,sloc(188));
  T118 = fun_30;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)125),YPtrue,T118);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)91),YPtrue,VARREF(YgooSioSreadYsub_read_brackets));
  lit_73 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T119 = YPsig(LITREF(lit_73),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T119,ENVNUL,PNUL,sloc(192));
  T120 = fun_31;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)93),YPtrue,T120);
  lit_74 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_75 = YPPsym((P)"quote");
  T121 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T121,ENVNUL,PNUL,sloc(195));
  T122 = fun_32;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)39),YPtrue,T122);
  lit_76 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_77 = YPPsym((P)"quasiquote");
  T123 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T123,ENVNUL,PNUL,sloc(198));
  T124 = fun_33;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)96),YPtrue,T124);
  lit_78 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_79 = YPsb((P)"end of file after ,");
  lit_80 = YPPsym((P)"unquote-splicing");
  lit_81 = YPPsym((P)"unquote");
  T125 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T125,ENVNUL,PNUL,sloc(202));
  T126 = fun_34;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)44),YPtrue,T126);
  T129 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T128 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T129,YPfalse);
  vecF2396 = T128;
  T130 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)116));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)9),vecF2396,T130);
  T131 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)102));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)12),vecF2396,T131);
  T132 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)114));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)13),vecF2396,T132);
  T133 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)110));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)10),vecF2396,T133);
  T134 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF2396);
  T127 = T134;
  VARSET(YgooSioSreadYDstring_escape_chars,T127);
  lit_82 = YPPsym((P)"read-string-literal");
  lit_83 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_84 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"i"));
  lit_85 = YPsb((P)"end of file within a string");
  lit_86 = YPsb((P)"end of file within a string");
  lit_87 = YPsb((P)"invalid escaped character in string");
  T136 = YPsig(LITREF(lit_84),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_35 = YPmet(FUNCODEREF(fun_loop_35),LITREF(lit_2),T136,ENVNUL,PNUL,sloc(222));
  T135 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_string_literal = YPmet(FUNCODEREF(YgooSioSreadYread_string_literal),LITREF(lit_82),T135,ENVNUL,PNUL,sloc(220));
  T137 = YgooSioSreadYread_string_literal;
  VARSET(YgooSioSreadYread_string_literal,T137);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)34),YPtrue,VARREF(YgooSioSreadYread_string_literal));
  lit_88 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T138 = YPsig(LITREF(lit_88),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T138,ENVNUL,PNUL,sloc(246));
  T139 = fun_37;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)59),YPtrue,T139);
  lit_89 = YPPsym((P)"gobble-line");
  lit_90 = YPPlist(1,YPPsym((P)"port"));
  T141 = YPsig(LITREF(lit_3),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_38 = YPmet(FUNCODEREF(fun_loop_38),LITREF(lit_2),T141,ENVNUL,PNUL,sloc(249));
  T140 = YPsig(LITREF(lit_90),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gobble_line_39 = YPmet(FUNCODEREF(fun_gobble_line_39),LITREF(lit_89),T140,ENVNUL,PNUL,sloc(248));
  T144 = BOUNDP(YgooSioSreadYgobble_line);
  if (T144 != YPfalse) {
    T143 = VARREF(YgooSioSreadYgobble_line);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_gobble_line_39;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YgooSioSreadYgobble_line,T142);
  VARSET(YgooSioSreadYTsharp_macrosT,Ynil);
  lit_91 = YPPsym((P)"define-sharp-macro");
  lit_92 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"proc"));
  T146 = YPsig(LITREF(lit_92),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_define_sharp_macro_40 = YPmet(FUNCODEREF(fun_define_sharp_macro_40),LITREF(lit_91),T146,ENVNUL,PNUL,sloc(255));
  T149 = BOUNDP(YgooSioSreadYdefine_sharp_macro);
  if (T149 != YPfalse) {
    T148 = VARREF(YgooSioSreadYdefine_sharp_macro);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_define_sharp_macro_40;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YgooSioSreadYdefine_sharp_macro,T147);
  lit_93 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_94 = YPsb((P)"end of file after #");
  lit_95 = YPsb((P)"unknown # syntax");
  T151 = YPsig(LITREF(lit_93),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T151,ENVNUL,PNUL,sloc(260));
  T152 = fun_41;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)35),YPfalse,T152);
  lit_96 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T153 = YPsig(LITREF(lit_96),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T153,ENVNUL,PNUL,sloc(270));
  T154 = fun_42;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)102),T154);
  lit_97 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T155 = YPsig(LITREF(lit_97),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T155,ENVNUL,PNUL,sloc(272));
  T156 = fun_43;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)116),T156);
  lit_98 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T157 = YPsig(LITREF(lit_98),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T157,ENVNUL,PNUL,sloc(274));
  T158 = fun_44;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)124),T158);
  lit_99 = YPPsym((P)"gobble-nested-comment");
  lit_100 = YPPlist(1,YPPsym((P)"port"));
  lit_101 = YPPlist(1,YPPsym((P)"found-slash?"));
  T160 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_45 = YPmet(FUNCODEREF(fun_loop_45),LITREF(lit_2),T160,ENVNUL,PNUL,sloc(277));
  T159 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYgobble_nested_comment = YPmet(FUNCODEREF(YgooSioSreadYgobble_nested_comment),LITREF(lit_99),T159,ENVNUL,PNUL,sloc(276));
  T161 = YgooSioSreadYgobble_nested_comment;
  VARSET(YgooSioSreadYgobble_nested_comment,T161);
  lit_102 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T162 = YPsig(LITREF(lit_102),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T162,ENVNUL,PNUL,sloc(287));
  T163 = fun_47;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)47),T163);
  lit_103 = YPPlist(5,YPPlist(2,YPPsym((P)"tab"),YPchr((P)9)),YPPlist(2,YPPsym((P)"page"),YPchr((P)12)),YPPlist(2,YPPsym((P)"return"),YPchr((P)13)),YPPlist(2,YPPsym((P)"newline"),YPchr((P)10)),YPPlist(2,YPPsym((P)"space"),YPchr((P)32)));
  T165 = VARSET(YgooSioSreadYDchar_long_names,LITREF(lit_103));
  T164 = T165;
  return T164;
}

P YgooSioSreadY___main_1___() {
  P number_sharp_macroF2397;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
DEFCREGS();
loop:
  lit_104 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_105 = YPsb((P)"end of file after #\\");
  lit_106 = YPsb((P)"unknown #\\ name");
  T0 = YPsig(LITREF(lit_104),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T0,ENVNUL,PNUL,sloc(298));
  T1 = fun_48;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)92),T1);
  lit_107 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T2 = YPsig(LITREF(lit_107),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T2,ENVNUL,PNUL,sloc(315));
  T3 = fun_49;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)40),T3);
  lit_108 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T4 = YPsig(LITREF(lit_108),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T4,ENVNUL,PNUL,sloc(321));
  T5 = fun_50;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)91),T5);
  lit_109 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_110 = YPsb((P)"unsupported number syntax");
  lit_111 = YPPlist(1,YPPsym((P)"c"));
  lit_112 = YPPlist(4,YPchr((P)98),YPchr((P)111),YPchr((P)100),YPchr((P)120));
  T7 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T7,ENVNUL,PNUL,sloc(326));
  T6 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T6,ENVNUL,PNUL,sloc(330));
  T8 = fun_51;
  number_sharp_macroF2397 = T8;
  T10 = FUNFAB(fun_52,1,number_sharp_macroF2397);
  T9 = XCALL2(1,VARREF(YgooSmacrosYdo),T10,LITREF(lit_112));
  lit_113 = YPPsym((P)"sub-read-token");
  lit_114 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_115 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"n"));
  T12 = YPsig(LITREF(lit_115),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_53 = YPmet(FUNCODEREF(fun_loop_53),LITREF(lit_2),T12,ENVNUL,PNUL,sloc(337));
  T11 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_token_54 = YPmet(FUNCODEREF(fun_sub_read_token_54),LITREF(lit_113),T11,ENVNUL,PNUL,sloc(335));
  T15 = BOUNDP(YgooSioSreadYsub_read_token);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooSioSreadYsub_read_token);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_sub_read_token_54;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooSioSreadYsub_read_token,T13);
  lit_116 = YPPsym((P)"parse-token");
  lit_117 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"port"));
  lit_118 = YPPlist(1,YPPsym((P)"x"));
  lit_119 = YPsb((P)".");
  lit_120 = YPsb((P)"unsupported number syntax");
  T18 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T18,ENVNUL,PNUL,sloc(356));
  T17 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_token_56 = YPmet(FUNCODEREF(fun_parse_token_56),LITREF(lit_116),T17,ENVNUL,PNUL,sloc(346));
  T21 = BOUNDP(YgooSioSreadYparse_token);
  if (T21 != YPfalse) {
    T20 = VARREF(YgooSioSreadYparse_token);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_parse_token_56;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YgooSioSreadYparse_token,T19);
  lit_121 = YPPlist(9,YPsb((P)"+"),YPsb((P)"-"),YPsb((P)"..."),YPsb((P)"1st"),YPsb((P)"2nd"),YPsb((P)"3rd"),YPsb((P)"1+"),YPsb((P)"1-"),YPsb((P)"->"));
  VARSET(YgooSioSreadYDstrange_symbol_names,LITREF(lit_121));
  lit_122 = YPPsym((P)"t");
  T26 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),LITREF(lit_122));
  T25 = XCALL2(1,VARREF(YgooSmacrosYelt),T26,YPint((P)0));
  T24 = XCALL2(1,VARREF(YgooSmathYE),T25,YPchr((P)84));
  if (T24 != YPfalse) {
    T23 = VARREF(YgooSmathYto_upper);
  } else {
    T23 = VARREF(YgooSmathYto_lower);
  }
  VARSET(YgooSioSreadYpreferred_case,T23);
  lit_123 = YPPsym((P)"reading-error");
  lit_124 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"message"),YPPsym((P)"irritants"));
  lit_125 = YPsb((P)": %=");
  T27 = YPsig(LITREF(lit_124),YPPlist(2,VARREF(YgooSioSportYLportG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reading_error_57 = YPmet(FUNCODEREF(fun_reading_error_57),LITREF(lit_123),T27,ENVNUL,PNUL,sloc(383));
  T30 = BOUNDP(YgooSioSreadYreading_error);
  if (T30 != YPfalse) {
    T29 = VARREF(YgooSioSreadYreading_error);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_reading_error_57;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YgooSioSreadYreading_error,T28);
  lit_126 = YPPsym((P)"warn");
  lit_127 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"irritants-and-port"));
  T32 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_warn_58 = YPmet(FUNCODEREF(fun_warn_58),LITREF(lit_126),T32,ENVNUL,PNUL,sloc(387));
  T35 = BOUNDP(YgooSioSreadYwarn);
  if (T35 != YPfalse) {
    T34 = VARREF(YgooSioSreadYwarn);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_warn_58;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YgooSioSreadYwarn,T33);
  lit_128 = YPPsym((P)"reverse-list->string");
  lit_129 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"n"));
  T37 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_reverse_list_Gstring_59 = YPmet(FUNCODEREF(fun_reverse_list_Gstring_59),LITREF(lit_128),T37,ENVNUL,PNUL,sloc(395));
  T40 = BOUNDP(YgooSioSreadYreverse_list_Gstring);
  if (T40 != YPfalse) {
    T39 = VARREF(YgooSioSreadYreverse_list_Gstring);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_reverse_list_Gstring_59;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YgooSioSreadYreverse_list_Gstring,T38);
  lit_130 = YPPsym((P)"make-immutable!");
  lit_131 = YPPlist(1,YPPsym((P)"x"));
  T42 = YPsig(LITREF(lit_131),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_immutableX_60 = YPmet(FUNCODEREF(fun_make_immutableX_60),LITREF(lit_130),T42,ENVNUL,PNUL,sloc(398));
  T45 = BOUNDP(YgooSioSreadYmake_immutableX);
  if (T45 != YPfalse) {
    T44 = VARREF(YgooSioSreadYmake_immutableX);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_make_immutableX_60;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YgooSioSreadYmake_immutableX,T43);
  T47 = YPfalse;
  return T47;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSzip;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_gooSconditions},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooSioSport},
  {&module_info_gooScols},
  {&module_info_gooScolsSlst},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"<handler-info>", &module_info_gooSconditions, "<handler-info>"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"atan", &module_info_gooSmath, "atan"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"map", &module_info_gooSmacros, "map"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"file-opening-error-filename", &module_info_gooSconditions, "file-opening-error-filename"},
  {"~==", &module_info_gooSmath, "~=="},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"<file-opening-error>", &module_info_gooSconditions, "<file-opening-error>"},
  {"<property-not-found-error>", &module_info_gooSconditions, "<property-not-found-error>"},
  {"elt!", &module_info_gooScolsScolx, "elt!"},
  {"if", &module_info_gooSboot, "if"},
  {"def-list", &module_info_gooScolsSlst, "def-list"},
  {"<line>", &module_info_gooScolsSlst, "<line>"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"1-", &module_info_gooSmath, "1-"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"abs", &module_info_gooSmath, "abs"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"try", &module_info_gooSboot, "try"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"src-loc-line", &module_info_gooSboot, "src-loc-line"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"-", &module_info_gooSmath, "-"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"find", &module_info_gooScolsScol, "find"},
  {"t?", &module_info_gooStypes, "t?"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"==", &module_info_gooSmacros, "=="},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"nul", &module_info_gooSboot, "nul"},
  {"nil", &module_info_gooSboot, "nil"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"<property-unbound-error>", &module_info_gooSconditions, "<property-unbound-error>"},
  {"len", &module_info_gooStypes, "len"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"dl", &module_info_gooSboot, "dl"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"let", &module_info_gooSboot, "let"},
  {"case", &module_info_gooSmacros, "case"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%su", &module_info_gooSboot, "%su"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%met", &module_info_gooSboot, "%met"},
  {"<compiler-error>", &module_info_gooSconditions, "<compiler-error>"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"match", &module_info_gooSmacros, "match"},
  {"t<", &module_info_gooStypes, "t<"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"^", &module_info_gooSmath, "^"},
  {"$e", &module_info_gooSmath, "$e"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<line-list>", &module_info_gooScolsSlst, "<line-list>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"rem", &module_info_gooSmath, "rem"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"condition-arguments", &module_info_gooSconditions, "condition-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<condition>", &module_info_gooSconditions, "<condition>"},
  {"~=", &module_info_gooSmath, "~="},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"fab-handler", &module_info_gooSconditions, "fab-handler"},
  {"tail", &module_info_gooSboot, "tail"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"@len", &module_info_gooSboot, "@len"},
  {"df", &module_info_gooSboot, "df"},
  {"close", &module_info_gooSioSport, "close"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%put", &module_info_gooSboot, "%put"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"type-error-type", &module_info_gooSconditions, "type-error-type"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"<arithmetic-error>", &module_info_gooSconditions, "<arithmetic-error>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%im", &module_info_gooSboot, "%im"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"t=", &module_info_gooStypes, "t="},
  {"dg", &module_info_gooSboot, "dg"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"max", &module_info_gooSmag, "max"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"when", &module_info_gooSmacros, "when"},
  {"round/", &module_info_gooSmath, "round/"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"error", &module_info_gooSboot, "error"},
  {"<arity-error>", &module_info_gooSconditions, "<arity-error>"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"call-error-arguments", &module_info_gooSconditions, "call-error-arguments"},
  {"sin", &module_info_gooSmath, "sin"},
  {"dc", &module_info_gooSboot, "dc"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"loc", &module_info_gooSboot, "loc"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"until", &module_info_gooSmacros, "until"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%time", &module_info_gooSboot, "%time"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"<internal-error>", &module_info_gooSconditions, "<internal-error>"},
  {"line-list-of", &module_info_gooScolsSlst, "line-list-of"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"macro-error-arguments", &module_info_gooSconditions, "macro-error-arguments"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"<error>", &module_info_gooSconditions, "<error>"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"handler-matches?", &module_info_gooSconditions, "handler-matches?"},
  {"<argument-type-error>", &module_info_gooSconditions, "<argument-type-error>"},
  {"acos", &module_info_gooSmath, "acos"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"choose-handler", &module_info_gooSconditions, "choose-handler"},
  {"min", &module_info_gooSmag, "min"},
  {"type-error-value", &module_info_gooSconditions, "type-error-value"},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, "build-condition-for-handler-interactively"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"app", &module_info_gooSmacros, "app"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"range-error-key", &module_info_gooSconditions, "range-error-key"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"<property-type-error>", &module_info_gooSconditions, "<property-type-error>"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"do", &module_info_gooSmacros, "do"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"default-handler-description", &module_info_gooSconditions, "default-handler-description"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"sub*", &module_info_gooScolsSseq, "sub*"},
  {">", &module_info_gooSmag, ">"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"<return-type-error>", &module_info_gooSconditions, "<return-type-error>"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"open", &module_info_gooSioSport, "open"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, "<no-applicable-methods-error>"},
  {"port-to-str", &module_info_gooSioSport, "port-to-str"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"line-of", &module_info_gooScolsSlst, "line-of"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {">>", &module_info_gooSmath, ">>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"handler-function", &module_info_gooSconditions, "handler-function"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"for", &module_info_gooSmacros, "for"},
  {"<", &module_info_gooSmag, "<"},
  {"|", &module_info_gooSmath, "|"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"range-error-collection", &module_info_gooSconditions, "range-error-collection"},
  {"1+", &module_info_gooSmath, "1+"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"seq", &module_info_gooSboot, "seq"},
  {">=", &module_info_gooSmag, ">="},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"line-list", &module_info_gooScolsSlst, "line-list"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"+", &module_info_gooSmath, "+"},
  {"=", &module_info_gooSmath, "="},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"/", &module_info_gooSmath, "/"},
  {"esc", &module_info_gooSboot, "esc"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"msg-to-str", &module_info_gooSconditions, "msg-to-str"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<=", &module_info_gooSmag, "<="},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"mod", &module_info_gooSmath, "mod"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"read", &module_info_gooSconditions, "read"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"<<", &module_info_gooSmath, "<<"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"sig", &module_info_gooSconditions, "sig"},
  {"call-error-function", &module_info_gooSconditions, "call-error-function"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"dm", &module_info_gooSboot, "dm"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"while", &module_info_gooSmacros, "while"},
  {"get", &module_info_gooSioSport, "get"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"describe-handler", &module_info_gooSconditions, "describe-handler"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"msg", &module_info_gooSconditions, "msg"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"<syntax-error>", &module_info_gooSconditions, "<syntax-error>"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"log", &module_info_gooSmath, "log"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"*current-handlers*", &module_info_gooSconditions, "*current-handlers*"},
  {"<simple-condition>", &module_info_gooSconditions, "<simple-condition>"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"<unknown-function-error>", &module_info_gooSconditions, "<unknown-function-error>"},
  {"invoke-handler-interactively", &module_info_gooSconditions, "invoke-handler-interactively"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"<handler>", &module_info_gooSconditions, "<handler>"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"line-pair", &module_info_gooScolsSlst, "line-pair"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<property-error>", &module_info_gooSconditions, "<property-error>"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"<stack-overflow>", &module_info_gooSconditions, "<stack-overflow>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"describe-condition", &module_info_gooSconditions, "describe-condition"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"not", &module_info_gooSboot, "not"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<unbound-error>", &module_info_gooSconditions, "<unbound-error>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"port-handle-setter", &module_info_gooSioSport, "port-handle-setter"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"round", &module_info_gooSmath, "round"},
  {"def", &module_info_gooSboot, "def"},
  {"<simple-error>", &module_info_gooSconditions, "<simple-error>"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"unbound-variable-error-variable", &module_info_gooSconditions, "unbound-variable-error-variable"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<keyboard-interrupt>", &module_info_gooSconditions, "<keyboard-interrupt>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"new", &module_info_gooSboot, "new"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<type-error>", &module_info_gooSconditions, "<type-error>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"tan", &module_info_gooSmath, "tan"},
  {"property-error-owner", &module_info_gooSconditions, "property-error-owner"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"macro-error-name", &module_info_gooSconditions, "macro-error-name"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"always", &module_info_gooSruntime, "always"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"~", &module_info_gooSmath, "~"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"div", &module_info_gooSmath, "div"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"<unbound-variable-error>", &module_info_gooSconditions, "<unbound-variable-error>"},
  {"<call-error>", &module_info_gooSconditions, "<call-error>"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"<restart>", &module_info_gooSconditions, "<restart>"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<src-loc>", &module_info_gooSboot, "<src-loc>"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"src-loc-file", &module_info_gooSboot, "src-loc-file"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"sub*-setter", &module_info_gooScolsSseqx, "sub*-setter"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"<assert-error>", &module_info_gooSconditions, "<assert-error>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<serious-condition>", &module_info_gooSconditions, "<serious-condition>"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<narity-error>", &module_info_gooSconditions, "<narity-error>"},
  {"as", &module_info_gooStypes, "as"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"list-handlers", &module_info_gooSconditions, "list-handlers"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"fun", &module_info_gooSboot, "fun"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"in", &module_info_gooSioSport, "in"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"lst", &module_info_gooSboot, "lst"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"any?", &module_info_gooStypes, "any?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%get", &module_info_gooSboot, "%get"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"@<", &module_info_gooSboot, "@<"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"default-handler", &module_info_gooSconditions, "default-handler"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"<ambiguous-method-error>", &module_info_gooSconditions, "<ambiguous-method-error>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"fin", &module_info_gooSboot, "fin"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"%src-loc", &module_info_gooSboot, "%src-loc"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"last", &module_info_gooSmacros, "last"},
  {"port-handle", &module_info_gooSioSport, "port-handle"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"put", &module_info_gooSioSport, "put"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"out", &module_info_gooSioSport, "out"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"op", &module_info_gooSmacros, "op"},
  {"*", &module_info_gooSmath, "*"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"clone", &module_info_gooSboot, "clone"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"&", &module_info_gooSmath, "&"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"property-error-generic", &module_info_gooSconditions, "property-error-generic"},
  {"<io-error>", &module_info_gooSconditions, "<io-error>"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"dss", &module_info_gooSboot, "dss"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"tup", &module_info_gooSboot, "tup"},
  {"pow", &module_info_gooSmath, "pow"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@==", &module_info_gooSboot, "@=="},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"class-of", &module_info_gooSboot, "class-of"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"condition-message", &module_info_gooSconditions, "condition-message"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"mif", &module_info_gooSboot, "mif"},
  {"floor", &module_info_gooSmath, "floor"},
  {"cos", &module_info_gooSmath, "cos"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"export", &module_info_gooSboot, "export"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"<macro-error>", &module_info_gooSconditions, "<macro-error>"},
  {"<as-error>", &module_info_gooSconditions, "<as-error>"},
  {"$default-handler-info", &module_info_gooSconditions, "$default-handler-info"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"build-condition-interactively", &module_info_gooSconditions, "build-condition-interactively"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"<range-error>", &module_info_gooSconditions, "<range-error>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"or", &module_info_gooSmacros, "or"},
  {"<no-next-methods-error>", &module_info_gooSconditions, "<no-next-methods-error>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"use", &module_info_gooSboot, "use"},
  {"set", &module_info_gooSboot, "set"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"and", &module_info_gooSmacros, "and"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sub-read-carefully", CVAR, &YgooSioSreadYsub_read_carefully},
  {"*sharp-macros*", CVAR, &YgooSioSreadYTsharp_macrosT},
  {"sub-read-token", CVAR, &YgooSioSreadYsub_read_token},
  {"$close-paren", CVAR, &YgooSioSreadYDclose_paren},
  {"$string-escape-chars", CVAR, &YgooSioSreadYDstring_escape_chars},
  {"warn", CVAR, &YgooSioSreadYwarn},
  {"reverse-list->string", CVAR, &YgooSioSreadYreverse_list_Gstring},
  {"set-standard-read-macro!", CVAR, &YgooSioSreadYset_standard_read_macroX},
  {"token-message-setter", CVAR, &YgooSioSreadYtoken_message_setter},
  {"*read-dispatch-vector*", CVAR, &YgooSioSreadYTread_dispatch_vectorT},
  {"sub-read-curlies", CVAR, &YgooSioSreadYsub_read_curlies},
  {"set-standard-syntax!", CVAR, &YgooSioSreadYset_standard_syntaxX},
  {"read-delimited-list", CVAR, &YgooSioSreadYread_delimited_list},
  {"read-from-string", CVAR, &YgooSioSreadYread_from_string},
  {"sub-read-list", CVAR, &YgooSioSreadYsub_read_list},
  {"read-string-literal", CVAR, &YgooSioSreadYread_string_literal},
  {"sub-read-brackets", CVAR, &YgooSioSreadYsub_read_brackets},
  {"*read-terminating?-vector*", CVAR, &YgooSioSreadYTread_terminatingQ_vectorT},
  {"$close-bracket", CVAR, &YgooSioSreadYDclose_bracket},
  {"sub-read-list-eof-error", CVAR, &YgooSioSreadYsub_read_list_eof_error},
  {"flush-whitespace", CVAR, &YgooSioSreadYflush_whitespace},
  {"reader-token?", CVAR, &YgooSioSreadYreader_tokenQ},
  {"token-message", CVAR, &YgooSioSreadYtoken_message},
  {"$char-long-names", CVAR, &YgooSioSreadYDchar_long_names},
  {"$strange-symbol-names", CVAR, &YgooSioSreadYDstrange_symbol_names},
  {"$vert-proxy", CVAR, &YgooSioSreadYDvert_proxy},
  {"$close-curly", CVAR, &YgooSioSreadYDclose_curly},
  {"sub-read-vertical", CVAR, &YgooSioSreadYsub_read_vertical},
  {"sub-read-seq", CVAR, &YgooSioSreadYsub_read_seq},
  {"make-reader-token", CVAR, &YgooSioSreadYmake_reader_token},
  {"---main-1---", PVAR, NULL},
  {"parse-token", CVAR, &YgooSioSreadYparse_token},
  {"define-sharp-macro", CVAR, &YgooSioSreadYdefine_sharp_macro},
  {"make-immutable!", CVAR, &YgooSioSreadYmake_immutableX},
  {"---main-0---", PVAR, NULL},
  {"<reader-token>", CVAR, &YgooSioSreadYLreader_tokenG},
  {"get-standard-read-macro", CVAR, &YgooSioSreadYget_standard_read_macro},
  {"gobble-nested-comment", CVAR, &YgooSioSreadYgobble_nested_comment},
  {"reading-error", CVAR, &YgooSioSreadYreading_error},
  {"sub-read-constituent", CVAR, &YgooSioSreadYsub_read_constituent},
  {"$vert-sym", CVAR, &YgooSioSreadYDvert_sym},
  {"sub-read", CVAR, &YgooSioSreadYsub_read},
  {"gobble-line", CVAR, &YgooSioSreadYgobble_line},
  {"preferred-case", CVAR, &YgooSioSreadYpreferred_case},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"set-standard-read-macro!", "set-standard-read-macro!"},
  {"read-delimited-list", "read-delimited-list"},
  {"read-from-string", "read-from-string"},
  {"$char-long-names", "$char-long-names"},
  {"read", "read"},
  {"get-standard-read-macro", "get-standard-read-macro"},
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
extern void load_module_gooSconditions (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooSioSport (void);
extern void load_module_gooScols (void);
extern void load_module_gooScolsSlst (void);

/* EXPRESSION: */

extern void load_module_gooSioSread (void);

void load_module_gooSioSread (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_gooSconditions();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooSioSport();
  load_module_gooScols();
  load_module_gooScolsSlst();

  (P)YgooSioSreadY___main_0___();
  (P)YgooSioSreadY___main_1___();

}

/* END OF GENERATED CODE. */
