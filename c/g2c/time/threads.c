/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"time/threads");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: time/threads */

EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
DEF(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YtimeSthreadsYthread_handle,"time/threads","thread-handle");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
DEF(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YPtrue,"goo/boot","%true");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Ylst,"goo/boot","lst");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
DEF(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(YOallQ,"goo/boot","@all?");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YOdo,"goo/boot","@do");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
DEF(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YOnew,"goo/boot","@new");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YOpick,"goo/boot","@pick");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSioSportYput,"goo/io/port","put");
DEF(YtimeSthreadsYthread_handle_setter,"time/threads","thread-handle-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSlocYas_c,"goo/loc","as-c");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YOmap,"goo/boot","@map");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
DEF(YtimeSthreadsYmain_thread_key,"time/threads","main-thread-key");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYA,"goo/math","+");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSlocYas_goo,"goo/loc","as-goo");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YOfold,"goo/boot","@fold");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSlogYE,"goo/log","=");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(YtimeSthreadsYthread_join,"time/threads","thread-join");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YOlst,"goo/boot","@lst");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_13);
DEFLIT(lit_36);
DEFLIT(lit_7);
DEFLIT(lit_23);
DEFLIT(lit_16);
DEFLIT(lit_4);
DEFLIT(lit_32);
DEFLIT(lit_34);
DEFLIT(lit_21);
DEFLIT(lit_6);
DEFLIT(lit_26);
DEFLIT(lit_12);
DEFLIT(lit_2);
DEFLIT(lit_30);
DEFLIT(lit_38);
DEFLIT(lit_9);
DEFLIT(lit_3);
DEFLIT(lit_15);
DEFLIT(lit_17);
DEFLIT(lit_10);
DEFLIT(lit_37);
DEFLIT(lit_33);
DEFLIT(lit_31);
DEFLIT(lit_28);
DEFLIT(lit_11);
DEFLIT(lit_5);
DEFLIT(lit_35);
DEFLIT(lit_27);
DEFLIT(lit_0);
DEFLIT(lit_39);
DEFLIT(lit_19);
DEFLIT(lit_18);
DEFLIT(lit_24);
DEFLIT(lit_29);
DEFLIT(lit_1);
DEFLIT(lit_8);
DEFLIT(lit_25);
DEFLIT(lit_20);
DEFLIT(lit_14);
DEFLIT(lit_22);

/* FUNCTIONS: */

LOCFOR(fun_thread_name_0);
LOCFOR(fun_1);
LOCFOR(fun_thread_priority_2);
LOCFOR(fun_3);
LOCFOR(fun_thread_function_4);
LOCFOR(fun_5);
LOCFOR(fun_6);
LOCFOR(fun_thread_handle_7);
LOCFOR(fun_thread_handle_setter_8);
LOCFOR(fun_thread_yield_9);
FUNFOR(YtimeSthreadsYmain_thread_key);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_13);
LOCFOR(fun_14);
LOCFOR(fun_new_15);
LOCFOR(fun_x_1924_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_sleep_19);
LOCFOR(fun_thread_current_20);
LOCFOR(fun_thread_join_21);
LOCFOR(fun_22);
FUNFOR(YtimeSthreadsYtest_thread_1);
LOCFOR(fun_24);
FUNFOR(YtimeSthreadsYtest_thread_2);
extern P YtimeSthreadsY___main_0___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_thread_name_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YtimeSthreadsYthread_name));
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

