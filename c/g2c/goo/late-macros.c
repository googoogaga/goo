/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/late-macros");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/late-macros */

EXT(Yclass_children,"goo/boot","class-children");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYK,"goo/math","|");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOtup,"goo/boot","@tup");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooScolsSlstYlstT,"goo/cols/lst","lst*");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Ylst,"goo/boot","lst");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmathYA,"goo/math","+");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YOnew,"goo/boot","@new");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YLboxG,"goo/boot","<box>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSlogYE,"goo/log","=");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YLclassG,"goo/boot","<class>");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLstrG,"goo/boot","<str>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YPsnul,"goo/boot","%snul");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yerror,"goo/boot","error");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YPfalse,"goo/boot","%false");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmathYS,"goo/math","/");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
DEF(YgooSlate_macrosYTgensym_counterT,"goo/late-macros","*gensym-counter*");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YOlit,"goo/boot","@lit");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YOallQ,"goo/boot","@all?");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmacrosYpair,"goo/macros","pair");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_31);
DEFLIT(lit_26);
DEFLIT(lit_25);
DEFLIT(lit_28);
DEFLIT(lit_27);
DEFLIT(lit_42);
DEFLIT(lit_6);
DEFLIT(lit_22);
DEFLIT(lit_23);
DEFLIT(lit_32);
DEFLIT(lit_41);
DEFLIT(lit_54);
DEFLIT(lit_56);
DEFLIT(lit_4);
DEFLIT(lit_1);
DEFLIT(lit_19);
DEFLIT(lit_38);
DEFLIT(lit_13);
DEFLIT(lit_44);
DEFLIT(lit_17);
DEFLIT(lit_50);
DEFLIT(lit_7);
DEFLIT(lit_37);
DEFLIT(lit_10);
DEFLIT(lit_52);
DEFLIT(lit_21);
DEFLIT(lit_24);
DEFLIT(lit_11);
DEFLIT(lit_33);
DEFLIT(lit_15);
DEFLIT(lit_14);
DEFLIT(lit_49);
DEFLIT(lit_12);
DEFLIT(lit_53);
DEFLIT(lit_8);
DEFLIT(lit_20);
DEFLIT(lit_55);
DEFLIT(lit_16);
DEFLIT(lit_9);
DEFLIT(lit_39);
DEFLIT(lit_35);
DEFLIT(lit_0);
DEFLIT(lit_47);
DEFLIT(lit_45);
DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_29);
DEFLIT(lit_57);
DEFLIT(lit_34);
DEFLIT(lit_48);
DEFLIT(lit_43);
DEFLIT(lit_2);
DEFLIT(lit_51);
DEFLIT(lit_40);
DEFLIT(lit_30);
DEFLIT(lit_36);
DEFLIT(lit_46);
DEFLIT(lit_18);

/* FUNCTIONS: */

