/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/bignum");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/bignum */

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
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooSbignumYpow_pos,"goo/bignum","pow-pos");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
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
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
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
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
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
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
DEF(YgooSbignumYmpzUprint,"goo/bignum","mpz_print");
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
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
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
DEF(YgooSbignumYto_bignum,"goo/bignum","to-bignum");
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
EXT(YgooSioSportYin,"goo/io/port","in");
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
DEF(YgooSbignumYgmp_initialize,"goo/bignum","gmp-initialize");
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

DEFLIT(lit_103);
DEFLIT(lit_12);
DEFLIT(lit_79);
DEFLIT(lit_31);
DEFLIT(lit_2);
DEFLIT(lit_52);
DEFLIT(lit_96);
DEFLIT(lit_21);
DEFLIT(lit_1);
DEFLIT(lit_126);
DEFLIT(lit_112);
DEFLIT(lit_19);
DEFLIT(lit_72);
DEFLIT(lit_75);
DEFLIT(lit_65);
DEFLIT(lit_20);
DEFLIT(lit_127);
DEFLIT(lit_124);
DEFLIT(lit_130);
DEFLIT(lit_45);
DEFLIT(lit_61);
DEFLIT(lit_131);
DEFLIT(lit_26);
DEFLIT(lit_50);
DEFLIT(lit_128);
DEFLIT(lit_59);
DEFLIT(lit_25);
DEFLIT(lit_71);
DEFLIT(lit_34);
DEFLIT(lit_14);
DEFLIT(lit_49);
DEFLIT(lit_89);
DEFLIT(lit_82);
DEFLIT(lit_129);
DEFLIT(lit_18);
DEFLIT(lit_122);
DEFLIT(lit_29);
DEFLIT(lit_105);
DEFLIT(lit_73);
DEFLIT(lit_70);
DEFLIT(lit_92);
DEFLIT(lit_7);
DEFLIT(lit_60);
DEFLIT(lit_95);
DEFLIT(lit_115);
DEFLIT(lit_76);
DEFLIT(lit_48);
DEFLIT(lit_66);
DEFLIT(lit_85);
DEFLIT(lit_22);
DEFLIT(lit_51);
DEFLIT(lit_84);
DEFLIT(lit_40);
DEFLIT(lit_107);
DEFLIT(lit_9);
DEFLIT(lit_16);
DEFLIT(lit_100);
DEFLIT(lit_11);
DEFLIT(lit_36);
DEFLIT(lit_80);
DEFLIT(lit_88);
DEFLIT(lit_93);
DEFLIT(lit_111);
DEFLIT(lit_23);
DEFLIT(lit_8);
DEFLIT(lit_120);
DEFLIT(lit_134);
DEFLIT(lit_68);
DEFLIT(lit_38);
DEFLIT(lit_69);
DEFLIT(lit_42);
DEFLIT(lit_44);
DEFLIT(lit_118);
DEFLIT(lit_13);
DEFLIT(lit_77);
DEFLIT(lit_15);
DEFLIT(lit_35);
DEFLIT(lit_5);
DEFLIT(lit_87);
DEFLIT(lit_63);
DEFLIT(lit_108);
DEFLIT(lit_32);
DEFLIT(lit_113);
DEFLIT(lit_81);
DEFLIT(lit_64);
DEFLIT(lit_117);
DEFLIT(lit_24);
DEFLIT(lit_99);
DEFLIT(lit_56);
DEFLIT(lit_123);
DEFLIT(lit_0);
DEFLIT(lit_41);
DEFLIT(lit_101);
DEFLIT(lit_78);
DEFLIT(lit_109);
DEFLIT(lit_30);
DEFLIT(lit_74);
DEFLIT(lit_62);
DEFLIT(lit_27);
DEFLIT(lit_39);
DEFLIT(lit_110);
DEFLIT(lit_83);
DEFLIT(lit_47);
DEFLIT(lit_10);
DEFLIT(lit_132);
DEFLIT(lit_67);
DEFLIT(lit_33);
DEFLIT(lit_86);
DEFLIT(lit_17);
DEFLIT(lit_57);
DEFLIT(lit_55);
DEFLIT(lit_46);
DEFLIT(lit_6);
DEFLIT(lit_91);
DEFLIT(lit_53);
DEFLIT(lit_106);
DEFLIT(lit_94);
DEFLIT(lit_116);
DEFLIT(lit_28);
DEFLIT(lit_133);
DEFLIT(lit_4);
DEFLIT(lit_43);
DEFLIT(lit_54);
DEFLIT(lit_104);
DEFLIT(lit_90);
DEFLIT(lit_119);
DEFLIT(lit_121);
DEFLIT(lit_102);
DEFLIT(lit_3);
DEFLIT(lit_97);
DEFLIT(lit_37);
DEFLIT(lit_98);
DEFLIT(lit_125);
DEFLIT(lit_114);
DEFLIT(lit_58);

/* FUNCTIONS: */

FUNFOR(YgooSbignumYgmp_initialize);
LOCFOR(fun_x_1882_1);
LOCFOR(fun_2);
LOCFOR(fun_3);
LOCFOR(fun_x_1886_4);
LOCFOR(fun_5);
LOCFOR(fun_6);
LOCFOR(fun_x_1890_7);
LOCFOR(fun_8);
LOCFOR(fun_9);
LOCFOR(fun_x_1894_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_x_1898_13);
LOCFOR(fun_14);
LOCFOR(fun_15);
LOCFOR(fun_x_1902_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_A_19);
LOCFOR(fun_A_20);
LOCFOR(fun_A_21);
LOCFOR(fun___22);
LOCFOR(fun___23);
LOCFOR(fun___24);
LOCFOR(fun_T_25);
LOCFOR(fun_T_26);
LOCFOR(fun_T_27);
LOCFOR(fun_neg_28);
LOCFOR(fun_GG_29);
LOCFOR(fun_LL_30);
LOCFOR(fun_L_31);
LOCFOR(fun_L_32);
LOCFOR(fun_L_33);
LOCFOR(fun_EE_34);
FUNFOR(YgooSbignumYto_bignum);
LOCFOR(fun_x_1915_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_K_39);
LOCFOR(fun_K_40);
LOCFOR(fun_K_41);
LOCFOR(fun_C_42);
LOCFOR(fun_C_43);
LOCFOR(fun_C_44);
LOCFOR(fun_B_45);
LOCFOR(fun_B_46);
LOCFOR(fun_B_47);
LOCFOR(fun_N_48);
LOCFOR(fun_bitQ_49);
LOCFOR(fun_evenQ_50);
LOCFOR(fun_oddQ_51);
LOCFOR(fun_truncS_52);
LOCFOR(fun_truncS_53);
LOCFOR(fun_truncS_54);
LOCFOR(fun_pow_pos_55);
LOCFOR(fun_pow_56);
LOCFOR(fun_A_57);
LOCFOR(fun___58);
LOCFOR(fun_T_59);
LOCFOR(fun_pow_60);
LOCFOR(fun_LL_61);
LOCFOR(fun_as_62);
LOCFOR(fun_truncS_63);
FUNFOR(YgooSbignumYmpzUprint);
extern P YgooSbignumY___main_0___ ();
extern P YgooSbignumY___main_1___ ();

/* C-FORMS: */


#include <gmp.h>
#include <values.h>

static mp_limb_t dummy_limb;

static inline PINT iu (P x) { return (PINT)IU(x); }
static inline P    ib (PINT x) { return (P)tag((P)x, int_tag); }

static inline mpz_init_zero(mpz_ptr z) {
  z->_mp_size  = 0;
  z->_mp_alloc = 0;
  z->_mp_d     = &dummy_limb;
}

// workaround for the lack of long long handling functions in the mpz library
void mpz_init_set_si64(mpz_ptr result, long long src) {
  int negp = src < 0;
  if (negp) src = -src;
  mpz_init_set_si(result, src>>32);
  mpz_mul_2exp(result, result, 32);
  mpz_add_ui(result, result, (long)src);
  if (negp) mpz_neg(result, result);
}

// checks if the mpz will fit in a GOO fixnum (long - 2 tag bits)
static inline int mpz_fits_fixnum(mpz_ptr z) {
  mp_size_t size = z->_mp_size;
  mp_limb_t data = z->_mp_d[0];
  return (size == 0
	  || (size == 1  && data <= MAX_GOO_FIXNUM)
	  || (size == -1 && data <= - (mp_limb_t) MIN_GOO_FIXNUM));
}

