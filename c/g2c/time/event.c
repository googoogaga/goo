/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"time/event");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: time/event */

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
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
DEF(YtimeSeventYevent_handle_setter,"time/event","event-handle-setter");
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
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
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
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YtimeSeventYevent_name,"time/event","event-name");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YPsymbols,"goo/boot","%symbols");
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
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YtimeSeventYevent_handle,"time/event","event-handle");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
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
DEF(YtimeSeventYevent_wait,"time/event","event-wait");
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
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yclass_of,"goo/boot","class-of");
DEF(YtimeSeventYevent_name_setter,"time/event","event-name-setter");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
DEF(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
DEF(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YtimeSeventYLeventG,"time/event","<event>");
EXT(YgooSmathYE,"goo/math","=");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ytail_setter,"goo/boot","tail-setter");
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
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
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
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yhead,"goo/boot","head");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YLnumG,"goo/boot","<num>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_2);
DEFLIT(lit_10);
DEFLIT(lit_7);
DEFLIT(lit_14);
DEFLIT(lit_17);
DEFLIT(lit_21);
DEFLIT(lit_0);
DEFLIT(lit_19);
DEFLIT(lit_1);
DEFLIT(lit_13);
DEFLIT(lit_20);
DEFLIT(lit_9);
DEFLIT(lit_6);
DEFLIT(lit_11);
DEFLIT(lit_16);
DEFLIT(lit_15);
DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_12);
DEFLIT(lit_8);
DEFLIT(lit_18);
DEFLIT(lit_22);
DEFLIT(lit_4);

/* FUNCTIONS: */

LOCFOR(fun_event_name_0);
LOCFOR(fun_event_name_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_event_handle_3);
LOCFOR(fun_event_handle_setter_4);
LOCFOR(fun_new_5);
LOCFOR(fun_event_signal_6);
LOCFOR(fun_event_broadcast_7);
LOCFOR(fun_event_reset_8);
LOCFOR(fun_event_wait_9);
LOCFOR(fun_event_wait_timed_10);
extern P YtimeSeventY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_event_name_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSeventYevent_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_event_name_setter_1) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSeventYevent_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_event_handle_3) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSeventYevent_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_event_handle_setter_4) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSeventYevent_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_new_5) {
  P c_,args_;
  P xF3865;
  P tmpF3864;
  P eventF3863;
  P next_metsF3862;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
  T10 = (P)YPfun_reg();
  T11 = (P)YPnext_methods();
  T9 = CALL4(1,VARREF(YgooSmacrosYOchecked_next_methods),T10,T11,c_,args_);
  next_metsF3862 = T9;
  T7 = CALL1(1,VARREF(Yhead),next_metsF3862);
  T8 = CALL1(1,VARREF(Ytail),next_metsF3862);
  T6 = CALL4(1,VARREF(YgooSmacrosYnapp),T7,T8,c_,args_);
  eventF3863 = T6;
  T5 = CALL1(1,VARREF(YtimeSeventYevent_name),eventF3863);
  tmpF3864 = T5;
  if (tmpF3864 != YPfalse) {
    T4 = tmpF3864;
  } else {
    T4 = LITREF(lit_12);
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T4);
  T2 = (P)YPsu(T3);
  T1 = (P)YtimeSeventYPevent_create(T2);
  xF3865 = T1;
  T0 = (P)YPtag_into(xF3865,(P)3);
  CALL2(1,VARREF(YtimeSeventYevent_handle_setter),T0,eventF3863);
UNLINK_STACK();
  RET(eventF3863);
}

