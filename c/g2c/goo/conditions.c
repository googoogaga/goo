/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/conditions");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/conditions */

EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
DEF(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
DEF(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosY1st,"goo/macros","1st");
DEF(YgooSconditionsYhandler_test_setter,"goo/conditions","handler-test-setter");
DEF(YgooSconditionsYmacro_error_arguments_setter,"goo/conditions","macro-error-arguments-setter");
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
DEF(YgooSconditionsYrange_error_key_setter,"goo/conditions","range-error-key-setter");
EXT(Yfun_specs,"goo/boot","fun-specs");
DEF(YgooSconditionsYincongruent_method_error_method_setter,"goo/conditions","incongruent-method-error-method-setter");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Ynul,"goo/boot","nul");
EXT(Ynil,"goo/boot","nil");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooStypesYlen,"goo/types","len");
DEF(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
DEF(YgooSconditionsYcall_error_function_setter,"goo/conditions","call-error-function-setter");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooSconditionsYtype_error_type_setter,"goo/conditions","type-error-type-setter");
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
DEF(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
DEF(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YgooSconditionsYincongruent_method_error_generic_setter,"goo/conditions","incongruent-method-error-generic-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSmathYneg,"goo/math","neg");
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
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yerror,"goo/boot","error");
DEF(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
DEF(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yfun_src,"goo/boot","fun-src");
DEF(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YgooSconditionsYhandler_condition_type_setter,"goo/conditions","handler-condition-type-setter");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
DEF(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DEF(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yobject_class,"goo/boot","object-class");
DEF(YgooSconditionsYtype_error_value_setter,"goo/conditions","type-error-value-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
DEF(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSconditionsYhandler_info_arguments_setter,"goo/conditions","handler-info-arguments-setter");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
DEF(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YgooSconditionsYproperty_error_owner_setter,"goo/conditions","property-error-owner-setter");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
DEF(YgooSconditionsYhandler_info_message_setter,"goo/conditions","handler-info-message-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
DEF(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
DEF(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYE,"goo/math","=");
DEF(YgooSconditionsYunbound_variable_error_variable_setter,"goo/conditions","unbound-variable-error-variable-setter");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
DEF(YgooSconditionsYsignal_handler_list,"goo/conditions","signal-handler-list");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YgooSconditionsYhandler_function_setter,"goo/conditions","handler-function-setter");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
DEF(YgooSconditionsYsig,"goo/conditions","sig");
DEF(YgooSconditionsYhandler_info_setter,"goo/conditions","handler-info-setter");
DEF(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YgooSconditionsYincongruent_method_error_generic,"goo/conditions","incongruent-method-error-generic");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
DEF(YgooSconditionsYmsg,"goo/conditions","msg");
DEF(YgooSconditionsYhandler_condition_type,"goo/conditions","handler-condition-type");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YgooSconditionsYhandler_info,"goo/conditions","handler-info");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YOanyQ,"goo/boot","@any?");
DYNDEF(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
DEF(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
DEF(YgooSconditionsYhandler_test,"goo/conditions","handler-test");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
DEF(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
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
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
DEF(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
DEF(YgooSconditionsYincongruent_method_error_method,"goo/conditions","incongruent-method-error-method");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ynot,"goo/boot","not");
EXT(YLunionG,"goo/boot","<union>");
DEF(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YPprop,"goo/boot","%prop");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Yassert_error,"goo/boot","assert-error");
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
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
DEF(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYtan,"goo/math","tan");
DEF(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(YgooSconditionsYproperty_error_generic_setter,"goo/conditions","property-error-generic-setter");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
DEF(YgooSconditionsYLincongruent_method_errorG,"goo/conditions","<incongruent-method-error>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
DEF(YgooSconditionsYcondition_message_setter,"goo/conditions","condition-message-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooStypesYas,"goo/types","as");
DEF(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
DEF(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(YgooSconditionsYLcpl_errorG,"goo/conditions","<cpl-error>");
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
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YgooSconditionsYcall_error_arguments_setter,"goo/conditions","call-error-arguments-setter");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
DEF(YgooSconditionsYhandler_activeQ,"goo/conditions","handler-active?");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YgooSconditionsYrange_error_collection_setter,"goo/conditions","range-error-collection-setter");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPdefine_method,"goo/boot","%define-method");
DEF(YgooSconditionsYfile_opening_error_filename_setter,"goo/conditions","file-opening-error-filename-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
DEF(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
DEF(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YgooSconditionsYcondition_arguments_setter,"goo/conditions","condition-arguments-setter");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
DEF(YgooSconditionsYmacro_error_name_setter,"goo/conditions","macro-error-name-setter");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
DEF(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
DEF(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YgooSconditionsYdo_handlers_of_type,"goo/conditions","do-handlers-of-type");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
DEF(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
DEF(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
DEF(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_190);
DEFLIT(lit_163);
DEFLIT(lit_58);
DEFLIT(lit_209);
DEFLIT(lit_239);
DEFLIT(lit_115);
DEFLIT(lit_96);
DEFLIT(lit_256);
DEFLIT(lit_134);
DEFLIT(lit_20);
DEFLIT(lit_31);
DEFLIT(lit_17);
DEFLIT(lit_162);
DEFLIT(lit_105);
DEFLIT(lit_279);
DEFLIT(lit_142);
DEFLIT(lit_149);
DEFLIT(lit_63);
DEFLIT(lit_10);
DEFLIT(lit_39);
DEFLIT(lit_137);
DEFLIT(lit_37);
DEFLIT(lit_46);
DEFLIT(lit_260);
DEFLIT(lit_144);
DEFLIT(lit_228);
DEFLIT(lit_56);
DEFLIT(lit_278);
DEFLIT(lit_82);
DEFLIT(lit_196);
DEFLIT(lit_8);
DEFLIT(lit_241);
DEFLIT(lit_258);
DEFLIT(lit_250);
DEFLIT(lit_55);
DEFLIT(lit_146);
DEFLIT(lit_262);
DEFLIT(lit_123);
DEFLIT(lit_81);
DEFLIT(lit_98);
DEFLIT(lit_94);
DEFLIT(lit_269);
DEFLIT(lit_243);
DEFLIT(lit_120);
DEFLIT(lit_168);
DEFLIT(lit_131);
DEFLIT(lit_6);
DEFLIT(lit_143);
DEFLIT(lit_42);
DEFLIT(lit_48);
DEFLIT(lit_237);
DEFLIT(lit_24);
DEFLIT(lit_30);
DEFLIT(lit_182);
DEFLIT(lit_36);
DEFLIT(lit_193);
DEFLIT(lit_221);
DEFLIT(lit_2);
DEFLIT(lit_119);
DEFLIT(lit_187);
DEFLIT(lit_118);
DEFLIT(lit_157);
DEFLIT(lit_179);
DEFLIT(lit_257);
DEFLIT(lit_91);
DEFLIT(lit_165);
DEFLIT(lit_32);
DEFLIT(lit_267);
DEFLIT(lit_121);
DEFLIT(lit_171);
DEFLIT(lit_224);
DEFLIT(lit_150);
DEFLIT(lit_0);
DEFLIT(lit_248);
DEFLIT(lit_76);
DEFLIT(lit_231);
DEFLIT(lit_200);
DEFLIT(lit_233);
DEFLIT(lit_12);
DEFLIT(lit_18);
DEFLIT(lit_234);
DEFLIT(lit_152);
DEFLIT(lit_7);
DEFLIT(lit_129);
DEFLIT(lit_275);
DEFLIT(lit_170);
DEFLIT(lit_205);
DEFLIT(lit_108);
DEFLIT(lit_207);
DEFLIT(lit_109);
DEFLIT(lit_229);
DEFLIT(lit_130);
DEFLIT(lit_212);
DEFLIT(lit_74);
DEFLIT(lit_88);
DEFLIT(lit_75);
DEFLIT(lit_261);
DEFLIT(lit_100);
DEFLIT(lit_230);
DEFLIT(lit_223);
DEFLIT(lit_155);
DEFLIT(lit_264);
DEFLIT(lit_71);
DEFLIT(lit_254);
DEFLIT(lit_147);
DEFLIT(lit_174);
DEFLIT(lit_125);
DEFLIT(lit_220);
DEFLIT(lit_35);
DEFLIT(lit_59);
DEFLIT(lit_117);
DEFLIT(lit_222);
DEFLIT(lit_83);
DEFLIT(lit_67);
DEFLIT(lit_1);
DEFLIT(lit_281);
DEFLIT(lit_66);
DEFLIT(lit_211);
DEFLIT(lit_202);
DEFLIT(lit_132);
DEFLIT(lit_226);
DEFLIT(lit_34);
DEFLIT(lit_54);
DEFLIT(lit_180);
DEFLIT(lit_95);
DEFLIT(lit_227);
DEFLIT(lit_29);
DEFLIT(lit_186);
DEFLIT(lit_21);
DEFLIT(lit_19);
DEFLIT(lit_84);
DEFLIT(lit_161);
DEFLIT(lit_90);
DEFLIT(lit_50);
DEFLIT(lit_167);
DEFLIT(lit_249);
DEFLIT(lit_53);
DEFLIT(lit_102);
DEFLIT(lit_203);
DEFLIT(lit_79);
DEFLIT(lit_204);
DEFLIT(lit_45);
DEFLIT(lit_141);
DEFLIT(lit_135);
DEFLIT(lit_4);
DEFLIT(lit_247);
DEFLIT(lit_272);
DEFLIT(lit_213);
DEFLIT(lit_101);
DEFLIT(lit_13);
DEFLIT(lit_208);
DEFLIT(lit_280);
DEFLIT(lit_140);
DEFLIT(lit_225);
DEFLIT(lit_259);
DEFLIT(lit_276);
DEFLIT(lit_173);
DEFLIT(lit_127);
DEFLIT(lit_156);
DEFLIT(lit_51);
DEFLIT(lit_99);
DEFLIT(lit_194);
DEFLIT(lit_116);
DEFLIT(lit_133);
DEFLIT(lit_60);
DEFLIT(lit_11);
DEFLIT(lit_9);
DEFLIT(lit_114);
DEFLIT(lit_273);
DEFLIT(lit_128);
DEFLIT(lit_159);
DEFLIT(lit_177);
DEFLIT(lit_38);
DEFLIT(lit_175);
DEFLIT(lit_57);
DEFLIT(lit_189);
DEFLIT(lit_73);
DEFLIT(lit_197);
DEFLIT(lit_78);
DEFLIT(lit_49);
DEFLIT(lit_271);
DEFLIT(lit_40);
DEFLIT(lit_214);
DEFLIT(lit_166);
DEFLIT(lit_69);
DEFLIT(lit_154);
DEFLIT(lit_61);
DEFLIT(lit_23);
DEFLIT(lit_255);
DEFLIT(lit_27);
DEFLIT(lit_164);
DEFLIT(lit_217);
DEFLIT(lit_246);
DEFLIT(lit_185);
DEFLIT(lit_265);
DEFLIT(lit_253);
DEFLIT(lit_97);
DEFLIT(lit_5);
DEFLIT(lit_28);
DEFLIT(lit_158);
DEFLIT(lit_210);
DEFLIT(lit_235);
DEFLIT(lit_87);
DEFLIT(lit_277);
DEFLIT(lit_112);
DEFLIT(lit_145);
DEFLIT(lit_64);
DEFLIT(lit_192);
DEFLIT(lit_206);
DEFLIT(lit_89);
DEFLIT(lit_47);
DEFLIT(lit_138);
DEFLIT(lit_218);
DEFLIT(lit_199);
DEFLIT(lit_160);
DEFLIT(lit_110);
DEFLIT(lit_107);
DEFLIT(lit_201);
DEFLIT(lit_26);
DEFLIT(lit_14);
DEFLIT(lit_104);
DEFLIT(lit_236);
DEFLIT(lit_124);
DEFLIT(lit_198);
DEFLIT(lit_176);
DEFLIT(lit_172);
DEFLIT(lit_252);
DEFLIT(lit_62);
DEFLIT(lit_93);
DEFLIT(lit_169);
DEFLIT(lit_33);
DEFLIT(lit_86);
DEFLIT(lit_232);
DEFLIT(lit_113);
DEFLIT(lit_266);
DEFLIT(lit_184);
DEFLIT(lit_85);
DEFLIT(lit_270);
DEFLIT(lit_22);
DEFLIT(lit_25);
DEFLIT(lit_103);
DEFLIT(lit_68);
DEFLIT(lit_106);
DEFLIT(lit_72);
DEFLIT(lit_195);
DEFLIT(lit_274);
DEFLIT(lit_77);
DEFLIT(lit_3);
DEFLIT(lit_122);
DEFLIT(lit_111);
DEFLIT(lit_216);
DEFLIT(lit_240);
DEFLIT(lit_139);
DEFLIT(lit_15);
DEFLIT(lit_244);
DEFLIT(lit_52);
DEFLIT(lit_238);
DEFLIT(lit_16);
DEFLIT(lit_268);
DEFLIT(lit_191);
DEFLIT(lit_242);
DEFLIT(lit_219);
DEFLIT(lit_178);
DEFLIT(lit_44);
DEFLIT(lit_148);
DEFLIT(lit_92);
DEFLIT(lit_245);
DEFLIT(lit_136);
DEFLIT(lit_181);
DEFLIT(lit_151);
DEFLIT(lit_80);
DEFLIT(lit_251);
DEFLIT(lit_183);
DEFLIT(lit_188);
DEFLIT(lit_126);
DEFLIT(lit_153);
DEFLIT(lit_43);
DEFLIT(lit_215);
DEFLIT(lit_41);
DEFLIT(lit_70);
DEFLIT(lit_263);
DEFLIT(lit_65);

/* FUNCTIONS: */

LOCFOR(fun_default_handler_0);
LOCFOR(fun_describe_condition_1);
LOCFOR(fun_default_handler_description_2);
LOCFOR(fun_build_condition_interactively_3);
LOCFOR(fun_condition_message_4);
LOCFOR(fun_condition_message_setter_5);
LOCFOR(fun_6);
LOCFOR(fun_condition_arguments_7);
LOCFOR(fun_condition_arguments_setter_8);
LOCFOR(fun_9);
LOCFOR(fun_describe_condition_10);
LOCFOR(fun_build_condition_interactively_11);
LOCFOR(fun_default_handler_12);
LOCFOR(fun_default_handler_description_13);
LOCFOR(fun_incongruent_method_error_generic_14);
LOCFOR(fun_incongruent_method_error_generic_setter_15);
LOCFOR(fun_incongruent_method_error_method_16);
LOCFOR(fun_incongruent_method_error_method_setter_17);
LOCFOR(fun_describe_condition_18);
LOCFOR(fun_default_handler_description_19);
LOCFOR(fun_describe_handler_20);
LOCFOR(fun_build_condition_for_handler_interactively_21);
LOCFOR(fun_handler_info_message_22);
LOCFOR(fun_handler_info_message_setter_23);
LOCFOR(fun_handler_info_arguments_24);
LOCFOR(fun_handler_info_arguments_setter_25);
LOCFOR(fun_26);
LOCFOR(fun_describe_handler_27);
LOCFOR(fun_handler_condition_type_28);
LOCFOR(fun_handler_condition_type_setter_29);
LOCFOR(fun_handler_info_30);
LOCFOR(fun_handler_info_setter_31);
LOCFOR(fun_handler_test_32);
LOCFOR(fun_handler_test_setter_33);
LOCFOR(fun_handler_function_34);
LOCFOR(fun_handler_function_setter_35);
FUNFOR(YgooSconditionsYfab_handler);
FUNFOR(YgooSconditionsYhandler_activeQ);
FUNFOR(YgooSconditionsYhandler_matchesQ);
LOCFOR(fun_39);
LOCFOR(fun_Uhandler_functionU_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
FUNFOR(YPwith_monitor);
LOCFOR(fun_44);
FUNFOR(YgooSconditionsYsignal_handler_list);
LOCFOR(fun_sig_46);
LOCFOR(fun_sig_47);
LOCFOR(fun_error_48);
LOCFOR(fun_error_49);
FUNFOR(Yincongruent_method_error);
LOCFOR(fun_call_error_function_51);
LOCFOR(fun_call_error_function_setter_52);
LOCFOR(fun_call_error_arguments_53);
LOCFOR(fun_call_error_arguments_setter_54);
LOCFOR(fun_describe_condition_55);
FUNFOR(Yarity_error);
FUNFOR(Ynarity_error);
LOCFOR(fun_describe_condition_58);
LOCFOR(fun_type_error_value_59);
LOCFOR(fun_type_error_value_setter_60);
LOCFOR(fun_type_error_type_61);
LOCFOR(fun_type_error_type_setter_62);
FUNFOR(Ytype_error);
LOCFOR(fun_describe_condition_64);
FUNFOR(Yunknown_function_error);
LOCFOR(fun_describe_condition_66);
FUNFOR(Yargument_type_error);
LOCFOR(fun_describe_condition_68);
FUNFOR(Yreturn_type_error);
LOCFOR(fun_describe_condition_70);
FUNFOR(Yambiguous_method_error);
LOCFOR(fun_describe_condition_72);
FUNFOR(Yno_applicable_methods_error);
LOCFOR(fun_describe_condition_74);
FUNFOR(Yno_next_methods_error);
LOCFOR(fun_describe_condition_76);
FUNFOR(Ycpl_error);
FUNFOR(Ysyntax_error);
LOCFOR(fun_macro_error_name_79);
LOCFOR(fun_macro_error_name_setter_80);
LOCFOR(fun_macro_error_arguments_81);
LOCFOR(fun_macro_error_arguments_setter_82);
FUNFOR(YgooSmacrosYmacro_error);
LOCFOR(fun_describe_condition_84);
FUNFOR(Ystack_overflow_error);
LOCFOR(fun_describe_condition_86);
FUNFOR(Yinternal_error);
FUNFOR(Yassert_error);
LOCFOR(fun_describe_condition_89);
LOCFOR(fun_range_error_collection_90);
LOCFOR(fun_range_error_collection_setter_91);
LOCFOR(fun_range_error_key_92);
LOCFOR(fun_range_error_key_setter_93);
LOCFOR(fun_range_error_94);
LOCFOR(fun_describe_condition_95);
LOCFOR(fun_file_opening_error_filename_96);
LOCFOR(fun_file_opening_error_filename_setter_97);
LOCFOR(fun_file_opening_error_98);
LOCFOR(fun_describe_condition_99);
LOCFOR(fun_unbound_variable_error_variable_100);
LOCFOR(fun_unbound_variable_error_variable_setter_101);
LOCFOR(fun_describe_condition_102);
LOCFOR(fun_property_error_owner_103);
LOCFOR(fun_property_error_owner_setter_104);
LOCFOR(fun_105);
LOCFOR(fun_property_error_generic_106);
LOCFOR(fun_property_error_generic_setter_107);
LOCFOR(fun_108);
FUNFOR(Yproperty_unbound_error);
LOCFOR(fun_describe_condition_110);
FUNFOR(Yproperty_not_found_error);
LOCFOR(fun_describe_condition_112);
FUNFOR(Yproperty_type_error);
LOCFOR(fun_describe_condition_114);
FUNFOR(Yas_error);
LOCFOR(fun_describe_condition_116);
FUNFOR(Yarithmetic_error);
FUNFOR(Ykeyboard_interrupt);
LOCFOR(fun_search_119);
FUNFOR(YgooSconditionsYdo_handlers_of_type);
LOCFOR(fun_121);
FUNFOR(YgooSconditionsYlist_handlers);
LOCFOR(fun_123);
LOCFOR(fun_search_124);
FUNFOR(YgooSconditionsYinvoke_handler_interactively);
FUNFOR(YgooSconditionsYchoose_handler);
extern P YgooSconditionsY___main_0___ ();
extern P YgooSconditionsY___main_1___ ();
extern P YgooSconditionsY___main_2___ ();
extern P YgooSconditionsY___main_3___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_default_handler_0) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_describe_condition_1) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_5),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_description_2) {
  P cond_type_;
  P T0;
  P a1;
LINK_STACK();
  ARG(cond_type_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_8),cond_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_interactively_3) {
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

FUNCODEDEF(fun_condition_message_4) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYcondition_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_condition_message_setter_5) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYcondition_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_17));
}

FUNCODEDEF(fun_condition_arguments_7) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYcondition_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_condition_arguments_setter_8) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYcondition_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_describe_condition_10) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYcondition_message),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcondition_arguments),c_);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg_to_str),YPfalse,T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_interactively_11) {
  P cond_type_,in_,out_;
  P condF2293;
  P xF2292;
  P yF2291;
  P xF2290;
  P tmpF2289;
  P next_metsF2288;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2,a3;
LINK_STACK();
  ARG(cond_type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T2 = (P)YPnext_methods();
  next_metsF2288 = T2;
  tmpF2289 = next_metsF2288;
  if (tmpF2289 != YPfalse) {
    xF2290 = next_metsF2288;
    yF2291 = Ynil;
    T9 = (P)YPeqQ(xF2290,yF2291);
    T8 = (P)YPbb(T9);
    T7 = T8;
    xF2292 = T7;
    T11 = (P)YPeqQ(xF2292,YPfalse);
    T10 = (P)YPbb(T11);
    T6 = T10;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  if (T4 != YPfalse) {
    T13 = CALL1(1,VARREF(Yhead),next_metsF2288);
    T14 = CALL1(1,VARREF(Ytail),next_metsF2288);
    T12 = CALLN(1,VARREF(YgooSmacrosYnapp),6,T13,T14,cond_type_,in_,out_,Ynil);
    T3 = T12;
  } else {
    T16 = (P)YPfun_reg();
    T17 = CALL3(1,VARREF(Ylst),cond_type_,in_,out_);
    T15 = CALL2(1,VARREF(Yno_next_methods_error),T16,T17);
    T3 = T15;
  }
  T1 = T3;
  condF2293 = T1;
  CALL2(1,VARREF(YgooSconditionsYmsg),out_,LITREF(lit_25));
  T18 = CALL1(1,VARREF(YgooSconditionsYread),in_);
  CALL2(1,VARREF(YgooSconditionsYcondition_message_setter),T18,condF2293);
  CALL2(1,VARREF(YgooSconditionsYmsg),out_,LITREF(lit_26));
  T19 = CALL1(1,VARREF(YgooSconditionsYread),in_);
  CALL2(1,VARREF(YgooSconditionsYcondition_arguments_setter),T19,condF2293);
  T0 = condF2293;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_12) {
  P c_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSconditionsYdescribe_condition),c_);
  CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_29),T0);
  T1 = (P)YPinvoke_debugger(c_);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_default_handler_description_13) {
  P cond_type_;
  P T0;
  P a1;
LINK_STACK();
  ARG(cond_type_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_34),cond_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_generic_14) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYincongruent_method_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_generic_setter_15) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYincongruent_method_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_method_16) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYincongruent_method_error_method));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_method_setter_17) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYincongruent_method_error_method));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_18) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYincongruent_method_error_method),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYincongruent_method_error_generic),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_45),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_description_19) {
  P cond_type_;
  P a1;
LINK_STACK();
  ARG(cond_type_, 0);
loop:
UNLINK_STACK();
  RET(LITREF(lit_48));
}