static inline int rawint_fits_fixnum(PINT x) {
  return (x <= MAX_GOO_FIXNUM && x >= MIN_GOO_FIXNUM);
}

// returns a GOO integer -- assumes you already checked that it fits
static inline P mpz_to_fixnum(mpz_ptr z) {
  mp_size_t size     = z->_mp_size;
  mp_limb_t low_limb = z->_mp_d[0];
  if (size > 0)
    return ib((PINT)low_limb);
  else if (size < 0)
    return ib((PINT)-(long)low_limb);
  else
    return ib(0);
}

static P mpz_to_bignum(mpz_ptr p) {
  P* obj       = (P*)allocate(sizeof(P)+sizeof(__mpz_struct));
  mpz_ptr newp = (mpz_ptr)(obj+1);
  *newp        = *p;
  YPobject_class_setter(YLbignumG, obj);
  return obj;
}

static inline mpz_ptr bignum_to_mpz(P obj) {
  return (mpz_ptr)(((P*)obj)+1);
}

// this should only be used internally, as most functions assume
// bignums cannot be in the range of fixnums
static inline P fixnum_to_bignum (P num) {
  mpz_t mpz;
  mpz_init_set_si(mpz, (long)iu(num));
  return mpz_to_bignum(mpz);
}

static inline P rawint_to_goo (PINT num) {
  if(rawint_fits_fixnum(num))
    return YPib((P)num);
  else {
    mpz_t mpz;
    mpz_init_set_si(mpz, num);
    return mpz_to_bignum(mpz);
  }
}

static inline P mpz_to_goo(mpz_ptr result) {
  if(mpz_fits_fixnum(result))
    return mpz_to_fixnum(result);
  else 
    return mpz_to_bignum(result);
}

static P rawint64_to_goo (long long num) {
  if(num > LONG_MAX || num < LONG_MIN) {
    // if it has an upper 32 bits
    mpz_t mpz;
    mpz_init_set_si64(mpz, num);
    return mpz_to_bignum(mpz);
  }
  return rawint_to_goo((PINT)num);
}


static void *gmp_realloc(void *ptr, size_t old, size_t new) {
  if(ptr == &dummy_limb)
    return GC_realloc(NULL, new);
  else
    return GC_realloc(ptr, new);
}

static void do_nothing_free(void *ptr, size_t size) { }

P gmp_initialize () {
  mp_set_memory_functions(GC_malloc, gmp_realloc, do_nothing_free);
}


/* FUNCTION CODES: */

FUNCODEDEF(YgooSbignumYgmp_initialize) {
  P T0;
LINK_STACK();
  T0 = YPfalse;
{  gmp_initialize(); }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1882_1) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_6),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_2) {
  P return_;
  P x_1881F5232;
  P x_1881F5231;
  P x_1881F5230;
  P bodyF5229;
  P resF5228;
  P x_1881F5227;
  P x_1882F5226;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(return_, 0);
  T20 = FUNSHELL(0,fun_x_1882_1,2);
  x_1882F5226 = T20;
  FUNINIT(x_1882F5226, 2,FREEREF(0),return_);
  x_1881F5227 = FREEREF(0);
  resF5228 = YPfalse;
  bodyF5229 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1881F5227,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1881F5227,LITREF(lit_6),x_1882F5226);
    x_1881F5230 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1881F5230,x_1882F5226);
    resF5228 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1881F5230);
    x_1881F5231 = T5;
    bodyF5229 = x_1881F5231;
    x_1881F5232 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1881F5232,x_1882F5226);
  } else {
    T7 = CALL2(1,x_1882F5226,LITREF(lit_7),x_1881F5227);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T15 = resF5228;
  T14 = CALL1(1,VARREF(Ylst),T15);
  T16 = CALL1(1,VARREF(Ylst),YPfalse);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T16,LITREF(lit_9));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_9));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T17 = bodyF5229;
  T19 = resF5228;
  T18 = CALL1(1,VARREF(Ylst),T19);
  T8 = CALL5(1,VARREF(YgooSmacrosYcat),T9,T10,T17,T18,LITREF(lit_9));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_3) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_2,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1886_4) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_14),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_5) {
  P return_;
  P zcF5241;
  P resF5240;
  P x_1885F5239;
  P x_1885F5238;
  P x_1885F5237;
  P bodyF5236;
  P zF5235;
  P x_1885F5234;
  P x_1886F5233;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(return_, 0);
  T29 = FUNSHELL(0,fun_x_1886_4,2);
  x_1886F5233 = T29;
  FUNINIT(x_1886F5233, 2,FREEREF(0),return_);
  x_1885F5234 = FREEREF(0);
  zF5235 = YPfalse;
  bodyF5236 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1885F5234,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1885F5234,LITREF(lit_14),x_1886F5233);
    x_1885F5237 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1885F5237,x_1886F5233);
    zF5235 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1885F5237);
    x_1885F5238 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1885F5238,x_1886F5233);
    bodyF5236 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1885F5238);
    x_1885F5239 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1885F5239,x_1886F5233);
  } else {
    T9 = CALL2(1,x_1886F5233,LITREF(lit_7),x_1885F5234);
  }
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  resF5240 = T28;
  T27 = zF5235;
  T26 = CALL1(1,VARREF(YgooSanyYto_str),T27);
  zcF5241 = T26;
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T12 = CALL1(1,VARREF(Ylst),resF5240);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_16));
  T17 = CALL1(1,VARREF(Ylst),zcF5241);
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_17));
  T20 = bodyF5236;
  T19 = CALL1(1,VARREF(Ylst),T20);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_18));
  T22 = CALL1(1,VARREF(Ylst),resF5240);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_19));
  T24 = CALL1(1,VARREF(Ylst),zcF5241);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_20));
  T14 = CALLN(1,VARREF(YgooSmacrosYcat),11,T15,T16,T17,T18,T19,T21,T22,T23,T24,T25,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_9));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_6) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_5,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1890_7) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_25),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_8) {
  P return_;
  P x_1889F5248;
  P x_1889F5247;
  P x_1889F5246;
  P c_funF5245;
  P nameF5244;
  P x_1889F5243;
  P x_1890F5242;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
LINK_STACK();
  ARG(return_, 0);
  T44 = FUNSHELL(0,fun_x_1890_7,2);
  x_1890F5242 = T44;
  FUNINIT(x_1890F5242, 2,FREEREF(0),return_);
  x_1889F5243 = FREEREF(0);
  nameF5244 = YPfalse;
  c_funF5245 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1889F5243,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1889F5243,LITREF(lit_25),x_1890F5242);
    x_1889F5246 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1889F5246,x_1890F5242);
    nameF5244 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1889F5246);
    x_1889F5247 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1889F5247,x_1890F5242);
    c_funF5245 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1889F5247);
    x_1889F5248 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1889F5248,x_1890F5242);
  } else {
    T9 = CALL2(1,x_1890F5242,LITREF(lit_7),x_1889F5243);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_26));
  T15 = nameF5244;
  T14 = CALL1(1,VARREF(Ylst),T15);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T16,LITREF(lit_9));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_29));
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_9));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_30));
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_29));
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_9));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T18 = CALL5(1,VARREF(YgooSmacrosYcat),T19,T23,T27,T28,LITREF(lit_9));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_33));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_34));
  T38 = c_funF5245;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_35));
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_36));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_30));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T34 = CALLN(1,VARREF(YgooSmacrosYcat),9,T35,T36,T37,T39,T40,T41,T42,T43,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T33,LITREF(lit_9));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T10 = CALL5(1,VARREF(YgooSmacrosYcat),T11,T12,T17,T29,LITREF(lit_9));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_9) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_8,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1894_10) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_42),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_11) {
  P return_;
  P x_1893F5255;
  P x_1893F5254;
  P x_1893F5253;
  P c_funF5252;
  P nameF5251;
  P x_1893F5250;
  P x_1894F5249;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
LINK_STACK();
  ARG(return_, 0);
  T44 = FUNSHELL(0,fun_x_1894_10,2);
  x_1894F5249 = T44;
  FUNINIT(x_1894F5249, 2,FREEREF(0),return_);
  x_1893F5250 = FREEREF(0);
  nameF5251 = YPfalse;
  c_funF5252 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1893F5250,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1893F5250,LITREF(lit_42),x_1894F5249);
    x_1893F5253 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1893F5253,x_1894F5249);
    nameF5251 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1893F5253);
    x_1893F5254 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1893F5254,x_1894F5249);
    c_funF5252 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1893F5254);
    x_1893F5255 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1893F5255,x_1894F5249);
  } else {
    T9 = CALL2(1,x_1894F5249,LITREF(lit_7),x_1893F5250);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_26));
  T15 = nameF5251;
  T14 = CALL1(1,VARREF(Ylst),T15);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T16,LITREF(lit_9));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_29));
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_9));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_30));
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_43));
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_9));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T18 = CALL5(1,VARREF(YgooSmacrosYcat),T19,T23,T27,T28,LITREF(lit_9));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_33));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T38 = c_funF5252;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_45));
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_46));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_30));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T34 = CALLN(1,VARREF(YgooSmacrosYcat),9,T35,T36,T37,T39,T40,T41,T42,T43,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T33,LITREF(lit_9));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T10 = CALL5(1,VARREF(YgooSmacrosYcat),T11,T12,T17,T29,LITREF(lit_9));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_12) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_11,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1898_13) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_52),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_14) {
  P return_;
  P x_1897F5262;
  P x_1897F5261;
  P x_1897F5260;
  P c_funF5259;
  P nameF5258;
  P x_1897F5257;
  P x_1898F5256;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
LINK_STACK();
  ARG(return_, 0);
  T44 = FUNSHELL(0,fun_x_1898_13,2);
  x_1898F5256 = T44;
  FUNINIT(x_1898F5256, 2,FREEREF(0),return_);
  x_1897F5257 = FREEREF(0);
  nameF5258 = YPfalse;
  c_funF5259 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1897F5257,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1897F5257,LITREF(lit_52),x_1898F5256);
    x_1897F5260 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1897F5260,x_1898F5256);
    nameF5258 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1897F5260);
    x_1897F5261 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1897F5261,x_1898F5256);
    c_funF5259 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1897F5261);
    x_1897F5262 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1897F5262,x_1898F5256);
  } else {
    T9 = CALL2(1,x_1898F5256,LITREF(lit_7),x_1897F5257);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_26));
  T15 = nameF5258;
  T14 = CALL1(1,VARREF(Ylst),T15);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T16,LITREF(lit_9));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_43));
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_9));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_30));
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_29));
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_9));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T18 = CALL5(1,VARREF(YgooSmacrosYcat),T19,T23,T27,T28,LITREF(lit_9));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_33));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T38 = c_funF5259;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_30));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T34 = CALLN(1,VARREF(YgooSmacrosYcat),9,T35,T36,T37,T39,T40,T41,T42,T43,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T33,LITREF(lit_9));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T10 = CALL5(1,VARREF(YgooSmacrosYcat),T11,T12,T17,T29,LITREF(lit_9));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_15) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_14,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1902_16) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_61),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_17) {
  P return_;
  P x_1901F5269;
  P x_1901F5268;
  P x_1901F5267;
  P c_funF5266;
  P nameF5265;
  P x_1901F5264;
  P x_1902F5263;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(return_, 0);
  T38 = FUNSHELL(0,fun_x_1902_16,2);
  x_1902F5263 = T38;
  FUNINIT(x_1902F5263, 2,FREEREF(0),return_);
  x_1901F5264 = FREEREF(0);
  nameF5265 = YPfalse;
  c_funF5266 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1901F5264,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1901F5264,LITREF(lit_61),x_1902F5263);
    x_1901F5267 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1901F5267,x_1902F5263);
    nameF5265 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1901F5267);
    x_1901F5268 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1901F5268,x_1902F5263);
    c_funF5266 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1901F5268);
    x_1901F5269 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1901F5269,x_1902F5263);
  } else {
    T9 = CALL2(1,x_1902F5263,LITREF(lit_7),x_1901F5264);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_26));
  T15 = nameF5265;
  T14 = CALL1(1,VARREF(Ylst),T15);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T16,LITREF(lit_9));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_29));
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_9));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T23,T24,LITREF(lit_9));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_33));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T34 = c_funF5266;
  T33 = CALL1(1,VARREF(Ylst),T34);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T30 = CALLN(1,VARREF(YgooSmacrosYcat),7,T31,T32,T33,T35,T36,T37,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T29,LITREF(lit_9));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T10 = CALL5(1,VARREF(YgooSmacrosYcat),T11,T12,T17,T25,LITREF(lit_9));
