/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"time/threads");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: time/threads */

EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Ynew,"goo/boot","new");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YtimeSthreadsYthread_join,"time/threads","thread-join");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ynil,"goo/boot","nil");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Ylst,"goo/boot","lst");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yclass_of,"goo/boot","class-of");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YOlst,"goo/boot","@lst");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yfun_name,"goo/boot","fun-name");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
DEF(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
DEF(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yas_error,"goo/boot","as-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
DEF(YtimeSthreadsYthread_function_setter,"time/threads","thread-function-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YtimeSthreadsYthread_handle_setter,"time/threads","thread-handle-setter");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Ynul,"goo/boot","nul");
EXT(YLunionG,"goo/boot","<union>");
DEF(YtimeSthreadsYthread_priority_setter,"time/threads","thread-priority-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLintG,"goo/boot","<int>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YtimeSthreadsYmain_thread_key,"time/threads","main-thread-key");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
DEF(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
DEF(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYN,"goo/math","~");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
DEF(YtimeSthreadsYthread_name_setter,"time/threads","thread-name-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YtimeSthreadsYthread_handle,"time/threads","thread-handle");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DEF(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yclone,"goo/boot","clone");
DEF(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YtT,"goo/boot","t*");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_mets,"goo/boot","fun-mets");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_3);
DEFLIT(lit_36);
DEFLIT(lit_40);
DEFLIT(lit_6);
DEFLIT(lit_19);
DEFLIT(lit_30);
DEFLIT(lit_49);
DEFLIT(lit_43);
DEFLIT(lit_9);
DEFLIT(lit_18);
DEFLIT(lit_34);
DEFLIT(lit_21);
DEFLIT(lit_46);
DEFLIT(lit_23);
DEFLIT(lit_42);
DEFLIT(lit_29);
DEFLIT(lit_38);
DEFLIT(lit_25);
DEFLIT(lit_24);
DEFLIT(lit_44);
DEFLIT(lit_48);
DEFLIT(lit_27);
DEFLIT(lit_0);
DEFLIT(lit_14);
DEFLIT(lit_45);
DEFLIT(lit_7);
DEFLIT(lit_4);
DEFLIT(lit_32);
DEFLIT(lit_16);
DEFLIT(lit_31);
DEFLIT(lit_35);
DEFLIT(lit_33);
DEFLIT(lit_11);
DEFLIT(lit_37);
DEFLIT(lit_10);
DEFLIT(lit_1);
DEFLIT(lit_13);
DEFLIT(lit_39);
DEFLIT(lit_22);
DEFLIT(lit_15);
DEFLIT(lit_26);
DEFLIT(lit_17);
DEFLIT(lit_5);
DEFLIT(lit_28);
DEFLIT(lit_12);
DEFLIT(lit_47);
DEFLIT(lit_2);
DEFLIT(lit_41);
DEFLIT(lit_20);
DEFLIT(lit_8);

/* FUNCTIONS: */

LOCFOR(fun_thread_name_0);
LOCFOR(fun_thread_name_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_thread_priority_3);
LOCFOR(fun_thread_priority_setter_4);
LOCFOR(fun_5);
LOCFOR(fun_thread_function_6);
LOCFOR(fun_thread_function_setter_7);
LOCFOR(fun_8);
LOCFOR(fun_9);
LOCFOR(fun_thread_handle_10);
LOCFOR(fun_thread_handle_setter_11);
LOCFOR(fun_thread_yield_12);
FUNFOR(YtimeSthreadsYmain_thread_key);
LOCFOR(fun_14);
LOCFOR(fun_15);
LOCFOR(fun_16);
LOCFOR(fun_17);
LOCFOR(fun_new_18);
LOCFOR(fun_x_1767_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_sleep_22);
LOCFOR(fun_thread_current_23);
LOCFOR(fun_thread_join_24);
LOCFOR(fun_x_1769_25);
LOCFOR(fun_26);
FUNFOR(YtimeSthreadsYtest_thread_1);
LOCFOR(fun_x_1771_28);
LOCFOR(fun_29);
FUNFOR(YtimeSthreadsYtest_thread_2);
extern P YtimeSthreadsY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_thread_name_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSthreadsYthread_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_thread_name_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSthreadsYthread_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_thread_priority_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSthreadsYthread_priority));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_thread_priority_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSthreadsYthread_priority));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_thread_function_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSthreadsYthread_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_thread_function_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSthreadsYthread_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_9) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = fun_8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_thread_handle_10) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSthreadsYthread_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_thread_handle_setter_11) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSthreadsYthread_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_thread_yield_12) {
  P T0;
LINK_STACK();
loop:
  T0 = (P)YtimeSthreadsYPthread_yield();
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtimeSthreadsYmain_thread_key) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_14) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_15) {
  P c_,r_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSconditionsYdescribe_condition),c_);
  T0 = CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_26),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_16) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YtimeSthreadsYthread_function),FREEREF(0));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  DYNSET(YgooSconditionsYTcurrent_handlersT,Ynil);
  T1 = fun_14;
  T2 = fun_15;
  T3 = FUNFAB(fun_16,1,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLconditionG),VARREF(YgooSconditionsYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_new_18) {
  P x_,args_;
  P xF3727;
  P xF3726;
  P hF3725;
  P xF3724;
  P fF3723;
  P tF3722;
  P xF3721;
  P yF3720;
  P xF3719;
  P tmpF3718;
  P next_metsF3717;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(args_, 1);
loop:
  T2 = (P)YPnext_methods();
  next_metsF3717 = T2;
  tmpF3718 = next_metsF3717;
  if (tmpF3718 != YPfalse) {
    xF3719 = next_metsF3717;
    yF3720 = Ynil;
    T9 = (P)YPeqQ(xF3719,yF3720);
    T8 = (P)YPbb(T9);
    T7 = T8;
    xF3721 = T7;
    T11 = (P)YPeqQ(xF3721,YPfalse);
    T10 = (P)YPbb(T11);
    T6 = T10;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  if (T4 != YPfalse) {
    T13 = CALL1(1,VARREF(Yhead),next_metsF3717);
    T14 = CALL1(1,VARREF(Ytail),next_metsF3717);
    T12 = CALL4(1,VARREF(YgooSmacrosYnapp),T13,T14,x_,args_);
    T3 = T12;
  } else {
    T16 = (P)YPfun_reg();
    T17 = CALL2(1,VARREF(Ylst),x_,args_);
    T15 = CALL2(1,VARREF(Yno_next_methods_error),T16,T17);
    T3 = T15;
  }
  T1 = T3;
  tF3722 = T1;
  T20 = CALL1(1,VARREF(YtimeSthreadsYthread_function),tF3722);
  T19 = CALL2(1,VARREF(YgooSmacrosYEE),T20,VARREF(YtimeSthreadsYmain_thread_key));
  T18 = CALL1(1,VARREF(Ynot),T19);
  if (T18 != YPfalse) {
    T22 = FUNFAB(fun_17,1,tF3722);
    fF3723 = T22;
    T26 = CALL2(1,VARREF(Ytup),fF3723,tF3722);
    T25 = (P)YtimeSthreadsYPthread_create(T26);
    xF3724 = T25;
    T27 = (P)YPtag_into(xF3724,(P)3);
    T24 = T27;
    hF3725 = T24;
    CALL2(1,VARREF(YtimeSthreadsYthread_handle_setter),hF3725,tF3722);
    T30 = CALL1(1,VARREF(YtimeSthreadsYthread_priority),tF3722);
    xF3726 = T30;
    xF3727 = xF3726;
    T32 = (P)YPiGG(xF3727,(P)2);
    T31 = T32;
    T29 = T31;
    T28 = (P)YtimeSthreadsYPthread_priority_setter(T29,hF3725);
    T23 = T28;
    T21 = T23;
  } else {
  }
  T0 = tF3722;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1767_19) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_32),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P return_;
  P x_1766F3734;
  P x_1766F3733;
  P x_1766F3732;
  P x_1766F3731;
  P bodyF3730;
  P x_1766F3729;
  P x_1767F3728;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1767_19,2);
  x_1767F3728 = T1;
  FUNINIT(x_1767F3728, 2,FREEREF(0),return_);
  x_1766F3729 = FREEREF(0);
  bodyF3730 = YPfalse;
  bodyF3730 = BOXFAB(bodyF3730);
  T5 = CALL2(1,VARREF(YisaQ),x_1766F3729,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1766F3729,LITREF(lit_32),x_1767F3728);
    x_1766F3731 = T7;
    BOXVAL(bodyF3730) = x_1766F3731;
    x_1766F3732 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1766F3732,x_1767F3728);
    x_1766F3733 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1766F3733,x_1767F3728);
    T12 = CALL1(1,VARREF(Ytail),x_1766F3732);
    x_1766F3734 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1766F3734,x_1767F3728);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1767F3728,LITREF(lit_33),x_1766F3729);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_23));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_0));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T22 = CALL1(1,VARREF(Ylst),Ynil);
  T23 = BOXVAL(bodyF3730);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T23,LITREF(lit_35));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T15 = CALL5(1,VARREF(YgooSmacrosYcat),T16,T17,T18,T19,LITREF(lit_35));
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_20,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sleep_22) {
  P secs_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(secs_, 0);
loop:
  T1 = (P)YPfu(secs_);
  T0 = (P)YtimeSthreadsYPthread_sleep(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_thread_current_23) {
  P xF3735;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T2 = (P)YtimeSthreadsYPthread_current();
  xF3735 = T2;
  T3 = (P)YPtag_into(xF3735,(P)3);
  T1 = T3;
  T0 = (P)YtimeSthreadsYPthread_goo_thread(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_thread_join_24) {
  P t_;
  P xF3736;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T2 = CALL1(1,VARREF(YtimeSthreadsYthread_handle),t_);
  xF3736 = T2;
  T3 = (P)YPuntag_into(xF3736);
  T1 = T3;
  T0 = (P)YtimeSthreadsYPthread_join(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1769_25) {
  P x_1768_;
  P iF3737;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1768_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1768_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1768_);
    iF3737 = T4;
    CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_44),iF3737);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1768_);
    a1 = T6;
    x_1768_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P x_1769F3738;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_x_1769_25,1);
  x_1769F3738 = T1;
  FUNINIT(x_1769F3738, 1,x_1769F3738);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),YPint((P)3000));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1769F3738,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtimeSthreadsYtest_thread_1) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = fun_26;
  T0 = CALL3(1,VARREF(Ynew),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_function),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1771_28) {
  P x_1770_;
  P iF3739;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1770_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1770_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1770_);
    iF3739 = T4;
    CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_48),iF3739);
    CALL1(1,VARREF(YtimeSthreadsYsleep),LITREF(lit_49));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1770_);
    a1 = T6;
    x_1770_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P x_1771F3740;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_x_1771_28,1);
  x_1771F3740 = T1;
  FUNINIT(x_1771F3740, 1,x_1771F3740);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),YPint((P)100));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1771F3740,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtimeSthreadsYtest_thread_2) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = fun_29;
  T0 = CALL3(1,VARREF(Ynew),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_function),T1);
