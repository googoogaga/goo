/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: time/threads */

EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YtimeSthreadsYmain_thread_key,"time/threads","main-thread-key");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YtimeSthreadsYthread_join,"time/threads","thread-join");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YtimeSthreadsYthread_handle,"time/threads","thread-handle");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSruntimeYstack_overflow_error,"goo/runtime","stack-overflow-error");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YPprop,"goo/boot","%prop");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
DEF(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYatan2,"goo/math","atan2");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DYNEXT(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
DEF(YtimeSthreadsYthread_priority_setter,"time/threads","thread-priority-setter");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yerror,"goo/boot","error");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
DEF(YtimeSthreadsYthread_name_setter,"time/threads","thread-name-setter");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLnumG,"goo/boot","<num>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YtimeSthreadsYthread_function_setter,"time/threads","thread-function-setter");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLmetG,"goo/boot","<met>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathY_,"goo/math","-");
DEF(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YtimeSthreadsYthread_handle_setter,"time/threads","thread-handle-setter");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosY1st,"goo/macros","1st");
DEF(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYlen,"goo/types","len");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_31);
DEFLIT(lit_26);
DEFLIT(lit_24);
DEFLIT(lit_28);
DEFLIT(lit_33);
DEFLIT(lit_38);
DEFLIT(lit_1);
DEFLIT(lit_18);
DEFLIT(lit_13);
DEFLIT(lit_11);
DEFLIT(lit_9);
DEFLIT(lit_32);
DEFLIT(lit_8);
DEFLIT(lit_0);
DEFLIT(lit_41);
DEFLIT(lit_40);
DEFLIT(lit_6);
DEFLIT(lit_23);
DEFLIT(lit_2);
DEFLIT(lit_19);
DEFLIT(lit_37);
DEFLIT(lit_4);
DEFLIT(lit_17);
DEFLIT(lit_12);
DEFLIT(lit_39);
DEFLIT(lit_7);
DEFLIT(lit_21);
DEFLIT(lit_30);
DEFLIT(lit_36);
DEFLIT(lit_16);
DEFLIT(lit_14);
DEFLIT(lit_5);
DEFLIT(lit_20);
DEFLIT(lit_34);
DEFLIT(lit_15);
DEFLIT(lit_3);
DEFLIT(lit_25);
DEFLIT(lit_22);
DEFLIT(lit_10);
DEFLIT(lit_27);
DEFLIT(lit_35);
DEFLIT(lit_29);

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
LOCFOR(fun_x_1760_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_sleep_22);
LOCFOR(fun_thread_current_23);
LOCFOR(fun_thread_join_24);
LOCFOR(fun_x_1762_25);
LOCFOR(fun_26);
FUNFOR(YtimeSthreadsYtest_thread_1);
LOCFOR(fun_x_1764_28);
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
  P xF3428;
  P xF3427;
  P hF3426;
  P xF3425;
  P fF3424;
  P tF3423;
  P next_metsF3422;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(args_, 1);
