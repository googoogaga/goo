/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: time/event */

EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSioSportYput,"goo/io/port","put");
DEF(YtimeSeventYLeventG,"time/event","<event>");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(YtimeSeventYevent_handle,"time/event","event-handle");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(Ynul,"goo/boot","nul");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Ynew,"goo/boot","new");
DEF(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYE,"goo/math","=");
DEF(YtimeSeventYevent_name_setter,"time/event","event-name-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
DEF(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ynot,"goo/boot","not");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YtimeSeventYevent_name,"time/event","event-name");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yhead,"goo/boot","head");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(YtimeSeventYevent_handle_setter,"time/event","event-handle-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_19);
DEFLIT(lit_7);
DEFLIT(lit_5);
DEFLIT(lit_10);
DEFLIT(lit_8);
DEFLIT(lit_17);
DEFLIT(lit_15);
DEFLIT(lit_4);
DEFLIT(lit_11);
DEFLIT(lit_3);
DEFLIT(lit_2);
DEFLIT(lit_6);
DEFLIT(lit_13);
DEFLIT(lit_9);
DEFLIT(lit_12);
DEFLIT(lit_18);
DEFLIT(lit_16);
DEFLIT(lit_1);
DEFLIT(lit_14);
DEFLIT(lit_0);

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
  P tmpF2625;
  P eventF2624;
  P next_metsF2623;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T2 = (P)YPnext_methods();
  next_metsF2623 = T2;
  if (next_metsF2623 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),next_metsF2623);
    T6 = CALL1(1,VARREF(Ytail),next_metsF2623);
    T4 = CALL4(1,VARREF(YgooSmacrosYnapp),T5,T6,c_,args_);
    T3 = T4;
  } else {
    T7 = CALL1(1,VARREF(Yerror),LITREF(lit_10));
    T3 = T7;
  }
  T1 = T3;
  eventF2624 = T1;
  T13 = CALL1(1,VARREF(YtimeSeventYevent_name),eventF2624);
  tmpF2625 = T13;
  if (tmpF2625 != YPfalse) {
    T14 = tmpF2625;
  } else {
    T14 = LITREF(lit_11);
  }
  T12 = T14;
  T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T12);
  T10 = (P)YPsu(T11);
  T9 = (P)YtimeSeventYPevent_create(T10);
  T8 = (P)YPlb(T9);
  CALL2(1,VARREF(YtimeSeventYevent_handle_setter),T8,eventF2624);
  T0 = eventF2624;
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
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_timeSthreads},
  {&module_info_timeSlock},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"as", &module_info_gooStypes, "as"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"dss", &module_info_gooSboot, "dss"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"put", &module_info_gooSioSport, "put"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"use", &module_info_gooSboot, "use"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"rem", &module_info_gooSmath, "rem"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%put", &module_info_gooSboot, "%put"},
  {"&", &module_info_gooSmath, "&"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"lock-lock", &module_info_timeSlock, "lock-lock"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"packed", &module_info_gooSpacker, "packed"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"map", &module_info_gooSmacros, "map"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"@==", &module_info_gooSboot, "@=="},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"cos", &module_info_gooSmath, "cos"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"op", &module_info_gooSmacros, "op"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"atan", &module_info_gooSmath, "atan"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"dl", &module_info_gooSboot, "dl"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {">>", &module_info_gooSmath, ">>"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"1+", &module_info_gooSmath, "1+"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"round/", &module_info_gooSmath, "round/"},
  {"close", &module_info_gooSioSport, "close"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"test-thread-2", &module_info_timeSthreads, "test-thread-2"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%im", &module_info_gooSboot, "%im"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"fin", &module_info_gooSboot, "fin"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"loc", &module_info_gooSboot, "loc"},
  {"max", &module_info_gooSmag, "max"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"export", &module_info_gooSboot, "export"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"read", &module_info_gooSruntime, "read"},
  {"nul", &module_info_gooSboot, "nul"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"sleep", &module_info_timeSthreads, "sleep"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"~==", &module_info_gooSmath, "~=="},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"or", &module_info_gooSmacros, "or"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"new", &module_info_gooSboot, "new"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"open", &module_info_gooSioSport, "open"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"min", &module_info_gooSmag, "min"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"thread-yield", &module_info_timeSthreads, "thread-yield"},
  {"^", &module_info_gooSmath, "^"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"==", &module_info_gooSmacros, "=="},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"match", &module_info_gooSmacros, "match"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"fun", &module_info_gooSboot, "fun"},
  {"now", &module_info_gooScolsScol, "now"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"do", &module_info_gooSmacros, "do"},
  {"case", &module_info_gooSmacros, "case"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"esc", &module_info_gooSboot, "esc"},
  {"+", &module_info_gooSmath, "+"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"sin", &module_info_gooSmath, "sin"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {">", &module_info_gooSmag, ">"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {">=", &module_info_gooSmag, ">="},
  {"thread-priority", &module_info_timeSthreads, "thread-priority"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"lock-destroy", &module_info_timeSlock, "lock-destroy"},
  {"/", &module_info_gooSmath, "/"},
  {"~=", &module_info_gooSmath, "~="},
  {"mod", &module_info_gooSmath, "mod"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"thread-name", &module_info_timeSthreads, "thread-name"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"acos", &module_info_gooSmath, "acos"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<", &module_info_gooSmag, "<"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%str", &module_info_gooSboot, "%str"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"with-lock", &module_info_timeSlock, "with-lock"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"=", &module_info_gooSmath, "="},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"add", &module_info_gooScolsScol, "add"},
  {"when", &module_info_gooSmacros, "when"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"rep", &module_info_gooSboot, "rep"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"@len", &module_info_gooSboot, "@len"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"<=", &module_info_gooSmag, "<="},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"tail", &module_info_gooSboot, "tail"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"test-thread-1", &module_info_timeSthreads, "test-thread-1"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"|", &module_info_gooSmath, "|"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"thread-function", &module_info_timeSthreads, "thread-function"},
  {"round", &module_info_gooSmath, "round"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"not", &module_info_gooSboot, "not"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"t?", &module_info_gooStypes, "t?"},
  {"def", &module_info_gooSboot, "def"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"spawn", &module_info_timeSthreads, "spawn"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"*", &module_info_gooSmath, "*"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"floor", &module_info_gooSmath, "floor"},
  {"for", &module_info_gooSmacros, "for"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"log", &module_info_gooSmath, "log"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"error", &module_info_gooSboot, "error"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"asin", &module_info_gooSmath, "asin"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"df", &module_info_gooSboot, "df"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"lock-unlock", &module_info_timeSlock, "lock-unlock"},
  {"t=", &module_info_gooStypes, "t="},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"dg", &module_info_gooSboot, "dg"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"dm", &module_info_gooSboot, "dm"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"while", &module_info_gooSmacros, "while"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"ds", &module_info_gooSboot, "ds"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"1-", &module_info_gooSmath, "1-"},
  {"t+", &module_info_gooStypes, "t+"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"in", &module_info_gooSioSport, "in"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"<lock>", &module_info_timeSlock, "<lock>"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"tan", &module_info_gooSmath, "tan"},
  {"head", &module_info_gooSboot, "head"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<thread>", &module_info_timeSthreads, "<thread>"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"~", &module_info_gooSmath, "~"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"gets", &module_info_gooSioSport, "gets"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"out", &module_info_gooSioSport, "out"},
  {"into", &module_info_gooScolsScol, "into"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"thread-current", &module_info_timeSthreads, "thread-current"},
  {"abs", &module_info_gooSmath, "abs"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"t*", &module_info_gooSboot, "t*"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%get", &module_info_gooSboot, "%get"},
  {"logn", &module_info_gooSmath, "logn"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"lock-handle", &module_info_timeSlock, "lock-handle"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"lock-state", &module_info_timeSlock, "lock-state"},
  {"lst", &module_info_gooSboot, "lst"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"get", &module_info_gooSioSport, "get"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"try", &module_info_gooSboot, "try"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%time", &module_info_gooSboot, "%time"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"items", &module_info_gooScolsScol, "items"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"always", &module_info_gooSruntime, "always"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"-", &module_info_gooSmath, "-"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"event-wait", CVAR, &YtimeSeventYevent_wait},
  {"%event-wait", PVAR, NULL},
  {"%event-signal", PVAR, NULL},
  {"<event>", CVAR, &YtimeSeventYLeventG},
  {"event-handle", CVAR, &YtimeSeventYevent_handle},
  {"event-reset", CVAR, &YtimeSeventYevent_reset},
  {"%event-reset", PVAR, NULL},
  {"%event-create", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"event-name-setter", CVAR, &YtimeSeventYevent_name_setter},
  {"event-broadcast", CVAR, &YtimeSeventYevent_broadcast},
  {"%event-broadcast", PVAR, NULL},
  {"event-name", CVAR, &YtimeSeventYevent_name},
  {"event-wait-timed", CVAR, &YtimeSeventYevent_wait_timed},
  {"%event-wait-timed", PVAR, NULL},
  {"%event-destroy", PVAR, NULL},
  {"event-signal", CVAR, &YtimeSeventYevent_signal},
  {"event-handle-setter", CVAR, &YtimeSeventYevent_handle_setter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"event-wait", "event-wait"},
  {"<event>", "<event>"},
  {"event-reset", "event-reset"},
  {"event-broadcast", "event-broadcast"},
  {"event-name", "event-name"},
  {"event-wait-timed", "event-wait-timed"},
  {"event-signal", "event-signal"},
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
