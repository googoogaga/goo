/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: time/threads */

EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YtimeSthreadsYthread_handle_setter,"time/threads","thread-handle-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YPprop,"goo/boot","%prop");
DEF(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YtimeSthreadsYmain_thread_key,"time/threads","main-thread-key");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YtimeSthreadsYthread_handle,"time/threads","thread-handle");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YtimeSthreadsYthread_join,"time/threads","thread-join");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ynul,"goo/boot","nul");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
DEF(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
DYNEXT(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathY_,"goo/math","-");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
DEF(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(YtimeSthreadsYthread_priority_setter,"time/threads","thread-priority-setter");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
DEF(YtimeSthreadsYthread_name_setter,"time/threads","thread-name-setter");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YtimeSthreadsYsleep,"time/threads","sleep");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ynew,"goo/boot","new");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YtimeSthreadsYthread_function_setter,"time/threads","thread-function-setter");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYA,"goo/math","+");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_32);
DEFLIT(lit_13);
DEFLIT(lit_29);
DEFLIT(lit_23);
DEFLIT(lit_41);
DEFLIT(lit_28);
DEFLIT(lit_33);
DEFLIT(lit_8);
DEFLIT(lit_39);
DEFLIT(lit_6);
DEFLIT(lit_15);
DEFLIT(lit_31);
DEFLIT(lit_2);
DEFLIT(lit_10);
DEFLIT(lit_3);
DEFLIT(lit_14);
DEFLIT(lit_19);
DEFLIT(lit_35);
DEFLIT(lit_40);
DEFLIT(lit_34);
DEFLIT(lit_4);
DEFLIT(lit_38);
DEFLIT(lit_7);
DEFLIT(lit_20);
DEFLIT(lit_21);
DEFLIT(lit_12);
DEFLIT(lit_5);
DEFLIT(lit_37);
DEFLIT(lit_16);
DEFLIT(lit_22);
DEFLIT(lit_1);
DEFLIT(lit_24);
DEFLIT(lit_18);
DEFLIT(lit_30);
DEFLIT(lit_11);
DEFLIT(lit_9);
DEFLIT(lit_36);
DEFLIT(lit_0);
DEFLIT(lit_25);
DEFLIT(lit_26);
DEFLIT(lit_27);
DEFLIT(lit_17);

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
LOCFOR(fun_x_1736_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_sleep_22);
LOCFOR(fun_thread_current_23);
LOCFOR(fun_thread_join_24);
LOCFOR(fun_x_1738_25);
LOCFOR(fun_26);
FUNFOR(YtimeSthreadsYtest_thread_1);
LOCFOR(fun_x_1740_28);
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
  T1 = CALL1(1,VARREF(YgooSruntimeYdescribe_condition),c_);
  T0 = CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_19),T1);
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
  DYNSET(YgooSruntimeYTcurrent_handlersT,Ynil);
  T1 = fun_14;
  T2 = fun_15;
  T3 = FUNFAB(fun_16,1,FREEREF(0));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLconditionG),VARREF(YgooSruntimeYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_new_18) {
  P x_,args_;
  P hF2608;
  P fF2607;
  P tF2606;
  P next_metsF2605;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(args_, 1);
loop:
  T2 = (P)YPnext_methods();
  next_metsF2605 = T2;
  if (next_metsF2605 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),next_metsF2605);
    T6 = CALL1(1,VARREF(Ytail),next_metsF2605);
    T4 = CALL4(1,VARREF(YgooSmacrosYnapp),T5,T6,x_,args_);
    T3 = T4;
  } else {
    T7 = CALL1(1,VARREF(Yerror),LITREF(lit_16));
    T3 = T7;
  }
  T1 = T3;
  tF2606 = T1;
  T10 = CALL1(1,VARREF(YtimeSthreadsYthread_function),tF2606);
  T9 = CALL2(1,VARREF(YgooSmacrosYEE),T10,VARREF(YtimeSthreadsYmain_thread_key));
  T8 = CALL1(1,VARREF(Ynot),T9);
  if (T8 != YPfalse) {
    T12 = FUNFAB(fun_17,1,tF2606);
    fF2607 = T12;
    T16 = CALL2(1,VARREF(Ytup),fF2607,tF2606);
    T15 = (P)YtimeSthreadsYPthread_create(T16);
    T14 = (P)YPlb(T15);
    hF2608 = T14;
    CALL2(1,VARREF(YtimeSthreadsYthread_handle_setter),hF2608,tF2606);
    T19 = CALL1(1,VARREF(YtimeSthreadsYthread_priority),tF2606);
    T18 = (P)YPiu(T19);
    T17 = (P)YtimeSthreadsYPthread_priority_setter(T18,hF2608);
    T13 = T17;
    T11 = T13;
  } else {
  }
  T0 = tF2606;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1736_19) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P return_;
  P x_1735F2613;
  P x_1735F2612;
  P bodyF2611;
  P x_1735F2610;
  P x_1736F2609;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1736_19,1);
  x_1736F2609 = T1;
  FUNINIT(x_1736F2609, 1,return_);
  x_1735F2610 = FREEREF(0);
  bodyF2611 = YPfalse;
  bodyF2611 = BOXFAB(bodyF2611);
  T5 = CALL2(1,VARREF(YisaQ),x_1735F2610,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1735F2610,LITREF(lit_25),x_1736F2609);
    x_1735F2612 = T7;
    BOXVAL(bodyF2611) = x_1735F2612;
    x_1735F2613 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1735F2613,x_1736F2609);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1736F2609,LITREF(lit_26),x_1735F2610);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_0));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T18 = CALL1(1,VARREF(Ylst),Ynil);
  T19 = BOXVAL(bodyF2611);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T19,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T14,T15,Ynil);
  T3 = T11;
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
  P T0,T1,T2;
