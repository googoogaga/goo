/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/lst");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/lst */

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
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYK,"goo/math","|");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
DEF(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
DEF(YgooScolsSlstYlstT,"goo/cols/lst","lst*");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YLpropG,"goo/boot","<prop>");
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
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooStypesYtE,"goo/types","t=");
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
DEF(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YgooScolsSlstYline_pah,"goo/cols/lst","line-pah");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
DEF(YgooScolsSlstYLlst_enumG,"goo/cols/lst","<lst-enum>");
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
EXT(YgooStypesYtA,"goo/types","t+");
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
EXT(YLboxG,"goo/boot","<box>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YOfold,"goo/boot","@fold");
DEF(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSlogYE,"goo/log","=");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooStypesYas,"goo/types","as");
DEF(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
DEF(YgooScolsSlstYPdat_setter,"goo/cols/lst","%dat-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YLclassG,"goo/boot","<class>");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(YgooScolsSlstYDline_pah_nul,"goo/cols/lst","$line-pah-nul");
DEF(YgooScolsSlstYPdat,"goo/cols/lst","%dat");
EXT(YgooSmathYsinh,"goo/math","sinh");
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
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
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
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLstrG,"goo/boot","<str>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmagYGE,"goo/mag",">=");
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
EXT(YLflatG,"goo/boot","<flat>");
DEF(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
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
DEF(YgooScolsSlstYPkey_setter,"goo/cols/lst","%key-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
DEF(YgooScolsSlstYassq,"goo/cols/lst","assq");
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
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
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
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YOlit,"goo/boot","@lit");
EXT(Yas_error,"goo/boot","as-error");
DEF(YgooScolsSlstYLline_pahG,"goo/cols/lst","<line-pah>");
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
DEF(YgooScolsSlstYPkey,"goo/cols/lst","%key");
EXT(YgooStypesYDbot,"goo/types","$bot");
DEF(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
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
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmacrosYpair,"goo/macros","pair");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_54);
DEFLIT(lit_70);
DEFLIT(lit_27);
DEFLIT(lit_43);
DEFLIT(lit_73);
DEFLIT(lit_20);
DEFLIT(lit_84);
DEFLIT(lit_21);
DEFLIT(lit_101);
DEFLIT(lit_18);
DEFLIT(lit_24);
DEFLIT(lit_76);
DEFLIT(lit_14);
DEFLIT(lit_29);
DEFLIT(lit_59);
DEFLIT(lit_75);
DEFLIT(lit_102);
DEFLIT(lit_37);
DEFLIT(lit_112);
DEFLIT(lit_44);
DEFLIT(lit_91);
DEFLIT(lit_12);
DEFLIT(lit_66);
DEFLIT(lit_74);
DEFLIT(lit_92);
DEFLIT(lit_51);
DEFLIT(lit_41);
DEFLIT(lit_110);
DEFLIT(lit_35);
DEFLIT(lit_72);
DEFLIT(lit_0);
DEFLIT(lit_55);
DEFLIT(lit_85);
DEFLIT(lit_33);
DEFLIT(lit_40);
DEFLIT(lit_94);
DEFLIT(lit_64);
DEFLIT(lit_56);
DEFLIT(lit_60);
DEFLIT(lit_17);
DEFLIT(lit_16);
DEFLIT(lit_98);
DEFLIT(lit_39);
DEFLIT(lit_36);
DEFLIT(lit_1);
DEFLIT(lit_97);
DEFLIT(lit_4);
DEFLIT(lit_30);
DEFLIT(lit_7);
DEFLIT(lit_34);
DEFLIT(lit_31);
DEFLIT(lit_82);
DEFLIT(lit_45);
DEFLIT(lit_80);
DEFLIT(lit_32);
DEFLIT(lit_8);
DEFLIT(lit_86);
DEFLIT(lit_106);
DEFLIT(lit_9);
DEFLIT(lit_68);
DEFLIT(lit_63);
DEFLIT(lit_81);
DEFLIT(lit_5);
DEFLIT(lit_100);
DEFLIT(lit_93);
DEFLIT(lit_61);
DEFLIT(lit_28);
DEFLIT(lit_99);
DEFLIT(lit_42);
DEFLIT(lit_15);
DEFLIT(lit_111);
DEFLIT(lit_57);
DEFLIT(lit_88);
DEFLIT(lit_69);
DEFLIT(lit_48);
DEFLIT(lit_79);
DEFLIT(lit_46);
DEFLIT(lit_62);
DEFLIT(lit_67);
DEFLIT(lit_58);
DEFLIT(lit_105);
DEFLIT(lit_65);
DEFLIT(lit_103);
DEFLIT(lit_87);
DEFLIT(lit_13);
DEFLIT(lit_113);
DEFLIT(lit_109);
DEFLIT(lit_104);
DEFLIT(lit_89);
DEFLIT(lit_83);
DEFLIT(lit_6);
DEFLIT(lit_49);
DEFLIT(lit_71);
DEFLIT(lit_95);
DEFLIT(lit_78);
DEFLIT(lit_47);
DEFLIT(lit_26);
DEFLIT(lit_3);
DEFLIT(lit_19);
DEFLIT(lit_107);
DEFLIT(lit_2);
DEFLIT(lit_25);
DEFLIT(lit_10);
DEFLIT(lit_38);
DEFLIT(lit_90);
DEFLIT(lit_23);
DEFLIT(lit_50);
DEFLIT(lit_52);
DEFLIT(lit_96);
DEFLIT(lit_108);
DEFLIT(lit_77);
DEFLIT(lit_11);
DEFLIT(lit_53);
DEFLIT(lit_22);

/* FUNCTIONS: */

LOCFOR(fun_len_0);
LOCFOR(fun_elt_or_1);
LOCFOR(fun_elt_setter_2);
LOCFOR(fun_nulQ_3);
LOCFOR(fun_nul_4);
LOCFOR(fun_fab_5);
LOCFOR(fun_fabs_6);
LOCFOR(fun_lstT_7);
LOCFOR(fun_Pdat_8);
LOCFOR(fun_Pdat_setter_9);
LOCFOR(fun_Pkey_10);
LOCFOR(fun_Pkey_setter_11);
LOCFOR(fun_12);
LOCFOR(fun_enum_13);
LOCFOR(fun_finQ_14);
LOCFOR(fun_nxt_15);
LOCFOR(fun_now_16);
LOCFOR(fun_now_setter_17);
LOCFOR(fun_now_key_18);
LOCFOR(fun_add_19);
LOCFOR(fun_last_20);
LOCFOR(fun_revX_21);
LOCFOR(fun_connect_22);
LOCFOR(fun_catX_23);
LOCFOR(fun_lst_24);
LOCFOR(fun_pair_25);
LOCFOR(fun_pushX_26);
LOCFOR(fun_popX_27);
LOCFOR(fun_sort_byX_28);
LOCFOR(fun_to_str_29);
LOCFOR(fun_assq_30);
LOCFOR(fun_assqn_31);
LOCFOR(fun_x_1360_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_line_of_35);
LOCFOR(fun_line_of_36);
LOCFOR(fun_37);
FUNFOR(YgooScolsSlstYline_pah);
LOCFOR(fun_nul_39);
FUNFOR(YgooScolsSlstYline_pair);
FUNFOR(YgooScolsSlstYline_list);
LOCFOR(fun_copy_42);
LOCFOR(fun_line_list_of_43);
LOCFOR(fun_line_list_of_44);
extern P YgooScolsSlstY___main_0___ ();
extern P YgooScolsSlstY___main_1___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_len_0) {
  P x_;
  P xF3216;
  P countF3215;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  check_type(YPint((P)0),VARREF(YLintG));
  countF3215 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF3216 = x_;
  LOOP_99: {
    P a99_0,a99_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF3216);
    if (T1 != YPfalse) {
      T0 = countF3215;
    } else {
      T3 = CALL2(1,VARREF(YgooSmathYA),countF3215,YPint((P)1));
      T4 = CALL1(1,VARREF(Ytail),xF3216);
      a99_0 = T3;
      a99_1 = T4;
      countF3215 = a99_0;
      xF3216 = a99_1;
      goto LOOP_99;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_elt_or_1) {
  P x_,key_,default_;
  P xF3218;
  P countF3217;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
  check_type(YPint((P)0),VARREF(YLintG));
  countF3217 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF3218 = x_;
  LOOP_100: {
    P a100_0,a100_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF3218);
    if (T1 != YPfalse) {
      T0 = default_;
    } else {
      T3 = CALL2(1,VARREF(YgooSmacrosYEE),countF3217,key_);
      if (T3 != YPfalse) {
        T4 = CALL1(1,VARREF(Yhead),xF3218);
        T2 = T4;
      } else {
        T6 = CALL2(1,VARREF(YgooSmathYA),countF3217,YPint((P)1));
        T7 = CALL1(1,VARREF(Ytail),xF3218);
        a100_0 = T6;
        a100_1 = T7;
        countF3217 = a100_0;
        xF3218 = a100_1;
        goto LOOP_100;
        T2 = T5;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_elt_setter_2) {
  P z_,x_,key_;
  P xF3220;
  P countF3219;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(key_, 2);
  check_type(YPint((P)0),VARREF(YLintG));
  countF3219 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF3220 = x_;
  LOOP_101: {
    P a101_0,a101_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF3220);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(Yrange_error),xF3220,key_);
      T0 = T2;
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYEE),countF3219,key_);
      if (T4 != YPfalse) {
        T5 = CALL2(1,VARREF(Yhead_setter),z_,xF3220);
        T3 = T5;
      } else {
        T7 = CALL2(1,VARREF(YgooSmathYA),countF3219,YPint((P)1));
        T8 = CALL1(1,VARREF(Ytail),xF3220);
        a101_0 = T7;
        a101_1 = T8;
        countF3219 = a101_0;
        xF3220 = a101_1;
        goto LOOP_101;
        T3 = T6;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_nulQ_3) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T2 = CALL1(1,VARREF(YgooSclassYclass_of),c_);
  T1 = CALL1(1,VARREF(YgooScolsScolYnul),T2);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),c_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_nul_4) {
  P c_;
LINK_STACK();
  ARG(c_, 0);
UNLINK_STACK();
  RET(Ynil);
}

