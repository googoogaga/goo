/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/packer");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/packer */

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
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOtup,"goo/boot","@tup");
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
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
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
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail,"goo/boot","tail");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
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
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YgooSpackerYpacker,"goo/packer","packer");
DEF(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YOfold,"goo/boot","@fold");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYtanh,"goo/math","tanh");
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
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLclassG,"goo/boot","<class>");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
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
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
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
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
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
EXT(YPsnul,"goo/boot","%snul");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yerror,"goo/boot","error");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooSpackerYpacker_reser,"goo/packer","packer-reser");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YgooSpackerYpacker_adder,"goo/packer","packer-adder");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yclass_gens,"goo/boot","class-gens");
DEF(YgooSpackerYpacker_value_setter,"goo/packer","packer-value-setter");
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
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
DEF(YgooSpackerYpacker_value,"goo/packer","packer-value");
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
DEF(YgooSpackerYpacker_res,"goo/packer","packer-res");
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
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YOlit,"goo/boot","@lit");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YOallQ,"goo/boot","@all?");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YtT,"goo/boot","t*");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
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
DEF(YgooSpackerYLsim_packerG,"goo/packer","<sim-packer>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmacrosYpair,"goo/macros","pair");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_16);
DEFLIT(lit_82);
DEFLIT(lit_54);
DEFLIT(lit_56);
DEFLIT(lit_12);
DEFLIT(lit_68);
DEFLIT(lit_3);
DEFLIT(lit_42);
DEFLIT(lit_11);
DEFLIT(lit_85);
DEFLIT(lit_59);
DEFLIT(lit_27);
DEFLIT(lit_36);
DEFLIT(lit_47);
DEFLIT(lit_78);
DEFLIT(lit_38);
DEFLIT(lit_34);
DEFLIT(lit_50);
DEFLIT(lit_43);
DEFLIT(lit_45);
DEFLIT(lit_79);
DEFLIT(lit_21);
DEFLIT(lit_15);
DEFLIT(lit_39);
DEFLIT(lit_20);
DEFLIT(lit_83);
DEFLIT(lit_84);
DEFLIT(lit_17);
DEFLIT(lit_13);
DEFLIT(lit_40);
DEFLIT(lit_52);
DEFLIT(lit_32);
DEFLIT(lit_58);
DEFLIT(lit_14);
DEFLIT(lit_49);
DEFLIT(lit_18);
DEFLIT(lit_44);
DEFLIT(lit_53);
DEFLIT(lit_46);
DEFLIT(lit_70);
DEFLIT(lit_71);
DEFLIT(lit_8);
DEFLIT(lit_28);
DEFLIT(lit_61);
DEFLIT(lit_4);
DEFLIT(lit_26);
DEFLIT(lit_9);
DEFLIT(lit_76);
DEFLIT(lit_65);
DEFLIT(lit_30);
DEFLIT(lit_80);
DEFLIT(lit_69);
DEFLIT(lit_6);
DEFLIT(lit_64);
DEFLIT(lit_33);
DEFLIT(lit_7);
DEFLIT(lit_0);
DEFLIT(lit_23);
DEFLIT(lit_1);
DEFLIT(lit_75);
DEFLIT(lit_74);
DEFLIT(lit_48);
DEFLIT(lit_24);
DEFLIT(lit_37);
DEFLIT(lit_81);
DEFLIT(lit_63);
DEFLIT(lit_60);
DEFLIT(lit_29);
DEFLIT(lit_73);
DEFLIT(lit_19);
DEFLIT(lit_57);
DEFLIT(lit_72);
DEFLIT(lit_66);
DEFLIT(lit_31);
DEFLIT(lit_67);
DEFLIT(lit_62);
DEFLIT(lit_22);
DEFLIT(lit_35);
DEFLIT(lit_55);
DEFLIT(lit_77);
DEFLIT(lit_41);
DEFLIT(lit_10);
DEFLIT(lit_51);
DEFLIT(lit_25);
DEFLIT(lit_5);
DEFLIT(lit_2);

/* FUNCTIONS: */

LOCFOR(fun_packer_value_0);
LOCFOR(fun_packer_value_setter_1);
LOCFOR(fun_packer_adder_2);
LOCFOR(fun_packer_reser_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_packer_6);
LOCFOR(fun_packer_add_7);
LOCFOR(fun_packer_res_8);
LOCFOR(fun_9);
LOCFOR(fun_packer_fab_10);
LOCFOR(fun_11);
LOCFOR(fun_packer_fab_12);
LOCFOR(fun_x_1376_13);
LOCFOR(fun_x_1382_14);
LOCFOR(fun_15);
LOCFOR(fun_x_1379_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_x_1395_20);
LOCFOR(fun_x_1404_21);
LOCFOR(fun_22);
LOCFOR(fun_x_1401_23);
LOCFOR(fun_24);
LOCFOR(fun_x_1398_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_x_1408_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_x_1412_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_x_1416_35);
LOCFOR(fun_36);
LOCFOR(fun_37);
LOCFOR(fun_x_1420_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
LOCFOR(fun_x_1424_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
extern P YgooSpackerY___main_0___ ();
extern P YgooSpackerY___main_1___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_packer_value_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSpackerYpacker_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_packer_value_setter_1) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooSpackerYpacker_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_packer_adder_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSpackerYpacker_adder));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_packer_reser_3) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSpackerYpacker_reser));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_4) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

