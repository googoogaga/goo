/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: time/lock */

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
DEF(YtimeSlockYlock_handle_setter,"time/lock","lock-handle-setter");
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
DEF(YtimeSlockYlock_state_setter,"time/lock","lock-state-setter");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
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
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
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
DEF(YtimeSlockYLlockG,"time/lock","<lock>");
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
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
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
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLstrG,"goo/boot","<str>");
DEF(YtimeSlockYlock_handle,"time/lock","lock-handle");
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
DEF(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YLflatG,"goo/boot","<flat>");
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
DEF(YtimeSlockYlock_lock,"time/lock","lock-lock");
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
DEF(YtimeSlockYlock_name_setter,"time/lock","lock-name-setter");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
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
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmathYtan,"goo/math","tan");
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
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YtimeSlockYlock_name,"time/lock","lock-name");
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
DEF(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
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
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
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
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYGG,"goo/math",">>");
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
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYlen,"goo/types","len");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_22);
DEFLIT(lit_17);
DEFLIT(lit_9);
DEFLIT(lit_27);
DEFLIT(lit_1);
DEFLIT(lit_18);
DEFLIT(lit_0);
DEFLIT(lit_24);
DEFLIT(lit_5);
DEFLIT(lit_14);
DEFLIT(lit_25);
DEFLIT(lit_2);
DEFLIT(lit_23);
DEFLIT(lit_21);
DEFLIT(lit_26);
DEFLIT(lit_15);
DEFLIT(lit_28);
DEFLIT(lit_12);
DEFLIT(lit_11);
DEFLIT(lit_3);
DEFLIT(lit_10);
DEFLIT(lit_6);
DEFLIT(lit_7);
DEFLIT(lit_8);
DEFLIT(lit_20);
DEFLIT(lit_4);
DEFLIT(lit_13);
DEFLIT(lit_16);
DEFLIT(lit_19);

/* FUNCTIONS: */

LOCFOR(fun_lock_name_0);
LOCFOR(fun_lock_name_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_lock_state_3);
LOCFOR(fun_lock_state_setter_4);
LOCFOR(fun_lock_handle_5);
LOCFOR(fun_lock_handle_setter_6);
LOCFOR(fun_lock_lock_7);
LOCFOR(fun_lock_unlock_8);
LOCFOR(fun_lock_destroy_9);
LOCFOR(fun_new_10);
LOCFOR(fun_x_1768_11);
LOCFOR(fun_12);
LOCFOR(fun_13);
extern P YtimeSlockY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_lock_name_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSlockYlock_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lock_name_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSlockYlock_name));
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

