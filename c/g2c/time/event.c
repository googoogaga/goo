/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"time/event");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: time/event */

EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
DEF(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YLclassG,"goo/boot","<class>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YPfalse,"goo/boot","%false");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yas_error,"goo/boot","as-error");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YOdo,"goo/boot","@do");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathY_,"goo/math","-");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YOallQ,"goo/boot","@all?");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YOlst,"goo/boot","@lst");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YtimeSeventYLeventG,"time/event","<event>");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YOmap,"goo/boot","@map");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
DEF(YtimeSeventYevent_handle,"time/event","event-handle");
DEF(YtimeSeventYevent_handle_setter,"time/event","event-handle-setter");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YLbignumG,"goo/boot","<bignum>");
DEF(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yfab_pair,"goo/boot","fab-pair");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ylst,"goo/boot","lst");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOnew,"goo/boot","@new");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YLboxG,"goo/boot","<box>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YPtrue,"goo/boot","%true");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSlogYE,"goo/log","=");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ynew,"goo/boot","new");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
DEF(YtimeSeventYevent_name,"time/event","event-name");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_12);
DEFLIT(lit_5);
DEFLIT(lit_14);
DEFLIT(lit_16);
DEFLIT(lit_15);
DEFLIT(lit_7);
DEFLIT(lit_19);
DEFLIT(lit_0);
DEFLIT(lit_17);
DEFLIT(lit_9);
DEFLIT(lit_11);
DEFLIT(lit_18);
DEFLIT(lit_13);
DEFLIT(lit_10);
DEFLIT(lit_3);
DEFLIT(lit_2);
DEFLIT(lit_4);
DEFLIT(lit_6);
DEFLIT(lit_8);
DEFLIT(lit_20);
DEFLIT(lit_1);

/* FUNCTIONS: */

LOCFOR(fun_event_name_0);
LOCFOR(fun_1);
LOCFOR(fun_event_handle_2);
LOCFOR(fun_event_handle_setter_3);
LOCFOR(fun_new_4);
LOCFOR(fun_event_signal_5);
LOCFOR(fun_event_broadcast_6);
LOCFOR(fun_event_reset_7);
LOCFOR(fun_event_wait_8);
LOCFOR(fun_event_wait_timed_9);
extern P YtimeSeventY___main_0___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_event_name_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YtimeSeventYevent_name));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_1) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_event_handle_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YtimeSeventYevent_handle));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_event_handle_setter_3) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YtimeSeventYevent_handle));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_new_4) {
  P c_,args_;
  P xF5261;
  P tmpF5260;
  P eventF5259;
  P next_metsF5258;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
  T10 = (P)YPfun_reg();
  T11 = (P)YPnext_methods();
  T9 = CALL4(1,VARREF(YgooSmacrosYOchecked_next_methods),T10,T11,c_,args_);
  next_metsF5258 = T9;
  T7 = CALL1(1,VARREF(Yhead),next_metsF5258);
  T8 = CALL1(1,VARREF(Ytail),next_metsF5258);
  T6 = CALL4(1,VARREF(YgooSmacrosYnapp),T7,T8,c_,args_);
  eventF5259 = T6;
  T5 = CALL1(1,VARREF(YtimeSeventYevent_name),eventF5259);
  tmpF5260 = T5;
  if (tmpF5260 != YPfalse) {
    T4 = tmpF5260;
  } else {
    T4 = LITREF(lit_10);
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T4);
  T2 = (P)YPsu(T3);
  T1 = (P)YtimeSeventYPevent_create(T2);
  xF5261 = T1;
  T0 = (P)YPtag_into(xF5261,(P)3);
  CALL2(1,VARREF(YtimeSeventYevent_handle_setter),T0,eventF5259);
UNLINK_STACK();
  RET(eventF5259);
}