LOCCODEDEF(fun_5) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = fun_4;
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_packer_6) {
  P init_,add_,res_;
  P T0;
LINK_STACK();
  ARG(init_, 0);
  ARG(add_, 1);
  ARG(res_, 2);
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_value),init_,VARREF(YgooSpackerYpacker_adder),add_,VARREF(YgooSpackerYpacker_reser),res_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_packer_add_7) {
  P a_,x_;
  P x_1366F3310;
  P T0,T1,T2;
LINK_STACK();
  ARG(a_, 0);
  ARG(x_, 1);
  x_1366F3310 = a_;
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_adder),a_);
  T1 = CALL1(1,VARREF(YgooSpackerYpacker_value),a_);
  T0 = CALL2(1,T2,x_,T1);
  CALL2(1,VARREF(YgooSpackerYpacker_value_setter),T0,x_1366F3310);
UNLINK_STACK();
  RET(x_1366F3310);
}

LOCCODEDEF(fun_packer_res_8) {
  P a_;
  P T0,T1,T2;
LINK_STACK();
  ARG(a_, 0);
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_reser),a_);
  T1 = CALL1(1,VARREF(YgooSpackerYpacker_value),a_);
  T0 = CALL1(1,T2,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_9) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_packer_fab_10) {
  P t_;
  P T0,T1;
LINK_STACK();
  ARG(t_, 0);
  T1 = FUNFAB(fun_9,1,t_);
  T0 = CALL3(1,VARREF(YgooSpackerYpacker),Ynil,VARREF(YgooSmacrosYpair),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_11) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

LOCCODEDEF(fun_packer_fab_12) {
  P t_;
  P T0,T1;
LINK_STACK();
  ARG(t_, 0);
  T1 = fun_11;
  T0 = CALL3(1,VARREF(YgooSpackerYpacker),YPint((P)0),VARREF(YgooSmathYA),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_x_1376_13) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_31),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1382_14) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_39));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_15) {
  P return_;
  P x_1381F3324;
  P x_1381F3323;
  P x_1381F3322;
  P x_1381F3321;
  P x_1381F3320;
  P x_1381F3319;
  P x_1381F3318;
  P x_1381F3317;
  P x_1381F3316;
  P restF3315;
  P packF3314;
  P varF3313;
  P x_1381F3312;
  P x_1382F3311;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
LINK_STACK();
  ARG(return_, 0);
  T36 = FUNSHELL(0,fun_x_1382_14,1);
  x_1382F3311 = T36;
  FUNINIT(x_1382F3311, 1,return_);
  x_1381F3312 = FREEREF(0);
  varF3313 = YPfalse;
  packF3314 = YPfalse;
  restF3315 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1381F3312,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1381F3312,x_1382F3311);
    x_1381F3316 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1381F3316,x_1382F3311);
    varF3313 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1381F3316);
    x_1381F3317 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1381F3317,x_1382F3311);
    packF3314 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1381F3317);
    x_1381F3318 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1381F3318,x_1382F3311);
    x_1381F3319 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1381F3319,x_1382F3311);
    T11 = CALL1(1,VARREF(Ytail),x_1381F3318);
    x_1381F3320 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1381F3320,x_1382F3311);
    T17 = CALL1(1,VARREF(Ytail),x_1381F3312);
    x_1381F3321 = T17;
    restF3315 = x_1381F3321;
    x_1381F3322 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1381F3322,x_1382F3311);
    x_1381F3323 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1381F3323,x_1382F3311);
    T7 = CALL1(1,VARREF(Ytail),x_1381F3322);
    x_1381F3324 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1381F3324,x_1382F3311);
  } else {
    T18 = CALL2(1,x_1382F3311,LITREF(lit_32),x_1381F3312);
  }
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_40));
  T26 = varF3313;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T28 = packF3314;
  T27 = CALL1(1,VARREF(Ylst),T28);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T27,LITREF(lit_41));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_41));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T34 = restF3315;
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,LITREF(lit_41));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T35 = BOXGET(FREEREF(1));
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T35,LITREF(lit_41));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T29,LITREF(lit_41));
UNLINK_STACK();
  QRET(T19);
}