loop:
  T2 = (P)YPnext_methods();
  next_metsF3422 = T2;
  if (next_metsF3422 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),next_metsF3422);
    T6 = CALL1(1,VARREF(Ytail),next_metsF3422);
    T4 = CALL4(1,VARREF(YgooSmacrosYnapp),T5,T6,x_,args_);
    T3 = T4;
  } else {
    T7 = CALL1(1,VARREF(Yerror),LITREF(lit_16));
    T3 = T7;
  }
  T1 = T3;
  tF3423 = T1;
  T10 = CALL1(1,VARREF(YtimeSthreadsYthread_function),tF3423);
  T9 = CALL2(1,VARREF(YgooSmacrosYEE),T10,VARREF(YtimeSthreadsYmain_thread_key));
  T8 = CALL1(1,VARREF(Ynot),T9);
  if (T8 != YPfalse) {
    T12 = FUNFAB(fun_17,1,tF3423);
    fF3424 = T12;
    T16 = CALL2(1,VARREF(Ytup),fF3424,tF3423);
    T15 = (P)YtimeSthreadsYPthread_create(T16);
    xF3425 = T15;
    T17 = (P)YPtag_into(xF3425,(P)3);
    T14 = T17;
    hF3426 = T14;
    CALL2(1,VARREF(YtimeSthreadsYthread_handle_setter),hF3426,tF3423);
    T20 = CALL1(1,VARREF(YtimeSthreadsYthread_priority),tF3423);
    xF3427 = T20;
    xF3428 = xF3427;
    T22 = (P)YPiGG(xF3428,(P)2);
    T21 = T22;
    T19 = T21;
    T18 = (P)YtimeSthreadsYPthread_priority_setter(T19,hF3426);
    T13 = T18;
    T11 = T13;
  } else {
  }
  T0 = tF3423;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1760_19) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_25));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P return_;
  P x_1759F3433;
  P x_1759F3432;
  P bodyF3431;
  P x_1759F3430;
  P x_1760F3429;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1760_19,1);
  x_1760F3429 = T1;
  FUNINIT(x_1760F3429, 1,return_);
  x_1759F3430 = FREEREF(0);
  bodyF3431 = YPfalse;
  bodyF3431 = BOXFAB(bodyF3431);
  T5 = CALL2(1,VARREF(YisaQ),x_1759F3430,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1759F3430,LITREF(lit_25),x_1760F3429);
    x_1759F3432 = T7;
    BOXVAL(bodyF3431) = x_1759F3432;
    x_1759F3433 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1759F3433,x_1760F3429);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1760F3429,LITREF(lit_26),x_1759F3430);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_0));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T18 = CALL1(1,VARREF(Ylst),Ynil);
  T19 = BOXVAL(bodyF3431);
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
  P xF3434;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T2 = (P)YtimeSthreadsYPthread_current();
  xF3434 = T2;
  T3 = (P)YPtag_into(xF3434,(P)3);
  T1 = T3;
  T0 = (P)YtimeSthreadsYPthread_goo_thread(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_thread_join_24) {
  P t_;
  P xF3435;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T2 = CALL1(1,VARREF(YtimeSthreadsYthread_handle),t_);
  xF3435 = T2;
  T3 = (P)YPuntag_into(xF3435);
  T1 = T3;
  T0 = (P)YtimeSthreadsYPthread_join(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1762_25) {
  P x_1761_;
  P iF3436;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1761_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1761_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1761_);
    iF3436 = T4;
    CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_36),iF3436);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1761_);
    a1 = T6;
    x_1761_ = a1;
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
  P x_1762F3437;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_x_1762_25,1);
  x_1762F3437 = T1;
  FUNINIT(x_1762F3437, 1,x_1762F3437);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),YPint((P)3000));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1762F3437,T3);
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