LOCCODEDEF(fun_event_signal_5) {
  P e_;
  P xF5262;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF5262 = T1;
  T0 = (P)YPuntag_into(xF5262);
  (P)YtimeSeventYPevent_signal(T0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_event_broadcast_6) {
  P e_;
  P xF5263;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF5263 = T1;
  T0 = (P)YPuntag_into(xF5263);
  (P)YtimeSeventYPevent_broadcast(T0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_event_reset_7) {
  P e_;
  P xF5264;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF5264 = T1;
  T0 = (P)YPuntag_into(xF5264);
  (P)YtimeSeventYPevent_reset(T0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_event_wait_8) {
  P e_,l_;
  P xF5266;
  P xF5265;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(e_, 0);
  ARG(l_, 1);
  T3 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF5265 = T3;
  T2 = (P)YPuntag_into(xF5265);
  T5 = CALL1(1,VARREF(YtimeSlockYlock_handle),l_);
  xF5266 = T5;
  T4 = (P)YPuntag_into(xF5266);
  T1 = (P)YtimeSeventYPevent_wait(T2,T4);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_event_wait_timed_9) {
  P e_,l_,secs_;
  P xF5268;
  P xF5267;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(l_, 1);
  ARG(secs_, 2);
  T3 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF5267 = T3;
  T2 = (P)YPuntag_into(xF5267);
  T5 = CALL1(1,VARREF(YtimeSlockYlock_handle),l_);
  xF5268 = T5;
  T4 = (P)YPuntag_into(xF5268);
  T6 = (P)YPfu(secs_);
  T1 = (P)YtimeSeventYPevent_wait_timed(T2,T4,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

P YtimeSeventY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
DEFCREGS();
  lit_0 = YPPsym((P)"<event>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YtimeSeventYLeventG,T0);
  lit_1 = YPPsym((P)"event-name");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_name_0 = YPfab_met(FUNCODEREF(fun_event_name_0),T2,LITREF(lit_1),LITREF(lit_2),sloc(20),YPfalse);
  T4 = VARREF_OR(YtimeSeventYevent_name,YPfalse);
  T5 = fun_event_name_0;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YtimeSeventYevent_name,T3);
  lit_3 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPfab_met(FUNCODEREF(fun_1),T6,YPfalse,LITREF(lit_3),sloc(20),YPfalse);
  T7 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T8 = fun_1;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YtimeSeventYLeventG),VARREF(YtimeSeventYevent_name),YPfalse,T7,T8);
  lit_4 = YPPsym((P)"event-handle");
  lit_5 = YPPlist(1,YPPsym((P)"_x"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_handle_2 = YPfab_met(FUNCODEREF(fun_event_handle_2),T9,LITREF(lit_4),LITREF(lit_5),sloc(21),YPfalse);
  T11 = VARREF_OR(YtimeSeventYevent_handle,YPfalse);
  T12 = fun_event_handle_2;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YtimeSeventYevent_handle,T10);
  lit_6 = YPPsym((P)"event-handle-setter");
  lit_7 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T13 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_event_handle_setter_3 = YPfab_met(FUNCODEREF(fun_event_handle_setter_3),T13,LITREF(lit_6),LITREF(lit_7),sloc(21),YPfalse);
  T15 = VARREF_OR(YtimeSeventYevent_handle_setter,YPfalse);
  T16 = fun_event_handle_setter_3;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YtimeSeventYevent_handle_setter,T14);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YtimeSeventYLeventG),VARREF(YtimeSeventYevent_handle),VARREF(YtimeSeventYevent_handle_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_8 = YPPsym((P)"new");
  lit_9 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  lit_10 = YPsb((P)"");
  T18 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YtimeSeventYLeventG));
  T17 = YPfab_sig(YPPlist(1,T18),YPtrue,YPint((P)1),VARREF(YtimeSeventYLeventG),Ynil);
  fun_new_4 = YPfab_met(FUNCODEREF(fun_new_4),T17,LITREF(lit_8),LITREF(lit_9),sloc(23),YPfalse);
  T20 = VARREF_OR(Ynew,YPfalse);
  T21 = fun_new_4;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(Ynew,T19);
  lit_11 = YPPsym((P)"event-signal");
  lit_12 = YPPlist(1,YPPsym((P)"e"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_signal_5 = YPfab_met(FUNCODEREF(fun_event_signal_5),T22,LITREF(lit_11),LITREF(lit_12),sloc(29),YPfalse);
  T24 = VARREF_OR(YtimeSeventYevent_signal,YPfalse);
  T25 = fun_event_signal_5;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YtimeSeventYevent_signal,T23);
  lit_13 = YPPsym((P)"event-broadcast");
  lit_14 = YPPlist(1,YPPsym((P)"e"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_broadcast_6 = YPfab_met(FUNCODEREF(fun_event_broadcast_6),T26,LITREF(lit_13),LITREF(lit_14),sloc(32),YPfalse);
  T28 = VARREF_OR(YtimeSeventYevent_broadcast,YPfalse);
  T29 = fun_event_broadcast_6;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YtimeSeventYevent_broadcast,T27);
  lit_15 = YPPsym((P)"event-reset");
  lit_16 = YPPlist(1,YPPsym((P)"e"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_reset_7 = YPfab_met(FUNCODEREF(fun_event_reset_7),T30,LITREF(lit_15),LITREF(lit_16),sloc(38),YPfalse);
  T32 = VARREF_OR(YtimeSeventYevent_reset,YPfalse);
  T33 = fun_event_reset_7;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YtimeSeventYevent_reset,T31);
  lit_17 = YPPsym((P)"event-wait");
  lit_18 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"l"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YtimeSeventYLeventG),VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_event_wait_8 = YPfab_met(FUNCODEREF(fun_event_wait_8),T34,LITREF(lit_17),LITREF(lit_18),sloc(41),YPfalse);
  T36 = VARREF_OR(YtimeSeventYevent_wait,YPfalse);
  T37 = fun_event_wait_8;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YtimeSeventYevent_wait,T35);
  lit_19 = YPPsym((P)"event-wait-timed");
  lit_20 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"l"),YPPsym((P)"secs"));
  T38 = YPfab_sig(YPPlist(3,VARREF(YtimeSeventYLeventG),VARREF(YtimeSlockYLlockG),VARREF(YLfloG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_event_wait_timed_9 = YPfab_met(FUNCODEREF(fun_event_wait_timed_9),T38,LITREF(lit_19),LITREF(lit_20),sloc(44),YPfalse);
  T40 = VARREF_OR(YtimeSeventYevent_wait_timed,YPfalse);
  T41 = fun_event_wait_timed_9;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YtimeSeventYevent_wait_timed,T39);
  T42 = YPfalse;
  return T42;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_timeSthreads;
extern MODULE_INFO module_info_timeSlock;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_timeSthreads},
  {&module_info_timeSlock},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@add-new", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"lock-handle", &module_info_timeSlock, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"<lock>", &module_info_timeSlock, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<thread>", &module_info_timeSthreads, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"lock-destroy", &module_info_timeSlock, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"sleep", &module_info_timeSthreads, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"test-thread-1", &module_info_timeSthreads, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"lock-state", &module_info_timeSlock, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"thread-yield", &module_info_timeSthreads, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"thread-priority", &module_info_timeSthreads, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"lock-unlock", &module_info_timeSlock, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"test-thread-2", &module_info_timeSthreads, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"thread-name", &module_info_timeSthreads, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"thread-function", &module_info_timeSthreads, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"spawn", &module_info_timeSthreads, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"with-lock", &module_info_timeSlock, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"thread-current", &module_info_timeSthreads, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"lock-lock", &module_info_timeSlock, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"event-broadcast", CVAR, &YtimeSeventYevent_broadcast},
  {"---main-0---", PVAR, NULL},
  {"%event-signal", PVAR, NULL},
  {"event-wait", CVAR, &YtimeSeventYevent_wait},
  {"%event-create", PVAR, NULL},
  {"event-signal", CVAR, &YtimeSeventYevent_signal},
  {"%event-wait", PVAR, NULL},
  {"<event>", CVAR, &YtimeSeventYLeventG},
  {"event-handle", CVAR, &YtimeSeventYevent_handle},
  {"event-handle-setter", CVAR, &YtimeSeventYevent_handle_setter},
  {"event-wait-timed", CVAR, &YtimeSeventYevent_wait_timed},
  {"%event-destroy", PVAR, NULL},
  {"event-reset", CVAR, &YtimeSeventYevent_reset},
  {"%event-reset", PVAR, NULL},
  {"%event-broadcast", PVAR, NULL},
  {"%event-wait-timed", PVAR, NULL},
  {"event-name", CVAR, &YtimeSeventYevent_name},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"event-broadcast", NULL},
  {"event-wait", NULL},
  {"event-signal", NULL},
  {"<event>", NULL},
  {"event-reset", NULL},
  {"event-wait-timed", NULL},
  {"event-name", NULL},
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