LOCCODEDEF(fun_x_1379_16) {
  P msg_,args_;
  P x_1380F3325;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1380F3325 = FREEREF(0);
  T2 = FUNFAB(fun_15,2,x_1380F3325,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_17) {
  P return_;
  P x_1378F3327;
  P x_1379F3326;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(return_, 0);
  T6 = FUNSHELL(0,fun_x_1379_16,3);
  x_1379F3326 = T6;
  FUNINIT(x_1379F3326, 3,FREEREF(0),FREEREF(1),return_);
  x_1378F3327 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1378F3327,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1378F3327,x_1379F3326);
  } else {
    T2 = CALL2(1,x_1379F3326,LITREF(lit_32),x_1378F3327);
  }
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T5 = BOXGET(FREEREF(1));
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_41));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_18) {
  P return_;
  P x_1377F3339;
  P x_1375F3338;
  P x_1375F3337;
  P x_1375F3336;
  P x_1375F3335;
  P x_1375F3334;
  P x_1375F3333;
  P x_1375F3332;
  P bodyF3331;
  P declsF3330;
  P x_1375F3329;
  P x_1376F3328;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(return_, 0);
  T15 = FUNSHELL(0,fun_x_1376_13,2);
  x_1376F3328 = T15;
  FUNINIT(x_1376F3328, 2,FREEREF(0),return_);
  x_1375F3329 = FREEREF(0);
  declsF3330 = YPfalse;
  bodyF3331 = YPfalse;
  bodyF3331 = BOXFAB(bodyF3331);
  T2 = CALL2(1,VARREF(YisaQ),x_1375F3329,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T10 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1375F3329,LITREF(lit_31),x_1376F3328);
    x_1375F3332 = T10;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1375F3332,x_1376F3328);
    x_1375F3333 = T8;
    declsF3330 = x_1375F3333;
    x_1375F3334 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1375F3334,x_1376F3328);
    x_1375F3335 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1375F3335,x_1376F3328);
    T7 = CALL1(1,VARREF(Ytail),x_1375F3334);
    x_1375F3336 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1375F3336,x_1376F3328);
    T9 = CALL1(1,VARREF(Ytail),x_1375F3332);
    x_1375F3337 = T9;
    BOXPUT(x_1375F3337,bodyF3331);
    x_1375F3338 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1375F3338,x_1376F3328);
  } else {
    T11 = CALL2(1,x_1376F3328,LITREF(lit_32),x_1375F3329);
  }
  T14 = declsF3330;
  x_1377F3339 = T14;
  T13 = FUNFAB(fun_17,2,x_1377F3339,bodyF3331);
  T12 = with_exit(T13);
UNLINK_STACK();
  QRET(T12);
}

LOCCODEDEF(fun_19) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_18,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1395_20) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_47),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1404_21) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_39));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_22) {
  P return_;
  P x_1403F3347;
  P x_1403F3346;
  P x_1403F3345;
  P x_1403F3344;
  P restF3343;
  P nameF3342;
  P x_1403F3341;
  P x_1404F3340;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(return_, 0);
  T21 = FUNSHELL(0,fun_x_1404_21,1);
  x_1404F3340 = T21;
  FUNINIT(x_1404F3340, 1,return_);
  x_1403F3341 = FREEREF(0);
  nameF3342 = YPfalse;
  restF3343 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1403F3341,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1403F3341,x_1404F3340);
    nameF3342 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1403F3341);
    x_1403F3344 = T8;
    restF3343 = x_1403F3344;
    x_1403F3345 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1403F3345,x_1404F3340);
    x_1403F3346 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1403F3346,x_1404F3340);
    T6 = CALL1(1,VARREF(Ytail),x_1403F3345);
    x_1403F3347 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1403F3347,x_1404F3340);
  } else {
    T9 = CALL2(1,x_1404F3340,LITREF(lit_32),x_1403F3341);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T17 = nameF3342;
  T16 = CALL1(1,VARREF(Ylst),T17);
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T18,LITREF(lit_41));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T19 = restF3343;
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T19,LITREF(lit_41));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T20 = BOXGET(FREEREF(1));
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T20,LITREF(lit_41));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_x_1401_23) {
  P msg_,args_;
  P x_1402F3348;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1402F3348 = FREEREF(0);
  T2 = FUNFAB(fun_22,2,x_1402F3348,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_24) {
  P return_;
  P x_1400F3362;
  P x_1400F3361;
  P x_1400F3360;
  P x_1400F3359;
  P x_1400F3358;
  P x_1400F3357;
  P x_1400F3356;
  P x_1400F3355;
  P x_1400F3354;
  P restF3353;
  P typeF3352;
  P nameF3351;
  P x_1400F3350;
  P x_1401F3349;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
LINK_STACK();
  ARG(return_, 0);
  T39 = FUNSHELL(0,fun_x_1401_23,3);
  x_1401F3349 = T39;
  FUNINIT(x_1401F3349, 3,FREEREF(0),FREEREF(1),return_);
  x_1400F3350 = FREEREF(0);
  nameF3351 = YPfalse;
  typeF3352 = YPfalse;
  restF3353 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1400F3350,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1400F3350,x_1401F3349);
    x_1400F3354 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1400F3354,x_1401F3349);
    nameF3351 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1400F3354);
    x_1400F3355 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1400F3355,x_1401F3349);
    typeF3352 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1400F3355);
    x_1400F3356 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1400F3356,x_1401F3349);
    x_1400F3357 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1400F3357,x_1401F3349);
    T11 = CALL1(1,VARREF(Ytail),x_1400F3356);
    x_1400F3358 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1400F3358,x_1401F3349);
    T17 = CALL1(1,VARREF(Ytail),x_1400F3350);
    x_1400F3359 = T17;
    restF3353 = x_1400F3359;
    x_1400F3360 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1400F3360,x_1401F3349);
    x_1400F3361 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1400F3361,x_1401F3349);
    T7 = CALL1(1,VARREF(Ytail),x_1400F3360);
    x_1400F3362 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1400F3362,x_1401F3349);
  } else {
    T18 = CALL2(1,x_1401F3349,LITREF(lit_32),x_1400F3350);
  }
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T26 = nameF3351;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_3));
  T31 = typeF3352;
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_41));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T27,LITREF(lit_41));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_41));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T37 = restF3353;
  T36 = CALL2(1,VARREF(YgooSmacrosYcat),T37,LITREF(lit_41));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T38 = BOXGET(FREEREF(1));
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T38,LITREF(lit_41));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T32,LITREF(lit_41));
UNLINK_STACK();
  QRET(T19);
}

