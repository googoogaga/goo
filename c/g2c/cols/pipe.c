/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"cols/pipe");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: cols/pipe */

EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
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
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YcolsSpipeYpipe_lock,"cols/pipe","pipe-lock");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSruntimeYalways,"goo/runtime","always");
DEF(YcolsSpipeYpipe_get_idx_setter,"cols/pipe","pipe-get-idx-setter");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ynil,"goo/boot","nil");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
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
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
DEF(YcolsSpipeYenqX,"cols/pipe","enq!");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yfind_getter,"goo/boot","find-getter");
DEF(YcolsSpipeYpipe_put_idx,"cols/pipe","pipe-put-idx");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
DEF(YcolsSpipeYpipe_available_setter,"cols/pipe","pipe-available-setter");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(YcolsSpipeYpipe_data_setter,"cols/pipe","pipe-data-setter");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
DEF(YcolsSpipeYpipe_get_idx,"cols/pipe","pipe-get-idx");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YtimeSeventYevent_name,"time/event","event-name");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yfun_name,"goo/boot","fun-name");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
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
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSmathYDe,"goo/math","$e");
DEF(YcolsSpipeYpipe_idx,"cols/pipe","pipe-idx");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
DEF(YcolsSpipeYLpipeG,"cols/pipe","<pipe>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
DEF(YcolsSpipeYpipe_data,"cols/pipe","pipe-data");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ynul,"goo/boot","nul");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(Yfun_val,"goo/boot","fun-val");
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
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
DEF(YcolsSpipeYOlen,"cols/pipe","@len");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YcolsSpipeYpipe_lock_setter,"cols/pipe","pipe-lock-setter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YcolsSpipeYpipe_available,"cols/pipe","pipe-available");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooStypesYas,"goo/types","as");
EXT(YtimeSeventYLeventG,"time/event","<event>");
EXT(YgooSmathYN,"goo/math","~");
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
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
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
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLanyG,"goo/boot","<any>");
DEF(YcolsSpipeYgrow_pipeX,"cols/pipe","grow-pipe!");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(YcolsSpipeYdeqX,"cols/pipe","deq!");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(YcolsSpipeYpipe_put_idx_setter,"cols/pipe","pipe-put-idx-setter");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYA,"goo/math","+");
EXT(YtT,"goo/boot","t*");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
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
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_mets,"goo/boot","fun-mets");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_25);
DEFLIT(lit_29);
DEFLIT(lit_35);
DEFLIT(lit_39);
DEFLIT(lit_24);
DEFLIT(lit_1);
DEFLIT(lit_17);
DEFLIT(lit_30);
DEFLIT(lit_0);
DEFLIT(lit_18);
DEFLIT(lit_36);
DEFLIT(lit_47);
DEFLIT(lit_4);
DEFLIT(lit_21);
DEFLIT(lit_37);
DEFLIT(lit_48);
DEFLIT(lit_38);
DEFLIT(lit_6);
DEFLIT(lit_41);
DEFLIT(lit_22);
DEFLIT(lit_23);
DEFLIT(lit_11);
DEFLIT(lit_28);
DEFLIT(lit_2);
DEFLIT(lit_44);
DEFLIT(lit_49);
DEFLIT(lit_45);
DEFLIT(lit_13);
DEFLIT(lit_26);
DEFLIT(lit_42);
DEFLIT(lit_3);
DEFLIT(lit_31);
DEFLIT(lit_16);
DEFLIT(lit_43);
DEFLIT(lit_20);
DEFLIT(lit_33);
DEFLIT(lit_12);
DEFLIT(lit_10);
DEFLIT(lit_40);
DEFLIT(lit_34);
DEFLIT(lit_14);
DEFLIT(lit_19);
DEFLIT(lit_46);
DEFLIT(lit_5);
DEFLIT(lit_15);
DEFLIT(lit_8);
DEFLIT(lit_27);
DEFLIT(lit_7);
DEFLIT(lit_9);
DEFLIT(lit_32);

/* FUNCTIONS: */