UNLINK_STACK();
  QRET(T10);
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

LOCCODEDEF(fun_A_19) {
  P x_,y_;
  P x_1903F5270;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  x_1903F5270 = YPfalse;
  YPfalse;
{  mpz_t z; mpz_init_zero(z);   T0 = YPfalse;
{  mpz_add(z, bignum_to_mpz(x_), bignum_to_mpz(y_)); }
 x_1903F5270 = mpz_to_goo(z); }
UNLINK_STACK();
  RET(x_1903F5270);
}

LOCCODEDEF(fun_A_20) {
  P x_,y_;
  P x_1904F5271;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  x_1904F5271 = YPfalse;
  YPfalse;
{  mpz_t z; mpz_init_zero(z);   T0 = YPfalse;
{  if (y_ >= 0) 
         mpz_add_ui(z, bignum_to_mpz(x_),  iu(y_));
       else
         mpz_sub_ui(z, bignum_to_mpz(x_), -iu(y_)); }
 x_1904F5271 = mpz_to_goo(z); }
UNLINK_STACK();
  RET(x_1904F5271);
}

LOCCODEDEF(fun_A_21) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL2(1,VARREF(YgooSmathYA),y_,x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun___22) {
  P x_,y_;
  P x_1905F5272;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  x_1905F5272 = YPfalse;
  YPfalse;
{  mpz_t z; mpz_init_zero(z);   T0 = YPfalse;
{  mpz_sub(z, bignum_to_mpz(x_), bignum_to_mpz(y_)); }
 x_1905F5272 = mpz_to_goo(z); }
UNLINK_STACK();
  RET(x_1905F5272);
}

LOCCODEDEF(fun___23) {
  P x_,y_;
  P x_1906F5273;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  x_1906F5273 = YPfalse;
  YPfalse;
{  mpz_t z; mpz_init_zero(z);   T0 = YPfalse;
{  if (y_ >= 0) 
         mpz_sub_ui(z, bignum_to_mpz(x_),  iu(y_));
       else
         mpz_add_ui(z, bignum_to_mpz(x_), -iu(y_)); }
 x_1906F5273 = mpz_to_goo(z); }
UNLINK_STACK();
  RET(x_1906F5273);
}