LOCCODEDEF(fun_x_1398_25) {
  P msg_,args_;
  P x_1399F3363;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1399F3363 = FREEREF(0);
  T2 = FUNFAB(fun_24,2,x_1399F3363,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_26) {
  P return_;
  P x_1397F3365;
  P x_1398F3364;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(return_, 0);
  T6 = FUNSHELL(0,fun_x_1398_25,3);
  x_1398F3364 = T6;
  FUNINIT(x_1398F3364, 3,FREEREF(0),FREEREF(1),return_);
  x_1397F3365 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1397F3365,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1397F3365,x_1398F3364);
  } else {
    T2 = CALL2(1,x_1398F3364,LITREF(lit_32),x_1397F3365);
  }
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T5 = BOXGET(FREEREF(1));
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_41));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_27) {
  P return_;
  P x_1396F3377;
  P x_1394F3376;
  P x_1394F3375;
  P x_1394F3374;
  P x_1394F3373;
  P x_1394F3372;
  P x_1394F3371;
  P x_1394F3370;
  P bodyF3369;
  P varsF3368;
  P x_1394F3367;
  P x_1395F3366;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(return_, 0);
  T15 = FUNSHELL(0,fun_x_1395_20,2);
  x_1395F3366 = T15;
  FUNINIT(x_1395F3366, 2,FREEREF(0),return_);
  x_1394F3367 = FREEREF(0);
  varsF3368 = YPfalse;
  bodyF3369 = YPfalse;
  bodyF3369 = BOXFAB(bodyF3369);
  T2 = CALL2(1,VARREF(YisaQ),x_1394F3367,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T10 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1394F3367,LITREF(lit_47),x_1395F3366);
    x_1394F3370 = T10;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1394F3370,x_1395F3366);
    x_1394F3371 = T8;
    varsF3368 = x_1394F3371;
    x_1394F3372 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1394F3372,x_1395F3366);
    x_1394F3373 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1394F3373,x_1395F3366);
    T7 = CALL1(1,VARREF(Ytail),x_1394F3372);
    x_1394F3374 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1394F3374,x_1395F3366);
    T9 = CALL1(1,VARREF(Ytail),x_1394F3370);
    x_1394F3375 = T9;
    BOXPUT(x_1394F3375,bodyF3369);
    x_1394F3376 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1394F3376,x_1395F3366);
  } else {
    T11 = CALL2(1,x_1395F3366,LITREF(lit_32),x_1394F3367);
  }
  T14 = varsF3368;
  x_1396F3377 = T14;
  T13 = FUNFAB(fun_26,2,x_1396F3377,bodyF3369);
  T12 = with_exit(T13);
UNLINK_STACK();
  QRET(T12);
}

LOCCODEDEF(fun_28) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_27,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1408_29) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_62),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_30) {
  P return_;
  P x_1407F3382;
  P x_1407F3381;
  P bodyF3380;
  P x_1407F3379;
  P x_1408F3378;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(return_, 0);
  T21 = FUNSHELL(0,fun_x_1408_29,2);
  x_1408F3378 = T21;
  FUNINIT(x_1408F3378, 2,FREEREF(0),return_);
  x_1407F3379 = FREEREF(0);
  bodyF3380 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1407F3379,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1407F3379,LITREF(lit_62),x_1408F3378);
    x_1407F3381 = T3;
    bodyF3380 = x_1407F3381;
    x_1407F3382 = Ynil;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1407F3382,x_1408F3378);
  } else {
    T4 = CALL2(1,x_1408F3378,LITREF(lit_32),x_1407F3379);
  }
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,T12,LITREF(lit_41));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T8 = CALL2(1,VARREF(YgooSmacrosYcat),T9,LITREF(lit_41));
  T7 = CALL1(1,VARREF(Ylst),T8);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T16 = bodyF3380;
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_41));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T14 = CALL4(1,VARREF(YgooSmacrosYcat),T15,T16,T17,LITREF(lit_41));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T13,LITREF(lit_41));
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_31) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_30,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1412_32) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_69),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_33) {
  P return_;
  P x_1411F3389;
  P x_1411F3388;
  P x_1411F3387;
  P bodyF3386;
  P typeF3385;
  P x_1411F3384;
  P x_1412F3383;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(return_, 0);
  T25 = FUNSHELL(0,fun_x_1412_32,2);
  x_1412F3383 = T25;
  FUNINIT(x_1412F3383, 2,FREEREF(0),return_);
  x_1411F3384 = FREEREF(0);
  typeF3385 = YPfalse;
  bodyF3386 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1411F3384,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1411F3384,LITREF(lit_69),x_1412F3383);
    x_1411F3387 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1411F3387,x_1412F3383);
    typeF3385 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1411F3387);
    x_1411F3388 = T5;
    bodyF3386 = x_1411F3388;
    x_1411F3389 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1411F3389,x_1412F3383);
  } else {
    T7 = CALL2(1,x_1412F3383,LITREF(lit_32),x_1411F3384);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T16 = typeF3385;
  T15 = CALL1(1,VARREF(Ylst),T16);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_41));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_41));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T20 = bodyF3386;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_41));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T21,LITREF(lit_41));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T17,LITREF(lit_41));