LOCCODEDEF(fun_fab_5) {
  P t_,s_;
  P resF3222;
  P iF3221;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(t_, 0);
  ARG(s_, 1);
  check_type(s_,VARREF(YLintG));
  iF3221 = s_;
  T5 = CALL1(1,VARREF(YgooScolsScolYnul),t_);
  check_type(T5,VARREF(YLlstG));
  resF3222 = T5;
  LOOP_102: {
    P a102_0,a102_1;
    T1 = CALL2(1,VARREF(YgooSmagYG),iF3221,YPint((P)0));
    if (T1 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSmathY_),iF3221,YPint((P)1));
      T4 = CALL3(1,VARREF(Ynew),t_,VARREF(Ytail),resF3222);
      a102_0 = T3;
      a102_1 = T4;
      iF3221 = a102_0;
      resF3222 = a102_1;
      goto LOOP_102;
      T0 = T2;
    } else {
      T0 = resF3222;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fabs_6) {
  P c_,objects_;
  P resultF3224;
  P indexF3223;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
  T7 = CALL1(1,VARREF(YgooStypesYlen),objects_);
  T6 = CALL2(1,VARREF(YgooSmathY_),T7,YPint((P)1));
  check_type(T6,VARREF(YLintG));
  indexF3223 = T6;
  T8 = CALL1(1,VARREF(YgooScolsScolYnul),c_);
  check_type(T8,VARREF(YLlstG));
  resultF3224 = T8;
  LOOP_103: {
    P a103_0,a103_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),indexF3223,YPint((P)0));
    if (T1 != YPfalse) {
      T0 = resultF3224;
    } else {
      T3 = CALL2(1,VARREF(YgooSmathY_),indexF3223,YPint((P)1));
      T5 = CALL2(1,VARREF(YgooSmacrosYelt),objects_,indexF3223);
      T4 = CALL5(1,VARREF(Ynew),c_,VARREF(Yhead),T5,VARREF(Ytail),resultF3224);
      a103_0 = T3;
      a103_1 = T4;
      indexF3223 = a103_0;
      resultF3224 = a103_1;
      goto LOOP_103;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_lstT_7) {
  P args_;
  P rF3227;
  P iF3226;
  P mF3225;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  NARGS(args_, 0);
  T9 = CALL1(1,VARREF(YgooStypesYlen),args_);
  T8 = CALL1(1,VARREF(YgooSmathY1_),T9);
  mF3225 = T8;
  T6 = CALL1(1,VARREF(YgooSmathY1_),mF3225);
  check_type(T6,VARREF(YLintG));
  iF3226 = T6;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),args_,mF3225);
  check_type(T7,VARREF(YLlstG));
  rF3227 = T7;
  LOOP_104: {
    P a104_0,a104_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF3226,YPint((P)0));
    if (T1 != YPfalse) {
      T0 = rF3227;
    } else {
      T3 = CALL1(1,VARREF(YgooSmathY1_),iF3226);
      T5 = CALL2(1,VARREF(YgooSmacrosYelt),args_,iF3226);
      T4 = CALL5(1,VARREF(Ynew),VARREF(YLlstG),VARREF(Yhead),T5,VARREF(Ytail),rF3227);
      a104_0 = T3;
      a104_1 = T4;
      iF3226 = a104_0;
      rF3227 = a104_1;
      goto LOOP_104;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_Pdat_8) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSlstYPdat));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pdat_setter_9) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYPdat));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pkey_10) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSlstYPkey));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pkey_setter_11) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYPkey));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_12) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_enum_13) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPdat),x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_finQ_14) {
  P e_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL1(1,VARREF(YgooSmacrosYnulQ),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_nxt_15) {
  P e_;
  P x_1354F3228;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  x_1354F3228 = e_;
  T1 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)1));
  CALL2(1,VARREF(YgooScolsSlstYPkey_setter),T0,x_1354F3228);
  T3 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T2 = CALL1(1,VARREF(Ytail),T3);
  CALL2(1,VARREF(YgooScolsSlstYPdat_setter),T2,x_1354F3228);