LOCFOR(fun_x_1448_0);
LOCFOR(fun_1);
LOCFOR(fun_splice_2);
LOCFOR(fun_rest_opQ_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_walk_op_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
FUNFOR(YgooSmacrosYmatch_nul_list);
FUNFOR(YgooSmacrosYmatch_unquote);
FUNFOR(YgooSmacrosYmatch_atom);
FUNFOR(YgooSmacrosYmatch_sublist);
LOCFOR(fun_13);
LOCFOR(fun_cat_sym_14);
LOCFOR(fun_gensym_15);
LOCFOR(fun_fab_setter_name_16);
LOCFOR(fun_var_name_17);
LOCFOR(fun_var_name_18);
LOCFOR(fun_var_type_19);
LOCFOR(fun_var_type_20);
extern P YgooSlate_macrosY___main_0___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_x_1448_0) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_4),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_1) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_9));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
    T4 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T5,LITREF(lit_13));
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
    T8 = CALL1(1,VARREF(Ylst),x_);
    T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,LITREF(lit_13));
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_splice_2) {
  P y_;
  P T0,T1;
LINK_STACK();
  ARG(y_, 0);
  T1 = fun_1;
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,y_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_rest_opQ_3) {
  P x_;
  P tmpF3733;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooStypesYanyQ),FREEREF(0),x_);
    T2 = T4;
  } else {
    T2 = YPfalse;
  }
  tmpF3733 = T2;
  if (tmpF3733 != YPfalse) {
    T0 = tmpF3733;
  } else {
    T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_9));
    T0 = T1;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_4) {
  P y_;
  P T0;
LINK_STACK();
  ARG(y_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),y_,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_5) {
  P y_;
  P T0;
LINK_STACK();
  ARG(y_, 0);
  T0 = CALL2(1,FREEREF(1),FREEREF(0),y_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_walk_op_6) {
  P vars_,x_;
  P yF3736;
  P spliceQF3735;
  P varF3734;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(vars_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_19));
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesYlen),vars_);
    T4 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_20),T5);
    varF3734 = T4;
    T3 = CALL1(1,VARREF(Ytail),vars_);
    T2 = CALL2(1,VARREF(YgooSmacrosYpair),varF3734,T3);
    CALL2(1,VARREF(Ytail_setter),T2,vars_);
    T0 = varF3734;
  } else {
    T7 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
    if (T7 != YPfalse) {
      T21 = fun_4;
      T20 = CALL2(1,VARREF(YgooStypesYanyQ),T21,x_);
      spliceQF3735 = T20;
      T19 = FUNFAB(fun_5,2,vars_,FREEREF(0));
      T18 = CALL2(1,VARREF(YgooSmacrosYmap),T19,x_);
      yF3736 = T18;
      if (spliceQF3735 != YPfalse) {
        T10 = CALL1(1,VARREF(Ylst),LITREF(lit_23));
        T12 = CALL1(1,VARREF(Yhead),yF3736);
        T11 = CALL1(1,VARREF(Ylst),T12);
        T15 = CALL1(1,VARREF(Ylst),LITREF(lit_24));
        T17 = CALL1(1,VARREF(Ytail),yF3736);
        T16 = CALL1(1,FREEREF(1),T17);
        T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_13));
        T13 = CALL1(1,VARREF(Ylst),T14);
        T9 = CALL4(1,VARREF(YgooSmacrosYcat),T10,T11,T13,LITREF(lit_13));
        T8 = T9;
      } else {
        T8 = yF3736;
      }
      T6 = T8;
    } else {
      if (YPtrue != YPfalse) {
        T22 = x_;
      } else {
        T22 = YPfalse;
      }
      T6 = T22;
    }
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_7) {
  P return_;
  P argsF3749;
  P exprF3748;
  P varsF3747;
  P walk_opF3746;
  P rest_opQF3745;
  P spliceF3744;
  P x_1447F3743;
  P x_1447F3742;
  P x_1447F3741;
  P argsF3740;
  P fF3739;
  P x_1447F3738;
  P x_1448F3737;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49;
LINK_STACK();
  ARG(return_, 0);
  T49 = FUNSHELL(0,fun_x_1448_0,2);
  x_1448F3737 = T49;
  FUNINIT(x_1448F3737, 2,FREEREF(0),return_);
  x_1447F3738 = FREEREF(0);
  fF3739 = YPfalse;
  argsF3740 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1447F3738,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1447F3738,LITREF(lit_4),x_1448F3737);
    x_1447F3741 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1447F3741,x_1448F3737);
    fF3739 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1447F3741);
    x_1447F3742 = T5;
    argsF3740 = x_1447F3742;
    x_1447F3743 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1447F3743,x_1448F3737);
  } else {
    T7 = CALL2(1,x_1448F3737,LITREF(lit_5),x_1447F3738);
  }
  T46 = fun_splice_2;
  spliceF3744 = T46;
  T47 = FUNSHELL(0,fun_rest_opQ_3,1);
  rest_opQF3745 = T47;
  T48 = FUNSHELL(1,fun_walk_op_6,2);
  walk_opF3746 = T48;
  FUNINIT(rest_opQF3745, 1,rest_opQF3745);
  FUNINIT(walk_opF3746, 2,walk_opF3746,spliceF3744);
  T10 = argsF3740;
  T9 = CALL1(1,VARREF(YgooSmacrosYnulQ),T10);
  if (T9 != YPfalse) {
    T13 = fF3739;
    T12 = CALL2(1,VARREF(YgooSmacrosYEE),T13,LITREF(lit_19));
    if (T12 != YPfalse) {
      T15 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
      T18 = CALL1(1,VARREF(Ylst),LITREF(lit_26));
      T17 = CALL2(1,VARREF(YgooSmacrosYcat),T18,LITREF(lit_13));
      T16 = CALL1(1,VARREF(Ylst),T17);
      T19 = CALL1(1,VARREF(Ylst),LITREF(lit_26));
      T14 = CALL4(1,VARREF(YgooSmacrosYcat),T15,T16,T19,LITREF(lit_13));
      T11 = T14;
    } else {
      T21 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
      T26 = CALL1(1,VARREF(Ylst),LITREF(lit_26));
      T27 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
      T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,LITREF(lit_13));
      T24 = CALL1(1,VARREF(Ylst),T25);
      T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,Ynil);
      T22 = CALL1(1,VARREF(Ylst),T23);
      T29 = fF3739;
      T28 = CALL1(1,VARREF(Ylst),T29);
      T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T28,LITREF(lit_13));
      T11 = T20;
    }
    T8 = T11;
  } else {
    T45 = CALL2(1,VARREF(YgooSmacrosYpair),YPfalse,Ynil);
    varsF3747 = T45;
    T43 = fF3739;
    T42 = CALL1(1,VARREF(Ylst),T43);
    T44 = argsF3740;
    T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T44,LITREF(lit_13));
    T40 = CALL2(1,walk_opF3746,varsF3747,T41);
    exprF3748 = T40;
    T36 = CALL1(1,VARREF(Ytail),varsF3747);
    T35 = CALL1(1,VARREF(YgooSmacrosYrevX),T36);
    T39 = argsF3740;
    T38 = CALL1(0,rest_opQF3745,T39);
    if (T38 != YPfalse) {
      T37 = LITREF(lit_27);
    } else {
      T37 = Ynil;
    }
    T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T37,LITREF(lit_13));
    argsF3749 = T34;
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
    T32 = CALL1(1,VARREF(Ylst),argsF3749);
    T33 = CALL1(1,VARREF(Ylst),exprF3748);
    T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T33,LITREF(lit_13));
    T8 = T30;
  }
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_8) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_7,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYmatch_nul_list) {
  P x_,fail_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(fail_, 1);
  T1 = CALL1(1,VARREF(YgooScolsScolYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T2 = CALL2(1,fail_,LITREF(lit_30),x_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYmatch_unquote) {
  P x_,fail_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(fail_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,fail_,LITREF(lit_33));
    T0 = T2;
  } else {
    T3 = CALL1(1,VARREF(Yhead),x_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYmatch_atom) {
  P x_,pat_,fail_;
  P expF3750;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(pat_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,fail_,LITREF(lit_36),pat_);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(Yhead),x_);
    expF3750 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),expF3750,pat_);
    if (T4 != YPfalse) {
      T5 = CALL1(1,VARREF(Ytail),x_);
      T3 = T5;
    } else {
      T6 = CALL3(1,fail_,LITREF(lit_37),expF3750,pat_);
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYmatch_sublist) {
  P x_,fail_;
  P xF3751;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(fail_, 1);
  T3 = CALL1(1,VARREF(Yhead),x_);
  xF3751 = T3;
  T1 = CALL2(1,VARREF(YisaQ),xF3751,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T0 = xF3751;
  } else {
    T2 = CALL2(1,fail_,LITREF(lit_40),xF3751);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_13) {
  P r_,e_;
  P T0,T1;
LINK_STACK();
  ARG(r_, 0);
  ARG(e_, 1);
  T1 = CALL1(1,VARREF(YgooSanyYto_str),e_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),r_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_cat_sym_14) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  NARGS(x_, 0);
  T2 = fun_13;
  T1 = CALL3(1,VARREF(YgooScolsScolYfold),T2,LITREF(lit_44),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_gensym_15) {
  P T0,T1,T2;
LINK_STACK();
  T2 = CALL2(1,VARREF(YgooSmathYA),VARREF(YgooSlate_macrosYTgensym_counterT),YPint((P)1));
  T1 = VARSET(YgooSlate_macrosYTgensym_counterT,T2);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_47),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fab_setter_name_16) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat_sym),x_,LITREF(lit_50));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_var_name_17) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