UNLINK_STACK();
  QRET(T8);
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

LOCCODEDEF(fun_x_1416_35) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_74),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_36) {
  P return_;
  P x_1415F3396;
  P x_1415F3395;
  P x_1415F3394;
  P valueF3393;
  P packF3392;
  P x_1415F3391;
  P x_1416F3390;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(return_, 0);
  T20 = FUNSHELL(0,fun_x_1416_35,2);
  x_1416F3390 = T20;
  FUNINIT(x_1416F3390, 2,FREEREF(0),return_);
  x_1415F3391 = FREEREF(0);
  packF3392 = YPfalse;
  valueF3393 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1415F3391,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1415F3391,LITREF(lit_74),x_1416F3390);
    x_1415F3394 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1415F3394,x_1416F3390);
    packF3392 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1415F3394);
    x_1415F3395 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1415F3395,x_1416F3390);
    valueF3393 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1415F3395);
    x_1415F3396 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1415F3396,x_1416F3390);
  } else {
    T9 = CALL2(1,x_1416F3390,LITREF(lit_32),x_1415F3391);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T13 = packF3392;
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_5));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T19 = valueF3393;
  T18 = CALL1(1,VARREF(Ylst),T19);
  T15 = CALL4(1,VARREF(YgooSmacrosYcat),T16,T17,T18,LITREF(lit_41));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T14,LITREF(lit_41));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_37) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_36,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1420_38) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_81),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_39) {
  P return_;
  P x_1419F3401;
  P x_1419F3400;
  P valueF3399;
  P x_1419F3398;
  P x_1420F3397;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(return_, 0);
  T12 = FUNSHELL(0,fun_x_1420_38,2);
  x_1420F3397 = T12;
  FUNINIT(x_1420F3397, 2,FREEREF(0),return_);
  x_1419F3398 = FREEREF(0);
  valueF3399 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1419F3398,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1419F3398,LITREF(lit_81),x_1420F3397);
    x_1419F3400 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1419F3400,x_1420F3397);
    valueF3399 = T3;
    T4 = CALL1(1,VARREF(Ytail),x_1419F3400);
    x_1419F3401 = T4;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1419F3401,x_1420F3397);
  } else {
    T6 = CALL2(1,x_1420F3397,LITREF(lit_32),x_1419F3398);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T11 = valueF3399;
  T10 = CALL1(1,VARREF(Ylst),T11);
  T7 = CALL4(1,VARREF(YgooSmacrosYcat),T8,T9,T10,LITREF(lit_41));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_40) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_39,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1424_41) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_64),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_42) {
  P return_;
  P x_1423F3406;
  P x_1423F3405;
  P nameF3404;
  P x_1423F3403;
  P x_1424F3402;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(return_, 0);
  T11 = FUNSHELL(0,fun_x_1424_41,2);
  x_1424F3402 = T11;
  FUNINIT(x_1424F3402, 2,FREEREF(0),return_);
  x_1423F3403 = FREEREF(0);
  nameF3404 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1423F3403,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1423F3403,LITREF(lit_64),x_1424F3402);
    x_1423F3405 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1423F3405,x_1424F3402);
    nameF3404 = T3;
    T4 = CALL1(1,VARREF(Ytail),x_1423F3405);
    x_1423F3406 = T4;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1423F3406,x_1424F3402);
  } else {
    T6 = CALL2(1,x_1424F3402,LITREF(lit_32),x_1423F3403);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T10 = nameF3404;
  T9 = CALL1(1,VARREF(Ylst),T10);
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,LITREF(lit_41));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_43) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_42,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSpackerY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81;
DEFCREGS();
  lit_0 = YPPsym((P)"<packer>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YgooSpackerYLpackerG,T0);
  lit_1 = YPPsym((P)"packer");
  lit_2 = YPPlist(3,YPPsym((P)"init"),YPPsym((P)"add"),YPPsym((P)"res"));
  T3 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YgooSpackerYLpackerG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_1),LITREF(lit_2),YPfalse);
  VARSET(YgooSpackerYpacker,T2);
  lit_3 = YPPsym((P)"packer-fab");
  lit_4 = YPPlist(1,YPPsym((P)"t"));
  T5 = YPfab_sig(YPPlist(1,VARREF(YLtypeG)),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_3),LITREF(lit_4),YPfalse);
  VARSET(YgooSpackerYpacker_fab,T4);
  lit_5 = YPPsym((P)"packer-add");
  lit_6 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"x"));
  T7 = YPfab_sig(YPPlist(2,VARREF(YgooSpackerYLpackerG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooSpackerYLpackerG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_5),LITREF(lit_6),YPfalse);
  VARSET(YgooSpackerYpacker_add,T6);
  lit_7 = YPPsym((P)"packer-res");
  lit_8 = YPPlist(1,YPPsym((P)"a"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YgooSpackerYLpackerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_7),LITREF(lit_8),YPfalse);
  VARSET(YgooSpackerYpacker_res,T8);
  lit_9 = YPPsym((P)"<sim-packer>");
  T11 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSpackerYLpackerG),Ynil);
  T10 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_9),T11);
  VARSET(YgooSpackerYLsim_packerG,T10);
  lit_10 = YPPsym((P)"packer-value");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_value_0 = YPfab_met(FUNCODEREF(fun_packer_value_0),T12,LITREF(lit_10),LITREF(lit_11),sloc(21),YPfalse);
  T14 = VARREF_OR(YgooSpackerYpacker_value,YPfalse);
  T15 = fun_packer_value_0;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooSpackerYpacker_value,T13);
  lit_12 = YPPsym((P)"packer-value-setter");
  lit_13 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_packer_value_setter_1 = YPfab_met(FUNCODEREF(fun_packer_value_setter_1),T16,LITREF(lit_12),LITREF(lit_13),sloc(21),YPfalse);
  T18 = VARREF_OR(YgooSpackerYpacker_value_setter,YPfalse);
  T19 = fun_packer_value_setter_1;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSpackerYpacker_value_setter,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_value),VARREF(YgooSpackerYpacker_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"packer-adder");
  lit_15 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_adder_2 = YPfab_met(FUNCODEREF(fun_packer_adder_2),T20,LITREF(lit_14),LITREF(lit_15),sloc(22),YPfalse);
  T22 = VARREF_OR(YgooSpackerYpacker_adder,YPfalse);
  T23 = fun_packer_adder_2;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSpackerYpacker_adder,T21);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_adder),YPfalse,VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_16 = YPPsym((P)"packer-reser");
  lit_17 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_reser_3 = YPfab_met(FUNCODEREF(fun_packer_reser_3),T24,LITREF(lit_16),LITREF(lit_17),sloc(23),YPfalse);
  T26 = VARREF_OR(YgooSpackerYpacker_reser,YPfalse);
  T27 = fun_packer_reser_3;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSpackerYpacker_reser,T25);
  lit_18 = YPPlist(1,YPPsym((P)"_x"));
  lit_19 = YPPlist(1,YPPsym((P)"x"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPfab_met(FUNCODEREF(fun_4),T29,YPfalse,LITREF(lit_19),sloc(23),YPfalse);
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPfab_met(FUNCODEREF(fun_5),T28,YPfalse,LITREF(lit_18),sloc(23),YPfalse);
  T30 = fun_5;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_reser),YPfalse,VARREF(YLfunG),T30);
  lit_20 = YPPlist(3,YPPsym((P)"init"),YPPsym((P)"add"),YPPsym((P)"res"));
  T31 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YgooSpackerYLsim_packerG),Ynil);
  fun_packer_6 = YPfab_met(FUNCODEREF(fun_packer_6),T31,LITREF(lit_1),LITREF(lit_20),sloc(25),YPfalse);
  T33 = VARREF_OR(YgooSpackerYpacker,YPfalse);
  T34 = fun_packer_6;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YgooSpackerYpacker,T32);
  lit_21 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"x"));
  T35 = YPfab_sig(YPPlist(2,VARREF(YgooSpackerYLsim_packerG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooSpackerYLsim_packerG),Ynil);
  fun_packer_add_7 = YPfab_met(FUNCODEREF(fun_packer_add_7),T35,LITREF(lit_5),LITREF(lit_21),sloc(28),YPfalse);
  T37 = VARREF_OR(YgooSpackerYpacker_add,YPfalse);
  T38 = fun_packer_add_7;
  T36 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T37,T38);
  VARSET(YgooSpackerYpacker_add,T36);
  lit_22 = YPPlist(1,YPPsym((P)"a"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_res_8 = YPfab_met(FUNCODEREF(fun_packer_res_8),T39,LITREF(lit_7),LITREF(lit_22),sloc(30),YPfalse);
  T41 = VARREF_OR(YgooSpackerYpacker_res,YPfalse);
  T42 = fun_packer_res_8;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YgooSpackerYpacker_res,T40);
  lit_23 = YPPlist(1,YPPsym((P)"t"));
  lit_24 = YPPlist(1,YPPsym((P)"x"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T45,YPfalse,LITREF(lit_24),sloc(34),YPfalse);
  T44 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLseqG));
  T43 = YPfab_sig(YPPlist(1,T44),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  fun_packer_fab_10 = YPfab_met(FUNCODEREF(fun_packer_fab_10),T43,LITREF(lit_3),LITREF(lit_23),sloc(33),YPfalse);
  T47 = VARREF_OR(YgooSpackerYpacker_fab,YPfalse);
  T48 = fun_packer_fab_10;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YgooSpackerYpacker_fab,T46);
  lit_25 = YPPlist(1,YPPsym((P)"t"));
  lit_26 = YPPlist(1,YPPsym((P)"x"));
  T51 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T51,YPfalse,LITREF(lit_26),sloc(37),YPfalse);
  T50 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
  T49 = YPfab_sig(YPPlist(1,T50),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  fun_packer_fab_12 = YPfab_met(FUNCODEREF(fun_packer_fab_12),T49,LITREF(lit_3),LITREF(lit_25),sloc(36),YPfalse);
  T53 = VARREF_OR(YgooSpackerYpacker_fab,YPfalse);
  T54 = fun_packer_fab_12;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YgooSpackerYpacker_fab,T52);
  lit_27 = YPPlist(1,YPPsym((P)"exp"));
  lit_28 = YPPlist(1,YPPsym((P)"return"));
  lit_29 = YPPsym((P)"x-1376");
  lit_30 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_31 = YPPsym((P)"packing-with");
  lit_32 = YPsb((P)"Match Pattern Failure");
  lit_33 = YPPlist(1,YPPsym((P)"return"));
  lit_34 = YPPsym((P)"x-1379");
  lit_35 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_36 = YPPlist(1,YPPsym((P)"return"));
  lit_37 = YPPsym((P)"x-1382");
  lit_38 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_39 = YPsb((P)"failed to match.");
  lit_40 = YPPsym((P)"let");
  lit_41 = Ynil;
  lit_42 = YPPsym((P)"seq");
  T61 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1376_13 = YPfab_met(FUNCODEREF(fun_x_1376_13),T61,LITREF(lit_29),LITREF(lit_30),YPfalse,YPfalse);
  T60 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1382_14 = YPfab_met(FUNCODEREF(fun_x_1382_14),T60,LITREF(lit_37),LITREF(lit_38),YPfalse,YPfalse);
  T59 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPfab_met(FUNCODEREF(fun_15),T59,YPfalse,LITREF(lit_36),YPfalse,YPfalse);
  T58 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1379_16 = YPfab_met(FUNCODEREF(fun_x_1379_16),T58,LITREF(lit_34),LITREF(lit_35),YPfalse,YPfalse);
  T57 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPfab_met(FUNCODEREF(fun_17),T57,YPfalse,LITREF(lit_33),YPfalse,YPfalse);
  T56 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T56,YPfalse,LITREF(lit_28),YPfalse,YPfalse);
  T55 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPfab_met(FUNCODEREF(fun_19),T55,YPfalse,LITREF(lit_27),YPfalse,YPfalse);
  T62 = fun_19;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing-with"),T62);
  lit_43 = YPPlist(1,YPPsym((P)"exp"));
  lit_44 = YPPlist(1,YPPsym((P)"return"));
  lit_45 = YPPsym((P)"x-1395");
  lit_46 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_47 = YPPsym((P)"packing-in");
  lit_48 = YPPlist(1,YPPsym((P)"return"));
  lit_49 = YPPsym((P)"x-1398");
  lit_50 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_51 = YPPlist(1,YPPsym((P)"return"));
  lit_52 = YPPsym((P)"x-1401");
  lit_53 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_54 = YPPlist(1,YPPsym((P)"return"));
  lit_55 = YPPsym((P)"x-1404");
  lit_56 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_57 = YPPsym((P)"<lst>");
  T71 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1395_20 = YPfab_met(FUNCODEREF(fun_x_1395_20),T71,LITREF(lit_45),LITREF(lit_46),YPfalse,YPfalse);
  T70 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1404_21 = YPfab_met(FUNCODEREF(fun_x_1404_21),T70,LITREF(lit_55),LITREF(lit_56),YPfalse,YPfalse);
  T69 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPfab_met(FUNCODEREF(fun_22),T69,YPfalse,LITREF(lit_54),YPfalse,YPfalse);
  T68 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1401_23 = YPfab_met(FUNCODEREF(fun_x_1401_23),T68,LITREF(lit_52),LITREF(lit_53),YPfalse,YPfalse);
  T67 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T67,YPfalse,LITREF(lit_51),YPfalse,YPfalse);
  T66 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1398_25 = YPfab_met(FUNCODEREF(fun_x_1398_25),T66,LITREF(lit_49),LITREF(lit_50),YPfalse,YPfalse);
  T65 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPfab_met(FUNCODEREF(fun_26),T65,YPfalse,LITREF(lit_48),YPfalse,YPfalse);
  T64 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPfab_met(FUNCODEREF(fun_27),T64,YPfalse,LITREF(lit_44),YPfalse,YPfalse);
  T63 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPfab_met(FUNCODEREF(fun_28),T63,YPfalse,LITREF(lit_43),YPfalse,YPfalse);
  T72 = fun_28;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing-in"),T72);
  lit_58 = YPPlist(1,YPPsym((P)"exp"));
  lit_59 = YPPlist(1,YPPsym((P)"return"));
  lit_60 = YPPsym((P)"x-1408");
  lit_61 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_62 = YPPsym((P)"packing");
  lit_63 = YPPsym((P)"packer-");
  lit_64 = YPPsym((P)"packed");
  T79 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T78 = fun_x_1408_29 = YPfab_met(FUNCODEREF(fun_x_1408_29),T79,LITREF(lit_60),LITREF(lit_61),YPfalse,YPfalse);
  T77 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T76 = fun_30 = YPfab_met(FUNCODEREF(fun_30),T77,YPfalse,LITREF(lit_59),YPfalse,YPfalse);
  T75 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T74 = fun_31 = YPfab_met(FUNCODEREF(fun_31),T75,YPfalse,LITREF(lit_58),YPfalse,YPfalse);
  T81 = fun_31;
  T80 = YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing"),T81);
  T73 = T80;
  return T73;
}