LOCCODEDEF(fun_thread_priority_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YtimeSthreadsYthread_priority));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_3) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_thread_function_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YtimeSthreadsYthread_function));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_5) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_6) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = fun_5;
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_thread_handle_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YtimeSthreadsYthread_handle));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_thread_handle_setter_8) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YtimeSthreadsYthread_handle));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_thread_yield_9) {
  P T0;
LINK_STACK();
  T0 = (P)YtimeSthreadsYPthread_yield();
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtimeSthreadsYmain_thread_key) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_11) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_12) {
  P c_,r_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  T1 = CALL1(1,VARREF(YgooSconditionsYdescribe_condition),c_);
  T0 = CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_20),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_13) {
  P T0,T1;
LINK_STACK();
  T1 = CALL1(1,VARREF(YtimeSthreadsYthread_function),FREEREF(0));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_14) {
  P T0,T1,T2,T3;
LINK_STACK();
  DYNSET(YgooSconditionsYTcurrent_handlersT,Ynil);
  T1 = fun_11;
  T2 = fun_12;
  T3 = FUNFAB(fun_13,1,FREEREF(0));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSconditionsYLconditionG),VARREF(YgooSconditionsYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_new_15) {
  P x_,args_;
  P xF5324;
  P xF5323;
  P hF5322;
  P xF5321;
  P fF5320;
  P tF5319;
  P next_metsF5318;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(x_, 0);
  NARGS(args_, 1);
  T14 = (P)YPfun_reg();
  T15 = (P)YPnext_methods();
  T13 = CALL4(1,VARREF(YgooSmacrosYOchecked_next_methods),T14,T15,x_,args_);
  next_metsF5318 = T13;
  T11 = CALL1(1,VARREF(Yhead),next_metsF5318);
  T12 = CALL1(1,VARREF(Ytail),next_metsF5318);
  T10 = CALL4(1,VARREF(YgooSmacrosYnapp),T11,T12,x_,args_);
  tF5319 = T10;
  T2 = CALL1(1,VARREF(YtimeSthreadsYthread_function),tF5319);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,VARREF(YtimeSthreadsYmain_thread_key));
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T9 = FUNFAB(fun_14,1,tF5319);
    fF5320 = T9;
    T8 = CALL2(1,VARREF(Ytup),fF5320,tF5319);
    T7 = (P)YtimeSthreadsYPthread_create(T8);
    xF5321 = T7;
    T6 = (P)YPtag_into(xF5321,(P)3);
    hF5322 = T6;
    CALL2(1,VARREF(YtimeSthreadsYthread_handle_setter),hF5322,tF5319);
    T5 = CALL1(1,VARREF(YtimeSthreadsYthread_priority),tF5319);
    xF5323 = T5;
    xF5324 = xF5323;
    T4 = (P)YPiGG(xF5324,(P)2);
    T3 = (P)YtimeSthreadsYPthread_priority_setter(T4,hF5322);
  } else {
  }
UNLINK_STACK();
  RET(tF5319);
}

LOCCODEDEF(fun_x_1924_16) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_26),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_17) {
  P return_;
  P x_1923F5329;
  P x_1923F5328;
  P bodyF5327;
  P x_1923F5326;
  P x_1924F5325;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(return_, 0);
  T14 = FUNSHELL(0,fun_x_1924_16,2);
  x_1924F5325 = T14;
  FUNINIT(x_1924F5325, 2,FREEREF(0),return_);
  x_1923F5326 = FREEREF(0);
  bodyF5327 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1923F5326,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1923F5326,LITREF(lit_26),x_1924F5325);
    x_1923F5328 = T3;
    bodyF5327 = x_1923F5328;
    x_1923F5329 = Ynil;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1923F5329,x_1924F5325);
  } else {
    T4 = CALL2(1,x_1924F5325,LITREF(lit_27),x_1923F5326);
  }
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_17));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_0));
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T12 = CALL1(1,VARREF(Ylst),Ynil);
  T13 = bodyF5327;
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_29));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T5 = CALL5(1,VARREF(YgooSmacrosYcat),T6,T7,T8,T9,LITREF(lit_29));
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_18) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_17,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sleep_19) {
  P secs_;
  P T0,T1;
LINK_STACK();
  ARG(secs_, 0);
  T1 = (P)YPfu(secs_);
  T0 = (P)YtimeSthreadsYPthread_sleep(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_thread_current_20) {
  P xF5330;
  P T0,T1,T2;
LINK_STACK();
  T2 = (P)YtimeSthreadsYPthread_current();
  xF5330 = T2;
  T1 = (P)YPtag_into(xF5330,(P)3);
  T0 = (P)YtimeSthreadsYPthread_goo_thread(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_thread_join_21) {
  P t_;
  P xF5331;
  P T0,T1,T2;
LINK_STACK();
  ARG(t_, 0);
  T2 = CALL1(1,VARREF(YtimeSthreadsYthread_handle),t_);
  xF5331 = T2;
  T1 = (P)YPuntag_into(xF5331);
  T0 = (P)YtimeSthreadsYPthread_join(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_22) {
  P iF5333;
  P x_1925F5332;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  T7 = CALL1(1,VARREF(YgooScolsSseqYbelow),YPint((P)3000));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_1925F5332 = T6;
  LOOP_259: {
    P a259_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1925F5332);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1925F5332);
      iF5333 = T5;
      CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_36),iF5333);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1925F5332);
      a259_0 = T4;
      x_1925F5332 = a259_0;
      goto LOOP_259;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtimeSthreadsYtest_thread_1) {
  P T0,T1;
LINK_STACK();
  T1 = fun_22;
  T0 = CALL3(1,VARREF(Ynew),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_function),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_24) {
  P iF5335;
  P x_1927F5334;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  T7 = CALL1(1,VARREF(YgooScolsSseqYbelow),YPint((P)100));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_1927F5334 = T6;
  LOOP_260: {
    P a260_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1927F5334);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_1927F5334);
      iF5335 = T5;
      CALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_38),iF5335);
      CALL1(1,VARREF(YtimeSthreadsYsleep),LITREF(lit_39));
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1927F5334);
      a260_0 = T4;
      x_1927F5334 = a260_0;
      goto LOOP_260;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtimeSthreadsYtest_thread_2) {
  P T0,T1;
LINK_STACK();
  T1 = fun_24;
  T0 = CALL3(1,VARREF(Ynew),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_function),T1);