LOCCODEDEF(fun_var_name_18) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_var_type_19) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_56));
}

LOCCODEDEF(fun_var_type_20) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

P YgooSlate_macrosY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
DEFCREGS();
  lit_0 = YPPlist(1,YPPsym((P)"exp"));
  lit_1 = YPPlist(1,YPPsym((P)"return"));
  lit_2 = YPPsym((P)"x-1448");
  lit_3 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_4 = YPPsym((P)"op");
  lit_5 = YPsb((P)"Match Pattern Failure");
  lit_6 = YPPsym((P)"splice");
  lit_7 = YPPlist(1,YPPsym((P)"y"));
  lit_8 = YPPlist(1,YPPsym((P)"x"));
  lit_9 = YPPsym((P)"...");
  lit_10 = YPPsym((P)"as");
  lit_11 = YPPsym((P)"<lst>");
  lit_12 = YPPsym((P)"_*");
  lit_13 = Ynil;
  lit_14 = YPPsym((P)"lst");
  lit_15 = YPPsym((P)"rest-op?");
  lit_16 = YPPlist(1,YPPsym((P)"x"));
  lit_17 = YPPsym((P)"walk-op");
  lit_18 = YPPlist(2,YPPsym((P)"vars"),YPPsym((P)"x"));
  lit_19 = YPPsym((P)"_");
  lit_20 = YPsb((P)"_");
  lit_21 = YPPlist(1,YPPsym((P)"y"));
  lit_22 = YPPlist(1,YPPsym((P)"y"));
  lit_23 = YPPsym((P)"app");
  lit_24 = YPPsym((P)"cat!");
  lit_25 = YPPsym((P)"fun");
  lit_26 = YPPsym((P)"x");
  lit_27 = YPPlist(1,YPPlist(2,YPPsym((P)"_*"),YPPsym((P)"...")));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1448_0 = YPfab_met(FUNCODEREF(fun_x_1448_0),T8,LITREF(lit_2),LITREF(lit_3),YPfalse,YPfalse);
  T7 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPfab_met(FUNCODEREF(fun_1),T7,YPfalse,LITREF(lit_8),sloc(15),YPfalse);
  T6 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_splice_2 = YPfab_met(FUNCODEREF(fun_splice_2),T6,LITREF(lit_6),LITREF(lit_7),sloc(14),YPfalse);
  T5 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_rest_opQ_3 = YPfab_met(FUNCODEREF(fun_rest_opQ_3),T5,LITREF(lit_15),LITREF(lit_16),sloc(16),YPfalse);
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPfab_met(FUNCODEREF(fun_4),T4,YPfalse,LITREF(lit_21),sloc(24),YPfalse);
  T3 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPfab_met(FUNCODEREF(fun_5),T3,YPfalse,LITREF(lit_22),sloc(25),YPfalse);
  T2 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_walk_op_6 = YPfab_met(FUNCODEREF(fun_walk_op_6),T2,LITREF(lit_17),LITREF(lit_18),sloc(18),YPfalse);
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPfab_met(FUNCODEREF(fun_7),T1,YPfalse,LITREF(lit_1),YPfalse,YPfalse);
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPfab_met(FUNCODEREF(fun_8),T0,YPfalse,LITREF(lit_0),YPfalse,YPfalse);
  T9 = fun_8;
  YPmacro(YPPsym((P)"goo/late-macros"),YPPsym((P)"op"),T9);
  lit_28 = YPPsym((P)"match-nul-list");
  lit_29 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"fail"));
  lit_30 = YPsb((P)"Match Empty Failure of %=");
  T10 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmatch_nul_list = YPfab_met(FUNCODEREF(YgooSmacrosYmatch_nul_list),T10,LITREF(lit_28),LITREF(lit_29),sloc(42),YPfalse);
  T11 = YgooSmacrosYmatch_nul_list;
  VARSET(YgooSmacrosYmatch_nul_list,T11);
  lit_31 = YPPsym((P)"match-unquote");
  lit_32 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"fail"));
  lit_33 = YPsb((P)"Match Failure Nul List on Unquote");
  T12 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmatch_unquote = YPfab_met(FUNCODEREF(YgooSmacrosYmatch_unquote),T12,LITREF(lit_31),LITREF(lit_32),sloc(47),YPfalse);
  T13 = YgooSmacrosYmatch_unquote;
  VARSET(YgooSmacrosYmatch_unquote,T13);
  lit_34 = YPPsym((P)"match-atom");
  lit_35 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"pat"),YPPsym((P)"fail"));
  lit_36 = YPsb((P)"Match Failure Nul List on %=");
  lit_37 = YPsb((P)"Match Failure of %= on %=");
  T14 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSmacrosYmatch_atom = YPfab_met(FUNCODEREF(YgooSmacrosYmatch_atom),T14,LITREF(lit_34),LITREF(lit_35),sloc(52),YPfalse);
  T15 = YgooSmacrosYmatch_atom;
  VARSET(YgooSmacrosYmatch_atom,T15);
  lit_38 = YPPsym((P)"match-sublist");
  lit_39 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"fail"));
  lit_40 = YPsb((P)"Match Failure on Sub List on %=");
  T16 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmatch_sublist = YPfab_met(FUNCODEREF(YgooSmacrosYmatch_sublist),T16,LITREF(lit_38),LITREF(lit_39),sloc(60),YPfalse);
  T17 = YgooSmacrosYmatch_sublist;
  VARSET(YgooSmacrosYmatch_sublist,T17);
  lit_41 = YPPsym((P)"cat-sym");
  lit_42 = YPPlist(1,YPPsym((P)"x"));
  lit_43 = YPPlist(2,YPPsym((P)"r"),YPPsym((P)"e"));
  lit_44 = YPsb((P)"");
  T19 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_13 = YPfab_met(FUNCODEREF(fun_13),T19,YPfalse,LITREF(lit_43),sloc(67),YPfalse);
  T18 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLsymG),Ynil);
  fun_cat_sym_14 = YPfab_met(FUNCODEREF(fun_cat_sym_14),T18,LITREF(lit_41),LITREF(lit_42),sloc(66),YPfalse);
  T21 = VARREF_OR(YgooSmacrosYcat_sym,YPfalse);
  T22 = fun_cat_sym_14;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YgooSmacrosYcat_sym,T20);
  VARSET(YgooSlate_macrosYTgensym_counterT,YPint((P)1000));
  lit_45 = YPPsym((P)"gensym");
  lit_46 = Ynil;
  lit_47 = YPsb((P)"x-");
  T23 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLsymG),Ynil);
  fun_gensym_15 = YPfab_met(FUNCODEREF(fun_gensym_15),T23,LITREF(lit_45),LITREF(lit_46),sloc(71),YPfalse);
  T25 = VARREF_OR(YgooSmacrosYgensym,YPfalse);
  T26 = fun_gensym_15;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YgooSmacrosYgensym,T24);
  lit_48 = YPPsym((P)"fab-setter-name");
  lit_49 = YPPlist(1,YPPsym((P)"x"));
  lit_50 = YPsb((P)"-setter");
  T27 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_fab_setter_name_16 = YPfab_met(FUNCODEREF(fun_fab_setter_name_16),T27,LITREF(lit_48),LITREF(lit_49),sloc(74),YPfalse);
  T29 = VARREF_OR(YgooSmacrosYfab_setter_name,YPfalse);
  T30 = fun_fab_setter_name_16;
  T28 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T29,T30);
  VARSET(YgooSmacrosYfab_setter_name,T28);
  lit_51 = YPPsym((P)"var-name");
  lit_52 = YPPlist(1,YPPsym((P)"x"));
  T31 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_var_name_17 = YPfab_met(FUNCODEREF(fun_var_name_17),T31,LITREF(lit_51),LITREF(lit_52),sloc(77),YPfalse);
  T33 = VARREF_OR(YgooSmacrosYvar_name,YPfalse);
  T34 = fun_var_name_17;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YgooSmacrosYvar_name,T32);
  lit_53 = YPPlist(1,YPPsym((P)"x"));
  T35 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_var_name_18 = YPfab_met(FUNCODEREF(fun_var_name_18),T35,LITREF(lit_51),LITREF(lit_53),sloc(79),YPfalse);
  T37 = VARREF_OR(YgooSmacrosYvar_name,YPfalse);
  T38 = fun_var_name_18;
  T36 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T37,T38);
  VARSET(YgooSmacrosYvar_name,T36);
  lit_54 = YPPsym((P)"var-type");
  lit_55 = YPPlist(1,YPPsym((P)"x"));
  lit_56 = YPPsym((P)"<any>");
  T39 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_var_type_19 = YPfab_met(FUNCODEREF(fun_var_type_19),T39,LITREF(lit_54),LITREF(lit_55),sloc(81),YPfalse);
  T41 = VARREF_OR(YgooSmacrosYvar_type,YPfalse);
  T42 = fun_var_type_19;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YgooSmacrosYvar_type,T40);
  lit_57 = YPPlist(1,YPPsym((P)"x"));
  T43 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_var_type_20 = YPfab_met(FUNCODEREF(fun_var_type_20),T43,LITREF(lit_54),LITREF(lit_57),sloc(83),YPfalse);
  T45 = VARREF_OR(YgooSmacrosYvar_type,YPfalse);
  T46 = fun_var_type_20;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YgooSmacrosYvar_type,T44);
  T47 = YPfalse;
  return T47;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSany},
  {&module_info_gooSlog},
  {&module_info_gooSchr},
  {&module_info_gooSmath},
  {&module_info_gooScols},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"class-children", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"lst*", &module_info_gooScolsSlst, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSlog, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"exp", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {"op", PVAR, NULL},
  {"*gensym-counter*", CVAR, &YgooSlate_macrosYTgensym_counterT},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"fab-setter-name", NULL},
  {"match-unquote", NULL},
  {"gensym", NULL},
  {"var-type", NULL},
  {"cat-sym", NULL},
  {"match-nul-list", NULL},
  {"*gensym-counter*", NULL},
  {"match-sublist", NULL},
  {"op", NULL},
  {"var-name", NULL},
  {"match-atom", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSlate_macros;
MODULE_INFO module_info_gooSlate_macros = {
  "goo/late-macros",
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
extern void load_module_gooSany (void);
extern void load_module_gooSlog (void);
extern void load_module_gooSchr (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScols (void);

/* EXPRESSION: */

extern void load_module_gooSlate_macros (void);

void load_module_gooSlate_macros (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSany();
  load_module_gooSlog();
  load_module_gooSchr();
  load_module_gooSmath();
  load_module_gooScols();

  (P)YgooSlate_macrosY___main_0___();

}

/* END OF GENERATED CODE. */
