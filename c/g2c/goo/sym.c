/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/sym");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/sym */

EXT(YgooSmathYlog,"goo/math","log");
EXT(YOOEE,"goo/boot","@@==");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YOnew,"goo/boot","@new");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
DEF(YgooSsymYbooted_fab_sym,"goo/sym","booted-fab-sym");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YOdo,"goo/boot","@do");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmathYB,"goo/math","&");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSmathYS,"goo/math","/");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooSsymYboot_symbols,"goo/sym","boot-symbols");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YOmap,"goo/boot","@map");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yhead,"goo/boot","head");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YgooSsymYsymbols,"goo/sym","symbols");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YOrev,"goo/boot","@rev");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YLmagG,"goo/boot","<mag>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_2);
DEFLIT(lit_1);
DEFLIT(lit_3);
DEFLIT(lit_0);

/* FUNCTIONS: */

FUNFOR(YgooSsymYbooted_fab_sym);
FUNFOR(YgooSsymYboot_symbols);
extern P YgooSsymY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSsymYbooted_fab_sym) {
  P name_;
  P tmpF3615;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),VARREF(YgooSsymYsymbols),name_,YPfalse);
  tmpF3615 = T3;
  if (tmpF3615 != YPfalse) {
    T0 = tmpF3615;
  } else {
    T2 = CALL3(1,VARREF(Ynew),VARREF(YLsymG),VARREF(Ysym_name),name_);
    T1 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),T2,VARREF(YgooSsymYsymbols),name_);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsymYboot_symbols) {
  P symF3617;
  P symsF3616;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  symsF3616 = VARREF(YPsymbols);
  LOOP_148: {
    P a148_0;
    T2 = CALL1(1,VARREF(YgooSmacrosYnulQ),symsF3616);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),symsF3616);
      symF3617 = T6;
      T3 = CALL1(1,VARREF(Ysym_name),symF3617);
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),symF3617,VARREF(YgooSsymYsymbols),T3);
      T5 = CALL1(1,VARREF(Ytail),symsF3616);
      a148_0 = T5;
      symsF3616 = a148_0;
      goto LOOP_148;
      T0 = T4;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

P YgooSsymY___main_0___() {
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
  T0 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsStabYLstr_tabG),YPint((P)10000));
  VARSET(YgooSsymYsymbols,T0);
  lit_0 = YPPsym((P)"booted-fab-sym");
  lit_1 = YPPlist(1,YPPsym((P)"name"));
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsymYbooted_fab_sym = YPfab_met(FUNCODEREF(YgooSsymYbooted_fab_sym),T1,LITREF(lit_0),LITREF(lit_1),sloc(22),YPsb((P)"(fun (name) (or (elt-or symbols name #f) (set (elt symbols name) (new <sym> sym-name name))))"));
  T2 = YgooSsymYbooted_fab_sym;
  VARSET(YgooSsymYbooted_fab_sym,T2);
  lit_2 = YPPsym((P)"boot-symbols");
  lit_3 = Ynil;
  T3 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSsymYboot_symbols = YPfab_met(FUNCODEREF(YgooSsymYboot_symbols),T3,LITREF(lit_2),LITREF(lit_3),sloc(26),YPsb((P)"(fun () (rep boot ((syms %symbols)) (unless (nul? syms) (def sym (head syms)) (set (elt symbols (sym-name sym)) sym) (boot (tail syms)))))"));
  T4 = YgooSsymYboot_symbols;
  VARSET(YgooSsymYboot_symbols,T4);
  XCALL0(1,VARREF(YgooSsymYboot_symbols));
  VARSET(Yfab_sym,VARREF(YgooSsymYbooted_fab_sym));
  T5 = YPfalse;
  return T5;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSapp;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSopts;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsStup;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSchr;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooSapp},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {&module_info_gooScolsSopts},
  {&module_info_gooScolsSlst},
  {&module_info_gooScolsStup},
  {&module_info_gooScolsSvec},
  {&module_info_gooScolsStab},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"log", &module_info_gooSmath, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {"booted-fab-sym", CVAR, &YgooSsymYbooted_fab_sym},
  {"boot-symbols", CVAR, &YgooSsymYboot_symbols},
  {"symbols", CVAR, &YgooSsymYsymbols},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sym-name", NULL},
  {"<sym>", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSsym;
MODULE_INFO module_info_gooSsym = {
  "goo/sym",
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
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSapp (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);
extern void load_module_gooScolsSopts (void);
extern void load_module_gooScolsSlst (void);
extern void load_module_gooScolsStup (void);
extern void load_module_gooScolsSvec (void);
extern void load_module_gooScolsStab (void);

/* EXPRESSION: */

extern void load_module_gooSsym (void);

void load_module_gooSsym (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooSapp();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();
  load_module_gooScolsSopts();
  load_module_gooScolsSlst();
  load_module_gooScolsStup();
  load_module_gooScolsSvec();
  load_module_gooScolsStab();

  (P)YgooSsymY___main_0___();

}

/* END OF GENERATED CODE. */
