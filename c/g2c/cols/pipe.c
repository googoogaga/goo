/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: cols/pipe */

EXT(YisaQ,"goo/boot","isa?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
DEF(YcolsSpipeYpipe_available_setter,"cols/pipe","pipe-available-setter");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yerror,"goo/boot","error");
DEF(YcolsSpipeYpipe_data,"cols/pipe","pipe-data");
EXT(YgooSioSportYout,"goo/io/port","out");
DEF(YcolsSpipeYdequeueX,"cols/pipe","dequeue!");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Ytail,"goo/boot","tail");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YcolsSpipeYpipe_lock,"cols/pipe","pipe-lock");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YtimeSeventYevent_name,"time/event","event-name");
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
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YcolsSpipeYenqueueX,"cols/pipe","enqueue!");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YLcolG,"goo/boot","<col>");
DEF(YcolsSpipeYpipe_data_setter,"cols/pipe","pipe-data-setter");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
DEF(YcolsSpipeYpipe_put_idx,"cols/pipe","pipe-put-idx");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YtimeSeventYLeventG,"time/event","<event>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YcolsSpipeYpipe_available,"cols/pipe","pipe-available");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
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
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YcolsSpipeYLpipeG,"cols/pipe","<pipe>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
DEF(YcolsSpipeYpipe_lock_setter,"cols/pipe","pipe-lock-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(YcolsSpipeYpipe_put_idx_setter,"cols/pipe","pipe-put-idx-setter");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YcolsSpipeYpipe_idx,"cols/pipe","pipe-idx");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYE,"goo/math","=");
DEF(YcolsSpipeYOlen,"cols/pipe","@len");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
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
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
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
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YcolsSpipeYgrow_pipeX,"cols/pipe","grow-pipe!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYnegQ,"goo/math","neg?");
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
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ynew,"goo/boot","new");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YcolsSpipeYpipe_get_idx_setter,"cols/pipe","pipe-get-idx-setter");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmathYT,"goo/math","*");
DEF(YcolsSpipeYpipe_get_idx,"cols/pipe","pipe-get-idx");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_3);
DEFLIT(lit_21);
DEFLIT(lit_31);
DEFLIT(lit_22);
DEFLIT(lit_32);
DEFLIT(lit_8);
DEFLIT(lit_14);
DEFLIT(lit_13);
DEFLIT(lit_7);
DEFLIT(lit_29);
DEFLIT(lit_23);
DEFLIT(lit_16);
DEFLIT(lit_1);
DEFLIT(lit_5);
DEFLIT(lit_2);
DEFLIT(lit_19);
DEFLIT(lit_24);
DEFLIT(lit_26);
DEFLIT(lit_17);
DEFLIT(lit_4);
DEFLIT(lit_10);
DEFLIT(lit_9);
DEFLIT(lit_25);
DEFLIT(lit_0);
DEFLIT(lit_12);
DEFLIT(lit_30);
DEFLIT(lit_11);
DEFLIT(lit_27);
DEFLIT(lit_6);
DEFLIT(lit_28);
DEFLIT(lit_15);
DEFLIT(lit_18);
DEFLIT(lit_20);

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
LOCFOR(fun_loop_17);
LOCFOR(fun_grow_pipeX_18);
LOCFOR(fun_19);
LOCFOR(fun_20);
LOCFOR(fun_addX_21);
LOCFOR(fun_enqueueX_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_dequeueX_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_zapX_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
FUNFOR(YcolsSpipeYpipe_idx);
LOCFOR(fun_low_elt_32);
LOCFOR(fun_low_elt_setter_33);
LOCFOR(fun_elt_or_34);
extern P YcolsSpipeY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_pipe_data_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcolsSpipeYpipe_data));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_data_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcolsSpipeYpipe_data));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_get_idx_2) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcolsSpipeYpipe_get_idx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_get_idx_setter_3) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcolsSpipeYpipe_get_idx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_pipe_put_idx_5) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcolsSpipeYpipe_put_idx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_put_idx_setter_6) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcolsSpipeYpipe_put_idx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_pipe_lock_8) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcolsSpipeYpipe_lock));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_lock_setter_9) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcolsSpipeYpipe_lock));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_available_10) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcolsSpipeYpipe_available));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pipe_available_setter_11) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcolsSpipeYpipe_available));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fab_12) {
  P c_,s_;
  P datF2627;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),s_);
  T1 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T2,YPfalse);
  datF2627 = T1;
  T4 = CALL1(1,VARREF(Ynew),VARREF(YtimeSlockYLlockG));
  T5 = CALL1(1,VARREF(Ynew),VARREF(YtimeSeventYLeventG));
  T3 = CALLN(1,VARREF(Ynew),7,VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_data),datF2627,VARREF(YcolsSpipeYpipe_lock),T4,VARREF(YcolsSpipeYpipe_available),T5);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YcolsSpipeYOlen) {
  P c_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
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
loop:
  CALL1(1,VARREF(YtimeSlockYlock_lock),FREEREF(0));
  T0 = CALL1(1,VARREF(YcolsSpipeYOlen),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YtimeSlockYlock_unlock),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_16) {
  P c_;
  P x_1744F2628;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),c_);
  x_1744F2628 = T1;
  T3 = FUNFAB(fun_14,2,x_1744F2628,c_);
  T4 = FUNFAB(fun_15,1,x_1744F2628);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_17) {
  P i_,j_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(j_, 1);
loop:
  T3 = CALL1(1,VARREF(YcolsSpipeYpipe_put_idx),FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmathYE),i_,T3);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),FREEREF(1),i_);
    CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),T4,FREEREF(2),j_);
    T7 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T6 = CALL2(1,VARREF(YgooSmathYmod),T7,FREEREF(3));
    T8 = CALL2(1,VARREF(YgooSmathYA),j_,YPint((P)1));
    a1 = T6;
    a2 = T8;
    i_ = a1;
    j_ = a2;
    goto loop;
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_grow_pipeX_18) {
  P c_;
  P loopF2632;
  P ndatF2631;
  P olenF2630;
  P odatF2629;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_data),c_);
  odatF2629 = T1;
  T3 = CALL1(1,VARREF(YgooScolsSrepYrep_len),odatF2629);
  olenF2630 = T3;
  T9 = CALL1(1,VARREF(YgooScolsSrepYrep_len),odatF2629);
  T8 = CALL2(1,VARREF(YgooSmathYA),T9,YPint((P)1));
  T7 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),T8);
  T6 = CALL2(1,VARREF(YgooSmagYmax),YPint((P)2),T7);
  T5 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T6,YPfalse);
  ndatF2631 = T5;
  T10 = FUNSHELL(1,fun_loop_17,5);
  loopF2632 = T10;
  FUNINIT(loopF2632, 5,c_,odatF2629,ndatF2631,olenF2630,loopF2632);
  T12 = CALL1(1,VARREF(YcolsSpipeYpipe_get_idx),c_);
  T11 = CALL2(0,loopF2632,T12,YPint((P)0));
  CALL2(1,VARREF(YcolsSpipeYpipe_data_setter),ndatF2631,c_);
  T13 = CALL1(1,VARREF(YcolsSpipeYOlen),c_);
  CALL2(1,VARREF(YcolsSpipeYpipe_put_idx_setter),T13,c_);
  T14 = CALL2(1,VARREF(YcolsSpipeYpipe_get_idx_setter),YPint((P)0),c_);
  T4 = T14;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  P UF2635;
  P x_1746F2634;
  P lenF2633;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