LOCCODEDEF(fun___24) {
  P x_,y_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL2(1,VARREF(YgooSmathY_),y_,x_);
  T0 = CALL1(1,VARREF(YgooSmathYneg),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_T_25) {
  P x_,y_;
  P x_1907F5274;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  x_1907F5274 = YPfalse;
  YPfalse;
{  mpz_t z; mpz_init_zero(z);   T0 = YPfalse;
{  mpz_mul(z, bignum_to_mpz(x_), bignum_to_mpz(y_)); }
 x_1907F5274 = mpz_to_goo(z); }
UNLINK_STACK();
  RET(x_1907F5274);
}

LOCCODEDEF(fun_T_26) {
  P x_,y_;
  P x_1908F5275;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  x_1908F5275 = YPfalse;
  YPfalse;
{  mpz_t z; mpz_init_zero(z);   T0 = YPfalse;
{  mpz_mul_si(z, bignum_to_mpz(x_), iu(y_)); }
 x_1908F5275 = mpz_to_goo(z); }
UNLINK_STACK();
  RET(x_1908F5275);
}

LOCCODEDEF(fun_T_27) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL2(1,VARREF(YgooSmathYT),y_,x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_neg_28) {
  P x_;
  P x_1909F5276;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  x_1909F5276 = YPfalse;
  YPfalse;
{  mpz_t z; mpz_init_zero(z);   T0 = YPfalse;
{  mpz_neg(z, bignum_to_mpz(x_)); }
 x_1909F5276 = mpz_to_goo(z); }
UNLINK_STACK();
  RET(x_1909F5276);
}

LOCCODEDEF(fun_GG_29) {
  P x_,y_;
  P x_1910F5277;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  x_1910F5277 = YPfalse;
  YPfalse;
{  mpz_t z; mpz_init_zero(z);   T0 = YPfalse;
{  mpz_fdiv_q_2exp(z, bignum_to_mpz(x_), iu(y_)); }
 x_1910F5277 = mpz_to_goo(z); }
UNLINK_STACK();
  RET(x_1910F5277);
}

LOCCODEDEF(fun_LL_30) {
  P x_,y_;
  P x_1911F5278;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  x_1911F5278 = YPfalse;
  YPfalse;
{  mpz_t z; mpz_init_zero(z);   T0 = YPfalse;
{  mpz_mul_2exp(z, bignum_to_mpz(x_), iu(y_)); }
 x_1911F5278 = mpz_to_goo(z); }
UNLINK_STACK();
  RET(x_1911F5278);
}

LOCCODEDEF(fun_L_31) {
  P x_,y_;
  P tF5281;
  P xF5280;
  P xF5279;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T3 = (P)( mpz_sgn(bignum_to_mpz(y_)) );  xF5279 = T3;
  xF5280 = xF5279;
  tF5281 = (P)1;
  T2 = (P)YPiLL(xF5280,(P)2);
  T1 = (P)YPiv(T2,tF5281);
  T0 = CALL2(1,VARREF(YgooSlogYE),T1,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_L_32) {
  P x_,y_;
  P tF5284;
  P xF5283;
  P xF5282;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T3 = (P)( mpz_sgn(bignum_to_mpz(x_)) );  xF5282 = T3;
  xF5283 = xF5282;
  tF5284 = (P)1;
  T2 = (P)YPiLL(xF5283,(P)2);
  T1 = (P)YPiv(T2,tF5284);
  T0 = CALL2(1,VARREF(YgooSlogYE),T1,YPint((P)-1));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_L_33) {
  P x_,y_;
  P tF5287;
  P xF5286;
  P xF5285;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T3 = (P)( mpz_cmp(bignum_to_mpz(x_), bignum_to_mpz(y_)) );  xF5285 = T3;
  xF5286 = xF5285;
  tF5287 = (P)1;
  T2 = (P)YPiLL(xF5286,(P)2);
  T1 = (P)YPiv(T2,tF5287);
  T0 = CALL2(1,VARREF(YgooSlogYE),T1,YPint((P)-1));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_EE_34) {
  P x_,y_;
  P tF5290;
  P xF5289;
  P xF5288;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T3 = (P)( mpz_cmp(bignum_to_mpz(x_), bignum_to_mpz(y_)) );  xF5288 = T3;
  xF5289 = xF5288;
  tF5290 = (P)1;
  T2 = (P)YPiLL(xF5289,(P)2);
  T1 = (P)YPiv(T2,tF5290);
  T0 = CALL2(1,VARREF(YgooSlogYE),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSbignumYto_bignum) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)( fixnum_to_bignum(x_) );UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_x_1915_36) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_95),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_37) {
  P return_;
  P x_1914F5297;
  P x_1914F5296;
  P x_1914F5295;
  P c_funF5294;
  P nameF5293;
  P x_1914F5292;
  P x_1915F5291;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77;
LINK_STACK();
  ARG(return_, 0);
  T77 = FUNSHELL(0,fun_x_1915_36,2);
  x_1915F5291 = T77;
  FUNINIT(x_1915F5291, 2,FREEREF(0),return_);
  x_1914F5292 = FREEREF(0);
  nameF5293 = YPfalse;
  c_funF5294 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1914F5292,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1914F5292,LITREF(lit_95),x_1915F5291);
    x_1914F5295 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1914F5295,x_1915F5291);
    nameF5293 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1914F5295);
    x_1914F5296 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1914F5296,x_1915F5291);
    c_funF5294 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1914F5296);
    x_1914F5297 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1914F5297,x_1915F5291);
  } else {
    T9 = CALL2(1,x_1915F5291,LITREF(lit_7),x_1914F5292);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T16 = nameF5293;
  T15 = CALL1(1,VARREF(Ylst),T16);
  T18 = c_funF5294;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,LITREF(lit_9));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_26));
  T25 = nameF5293;
  T24 = CALL1(1,VARREF(Ylst),T25);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T26,LITREF(lit_9));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_43));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,LITREF(lit_9));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_30));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_29));
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,LITREF(lit_9));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T28 = CALL5(1,VARREF(YgooSmacrosYcat),T29,T33,T37,T38,LITREF(lit_9));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T42 = nameF5293;
  T41 = CALL1(1,VARREF(Ylst),T42);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T44 = CALL3(1,VARREF(YgooSmacrosYcat),T45,T46,LITREF(lit_9));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_30));
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T43,T47,LITREF(lit_9));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T27,T39,LITREF(lit_9));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_26));
  T54 = nameF5293;
  T53 = CALL1(1,VARREF(Ylst),T54);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_27));
  T52 = CALL3(1,VARREF(YgooSmacrosYcat),T53,T55,LITREF(lit_9));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T61 = CALL1(1,VARREF(Ylst),LITREF(lit_29));
  T59 = CALL3(1,VARREF(YgooSmacrosYcat),T60,T61,LITREF(lit_9));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T64 = CALL1(1,VARREF(Ylst),LITREF(lit_30));
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_43));
  T63 = CALL3(1,VARREF(YgooSmacrosYcat),T64,T65,LITREF(lit_9));
  T62 = CALL1(1,VARREF(Ylst),T63);
  T66 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T57 = CALL5(1,VARREF(YgooSmacrosYcat),T58,T62,T66,T67,LITREF(lit_9));
  T56 = CALL1(1,VARREF(Ylst),T57);
  T71 = nameF5293;
  T70 = CALL1(1,VARREF(Ylst),T71);
  T72 = CALL1(1,VARREF(Ylst),LITREF(lit_28));
  T75 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T76 = CALL1(1,VARREF(Ylst),LITREF(lit_30));
  T74 = CALL3(1,VARREF(YgooSmacrosYcat),T75,T76,LITREF(lit_9));
  T73 = CALL1(1,VARREF(Ylst),T74);
  T69 = CALL4(1,VARREF(YgooSmacrosYcat),T70,T72,T73,LITREF(lit_9));
  T68 = CALL1(1,VARREF(Ylst),T69);
  T49 = CALL5(1,VARREF(YgooSmacrosYcat),T50,T51,T56,T68,LITREF(lit_9));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T10 = CALL5(1,VARREF(YgooSmacrosYcat),T11,T12,T19,T48,LITREF(lit_9));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_38) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_37,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_K_39) {
  P x_,y_;
  P x_1916F5298;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  x_1916F5298 = YPfalse;
  YPfalse;
{  mpz_t z; mpz_init_zero(z);   T0 = YPfalse;
{  mpz_ior(z, bignum_to_mpz(x_), bignum_to_mpz(y_)); }
 x_1916F5298 = mpz_to_goo(z); }
UNLINK_STACK();
  RET(x_1916F5298);
}

LOCCODEDEF(fun_K_40) {
  P x_,y_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(YgooSbignumYto_bignum),x_);
  T0 = CALL2(1,VARREF(YgooSmathYK),T1,y_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_K_41) {
  P x_,y_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(YgooSbignumYto_bignum),y_);
  T0 = CALL2(1,VARREF(YgooSmathYK),x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_C_42) {
  P x_,y_;
  P x_1917F5299;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  x_1917F5299 = YPfalse;
  YPfalse;
{  mpz_t z; mpz_init_zero(z);   T0 = YPfalse;
{  mpz_xor(z, bignum_to_mpz(x_), bignum_to_mpz(y_)); }
 x_1917F5299 = mpz_to_goo(z); }
UNLINK_STACK();
  RET(x_1917F5299);
}

LOCCODEDEF(fun_C_43) {
  P x_,y_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(YgooSbignumYto_bignum),x_);
  T0 = CALL2(1,VARREF(YgooSmathYC),T1,y_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_C_44) {
  P x_,y_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(YgooSbignumYto_bignum),y_);
  T0 = CALL2(1,VARREF(YgooSmathYC),x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_B_45) {
  P x_,y_;
  P x_1918F5300;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  x_1918F5300 = YPfalse;
  YPfalse;
{  mpz_t z; mpz_init_zero(z);   T0 = YPfalse;
{  mpz_and(z, bignum_to_mpz(x_), bignum_to_mpz(y_)); }
 x_1918F5300 = mpz_to_goo(z); }
UNLINK_STACK();
  RET(x_1918F5300);
}

