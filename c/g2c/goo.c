/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo */

EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
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
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_props,"goo/boot","class-props");
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
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmagYmax,"goo/mag","max");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Yfun_name,"goo/boot","fun-name");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYA,"goo/math","+");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yas_error,"goo/boot","as-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ynot,"goo/boot","not");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ynul,"goo/boot","nul");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YPprop,"goo/boot","%prop");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYas_log,"goo/math","as-log");
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
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmathYN,"goo/math","~");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmathYdiv,"goo/math","div");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_mets,"goo/boot","fun-mets");

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
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSmap;

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
  {&module_info_gooSlate_macros},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"read-delimited-list", &module_info_gooSioSread, NULL},
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
  {"%fu", &module_info_gooSboot, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"write-type", &module_info_gooSioSwrite, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"*gensym-counter*", &module_info_gooSruntime, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
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
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"msg*", &module_info_gooSioSwrite, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {">", &module_info_gooSmag, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"$char-long-names", &module_info_gooSioSread, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
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
  {"<handler>", &module_info_gooSconditions, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
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
  {"dss", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"recurring-write", &module_info_gooSioSwrite, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"port-handle-setter", &module_info_gooSioSport, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"zipped", &module_info_gooSruntime, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"swapf", NULL},
  {"nxt", NULL},
  {"reject", NULL},
  {"type-object", NULL},
  {"<property-error>", NULL},
  {"sort", NULL},
  {"new", NULL},
  {"case-insensitive-string-equal", NULL},
  {"<col>", NULL},
  {"arity-error", NULL},
  {"read", NULL},
  {"<property-type-error>", NULL},
  {"<unbound-variable-error>", NULL},
  {"<map>", NULL},
  {"any2?", NULL},
  {"fill!", NULL},
  {"now-key", NULL},
  {"&", NULL},
  {"pack", NULL},
  {"app-filename", NULL},
  {"open", NULL},
  {"<file-opening-error>", NULL},
  {"*", NULL},
  {"packer", NULL},
  {"use/include", NULL},
  {"pow", NULL},
  {"range-error-key", NULL},
  {"<str-in-port>", NULL},
  {"packing-in", NULL},
  {"class-parents", NULL},
  {"always", NULL},
  {"now", NULL},
  {"<assert-error>", NULL},
  {"prop-type", NULL},
  {"floor", NULL},
  {"rev", NULL},
  {"match-unquote", NULL},
  {"elt-or", NULL},
  {"with-port", NULL},
  {"str-to-num", NULL},
  {"find", NULL},
  {"may-isa?", NULL},
  {"fun-specs", NULL},
  {"<seq!>", NULL},
  {"trunc/", NULL},
  {"range", NULL},
  {"<met>", NULL},
  {"fun", NULL},
  {"low-elt", NULL},
  {"fold", NULL},
  {"pick", NULL},
  {"cos", NULL},
  {"do-keyed", NULL},
  {"<step>", NULL},
  {"isa?", NULL},
  {"opf", NULL},
  {"app", NULL},
  {">>", NULL},
  {"tail-setter", NULL},
  {"var-type", NULL},
  {"list", NULL},
  {"zap", NULL},
  {"low-elt-setter", NULL},
  {"ct-also", NULL},
  {"<return-type-error>", NULL},
  {"flo-bits", NULL},
  {"atan", NULL},
  {"find-setter", NULL},
  {"mif", NULL},
  {"abs", NULL},
  {"export", NULL},
  {"<str-port>", NULL},
  {"floor/", NULL},
  {"product-elts", NULL},
  {"var-name", NULL},
  {"sub*-setter", NULL},
  {"case-insensitive-string-hash", NULL},
  {"elt", NULL},
  {"len/fill-setter", NULL},
  {"fin?", NULL},
  {"to-str", NULL},
  {"%pair", NULL},
  {"macro-error-name", NULL},
  {"tail", NULL},
  {"<fun>", NULL},
  {"need-implementation", NULL},
  {"<type-error>", NULL},
  {"split", NULL},
  {"ddv", NULL},
  {"met-app?", NULL},
  {"all2?", NULL},
  {"1-", NULL},
  {"<str-tab>", NULL},
  {"<vec>", NULL},
  {"~==", NULL},
  {"<file-port>", NULL},
  {"fab-handler", NULL},
  {"class-props", NULL},
  {"enum", NULL},
  {"$max-int", NULL},
  {"call-error-arguments", NULL},
  {"<handler-info>", NULL},
  {"nul", NULL},
  {"%fun-reg", NULL},
  {"handler-info-message", NULL},
  {"class-of", NULL},
  {"%define-method", NULL},
  {"len", NULL},
  {"dup", NULL},
  {"id-hash", NULL},
  {"curry", NULL},
  {"fun-names", NULL},
  {"prop-setter", NULL},
  {"<chr>", NULL},
  {"pushf", NULL},
  {"<tup>", NULL},
  {"sinh", NULL},
  {"pack-in", NULL},
  {"port-index", NULL},
  {"condition-arguments", NULL},
  {"$min-int", NULL},
  {"key-type", NULL},
  {"2nd", NULL},
  {"fun-name", NULL},
  {"each", NULL},
  {"^", NULL},
  {"find-getter", NULL},
  {"cosh", NULL},
  {"loc", NULL},
  {"even?", NULL},
  {"handler-matches?", NULL},
  {">>>", NULL},
  {"$default-handler-info", NULL},
  {"<stack-overflow>", NULL},
  {"rem", NULL},
  {"prop-getter", NULL},
  {"<argument-type-error>", NULL},
  {"odd?", NULL},
  {"ins", NULL},
  {"<simple-condition>", NULL},
  {"condition-message", NULL},
  {"type-error-value", NULL},
  {"<lst>", NULL},
  {"repeat", NULL},
  {"tab-hash", NULL},
  {"<flat>", NULL},
  {"to-digit", NULL},
  {"add", NULL},
  {"round/", NULL},
  {"object-class", NULL},
  {"mod", NULL},
  {"head", NULL},
  {"zero?", NULL},
  {"add-prop", NULL},
  {"neg", NULL},
  {"rep", NULL},
  {"quote", NULL},
  {"<unbound-error>", NULL},
  {"<restart>", NULL},
  {"1+", NULL},
  {"<sym>", NULL},
  {"<condition>", NULL},
  {"last", NULL},
  {"trunc", NULL},
  {"<str>", NULL},
  {"class-name", NULL},
  {"match", NULL},
  {"logn", NULL},
  {"fab-class", NULL},
  {"error", NULL},
  {"dp", NULL},
  {"<arity-error>", NULL},
  {"1st", NULL},
  {"get", NULL},
  {"~=", NULL},
  {"pop!", NULL},
  {"sub", NULL},
  {"newline", NULL},
  {"do", NULL},
  {"<unknown-function-error>", NULL},
  {"<file-out-port>", NULL},
  {"<port>", NULL},
  {"<no-applicable-methods-error>", NULL},
  {"isqrt", NULL},
  {"exported", NULL},
  {"t*", NULL},
  {"t+", NULL},
  {"<seq.>", NULL},
  {"<set>", NULL},
  {"t=", NULL},
  {">", NULL},
  {"<tab>", NULL},
  {"max", NULL},
  {"<enum>", NULL},
  {"df", NULL},
  {"*print-base*", NULL},
  {"use/mangle", NULL},
  {"tup", NULL},
  {"mod+", NULL},
  {"<internal-error>", NULL},
  {"@not", NULL},
  {"sub*", NULL},
  {"first-then", NULL},
  {"dlet", NULL},
  {"use/export", NULL},
  {"<packer>", NULL},
  {"property-error-generic", NULL},
  {"until", NULL},
  {"property-error-owner", NULL},
  {"<seq>", NULL},
  {"<", NULL},
  {"unbound-variable-error-variable", NULL},
  {"sin", NULL},
  {"dg", NULL},
  {"or", NULL},
  {"push!", NULL},
  {"popf", NULL},
  {"below", NULL},
  {"set", NULL},
  {"and", NULL},
  {"head-setter", NULL},
  {"<keyboard-interrupt>", NULL},
  {"any?", NULL},
  {"elts", NULL},
  {"<io-error>", NULL},
  {"<col!>", NULL},
  {"acos", NULL},
  {"=", NULL},
  {"suffix?", NULL},
  {"dc", NULL},
  {"op", NULL},
  {"prefix?", NULL},
  {"if", NULL},
  {"union-elts", NULL},
  {"str", NULL},
  {"subtype?", NULL},
  {"tab-growth-threshold", NULL},
  {"<col.>", NULL},
  {"<str-out-port>", NULL},
  {"in", NULL},
  {"prop-value-setter", NULL},
  {"rcurry", NULL},
  {"min", NULL},
  {"to-upper", NULL},
  {"map2", NULL},
  {"neg?", NULL},
  {"ct", NULL},
  {"%next-methods", NULL},
  {"packed", NULL},
  {"handler-info-arguments", NULL},
  {"col-res-type", NULL},
  {"narity-error", NULL},
  {"<error>", NULL},
  {"t<", NULL},
  {"t?", NULL},
  {"class-ancestors", NULL},
  {"<handler>", NULL},
  {"tab-shrink-threshold", NULL},
  {"$e", NULL},
  {"@==", NULL},
  {"renew", NULL},
  {"-", NULL},
  {"|", NULL},
  {"del-dups", NULL},
  {"join", NULL},
  {"all?", NULL},
  {"<prop>", NULL},
  {"packing-with", NULL},
  {"from", NULL},
  {"cond", NULL},
  {"elt!", NULL},
  {"del!", NULL},
  {"%prop-unbound-error", NULL},
  {"fab", NULL},
  {"3rd", NULL},
  {"let", NULL},
  {"packing", NULL},
  {"items", NULL},
  {"<loc>", NULL},
  {"prop-bound?", NULL},
  {"==", NULL},
  {">=", NULL},
  {"fab-setter-name", NULL},
  {"<product>", NULL},
  {"post", NULL},
  {"napp", NULL},
  {"macro-expand", NULL},
  {"sup", NULL},
  {"gets", NULL},
  {"atan2", NULL},
  {"type-error-type", NULL},
  {"fill", NULL},
  {"ceil/", NULL},
  {"<flo>", NULL},
  {"for", NULL},
  {"<file-in-port>", NULL},
  {"case", NULL},
  {"<serious-condition>", NULL},
  {"no-next-methods-error", NULL},
  {"empty", NULL},
  {"not", NULL},
  {"gensym", NULL},
  {"<union>", NULL},
  {"internal-error", NULL},
  {"%prop", NULL},
  {"out", NULL},
  {"decf", NULL},
  {"to-lower", NULL},
  {"do3", NULL},
  {"prop-value", NULL},
  {"fun-val", NULL},
  {"when", NULL},
  {"<<", NULL},
  {"app-args", NULL},
  {"msg", NULL},
  {"ord-app-mets", NULL},
  {"sort-by!", NULL},
  {"log", NULL},
  {"cycle", NULL},
  {"dm", NULL},
  {"cat!", NULL},
  {"while", NULL},
  {"bit?", NULL},
  {"<int>", NULL},
  {"eof-object?", NULL},
  {"<=", NULL},
  {"<subclass>", NULL},
  {"$pi", NULL},
  {"esc", NULL},
  {"modincf", NULL},
  {"lst", NULL},
  {"puts", NULL},
  {"write", NULL},
  {"col", NULL},
  {"use", NULL},
  {"<class>", NULL},
  {"dv", NULL},
  {"now-setter", NULL},
  {"<num>", NULL},
  {"range-by", NULL},
  {"pop", NULL},
  {"zap!", NULL},
  {"handler-function", NULL},
  {"sort-by", NULL},
  {"<out-port>", NULL},
  {"<range-error>", NULL},
  {"sort!", NULL},
  {"<singleton>", NULL},
  {"find-or", NULL},
  {"rev!", NULL},
  {"empty?", NULL},
  {"asin", NULL},
  {"peek", NULL},
  {"sig", NULL},
  {"use/library", NULL},
  {"<as-error>", NULL},
  {"fabs", NULL},
  {"port-line", NULL},
  {"ds", NULL},
  {"del", NULL},
  {"type-class", NULL},
  {"cat-sym", NULL},
  {"*max-print-length*", NULL},
  {"<in-port>", NULL},
  {"key-test", NULL},
  {"macro-error", NULL},
  {"match-sublist", NULL},
  {"close", NULL},
  {"bound?", NULL},
  {"file-opening-error-filename", NULL},
  {"do2", NULL},
  {"len-setter", NULL},
  {"<compiler-error>", NULL},
  {"loc-val-setter", NULL},
  {"round", NULL},
  {"vec", NULL},
  {"del-dups!", NULL},
  {"<property-not-found-error>", NULL},
  {"num-to-str", NULL},
  {"<simple-error>", NULL},
  {"class-direct-props", NULL},
  {"push", NULL},
  {"upper?", NULL},
  {"fun-arity", NULL},
  {"pos?", NULL},
  {"match-empty-list", NULL},
  {"rotf", NULL},
  {"compose", NULL},
  {"prop-init", NULL},
  {"<call-error>", NULL},
  {"packer-res", NULL},
  {"as", NULL},
  {"~", NULL},
  {"assert-error", NULL},
  {"<no-next-methods-error>", NULL},
  {"digit?", NULL},
  {"case-by", NULL},
  {"/", NULL},
  {"say", NULL},
  {"<simple-handler-info>", NULL},
  {"loc-val", NULL},
  {"def", NULL},
  {"mem?", NULL},
  {"<property-unbound-error>", NULL},
  {"<log>", NULL},
  {"assert", NULL},
  {"<list>", NULL},
  {"tan", NULL},
  {"<opts>", NULL},
  {"seq", NULL},
  {"<narity-error>", NULL},
  {"unzip", NULL},
  {"pos", NULL},
  {"div", NULL},
  {"keys", NULL},
  {"ready?", NULL},
  {"*max-print-depth*", NULL},
  {"del-vals!", NULL},
  {"col-res", NULL},
  {"nil", NULL},
  {"elt-default", NULL},
  {"range-error-collection", NULL},
  {"<any>", NULL},
  {"identity", NULL},
  {"map", NULL},
  {"unless", NULL},
  {"prop-owner", NULL},
  {"<cycle>", NULL},
  {"put", NULL},
  {"cat2", NULL},
  {"<zip>", NULL},
  {"emit", NULL},
  {"zip", NULL},
  {"writeln", NULL},
  {"<syntax-error>", NULL},
  {"packer-add", NULL},
  {"pair", NULL},
  {"call-error-function", NULL},
  {"describe-condition", NULL},
  {"into", NULL},
  {"default-handler", NULL},
  {"port-contents", NULL},
  {"address-of", NULL},
  {"quasiquote", NULL},
  {"del-vals", NULL},
  {"ceil", NULL},
  {"<macro-error>", NULL},
  {"write-to-string", NULL},
  {"sqrt", NULL},
  {"fold+", NULL},
  {"elt-type", NULL},
  {"clone", NULL},
  {"num-to-str-base", NULL},
  {"elt-setter", NULL},
  {"try", NULL},
  {"lower?", NULL},
  {"finds", NULL},
  {"pub", NULL},
  {"fun-nary?", NULL},
  {"<ambiguous-method-error>", NULL},
  {"app-sup", NULL},
  {"+", NULL},
  {"tab-growth-factor", NULL},
  {"add!", NULL},
  {"gen-add-met", NULL},
  {"packer-fab", NULL},
  {"read-from-string", NULL},
  {"alpha?", NULL},
  {"msg-to-str", NULL},
  {"<type>", NULL},
  {"sub-setter", NULL},
  {"<range>", NULL},
  {"incf", NULL},
  {"force-out", NULL},
  {"<arithmetic-error>", NULL},
  {"<gen>", NULL},
  {"match-atom", NULL},
  {"class-children", NULL},
  {"fin", NULL},
  {"macro-error-arguments", NULL},
  {"tanh", NULL},
  {"<each>", NULL},
  {"cat", NULL},
  {"map-keyed", NULL},
  {"fun-mets", NULL},
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
extern void load_module_gooSlate_macros (void);

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
  load_module_gooSlate_macros();

  (P)YgooY___main_0___();

}

/* END OF GENERATED CODE. */