loop:
  CALL1(1,VARREF(YtimeSlockYlock_lock),FREEREF(0));
  T1 = CALL1(1,VARREF(YcolsSpipeYOlen),FREEREF(1));
  lenF2633 = T1;
  T3 = CALL2(1,VARREF(YgooSmathYA),lenF2633,YPint((P)1));
  T5 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T4 = CALL1(1,VARREF(YgooScolsSrepYrep_len),T5);
  T2 = CALL2(1,VARREF(YgooSmagYGE),T3,T4);
  if (T2 != YPfalse) {
    T6 = CALL1(1,VARREF(YcolsSpipeYgrow_pipeX),FREEREF(1));
  } else {
  }
  T7 = CALL2(1,VARREF(YgooSmathYE),lenF2633,YPint((P)0));
  if (T7 != YPfalse) {
    T9 = CALL1(1,VARREF(YcolsSpipeYpipe_available),FREEREF(1));
    T10 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),FREEREF(1));
    T8 = CALL2(1,VARREF(YtimeSeventYevent_signal),T9,T10);
  } else {
  }
  T11 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T12 = CALL1(1,VARREF(YcolsSpipeYpipe_put_idx),FREEREF(1));
  CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),FREEREF(2),T11,T12);
  x_1746F2634 = FREEREF(1);
  T14 = CALL1(1,VARREF(YcolsSpipeYpipe_put_idx),x_1746F2634);
  UF2635 = T14;
  T18 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T17 = CALL1(1,VARREF(YgooScolsSrepYrep_len),T18);
  T16 = CALL3(1,VARREF(YgooSmathYmodA),UF2635,YPint((P)1),T17);
  T15 = CALL2(1,VARREF(YcolsSpipeYpipe_put_idx_setter),T16,x_1746F2634);
  T13 = T15;
  T0 = FREEREF(1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YtimeSlockYlock_unlock),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_addX_21) {
  P c_,x_;
  P x_1745F2636;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),c_);
  x_1745F2636 = T1;
  T3 = FUNFAB(fun_19,3,x_1745F2636,c_,x_);
  T4 = FUNFAB(fun_20,1,x_1745F2636);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_enqueueX_22) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolxYaddX),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_23) {
  P UF2639;
  P x_1748F2638;
  P resF2637;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
loop:
  CALL1(1,VARREF(YtimeSlockYlock_lock),FREEREF(0));
  T1 = CALL1(1,VARREF(YcolsSpipeYOlen),FREEREF(1));
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)0));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YcolsSpipeYpipe_available),FREEREF(1));
    T4 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),FREEREF(1));
    T2 = CALL2(1,VARREF(YtimeSeventYevent_wait),T3,T4);
  } else {
  }
  T7 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T8 = CALL1(1,VARREF(YcolsSpipeYpipe_get_idx),FREEREF(1));
  T6 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T7,T8);
  resF2637 = T6;
  x_1748F2638 = FREEREF(1);
  T10 = CALL1(1,VARREF(YcolsSpipeYpipe_get_idx),x_1748F2638);
  UF2639 = T10;
  T14 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T13 = CALL1(1,VARREF(YgooScolsSrepYrep_len),T14);
  T12 = CALL3(1,VARREF(YgooSmathYmodA),UF2639,YPint((P)1),T13);
  T11 = CALL2(1,VARREF(YcolsSpipeYpipe_get_idx_setter),T12,x_1748F2638);
  T9 = T11;
  T5 = resF2637;
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_24) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YtimeSlockYlock_unlock),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_dequeueX_25) {
  P c_;
  P x_1747F2640;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),c_);
  x_1747F2640 = T1;
  T3 = FUNFAB(fun_23,2,x_1747F2640,c_);
  T4 = FUNFAB(fun_24,1,x_1747F2640);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