LOCFOR(fun_pipe_data_0);
LOCFOR(fun_pipe_data_setter_1);
LOCFOR(fun_pipe_get_idx_2);
LOCFOR(fun_pipe_get_idx_setter_3);
LOCFOR(fun_4);
LOCFOR(fun_pipe_put_idx_5);
LOCFOR(fun_pipe_put_idx_setter_6);
LOCFOR(fun_7);
LOCFOR(fun_pipe_lock_8);
LOCFOR(fun_pipe_lock_setter_9);
LOCFOR(fun_pipe_available_10);
LOCFOR(fun_pipe_available_setter_11);
LOCFOR(fun_fab_12);
FUNFOR(YcolsSpipeYOlen);
LOCFOR(fun_14);
LOCFOR(fun_15);
LOCFOR(fun_len_16);
LOCFOR(fun_loop_17);
LOCFOR(fun_grow_pipeX_18);
LOCFOR(fun_19);
LOCFOR(fun_20);
LOCFOR(fun_addX_21);
LOCFOR(fun_enqX_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_deqX_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_zapX_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
FUNFOR(YcolsSpipeYpipe_idx);
LOCFOR(fun_low_elt_32);
LOCFOR(fun_low_elt_setter_33);
LOCFOR(fun_elt_or_34);
extern P YcolsSpipeY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_pipe_data_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcolsSpipeYpipe_data));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_data_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcolsSpipeYpipe_data));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_get_idx_2) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcolsSpipeYpipe_get_idx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_get_idx_setter_3) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcolsSpipeYpipe_get_idx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_pipe_put_idx_5) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcolsSpipeYpipe_put_idx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_put_idx_setter_6) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcolsSpipeYpipe_put_idx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_pipe_lock_8) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcolsSpipeYpipe_lock));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_lock_setter_9) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcolsSpipeYpipe_lock));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_available_10) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcolsSpipeYpipe_available));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_available_setter_11) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcolsSpipeYpipe_available));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fab_12) {
  P c_,s_;
  P datF3778;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),s_);
  T1 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T2,YPfalse);
  datF3778 = T1;
  T4 = CALL1(1,VARREF(Ynew),VARREF(YtimeSlockYLlockG));
  T5 = CALL1(1,VARREF(Ynew),VARREF(YtimeSeventYLeventG));
  T3 = CALLN(1,VARREF(Ynew),7,VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_data),datF3778,VARREF(YcolsSpipeYpipe_lock),T4,VARREF(YcolsSpipeYpipe_available),T5);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YcolsSpipeYOlen) {
  P c_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(YcolsSpipeYpipe_put_idx),c_);
  T3 = CALL1(1,VARREF(YcolsSpipeYpipe_get_idx),c_);
  T1 = CALL2(1,VARREF(YgooSmathY_),T2,T3);
  T5 = CALL1(1,VARREF(YcolsSpipeYpipe_data),c_);
  T4 = CALL1(1,VARREF(YgooScolsSrepYrep_len),T5);
  T0 = CALL2(1,VARREF(YgooSmathYmod),T1,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_14) {
  P T0;
LINK_STACK();
loop:
  CALL1(1,VARREF(YtimeSlockYlock_lock),FREEREF(0));
  T0 = CALL1(1,VARREF(YcolsSpipeYOlen),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YtimeSlockYlock_unlock),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_16) {
  P c_;
  P x_1776F3779;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),c_);
  x_1776F3779 = T1;
  T3 = FUNFAB(fun_14,2,x_1776F3779,c_);
  T4 = FUNFAB(fun_15,1,x_1776F3779);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_17) {
  P i_,j_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(j_, 1);
loop:
  T3 = CALL1(1,VARREF(YcolsSpipeYpipe_put_idx),FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmathYE),i_,T3);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),FREEREF(1),i_);
    CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),T4,FREEREF(2),j_);
    T7 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T6 = CALL2(1,VARREF(YgooSmathYmod),T7,FREEREF(3));
    T8 = CALL2(1,VARREF(YgooSmathYA),j_,YPint((P)1));
    a1 = T6;
    a2 = T8;
    i_ = a1;
    j_ = a2;
    goto loop;
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_grow_pipeX_18) {
  P c_;
  P loopF3783;
  P ndatF3782;
  P olenF3781;
  P odatF3780;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_data),c_);
  odatF3780 = T1;
  T3 = CALL1(1,VARREF(YgooScolsSrepYrep_len),odatF3780);
  olenF3781 = T3;
  T9 = CALL1(1,VARREF(YgooScolsSrepYrep_len),odatF3780);
  T8 = CALL2(1,VARREF(YgooSmathYA),T9,YPint((P)1));
  T7 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),T8);
  T6 = CALL2(1,VARREF(YgooSmagYmax),YPint((P)2),T7);
  T5 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T6,YPfalse);
  ndatF3782 = T5;
  T10 = FUNSHELL(1,fun_loop_17,5);
  loopF3783 = T10;
  FUNINIT(loopF3783, 5,c_,odatF3780,ndatF3782,olenF3781,loopF3783);
  T12 = CALL1(1,VARREF(YcolsSpipeYpipe_get_idx),c_);
  T11 = CALL2(0,loopF3783,T12,YPint((P)0));
  CALL2(1,VARREF(YcolsSpipeYpipe_data_setter),ndatF3782,c_);
  T13 = CALL1(1,VARREF(YcolsSpipeYOlen),c_);
  CALL2(1,VARREF(YcolsSpipeYpipe_put_idx_setter),T13,c_);
  T14 = CALL2(1,VARREF(YcolsSpipeYpipe_get_idx_setter),YPint((P)0),c_);
  T4 = T14;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  P UF3786;
  P x_1778F3785;
  P lenF3784;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