FUNCODEDEF(fun_describe_handler_20) {
  P info_,condition_type_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
loop:
  T0 = CALL1(1,VARREF(YgooSconditionsYdefault_handler_description),condition_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_for_handler_interactively_21) {
  P info_,condition_type_,in_,out_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
  ARG(in_, 2);
  ARG(out_, 3);
loop:
  T0 = CALL3(1,VARREF(YgooSconditionsYbuild_condition_interactively),condition_type_,in_,out_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_handler_info_message_22) {
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

FUNCODEDEF(fun_handler_info_message_setter_23) {
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

FUNCODEDEF(fun_handler_info_arguments_24) {
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

FUNCODEDEF(fun_handler_info_arguments_setter_25) {
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

FUNCODEDEF(fun_26) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_describe_handler_27) {
  P info_,condition_type_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
loop:
  T1 = CALL1(1,VARREF(Yhandler_info_message),info_);
  T2 = CALL1(1,VARREF(Yhandler_info_arguments),info_);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg_to_str),YPfalse,T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_handler_condition_type_28) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYhandler_condition_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_condition_type_setter_29) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYhandler_condition_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_30) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYhandler_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_setter_31) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYhandler_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_test_32) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYhandler_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_test_setter_33) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYhandler_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_function_34) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYhandler_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_function_setter_35) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYhandler_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYfab_handler) {
  P type_,info_,test_,f_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_, 2);
  ARG(f_, 3);
loop:
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_condition_type),type_,VARREF(YgooSconditionsYhandler_info),info_,VARREF(YgooSconditionsYhandler_test),test_,VARREF(YgooSconditionsYhandler_function),f_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSconditionsYhandler_activeQ) {
  P handler_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(handler_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYhandler_test),handler_);
  T0 = CALL0(1,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSconditionsYhandler_matchesQ) {
  P handler_,condition_;
  P tmpF2294;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(handler_, 0);
  ARG(condition_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handler_);
  T1 = CALL2(1,VARREF(YisaQ),condition_,T2);
  tmpF2294 = T1;
  if (tmpF2294 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSconditionsYhandler_activeQ),handler_);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_39) {
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

FUNCODEDEF(fun_Uhandler_functionU_40) {
  P condition_,Unext_handlerU_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(condition_, 0);
  ARG(Unext_handlerU_, 1);
loop:
  T1 = FUNFAB(fun_39,3,condition_,FREEREF(0),Unext_handlerU_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL0(1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YgooSconditionsYTcurrent_handlersT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPwith_monitor) {
  P type_,info_,test_fun_,user_handler_,main_fun_;
  P Uhandler_functionUF2296;
  P Uoriginal_handlersUF2295;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_fun_, 2);
  ARG(user_handler_, 3);
  ARG(main_fun_, 4);
loop:
  Uoriginal_handlersUF2295 = DYNREF(YgooSconditionsYTcurrent_handlersT);
  T2 = FUNSHELL(0,fun_Uhandler_functionU_40,1);
  Uhandler_functionUF2296 = T2;
  FUNINIT(Uhandler_functionUF2296, 1,user_handler_);
  T4 = CALL4(1,VARREF(YgooSconditionsYfab_handler),type_,info_,test_fun_,Uhandler_functionUF2296);
  T3 = CALL2(1,VARREF(YgooScolsSseqxYpushX),DYNREF(YgooSconditionsYTcurrent_handlersT),T4);
  DYNSET(YgooSconditionsYTcurrent_handlersT,T3);
  T6 = FUNFAB(fun_41,1,main_fun_);
  T7 = FUNFAB(fun_42,1,Uoriginal_handlersUF2295);
  T5 = with_cleanup(T6,T7);
  T1 = T5;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYsignal_handler_list) {
  P condition_,handlers_;
  P remainingF2298;
  P handlerF2297;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(condition_, 0);
  ARG(handlers_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlers_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSconditionsYdefault_handler),condition_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),handlers_);
    handlerF2297 = T4;
    T6 = CALL1(1,VARREF(Ytail),handlers_);
    remainingF2298 = T6;
    T8 = CALL2(1,VARREF(YgooSconditionsYhandler_matchesQ),handlerF2297,condition_);
    if (T8 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooSconditionsYhandler_function),handlerF2297);
      T10 = FUNFAB(fun_44,2,condition_,remainingF2298);
      T9 = CALL2(1,T11,condition_,T10);
      T7 = T9;
    } else {
      T12 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),condition_,remainingF2298);
      T7 = T12;
    }
    T5 = T7;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sig_46) {
  P condition_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(condition_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),condition_,DYNREF(YgooSconditionsYTcurrent_handlersT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sig_47) {
  P c_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLsimple_conditionG),VARREF(YgooSconditionsYcondition_message),c_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_error_48) {
  P c_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_error_49) {
  P c_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLsimple_errorG),VARREF(YgooSconditionsYcondition_message),c_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(Yerror),T1);
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
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLincongruent_method_errorG),VARREF(YgooSconditionsYincongruent_method_error_generic),gen_,VARREF(YgooSconditionsYincongruent_method_error_method),met_);
  T0 = CALL1(1,VARREF(Yerror),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_call_error_function_51) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYcall_error_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_call_error_function_setter_52) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYcall_error_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_call_error_arguments_53) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYcall_error_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_call_error_arguments_setter_54) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYcall_error_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_55) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_115),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yarity_error) {
  P fun_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(fun_, 0);
  ARG(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLarity_errorG),VARREF(YgooSconditionsYcall_error_function),fun_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ynarity_error) {
  P fun_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(fun_, 0);
  ARG(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLnarity_errorG),VARREF(YgooSconditionsYcall_error_function),fun_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_58) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_122),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_type_error_value_59) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYtype_error_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_type_error_value_setter_60) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYtype_error_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_type_error_type_61) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYtype_error_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_type_error_type_setter_62) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYtype_error_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ytype_error) {
  P arg_,type_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(arg_, 0);
  ARG(type_, 1);
loop:
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLtype_errorG),VARREF(YgooSconditionsYtype_error_value),arg_,VARREF(YgooSconditionsYtype_error_type),type_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_64) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYtype_error_value),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYtype_error_type),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_135),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yunknown_function_error) {
  P f_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSconditionsYLunknown_function_errorG),VARREF(YgooSconditionsYcall_error_function),f_,VARREF(YgooSconditionsYcall_error_arguments),T2,VARREF(YgooSconditionsYtype_error_value),f_,VARREF(YgooSconditionsYtype_error_type),VARREF(YLfunG));
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_66) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYtype_error_value),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_140),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yargument_type_error) {
  P f_,val_,type_,args_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(val_, 1);
  ARG(type_, 2);
  ARG(args_, 3);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSconditionsYLargument_type_errorG),VARREF(YgooSconditionsYcall_error_function),f_,VARREF(YgooSconditionsYcall_error_arguments),T2,VARREF(YgooSconditionsYtype_error_value),val_,VARREF(YgooSconditionsYtype_error_type),type_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_68) {
  P c_;
  P xF2303;
  P yF2302;
  P xF2301;
  P tmpF2300;
  P next_metsF2299;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T3 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T1 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_145),T2,T3);
  T5 = (P)YPnext_methods();
  next_metsF2299 = T5;
  tmpF2300 = next_metsF2299;
  if (tmpF2300 != YPfalse) {
    xF2301 = next_metsF2299;
    yF2302 = Ynil;
    T12 = (P)YPeqQ(xF2301,yF2302);
    T11 = (P)YPbb(T12);
    T10 = T11;
    xF2303 = T10;
    T14 = (P)YPeqQ(xF2303,YPfalse);
    T13 = (P)YPbb(T14);
    T9 = T13;
    T8 = T9;
  } else {
    T8 = YPfalse;
  }
  T7 = T8;
  if (T7 != YPfalse) {
    T16 = CALL1(1,VARREF(Yhead),next_metsF2299);
    T17 = CALL1(1,VARREF(Ytail),next_metsF2299);
    T15 = CALL4(1,VARREF(YgooSmacrosYnapp),T16,T17,c_,Ynil);
    T6 = T15;
  } else {
    T19 = (P)YPfun_reg();
    T20 = CALL1(1,VARREF(Ylst),c_);
    T18 = CALL2(1,VARREF(Yno_next_methods_error),T19,T20);
    T6 = T18;
  }
  T4 = T6;
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yreturn_type_error) {
  P f_,val_,type_,args_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(val_, 1);
  ARG(type_, 2);
  ARG(args_, 3);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSconditionsYLreturn_type_errorG),VARREF(YgooSconditionsYcall_error_function),f_,VARREF(YgooSconditionsYcall_error_arguments),T2,VARREF(YgooSconditionsYtype_error_value),val_,VARREF(YgooSconditionsYtype_error_type),type_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_70) {
  P c_;
  P xF2308;
  P yF2307;
  P xF2306;
  P tmpF2305;
  P next_metsF2304;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T3 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T1 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_150),T2,T3);
  T5 = (P)YPnext_methods();
  next_metsF2304 = T5;
  tmpF2305 = next_metsF2304;
  if (tmpF2305 != YPfalse) {
    xF2306 = next_metsF2304;
    yF2307 = Ynil;
    T12 = (P)YPeqQ(xF2306,yF2307);
    T11 = (P)YPbb(T12);
    T10 = T11;
    xF2308 = T10;
    T14 = (P)YPeqQ(xF2308,YPfalse);
    T13 = (P)YPbb(T14);
    T9 = T13;
    T8 = T9;
  } else {
    T8 = YPfalse;
  }
  T7 = T8;
  if (T7 != YPfalse) {
    T16 = CALL1(1,VARREF(Yhead),next_metsF2304);
    T17 = CALL1(1,VARREF(Ytail),next_metsF2304);
    T15 = CALL4(1,VARREF(YgooSmacrosYnapp),T16,T17,c_,Ynil);
    T6 = T15;
  } else {
    T19 = (P)YPfun_reg();
    T20 = CALL1(1,VARREF(Ylst),c_);
    T18 = CALL2(1,VARREF(Yno_next_methods_error),T19,T20);
    T6 = T18;
  }
  T4 = T6;
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yambiguous_method_error) {
  P gen_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLambiguous_method_errorG),VARREF(YgooSconditionsYcall_error_function),gen_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_72) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_155),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yno_applicable_methods_error) {
  P gen_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLno_applicable_methods_errorG),VARREF(YgooSconditionsYcall_error_function),gen_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_74) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_160),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yno_next_methods_error) {
  P met_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(met_, 0);
  ARG(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLno_next_methods_errorG),VARREF(YgooSconditionsYcall_error_function),met_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_76) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_165),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Ycpl_error) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL4(1,VARREF(Ynew),VARREF(YgooSconditionsYLcpl_errorG),VARREF(YgooSconditionsYcondition_message),msg_,T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ysyntax_error) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLsyntax_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_macro_error_name_79) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYmacro_error_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_macro_error_name_setter_80) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYmacro_error_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_macro_error_arguments_81) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYmacro_error_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_macro_error_arguments_setter_82) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYmacro_error_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYmacro_error) {
  P name_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLmacro_errorG),VARREF(YgooSconditionsYmacro_error_name),name_,VARREF(YgooSconditionsYmacro_error_arguments),args_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_84) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYmacro_error_name),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYmacro_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_185),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Ystack_overflow_error) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(YgooSconditionsYLstack_overflowG));
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_86) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(LITREF(lit_189));
}