UNLINK_STACK();
  RET(x_1354F3228);
}

LOCCODEDEF(fun_now_16) {
  P e_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL1(1,VARREF(Yhead),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_now_setter_17) {
  P v_,e_;
  P T0,T1;
LINK_STACK();
  ARG(v_, 0);
  ARG(e_, 1);
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL2(1,VARREF(Yhead_setter),v_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_now_key_18) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_add_19) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_last_20) {
  P x_;
  P pxF3230;
  P xF3229;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  xF3229 = x_;
  pxF3230 = x_;
  LOOP_105: {
    P a105_0,a105_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF3229);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(Yhead),pxF3230);
      T0 = T2;
    } else {
      T4 = CALL1(1,VARREF(Ytail),xF3229);
      a105_0 = T4;
      a105_1 = xF3229;
      xF3229 = a105_0;
      pxF3230 = a105_1;
      goto LOOP_105;
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_revX_21) {
  P c_;
  P tF3233;
  P rF3232;
  P lF3231;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(c_, 0);
  lF3231 = c_;
  T5 = CALL1(1,VARREF(YgooSclassYclass_of),c_);
  T4 = CALL1(1,VARREF(YgooScolsScolYnul),T5);
  rF3232 = T4;
  LOOP_106: {
    P a106_0,a106_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),lF3231);
    if (T1 != YPfalse) {
      T0 = rF3232;
    } else {
      T3 = CALL1(1,VARREF(Ytail),lF3231);
      tF3233 = T3;
      CALL2(1,VARREF(Ytail_setter),rF3232,lF3231);
      a106_0 = tF3233;
      a106_1 = lF3231;
      lF3231 = a106_0;
      rF3232 = a106_1;
      goto LOOP_106;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_connect_22) {
  P x_,y_;
  P pF3234;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    CALL2(1,VARREF(Ytail_setter),y_,x_);
    check_type(y_,VARREF(YLlstG));
    pF3234 = y_;
    LOOP_107: {
      P a107_0;
      T4 = CALL1(1,VARREF(Ytail),pF3234);
      T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),T4);
      if (T3 != YPfalse) {
        T2 = pF3234;
      } else {
        T6 = CALL1(1,VARREF(Ytail),pF3234);
        a107_0 = T6;
        pF3234 = a107_0;
        goto LOOP_107;
        T2 = T5;
      }
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_catX_23) {
  P x_,more_;
  P xF3239;
  P x_1355F3238;
  P curF3237;
  P resultF3236;
  P connectF3235;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
  T16 = fun_connect_22;
  connectF3235 = T16;
  T15 = CALL1(1,VARREF(Ylst),YPfalse);
  resultF3236 = T15;
  curF3237 = resultF3236;
  T2 = curF3237;
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),x_);
  T1 = CALL2(1,connectF3235,T2,T3);
  curF3237 = T1;
  T13 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  x_1355F3238 = T13;
  LOOP_108: {
    P a108_0;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1355F3238);
    T5 = CALL1(1,VARREF(Ynot),T6);
    if (T5 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1355F3238);
      xF3239 = T12;
      T8 = curF3237;
      T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),xF3239);
      T7 = CALL2(1,connectF3235,T8,T9);
      curF3237 = T7;
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1355F3238);
      a108_0 = T11;
      x_1355F3238 = a108_0;
      goto LOOP_108;
      T4 = T10;
    } else {
      T4 = YPfalse;
    }
  }
  T14 = CALL1(1,VARREF(Ytail),resultF3236);
UNLINK_STACK();
  RET(T14);
}