UNLINK_STACK();
  QRET(T0);
}

P YtimeSthreadsY___main_0___() {
  P xF3741;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<thread>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YtimeSthreadsYLthreadG,T0);
  lit_1 = YPPsym((P)"thread-name");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_name_0 = YPmet(FUNCODEREF(fun_thread_name_0),LITREF(lit_1),T2,ENVNUL,PNUL,sloc(20));
  T5 = BOUNDP(YtimeSthreadsYthread_name);
  if (T5 != YPfalse) {
    T4 = VARREF(YtimeSthreadsYthread_name);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_thread_name_0;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YtimeSthreadsYthread_name,T3);
  lit_3 = YPPsym((P)"thread-name-setter");
  lit_4 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T8 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T7 = YPsig(LITREF(lit_4),YPPlist(2,T8,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_thread_name_setter_1 = YPmet(FUNCODEREF(fun_thread_name_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,sloc(20));
  T11 = BOUNDP(YtimeSthreadsYthread_name_setter);
  if (T11 != YPfalse) {
    T10 = VARREF(YtimeSthreadsYthread_name_setter);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_thread_name_setter_1;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YtimeSthreadsYthread_name_setter,T9);
  lit_5 = YPPlist(1,YPPsym((P)"_x"));
  T13 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T13,ENVNUL,PNUL,sloc(20));
  T14 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T15 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_name),VARREF(YtimeSthreadsYthread_name_setter),T14,T15);
  lit_6 = YPPsym((P)"thread-priority");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_priority_3 = YPmet(FUNCODEREF(fun_thread_priority_3),LITREF(lit_6),T16,ENVNUL,PNUL,sloc(21));
  T19 = BOUNDP(YtimeSthreadsYthread_priority);
  if (T19 != YPfalse) {
    T18 = VARREF(YtimeSthreadsYthread_priority);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_thread_priority_3;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YtimeSthreadsYthread_priority,T17);
  lit_8 = YPPsym((P)"thread-priority-setter");
  lit_9 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T21 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLintG),VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_thread_priority_setter_4 = YPmet(FUNCODEREF(fun_thread_priority_setter_4),LITREF(lit_8),T21,ENVNUL,PNUL,sloc(21));
  T24 = BOUNDP(YtimeSthreadsYthread_priority_setter);
  if (T24 != YPfalse) {
    T23 = VARREF(YtimeSthreadsYthread_priority_setter);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_thread_priority_setter_4;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YtimeSthreadsYthread_priority_setter,T22);
  lit_10 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_10),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T26,ENVNUL,PNUL,sloc(21));
  T27 = fun_5;
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_priority),VARREF(YtimeSthreadsYthread_priority_setter),VARREF(YLintG),T27);
  lit_11 = YPPsym((P)"thread-function");
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_function_6 = YPmet(FUNCODEREF(fun_thread_function_6),LITREF(lit_11),T28,ENVNUL,PNUL,sloc(22));
  T31 = BOUNDP(YtimeSthreadsYthread_function);
  if (T31 != YPfalse) {
    T30 = VARREF(YtimeSthreadsYthread_function);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_thread_function_6;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YtimeSthreadsYthread_function,T29);
  lit_13 = YPPsym((P)"thread-function-setter");
  lit_14 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T33 = YPsig(LITREF(lit_14),YPPlist(2,VARREF(YLfunG),VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_thread_function_setter_7 = YPmet(FUNCODEREF(fun_thread_function_setter_7),LITREF(lit_13),T33,ENVNUL,PNUL,sloc(22));
  T36 = BOUNDP(YtimeSthreadsYthread_function_setter);
  if (T36 != YPfalse) {
    T35 = VARREF(YtimeSthreadsYthread_function_setter);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_thread_function_setter_7;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YtimeSthreadsYthread_function_setter,T34);
  lit_15 = YPPlist(1,YPPsym((P)"_x"));
  lit_16 = Ynil;
  T39 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T39,ENVNUL,PNUL,sloc(22));
  T38 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T38,ENVNUL,PNUL,sloc(22));
  T40 = fun_9;
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_function),VARREF(YtimeSthreadsYthread_function_setter),VARREF(YLfunG),T40);
  lit_17 = YPPsym((P)"thread-handle");
  lit_18 = YPPlist(1,YPPsym((P)"_x"));
  T41 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_handle_10 = YPmet(FUNCODEREF(fun_thread_handle_10),LITREF(lit_17),T41,ENVNUL,PNUL,sloc(23));
  T44 = BOUNDP(YtimeSthreadsYthread_handle);
  if (T44 != YPfalse) {
    T43 = VARREF(YtimeSthreadsYthread_handle);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_thread_handle_10;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YtimeSthreadsYthread_handle,T42);
  lit_19 = YPPsym((P)"thread-handle-setter");
  lit_20 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_20),YPPlist(2,VARREF(YLlocG),VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_thread_handle_setter_11 = YPmet(FUNCODEREF(fun_thread_handle_setter_11),LITREF(lit_19),T46,ENVNUL,PNUL,sloc(23));
  T49 = BOUNDP(YtimeSthreadsYthread_handle_setter);
  if (T49 != YPfalse) {
    T48 = VARREF(YtimeSthreadsYthread_handle_setter);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_thread_handle_setter_11;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YtimeSthreadsYthread_handle_setter,T47);
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_handle),VARREF(YtimeSthreadsYthread_handle_setter),VARREF(YLlocG),VARREF(YPprop_unbound_error));
  lit_21 = YPPsym((P)"thread-yield");
  T51 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_thread_yield_12 = YPmet(FUNCODEREF(fun_thread_yield_12),LITREF(lit_21),T51,ENVNUL,PNUL,sloc(25));
  T54 = BOUNDP(YtimeSthreadsYthread_yield);
  if (T54 != YPfalse) {
    T53 = VARREF(YtimeSthreadsYthread_yield);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_thread_yield_12;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YtimeSthreadsYthread_yield,T52);
  lit_22 = YPPsym((P)"main-thread-key");
  T56 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YtimeSthreadsYmain_thread_key = YPmet(FUNCODEREF(YtimeSthreadsYmain_thread_key),LITREF(lit_22),T56,ENVNUL,PNUL,sloc(27));
  T57 = YtimeSthreadsYmain_thread_key;
  VARSET(YtimeSthreadsYmain_thread_key,T57);
  lit_23 = YPPsym((P)"new");
  lit_24 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"args"));
  lit_25 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_26 = YPsb((P)"ERROR: %s");
  T63 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T62,ENVNUL,PNUL,sloc(35));
  T61 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T61,ENVNUL,PNUL,sloc(36));
  T60 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T60,ENVNUL,PNUL,sloc(32));
  T59 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YtimeSthreadsYLthreadG));
  T58 = YPsig(LITREF(lit_24),YPPlist(1,T59),YPtrue,YPint((P)1),VARREF(YtimeSthreadsYLthreadG),Ynil);
  fun_new_18 = YPmet(FUNCODEREF(fun_new_18),LITREF(lit_23),T58,ENVNUL,PNUL,sloc(29));
  T66 = BOUNDP(Ynew);
  if (T66 != YPfalse) {
    T65 = VARREF(Ynew);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_new_18;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(Ynew,T64);
  lit_27 = YPPsym((P)"main");
  T69 = (P)YtimeSthreadsYPthread_current();
  xF3741 = T69;
  T70 = (P)YPtag_into(xF3741,(P)3);
  T68 = T70;
  XCALLN(1,VARREF(Ynew),7,VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_name),LITREF(lit_27),VARREF(YtimeSthreadsYthread_function),VARREF(YtimeSthreadsYmain_thread_key),VARREF(YtimeSthreadsYthread_handle),T68);
  lit_28 = YPPlist(1,YPPsym((P)"exp"));
  lit_29 = YPPlist(1,YPPsym((P)"return"));
  lit_30 = YPPsym((P)"x-1767");
  lit_31 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_32 = YPPsym((P)"spawn");
  lit_33 = YPsb((P)"Match Pattern Failure");
  lit_34 = YPPsym((P)"fun");
  lit_35 = Ynil;
  T73 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1767_19 = YPmet(FUNCODEREF(fun_x_1767_19),LITREF(lit_30),T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T74 = fun_21;
  YPmacro(YPPsym((P)"time/threads"),YPPsym((P)"spawn"),T74);
  lit_36 = YPPsym((P)"sleep");
  lit_37 = YPPlist(1,YPPsym((P)"secs"));
  T75 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sleep_22 = YPmet(FUNCODEREF(fun_sleep_22),LITREF(lit_36),T75,ENVNUL,PNUL,sloc(50));
  T78 = BOUNDP(YtimeSthreadsYsleep);
  if (T78 != YPfalse) {
    T77 = VARREF(YtimeSthreadsYsleep);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sleep_22;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YtimeSthreadsYsleep,T76);
  lit_38 = YPPsym((P)"thread-current");
  T80 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YtimeSthreadsYLthreadG),Ynil);
  fun_thread_current_23 = YPmet(FUNCODEREF(fun_thread_current_23),LITREF(lit_38),T80,ENVNUL,PNUL,sloc(53));
  T83 = BOUNDP(YtimeSthreadsYthread_current);
  if (T83 != YPfalse) {
    T82 = VARREF(YtimeSthreadsYthread_current);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_thread_current_23;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YtimeSthreadsYthread_current,T81);
  lit_39 = YPPsym((P)"thread-join");
  lit_40 = YPPlist(1,YPPsym((P)"t"));
  T85 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_join_24 = YPmet(FUNCODEREF(fun_thread_join_24),LITREF(lit_39),T85,ENVNUL,PNUL,sloc(56));
  T88 = BOUNDP(YtimeSthreadsYthread_join);
  if (T88 != YPfalse) {
    T87 = VARREF(YtimeSthreadsYthread_join);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_thread_join_24;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YtimeSthreadsYthread_join,T86);
  lit_41 = YPPsym((P)"test-thread-1");
  lit_42 = YPPsym((P)"x-1769");
  lit_43 = YPPlist(1,YPPsym((P)"x-1768"));
  lit_44 = YPsb((P)"%d\n");
  T92 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1769_25 = YPmet(FUNCODEREF(fun_x_1769_25),LITREF(lit_42),T92,ENVNUL,PNUL,sloc(60));
  T91 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T91,ENVNUL,PNUL,sloc(60));
  T90 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YtimeSthreadsYtest_thread_1 = YPmet(FUNCODEREF(YtimeSthreadsYtest_thread_1),LITREF(lit_41),T90,ENVNUL,PNUL,sloc(59));
  T93 = YtimeSthreadsYtest_thread_1;
  VARSET(YtimeSthreadsYtest_thread_1,T93);
  lit_45 = YPPsym((P)"test-thread-2");
  lit_46 = YPPsym((P)"x-1771");
  lit_47 = YPPlist(1,YPPsym((P)"x-1770"));
  lit_48 = YPsb((P)"%d\n");
  lit_49 = YPflo(FLOINT(1.0));
  T96 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1771_28 = YPmet(FUNCODEREF(fun_x_1771_28),LITREF(lit_46),T96,ENVNUL,PNUL,sloc(63));
  T95 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T95,ENVNUL,PNUL,sloc(63));
  T94 = YPsig(LITREF(lit_16),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YtimeSthreadsYtest_thread_2 = YPmet(FUNCODEREF(YtimeSthreadsYtest_thread_2),LITREF(lit_45),T94,ENVNUL,PNUL,sloc(62));
  T97 = YtimeSthreadsYtest_thread_2;
  VARSET(YtimeSthreadsYtest_thread_2,T97);
  T98 = YPfalse;
  return T98;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSruntime},
  {&module_info_gooSconditions},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"*gensym-counter*", &module_info_gooSruntime, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"zipped", &module_info_gooSruntime, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"spawn", PVAR, NULL},
  {"thread-join", CVAR, &YtimeSthreadsYthread_join},
  {"%thread-current", PVAR, NULL},
  {"thread-current", CVAR, &YtimeSthreadsYthread_current},
  {"---main-0---", PVAR, NULL},
  {"%thread-detach", PVAR, NULL},
  {"%thread-yield", PVAR, NULL},
  {"test-thread-1", CVAR, &YtimeSthreadsYtest_thread_1},
  {"thread-name", CVAR, &YtimeSthreadsYthread_name},
  {"thread-function-setter", CVAR, &YtimeSthreadsYthread_function_setter},
  {"thread-handle-setter", CVAR, &YtimeSthreadsYthread_handle_setter},
  {"%thread-priority-setter", PVAR, NULL},
  {"thread-priority-setter", CVAR, &YtimeSthreadsYthread_priority_setter},
  {"main-thread-key", CVAR, &YtimeSthreadsYmain_thread_key},
  {"test-thread-2", CVAR, &YtimeSthreadsYtest_thread_2},
  {"%thread-sleep", PVAR, NULL},
  {"thread-yield", CVAR, &YtimeSthreadsYthread_yield},
  {"sleep", CVAR, &YtimeSthreadsYsleep},
  {"thread-name-setter", CVAR, &YtimeSthreadsYthread_name_setter},
  {"thread-handle", CVAR, &YtimeSthreadsYthread_handle},
  {"%thread-goo-thread", PVAR, NULL},
  {"thread-function", CVAR, &YtimeSthreadsYthread_function},
  {"thread-priority", CVAR, &YtimeSthreadsYthread_priority},
  {"<thread>", CVAR, &YtimeSthreadsYLthreadG},
  {"%thread-join", PVAR, NULL},
  {"%thread-priority", PVAR, NULL},
  {"%thread-create", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"spawn", NULL},
  {"thread-current", NULL},
  {"test-thread-1", NULL},
  {"thread-name", NULL},
  {"sleep", NULL},
  {"test-thread-2", NULL},
  {"thread-yield", NULL},
  {"thread-function", NULL},
  {"thread-priority", NULL},
  {"<thread>", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_timeSthreads;
MODULE_INFO module_info_timeSthreads = {
  "time/threads",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooSruntime (void);
extern void load_module_gooSconditions (void);

/* EXPRESSION: */

extern void load_module_timeSthreads (void);

void load_module_timeSthreads (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSruntime();
  load_module_gooSconditions();

  (P)YtimeSthreadsY___main_0___();

}

/* END OF GENERATED CODE. */
