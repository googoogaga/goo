/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: time/event */

EXT(Ynot,"goo/boot","not");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YtimeSeventYevent_name_setter,"time/event","event-name-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YtimeSeventYevent_reset,"time/event","event-reset");
DEF(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
DEF(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(Ytup,"goo/boot","tup");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YtimeSeventYLeventG,"time/event","<event>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(YtimeSeventYevent_wait,"time/event","event-wait");
DEF(YtimeSeventYevent_handle_setter,"time/event","event-handle-setter");
DEF(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ytail,"goo/boot","tail");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YtimeSeventYevent_name,"time/event","event-name");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YtimeSeventYevent_handle,"time/event","event-handle");
EXT(YgooSmathYround,"goo/math","round");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYS,"goo/math","/");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yunexec,"goo/boot","unexec");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_19);
DEFLIT(lit_10);
DEFLIT(lit_9);
DEFLIT(lit_11);
DEFLIT(lit_7);
DEFLIT(lit_8);
DEFLIT(lit_21);
DEFLIT(lit_18);
DEFLIT(lit_0);
DEFLIT(lit_22);
DEFLIT(lit_4);
DEFLIT(lit_12);
DEFLIT(lit_2);
DEFLIT(lit_5);
DEFLIT(lit_1);
DEFLIT(lit_6);
DEFLIT(lit_20);
DEFLIT(lit_16);
DEFLIT(lit_13);
DEFLIT(lit_15);
DEFLIT(lit_14);
DEFLIT(lit_3);
DEFLIT(lit_17);

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
  P xF3506;
  P tmpF3505;
  P eventF3504;
  P xF3503;
  P yF3502;
  P xF3501;
  P tmpF3500;
  P next_metsF3499;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