LOCCODEDEF(fun_lst_24) {
  P objects_;
  P T0;
LINK_STACK();
  NARGS(objects_, 0);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSchrYfabs),YPfalse,VARREF(YLlstG),objects_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pair_25) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YLlstG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pushX_26) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_popX_27) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(Ytail),c_);
  T2 = CALL1(1,VARREF(Yhead),c_);
  T0 = CALL2(1,VARREF(Ytup),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sort_byX_28) {
  P items_,test_;
  P tmpF3244;
  P nextF3243;
  P prevF3242;
  P tmpF3241;
  P tmpF3240;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(items_, 0);
  ARG(test_, 1);
  tmpF3240 = YPfalse;
  LOOP_109: {
    P a109_0;
    T2 = CALL1(1,VARREF(Yhead),items_);
    T1 = CALL2(1,VARREF(YgooSmacrosYEE),tmpF3240,T2);
    if (T1 != YPfalse) {
      T0 = items_;
    } else {
      T16 = CALL1(1,VARREF(Yhead),items_);
      tmpF3241 = T16;
      prevF3242 = items_;
      T17 = CALL1(1,VARREF(Ytail),items_);
      nextF3243 = T17;
      LOOP_110: {
        P a110_0,a110_1,a110_2;
        T4 = CALL1(1,VARREF(YgooSmacrosYnulQ),nextF3243);
        if (T4 != YPfalse) {
          a109_0 = tmpF3241;
          tmpF3240 = a109_0;
          goto LOOP_109;
          T3 = T5;
        } else {
          T9 = CALL1(1,VARREF(Yhead),nextF3243);
          T10 = CALL1(1,VARREF(Yhead),prevF3242);
          T8 = CALL2(1,test_,T9,T10);
          if (T8 != YPfalse) {
            T13 = CALL1(1,VARREF(Yhead),prevF3242);
            tmpF3244 = T13;
            T11 = CALL1(1,VARREF(Yhead),nextF3243);
            CALL2(1,VARREF(Yhead_setter),T11,prevF3242);
            T12 = CALL2(1,VARREF(Yhead_setter),tmpF3244,nextF3243);
            T7 = T12;
          } else {
            T7 = tmpF3241;
          }
          T14 = CALL1(1,VARREF(Ytail),prevF3242);
          T15 = CALL1(1,VARREF(Ytail),nextF3243);
          a110_0 = T7;
          a110_1 = T14;
          a110_2 = T15;
          tmpF3241 = a110_0;
          prevF3242 = a110_1;
          nextF3243 = a110_2;
          goto LOOP_110;
          T3 = T6;
        }
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_to_str_29) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_67),T1,LITREF(lit_68));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_assq_30) {
  P x_,l_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL1(1,VARREF(Yhead),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL2(1,VARREF(YgooScolsSlstYassq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assqn_31) {
  P x_,l_,pos_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
  ARG(pos_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),T5,pos_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL3(1,VARREF(YgooScolsSlstYassqn),x_,T8,pos_);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1360_32) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_75),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_33) {
  P return_;
  P DnulF3257;
  P classF3256;
  P x_1359F3255;
  P x_1359F3254;
  P x_1359F3253;
  P x_1359F3252;
  P x_1359F3251;
  P x_1359F3250;
  P x_1359F3249;
  P supersF3248;
  P nameF3247;
  P x_1359F3246;
  P x_1360F3245;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69;
LINK_STACK();
  ARG(return_, 0);
  T69 = FUNSHELL(0,fun_x_1360_32,2);
  x_1360F3245 = T69;
  FUNINIT(x_1360F3245, 2,FREEREF(0),return_);
  x_1359F3246 = FREEREF(0);
  nameF3247 = YPfalse;
  supersF3248 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1359F3246,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1359F3246,LITREF(lit_75),x_1360F3245);
    x_1359F3249 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1359F3249,x_1360F3245);
    nameF3247 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1359F3249);
    x_1359F3250 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1359F3250,x_1360F3245);
    x_1359F3251 = T8;
    supersF3248 = x_1359F3251;
    x_1359F3252 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1359F3252,x_1360F3245);
    x_1359F3253 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1359F3253,x_1360F3245);
    T7 = CALL1(1,VARREF(Ytail),x_1359F3252);
    x_1359F3254 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1359F3254,x_1360F3245);
    T9 = CALL1(1,VARREF(Ytail),x_1359F3250);
    x_1359F3255 = T9;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1359F3255,x_1360F3245);
  } else {
    T13 = CALL2(1,x_1360F3245,LITREF(lit_76),x_1359F3246);
  }
  T68 = nameF3247;
  T67 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_77),T68,LITREF(lit_78));
  classF3256 = T67;
  T66 = nameF3247;
  T65 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_79),T66,LITREF(lit_80));
  DnulF3257 = T65;
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T19 = CALL1(1,VARREF(Ylst),classF3256);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T23 = supersF3248;
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,LITREF(lit_84));
  T20 = CALL1(1,VARREF(Ylst),T21);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,LITREF(lit_84));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T27 = CALL1(1,VARREF(Ylst),DnulF3257);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T31 = CALL1(1,VARREF(Ylst),classF3256);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,LITREF(lit_84));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T28,LITREF(lit_84));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T36 = nameF3247;
  T35 = CALL1(1,VARREF(Ylst),T36);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,LITREF(lit_84));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T44 = CALL1(1,VARREF(Ylst),classF3256);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T42 = CALLN(1,VARREF(YgooSmacrosYcat),7,T43,T44,T45,T46,T47,T48,LITREF(lit_84));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T33 = CALL5(1,VARREF(YgooSmacrosYcat),T34,T35,T37,T41,LITREF(lit_84));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_18));
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T61 = CALL1(1,VARREF(Ylst),classF3256);
  T59 = CALL3(1,VARREF(YgooSmacrosYcat),T60,T61,LITREF(lit_84));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,LITREF(lit_84));
  T55 = CALL1(1,VARREF(Ylst),T56);
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T63 = CALL1(1,VARREF(Ylst),classF3256);
  T54 = CALL4(1,VARREF(YgooSmacrosYcat),T55,T62,T63,LITREF(lit_84));
  T53 = CALL1(1,VARREF(Ylst),T54);
  T64 = CALL1(1,VARREF(Ylst),DnulF3257);
  T50 = CALL5(1,VARREF(YgooSmacrosYcat),T51,T52,T53,T64,LITREF(lit_84));
  T49 = CALL1(1,VARREF(Ylst),T50);
  T14 = CALLN(1,VARREF(YgooSmacrosYcat),6,T15,T16,T24,T32,T49,LITREF(lit_84));
UNLINK_STACK();
  QRET(T14);
}

LOCCODEDEF(fun_34) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_33,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_line_of_35) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_line_of_36) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSlstYline_of));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_37) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YgooScolsSlstYline_pah) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YgooScolsSlstYLline_pahG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_nul_39) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YgooScolsSlstYDline_pah_nul));
}