LINK_STACK();
loop:
  T2 = (P)YtimeSthreadsYPthread_current();
  T1 = (P)YPlb(T2);
  T0 = (P)YtimeSthreadsYPthread_goo_thread(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_thread_join_24) {
  P t_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T2 = CALL1(1,VARREF(YtimeSthreadsYthread_handle),t_);
  T1 = (P)YPlu(T2);
  T0 = (P)YtimeSthreadsYPthread_join(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1738_25) {
  P x_1737_;
  P iF2614;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1737_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1737_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1737_);
    iF2614 = T4;
    CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_36),iF2614);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1737_);
    a1 = T6;
    x_1737_ = a1;
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
  P x_1738F2615;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_x_1738_25,1);
  x_1738F2615 = T1;
  FUNINIT(x_1738F2615, 1,x_1738F2615);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),YPint((P)3000));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1738F2615,T3);
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

FUNCODEDEF(fun_x_1740_28) {
  P x_1739_;
  P iF2616;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1739_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1739_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1739_);
    iF2616 = T4;
    CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_40),iF2616);
    CALL1(1,VARREF(YtimeSthreadsYsleep),LITREF(lit_41));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1739_);
    a1 = T6;
    x_1739_ = a1;
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
  P x_1740F2617;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_x_1740_28,1);
  x_1740F2617 = T1;
  FUNINIT(x_1740F2617, 1,x_1740F2617);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),YPint((P)100));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1740F2617,T3);
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
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<thread>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YtimeSthreadsYLthreadG,T0);
  lit_1 = YPPsym((P)"thread-name");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_name_0 = YPmet(FUNCODEREF(fun_thread_name_0),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
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
  lit_4 = YPPsym((P)"_z");
  T8 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,T8,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_thread_name_setter_1 = YPmet(FUNCODEREF(fun_thread_name_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T11 = BOUNDP(YtimeSthreadsYthread_name_setter);
  if (T11 != YPfalse) {
    T10 = VARREF(YtimeSthreadsYthread_name_setter);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_thread_name_setter_1;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YtimeSthreadsYthread_name_setter,T9);
  T13 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T14 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T15 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_name),VARREF(YtimeSthreadsYthread_name_setter),T14,T15);
  lit_5 = YPPsym((P)"thread-priority");
  T16 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_priority_3 = YPmet(FUNCODEREF(fun_thread_priority_3),LITREF(lit_5),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YtimeSthreadsYthread_priority);
  if (T19 != YPfalse) {
    T18 = VARREF(YtimeSthreadsYthread_priority);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_thread_priority_3;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YtimeSthreadsYthread_priority,T17);
  lit_6 = YPPsym((P)"thread-priority-setter");
  T21 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLintG),VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_thread_priority_setter_4 = YPmet(FUNCODEREF(fun_thread_priority_setter_4),LITREF(lit_6),T21,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YtimeSthreadsYthread_priority_setter);
  if (T24 != YPfalse) {
    T23 = VARREF(YtimeSthreadsYthread_priority_setter);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_thread_priority_setter_4;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YtimeSthreadsYthread_priority_setter,T22);
  T26 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T27 = fun_5;
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_priority),VARREF(YtimeSthreadsYthread_priority_setter),VARREF(YLintG),T27);
  lit_7 = YPPsym((P)"thread-function");
  T28 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_function_6 = YPmet(FUNCODEREF(fun_thread_function_6),LITREF(lit_7),T28,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YtimeSthreadsYthread_function);
  if (T31 != YPfalse) {
    T30 = VARREF(YtimeSthreadsYthread_function);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_thread_function_6;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YtimeSthreadsYthread_function,T29);
  lit_8 = YPPsym((P)"thread-function-setter");
  T33 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLfunG),VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_thread_function_setter_7 = YPmet(FUNCODEREF(fun_thread_function_setter_7),LITREF(lit_8),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YtimeSthreadsYthread_function_setter);
  if (T36 != YPfalse) {
    T35 = VARREF(YtimeSthreadsYthread_function_setter);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_thread_function_setter_7;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YtimeSthreadsYthread_function_setter,T34);
  T39 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T40 = fun_9;
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_function),VARREF(YtimeSthreadsYthread_function_setter),VARREF(YLfunG),T40);
  lit_9 = YPPsym((P)"thread-handle");
  T41 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_handle_10 = YPmet(FUNCODEREF(fun_thread_handle_10),LITREF(lit_9),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YtimeSthreadsYthread_handle);
  if (T44 != YPfalse) {
    T43 = VARREF(YtimeSthreadsYthread_handle);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_thread_handle_10;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YtimeSthreadsYthread_handle,T42);
  lit_10 = YPPsym((P)"thread-handle-setter");
  T46 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLlocG),VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_thread_handle_setter_11 = YPmet(FUNCODEREF(fun_thread_handle_setter_11),LITREF(lit_10),T46,ENVNUL,PNUL,YPfalse);
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
  lit_11 = YPPsym((P)"thread-yield");
  T51 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_thread_yield_12 = YPmet(FUNCODEREF(fun_thread_yield_12),LITREF(lit_11),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YtimeSthreadsYthread_yield);
  if (T54 != YPfalse) {
    T53 = VARREF(YtimeSthreadsYthread_yield);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_thread_yield_12;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YtimeSthreadsYthread_yield,T52);
  lit_12 = YPPsym((P)"main-thread-key");
  T56 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YtimeSthreadsYmain_thread_key = YPmet(FUNCODEREF(YtimeSthreadsYmain_thread_key),LITREF(lit_12),T56,ENVNUL,PNUL,YPfalse);
  T57 = YtimeSthreadsYmain_thread_key;
  VARSET(YtimeSthreadsYmain_thread_key,T57);
  lit_13 = YPPsym((P)"new");
  lit_14 = YPPsym((P)"x");
  lit_15 = YPPsym((P)"args");
  lit_16 = YPsb((P)"No next methods");
  lit_17 = YPPsym((P)"c");
  lit_18 = YPPsym((P)"r");
  lit_19 = YPsb((P)"ERROR: %s");
  T63 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_18)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T60,ENVNUL,PNUL,YPfalse);
  T59 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YtimeSthreadsYLthreadG));
  T58 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_15)),YPPlist(1,T59),YPtrue,YPint((P)1),VARREF(YtimeSthreadsYLthreadG),Ynil);
  fun_new_18 = YPmet(FUNCODEREF(fun_new_18),LITREF(lit_13),T58,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(Ynew);
  if (T66 != YPfalse) {
    T65 = VARREF(Ynew);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_new_18;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(Ynew,T64);
  lit_20 = YPPsym((P)"main");
  T69 = (P)YtimeSthreadsYPthread_current();
  T68 = (P)YPlb(T69);
  XCALLN(1,VARREF(Ynew),7,VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_name),LITREF(lit_20),VARREF(YtimeSthreadsYthread_function),VARREF(YtimeSthreadsYmain_thread_key),VARREF(YtimeSthreadsYthread_handle),T68);
  lit_21 = YPPsym((P)"exp");
  lit_22 = YPPsym((P)"return");
  lit_23 = YPPsym((P)"x-1736");
  lit_24 = YPPsym((P)"msg");
  lit_25 = YPPsym((P)"spawn");
  lit_26 = YPsb((P)"Match Pattern Failure");
  lit_27 = YPPsym((P)"fun");
  T72 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1736_19 = YPmet(FUNCODEREF(fun_x_1736_19),LITREF(lit_23),T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T70,ENVNUL,PNUL,YPfalse);
  T73 = fun_21;
  YPmacro(YPPsym((P)"time/threads"),YPPsym((P)"spawn"),T73);
  lit_28 = YPPsym((P)"sleep");
  lit_29 = YPPsym((P)"secs");
  T74 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sleep_22 = YPmet(FUNCODEREF(fun_sleep_22),LITREF(lit_28),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YtimeSthreadsYsleep);
  if (T77 != YPfalse) {
    T76 = VARREF(YtimeSthreadsYsleep);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_sleep_22;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YtimeSthreadsYsleep,T75);
  lit_30 = YPPsym((P)"thread-current");
  T79 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YtimeSthreadsYLthreadG),Ynil);
  fun_thread_current_23 = YPmet(FUNCODEREF(fun_thread_current_23),LITREF(lit_30),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YtimeSthreadsYthread_current);
  if (T82 != YPfalse) {
    T81 = VARREF(YtimeSthreadsYthread_current);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_thread_current_23;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YtimeSthreadsYthread_current,T80);
  lit_31 = YPPsym((P)"thread-join");
  lit_32 = YPPsym((P)"t");
  T84 = YPsig(YPPlist(1,LITREF(lit_32)),YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_join_24 = YPmet(FUNCODEREF(fun_thread_join_24),LITREF(lit_31),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YtimeSthreadsYthread_join);
  if (T87 != YPfalse) {
    T86 = VARREF(YtimeSthreadsYthread_join);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_thread_join_24;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YtimeSthreadsYthread_join,T85);
  lit_33 = YPPsym((P)"test-thread-1");
  lit_34 = YPPsym((P)"x-1738");
  lit_35 = YPPsym((P)"x-1737");
  lit_36 = YPsb((P)"%d\n");
  T91 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1738_25 = YPmet(FUNCODEREF(fun_x_1738_25),LITREF(lit_34),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YtimeSthreadsYtest_thread_1 = YPmet(FUNCODEREF(YtimeSthreadsYtest_thread_1),LITREF(lit_33),T89,ENVNUL,PNUL,YPfalse);
  T92 = YtimeSthreadsYtest_thread_1;
  VARSET(YtimeSthreadsYtest_thread_1,T92);
  lit_37 = YPPsym((P)"test-thread-2");
  lit_38 = YPPsym((P)"x-1740");
  lit_39 = YPPsym((P)"x-1739");
  lit_40 = YPsb((P)"%d\n");
  lit_41 = YPflo(FLOINT(1.0));
  T95 = YPsig(YPPlist(1,LITREF(lit_39)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1740_28 = YPmet(FUNCODEREF(fun_x_1740_28),LITREF(lit_38),T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YtimeSthreadsYtest_thread_2 = YPmet(FUNCODEREF(YtimeSthreadsYtest_thread_2),LITREF(lit_37),T93,ENVNUL,PNUL,YPfalse);
  T96 = YtimeSthreadsYtest_thread_2;
  VARSET(YtimeSthreadsYtest_thread_2,T96);
  T97 = YPfalse;
  return T97;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSruntime},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sin", &module_info_gooSmath, "sin"},
  {">", &module_info_gooSmag, ">"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {">=", &module_info_gooSmag, ">="},
  {"last", &module_info_gooScolsSseq, "last"},
  {"/", &module_info_gooSmath, "/"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"~=", &module_info_gooSmath, "~="},
  {"mod", &module_info_gooSmath, "mod"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"%su", &module_info_gooSboot, "%su"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"read", &module_info_gooSruntime, "read"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"@len", &module_info_gooSboot, "@len"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<", &module_info_gooSmag, "<"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"@<", &module_info_gooSboot, "@<"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"=", &module_info_gooSmath, "="},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"when", &module_info_gooSmacros, "when"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<=", &module_info_gooSmag, "<="},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"|", &module_info_gooSmath, "|"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"round", &module_info_gooSmath, "round"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"not", &module_info_gooSboot, "not"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"t?", &module_info_gooStypes, "t?"},
  {"def", &module_info_gooSboot, "def"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"*", &module_info_gooSmath, "*"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"for", &module_info_gooSmacros, "for"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"log", &module_info_gooSmath, "log"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"error", &module_info_gooSboot, "error"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"asin", &module_info_gooSmath, "asin"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"df", &module_info_gooSboot, "df"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"t=", &module_info_gooStypes, "t="},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"dm", &module_info_gooSboot, "dm"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"while", &module_info_gooSmacros, "while"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"1-", &module_info_gooSmath, "1-"},
  {"t+", &module_info_gooStypes, "t+"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"in", &module_info_gooSioSport, "in"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"head", &module_info_gooSboot, "head"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"~", &module_info_gooSmath, "~"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"gets", &module_info_gooSioSport, "gets"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%time", &module_info_gooSboot, "%time"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"*current-handlers*", &module_info_gooSruntime, "*current-handlers*"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"out", &module_info_gooSioSport, "out"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"t*", &module_info_gooSboot, "t*"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"lst", &module_info_gooSboot, "lst"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"get", &module_info_gooSioSport, "get"},
  {"abs", &module_info_gooSmath, "abs"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"try", &module_info_gooSboot, "try"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"floor", &module_info_gooSmath, "floor"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"always", &module_info_gooSruntime, "always"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"-", &module_info_gooSmath, "-"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"as", &module_info_gooStypes, "as"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"dss", &module_info_gooSboot, "dss"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"put", &module_info_gooSioSport, "put"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"use", &module_info_gooSboot, "use"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"rem", &module_info_gooSmath, "rem"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"&", &module_info_gooSmath, "&"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%get", &module_info_gooSboot, "%get"},
  {"map", &module_info_gooSmacros, "map"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"@==", &module_info_gooSboot, "@=="},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"cos", &module_info_gooSmath, "cos"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"op", &module_info_gooSmacros, "op"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"atan", &module_info_gooSmath, "atan"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {">>", &module_info_gooSmath, ">>"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"1+", &module_info_gooSmath, "1+"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"round/", &module_info_gooSmath, "round/"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"close", &module_info_gooSioSport, "close"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%put", &module_info_gooSboot, "%put"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"loc", &module_info_gooSboot, "loc"},
  {"max", &module_info_gooSmag, "max"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"app", &module_info_gooSmacros, "app"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"export", &module_info_gooSboot, "export"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"into", &module_info_gooScolsScol, "into"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"open", &module_info_gooSioSport, "open"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"min", &module_info_gooSmag, "min"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"^", &module_info_gooSmath, "^"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%str", &module_info_gooSboot, "%str"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"==", &module_info_gooSmacros, "=="},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"del", &module_info_gooScolsScol, "del"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"match", &module_info_gooSmacros, "match"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"nil", &module_info_gooSboot, "nil"},
  {"do", &module_info_gooSmacros, "do"},
  {"case", &module_info_gooSmacros, "case"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"esc", &module_info_gooSboot, "esc"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"+", &module_info_gooSmath, "+"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"thread-priority", CVAR, &YtimeSthreadsYthread_priority},
  {"thread-handle-setter", CVAR, &YtimeSthreadsYthread_handle_setter},
  {"test-thread-1", CVAR, &YtimeSthreadsYtest_thread_1},
  {"%thread-priority", PVAR, NULL},
  {"%thread-yield", PVAR, NULL},
  {"spawn", PVAR, NULL},
  {"thread-function", CVAR, &YtimeSthreadsYthread_function},
  {"%thread-priority-setter", PVAR, NULL},
  {"main-thread-key", CVAR, &YtimeSthreadsYmain_thread_key},
  {"thread-handle", CVAR, &YtimeSthreadsYthread_handle},
  {"thread-join", CVAR, &YtimeSthreadsYthread_join},
  {"thread-yield", CVAR, &YtimeSthreadsYthread_yield},
  {"%thread-detach", PVAR, NULL},
  {"<thread>", CVAR, &YtimeSthreadsYLthreadG},
  {"thread-current", CVAR, &YtimeSthreadsYthread_current},
  {"%thread-goo-thread", PVAR, NULL},
  {"%thread-current", PVAR, NULL},
  {"thread-name", CVAR, &YtimeSthreadsYthread_name},
  {"test-thread-2", CVAR, &YtimeSthreadsYtest_thread_2},
  {"thread-priority-setter", CVAR, &YtimeSthreadsYthread_priority_setter},
  {"%thread-sleep", PVAR, NULL},
  {"%thread-create", PVAR, NULL},
  {"thread-name-setter", CVAR, &YtimeSthreadsYthread_name_setter},
  {"sleep", CVAR, &YtimeSthreadsYsleep},
  {"thread-function-setter", CVAR, &YtimeSthreadsYthread_function_setter},
  {"%thread-join", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"thread-priority", "thread-priority"},
  {"thread-name", "thread-name"},
  {"test-thread-1", "test-thread-1"},
  {"spawn", "spawn"},
  {"thread-function", "thread-function"},
  {"thread-yield", "thread-yield"},
  {"<thread>", "<thread>"},
  {"thread-current", "thread-current"},
  {"test-thread-2", "test-thread-2"},
  {"sleep", "sleep"},
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

/* EXPRESSION: */

extern void load_module_timeSthreads (void);

void load_module_timeSthreads (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSruntime();

  (P)YtimeSthreadsY___main_0___();

}

/* END OF GENERATED CODE. */
