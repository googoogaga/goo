/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: time/event */

EXT(YisaQ,"goo/boot","isa?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmathYDe,"goo/math","$e");
DEF(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yerror,"goo/boot","error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYmodA,"goo/math","mod+");
DEF(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(Ytup,"goo/boot","tup");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Ytail,"goo/boot","tail");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
DEF(YtimeSeventYevent_name,"time/event","event-name");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
DEF(YtimeSeventYevent_handle,"time/event","event-handle");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YtimeSeventYLeventG,"time/event","<event>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yhead,"goo/boot","head");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLintG,"goo/boot","<int>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(Ynot,"goo/boot","not");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YOlst,"goo/boot","@lst");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
DEF(YtimeSeventYevent_handle_setter,"time/event","event-handle-setter");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YtimeSeventYevent_name_setter,"time/event","event-name-setter");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ynew,"goo/boot","new");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_19);
DEFLIT(lit_9);
DEFLIT(lit_10);
DEFLIT(lit_8);
DEFLIT(lit_7);
DEFLIT(lit_11);
DEFLIT(lit_1);
DEFLIT(lit_12);
DEFLIT(lit_2);
DEFLIT(lit_13);
DEFLIT(lit_17);
DEFLIT(lit_3);
DEFLIT(lit_14);
DEFLIT(lit_4);
DEFLIT(lit_16);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_18);
DEFLIT(lit_0);
DEFLIT(lit_15);

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
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSeventYevent_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_event_name_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSeventYevent_name));
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