loop:
  CALL1(1,VARREF(YtimeSlockYlock_lock),FREEREF(0));
  T1 = CALL1(1,VARREF(YcolsSpipeYOlen),FREEREF(1));
  lenF3784 = T1;
  T3 = CALL2(1,VARREF(YgooSmathYA),lenF3784,YPint((P)1));
  T5 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T4 = CALL1(1,VARREF(YgooScolsSrepYrep_len),T5);
  T2 = CALL2(1,VARREF(YgooSmagYGE),T3,T4);
  if (T2 != YPfalse) {
    T6 = CALL1(1,VARREF(YcolsSpipeYgrow_pipeX),FREEREF(1));
  } else {
  }
  T7 = CALL2(1,VARREF(YgooSmathYE),lenF3784,YPint((P)0));
  if (T7 != YPfalse) {
    T9 = CALL1(1,VARREF(YcolsSpipeYpipe_available),FREEREF(1));
    T10 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),FREEREF(1));
    T8 = CALL2(1,VARREF(YtimeSeventYevent_signal),T9,T10);
  } else {
  }
  T11 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T12 = CALL1(1,VARREF(YcolsSpipeYpipe_put_idx),FREEREF(1));
  CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),FREEREF(2),T11,T12);
  x_1778F3785 = FREEREF(1);
  T14 = CALL1(1,VARREF(YcolsSpipeYpipe_put_idx),x_1778F3785);
  UF3786 = T14;
  T18 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T17 = CALL1(1,VARREF(YgooScolsSrepYrep_len),T18);
  T16 = CALL3(1,VARREF(YgooSmathYmodA),UF3786,YPint((P)1),T17);
  T15 = CALL2(1,VARREF(YcolsSpipeYpipe_put_idx_setter),T16,x_1778F3785);
  T13 = T15;
  T0 = FREEREF(1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YtimeSlockYlock_unlock),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_addX_21) {
  P c_,x_;
  P x_1777F3787;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),c_);
  x_1777F3787 = T1;
  T3 = FUNFAB(fun_19,3,x_1777F3787,c_,x_);
  T4 = FUNFAB(fun_20,1,x_1777F3787);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_enqX_22) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolxYaddX),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_23) {
  P UF3790;
  P x_1780F3789;
  P resF3788;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
loop:
  CALL1(1,VARREF(YtimeSlockYlock_lock),FREEREF(0));
  T1 = CALL1(1,VARREF(YcolsSpipeYOlen),FREEREF(1));
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)0));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YcolsSpipeYpipe_available),FREEREF(1));
    T4 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),FREEREF(1));
    T2 = CALL2(1,VARREF(YtimeSeventYevent_wait),T3,T4);
  } else {
  }
  T7 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T8 = CALL1(1,VARREF(YcolsSpipeYpipe_get_idx),FREEREF(1));
  T6 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T7,T8);
  resF3788 = T6;
  x_1780F3789 = FREEREF(1);
  T10 = CALL1(1,VARREF(YcolsSpipeYpipe_get_idx),x_1780F3789);
  UF3790 = T10;
  T14 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T13 = CALL1(1,VARREF(YgooScolsSrepYrep_len),T14);
  T12 = CALL3(1,VARREF(YgooSmathYmodA),UF3790,YPint((P)1),T13);
  T11 = CALL2(1,VARREF(YcolsSpipeYpipe_get_idx_setter),T12,x_1780F3789);
  T9 = T11;
  T5 = resF3788;
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_24) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YtimeSlockYlock_unlock),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_deqX_25) {
  P c_;
  P x_1779F3791;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),c_);
  x_1779F3791 = T1;
  T3 = FUNFAB(fun_23,2,x_1779F3791,c_);
  T4 = FUNFAB(fun_24,1,x_1779F3791);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
