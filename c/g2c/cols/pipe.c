/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: cols/pipe */

EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
DEF(YcolsSpipeYOlen,"cols/pipe","@len");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YtimeSeventYevent_name,"time/event","event-name");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmathYneg,"goo/math","neg");
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
DEF(YcolsSpipeYpipe_idx,"cols/pipe","pipe-idx");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YcolsSpipeYpipe_data_setter,"cols/pipe","pipe-data-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Ytail_setter,"goo/boot","tail-setter");
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
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
DEF(YcolsSpipeYpipe_available_setter,"cols/pipe","pipe-available-setter");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YcolsSpipeYgrow_pipeX,"cols/pipe","grow-pipe!");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLstrG,"goo/boot","<str>");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
DEF(YcolsSpipeYpipe_lock_setter,"cols/pipe","pipe-lock-setter");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YcolsSpipeYpipe_get_idx_setter,"cols/pipe","pipe-get-idx-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYK,"goo/math","|");
DEF(YcolsSpipeYpipe_put_idx_setter,"cols/pipe","pipe-put-idx-setter");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
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
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(YcolsSpipeYpipe_data,"cols/pipe","pipe-data");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YtimeSeventYLeventG,"time/event","<event>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
DEF(YcolsSpipeYpipe_available,"cols/pipe","pipe-available");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(YcolsSpipeYdeqX,"cols/pipe","deq!");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
DEF(YcolsSpipeYpipe_lock,"cols/pipe","pipe-lock");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(YcolsSpipeYpipe_get_idx,"cols/pipe","pipe-get-idx");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YcolsSpipeYpipe_put_idx,"cols/pipe","pipe-put-idx");
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
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
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
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YLnumG,"goo/boot","<num>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YcolsSpipeYenqX,"cols/pipe","enq!");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yprop_init,"goo/boot","prop-init");
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
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathYB,"goo/math","&");
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
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YcolsSpipeYLpipeG,"cols/pipe","<pipe>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
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
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
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
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYlen,"goo/types","len");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_16);
DEFLIT(lit_14);
DEFLIT(lit_26);
DEFLIT(lit_17);
DEFLIT(lit_19);
DEFLIT(lit_10);
DEFLIT(lit_22);
DEFLIT(lit_1);
DEFLIT(lit_13);
DEFLIT(lit_20);
DEFLIT(lit_7);
DEFLIT(lit_27);
DEFLIT(lit_2);
DEFLIT(lit_5);
DEFLIT(lit_24);
DEFLIT(lit_31);
DEFLIT(lit_15);
DEFLIT(lit_0);
DEFLIT(lit_29);
DEFLIT(lit_30);
DEFLIT(lit_12);
DEFLIT(lit_3);
DEFLIT(lit_18);
DEFLIT(lit_28);
DEFLIT(lit_8);
DEFLIT(lit_9);
DEFLIT(lit_25);
DEFLIT(lit_6);
DEFLIT(lit_21);
DEFLIT(lit_4);
DEFLIT(lit_23);
DEFLIT(lit_11);
DEFLIT(lit_32);

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
LOCFOR(fun_enqX_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_deqX_25);
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
  P datF3467;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),s_);
  T1 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T2,YPfalse);
  datF3467 = T1;
  T4 = CALL1(1,VARREF(Ynew),VARREF(YtimeSlockYLlockG));
  T5 = CALL1(1,VARREF(Ynew),VARREF(YtimeSeventYLeventG));
  T3 = CALLN(1,VARREF(Ynew),7,VARREF(YcolsSpipeYLpipeG),VARREF(YcolsSpipeYpipe_data),datF3467,VARREF(YcolsSpipeYpipe_lock),T4,VARREF(YcolsSpipeYpipe_available),T5);
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
  P x_1769F3468;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),c_);
  x_1769F3468 = T1;
  T3 = FUNFAB(fun_14,2,x_1769F3468,c_);
  T4 = FUNFAB(fun_15,1,x_1769F3468);
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
  P loopF3472;
  P ndatF3471;
  P olenF3470;
  P odatF3469;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_data),c_);
  odatF3469 = T1;
  T3 = CALL1(1,VARREF(YgooScolsSrepYrep_len),odatF3469);
  olenF3470 = T3;
  T9 = CALL1(1,VARREF(YgooScolsSrepYrep_len),odatF3469);
  T8 = CALL2(1,VARREF(YgooSmathYA),T9,YPint((P)1));
  T7 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),T8);
  T6 = CALL2(1,VARREF(YgooSmagYmax),YPint((P)2),T7);
  T5 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T6,YPfalse);
  ndatF3471 = T5;
  T10 = FUNSHELL(1,fun_loop_17,5);
  loopF3472 = T10;
  FUNINIT(loopF3472, 5,c_,odatF3469,ndatF3471,olenF3470,loopF3472);
  T12 = CALL1(1,VARREF(YcolsSpipeYpipe_get_idx),c_);
  T11 = CALL2(0,loopF3472,T12,YPint((P)0));
  CALL2(1,VARREF(YcolsSpipeYpipe_data_setter),ndatF3471,c_);
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
  P UF3475;
  P x_1771F3474;
  P lenF3473;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