FUNCODEDEF(YgooScolsSlstYline_pair) {
  P h_,t_,l_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  ARG(l_, 2);
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YgooScolsSlstYLline_listG),VARREF(Yhead),h_,VARREF(Ytail),t_,VARREF(YgooScolsSlstYline_of),l_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsSlstYline_list) {
  P l_,elts_;
  P iF3259;
  P rF3258;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(l_, 0);
  NARGS(elts_, 1);
  T6 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YgooScolsSlstYLline_listG));
  rF3258 = T6;
  T8 = CALL1(1,VARREF(YgooStypesYlen),elts_);
  T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
  iF3259 = T7;
  LOOP_111: {
    P a111_0,a111_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF3259,YPint((P)0));
    if (T1 != YPfalse) {
      T0 = rF3258;
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYelt),elts_,iF3259);
      T3 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T4,rF3258,l_);
      T5 = CALL2(1,VARREF(YgooSmathY_),iF3259,YPint((P)1));
      a111_0 = T3;
      a111_1 = T5;
      rF3258 = a111_0;
      iF3259 = a111_1;
      goto LOOP_111;
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_copy_42) {
  P l_,src_;
  P tmpF3263;
  P tmpF3262;
  P tF3261;
  P hF3260;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(l_, 0);
  ARG(src_, 1);
  T2 = CALL2(1,VARREF(YisaQ),src_,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmacrosYnulQ),src_);
    T3 = CALL1(1,VARREF(Ynot),T4);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T13 = CALL1(1,VARREF(Yhead),src_);
    hF3260 = T13;
    T12 = CALL1(1,VARREF(Ytail),src_);
    tF3261 = T12;
    T8 = CALL1(1,VARREF(YgooScolsSlstYline_of),hF3260);
    tmpF3262 = T8;
    if (tmpF3262 != YPfalse) {
      T7 = tmpF3262;
    } else {
      T7 = l_;
    }
    T6 = CALL2(0,FREEREF(0),T7,hF3260);
    T11 = CALL1(1,VARREF(YgooScolsSlstYline_of),tF3261);
    tmpF3263 = T11;
    if (tmpF3263 != YPfalse) {
      T10 = tmpF3263;
    } else {
      T10 = l_;
    }
    T9 = CALL2(0,FREEREF(0),T10,tF3261);
    T5 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T6,T9,l_);
    T0 = T5;
  } else {
    T0 = src_;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_line_list_of_43) {
  P ctx_,src_;
  P copyF3264;
  P T0,T1,T2;
LINK_STACK();
  ARG(ctx_, 0);
  ARG(src_, 1);
  T2 = FUNSHELL(1,fun_copy_42,1);
  copyF3264 = T2;
  FUNINIT(copyF3264, 1,copyF3264);
  T1 = CALL1(1,VARREF(YgooScolsSlstYline_of),ctx_);
  T0 = CALL2(1,copyF3264,T1,src_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_line_list_of_44) {
  P ctx_,src_;
LINK_STACK();
  ARG(ctx_, 0);
  ARG(src_, 1);
UNLINK_STACK();
  QRET(src_);
}

P YgooScolsSlstY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
DEFCREGS();
  VARSET(YgooScolsSlstYLlistG,VARREF(YLlstG));
  lit_0 = YPPsym((P)"lst");
  lit_1 = YPPlist(1,YPPsym((P)"elts"));
  T1 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_0),LITREF(lit_1),YPfalse);
  VARSET(Ylst,T0);
  lit_2 = YPPsym((P)"lst*");
  lit_3 = YPPlist(1,YPPsym((P)"elts"));
  T3 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_2),LITREF(lit_3),YPfalse);
  VARSET(YgooScolsSlstYlstT,T2);
  VARSET(YgooScolsSlstYlist,VARREF(Ylst));
  lit_4 = YPPsym((P)"pair");
  lit_5 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T5 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_4),LITREF(lit_5),YPfalse);
  VARSET(YgooSmacrosYpair,T4);
  lit_6 = YPPsym((P)"assqn");
  lit_7 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"l"),YPPsym((P)"pos"));
  T7 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_6),LITREF(lit_7),YPfalse);
  VARSET(YgooScolsSlstYassqn,T6);
  lit_8 = YPPsym((P)"assq");
  lit_9 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T9 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_8),LITREF(lit_9),YPfalse);
  VARSET(YgooScolsSlstYassq,T8);
  lit_10 = YPPsym((P)"len");
  lit_11 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_0 = YPfab_met(FUNCODEREF(fun_len_0),T10,LITREF(lit_10),LITREF(lit_11),sloc(44),YPfalse);
  T12 = VARREF_OR(YgooStypesYlen,YPfalse);
  T13 = fun_len_0;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooStypesYlen,T11);
  lit_12 = YPPsym((P)"elt-or");
  lit_13 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"key"),YPPsym((P)"default"));
  T14 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_1 = YPfab_met(FUNCODEREF(fun_elt_or_1),T14,LITREF(lit_12),LITREF(lit_13),sloc(48),YPfalse);
  T16 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T17 = fun_elt_or_1;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooScolsScolYelt_or,T15);
  lit_14 = YPPsym((P)"elt-setter");
  lit_15 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"key"));
  T18 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_2 = YPfab_met(FUNCODEREF(fun_elt_setter_2),T18,LITREF(lit_14),LITREF(lit_15),sloc(56),YPfalse);
  T20 = VARREF_OR(YgooScolsScolxYelt_setter,YPfalse);
  T21 = fun_elt_setter_2;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YgooScolsScolxYelt_setter,T19);
  lit_16 = YPPsym((P)"nul?");
  lit_17 = YPPlist(1,YPPsym((P)"c"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_nulQ_3 = YPfab_met_inlineable(FUNCODEREF(fun_nulQ_3),T22,LITREF(lit_16),LITREF(lit_17),sloc(64),YPfalse);
  T24 = VARREF_OR(YgooSmacrosYnulQ,YPfalse);
  T25 = fun_nulQ_3;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooSmacrosYnulQ,T23);
  lit_18 = YPPsym((P)"nul");
  lit_19 = YPPlist(1,YPPsym((P)"c"));
  T27 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T26 = YPfab_sig(YPPlist(1,T27),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_nul_4 = YPfab_met_inlineable(FUNCODEREF(fun_nul_4),T26,LITREF(lit_18),LITREF(lit_19),sloc(66),YPfalse);
  T29 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T30 = fun_nul_4;
  T28 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T29,T30);
  VARSET(YgooScolsScolYnul,T28);
  lit_20 = YPPsym((P)"fab");
  lit_21 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"s"));
  T32 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T31 = YPfab_sig(YPPlist(2,T32,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_fab_5 = YPfab_met(FUNCODEREF(fun_fab_5),T31,LITREF(lit_20),LITREF(lit_21),sloc(68),YPfalse);
  T34 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T35 = fun_fab_5;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooScolsScolYfab,T33);
  lit_22 = YPPsym((P)"fabs");
  lit_23 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"objects"));
  T37 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T36 = YPfab_sig(YPPlist(1,T37),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_fabs_6 = YPfab_met(FUNCODEREF(fun_fabs_6),T36,LITREF(lit_22),LITREF(lit_23),sloc(74),YPfalse);
  T39 = VARREF_OR(YgooSchrYfabs,YPfalse);
  T40 = fun_fabs_6;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YgooSchrYfabs,T38);
  lit_24 = YPPlist(1,YPPsym((P)"args"));
  T43 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  T42 = fun_lstT_7 = YPfab_met(FUNCODEREF(fun_lstT_7),T43,LITREF(lit_2),LITREF(lit_24),sloc(81),YPfalse);
  T46 = VARREF_OR(YgooScolsSlstYlstT,YPfalse);
  T47 = fun_lstT_7;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  T44 = VARSET(YgooScolsSlstYlstT,T45);
  T41 = T44;
  return T41;
}