LINK_STACK();
loop:
  CALL1(1,VARREF(YtimeSlockYlock_lock),FREEREF(0));
  CALL2(1,VARREF(YcolsSpipeYpipe_get_idx_setter),YPint((P)0),FREEREF(1));
  CALL2(1,VARREF(YcolsSpipeYpipe_put_idx_setter),YPint((P)0),FREEREF(1));
UNLINK_STACK();
  QRET(FREEREF(1));
}

FUNCODEDEF(fun_27) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YtimeSlockYlock_unlock),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zapX_28) {
  P c_;
  P x_1781F3792;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),c_);
  x_1781F3792 = T1;
  T3 = FUNFAB(fun_26,2,x_1781F3792,c_);
  T4 = FUNFAB(fun_27,1,x_1781F3792);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_29) {
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  CALL1(1,VARREF(YtimeSlockYlock_lock),FREEREF(0));
  T2 = CALL1(1,VARREF(YcolsSpipeYpipe_get_idx),FREEREF(2));
  T1 = CALL2(1,VARREF(YgooSmathYA),FREEREF(1),T2);
  T4 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(2));
  T3 = CALL1(1,VARREF(YgooScolsSrepYrep_len),T4);
  T0 = CALL2(1,VARREF(YgooSmathYmod),T1,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_30) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YtimeSlockYlock_unlock),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcolsSpipeYpipe_idx) {
  P x_,i_;
  P x_1782F3793;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),x_);
  x_1782F3793 = T1;
  T3 = FUNFAB(fun_29,3,x_1782F3793,i_,x_);
  T4 = FUNFAB(fun_30,1,x_1782F3793);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_32) {
  P x_,i_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_data),x_);
  T2 = CALL2(1,VARREF(YcolsSpipeYpipe_idx),x_,i_);
  T0 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_setter_33) {
  P z_,x_,i_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_data),x_);
  T2 = CALL2(1,VARREF(YcolsSpipeYpipe_idx),x_,i_);
  T0 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),z_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_or_34) {
  P c_,i_,default_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(c_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYrange_checkQ),c_,i_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),c_,i_);
    T0 = T2;
  } else {
    T0 = default_;
  }
UNLINK_STACK();
  QRET(T0);
}

