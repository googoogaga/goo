/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"cols/pipe");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: cols/pipe */

EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YcolsSpipeYpipe_put_idx,"cols/pipe","pipe-put-idx");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YcolsSpipeYpipe_data_setter,"cols/pipe","pipe-data-setter");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
DEF(YcolsSpipeYpipe_available_setter,"cols/pipe","pipe-available-setter");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YcolsSpipeYdeqX,"cols/pipe","deq!");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
DEF(YcolsSpipeYpipe_get_idx_setter,"cols/pipe","pipe-get-idx-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YcolsSpipeYpipe_put_idx_setter,"cols/pipe","pipe-put-idx-setter");
EXT(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YLanyG,"goo/boot","<any>");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YtimeSeventYevent_name,"time/event","event-name");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YcolsSpipeYgrow_pipeX,"cols/pipe","grow-pipe!");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmacrosY1st,"goo/macros","1st");
DEF(YcolsSpipeYLpipeG,"cols/pipe","<pipe>");
EXT(YgooSmathYK,"goo/math","|");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YcolsSpipeYpipe_get_idx,"cols/pipe","pipe-get-idx");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
DEF(YcolsSpipeYpipe_lock_setter,"cols/pipe","pipe-lock-setter");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YcolsSpipeYpipe_available,"cols/pipe","pipe-available");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Ynarity_error,"goo/boot","narity-error");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YcolsSpipeYpipe_data,"cols/pipe","pipe-data");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YcolsSpipeYpipe_idx,"cols/pipe","pipe-idx");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YcolsSpipeYOlen,"cols/pipe","@len");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YcolsSpipeYenqX,"cols/pipe","enq!");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YtimeSeventYLeventG,"time/event","<event>");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYB,"goo/math","&");
DEF(YcolsSpipeYpipe_lock,"cols/pipe","pipe-lock");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YLpropG,"goo/boot","<prop>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_10);
DEFLIT(lit_36);
DEFLIT(lit_7);
DEFLIT(lit_3);
DEFLIT(lit_19);
DEFLIT(lit_1);
DEFLIT(lit_8);
DEFLIT(lit_20);
DEFLIT(lit_44);
DEFLIT(lit_9);
DEFLIT(lit_29);
DEFLIT(lit_33);
DEFLIT(lit_46);
DEFLIT(lit_4);
DEFLIT(lit_35);
DEFLIT(lit_30);
DEFLIT(lit_49);
DEFLIT(lit_23);
DEFLIT(lit_6);
DEFLIT(lit_12);
DEFLIT(lit_47);
DEFLIT(lit_34);
DEFLIT(lit_39);
DEFLIT(lit_16);
DEFLIT(lit_24);
DEFLIT(lit_41);
DEFLIT(lit_5);
DEFLIT(lit_48);
DEFLIT(lit_21);
DEFLIT(lit_18);
DEFLIT(lit_15);
DEFLIT(lit_27);
DEFLIT(lit_25);
DEFLIT(lit_13);
DEFLIT(lit_43);
DEFLIT(lit_2);
DEFLIT(lit_38);
DEFLIT(lit_26);
DEFLIT(lit_0);
DEFLIT(lit_17);
DEFLIT(lit_37);
DEFLIT(lit_45);
DEFLIT(lit_40);
DEFLIT(lit_31);
DEFLIT(lit_11);
DEFLIT(lit_42);
DEFLIT(lit_22);
DEFLIT(lit_14);
DEFLIT(lit_32);
DEFLIT(lit_28);

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
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;

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
  {"<int>", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<lock>", &module_info_timeSlock, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"event-broadcast", &module_info_timeSevent, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"with-lock", &module_info_timeSlock, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"event-signal", &module_info_timeSevent, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"event-name", &module_info_timeSevent, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"lock-destroy", &module_info_timeSlock, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"lock-lock", &module_info_timeSlock, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"lock-handle", &module_info_timeSlock, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"event-wait", &module_info_timeSevent, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"event-reset", &module_info_timeSevent, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"lock-unlock", &module_info_timeSlock, NULL},
  {"<event>", &module_info_timeSevent, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"lock-state", &module_info_timeSlock, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"event-wait-timed", &module_info_timeSevent, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"pipe-put-idx", CVAR, &YcolsSpipeYpipe_put_idx},
  {"pipe-data-setter", CVAR, &YcolsSpipeYpipe_data_setter},
  {"pipe-available-setter", CVAR, &YcolsSpipeYpipe_available_setter},
  {"deq!", CVAR, &YcolsSpipeYdeqX},
  {"pipe-get-idx-setter", CVAR, &YcolsSpipeYpipe_get_idx_setter},
  {"pipe-put-idx-setter", CVAR, &YcolsSpipeYpipe_put_idx_setter},
  {"grow-pipe!", CVAR, &YcolsSpipeYgrow_pipeX},
  {"<pipe>", CVAR, &YcolsSpipeYLpipeG},
  {"pipe-get-idx", CVAR, &YcolsSpipeYpipe_get_idx},
  {"pipe-lock-setter", CVAR, &YcolsSpipeYpipe_lock_setter},
  {"pipe-available", CVAR, &YcolsSpipeYpipe_available},
  {"---main-0---", PVAR, NULL},
  {"pipe-data", CVAR, &YcolsSpipeYpipe_data},
  {"pipe-idx", CVAR, &YcolsSpipeYpipe_idx},
  {"@len", CVAR, &YcolsSpipeYOlen},
  {"enq!", CVAR, &YcolsSpipeYenqX},
  {"pipe-lock", CVAR, &YcolsSpipeYpipe_lock},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"deq!", NULL},
  {"<pipe>", NULL},
  {"enq!", NULL},
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