P YgooScolsSlstY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135;
DEFCREGS();
  lit_25 = YPPsym((P)"<lst-enum>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooScolsScolYLenumG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_25),T1);
  VARSET(YgooScolsSlstYLlst_enumG,T0);
  lit_26 = YPPsym((P)"%dat");
  lit_27 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_8 = YPfab_met(FUNCODEREF(fun_Pdat_8),T2,LITREF(lit_26),LITREF(lit_27),sloc(90),YPfalse);
  T4 = VARREF_OR(YgooScolsSlstYPdat,YPfalse);
  T5 = fun_Pdat_8;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YgooScolsSlstYPdat,T3);
  lit_28 = YPPsym((P)"%dat-setter");
  lit_29 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdat_setter_9 = YPfab_met(FUNCODEREF(fun_Pdat_setter_9),T6,LITREF(lit_28),LITREF(lit_29),sloc(90),YPfalse);
  T8 = VARREF_OR(YgooScolsSlstYPdat_setter,YPfalse);
  T9 = fun_Pdat_setter_9;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooScolsSlstYPdat_setter,T7);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPdat),VARREF(YgooScolsSlstYPdat_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_30 = YPPsym((P)"%key");
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pkey_10 = YPfab_met(FUNCODEREF(fun_Pkey_10),T10,LITREF(lit_30),LITREF(lit_31),sloc(91),YPfalse);
  T12 = VARREF_OR(YgooScolsSlstYPkey,YPfalse);
  T13 = fun_Pkey_10;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooScolsSlstYPkey,T11);
  lit_32 = YPPsym((P)"%key-setter");
  lit_33 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pkey_setter_11 = YPfab_met(FUNCODEREF(fun_Pkey_setter_11),T14,LITREF(lit_32),LITREF(lit_33),sloc(91),YPfalse);
  T16 = VARREF_OR(YgooScolsSlstYPkey_setter,YPfalse);
  T17 = fun_Pkey_setter_11;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooScolsSlstYPkey_setter,T15);
  lit_34 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPfab_met(FUNCODEREF(fun_12),T18,YPfalse,LITREF(lit_34),sloc(91),YPfalse);
  T19 = fun_12;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPkey),VARREF(YgooScolsSlstYPkey_setter),VARREF(YLintG),T19);
  lit_35 = YPPsym((P)"enum");
  lit_36 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_enum_13 = YPfab_met(FUNCODEREF(fun_enum_13),T20,LITREF(lit_35),LITREF(lit_36),sloc(92),YPfalse);
  T22 = VARREF_OR(YgooScolsScolYenum,YPfalse);
  T23 = fun_enum_13;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooScolsScolYenum,T21);
  lit_37 = YPPsym((P)"fin?");
  lit_38 = YPPlist(1,YPPsym((P)"e"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_14 = YPfab_met(FUNCODEREF(fun_finQ_14),T24,LITREF(lit_37),LITREF(lit_38),sloc(94),YPfalse);
  T26 = VARREF_OR(YgooScolsScolYfinQ,YPfalse);
  T27 = fun_finQ_14;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooScolsScolYfinQ,T25);
  lit_39 = YPPsym((P)"nxt");
  lit_40 = YPPlist(1,YPPsym((P)"e"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_nxt_15 = YPfab_met(FUNCODEREF(fun_nxt_15),T28,LITREF(lit_39),LITREF(lit_40),sloc(96),YPfalse);
  T30 = VARREF_OR(YgooScolsScolYnxt,YPfalse);
  T31 = fun_nxt_15;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooScolsScolYnxt,T29);
  lit_41 = YPPsym((P)"now");
  lit_42 = YPPlist(1,YPPsym((P)"e"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_16 = YPfab_met(FUNCODEREF(fun_now_16),T32,LITREF(lit_41),LITREF(lit_42),sloc(98),YPfalse);
  T34 = VARREF_OR(YgooScolsScolYnow,YPfalse);
  T35 = fun_now_16;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooScolsScolYnow,T33);
  lit_43 = YPPsym((P)"now-setter");
  lit_44 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"e"));
  T36 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_17 = YPfab_met(FUNCODEREF(fun_now_setter_17),T36,LITREF(lit_43),LITREF(lit_44),sloc(100),YPfalse);
  T38 = VARREF_OR(YgooScolsScolYnow_setter,YPfalse);
  T39 = fun_now_setter_17;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooScolsScolYnow_setter,T37);
  lit_45 = YPPsym((P)"now-key");
  lit_46 = YPPlist(1,YPPsym((P)"e"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_now_key_18 = YPfab_met(FUNCODEREF(fun_now_key_18),T40,LITREF(lit_45),LITREF(lit_46),sloc(102),YPfalse);
  T42 = VARREF_OR(YgooScolsScolYnow_key,YPfalse);
  T43 = fun_now_key_18;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooScolsScolYnow_key,T41);
  lit_47 = YPPsym((P)"add");
  lit_48 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_add_19 = YPfab_met(FUNCODEREF(fun_add_19),T44,LITREF(lit_47),LITREF(lit_48),sloc(106),YPfalse);
  T46 = VARREF_OR(YgooScolsScolYadd,YPfalse);
  T47 = fun_add_19;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooScolsScolYadd,T45);
  lit_49 = YPPsym((P)"last");
  lit_50 = YPPlist(1,YPPsym((P)"x"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_20 = YPfab_met(FUNCODEREF(fun_last_20),T48,LITREF(lit_49),LITREF(lit_50),sloc(109),YPfalse);
  T50 = VARREF_OR(YgooSmacrosYlast,YPfalse);
  T51 = fun_last_20;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooSmacrosYlast,T49);
  lit_51 = YPPsym((P)"rev!");
  lit_52 = YPPlist(1,YPPsym((P)"c"));
  T52 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_revX_21 = YPfab_met(FUNCODEREF(fun_revX_21),T52,LITREF(lit_51),LITREF(lit_52),sloc(113),YPfalse);
  T54 = VARREF_OR(YgooSmacrosYrevX,YPfalse);
  T55 = fun_revX_21;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooSmacrosYrevX,T53);
  lit_53 = YPPsym((P)"cat!");
  lit_54 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  lit_55 = YPPsym((P)"connect");
  lit_56 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T57 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_connect_22 = YPfab_met(FUNCODEREF(fun_connect_22),T57,LITREF(lit_55),LITREF(lit_56),sloc(122),YPfalse);
  T56 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_catX_23 = YPfab_met(FUNCODEREF(fun_catX_23),T56,LITREF(lit_53),LITREF(lit_54),sloc(121),YPfalse);
  T59 = VARREF_OR(YgooScolsSseqxYcatX,YPfalse);
  T60 = fun_catX_23;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YgooScolsSseqxYcatX,T58);
  lit_57 = YPPlist(1,YPPsym((P)"objects"));
  T61 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  fun_lst_24 = YPfab_met(FUNCODEREF(fun_lst_24),T61,LITREF(lit_0),LITREF(lit_57),sloc(139),YPfalse);
  T63 = VARREF_OR(Ylst,YPfalse);
  T64 = fun_lst_24;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(Ylst,T62);
  lit_58 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T65 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pair_25 = YPfab_met(FUNCODEREF(fun_pair_25),T65,LITREF(lit_4),LITREF(lit_58),sloc(142),YPfalse);
  T67 = VARREF_OR(YgooSmacrosYpair,YPfalse);
  T68 = fun_pair_25;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YgooSmacrosYpair,T66);
  lit_59 = YPPsym((P)"push!");
  lit_60 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T69 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pushX_26 = YPfab_met(FUNCODEREF(fun_pushX_26),T69,LITREF(lit_59),LITREF(lit_60),sloc(145),YPfalse);
  T71 = VARREF_OR(YgooScolsSseqxYpushX,YPfalse);
  T72 = fun_pushX_26;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YgooScolsSseqxYpushX,T70);
  lit_61 = YPPsym((P)"pop!");
  lit_62 = YPPlist(1,YPPsym((P)"c"));
  T74 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T73 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T74,Ynil);
  fun_popX_27 = YPfab_met(FUNCODEREF(fun_popX_27),T73,LITREF(lit_61),LITREF(lit_62),sloc(148),YPfalse);
  T76 = VARREF_OR(YgooScolsSseqxYpopX,YPfalse);
  T77 = fun_popX_27;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YgooScolsSseqxYpopX,T75);
  lit_63 = YPPsym((P)"sort-by!");
  lit_64 = YPPlist(2,YPPsym((P)"items"),YPPsym((P)"test"));
  T78 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sort_byX_28 = YPfab_met(FUNCODEREF(fun_sort_byX_28),T78,LITREF(lit_63),LITREF(lit_64),sloc(152),YPfalse);
  T80 = VARREF_OR(YgooScolsSseqYsort_byX,YPfalse);
  T81 = fun_sort_byX_28;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YgooScolsSseqYsort_byX,T79);
  lit_65 = YPPsym((P)"to-str");
  lit_66 = YPPlist(1,YPPsym((P)"x"));
  lit_67 = YPsb((P)"(");
  lit_68 = YPsb((P)")");
  T82 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_29 = YPfab_met(FUNCODEREF(fun_to_str_29),T82,LITREF(lit_65),LITREF(lit_66),sloc(167),YPfalse);
  T84 = VARREF_OR(YgooSanyYto_str,YPfalse);
  T85 = fun_to_str_29;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YgooSanyYto_str,T83);
  lit_69 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T86 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assq_30 = YPfab_met(FUNCODEREF(fun_assq_30),T86,LITREF(lit_8),LITREF(lit_69),sloc(174),YPfalse);
  T88 = VARREF_OR(YgooScolsSlstYassq,YPfalse);
  T89 = fun_assq_30;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YgooScolsSlstYassq,T87);
  lit_70 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"l"),YPPsym((P)"pos"));
  T90 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_assqn_31 = YPfab_met(FUNCODEREF(fun_assqn_31),T90,LITREF(lit_6),LITREF(lit_70),sloc(181),YPfalse);
  T92 = VARREF_OR(YgooScolsSlstYassqn,YPfalse);
  T93 = fun_assqn_31;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YgooScolsSlstYassqn,T91);
  lit_71 = YPPlist(1,YPPsym((P)"exp"));
  lit_72 = YPPlist(1,YPPsym((P)"return"));
  lit_73 = YPPsym((P)"x-1360");
  lit_74 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_75 = YPPsym((P)"def-list");
  lit_76 = YPsb((P)"Match Pattern Failure");
  lit_77 = YPsb((P)"<");
  lit_78 = YPsb((P)">");
  lit_79 = YPsb((P)"$");
  lit_80 = YPsb((P)"-nul");
  lit_81 = YPPsym((P)"seq");
  lit_82 = YPPsym((P)"dc");
  lit_83 = YPPsym((P)"<lst>");
  lit_84 = Ynil;
  lit_85 = YPPsym((P)"dv");
  lit_86 = YPPsym((P)"new");
  lit_87 = YPPsym((P)"df");
  lit_88 = YPPsym((P)"h");
  lit_89 = YPPsym((P)"t");
  lit_90 = YPPsym((P)"head");
  lit_91 = YPPsym((P)"tail");
  lit_92 = YPPsym((P)"dm");
  lit_93 = YPPsym((P)"e");
  lit_94 = YPPsym((P)"t=");
  lit_95 = YPPsym((P)"=>");
  T96 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1360_32 = YPfab_met(FUNCODEREF(fun_x_1360_32),T96,LITREF(lit_73),LITREF(lit_74),YPfalse,YPfalse);
  T95 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPfab_met(FUNCODEREF(fun_33),T95,YPfalse,LITREF(lit_72),YPfalse,YPfalse);
  T94 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPfab_met(FUNCODEREF(fun_34),T94,YPfalse,LITREF(lit_71),YPfalse,YPfalse);
  T97 = fun_34;
  YPmacro(YPPsym((P)"goo/cols/lst"),YPPsym((P)"def-list"),T97);
  lit_96 = YPPsym((P)"line-of");
  lit_97 = YPPlist(1,YPPsym((P)"x"));
  T98 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_line_of_35 = YPfab_met(FUNCODEREF(fun_line_of_35),T98,LITREF(lit_96),LITREF(lit_97),sloc(197),YPfalse);
  T100 = VARREF_OR(YgooScolsSlstYline_of,YPfalse);
  T101 = fun_line_of_35;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YgooScolsSlstYline_of,T99);
  lit_98 = YPPsym((P)"<line>");
  T103 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLmagG),Ynil);
  T102 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_98),T103);
  VARSET(YgooScolsSlstYLlineG,T102);
  lit_99 = YPPlist(1,YPPsym((P)"_x"));
  T104 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlineG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_line_of_36 = YPfab_met(FUNCODEREF(fun_line_of_36),T104,LITREF(lit_96),LITREF(lit_99),sloc(200),YPfalse);
  T106 = VARREF_OR(YgooScolsSlstYline_of,YPfalse);
  T107 = fun_line_of_36;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooScolsSlstYline_of,T105);
  lit_100 = YPPlist(1,YPPsym((P)"_x"));
  T108 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPfab_met(FUNCODEREF(fun_37),T108,YPfalse,LITREF(lit_100),sloc(200),YPfalse);
  T109 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T110 = fun_37;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSlstYLlineG),VARREF(YgooScolsSlstYline_of),YPfalse,T109,T110);
  lit_101 = YPPsym((P)"<line-pah>");
  T113 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooScolsSlstYLlineG),Ynil);
  T112 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLlstG),T113);
  T111 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_101),T112);
  VARSET(YgooScolsSlstYLline_pahG,T111);
  T114 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsSlstYLline_pahG));
  VARSET(YgooScolsSlstYDline_pah_nul,T114);
  lit_102 = YPPsym((P)"line-pah");
  lit_103 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T115 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_pah = YPfab_met(FUNCODEREF(YgooScolsSlstYline_pah),T115,LITREF(lit_102),LITREF(lit_103),sloc(202),YPfalse);
  T116 = YgooScolsSlstYline_pah;
  VARSET(YgooScolsSlstYline_pah,T116);
  lit_104 = YPPlist(1,YPPsym((P)"e"));
  T118 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSlstYLline_pahG));
  T117 = YPfab_sig(YPPlist(1,T118),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLline_pahG),Ynil);
  fun_nul_39 = YPfab_met(FUNCODEREF(fun_nul_39),T117,LITREF(lit_18),LITREF(lit_104),sloc(202),YPfalse);
  T120 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T121 = fun_nul_39;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YgooScolsScolYnul,T119);
  VARSET(YgooScolsSlstYLline_listG,VARREF(YgooScolsSlstYLline_pahG));
  lit_105 = YPPsym((P)"line-pair");
  lit_106 = YPPlist(3,YPPsym((P)"h"),YPPsym((P)"t"),YPPsym((P)"l"));
  T122 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_pair = YPfab_met(FUNCODEREF(YgooScolsSlstYline_pair),T122,LITREF(lit_105),LITREF(lit_106),sloc(206),YPfalse);
  T123 = YgooScolsSlstYline_pair;
  VARSET(YgooScolsSlstYline_pair,T123);
  lit_107 = YPPsym((P)"line-list");
  lit_108 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"elts"));
  T124 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_list = YPfab_met(FUNCODEREF(YgooScolsSlstYline_list),T124,LITREF(lit_107),LITREF(lit_108),sloc(208),YPfalse);
  T125 = YgooScolsSlstYline_list;
  VARSET(YgooScolsSlstYline_list,T125);
  lit_109 = YPPsym((P)"line-list-of");
  lit_110 = YPPlist(2,YPPsym((P)"ctx"),YPPsym((P)"src"));
  lit_111 = YPPsym((P)"copy");
  lit_112 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"src"));
  T127 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_copy_42 = YPfab_met(FUNCODEREF(fun_copy_42),T127,LITREF(lit_111),LITREF(lit_112),sloc(215),YPfalse);
  T126 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_line_list_of_43 = YPfab_met(FUNCODEREF(fun_line_list_of_43),T126,LITREF(lit_109),LITREF(lit_110),sloc(214),YPfalse);
  T129 = VARREF_OR(YgooScolsSlstYline_list_of,YPfalse);
  T130 = fun_line_list_of_43;
  T128 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T129,T130);
  VARSET(YgooScolsSlstYline_list_of,T128);
  lit_113 = YPPlist(2,YPPsym((P)"ctx"),YPPsym((P)"src"));
  T131 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_line_list_of_44 = YPfab_met(FUNCODEREF(fun_line_list_of_44),T131,LITREF(lit_109),LITREF(lit_113),sloc(221),YPfalse);
  T133 = VARREF_OR(YgooScolsSlstYline_list_of,YPfalse);
  T134 = fun_line_list_of_44;
  T132 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T133,T134);
  VARSET(YgooScolsSlstYline_list_of,T132);
  T135 = YPfalse;
  return T135;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSany},
  {&module_info_gooSlog},
  {&module_info_gooSchr},
  {&module_info_gooSmag},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
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
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
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
  {"%product-elts", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
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
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
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
  {"t+", &module_info_gooStypes, NULL},
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
  {"<box>", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
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
  {"%to-tup", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
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
  {"odd?", &module_info_gooSmath, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
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
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
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
  {"pop!", &module_info_gooScolsSseqx, NULL},
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
  {"min", &module_info_gooSmag, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
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
  {"%object-of", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
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
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {">=", &module_info_gooSmag, NULL},
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
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
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
  {"<=", &module_info_gooSmag, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
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
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
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
  {"keys", &module_info_gooScolsScol, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"exp", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {">", &module_info_gooSmag, NULL},
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
  {"$bot", &module_info_gooStypes, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
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
  {"t?", &module_info_gooStypes, NULL},
  {"%selt", &module_info_gooSboot, NULL},
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
  {"line-pair", CVAR, &YgooScolsSlstYline_pair},
  {"lst*", CVAR, &YgooScolsSlstYlstT},
  {"<list>", CVAR, &YgooScolsSlstYLlistG},
  {"line-pah", CVAR, &YgooScolsSlstYline_pah},
  {"<lst-enum>", CVAR, &YgooScolsSlstYLlst_enumG},
  {"<line>", CVAR, &YgooScolsSlstYLlineG},
  {"list", CVAR, &YgooScolsSlstYlist},
  {"%dat-setter", CVAR, &YgooScolsSlstYPdat_setter},
  {"line-of", CVAR, &YgooScolsSlstYline_of},
  {"$line-pah-nul", CVAR, &YgooScolsSlstYDline_pah_nul},
  {"%dat", CVAR, &YgooScolsSlstYPdat},
  {"---main-0---", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"line-list-of", CVAR, &YgooScolsSlstYline_list_of},
  {"%key-setter", CVAR, &YgooScolsSlstYPkey_setter},
  {"def-list", PVAR, NULL},
  {"line-list", CVAR, &YgooScolsSlstYline_list},
  {"assq", CVAR, &YgooScolsSlstYassq},
  {"<line-pah>", CVAR, &YgooScolsSlstYLline_pahG},
  {"%key", CVAR, &YgooScolsSlstYPkey},
  {"<line-list>", CVAR, &YgooScolsSlstYLline_listG},
  {"assqn", CVAR, &YgooScolsSlstYassqn},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"lst*", NULL},
  {"lst", NULL},
  {"<list>", NULL},
  {"tail-setter", NULL},
  {"tail", NULL},
  {"<line>", NULL},
  {"list", NULL},
  {"line-of", NULL},
  {"head-setter", NULL},
  {"head", NULL},
  {"nil", NULL},
  {"line-list-of", NULL},
  {"<lst>", NULL},
  {"def-list", NULL},
  {"line-list", NULL},
  {"assq", NULL},
  {"line-pair", NULL},
  {"<line-list>", NULL},
  {"assqn", NULL},
  {"pair", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSlst;
MODULE_INFO module_info_gooScolsSlst = {
  "goo/cols/lst",
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
extern void load_module_gooSlog (void);
extern void load_module_gooSchr (void);
extern void load_module_gooSmag (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);

/* EXPRESSION: */

extern void load_module_gooScolsSlst (void);

void load_module_gooScolsSlst (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSany();
  load_module_gooSlog();
  load_module_gooSchr();
  load_module_gooSmag();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();

  (P)YgooScolsSlstY___main_0___();
  (P)YgooScolsSlstY___main_1___();

}

/* END OF GENERATED CODE. */
