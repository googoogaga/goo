/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"cols/pipe");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: cols/pipe */

EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YtimeSeventYevent_name,"time/event","event-name");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YcolsSpipeYLpipeG,"cols/pipe","<pipe>");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YcolsSpipeYpipe_available,"cols/pipe","pipe-available");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYN,"goo/math","~");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
DEF(YcolsSpipeYpipe_idx,"cols/pipe","pipe-idx");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
DEF(YcolsSpipeYpipe_lock_setter,"cols/pipe","pipe-lock-setter");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YcolsSpipeYOlen,"cols/pipe","@len");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
DEF(YcolsSpipeYpipe_data,"cols/pipe","pipe-data");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YtimeSeventYLeventG,"time/event","<event>");
EXT(YgooSmathYE,"goo/math","=");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YcolsSpipeYpipe_put_idx_setter,"cols/pipe","pipe-put-idx-setter");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
DEF(YcolsSpipeYgrow_pipeX,"cols/pipe","grow-pipe!");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
DEF(YcolsSpipeYpipe_data_setter,"cols/pipe","pipe-data-setter");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYround,"goo/math","round");
DEF(YcolsSpipeYenqX,"cols/pipe","enq!");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YcolsSpipeYpipe_get_idx,"cols/pipe","pipe-get-idx");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YcolsSpipeYpipe_put_idx,"cols/pipe","pipe-put-idx");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
DEF(YcolsSpipeYdeqX,"cols/pipe","deq!");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
DEF(YcolsSpipeYpipe_get_idx_setter,"cols/pipe","pipe-get-idx-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(YcolsSpipeYpipe_available_setter,"cols/pipe","pipe-available-setter");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yhead,"goo/boot","head");
DEF(YcolsSpipeYpipe_lock,"cols/pipe","pipe-lock");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YLnumG,"goo/boot","<num>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_32);
DEFLIT(lit_14);
DEFLIT(lit_34);
DEFLIT(lit_1);
DEFLIT(lit_7);
DEFLIT(lit_30);
DEFLIT(lit_0);
DEFLIT(lit_47);
DEFLIT(lit_18);
DEFLIT(lit_45);
DEFLIT(lit_40);
DEFLIT(lit_36);
DEFLIT(lit_10);
DEFLIT(lit_37);
DEFLIT(lit_15);
DEFLIT(lit_21);
DEFLIT(lit_39);
DEFLIT(lit_22);
DEFLIT(lit_4);
DEFLIT(lit_26);
DEFLIT(lit_19);
DEFLIT(lit_31);
DEFLIT(lit_46);
DEFLIT(lit_28);
DEFLIT(lit_23);
DEFLIT(lit_3);
DEFLIT(lit_35);
DEFLIT(lit_42);
DEFLIT(lit_17);
DEFLIT(lit_16);
DEFLIT(lit_25);
DEFLIT(lit_12);
DEFLIT(lit_29);
DEFLIT(lit_41);
DEFLIT(lit_24);
DEFLIT(lit_43);
DEFLIT(lit_2);
DEFLIT(lit_33);
DEFLIT(lit_38);
DEFLIT(lit_11);
DEFLIT(lit_9);
DEFLIT(lit_5);
DEFLIT(lit_44);
DEFLIT(lit_20);
DEFLIT(lit_13);
DEFLIT(lit_27);
DEFLIT(lit_8);
DEFLIT(lit_6);

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
LOCFOR(fun_grow_pipeX_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_addX_20);
LOCFOR(fun_enqX_21);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_deqX_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_zapX_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
FUNFOR(YcolsSpipeYpipe_idx);
LOCFOR(fun_low_elt_31);
LOCFOR(fun_low_elt_setter_32);
LOCFOR(fun_elt_or_33);
extern P YcolsSpipeY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_pipe_data_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcolsSpipeYpipe_data));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_data_setter_1) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcolsSpipeYpipe_data));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_get_idx_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcolsSpipeYpipe_get_idx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_get_idx_setter_3) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcolsSpipeYpipe_get_idx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_pipe_put_idx_5) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcolsSpipeYpipe_put_idx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_put_idx_setter_6) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcolsSpipeYpipe_put_idx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_pipe_lock_8) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcolsSpipeYpipe_lock));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_lock_setter_9) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcolsSpipeYpipe_lock));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_available_10) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcolsSpipeYpipe_available));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_available_setter_11) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcolsSpipeYpipe_available));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fab_12) {
  P c_,s_;
  P datF3873;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
  T4 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),s_);
  T3 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T4,YPfalse);
  datF3873 = T3;
  T1 = CALL1(1,VARREF(Ynew),VARREF(YtimeSlockYLlockG));
  T2 = CALL1(1,VARREF(Ynew),VARREF(YtimeSeventYLeventG));
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_data),datF3873,VARREF(YcolsSpipeYpipe_lock),T1,VARREF(YcolsSpipeYpipe_available),T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YcolsSpipeYOlen) {
  P c_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(c_, 0);
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
  CALL1(1,VARREF(YtimeSlockYlock_lock),FREEREF(0));
  T0 = CALL1(1,VARREF(YcolsSpipeYOlen),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YtimeSlockYlock_unlock),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_16) {
  P c_;
  P x_1802F3874;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(c_, 0);
  T3 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),c_);
  x_1802F3874 = T3;
  T1 = FUNFAB(fun_14,2,x_1802F3874,c_);
  T2 = FUNFAB(fun_15,1,x_1802F3874);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_grow_pipeX_17) {
  P c_;
  P jF3879;
  P iF3878;
  P ndatF3877;
  P olenF3876;
  P odatF3875;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(c_, 0);
  T18 = CALL1(1,VARREF(YcolsSpipeYpipe_data),c_);
  odatF3875 = T18;
  T17 = CALL1(1,VARREF(YgooScolsSrepYrep_len),odatF3875);
  olenF3876 = T17;
  T16 = CALL1(1,VARREF(YgooScolsSrepYrep_len),odatF3875);
  T15 = CALL2(1,VARREF(YgooSmathYA),T16,YPint((P)1));
  T14 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),T15);
  T13 = CALL2(1,VARREF(YgooSmagYmax),YPint((P)2),T14);
  T12 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T13,YPfalse);
  ndatF3877 = T12;
  T9 = CALL1(1,VARREF(YcolsSpipeYpipe_get_idx),c_);
  iF3878 = T9;
  jF3879 = YPint((P)0);
  for (;;) {
    P a241_0,a241_1;
  loop241:
    T3 = CALL1(1,VARREF(YcolsSpipeYpipe_put_idx),c_);
    T2 = CALL2(1,VARREF(YgooSmathYE),iF3878,T3);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),odatF3875,iF3878);
      CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),T4,ndatF3877,jF3879);
      T7 = CALL2(1,VARREF(YgooSmathYA),iF3878,YPint((P)1));
      T6 = CALL2(1,VARREF(YgooSmathYmod),T7,olenF3876);
      T8 = CALL2(1,VARREF(YgooSmathYA),jF3879,YPint((P)1));
      a241_0 = T6;
      a241_1 = T8;
      iF3878 = a241_0;
      jF3879 = a241_1;
      goto loop241;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
    break;
  }
  CALL2(1,VARREF(YcolsSpipeYpipe_data_setter),ndatF3877,c_);
  T10 = CALL1(1,VARREF(YcolsSpipeYOlen),c_);
  CALL2(1,VARREF(YcolsSpipeYpipe_put_idx_setter),T10,c_);
  T11 = CALL2(1,VARREF(YcolsSpipeYpipe_get_idx_setter),YPint((P)0),c_);
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_18) {
  P UF3882;
  P x_1804F3881;
  P lenF3880;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  CALL1(1,VARREF(YtimeSlockYlock_lock),FREEREF(0));
  T16 = CALL1(1,VARREF(YcolsSpipeYOlen),FREEREF(1));
  lenF3880 = T16;
  T1 = CALL2(1,VARREF(YgooSmathYA),lenF3880,YPint((P)1));
  T3 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T2 = CALL1(1,VARREF(YgooScolsSrepYrep_len),T3);
  T0 = CALL2(1,VARREF(YgooSmagYGE),T1,T2);
  if (T0 != YPfalse) {
    T4 = CALL1(1,VARREF(YcolsSpipeYgrow_pipeX),FREEREF(1));
  } else {
  }
  T5 = CALL2(1,VARREF(YgooSmathYE),lenF3880,YPint((P)0));
  if (T5 != YPfalse) {
    T7 = CALL1(1,VARREF(YcolsSpipeYpipe_available),FREEREF(1));
    T8 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),FREEREF(1));
    T6 = CALL2(1,VARREF(YtimeSeventYevent_signal),T7,T8);
  } else {
  }
  T9 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T10 = CALL1(1,VARREF(YcolsSpipeYpipe_put_idx),FREEREF(1));
  CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),FREEREF(2),T9,T10);
  x_1804F3881 = FREEREF(1);
  T15 = CALL1(1,VARREF(YcolsSpipeYpipe_put_idx),x_1804F3881);
  UF3882 = T15;
  T14 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T13 = CALL1(1,VARREF(YgooScolsSrepYrep_len),T14);
  T12 = CALL3(1,VARREF(YgooSmathYmodA),UF3882,YPint((P)1),T13);
  T11 = CALL2(1,VARREF(YcolsSpipeYpipe_put_idx_setter),T12,x_1804F3881);