P YgooSpackerY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
DEFCREGS();
  lit_65 = YPPlist(1,YPPsym((P)"exp"));
  lit_66 = YPPlist(1,YPPsym((P)"return"));
  lit_67 = YPPsym((P)"x-1412");
  lit_68 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_69 = YPPsym((P)"packing-as");
  T2 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1412_32 = YPfab_met(FUNCODEREF(fun_x_1412_32),T2,LITREF(lit_67),LITREF(lit_68),YPfalse,YPfalse);
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPfab_met(FUNCODEREF(fun_33),T1,YPfalse,LITREF(lit_66),YPfalse,YPfalse);
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPfab_met(FUNCODEREF(fun_34),T0,YPfalse,LITREF(lit_65),YPfalse,YPfalse);
  T3 = fun_34;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing-as"),T3);
  lit_70 = YPPlist(1,YPPsym((P)"exp"));
  lit_71 = YPPlist(1,YPPsym((P)"return"));
  lit_72 = YPPsym((P)"x-1416");
  lit_73 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_74 = YPPsym((P)"pack-in");
  lit_75 = YPPsym((P)"opf");
  lit_76 = YPPsym((P)"_");
  T6 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1416_35 = YPfab_met(FUNCODEREF(fun_x_1416_35),T6,LITREF(lit_72),LITREF(lit_73),YPfalse,YPfalse);
  T5 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPfab_met(FUNCODEREF(fun_36),T5,YPfalse,LITREF(lit_71),YPfalse,YPfalse);
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPfab_met(FUNCODEREF(fun_37),T4,YPfalse,LITREF(lit_70),YPfalse,YPfalse);
  T7 = fun_37;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"pack-in"),T7);
  lit_77 = YPPlist(1,YPPsym((P)"exp"));
  lit_78 = YPPlist(1,YPPsym((P)"return"));
  lit_79 = YPPsym((P)"x-1420");
  lit_80 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_81 = YPPsym((P)"pack");
  T10 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1420_38 = YPfab_met(FUNCODEREF(fun_x_1420_38),T10,LITREF(lit_79),LITREF(lit_80),YPfalse,YPfalse);
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPfab_met(FUNCODEREF(fun_39),T9,YPfalse,LITREF(lit_78),YPfalse,YPfalse);
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPfab_met(FUNCODEREF(fun_40),T8,YPfalse,LITREF(lit_77),YPfalse,YPfalse);
  T11 = fun_40;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"pack"),T11);
  lit_82 = YPPlist(1,YPPsym((P)"exp"));
  lit_83 = YPPlist(1,YPPsym((P)"return"));
  lit_84 = YPPsym((P)"x-1424");
  lit_85 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T17 = fun_x_1424_41 = YPfab_met(FUNCODEREF(fun_x_1424_41),T18,LITREF(lit_84),LITREF(lit_85),YPfalse,YPfalse);
  T16 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T15 = fun_42 = YPfab_met(FUNCODEREF(fun_42),T16,YPfalse,LITREF(lit_83),YPfalse,YPfalse);
  T14 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T13 = fun_43 = YPfab_met(FUNCODEREF(fun_43),T14,YPfalse,LITREF(lit_82),YPfalse,YPfalse);
  T20 = fun_43;
  T19 = YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packed"),T20);
  T12 = T19;
  return T12;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSchr;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSseq},
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
  {"dl", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
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
  {"%dispatch", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
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
  {"acos", &module_info_gooSmath, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"tail", &module_info_gooSboot, NULL},
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
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
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
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
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
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"%sb", &module_info_gooSboot, NULL},
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
  {"&", &module_info_gooSmath, NULL},
  {"exp", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
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
  {"@add", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
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
  {"@map", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"packing-with", PVAR, NULL},
  {"packed", PVAR, NULL},
  {"packer", CVAR, &YgooSpackerYpacker},
  {"packer-fab", CVAR, &YgooSpackerYpacker_fab},
  {"packer-add", CVAR, &YgooSpackerYpacker_add},
  {"packing", PVAR, NULL},
  {"<packer>", CVAR, &YgooSpackerYLpackerG},
  {"pack-in", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"packer-reser", CVAR, &YgooSpackerYpacker_reser},
  {"packer-adder", CVAR, &YgooSpackerYpacker_adder},
  {"packer-value-setter", CVAR, &YgooSpackerYpacker_value_setter},
  {"packer-value", CVAR, &YgooSpackerYpacker_value},
  {"packing-in", PVAR, NULL},
  {"packer-res", CVAR, &YgooSpackerYpacker_res},
  {"packing-as", PVAR, NULL},
  {"<sim-packer>", CVAR, &YgooSpackerYLsim_packerG},
  {"pack", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"packing-with", NULL},
  {"packer-add", NULL},
  {"packed", NULL},
  {"packing", NULL},
  {"packer-fab", NULL},
  {"<packer>", NULL},
  {"pack-in", NULL},
  {"packing-in", NULL},
  {"packer-res", NULL},
  {"packing-as", NULL},
  {"packer", NULL},
  {"pack", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSpacker;
MODULE_INFO module_info_gooSpacker = {
  "goo/packer",
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
extern void load_module_gooSmath (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsSseq (void);

/* EXPRESSION: */

extern void load_module_gooSpacker (void);

void load_module_gooSpacker (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();

  (P)YgooSpackerY___main_0___();
  (P)YgooSpackerY___main_1___();

}

/* END OF GENERATED CODE. */