FUNCODEDEF(fun_lock_state_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSlockYlock_state));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lock_state_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSlockYlock_state));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lock_handle_5) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YtimeSlockYlock_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lock_handle_setter_6) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YtimeSlockYlock_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lock_lock_7) {
  P lock_;
  P xF3441;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(lock_, 0);
loop:
  T1 = CALL1(1,VARREF(YtimeSlockYlock_handle),lock_);
  xF3441 = T1;
  T2 = (P)YPuntag_into(xF3441);
  T0 = T2;
  (P)YtimeSlockYPlock_lock(T0);
  T4 = CALL0(1,VARREF(YtimeSthreadsYthread_current));
  T3 = CALL2(1,VARREF(YtimeSlockYlock_state_setter),T4,lock_);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_lock_unlock_8) {
  P lock_;
  P xF3442;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(lock_, 0);
loop:
  T1 = CALL1(1,VARREF(YtimeSlockYlock_handle),lock_);
  xF3442 = T1;
  T2 = (P)YPuntag_into(xF3442);
  T0 = T2;
  (P)YtimeSlockYPlock_unlock(T0);
  T3 = CALL2(1,VARREF(YtimeSlockYlock_state_setter),LITREF(lit_12),lock_);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_lock_destroy_9) {
  P lock_;
  P xF3443;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(lock_, 0);
loop:
  T1 = CALL1(1,VARREF(YtimeSlockYlock_handle),lock_);
  xF3443 = T1;
  T2 = (P)YPuntag_into(xF3443);
  T0 = T2;
  (P)YtimeSlockYPlock_destroy(T0);
  T3 = CALL2(1,VARREF(YtimeSlockYlock_state_setter),LITREF(lit_14),lock_);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_new_10) {
  P x_,args_;
  P xF3447;
  P nF3446;
  P lF3445;
  P next_metsF3444;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(args_, 1);
loop:
  T2 = (P)YPnext_methods();
  next_metsF3444 = T2;
  if (next_metsF3444 != YPfalse) {
    T5 = CALL1(1,VARREF(Yhead),next_metsF3444);
    T6 = CALL1(1,VARREF(Ytail),next_metsF3444);
    T4 = CALL4(1,VARREF(YgooSmacrosYnapp),T5,T6,x_,args_);
    T3 = T4;
  } else {
    T7 = CALL1(1,VARREF(Yerror),LITREF(lit_18));
    T3 = T7;
  }
  T1 = T3;
  lF3445 = T1;
  T9 = CALL1(1,VARREF(YtimeSlockYlock_name),lF3445);
  nF3446 = T9;
  if (nF3446 != YPfalse) {
    T13 = LITREF(lit_19);
  } else {
    T14 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nF3446);
    T13 = T14;
  }
  T12 = (P)YPsu(T13);
  T11 = (P)YtimeSlockYPlock_create(T12);
  xF3447 = T11;
  T15 = (P)YPtag_into(xF3447,(P)3);
  T10 = T15;
  CALL2(1,VARREF(YtimeSlockYlock_handle_setter),T10,lF3445);
  T8 = lF3445;
  T0 = T8;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1768_11) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_24));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  P return_;
  P lock_nameF3455;
  P x_1767F3454;
  P x_1767F3453;
  P x_1767F3452;
  P bodyF3451;
  P lockF3450;
  P x_1767F3449;
  P x_1768F3448;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1768_11,1);
  x_1768F3448 = T1;
  FUNINIT(x_1768F3448, 1,return_);
  x_1767F3449 = FREEREF(0);
  lockF3450 = YPfalse;
  lockF3450 = BOXFAB(lockF3450);
  bodyF3451 = YPfalse;
  bodyF3451 = BOXFAB(bodyF3451);
  T7 = CALL2(1,VARREF(YisaQ),x_1767F3449,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1767F3449,LITREF(lit_24),x_1768F3448);
    x_1767F3452 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1767F3452,x_1768F3448);
    BOXVAL(lockF3450) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1767F3452);
    x_1767F3453 = T12;
    BOXVAL(bodyF3451) = x_1767F3453;
    x_1767F3454 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1767F3454,x_1768F3448);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1768F3448,LITREF(lit_25),x_1767F3449);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  lock_nameF3455 = T17;
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_26));
  T24 = CALL1(1,VARREF(Ylst),lock_nameF3455);
  T26 = BOXVAL(lockF3450);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T21 = CALL2(1,VARREF(YgooSmacrosYcat),T22,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T36 = CALL1(1,VARREF(Ylst),lock_nameF3455);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T37 = BOXVAL(bodyF3451);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T37,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T41 = CALL1(1,VARREF(Ylst),lock_nameF3455);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T38,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T27,Ynil);
  T16 = T18;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_13) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_12,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YtimeSlockY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<lock>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YtimeSlockYLlockG,T0);
  lit_1 = YPPsym((P)"lock-name");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lock_name_0 = YPmet(FUNCODEREF(fun_lock_name_0),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YtimeSlockYlock_name);
  if (T5 != YPfalse) {
    T4 = VARREF(YtimeSlockYlock_name);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_lock_name_0;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YtimeSlockYlock_name,T3);
  lit_3 = YPPsym((P)"lock-name-setter");
  lit_4 = YPPsym((P)"_z");
  T8 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,T8,VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_lock_name_setter_1 = YPmet(FUNCODEREF(fun_lock_name_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T11 = BOUNDP(YtimeSlockYlock_name_setter);
  if (T11 != YPfalse) {
    T10 = VARREF(YtimeSlockYlock_name_setter);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_lock_name_setter_1;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YtimeSlockYlock_name_setter,T9);
  T13 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T14 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T15 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSlockYLlockG),VARREF(YtimeSlockYlock_name),VARREF(YtimeSlockYlock_name_setter),T14,T15);
  lit_5 = YPPsym((P)"lock-state");
  T16 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lock_state_3 = YPmet(FUNCODEREF(fun_lock_state_3),LITREF(lit_5),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YtimeSlockYlock_state);
  if (T19 != YPfalse) {
    T18 = VARREF(YtimeSlockYlock_state);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_lock_state_3;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YtimeSlockYlock_state,T17);
  lit_6 = YPPsym((P)"lock-state-setter");
  T22 = XCALL2(1,VARREF(YgooStypesYtA),VARREF(YLsymG),VARREF(YtimeSthreadsYLthreadG));
  T21 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,T22,VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_lock_state_setter_4 = YPmet(FUNCODEREF(fun_lock_state_setter_4),LITREF(lit_6),T21,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YtimeSlockYlock_state_setter);
  if (T25 != YPfalse) {
    T24 = VARREF(YtimeSlockYlock_state_setter);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_lock_state_setter_4;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YtimeSlockYlock_state_setter,T23);
  T27 = XCALL2(1,VARREF(YgooStypesYtA),VARREF(YLsymG),VARREF(YtimeSthreadsYLthreadG));
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSlockYLlockG),VARREF(YtimeSlockYlock_state),VARREF(YtimeSlockYlock_state_setter),T27,VARREF(YPprop_unbound_error));
  lit_7 = YPPsym((P)"lock-handle");
  T28 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lock_handle_5 = YPmet(FUNCODEREF(fun_lock_handle_5),LITREF(lit_7),T28,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YtimeSlockYlock_handle);
  if (T31 != YPfalse) {
    T30 = VARREF(YtimeSlockYlock_handle);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_lock_handle_5;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YtimeSlockYlock_handle,T29);
  lit_8 = YPPsym((P)"lock-handle-setter");
  T33 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLlocG),VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_lock_handle_setter_6 = YPmet(FUNCODEREF(fun_lock_handle_setter_6),LITREF(lit_8),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YtimeSlockYlock_handle_setter);
  if (T36 != YPfalse) {
    T35 = VARREF(YtimeSlockYlock_handle_setter);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_lock_handle_setter_6;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YtimeSlockYlock_handle_setter,T34);
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSlockYLlockG),VARREF(YtimeSlockYlock_handle),VARREF(YtimeSlockYlock_handle_setter),VARREF(YLlocG),VARREF(YPprop_unbound_error));
  lit_9 = YPPsym((P)"lock-lock");
  lit_10 = YPPsym((P)"lock");
  T38 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lock_lock_7 = YPmet(FUNCODEREF(fun_lock_lock_7),LITREF(lit_9),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YtimeSlockYlock_lock);
  if (T41 != YPfalse) {
    T40 = VARREF(YtimeSlockYlock_lock);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_lock_lock_7;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YtimeSlockYlock_lock,T39);
  lit_11 = YPPsym((P)"lock-unlock");
  lit_12 = YPPsym((P)"abandoned");
  T43 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lock_unlock_8 = YPmet(FUNCODEREF(fun_lock_unlock_8),LITREF(lit_11),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YtimeSlockYlock_unlock);
  if (T46 != YPfalse) {
    T45 = VARREF(YtimeSlockYlock_unlock);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_lock_unlock_8;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YtimeSlockYlock_unlock,T44);
  lit_13 = YPPsym((P)"lock-destroy");
  lit_14 = YPPsym((P)"destroyed");
  T48 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lock_destroy_9 = YPmet(FUNCODEREF(fun_lock_destroy_9),LITREF(lit_13),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YtimeSlockYlock_destroy);
  if (T51 != YPfalse) {
    T50 = VARREF(YtimeSlockYlock_destroy);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_lock_destroy_9;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YtimeSlockYlock_destroy,T49);
  lit_15 = YPPsym((P)"new");
  lit_16 = YPPsym((P)"x");
  lit_17 = YPPsym((P)"args");
  lit_18 = YPsb((P)"No next methods");
  lit_19 = YPsb((P)"");
  T54 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YtimeSlockYLlockG));
  T53 = YPsig(YPPlist(2,LITREF(lit_16),LITREF(lit_17)),YPPlist(1,T54),YPtrue,YPint((P)1),VARREF(YtimeSlockYLlockG),Ynil);
  fun_new_10 = YPmet(FUNCODEREF(fun_new_10),LITREF(lit_15),T53,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(Ynew);
  if (T57 != YPfalse) {
    T56 = VARREF(Ynew);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_new_10;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(Ynew,T55);
  lit_20 = YPPsym((P)"exp");
  lit_21 = YPPsym((P)"return");
  lit_22 = YPPsym((P)"x-1768");
  lit_23 = YPPsym((P)"msg");
  lit_24 = YPPsym((P)"with-lock");
  lit_25 = YPsb((P)"Match Pattern Failure");
  lit_26 = YPPsym((P)"let");
  lit_27 = YPPsym((P)"fin");
  lit_28 = YPPsym((P)"seq");
  T61 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_17)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1768_11 = YPmet(FUNCODEREF(fun_x_1768_11),LITREF(lit_22),T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T62 = fun_13;
  YPmacro(YPPsym((P)"time/lock"),YPPsym((P)"with-lock"),T62);
  T63 = YPfalse;
  return T63;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_timeSthreads;
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
extern MODULE_INFO module_info_gooSruntime;
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
  {&module_info_timeSthreads},
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
  {"thread-yield", &module_info_timeSthreads, "thread-yield"},
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
  {"thread-current", &module_info_timeSthreads, "thread-current"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"dm", &module_info_gooSboot, "dm"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"def", &module_info_gooSboot, "def"},
  {"<thread>", &module_info_timeSthreads, "<thread>"},
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
  {"test-thread-2", &module_info_timeSthreads, "test-thread-2"},
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
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sleep", &module_info_timeSthreads, "sleep"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"~", &module_info_gooSmath, "~"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"tan", &module_info_gooSmath, "tan"},
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
  {"spawn", &module_info_timeSthreads, "spawn"},
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
  {"thread-priority", &module_info_timeSthreads, "thread-priority"},
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
  {"thread-name", &module_info_timeSthreads, "thread-name"},
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
  {"test-thread-1", &module_info_timeSthreads, "test-thread-1"},
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
  {"thread-function", &module_info_timeSthreads, "thread-function"},
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
  {"1-", &module_info_gooSmath, "1-"},
  {"len", &module_info_gooStypes, "len"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%lock-destroy", PVAR, NULL},
  {"lock-handle-setter", CVAR, &YtimeSlockYlock_handle_setter},
  {"lock-state-setter", CVAR, &YtimeSlockYlock_state_setter},
  {"lock-unlock", CVAR, &YtimeSlockYlock_unlock},
  {"<lock>", CVAR, &YtimeSlockYLlockG},
  {"lock-handle", CVAR, &YtimeSlockYlock_handle},
  {"lock-state", CVAR, &YtimeSlockYlock_state},
  {"lock-lock", CVAR, &YtimeSlockYlock_lock},
  {"lock-name-setter", CVAR, &YtimeSlockYlock_name_setter},
  {"lock-name", CVAR, &YtimeSlockYlock_name},
  {"---main-0---", PVAR, NULL},
  {"lock-destroy", CVAR, &YtimeSlockYlock_destroy},
  {"%lock-create", PVAR, NULL},
  {"%lock-unlock", PVAR, NULL},
  {"%lock-try-lock", PVAR, NULL},
  {"with-lock", PVAR, NULL},
  {"%lock-lock", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"lock-unlock", "lock-unlock"},
  {"<lock>", "<lock>"},
  {"lock-handle", "lock-handle"},
  {"lock-state", "lock-state"},
  {"lock-lock", "lock-lock"},
  {"lock-destroy", "lock-destroy"},
  {"with-lock", "with-lock"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_timeSlock;
MODULE_INFO module_info_timeSlock = {
  "time/lock",
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

/* EXPRESSION: */

extern void load_module_timeSlock (void);

void load_module_timeSlock (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_timeSthreads();

  (P)YtimeSlockY___main_0___();

}

/* END OF GENERATED CODE. */