FUNCODEDEF(Yinternal_error) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLinternal_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yassert_error) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLassert_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_89) {
  P c_;
  P xF2313;
  P yF2312;
  P xF2311;
  P tmpF2310;
  P next_metsF2309;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = (P)YPnext_methods();
  next_metsF2309 = T2;
  tmpF2310 = next_metsF2309;
  if (tmpF2310 != YPfalse) {
    xF2311 = next_metsF2309;
    yF2312 = Ynil;
    T9 = (P)YPeqQ(xF2311,yF2312);
    T8 = (P)YPbb(T9);
    T7 = T8;
    xF2313 = T7;
    T11 = (P)YPeqQ(xF2313,YPfalse);
    T10 = (P)YPbb(T11);
    T6 = T10;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  if (T4 != YPfalse) {
    T13 = CALL1(1,VARREF(Yhead),next_metsF2309);
    T14 = CALL1(1,VARREF(Ytail),next_metsF2309);
    T12 = CALL4(1,VARREF(YgooSmacrosYnapp),T13,T14,c_,Ynil);
    T3 = T12;
  } else {
    T16 = (P)YPfun_reg();
    T17 = CALL1(1,VARREF(Ylst),c_);
    T15 = CALL2(1,VARREF(Yno_next_methods_error),T16,T17);
    T3 = T15;
  }
  T1 = T3;
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_197),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_range_error_collection_90) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYrange_error_collection));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_error_collection_setter_91) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYrange_error_collection));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_error_key_92) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYrange_error_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_error_key_setter_93) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYrange_error_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_error_94) {
  P c_,k_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(k_, 1);
loop:
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLrange_errorG),VARREF(YgooSconditionsYrange_error_collection),c_,VARREF(YgooSconditionsYrange_error_key),k_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_95) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYrange_error_key),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYrange_error_collection),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_210),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_file_opening_error_filename_96) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYfile_opening_error_filename));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_file_opening_error_filename_setter_97) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYfile_opening_error_filename));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_file_opening_error_98) {
  P filename_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = CALL3(1,VARREF(Ynew),VARREF(YgooSconditionsYLfile_opening_errorG),VARREF(YgooSconditionsYfile_opening_error_filename),filename_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_99) {
  P c_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYfile_opening_error_filename),c_);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_220),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_unbound_variable_error_variable_100) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYunbound_variable_error_variable));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unbound_variable_error_variable_setter_101) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYunbound_variable_error_variable));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_102) {
  P c_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYunbound_variable_error_variable),c_);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_228),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_property_error_owner_103) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYproperty_error_owner));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_property_error_owner_setter_104) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYproperty_error_owner));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_105) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_property_error_generic_106) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYproperty_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_property_error_generic_setter_107) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYproperty_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_108) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(Yproperty_unbound_error) {
  P owner_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(owner_, 0);
loop:
  T1 = CALL3(1,VARREF(Ynew),VARREF(YgooSconditionsYLproperty_unbound_errorG),VARREF(YgooSconditionsYproperty_error_owner),owner_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_110) {
  P c_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYproperty_error_owner),c_);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_244),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yproperty_not_found_error) {
  P generic_,owner_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(generic_, 0);
  ARG(owner_, 1);
loop:
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLproperty_not_found_errorG),VARREF(YgooSconditionsYproperty_error_generic),generic_,VARREF(YgooSconditionsYproperty_error_owner),owner_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_112) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYproperty_error_generic),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYproperty_error_owner),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_249),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yproperty_type_error) {
  P generic_,value_,type_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(generic_, 0);
  ARG(value_, 1);
  ARG(type_, 2);
loop:
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YgooSconditionsYLproperty_type_errorG),VARREF(YgooSconditionsYproperty_error_generic),generic_,VARREF(YgooSconditionsYtype_error_value),value_,VARREF(YgooSconditionsYtype_error_type),type_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_114) {
  P c_;
  P xF2318;
  P yF2317;
  P xF2316;
  P tmpF2315;
  P next_metsF2314;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSconditionsYproperty_error_generic),c_);
  T1 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_254),T2);
  T4 = (P)YPnext_methods();
  next_metsF2314 = T4;
  tmpF2315 = next_metsF2314;
  if (tmpF2315 != YPfalse) {
    xF2316 = next_metsF2314;
    yF2317 = Ynil;
    T11 = (P)YPeqQ(xF2316,yF2317);
    T10 = (P)YPbb(T11);
    T9 = T10;
    xF2318 = T9;
    T13 = (P)YPeqQ(xF2318,YPfalse);
    T12 = (P)YPbb(T13);
    T8 = T12;
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T6 = T7;
  if (T6 != YPfalse) {
    T15 = CALL1(1,VARREF(Yhead),next_metsF2314);
    T16 = CALL1(1,VARREF(Ytail),next_metsF2314);
    T14 = CALL4(1,VARREF(YgooSmacrosYnapp),T15,T16,c_,Ynil);
    T5 = T14;
  } else {
    T18 = (P)YPfun_reg();
    T19 = CALL1(1,VARREF(Ylst),c_);
    T17 = CALL2(1,VARREF(Yno_next_methods_error),T18,T19);
    T5 = T17;
  }
  T3 = T5;
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yas_error) {
  P type_,value_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(value_, 1);
loop:
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLas_errorG),VARREF(YgooSconditionsYtype_error_type),type_,VARREF(YgooSconditionsYtype_error_value),value_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_116) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYtype_error_type),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYtype_error_value),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_259),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yarithmetic_error) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLarithmetic_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ykeyboard_interrupt) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(YgooSconditionsYLkeyboard_interruptG));
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_search_119) {
  P handlers_;
  P tmpF2321;
  P remainingF2320;
  P handlerF2319;
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
    handlerF2319 = T3;
    T5 = CALL1(1,VARREF(Ytail),handlers_);
    remainingF2320 = T5;
    T8 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handlerF2319);
    T7 = CALL2(1,VARREF(YsubtypeQ),T8,FREEREF(0));
    tmpF2321 = T7;
    if (tmpF2321 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooSconditionsYhandler_activeQ),handlerF2319);
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T6 = T9;
    if (T6 != YPfalse) {
      T11 = CALL1(1,FREEREF(1),handlerF2319);
    } else {
    }
    a1 = remainingF2320;
    handlers_ = a1;
    goto loop;
    T4 = T12;
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYdo_handlers_of_type) {
  P type_,f_;
  P searchF2322;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(f_, 1);
loop:
  T1 = FUNSHELL(1,fun_search_119,3);
  searchF2322 = T1;
  FUNINIT(searchF2322, 3,type_,f_,searchF2322);
  T2 = CALL1(0,searchF2322,DYNREF(YgooSconditionsYTcurrent_handlersT));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_121) {
  P handler_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(handler_, 0);
loop:
  T0 = BOXVAL(FREEREF(1));
  T2 = CALL1(1,VARREF(YgooSconditionsYhandler_info),handler_);
  T3 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handler_);
  T1 = CALL2(1,VARREF(YgooSconditionsYdescribe_handler),T2,T3);
  CALL4(1,VARREF(YgooSconditionsYmsg),FREEREF(0),LITREF(lit_272),T0,T1);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),FREEREF(2),handler_);
  T6 = BOXVAL(FREEREF(1));
  T5 = CALL2(1,VARREF(YgooSmathYA),T6,YPint((P)1));
  T4 = BOXVAL(FREEREF(1)) = T5;
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(YgooSconditionsYlist_handlers) {
  P type_,out_;
  P applicableF2324;
  P iF2323;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(out_, 1);
loop:
  iF2323 = YPint((P)1);
  iF2323 = BOXFAB(iF2323);
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  applicableF2324 = T3;
  T4 = FUNFAB(fun_121,3,out_,iF2323,applicableF2324);
  CALL2(1,VARREF(YgooSconditionsYdo_handlers_of_type),type_,T4);
  T2 = applicableF2324;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_123) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_search_124) {
  P handlers_;
  P remainingF2326;
  P currentF2325;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(handlers_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlers_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yerror),LITREF(lit_277),FREEREF(0));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),handlers_);
    currentF2325 = T4;
    T6 = CALL1(1,VARREF(Ytail),handlers_);
    remainingF2326 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),currentF2325);
    if (T8 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooSconditionsYhandler_function),FREEREF(0));
      T10 = FUNFAB(fun_123,2,FREEREF(1),remainingF2326);
      T9 = CALL2(1,T11,FREEREF(1),T10);
      T7 = T9;
    } else {
      a1 = remainingF2326;
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

FUNCODEDEF(YgooSconditionsYinvoke_handler_interactively) {
  P handler_,in_,out_;
  P searchF2328;
  P conditionF2327;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(handler_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T2 = CALL1(1,VARREF(YgooSconditionsYhandler_info),handler_);
  T3 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handler_);
  T1 = CALL4(1,VARREF(YgooSconditionsYbuild_condition_for_handler_interactively),T2,T3,in_,out_);
  conditionF2327 = T1;
  T5 = CALL2(1,VARREF(YgooSconditionsYhandler_matchesQ),handler_,conditionF2327);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_275),handler_,conditionF2327);
  } else {
  }
  T8 = FUNSHELL(1,fun_search_124,3);
  searchF2328 = T8;
  FUNINIT(searchF2328, 3,handler_,conditionF2327,searchF2328);
  T9 = CALL1(0,searchF2328,DYNREF(YgooSconditionsYTcurrent_handlersT));
  T7 = T9;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYchoose_handler) {
  P type_,in_,out_;
  P tmpF2331;
  P nF2330;
  P handlersF2329;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),type_,out_);
  handlersF2329 = T1;
  CALL2(1,VARREF(YgooSconditionsYmsg),out_,LITREF(lit_280));
  T4 = CALL1(1,VARREF(YgooSconditionsYread),in_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  nF2330 = T3;
  T6 = CALL2(1,VARREF(YgooSmagYL),nF2330,YPint((P)0));
  tmpF2331 = T6;
  if (tmpF2331 != YPfalse) {
    T7 = tmpF2331;
  } else {
    T9 = CALL1(1,VARREF(YgooStypesYlen),handlersF2329);
    T8 = CALL2(1,VARREF(YgooSmagYGE),nF2330,T9);
    T7 = T8;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T10 = CALL2(1,VARREF(Yerror),LITREF(lit_281),nF2330);
  } else {
  }
  T12 = CALL2(1,VARREF(YgooSmacrosYelt),handlersF2329,nF2330);
  T11 = CALL3(1,VARREF(YgooSconditionsYinvoke_handler_interactively),T12,in_,out_);
  T2 = T11;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YgooSconditionsY___main_0___() {
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<condition>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooSconditionsYLconditionG,T0);
  lit_1 = YPPsym((P)"default-handler");
  lit_2 = YPPlist(1,YPPsym((P)"c"));
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YgooSconditionsYLconditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_handler_0 = YPmet(FUNCODEREF(fun_default_handler_0),LITREF(lit_1),T2,ENVNUL,PNUL,sloc(21));
  T5 = BOUNDP(YgooSconditionsYdefault_handler);
  if (T5 != YPfalse) {
    T4 = VARREF(YgooSconditionsYdefault_handler);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_default_handler_0;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YgooSconditionsYdefault_handler,T3);
  lit_3 = YPPsym((P)"describe-condition");
  lit_4 = YPPlist(1,YPPsym((P)"c"));
  lit_5 = YPsb((P)"Anonymous condition %=");
  T7 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YgooSconditionsYLconditionG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_1 = YPmet(FUNCODEREF(fun_describe_condition_1),LITREF(lit_3),T7,ENVNUL,PNUL,sloc(24));
  T10 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T10 != YPfalse) {
    T9 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_describe_condition_1;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YgooSconditionsYdescribe_condition,T8);
  lit_6 = YPPsym((P)"default-handler-description");
  lit_7 = YPPlist(1,YPPsym((P)"cond-type"));
  lit_8 = YPsb((P)"Anonymous handler for %s");
  T13 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T12 = YPsig(LITREF(lit_7),YPPlist(1,T13),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_2 = YPmet(FUNCODEREF(fun_default_handler_description_2),LITREF(lit_6),T12,ENVNUL,PNUL,sloc(27));
  T16 = BOUNDP(YgooSconditionsYdefault_handler_description);
  if (T16 != YPfalse) {
    T15 = VARREF(YgooSconditionsYdefault_handler_description);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_default_handler_description_2;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YgooSconditionsYdefault_handler_description,T14);
  lit_9 = YPPsym((P)"build-condition-interactively");
  lit_10 = YPPlist(3,YPPsym((P)"cond-type"),YPPsym((P)"in"),YPPsym((P)"out"));
  T19 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T18 = YPsig(LITREF(lit_10),YPPlist(3,T19,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YgooSconditionsYLconditionG),Ynil);
  fun_build_condition_interactively_3 = YPmet(FUNCODEREF(fun_build_condition_interactively_3),LITREF(lit_9),T18,ENVNUL,PNUL,sloc(30));
  T22 = BOUNDP(YgooSconditionsYbuild_condition_interactively);
  if (T22 != YPfalse) {
    T21 = VARREF(YgooSconditionsYbuild_condition_interactively);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_build_condition_interactively_3;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YgooSconditionsYbuild_condition_interactively,T20);
  lit_11 = YPPsym((P)"<simple-condition>");
  T25 = (P)YPpair(VARREF(YgooSconditionsYLconditionG),Ynil);
  T24 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_11),T25);
  VARSET(YgooSconditionsYLsimple_conditionG,T24);
  lit_12 = YPPsym((P)"condition-message");
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_condition_message_4 = YPmet(FUNCODEREF(fun_condition_message_4),LITREF(lit_12),T26,ENVNUL,PNUL,sloc(35));
  T29 = BOUNDP(YgooSconditionsYcondition_message);
  if (T29 != YPfalse) {
    T28 = VARREF(YgooSconditionsYcondition_message);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_condition_message_4;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YgooSconditionsYcondition_message,T27);
  lit_14 = YPPsym((P)"condition-message-setter");
  lit_15 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T31 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLstrG),VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_condition_message_setter_5 = YPmet(FUNCODEREF(fun_condition_message_setter_5),LITREF(lit_14),T31,ENVNUL,PNUL,sloc(35));
  T34 = BOUNDP(YgooSconditionsYcondition_message_setter);
  if (T34 != YPfalse) {
    T33 = VARREF(YgooSconditionsYcondition_message_setter);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_condition_message_setter_5;
  T32 = XCALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YgooSconditionsYcondition_message_setter,T32);
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  lit_17 = YPsb((P)"");
  T36 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T36,ENVNUL,PNUL,sloc(35));
  T37 = fun_6;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLsimple_conditionG),VARREF(YgooSconditionsYcondition_message),VARREF(YgooSconditionsYcondition_message_setter),VARREF(YLstrG),T37);
  lit_18 = YPPsym((P)"condition-arguments");
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T38 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_condition_arguments_7 = YPmet(FUNCODEREF(fun_condition_arguments_7),LITREF(lit_18),T38,ENVNUL,PNUL,sloc(36));
  T41 = BOUNDP(YgooSconditionsYcondition_arguments);
  if (T41 != YPfalse) {
    T40 = VARREF(YgooSconditionsYcondition_arguments);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_condition_arguments_7;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YgooSconditionsYcondition_arguments,T39);
  lit_20 = YPPsym((P)"condition-arguments-setter");
  lit_21 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T43 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLlstG),VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_condition_arguments_setter_8 = YPmet(FUNCODEREF(fun_condition_arguments_setter_8),LITREF(lit_20),T43,ENVNUL,PNUL,sloc(36));
  T46 = BOUNDP(YgooSconditionsYcondition_arguments_setter);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooSconditionsYcondition_arguments_setter);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_condition_arguments_setter_8;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooSconditionsYcondition_arguments_setter,T44);
  lit_22 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T48,ENVNUL,PNUL,sloc(36));
  T49 = fun_9;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLsimple_conditionG),VARREF(YgooSconditionsYcondition_arguments),VARREF(YgooSconditionsYcondition_arguments_setter),VARREF(YLlstG),T49);
  lit_23 = YPPlist(1,YPPsym((P)"c"));
  T50 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_10 = YPmet(FUNCODEREF(fun_describe_condition_10),LITREF(lit_3),T50,ENVNUL,PNUL,sloc(38));
  T53 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T53 != YPfalse) {
    T52 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_describe_condition_10;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YgooSconditionsYdescribe_condition,T51);
  lit_24 = YPPlist(3,YPPsym((P)"cond-type"),YPPsym((P)"in"),YPPsym((P)"out"));
  lit_25 = YPsb((P)"Condition format string: ");
  lit_26 = YPsb((P)"Condition format arguments: ");
  T56 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLsimple_conditionG));
  T55 = YPsig(LITREF(lit_24),YPPlist(3,T56,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YgooSconditionsYLconditionG),Ynil);
  fun_build_condition_interactively_11 = YPmet(FUNCODEREF(fun_build_condition_interactively_11),LITREF(lit_9),T55,ENVNUL,PNUL,sloc(41));
  T59 = BOUNDP(YgooSconditionsYbuild_condition_interactively);
  if (T59 != YPfalse) {
    T58 = VARREF(YgooSconditionsYbuild_condition_interactively);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_build_condition_interactively_11;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YgooSconditionsYbuild_condition_interactively,T57);
  lit_27 = YPPsym((P)"<serious-condition>");
  T62 = (P)YPpair(VARREF(YgooSconditionsYLconditionG),Ynil);
  T61 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_27),T62);
  VARSET(YgooSconditionsYLserious_conditionG,T61);
  lit_28 = YPPlist(1,YPPsym((P)"c"));
  lit_29 = YPsb((P)"%s\n");
  T63 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YgooSconditionsYLserious_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_handler_12 = YPmet(FUNCODEREF(fun_default_handler_12),LITREF(lit_1),T63,ENVNUL,PNUL,sloc(52));
  T66 = BOUNDP(YgooSconditionsYdefault_handler);
  if (T66 != YPfalse) {
    T65 = VARREF(YgooSconditionsYdefault_handler);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_default_handler_12;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YgooSconditionsYdefault_handler,T64);
  lit_30 = YPPsym((P)"<error>");
  T69 = (P)YPpair(VARREF(YgooSconditionsYLserious_conditionG),Ynil);
  T68 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_30),T69);
  VARSET(YgooSconditionsYLerrorG,T68);
  lit_31 = YPPsym((P)"<simple-error>");
  T72 = (P)YPpair(VARREF(YgooSconditionsYLsimple_conditionG),Ynil);
  T71 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),T72);
  T70 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_31),T71);
  VARSET(YgooSconditionsYLsimple_errorG,T70);
  lit_32 = YPPsym((P)"<restart>");
  T74 = (P)YPpair(VARREF(YgooSconditionsYLconditionG),Ynil);
  T73 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_32),T74);
  VARSET(YgooSconditionsYLrestartG,T73);
  lit_33 = YPPlist(1,YPPsym((P)"cond-type"));
  lit_34 = YPsb((P)"Anonymous restart of type %s");
  T76 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLrestartG));
  T75 = YPsig(LITREF(lit_33),YPPlist(1,T76),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_13 = YPmet(FUNCODEREF(fun_default_handler_description_13),LITREF(lit_6),T75,ENVNUL,PNUL,sloc(76));
  T79 = BOUNDP(YgooSconditionsYdefault_handler_description);
  if (T79 != YPfalse) {
    T78 = VARREF(YgooSconditionsYdefault_handler_description);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_default_handler_description_13;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YgooSconditionsYdefault_handler_description,T77);
  lit_35 = YPPsym((P)"<incongruent-method-error>");
  T82 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T81 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_35),T82);
  VARSET(YgooSconditionsYLincongruent_method_errorG,T81);
  lit_36 = YPPsym((P)"incongruent-method-error-generic");
  lit_37 = YPPlist(1,YPPsym((P)"_x"));
  T83 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_generic_14 = YPmet(FUNCODEREF(fun_incongruent_method_error_generic_14),LITREF(lit_36),T83,ENVNUL,PNUL,sloc(80));
  T86 = BOUNDP(YgooSconditionsYincongruent_method_error_generic);
  if (T86 != YPfalse) {
    T85 = VARREF(YgooSconditionsYincongruent_method_error_generic);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_incongruent_method_error_generic_14;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YgooSconditionsYincongruent_method_error_generic,T84);
  lit_38 = YPPsym((P)"incongruent-method-error-generic-setter");
  lit_39 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T88 = YPsig(LITREF(lit_39),YPPlist(2,VARREF(YLgenG),VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_generic_setter_15 = YPmet(FUNCODEREF(fun_incongruent_method_error_generic_setter_15),LITREF(lit_38),T88,ENVNUL,PNUL,sloc(80));
  T91 = BOUNDP(YgooSconditionsYincongruent_method_error_generic_setter);
  if (T91 != YPfalse) {
    T90 = VARREF(YgooSconditionsYincongruent_method_error_generic_setter);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_incongruent_method_error_generic_setter_15;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(YgooSconditionsYincongruent_method_error_generic_setter,T89);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLincongruent_method_errorG),VARREF(YgooSconditionsYincongruent_method_error_generic),VARREF(YgooSconditionsYincongruent_method_error_generic_setter),VARREF(YLgenG),VARREF(YPprop_unbound_error));
  lit_40 = YPPsym((P)"incongruent-method-error-method");
  lit_41 = YPPlist(1,YPPsym((P)"_x"));
  T93 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_method_16 = YPmet(FUNCODEREF(fun_incongruent_method_error_method_16),LITREF(lit_40),T93,ENVNUL,PNUL,sloc(81));
  T96 = BOUNDP(YgooSconditionsYincongruent_method_error_method);
  if (T96 != YPfalse) {
    T95 = VARREF(YgooSconditionsYincongruent_method_error_method);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_incongruent_method_error_method_16;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YgooSconditionsYincongruent_method_error_method,T94);
  lit_42 = YPPsym((P)"incongruent-method-error-method-setter");
  lit_43 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T98 = YPsig(LITREF(lit_43),YPPlist(2,VARREF(YLmetG),VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_method_setter_17 = YPmet(FUNCODEREF(fun_incongruent_method_error_method_setter_17),LITREF(lit_42),T98,ENVNUL,PNUL,sloc(81));
  T101 = BOUNDP(YgooSconditionsYincongruent_method_error_method_setter);
  if (T101 != YPfalse) {
    T100 = VARREF(YgooSconditionsYincongruent_method_error_method_setter);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_incongruent_method_error_method_setter_17;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YgooSconditionsYincongruent_method_error_method_setter,T99);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLincongruent_method_errorG),VARREF(YgooSconditionsYincongruent_method_error_method),VARREF(YgooSconditionsYincongruent_method_error_method_setter),VARREF(YLmetG),VARREF(YPprop_unbound_error));
  lit_44 = YPPlist(1,YPPsym((P)"c"));
  lit_45 = YPsb((P)"Method %= incongruent with generic %=.");
  T103 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_18 = YPmet(FUNCODEREF(fun_describe_condition_18),LITREF(lit_3),T103,ENVNUL,PNUL,sloc(83));
  T106 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T106 != YPfalse) {
    T105 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_describe_condition_18;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YgooSconditionsYdescribe_condition,T104);
  lit_46 = YPPsym((P)"<replace-generic-restart>");
  T109 = (P)YPpair(VARREF(YgooSconditionsYLrestartG),Ynil);
  T108 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_46),T109);
  VARSET(YLreplace_generic_restartG,T108);
  lit_47 = YPPlist(1,YPPsym((P)"cond-type"));
  lit_48 = YPsb((P)"Replace the generic function with an empty, congruent one");
  T111 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLreplace_generic_restartG));
  T110 = YPsig(LITREF(lit_47),YPPlist(1,T111),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_19 = YPmet(FUNCODEREF(fun_default_handler_description_19),LITREF(lit_6),T110,ENVNUL,PNUL,sloc(90));
  T114 = BOUNDP(YgooSconditionsYdefault_handler_description);
  if (T114 != YPfalse) {
    T113 = VARREF(YgooSconditionsYdefault_handler_description);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_default_handler_description_19;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YgooSconditionsYdefault_handler_description,T112);
  lit_49 = YPPsym((P)"<handler-info>");
  T117 = (P)YPpair(VARREF(YLanyG),Ynil);
  T116 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_49),T117);
  VARSET(YgooSconditionsYLhandler_infoG,T116);
  lit_50 = YPPsym((P)"describe-handler");
  lit_51 = YPPlist(2,YPPsym((P)"info"),YPPsym((P)"condition-type"));
  T118 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_describe_handler_20 = YPmet(FUNCODEREF(fun_describe_handler_20),LITREF(lit_50),T118,ENVNUL,PNUL,sloc(107));
  T121 = BOUNDP(YgooSconditionsYdescribe_handler);
  if (T121 != YPfalse) {
    T120 = VARREF(YgooSconditionsYdescribe_handler);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_describe_handler_20;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YgooSconditionsYdescribe_handler,T119);
  lit_52 = YPPsym((P)"build-condition-for-handler-interactively");
  lit_53 = YPPlist(4,YPPsym((P)"info"),YPPsym((P)"condition-type"),YPPsym((P)"in"),YPPsym((P)"out"));
  T123 = YPsig(LITREF(lit_53),YPPlist(4,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YgooSconditionsYLconditionG),Ynil);
  fun_build_condition_for_handler_interactively_21 = YPmet(FUNCODEREF(fun_build_condition_for_handler_interactively_21),LITREF(lit_52),T123,ENVNUL,PNUL,sloc(110));
  T126 = BOUNDP(YgooSconditionsYbuild_condition_for_handler_interactively);
  if (T126 != YPfalse) {
    T125 = VARREF(YgooSconditionsYbuild_condition_for_handler_interactively);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_build_condition_for_handler_interactively_21;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YgooSconditionsYbuild_condition_for_handler_interactively,T124);
  T128 = XCALL1(1,VARREF(Ynew),VARREF(YgooSconditionsYLhandler_infoG));
  VARSET(YgooSconditionsYDdefault_handler_info,T128);
  lit_54 = YPPsym((P)"<simple-handler-info>");
  T130 = (P)YPpair(VARREF(YgooSconditionsYLhandler_infoG),Ynil);
  T129 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_54),T130);
  VARSET(YLsimple_handler_infoG,T129);
  lit_55 = YPPsym((P)"handler-info-message");
  lit_56 = YPPlist(1,YPPsym((P)"_x"));
  T131 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_message_22 = YPmet(FUNCODEREF(fun_handler_info_message_22),LITREF(lit_55),T131,ENVNUL,PNUL,sloc(117));
  T134 = BOUNDP(Yhandler_info_message);
  if (T134 != YPfalse) {
    T133 = VARREF(Yhandler_info_message);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_handler_info_message_22;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(Yhandler_info_message,T132);
  lit_57 = YPPsym((P)"handler-info-message-setter");
  lit_58 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T136 = YPsig(LITREF(lit_58),YPPlist(2,VARREF(YLstrG),VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_info_message_setter_23 = YPmet(FUNCODEREF(fun_handler_info_message_setter_23),LITREF(lit_57),T136,ENVNUL,PNUL,sloc(117));
  T139 = BOUNDP(YgooSconditionsYhandler_info_message_setter);
  if (T139 != YPfalse) {
    T138 = VARREF(YgooSconditionsYhandler_info_message_setter);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_handler_info_message_setter_23;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YgooSconditionsYhandler_info_message_setter,T137);
  XCALL5(1,VARREF(YPprop),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),VARREF(YgooSconditionsYhandler_info_message_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_59 = YPPsym((P)"handler-info-arguments");
  lit_60 = YPPlist(1,YPPsym((P)"_x"));
  T141 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_arguments_24 = YPmet(FUNCODEREF(fun_handler_info_arguments_24),LITREF(lit_59),T141,ENVNUL,PNUL,sloc(118));
  T144 = BOUNDP(Yhandler_info_arguments);
  if (T144 != YPfalse) {
    T143 = VARREF(Yhandler_info_arguments);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_handler_info_arguments_24;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(Yhandler_info_arguments,T142);
  lit_61 = YPPsym((P)"handler-info-arguments-setter");
  lit_62 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T146 = YPsig(LITREF(lit_62),YPPlist(2,VARREF(YLlstG),VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_info_arguments_setter_25 = YPmet(FUNCODEREF(fun_handler_info_arguments_setter_25),LITREF(lit_61),T146,ENVNUL,PNUL,sloc(118));
  T149 = BOUNDP(YgooSconditionsYhandler_info_arguments_setter);
  if (T149 != YPfalse) {
    T148 = VARREF(YgooSconditionsYhandler_info_arguments_setter);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_handler_info_arguments_setter_25;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YgooSconditionsYhandler_info_arguments_setter,T147);
  lit_63 = YPPlist(1,YPPsym((P)"_x"));
  T151 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T151,ENVNUL,PNUL,sloc(118));
  T152 = fun_26;
  XCALL5(1,VARREF(YPprop),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_arguments),VARREF(YgooSconditionsYhandler_info_arguments_setter),VARREF(YLlstG),T152);
  lit_64 = YPPlist(2,YPPsym((P)"info"),YPPsym((P)"condition-type"));
  T153 = YPsig(LITREF(lit_64),YPPlist(2,VARREF(YLsimple_handler_infoG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_describe_handler_27 = YPmet(FUNCODEREF(fun_describe_handler_27),LITREF(lit_50),T153,ENVNUL,PNUL,sloc(120));
  T156 = BOUNDP(YgooSconditionsYdescribe_handler);
  if (T156 != YPfalse) {
    T155 = VARREF(YgooSconditionsYdescribe_handler);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_describe_handler_27;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YgooSconditionsYdescribe_handler,T154);
  DYNDEFSET(YgooSconditionsYTcurrent_handlersT,Ynil);
  lit_65 = YPPsym((P)"<handler>");
  T159 = (P)YPpair(VARREF(YLanyG),Ynil);
  T158 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_65),T159);
  VARSET(YgooSconditionsYLhandlerG,T158);
  lit_66 = YPPsym((P)"handler-condition-type");
  lit_67 = YPPlist(1,YPPsym((P)"_x"));
  T160 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_condition_type_28 = YPmet(FUNCODEREF(fun_handler_condition_type_28),LITREF(lit_66),T160,ENVNUL,PNUL,sloc(138));
  T163 = BOUNDP(YgooSconditionsYhandler_condition_type);
  if (T163 != YPfalse) {
    T162 = VARREF(YgooSconditionsYhandler_condition_type);
  } else {
    T162 = YPfalse;
  }
  T164 = fun_handler_condition_type_28;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T164);
  VARSET(YgooSconditionsYhandler_condition_type,T161);
  lit_68 = YPPsym((P)"handler-condition-type-setter");
  lit_69 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T168 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T167 = YPsig(LITREF(lit_69),YPPlist(2,T168,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T166 = fun_handler_condition_type_setter_29 = YPmet(FUNCODEREF(fun_handler_condition_type_setter_29),LITREF(lit_68),T167,ENVNUL,PNUL,sloc(138));
  T172 = BOUNDP(YgooSconditionsYhandler_condition_type_setter);
  if (T172 != YPfalse) {
    T171 = VARREF(YgooSconditionsYhandler_condition_type_setter);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_handler_condition_type_setter_29;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T173);
  T169 = VARSET(YgooSconditionsYhandler_condition_type_setter,T170);
  T165 = T169;
  return T165;
}

P YgooSconditionsY___main_1___() {
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
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206;
DEFCREGS();
loop:
  T0 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_condition_type),VARREF(YgooSconditionsYhandler_condition_type_setter),T0,VARREF(YPprop_unbound_error));
  lit_70 = YPPsym((P)"handler-info");
  lit_71 = YPPlist(1,YPPsym((P)"_x"));
  T1 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_30 = YPmet(FUNCODEREF(fun_handler_info_30),LITREF(lit_70),T1,ENVNUL,PNUL,sloc(139));
  T4 = BOUNDP(YgooSconditionsYhandler_info);
  if (T4 != YPfalse) {
    T3 = VARREF(YgooSconditionsYhandler_info);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_handler_info_30;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YgooSconditionsYhandler_info,T2);
  lit_72 = YPPsym((P)"handler-info-setter");
  lit_73 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_73),YPPlist(2,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_info_setter_31 = YPmet(FUNCODEREF(fun_handler_info_setter_31),LITREF(lit_72),T6,ENVNUL,PNUL,sloc(139));
  T9 = BOUNDP(YgooSconditionsYhandler_info_setter);
  if (T9 != YPfalse) {
    T8 = VARREF(YgooSconditionsYhandler_info_setter);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_handler_info_setter_31;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(YgooSconditionsYhandler_info_setter,T7);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_info),VARREF(YgooSconditionsYhandler_info_setter),VARREF(YgooSconditionsYLhandler_infoG),VARREF(YPprop_unbound_error));
  lit_74 = YPPsym((P)"handler-test");
  lit_75 = YPPlist(1,YPPsym((P)"_x"));
  T11 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_test_32 = YPmet(FUNCODEREF(fun_handler_test_32),LITREF(lit_74),T11,ENVNUL,PNUL,sloc(140));
  T14 = BOUNDP(YgooSconditionsYhandler_test);
  if (T14 != YPfalse) {
    T13 = VARREF(YgooSconditionsYhandler_test);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_handler_test_32;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YgooSconditionsYhandler_test,T12);
  lit_76 = YPPsym((P)"handler-test-setter");
  lit_77 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_77),YPPlist(2,VARREF(YLfunG),VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_test_setter_33 = YPmet(FUNCODEREF(fun_handler_test_setter_33),LITREF(lit_76),T16,ENVNUL,PNUL,sloc(140));
  T19 = BOUNDP(YgooSconditionsYhandler_test_setter);
  if (T19 != YPfalse) {
    T18 = VARREF(YgooSconditionsYhandler_test_setter);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_handler_test_setter_33;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YgooSconditionsYhandler_test_setter,T17);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_test),VARREF(YgooSconditionsYhandler_test_setter),VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_78 = YPPsym((P)"handler-function");
  lit_79 = YPPlist(1,YPPsym((P)"_x"));
  T21 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_function_34 = YPmet(FUNCODEREF(fun_handler_function_34),LITREF(lit_78),T21,ENVNUL,PNUL,sloc(141));
  T24 = BOUNDP(YgooSconditionsYhandler_function);
  if (T24 != YPfalse) {
    T23 = VARREF(YgooSconditionsYhandler_function);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_handler_function_34;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YgooSconditionsYhandler_function,T22);
  lit_80 = YPPsym((P)"handler-function-setter");
  lit_81 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_81),YPPlist(2,VARREF(YLfunG),VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_function_setter_35 = YPmet(FUNCODEREF(fun_handler_function_setter_35),LITREF(lit_80),T26,ENVNUL,PNUL,sloc(141));
  T29 = BOUNDP(YgooSconditionsYhandler_function_setter);
  if (T29 != YPfalse) {
    T28 = VARREF(YgooSconditionsYhandler_function_setter);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_handler_function_setter_35;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YgooSconditionsYhandler_function_setter,T27);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_function),VARREF(YgooSconditionsYhandler_function_setter),VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_82 = YPPsym((P)"fab-handler");
  lit_83 = YPPlist(4,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test"),YPPsym((P)"f"));
  T32 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T31 = YPsig(LITREF(lit_83),YPPlist(4,T32,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YgooSconditionsYLhandlerG),Ynil);
  YgooSconditionsYfab_handler = YPmet(FUNCODEREF(YgooSconditionsYfab_handler),LITREF(lit_82),T31,ENVNUL,PNUL,sloc(143));
  T33 = YgooSconditionsYfab_handler;
  VARSET(YgooSconditionsYfab_handler,T33);
  lit_84 = YPPsym((P)"handler-active?");
  lit_85 = YPPlist(1,YPPsym((P)"handler"));
  T34 = YPsig(LITREF(lit_85),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSconditionsYhandler_activeQ = YPmet(FUNCODEREF(YgooSconditionsYhandler_activeQ),LITREF(lit_84),T34,ENVNUL,PNUL,sloc(151));
  T35 = YgooSconditionsYhandler_activeQ;
  VARSET(YgooSconditionsYhandler_activeQ,T35);
  lit_86 = YPPsym((P)"handler-matches?");
  lit_87 = YPPlist(2,YPPsym((P)"handler"),YPPsym((P)"condition"));
  T36 = YPsig(LITREF(lit_87),YPPlist(2,VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYLconditionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSconditionsYhandler_matchesQ = YPmet(FUNCODEREF(YgooSconditionsYhandler_matchesQ),LITREF(lit_86),T36,ENVNUL,PNUL,sloc(154));
  T37 = YgooSconditionsYhandler_matchesQ;
  VARSET(YgooSconditionsYhandler_matchesQ,T37);
  lit_88 = YPPsym((P)"%with-monitor");
  lit_89 = YPPlist(5,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test-fun"),YPPsym((P)"user-handler"),YPPsym((P)"main-fun"));
  lit_90 = YPPsym((P)"_handler-function_");
  lit_91 = YPPlist(2,YPPsym((P)"condition"),YPPsym((P)"_next-handler_"));
  lit_92 = YPPlist(1,YPPsym((P)"_resume_"));
  lit_93 = Ynil;
  T43 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T43,ENVNUL,PNUL,sloc(163));
  T42 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Uhandler_functionU_40 = YPmet(FUNCODEREF(fun_Uhandler_functionU_40),LITREF(lit_90),T42,ENVNUL,PNUL,sloc(162));
  T41 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T41,ENVNUL,PNUL,sloc(168));
  T40 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T40,ENVNUL,PNUL,sloc(168));
  T39 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T38 = YPsig(LITREF(lit_89),YPPlist(5,T39,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YPwith_monitor = YPmet(FUNCODEREF(YPwith_monitor),LITREF(lit_88),T38,ENVNUL,PNUL,sloc(158));
  T44 = YPwith_monitor;
  VARSET(YPwith_monitor,T44);
  lit_94 = YPPsym((P)"signal-handler-list");
  lit_95 = YPPlist(2,YPPsym((P)"condition"),YPPsym((P)"handlers"));
  T46 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T46,ENVNUL,PNUL,sloc(178));
  T45 = YPsig(LITREF(lit_95),YPPlist(2,VARREF(YgooSconditionsYLconditionG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSconditionsYsignal_handler_list = YPmet(FUNCODEREF(YgooSconditionsYsignal_handler_list),LITREF(lit_94),T45,ENVNUL,PNUL,sloc(171));
  T47 = YgooSconditionsYsignal_handler_list;
  VARSET(YgooSconditionsYsignal_handler_list,T47);
  lit_96 = YPPsym((P)"sig");
  lit_97 = YPPlist(2,YPPsym((P)"condition"),YPPsym((P)"args"));
  T48 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YgooSconditionsYLconditionG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sig_46 = YPmet(FUNCODEREF(fun_sig_46),LITREF(lit_96),T48,ENVNUL,PNUL,sloc(181));
  T51 = BOUNDP(YgooSconditionsYsig);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooSconditionsYsig);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_sig_46;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooSconditionsYsig,T49);
  lit_98 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  T53 = YPsig(LITREF(lit_98),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sig_47 = YPmet(FUNCODEREF(fun_sig_47),LITREF(lit_96),T53,ENVNUL,PNUL,sloc(184));
  T56 = BOUNDP(YgooSconditionsYsig);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooSconditionsYsig);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_sig_47;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooSconditionsYsig,T54);
  lit_99 = YPPsym((P)"error");
  lit_100 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  T58 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YgooSconditionsYLerrorG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_error_48 = YPmet(FUNCODEREF(fun_error_48),LITREF(lit_99),T58,ENVNUL,PNUL,sloc(191));
  T61 = BOUNDP(Yerror);
  if (T61 != YPfalse) {
    T60 = VARREF(Yerror);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_error_48;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(Yerror,T59);
  lit_101 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  T63 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_error_49 = YPmet(FUNCODEREF(fun_error_49),LITREF(lit_99),T63,ENVNUL,PNUL,sloc(194));
  T66 = BOUNDP(Yerror);
  if (T66 != YPfalse) {
    T65 = VARREF(Yerror);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_error_49;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(Yerror,T64);
  lit_102 = YPPsym((P)"incongruent-method-error");
  lit_103 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T68 = YPsig(LITREF(lit_103),YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yincongruent_method_error = YPmet(FUNCODEREF(Yincongruent_method_error),LITREF(lit_102),T68,ENVNUL,PNUL,sloc(198));
  T69 = Yincongruent_method_error;
  VARSET(Yincongruent_method_error,T69);
  lit_104 = YPPsym((P)"<call-error>");
  T71 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T70 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_104),T71);
  VARSET(YgooSconditionsYLcall_errorG,T70);
  lit_105 = YPPsym((P)"call-error-function");
  lit_106 = YPPlist(1,YPPsym((P)"_x"));
  T72 = YPsig(LITREF(lit_106),YPPlist(1,VARREF(YgooSconditionsYLcall_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_call_error_function_51 = YPmet(FUNCODEREF(fun_call_error_function_51),LITREF(lit_105),T72,ENVNUL,PNUL,sloc(204));
  T75 = BOUNDP(YgooSconditionsYcall_error_function);
  if (T75 != YPfalse) {
    T74 = VARREF(YgooSconditionsYcall_error_function);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_call_error_function_51;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YgooSconditionsYcall_error_function,T73);
  lit_107 = YPPsym((P)"call-error-function-setter");
  lit_108 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T77 = YPsig(LITREF(lit_108),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLcall_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_call_error_function_setter_52 = YPmet(FUNCODEREF(fun_call_error_function_setter_52),LITREF(lit_107),T77,ENVNUL,PNUL,sloc(204));
  T80 = BOUNDP(YgooSconditionsYcall_error_function_setter);
  if (T80 != YPfalse) {
    T79 = VARREF(YgooSconditionsYcall_error_function_setter);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_call_error_function_setter_52;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YgooSconditionsYcall_error_function_setter,T78);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLcall_errorG),VARREF(YgooSconditionsYcall_error_function),VARREF(YgooSconditionsYcall_error_function_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_109 = YPPsym((P)"call-error-arguments");
  lit_110 = YPPlist(1,YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_110),YPPlist(1,VARREF(YgooSconditionsYLcall_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_call_error_arguments_53 = YPmet(FUNCODEREF(fun_call_error_arguments_53),LITREF(lit_109),T82,ENVNUL,PNUL,sloc(205));
  T85 = BOUNDP(YgooSconditionsYcall_error_arguments);
  if (T85 != YPfalse) {
    T84 = VARREF(YgooSconditionsYcall_error_arguments);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_call_error_arguments_53;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YgooSconditionsYcall_error_arguments,T83);
  lit_111 = YPPsym((P)"call-error-arguments-setter");
  lit_112 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T87 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YLlstG),VARREF(YgooSconditionsYLcall_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_call_error_arguments_setter_54 = YPmet(FUNCODEREF(fun_call_error_arguments_setter_54),LITREF(lit_111),T87,ENVNUL,PNUL,sloc(205));
  T90 = BOUNDP(YgooSconditionsYcall_error_arguments_setter);
  if (T90 != YPfalse) {
    T89 = VARREF(YgooSconditionsYcall_error_arguments_setter);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_call_error_arguments_setter_54;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YgooSconditionsYcall_error_arguments_setter,T88);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLcall_errorG),VARREF(YgooSconditionsYcall_error_arguments),VARREF(YgooSconditionsYcall_error_arguments_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_113 = YPPsym((P)"<arity-error>");
  T93 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T92 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_113),T93);
  VARSET(YgooSconditionsYLarity_errorG,T92);
  lit_114 = YPPlist(1,YPPsym((P)"c"));
  lit_115 = YPsb((P)"Function %= called with wrong number arguments %=.");
  T94 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YgooSconditionsYLarity_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_55 = YPmet(FUNCODEREF(fun_describe_condition_55),LITREF(lit_3),T94,ENVNUL,PNUL,sloc(209));
  T97 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T97 != YPfalse) {
    T96 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_describe_condition_55;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YgooSconditionsYdescribe_condition,T95);
  lit_116 = YPPsym((P)"arity-error");
  lit_117 = YPPlist(2,YPPsym((P)"fun"),YPPsym((P)"args"));
  T99 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yarity_error = YPmet(FUNCODEREF(Yarity_error),LITREF(lit_116),T99,ENVNUL,PNUL,sloc(213));
  T100 = Yarity_error;
  VARSET(Yarity_error,T100);
  lit_118 = YPPsym((P)"<narity-error>");
  T102 = (P)YPpair(VARREF(YgooSconditionsYLarity_errorG),Ynil);
  T101 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_118),T102);
  VARSET(YgooSconditionsYLnarity_errorG,T101);
  lit_119 = YPPsym((P)"narity-error");
  lit_120 = YPPlist(2,YPPsym((P)"fun"),YPPsym((P)"args"));
  T103 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ynarity_error = YPmet(FUNCODEREF(Ynarity_error),LITREF(lit_119),T103,ENVNUL,PNUL,sloc(219));
  T104 = Ynarity_error;
  VARSET(Ynarity_error,T104);
  lit_121 = YPPlist(1,YPPsym((P)"c"));
  lit_122 = YPsb((P)"Nary function %= called with too few arguments %=.");
  T105 = YPsig(LITREF(lit_121),YPPlist(1,VARREF(YgooSconditionsYLnarity_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_58 = YPmet(FUNCODEREF(fun_describe_condition_58),LITREF(lit_3),T105,ENVNUL,PNUL,sloc(223));
  T108 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T108 != YPfalse) {
    T107 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_describe_condition_58;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YgooSconditionsYdescribe_condition,T106);
  lit_123 = YPPsym((P)"<type-error>");
  T111 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T110 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_123),T111);
  VARSET(YgooSconditionsYLtype_errorG,T110);
  lit_124 = YPPsym((P)"type-error-value");
  lit_125 = YPPlist(1,YPPsym((P)"_x"));
  T112 = YPsig(LITREF(lit_125),YPPlist(1,VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_type_error_value_59 = YPmet(FUNCODEREF(fun_type_error_value_59),LITREF(lit_124),T112,ENVNUL,PNUL,sloc(228));
  T115 = BOUNDP(YgooSconditionsYtype_error_value);
  if (T115 != YPfalse) {
    T114 = VARREF(YgooSconditionsYtype_error_value);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_type_error_value_59;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(YgooSconditionsYtype_error_value,T113);
  lit_126 = YPPsym((P)"type-error-value-setter");
  lit_127 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T117 = YPsig(LITREF(lit_127),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_type_error_value_setter_60 = YPmet(FUNCODEREF(fun_type_error_value_setter_60),LITREF(lit_126),T117,ENVNUL,PNUL,sloc(228));
  T120 = BOUNDP(YgooSconditionsYtype_error_value_setter);
  if (T120 != YPfalse) {
    T119 = VARREF(YgooSconditionsYtype_error_value_setter);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_type_error_value_setter_60;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YgooSconditionsYtype_error_value_setter,T118);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLtype_errorG),VARREF(YgooSconditionsYtype_error_value),VARREF(YgooSconditionsYtype_error_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_128 = YPPsym((P)"type-error-type");
  lit_129 = YPPlist(1,YPPsym((P)"_x"));
  T122 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_type_error_type_61 = YPmet(FUNCODEREF(fun_type_error_type_61),LITREF(lit_128),T122,ENVNUL,PNUL,sloc(229));
  T125 = BOUNDP(YgooSconditionsYtype_error_type);
  if (T125 != YPfalse) {
    T124 = VARREF(YgooSconditionsYtype_error_type);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_type_error_type_61;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YgooSconditionsYtype_error_type,T123);
  lit_130 = YPPsym((P)"type-error-type-setter");
  lit_131 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T127 = YPsig(LITREF(lit_131),YPPlist(2,VARREF(YLtypeG),VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_type_error_type_setter_62 = YPmet(FUNCODEREF(fun_type_error_type_setter_62),LITREF(lit_130),T127,ENVNUL,PNUL,sloc(229));
  T130 = BOUNDP(YgooSconditionsYtype_error_type_setter);
  if (T130 != YPfalse) {
    T129 = VARREF(YgooSconditionsYtype_error_type_setter);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_type_error_type_setter_62;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YgooSconditionsYtype_error_type_setter,T128);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLtype_errorG),VARREF(YgooSconditionsYtype_error_type),VARREF(YgooSconditionsYtype_error_type_setter),VARREF(YLtypeG),VARREF(YPprop_unbound_error));
  lit_132 = YPPsym((P)"type-error");
  lit_133 = YPPlist(2,YPPsym((P)"arg"),YPPsym((P)"type"));
  T132 = YPsig(LITREF(lit_133),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ytype_error = YPmet(FUNCODEREF(Ytype_error),LITREF(lit_132),T132,ENVNUL,PNUL,sloc(231));
  T133 = Ytype_error;
  VARSET(Ytype_error,T133);
  lit_134 = YPPlist(1,YPPsym((P)"c"));
  lit_135 = YPsb((P)"Type check failure on %= expected %t.");
  T134 = YPsig(LITREF(lit_134),YPPlist(1,VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_64 = YPmet(FUNCODEREF(fun_describe_condition_64),LITREF(lit_3),T134,ENVNUL,PNUL,sloc(234));
  T137 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T137 != YPfalse) {
    T136 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_describe_condition_64;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YgooSconditionsYdescribe_condition,T135);
  lit_136 = YPPsym((P)"<unknown-function-error>");
  T141 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T140 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),T141);
  T139 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_136),T140);
  VARSET(YgooSconditionsYLunknown_function_errorG,T139);
  lit_137 = YPPsym((P)"unknown-function-error");
  lit_138 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"args"));
  T142 = YPsig(LITREF(lit_138),YPPlist(2,VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yunknown_function_error = YPmet(FUNCODEREF(Yunknown_function_error),LITREF(lit_137),T142,ENVNUL,PNUL,sloc(240));
  T143 = Yunknown_function_error;
  VARSET(Yunknown_function_error,T143);
  lit_139 = YPPlist(1,YPPsym((P)"c"));
  lit_140 = YPsb((P)"Unknown function %= called on %=.");
  T144 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YgooSconditionsYLunknown_function_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_66 = YPmet(FUNCODEREF(fun_describe_condition_66),LITREF(lit_3),T144,ENVNUL,PNUL,sloc(245));
  T147 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T147 != YPfalse) {
    T146 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_describe_condition_66;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YgooSconditionsYdescribe_condition,T145);
  lit_141 = YPPsym((P)"<argument-type-error>");
  T151 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T150 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),T151);
  T149 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_141),T150);
  VARSET(YgooSconditionsYLargument_type_errorG,T149);
  lit_142 = YPPsym((P)"argument-type-error");
  lit_143 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"val"),YPPsym((P)"type"),YPPsym((P)"args"));
  T152 = YPsig(LITREF(lit_143),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  Yargument_type_error = YPmet(FUNCODEREF(Yargument_type_error),LITREF(lit_142),T152,ENVNUL,PNUL,sloc(251));
  T153 = Yargument_type_error;
  VARSET(Yargument_type_error,T153);
  lit_144 = YPPlist(1,YPPsym((P)"c"));
  lit_145 = YPsb((P)"During call of %= on %= ");
  T154 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YgooSconditionsYLargument_type_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_68 = YPmet(FUNCODEREF(fun_describe_condition_68),LITREF(lit_3),T154,ENVNUL,PNUL,sloc(256));
  T157 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T157 != YPfalse) {
    T156 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_describe_condition_68;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YgooSconditionsYdescribe_condition,T155);
  lit_146 = YPPsym((P)"<return-type-error>");
  T161 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T160 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),T161);
  T159 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_146),T160);
  VARSET(YgooSconditionsYLreturn_type_errorG,T159);
  lit_147 = YPPsym((P)"return-type-error");
  lit_148 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"val"),YPPsym((P)"type"),YPPsym((P)"args"));
  T162 = YPsig(LITREF(lit_148),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  Yreturn_type_error = YPmet(FUNCODEREF(Yreturn_type_error),LITREF(lit_147),T162,ENVNUL,PNUL,sloc(263));
  T163 = Yreturn_type_error;
  VARSET(Yreturn_type_error,T163);
  lit_149 = YPPlist(1,YPPsym((P)"c"));
  lit_150 = YPsb((P)"During return of call of %= on %= ");
  T164 = YPsig(LITREF(lit_149),YPPlist(1,VARREF(YgooSconditionsYLreturn_type_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_70 = YPmet(FUNCODEREF(fun_describe_condition_70),LITREF(lit_3),T164,ENVNUL,PNUL,sloc(268));
  T167 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T167 != YPfalse) {
    T166 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_describe_condition_70;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YgooSconditionsYdescribe_condition,T165);
  lit_151 = YPPsym((P)"<ambiguous-method-error>");
  T170 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T169 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_151),T170);
  VARSET(YgooSconditionsYLambiguous_method_errorG,T169);
  lit_152 = YPPsym((P)"ambiguous-method-error");
  lit_153 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T171 = YPsig(LITREF(lit_153),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yambiguous_method_error = YPmet(FUNCODEREF(Yambiguous_method_error),LITREF(lit_152),T171,ENVNUL,PNUL,sloc(275));
  T172 = Yambiguous_method_error;
  VARSET(Yambiguous_method_error,T172);
  lit_154 = YPPlist(1,YPPsym((P)"c"));
  lit_155 = YPsb((P)"Ambiguous methods on %= when called with %=.");
  T173 = YPsig(LITREF(lit_154),YPPlist(1,VARREF(YgooSconditionsYLambiguous_method_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_72 = YPmet(FUNCODEREF(fun_describe_condition_72),LITREF(lit_3),T173,ENVNUL,PNUL,sloc(279));
  T176 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T176 != YPfalse) {
    T175 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_describe_condition_72;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(YgooSconditionsYdescribe_condition,T174);
  lit_156 = YPPsym((P)"<no-applicable-methods-error>");
  T179 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T178 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_156),T179);
  VARSET(YgooSconditionsYLno_applicable_methods_errorG,T178);
  lit_157 = YPPsym((P)"no-applicable-methods-error");
  lit_158 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T180 = YPsig(LITREF(lit_158),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yno_applicable_methods_error = YPmet(FUNCODEREF(Yno_applicable_methods_error),LITREF(lit_157),T180,ENVNUL,PNUL,sloc(285));
  T181 = Yno_applicable_methods_error;
  VARSET(Yno_applicable_methods_error,T181);
  lit_159 = YPPlist(1,YPPsym((P)"c"));
  lit_160 = YPsb((P)"No applicable methods on %= when called with %=.");
  T182 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YgooSconditionsYLno_applicable_methods_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_74 = YPmet(FUNCODEREF(fun_describe_condition_74),LITREF(lit_3),T182,ENVNUL,PNUL,sloc(290));
  T185 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T185 != YPfalse) {
    T184 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_describe_condition_74;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YgooSconditionsYdescribe_condition,T183);
  lit_161 = YPPsym((P)"<no-next-methods-error>");
  T188 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T187 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_161),T188);
  VARSET(YgooSconditionsYLno_next_methods_errorG,T187);
  lit_162 = YPPsym((P)"no-next-methods-error");
  lit_163 = YPPlist(2,YPPsym((P)"met"),YPPsym((P)"args"));
  T189 = YPsig(LITREF(lit_163),YPPlist(2,VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yno_next_methods_error = YPmet(FUNCODEREF(Yno_next_methods_error),LITREF(lit_162),T189,ENVNUL,PNUL,sloc(296));
  T190 = Yno_next_methods_error;
  VARSET(Yno_next_methods_error,T190);
  lit_164 = YPPlist(1,YPPsym((P)"c"));
  lit_165 = YPsb((P)"No next-methods on %= when called with %=.");
  T191 = YPsig(LITREF(lit_164),YPPlist(1,VARREF(YgooSconditionsYLno_next_methods_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_76 = YPmet(FUNCODEREF(fun_describe_condition_76),LITREF(lit_3),T191,ENVNUL,PNUL,sloc(300));
  T194 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T194 != YPfalse) {
    T193 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_describe_condition_76;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YgooSconditionsYdescribe_condition,T192);
  lit_166 = YPPsym((P)"<cpl-error>");
  T197 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T196 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_166),T197);
  VARSET(YgooSconditionsYLcpl_errorG,T196);
  lit_167 = YPPsym((P)"cpl-error");
  lit_168 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T198 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Ycpl_error = YPmet(FUNCODEREF(Ycpl_error),LITREF(lit_167),T198,ENVNUL,PNUL,sloc(306));
  T199 = Ycpl_error;
  VARSET(Ycpl_error,T199);
  lit_169 = YPPsym((P)"<compiler-error>");
  T201 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T200 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_169),T201);
  VARSET(YgooSconditionsYLcompiler_errorG,T200);
  lit_170 = YPPsym((P)"<syntax-error>");
  T206 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T205 = (P)YPpair(VARREF(YgooSconditionsYLcompiler_errorG),T206);
  T204 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_170),T205);
  T203 = VARSET(YgooSconditionsYLsyntax_errorG,T204);
  T202 = T203;
  return T202;
}