UNLINK_STACK();
  QRET(T0);
}

P YtimeSthreadsY___main_0___() {
  P xF5336;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70;
DEFCREGS();
  lit_0 = YPPsym((P)"<thread>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YtimeSthreadsYLthreadG,T0);
  lit_1 = YPPsym((P)"thread-name");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_name_0 = YPfab_met(FUNCODEREF(fun_thread_name_0),T2,LITREF(lit_1),LITREF(lit_2),sloc(21),YPfalse);
  T4 = VARREF_OR(YtimeSthreadsYthread_name,YPfalse);
  T5 = fun_thread_name_0;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YtimeSthreadsYthread_name,T3);
  lit_3 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPfab_met(FUNCODEREF(fun_1),T6,YPfalse,LITREF(lit_3),sloc(21),YPfalse);
  T7 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLsymG));
  T8 = fun_1;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_name),YPfalse,T7,T8);
  lit_4 = YPPsym((P)"thread-priority");
  lit_5 = YPPlist(1,YPPsym((P)"_x"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_priority_2 = YPfab_met(FUNCODEREF(fun_thread_priority_2),T9,LITREF(lit_4),LITREF(lit_5),sloc(22),YPfalse);
  T11 = VARREF_OR(YtimeSthreadsYthread_priority,YPfalse);
  T12 = fun_thread_priority_2;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YtimeSthreadsYthread_priority,T10);
  lit_6 = YPPlist(1,YPPsym((P)"_x"));
  T13 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3 = YPfab_met(FUNCODEREF(fun_3),T13,YPfalse,LITREF(lit_6),sloc(22),YPfalse);
  T14 = fun_3;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_priority),YPfalse,VARREF(YLintG),T14);
  lit_7 = YPPsym((P)"thread-function");
  lit_8 = YPPlist(1,YPPsym((P)"_x"));
  T15 = YPfab_sig(YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_function_4 = YPfab_met(FUNCODEREF(fun_thread_function_4),T15,LITREF(lit_7),LITREF(lit_8),sloc(23),YPfalse);
  T17 = VARREF_OR(YtimeSthreadsYthread_function,YPfalse);
  T18 = fun_thread_function_4;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YtimeSthreadsYthread_function,T16);
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  lit_10 = Ynil;
  T20 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_5 = YPfab_met(FUNCODEREF(fun_5),T20,YPfalse,LITREF(lit_10),sloc(23),YPfalse);
  T19 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPfab_met(FUNCODEREF(fun_6),T19,YPfalse,LITREF(lit_9),sloc(23),YPfalse);
  T21 = fun_6;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_function),YPfalse,VARREF(YLfunG),T21);
  lit_11 = YPPsym((P)"thread-handle");
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_handle_7 = YPfab_met(FUNCODEREF(fun_thread_handle_7),T22,LITREF(lit_11),LITREF(lit_12),sloc(24),YPfalse);
  T24 = VARREF_OR(YtimeSthreadsYthread_handle,YPfalse);
  T25 = fun_thread_handle_7;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YtimeSthreadsYthread_handle,T23);
  lit_13 = YPPsym((P)"thread-handle-setter");
  lit_14 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YLlocG),VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_thread_handle_setter_8 = YPfab_met(FUNCODEREF(fun_thread_handle_setter_8),T26,LITREF(lit_13),LITREF(lit_14),sloc(24),YPfalse);
  T28 = VARREF_OR(YtimeSthreadsYthread_handle_setter,YPfalse);
  T29 = fun_thread_handle_setter_8;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YtimeSthreadsYthread_handle_setter,T27);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_handle),VARREF(YtimeSthreadsYthread_handle_setter),VARREF(YLlocG),VARREF(YPprop_unbound_error));
  lit_15 = YPPsym((P)"thread-yield");
  T30 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_thread_yield_9 = YPfab_met(FUNCODEREF(fun_thread_yield_9),T30,LITREF(lit_15),LITREF(lit_10),sloc(26),YPfalse);
  T32 = VARREF_OR(YtimeSthreadsYthread_yield,YPfalse);
  T33 = fun_thread_yield_9;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YtimeSthreadsYthread_yield,T31);
  lit_16 = YPPsym((P)"main-thread-key");
  T34 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YtimeSthreadsYmain_thread_key = YPfab_met(FUNCODEREF(YtimeSthreadsYmain_thread_key),T34,LITREF(lit_16),LITREF(lit_10),sloc(28),YPfalse);
  T35 = YtimeSthreadsYmain_thread_key;
  VARSET(YtimeSthreadsYmain_thread_key,T35);
  lit_17 = YPPsym((P)"new");
  lit_18 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"args"));
  lit_19 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_20 = YPsb((P)"ERROR: %s");
  T41 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T41,YPfalse,LITREF(lit_10),YPfalse,YPfalse);
  T40 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_12 = YPfab_met(FUNCODEREF(fun_12),T40,YPfalse,LITREF(lit_19),sloc(36),YPfalse);
  T39 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_13 = YPfab_met(FUNCODEREF(fun_13),T39,YPfalse,LITREF(lit_10),sloc(37),YPfalse);
  T38 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_14 = YPfab_met(FUNCODEREF(fun_14),T38,YPfalse,LITREF(lit_10),sloc(33),YPfalse);
  T37 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YtimeSthreadsYLthreadG));
  T36 = YPfab_sig(YPPlist(1,T37),YPtrue,YPint((P)1),VARREF(YtimeSthreadsYLthreadG),Ynil);
  fun_new_15 = YPfab_met(FUNCODEREF(fun_new_15),T36,LITREF(lit_17),LITREF(lit_18),sloc(30),YPfalse);
  T43 = VARREF_OR(Ynew,YPfalse);
  T44 = fun_new_15;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(Ynew,T42);
  lit_21 = YPPsym((P)"main");
  T47 = (P)YtimeSthreadsYPthread_current();
  xF5336 = T47;
  T46 = (P)YPtag_into(xF5336,(P)3);
  T45 = XCALLN(1,VARREF(Ynew),7,VARREF(YtimeSthreadsYLthreadG),VARREF(YtimeSthreadsYthread_name),LITREF(lit_21),VARREF(YtimeSthreadsYthread_function),VARREF(YtimeSthreadsYmain_thread_key),VARREF(YtimeSthreadsYthread_handle),T46);
  (P)YtimeSthreadsYPthread_goo_thread_setter(T45);
  lit_22 = YPPlist(1,YPPsym((P)"exp"));
  lit_23 = YPPlist(1,YPPsym((P)"return"));
  lit_24 = YPPsym((P)"x-1924");
  lit_25 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_26 = YPPsym((P)"spawn");
  lit_27 = YPsb((P)"Match Pattern Failure");
  lit_28 = YPPsym((P)"fun");
  lit_29 = Ynil;
  T50 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1924_16 = YPfab_met(FUNCODEREF(fun_x_1924_16),T50,LITREF(lit_24),LITREF(lit_25),YPfalse,YPfalse);
  T49 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPfab_met(FUNCODEREF(fun_17),T49,YPfalse,LITREF(lit_23),YPfalse,YPfalse);
  T48 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T48,YPfalse,LITREF(lit_22),YPfalse,YPfalse);
  T51 = fun_18;
  YPmacro(YPPsym((P)"time/threads"),YPPsym((P)"spawn"),T51);
  lit_30 = YPPsym((P)"sleep");
  lit_31 = YPPlist(1,YPPsym((P)"secs"));
  T52 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sleep_19 = YPfab_met(FUNCODEREF(fun_sleep_19),T52,LITREF(lit_30),LITREF(lit_31),sloc(52),YPfalse);
  T54 = VARREF_OR(YtimeSthreadsYsleep,YPfalse);
  T55 = fun_sleep_19;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YtimeSthreadsYsleep,T53);
  lit_32 = YPPsym((P)"thread-current");
  T56 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YtimeSthreadsYLthreadG),Ynil);
  fun_thread_current_20 = YPfab_met(FUNCODEREF(fun_thread_current_20),T56,LITREF(lit_32),LITREF(lit_10),sloc(55),YPfalse);
  T58 = VARREF_OR(YtimeSthreadsYthread_current,YPfalse);
  T59 = fun_thread_current_20;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YtimeSthreadsYthread_current,T57);
  lit_33 = YPPsym((P)"thread-join");
  lit_34 = YPPlist(1,YPPsym((P)"t"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YtimeSthreadsYLthreadG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_thread_join_21 = YPfab_met(FUNCODEREF(fun_thread_join_21),T60,LITREF(lit_33),LITREF(lit_34),sloc(58),YPfalse);
  T62 = VARREF_OR(YtimeSthreadsYthread_join,YPfalse);
  T63 = fun_thread_join_21;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YtimeSthreadsYthread_join,T61);
  lit_35 = YPPsym((P)"test-thread-1");
  lit_36 = YPsb((P)"%d\n");
  T65 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPfab_met(FUNCODEREF(fun_22),T65,YPfalse,LITREF(lit_10),sloc(62),YPfalse);
  T64 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YtimeSthreadsYtest_thread_1 = YPfab_met(FUNCODEREF(YtimeSthreadsYtest_thread_1),T64,LITREF(lit_35),LITREF(lit_10),sloc(61),YPfalse);
  T66 = YtimeSthreadsYtest_thread_1;
  VARSET(YtimeSthreadsYtest_thread_1,T66);
  lit_37 = YPPsym((P)"test-thread-2");
  lit_38 = YPsb((P)"%d\n");
  lit_39 = YPflo(FLOINT(1.0));
  T68 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T68,YPfalse,LITREF(lit_10),sloc(65),YPfalse);
  T67 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YtimeSthreadsYtest_thread_2 = YPfab_met(FUNCODEREF(YtimeSthreadsYtest_thread_2),T67,LITREF(lit_37),LITREF(lit_10),sloc(64),YPfalse);
  T69 = YtimeSthreadsYtest_thread_2;
  VARSET(YtimeSthreadsYtest_thread_2,T69);
  T70 = YPfalse;
  return T70;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSlate_macros;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSloc},
  {&module_info_gooSconditions},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"fold+", &module_info_gooScolsScol, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"as-c", &module_info_gooSloc, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"as-goo", &module_info_gooSloc, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sleep", CVAR, &YtimeSthreadsYsleep},
  {"%thread-create", PVAR, NULL},
  {"%thread-detach", PVAR, NULL},
  {"spawn", PVAR, NULL},
  {"thread-handle", CVAR, &YtimeSthreadsYthread_handle},
  {"thread-name", CVAR, &YtimeSthreadsYthread_name},
  {"thread-function", CVAR, &YtimeSthreadsYthread_function},
  {"thread-yield", CVAR, &YtimeSthreadsYthread_yield},
  {"thread-priority", CVAR, &YtimeSthreadsYthread_priority},
  {"<thread>", CVAR, &YtimeSthreadsYLthreadG},
  {"test-thread-1", CVAR, &YtimeSthreadsYtest_thread_1},
  {"%thread-join", PVAR, NULL},
  {"%thread-sleep", PVAR, NULL},
  {"thread-current", CVAR, &YtimeSthreadsYthread_current},
  {"thread-handle-setter", CVAR, &YtimeSthreadsYthread_handle_setter},
  {"%thread-goo-thread", PVAR, NULL},
  {"%thread-priority", PVAR, NULL},
  {"main-thread-key", CVAR, &YtimeSthreadsYmain_thread_key},
  {"test-thread-2", CVAR, &YtimeSthreadsYtest_thread_2},
  {"---main-0---", PVAR, NULL},
  {"%thread-yield", PVAR, NULL},
  {"%thread-priority-setter", PVAR, NULL},
  {"thread-join", CVAR, &YtimeSthreadsYthread_join},
  {"%thread-goo-thread-setter", PVAR, NULL},
  {"%thread-current", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sleep", NULL},
  {"thread-function", NULL},
  {"thread-yield", NULL},
  {"thread-priority", NULL},
  {"<thread>", NULL},
  {"test-thread-1", NULL},
  {"thread-current", NULL},
  {"thread-name", NULL},
  {"spawn", NULL},
  {"test-thread-2", NULL},
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
extern void load_module_gooSloc (void);
extern void load_module_gooSconditions (void);

/* EXPRESSION: */

extern void load_module_timeSthreads (void);

void load_module_timeSthreads (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSloc();
  load_module_gooSconditions();

  (P)YtimeSthreadsY___main_0___();

}

/* END OF GENERATED CODE. */
