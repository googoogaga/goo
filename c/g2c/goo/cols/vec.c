/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/vec");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/vec */

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
DEF(YgooScolsSvecYvec_len_setter,"goo/cols/vec","vec-len-setter");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
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
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmagYG,"goo/mag",">");
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
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmagYL,"goo/mag","<");
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
DEF(YgooScolsSvecYvec_dat_setter,"goo/cols/vec","vec-dat-setter");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YgooScolsSvecYvec_len,"goo/cols/vec","vec-len");
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
DEF(YgooScolsSvecYpartitionX,"goo/cols/vec","partition!");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
DEF(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YOnew,"goo/boot","@new");
DEF(YgooScolsSvecYvec_dat,"goo/cols/vec","vec-dat");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Yerror,"goo/boot","error");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
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
EXT(YgooSanyYto_str,"goo/any","to-str");
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
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmagYmax,"goo/mag","max");
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
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
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
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOlit,"goo/boot","@lit");
DEF(YgooScolsSvecYquicksortX,"goo/cols/vec","quicksort!");
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
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
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
EXT(YgooSchrYupperQ,"goo/chr","upper?");
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
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
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
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSlogYNEE,"goo/log","~==");
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
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YOrev,"goo/boot","@rev");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YLmagG,"goo/boot","<mag>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_9);
DEFLIT(lit_22);
DEFLIT(lit_35);
DEFLIT(lit_10);
DEFLIT(lit_5);
DEFLIT(lit_3);
DEFLIT(lit_24);
DEFLIT(lit_44);
DEFLIT(lit_17);
DEFLIT(lit_51);
DEFLIT(lit_40);
DEFLIT(lit_50);
DEFLIT(lit_33);
DEFLIT(lit_48);
DEFLIT(lit_28);
DEFLIT(lit_47);
DEFLIT(lit_25);
DEFLIT(lit_13);
DEFLIT(lit_1);
DEFLIT(lit_31);
DEFLIT(lit_4);
DEFLIT(lit_36);
DEFLIT(lit_41);
DEFLIT(lit_52);
DEFLIT(lit_26);
DEFLIT(lit_23);
DEFLIT(lit_46);
DEFLIT(lit_37);
DEFLIT(lit_21);
DEFLIT(lit_32);
DEFLIT(lit_16);
DEFLIT(lit_15);
DEFLIT(lit_20);
DEFLIT(lit_30);
DEFLIT(lit_18);
DEFLIT(lit_39);
DEFLIT(lit_19);
DEFLIT(lit_53);
DEFLIT(lit_2);
DEFLIT(lit_42);
DEFLIT(lit_14);
DEFLIT(lit_49);
DEFLIT(lit_8);
DEFLIT(lit_29);
DEFLIT(lit_12);
DEFLIT(lit_27);
DEFLIT(lit_6);
DEFLIT(lit_7);
DEFLIT(lit_34);
DEFLIT(lit_0);
DEFLIT(lit_45);
DEFLIT(lit_43);
DEFLIT(lit_38);
DEFLIT(lit_11);

/* FUNCTIONS: */

