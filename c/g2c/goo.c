/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo */

EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
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
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
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
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
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
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
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
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
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
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
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
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
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
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
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
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YOanyQ,"goo/boot","@any?");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
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
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ynot,"goo/boot","not");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YPprop,"goo/boot","%prop");
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
EXT(YgooSmathYS,"goo/math","/");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSpackerYpacker,"goo/packer","packer");
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
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
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
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
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
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
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
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPdefine_method,"goo/boot","%define-method");
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
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YgooY___main_0___ ();

/* FUNCTION CODES: */

P YgooY___main_0___() {
  P T0;
DEFCREGS();
loop:
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSzip;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmag},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooSruntime},
  {&module_info_gooSconditions},
  {&module_info_gooScols},
  {&module_info_gooSpacker},
  {&module_info_gooSioSwrite},
  {&module_info_gooSioSread},
  {&module_info_gooSioSport},
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
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
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
  {"say", &module_info_gooSioSwrite, "say"},
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
  {"packed", &module_info_gooSpacker, "packed"},
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
  {"len", &module_info_gooStypes, "len"},
  {"<property-unbound-error>", &module_info_gooSconditions, "<property-unbound-error>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"dl", &module_info_gooSboot, "dl"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"let", &module_info_gooSboot, "let"},
  {"set-standard-read-macro!", &module_info_gooSioSread, "set-standard-read-macro!"},
  {"case", &module_info_gooSmacros, "case"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%su", &module_info_gooSboot, "%su"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%met", &module_info_gooSboot, "%met"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<compiler-error>", &module_info_gooSconditions, "<compiler-error>"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"match", &module_info_gooSmacros, "match"},
  {"t<", &module_info_gooStypes, "t<"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"packing", &module_info_gooSpacker, "packing"},
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
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"rem", &module_info_gooSmath, "rem"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
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
  {"neg", &module_info_gooSmath, "neg"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%im", &module_info_gooSboot, "%im"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
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
  {"read-delimited-list", &module_info_gooSioSread, "read-delimited-list"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
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
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"<error>", &module_info_gooSconditions, "<error>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
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
  {"min", &module_info_gooSmag, "min"},
  {"choose-handler", &module_info_gooSconditions, "choose-handler"},
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
  {"<arithmetic-error>", &module_info_gooSconditions, "<arithmetic-error>"},
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
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
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
  {"condition-arguments", &module_info_gooSconditions, "condition-arguments"},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, "<no-applicable-methods-error>"},
  {"port-to-str", &module_info_gooSioSport, "port-to-str"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"line-of", &module_info_gooScolsSlst, "line-of"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"write-type", &module_info_gooSioSwrite, "write-type"},
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
  {"seq", &module_info_gooSboot, "seq"},
  {">=", &module_info_gooSmag, ">="},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
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
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
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
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"esc", &module_info_gooSboot, "esc"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"msg-to-str", &module_info_gooSconditions, "msg-to-str"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"<=", &module_info_gooSmag, "<="},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"mod", &module_info_gooSmath, "mod"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"read", &module_info_gooSconditions, "read"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
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
  {"zero?", &module_info_gooSmath, "zero?"},
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
  {"port-line", &module_info_gooSioSport, "port-line"},
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
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
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
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
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
  {"pack", &module_info_gooSpacker, "pack"},
  {"def", &module_info_gooSboot, "def"},
  {"/", &module_info_gooSmath, "/"},
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
  {"packer", &module_info_gooSpacker, "packer"},
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
  {"packing-in", &module_info_gooSpacker, "packing-in"},
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
  {">>>", &module_info_gooSmath, ">>>"},
  {"<call-error>", &module_info_gooSconditions, "<call-error>"},
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
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"<assert-error>", &module_info_gooSconditions, "<assert-error>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<serious-condition>", &module_info_gooSconditions, "<serious-condition>"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"as", &module_info_gooStypes, "as"},
  {"<narity-error>", &module_info_gooSconditions, "<narity-error>"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"<simple-error>", &module_info_gooSconditions, "<simple-error>"},
  {"list-handlers", &module_info_gooSconditions, "list-handlers"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"fun", &module_info_gooSboot, "fun"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
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
  {"get-standard-read-macro", &module_info_gooSioSread, "get-standard-read-macro"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%get", &module_info_gooSboot, "%get"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"@<", &module_info_gooSboot, "@<"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"write", &module_info_gooSioSwrite, "write"},
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
  {"post", &module_info_gooSioSwrite, "post"},
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
  {"pack-in", &module_info_gooSpacker, "pack-in"},
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
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"build-condition-interactively", &module_info_gooSconditions, "build-condition-interactively"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"<syntax-error>", &module_info_gooSconditions, "<syntax-error>"},
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
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<handler-info>", "<handler-info>"},
  {"atan", "atan"},
  {"to-str", "to-str"},
  {"<tab>", "<tab>"},
  {"map", "map"},
  {"<in-port>", "<in-port>"},
  {"3rd", "3rd"},
  {"dlet", "dlet"},
  {"file-opening-error-filename", "file-opening-error-filename"},
  {"~==", "~=="},
  {"fin?", "fin?"},
  {"<file-opening-error>", "<file-opening-error>"},
  {"elt!", "elt!"},
  {"if", "if"},
  {"1-", "1-"},
  {"bound?", "bound?"},
  {"abs", "abs"},
  {"say", "say"},
  {"del-vals!", "del-vals!"},
  {"class-parents", "class-parents"},
  {"floor/", "floor/"},
  {"macro-expand", "macro-expand"},
  {"try", "try"},
  {"post", "post"},
  {"-", "-"},
  {"enum", "enum"},
  {"prop-type", "prop-type"},
  {"$pi", "$pi"},
  {"<no-next-methods-error>", "<no-next-methods-error>"},
  {"<return-type-error>", "<return-type-error>"},
  {"find", "find"},
  {"t?", "t?"},
  {"packed", "packed"},
  {"<range>", "<range>"},
  {"fun-specs", "fun-specs"},
  {"<col>", "<col>"},
  {"rcurry", "rcurry"},
  {"renew", "renew"},
  {"tup", "tup"},
  {"<met>", "<met>"},
  {"==", "=="},
  {"quasiquote", "quasiquote"},
  {"nul", "nul"},
  {"from", "from"},
  {"nil", "nil"},
  {"isa?", "isa?"},
  {"len", "len"},
  {"cosh", "cosh"},
  {"map-keyed", "map-keyed"},
  {"cond", "cond"},
  {"emit", "emit"},
  {"<call-error>", "<call-error>"},
  {"add!", "add!"},
  {"let", "let"},
  {"<unknown-function-error>", "<unknown-function-error>"},
  {"case", "case"},
  {"zap", "zap"},
  {"napp", "napp"},
  {"odd?", "odd?"},
  {"find-setter", "find-setter"},
  {"<str-port>", "<str-port>"},
  {"match", "match"},
  {"t<", "t<"},
  {"packing", "packing"},
  {"dp", "dp"},
  {"fab-setter-name", "fab-setter-name"},
  {"product-elts", "product-elts"},
  {"$e", "$e"},
  {"sup", "sup"},
  {"packing-with", "packing-with"},
  {"sub", "sub"},
  {"rem", "rem"},
  {"to-digit", "to-digit"},
  {"decf", "decf"},
  {"~=", "~="},
  {"rep", "rep"},
  {"fab-handler", "fab-handler"},
  {"tail", "tail"},
  {"newline", "newline"},
  {"<fun>", "<fun>"},
  {"df", "df"},
  {"close", "close"},
  {"<seq>", "<seq>"},
  {"met-app?", "met-app?"},
  {"neg", "neg"},
  {"class-props", "class-props"},
  {"gensym", "gensym"},
  {"trunc", "trunc"},
  {"<seq!>", "<seq!>"},
  {"peek", "peek"},
  {"dg", "dg"},
  {"max", "max"},
  {"<seq.>", "<seq.>"},
  {"when", "when"},
  {"round/", "round/"},
  {"<each>", "<each>"},
  {"logn", "logn"},
  {"port-line", "port-line"},
  {"mod+", "mod+"},
  {"<flat>", "<flat>"},
  {"map2", "map2"},
  {"error", "error"},
  {"call-error-arguments", "call-error-arguments"},
  {"bit?", "bit?"},
  {"sin", "sin"},
  {"dc", "dc"},
  {"isqrt", "isqrt"},
  {"loc", "loc"},
  {"until", "until"},
  {"repeat", "repeat"},
  {"read", "read"},
  {"t+", "t+"},
  {"read-from-string", "read-from-string"},
  {"<file-in-port>", "<file-in-port>"},
  {"find-getter", "find-getter"},
  {"cycle", "cycle"},
  {"<internal-error>", "<internal-error>"},
  {"<lst>", "<lst>"},
  {"split", "split"},
  {"macro-error-arguments", "macro-error-arguments"},
  {"<chr>", "<chr>"},
  {"<tup>", "<tup>"},
  {"do3", "do3"},
  {"<error>", "<error>"},
  {"cat", "cat"},
  {"app-filename", "app-filename"},
  {"subtype?", "subtype?"},
  {"even?", "even?"},
  {"sub*-setter", "sub*-setter"},
  {"<argument-type-error>", "<argument-type-error>"},
  {"acos", "acos"},
  {"object-class", "object-class"},
  {"gets", "gets"},
  {"min", "min"},
  {"type-error-value", "type-error-value"},
  {"$max-int", "$max-int"},
  {"prop-setter", "prop-setter"},
  {"add", "add"},
  {"app", "app"},
  {"elt-setter", "elt-setter"},
  {"<file-out-port>", "<file-out-port>"},
  {"range-error-key", "range-error-key"},
  {"<step>", "<step>"},
  {"to-upper", "to-upper"},
  {"cat-sym", "cat-sym"},
  {"do-keyed", "do-keyed"},
  {"class-name", "class-name"},
  {"<map>", "<map>"},
  {"<arithmetic-error>", "<arithmetic-error>"},
  {"now-setter", "now-setter"},
  {"match-sublist", "match-sublist"},
  {"internal-error", "internal-error"},
  {"rotf", "rotf"},
  {"<property-type-error>", "<property-type-error>"},
  {"use/include", "use/include"},
  {"do", "do"},
  {"tail-setter", "tail-setter"},
  {"class-direct-props", "class-direct-props"},
  {"range", "range"},
  {"case-by", "case-by"},
  {"neg?", "neg?"},
  {"*max-print-depth*", "*max-print-depth*"},
  {"dup", "dup"},
  {"del", "del"},
  {"sub*", "sub*"},
  {">", ">"},
  {"fun-name", "fun-name"},
  {"arity-error", "arity-error"},
  {"open", "open"},
  {"<narity-error>", "<narity-error>"},
  {"condition-arguments", "condition-arguments"},
  {"<no-applicable-methods-error>", "<no-applicable-methods-error>"},
  {"list", "list"},
  {"prefix?", "prefix?"},
  {"<io-error>", "<io-error>"},
  {"vec", "vec"},
  {"packer-res", "packer-res"},
  {"^", "^"},
  {"assert-error", "assert-error"},
  {"below", "below"},
  {"loc-val-setter", "loc-val-setter"},
  {"flo-bits", "flo-bits"},
  {"empty", "empty"},
  {"for", "for"},
  {"|", "|"},
  {"sinh", "sinh"},
  {"range-error-collection", "range-error-collection"},
  {"1+", "1+"},
  {"seq", "seq"},
  {"<stack-overflow>", "<stack-overflow>"},
  {"<str>", "<str>"},
  {"head-setter", "head-setter"},
  {"num-to-str", "num-to-str"},
  {"atan2", "atan2"},
  {"<condition>", "<condition>"},
  {"find-or", "find-or"},
  {"<col!>", "<col!>"},
  {"+", "+"},
  {"=", "="},
  {"port-index", "port-index"},
  {"<str-out-port>", "<str-out-port>"},
  {"unless", "unless"},
  {"to-lower", "to-lower"},
  {"union-elts", "union-elts"},
  {"low-elt-setter", "low-elt-setter"},
  {"/", "/"},
  {"esc", "esc"},
  {"ct-also", "ct-also"},
  {"loc-val", "loc-val"},
  {"<col.>", "<col.>"},
  {"empty?", "empty?"},
  {">=", ">="},
  {"prop-value-setter", "prop-value-setter"},
  {"t=", "t="},
  {"head", "head"},
  {"<=", "<="},
  {"handler-matches?", "handler-matches?"},
  {"%pair", "%pair"},
  {"writeln", "writeln"},
  {"mod", "mod"},
  {"ceil/", "ceil/"},
  {"nxt", "nxt"},
  {"<syntax-error>", "<syntax-error>"},
  {"<zip>", "<zip>"},
  {"packer-add", "packer-add"},
  {"ddv", "ddv"},
  {"any2?", "any2?"},
  {"<<", "<<"},
  {"each", "each"},
  {"class-ancestors", "class-ancestors"},
  {"add-prop", "add-prop"},
  {"<file-port>", "<file-port>"},
  {"sig", "sig"},
  {"call-error-function", "call-error-function"},
  {"type-error-type", "type-error-type"},
  {"dm", "dm"},
  {"pop", "pop"},
  {"while", "while"},
  {"get", "get"},
  {"identity", "identity"},
  {"suffix?", "suffix?"},
  {"force-out", "force-out"},
  {"<prop>", "<prop>"},
  {"msg", "msg"},
  {"modincf", "modincf"},
  {"zero?", "zero?"},
  {"eof-object?", "eof-object?"},
  {"fold+", "fold+"},
  {"pop!", "pop!"},
  {"do2", "do2"},
  {"cat!", "cat!"},
  {"col-res", "col-res"},
  {"log", "log"},
  {"handler-function", "handler-function"},
  {"dv", "dv"},
  {"fab", "fab"},
  {"incf", "incf"},
  {"<simple-condition>", "<simple-condition>"},
  {"app-sup", "app-sup"},
  {"fill!", "fill!"},
  {"packer-fab", "packer-fab"},
  {"<cycle>", "<cycle>"},
  {"<handler>", "<handler>"},
  {"<loc>", "<loc>"},
  {"keys", "keys"},
  {"asin", "asin"},
  {"<list>", "<list>"},
  {"<product>", "<product>"},
  {"swapf", "swapf"},
  {"new", "new"},
  {"num-to-str-base", "num-to-str-base"},
  {"<property-error>", "<property-error>"},
  {"<flo>", "<flo>"},
  {"match-atom", "match-atom"},
  {"<str-in-port>", "<str-in-port>"},
  {"describe-condition", "describe-condition"},
  {"<property-unbound-error>", "<property-unbound-error>"},
  {"push", "push"},
  {"prop-getter", "prop-getter"},
  {"sort-by", "sort-by"},
  {"not", "not"},
  {"<union>", "<union>"},
  {"<unbound-error>", "<unbound-error>"},
  {"%prop", "%prop"},
  {"key-test", "key-test"},
  {"first-then", "first-then"},
  {"unzip", "unzip"},
  {"ins", "ins"},
  {"narity-error", "narity-error"},
  {"fun-val", "fun-val"},
  {"len/fill-setter", "len/fill-setter"},
  {"pair", "pair"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"msg-to-str", "msg-to-str"},
  {"fold", "fold"},
  {"upper?", "upper?"},
  {"assert", "assert"},
  {"round", "round"},
  {"pack", "pack"},
  {"def", "def"},
  {"<subclass>", "<subclass>"},
  {"fun-names", "fun-names"},
  {"match-empty-list", "match-empty-list"},
  {"%prop-unbound-error", "%prop-unbound-error"},
  {"may-isa?", "may-isa?"},
  {"sort", "sort"},
  {"elt", "elt"},
  {"unbound-variable-error-variable", "unbound-variable-error-variable"},
  {"col", "col"},
  {"packer", "packer"},
  {"pos?", "pos?"},
  {"digit?", "digit?"},
  {"<keyboard-interrupt>", "<keyboard-interrupt>"},
  {"use/mangle", "use/mangle"},
  {"key-type", "key-type"},
  {"rev!", "rev!"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"tan", "tan"},
  {"property-error-owner", "property-error-owner"},
  {"opf", "opf"},
  {"<arity-error>", "<arity-error>"},
  {"use/export", "use/export"},
  {"cat2", "cat2"},
  {"always", "always"},
  {"prop-value", "prop-value"},
  {"~", "~"},
  {"<", "<"},
  {"puts", "puts"},
  {"<singleton>", "<singleton>"},
  {"packing-in", "packing-in"},
  {"del-dups", "del-dups"},
  {"div", "div"},
  {"reject", "reject"},
  {"compose", "compose"},
  {"app-args", "app-args"},
  {"handler-info-message", "handler-info-message"},
  {"<unbound-variable-error>", "<unbound-variable-error>"},
  {"push!", "push!"},
  {">>>", ">>>"},
  {"ds", "ds"},
  {"port-contents", "port-contents"},
  {"type-class", "type-class"},
  {"str-to-num", "str-to-num"},
  {"<restart>", "<restart>"},
  {"fabs", "fabs"},
  {"var-type", "var-type"},
  {"elt-default", "elt-default"},
  {"zip", "zip"},
  {"exported", "exported"},
  {"low-elt", "low-elt"},
  {"pub", "pub"},
  {"*max-print-length*", "*max-print-length*"},
  {"<assert-error>", "<assert-error>"},
  {"<serious-condition>", "<serious-condition>"},
  {"len-setter", "len-setter"},
  {"address-of", "address-of"},
  {"as", "as"},
  {"<simple-error>", "<simple-error>"},
  {"<enum>", "<enum>"},
  {"fun", "fun"},
  {"prop-bound?", "prop-bound?"},
  {"finds", "finds"},
  {"sub-setter", "sub-setter"},
  {"fun-arity", "fun-arity"},
  {"1st", "1st"},
  {"ct", "ct"},
  {"in", "in"},
  {"join", "join"},
  {"prop-init", "prop-init"},
  {"<macro-error>", "<macro-error>"},
  {"lst", "lst"},
  {"<vec>", "<vec>"},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"del-vals", "del-vals"},
  {"any?", "any?"},
  {"lower?", "lower?"},
  {"elt-type", "elt-type"},
  {"ceil", "ceil"},
  {"sqrt", "sqrt"},
  {"*print-base*", "*print-base*"},
  {"write", "write"},
  {"pushf", "pushf"},
  {"ord-app-mets", "ord-app-mets"},
  {"zap!", "zap!"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"default-handler", "default-handler"},
  {"<out-port>", "<out-port>"},
  {"<str-tab>", "<str-tab>"},
  {"<ambiguous-method-error>", "<ambiguous-method-error>"},
  {"col-res-type", "col-res-type"},
  {"alpha?", "alpha?"},
  {"<log>", "<log>"},
  {"tanh", "tanh"},
  {"<opts>", "<opts>"},
  {"%next-methods", "%next-methods"},
  {"match-unquote", "match-unquote"},
  {"fin", "fin"},
  {"pos", "pos"},
  {"no-next-methods-error", "no-next-methods-error"},
  {"<set>", "<set>"},
  {"tab-growth-factor", "tab-growth-factor"},
  {"tab-growth-threshold", "tab-growth-threshold"},
  {"<port>", "<port>"},
  {"rev", "rev"},
  {"<any>", "<any>"},
  {"last", "last"},
  {"sort-by!", "sort-by!"},
  {"put", "put"},
  {"pack-in", "pack-in"},
  {"str", "str"},
  {"curry", "curry"},
  {"prop-owner", "prop-owner"},
  {"out", "out"},
  {"<compiler-error>", "<compiler-error>"},
  {"op", "op"},
  {"*", "*"},
  {"macro-error", "macro-error"},
  {"id-hash", "id-hash"},
  {"items", "items"},
  {"fill", "fill"},
  {"now-key", "now-key"},
  {"%fun-reg", "%fun-reg"},
  {"into", "into"},
  {"<num>", "<num>"},
  {"all?", "all?"},
  {"%define-method", "%define-method"},
  {"del!", "del!"},
  {"quote", "quote"},
  {"all2?", "all2?"},
  {"clone", "clone"},
  {"now", "now"},
  {"&", "&"},
  {"sort!", "sort!"},
  {"property-error-generic", "property-error-generic"},
  {"range-by", "range-by"},
  {"<class>", "<class>"},
  {"fun-nary?", "fun-nary?"},
  {"<int>", "<int>"},
  {"pow", "pow"},
  {"elts", "elts"},
  {"t*", "t*"},
  {"@==", "@=="},
  {"<property-not-found-error>", "<property-not-found-error>"},
  {"gen-add-met", "gen-add-met"},
  {"with-port", "with-port"},
  {"tab-hash", "tab-hash"},
  {"macro-error-name", "macro-error-name"},
  {"class-of", "class-of"},
  {"trunc/", "trunc/"},
  {"del-dups!", "del-dups!"},
  {"condition-message", "condition-message"},
  {"elt-or", "elt-or"},
  {"mif", "mif"},
  {"floor", "floor"},
  {"cos", "cos"},
  {"<type>", "<type>"},
  {"export", "export"},
  {"popf", "popf"},
  {"<as-error>", "<as-error>"},
  {"$default-handler-info", "$default-handler-info"},
  {"@not", "@not"},
  {"<gen>", "<gen>"},
  {"class-children", "class-children"},
  {"fab-class", "fab-class"},
  {"pick", "pick"},
  {"write-to-string", "write-to-string"},
  {">>", ">>"},
  {"tab-shrink-threshold", "tab-shrink-threshold"},
  {"2nd", "2nd"},
  {"fun-mets", "fun-mets"},
  {"<type-error>", "<type-error>"},
  {"<range-error>", "<range-error>"},
  {"need-implementation", "need-implementation"},
  {"$min-int", "$min-int"},
  {"or", "or"},
  {"var-name", "var-name"},
  {"use", "use"},
  {"set", "set"},
  {"type-object", "type-object"},
  {"and", "and"},
  {"ready?", "ready?"},
  {"<sym>", "<sym>"},
  {"<packer>", "<packer>"},
  {"mem?", "mem?"},
  {"use/library", "use/library"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_goo;
MODULE_INFO module_info_goo = {
  "goo",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSmag (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooSruntime (void);
extern void load_module_gooSconditions (void);
extern void load_module_gooScols (void);
extern void load_module_gooSpacker (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_gooSioSread (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_goo (void);

void load_module_goo (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSmag();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooSruntime();
  load_module_gooSconditions();
  load_module_gooScols();
  load_module_gooSpacker();
  load_module_gooSioSwrite();
  load_module_gooSioSread();
  load_module_gooSioSport();

  (P)YgooY___main_0___();

}

/* END OF GENERATED CODE. */
