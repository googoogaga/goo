/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: time/event */

EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYE,"goo/math","=");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ynul,"goo/boot","nul");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YtimeSeventYevent_signal,"time/event","event-signal");
DEF(YtimeSeventYevent_handle_setter,"time/event","event-handle-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYK,"goo/math","|");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Ynot,"goo/boot","not");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YtimeSeventYLeventG,"time/event","<event>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YtimeSeventYevent_handle,"time/event","event-handle");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yhead,"goo/boot","head");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YtT,"goo/boot","t*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathY_,"goo/math","-");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YtimeSeventYevent_name_setter,"time/event","event-name-setter");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYB,"goo/math","&");
DEF(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YLseqIG,"goo/boot","<seq.>");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ynew,"goo/boot","new");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YtimeSeventYevent_name,"time/event","event-name");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYC,"goo/math","^");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_18);
DEFLIT(lit_19);
DEFLIT(lit_12);
DEFLIT(lit_2);
DEFLIT(lit_16);
DEFLIT(lit_13);
DEFLIT(lit_1);
DEFLIT(lit_0);
DEFLIT(lit_17);
DEFLIT(lit_14);
DEFLIT(lit_5);
DEFLIT(lit_8);
DEFLIT(lit_15);
DEFLIT(lit_4);
DEFLIT(lit_3);
DEFLIT(lit_11);
DEFLIT(lit_7);
DEFLIT(lit_10);
DEFLIT(lit_9);
DEFLIT(lit_6);

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
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_timeSthreads},
  {&module_info_timeSlock},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"match", &module_info_gooSmacros, "match"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"do", &module_info_gooSmacros, "do"},
  {"loc", &module_info_gooSboot, "loc"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"fun", &module_info_gooSboot, "fun"},
  {"lock-unlock", &module_info_timeSlock, "lock-unlock"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"case", &module_info_gooSmacros, "case"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"+", &module_info_gooSmath, "+"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"nil", &module_info_gooSboot, "nil"},
  {">", &module_info_gooSmag, ">"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"max", &module_info_gooSmag, "max"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"thread-yield", &module_info_timeSthreads, "thread-yield"},
  {"mod", &module_info_gooSmath, "mod"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"<", &module_info_gooSmag, "<"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<lock>", &module_info_timeSlock, "<lock>"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"<thread>", &module_info_timeSthreads, "<thread>"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"=", &module_info_gooSmath, "="},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"ct", &module_info_gooSboot, "ct"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"when", &module_info_gooSmacros, "when"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"min", &module_info_gooSmag, "min"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%su", &module_info_gooSboot, "%su"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"thread-current", &module_info_timeSthreads, "thread-current"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"|", &module_info_gooSmath, "|"},
  {"lock-handle", &module_info_timeSlock, "lock-handle"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"not", &module_info_gooSboot, "not"},
  {"read", &module_info_gooSruntime, "read"},
  {">=", &module_info_gooSmag, ">="},
  {"round", &module_info_gooSmath, "round"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"/", &module_info_gooSmath, "/"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"~=", &module_info_gooSmath, "~="},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"lock-state", &module_info_timeSlock, "lock-state"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"t?", &module_info_gooStypes, "t?"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%time", &module_info_gooSboot, "%time"},
  {"dss", &module_info_gooSboot, "dss"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"for", &module_info_gooSmacros, "for"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"log", &module_info_gooSmath, "log"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"use", &module_info_gooSboot, "use"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<=", &module_info_gooSmag, "<="},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"error", &module_info_gooSboot, "error"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"lock-lock", &module_info_timeSlock, "lock-lock"},
  {"@==", &module_info_gooSboot, "@=="},
  {"unless", &module_info_gooSmacros, "unless"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"quote", &module_info_gooSboot, "quote"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"col", &module_info_gooScolsScol, "col"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"df", &module_info_gooSboot, "df"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"t=", &module_info_gooStypes, "t="},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"dg", &module_info_gooSboot, "dg"},
  {"ds", &module_info_gooSboot, "ds"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"dm", &module_info_gooSboot, "dm"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"while", &module_info_gooSmacros, "while"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"def", &module_info_gooSboot, "def"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"t+", &module_info_gooStypes, "t+"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"test-thread-2", &module_info_timeSthreads, "test-thread-2"},
  {"in", &module_info_gooSioSport, "in"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"and", &module_info_gooSmacros, "and"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"head", &module_info_gooSboot, "head"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"*", &module_info_gooSmath, "*"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"~", &module_info_gooSmath, "~"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"floor", &module_info_gooSmath, "floor"},
  {"sleep", &module_info_timeSthreads, "sleep"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%put", &module_info_gooSboot, "%put"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"into", &module_info_gooScolsScol, "into"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"gets", &module_info_gooSioSport, "gets"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"let", &module_info_gooSboot, "let"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"out", &module_info_gooSioSport, "out"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"any?", &module_info_gooStypes, "any?"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"t*", &module_info_gooSboot, "t*"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"set", &module_info_gooSboot, "set"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"get", &module_info_gooSioSport, "get"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"1-", &module_info_gooSmath, "1-"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"thread-priority", &module_info_timeSthreads, "thread-priority"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"thread-name", &module_info_timeSthreads, "thread-name"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"always", &module_info_gooSruntime, "always"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"-", &module_info_gooSmath, "-"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"lock-destroy", &module_info_timeSlock, "lock-destroy"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"as", &module_info_gooStypes, "as"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"put", &module_info_gooSioSport, "put"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"with-lock", &module_info_timeSlock, "with-lock"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"&", &module_info_gooSmath, "&"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"map", &module_info_gooSmacros, "map"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"find", &module_info_gooScolsScol, "find"},
  {"@len", &module_info_gooSboot, "@len"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"cos", &module_info_gooSmath, "cos"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"%im", &module_info_gooSboot, "%im"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"op", &module_info_gooSmacros, "op"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"atan", &module_info_gooSmath, "atan"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {">>", &module_info_gooSmath, ">>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"test-thread-1", &module_info_timeSthreads, "test-thread-1"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"round/", &module_info_gooSmath, "round/"},
  {"close", &module_info_gooSioSport, "close"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"thread-function", &module_info_timeSthreads, "thread-function"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"try", &module_info_gooSboot, "try"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"export", &module_info_gooSboot, "export"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"spawn", &module_info_timeSthreads, "spawn"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"or", &module_info_gooSmacros, "or"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"new", &module_info_gooSboot, "new"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"open", &module_info_gooSioSport, "open"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"^", &module_info_gooSmath, "^"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"1+", &module_info_gooSmath, "1+"},
  {"==", &module_info_gooSmacros, "=="},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"event-wait-timed", CVAR, &YtimeSeventYevent_wait_timed},
  {"event-signal", CVAR, &YtimeSeventYevent_signal},
  {"event-handle-setter", CVAR, &YtimeSeventYevent_handle_setter},
  {"%event-broadcast", PVAR, NULL},
  {"<event>", CVAR, &YtimeSeventYLeventG},
  {"%event-wait", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"event-handle", CVAR, &YtimeSeventYevent_handle},
  {"%event-reset", PVAR, NULL},
  {"%event-signal", PVAR, NULL},
  {"%event-wait-timed", PVAR, NULL},
  {"event-name-setter", CVAR, &YtimeSeventYevent_name_setter},
  {"event-wait", CVAR, &YtimeSeventYevent_wait},
  {"%event-create", PVAR, NULL},
  {"event-broadcast", CVAR, &YtimeSeventYevent_broadcast},
  {"%event-destroy", PVAR, NULL},
  {"event-name", CVAR, &YtimeSeventYevent_name},
  {"event-reset", CVAR, &YtimeSeventYevent_reset},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"event-wait-timed", "event-wait-timed"},
  {"event-signal", "event-signal"},
  {"event-wait", "event-wait"},
  {"<event>", "<event>"},
  {"event-reset", "event-reset"},
  {"event-broadcast", "event-broadcast"},
  {"event-name", "event-name"},
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