LOCFOR(fun_vec_len_0);
LOCFOR(fun_vec_len_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_vec_dat_3);
LOCFOR(fun_vec_dat_setter_4);
LOCFOR(fun_5);
LOCFOR(fun_len_6);
LOCFOR(fun_elt_or_7);
LOCFOR(fun_elt_setter_8);
LOCFOR(fun_nul_9);
LOCFOR(fun_fab_10);
LOCFOR(fun_catX_11);
LOCFOR(fun_vec_12);
LOCFOR(fun_pushX_13);
LOCFOR(fun_popX_14);
LOCFOR(fun_to_str_15);
LOCFOR(fun_addX_16);
LOCFOR(fun_lenSfill_setter_17);
LOCFOR(fun_len_setter_18);
LOCFOR(fun_zapX_19);
LOCFOR(fun_low_elt_20);
LOCFOR(fun_low_elt_setter_21);
LOCFOR(fun_sort_by_22);
LOCFOR(fun_sort_byX_23);
LOCFOR(fun_quicksortX_24);
LOCFOR(fun_partitionX_25);
extern P YgooScolsSvecY___main_0___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_vec_len_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSvecYvec_len));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_vec_len_setter_1) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSvecYvec_len));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_2) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_vec_dat_3) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSvecYvec_dat));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_vec_dat_setter_4) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSvecYvec_dat));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_5) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL0(1,VARREF(YgooScolsSrepYrep_nul));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_len_6) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSvecYvec_len),c_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_elt_or_7) {
  P c_,i_,default_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
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

LOCCODEDEF(fun_elt_setter_8) {
  P z_,c_,i_;
  P T0,T1,T2;
LINK_STACK();
  ARG(z_, 0);
  ARG(c_, 1);
  ARG(i_, 2);
  T0 = CALL2(1,VARREF(YgooSmagYL),i_,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(Yrange_error),c_,i_);
  } else {
  }
  T2 = CALL3(1,VARREF(YgooScolsScolxYlow_elt_setter),z_,c_,i_);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_nul_9) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL1(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fab_10) {
  P c_,s_;
  P datF3280;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
  T2 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),s_);
  T1 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T2,YPfalse);
  datF3280 = T1;
  T0 = CALL5(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSvecYvec_len),s_,VARREF(YgooScolsSvecYvec_dat),datF3280);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_catX_11) {
  P x_,more_;
  P eF3284;
  P x_1363F3283;
  P sF3282;
  P x_1361F3281;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
  T13 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  x_1361F3281 = T13;
  LOOP_114: {
    P a114_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1361F3281);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1361F3281);
      sF3282 = T12;
      T9 = CALL1(1,VARREF(YgooScolsScolYenum),sF3282);
      x_1363F3283 = T9;
      LOOP_115: {
        P a115_0;
        T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1363F3283);
        T4 = CALL1(1,VARREF(Ynot),T5);
        if (T4 != YPfalse) {
          T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_1363F3283);
          eF3284 = T8;
          CALL2(1,VARREF(YgooScolsScolxYaddX),x_,eF3284);
          T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1363F3283);
          a115_0 = T7;
          x_1363F3283 = a115_0;
          goto LOOP_115;
          T3 = T6;
        } else {
          T3 = YPfalse;
        }
      }
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1361F3281);
      a114_0 = T11;
      x_1361F3281 = a114_0;
      goto LOOP_114;
      T0 = T10;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_vec_12) {
  P elts_;
  P T0;
LINK_STACK();
  NARGS(elts_, 0);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSchrYfabs),YPfalse,VARREF(YgooScolsSvecYLvecG),elts_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pushX_13) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooScolsScolxYaddX),c_,x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_popX_14) {
  P c_;
  P xF3286;
  P new_lenF3285;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(c_, 0);
  T5 = CALL1(1,VARREF(YgooStypesYlen),c_);
  T4 = CALL2(1,VARREF(YgooSmathY_),T5,YPint((P)1));
  new_lenF3285 = T4;
  T0 = CALL2(1,VARREF(YgooSmagYL),new_lenF3285,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(Yrange_error),c_,new_lenF3285);
  } else {
  }
  T3 = CALL2(1,VARREF(YgooScolsScolYlow_elt),c_,new_lenF3285);
  xF3286 = T3;
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),new_lenF3285,c_);
  T2 = CALL2(1,VARREF(Ytup),c_,xF3286);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_to_str_15) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_32),T1,LITREF(lit_33));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_addX_16) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL1(1,VARREF(YgooStypesYlen),c_);
  CALL3(1,VARREF(YgooScolsScolxYlow_elt_setter),x_,c_,T0);
UNLINK_STACK();
  RET(c_);
}