LINK_STACK();
loop:
  CALL1(1,VARREF(YtimeSlockYlock_lock),FREEREF(0));
  CALL2(1,VARREF(YcolsSpipeYpipe_get_idx_setter),YPint((P)0),FREEREF(1));
  CALL2(1,VARREF(YcolsSpipeYpipe_put_idx_setter),YPint((P)0),FREEREF(1));
UNLINK_STACK();
  QRET(FREEREF(1));
}

FUNCODEDEF(fun_27) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YtimeSlockYlock_unlock),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zapX_28) {
  P c_;
  P x_1749F2641;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),c_);
  x_1749F2641 = T1;
  T3 = FUNFAB(fun_26,2,x_1749F2641,c_);
  T4 = FUNFAB(fun_27,1,x_1749F2641);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_29) {
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  CALL1(1,VARREF(YtimeSlockYlock_lock),FREEREF(0));
  T2 = CALL1(1,VARREF(YcolsSpipeYpipe_get_idx),FREEREF(2));
  T1 = CALL2(1,VARREF(YgooSmathYA),FREEREF(1),T2);
  T4 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(2));
  T3 = CALL1(1,VARREF(YgooScolsSrepYrep_len),T4);
  T0 = CALL2(1,VARREF(YgooSmathYmod),T1,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_30) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YtimeSlockYlock_unlock),FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcolsSpipeYpipe_idx) {
  P x_,i_;
  P x_1750F2642;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),x_);
  x_1750F2642 = T1;
  T3 = FUNFAB(fun_29,3,x_1750F2642,i_,x_);
  T4 = FUNFAB(fun_30,1,x_1750F2642);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_32) {
  P x_,i_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_data),x_);
  T2 = CALL2(1,VARREF(YcolsSpipeYpipe_idx),x_,i_);
  T0 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_setter_33) {
  P z_,x_,i_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_data),x_);
  T2 = CALL2(1,VARREF(YcolsSpipeYpipe_idx),x_,i_);
  T0 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),z_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_or_34) {
  P c_,i_,default_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(c_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
loop:
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
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<pipe>");
  T2 = (P)YPpair(VARREF(YLseqXG),Ynil);
  T1 = (P)YPpair(VARREF(YLflatG),T2);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YcolsSpipeYLpipeG,T0);
  lit_1 = YPPsym((P)"pipe-data");
  lit_2 = YPPsym((P)"_x");
  T3 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pipe_data_0 = YPmet(FUNCODEREF(fun_pipe_data_0),LITREF(lit_1),T3,ENVNUL,PNUL,YPfalse);
  T6 = BOUNDP(YcolsSpipeYpipe_data);
  if (T6 != YPfalse) {
    T5 = VARREF(YcolsSpipeYpipe_data);
  } else {
    T5 = YPfalse;
  }
  T7 = fun_pipe_data_0;
  T4 = XCALL2(1,VARREF(YPdefine_method),T5,T7);
  VARSET(YcolsSpipeYpipe_data,T4);
  lit_3 = YPPsym((P)"pipe-data-setter");
  lit_4 = YPPsym((P)"_z");
  T8 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLrepG),VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pipe_data_setter_1 = YPmet(FUNCODEREF(fun_pipe_data_setter_1),LITREF(lit_3),T8,ENVNUL,PNUL,YPfalse);
  T11 = BOUNDP(YcolsSpipeYpipe_data_setter);
  if (T11 != YPfalse) {
    T10 = VARREF(YcolsSpipeYpipe_data_setter);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_pipe_data_setter_1;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YcolsSpipeYpipe_data_setter,T9);
  XCALL5(1,VARREF(YPprop),VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_data),VARREF(YcolsSpipeYpipe_data_setter),VARREF(YLrepG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"pipe-get-idx");
  T13 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pipe_get_idx_2 = YPmet(FUNCODEREF(fun_pipe_get_idx_2),LITREF(lit_5),T13,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YcolsSpipeYpipe_get_idx);
  if (T16 != YPfalse) {
    T15 = VARREF(YcolsSpipeYpipe_get_idx);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_pipe_get_idx_2;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YcolsSpipeYpipe_get_idx,T14);
  lit_6 = YPPsym((P)"pipe-get-idx-setter");
  T18 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLintG),VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pipe_get_idx_setter_3 = YPmet(FUNCODEREF(fun_pipe_get_idx_setter_3),LITREF(lit_6),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YcolsSpipeYpipe_get_idx_setter);
  if (T21 != YPfalse) {
    T20 = VARREF(YcolsSpipeYpipe_get_idx_setter);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_pipe_get_idx_setter_3;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YcolsSpipeYpipe_get_idx_setter,T19);
  T23 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T24 = fun_4;
  XCALL5(1,VARREF(YPprop),VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_get_idx),VARREF(YcolsSpipeYpipe_get_idx_setter),VARREF(YLintG),T24);
  lit_7 = YPPsym((P)"pipe-put-idx");
  T25 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pipe_put_idx_5 = YPmet(FUNCODEREF(fun_pipe_put_idx_5),LITREF(lit_7),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YcolsSpipeYpipe_put_idx);
  if (T28 != YPfalse) {
    T27 = VARREF(YcolsSpipeYpipe_put_idx);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_pipe_put_idx_5;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YcolsSpipeYpipe_put_idx,T26);
  lit_8 = YPPsym((P)"pipe-put-idx-setter");
  T30 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLintG),VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pipe_put_idx_setter_6 = YPmet(FUNCODEREF(fun_pipe_put_idx_setter_6),LITREF(lit_8),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YcolsSpipeYpipe_put_idx_setter);
  if (T33 != YPfalse) {
    T32 = VARREF(YcolsSpipeYpipe_put_idx_setter);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_pipe_put_idx_setter_6;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YcolsSpipeYpipe_put_idx_setter,T31);
  T35 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T36 = fun_7;
  XCALL5(1,VARREF(YPprop),VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_put_idx),VARREF(YcolsSpipeYpipe_put_idx_setter),VARREF(YLintG),T36);
  lit_9 = YPPsym((P)"pipe-lock");
  T37 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pipe_lock_8 = YPmet(FUNCODEREF(fun_pipe_lock_8),LITREF(lit_9),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YcolsSpipeYpipe_lock);
  if (T40 != YPfalse) {
    T39 = VARREF(YcolsSpipeYpipe_lock);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_pipe_lock_8;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YcolsSpipeYpipe_lock,T38);
  lit_10 = YPPsym((P)"pipe-lock-setter");
  T42 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YtimeSlockYLlockG),VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pipe_lock_setter_9 = YPmet(FUNCODEREF(fun_pipe_lock_setter_9),LITREF(lit_10),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(YcolsSpipeYpipe_lock_setter);
  if (T45 != YPfalse) {
    T44 = VARREF(YcolsSpipeYpipe_lock_setter);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_pipe_lock_setter_9;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YcolsSpipeYpipe_lock_setter,T43);
  XCALL5(1,VARREF(YPprop),VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_lock),VARREF(YcolsSpipeYpipe_lock_setter),VARREF(YtimeSlockYLlockG),VARREF(YPprop_unbound_error));
  lit_11 = YPPsym((P)"pipe-available");
  T47 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_pipe_available_10 = YPmet(FUNCODEREF(fun_pipe_available_10),LITREF(lit_11),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YcolsSpipeYpipe_available);
  if (T50 != YPfalse) {
    T49 = VARREF(YcolsSpipeYpipe_available);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_pipe_available_10;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YcolsSpipeYpipe_available,T48);
  lit_12 = YPPsym((P)"pipe-available-setter");
  T52 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YtimeSeventYLeventG),VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pipe_available_setter_11 = YPmet(FUNCODEREF(fun_pipe_available_setter_11),LITREF(lit_12),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YcolsSpipeYpipe_available_setter);
  if (T55 != YPfalse) {
    T54 = VARREF(YcolsSpipeYpipe_available_setter);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_pipe_available_setter_11;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YcolsSpipeYpipe_available_setter,T53);
  XCALL5(1,VARREF(YPprop),VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_available),VARREF(YcolsSpipeYpipe_available_setter),VARREF(YtimeSeventYLeventG),VARREF(YPprop_unbound_error));
  lit_13 = YPPsym((P)"fab");
  lit_14 = YPPsym((P)"c");
  lit_15 = YPPsym((P)"s");
  T58 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YcolsSpipeYLpipeG));
  T57 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_15)),YPPlist(2,T58,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YcolsSpipeYLpipeG),Ynil);
  fun_fab_12 = YPmet(FUNCODEREF(fun_fab_12),LITREF(lit_13),T57,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YgooScolsScolYfab);
  if (T61 != YPfalse) {
    T60 = VARREF(YgooScolsScolYfab);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_fab_12;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YgooScolsScolYfab,T59);
  lit_16 = YPPsym((P)"@len");
  T63 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YcolsSpipeYOlen = YPmet(FUNCODEREF(YcolsSpipeYOlen),LITREF(lit_16),T63,ENVNUL,PNUL,YPfalse);
  T64 = YcolsSpipeYOlen;
  VARSET(YcolsSpipeYOlen,T64);
  lit_17 = YPPsym((P)"len");
  T67 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_16 = YPmet(FUNCODEREF(fun_len_16),LITREF(lit_17),T65,ENVNUL,PNUL,YPfalse);
  T70 = BOUNDP(YgooStypesYlen);
  if (T70 != YPfalse) {
    T69 = VARREF(YgooStypesYlen);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_len_16;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YgooStypesYlen,T68);
  lit_18 = YPPsym((P)"grow-pipe!");
  lit_19 = YPPsym((P)"loop");
  lit_20 = YPPsym((P)"i");
  lit_21 = YPPsym((P)"j");
  T73 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_21)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_17 = YPmet(FUNCODEREF(fun_loop_17),LITREF(lit_19),T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_grow_pipeX_18 = YPmet(FUNCODEREF(fun_grow_pipeX_18),LITREF(lit_18),T72,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YcolsSpipeYgrow_pipeX);
  if (T76 != YPfalse) {
    T75 = VARREF(YcolsSpipeYgrow_pipeX);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_grow_pipeX_18;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YcolsSpipeYgrow_pipeX,T74);
  lit_22 = YPPsym((P)"add!");
  lit_23 = YPPsym((P)"x");
  T80 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_23)),YPPlist(2,VARREF(YcolsSpipeYLpipeG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YcolsSpipeYLpipeG),Ynil);
  fun_addX_21 = YPmet(FUNCODEREF(fun_addX_21),LITREF(lit_22),T78,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YgooScolsScolxYaddX);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooScolsScolxYaddX);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_addX_21;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooScolsScolxYaddX,T81);
  lit_24 = YPPsym((P)"enqueue!");
  T85 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_23)),YPPlist(2,VARREF(YcolsSpipeYLpipeG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YcolsSpipeYLpipeG),Ynil);
  fun_enqueueX_22 = YPmet(FUNCODEREF(fun_enqueueX_22),LITREF(lit_24),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YcolsSpipeYenqueueX);
  if (T88 != YPfalse) {
    T87 = VARREF(YcolsSpipeYenqueueX);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_enqueueX_22;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YcolsSpipeYenqueueX,T86);
  lit_25 = YPPsym((P)"dequeue!");
  T92 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dequeueX_25 = YPmet(FUNCODEREF(fun_dequeueX_25),LITREF(lit_25),T90,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YcolsSpipeYdequeueX);
  if (T95 != YPfalse) {
    T94 = VARREF(YcolsSpipeYdequeueX);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_dequeueX_25;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YcolsSpipeYdequeueX,T93);
  lit_26 = YPPsym((P)"zap!");
  T99 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YcolsSpipeYLpipeG),Ynil);
  fun_zapX_28 = YPmet(FUNCODEREF(fun_zapX_28),LITREF(lit_26),T97,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YgooScolsScolxYzapX);
  if (T102 != YPfalse) {
    T101 = VARREF(YgooScolsScolxYzapX);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_zapX_28;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YgooScolsScolxYzapX,T100);
  lit_27 = YPPsym((P)"pipe-idx");
  T106 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_20)),YPPlist(2,VARREF(YcolsSpipeYLpipeG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  YcolsSpipeYpipe_idx = YPmet(FUNCODEREF(YcolsSpipeYpipe_idx),LITREF(lit_27),T104,ENVNUL,PNUL,YPfalse);
  T107 = YcolsSpipeYpipe_idx;
  VARSET(YcolsSpipeYpipe_idx,T107);
  lit_28 = YPPsym((P)"low-elt");
  T108 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_20)),YPPlist(2,VARREF(YcolsSpipeYLpipeG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_32 = YPmet(FUNCODEREF(fun_low_elt_32),LITREF(lit_28),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YgooScolsScolYlow_elt);
  if (T111 != YPfalse) {
    T110 = VARREF(YgooScolsScolYlow_elt);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_low_elt_32;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YgooScolsScolYlow_elt,T109);
  lit_29 = YPPsym((P)"low-elt-setter");
  lit_30 = YPPsym((P)"z");
  T113 = YPsig(YPPlist(3,LITREF(lit_30),LITREF(lit_23),LITREF(lit_20)),YPPlist(3,VARREF(YLanyG),VARREF(YcolsSpipeYLpipeG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_low_elt_setter_33 = YPmet(FUNCODEREF(fun_low_elt_setter_33),LITREF(lit_29),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YgooScolsScolxYlow_elt_setter);
  if (T116 != YPfalse) {
    T115 = VARREF(YgooScolsScolxYlow_elt_setter);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_low_elt_setter_33;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YgooScolsScolxYlow_elt_setter,T114);
  lit_31 = YPPsym((P)"elt-or");
  lit_32 = YPPsym((P)"default");
  T118 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_20),LITREF(lit_32)),YPPlist(3,VARREF(YcolsSpipeYLpipeG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_34 = YPmet(FUNCODEREF(fun_elt_or_34),LITREF(lit_31),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YgooScolsScolYelt_or);
  if (T121 != YPfalse) {
    T120 = VARREF(YgooScolsScolYelt_or);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_elt_or_34;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YgooScolsScolYelt_or,T119);
  T123 = YPfalse;
  return T123;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_timeSlock;
extern MODULE_INFO module_info_timeSevent;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmag;
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
  {&module_info_gooScolsSrep},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsScol},
  {&module_info_gooSmath},
  {&module_info_timeSlock},
  {&module_info_timeSevent},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"$e", &module_info_gooSmath, "$e"},
  {"event-wait", &module_info_timeSevent, "event-wait"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"until", &module_info_gooSmacros, "until"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<<", &module_info_gooSmath, "<<"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"close", &module_info_gooSioSport, "close"},
  {"error", &module_info_gooSboot, "error"},
  {"out", &module_info_gooSioSport, "out"},
  {"lst", &module_info_gooSboot, "lst"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"event-signal", &module_info_timeSevent, "event-signal"},
  {"tup", &module_info_gooSboot, "tup"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"round/", &module_info_gooSmath, "round/"},
  {"fun", &module_info_gooSboot, "fun"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"|", &module_info_gooSmath, "|"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"lock-lock", &module_info_timeSlock, "lock-lock"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"dm", &module_info_gooSboot, "dm"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"when", &module_info_gooSmacros, "when"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"event-wait-timed", &module_info_timeSevent, "event-wait-timed"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"tail", &module_info_gooSboot, "tail"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"dv", &module_info_gooSboot, "dv"},
  {"atan", &module_info_gooSmath, "atan"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"set", &module_info_gooSboot, "set"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"col", &module_info_gooScolsScol, "col"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"event-name", &module_info_timeSevent, "event-name"},
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
  {"t*", &module_info_gooSboot, "t*"},
  {"with-lock", &module_info_timeSlock, "with-lock"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"<lock>", &module_info_timeSlock, "<lock>"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {">=", &module_info_gooSmag, ">="},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"def", &module_info_gooSboot, "def"},
  {"len", &module_info_gooStypes, "len"},
  {"if", &module_info_gooSboot, "if"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"logn", &module_info_gooSmath, "logn"},
  {"open", &module_info_gooSioSport, "open"},
  {"always", &module_info_gooSruntime, "always"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"do", &module_info_gooSmacros, "do"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"range", &module_info_gooScolsSrange, "range"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"match", &module_info_gooSmacros, "match"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"and", &module_info_gooSmacros, "and"},
  {"<=", &module_info_gooSmag, "<="},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"op", &module_info_gooSmacros, "op"},
  {"lock-state", &module_info_timeSlock, "lock-state"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"~", &module_info_gooSmath, "~"},
  {"tan", &module_info_gooSmath, "tan"},
  {"let", &module_info_gooSboot, "let"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"add", &module_info_gooScolsScol, "add"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"while", &module_info_gooSmacros, "while"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"use", &module_info_gooSboot, "use"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"event-reset", &module_info_timeSevent, "event-reset"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"find", &module_info_gooScolsScol, "find"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"into", &module_info_gooScolsScol, "into"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"read", &module_info_gooSruntime, "read"},
  {"acos", &module_info_gooSmath, "acos"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<event>", &module_info_timeSevent, "<event>"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"-", &module_info_gooSmath, "-"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"head", &module_info_gooSboot, "head"},
  {"for", &module_info_gooSmacros, "for"},
  {"+", &module_info_gooSmath, "+"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"lock-handle", &module_info_timeSlock, "lock-handle"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"map", &module_info_gooSmacros, "map"},
  {"export", &module_info_gooSboot, "export"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"try", &module_info_gooSboot, "try"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"app", &module_info_gooSmacros, "app"},
  {"1+", &module_info_gooSmath, "1+"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"items", &module_info_gooScolsScol, "items"},
  {"lock-unlock", &module_info_timeSlock, "lock-unlock"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"sin", &module_info_gooSmath, "sin"},
  {"div", &module_info_gooSmath, "div"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"loc", &module_info_gooSboot, "loc"},
  {"ds", &module_info_gooSboot, "ds"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {">>", &module_info_gooSmath, ">>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"&", &module_info_gooSmath, "&"},
  {"t?", &module_info_gooStypes, "t?"},
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
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
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
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {">", &module_info_gooSmag, ">"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"t<", &module_info_gooStypes, "t<"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"=", &module_info_gooSmath, "="},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"esc", &module_info_gooSboot, "esc"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"/", &module_info_gooSmath, "/"},
  {"asin", &module_info_gooSmath, "asin"},
  {"neg", &module_info_gooSmath, "neg"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"not", &module_info_gooSboot, "not"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"t=", &module_info_gooStypes, "t="},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"get", &module_info_gooSioSport, "get"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"log", &module_info_gooSmath, "log"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"rem", &module_info_gooSmath, "rem"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"df", &module_info_gooSboot, "df"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
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
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"or", &module_info_gooSmacros, "or"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"put", &module_info_gooSioSport, "put"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"even?", &module_info_gooSmath, "even?"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"dc", &module_info_gooSboot, "dc"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"floor", &module_info_gooSmath, "floor"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"event-broadcast", &module_info_timeSevent, "event-broadcast"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"new", &module_info_gooSboot, "new"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"max", &module_info_gooSmag, "max"},
  {"*", &module_info_gooSmath, "*"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"~=", &module_info_gooSmath, "~="},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"lock-destroy", &module_info_timeSlock, "lock-destroy"},
  {"nul", &module_info_gooSboot, "nul"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"pipe-available-setter", CVAR, &YcolsSpipeYpipe_available_setter},
  {"pipe-data", CVAR, &YcolsSpipeYpipe_data},
  {"dequeue!", CVAR, &YcolsSpipeYdequeueX},
  {"pipe-lock", CVAR, &YcolsSpipeYpipe_lock},
  {"enqueue!", CVAR, &YcolsSpipeYenqueueX},
  {"pipe-data-setter", CVAR, &YcolsSpipeYpipe_data_setter},
  {"pipe-put-idx", CVAR, &YcolsSpipeYpipe_put_idx},
  {"pipe-available", CVAR, &YcolsSpipeYpipe_available},
  {"---main-0---", PVAR, NULL},
  {"<pipe>", CVAR, &YcolsSpipeYLpipeG},
  {"pipe-lock-setter", CVAR, &YcolsSpipeYpipe_lock_setter},
  {"pipe-put-idx-setter", CVAR, &YcolsSpipeYpipe_put_idx_setter},
  {"pipe-idx", CVAR, &YcolsSpipeYpipe_idx},
  {"@len", CVAR, &YcolsSpipeYOlen},
  {"grow-pipe!", CVAR, &YcolsSpipeYgrow_pipeX},
  {"pipe-get-idx-setter", CVAR, &YcolsSpipeYpipe_get_idx_setter},
  {"pipe-get-idx", CVAR, &YcolsSpipeYpipe_get_idx},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"dequeue!", "dequeue!"},
  {"enqueue!", "enqueue!"},
  {"<pipe>", "<pipe>"},
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