LOCCODEDEF(fun_B_46) {
  P x_,y_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(YgooSbignumYto_bignum),x_);
  T0 = CALL2(1,VARREF(YgooSmathYB),T1,y_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_B_47) {
  P x_,y_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(YgooSbignumYto_bignum),y_);
  T0 = CALL2(1,VARREF(YgooSmathYB),x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_N_48) {
  P x_;
  P x_1919F5301;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  x_1919F5301 = YPfalse;
  YPfalse;
{  mpz_t z; mpz_init_zero(z);   T0 = YPfalse;
{  mpz_com(z, bignum_to_mpz(x_)); }
 x_1919F5301 = mpz_to_goo(z); }
UNLINK_STACK();
  RET(x_1919F5301);
}

LOCCODEDEF(fun_bitQ_49) {
  P x_,y_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = (P)( mpz_tstbit(bignum_to_mpz(x_), iu(y_)) );  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_evenQ_50) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmathYoddQ),x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_oddQ_51) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = (P)( mpz_odd_p(bignum_to_mpz(x_)) );  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_truncS_52) {
  P x_,y_;
  P rF5303;
  P qF5302;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  qF5302 = YPint((P)0);
  rF5303 = YPint((P)0);
  YPfalse;
{  mpz_t q, r;
       mpz_init_zero(q);
       mpz_init_zero(r);
       mpz_tdiv_qr(q, r, bignum_to_mpz(x_), bignum_to_mpz(y_));
       qF5302 = mpz_to_goo(q);
       rF5303 = mpz_to_goo(r); }
  T0 = CALL2(1,VARREF(Ytup),qF5302,rF5303);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_truncS_53) {
  P x_,y_;
  P rF5305;
  P qF5304;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  qF5304 = YPint((P)0);
  rF5305 = YPint((P)0);
  YPfalse;
{  mpz_t   q;
       long    r;
       PINT    y  = iu(y_);
       PINT    d  = (y > 0) ? y : -y;
       mpz_ptr xm = bignum_to_mpz(x_);
       mpz_init_zero(q);
       r = mpz_tdiv_q_ui(q, xm, d);
       if(mpz_sgn(xm) < 0)
         r = -r;
       if(y < 0)
         mpz_neg(q,q);
       qF5304 = mpz_to_goo(q);
       rF5305 = YPib((P)r); }
  T0 = CALL2(1,VARREF(Ytup),qF5304,rF5305);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_truncS_54) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL2(1,VARREF(Ytup),YPint((P)0),x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pow_pos_55) {
  P x_,y_;
  P x_1920F5306;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  x_1920F5306 = YPfalse;
  YPfalse;
{  mpz_t z; mpz_init_zero(z);   T0 = YPfalse;
{  mpz_pow_ui(z, bignum_to_mpz(x_), iu(y_)); }
 x_1920F5306 = mpz_to_goo(z); }
UNLINK_STACK();
  RET(x_1920F5306);
}

LOCCODEDEF(fun_pow_56) {
  P x_,n_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
  T1 = CALL2(1,VARREF(YgooSmagYL),n_,YPint((P)0));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmathYneg),n_);
    T3 = CALL2(1,VARREF(YgooSbignumYpow_pos),x_,T4);
    T2 = CALL2(1,VARREF(YgooSmathYS),YPint((P)1),T3);
    T0 = T2;
  } else {
    T5 = CALL2(1,VARREF(YgooSbignumYpow_pos),x_,n_);
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_A_57) {
  P x_,y_;
  P xF5310;
  P xF5309;
  P xF5308;
  P xF5307;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = (P)( rawint_to_goo((PINT)(P)YPiA((xF5307 = x_, (xF5308 = xF5307, (P)YPiGG(xF5308,(P)2))),(xF5309 = y_, (xF5310 = xF5309, (P)YPiGG(xF5310,(P)2))))) );UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun___58) {
  P x_,y_;
  P xF5314;
  P xF5313;
  P xF5312;
  P xF5311;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = (P)( rawint_to_goo((PINT)(P)YPi_((xF5311 = x_, (xF5312 = xF5311, (P)YPiGG(xF5312,(P)2))),(xF5313 = y_, (xF5314 = xF5313, (P)YPiGG(xF5314,(P)2))))) );UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_T_59) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = (P)( rawint64_to_goo(((long long)YPiu(x_))*((long long)YPiu(y_))) );UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pow_60) {
  P x_,n_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
  T1 = CALL1(1,VARREF(YgooSbignumYto_bignum),x_);
  T0 = CALL2(1,VARREF(YgooSmathYpow),T1,n_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_LL_61) {
  P x_,a_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  T1 = CALL1(1,VARREF(YgooSbignumYto_bignum),x_);
  T0 = CALL2(1,VARREF(YgooSmathYLL),T1,a_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_as_62) {
  P t_,x_;
  P resF5315;
LINK_STACK();
  ARG(t_, 0);
  ARG(x_, 1);
  resF5315 = YPfalse;
  YPfalse;
{  INTFLO iz;
       iz.f = mpz_get_d(bignum_to_mpz(x_));
       resF5315 = (P)YPfb((P)iz.i); }
UNLINK_STACK();
  QRET(resF5315);
}

LOCCODEDEF(fun_truncS_63) {
  P x_,y_;
  P resultF5317;
  P dividedF5316;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T5 = CALL2(1,VARREF(YgooSmathYS),x_,y_);
  dividedF5316 = T5;
  resultF5317 = YPint((P)0);
  YPfalse;
{  INTFLO iz;  iz.i = (P)YPfu(x_);
     if (rawint_fits_fixnum((PINT)iz.f))
       resultF5317 = ib((PINT)iz.f);
     else { 
       mpz_t z;
       mpz_init_set_d(z, iz.f);
       resultF5317 = mpz_to_goo(z); } }
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),resultF5317);
  T3 = CALL2(1,VARREF(YgooSmathY_),dividedF5316,T4);
  T2 = CALL2(1,VARREF(YgooSmathYT),y_,T3);
  T1 = CALL2(1,VARREF(Ytup),resultF5317,T2);
UNLINK_STACK();
  RET(T1);
}

FUNCODEDEF(YgooSbignumYmpzUprint) {
  P num_;
  P T0;
LINK_STACK();
  ARG(num_, 0);
  T0 = YPfalse;
{  mpz_out_str(stdout, 10, bignum_to_mpz(num_)); }
UNLINK_STACK();
  QRET(T0);
}