LOCCODEDEF(fun_lenSfill_setter_17) {
  P new_len_,c_,default_;
  P iF3290;
  P old_lenF3289;
  P new_dataF3288;
  P datF3287;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
  T19 = CALL1(1,VARREF(YgooScolsSvecYvec_dat),c_);
  datF3287 = T19;
  T2 = CALL1(1,VARREF(YgooScolsSrepYrep_len),datF3287);
  T1 = CALL2(1,VARREF(YgooSmagYG),new_len_,T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),new_len_);
    T4 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T5,default_);
    new_dataF3288 = T4;
    CALL2(1,VARREF(YgooScolsSrepYrep_intoX),new_dataF3288,datF3287);
    CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
    T3 = CALL2(1,VARREF(YgooScolsSvecYvec_dat_setter),new_dataF3288,c_);
    T0 = T3;
  } else {
    T8 = CALL1(1,VARREF(YgooStypesYlen),c_);
    T7 = CALL2(1,VARREF(YgooSmagYL),new_len_,T8);
    if (T7 != YPfalse) {
      T17 = CALL1(1,VARREF(YgooStypesYlen),c_);
      old_lenF3289 = T17;
      T9 = CALL2(1,VARREF(YgooSmagYL),new_len_,YPint((P)0));
      if (T9 != YPfalse) {
        T10 = CALL2(1,VARREF(Yrange_error),c_,new_len_);
      } else {
      }
      CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
      check_type(new_len_,VARREF(YLintG));
      iF3290 = new_len_;
      LOOP_116: {
        P a116_0;
        T12 = CALL2(1,VARREF(YgooSmagYL),iF3290,old_lenF3289);
        if (T12 != YPfalse) {
          T14 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),default_,datF3287,iF3290);
          if (T14 != YPfalse) {
            T16 = CALL2(1,VARREF(YgooSmathYA),iF3290,YPint((P)1));
            a116_0 = T16;
            iF3290 = a116_0;
            goto LOOP_116;
            T13 = T15;
          } else {
            T13 = YPfalse;
          }
          T11 = T13;
        } else {
          T11 = YPfalse;
        }
      }
      T6 = T11;
    } else {
      T18 = CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
      T6 = T18;
    }
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_len_setter_18) {
  P new_len_,c_;
  P T0,T1;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
  T1 = CALL1(1,VARREF(YgooScolsScolYelt_default),c_);
  T0 = CALL3(1,VARREF(YgooScolsScolxYlenSfill_setter),new_len_,c_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_zapX_19) {
  P c_;
LINK_STACK();
  ARG(c_, 0);
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),c_);
UNLINK_STACK();
  RET(c_);
}

LOCCODEDEF(fun_low_elt_20) {
  P x_,i_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  T1 = CALL1(1,VARREF(YgooScolsSvecYvec_dat),x_);
  T0 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T1,i_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_low_elt_setter_21) {
  P z_,x_,i_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T0 = CALL2(1,VARREF(YgooSmagYGE),i_,T1);
  if (T0 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T2 = CALL2(1,VARREF(YgooScolsScolxYlen_setter),T3,x_);
  } else {
  }
  T5 = CALL1(1,VARREF(YgooScolsSvecYvec_dat),x_);
  T4 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),z_,T5,i_);
UNLINK_STACK();
  QRET(T4);
}

LOCCODEDEF(fun_sort_by_22) {
  P a_,test_;
  P T0,T1,T2;
LINK_STACK();
  ARG(a_, 0);
  ARG(test_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),a_);
  T1 = CALL2(1,VARREF(YgooScolsSseqYsort_byX),T2,test_);
  T0 = CALL2(1,VARREF(YgooScolsScolYcol_res),a_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sort_byX_23) {
  P a_,test_;
  P sortedF3291;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(a_, 0);
  ARG(test_, 1);
  T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),a_);
  T6 = CALL1(1,VARREF(YgooStypesYlen),a_);
  T5 = CALL1(1,VARREF(YgooSmathY1_),T6);
  T3 = CALL4(1,VARREF(YgooScolsSvecYquicksortX),T4,YPint((P)0),T5,test_);
  sortedF3291 = T3;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),a_,sortedF3291);
  if (T1 != YPfalse) {
    T0 = sortedF3291;
  } else {
    T2 = CALL2(1,VARREF(YgooScolsScolYinto),a_,sortedF3291);
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_quicksortX_24) {
  P a_,p_,r_,test_;
  P qF3292;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(a_, 0);
  ARG(p_, 1);
  ARG(r_, 2);
  ARG(test_, 3);
  T1 = CALL2(1,VARREF(YgooSmagYL),p_,r_);
  if (T1 != YPfalse) {
    T4 = CALL4(1,VARREF(YgooScolsSvecYpartitionX),a_,p_,r_,test_);
    qF3292 = T4;
    CALL4(1,VARREF(YgooScolsSvecYquicksortX),a_,p_,qF3292,test_);
    T3 = CALL1(1,VARREF(YgooSmathY1A),qF3292);
    T2 = CALL4(1,VARREF(YgooScolsSvecYquicksortX),a_,T3,r_,test_);
    T0 = T2;
  } else {
    T0 = a_;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_partitionX_25) {
  P a_,p_,r_,test_;
  P x_1365F3297;
  P tmpF3296;
  P jF3295;
  P iF3294;
  P xF3293;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(a_, 0);
  ARG(p_, 1);
  ARG(r_, 2);
  ARG(test_, 3);
  T38 = CALL2(1,VARREF(YgooSmacrosYelt),a_,p_);
  xF3293 = T38;
  T37 = CALL1(1,VARREF(YgooSmathY1_),p_);
  iF3294 = T37;
  T36 = CALL1(1,VARREF(YgooSmathY1A),r_);
  jF3295 = T36;
  LOOP_117: {
    LOOP_118: {
      T3 = jF3295;
      T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
      jF3295 = T2;
      T12 = jF3295;
      T11 = CALL2(1,VARREF(YgooSmacrosYelt),a_,T12);
      T10 = CALL2(1,test_,T11,xF3293);
      tmpF3296 = T10;
      if (tmpF3296 != YPfalse) {
        T6 = tmpF3296;
      } else {
        T9 = jF3295;
        T8 = CALL2(1,VARREF(YgooSmacrosYelt),a_,T9);
        T7 = CALL2(1,VARREF(YgooSlogYE),T8,xF3293);
        T6 = T7;
      }
      T5 = CALL1(1,VARREF(Ynot),T6);
      if (T5 != YPfalse) {
        goto LOOP_118;
        T4 = T13;
      } else {
        T4 = YPfalse;
      }
    }
    LOOP_119: {
      T15 = iF3294;
      T14 = CALL2(1,VARREF(YgooSmathYA),T15,YPint((P)1));
      iF3294 = T14;
      T21 = iF3294;
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),a_,T21);
      T19 = CALL2(1,test_,T20,xF3293);
      T18 = CALL1(1,VARREF(Ynot),T19);
      T17 = CALL1(1,VARREF(Ynot),T18);
      if (T17 != YPfalse) {
        goto LOOP_119;
        T16 = T22;
      } else {
        T16 = YPfalse;
      }
    }
    T25 = iF3294;
    T26 = jF3295;
    T24 = CALL2(1,VARREF(YgooSmagYL),T25,T26);
    if (T24 != YPfalse) {
      T33 = iF3294;
      T32 = CALL2(1,VARREF(YgooSmacrosYelt),a_,T33);
      x_1365F3297 = T32;
      T28 = jF3295;
      T27 = CALL2(1,VARREF(YgooSmacrosYelt),a_,T28);
      T29 = iF3294;
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),T27,a_,T29);
      T31 = jF3295;
      T30 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),x_1365F3297,a_,T31);
      goto LOOP_117;
      T23 = T34;
    } else {
      T35 = jF3295;
      T23 = T35;
    }
  }