P YcolsSpipeY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<pipe>");
  T2 = (P)YPpair(VARREF(YLseqXG),Ynil);
  T1 = (P)YPpair(VARREF(YLflatG),T2);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YcolsSpipeYLpipeG,T0);
  lit_1 = YPPsym((P)"pipe-data");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T3 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pipe_data_0 = YPmet(FUNCODEREF(fun_pipe_data_0),LITREF(lit_1),T3,ENVNUL,PNUL,sloc(10));
  T6 = BOUNDP(YcolsSpipeYpipe_data);
  if (T6 != YPfalse) {
    T5 = VARREF(YcolsSpipeYpipe_data);
  } else {
    T5 = YPfalse;
  }
  T7 = fun_pipe_data_0;
  T4 = XCALL2(1,VARREF(YPdefine_method),T5,T7);
  VARSET(YcolsSpipeYpipe_data,T4);
  lit_3 = YPPsym((P)"pipe-data-setter");
  lit_4 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T8 = YPsig(LITREF(lit_4),YPPlist(2,VARREF(YLrepG),VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pipe_data_setter_1 = YPmet(FUNCODEREF(fun_pipe_data_setter_1),LITREF(lit_3),T8,ENVNUL,PNUL,sloc(10));
  T11 = BOUNDP(YcolsSpipeYpipe_data_setter);
  if (T11 != YPfalse) {
    T10 = VARREF(YcolsSpipeYpipe_data_setter);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_pipe_data_setter_1;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YcolsSpipeYpipe_data_setter,T9);
  XCALL5(1,VARREF(YPprop),VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_data),VARREF(YcolsSpipeYpipe_data_setter),VARREF(YLrepG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"pipe-get-idx");
  lit_6 = YPPlist(1,YPPsym((P)"_x"));
  T13 = YPsig(LITREF(lit_6),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pipe_get_idx_2 = YPmet(FUNCODEREF(fun_pipe_get_idx_2),LITREF(lit_5),T13,ENVNUL,PNUL,sloc(11));
  T16 = BOUNDP(YcolsSpipeYpipe_get_idx);
  if (T16 != YPfalse) {
    T15 = VARREF(YcolsSpipeYpipe_get_idx);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_pipe_get_idx_2;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YcolsSpipeYpipe_get_idx,T14);
  lit_7 = YPPsym((P)"pipe-get-idx-setter");
  lit_8 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T18 = YPsig(LITREF(lit_8),YPPlist(2,VARREF(YLintG),VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pipe_get_idx_setter_3 = YPmet(FUNCODEREF(fun_pipe_get_idx_setter_3),LITREF(lit_7),T18,ENVNUL,PNUL,sloc(11));
  T21 = BOUNDP(YcolsSpipeYpipe_get_idx_setter);
  if (T21 != YPfalse) {
    T20 = VARREF(YcolsSpipeYpipe_get_idx_setter);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_pipe_get_idx_setter_3;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YcolsSpipeYpipe_get_idx_setter,T19);
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T23 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T23,ENVNUL,PNUL,sloc(11));
  T24 = fun_4;
  XCALL5(1,VARREF(YPprop),VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_get_idx),VARREF(YcolsSpipeYpipe_get_idx_setter),VARREF(YLintG),T24);
  lit_10 = YPPsym((P)"pipe-put-idx");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T25 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pipe_put_idx_5 = YPmet(FUNCODEREF(fun_pipe_put_idx_5),LITREF(lit_10),T25,ENVNUL,PNUL,sloc(12));
  T28 = BOUNDP(YcolsSpipeYpipe_put_idx);
  if (T28 != YPfalse) {
    T27 = VARREF(YcolsSpipeYpipe_put_idx);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_pipe_put_idx_5;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YcolsSpipeYpipe_put_idx,T26);
  lit_12 = YPPsym((P)"pipe-put-idx-setter");
  lit_13 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLintG),VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pipe_put_idx_setter_6 = YPmet(FUNCODEREF(fun_pipe_put_idx_setter_6),LITREF(lit_12),T30,ENVNUL,PNUL,sloc(12));
  T33 = BOUNDP(YcolsSpipeYpipe_put_idx_setter);
  if (T33 != YPfalse) {
    T32 = VARREF(YcolsSpipeYpipe_put_idx_setter);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_pipe_put_idx_setter_6;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YcolsSpipeYpipe_put_idx_setter,T31);
  lit_14 = YPPlist(1,YPPsym((P)"_x"));
  T35 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T35,ENVNUL,PNUL,sloc(12));
  T36 = fun_7;
  XCALL5(1,VARREF(YPprop),VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_put_idx),VARREF(YcolsSpipeYpipe_put_idx_setter),VARREF(YLintG),T36);
  lit_15 = YPPsym((P)"pipe-lock");
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  T37 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pipe_lock_8 = YPmet(FUNCODEREF(fun_pipe_lock_8),LITREF(lit_15),T37,ENVNUL,PNUL,sloc(13));
  T40 = BOUNDP(YcolsSpipeYpipe_lock);
  if (T40 != YPfalse) {
    T39 = VARREF(YcolsSpipeYpipe_lock);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_pipe_lock_8;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YcolsSpipeYpipe_lock,T38);
  lit_17 = YPPsym((P)"pipe-lock-setter");
  lit_18 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T42 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YtimeSlockYLlockG),VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pipe_lock_setter_9 = YPmet(FUNCODEREF(fun_pipe_lock_setter_9),LITREF(lit_17),T42,ENVNUL,PNUL,sloc(13));
  T45 = BOUNDP(YcolsSpipeYpipe_lock_setter);
  if (T45 != YPfalse) {
    T44 = VARREF(YcolsSpipeYpipe_lock_setter);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_pipe_lock_setter_9;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YcolsSpipeYpipe_lock_setter,T43);
  XCALL5(1,VARREF(YPprop),VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_lock),VARREF(YcolsSpipeYpipe_lock_setter),VARREF(YtimeSlockYLlockG),VARREF(YPprop_unbound_error));
  lit_19 = YPPsym((P)"pipe-available");
  lit_20 = YPPlist(1,YPPsym((P)"_x"));
  T47 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pipe_available_10 = YPmet(FUNCODEREF(fun_pipe_available_10),LITREF(lit_19),T47,ENVNUL,PNUL,sloc(14));
  T50 = BOUNDP(YcolsSpipeYpipe_available);
  if (T50 != YPfalse) {
    T49 = VARREF(YcolsSpipeYpipe_available);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_pipe_available_10;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YcolsSpipeYpipe_available,T48);
  lit_21 = YPPsym((P)"pipe-available-setter");
  lit_22 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T52 = YPsig(LITREF(lit_22),YPPlist(2,VARREF(YtimeSeventYLeventG),VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pipe_available_setter_11 = YPmet(FUNCODEREF(fun_pipe_available_setter_11),LITREF(lit_21),T52,ENVNUL,PNUL,sloc(14));
  T55 = BOUNDP(YcolsSpipeYpipe_available_setter);
  if (T55 != YPfalse) {
    T54 = VARREF(YcolsSpipeYpipe_available_setter);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_pipe_available_setter_11;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YcolsSpipeYpipe_available_setter,T53);
  XCALL5(1,VARREF(YPprop),VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_available),VARREF(YcolsSpipeYpipe_available_setter),VARREF(YtimeSeventYLeventG),VARREF(YPprop_unbound_error));
  lit_23 = YPPsym((P)"fab");
  lit_24 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"s"));
  T58 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YcolsSpipeYLpipeG));
  T57 = YPsig(LITREF(lit_24),YPPlist(2,T58,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YcolsSpipeYLpipeG),Ynil);
  fun_fab_12 = YPmet(FUNCODEREF(fun_fab_12),LITREF(lit_23),T57,ENVNUL,PNUL,sloc(16));
  T61 = BOUNDP(YgooScolsScolYfab);
  if (T61 != YPfalse) {
    T60 = VARREF(YgooScolsScolYfab);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_fab_12;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YgooScolsScolYfab,T59);
  lit_25 = YPPsym((P)"@len");
  lit_26 = YPPlist(1,YPPsym((P)"c"));
  T63 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YcolsSpipeYOlen = YPmet(FUNCODEREF(YcolsSpipeYOlen),LITREF(lit_25),T63,ENVNUL,PNUL,sloc(21));
  T64 = YcolsSpipeYOlen;
  VARSET(YcolsSpipeYOlen,T64);
  lit_27 = YPPsym((P)"len");
  lit_28 = YPPlist(1,YPPsym((P)"c"));
  lit_29 = Ynil;
  T67 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T67,ENVNUL,PNUL,sloc(24));
  T66 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T66,ENVNUL,PNUL,sloc(24));
  T65 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_16 = YPmet(FUNCODEREF(fun_len_16),LITREF(lit_27),T65,ENVNUL,PNUL,sloc(24));
  T70 = BOUNDP(YgooStypesYlen);
  if (T70 != YPfalse) {
    T69 = VARREF(YgooStypesYlen);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_len_16;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YgooStypesYlen,T68);
  lit_30 = YPPsym((P)"grow-pipe!");
  lit_31 = YPPlist(1,YPPsym((P)"c"));
  lit_32 = YPPsym((P)"loop");
  lit_33 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"j"));
  T73 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_17 = YPmet(FUNCODEREF(fun_loop_17),LITREF(lit_32),T73,ENVNUL,PNUL,sloc(30));
  T72 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_grow_pipeX_18 = YPmet(FUNCODEREF(fun_grow_pipeX_18),LITREF(lit_30),T72,ENVNUL,PNUL,sloc(26));
  T76 = BOUNDP(YcolsSpipeYgrow_pipeX);
  if (T76 != YPfalse) {
    T75 = VARREF(YcolsSpipeYgrow_pipeX);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_grow_pipeX_18;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YcolsSpipeYgrow_pipeX,T74);
  lit_34 = YPPsym((P)"add!");
  lit_35 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T80 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T80,ENVNUL,PNUL,sloc(39));
  T79 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T79,ENVNUL,PNUL,sloc(39));
  T78 = YPsig(LITREF(lit_35),YPPlist(2,VARREF(YcolsSpipeYLpipeG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YcolsSpipeYLpipeG),Ynil);
  fun_addX_21 = YPmet(FUNCODEREF(fun_addX_21),LITREF(lit_34),T78,ENVNUL,PNUL,sloc(38));
  T83 = BOUNDP(YgooScolsScolxYaddX);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooScolsScolxYaddX);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_addX_21;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooScolsScolxYaddX,T81);
  lit_36 = YPPsym((P)"enq!");
  lit_37 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T85 = YPsig(LITREF(lit_37),YPPlist(2,VARREF(YcolsSpipeYLpipeG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YcolsSpipeYLpipeG),Ynil);
  fun_enqX_22 = YPmet(FUNCODEREF(fun_enqX_22),LITREF(lit_36),T85,ENVNUL,PNUL,sloc(49));
  T88 = BOUNDP(YcolsSpipeYenqX);
  if (T88 != YPfalse) {
    T87 = VARREF(YcolsSpipeYenqX);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_enqX_22;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YcolsSpipeYenqX,T86);
  lit_38 = YPPsym((P)"deq!");
  lit_39 = YPPlist(1,YPPsym((P)"c"));
  T92 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T92,ENVNUL,PNUL,sloc(53));
  T91 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T91,ENVNUL,PNUL,sloc(53));
  T90 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_deqX_25 = YPmet(FUNCODEREF(fun_deqX_25),LITREF(lit_38),T90,ENVNUL,PNUL,sloc(52));
  T95 = BOUNDP(YcolsSpipeYdeqX);
  if (T95 != YPfalse) {
    T94 = VARREF(YcolsSpipeYdeqX);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_deqX_25;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YcolsSpipeYdeqX,T93);
  lit_40 = YPPsym((P)"zap!");
  lit_41 = YPPlist(1,YPPsym((P)"c"));
  T99 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T99,ENVNUL,PNUL,sloc(61));
  T98 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T98,ENVNUL,PNUL,sloc(61));
  T97 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YcolsSpipeYLpipeG),Ynil);
  fun_zapX_28 = YPmet(FUNCODEREF(fun_zapX_28),LITREF(lit_40),T97,ENVNUL,PNUL,sloc(60));
  T102 = BOUNDP(YgooScolsScolxYzapX);
  if (T102 != YPfalse) {
    T101 = VARREF(YgooScolsScolxYzapX);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_zapX_28;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YgooScolsScolxYzapX,T100);
  lit_42 = YPPsym((P)"pipe-idx");
  lit_43 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T106 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T106,ENVNUL,PNUL,sloc(67));
  T105 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T105,ENVNUL,PNUL,sloc(67));
  T104 = YPsig(LITREF(lit_43),YPPlist(2,VARREF(YcolsSpipeYLpipeG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  YcolsSpipeYpipe_idx = YPmet(FUNCODEREF(YcolsSpipeYpipe_idx),LITREF(lit_42),T104,ENVNUL,PNUL,sloc(66));
  T107 = YcolsSpipeYpipe_idx;
  VARSET(YcolsSpipeYpipe_idx,T107);
  lit_44 = YPPsym((P)"low-elt");
  lit_45 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T108 = YPsig(LITREF(lit_45),YPPlist(2,VARREF(YcolsSpipeYLpipeG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_32 = YPmet(FUNCODEREF(fun_low_elt_32),LITREF(lit_44),T108,ENVNUL,PNUL,sloc(70));
  T111 = BOUNDP(YgooScolsScolYlow_elt);
  if (T111 != YPfalse) {
    T110 = VARREF(YgooScolsScolYlow_elt);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_low_elt_32;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YgooScolsScolYlow_elt,T109);
  lit_46 = YPPsym((P)"low-elt-setter");
  lit_47 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"i"));
  T113 = YPsig(LITREF(lit_47),YPPlist(3,VARREF(YLanyG),VARREF(YcolsSpipeYLpipeG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_low_elt_setter_33 = YPmet(FUNCODEREF(fun_low_elt_setter_33),LITREF(lit_46),T113,ENVNUL,PNUL,sloc(73));
  T116 = BOUNDP(YgooScolsScolxYlow_elt_setter);
  if (T116 != YPfalse) {
    T115 = VARREF(YgooScolsScolxYlow_elt_setter);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_low_elt_setter_33;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YgooScolsScolxYlow_elt_setter,T114);
  lit_48 = YPPsym((P)"elt-or");
  lit_49 = YPPlist(3,YPPsym((P)"c"),YPPsym((P)"i"),YPPsym((P)"default"));
  T118 = YPsig(LITREF(lit_49),YPPlist(3,VARREF(YcolsSpipeYLpipeG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_34 = YPmet(FUNCODEREF(fun_elt_or_34),LITREF(lit_48),T118,ENVNUL,PNUL,sloc(76));
  T121 = BOUNDP(YgooScolsScolYelt_or);
  if (T121 != YPfalse) {
    T120 = VARREF(YgooScolsScolYelt_or);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_elt_or_34;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YgooScolsScolYelt_or,T119);
  T123 = YPfalse;
  return T123;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_timeSlock;
extern MODULE_INFO module_info_timeSevent;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSruntime;
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
  {&module_info_gooScolsSrep},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsScol},
  {&module_info_gooSmath},
  {&module_info_timeSlock},
  {&module_info_timeSevent},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"event-wait-timed", &module_info_timeSevent, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"event-signal", &module_info_timeSevent, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<lock>", &module_info_timeSlock, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"lock-lock", &module_info_timeSlock, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"event-wait", &module_info_timeSevent, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"with-lock", &module_info_timeSlock, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"event-name", &module_info_timeSevent, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"lock-destroy", &module_info_timeSlock, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"lock-handle", &module_info_timeSlock, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"event-reset", &module_info_timeSevent, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"lock-state", &module_info_timeSlock, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"lock-unlock", &module_info_timeSlock, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<event>", &module_info_timeSevent, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"event-broadcast", &module_info_timeSevent, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<any>", &module_info_gooSboot, NULL},
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
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
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
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
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
  {"pipe-lock", CVAR, &YcolsSpipeYpipe_lock},
  {"pipe-get-idx-setter", CVAR, &YcolsSpipeYpipe_get_idx_setter},
  {"---main-0---", PVAR, NULL},
  {"enq!", CVAR, &YcolsSpipeYenqX},
  {"pipe-put-idx", CVAR, &YcolsSpipeYpipe_put_idx},
  {"pipe-available-setter", CVAR, &YcolsSpipeYpipe_available_setter},
  {"pipe-data-setter", CVAR, &YcolsSpipeYpipe_data_setter},
  {"pipe-get-idx", CVAR, &YcolsSpipeYpipe_get_idx},
  {"pipe-idx", CVAR, &YcolsSpipeYpipe_idx},
  {"<pipe>", CVAR, &YcolsSpipeYLpipeG},
  {"pipe-data", CVAR, &YcolsSpipeYpipe_data},
  {"@len", CVAR, &YcolsSpipeYOlen},
  {"pipe-lock-setter", CVAR, &YcolsSpipeYpipe_lock_setter},
  {"pipe-available", CVAR, &YcolsSpipeYpipe_available},
  {"grow-pipe!", CVAR, &YcolsSpipeYgrow_pipeX},
  {"deq!", CVAR, &YcolsSpipeYdeqX},
  {"pipe-put-idx-setter", CVAR, &YcolsSpipeYpipe_put_idx_setter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"enq!", NULL},
  {"<pipe>", NULL},
  {"deq!", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_colsSpipe;
MODULE_INFO module_info_colsSpipe = {
  "cols/pipe",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooScolsSrep (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooSmath (void);
extern void load_module_timeSlock (void);
extern void load_module_timeSevent (void);

/* EXPRESSION: */

extern void load_module_colsSpipe (void);

void load_module_colsSpipe (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooScolsSrep();
  load_module_gooScolsSseq();
  load_module_gooScolsScol();
  load_module_gooSmath();
  load_module_timeSlock();
  load_module_timeSevent();

  (P)YcolsSpipeY___main_0___();

}

/* END OF GENERATED CODE. */