FUNCODEDEF(fun_x_1764_28) {
  P x_1763_;
  P iF3438;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1763_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1763_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1763_);
    iF3438 = T4;
    CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_40),iF3438);
    CALL1(1,VARREF(YtimeSthreadsYsleep),LITREF(lit_41));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1763_);
    a1 = T6;
    x_1763_ = a1;
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
  P x_1764F3439;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_x_1764_28,1);
  x_1764F3439 = T1;
  FUNINIT(x_1764F3439, 1,x_1764F3439);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),YPint((P)100));
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1764F3439,T3);
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
  P xF3440;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98;
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
  xF3440 = T69;
  T70 = (P)YPtag_into(xF3440,(P)3);
  T68 = T70;
  XCALLN(1,VARREF(Ynew),7,VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_name),LITREF(lit_20),VARREF(YtimeSthreadsYthread_function),VARREF(YtimeSthreadsYmain_thread_key),VARREF(YtimeSthreadsYthread_handle),T68);
  lit_21 = YPPsym((P)"exp");
  lit_22 = YPPsym((P)"return");
  lit_23 = YPPsym((P)"x-1760");
  lit_24 = YPPsym((P)"msg");
  lit_25 = YPPsym((P)"spawn");
  lit_26 = YPsb((P)"Match Pattern Failure");
  lit_27 = YPPsym((P)"fun");
  T73 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1760_19 = YPmet(FUNCODEREF(fun_x_1760_19),LITREF(lit_23),T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(YPPlist(1,LITREF(lit_22)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T74 = fun_21;
  YPmacro(YPPsym((P)"time/threads"),YPPsym((P)"spawn"),T74);
  lit_28 = YPPsym((P)"sleep");
  lit_29 = YPPsym((P)"secs");
  T75 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sleep_22 = YPmet(FUNCODEREF(fun_sleep_22),LITREF(lit_28),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YtimeSthreadsYsleep);
  if (T78 != YPfalse) {
    T77 = VARREF(YtimeSthreadsYsleep);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sleep_22;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YtimeSthreadsYsleep,T76);
  lit_30 = YPPsym((P)"thread-current");
  T80 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YtimeSthreadsYLthreadG),Ynil);
  fun_thread_current_23 = YPmet(FUNCODEREF(fun_thread_current_23),LITREF(lit_30),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YtimeSthreadsYthread_current);
  if (T83 != YPfalse) {
    T82 = VARREF(YtimeSthreadsYthread_current);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_thread_current_23;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YtimeSthreadsYthread_current,T81);
  lit_31 = YPPsym((P)"thread-join");
  lit_32 = YPPsym((P)"t");
  T85 = YPsig(YPPlist(1,LITREF(lit_32)),YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_join_24 = YPmet(FUNCODEREF(fun_thread_join_24),LITREF(lit_31),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YtimeSthreadsYthread_join);
  if (T88 != YPfalse) {
    T87 = VARREF(YtimeSthreadsYthread_join);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_thread_join_24;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YtimeSthreadsYthread_join,T86);
  lit_33 = YPPsym((P)"test-thread-1");
  lit_34 = YPPsym((P)"x-1762");
  lit_35 = YPPsym((P)"x-1761");
  lit_36 = YPsb((P)"%d\n");
  T92 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1762_25 = YPmet(FUNCODEREF(fun_x_1762_25),LITREF(lit_34),T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YtimeSthreadsYtest_thread_1 = YPmet(FUNCODEREF(YtimeSthreadsYtest_thread_1),LITREF(lit_33),T90,ENVNUL,PNUL,YPfalse);
  T93 = YtimeSthreadsYtest_thread_1;
  VARSET(YtimeSthreadsYtest_thread_1,T93);
  lit_37 = YPPsym((P)"test-thread-2");
  lit_38 = YPPsym((P)"x-1764");
  lit_39 = YPPsym((P)"x-1763");
  lit_40 = YPsb((P)"%d\n");
  lit_41 = YPflo(FLOINT(1.0));
  T96 = YPsig(YPPlist(1,LITREF(lit_39)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1764_28 = YPmet(FUNCODEREF(fun_x_1764_28),LITREF(lit_38),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YtimeSthreadsYtest_thread_2 = YPmet(FUNCODEREF(YtimeSthreadsYtest_thread_2),LITREF(lit_37),T94,ENVNUL,PNUL,YPfalse);
  T97 = YtimeSthreadsYtest_thread_2;
  VARSET(YtimeSthreadsYtest_thread_2,T97);
  T98 = YPfalse;
  return T98;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSruntime},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"open", &module_info_gooSioSport, "open"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"min", &module_info_gooSmag, "min"},
  {"%str", &module_info_gooSboot, "%str"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"@len", &module_info_gooSboot, "@len"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"ct", &module_info_gooSboot, "ct"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"do", &module_info_gooSmacros, "do"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"@+", &module_info_gooSboot, "@+"},
  {"rem", &module_info_gooSmath, "rem"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"^", &module_info_gooSmath, "^"},
  {">", &module_info_gooSmag, ">"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"app", &module_info_gooSmacros, "app"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"neg", &module_info_gooSmath, "neg"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"<", &module_info_gooSmag, "<"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {">=", &module_info_gooSmag, ">="},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"round/", &module_info_gooSmath, "round/"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"del", &module_info_gooScolsScol, "del"},
  {"logn", &module_info_gooSmath, "logn"},
  {"new", &module_info_gooSboot, "new"},
  {"=", &module_info_gooSmath, "="},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"sin", &module_info_gooSmath, "sin"},
  {"~==", &module_info_gooSmath, "~=="},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"stack-overflow-error", &module_info_gooSruntime, "stack-overflow-error"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"add", &module_info_gooScolsScol, "add"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"for", &module_info_gooSmacros, "for"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"even?", &module_info_gooSmath, "even?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%enable-stack-checks", &module_info_gooSboot, "%enable-stack-checks"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"dp", &module_info_gooSboot, "dp"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"+", &module_info_gooSmath, "+"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"use", &module_info_gooSboot, "use"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"dm", &module_info_gooSboot, "dm"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"def", &module_info_gooSboot, "def"},
  {"while", &module_info_gooSmacros, "while"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"df", &module_info_gooSboot, "df"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"not", &module_info_gooSboot, "not"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"dg", &module_info_gooSboot, "dg"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"|", &module_info_gooSmath, "|"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"dl", &module_info_gooSboot, "dl"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"mod", &module_info_gooSmath, "mod"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<<", &module_info_gooSmath, "<<"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"col", &module_info_gooScolsScol, "col"},
  {"log", &module_info_gooSmath, "log"},
  {"read", &module_info_gooSruntime, "read"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"lst", &module_info_gooSboot, "lst"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"in", &module_info_gooSioSport, "in"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"as", &module_info_gooStypes, "as"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"*current-handlers*", &module_info_gooSruntime, "*current-handlers*"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@<", &module_info_gooSboot, "@<"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"round", &module_info_gooSmath, "round"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"error", &module_info_gooSboot, "error"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"out", &module_info_gooSioSport, "out"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"~", &module_info_gooSmath, "~"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"/", &module_info_gooSmath, "/"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"div", &module_info_gooSmath, "div"},
  {"op", &module_info_gooSmacros, "op"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"nul", &module_info_gooSboot, "nul"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"if", &module_info_gooSboot, "if"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"get", &module_info_gooSioSport, "get"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"always", &module_info_gooSruntime, "always"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fin", &module_info_gooSboot, "fin"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"$e", &module_info_gooSmath, "$e"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%get", &module_info_gooSboot, "%get"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"try", &module_info_gooSboot, "try"},
  {"export", &module_info_gooSboot, "export"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"tup", &module_info_gooSboot, "tup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"let", &module_info_gooSboot, "let"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"last", &module_info_gooSmacros, "last"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"put", &module_info_gooSioSport, "put"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"items", &module_info_gooScolsScol, "items"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"mif", &module_info_gooSboot, "mif"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"set", &module_info_gooSboot, "set"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"@==", &module_info_gooSboot, "@=="},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"==", &module_info_gooSmacros, "=="},
  {"pow", &module_info_gooSmath, "pow"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"&", &module_info_gooSmath, "&"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*", &module_info_gooSmath, "*"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"loc", &module_info_gooSboot, "loc"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"t<", &module_info_gooStypes, "t<"},
  {"cos", &module_info_gooSmath, "cos"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"case", &module_info_gooSmacros, "case"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"close", &module_info_gooSioSport, "close"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"floor", &module_info_gooSmath, "floor"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"map", &module_info_gooSmacros, "map"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"-", &module_info_gooSmath, "-"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%im", &module_info_gooSboot, "%im"},
  {"match", &module_info_gooSmacros, "match"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {">>", &module_info_gooSmath, ">>"},
  {"%time", &module_info_gooSboot, "%time"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"atan", &module_info_gooSmath, "atan"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"t=", &module_info_gooStypes, "t="},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"max", &module_info_gooSmag, "max"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"~=", &module_info_gooSmath, "~="},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"abs", &module_info_gooSmath, "abs"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"when", &module_info_gooSmacros, "when"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"1-", &module_info_gooSmath, "1-"},
  {"len", &module_info_gooStypes, "len"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%thread-sleep", PVAR, NULL},
  {"main-thread-key", CVAR, &YtimeSthreadsYmain_thread_key},
  {"thread-join", CVAR, &YtimeSthreadsYthread_join},
  {"thread-handle", CVAR, &YtimeSthreadsYthread_handle},
  {"spawn", PVAR, NULL},
  {"thread-yield", CVAR, &YtimeSthreadsYthread_yield},
  {"thread-current", CVAR, &YtimeSthreadsYthread_current},
  {"<thread>", CVAR, &YtimeSthreadsYLthreadG},
  {"%thread-join", PVAR, NULL},
  {"%thread-detach", PVAR, NULL},
  {"test-thread-2", CVAR, &YtimeSthreadsYtest_thread_2},
  {"thread-priority-setter", CVAR, &YtimeSthreadsYthread_priority_setter},
  {"sleep", CVAR, &YtimeSthreadsYsleep},
  {"thread-name-setter", CVAR, &YtimeSthreadsYthread_name_setter},
  {"%thread-priority-setter", PVAR, NULL},
  {"%thread-goo-thread", PVAR, NULL},
  {"thread-function-setter", CVAR, &YtimeSthreadsYthread_function_setter},
  {"---main-0---", PVAR, NULL},
  {"thread-priority", CVAR, &YtimeSthreadsYthread_priority},
  {"%thread-create", PVAR, NULL},
  {"thread-name", CVAR, &YtimeSthreadsYthread_name},
  {"%thread-yield", PVAR, NULL},
  {"%thread-priority", PVAR, NULL},
  {"%thread-current", PVAR, NULL},
  {"test-thread-1", CVAR, &YtimeSthreadsYtest_thread_1},
  {"thread-handle-setter", CVAR, &YtimeSthreadsYthread_handle_setter},
  {"thread-function", CVAR, &YtimeSthreadsYthread_function},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"thread-yield", "thread-yield"},
  {"thread-current", "thread-current"},
  {"<thread>", "<thread>"},
  {"test-thread-2", "test-thread-2"},
  {"sleep", "sleep"},
  {"thread-priority", "thread-priority"},
  {"thread-name", "thread-name"},
  {"test-thread-1", "test-thread-1"},
  {"spawn", "spawn"},
  {"thread-function", "thread-function"},
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