FUNCODEDEF(fun_event_signal_6) {
  P e_;
  P xF3866;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF3866 = T1;
  T0 = (P)YPuntag_into(xF3866);
  (P)YtimeSeventYPevent_signal(T0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_event_broadcast_7) {
  P e_;
  P xF3867;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF3867 = T1;
  T0 = (P)YPuntag_into(xF3867);
  (P)YtimeSeventYPevent_broadcast(T0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_event_reset_8) {
  P e_;
  P xF3868;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF3868 = T1;
  T0 = (P)YPuntag_into(xF3868);
  (P)YtimeSeventYPevent_reset(T0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_event_wait_9) {
  P e_,l_;
  P xF3870;
  P xF3869;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(e_, 0);
  ARG(l_, 1);
  T3 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF3869 = T3;
  T2 = (P)YPuntag_into(xF3869);
  T5 = CALL1(1,VARREF(YtimeSlockYlock_handle),l_);
  xF3870 = T5;
  T4 = (P)YPuntag_into(xF3870);
  T1 = (P)YtimeSeventYPevent_wait(T2,T4);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_event_wait_timed_10) {
  P e_,l_,secs_;
  P xF3872;
  P xF3871;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(l_, 1);
  ARG(secs_, 2);
  T3 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF3871 = T3;
  T2 = (P)YPuntag_into(xF3871);
  T5 = CALL1(1,VARREF(YtimeSlockYlock_handle),l_);
  xF3872 = T5;
  T4 = (P)YPuntag_into(xF3872);
  T6 = (P)YPfu(secs_);
  T1 = (P)YtimeSeventYPevent_wait_timed(T2,T4,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

P YtimeSeventY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
DEFCREGS();
  lit_0 = YPPsym((P)"<event>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YtimeSeventYLeventG,T0);
  lit_1 = YPPsym((P)"event-name");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_name_0 = YPmet(FUNCODEREF(fun_event_name_0),LITREF(lit_1),T2,ENVNUL,PNUL,sloc(20));
  T4 = VARREF_OR(YtimeSeventYevent_name,YPfalse);
  T5 = fun_event_name_0;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T5);
  VARSET(YtimeSeventYevent_name,T3);
  lit_3 = YPPsym((P)"event-name-setter");
  lit_4 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T7 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T6 = YPsig(LITREF(lit_4),YPPlist(2,T7,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_event_name_setter_1 = YPmet(FUNCODEREF(fun_event_name_setter_1),LITREF(lit_3),T6,ENVNUL,PNUL,sloc(20));
  T9 = VARREF_OR(YtimeSeventYevent_name_setter,YPfalse);
  T10 = fun_event_name_setter_1;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T10);
  VARSET(YtimeSeventYevent_name_setter,T8);
  lit_5 = YPPlist(1,YPPsym((P)"_x"));
  T11 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T11,ENVNUL,PNUL,sloc(20));
  T12 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T13 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSeventYLeventG),VARREF(YtimeSeventYevent_name),VARREF(YtimeSeventYevent_name_setter),T12,T13);
  lit_6 = YPPsym((P)"event-handle");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_handle_3 = YPmet(FUNCODEREF(fun_event_handle_3),LITREF(lit_6),T14,ENVNUL,PNUL,sloc(21));
  T16 = VARREF_OR(YtimeSeventYevent_handle,YPfalse);
  T17 = fun_event_handle_3;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T17);
  VARSET(YtimeSeventYevent_handle,T15);
  lit_8 = YPPsym((P)"event-handle-setter");
  lit_9 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T18 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLanyG),VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_event_handle_setter_4 = YPmet(FUNCODEREF(fun_event_handle_setter_4),LITREF(lit_8),T18,ENVNUL,PNUL,sloc(21));
  T20 = VARREF_OR(YtimeSeventYevent_handle_setter,YPfalse);
  T21 = fun_event_handle_setter_4;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T21);
  VARSET(YtimeSeventYevent_handle_setter,T19);
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSeventYLeventG),VARREF(YtimeSeventYevent_handle),VARREF(YtimeSeventYevent_handle_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_10 = YPPsym((P)"new");
  lit_11 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  lit_12 = YPsb((P)"");
  T23 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YtimeSeventYLeventG));
  T22 = YPsig(LITREF(lit_11),YPPlist(1,T23),YPtrue,YPint((P)1),VARREF(YtimeSeventYLeventG),Ynil);
  fun_new_5 = YPmet(FUNCODEREF(fun_new_5),LITREF(lit_10),T22,ENVNUL,PNUL,sloc(23));
  T25 = VARREF_OR(Ynew,YPfalse);
  T26 = fun_new_5;
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T26);
  VARSET(Ynew,T24);
  lit_13 = YPPsym((P)"event-signal");
  lit_14 = YPPlist(1,YPPsym((P)"e"));
  T27 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_signal_6 = YPmet(FUNCODEREF(fun_event_signal_6),LITREF(lit_13),T27,ENVNUL,PNUL,sloc(29));
  T29 = VARREF_OR(YtimeSeventYevent_signal,YPfalse);
  T30 = fun_event_signal_6;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T30);
  VARSET(YtimeSeventYevent_signal,T28);
  lit_15 = YPPsym((P)"event-broadcast");
  lit_16 = YPPlist(1,YPPsym((P)"e"));
  T31 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_broadcast_7 = YPmet(FUNCODEREF(fun_event_broadcast_7),LITREF(lit_15),T31,ENVNUL,PNUL,sloc(32));
  T33 = VARREF_OR(YtimeSeventYevent_broadcast,YPfalse);
  T34 = fun_event_broadcast_7;
  T32 = XCALL2(1,VARREF(YPdefine_method),T33,T34);
  VARSET(YtimeSeventYevent_broadcast,T32);
  lit_17 = YPPsym((P)"event-reset");
  lit_18 = YPPlist(1,YPPsym((P)"e"));
  T35 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_reset_8 = YPmet(FUNCODEREF(fun_event_reset_8),LITREF(lit_17),T35,ENVNUL,PNUL,sloc(38));
  T37 = VARREF_OR(YtimeSeventYevent_reset,YPfalse);
  T38 = fun_event_reset_8;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T38);
  VARSET(YtimeSeventYevent_reset,T36);
  lit_19 = YPPsym((P)"event-wait");
  lit_20 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"l"));
  T39 = YPsig(LITREF(lit_20),YPPlist(2,VARREF(YtimeSeventYLeventG),VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_event_wait_9 = YPmet(FUNCODEREF(fun_event_wait_9),LITREF(lit_19),T39,ENVNUL,PNUL,sloc(41));
  T41 = VARREF_OR(YtimeSeventYevent_wait,YPfalse);
  T42 = fun_event_wait_9;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T42);
  VARSET(YtimeSeventYevent_wait,T40);
  lit_21 = YPPsym((P)"event-wait-timed");
  lit_22 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"l"),YPPsym((P)"secs"));
  T43 = YPsig(LITREF(lit_22),YPPlist(3,VARREF(YtimeSeventYLeventG),VARREF(YtimeSlockYLlockG),VARREF(YLfloG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_event_wait_timed_10 = YPmet(FUNCODEREF(fun_event_wait_timed_10),LITREF(lit_21),T43,ENVNUL,PNUL,sloc(44));
  T45 = VARREF_OR(YtimeSeventYevent_wait_timed,YPfalse);
  T46 = fun_event_wait_timed_10;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T46);
  VARSET(YtimeSeventYevent_wait_timed,T44);
  T47 = YPfalse;
  return T47;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_timeSthreads;
extern MODULE_INFO module_info_timeSlock;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsScol;
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
  {&module_info_gooSboot},
  {&module_info_timeSthreads},
  {&module_info_timeSlock},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"thread-current", &module_info_timeSthreads, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"lock-state", &module_info_timeSlock, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"spawn", &module_info_timeSthreads, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
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
  {"%i-", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
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
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"lock-unlock", &module_info_timeSlock, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
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
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"<lock>", &module_info_timeSlock, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"lock-destroy", &module_info_timeSlock, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"with-lock", &module_info_timeSlock, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"thread-name", &module_info_timeSthreads, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"thread-function", &module_info_timeSthreads, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"lock-lock", &module_info_timeSlock, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"thread-priority", &module_info_timeSthreads, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"test-thread-2", &module_info_timeSthreads, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
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
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"thread-yield", &module_info_timeSthreads, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"sleep", &module_info_timeSthreads, NULL},
  {"<thread>", &module_info_timeSthreads, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"test-thread-1", &module_info_timeSthreads, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"event-handle-setter", CVAR, &YtimeSeventYevent_handle_setter},
  {"event-name", CVAR, &YtimeSeventYevent_name},
  {"%event-reset", PVAR, NULL},
  {"%event-create", PVAR, NULL},
  {"event-handle", CVAR, &YtimeSeventYevent_handle},
  {"event-wait", CVAR, &YtimeSeventYevent_wait},
  {"event-name-setter", CVAR, &YtimeSeventYevent_name_setter},
  {"%event-wait", PVAR, NULL},
  {"event-wait-timed", CVAR, &YtimeSeventYevent_wait_timed},
  {"event-signal", CVAR, &YtimeSeventYevent_signal},
  {"%event-destroy", PVAR, NULL},
  {"%event-signal", PVAR, NULL},
  {"event-reset", CVAR, &YtimeSeventYevent_reset},
  {"<event>", CVAR, &YtimeSeventYLeventG},
  {"---main-0---", PVAR, NULL},
  {"event-broadcast", CVAR, &YtimeSeventYevent_broadcast},
  {"%event-wait-timed", PVAR, NULL},
  {"%event-broadcast", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"event-name", NULL},
  {"event-wait-timed", NULL},
  {"event-signal", NULL},
  {"event-wait", NULL},
  {"event-reset", NULL},
  {"<event>", NULL},
  {"event-broadcast", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_timeSevent;
MODULE_INFO module_info_timeSevent = {
  "time/event",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_timeSthreads (void);
extern void load_module_timeSlock (void);

/* EXPRESSION: */

extern void load_module_timeSevent (void);

void load_module_timeSevent (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_timeSthreads();
  load_module_timeSlock();

  (P)YtimeSeventY___main_0___();

}

/* END OF GENERATED CODE. */