UNLINK_STACK();
  QRET(FREEREF(1));
}

FUNCODEDEF(fun_19) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YtimeSlockYlock_unlock),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_addX_20) {
  P c_,x_;
  P x_1803F3883;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T3 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),c_);
  x_1803F3883 = T3;
  T1 = FUNFAB(fun_18,3,x_1803F3883,c_,x_);
  T2 = FUNFAB(fun_19,1,x_1803F3883);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_enqX_21) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooScolsScolxYaddX),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_22) {
  P UF3886;
  P x_1806F3885;
  P resF3884;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  CALL1(1,VARREF(YtimeSlockYlock_lock),FREEREF(0));
  T1 = CALL1(1,VARREF(YcolsSpipeYOlen),FREEREF(1));
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)0));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YcolsSpipeYpipe_available),FREEREF(1));
    T4 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),FREEREF(1));
    T2 = CALL2(1,VARREF(YtimeSeventYevent_wait),T3,T4);
  } else {
  }
  T11 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T12 = CALL1(1,VARREF(YcolsSpipeYpipe_get_idx),FREEREF(1));
  T10 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T11,T12);
  resF3884 = T10;
  x_1806F3885 = FREEREF(1);
  T9 = CALL1(1,VARREF(YcolsSpipeYpipe_get_idx),x_1806F3885);
  UF3886 = T9;
  T8 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T7 = CALL1(1,VARREF(YgooScolsSrepYrep_len),T8);
  T6 = CALL3(1,VARREF(YgooSmathYmodA),UF3886,YPint((P)1),T7);
  T5 = CALL2(1,VARREF(YcolsSpipeYpipe_get_idx_setter),T6,x_1806F3885);
