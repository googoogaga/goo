/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo */

EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSlstYlstT,"goo/cols/lst","lst*");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YPtrue,"goo/boot","%true");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YPfalse,"goo/boot","%false");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YOdo,"goo/boot","@do");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSlate_macrosYTgensym_counterT,"goo/late-macros","*gensym-counter*");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSlocYas_c,"goo/loc","as-c");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
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
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YOmap,"goo/boot","@map");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSioSportYport_filename,"goo/io/port","port-filename");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSlocYas_goo,"goo/loc","as-goo");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(Yopts_location,"goo/boot","opts-location");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YLintG,"goo/boot","<int>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YOnew,"goo/boot","@new");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSfunctionalYzipped,"goo/functional","zipped");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YOfold,"goo/boot","@fold");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooSlogYE,"goo/log","=");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YgooY___main_0___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

P YgooY___main_0___() {
  P T0;
DEFCREGS();
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooSsym;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSany},
  {&module_info_gooSmag},
  {&module_info_gooSlog},
  {&module_info_gooSchr},
  {&module_info_gooSmath},
  {&module_info_gooSfunctional},
  {&module_info_gooSloc},
  {&module_info_gooSsym},
  {&module_info_gooSconditions},
  {&module_info_gooScols},
  {&module_info_gooSpacker},
  {&module_info_gooSioSwrite},
  {&module_info_gooSioSread},
  {&module_info_gooSioSport},
  {&module_info_gooSlate_macros},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"fold+", &module_info_gooScolsScol, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"as-log", &module_info_gooSlog, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"msg*", &module_info_gooSioSwrite, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"$char-long-names", &module_info_gooSioSread, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"lst*", &module_info_gooScolsSlst, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"read-delimited-list", &module_info_gooSioSread, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
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
  {"%clone", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"exp", &module_info_gooSmath, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"*gensym-counter*", &module_info_gooSlate_macros, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
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
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"port-filename", &module_info_gooSioSport, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"as-goo", &module_info_gooSloc, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"recurring-write", &module_info_gooSioSwrite, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"zipped", &module_info_gooSfunctional, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"write-type", &module_info_gooSioSwrite, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"fold+", NULL},
  {"napp", NULL},
  {"push!", NULL},
  {"esc", NULL},
  {"<=", NULL},
  {"round", NULL},
  {"head-setter", NULL},
  {"zap!", NULL},
  {"subtype?", NULL},
  {"%next-methods", NULL},
  {"tab-growth-threshold", NULL},
  {"<file-out-port>", NULL},
  {"<str-out-port>", NULL},
  {"packing-with", NULL},
  {"app", NULL},
  {"<file-port>", NULL},
  {"head", NULL},
  {"fun-val", NULL},
  {"tail", NULL},
  {"app-sup", NULL},
  {"class-direct-props", NULL},
  {"pushf", NULL},
  {"~", NULL},
  {"num-to-str", NULL},
  {"fun-mets", NULL},
  {"@==", NULL},
  {"<property-unbound-error>", NULL},
  {"<internal-error>", NULL},
  {"pair", NULL},
  {"pick", NULL},
  {"<as-error>", NULL},
  {"ct-also", NULL},
  {"sort-by!", NULL},
  {"/", NULL},
  {"==", NULL},
  {"elt-or", NULL},
  {"<str>", NULL},
  {"handler-info-message", NULL},
  {"sig", NULL},
  {"ct", NULL},
  {"class-ancestors", NULL},
  {"1st", NULL},
  {"ceil", NULL},
  {"port-index", NULL},
  {"<arity-error>", NULL},
  {"to-str", NULL},
  {"<simple-error>", NULL},
  {"<range>", NULL},
  {">>>", NULL},
  {"case", NULL},
  {"%define-method", NULL},
  {"cond", NULL},
  {"range-error-collection", NULL},
  {"tab-shrink-threshold", NULL},
  {"<cycle>", NULL},
  {"mod+", NULL},
  {"match-atom", NULL},
  {"sub-setter", NULL},
  {"case-insensitive-string-equal", NULL},
  {"<fun>", NULL},
  {"del!", NULL},
  {"bound?", NULL},
  {"low-elt", NULL},
  {"for", NULL},
  {"<flat>", NULL},
  {"keys", NULL},
  {"~==", NULL},
  {"let", NULL},
  {"<set>", NULL},
  {"prop-owner", NULL},
  {"floor", NULL},
  {"del-dups", NULL},
  {"rev!", NULL},
  {"@not", NULL},
  {"as", NULL},
  {"use/mangle", NULL},
  {"read-from-string", NULL},
  {"prop-value-at", NULL},
  {"$e", NULL},
  {"*", NULL},
  {"any2?", NULL},
  {"<col.>", NULL},
  {"elts", NULL},
  {"sup", NULL},
  {"class-name", NULL},
  {"dm", NULL},
  {"<list>", NULL},
  {"while", NULL},
  {"num-to-str-base", NULL},
  {"<port>", NULL},
  {"*max-print-length*", NULL},
  {"exported", NULL},
  {"fun-name", NULL},
  {"zero?", NULL},
  {"prop-bound?", NULL},
  {"case-insensitive-string-hash", NULL},
  {"<enum>", NULL},
  {"<seq>", NULL},
  {"<col!>", NULL},
  {"<lst>", NULL},
  {"1-", NULL},
  {"condition-message", NULL},
  {"when", NULL},
  {"split", NULL},
  {"mod", NULL},
  {"dv", NULL},
  {"puts", NULL},
  {"<return-type-error>", NULL},
  {"%pair", NULL},
  {"call-error-function", NULL},
  {"fab-setter-name", NULL},
  {"pos", NULL},
  {"met-app?", NULL},
  {"eof-object?", NULL},
  {"fun-arity", NULL},
  {"all?", NULL},
  {"<seq!>", NULL},
  {"key-test", NULL},
  {"~=", NULL},
  {"^", NULL},
  {"<packer>", NULL},
  {"tup", NULL},
  {"logn", NULL},
  {"<unbound-error>", NULL},
  {"prop-value-setter", NULL},
  {"elt!", NULL},
  {"into", NULL},
  {"newline", NULL},
  {"neg?", NULL},
  {"%prop", NULL},
  {"log", NULL},
  {"col-res-type", NULL},
  {"<seq.>", NULL},
  {"<flo>", NULL},
  {"<map>", NULL},
  {"<tup>", NULL},
  {"assert-error", NULL},
  {"lst", NULL},
  {"sub*", NULL},
  {"popf", NULL},
  {"say", NULL},
  {"t?", NULL},
  {"<ambiguous-method-error>", NULL},
  {"digit?", NULL},
  {"map2", NULL},
  {"*max-print-depth*", NULL},
  {"set", NULL},
  {"key-type", NULL},
  {"div", NULL},
  {"match-unquote", NULL},
  {"curry", NULL},
  {"<str-in-port>", NULL},
  {"macro-error", NULL},
  {"neg", NULL},
  {"product-elts", NULL},
  {"<each>", NULL},
  {"sqrt", NULL},
  {"items", NULL},
  {"unbound-variable-error-variable", NULL},
  {"case-by", NULL},
  {"any?", NULL},
  {"renew", NULL},
  {"|", NULL},
  {"ord-app-mets", NULL},
  {"macro-error-arguments", NULL},
  {"add!", NULL},
  {"write-to-string", NULL},
  {"write", NULL},
  {"<unbound-variable-error>", NULL},
  {"alpha?", NULL},
  {"<zip>", NULL},
  {"-", NULL},
  {"ins", NULL},
  {"t<", NULL},
  {"flo-bits", NULL},
  {"elt-default", NULL},
  {"all2?", NULL},
  {"emit", NULL},
  {"gensym", NULL},
  {"t*", NULL},
  {"fab-class", NULL},
  {"range", NULL},
  {"prop-value", NULL},
  {"elt-type", NULL},
  {"$default-handler-info", NULL},
  {"port-contents", NULL},
  {"<property-error>", NULL},
  {"peek", NULL},
  {"prop-value-at-setter", NULL},
  {"assert", NULL},
  {"<col>", NULL},
  {"first-then", NULL},
  {"abs", NULL},
  {"fun-specs", NULL},
  {"now-key", NULL},
  {"out", NULL},
  {"packing-in", NULL},
  {"<step>", NULL},
  {"map", NULL},
  {"atan2", NULL},
  {"to-digit", NULL},
  {"may-isa?", NULL},
  {"fun-nary?", NULL},
  {"fill", NULL},
  {"<no-applicable-methods-error>", NULL},
  {"seq", NULL},
  {"quasiquote", NULL},
  {"pub", NULL},
  {"rcurry", NULL},
  {"1+", NULL},
  {"t=", NULL},
  {"add-prop", NULL},
  {"%prop-unbound-error", NULL},
  {"mem?", NULL},
  {"do3", NULL},
  {"<loc>", NULL},
  {"prop-init", NULL},
  {"if", NULL},
  {"<in-port>", NULL},
  {"decf", NULL},
  {"post", NULL},
  {"<file-opening-error>", NULL},
  {"repeat", NULL},
  {"prefix?", NULL},
  {"atan", NULL},
  {"to-upper", NULL},
  {"cat!", NULL},
  {"use/export", NULL},
  {"isqrt", NULL},
  {"use/include", NULL},
  {"<sym>", NULL},
  {"unless", NULL},
  {"<property-not-found-error>", NULL},
  {"union-elts", NULL},
  {"property-error-owner", NULL},
  {"<met>", NULL},
  {"class-children", NULL},
  {"match-sublist", NULL},
  {"gen-add-met", NULL},
  {"fun-names", NULL},
  {"map-keyed", NULL},
  {"fabs", NULL},
  {"packer-res", NULL},
  {"packed", NULL},
  {"<unknown-function-error>", NULL},
  {"read", NULL},
  {"round/", NULL},
  {"$max-int", NULL},
  {"fin", NULL},
  {"ready?", NULL},
  {"unzip", NULL},
  {"elt-setter", NULL},
  {"t+", NULL},
  {"<argument-type-error>", NULL},
  {"try", NULL},
  {"put", NULL},
  {"acos", NULL},
  {"to-lower", NULL},
  {"do", NULL},
  {"and", NULL},
  {"*print-base*", NULL},
  {"do2", NULL},
  {"match-nul-list", NULL},
  {"loc-val-setter", NULL},
  {"nxt", NULL},
  {"<prop>", NULL},
  {"address-of", NULL},
  {"@checked-next-methods", NULL},
  {"<vec>", NULL},
  {"str", NULL},
  {"range-error-key", NULL},
  {"<int>", NULL},
  {"packing", NULL},
  {"each", NULL},
  {"<gen>", NULL},
  {"ddv", NULL},
  {"not", NULL},
  {"var-type", NULL},
  {"app-args", NULL},
  {"cat-sym", NULL},
  {"do-keyed", NULL},
  {"asin", NULL},
  {"upper?", NULL},
  {"zap", NULL},
  {"<narity-error>", NULL},
  {"<product>", NULL},
  {"handler-info-arguments", NULL},
  {"<num>", NULL},
  {"packer-add", NULL},
  {"ds", NULL},
  {"no-next-methods-error", NULL},
  {"low-elt-setter", NULL},
  {"<arithmetic-error>", NULL},
  {"in", NULL},
  {"elt", NULL},
  {"prop-type", NULL},
  {"&", NULL},
  {"find-or", NULL},
  {"ceil/", NULL},
  {"empty", NULL},
  {"col", NULL},
  {"app-filename", NULL},
  {"pos?", NULL},
  {"export", NULL},
  {"clone", NULL},
  {"push", NULL},
  {"fab-pair", NULL},
  {"zip", NULL},
  {"<union>", NULL},
  {"msg", NULL},
  {"cycle", NULL},
  {"dp", NULL},
  {"type-class", NULL},
  {"loc-val", NULL},
  {"tanh", NULL},
  {"lower?", NULL},
  {"<out-port>", NULL},
  {"gets", NULL},
  {"pack", NULL},
  {"compose", NULL},
  {"empty?", NULL},
  {"<io-error>", NULL},
  {"loc", NULL},
  {"pop", NULL},
  {"<stack-overflow>", NULL},
  {"packer-fab", NULL},
  {"dp!", NULL},
  {"<assert-error>", NULL},
  {"rotf", NULL},
  {"tail-setter", NULL},
  {"del", NULL},
  {"<subclass>", NULL},
  {"mif", NULL},
  {"<chr>", NULL},
  {"macro-error-name", NULL},
  {"or", NULL},
  {"error", NULL},
  {"finds", NULL},
  {"del-vals!", NULL},
  {"with-port", NULL},
  {"suffix?", NULL},
  {"fill!", NULL},
  {"2nd", NULL},
  {"+", NULL},
  {"<restart>", NULL},
  {"<compiler-error>", NULL},
  {"df", NULL},
  {"<syntax-error>", NULL},
  {"now-setter", NULL},
  {"cosh", NULL},
  {"fin?", NULL},
  {"<str-tab>", NULL},
  {"<keyboard-interrupt>", NULL},
  {"odd?", NULL},
  {"default-handler", NULL},
  {"or/set", NULL},
  {"$min-int", NULL},
  {"max", NULL},
  {"class-parents", NULL},
  {"identity", NULL},
  {"class-of", NULL},
  {"cat2", NULL},
  {"sub*-setter", NULL},
  {"<singleton>", NULL},
  {"fab", NULL},
  {"d.", NULL},
  {"class-props", NULL},
  {"<macro-error>", NULL},
  {"find", NULL},
  {"enum", NULL},
  {"open", NULL},
  {"sort!", NULL},
  {"def", NULL},
  {"pow", NULL},
  {"modincf", NULL},
  {"nul?", NULL},
  {"fold", NULL},
  {"list", NULL},
  {">", NULL},
  {"arity-error", NULL},
  {"narity-error", NULL},
  {"dg", NULL},
  {"type-error-value", NULL},
  {"bit?", NULL},
  {"type-error-type", NULL},
  {"sinh", NULL},
  {"<no-next-methods-error>", NULL},
  {"macro-expand", NULL},
  {"id-hash", NULL},
  {"<call-error>", NULL},
  {"even?", NULL},
  {"prop-setter", NULL},
  {"call-error-arguments", NULL},
  {"floor/", NULL},
  {"pe-msg", NULL},
  {"<", NULL},
  {"dup", NULL},
  {"<log>", NULL},
  {"fab-handler", NULL},
  {"fun", NULL},
  {"<tab>", NULL},
  {"reject", NULL},
  {"force-out", NULL},
  {"incf", NULL},
  {"$pi", NULL},
  {"<simple-handler-info>", NULL},
  {"join", NULL},
  {"<handler>", NULL},
  {"type-object", NULL},
  {"<error>", NULL},
  {"<property-type-error>", NULL},
  {"<opts>", NULL},
  {"len/fill-setter", NULL},
  {"=", NULL},
  {"handler-matches?", NULL},
  {"del-dups!", NULL},
  {"<any>", NULL},
  {"use", NULL},
  {"tan", NULL},
  {"cat", NULL},
  {"tab-hash", NULL},
  {"from", NULL},
  {"writeln", NULL},
  {"packer", NULL},
  {"new", NULL},
  {"tab-growth-factor", NULL},
  {"trunc", NULL},
  {"rep", NULL},
  {"<serious-condition>", NULL},
  {"msg-to-str", NULL},
  {"<type-error>", NULL},
  {"trunc/", NULL},
  {"op", NULL},
  {"<<", NULL},
  {"match", NULL},
  {"<condition>", NULL},
  {">>", NULL},
  {"describe-condition", NULL},
  {"<simple-condition>", NULL},
  {"last", NULL},
  {"find-setter", NULL},
  {"condition-arguments", NULL},
  {"file-opening-error-filename", NULL},
  {"add", NULL},
  {"pack-in", NULL},
  {"rem", NULL},
  {"nil", NULL},
  {"property-error-generic", NULL},
  {"col-res", NULL},
  {"swapf", NULL},
  {"sort-by", NULL},
  {"cos", NULL},
  {"rev", NULL},
  {"len", NULL},
  {"use/library", NULL},
  {"internal-error", NULL},
  {">=", NULL},
  {"sub", NULL},
  {"until", NULL},
  {"del-vals", NULL},
  {"min", NULL},
  {"isa?", NULL},
  {"<file-in-port>", NULL},
  {"<handler-info>", NULL},
  {"<str-port>", NULL},
  {"port-to-str", NULL},
  {"packing-as", NULL},
  {"str-to-num", NULL},
  {"close", NULL},
  {"port-line", NULL},
  {"get", NULL},
  {"3rd", NULL},
  {"always", NULL},
  {"handler-function", NULL},
  {"len-setter", NULL},
  {"<class>", NULL},
  {"dc", NULL},
  {"var-name", NULL},
  {"below", NULL},
  {"vec", NULL},
  {"range-by", NULL},
  {"sin", NULL},
  {"nul", NULL},
  {"quote", NULL},
  {"opf", NULL},
  {"sort", NULL},
  {"now", NULL},
  {"dlet", NULL},
  {"<type>", NULL},
  {"need-implementation", NULL},
  {"<range-error>", NULL},
  {"%fun-reg", NULL},
  {"prop-getter", NULL},
  {"find-getter", NULL},
  {"pop!", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_goo;
MODULE_INFO module_info_goo = {
  "goo",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSfun (void);
extern void load_module_gooSclass (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSany (void);
extern void load_module_gooSmag (void);
extern void load_module_gooSlog (void);
extern void load_module_gooSchr (void);
extern void load_module_gooSmath (void);
extern void load_module_gooSfunctional (void);
extern void load_module_gooSloc (void);
extern void load_module_gooSsym (void);
extern void load_module_gooSconditions (void);
extern void load_module_gooScols (void);
extern void load_module_gooSpacker (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_gooSioSread (void);
extern void load_module_gooSioSport (void);
extern void load_module_gooSlate_macros (void);

/* EXPRESSION: */

extern void load_module_goo (void);

void load_module_goo (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSany();
  load_module_gooSmag();
  load_module_gooSlog();
  load_module_gooSchr();
  load_module_gooSmath();
  load_module_gooSfunctional();
  load_module_gooSloc();
  load_module_gooSsym();
  load_module_gooSconditions();
  load_module_gooScols();
  load_module_gooSpacker();
  load_module_gooSioSwrite();
  load_module_gooSioSread();
  load_module_gooSioSport();
  load_module_gooSlate_macros();

  (P)YgooY___main_0___();

}

/* END OF GENERATED CODE. */