FUNCODEDEF(fun_event_handle_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSeventYevent_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_event_handle_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSeventYevent_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_new_5) {
  P c_,args_;
  P tmpF2626;
  P eventF2625;
  P next_metsF2624;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T2 = (P)YPnext_methods();
  next_metsF2624 = T2;
  if (next_metsF2624 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),next_metsF2624);
    T6 = CALL1(1,VARREF(Ytail),next_metsF2624);
    T4 = CALL4(1,VARREF(YgooSmacrosYnapp),T5,T6,c_,args_);
    T3 = T4;
  } else {
    T7 = CALL1(1,VARREF(Yerror),LITREF(lit_10));
    T3 = T7;
  }
  T1 = T3;
  eventF2625 = T1;
  T13 = CALL1(1,VARREF(YtimeSeventYevent_name),eventF2625);
  tmpF2626 = T13;
  if (tmpF2626 != YPfalse) {
    T14 = tmpF2626;
  } else {
    T14 = LITREF(lit_11);
  }
  T12 = T14;
  T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T12);
  T10 = (P)YPsu(T11);
  T9 = (P)YtimeSeventYPevent_create(T10);
  T8 = (P)YPlb(T9);
  CALL2(1,VARREF(YtimeSeventYevent_handle_setter),T8,eventF2625);
  T0 = eventF2625;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_event_signal_6) {
  P e_,l_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(l_, 1);
loop:
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  T0 = (P)YPlu(T1);
  T3 = CALL1(1,VARREF(YtimeSlockYlock_handle),l_);
  T2 = (P)YPlu(T3);
  (P)YtimeSeventYPevent_signal(T0,T2);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_event_broadcast_7) {
  P e_,l_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(l_, 1);
loop:
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  T0 = (P)YPlu(T1);
  T3 = CALL1(1,VARREF(YtimeSlockYlock_handle),l_);
  T2 = (P)YPlu(T3);
  (P)YtimeSeventYPevent_broadcast(T0,T2);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_event_reset_8) {
  P e_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  T0 = (P)YPlu(T1);
  (P)YtimeSeventYPevent_reset(T0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_event_wait_9) {
  P e_,l_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(l_, 1);
loop:
  T3 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  T2 = (P)YPlu(T3);
  T5 = CALL1(1,VARREF(YtimeSlockYlock_handle),l_);
  T4 = (P)YPlu(T5);
  T1 = (P)YtimeSeventYPevent_wait(T2,T4);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_event_wait_timed_10) {
  P e_,l_,secs_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(l_, 1);
  ARG(secs_, 2);
loop:
  T3 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  T2 = (P)YPlu(T3);
  T5 = CALL1(1,VARREF(YtimeSlockYlock_handle),l_);
  T4 = (P)YPlu(T5);
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
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<event>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YtimeSeventYLeventG,T0);
  lit_1 = YPPsym((P)"event-name");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_name_0 = YPmet(FUNCODEREF(fun_event_name_0),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YtimeSeventYevent_name);
  if (T5 != YPfalse) {
    T4 = VARREF(YtimeSeventYevent_name);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_event_name_0;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YtimeSeventYevent_name,T3);
  lit_3 = YPPsym((P)"event-name-setter");
  lit_4 = YPPsym((P)"_z");
  T8 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,T8,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_event_name_setter_1 = YPmet(FUNCODEREF(fun_event_name_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T11 = BOUNDP(YtimeSeventYevent_name_setter);
  if (T11 != YPfalse) {
    T10 = VARREF(YtimeSeventYevent_name_setter);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_event_name_setter_1;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YtimeSeventYevent_name_setter,T9);
  T13 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T14 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T15 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSeventYLeventG),VARREF(YtimeSeventYevent_name),VARREF(YtimeSeventYevent_name_setter),T14,T15);
  lit_5 = YPPsym((P)"event-handle");
  T16 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_handle_3 = YPmet(FUNCODEREF(fun_event_handle_3),LITREF(lit_5),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YtimeSeventYevent_handle);
  if (T19 != YPfalse) {
    T18 = VARREF(YtimeSeventYevent_handle);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_event_handle_3;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YtimeSeventYevent_handle,T17);
  lit_6 = YPPsym((P)"event-handle-setter");
  T21 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_event_handle_setter_4 = YPmet(FUNCODEREF(fun_event_handle_setter_4),LITREF(lit_6),T21,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YtimeSeventYevent_handle_setter);
  if (T24 != YPfalse) {
    T23 = VARREF(YtimeSeventYevent_handle_setter);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_event_handle_setter_4;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YtimeSeventYevent_handle_setter,T22);
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSeventYLeventG),VARREF(YtimeSeventYevent_handle),VARREF(YtimeSeventYevent_handle_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_7 = YPPsym((P)"new");
  lit_8 = YPPsym((P)"c");
  lit_9 = YPPsym((P)"args");
  lit_10 = YPsb((P)"No next methods");
  lit_11 = YPsb((P)"");
  T27 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YtimeSeventYLeventG));
  T26 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_9)),YPPlist(1,T27),YPtrue,YPint((P)1),VARREF(YtimeSeventYLeventG),Ynil);
  fun_new_5 = YPmet(FUNCODEREF(fun_new_5),LITREF(lit_7),T26,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(Ynew);
  if (T30 != YPfalse) {
    T29 = VARREF(Ynew);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_new_5;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(Ynew,T28);
  lit_12 = YPPsym((P)"event-signal");
  lit_13 = YPPsym((P)"e");
  lit_14 = YPPsym((P)"l");
  T32 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_14)),YPPlist(2,VARREF(YtimeSeventYLeventG),VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_event_signal_6 = YPmet(FUNCODEREF(fun_event_signal_6),LITREF(lit_12),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YtimeSeventYevent_signal);
  if (T35 != YPfalse) {
    T34 = VARREF(YtimeSeventYevent_signal);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_event_signal_6;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YtimeSeventYevent_signal,T33);
  lit_15 = YPPsym((P)"event-broadcast");
  T37 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_14)),YPPlist(2,VARREF(YtimeSeventYLeventG),VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_event_broadcast_7 = YPmet(FUNCODEREF(fun_event_broadcast_7),LITREF(lit_15),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YtimeSeventYevent_broadcast);
  if (T40 != YPfalse) {
    T39 = VARREF(YtimeSeventYevent_broadcast);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_event_broadcast_7;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YtimeSeventYevent_broadcast,T38);
  lit_16 = YPPsym((P)"event-reset");
  T42 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_reset_8 = YPmet(FUNCODEREF(fun_event_reset_8),LITREF(lit_16),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YtimeSeventYevent_reset);
  if (T45 != YPfalse) {
    T44 = VARREF(YtimeSeventYevent_reset);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_event_reset_8;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YtimeSeventYevent_reset,T43);
  lit_17 = YPPsym((P)"event-wait");
  T47 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_14)),YPPlist(2,VARREF(YtimeSeventYLeventG),VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_event_wait_9 = YPmet(FUNCODEREF(fun_event_wait_9),LITREF(lit_17),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YtimeSeventYevent_wait);
  if (T50 != YPfalse) {
    T49 = VARREF(YtimeSeventYevent_wait);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_event_wait_9;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YtimeSeventYevent_wait,T48);
  lit_18 = YPPsym((P)"event-wait-timed");
  lit_19 = YPPsym((P)"secs");
  T52 = YPsig(YPPlist(3,LITREF(lit_13),LITREF(lit_14),LITREF(lit_19)),YPPlist(3,VARREF(YtimeSeventYLeventG),VARREF(YtimeSlockYLlockG),VARREF(YLfloG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_event_wait_timed_10 = YPmet(FUNCODEREF(fun_event_wait_timed_10),LITREF(lit_18),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YtimeSeventYevent_wait_timed);
  if (T55 != YPfalse) {
    T54 = VARREF(YtimeSeventYevent_wait_timed);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_event_wait_timed_10;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YtimeSeventYevent_wait_timed,T53);
  T57 = YPfalse;
  return T57;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_timeSthreads;
extern MODULE_INFO module_info_timeSlock;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_timeSthreads},
  {&module_info_timeSlock},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"until", &module_info_gooSmacros, "until"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"<<", &module_info_gooSmath, "<<"},
  {"thread-current", &module_info_timeSthreads, "thread-current"},
  {"%str", &module_info_gooSboot, "%str"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"close", &module_info_gooSioSport, "close"},
  {"error", &module_info_gooSboot, "error"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"out", &module_info_gooSioSport, "out"},
  {"lst", &module_info_gooSboot, "lst"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"round/", &module_info_gooSmath, "round/"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"lock-unlock", &module_info_timeSlock, "lock-unlock"},
  {"|", &module_info_gooSmath, "|"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"lock-lock", &module_info_timeSlock, "lock-lock"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"when", &module_info_gooSmacros, "when"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"sleep", &module_info_timeSthreads, "sleep"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"tail", &module_info_gooSboot, "tail"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"dv", &module_info_gooSboot, "dv"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"set", &module_info_gooSboot, "set"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"col", &module_info_gooScolsScol, "col"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"1-", &module_info_gooSmath, "1-"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"as", &module_info_gooStypes, "as"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"with-lock", &module_info_timeSlock, "with-lock"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<lock>", &module_info_timeSlock, "<lock>"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {">=", &module_info_gooSmag, ">="},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"def", &module_info_gooSboot, "def"},
  {"len", &module_info_gooStypes, "len"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"if", &module_info_gooSboot, "if"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%su", &module_info_gooSboot, "%su"},
  {"logn", &module_info_gooSmath, "logn"},
  {"open", &module_info_gooSioSport, "open"},
  {"always", &module_info_gooSruntime, "always"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<thread>", &module_info_timeSthreads, "<thread>"},
  {"test-thread-1", &module_info_timeSthreads, "test-thread-1"},
  {"do", &module_info_gooSmacros, "do"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"range", &module_info_gooScolsSrange, "range"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"match", &module_info_gooSmacros, "match"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%im", &module_info_gooSboot, "%im"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"and", &module_info_gooSmacros, "and"},
  {"<=", &module_info_gooSmag, "<="},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"op", &module_info_gooSmacros, "op"},
  {"lock-state", &module_info_timeSlock, "lock-state"},
  {"~", &module_info_gooSmath, "~"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"let", &module_info_gooSboot, "let"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"add", &module_info_gooScolsScol, "add"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"while", &module_info_gooSmacros, "while"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"thread-priority", &module_info_timeSthreads, "thread-priority"},
  {"use", &module_info_gooSboot, "use"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"thread-function", &module_info_timeSthreads, "thread-function"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"find", &module_info_gooScolsScol, "find"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%put", &module_info_gooSboot, "%put"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"into", &module_info_gooScolsScol, "into"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"read", &module_info_gooSruntime, "read"},
  {"acos", &module_info_gooSmath, "acos"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"-", &module_info_gooSmath, "-"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"head", &module_info_gooSboot, "head"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"dss", &module_info_gooSboot, "dss"},
  {"for", &module_info_gooSmacros, "for"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"+", &module_info_gooSmath, "+"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"lock-handle", &module_info_timeSlock, "lock-handle"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"map", &module_info_gooSmacros, "map"},
  {"export", &module_info_gooSboot, "export"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"thread-yield", &module_info_timeSthreads, "thread-yield"},
  {"try", &module_info_gooSboot, "try"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"test-thread-2", &module_info_timeSthreads, "test-thread-2"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"app", &module_info_gooSmacros, "app"},
  {"1+", &module_info_gooSmath, "1+"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"sin", &module_info_gooSmath, "sin"},
  {"div", &module_info_gooSmath, "div"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"@<", &module_info_gooSboot, "@<"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"loc", &module_info_gooSboot, "loc"},
  {"ds", &module_info_gooSboot, "ds"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {">>", &module_info_gooSmath, ">>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"&", &module_info_gooSmath, "&"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"t?", &module_info_gooStypes, "t?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"in", &module_info_gooSioSport, "in"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"==", &module_info_gooSmacros, "=="},
  {"peek", &module_info_gooSioSport, "peek"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"round", &module_info_gooSmath, "round"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"spawn", &module_info_timeSthreads, "spawn"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"fin", &module_info_gooSboot, "fin"},
  {"any?", &module_info_gooStypes, "any?"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<", &module_info_gooSmag, "<"},
  {"case", &module_info_gooSmacros, "case"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {">", &module_info_gooSmag, ">"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"t<", &module_info_gooStypes, "t<"},
  {"thread-name", &module_info_timeSthreads, "thread-name"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"=", &module_info_gooSmath, "="},
  {"@len", &module_info_gooSboot, "@len"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"esc", &module_info_gooSboot, "esc"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"@==", &module_info_gooSboot, "@=="},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"/", &module_info_gooSmath, "/"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"neg", &module_info_gooSmath, "neg"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"not", &module_info_gooSboot, "not"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"t=", &module_info_gooStypes, "t="},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"%get", &module_info_gooSboot, "%get"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"get", &module_info_gooSioSport, "get"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"log", &module_info_gooSmath, "log"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"rem", &module_info_gooSmath, "rem"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"df", &module_info_gooSboot, "df"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"^", &module_info_gooSmath, "^"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%time", &module_info_gooSboot, "%time"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"or", &module_info_gooSmacros, "or"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"put", &module_info_gooSioSport, "put"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"dg", &module_info_gooSboot, "dg"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"even?", &module_info_gooSmath, "even?"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"dc", &module_info_gooSboot, "dc"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"floor", &module_info_gooSmath, "floor"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"del", &module_info_gooScolsScol, "del"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"new", &module_info_gooSboot, "new"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"max", &module_info_gooSmag, "max"},
  {"@+", &module_info_gooSboot, "@+"},
  {"*", &module_info_gooSmath, "*"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"~=", &module_info_gooSmath, "~="},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"lock-destroy", &module_info_timeSlock, "lock-destroy"},
  {"nul", &module_info_gooSboot, "nul"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"event-wait", CVAR, &YtimeSeventYevent_wait},
  {"event-signal", CVAR, &YtimeSeventYevent_signal},
  {"%event-wait-timed", PVAR, NULL},
  {"event-wait-timed", CVAR, &YtimeSeventYevent_wait_timed},
  {"event-name", CVAR, &YtimeSeventYevent_name},
  {"event-handle", CVAR, &YtimeSeventYevent_handle},
  {"event-reset", CVAR, &YtimeSeventYevent_reset},
  {"%event-destroy", PVAR, NULL},
  {"<event>", CVAR, &YtimeSeventYLeventG},
  {"%event-broadcast", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"%event-reset", PVAR, NULL},
  {"%event-wait", PVAR, NULL},
  {"%event-create", PVAR, NULL},
  {"event-handle-setter", CVAR, &YtimeSeventYevent_handle_setter},
  {"%event-signal", PVAR, NULL},
  {"event-name-setter", CVAR, &YtimeSeventYevent_name_setter},
  {"event-broadcast", CVAR, &YtimeSeventYevent_broadcast},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"event-wait", "event-wait"},
  {"event-signal", "event-signal"},
  {"event-wait-timed", "event-wait-timed"},
  {"event-name", "event-name"},
  {"event-reset", "event-reset"},
  {"<event>", "<event>"},
  {"event-broadcast", "event-broadcast"},
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