UNLINK_STACK();
  RET(T23);
}

P YgooScolsSvecY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110;
DEFCREGS();
  lit_0 = YPPsym((P)"<vec>");
  T2 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLseqXG),Ynil);
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLflatG),T2);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YgooScolsSvecYLvecG,T0);
  lit_1 = YPPsym((P)"vec");
  lit_2 = YPPlist(1,YPPsym((P)"elts"));
  T4 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsSvecYLvecG),Ynil);
  T3 = YPfab_gen(T4,LITREF(lit_1),LITREF(lit_2),YPfalse);
  VARSET(YgooScolsSvecYvec,T3);
  lit_3 = YPPsym((P)"vec-len");
  lit_4 = YPPlist(1,YPPsym((P)"_x"));
  T5 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_vec_len_0 = YPfab_met(FUNCODEREF(fun_vec_len_0),T5,LITREF(lit_3),LITREF(lit_4),sloc(31),YPsb((P)"(fun ((_x <vec>)) (prop-value _x vec-len))"));
  T7 = VARREF_OR(YgooScolsSvecYvec_len,YPfalse);
  T8 = fun_vec_len_0;
  T6 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T7,T8);
  VARSET(YgooScolsSvecYvec_len,T6);
  lit_5 = YPPsym((P)"vec-len-setter");
  lit_6 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T9 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_vec_len_setter_1 = YPfab_met(FUNCODEREF(fun_vec_len_setter_1),T9,LITREF(lit_5),LITREF(lit_6),sloc(31),YPsb((P)"(fun ((_z <int>) (_x <vec>)) (prop-value-setter _z _x vec-len))"));
  T11 = VARREF_OR(YgooScolsSvecYvec_len_setter,YPfalse);
  T12 = fun_vec_len_setter_1;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YgooScolsSvecYvec_len_setter,T10);
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T13 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPfab_met(FUNCODEREF(fun_2),T13,YPfalse,LITREF(lit_7),sloc(31),YPsb((P)"(fun ((_x <any>)) 0)"));
  T14 = fun_2;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSvecYvec_len),VARREF(YgooScolsSvecYvec_len_setter),VARREF(YLintG),T14);
  lit_8 = YPPsym((P)"vec-dat");
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T15 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_vec_dat_3 = YPfab_met(FUNCODEREF(fun_vec_dat_3),T15,LITREF(lit_8),LITREF(lit_9),sloc(32),YPsb((P)"(fun ((_x <vec>)) (prop-value _x vec-dat))"));
  T17 = VARREF_OR(YgooScolsSvecYvec_dat,YPfalse);
  T18 = fun_vec_dat_3;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YgooScolsSvecYvec_dat,T16);
  lit_10 = YPPsym((P)"vec-dat-setter");
  lit_11 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T19 = YPfab_sig(YPPlist(2,VARREF(YLrepG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_vec_dat_setter_4 = YPfab_met(FUNCODEREF(fun_vec_dat_setter_4),T19,LITREF(lit_10),LITREF(lit_11),sloc(32),YPsb((P)"(fun ((_z <rep>) (_x <vec>)) (prop-value-setter _z _x vec-dat))"));
  T21 = VARREF_OR(YgooScolsSvecYvec_dat_setter,YPfalse);
  T22 = fun_vec_dat_setter_4;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YgooScolsSvecYvec_dat_setter,T20);
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  T23 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPfab_met(FUNCODEREF(fun_5),T23,YPfalse,LITREF(lit_12),sloc(32),YPsb((P)"(fun ((_x <any>)) (rep-nul))"));
  T24 = fun_5;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSvecYvec_dat),VARREF(YgooScolsSvecYvec_dat_setter),VARREF(YLrepG),T24);
  lit_13 = YPPsym((P)"len");
  lit_14 = YPPlist(1,YPPsym((P)"c"));
  T25 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_6 = YPfab_met(FUNCODEREF(fun_len_6),T25,LITREF(lit_13),LITREF(lit_14),sloc(36),YPsb((P)"(fun ((c <vec>) => <int>) (vec-len c))"));
  T27 = VARREF_OR(YgooStypesYlen,YPfalse);
  T28 = fun_len_6;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooStypesYlen,T26);
  lit_15 = YPPsym((P)"elt-or");
  lit_16 = YPPlist(3,YPPsym((P)"c"),YPPsym((P)"i"),YPPsym((P)"default"));
  T29 = YPfab_sig(YPPlist(3,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_7 = YPfab_met(FUNCODEREF(fun_elt_or_7),T29,LITREF(lit_15),LITREF(lit_16),sloc(39),YPsb((P)"(fun ((c <vec>) (i <int>) default => <any>) (if (range-check? c i) (low-elt c i) default))"));
  T31 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T32 = fun_elt_or_7;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooScolsScolYelt_or,T30);
  lit_17 = YPPsym((P)"elt-setter");
  lit_18 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"c"),YPPsym((P)"i"));
  T33 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_8 = YPfab_met(FUNCODEREF(fun_elt_setter_8),T33,LITREF(lit_17),LITREF(lit_18),sloc(44),YPsb((P)"(fun (z (c <vec>) (i <int>)) (when (< i 0) (range-error c i)) (set (low-elt c i) z))"));
  T35 = VARREF_OR(YgooScolsScolxYelt_setter,YPfalse);
  T36 = fun_elt_setter_8;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YgooScolsScolxYelt_setter,T34);
  lit_19 = YPPsym((P)"nul");
  lit_20 = YPPlist(1,YPPsym((P)"c"));
  T38 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSvecYLvecG));
  T37 = YPfab_sig(YPPlist(1,T38),YPfalse,YPint((P)1),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_nul_9 = YPfab_met(FUNCODEREF(fun_nul_9),T37,LITREF(lit_19),LITREF(lit_20),sloc(48),YPsb((P)"(fun ((c (t= <vec>)) => <vec>) (new <vec>))"));
  T40 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T41 = fun_nul_9;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooScolsScolYnul,T39);
  lit_21 = YPPsym((P)"fab");
  lit_22 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"s"));
  T43 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSvecYLvecG));
  T42 = YPfab_sig(YPPlist(2,T43,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_fab_10 = YPfab_met(FUNCODEREF(fun_fab_10),T42,LITREF(lit_21),LITREF(lit_22),sloc(50),YPsb((P)"(fun ((c (t= <vec>)) (s <int>) => <vec>) (def dat (rep-fab (power-of-two-ceil s) #f)) (new <vec> vec-len s vec-dat dat))"));
  T45 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T46 = fun_fab_10;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YgooScolsScolYfab,T44);
  lit_23 = YPPsym((P)"cat!");
  lit_24 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  T47 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPtrue,YPint((P)1),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_catX_11 = YPfab_met(FUNCODEREF(fun_catX_11),T47,LITREF(lit_23),LITREF(lit_24),sloc(57),YPsb((P)"(fun ((x <vec>) (more ...) => <vec>) (for ((s more)) (for ((e s)) (add! x e))) x)"));
  T49 = VARREF_OR(YgooScolsSseqxYcatX,YPfalse);
  T50 = fun_catX_11;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YgooScolsSseqxYcatX,T48);
  lit_25 = YPPlist(1,YPPsym((P)"elts"));
  T51 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_vec_12 = YPfab_met(FUNCODEREF(fun_vec_12),T51,LITREF(lit_1),LITREF(lit_25),sloc(63),YPsb((P)"(fun ((elts ...) => <vec>) (app fabs <vec> elts))"));
  T53 = VARREF_OR(YgooScolsSvecYvec,YPfalse);
  T54 = fun_vec_12;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YgooScolsSvecYvec,T52);
  lit_26 = YPPsym((P)"push!");
  lit_27 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T55 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_pushX_13 = YPfab_met(FUNCODEREF(fun_pushX_13),T55,LITREF(lit_26),LITREF(lit_27),sloc(66),YPsb((P)"(fun ((c <vec>) x => <vec>) (add! c x))"));
  T57 = VARREF_OR(YgooScolsSseqxYpushX,YPfalse);
  T58 = fun_pushX_13;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YgooScolsSseqxYpushX,T56);
  lit_28 = YPPsym((P)"pop!");
  lit_29 = YPPlist(1,YPPsym((P)"c"));
  T60 = XCALL2(1,VARREF(YtT),VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG));
  T59 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),T60,Ynil);
  fun_popX_14 = YPfab_met(FUNCODEREF(fun_popX_14),T59,LITREF(lit_28),LITREF(lit_29),sloc(69),YPsb((P)"(fun ((c <vec>) => (tup (seq <vec>) (val <any>))) (def new-len (- (len c) 1)) (when (< new-len 0) (range-error c new-len)) (def x (low-elt c new-len)) (set (len c) new-len) (tup c x))"));
  T62 = VARREF_OR(YgooScolsSseqxYpopX,YPfalse);
  T63 = fun_popX_14;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooScolsSseqxYpopX,T61);
  lit_30 = YPPsym((P)"to-str");
  lit_31 = YPPlist(1,YPPsym((P)"x"));
  lit_32 = YPsb((P)"#[");
  lit_33 = YPsb((P)"]");
  T64 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_15 = YPfab_met(FUNCODEREF(fun_to_str_15),T64,LITREF(lit_30),LITREF(lit_31),sloc(77),YPsb((P)"(fun ((x <vec>) => <str>) (cat #[ (vals-to-str x) ]))"));
  T66 = VARREF_OR(YgooSanyYto_str,YPfalse);
  T67 = fun_to_str_15;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSanyYto_str,T65);
  lit_34 = YPPsym((P)"add!");
  lit_35 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T68 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_addX_16 = YPfab_met(FUNCODEREF(fun_addX_16),T68,LITREF(lit_34),LITREF(lit_35),sloc(80),YPsb((P)"(fun ((c <vec>) x => <vec>) (set (low-elt c (len c)) x) c)"));
  T70 = VARREF_OR(YgooScolsScolxYaddX,YPfalse);
  T71 = fun_addX_16;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooScolsScolxYaddX,T69);
  lit_36 = YPPsym((P)"len/fill-setter");
  lit_37 = YPPlist(3,YPPsym((P)"new-len"),YPPsym((P)"c"),YPPsym((P)"default"));
  T72 = YPfab_sig(YPPlist(3,VARREF(YLintG),VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lenSfill_setter_17 = YPfab_met(FUNCODEREF(fun_lenSfill_setter_17),T72,LITREF(lit_36),LITREF(lit_37),sloc(84),YPsb((P)"(fun ((new-len <int>) (c <vec>) default) (def dat (vec-dat c)) (if (> new-len (rep-len dat)) (let ((new-data (rep-fab (power-of-two-ceil new-len) default))) (rep-into! new-data dat) (set (vec-len c) new-len) (set (vec-dat c) new-data)) (if (< new-len (len c)) (let ((old-len (len c))) (when (< new-len 0) (range-error c new-len)) (set (vec-len c) new-len) (rep fill (((i <int>) new-len)) (and (< i old-len) (set (rep-elt dat i) default) (fill (+ i 1))))) (set (vec-len c) new-len))))"));
  T74 = VARREF_OR(YgooScolsScolxYlenSfill_setter,YPfalse);
  T75 = fun_lenSfill_setter_17;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooScolsScolxYlenSfill_setter,T73);
  lit_38 = YPPsym((P)"len-setter");
  lit_39 = YPPlist(2,YPPsym((P)"new-len"),YPPsym((P)"c"));
  T76 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_len_setter_18 = YPfab_met(FUNCODEREF(fun_len_setter_18),T76,LITREF(lit_38),LITREF(lit_39),sloc(101),YPsb((P)"(fun ((new-len <int>) (c <vec>)) (set (len/fill c (elt-default c)) new-len))"));
  T78 = VARREF_OR(YgooScolsScolxYlen_setter,YPfalse);
  T79 = fun_len_setter_18;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooScolsScolxYlen_setter,T77);
  lit_40 = YPPsym((P)"zap!");
  lit_41 = YPPlist(1,YPPsym((P)"c"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_zapX_19 = YPfab_met(FUNCODEREF(fun_zapX_19),T80,LITREF(lit_40),LITREF(lit_41),sloc(104),YPsb((P)"(fun ((c <vec>) => <vec>) (set (len c) 0) c)"));
  T82 = VARREF_OR(YgooScolsScolxYzapX,YPfalse);
  T83 = fun_zapX_19;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooScolsScolxYzapX,T81);
  lit_42 = YPPsym((P)"low-elt");
  lit_43 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T84 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_20 = YPfab_met(FUNCODEREF(fun_low_elt_20),T84,LITREF(lit_42),LITREF(lit_43),sloc(106),YPsb((P)"(fun ((x <vec>) (i <int>) => <any>) (rep-elt (vec-dat x) i))"));
  T86 = VARREF_OR(YgooScolsScolYlow_elt,YPfalse);
  T87 = fun_low_elt_20;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooScolsScolYlow_elt,T85);
  lit_44 = YPPsym((P)"low-elt-setter");
  lit_45 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"i"));
  T88 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_low_elt_setter_21 = YPfab_met(FUNCODEREF(fun_low_elt_setter_21),T88,LITREF(lit_44),LITREF(lit_45),sloc(109),YPsb((P)"(fun (z (x <vec>) (i <int>)) (when (>= i (len x)) (set (len x) (+ i 1))) (set (rep-elt (vec-dat x) i) z))"));
  T90 = VARREF_OR(YgooScolsScolxYlow_elt_setter,YPfalse);
  T91 = fun_low_elt_setter_21;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooScolsScolxYlow_elt_setter,T89);
  lit_46 = YPPsym((P)"sort-by");
  lit_47 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"test"));
  T92 = YPfab_sig(YPPlist(2,VARREF(YLseqIG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqIG),Ynil);
  fun_sort_by_22 = YPfab_met(FUNCODEREF(fun_sort_by_22),T92,LITREF(lit_46),LITREF(lit_47),sloc(114),YPsb((P)"(fun ((a <seq.>) (test <fun>) => <seq.>) (col-res a (sort-by! (as <vec> a) test)))"));
  T94 = VARREF_OR(YgooScolsSseqYsort_by,YPfalse);
  T95 = fun_sort_by_22;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YgooScolsSseqYsort_by,T93);
  lit_48 = YPPsym((P)"sort-by!");
  lit_49 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"test"));
  T96 = YPfab_sig(YPPlist(2,VARREF(YLseqXG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_sort_byX_23 = YPfab_met(FUNCODEREF(fun_sort_byX_23),T96,LITREF(lit_48),LITREF(lit_49),sloc(117),YPsb((P)"(fun ((a <seq!>) (test <fun>) => <seq!>) (def sorted (quicksort! (as <vec> a) 0 (1- (len a)) test)) (if (== a sorted) sorted (into a sorted)))"));
  T98 = VARREF_OR(YgooScolsSseqYsort_byX,YPfalse);
  T99 = fun_sort_byX_23;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooScolsSseqYsort_byX,T97);
  lit_50 = YPPsym((P)"quicksort!");
  lit_51 = YPPlist(4,YPPsym((P)"a"),YPPsym((P)"p"),YPPsym((P)"r"),YPPsym((P)"test"));
  T100 = YPfab_sig(YPPlist(4,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_quicksortX_24 = YPfab_met(FUNCODEREF(fun_quicksortX_24),T100,LITREF(lit_50),LITREF(lit_51),sloc(123),YPsb((P)"(fun ((a <vec>) (p <int>) (r <int>) (test <fun>) => <vec>) (if (< p r) (let ((q (partition! a p r test))) (quicksort! a p q test) (quicksort! a (1+ q) r test)) a))"));
  T102 = VARREF_OR(YgooScolsSvecYquicksortX,YPfalse);
  T103 = fun_quicksortX_24;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooScolsSvecYquicksortX,T101);
  lit_52 = YPPsym((P)"partition!");
  lit_53 = YPPlist(4,YPPsym((P)"a"),YPPsym((P)"p"),YPPsym((P)"r"),YPPsym((P)"test"));
  T106 = YPfab_sig(YPPlist(4,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLintG),Ynil);
  T105 = fun_partitionX_25 = YPfab_met(FUNCODEREF(fun_partitionX_25),T106,LITREF(lit_52),LITREF(lit_53),sloc(130),YPsb((P)"(fun ((a <vec>) (p <int>) (r <int>) (test <fun>) => <int>) (def x (elt a p)) (def i (1- p)) (def j (1+ r)) (rep loop () (rep j-loop () (decf j) (unless (or (test (elt a j) x) (= (elt a j) x)) (j-loop))) (rep i-loop () (incf i) (unless (not (test (elt a i) x)) (i-loop))) (if (< i j) (seq (swapf (elt a i) (elt a j)) (loop)) j)))"));
  T109 = VARREF_OR(YgooScolsSvecYpartitionX,YPfalse);
  T110 = fun_partitionX_25;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  T107 = VARSET(YgooScolsSvecYpartitionX,T108);
  T104 = T107;
  return T104;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSflat;
extern MODULE_INFO module_info_gooScolsSrep;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSany},
  {&module_info_gooSlog},
  {&module_info_gooSchr},
  {&module_info_gooSmag},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {&module_info_gooScolsSlst},
  {&module_info_gooScolsSflat},
  {&module_info_gooScolsSrep},
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
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
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
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
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
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
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
  {"=", &module_info_gooSlog, NULL},
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
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"address-of", &module_info_gooSany, NULL},
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
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
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
  {"eof-object?", &module_info_gooSchr, NULL},
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
  {"to-str", &module_info_gooSany, NULL},
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
  {"digit?", &module_info_gooSchr, NULL},
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
  {"arity-error", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
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
  {"alpha?", &module_info_gooSchr, NULL},
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
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
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
  {"rep-len", &module_info_gooScolsSrep, NULL},
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
  {"to-upper", &module_info_gooSchr, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
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
  {"upper?", &module_info_gooSchr, NULL},
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
  {">=", &module_info_gooSmag, NULL},
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
  {"<=", &module_info_gooSmag, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
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
  {"as-log", &module_info_gooSlog, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
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
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSlog, NULL},
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
  {"~=", &module_info_gooSlog, NULL},
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
  {"vec-len-setter", CVAR, &YgooScolsSvecYvec_len_setter},
  {"---main-0---", PVAR, NULL},
  {"vec-dat-setter", CVAR, &YgooScolsSvecYvec_dat_setter},
  {"vec-len", CVAR, &YgooScolsSvecYvec_len},
  {"partition!", CVAR, &YgooScolsSvecYpartitionX},
  {"<vec>", CVAR, &YgooScolsSvecYLvecG},
  {"vec-dat", CVAR, &YgooScolsSvecYvec_dat},
  {"vec", CVAR, &YgooScolsSvecYvec},
  {"quicksort!", CVAR, &YgooScolsSvecYquicksortX},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"vec", NULL},
  {"<vec>", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSvec;
MODULE_INFO module_info_gooScolsSvec = {
  "goo/cols/vec",
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
extern void load_module_gooSmag (void);
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);
extern void load_module_gooScolsSlst (void);
extern void load_module_gooScolsSflat (void);
extern void load_module_gooScolsSrep (void);

/* EXPRESSION: */

extern void load_module_gooScolsSvec (void);

void load_module_gooScolsSvec (void) {
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
  load_module_gooSmag();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();
  load_module_gooScolsSlst();
  load_module_gooScolsSflat();
  load_module_gooScolsSrep();

  (P)YgooScolsSvecY___main_0___();

}

/* END OF GENERATED CODE. */