P YgooSbignumY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177;
DEFCREGS();
  lit_0 = YPPsym((P)"gmp-initialize");
  lit_1 = Ynil;
  T0 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSbignumYgmp_initialize = YPfab_met(FUNCODEREF(YgooSbignumYgmp_initialize),T0,LITREF(lit_0),LITREF(lit_1),sloc(118),YPfalse);
  T1 = YgooSbignumYgmp_initialize;
  VARSET(YgooSbignumYgmp_initialize,T1);
  XCALL0(1,VARREF(YgooSbignumYgmp_initialize));
  lit_2 = YPPlist(1,YPPsym((P)"exp"));
  lit_3 = YPPlist(1,YPPsym((P)"return"));
  lit_4 = YPPsym((P)"x-1882");
  lit_5 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_6 = YPPsym((P)"with-returning");
  lit_7 = YPsb((P)"Match Pattern Failure");
  lit_8 = YPPsym((P)"let");
  lit_9 = Ynil;
  T4 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1882_1 = YPfab_met(FUNCODEREF(fun_x_1882_1),T4,LITREF(lit_4),LITREF(lit_5),YPfalse,YPfalse);
  T3 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPfab_met(FUNCODEREF(fun_2),T3,YPfalse,LITREF(lit_3),YPfalse,YPfalse);
  T2 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3 = YPfab_met(FUNCODEREF(fun_3),T2,YPfalse,LITREF(lit_2),YPfalse,YPfalse);
  T5 = fun_3;
  YPmacro(YPPsym((P)"goo/bignum"),YPPsym((P)"with-returning"),T5);
  lit_10 = YPPlist(1,YPPsym((P)"exp"));
  lit_11 = YPPlist(1,YPPsym((P)"return"));
  lit_12 = YPPsym((P)"x-1886");
  lit_13 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_14 = YPPsym((P)"with-gmp-returning");
  lit_15 = YPPsym((P)"c-ment");
  lit_16 = YPsb((P)" mpz_t ");
  lit_17 = YPsb((P)"; mpz_init_zero(z); ");
  lit_18 = YPsb((P)" ");
  lit_19 = YPsb((P)" = mpz_to_goo(");
  lit_20 = YPsb((P)"); ");
  T8 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1886_4 = YPfab_met(FUNCODEREF(fun_x_1886_4),T8,LITREF(lit_12),LITREF(lit_13),YPfalse,YPfalse);
  T7 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPfab_met(FUNCODEREF(fun_5),T7,YPfalse,LITREF(lit_11),YPfalse,YPfalse);
  T6 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPfab_met(FUNCODEREF(fun_6),T6,YPfalse,LITREF(lit_10),YPfalse,YPfalse);
  T9 = fun_6;
  YPmacro(YPPsym((P)"goo/bignum"),YPPsym((P)"with-gmp-returning"),T9);
  lit_21 = YPPlist(1,YPPsym((P)"exp"));
  lit_22 = YPPlist(1,YPPsym((P)"return"));
  lit_23 = YPPsym((P)"x-1890");
  lit_24 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_25 = YPPsym((P)"def-b-b");
  lit_26 = YPPsym((P)"dm");
  lit_27 = YPPsym((P)"inline");
  lit_28 = YPPsym((P)"x");
  lit_29 = YPPsym((P)"<bignum>");
  lit_30 = YPPsym((P)"y");
  lit_31 = YPPsym((P)"=>");
  lit_32 = YPPsym((P)"<int>");
  lit_33 = YPPsym((P)"z");
  lit_34 = YPsb((P)" ");
  lit_35 = YPsb((P)"(z, bignum_to_mpz(");
  lit_36 = YPsb((P)"), bignum_to_mpz(");
  lit_37 = YPsb((P)")); ");
  T12 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1890_7 = YPfab_met(FUNCODEREF(fun_x_1890_7),T12,LITREF(lit_23),LITREF(lit_24),YPfalse,YPfalse);
  T11 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPfab_met(FUNCODEREF(fun_8),T11,YPfalse,LITREF(lit_22),YPfalse,YPfalse);
  T10 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T10,YPfalse,LITREF(lit_21),YPfalse,YPfalse);
  T13 = fun_9;
  YPmacro(YPPsym((P)"goo/bignum"),YPPsym((P)"def-b-b"),T13);
  lit_38 = YPPlist(1,YPPsym((P)"exp"));
  lit_39 = YPPlist(1,YPPsym((P)"return"));
  lit_40 = YPPsym((P)"x-1894");
  lit_41 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_42 = YPPsym((P)"def-b-i");
  lit_43 = YPPsym((P)"<fixnum>");
  lit_44 = YPsb((P)" ");
  lit_45 = YPsb((P)"(z, bignum_to_mpz(");
  lit_46 = YPsb((P)"), iu(");
  lit_47 = YPsb((P)")); ");
  T16 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1894_10 = YPfab_met(FUNCODEREF(fun_x_1894_10),T16,LITREF(lit_40),LITREF(lit_41),YPfalse,YPfalse);
  T15 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T15,YPfalse,LITREF(lit_39),YPfalse,YPfalse);
  T14 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPfab_met(FUNCODEREF(fun_12),T14,YPfalse,LITREF(lit_38),YPfalse,YPfalse);
  T17 = fun_12;
  YPmacro(YPPsym((P)"goo/bignum"),YPPsym((P)"def-b-i"),T17);
  lit_48 = YPPlist(1,YPPsym((P)"exp"));
  lit_49 = YPPlist(1,YPPsym((P)"return"));
  lit_50 = YPPsym((P)"x-1898");
  lit_51 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_52 = YPPsym((P)"def-i-b");
  lit_53 = YPsb((P)" ");
  lit_54 = YPsb((P)"(z, iu(");
  lit_55 = YPsb((P)"), bignum_to_mpz(");
  lit_56 = YPsb((P)")); ");
  T20 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1898_13 = YPfab_met(FUNCODEREF(fun_x_1898_13),T20,LITREF(lit_50),LITREF(lit_51),YPfalse,YPfalse);
  T19 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPfab_met(FUNCODEREF(fun_14),T19,YPfalse,LITREF(lit_49),YPfalse,YPfalse);
  T18 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPfab_met(FUNCODEREF(fun_15),T18,YPfalse,LITREF(lit_48),YPfalse,YPfalse);
  T21 = fun_15;
  YPmacro(YPPsym((P)"goo/bignum"),YPPsym((P)"def-i-b"),T21);
  lit_57 = YPPlist(1,YPPsym((P)"exp"));
  lit_58 = YPPlist(1,YPPsym((P)"return"));
  lit_59 = YPPsym((P)"x-1902");
  lit_60 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_61 = YPPsym((P)"def-b");
  lit_62 = YPsb((P)" ");
  lit_63 = YPsb((P)"(z, bignum_to_mpz(");
  lit_64 = YPsb((P)")); ");
  T24 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1902_16 = YPfab_met(FUNCODEREF(fun_x_1902_16),T24,LITREF(lit_59),LITREF(lit_60),YPfalse,YPfalse);
  T23 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPfab_met(FUNCODEREF(fun_17),T23,YPfalse,LITREF(lit_58),YPfalse,YPfalse);
  T22 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T22,YPfalse,LITREF(lit_57),YPfalse,YPfalse);
  T25 = fun_18;
  YPmacro(YPPsym((P)"goo/bignum"),YPPsym((P)"def-b"),T25);
  lit_65 = YPPsym((P)"+");
  lit_66 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_A_19 = YPfab_met_inlineable(FUNCODEREF(fun_A_19),T26,LITREF(lit_65),LITREF(lit_66),sloc(159),YPfalse);
  T28 = VARREF_OR(YgooSmathYA,YPfalse);
  T29 = fun_A_19;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooSmathYA,T27);
  lit_67 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T30 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_A_20 = YPfab_met_inlineable(FUNCODEREF(fun_A_20),T30,LITREF(lit_65),LITREF(lit_67),sloc(161),YPfalse);
  T32 = VARREF_OR(YgooSmathYA,YPfalse);
  T33 = fun_A_20;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooSmathYA,T31);
  lit_68 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_A_21 = YPfab_met_inlineable(FUNCODEREF(fun_A_21),T34,LITREF(lit_65),LITREF(lit_68),sloc(168),YPfalse);
  T36 = VARREF_OR(YgooSmathYA,YPfalse);
  T37 = fun_A_21;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YgooSmathYA,T35);
  lit_69 = YPPsym((P)"-");
  lit_70 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T38 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun___22 = YPfab_met_inlineable(FUNCODEREF(fun___22),T38,LITREF(lit_69),LITREF(lit_70),sloc(171),YPfalse);
  T40 = VARREF_OR(YgooSmathY_,YPfalse);
  T41 = fun___22;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooSmathY_,T39);
  lit_71 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T42 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun___23 = YPfab_met_inlineable(FUNCODEREF(fun___23),T42,LITREF(lit_69),LITREF(lit_71),sloc(173),YPfalse);
  T44 = VARREF_OR(YgooSmathY_,YPfalse);
  T45 = fun___23;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooSmathY_,T43);
  lit_72 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T46 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun___24 = YPfab_met_inlineable(FUNCODEREF(fun___24),T46,LITREF(lit_69),LITREF(lit_72),sloc(180),YPfalse);
  T48 = VARREF_OR(YgooSmathY_,YPfalse);
  T49 = fun___24;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YgooSmathY_,T47);
  lit_73 = YPPsym((P)"*");
  lit_74 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T50 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_T_25 = YPfab_met_inlineable(FUNCODEREF(fun_T_25),T50,LITREF(lit_73),LITREF(lit_74),sloc(183),YPfalse);
  T52 = VARREF_OR(YgooSmathYT,YPfalse);
  T53 = fun_T_25;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooSmathYT,T51);
  lit_75 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T54 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_T_26 = YPfab_met_inlineable(FUNCODEREF(fun_T_26),T54,LITREF(lit_73),LITREF(lit_75),sloc(184),YPfalse);
  T56 = VARREF_OR(YgooSmathYT,YPfalse);
  T57 = fun_T_26;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooSmathYT,T55);
  lit_76 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T58 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_T_27 = YPfab_met_inlineable(FUNCODEREF(fun_T_27),T58,LITREF(lit_73),LITREF(lit_76),sloc(185),YPfalse);
  T60 = VARREF_OR(YgooSmathYT,YPfalse);
  T61 = fun_T_27;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooSmathYT,T59);
  lit_77 = YPPsym((P)"neg");
  lit_78 = YPPlist(1,YPPsym((P)"x"));
  T62 = YPfab_sig(YPPlist(1,VARREF(YLbignumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_neg_28 = YPfab_met_inlineable(FUNCODEREF(fun_neg_28),T62,LITREF(lit_77),LITREF(lit_78),sloc(186),YPfalse);
  T64 = VARREF_OR(YgooSmathYneg,YPfalse);
  T65 = fun_neg_28;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooSmathYneg,T63);
  lit_79 = YPPsym((P)">>");
  lit_80 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T66 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_GG_29 = YPfab_met_inlineable(FUNCODEREF(fun_GG_29),T66,LITREF(lit_79),LITREF(lit_80),sloc(187),YPfalse);
  T68 = VARREF_OR(YgooSmathYGG,YPfalse);
  T69 = fun_GG_29;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooSmathYGG,T67);
  lit_81 = YPPsym((P)"<<");
  lit_82 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T70 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_LL_30 = YPfab_met_inlineable(FUNCODEREF(fun_LL_30),T70,LITREF(lit_81),LITREF(lit_82),sloc(188),YPfalse);
  T72 = VARREF_OR(YgooSmathYLL,YPfalse);
  T73 = fun_LL_30;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooSmathYLL,T71);
  lit_83 = YPPsym((P)"<");
  lit_84 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T74 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_31 = YPfab_met_inlineable(FUNCODEREF(fun_L_31),T74,LITREF(lit_83),LITREF(lit_84),sloc(196),YPfalse);
  T76 = VARREF_OR(YgooSmagYL,YPfalse);
  T77 = fun_L_31;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YgooSmagYL,T75);
  lit_85 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T78 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_32 = YPfab_met_inlineable(FUNCODEREF(fun_L_32),T78,LITREF(lit_83),LITREF(lit_85),sloc(199),YPfalse);
  T80 = VARREF_OR(YgooSmagYL,YPfalse);
  T81 = fun_L_32;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YgooSmagYL,T79);
  lit_86 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T82 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_33 = YPfab_met_inlineable(FUNCODEREF(fun_L_33),T82,LITREF(lit_83),LITREF(lit_86),sloc(202),YPfalse);
  T84 = VARREF_OR(YgooSmagYL,YPfalse);
  T85 = fun_L_33;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YgooSmagYL,T83);
  lit_87 = YPPsym((P)"==");
  lit_88 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T86 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_34 = YPfab_met_inlineable(FUNCODEREF(fun_EE_34),T86,LITREF(lit_87),LITREF(lit_88),sloc(205),YPfalse);
  T88 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T89 = fun_EE_34;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YgooSmacrosYEE,T87);
  lit_89 = YPPsym((P)"to-bignum");
  lit_90 = YPPlist(1,YPPsym((P)"x"));
  T90 = YPfab_sig(YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLbignumG),Ynil);
  YgooSbignumYto_bignum = YPfab_met_inlineable(FUNCODEREF(YgooSbignumYto_bignum),T90,LITREF(lit_89),LITREF(lit_90),sloc(208),YPfalse);
  T91 = YgooSbignumYto_bignum;
  VARSET(YgooSbignumYto_bignum,T91);
  lit_91 = YPPlist(1,YPPsym((P)"exp"));
  lit_92 = YPPlist(1,YPPsym((P)"return"));
  lit_93 = YPPsym((P)"x-1915");
  lit_94 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_95 = YPPsym((P)"def-log-ops");
  lit_96 = YPPsym((P)"seq");
  T94 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1915_36 = YPfab_met(FUNCODEREF(fun_x_1915_36),T94,LITREF(lit_93),LITREF(lit_94),YPfalse,YPfalse);
  T93 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPfab_met(FUNCODEREF(fun_37),T93,YPfalse,LITREF(lit_92),YPfalse,YPfalse);
  T92 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPfab_met(FUNCODEREF(fun_38),T92,YPfalse,LITREF(lit_91),YPfalse,YPfalse);
  T95 = fun_38;
  YPmacro(YPPsym((P)"goo/bignum"),YPPsym((P)"def-log-ops"),T95);
  lit_97 = YPPsym((P)"|");
  lit_98 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T96 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_K_39 = YPfab_met_inlineable(FUNCODEREF(fun_K_39),T96,LITREF(lit_97),LITREF(lit_98),sloc(218),YPfalse);
  T98 = VARREF_OR(YgooSmathYK,YPfalse);
  T99 = fun_K_39;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooSmathYK,T97);
  lit_99 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T100 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_K_40 = YPfab_met_inlineable(FUNCODEREF(fun_K_40),T100,LITREF(lit_97),LITREF(lit_99),sloc(218),YPfalse);
  T102 = VARREF_OR(YgooSmathYK,YPfalse);
  T103 = fun_K_40;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooSmathYK,T101);
  lit_100 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T104 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_K_41 = YPfab_met_inlineable(FUNCODEREF(fun_K_41),T104,LITREF(lit_97),LITREF(lit_100),sloc(218),YPfalse);
  T106 = VARREF_OR(YgooSmathYK,YPfalse);
  T107 = fun_K_41;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooSmathYK,T105);
  lit_101 = YPPsym((P)"^");
  lit_102 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T108 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_C_42 = YPfab_met_inlineable(FUNCODEREF(fun_C_42),T108,LITREF(lit_101),LITREF(lit_102),sloc(219),YPfalse);
  T110 = VARREF_OR(YgooSmathYC,YPfalse);
  T111 = fun_C_42;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YgooSmathYC,T109);
  lit_103 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T112 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_C_43 = YPfab_met_inlineable(FUNCODEREF(fun_C_43),T112,LITREF(lit_101),LITREF(lit_103),sloc(219),YPfalse);
  T114 = VARREF_OR(YgooSmathYC,YPfalse);
  T115 = fun_C_43;
  T113 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T114,T115);
  VARSET(YgooSmathYC,T113);
  lit_104 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T116 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_C_44 = YPfab_met_inlineable(FUNCODEREF(fun_C_44),T116,LITREF(lit_101),LITREF(lit_104),sloc(219),YPfalse);
  T118 = VARREF_OR(YgooSmathYC,YPfalse);
  T119 = fun_C_44;
  T117 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T118,T119);
  VARSET(YgooSmathYC,T117);
  lit_105 = YPPsym((P)"&");
  lit_106 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T120 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_B_45 = YPfab_met_inlineable(FUNCODEREF(fun_B_45),T120,LITREF(lit_105),LITREF(lit_106),sloc(220),YPfalse);
  T122 = VARREF_OR(YgooSmathYB,YPfalse);
  T123 = fun_B_45;
  T121 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T122,T123);
  VARSET(YgooSmathYB,T121);
  lit_107 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T124 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_B_46 = YPfab_met_inlineable(FUNCODEREF(fun_B_46),T124,LITREF(lit_105),LITREF(lit_107),sloc(220),YPfalse);
  T126 = VARREF_OR(YgooSmathYB,YPfalse);
  T127 = fun_B_46;
  T125 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T126,T127);
  VARSET(YgooSmathYB,T125);
  lit_108 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T128 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_B_47 = YPfab_met_inlineable(FUNCODEREF(fun_B_47),T128,LITREF(lit_105),LITREF(lit_108),sloc(220),YPfalse);
  T130 = VARREF_OR(YgooSmathYB,YPfalse);
  T131 = fun_B_47;
  T129 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T130,T131);
  VARSET(YgooSmathYB,T129);
  lit_109 = YPPsym((P)"~");
  lit_110 = YPPlist(1,YPPsym((P)"x"));
  T132 = YPfab_sig(YPPlist(1,VARREF(YLbignumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_N_48 = YPfab_met_inlineable(FUNCODEREF(fun_N_48),T132,LITREF(lit_109),LITREF(lit_110),sloc(222),YPfalse);
  T134 = VARREF_OR(YgooSmathYN,YPfalse);
  T135 = fun_N_48;
  T133 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T134,T135);
  VARSET(YgooSmathYN,T133);
  lit_111 = YPPsym((P)"bit?");
  lit_112 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T136 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_bitQ_49 = YPfab_met_inlineable(FUNCODEREF(fun_bitQ_49),T136,LITREF(lit_111),LITREF(lit_112),sloc(224),YPfalse);
  T138 = VARREF_OR(YgooSmathYbitQ,YPfalse);
  T139 = fun_bitQ_49;
  T137 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T138,T139);
  VARSET(YgooSmathYbitQ,T137);
  lit_113 = YPPsym((P)"even?");
  lit_114 = YPPlist(1,YPPsym((P)"x"));
  T140 = YPfab_sig(YPPlist(1,VARREF(YLbignumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_evenQ_50 = YPfab_met_inlineable(FUNCODEREF(fun_evenQ_50),T140,LITREF(lit_113),LITREF(lit_114),sloc(227),YPfalse);
  T142 = VARREF_OR(YgooSmathYevenQ,YPfalse);
  T143 = fun_evenQ_50;
  T141 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T142,T143);
  VARSET(YgooSmathYevenQ,T141);
  lit_115 = YPPsym((P)"odd?");
  lit_116 = YPPlist(1,YPPsym((P)"x"));
  T144 = YPfab_sig(YPPlist(1,VARREF(YLbignumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_oddQ_51 = YPfab_met_inlineable(FUNCODEREF(fun_oddQ_51),T144,LITREF(lit_115),LITREF(lit_116),sloc(230),YPfalse);
  T146 = VARREF_OR(YgooSmathYoddQ,YPfalse);
  T147 = fun_oddQ_51;
  T145 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T146,T147);
  VARSET(YgooSmathYoddQ,T145);
  lit_117 = YPPsym((P)"trunc/");
  lit_118 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T149 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T148 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),T149,Ynil);
  fun_truncS_52 = YPfab_met(FUNCODEREF(fun_truncS_52),T148,LITREF(lit_117),LITREF(lit_118),sloc(236),YPfalse);
  T151 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T152 = fun_truncS_52;
  T150 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T151,T152);
  VARSET(YgooSmathYtruncS,T150);
  lit_119 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T154 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T153 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),T154,Ynil);
  fun_truncS_53 = YPfab_met(FUNCODEREF(fun_truncS_53),T153,LITREF(lit_117),LITREF(lit_119),sloc(246),YPfalse);
  T156 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T157 = fun_truncS_53;
  T155 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T156,T157);
  VARSET(YgooSmathYtruncS,T155);
  lit_120 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T159 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T158 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLbignumG)),YPfalse,YPint((P)2),T159,Ynil);
  fun_truncS_54 = YPfab_met(FUNCODEREF(fun_truncS_54),T158,LITREF(lit_117),LITREF(lit_120),sloc(263),YPfalse);
  T161 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T162 = fun_truncS_54;
  T160 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T161,T162);
  VARSET(YgooSmathYtruncS,T160);
  lit_121 = YPPsym((P)"pow-pos");
  lit_122 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T163 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_pow_pos_55 = YPfab_met_inlineable(FUNCODEREF(fun_pow_pos_55),T163,LITREF(lit_121),LITREF(lit_122),sloc(268),YPfalse);
  T165 = VARREF_OR(YgooSbignumYpow_pos,YPfalse);
  T166 = fun_pow_pos_55;
  T164 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T165,T166);
  VARSET(YgooSbignumYpow_pos,T164);
  lit_123 = YPPsym((P)"pow");
  lit_124 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  T167 = YPfab_sig(YPPlist(2,VARREF(YLbignumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLbignumG),Ynil);
  fun_pow_56 = YPfab_met(FUNCODEREF(fun_pow_56),T167,LITREF(lit_123),LITREF(lit_124),sloc(270),YPfalse);
  T169 = VARREF_OR(YgooSmathYpow,YPfalse);
  T170 = fun_pow_56;
  T168 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T169,T170);
  VARSET(YgooSmathYpow,T168);
  lit_125 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T173 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  T172 = fun_A_57 = YPfab_met_inlineable(FUNCODEREF(fun_A_57),T173,LITREF(lit_65),LITREF(lit_125),sloc(275),YPfalse);
  T176 = VARREF_OR(YgooSmathYA,YPfalse);
  T177 = fun_A_57;
  T175 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T176,T177);
  T174 = VARSET(YgooSmathYA,T175);
  T171 = T174;
  return T171;
}