loop:
  CALL1(1,VARREF(YtimeSlockYlock_lock),FREEREF(0));
  T1 = CALL1(1,VARREF(YcolsSpipeYOlen),FREEREF(1));
  lenF3473 = T1;
  T3 = CALL2(1,VARREF(YgooSmathYA),lenF3473,YPint((P)1));
  T5 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T4 = CALL1(1,VARREF(YgooScolsSrepYrep_len),T5);
  T2 = CALL2(1,VARREF(YgooSmagYGE),T3,T4);
  if (T2 != YPfalse) {
    T6 = CALL1(1,VARREF(YcolsSpipeYgrow_pipeX),FREEREF(1));
  } else {
  }
  T7 = CALL2(1,VARREF(YgooSmathYE),lenF3473,YPint((P)0));
  if (T7 != YPfalse) {
    T9 = CALL1(1,VARREF(YcolsSpipeYpipe_available),FREEREF(1));
    T10 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),FREEREF(1));
    T8 = CALL2(1,VARREF(YtimeSeventYevent_signal),T9,T10);
  } else {
  }
  T11 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T12 = CALL1(1,VARREF(YcolsSpipeYpipe_put_idx),FREEREF(1));
  CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),FREEREF(2),T11,T12);
  x_1771F3474 = FREEREF(1);
  T14 = CALL1(1,VARREF(YcolsSpipeYpipe_put_idx),x_1771F3474);
  UF3475 = T14;
  T18 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T17 = CALL1(1,VARREF(YgooScolsSrepYrep_len),T18);
  T16 = CALL3(1,VARREF(YgooSmathYmodA),UF3475,YPint((P)1),T17);
  T15 = CALL2(1,VARREF(YcolsSpipeYpipe_put_idx_setter),T16,x_1771F3474);
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
  P x_1770F3476;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),c_);
  x_1770F3476 = T1;
  T3 = FUNFAB(fun_19,3,x_1770F3476,c_,x_);
  T4 = FUNFAB(fun_20,1,x_1770F3476);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_enqX_22) {
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
  P UF3479;
  P x_1773F3478;
  P resF3477;
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
  resF3477 = T6;
  x_1773F3478 = FREEREF(1);
  T10 = CALL1(1,VARREF(YcolsSpipeYpipe_get_idx),x_1773F3478);
  UF3479 = T10;
  T14 = CALL1(1,VARREF(YcolsSpipeYpipe_data),FREEREF(1));
  T13 = CALL1(1,VARREF(YgooScolsSrepYrep_len),T14);
  T12 = CALL3(1,VARREF(YgooSmathYmodA),UF3479,YPint((P)1),T13);
  T11 = CALL2(1,VARREF(YcolsSpipeYpipe_get_idx_setter),T12,x_1773F3478);
  T9 = T11;
  T5 = resF3477;
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

FUNCODEDEF(fun_deqX_25) {
  P c_;
  P x_1772F3480;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),c_);
  x_1772F3480 = T1;
  T3 = FUNFAB(fun_23,2,x_1772F3480,c_);
  T4 = FUNFAB(fun_24,1,x_1772F3480);
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
  P x_1774F3481;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),c_);
  x_1774F3481 = T1;
  T3 = FUNFAB(fun_26,2,x_1774F3481,c_);
  T4 = FUNFAB(fun_27,1,x_1774F3481);
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
  P x_1775F3482;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YcolsSpipeYpipe_lock),x_);
  x_1775F3482 = T1;
  T3 = FUNFAB(fun_29,3,x_1775F3482,i_,x_);
  T4 = FUNFAB(fun_30,1,x_1775F3482);
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
  lit_24 = YPPsym((P)"enq!");
  T85 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_23)),YPPlist(2,VARREF(YcolsSpipeYLpipeG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YcolsSpipeYLpipeG),Ynil);
  fun_enqX_22 = YPmet(FUNCODEREF(fun_enqX_22),LITREF(lit_24),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YcolsSpipeYenqX);
  if (T88 != YPfalse) {
    T87 = VARREF(YcolsSpipeYenqX);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_enqX_22;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YcolsSpipeYenqX,T86);
  lit_25 = YPPsym((P)"deq!");
  T92 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YcolsSpipeYLpipeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_deqX_25 = YPmet(FUNCODEREF(fun_deqX_25),LITREF(lit_25),T90,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YcolsSpipeYdeqX);
  if (T95 != YPfalse) {
    T94 = VARREF(YcolsSpipeYdeqX);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_deqX_25;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YcolsSpipeYdeqX,T93);
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
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsScycle;
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
  {&module_info_gooScolsSrep},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsScol},
  {&module_info_gooSmath},
  {&module_info_timeSlock},
  {&module_info_timeSevent},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"open", &module_info_gooSioSport, "open"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"min", &module_info_gooSmag, "min"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"event-name", &module_info_timeSevent, "event-name"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"ct", &module_info_gooSboot, "ct"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"event-broadcast", &module_info_timeSevent, "event-broadcast"},
  {"do", &module_info_gooSmacros, "do"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"^", &module_info_gooSmath, "^"},
  {">", &module_info_gooSmag, ">"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"app", &module_info_gooSmacros, "app"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"esc", &module_info_gooSboot, "esc"},
  {"neg", &module_info_gooSmath, "neg"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
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
  {"round/", &module_info_gooSmath, "round/"},
  {"lock-unlock", &module_info_timeSlock, "lock-unlock"},
  {"del", &module_info_gooScolsScol, "del"},
  {"logn", &module_info_gooSmath, "logn"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"new", &module_info_gooSboot, "new"},
  {"=", &module_info_gooSmath, "="},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"sin", &module_info_gooSmath, "sin"},
  {"~==", &module_info_gooSmath, "~=="},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"<lock>", &module_info_timeSlock, "<lock>"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"acos", &module_info_gooSmath, "acos"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"add", &module_info_gooScolsScol, "add"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"for", &module_info_gooSmacros, "for"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"even?", &module_info_gooSmath, "even?"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"fun", &module_info_gooSboot, "fun"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"dp", &module_info_gooSboot, "dp"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"+", &module_info_gooSmath, "+"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"use", &module_info_gooSboot, "use"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"dm", &module_info_gooSboot, "dm"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"def", &module_info_gooSboot, "def"},
  {"while", &module_info_gooSmacros, "while"},
  {"event-wait-timed", &module_info_timeSevent, "event-wait-timed"},
  {"df", &module_info_gooSboot, "df"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"lock-handle", &module_info_timeSlock, "lock-handle"},
  {"not", &module_info_gooSboot, "not"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"dc", &module_info_gooSboot, "dc"},
  {"event-signal", &module_info_timeSevent, "event-signal"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"dg", &module_info_gooSboot, "dg"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"|", &module_info_gooSmath, "|"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"lock-state", &module_info_timeSlock, "lock-state"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"mod", &module_info_gooSmath, "mod"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<<", &module_info_gooSmath, "<<"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"col", &module_info_gooScolsScol, "col"},
  {"log", &module_info_gooSmath, "log"},
  {"read", &module_info_gooSruntime, "read"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"<event>", &module_info_timeSevent, "<event>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"lst", &module_info_gooSboot, "lst"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"asin", &module_info_gooSmath, "asin"},
  {"lock-lock", &module_info_timeSlock, "lock-lock"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"in", &module_info_gooSioSport, "in"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
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
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"head", &module_info_gooSboot, "head"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"round", &module_info_gooSmath, "round"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"error", &module_info_gooSboot, "error"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"out", &module_info_gooSioSport, "out"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"event-wait", &module_info_timeSevent, "event-wait"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"~", &module_info_gooSmath, "~"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"/", &module_info_gooSmath, "/"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"div", &module_info_gooSmath, "div"},
  {"op", &module_info_gooSmacros, "op"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
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
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"get", &module_info_gooSioSport, "get"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"always", &module_info_gooSruntime, "always"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"fin", &module_info_gooSboot, "fin"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"$e", &module_info_gooSmath, "$e"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"try", &module_info_gooSboot, "try"},
  {"export", &module_info_gooSboot, "export"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"tup", &module_info_gooSboot, "tup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"let", &module_info_gooSboot, "let"},
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
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"last", &module_info_gooSmacros, "last"},
  {"lock-destroy", &module_info_timeSlock, "lock-destroy"},
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
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"set", &module_info_gooSboot, "set"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"event-reset", &module_info_timeSevent, "event-reset"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"with-lock", &module_info_timeSlock, "with-lock"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"==", &module_info_gooSmacros, "=="},
  {"pow", &module_info_gooSmath, "pow"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"&", &module_info_gooSmath, "&"},
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
  {"mod-", &module_info_gooSmath, "mod-"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"t<", &module_info_gooStypes, "t<"},
  {"cos", &module_info_gooSmath, "cos"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"case", &module_info_gooSmacros, "case"},
  {"close", &module_info_gooSioSport, "close"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"floor", &module_info_gooSmath, "floor"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"map", &module_info_gooSmacros, "map"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"-", &module_info_gooSmath, "-"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"match", &module_info_gooSmacros, "match"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {">>", &module_info_gooSmath, ">>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
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
  {"max", &module_info_gooSmag, "max"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"~=", &module_info_gooSmath, "~="},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"abs", &module_info_gooSmath, "abs"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"t+", &module_info_gooStypes, "t+"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"when", &module_info_gooSmacros, "when"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"1-", &module_info_gooSmath, "1-"},
  {"len", &module_info_gooStypes, "len"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"@len", CVAR, &YcolsSpipeYOlen},
  {"pipe-idx", CVAR, &YcolsSpipeYpipe_idx},
  {"pipe-data-setter", CVAR, &YcolsSpipeYpipe_data_setter},
  {"pipe-available-setter", CVAR, &YcolsSpipeYpipe_available_setter},
  {"grow-pipe!", CVAR, &YcolsSpipeYgrow_pipeX},
  {"pipe-lock-setter", CVAR, &YcolsSpipeYpipe_lock_setter},
  {"pipe-get-idx-setter", CVAR, &YcolsSpipeYpipe_get_idx_setter},
  {"pipe-put-idx-setter", CVAR, &YcolsSpipeYpipe_put_idx_setter},
  {"pipe-data", CVAR, &YcolsSpipeYpipe_data},
  {"pipe-available", CVAR, &YcolsSpipeYpipe_available},
  {"deq!", CVAR, &YcolsSpipeYdeqX},
  {"pipe-lock", CVAR, &YcolsSpipeYpipe_lock},
  {"pipe-get-idx", CVAR, &YcolsSpipeYpipe_get_idx},
  {"pipe-put-idx", CVAR, &YcolsSpipeYpipe_put_idx},
  {"---main-0---", PVAR, NULL},
  {"enq!", CVAR, &YcolsSpipeYenqX},
  {"<pipe>", CVAR, &YcolsSpipeYLpipeG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"deq!", "deq!"},
  {"enq!", "enq!"},
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