P YgooSconditionsY___main_2___() {
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
  P T192,T193,T194,T195,T196,T197,T198,T199,T200;
DEFCREGS();
loop:
  lit_171 = YPPsym((P)"syntax-error");
  lit_172 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T0 = YPsig(LITREF(lit_172),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Ysyntax_error = YPmet(FUNCODEREF(Ysyntax_error),LITREF(lit_171),T0,ENVNUL,PNUL,sloc(313));
  T1 = Ysyntax_error;
  VARSET(Ysyntax_error,T1);
  lit_173 = YPPsym((P)"<macro-error>");
  T3 = (P)YPpair(VARREF(YgooSconditionsYLsyntax_errorG),Ynil);
  T2 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_173),T3);
  VARSET(YgooSconditionsYLmacro_errorG,T2);
  lit_174 = YPPsym((P)"macro-error-name");
  lit_175 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_175),YPPlist(1,VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_macro_error_name_79 = YPmet(FUNCODEREF(fun_macro_error_name_79),LITREF(lit_174),T4,ENVNUL,PNUL,sloc(318));
  T7 = BOUNDP(YgooSconditionsYmacro_error_name);
  if (T7 != YPfalse) {
    T6 = VARREF(YgooSconditionsYmacro_error_name);
  } else {
    T6 = YPfalse;
  }
  T8 = fun_macro_error_name_79;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T8);
  VARSET(YgooSconditionsYmacro_error_name,T5);
  lit_176 = YPPsym((P)"macro-error-name-setter");
  lit_177 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T9 = YPsig(LITREF(lit_177),YPPlist(2,VARREF(YLsymG),VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_macro_error_name_setter_80 = YPmet(FUNCODEREF(fun_macro_error_name_setter_80),LITREF(lit_176),T9,ENVNUL,PNUL,sloc(318));
  T12 = BOUNDP(YgooSconditionsYmacro_error_name_setter);
  if (T12 != YPfalse) {
    T11 = VARREF(YgooSconditionsYmacro_error_name_setter);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_macro_error_name_setter_80;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YgooSconditionsYmacro_error_name_setter,T10);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLmacro_errorG),VARREF(YgooSconditionsYmacro_error_name),VARREF(YgooSconditionsYmacro_error_name_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_178 = YPPsym((P)"macro-error-arguments");
  lit_179 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_179),YPPlist(1,VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_macro_error_arguments_81 = YPmet(FUNCODEREF(fun_macro_error_arguments_81),LITREF(lit_178),T14,ENVNUL,PNUL,sloc(319));
  T17 = BOUNDP(YgooSconditionsYmacro_error_arguments);
  if (T17 != YPfalse) {
    T16 = VARREF(YgooSconditionsYmacro_error_arguments);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_macro_error_arguments_81;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YgooSconditionsYmacro_error_arguments,T15);
  lit_180 = YPPsym((P)"macro-error-arguments-setter");
  lit_181 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T19 = YPsig(LITREF(lit_181),YPPlist(2,VARREF(YLlstG),VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_macro_error_arguments_setter_82 = YPmet(FUNCODEREF(fun_macro_error_arguments_setter_82),LITREF(lit_180),T19,ENVNUL,PNUL,sloc(319));
  T22 = BOUNDP(YgooSconditionsYmacro_error_arguments_setter);
  if (T22 != YPfalse) {
    T21 = VARREF(YgooSconditionsYmacro_error_arguments_setter);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_macro_error_arguments_setter_82;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YgooSconditionsYmacro_error_arguments_setter,T20);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLmacro_errorG),VARREF(YgooSconditionsYmacro_error_arguments),VARREF(YgooSconditionsYmacro_error_arguments_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_182 = YPPsym((P)"macro-error");
  lit_183 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"args"));
  T24 = YPsig(LITREF(lit_183),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmacro_error = YPmet(FUNCODEREF(YgooSmacrosYmacro_error),LITREF(lit_182),T24,ENVNUL,PNUL,sloc(321));
  T25 = YgooSmacrosYmacro_error;
  VARSET(YgooSmacrosYmacro_error,T25);
  lit_184 = YPPlist(1,YPPsym((P)"c"));
  lit_185 = YPsb((P)"Macro expansion failure for %s when called with %=.");
  T26 = YPsig(LITREF(lit_184),YPPlist(1,VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_84 = YPmet(FUNCODEREF(fun_describe_condition_84),LITREF(lit_3),T26,ENVNUL,PNUL,sloc(324));
  T29 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T29 != YPfalse) {
    T28 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_describe_condition_84;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YgooSconditionsYdescribe_condition,T27);
  lit_186 = YPPsym((P)"<stack-overflow>");
  T32 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T31 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_186),T32);
  VARSET(YgooSconditionsYLstack_overflowG,T31);
  lit_187 = YPPsym((P)"stack-overflow-error");
  T33 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ystack_overflow_error = YPmet(FUNCODEREF(Ystack_overflow_error),LITREF(lit_187),T33,ENVNUL,PNUL,sloc(330));
  T34 = Ystack_overflow_error;
  VARSET(Ystack_overflow_error,T34);
  lit_188 = YPPlist(1,YPPsym((P)"c"));
  lit_189 = YPsb((P)"Stack overflow.");
  T35 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YgooSconditionsYLstack_overflowG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_86 = YPmet(FUNCODEREF(fun_describe_condition_86),LITREF(lit_3),T35,ENVNUL,PNUL,sloc(333));
  T38 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_describe_condition_86;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooSconditionsYdescribe_condition,T36);
  lit_190 = YPPsym((P)"<internal-error>");
  T41 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T40 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_190),T41);
  VARSET(YgooSconditionsYLinternal_errorG,T40);
  lit_191 = YPPsym((P)"internal-error");
  lit_192 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T42 = YPsig(LITREF(lit_192),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Yinternal_error = YPmet(FUNCODEREF(Yinternal_error),LITREF(lit_191),T42,ENVNUL,PNUL,sloc(337));
  T43 = Yinternal_error;
  VARSET(Yinternal_error,T43);
  lit_193 = YPPsym((P)"<assert-error>");
  T45 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T44 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_193),T45);
  VARSET(YgooSconditionsYLassert_errorG,T44);
  lit_194 = YPPsym((P)"assert-error");
  lit_195 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T46 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Yassert_error = YPmet(FUNCODEREF(Yassert_error),LITREF(lit_194),T46,ENVNUL,PNUL,sloc(343));
  T47 = Yassert_error;
  VARSET(Yassert_error,T47);
  lit_196 = YPPlist(1,YPPsym((P)"c"));
  lit_197 = YPsb((P)"Assert failure ");
  T48 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YgooSconditionsYLassert_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_89 = YPmet(FUNCODEREF(fun_describe_condition_89),LITREF(lit_3),T48,ENVNUL,PNUL,sloc(347));
  T51 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_describe_condition_89;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooSconditionsYdescribe_condition,T49);
  lit_198 = YPPsym((P)"<range-error>");
  T54 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T53 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_198),T54);
  VARSET(YgooSconditionsYLrange_errorG,T53);
  lit_199 = YPPsym((P)"range-error-collection");
  lit_200 = YPPlist(1,YPPsym((P)"_x"));
  T55 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_error_collection_90 = YPmet(FUNCODEREF(fun_range_error_collection_90),LITREF(lit_199),T55,ENVNUL,PNUL,sloc(351));
  T58 = BOUNDP(YgooSconditionsYrange_error_collection);
  if (T58 != YPfalse) {
    T57 = VARREF(YgooSconditionsYrange_error_collection);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_range_error_collection_90;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YgooSconditionsYrange_error_collection,T56);
  lit_201 = YPPsym((P)"range-error-collection-setter");
  lit_202 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T60 = YPsig(LITREF(lit_202),YPPlist(2,VARREF(YLcolG),VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_error_collection_setter_91 = YPmet(FUNCODEREF(fun_range_error_collection_setter_91),LITREF(lit_201),T60,ENVNUL,PNUL,sloc(351));
  T63 = BOUNDP(YgooSconditionsYrange_error_collection_setter);
  if (T63 != YPfalse) {
    T62 = VARREF(YgooSconditionsYrange_error_collection_setter);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_range_error_collection_setter_91;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YgooSconditionsYrange_error_collection_setter,T61);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLrange_errorG),VARREF(YgooSconditionsYrange_error_collection),VARREF(YgooSconditionsYrange_error_collection_setter),VARREF(YLcolG),VARREF(YPprop_unbound_error));
  lit_203 = YPPsym((P)"range-error-key");
  lit_204 = YPPlist(1,YPPsym((P)"_x"));
  T65 = YPsig(LITREF(lit_204),YPPlist(1,VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_error_key_92 = YPmet(FUNCODEREF(fun_range_error_key_92),LITREF(lit_203),T65,ENVNUL,PNUL,sloc(352));
  T68 = BOUNDP(YgooSconditionsYrange_error_key);
  if (T68 != YPfalse) {
    T67 = VARREF(YgooSconditionsYrange_error_key);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_range_error_key_92;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YgooSconditionsYrange_error_key,T66);
  lit_205 = YPPsym((P)"range-error-key-setter");
  lit_206 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T70 = YPsig(LITREF(lit_206),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_error_key_setter_93 = YPmet(FUNCODEREF(fun_range_error_key_setter_93),LITREF(lit_205),T70,ENVNUL,PNUL,sloc(352));
  T73 = BOUNDP(YgooSconditionsYrange_error_key_setter);
  if (T73 != YPfalse) {
    T72 = VARREF(YgooSconditionsYrange_error_key_setter);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_range_error_key_setter_93;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YgooSconditionsYrange_error_key_setter,T71);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLrange_errorG),VARREF(YgooSconditionsYrange_error_key),VARREF(YgooSconditionsYrange_error_key_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_207 = YPPsym((P)"range-error");
  lit_208 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"k"));
  T75 = YPsig(LITREF(lit_208),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_error_94 = YPmet(FUNCODEREF(fun_range_error_94),LITREF(lit_207),T75,ENVNUL,PNUL,sloc(354));
  T78 = BOUNDP(Yrange_error);
  if (T78 != YPfalse) {
    T77 = VARREF(Yrange_error);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_range_error_94;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(Yrange_error,T76);
  lit_209 = YPPlist(1,YPPsym((P)"c"));
  lit_210 = YPsb((P)"Nonexistent key %= in %=");
  T80 = YPsig(LITREF(lit_209),YPPlist(1,VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_95 = YPmet(FUNCODEREF(fun_describe_condition_95),LITREF(lit_3),T80,ENVNUL,PNUL,sloc(357));
  T83 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_describe_condition_95;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooSconditionsYdescribe_condition,T81);
  lit_211 = YPPsym((P)"<io-error>");
  T86 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T85 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_211),T86);
  VARSET(YgooSconditionsYLio_errorG,T85);
  lit_212 = YPPsym((P)"<file-opening-error>");
  T88 = (P)YPpair(VARREF(YgooSconditionsYLio_errorG),Ynil);
  T87 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_212),T88);
  VARSET(YgooSconditionsYLfile_opening_errorG,T87);
  lit_213 = YPPsym((P)"file-opening-error-filename");
  lit_214 = YPPlist(1,YPPsym((P)"_x"));
  T89 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YgooSconditionsYLfile_opening_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_file_opening_error_filename_96 = YPmet(FUNCODEREF(fun_file_opening_error_filename_96),LITREF(lit_213),T89,ENVNUL,PNUL,sloc(364));
  T92 = BOUNDP(YgooSconditionsYfile_opening_error_filename);
  if (T92 != YPfalse) {
    T91 = VARREF(YgooSconditionsYfile_opening_error_filename);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_file_opening_error_filename_96;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YgooSconditionsYfile_opening_error_filename,T90);
  lit_215 = YPPsym((P)"file-opening-error-filename-setter");
  lit_216 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T94 = YPsig(LITREF(lit_216),YPPlist(2,VARREF(YLstrG),VARREF(YgooSconditionsYLfile_opening_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_file_opening_error_filename_setter_97 = YPmet(FUNCODEREF(fun_file_opening_error_filename_setter_97),LITREF(lit_215),T94,ENVNUL,PNUL,sloc(364));
  T97 = BOUNDP(YgooSconditionsYfile_opening_error_filename_setter);
  if (T97 != YPfalse) {
    T96 = VARREF(YgooSconditionsYfile_opening_error_filename_setter);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_file_opening_error_filename_setter_97;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YgooSconditionsYfile_opening_error_filename_setter,T95);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLfile_opening_errorG),VARREF(YgooSconditionsYfile_opening_error_filename),VARREF(YgooSconditionsYfile_opening_error_filename_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_217 = YPPsym((P)"file-opening-error");
  lit_218 = YPPlist(1,YPPsym((P)"filename"));
  T99 = YPsig(LITREF(lit_218),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_file_opening_error_98 = YPmet(FUNCODEREF(fun_file_opening_error_98),LITREF(lit_217),T99,ENVNUL,PNUL,sloc(366));
  T102 = BOUNDP(Yfile_opening_error);
  if (T102 != YPfalse) {
    T101 = VARREF(Yfile_opening_error);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_file_opening_error_98;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(Yfile_opening_error,T100);
  lit_219 = YPPlist(1,YPPsym((P)"c"));
  lit_220 = YPsb((P)"Failed to open %s.");
  T104 = YPsig(LITREF(lit_219),YPPlist(1,VARREF(YgooSconditionsYLfile_opening_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_99 = YPmet(FUNCODEREF(fun_describe_condition_99),LITREF(lit_3),T104,ENVNUL,PNUL,sloc(369));
  T107 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T107 != YPfalse) {
    T106 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_describe_condition_99;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YgooSconditionsYdescribe_condition,T105);
  lit_221 = YPPsym((P)"<unbound-error>");
  T110 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T109 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_221),T110);
  VARSET(YgooSconditionsYLunbound_errorG,T109);
  lit_222 = YPPsym((P)"<unbound-variable-error>");
  T112 = (P)YPpair(VARREF(YgooSconditionsYLunbound_errorG),Ynil);
  T111 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_222),T112);
  VARSET(YgooSconditionsYLunbound_variable_errorG,T111);
  lit_223 = YPPsym((P)"unbound-variable-error-variable");
  lit_224 = YPPlist(1,YPPsym((P)"_x"));
  T113 = YPsig(LITREF(lit_224),YPPlist(1,VARREF(YgooSconditionsYLunbound_variable_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unbound_variable_error_variable_100 = YPmet(FUNCODEREF(fun_unbound_variable_error_variable_100),LITREF(lit_223),T113,ENVNUL,PNUL,sloc(375));
  T116 = BOUNDP(YgooSconditionsYunbound_variable_error_variable);
  if (T116 != YPfalse) {
    T115 = VARREF(YgooSconditionsYunbound_variable_error_variable);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_unbound_variable_error_variable_100;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YgooSconditionsYunbound_variable_error_variable,T114);
  lit_225 = YPPsym((P)"unbound-variable-error-variable-setter");
  lit_226 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T118 = YPsig(LITREF(lit_226),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLunbound_variable_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unbound_variable_error_variable_setter_101 = YPmet(FUNCODEREF(fun_unbound_variable_error_variable_setter_101),LITREF(lit_225),T118,ENVNUL,PNUL,sloc(375));
  T121 = BOUNDP(YgooSconditionsYunbound_variable_error_variable_setter);
  if (T121 != YPfalse) {
    T120 = VARREF(YgooSconditionsYunbound_variable_error_variable_setter);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_unbound_variable_error_variable_setter_101;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YgooSconditionsYunbound_variable_error_variable_setter,T119);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLunbound_variable_errorG),VARREF(YgooSconditionsYunbound_variable_error_variable),VARREF(YgooSconditionsYunbound_variable_error_variable_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_227 = YPPlist(1,YPPsym((P)"c"));
  lit_228 = YPsb((P)"Unbound variable %s.");
  T123 = YPsig(LITREF(lit_227),YPPlist(1,VARREF(YgooSconditionsYLunbound_variable_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_102 = YPmet(FUNCODEREF(fun_describe_condition_102),LITREF(lit_3),T123,ENVNUL,PNUL,sloc(377));
  T126 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T126 != YPfalse) {
    T125 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_describe_condition_102;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YgooSconditionsYdescribe_condition,T124);
  lit_229 = YPPsym((P)"<property-error>");
  T129 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T128 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_229),T129);
  VARSET(YgooSconditionsYLproperty_errorG,T128);
  lit_230 = YPPsym((P)"property-error-owner");
  lit_231 = YPPlist(1,YPPsym((P)"_x"));
  T130 = YPsig(LITREF(lit_231),YPPlist(1,VARREF(YgooSconditionsYLproperty_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_property_error_owner_103 = YPmet(FUNCODEREF(fun_property_error_owner_103),LITREF(lit_230),T130,ENVNUL,PNUL,sloc(381));
  T133 = BOUNDP(YgooSconditionsYproperty_error_owner);
  if (T133 != YPfalse) {
    T132 = VARREF(YgooSconditionsYproperty_error_owner);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_property_error_owner_103;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YgooSconditionsYproperty_error_owner,T131);
  lit_232 = YPPsym((P)"property-error-owner-setter");
  lit_233 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T135 = YPsig(LITREF(lit_233),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLproperty_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_property_error_owner_setter_104 = YPmet(FUNCODEREF(fun_property_error_owner_setter_104),LITREF(lit_232),T135,ENVNUL,PNUL,sloc(381));
  T138 = BOUNDP(YgooSconditionsYproperty_error_owner_setter);
  if (T138 != YPfalse) {
    T137 = VARREF(YgooSconditionsYproperty_error_owner_setter);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_property_error_owner_setter_104;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YgooSconditionsYproperty_error_owner_setter,T136);
  lit_234 = YPPlist(1,YPPsym((P)"_x"));
  T140 = YPsig(LITREF(lit_234),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T140,ENVNUL,PNUL,sloc(381));
  T141 = fun_105;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLproperty_errorG),VARREF(YgooSconditionsYproperty_error_owner),VARREF(YgooSconditionsYproperty_error_owner_setter),VARREF(YLanyG),T141);
  lit_235 = YPPsym((P)"property-error-generic");
  lit_236 = YPPlist(1,YPPsym((P)"_x"));
  T142 = YPsig(LITREF(lit_236),YPPlist(1,VARREF(YgooSconditionsYLproperty_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_property_error_generic_106 = YPmet(FUNCODEREF(fun_property_error_generic_106),LITREF(lit_235),T142,ENVNUL,PNUL,sloc(382));
  T145 = BOUNDP(YgooSconditionsYproperty_error_generic);
  if (T145 != YPfalse) {
    T144 = VARREF(YgooSconditionsYproperty_error_generic);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_property_error_generic_106;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YgooSconditionsYproperty_error_generic,T143);
  lit_237 = YPPsym((P)"property-error-generic-setter");
  lit_238 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T147 = YPsig(LITREF(lit_238),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLproperty_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_property_error_generic_setter_107 = YPmet(FUNCODEREF(fun_property_error_generic_setter_107),LITREF(lit_237),T147,ENVNUL,PNUL,sloc(382));
  T150 = BOUNDP(YgooSconditionsYproperty_error_generic_setter);
  if (T150 != YPfalse) {
    T149 = VARREF(YgooSconditionsYproperty_error_generic_setter);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_property_error_generic_setter_107;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YgooSconditionsYproperty_error_generic_setter,T148);
  lit_239 = YPPlist(1,YPPsym((P)"_x"));
  T152 = YPsig(LITREF(lit_239),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T152,ENVNUL,PNUL,sloc(382));
  T153 = fun_108;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLproperty_errorG),VARREF(YgooSconditionsYproperty_error_generic),VARREF(YgooSconditionsYproperty_error_generic_setter),VARREF(YLanyG),T153);
  lit_240 = YPPsym((P)"<property-unbound-error>");
  T156 = (P)YPpair(VARREF(YgooSconditionsYLunbound_errorG),Ynil);
  T155 = (P)YPpair(VARREF(YgooSconditionsYLproperty_errorG),T156);
  T154 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_240),T155);
  VARSET(YgooSconditionsYLproperty_unbound_errorG,T154);
  lit_241 = YPPsym((P)"property-unbound-error");
  lit_242 = YPPlist(1,YPPsym((P)"owner"));
  T157 = YPsig(LITREF(lit_242),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yproperty_unbound_error = YPmet(FUNCODEREF(Yproperty_unbound_error),LITREF(lit_241),T157,ENVNUL,PNUL,sloc(386));
  T158 = Yproperty_unbound_error;
  VARSET(Yproperty_unbound_error,T158);
  lit_243 = YPPlist(1,YPPsym((P)"c"));
  lit_244 = YPsb((P)"Unbound property on %=.");
  T159 = YPsig(LITREF(lit_243),YPPlist(1,VARREF(YgooSconditionsYLproperty_unbound_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_110 = YPmet(FUNCODEREF(fun_describe_condition_110),LITREF(lit_3),T159,ENVNUL,PNUL,sloc(389));
  T162 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T162 != YPfalse) {
    T161 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_describe_condition_110;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YgooSconditionsYdescribe_condition,T160);
  lit_245 = YPPsym((P)"<property-not-found-error>");
  T165 = (P)YPpair(VARREF(YgooSconditionsYLproperty_errorG),Ynil);
  T164 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_245),T165);
  VARSET(YgooSconditionsYLproperty_not_found_errorG,T164);
  lit_246 = YPPsym((P)"property-not-found-error");
  lit_247 = YPPlist(2,YPPsym((P)"generic"),YPPsym((P)"owner"));
  T166 = YPsig(LITREF(lit_247),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yproperty_not_found_error = YPmet(FUNCODEREF(Yproperty_not_found_error),LITREF(lit_246),T166,ENVNUL,PNUL,sloc(394));
  T167 = Yproperty_not_found_error;
  VARSET(Yproperty_not_found_error,T167);
  lit_248 = YPPlist(1,YPPsym((P)"c"));
  lit_249 = YPsb((P)"Property %s not found in %s.");
  T168 = YPsig(LITREF(lit_248),YPPlist(1,VARREF(YgooSconditionsYLproperty_not_found_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_112 = YPmet(FUNCODEREF(fun_describe_condition_112),LITREF(lit_3),T168,ENVNUL,PNUL,sloc(399));
  T171 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T171 != YPfalse) {
    T170 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_describe_condition_112;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YgooSconditionsYdescribe_condition,T169);
  lit_250 = YPPsym((P)"<property-type-error>");
  T175 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),Ynil);
  T174 = (P)YPpair(VARREF(YgooSconditionsYLproperty_errorG),T175);
  T173 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_250),T174);
  VARSET(YgooSconditionsYLproperty_type_errorG,T173);
  lit_251 = YPPsym((P)"property-type-error");
  lit_252 = YPPlist(3,YPPsym((P)"generic"),YPPsym((P)"value"),YPPsym((P)"type"));
  T176 = YPsig(LITREF(lit_252),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yproperty_type_error = YPmet(FUNCODEREF(Yproperty_type_error),LITREF(lit_251),T176,ENVNUL,PNUL,sloc(405));
  T177 = Yproperty_type_error;
  VARSET(Yproperty_type_error,T177);
  lit_253 = YPPlist(1,YPPsym((P)"c"));
  lit_254 = YPsb((P)"Property %s ");
  T178 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YgooSconditionsYLproperty_type_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_114 = YPmet(FUNCODEREF(fun_describe_condition_114),LITREF(lit_3),T178,ENVNUL,PNUL,sloc(411));
  T181 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T181 != YPfalse) {
    T180 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_describe_condition_114;
  T179 = XCALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YgooSconditionsYdescribe_condition,T179);
  lit_255 = YPPsym((P)"<as-error>");
  T184 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),Ynil);
  T183 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_255),T184);
  VARSET(YgooSconditionsYLas_errorG,T183);
  lit_256 = YPPsym((P)"as-error");
  lit_257 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"value"));
  T185 = YPsig(LITREF(lit_257),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yas_error = YPmet(FUNCODEREF(Yas_error),LITREF(lit_256),T185,ENVNUL,PNUL,sloc(416));
  T186 = Yas_error;
  VARSET(Yas_error,T186);
  lit_258 = YPPlist(1,YPPsym((P)"c"));
  lit_259 = YPsb((P)"No AS method for type %t and value %=.");
  T187 = YPsig(LITREF(lit_258),YPPlist(1,VARREF(YgooSconditionsYLas_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_116 = YPmet(FUNCODEREF(fun_describe_condition_116),LITREF(lit_3),T187,ENVNUL,PNUL,sloc(419));
  T190 = BOUNDP(YgooSconditionsYdescribe_condition);
  if (T190 != YPfalse) {
    T189 = VARREF(YgooSconditionsYdescribe_condition);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_describe_condition_116;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YgooSconditionsYdescribe_condition,T188);
  lit_260 = YPPsym((P)"<arithmetic-error>");
  T193 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T192 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_260),T193);
  VARSET(YgooSconditionsYLarithmetic_errorG,T192);
  lit_261 = YPPsym((P)"arithmetic-error");
  lit_262 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T194 = YPsig(LITREF(lit_262),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Yarithmetic_error = YPmet(FUNCODEREF(Yarithmetic_error),LITREF(lit_261),T194,ENVNUL,PNUL,sloc(425));
  T195 = Yarithmetic_error;
  VARSET(Yarithmetic_error,T195);
  lit_263 = YPPsym((P)"<keyboard-interrupt>");
  T197 = (P)YPpair(VARREF(YgooSconditionsYLconditionG),Ynil);
  T196 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_263),T197);
  VARSET(YgooSconditionsYLkeyboard_interruptG,T196);
  lit_264 = YPPsym((P)"keyboard-interrupt");
  T198 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),LITREF(lit_264),T198,ENVNUL,PNUL,sloc(431));
  T199 = Ykeyboard_interrupt;
  VARSET(Ykeyboard_interrupt,T199);
  T200 = YPfalse;
  return T200;
}

P YgooSconditionsY___main_3___() {
  P tmpF2334;
  P tmpF2333;
  P tmpF2332;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
DEFCREGS();
loop:
  lit_265 = YPPsym((P)"do-handlers-of-type");
  lit_266 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"f"));
  lit_267 = YPPsym((P)"search");
  lit_268 = YPPlist(1,YPPsym((P)"handlers"));
  T2 = YPsig(LITREF(lit_268),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_search_119 = YPmet(FUNCODEREF(fun_search_119),LITREF(lit_267),T2,ENVNUL,PNUL,sloc(463));
  T1 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T0 = YPsig(LITREF(lit_266),YPPlist(2,T1,VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSconditionsYdo_handlers_of_type = YPmet(FUNCODEREF(YgooSconditionsYdo_handlers_of_type),LITREF(lit_265),T0,ENVNUL,PNUL,sloc(462));
  T3 = YgooSconditionsYdo_handlers_of_type;
  VARSET(YgooSconditionsYdo_handlers_of_type,T3);
  lit_269 = YPPsym((P)"list-handlers");
  lit_270 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"out"));
  lit_271 = YPPlist(1,YPPsym((P)"handler"));
  lit_272 = YPsb((P)"%d. %s.\n");
  T6 = YPsig(LITREF(lit_271),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T6,ENVNUL,PNUL,sloc(481));
  T5 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T4 = YPsig(LITREF(lit_270),YPPlist(2,T5,VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  YgooSconditionsYlist_handlers = YPmet(FUNCODEREF(YgooSconditionsYlist_handlers),LITREF(lit_269),T4,ENVNUL,PNUL,sloc(477));
  T7 = YgooSconditionsYlist_handlers;
  VARSET(YgooSconditionsYlist_handlers,T7);
  lit_273 = YPPsym((P)"invoke-handler-interactively");
  lit_274 = YPPlist(3,YPPsym((P)"handler"),YPPsym((P)"in"),YPPsym((P)"out"));
  lit_275 = YPsb((P)"Handler %= does not match condition %=");
  lit_276 = YPPlist(1,YPPsym((P)"handlers"));
  lit_277 = YPsb((P)"Handler %= is not installed");
  T10 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_123 = YPmet(FUNCODEREF(fun_123),YPfalse,T10,ENVNUL,PNUL,sloc(504));
  T9 = YPsig(LITREF(lit_276),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_search_124 = YPmet(FUNCODEREF(fun_search_124),LITREF(lit_267),T9,ENVNUL,PNUL,sloc(497));
  T8 = YPsig(LITREF(lit_274),YPPlist(3,VARREF(YgooSconditionsYLhandlerG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSconditionsYinvoke_handler_interactively = YPmet(FUNCODEREF(YgooSconditionsYinvoke_handler_interactively),LITREF(lit_273),T8,ENVNUL,PNUL,sloc(491));
  T11 = YgooSconditionsYinvoke_handler_interactively;
  VARSET(YgooSconditionsYinvoke_handler_interactively,T11);
  lit_278 = YPPsym((P)"choose-handler");
  lit_279 = YPPlist(3,YPPsym((P)"type"),YPPsym((P)"in"),YPPsym((P)"out"));
  lit_280 = YPsb((P)"Please pick a handler: ");
  lit_281 = YPsb((P)"No such handler %d");
  T13 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T12 = YPsig(LITREF(lit_279),YPPlist(3,T13,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSconditionsYchoose_handler = YPmet(FUNCODEREF(YgooSconditionsYchoose_handler),LITREF(lit_278),T12,ENVNUL,PNUL,sloc(508));
  T14 = YgooSconditionsYchoose_handler;
  VARSET(YgooSconditionsYchoose_handler,T14);
  VARSET(YTrestarts_okQT,YPtrue);
  tmpF2332 = YPfalse;
  if (tmpF2332 != YPfalse) {
    T15 = VARREF(YgooSconditionsYread);
  } else {
    T15 = YPfalse;
  }
  tmpF2333 = YPfalse;
  if (tmpF2333 != YPfalse) {
    T16 = VARREF(YgooSconditionsYmsg);
  } else {
    T16 = YPfalse;
  }
  tmpF2334 = YPfalse;
  if (tmpF2334 != YPfalse) {
    T17 = VARREF(YgooSconditionsYmsg_to_str);
  } else {
    T17 = YPfalse;
  }
  T18 = YPfalse;
  return T18;
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
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"atan", &module_info_gooSmath, "atan"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"map", &module_info_gooSmacros, "map"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"~==", &module_info_gooSmath, "~=="},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"elt!", &module_info_gooScolsScolx, "elt!"},
  {"if", &module_info_gooSboot, "if"},
  {"<line>", &module_info_gooScolsSlst, "<line>"},
  {"def-list", &module_info_gooScolsSlst, "def-list"},
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
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
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
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"len", &module_info_gooStypes, "len"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"dl", &module_info_gooSboot, "dl"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"let", &module_info_gooSboot, "let"},
  {"case", &module_info_gooSmacros, "case"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%su", &module_info_gooSboot, "%su"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%met", &module_info_gooSboot, "%met"},
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
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"~=", &module_info_gooSmath, "~="},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
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
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"error", &module_info_gooSboot, "error"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
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
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%time", &module_info_gooSboot, "%time"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"line-list-of", &module_info_gooScolsSlst, "line-list-of"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"sub*-setter", &module_info_gooScolsSseqx, "sub*-setter"},
  {"acos", &module_info_gooSmath, "acos"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"min", &module_info_gooSmag, "min"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"app", &module_info_gooSmacros, "app"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"do", &module_info_gooSmacros, "do"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"sub*", &module_info_gooScolsSseq, "sub*"},
  {">", &module_info_gooSmag, ">"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {"open", &module_info_gooSioSport, "open"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
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
  {"below", &module_info_gooScolsSseq, "below"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"for", &module_info_gooSmacros, "for"},
  {"<", &module_info_gooSmag, "<"},
  {"|", &module_info_gooSmath, "|"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"1+", &module_info_gooSmath, "1+"},
  {"seq", &module_info_gooSboot, "seq"},
  {">=", &module_info_gooSmag, ">="},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
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
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sub", &module_info_gooScolsSseq, "sub"},
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
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"esc", &module_info_gooSboot, "esc"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<=", &module_info_gooSmag, "<="},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"mod", &module_info_gooSmath, "mod"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"<<", &module_info_gooSmath, "<<"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"dm", &module_info_gooSboot, "dm"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"while", &module_info_gooSmacros, "while"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
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
  {"%snul", &module_info_gooSboot, "%snul"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"%lu", &module_info_gooSboot, "%lu"},
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
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"get", &module_info_gooSioSport, "get"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"not", &module_info_gooSboot, "not"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"assert-error", &module_info_gooSboot, "assert-error"},
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
  {"/", &module_info_gooSmath, "/"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"new", &module_info_gooSboot, "new"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"tan", &module_info_gooSmath, "tan"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
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
  {"%ft", &module_info_gooSboot, "%ft"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<src-loc>", &module_info_gooSboot, "<src-loc>"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"src-loc-file", &module_info_gooSboot, "src-loc-file"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"as", &module_info_gooStypes, "as"},
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
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
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
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"out", &module_info_gooSioSport, "out"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"op", &module_info_gooSmacros, "op"},
  {"*", &module_info_gooSmath, "*"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"items", &module_info_gooScolsScol, "items"},
  {"reject", &module_info_gooScolsSseq, "reject"},
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
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"mif", &module_info_gooSboot, "mif"},
  {"floor", &module_info_gooSmath, "floor"},
  {"cos", &module_info_gooSmath, "cos"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"export", &module_info_gooSboot, "export"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {">>", &module_info_gooSmath, ">>"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"or", &module_info_gooSmacros, "or"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"use", &module_info_gooSboot, "use"},
  {"set", &module_info_gooSboot, "set"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"and", &module_info_gooSmacros, "and"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<handler-info>", CVAR, &YgooSconditionsYLhandler_infoG},
  {"file-opening-error-filename", CVAR, &YgooSconditionsYfile_opening_error_filename},
  {"<file-opening-error>", CVAR, &YgooSconditionsYLfile_opening_errorG},
  {"<property-not-found-error>", CVAR, &YgooSconditionsYLproperty_not_found_errorG},
  {"msg-to-str", CVAR, &YgooSconditionsYmsg_to_str},
  {"handler-test-setter", CVAR, &YgooSconditionsYhandler_test_setter},
  {"macro-error-arguments-setter", CVAR, &YgooSconditionsYmacro_error_arguments_setter},
  {"range-error-key-setter", CVAR, &YgooSconditionsYrange_error_key_setter},
  {"incongruent-method-error-method-setter", CVAR, &YgooSconditionsYincongruent_method_error_method_setter},
  {"<property-unbound-error>", CVAR, &YgooSconditionsYLproperty_unbound_errorG},
  {"<unknown-function-error>", CVAR, &YgooSconditionsYLunknown_function_errorG},
  {"call-error-function-setter", CVAR, &YgooSconditionsYcall_error_function_setter},
  {"<compiler-error>", CVAR, &YgooSconditionsYLcompiler_errorG},
  {"type-error-type-setter", CVAR, &YgooSconditionsYtype_error_type_setter},
  {"<condition>", CVAR, &YgooSconditionsYLconditionG},
  {"fab-handler", CVAR, &YgooSconditionsYfab_handler},
  {"incongruent-method-error-generic-setter", CVAR, &YgooSconditionsYincongruent_method_error_generic_setter},
  {"type-error-type", CVAR, &YgooSconditionsYtype_error_type},
  {"<arity-error>", CVAR, &YgooSconditionsYLarity_errorG},
  {"call-error-arguments", CVAR, &YgooSconditionsYcall_error_arguments},
  {"<internal-error>", CVAR, &YgooSconditionsYLinternal_errorG},
  {"macro-error-arguments", CVAR, &YgooSconditionsYmacro_error_arguments},
  {"handler-condition-type-setter", CVAR, &YgooSconditionsYhandler_condition_type_setter},
  {"<error>", CVAR, &YgooSconditionsYLerrorG},
  {"<argument-type-error>", CVAR, &YgooSconditionsYLargument_type_errorG},
  {"type-error-value-setter", CVAR, &YgooSconditionsYtype_error_value_setter},
  {"choose-handler", CVAR, &YgooSconditionsYchoose_handler},
  {"type-error-value", CVAR, &YgooSconditionsYtype_error_value},
  {"build-condition-for-handler-interactively", CVAR, &YgooSconditionsYbuild_condition_for_handler_interactively},
  {"range-error-key", CVAR, &YgooSconditionsYrange_error_key},
  {"handler-info-arguments-setter", CVAR, &YgooSconditionsYhandler_info_arguments_setter},
  {"<arithmetic-error>", CVAR, &YgooSconditionsYLarithmetic_errorG},
  {"<property-type-error>", CVAR, &YgooSconditionsYLproperty_type_errorG},
  {"<property-error>", CVAR, &YgooSconditionsYLproperty_errorG},
  {"property-error-owner-setter", CVAR, &YgooSconditionsYproperty_error_owner_setter},
  {"default-handler-description", CVAR, &YgooSconditionsYdefault_handler_description},
  {"handler-info-message-setter", CVAR, &YgooSconditionsYhandler_info_message_setter},
  {"---main-3---", PVAR, NULL},
  {"<return-type-error>", CVAR, &YgooSconditionsYLreturn_type_errorG},
  {"condition-arguments", CVAR, &YgooSconditionsYcondition_arguments},
  {"<no-applicable-methods-error>", CVAR, &YgooSconditionsYLno_applicable_methods_errorG},
  {"handler-function", CVAR, &YgooSconditionsYhandler_function},
  {"range-error-collection", CVAR, &YgooSconditionsYrange_error_collection},
  {"unbound-variable-error-variable-setter", CVAR, &YgooSconditionsYunbound_variable_error_variable_setter},
  {"signal-handler-list", CVAR, &YgooSconditionsYsignal_handler_list},
  {"handler-matches?", CVAR, &YgooSconditionsYhandler_matchesQ},
  {"read", CVAR, &YgooSconditionsYread},
  {"handler-function-setter", CVAR, &YgooSconditionsYhandler_function_setter},
  {"sig", CVAR, &YgooSconditionsYsig},
  {"handler-info-setter", CVAR, &YgooSconditionsYhandler_info_setter},
  {"call-error-function", CVAR, &YgooSconditionsYcall_error_function},
  {"incongruent-method-error-generic", CVAR, &YgooSconditionsYincongruent_method_error_generic},
  {"msg", CVAR, &YgooSconditionsYmsg},
  {"---main-2---", PVAR, NULL},
  {"handler-condition-type", CVAR, &YgooSconditionsYhandler_condition_type},
  {"handler-info", CVAR, &YgooSconditionsYhandler_info},
  {"*current-handlers*", DVAR, &YgooSconditionsYTcurrent_handlersT},
  {"<simple-condition>", CVAR, &YgooSconditionsYLsimple_conditionG},
  {"handler-test", CVAR, &YgooSconditionsYhandler_test},
  {"invoke-handler-interactively", CVAR, &YgooSconditionsYinvoke_handler_interactively},
  {"<handler>", CVAR, &YgooSconditionsYLhandlerG},
  {"<stack-overflow>", CVAR, &YgooSconditionsYLstack_overflowG},
  {"describe-condition", CVAR, &YgooSconditionsYdescribe_condition},
  {"incongruent-method-error-method", CVAR, &YgooSconditionsYincongruent_method_error_method},
  {"describe-handler", CVAR, &YgooSconditionsYdescribe_handler},
  {"<unbound-error>", CVAR, &YgooSconditionsYLunbound_errorG},
  {"unbound-variable-error-variable", CVAR, &YgooSconditionsYunbound_variable_error_variable},
  {"---main-1---", PVAR, NULL},
  {"<keyboard-interrupt>", CVAR, &YgooSconditionsYLkeyboard_interruptG},
  {"<type-error>", CVAR, &YgooSconditionsYLtype_errorG},
  {"property-error-owner", CVAR, &YgooSconditionsYproperty_error_owner},
  {"macro-error-name", CVAR, &YgooSconditionsYmacro_error_name},
  {"property-error-generic-setter", CVAR, &YgooSconditionsYproperty_error_generic_setter},
  {"<incongruent-method-error>", CVAR, &YgooSconditionsYLincongruent_method_errorG},
  {"<unbound-variable-error>", CVAR, &YgooSconditionsYLunbound_variable_errorG},
  {"<call-error>", CVAR, &YgooSconditionsYLcall_errorG},
  {"condition-message-setter", CVAR, &YgooSconditionsYcondition_message_setter},
  {"<restart>", CVAR, &YgooSconditionsYLrestartG},
  {"<assert-error>", CVAR, &YgooSconditionsYLassert_errorG},
  {"<serious-condition>", CVAR, &YgooSconditionsYLserious_conditionG},
  {"<narity-error>", CVAR, &YgooSconditionsYLnarity_errorG},
  {"<simple-error>", CVAR, &YgooSconditionsYLsimple_errorG},
  {"list-handlers", CVAR, &YgooSconditionsYlist_handlers},
  {"<cpl-error>", CVAR, &YgooSconditionsYLcpl_errorG},
  {"---main-0---", PVAR, NULL},
  {"default-handler", CVAR, &YgooSconditionsYdefault_handler},
  {"<ambiguous-method-error>", CVAR, &YgooSconditionsYLambiguous_method_errorG},
  {"call-error-arguments-setter", CVAR, &YgooSconditionsYcall_error_arguments_setter},
  {"handler-active?", CVAR, &YgooSconditionsYhandler_activeQ},
  {"range-error-collection-setter", CVAR, &YgooSconditionsYrange_error_collection_setter},
  {"file-opening-error-filename-setter", CVAR, &YgooSconditionsYfile_opening_error_filename_setter},
  {"<io-error>", CVAR, &YgooSconditionsYLio_errorG},
  {"property-error-generic", CVAR, &YgooSconditionsYproperty_error_generic},
  {"condition-arguments-setter", CVAR, &YgooSconditionsYcondition_arguments_setter},
  {"macro-error-name-setter", CVAR, &YgooSconditionsYmacro_error_name_setter},
  {"condition-message", CVAR, &YgooSconditionsYcondition_message},
  {"<macro-error>", CVAR, &YgooSconditionsYLmacro_errorG},
  {"<as-error>", CVAR, &YgooSconditionsYLas_errorG},
  {"$default-handler-info", CVAR, &YgooSconditionsYDdefault_handler_info},
  {"do-handlers-of-type", CVAR, &YgooSconditionsYdo_handlers_of_type},
  {"build-condition-interactively", CVAR, &YgooSconditionsYbuild_condition_interactively},
  {"<syntax-error>", CVAR, &YgooSconditionsYLsyntax_errorG},
  {"<range-error>", CVAR, &YgooSconditionsYLrange_errorG},
  {"<no-next-methods-error>", CVAR, &YgooSconditionsYLno_next_methods_errorG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<handler-info>", "<handler-info>"},
  {"file-opening-error-filename", "file-opening-error-filename"},
  {"macro-error", "macro-error"},
  {"<file-opening-error>", "<file-opening-error>"},
  {"<property-not-found-error>", "<property-not-found-error>"},
  {"keyboard-interrupt", "keyboard-interrupt"},
  {"range-error-collection", "range-error-collection"},
  {"<property-unbound-error>", "<property-unbound-error>"},
  {"type-error-value", "type-error-value"},
  {"<compiler-error>", "<compiler-error>"},
  {"<macro-error>", "<macro-error>"},
  {"<replace-generic-restart>", "<replace-generic-restart>"},
  {"condition-arguments", "condition-arguments"},
  {"<condition>", "<condition>"},
  {"fab-handler", "fab-handler"},
  {"return-type-error", "return-type-error"},
  {"type-error-type", "type-error-type"},
  {"<arithmetic-error>", "<arithmetic-error>"},
  {"msg", "msg"},
  {"<arity-error>", "<arity-error>"},
  {"call-error-arguments", "call-error-arguments"},
  {"argument-type-error", "argument-type-error"},
  {"<internal-error>", "<internal-error>"},
  {"macro-error-arguments", "macro-error-arguments"},
  {"<error>", "<error>"},
  {"<property-type-error>", "<property-type-error>"},
  {"handler-matches?", "handler-matches?"},
  {"<argument-type-error>", "<argument-type-error>"},
  {"choose-handler", "choose-handler"},
  {"build-condition-for-handler-interactively", "build-condition-for-handler-interactively"},
  {"range-error-key", "range-error-key"},
  {"property-error-generic", "property-error-generic"},
  {"default-handler-description", "default-handler-description"},
  {"<return-type-error>", "<return-type-error>"},
  {"arity-error", "arity-error"},
  {"<no-applicable-methods-error>", "<no-applicable-methods-error>"},
  {"range-error", "range-error"},
  {"handler-function", "handler-function"},
  {"error", "error"},
  {"msg-to-str", "msg-to-str"},
  {"%with-monitor", "%with-monitor"},
  {"read", "read"},
  {"sig", "sig"},
  {"call-error-function", "call-error-function"},
  {"describe-handler", "describe-handler"},
  {"<syntax-error>", "<syntax-error>"},
  {"*current-handlers*", "*current-handlers*"},
  {"<simple-condition>", "<simple-condition>"},
  {"<unknown-function-error>", "<unknown-function-error>"},
  {"invoke-handler-interactively", "invoke-handler-interactively"},
  {"<property-error>", "<property-error>"},
  {"<stack-overflow>", "<stack-overflow>"},
  {"describe-condition", "describe-condition"},
  {"<unbound-error>", "<unbound-error>"},
  {"assert-error", "assert-error"},
  {"narity-error", "narity-error"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"<simple-error>", "<simple-error>"},
  {"unbound-variable-error-variable", "unbound-variable-error-variable"},
  {"<keyboard-interrupt>", "<keyboard-interrupt>"},
  {"<type-error>", "<type-error>"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"property-error-owner", "property-error-owner"},
  {"stack-overflow-error", "stack-overflow-error"},
  {"macro-error-name", "macro-error-name"},
  {"handler-info-message", "handler-info-message"},
  {"<unbound-variable-error>", "<unbound-variable-error>"},
  {"<call-error>", "<call-error>"},
  {"<restart>", "<restart>"},
  {"<handler>", "<handler>"},
  {"<assert-error>", "<assert-error>"},
  {"<narity-error>", "<narity-error>"},
  {"list-handlers", "list-handlers"},
  {"default-handler", "default-handler"},
  {"<ambiguous-method-error>", "<ambiguous-method-error>"},
  {"arithmetic-error", "arithmetic-error"},
  {"no-next-methods-error", "no-next-methods-error"},
  {"<serious-condition>", "<serious-condition>"},
  {"internal-error", "internal-error"},
  {"<io-error>", "<io-error>"},
  {"condition-message", "condition-message"},
  {"<as-error>", "<as-error>"},
  {"$default-handler-info", "$default-handler-info"},
  {"build-condition-interactively", "build-condition-interactively"},
  {"<range-error>", "<range-error>"},
  {"<no-next-methods-error>", "<no-next-methods-error>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSconditions;
MODULE_INFO module_info_gooSconditions = {
  "goo/conditions",
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

extern void load_module_gooSconditions (void);

void load_module_gooSconditions (void) {
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

  (P)YgooSconditionsY___main_0___();
  (P)YgooSconditionsY___main_1___();
  (P)YgooSconditionsY___main_2___();
  (P)YgooSconditionsY___main_3___();

}

/* END OF GENERATED CODE. */