P YgooSbignumY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
DEFCREGS();
  lit_126 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun___58 = YPfab_met_inlineable(FUNCODEREF(fun___58),T0,LITREF(lit_69),LITREF(lit_126),sloc(278),YPfalse);
  T2 = VARREF_OR(YgooSmathY_,YPfalse);
  T3 = fun___58;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSmathY_,T1);
  lit_127 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_T_59 = YPfab_met_inlineable(FUNCODEREF(fun_T_59),T4,LITREF(lit_73),LITREF(lit_127),sloc(285),YPfalse);
  T6 = VARREF_OR(YgooSmathYT,YPfalse);
  T7 = fun_T_59;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooSmathYT,T5);
  lit_128 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  T8 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_60 = YPfab_met(FUNCODEREF(fun_pow_60),T8,LITREF(lit_123),LITREF(lit_128),sloc(289),YPfalse);
  T10 = VARREF_OR(YgooSmathYpow,YPfalse);
  T11 = fun_pow_60;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooSmathYpow,T9);
  lit_129 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_LL_61 = YPfab_met_inlineable(FUNCODEREF(fun_LL_61),T12,LITREF(lit_81),LITREF(lit_129),sloc(293),YPfalse);
  T14 = VARREF_OR(YgooSmathYLL,YPfalse);
  T15 = fun_LL_61;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooSmathYLL,T13);
  lit_130 = YPPsym((P)"as");
  lit_131 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"x"));
  T17 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T16 = YPfab_sig(YPPlist(2,T17,VARREF(YLbignumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_as_62 = YPfab_met(FUNCODEREF(fun_as_62),T16,LITREF(lit_130),LITREF(lit_131),sloc(296),YPfalse);
  T19 = VARREF_OR(YgooStypesYas,YPfalse);
  T20 = fun_as_62;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YgooStypesYas,T18);
  lit_132 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T22 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLfloG));
  T21 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),T22,Ynil);
  fun_truncS_63 = YPfab_met(FUNCODEREF(fun_truncS_63),T21,LITREF(lit_117),LITREF(lit_132),sloc(302),YPfalse);
  T24 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T25 = fun_truncS_63;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooSmathYtruncS,T23);
  lit_133 = YPPsym((P)"mpz_print");
  lit_134 = YPPlist(1,YPPsym((P)"num"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSbignumYmpzUprint = YPfab_met(FUNCODEREF(YgooSbignumYmpzUprint),T26,LITREF(lit_133),LITREF(lit_134),sloc(314),YPfalse);
  T27 = YgooSbignumYmpzUprint;
  VARSET(YgooSbignumYmpzUprint,T27);
  T28 = YPfalse;
  return T28;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
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
extern MODULE_INFO module_info_gooSconditions;
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
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSlate_macros;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
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
  {"def-i-b", PVAR, NULL},
  {"pow-pos", CVAR, &YgooSbignumYpow_pos},
  {"def-log-ops", PVAR, NULL},
  {"def-b-b", PVAR, NULL},
  {"with-gmp-returning", PVAR, NULL},
  {"def-b-i", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"with-returning", PVAR, NULL},
  {"def-b", PVAR, NULL},
  {"mpz_print", CVAR, &YgooSbignumYmpzUprint},
  {"---main-0---", PVAR, NULL},
  {"to-bignum", CVAR, &YgooSbignumYto_bignum},
  {"gmp-initialize", CVAR, &YgooSbignumYgmp_initialize},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"mpz_print", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSbignum;
MODULE_INFO module_info_gooSbignum = {
  "goo/bignum",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);

/* EXPRESSION: */

extern void load_module_gooSbignum (void);

void load_module_gooSbignum (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();

  (P)YgooSbignumY___main_0___();
  (P)YgooSbignumY___main_1___();

}

/* END OF GENERATED CODE. */