loop:
  T2 = (P)YPnext_methods();
  next_metsF3499 = T2;
  tmpF3500 = next_metsF3499;
  if (tmpF3500 != YPfalse) {
    xF3501 = next_metsF3499;
    yF3502 = Ynil;
    T9 = (P)YPeqQ(xF3501,yF3502);
    T8 = (P)YPbb(T9);
    T7 = T8;
    xF3503 = T7;
    T11 = (P)YPeqQ(xF3503,YPfalse);
    T10 = (P)YPbb(T11);
    T6 = T10;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T4 = T5;
  if (T4 != YPfalse) {
    T13 = CALL1(1,VARREF(Yhead),next_metsF3499);
    T14 = CALL1(1,VARREF(Ytail),next_metsF3499);
    T12 = CALL4(1,VARREF(YgooSmacrosYnapp),T13,T14,c_,args_);
    T3 = T12;
  } else {
    T16 = (P)YPfun_reg();
    T17 = CALL2(1,VARREF(Ylst),c_,args_);
    T15 = CALL2(1,VARREF(Yno_next_methods_error),T16,T17);
    T3 = T15;
  }
  T1 = T3;
  eventF3504 = T1;
  T23 = CALL1(1,VARREF(YtimeSeventYevent_name),eventF3504);
  tmpF3505 = T23;
  if (tmpF3505 != YPfalse) {
    T24 = tmpF3505;
  } else {
    T24 = LITREF(lit_12);
  }
  T22 = T24;
  T21 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T22);
  T20 = (P)YPsu(T21);
  T19 = (P)YtimeSeventYPevent_create(T20);
  xF3506 = T19;
  T25 = (P)YPtag_into(xF3506,(P)3);
  T18 = T25;
  CALL2(1,VARREF(YtimeSeventYevent_handle_setter),T18,eventF3504);
  T0 = eventF3504;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_event_signal_6) {
  P e_;
  P xF3507;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF3507 = T1;
  T2 = (P)YPuntag_into(xF3507);
  T0 = T2;
  (P)YtimeSeventYPevent_signal(T0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_event_broadcast_7) {
  P e_;
  P xF3508;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF3508 = T1;
  T2 = (P)YPuntag_into(xF3508);
  T0 = T2;
  (P)YtimeSeventYPevent_broadcast(T0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_event_reset_8) {
  P e_;
  P xF3509;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF3509 = T1;
  T2 = (P)YPuntag_into(xF3509);
  T0 = T2;
  (P)YtimeSeventYPevent_reset(T0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_event_wait_9) {
  P e_,l_;
  P xF3511;
  P xF3510;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(l_, 1);
loop:
  T3 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF3510 = T3;
  T4 = (P)YPuntag_into(xF3510);
  T2 = T4;
  T6 = CALL1(1,VARREF(YtimeSlockYlock_handle),l_);
  xF3511 = T6;
  T7 = (P)YPuntag_into(xF3511);
  T5 = T7;
  T1 = (P)YtimeSeventYPevent_wait(T2,T5);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_event_wait_timed_10) {
  P e_,l_,secs_;
  P xF3513;
  P xF3512;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(l_, 1);
  ARG(secs_, 2);
loop:
  T3 = CALL1(1,VARREF(YtimeSeventYevent_handle),e_);
  xF3512 = T3;
  T4 = (P)YPuntag_into(xF3512);
  T2 = T4;
  T6 = CALL1(1,VARREF(YtimeSlockYlock_handle),l_);
  xF3513 = T6;
  T7 = (P)YPuntag_into(xF3513);
  T5 = T7;
  T8 = (P)YPfu(secs_);
  T1 = (P)YtimeSeventYPevent_wait_timed(T2,T5,T8);
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
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
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
  lit_4 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T8 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T7 = YPsig(LITREF(lit_4),YPPlist(2,T8,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
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
  lit_5 = YPPlist(1,YPPsym((P)"_x"));
  T13 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T14 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T15 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YtimeSeventYLeventG),VARREF(YtimeSeventYevent_name),VARREF(YtimeSeventYevent_name_setter),T14,T15);
  lit_6 = YPPsym((P)"event-handle");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_handle_3 = YPmet(FUNCODEREF(fun_event_handle_3),LITREF(lit_6),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YtimeSeventYevent_handle);
  if (T19 != YPfalse) {
    T18 = VARREF(YtimeSeventYevent_handle);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_event_handle_3;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YtimeSeventYevent_handle,T17);
  lit_8 = YPPsym((P)"event-handle-setter");
  lit_9 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T21 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLanyG),VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_event_handle_setter_4 = YPmet(FUNCODEREF(fun_event_handle_setter_4),LITREF(lit_8),T21,ENVNUL,PNUL,YPfalse);
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
  lit_10 = YPPsym((P)"new");
  lit_11 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  lit_12 = YPsb((P)"");
  T27 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YtimeSeventYLeventG));
  T26 = YPsig(LITREF(lit_11),YPPlist(1,T27),YPtrue,YPint((P)1),VARREF(YtimeSeventYLeventG),Ynil);
  fun_new_5 = YPmet(FUNCODEREF(fun_new_5),LITREF(lit_10),T26,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(Ynew);
  if (T30 != YPfalse) {
    T29 = VARREF(Ynew);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_new_5;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(Ynew,T28);
  lit_13 = YPPsym((P)"event-signal");
  lit_14 = YPPlist(1,YPPsym((P)"e"));
  T32 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_signal_6 = YPmet(FUNCODEREF(fun_event_signal_6),LITREF(lit_13),T32,ENVNUL,PNUL,YPfalse);
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
  lit_16 = YPPlist(1,YPPsym((P)"e"));
  T37 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
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
  lit_17 = YPPsym((P)"event-reset");
  lit_18 = YPPlist(1,YPPsym((P)"e"));
  T42 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YtimeSeventYLeventG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_event_reset_8 = YPmet(FUNCODEREF(fun_event_reset_8),LITREF(lit_17),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YtimeSeventYevent_reset);
  if (T45 != YPfalse) {
    T44 = VARREF(YtimeSeventYevent_reset);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_event_reset_8;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YtimeSeventYevent_reset,T43);
  lit_19 = YPPsym((P)"event-wait");
  lit_20 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"l"));
  T47 = YPsig(LITREF(lit_20),YPPlist(2,VARREF(YtimeSeventYLeventG),VARREF(YtimeSlockYLlockG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_event_wait_9 = YPmet(FUNCODEREF(fun_event_wait_9),LITREF(lit_19),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YtimeSeventYevent_wait);
  if (T50 != YPfalse) {
    T49 = VARREF(YtimeSeventYevent_wait);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_event_wait_9;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YtimeSeventYevent_wait,T48);
  lit_21 = YPPsym((P)"event-wait-timed");
  lit_22 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"l"),YPPsym((P)"secs"));
  T52 = YPsig(LITREF(lit_22),YPPlist(3,VARREF(YtimeSeventYLeventG),VARREF(YtimeSlockYLlockG),VARREF(YLfloG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_event_wait_timed_10 = YPmet(FUNCODEREF(fun_event_wait_timed_10),LITREF(lit_21),T52,ENVNUL,PNUL,YPfalse);
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
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstep;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_timeSthreads},
  {&module_info_timeSlock},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"not", &module_info_gooSboot, "not"},
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"type-error-type", &module_info_gooSconditions, "type-error-type"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"loc", &module_info_gooSboot, "loc"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"<unbound-error>", &module_info_gooSconditions, "<unbound-error>"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"<property-error>", &module_info_gooSconditions, "<property-error>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%str", &module_info_gooSboot, "%str"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"as", &module_info_gooStypes, "as"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"^", &module_info_gooSmath, "^"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<simple-condition>", &module_info_gooSconditions, "<simple-condition>"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"col", &module_info_gooScolsScol, "col"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"describe-condition", &module_info_gooSconditions, "describe-condition"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"even?", &module_info_gooSmath, "even?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"sig", &module_info_gooSconditions, "sig"},
  {"lock-unlock", &module_info_timeSlock, "lock-unlock"},
  {"mod", &module_info_gooSmath, "mod"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"unbound-variable-error-variable", &module_info_gooSconditions, "unbound-variable-error-variable"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"handler-function", &module_info_gooSconditions, "handler-function"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"len", &module_info_gooStypes, "len"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"atan", &module_info_gooSmath, "atan"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"property-error-owner", &module_info_gooSconditions, "property-error-owner"},
  {"in", &module_info_gooSioSport, "in"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"*", &module_info_gooSmath, "*"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"op", &module_info_gooSmacros, "op"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"floor", &module_info_gooSmath, "floor"},
  {"clone", &module_info_gooSboot, "clone"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<simple-error>", &module_info_gooSconditions, "<simple-error>"},
  {"<unbound-variable-error>", &module_info_gooSconditions, "<unbound-variable-error>"},
  {"<compiler-error>", &module_info_gooSconditions, "<compiler-error>"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<no-next-methods-error>", &module_info_gooSconditions, "<no-next-methods-error>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"def", &module_info_gooSboot, "def"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"into", &module_info_gooScolsScol, "into"},
  {"@==", &module_info_gooSboot, "@=="},
  {"map", &module_info_gooSmacros, "map"},
  {"<call-error>", &module_info_gooSconditions, "<call-error>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fab-handler", &module_info_gooSconditions, "fab-handler"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"lock-state", &module_info_timeSlock, "lock-state"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"export", &module_info_gooSboot, "export"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"sub*-setter", &module_info_gooScolsSseqx, "sub*-setter"},
  {"@not", &module_info_gooSboot, "@not"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"lock-handle", &module_info_timeSlock, "lock-handle"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"<narity-error>", &module_info_gooSconditions, "<narity-error>"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"put", &module_info_gooSioSport, "put"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"and", &module_info_gooSmacros, "and"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<syntax-error>", &module_info_gooSconditions, "<syntax-error>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"~==", &module_info_gooSmath, "~=="},
  {"close", &module_info_gooSioSport, "close"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"1-", &module_info_gooSmath, "1-"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"msg-to-str", &module_info_gooSconditions, "msg-to-str"},
  {"set", &module_info_gooSboot, "set"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"if", &module_info_gooSboot, "if"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<assert-error>", &module_info_gooSconditions, "<assert-error>"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"default-handler", &module_info_gooSconditions, "default-handler"},
  {"spawn", &module_info_timeSthreads, "spawn"},
  {"call-error-function", &module_info_gooSconditions, "call-error-function"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"|", &module_info_gooSmath, "|"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"<keyboard-interrupt>", &module_info_gooSconditions, "<keyboard-interrupt>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<ambiguous-method-error>", &module_info_gooSconditions, "<ambiguous-method-error>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<macro-error>", &module_info_gooSconditions, "<macro-error>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"t<", &module_info_gooStypes, "t<"},
  {"ct", &module_info_gooSboot, "ct"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"mif", &module_info_gooSboot, "mif"},
  {"==", &module_info_gooSmacros, "=="},
  {"sleep", &module_info_timeSthreads, "sleep"},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<io-error>", &module_info_gooSconditions, "<io-error>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"macro-error-arguments", &module_info_gooSconditions, "macro-error-arguments"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"-", &module_info_gooSmath, "-"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"case", &module_info_gooSmacros, "case"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"let", &module_info_gooSboot, "let"},
  {"property-error-generic", &module_info_gooSconditions, "property-error-generic"},
  {"out", &module_info_gooSioSport, "out"},
  {"any?", &module_info_gooStypes, "any?"},
  {"always", &module_info_gooSruntime, "always"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"abs", &module_info_gooSmath, "abs"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"thread-function", &module_info_timeSthreads, "thread-function"},
  {"t=", &module_info_gooStypes, "t="},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"items", &module_info_gooScolsScol, "items"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"max", &module_info_gooSmag, "max"},
  {"round/", &module_info_gooSmath, "round/"},
  {"file-opening-error-filename", &module_info_gooSconditions, "file-opening-error-filename"},
  {"~=", &module_info_gooSmath, "~="},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<range-error>", &module_info_gooSconditions, "<range-error>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"test-thread-1", &module_info_timeSthreads, "test-thread-1"},
  {"find", &module_info_gooScolsScol, "find"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"lock-lock", &module_info_timeSlock, "lock-lock"},
  {"thread-current", &module_info_timeSthreads, "thread-current"},
  {"msg", &module_info_gooSconditions, "msg"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"t+", &module_info_gooStypes, "t+"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"open", &module_info_gooSioSport, "open"},
  {"when", &module_info_gooSmacros, "when"},
  {"<file-opening-error>", &module_info_gooSconditions, "<file-opening-error>"},
  {"condition-message", &module_info_gooSconditions, "condition-message"},
  {"<as-error>", &module_info_gooSconditions, "<as-error>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"<handler-info>", &module_info_gooSconditions, "<handler-info>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"<property-not-found-error>", &module_info_gooSconditions, "<property-not-found-error>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"div", &module_info_gooSmath, "div"},
  {"rep", &module_info_gooSboot, "rep"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"thread-yield", &module_info_timeSthreads, "thread-yield"},
  {"min", &module_info_gooSmag, "min"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"pow", &module_info_gooSmath, "pow"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"<return-type-error>", &module_info_gooSconditions, "<return-type-error>"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"~", &module_info_gooSmath, "~"},
  {"@len", &module_info_gooSboot, "@len"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"range-error-collection", &module_info_gooSconditions, "range-error-collection"},
  {"sin", &module_info_gooSmath, "sin"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<serious-condition>", &module_info_gooSconditions, "<serious-condition>"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"use", &module_info_gooSboot, "use"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"macro-error-name", &module_info_gooSconditions, "macro-error-name"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"@+", &module_info_gooSboot, "@+"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"<type-error>", &module_info_gooSconditions, "<type-error>"},
  {"read", &module_info_gooSconditions, "read"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"neg", &module_info_gooSmath, "neg"},
  {"app", &module_info_gooSmacros, "app"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<property-unbound-error>", &module_info_gooSconditions, "<property-unbound-error>"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"call-error-arguments", &module_info_gooSconditions, "call-error-arguments"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"thread-priority", &module_info_timeSthreads, "thread-priority"},
  {">=", &module_info_gooSmag, ">="},
  {"pack", &module_info_gooSpacker, "pack"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"$e", &module_info_gooSmath, "$e"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%met", &module_info_gooSboot, "%met"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"dl", &module_info_gooSboot, "dl"},
  {"with-lock", &module_info_timeSlock, "with-lock"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"thread-name", &module_info_timeSthreads, "thread-name"},
  {"dss", &module_info_gooSboot, "dss"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<argument-type-error>", &module_info_gooSconditions, "<argument-type-error>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"%time", &module_info_gooSboot, "%time"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"test-thread-2", &module_info_timeSthreads, "test-thread-2"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"type-error-value", &module_info_gooSconditions, "type-error-value"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"condition-arguments", &module_info_gooSconditions, "condition-arguments"},
  {"nul", &module_info_gooSboot, "nul"},
  {"seq", &module_info_gooSboot, "seq"},
  {"do", &module_info_gooSmacros, "do"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"for", &module_info_gooSmacros, "for"},
  {"<thread>", &module_info_timeSthreads, "<thread>"},
  {"<internal-error>", &module_info_gooSconditions, "<internal-error>"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<stack-overflow>", &module_info_gooSconditions, "<stack-overflow>"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"handler-matches?", &module_info_gooSconditions, "handler-matches?"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {">", &module_info_gooSmag, ">"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"<arity-error>", &module_info_gooSconditions, "<arity-error>"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"range-error-key", &module_info_gooSconditions, "range-error-key"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"error", &module_info_gooSboot, "error"},
  {">>", &module_info_gooSmath, ">>"},
  {"+", &module_info_gooSmath, "+"},
  {"asin", &module_info_gooSmath, "asin"},
  {"<condition>", &module_info_gooSconditions, "<condition>"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<restart>", &module_info_gooSconditions, "<restart>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"<arithmetic-error>", &module_info_gooSconditions, "<arithmetic-error>"},
  {"<", &module_info_gooSmag, "<"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%im", &module_info_gooSboot, "%im"},
  {"while", &module_info_gooSmacros, "while"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"df", &module_info_gooSboot, "df"},
  {"$default-handler-info", &module_info_gooSconditions, "$default-handler-info"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"<unknown-function-error>", &module_info_gooSconditions, "<unknown-function-error>"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, "<no-applicable-methods-error>"},
  {"=", &module_info_gooSmath, "="},
  {"get", &module_info_gooSioSport, "get"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"last", &module_info_gooSmacros, "last"},
  {"dg", &module_info_gooSboot, "dg"},
  {"lock-destroy", &module_info_timeSlock, "lock-destroy"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"&", &module_info_gooSmath, "&"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"@<", &module_info_gooSboot, "@<"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<property-type-error>", &module_info_gooSconditions, "<property-type-error>"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"try", &module_info_gooSboot, "try"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"dc", &module_info_gooSboot, "dc"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"sub*", &module_info_gooScolsSseq, "sub*"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"round", &module_info_gooSmath, "round"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"log", &module_info_gooSmath, "log"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"<error>", &module_info_gooSconditions, "<error>"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"<lock>", &module_info_timeSlock, "<lock>"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"esc", &module_info_gooSboot, "esc"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"/", &module_info_gooSmath, "/"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<handler>", &module_info_gooSconditions, "<handler>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"event-name-setter", CVAR, &YtimeSeventYevent_name_setter},
  {"event-reset", CVAR, &YtimeSeventYevent_reset},
  {"event-wait-timed", CVAR, &YtimeSeventYevent_wait_timed},
  {"event-signal", CVAR, &YtimeSeventYevent_signal},
  {"%event-reset", PVAR, NULL},
  {"%event-create", PVAR, NULL},
  {"%event-wait", PVAR, NULL},
  {"%event-broadcast", PVAR, NULL},
  {"%event-signal", PVAR, NULL},
  {"<event>", CVAR, &YtimeSeventYLeventG},
  {"event-wait", CVAR, &YtimeSeventYevent_wait},
  {"event-handle-setter", CVAR, &YtimeSeventYevent_handle_setter},
  {"event-broadcast", CVAR, &YtimeSeventYevent_broadcast},
  {"%event-destroy", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"event-name", CVAR, &YtimeSeventYevent_name},
  {"event-handle", CVAR, &YtimeSeventYevent_handle},
  {"%event-wait-timed", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"event-reset", "event-reset"},
  {"event-wait-timed", "event-wait-timed"},
  {"event-signal", "event-signal"},
  {"<event>", "<event>"},
  {"event-wait", "event-wait"},
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