UNLINK_STACK();
  QRET(resF3884);
}

FUNCODEDEF(fun_23) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YtimeSlockYlock_unlock),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_deqX_24) {
  P c_;
  P x_1805F3887;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(c_, 0);
  T3 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),c_);
  x_1805F3887 = T3;
  T1 = FUNFAB(fun_22,2,x_1805F3887,c_);
  T2 = FUNFAB(fun_23,1,x_1805F3887);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_25) {
LINK_STACK();
  CALL1(1,VARREF(YtimeSlockYlock_lock),FREEREF(0));
  CALL2(1,VARREF(YcolsSpipeYpipe_get_idx_setter),YPint((P)0),FREEREF(1));
  CALL2(1,VARREF(YcolsSpipeYpipe_put_idx_setter),YPint((P)0),FREEREF(1));
UNLINK_STACK();
  QRET(FREEREF(1));
}

FUNCODEDEF(fun_26) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YtimeSlockYlock_unlock),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zapX_27) {
  P c_;
  P x_1807F3888;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(c_, 0);
  T3 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),c_);
  x_1807F3888 = T3;
  T1 = FUNFAB(fun_25,2,x_1807F3888,c_);
  T2 = FUNFAB(fun_26,1,x_1807F3888);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_28) {
  P T0,T1,T2,T3,T4;
LINK_STACK();
  CALL1(1,VARREF(YtimeSlockYlock_lock),FREEREF(0));
  T2 = CALL1(1,VARREF(YcolsSpipeYpipe_get_idx),FREEREF(2));
  T1 = CALL2(1,VARREF(YgooSmathYA),FREEREF(1),T2);
  T4 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(2));
  T3 = CALL1(1,VARREF(YgooScolsSrepYrep_len),T4);
  T0 = CALL2(1,VARREF(YgooSmathYmod),T1,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YtimeSlockYlock_unlock),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcolsSpipeYpipe_idx) {
  P x_,i_;
  P x_1808F3889;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  T3 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),x_);
  x_1808F3889 = T3;
  T1 = FUNFAB(fun_28,3,x_1808F3889,i_,x_);
  T2 = FUNFAB(fun_29,1,x_1808F3889);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_31) {
  P x_,i_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_data),x_);
  T2 = CALL2(1,VARREF(YcolsSpipeYpipe_idx),x_,i_);
  T0 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_setter_32) {
  P z_,x_,i_;
  P T0,T1,T2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_data),x_);
  T2 = CALL2(1,VARREF(YcolsSpipeYpipe_idx),x_,i_);
  T0 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),z_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_or_33) {
  P c_,i_,default_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
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
  P T96,T97,T98,T99,T100,T101,T102;
DEFCREGS();
  lit_0 = YPPsym((P)"<pipe>");
  T2 = (P)YPpair(VARREF(YLseqXG),Ynil);
  T1 = (P)YPpair(VARREF(YLflatG),T2);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YcolsSpipeYLpipeG,T0);
  lit_1 = YPPsym((P)"pipe-data");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T3 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pipe_data_0 = YPmet(FUNCODEREF(fun_pipe_data_0),LITREF(lit_1),T3,ENVNUL,PNUL,sloc(10));
  T5 = VARREF_OR(YcolsSpipeYpipe_data,YPfalse);
  T6 = fun_pipe_data_0;
  T4 = XCALL2(1,VARREF(YPdefine_method),T5,T6);
  VARSET(YcolsSpipeYpipe_data,T4);
  lit_3 = YPPsym((P)"pipe-data-setter");
  lit_4 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T7 = YPsig(LITREF(lit_4),YPPlist(2,VARREF(YLrepG),VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pipe_data_setter_1 = YPmet(FUNCODEREF(fun_pipe_data_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,sloc(10));
  T9 = VARREF_OR(YcolsSpipeYpipe_data_setter,YPfalse);
  T10 = fun_pipe_data_setter_1;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T10);
  VARSET(YcolsSpipeYpipe_data_setter,T8);
  XCALL5(1,VARREF(YPprop),VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_data),VARREF(YcolsSpipeYpipe_data_setter),VARREF(YLrepG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"pipe-get-idx");
  lit_6 = YPPlist(1,YPPsym((P)"_x"));
  T11 = YPsig(LITREF(lit_6),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pipe_get_idx_2 = YPmet(FUNCODEREF(fun_pipe_get_idx_2),LITREF(lit_5),T11,ENVNUL,PNUL,sloc(11));
  T13 = VARREF_OR(YcolsSpipeYpipe_get_idx,YPfalse);
  T14 = fun_pipe_get_idx_2;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T14);
  VARSET(YcolsSpipeYpipe_get_idx,T12);
  lit_7 = YPPsym((P)"pipe-get-idx-setter");
  lit_8 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T15 = YPsig(LITREF(lit_8),YPPlist(2,VARREF(YLintG),VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pipe_get_idx_setter_3 = YPmet(FUNCODEREF(fun_pipe_get_idx_setter_3),LITREF(lit_7),T15,ENVNUL,PNUL,sloc(11));
  T17 = VARREF_OR(YcolsSpipeYpipe_get_idx_setter,YPfalse);
  T18 = fun_pipe_get_idx_setter_3;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T18);
  VARSET(YcolsSpipeYpipe_get_idx_setter,T16);
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T19 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T19,ENVNUL,PNUL,sloc(11));
  T20 = fun_4;
  XCALL5(1,VARREF(YPprop),VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_get_idx),VARREF(YcolsSpipeYpipe_get_idx_setter),VARREF(YLintG),T20);
  lit_10 = YPPsym((P)"pipe-put-idx");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T21 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pipe_put_idx_5 = YPmet(FUNCODEREF(fun_pipe_put_idx_5),LITREF(lit_10),T21,ENVNUL,PNUL,sloc(12));
  T23 = VARREF_OR(YcolsSpipeYpipe_put_idx,YPfalse);
  T24 = fun_pipe_put_idx_5;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T24);
  VARSET(YcolsSpipeYpipe_put_idx,T22);
  lit_12 = YPPsym((P)"pipe-put-idx-setter");
  lit_13 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T25 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLintG),VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pipe_put_idx_setter_6 = YPmet(FUNCODEREF(fun_pipe_put_idx_setter_6),LITREF(lit_12),T25,ENVNUL,PNUL,sloc(12));
  T27 = VARREF_OR(YcolsSpipeYpipe_put_idx_setter,YPfalse);
  T28 = fun_pipe_put_idx_setter_6;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T28);
  VARSET(YcolsSpipeYpipe_put_idx_setter,T26);
  lit_14 = YPPlist(1,YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T29,ENVNUL,PNUL,sloc(12));
  T30 = fun_7;
  XCALL5(1,VARREF(YPprop),VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_put_idx),VARREF(YcolsSpipeYpipe_put_idx_setter),VARREF(YLintG),T30);
  lit_15 = YPPsym((P)"pipe-lock");
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  T31 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pipe_lock_8 = YPmet(FUNCODEREF(fun_pipe_lock_8),LITREF(lit_15),T31,ENVNUL,PNUL,sloc(13));
  T33 = VARREF_OR(YcolsSpipeYpipe_lock,YPfalse);
  T34 = fun_pipe_lock_8;
  T32 = XCALL2(1,VARREF(YPdefine_method),T33,T34);
  VARSET(YcolsSpipeYpipe_lock,T32);
  lit_17 = YPPsym((P)"pipe-lock-setter");
  lit_18 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T35 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YtimeSlockYLlockG),VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pipe_lock_setter_9 = YPmet(FUNCODEREF(fun_pipe_lock_setter_9),LITREF(lit_17),T35,ENVNUL,PNUL,sloc(13));
  T37 = VARREF_OR(YcolsSpipeYpipe_lock_setter,YPfalse);
  T38 = fun_pipe_lock_setter_9;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T38);
  VARSET(YcolsSpipeYpipe_lock_setter,T36);
  XCALL5(1,VARREF(YPprop),VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_lock),VARREF(YcolsSpipeYpipe_lock_setter),VARREF(YtimeSlockYLlockG),VARREF(YPprop_unbound_error));
  lit_19 = YPPsym((P)"pipe-available");
  lit_20 = YPPlist(1,YPPsym((P)"_x"));
  T39 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pipe_available_10 = YPmet(FUNCODEREF(fun_pipe_available_10),LITREF(lit_19),T39,ENVNUL,PNUL,sloc(14));
  T41 = VARREF_OR(YcolsSpipeYpipe_available,YPfalse);
  T42 = fun_pipe_available_10;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T42);
  VARSET(YcolsSpipeYpipe_available,T40);
  lit_21 = YPPsym((P)"pipe-available-setter");
  lit_22 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T43 = YPsig(LITREF(lit_22),YPPlist(2,VARREF(YtimeSeventYLeventG),VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pipe_available_setter_11 = YPmet(FUNCODEREF(fun_pipe_available_setter_11),LITREF(lit_21),T43,ENVNUL,PNUL,sloc(14));
  T45 = VARREF_OR(YcolsSpipeYpipe_available_setter,YPfalse);
  T46 = fun_pipe_available_setter_11;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T46);
  VARSET(YcolsSpipeYpipe_available_setter,T44);
  XCALL5(1,VARREF(YPprop),VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_available),VARREF(YcolsSpipeYpipe_available_setter),VARREF(YtimeSeventYLeventG),VARREF(YPprop_unbound_error));
  lit_23 = YPPsym((P)"fab");
  lit_24 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"s"));
  T48 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YcolsSpipeYLpipeG));
  T47 = YPsig(LITREF(lit_24),YPPlist(2,T48,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YcolsSpipeYLpipeG),Ynil);
  fun_fab_12 = YPmet(FUNCODEREF(fun_fab_12),LITREF(lit_23),T47,ENVNUL,PNUL,sloc(16));
  T50 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T51 = fun_fab_12;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T51);
  VARSET(YgooScolsScolYfab,T49);
  lit_25 = YPPsym((P)"@len");
  lit_26 = YPPlist(1,YPPsym((P)"c"));
  T52 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YcolsSpipeYOlen = YPmet(FUNCODEREF(YcolsSpipeYOlen),LITREF(lit_25),T52,ENVNUL,PNUL,sloc(21));
  T53 = YcolsSpipeYOlen;
  VARSET(YcolsSpipeYOlen,T53);
  lit_27 = YPPsym((P)"len");
  lit_28 = YPPlist(1,YPPsym((P)"c"));
  lit_29 = Ynil;
  T56 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T56,ENVNUL,PNUL,sloc(24));
  T55 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T55,ENVNUL,PNUL,sloc(24));
  T54 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_16 = YPmet(FUNCODEREF(fun_len_16),LITREF(lit_27),T54,ENVNUL,PNUL,sloc(24));
  T58 = VARREF_OR(YgooStypesYlen,YPfalse);
  T59 = fun_len_16;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YgooStypesYlen,T57);
  lit_30 = YPPsym((P)"grow-pipe!");
  lit_31 = YPPlist(1,YPPsym((P)"c"));
  T60 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_grow_pipeX_17 = YPmet(FUNCODEREF(fun_grow_pipeX_17),LITREF(lit_30),T60,ENVNUL,PNUL,sloc(26));
  T62 = VARREF_OR(YcolsSpipeYgrow_pipeX,YPfalse);
  T63 = fun_grow_pipeX_17;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YcolsSpipeYgrow_pipeX,T61);
  lit_32 = YPPsym((P)"add!");
  lit_33 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T66 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T66,ENVNUL,PNUL,sloc(39));
  T65 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T65,ENVNUL,PNUL,sloc(39));
  T64 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YcolsSpipeYLpipeG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YcolsSpipeYLpipeG),Ynil);
  fun_addX_20 = YPmet(FUNCODEREF(fun_addX_20),LITREF(lit_32),T64,ENVNUL,PNUL,sloc(38));
  T68 = VARREF_OR(YgooScolsScolxYaddX,YPfalse);
  T69 = fun_addX_20;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YgooScolsScolxYaddX,T67);
  lit_34 = YPPsym((P)"enq!");
  lit_35 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T70 = YPsig(LITREF(lit_35),YPPlist(2,VARREF(YcolsSpipeYLpipeG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YcolsSpipeYLpipeG),Ynil);
  fun_enqX_21 = YPmet(FUNCODEREF(fun_enqX_21),LITREF(lit_34),T70,ENVNUL,PNUL,sloc(49));
  T72 = VARREF_OR(YcolsSpipeYenqX,YPfalse);
  T73 = fun_enqX_21;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T73);
  VARSET(YcolsSpipeYenqX,T71);
  lit_36 = YPPsym((P)"deq!");
  lit_37 = YPPlist(1,YPPsym((P)"c"));
  T76 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T76,ENVNUL,PNUL,sloc(53));
  T75 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T75,ENVNUL,PNUL,sloc(53));
  T74 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_deqX_24 = YPmet(FUNCODEREF(fun_deqX_24),LITREF(lit_36),T74,ENVNUL,PNUL,sloc(52));
  T78 = VARREF_OR(YcolsSpipeYdeqX,YPfalse);
  T79 = fun_deqX_24;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T79);
  VARSET(YcolsSpipeYdeqX,T77);
  lit_38 = YPPsym((P)"zap!");
  lit_39 = YPPlist(1,YPPsym((P)"c"));
  T82 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T82,ENVNUL,PNUL,sloc(61));
  T81 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T81,ENVNUL,PNUL,sloc(61));
  T80 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YcolsSpipeYLpipeG),Ynil);
  fun_zapX_27 = YPmet(FUNCODEREF(fun_zapX_27),LITREF(lit_38),T80,ENVNUL,PNUL,sloc(60));
  T84 = VARREF_OR(YgooScolsScolxYzapX,YPfalse);
  T85 = fun_zapX_27;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YgooScolsScolxYzapX,T83);
  lit_40 = YPPsym((P)"pipe-idx");
  lit_41 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T88 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T88,ENVNUL,PNUL,sloc(67));
  T87 = YPsig(LITREF(lit_29),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T87,ENVNUL,PNUL,sloc(67));
  T86 = YPsig(LITREF(lit_41),YPPlist(2,VARREF(YcolsSpipeYLpipeG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  YcolsSpipeYpipe_idx = YPmet(FUNCODEREF(YcolsSpipeYpipe_idx),LITREF(lit_40),T86,ENVNUL,PNUL,sloc(66));
  T89 = YcolsSpipeYpipe_idx;
  VARSET(YcolsSpipeYpipe_idx,T89);
  lit_42 = YPPsym((P)"low-elt");
  lit_43 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T90 = YPsig(LITREF(lit_43),YPPlist(2,VARREF(YcolsSpipeYLpipeG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_31 = YPmet(FUNCODEREF(fun_low_elt_31),LITREF(lit_42),T90,ENVNUL,PNUL,sloc(70));
  T92 = VARREF_OR(YgooScolsScolYlow_elt,YPfalse);
  T93 = fun_low_elt_31;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T93);
  VARSET(YgooScolsScolYlow_elt,T91);
  lit_44 = YPPsym((P)"low-elt-setter");
  lit_45 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"i"));
  T94 = YPsig(LITREF(lit_45),YPPlist(3,VARREF(YLanyG),VARREF(YcolsSpipeYLpipeG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_low_elt_setter_32 = YPmet(FUNCODEREF(fun_low_elt_setter_32),LITREF(lit_44),T94,ENVNUL,PNUL,sloc(73));
  T96 = VARREF_OR(YgooScolsScolxYlow_elt_setter,YPfalse);
  T97 = fun_low_elt_setter_32;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T97);
  VARSET(YgooScolsScolxYlow_elt_setter,T95);
  lit_46 = YPPsym((P)"elt-or");
  lit_47 = YPPlist(3,YPPsym((P)"c"),YPPsym((P)"i"),YPPsym((P)"default"));
  T98 = YPsig(LITREF(lit_47),YPPlist(3,VARREF(YcolsSpipeYLpipeG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_33 = YPmet(FUNCODEREF(fun_elt_or_33),LITREF(lit_46),T98,ENVNUL,PNUL,sloc(76));
  T100 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T101 = fun_elt_or_33;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T101);
  VARSET(YgooScolsScolYelt_or,T99);
  T102 = YPfalse;
  return T102;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_timeSlock;
extern MODULE_INFO module_info_timeSevent;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSlate_macros;
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
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"lock-state", &module_info_timeSlock, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"event-name", &module_info_timeSevent, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"lock-handle", &module_info_timeSlock, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"event-signal", &module_info_timeSevent, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"event-wait", &module_info_timeSevent, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"<lock>", &module_info_timeSlock, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"lock-destroy", &module_info_timeSlock, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"with-lock", &module_info_timeSlock, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"lock-unlock", &module_info_timeSlock, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"event-wait-timed", &module_info_timeSevent, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"lock-lock", &module_info_timeSlock, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {">", &module_info_gooSmag, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"event-reset", &module_info_timeSevent, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"<event>", &module_info_timeSevent, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"event-broadcast", &module_info_timeSevent, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<pipe>", CVAR, &YcolsSpipeYLpipeG},
  {"pipe-available", CVAR, &YcolsSpipeYpipe_available},
  {"pipe-idx", CVAR, &YcolsSpipeYpipe_idx},
  {"pipe-lock-setter", CVAR, &YcolsSpipeYpipe_lock_setter},
  {"@len", CVAR, &YcolsSpipeYOlen},
  {"pipe-data", CVAR, &YcolsSpipeYpipe_data},
  {"pipe-put-idx-setter", CVAR, &YcolsSpipeYpipe_put_idx_setter},
  {"grow-pipe!", CVAR, &YcolsSpipeYgrow_pipeX},
  {"pipe-data-setter", CVAR, &YcolsSpipeYpipe_data_setter},
  {"---main-0---", PVAR, NULL},
  {"enq!", CVAR, &YcolsSpipeYenqX},
  {"pipe-get-idx", CVAR, &YcolsSpipeYpipe_get_idx},
  {"pipe-put-idx", CVAR, &YcolsSpipeYpipe_put_idx},
  {"deq!", CVAR, &YcolsSpipeYdeqX},
  {"pipe-get-idx-setter", CVAR, &YcolsSpipeYpipe_get_idx_setter},
  {"pipe-available-setter", CVAR, &YcolsSpipeYpipe_available_setter},
  {"pipe-lock", CVAR, &YcolsSpipeYpipe_lock},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<pipe>", NULL},
  {"enq!", NULL},
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
