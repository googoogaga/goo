/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/tab");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/tab */

EXT(YgooSmathYlog,"goo/math","log");
DEF(YgooScolsStabYOidx_setter,"goo/cols/tab","@idx-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(Yfab_pair,"goo/boot","fab-pair");
DEF(YgooScolsStabYOfillX,"goo/cols/tab","@fill!");
DEF(YgooScolsStabYclrX,"goo/cols/tab","clr!");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DEF(YgooScolsStabYOvec,"goo/cols/tab","@vec");
DEF(YgooScolsStabYObuc_setter,"goo/cols/tab","@buc-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(YgooScolsStabYDfin_enum,"goo/cols/tab","$fin-enum");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YgooScolsStabYfab_tab_vec,"goo/cols/tab","fab-tab-vec");
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YgooScolsStabYPvector,"goo/cols/tab","%vector");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yclass_gens,"goo/boot","class-gens");
DEF(YgooScolsStabYPbucket_depth,"goo/cols/tab","%bucket-depth");
DEF(YgooScolsStabYPdata,"goo/cols/tab","%data");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
DEF(YgooScolsStabYPdata_setter,"goo/cols/tab","%data-setter");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
DEF(YgooScolsStabYPcount,"goo/cols/tab","%count");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YgooScolsStabYcopy_to_new_vector,"goo/cols/tab","copy-to-new-vector");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
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
DEF(YgooScolsStabYPsecondary_modulus,"goo/cols/tab","%secondary-modulus");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
DEF(YgooScolsStabYTtwin_primesT,"goo/cols/tab","*twin-primes*");
DEF(YgooScolsStabYOidx,"goo/cols/tab","@idx");
DEF(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
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
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
DEF(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
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
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YgooScolsStabYPvacated_setter,"goo/cols/tab","%vacated-setter");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YgooScolsStabYOvec_setter,"goo/cols/tab","@vec-setter");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YOnew,"goo/boot","@new");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
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
DEF(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
DEF(YgooScolsStabYchoose_table_geometry,"goo/cols/tab","choose-table-geometry");
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
DEF(YgooScolsStabYOfinQ,"goo/cols/tab","@fin?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YgooScolsStabYLtab_vecG,"goo/cols/tab","<tab-vec>");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(YgooScolsStabYPvacated,"goo/cols/tab","%vacated");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YgooScolsStabYDvacated_cell_marker,"goo/cols/tab","$vacated-cell-marker");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
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
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
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
DEF(YgooScolsStabYrehash_table,"goo/cols/tab","rehash-table");
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
DEF(YgooScolsStabYPn_buckets,"goo/cols/tab","%n-buckets");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YgooScolsStabYPvector_setter,"goo/cols/tab","%vector-setter");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
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
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YPtrue,"goo/boot","%true");
DEF(YgooScolsStabYrot,"goo/cols/tab","rot");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
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
DEF(YgooScolsStabYPprimary_modulus,"goo/cols/tab","%primary-modulus");
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
DEF(YgooScolsStabYgrow_table,"goo/cols/tab","grow-table");
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
DEF(YgooScolsStabYTdebug_tablesQT,"goo/cols/tab","*debug-tables?*");
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
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
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
DEF(YgooScolsStabYObuc,"goo/cols/tab","@buc");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooSmathYN,"goo/math","~");
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
DEF(YgooScolsStabYDnul_cell_marker,"goo/cols/tab","$nul-cell-marker");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YOtup,"goo/boot","@tup");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
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
DEF(YgooScolsStabYPcount_setter,"goo/cols/tab","%count-setter");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YgooScolsStabYtab_keys,"goo/cols/tab","tab-keys");
DEF(YgooScolsStabYLtab_enumG,"goo/cols/tab","<tab-enum>");
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

DEFLIT(lit_93);
DEFLIT(lit_24);
DEFLIT(lit_101);
DEFLIT(lit_44);
DEFLIT(lit_95);
DEFLIT(lit_88);
DEFLIT(lit_20);
DEFLIT(lit_54);
DEFLIT(lit_40);
DEFLIT(lit_47);
DEFLIT(lit_41);
DEFLIT(lit_75);
DEFLIT(lit_72);
DEFLIT(lit_59);
DEFLIT(lit_57);
DEFLIT(lit_125);
DEFLIT(lit_143);
DEFLIT(lit_4);
DEFLIT(lit_116);
DEFLIT(lit_6);
DEFLIT(lit_35);
DEFLIT(lit_78);
DEFLIT(lit_145);
DEFLIT(lit_22);
DEFLIT(lit_56);
DEFLIT(lit_33);
DEFLIT(lit_61);
DEFLIT(lit_1);
DEFLIT(lit_36);
DEFLIT(lit_126);
DEFLIT(lit_128);
DEFLIT(lit_21);
DEFLIT(lit_50);
DEFLIT(lit_89);
DEFLIT(lit_91);
DEFLIT(lit_130);
DEFLIT(lit_137);
DEFLIT(lit_70);
DEFLIT(lit_66);
DEFLIT(lit_51);
DEFLIT(lit_140);
DEFLIT(lit_39);
DEFLIT(lit_58);
DEFLIT(lit_69);
DEFLIT(lit_106);
DEFLIT(lit_7);
DEFLIT(lit_90);
DEFLIT(lit_17);
DEFLIT(lit_111);
DEFLIT(lit_52);
DEFLIT(lit_48);
DEFLIT(lit_135);
DEFLIT(lit_63);
DEFLIT(lit_115);
DEFLIT(lit_102);
DEFLIT(lit_67);
DEFLIT(lit_129);
DEFLIT(lit_71);
DEFLIT(lit_62);
DEFLIT(lit_136);
DEFLIT(lit_30);
DEFLIT(lit_31);
DEFLIT(lit_5);
DEFLIT(lit_109);
DEFLIT(lit_142);
DEFLIT(lit_26);
DEFLIT(lit_53);
DEFLIT(lit_100);
DEFLIT(lit_121);
DEFLIT(lit_64);
DEFLIT(lit_13);
DEFLIT(lit_32);
DEFLIT(lit_108);
DEFLIT(lit_114);
DEFLIT(lit_16);
DEFLIT(lit_141);
DEFLIT(lit_46);
DEFLIT(lit_119);
DEFLIT(lit_55);
DEFLIT(lit_68);
DEFLIT(lit_65);
DEFLIT(lit_45);
DEFLIT(lit_73);
DEFLIT(lit_15);
DEFLIT(lit_85);
DEFLIT(lit_124);
DEFLIT(lit_10);
DEFLIT(lit_23);
DEFLIT(lit_113);
DEFLIT(lit_86);
DEFLIT(lit_133);
DEFLIT(lit_87);
DEFLIT(lit_94);
DEFLIT(lit_74);
DEFLIT(lit_139);
DEFLIT(lit_127);
DEFLIT(lit_0);
DEFLIT(lit_97);
DEFLIT(lit_123);
DEFLIT(lit_18);
DEFLIT(lit_77);
DEFLIT(lit_12);
DEFLIT(lit_104);
DEFLIT(lit_34);
DEFLIT(lit_131);
DEFLIT(lit_81);
DEFLIT(lit_42);
DEFLIT(lit_49);
DEFLIT(lit_80);
DEFLIT(lit_107);
DEFLIT(lit_19);
DEFLIT(lit_11);
DEFLIT(lit_83);
DEFLIT(lit_112);
DEFLIT(lit_38);
DEFLIT(lit_98);
DEFLIT(lit_37);
DEFLIT(lit_28);
DEFLIT(lit_138);
DEFLIT(lit_134);
DEFLIT(lit_43);
DEFLIT(lit_25);
DEFLIT(lit_92);
DEFLIT(lit_3);
DEFLIT(lit_147);
DEFLIT(lit_2);
DEFLIT(lit_29);
DEFLIT(lit_132);
DEFLIT(lit_9);
DEFLIT(lit_84);
DEFLIT(lit_14);
DEFLIT(lit_144);
DEFLIT(lit_103);
DEFLIT(lit_8);
DEFLIT(lit_99);
DEFLIT(lit_105);
DEFLIT(lit_96);
DEFLIT(lit_76);
DEFLIT(lit_118);
DEFLIT(lit_146);
DEFLIT(lit_27);
DEFLIT(lit_117);
DEFLIT(lit_122);
DEFLIT(lit_60);
DEFLIT(lit_82);
DEFLIT(lit_79);
DEFLIT(lit_120);
DEFLIT(lit_110);

/* FUNCTIONS: */

LOCFOR(fun_tab_growth_factor_0);
LOCFOR(fun_1);
LOCFOR(fun_tab_growth_threshold_2);
LOCFOR(fun_3);
LOCFOR(fun_tab_shrink_threshold_4);
LOCFOR(fun_5);
LOCFOR(fun_Pvacated_6);
LOCFOR(fun_Pvacated_setter_7);
LOCFOR(fun_8);
LOCFOR(fun_Pprimary_modulus_9);
LOCFOR(fun_Psecondary_modulus_10);
LOCFOR(fun_Pn_buckets_11);
LOCFOR(fun_Pbucket_depth_12);
LOCFOR(fun_Pdata_13);
LOCFOR(fun_Pdata_setter_14);
LOCFOR(fun_Pcount_15);
LOCFOR(fun_Pcount_setter_16);
LOCFOR(fun_17);
LOCFOR(fun_Pvector_18);
LOCFOR(fun_Pvector_setter_19);
FUNFOR(YgooScolsStabYfab_tab_vec);
FUNFOR(YgooScolsStabYOfillX);
extern P YgooScolsStabYOvelt (P,P);
extern P YgooScolsStabYOvelt_setter (P,P,P);
LOCFOR(fun_clrX_24);
LOCFOR(fun_key_test_25);
LOCFOR(fun_tab_hash_26);
LOCFOR(fun_fab_27);
LOCFOR(fun_elt_or_28);
LOCFOR(fun_elt_setter_29);
LOCFOR(fun_del_30);
LOCFOR(fun_delX_31);
LOCFOR(fun_do_keyed_32);
LOCFOR(fun_do_33);
LOCFOR(fun_zapX_34);
LOCFOR(fun_len_35);
LOCFOR(fun_Ovec_36);
LOCFOR(fun_Ovec_setter_37);
LOCFOR(fun_Obuc_38);
LOCFOR(fun_Obuc_setter_39);
LOCFOR(fun_Oidx_40);
LOCFOR(fun_Oidx_setter_41);
LOCFOR(fun_OfinQ_42);
LOCFOR(fun_43);
LOCFOR(fun_enum_44);
LOCFOR(fun_nxt_45);
LOCFOR(fun_finQ_46);
LOCFOR(fun_now_key_47);
LOCFOR(fun_now_48);
LOCFOR(fun_now_setter_49);
LOCFOR(fun_50);
LOCFOR(fun_tab_keys_51);
LOCFOR(fun_grow_table_52);
LOCFOR(fun_rehash_table_53);
LOCFOR(fun_54);
LOCFOR(fun_55);
FUNFOR(YgooScolsStabYchoose_table_geometry);
LOCFOR(fun_57);
LOCFOR(fun_copy_to_new_vector_58);
LOCFOR(fun_id_hash_59);
LOCFOR(fun_id_hash_60);
FUNFOR(YgooScolsStabYrot);
LOCFOR(fun_id_hash_62);
LOCFOR(fun_id_hash_63);
LOCFOR(fun_id_hash_64);
LOCFOR(fun_id_hash_65);
LOCFOR(fun_key_type_66);
LOCFOR(fun_elt_type_67);
FUNFOR(YgooScolsStabYcase_insensitive_string_hash);
FUNFOR(YgooScolsStabYcase_insensitive_string_equal);
LOCFOR(fun_key_test_70);
LOCFOR(fun_tab_hash_71);
LOCFOR(fun_addX_72);
LOCFOR(fun_memQ_73);
LOCFOR(fun_74);
LOCFOR(fun_elts_75);
extern P YgooScolsStabY___main_0___ ();
extern P YgooScolsStabY___main_1___ ();
extern P YgooScolsStabY___main_2___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_tab_growth_factor_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYtab_growth_factor));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_1) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_5));
}

LOCCODEDEF(fun_tab_growth_threshold_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYtab_growth_threshold));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_3) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_9));
}

LOCCODEDEF(fun_tab_shrink_threshold_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYtab_shrink_threshold));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_5) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_13));
}

LOCCODEDEF(fun_Pvacated_6) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYPvacated));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pvacated_setter_7) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPvacated));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_8) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_Pprimary_modulus_9) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYPprimary_modulus));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Psecondary_modulus_10) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYPsecondary_modulus));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pn_buckets_11) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYPn_buckets));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pbucket_depth_12) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYPbucket_depth));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pdata_13) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYPdata));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pdata_setter_14) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPdata));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pcount_15) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYPcount));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pcount_setter_16) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPcount));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_17) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_Pvector_18) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYPvector));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pvector_setter_19) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPvector));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsStabYfab_tab_vec) {
  P size_,fill_value_,n_buckets_,bucket_depth_,primary_modulus_,secondary_modulus_;
  P vF3485;
  P T0,T1;
LINK_STACK();
  ARG(size_, 0);
  ARG(fill_value_, 1);
  ARG(n_buckets_, 2);
  ARG(bucket_depth_, 3);
  ARG(primary_modulus_, 4);
  ARG(secondary_modulus_, 5);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPn_buckets),n_buckets_,VARREF(YgooScolsStabYPbucket_depth),bucket_depth_,VARREF(YgooScolsStabYPprimary_modulus),primary_modulus_,VARREF(YgooScolsStabYPsecondary_modulus),secondary_modulus_);
  vF3485 = T1;
  T0 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),size_,fill_value_);
  CALL2(1,VARREF(YgooScolsStabYPdata_setter),T0,vF3485);
UNLINK_STACK();
  RET(vF3485);
}

FUNCODEDEF(YgooScolsStabYOfillX) {
  P x_,fill_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(fill_, 1);
  T1 = CALL1(1,VARREF(YgooScolsStabYPdata),x_);
  T0 = CALL2(1,VARREF(YgooScolsSrepYrep_fillX),T1,fill_);
UNLINK_STACK();
  QRET(T0);
}

P YgooScolsStabYOvelt(P vector_,P index_) {
  P xF3487;
  P xF3486;
  P T0,T1,T2;
DEFCREGS();
  T1 = XCALL1(1,VARREF(YgooScolsStabYPdata),vector_);
  xF3486 = index_;
  xF3487 = xF3486;
  T2 = (P)YPiGG(xF3487,(P)2);
  T0 = (P)YPrelt(T1,T2);
  return T0;
}

P YgooScolsStabYOvelt_setter(P new_value_,P vector_,P index_) {
  P xF3489;
  P xF3488;
  P T0,T1,T2;
DEFCREGS();
  T1 = XCALL1(1,VARREF(YgooScolsStabYPdata),vector_);
  xF3488 = index_;
  xF3489 = xF3488;
  T2 = (P)YPiGG(xF3489,(P)2);
  T0 = (P)YPrelt_setter(new_value_,T1,T2);
  return T0;
}

LOCCODEDEF(fun_clrX_24) {
  P vector_,fill_value_;
  P T0;
LINK_STACK();
  ARG(vector_, 0);
  ARG(fill_value_, 1);
  CALL2(1,VARREF(YgooScolsStabYOfillX),vector_,fill_value_);
  T0 = CALL2(1,VARREF(YgooScolsStabYPvacated_setter),YPint((P)0),vector_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_key_test_25) {
  P U_;
LINK_STACK();
  ARG(U_, 0);
UNLINK_STACK();
  RET(VARREF(YgooSmacrosYEE));
}

LOCCODEDEF(fun_tab_hash_26) {
  P U_;
LINK_STACK();
  ARG(U_, 0);
UNLINK_STACK();
  RET(VARREF(YgooScolsStabYid_hash));
}

LOCCODEDEF(fun_fab_27) {
  P type_,size_;
  P tableF3493;
  P bucket_depthF3492;
  P n_bucketsF3491;
  P tup28F3490;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(type_, 0);
  ARG(size_, 1);
  T7 = CALL1(1,VARREF(YgooScolsStabYchoose_table_geometry),size_);
  tup28F3490 = T7;
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),tup28F3490,YPint((P)0));
  n_bucketsF3491 = T6;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup28F3490,YPint((P)1));
  bucket_depthF3492 = T5;
  T4 = CALL1(1,VARREF(Ynew),type_);
  tableF3493 = T4;
  T2 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF3492,YPint((P)2));
  T1 = CALL2(1,VARREF(YgooSmathYT),n_bucketsF3491,T2);
  T3 = CALL2(1,VARREF(YgooSmathY_),n_bucketsF3491,YPint((P)2));
  T0 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T1,VARREF(YgooScolsStabYDnul_cell_marker),n_bucketsF3491,bucket_depthF3492,n_bucketsF3491,T3);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),T0,tableF3493);
UNLINK_STACK();
  RET(tableF3493);
}

LOCCODEDEF(fun_elt_or_28) {
  P table_,key_,default_;
  P this_keyF3506;
  P raw_indexF3505;
  P iF3504;
  P indexF3503;
  P probesF3502;
  P bucket_indexF3501;
  P bucket_offsetF3500;
  P bucket_indexF3499;
  P hashF3498;
  P bucket_depthF3497;
  P n_bucketsF3496;
  P vectorF3495;
  P test_functionF3494;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(table_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
  T31 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF3494 = T31;
  T30 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF3495 = T30;
  T29 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3495);
  n_bucketsF3496 = T29;
  T28 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3495);
  bucket_depthF3497 = T28;
  T27 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T26 = CALL1(1,T27,key_);
  check_type(T26,VARREF(YLintG));
  hashF3498 = T26;
  T25 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF3495);
  T24 = CALL2(1,VARREF(YgooSmathYmod),hashF3498,T25);
  bucket_indexF3499 = T24;
  T23 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF3495);
  T22 = CALL2(1,VARREF(YgooSmathYmod),hashF3498,T23);
  T21 = CALL2(1,VARREF(YgooSmathYA),T22,YPint((P)1));
  bucket_offsetF3500 = T21;
  bucket_indexF3501 = bucket_indexF3499;
  probesF3502 = YPint((P)0);
  LOOP_129: {
    P a129_0,a129_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),probesF3502,n_bucketsF3496);
    if (T1 != YPfalse) {
      T19 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF3497,YPint((P)2));
      T18 = CALL2(1,VARREF(YgooSmathYT),bucket_indexF3501,T19);
      indexF3503 = T18;
      iF3504 = YPint((P)0);
      raw_indexF3505 = indexF3503;
      LOOP_130: {
        P a130_0,a130_1;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF3504,bucket_depthF3497);
        if (T3 != YPfalse) {
          T14 = (P)YgooScolsStabYOvelt(vectorF3495,raw_indexF3505);
          this_keyF3506 = T14;
          T5 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF3506,VARREF(YgooScolsStabYDnul_cell_marker));
          if (T5 != YPfalse) {
            T4 = default_;
          } else {
            T7 = CALL2(0,test_functionF3494,key_,this_keyF3506);
            if (T7 != YPfalse) {
              T9 = CALL2(1,VARREF(YgooSmathYA),raw_indexF3505,bucket_depthF3497);
              T8 = (P)YgooScolsStabYOvelt(vectorF3495,T9);
              T6 = T8;
            } else {
              if (YPtrue != YPfalse) {
                T12 = CALL2(1,VARREF(YgooSmathYA),iF3504,YPint((P)1));
                T13 = CALL2(1,VARREF(YgooSmathYA),raw_indexF3505,YPint((P)1));
                a130_0 = T12;
                a130_1 = T13;
                iF3504 = a130_0;
                raw_indexF3505 = a130_1;
                goto LOOP_130;
                T10 = T11;
              } else {
                T10 = YPfalse;
              }
              T6 = T10;
            }
            T4 = T6;
          }
          T2 = T4;
        } else {
          T16 = CALL3(1,VARREF(YgooSmathYmod_),bucket_indexF3501,bucket_offsetF3500,n_bucketsF3496);
          T17 = CALL2(1,VARREF(YgooSmathYA),probesF3502,YPint((P)1));
          a129_0 = T16;
          a129_1 = T17;
          bucket_indexF3501 = a129_0;
          probesF3502 = a129_1;
          goto LOOP_129;
          T2 = T15;
        }
      }
      T0 = T2;
    } else {
      T20 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_62));
      T0 = T20;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_elt_setter_29) {
  P value_,table_,key_;
  P tmpF3522;
  P indexF3521;
  P this_keyF3520;
  P raw_indexF3519;
  P iF3518;
  P vacancy_indexF3517;
  P indexF3516;
  P probesF3515;
  P bucket_indexF3514;
  P bucket_offsetF3513;
  P bucket_indexF3512;
  P hashF3511;
  P n_bucketsF3510;
  P bucket_depthF3509;
  P test_functionF3508;
  P vectorF3507;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81;
LINK_STACK();
  ARG(value_, 0);
  ARG(table_, 1);
  ARG(key_, 2);
  T81 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF3507 = T81;
  T2 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
  T6 = vectorF3507;
  T5 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T6);
  T8 = vectorF3507;
  T7 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T8);
  T4 = CALL2(1,VARREF(YgooSmathYT),T5,T7);
  T9 = CALL1(1,VARREF(YgooScolsStabYtab_growth_threshold),table_);
  T3 = CALL2(1,VARREF(YgooSmathYT),T4,T9);
  T1 = CALL2(1,VARREF(YgooSmagYGE),T2,T3);
  if (T1 != YPfalse) {
    T12 = CALL1(1,VARREF(YgooScolsStabYgrow_table),table_);
    T11 = CALL1(1,VARREF(YgooScolsStabYPvector),T12);
    T10 = vectorF3507 = T11;
  } else {
    T16 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
    T18 = vectorF3507;
    T17 = CALL1(1,VARREF(YgooScolsStabYPvacated),T18);
    T15 = CALL2(1,VARREF(YgooSmathYA),T16,T17);
    T22 = vectorF3507;
    T21 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T22);
    T24 = vectorF3507;
    T23 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T24);
    T20 = CALL2(1,VARREF(YgooSmathYT),T21,T23);
    T25 = CALL1(1,VARREF(YgooScolsStabYtab_growth_threshold),table_);
    T19 = CALL2(1,VARREF(YgooSmathYT),T20,T25);
    T14 = CALL2(1,VARREF(YgooSmagYG),T15,T19);
    if (T14 != YPfalse) {
      T28 = CALL1(1,VARREF(YgooScolsStabYrehash_table),table_);
      T27 = CALL1(1,VARREF(YgooScolsStabYPvector),T28);
      T26 = vectorF3507 = T27;
      T13 = T26;
    } else {
      T13 = YPfalse;
    }
  }
  T80 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF3508 = T80;
  T79 = vectorF3507;
  T78 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T79);
  bucket_depthF3509 = T78;
  T77 = vectorF3507;
  T76 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T77);
  n_bucketsF3510 = T76;
  T75 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T74 = CALL1(1,T75,key_);
  check_type(T74,VARREF(YLintG));
  hashF3511 = T74;
  T73 = vectorF3507;
  T72 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),T73);
  T71 = CALL2(1,VARREF(YgooSmathYmod),hashF3511,T72);
  bucket_indexF3512 = T71;
  T70 = vectorF3507;
  T69 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),T70);
  T68 = CALL2(1,VARREF(YgooSmathYmod),hashF3511,T69);
  T67 = CALL2(1,VARREF(YgooSmathYA),T68,YPint((P)1));
  bucket_offsetF3513 = T67;
  bucket_indexF3514 = bucket_indexF3512;
  check_type(YPint((P)0),VARREF(YLintG));
  probesF3515 = YPint((P)0);
  LOOP_131: {
    P a131_0,a131_1;
    T30 = CALL2(1,VARREF(YgooSmagYL),probesF3515,n_bucketsF3510);
    if (T30 != YPfalse) {
      T65 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF3509,YPint((P)2));
      T64 = CALL2(1,VARREF(YgooSmathYT),bucket_indexF3514,T65);
      indexF3516 = T64;
      vacancy_indexF3517 = YPfalse;
      check_type(YPint((P)0),VARREF(YLintG));
      iF3518 = YPint((P)0);
      check_type(indexF3516,VARREF(YLintG));
      raw_indexF3519 = indexF3516;
      LOOP_132: {
        P a132_0,a132_1,a132_2;
        T32 = CALL2(1,VARREF(YgooSmagYL),iF3518,bucket_depthF3509);
        if (T32 != YPfalse) {
          T60 = vectorF3507;
          T59 = (P)YgooScolsStabYOvelt(T60,raw_indexF3519);
          this_keyF3520 = T59;
          T34 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF3520,VARREF(YgooScolsStabYDnul_cell_marker));
          if (T34 != YPfalse) {
            if (vacancy_indexF3517 != YPfalse) {
              T43 = vectorF3507;
              T42 = CALL1(1,VARREF(YgooScolsStabYPvacated),T43);
              T41 = CALL2(1,VARREF(YgooSmathY_),T42,YPint((P)1));
              T44 = vectorF3507;
              CALL2(1,VARREF(YgooScolsStabYPvacated_setter),T41,T44);
              T40 = vacancy_indexF3517;
            } else {
              T40 = raw_indexF3519;
            }
            indexF3521 = T40;
            T35 = vectorF3507;
            (P)YgooScolsStabYOvelt_setter(key_,T35,indexF3521);
            T36 = vectorF3507;
            T37 = CALL2(1,VARREF(YgooSmathYA),indexF3521,bucket_depthF3509);
            (P)YgooScolsStabYOvelt_setter(value_,T36,T37);
            T39 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
            T38 = CALL2(1,VARREF(YgooSmathYA),T39,YPint((P)1));
            CALL2(1,VARREF(YgooScolsStabYPcount_setter),T38,table_);
            T33 = value_;
          } else {
            T46 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF3520,VARREF(YgooScolsStabYDvacated_cell_marker));
            if (T46 != YPfalse) {
              tmpF3522 = vacancy_indexF3517;
              if (tmpF3522 != YPfalse) {
                T48 = tmpF3522;
              } else {
                T48 = raw_indexF3519;
              }
              T49 = CALL2(1,VARREF(YgooSmathYA),iF3518,YPint((P)1));
              T50 = CALL2(1,VARREF(YgooSmathYA),raw_indexF3519,YPint((P)1));
              a132_0 = T48;
              a132_1 = T49;
              a132_2 = T50;
              vacancy_indexF3517 = a132_0;
              iF3518 = a132_1;
              raw_indexF3519 = a132_2;
              goto LOOP_132;
              T45 = T47;
            } else {
              T52 = CALL2(1,test_functionF3508,key_,this_keyF3520);
              if (T52 != YPfalse) {
                T53 = vectorF3507;
                T54 = CALL2(1,VARREF(YgooSmathYA),raw_indexF3519,bucket_depthF3509);
                (P)YgooScolsStabYOvelt_setter(value_,T53,T54);
                T51 = value_;
              } else {
                if (YPtrue != YPfalse) {
                  T57 = CALL2(1,VARREF(YgooSmathYA),iF3518,YPint((P)1));
                  T58 = CALL2(1,VARREF(YgooSmathYA),raw_indexF3519,YPint((P)1));
                  a132_0 = vacancy_indexF3517;
                  a132_1 = T57;
                  a132_2 = T58;
                  vacancy_indexF3517 = a132_0;
                  iF3518 = a132_1;
                  raw_indexF3519 = a132_2;
                  goto LOOP_132;
                  T55 = T56;
                } else {
                  T55 = YPfalse;
                }
                T51 = T55;
              }
              T45 = T51;
            }
            T33 = T45;
          }
          T31 = T33;
        } else {
          T62 = CALL3(1,VARREF(YgooSmathYmod_),bucket_indexF3514,bucket_offsetF3513,n_bucketsF3510);
          T63 = CALL2(1,VARREF(YgooSmathYA),probesF3515,YPint((P)1));
          a131_0 = T62;
          a131_1 = T63;
          bucket_indexF3514 = a131_0;
          probesF3515 = a131_1;
          goto LOOP_131;
          T31 = T61;
        }
      }
      T29 = T31;
    } else {
      T66 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_65));
      T29 = T66;
    }
  }
UNLINK_STACK();
  QRET(T29);
}

LOCCODEDEF(fun_del_30) {
  P x_,key_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  T1 = CALL1(1,VARREF(YgooScolsScolYdup),x_);
  T0 = CALL2(1,VARREF(YgooScolsScolxYdelX),T1,key_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_delX_31) {
  P table_,key_;
  P this_keyF3535;
  P raw_indexF3534;
  P iF3533;
  P indexF3532;
  P probesF3531;
  P bucket_indexF3530;
  P bucket_offsetF3529;
  P bucket_indexF3528;
  P hashF3527;
  P bucket_depthF3526;
  P n_bucketsF3525;
  P vectorF3524;
  P test_functionF3523;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35;
LINK_STACK();
  ARG(table_, 0);
  ARG(key_, 1);
  T35 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF3523 = T35;
  T34 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF3524 = T34;
  T33 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3524);
  n_bucketsF3525 = T33;
  T32 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3524);
  bucket_depthF3526 = T32;
  T31 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T30 = CALL1(1,T31,key_);
  check_type(T30,VARREF(YLintG));
  hashF3527 = T30;
  T29 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF3524);
  T28 = CALL2(1,VARREF(YgooSmathYmod),hashF3527,T29);
  bucket_indexF3528 = T28;
  T27 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF3524);
  T26 = CALL2(1,VARREF(YgooSmathYmod),hashF3527,T27);
  T25 = CALL2(1,VARREF(YgooSmathYA),T26,YPint((P)1));
  bucket_offsetF3529 = T25;
  bucket_indexF3530 = bucket_indexF3528;
  check_type(YPint((P)0),VARREF(YLintG));
  probesF3531 = YPint((P)0);
  LOOP_133: {
    P a133_0,a133_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),probesF3531,n_bucketsF3525);
    if (T1 != YPfalse) {
      T23 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF3526,YPint((P)2));
      T22 = CALL2(1,VARREF(YgooSmathYT),bucket_indexF3530,T23);
      check_type(T22,VARREF(YLintG));
      indexF3532 = T22;
      check_type(YPint((P)0),VARREF(YLintG));
      iF3533 = YPint((P)0);
      check_type(indexF3532,VARREF(YLintG));
      raw_indexF3534 = indexF3532;
      LOOP_134: {
        P a134_0,a134_1;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF3533,bucket_depthF3526);
        if (T3 != YPfalse) {
          T18 = (P)YgooScolsStabYOvelt(vectorF3524,raw_indexF3534);
          this_keyF3535 = T18;
          T5 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF3535,VARREF(YgooScolsStabYDnul_cell_marker));
          if (T5 != YPfalse) {
            T4 = YPfalse;
          } else {
            T8 = CALL2(1,VARREF(YgooSlogYNEE),this_keyF3535,VARREF(YgooScolsStabYDvacated_cell_marker));
            if (T8 != YPfalse) {
              T9 = CALL2(1,test_functionF3523,key_,this_keyF3535);
              T7 = T9;
            } else {
              T7 = YPfalse;
            }
            if (T7 != YPfalse) {
              (P)YgooScolsStabYOvelt_setter(VARREF(YgooScolsStabYDvacated_cell_marker),vectorF3524,raw_indexF3534);
              T11 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
              T10 = CALL2(1,VARREF(YgooSmathY_),T11,YPint((P)1));
              CALL2(1,VARREF(YgooScolsStabYPcount_setter),T10,table_);
              T13 = CALL1(1,VARREF(YgooScolsStabYPvacated),vectorF3524);
              T12 = CALL2(1,VARREF(YgooSmathYA),T13,YPint((P)1));
              CALL2(1,VARREF(YgooScolsStabYPvacated_setter),T12,vectorF3524);
              T6 = YPtrue;
            } else {
              if (YPtrue != YPfalse) {
                T16 = CALL2(1,VARREF(YgooSmathYA),iF3533,YPint((P)1));
                T17 = CALL2(1,VARREF(YgooSmathYA),raw_indexF3534,YPint((P)1));
                a134_0 = T16;
                a134_1 = T17;
                iF3533 = a134_0;
                raw_indexF3534 = a134_1;
                goto LOOP_134;
                T14 = T15;
              } else {
                T14 = YPfalse;
              }
              T6 = T14;
            }
            T4 = T6;
          }
          T2 = T4;
        } else {
          T20 = CALL3(1,VARREF(YgooSmathYmod_),bucket_indexF3530,bucket_offsetF3529,n_bucketsF3525);
          T21 = CALL2(1,VARREF(YgooSmathYA),probesF3531,YPint((P)1));
          a133_0 = T20;
          a133_1 = T21;
          bucket_indexF3530 = a133_0;
          probesF3531 = a133_1;
          goto LOOP_133;
          T2 = T19;
        }
      }
      T0 = T2;
    } else {
      T24 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_70));
      T0 = T24;
    }
  }
UNLINK_STACK();
  RET(table_);
}

LOCCODEDEF(fun_do_keyed_32) {
  P function_,table_;
  P indexF3543;
  P tmpF3542;
  P keyF3541;
  P iF3540;
  P bF3539;
  P depthF3538;
  P n_bucketsF3537;
  P vectorF3536;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(function_, 0);
  ARG(table_, 1);
  T24 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF3536 = T24;
  T23 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3536);
  n_bucketsF3537 = T23;
  T22 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3536);
  depthF3538 = T22;
  check_type(YPint((P)0),VARREF(YLintG));
  bF3539 = YPint((P)0);
  LOOP_135: {
    P a135_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),bF3539,n_bucketsF3537);
    if (T1 != YPfalse) {
      check_type(YPint((P)0),VARREF(YLintG));
      iF3540 = YPint((P)0);
      LOOP_136: {
        P a136_0;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF3540,depthF3538);
        if (T3 != YPfalse) {
          T19 = CALL2(1,VARREF(YgooSmathYT),depthF3538,YPint((P)2));
          T18 = CALL2(1,VARREF(YgooSmathYT),bF3539,T19);
          T17 = CALL2(1,VARREF(YgooSmathYA),iF3540,T18);
          T16 = (P)YgooScolsStabYOvelt(vectorF3536,T17);
          keyF3541 = T16;
          T7 = CALL2(1,VARREF(YgooSmacrosYEE),keyF3541,VARREF(YgooScolsStabYDnul_cell_marker));
          tmpF3542 = T7;
          if (tmpF3542 != YPfalse) {
            T5 = tmpF3542;
          } else {
            T6 = CALL2(1,VARREF(YgooSmacrosYEE),keyF3541,VARREF(YgooScolsStabYDvacated_cell_marker));
            T5 = T6;
          }
          T4 = CALL1(1,VARREF(Ynot),T5);
          if (T4 != YPfalse) {
            T13 = CALL2(1,VARREF(YgooSmathYT),depthF3538,YPint((P)2));
            T12 = CALL2(1,VARREF(YgooSmathYT),bF3539,T13);
            T11 = CALL2(1,VARREF(YgooSmathYA),T12,depthF3538);
            T10 = CALL2(1,VARREF(YgooSmathYA),iF3540,T11);
            indexF3543 = T10;
            T9 = (P)YgooScolsStabYOvelt(vectorF3536,indexF3543);
            T8 = CALL2(1,function_,keyF3541,T9);
          } else {
          }
          T15 = CALL2(1,VARREF(YgooSmathYA),iF3540,YPint((P)1));
          a136_0 = T15;
          iF3540 = a136_0;
          goto LOOP_136;
          T2 = T14;
        } else {
          T2 = YPfalse;
        }
      }
      T21 = CALL2(1,VARREF(YgooSmathYA),bF3539,YPint((P)1));
      a135_0 = T21;
      bF3539 = a135_0;
      goto LOOP_135;
      T0 = T20;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do_33) {
  P function_,table_;
  P indexF3551;
  P tmpF3550;
  P keyF3549;
  P iF3548;
  P bF3547;
  P depthF3546;
  P n_bucketsF3545;
  P vectorF3544;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(function_, 0);
  ARG(table_, 1);
  T24 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF3544 = T24;
  T23 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3544);
  n_bucketsF3545 = T23;
  T22 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3544);
  depthF3546 = T22;
  check_type(YPint((P)0),VARREF(YLintG));
  bF3547 = YPint((P)0);
  LOOP_137: {
    P a137_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),bF3547,n_bucketsF3545);
    if (T1 != YPfalse) {
      check_type(YPint((P)0),VARREF(YLintG));
      iF3548 = YPint((P)0);
      LOOP_138: {
        P a138_0;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF3548,depthF3546);
        if (T3 != YPfalse) {
          T19 = CALL2(1,VARREF(YgooSmathYT),depthF3546,YPint((P)2));
          T18 = CALL2(1,VARREF(YgooSmathYT),bF3547,T19);
          T17 = CALL2(1,VARREF(YgooSmathYA),iF3548,T18);
          T16 = (P)YgooScolsStabYOvelt(vectorF3544,T17);
          keyF3549 = T16;
          T7 = CALL2(1,VARREF(YgooSmacrosYEE),keyF3549,VARREF(YgooScolsStabYDnul_cell_marker));
          tmpF3550 = T7;
          if (tmpF3550 != YPfalse) {
            T5 = tmpF3550;
          } else {
            T6 = CALL2(1,VARREF(YgooSmacrosYEE),keyF3549,VARREF(YgooScolsStabYDvacated_cell_marker));
            T5 = T6;
          }
          T4 = CALL1(1,VARREF(Ynot),T5);
          if (T4 != YPfalse) {
            T13 = CALL2(1,VARREF(YgooSmathYT),depthF3546,YPint((P)2));
            T12 = CALL2(1,VARREF(YgooSmathYT),bF3547,T13);
            T11 = CALL2(1,VARREF(YgooSmathYA),T12,depthF3546);
            T10 = CALL2(1,VARREF(YgooSmathYA),iF3548,T11);
            indexF3551 = T10;
            T9 = (P)YgooScolsStabYOvelt(vectorF3544,indexF3551);
            T8 = CALL1(1,function_,T9);
          } else {
          }
          T15 = CALL2(1,VARREF(YgooSmathYA),iF3548,YPint((P)1));
          a138_0 = T15;
          iF3548 = a138_0;
          goto LOOP_138;
          T2 = T14;
        } else {
          T2 = YPfalse;
        }
      }
      T21 = CALL2(1,VARREF(YgooSmathYA),bF3547,YPint((P)1));
      a137_0 = T21;
      bF3547 = a137_0;
      goto LOOP_137;
      T0 = T20;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_zapX_34) {
  P table_;
  P T0;
LINK_STACK();
  ARG(table_, 0);
  T0 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  CALL2(1,VARREF(YgooScolsStabYclrX),T0,VARREF(YgooScolsStabYDnul_cell_marker));
  CALL2(1,VARREF(YgooScolsStabYPcount_setter),YPint((P)0),table_);
UNLINK_STACK();
  RET(table_);
}

LOCCODEDEF(fun_len_35) {
  P table_;
  P T0;
LINK_STACK();
  ARG(table_, 0);
  T0 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_Ovec_36) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYOvec));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Ovec_setter_37) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYOvec));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Obuc_38) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYObuc));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Obuc_setter_39) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYObuc));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Oidx_40) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYOidx));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Oidx_setter_41) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYOidx));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_OfinQ_42) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYOfinQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_43) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_enum_44) {
  P table_;
  P tmpF3558;
  P keyF3557;
  P iF3556;
  P bF3555;
  P depthF3554;
  P n_bucketsF3553;
  P vectorF3552;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(table_, 0);
  T2 = CALL1(1,VARREF(YgooStypesYlen),table_);
  T1 = CALL2(1,VARREF(YgooSlogYE),T2,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = VARREF(YgooScolsStabYDfin_enum);
  } else {
    T22 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
    vectorF3552 = T22;
    T21 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3552);
    n_bucketsF3553 = T21;
    T20 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3552);
    depthF3554 = T20;
    check_type(YPint((P)0),VARREF(YLintG));
    bF3555 = YPint((P)0);
    LOOP_139: {
      P a139_0;
      T4 = CALL2(1,VARREF(YgooSmagYL),bF3555,n_bucketsF3553);
      if (T4 != YPfalse) {
        check_type(YPint((P)0),VARREF(YLintG));
        iF3556 = YPint((P)0);
        LOOP_140: {
          P a140_0;
          T6 = CALL2(1,VARREF(YgooSmagYL),iF3556,depthF3554);
          if (T6 != YPfalse) {
            T17 = CALL2(1,VARREF(YgooSmathYT),depthF3554,YPint((P)2));
            T16 = CALL2(1,VARREF(YgooSmathYT),bF3555,T17);
            T15 = CALL2(1,VARREF(YgooSmathYA),iF3556,T16);
            T14 = (P)YgooScolsStabYOvelt(vectorF3552,T15);
            keyF3557 = T14;
            T10 = CALL2(1,VARREF(YgooSmacrosYEE),keyF3557,VARREF(YgooScolsStabYDnul_cell_marker));
            tmpF3558 = T10;
            if (tmpF3558 != YPfalse) {
              T8 = tmpF3558;
            } else {
              T9 = CALL2(1,VARREF(YgooSmacrosYEE),keyF3557,VARREF(YgooScolsStabYDvacated_cell_marker));
              T8 = T9;
            }
            if (T8 != YPfalse) {
              T12 = CALL2(1,VARREF(YgooSmathYA),iF3556,YPint((P)1));
              a140_0 = T12;
              iF3556 = a140_0;
              goto LOOP_140;
              T7 = T11;
            } else {
              T13 = CALLN(1,VARREF(Ynew),7,VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOvec),vectorF3552,VARREF(YgooScolsStabYObuc),bF3555,VARREF(YgooScolsStabYOidx),iF3556);
              T7 = T13;
            }
            T5 = T7;
          } else {
            T19 = CALL2(1,VARREF(YgooSmathYA),bF3555,YPint((P)1));
            a139_0 = T19;
            bF3555 = a139_0;
            goto LOOP_139;
            T5 = T18;
          }
        }
        T3 = T5;
      } else {
        T3 = VARREF(YgooScolsStabYDfin_enum);
      }
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_nxt_45) {
  P e_;
  P x_1425F3569;
  P tmpF3568;
  P keyF3567;
  P iF3566;
  P firstQF3565;
  P bF3564;
  P indexF3563;
  P bucketF3562;
  P depthF3561;
  P n_bucketsF3560;
  P vectorF3559;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(e_, 0);
  T22 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF3559 = T22;
  T21 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3559);
  n_bucketsF3560 = T21;
  T20 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3559);
  depthF3561 = T20;
  T19 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  bucketF3562 = T19;
  T18 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  indexF3563 = T18;
  check_type(bucketF3562,VARREF(YLintG));
  bF3564 = bucketF3562;
  firstQF3565 = YPtrue;
  LOOP_141: {
    P a141_0,a141_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),bF3564,n_bucketsF3560);
    if (T1 != YPfalse) {
      if (firstQF3565 != YPfalse) {
        T17 = CALL2(1,VARREF(YgooSmathYA),indexF3563,YPint((P)1));
        T16 = T17;
      } else {
        T16 = YPint((P)0);
      }
      check_type(T16,VARREF(YLintG));
      iF3566 = T16;
      LOOP_142: {
        P a142_0;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF3566,depthF3561);
        if (T3 != YPfalse) {
          T13 = CALL2(1,VARREF(YgooSmathYT),depthF3561,YPint((P)2));
          T12 = CALL2(1,VARREF(YgooSmathYT),bF3564,T13);
          T11 = CALL2(1,VARREF(YgooSmathYA),iF3566,T12);
          T10 = (P)YgooScolsStabYOvelt(vectorF3559,T11);
          keyF3567 = T10;
          T7 = CALL2(1,VARREF(YgooSmacrosYEE),keyF3567,VARREF(YgooScolsStabYDnul_cell_marker));
          tmpF3568 = T7;
          if (tmpF3568 != YPfalse) {
            T5 = tmpF3568;
          } else {
            T6 = CALL2(1,VARREF(YgooSmacrosYEE),keyF3567,VARREF(YgooScolsStabYDvacated_cell_marker));
            T5 = T6;
          }
          if (T5 != YPfalse) {
            T9 = CALL2(1,VARREF(YgooSmathYA),iF3566,YPint((P)1));
            a142_0 = T9;
            iF3566 = a142_0;
            goto LOOP_142;
            T4 = T8;
          } else {
            x_1425F3569 = e_;
            CALL2(1,VARREF(YgooScolsStabYOvec_setter),vectorF3559,x_1425F3569);
            CALL2(1,VARREF(YgooScolsStabYObuc_setter),bF3564,x_1425F3569);
            CALL2(1,VARREF(YgooScolsStabYOidx_setter),iF3566,x_1425F3569);
            T4 = x_1425F3569;
          }
          T2 = T4;
        } else {
          T15 = CALL2(1,VARREF(YgooSmathYA),bF3564,YPint((P)1));
          a141_0 = T15;
          a141_1 = YPfalse;
          bF3564 = a141_0;
          firstQF3565 = a141_1;
          goto LOOP_141;
          T2 = T14;
        }
      }
      T0 = T2;
    } else {
      T0 = VARREF(YgooScolsStabYDfin_enum);
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_finQ_46) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL1(1,VARREF(YgooScolsStabYOfinQ),e_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_now_key_47) {
  P e_;
  P depthF3571;
  P vectorF3570;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(e_, 0);
  T7 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF3570 = T7;
  T6 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3570);
  depthF3571 = T6;
  T2 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  T4 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T5 = CALL2(1,VARREF(YgooSmathYT),depthF3571,YPint((P)2));
  T3 = CALL2(1,VARREF(YgooSmathYT),T4,T5);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,T3);
  T0 = (P)YgooScolsStabYOvelt(vectorF3570,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_now_48) {
  P e_;
  P depthF3573;
  P vectorF3572;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(e_, 0);
  T8 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF3572 = T8;
  T7 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3572);
  depthF3573 = T7;
  T2 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  T5 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T6 = CALL2(1,VARREF(YgooSmathYT),depthF3573,YPint((P)2));
  T4 = CALL2(1,VARREF(YgooSmathYT),T5,T6);
  T3 = CALL2(1,VARREF(YgooSmathYA),depthF3573,T4);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,T3);
  T0 = (P)YgooScolsStabYOvelt(vectorF3572,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_now_setter_49) {
  P value_,e_;
  P depthF3576;
  P indexF3575;
  P vectorF3574;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(value_, 0);
  ARG(e_, 1);
  T8 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF3574 = T8;
  T7 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  indexF3575 = T7;
  T6 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3574);
  depthF3576 = T6;
  T4 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T5 = CALL2(1,VARREF(YgooSmathYT),depthF3576,YPint((P)2));
  T3 = CALL2(1,VARREF(YgooSmathYT),T4,T5);
  T2 = CALL2(1,VARREF(YgooSmathYA),depthF3576,T3);
  T1 = CALL2(1,VARREF(YgooSmathYA),indexF3575,T2);
  T0 = (P)YgooScolsStabYOvelt_setter(value_,vectorF3574,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_50) {
  P k_,v_;
  P UF3577;
  P T0,T1,T2;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
  T2 = BOXGET(FREEREF(0));
  UF3577 = T2;
  T1 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3577,k_);
  T0 = BOXPUT(T1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_tab_keys_51) {
  P table_;
  P packer_F3578;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(table_, 0);
  T4 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F3578 = T4;
  packer_F3578 = BOXFAB(packer_F3578);
  T1 = FUNFAB(fun_50,1,packer_F3578);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T1,table_);
  T3 = BOXGET(packer_F3578);
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_res),T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_grow_table_52) {
  P table_;
  P new_vectorF3583;
  P new_bucket_depthF3582;
  P new_n_bucketsF3581;
  P tup29F3580;
  P vectorF3579;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(table_, 0);
  T13 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF3579 = T13;
  T10 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3579);
  T11 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3579);
  T9 = CALL2(1,VARREF(YgooSmathYT),T10,T11);
  T12 = CALL1(1,VARREF(YgooScolsStabYtab_growth_factor),table_);
  T8 = CALL2(1,VARREF(YgooSmathYT),T9,T12);
  T7 = CALL1(1,VARREF(YgooSmathYfloor),T8);
  T6 = CALL1(1,VARREF(YgooScolsStabYchoose_table_geometry),T7);
  tup29F3580 = T6;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup29F3580,YPint((P)0));
  new_n_bucketsF3581 = T5;
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),tup29F3580,YPint((P)1));
  new_bucket_depthF3582 = T4;
  T2 = CALL2(1,VARREF(YgooSmathYT),new_bucket_depthF3582,YPint((P)2));
  T1 = CALL2(1,VARREF(YgooSmathYT),new_n_bucketsF3581,T2);
  T3 = CALL2(1,VARREF(YgooSmathY_),new_n_bucketsF3581,YPint((P)2));
  T0 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T1,VARREF(YgooScolsStabYDnul_cell_marker),new_n_bucketsF3581,new_bucket_depthF3582,new_n_bucketsF3581,T3);
  new_vectorF3583 = T0;
  CALL2(1,VARREF(YgooScolsStabYcopy_to_new_vector),table_,new_vectorF3583);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),new_vectorF3583,table_);
UNLINK_STACK();
  RET(table_);
}

LOCCODEDEF(fun_rehash_table_53) {
  P table_;
  P new_vectorF3585;
  P vectorF3584;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(table_, 0);
  T9 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF3584 = T9;
  T2 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3584);
  T4 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3584);
  T3 = CALL2(1,VARREF(YgooSmathYT),T4,YPint((P)2));
  T1 = CALL2(1,VARREF(YgooSmathYT),T2,T3);
  T5 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3584);
  T6 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3584);
  T7 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF3584);
  T8 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF3584);
  T0 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T1,VARREF(YgooScolsStabYDnul_cell_marker),T5,T6,T7,T8);
  new_vectorF3585 = T0;
  CALL2(1,VARREF(YgooScolsStabYcopy_to_new_vector),table_,new_vectorF3585);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),new_vectorF3585,table_);
UNLINK_STACK();
  RET(table_);
}

LOCCODEDEF(fun_54) {
  P p_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(p_, 0);
  T3 = CALL2(1,VARREF(YgooSmathYceilS),FREEREF(0),FREEREF(1));
  T2 = CALL1(1,VARREF(YgooSmacrosY1st),T3);
  T1 = CALL2(1,VARREF(YgooSmagYG),p_,T2);
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathYA),p_,YPint((P)2));
    T5 = CALL2(1,VARREF(Ytup),T6,FREEREF(1));
    T4 = CALL1(1,FREEREF(2),T5);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_55) {
  P return_;
  P depthF3586;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(return_, 0);
  T3 = CALL2(1,VARREF(YgooSmagYL),FREEREF(0),YPint((P)2000));
  if (T3 != YPfalse) {
    T2 = YPint((P)1);
  } else {
    T5 = CALL2(1,VARREF(YgooSmagYL),FREEREF(0),YPint((P)5000));
    if (T5 != YPfalse) {
      T4 = YPint((P)2);
    } else {
      T7 = CALL2(1,VARREF(YgooSmagYL),FREEREF(0),YPint((P)15000));
      if (T7 != YPfalse) {
        T6 = YPint((P)4);
      } else {
        T9 = CALL2(1,VARREF(YgooSmagYL),FREEREF(0),YPint((P)50000));
        if (T9 != YPfalse) {
          T8 = YPint((P)8);
        } else {
          T11 = CALL2(1,VARREF(YgooSmagYL),FREEREF(0),YPint((P)250000));
          if (T11 != YPfalse) {
            T10 = YPint((P)16);
          } else {
            if (YPtrue != YPfalse) {
              T12 = YPint((P)32);
            } else {
              T12 = YPfalse;
            }
            T10 = T12;
          }
          T8 = T10;
        }
        T6 = T8;
      }
      T4 = T6;
    }
    T2 = T4;
  }
  depthF3586 = T2;
  T0 = FUNFAB(fun_54,3,FREEREF(0),depthF3586,return_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,VARREF(YgooScolsStabYTtwin_primesT));
  T1 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_118));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YgooScolsStabYchoose_table_geometry) {
  P capacity_;
  P T0,T1;
LINK_STACK();
  ARG(capacity_, 0);
  T1 = FUNFAB(fun_55,1,capacity_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_57) {
  P k_,v_;
  P this_keyF3600;
  P indexF3599;
  P iF3598;
  P bucket_startF3597;
  P probesF3596;
  P new_bucket_indexF3595;
  P new_bucket_offsetF3594;
  P new_bucket_indexF3593;
  P hashF3592;
  P new_secondary_modulusF3591;
  P new_primary_modulusF3590;
  P new_bucket_depthF3589;
  P new_n_bucketsF3588;
  P test_functionF3587;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
  T27 = CALL1(1,VARREF(YgooScolsScolYkey_test),FREEREF(0));
  test_functionF3587 = T27;
  T26 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),FREEREF(1));
  new_n_bucketsF3588 = T26;
  T25 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),FREEREF(1));
  new_bucket_depthF3589 = T25;
  T24 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),FREEREF(1));
  new_primary_modulusF3590 = T24;
  T23 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),FREEREF(1));
  new_secondary_modulusF3591 = T23;
  T22 = CALL1(1,VARREF(YgooScolsStabYtab_hash),FREEREF(0));
  T21 = CALL1(1,T22,k_);
  check_type(T21,VARREF(YLintG));
  hashF3592 = T21;
  T20 = CALL2(1,VARREF(YgooSmathYmod),hashF3592,new_primary_modulusF3590);
  new_bucket_indexF3593 = T20;
  T19 = CALL2(1,VARREF(YgooSmathYmod),hashF3592,new_secondary_modulusF3591);
  T18 = CALL2(1,VARREF(YgooSmathYA),T19,YPint((P)1));
  new_bucket_offsetF3594 = T18;
  new_bucket_indexF3595 = new_bucket_indexF3593;
  check_type(YPint((P)0),VARREF(YLintG));
  probesF3596 = YPint((P)0);
  LOOP_143: {
    P a143_0,a143_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),probesF3596,new_n_bucketsF3588);
    if (T1 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSmathYT),new_bucket_depthF3589,YPint((P)2));
      T15 = CALL2(1,VARREF(YgooSmathYT),new_bucket_indexF3595,T16);
      bucket_startF3597 = T15;
      check_type(YPint((P)0),VARREF(YLintG));
      iF3598 = YPint((P)0);
      check_type(bucket_startF3597,VARREF(YLintG));
      indexF3599 = bucket_startF3597;
      LOOP_144: {
        P a144_0,a144_1;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF3598,new_bucket_depthF3589);
        if (T3 != YPfalse) {
          T11 = (P)YgooScolsStabYOvelt(FREEREF(1),indexF3599);
          this_keyF3600 = T11;
          T5 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF3600,VARREF(YgooScolsStabYDnul_cell_marker));
          if (T5 != YPfalse) {
            (P)YgooScolsStabYOvelt_setter(k_,FREEREF(1),indexF3599);
            T7 = CALL2(1,VARREF(YgooSmathYA),indexF3599,new_bucket_depthF3589);
            T6 = (P)YgooScolsStabYOvelt_setter(v_,FREEREF(1),T7);
            T4 = T6;
          } else {
            T9 = CALL2(1,VARREF(YgooSmathYA),iF3598,YPint((P)1));
            T10 = CALL2(1,VARREF(YgooSmathYA),indexF3599,YPint((P)1));
            a144_0 = T9;
            a144_1 = T10;
            iF3598 = a144_0;
            indexF3599 = a144_1;
            goto LOOP_144;
            T4 = T8;
          }
          T2 = T4;
        } else {
          T13 = CALL3(1,VARREF(YgooSmathYmod_),new_bucket_indexF3595,new_bucket_offsetF3594,new_n_bucketsF3588);
          T14 = CALL2(1,VARREF(YgooSmathYA),probesF3596,YPint((P)1));
          a143_0 = T13;
          a143_1 = T14;
          new_bucket_indexF3595 = a143_0;
          probesF3596 = a143_1;
          goto LOOP_143;
          T2 = T12;
        }
      }
      T0 = T2;
    } else {
      T17 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_122));
      T0 = T17;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_copy_to_new_vector_58) {
  P table_,new_vector_;
  P T0,T1;
LINK_STACK();
  ARG(table_, 0);
  ARG(new_vector_, 1);
  T1 = FUNFAB(fun_57,2,table_,new_vector_);
  T0 = CALL2(1,VARREF(YgooScolsScolYdo_keyed),T1,table_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_id_hash_59) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSanyYaddress_of),x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_id_hash_60) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  if (x_ != YPfalse) {
    T0 = YPint((P)131);
  } else {
    T0 = YPint((P)149);
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsStabYrot) {
  P x_,a_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  T1 = CALL2(1,VARREF(YgooSmathYGG),x_,a_);
  T2 = CALL2(1,VARREF(YgooSmathYLL),x_,a_);
  T0 = CALL2(1,VARREF(YgooSmathYK),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_id_hash_62) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL2(1,VARREF(YgooScolsStabYrot),x_,YPint((P)15));
  T2 = CALL2(1,VARREF(YgooSmathY_),T3,x_);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)31));
  T0 = CALL1(1,VARREF(YgooSmathYabs),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_id_hash_63) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T0 = CALL1(1,VARREF(YgooScolsStabYid_hash),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_id_hash_64) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmathYflo_bits),x_);
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)89));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_id_hash_65) {
  P x_;
  P cur_elemF3603;
  P cur_hashF3602;
  P t_enumF3601;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  t_enumF3601 = T8;
  cur_hashF3602 = YPint((P)0);
  LOOP_145: {
    P a145_0,a145_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),t_enumF3601);
    T0 = CALL1(1,VARREF(Ynot),T1);
    if (T0 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),t_enumF3601);
      cur_elemF3603 = T7;
      T3 = CALL1(1,VARREF(YgooScolsScolYnxt),t_enumF3601);
      T5 = CALL2(1,VARREF(YgooSmathYT),cur_hashF3602,YPint((P)31));
      T6 = CALL1(1,VARREF(YgooScolsStabYid_hash),cur_elemF3603);
      T4 = CALL2(1,VARREF(YgooSmathYA),T5,T6);
      a145_0 = T3;
      a145_1 = T4;
      t_enumF3601 = a145_0;
      cur_hashF3602 = a145_1;
      goto LOOP_145;
    } else {
    }
  }
UNLINK_STACK();
  QRET(cur_hashF3602);
}

LOCCODEDEF(fun_key_type_66) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLstrG));
}

LOCCODEDEF(fun_elt_type_67) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLsymG));
}

FUNCODEDEF(YgooScolsStabYcase_insensitive_string_hash) {
  P x_;
  P hashF3606;
  P iF3605;
  P eF3604;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  T10 = CALL1(1,VARREF(YgooStypesYlen),x_);
  eF3604 = T10;
  check_type(YPint((P)0),VARREF(YLintG));
  iF3605 = YPint((P)0);
  check_type(YPint((P)0),VARREF(YLintG));
  hashF3606 = YPint((P)0);
  LOOP_146: {
    P a146_0,a146_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF3605,eF3604);
    if (T1 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSmathYA),iF3605,YPint((P)1));
      T6 = CALL2(1,VARREF(YgooSmathYLL),hashF3606,YPint((P)6));
      T9 = CALL2(1,VARREF(YgooScolsScolYlow_elt),x_,iF3605);
      T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T9);
      T7 = CALL2(1,VARREF(YgooSmathYB),T8,YPint((P)159));
      T5 = CALL2(1,VARREF(YgooSmathYA),T6,T7);
      T4 = CALL2(1,VARREF(YgooSmathYmod),T5,YPint((P)970747));
      a146_0 = T3;
      a146_1 = T4;
      iF3605 = a146_0;
      hashF3606 = a146_1;
      goto LOOP_146;
      T0 = T2;
    } else {
      T0 = hashF3606;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsStabYcase_insensitive_string_equal) {
  P x_,y_;
  P tmpF3613;
  P cyF3612;
  P cxF3611;
  P tmpF3610;
  P iF3609;
  P eyF3608;
  P syF3607;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  syF3607 = YPint((P)0);
  T17 = CALL1(1,VARREF(YgooStypesYlen),y_);
  eyF3608 = T17;
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T3 = CALL2(1,VARREF(YgooSmathY_),eyF3608,syF3607);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,T3);
  if (T1 != YPfalse) {
    check_type(syF3607,VARREF(YLintG));
    iF3609 = syF3607;
    LOOP_147: {
      P a147_0;
      T16 = CALL2(1,VARREF(YgooSmacrosYEE),iF3609,eyF3608);
      tmpF3610 = T16;
      if (tmpF3610 != YPfalse) {
        T4 = tmpF3610;
      } else {
        T15 = CALL2(1,VARREF(YgooSmathY_),iF3609,syF3607);
        T14 = CALL2(1,VARREF(YgooScolsScolYlow_elt),x_,T15);
        check_type(T14,VARREF(YLchrG));
        cxF3611 = T14;
        T13 = CALL2(1,VARREF(YgooScolsScolYlow_elt),y_,iF3609);
        check_type(T13,VARREF(YLchrG));
        cyF3612 = T13;
        T10 = CALL2(1,VARREF(YgooSmacrosYEE),cxF3611,cyF3612);
        tmpF3613 = T10;
        if (tmpF3613 != YPfalse) {
          T6 = tmpF3613;
        } else {
          T8 = CALL1(1,VARREF(YgooSchrYto_lower),cxF3611);
          T9 = CALL1(1,VARREF(YgooSchrYto_lower),cyF3612);
          T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,T9);
          T6 = T7;
        }
        if (T6 != YPfalse) {
          T12 = CALL2(1,VARREF(YgooSmathYA),iF3609,YPint((P)1));
          a147_0 = T12;
          iF3609 = a147_0;
          goto LOOP_147;
          T5 = T11;
        } else {
          T5 = YPfalse;
        }
        T4 = T5;
      }
    }
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_key_test_70) {
  P U_;
LINK_STACK();
  ARG(U_, 0);
UNLINK_STACK();
  RET(VARREF(YgooScolsStabYcase_insensitive_string_equal));
}

LOCCODEDEF(fun_tab_hash_71) {
  P U_;
LINK_STACK();
  ARG(U_, 0);
UNLINK_STACK();
  RET(VARREF(YgooScolsStabYcase_insensitive_string_hash));
}

LOCCODEDEF(fun_addX_72) {
  P c_,x_;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,c_,x_);
UNLINK_STACK();
  RET(c_);
}

LOCCODEDEF(fun_memQ_73) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL3(1,VARREF(YgooScolsScolYelt_or),c_,x_,YPfalse);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_74) {
  P k_;
  P T0,T1;
LINK_STACK();
  ARG(k_, 0);
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),k_);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),T1,FREEREF(1),k_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_elts_75) {
  P x_,keys_;
  P resF3614;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(keys_, 1);
  T3 = CALL1(1,VARREF(YgooStypesYlen),keys_);
  T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),T3);
  resF3614 = T2;
  T0 = FUNFAB(fun_74,2,x_,resF3614);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,keys_);
  T1 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,resF3614);
UNLINK_STACK();
  RET(T1);
}

P YgooScolsStabY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
DEFCREGS();
  lit_0 = YPPsym((P)"<tab>");
  T2 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLcolXG),Ynil);
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooScolsSmapYLmapG),T2);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YgooScolsScolYLtabG,T0);
  lit_1 = YPPsym((P)"<set>");
  T4 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooScolsScolYLtabG),Ynil);
  T3 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_1),T4);
  VARSET(YgooScolsStabYLsetG,T3);
  lit_2 = YPPsym((P)"tab-growth-factor");
  lit_3 = YPPlist(1,YPPsym((P)"_x"));
  T5 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tab_growth_factor_0 = YPfab_met(FUNCODEREF(fun_tab_growth_factor_0),T5,LITREF(lit_2),LITREF(lit_3),sloc(33),YPsb((P)"(fun ((_x <tab>)) (prop-value _x tab-growth-factor))"));
  T7 = VARREF_OR(YgooScolsStabYtab_growth_factor,YPfalse);
  T8 = fun_tab_growth_factor_0;
  T6 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T7,T8);
  VARSET(YgooScolsStabYtab_growth_factor,T6);
  lit_4 = YPPlist(1,YPPsym((P)"_x"));
  lit_5 = YPflo(FLOINT(2.0));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPfab_met(FUNCODEREF(fun_1),T9,YPfalse,LITREF(lit_4),sloc(33),YPsb((P)"(fun ((_x <any>)) 2.0)"));
  T10 = fun_1;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYtab_growth_factor),YPfalse,VARREF(YLfloG),T10);
  lit_6 = YPPsym((P)"tab-growth-threshold");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T11 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tab_growth_threshold_2 = YPfab_met(FUNCODEREF(fun_tab_growth_threshold_2),T11,LITREF(lit_6),LITREF(lit_7),sloc(33),YPsb((P)"(fun ((_x <tab>)) (prop-value _x tab-growth-threshold))"));
  T13 = VARREF_OR(YgooScolsStabYtab_growth_threshold,YPfalse);
  T14 = fun_tab_growth_threshold_2;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(YgooScolsStabYtab_growth_threshold,T12);
  lit_8 = YPPlist(1,YPPsym((P)"_x"));
  lit_9 = YPflo(FLOINT(0.8));
  T15 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3 = YPfab_met(FUNCODEREF(fun_3),T15,YPfalse,LITREF(lit_8),sloc(33),YPsb((P)"(fun ((_x <any>)) 0.8)"));
  T16 = fun_3;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYtab_growth_threshold),YPfalse,VARREF(YLfloG),T16);
  lit_10 = YPPsym((P)"tab-shrink-threshold");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T17 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tab_shrink_threshold_4 = YPfab_met(FUNCODEREF(fun_tab_shrink_threshold_4),T17,LITREF(lit_10),LITREF(lit_11),sloc(33),YPsb((P)"(fun ((_x <tab>)) (prop-value _x tab-shrink-threshold))"));
  T19 = VARREF_OR(YgooScolsStabYtab_shrink_threshold,YPfalse);
  T20 = fun_tab_shrink_threshold_4;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YgooScolsStabYtab_shrink_threshold,T18);
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  lit_13 = YPflo(FLOINT(0.5));
  T21 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPfab_met(FUNCODEREF(fun_5),T21,YPfalse,LITREF(lit_12),sloc(33),YPsb((P)"(fun ((_x <any>)) 0.5)"));
  T22 = fun_5;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYtab_shrink_threshold),YPfalse,VARREF(YLfloG),T22);
  lit_14 = YPPsym((P)"<tab-vec>");
  T24 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLseqXG),Ynil);
  T23 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_14),T24);
  VARSET(YgooScolsStabYLtab_vecG,T23);
  lit_15 = YPPsym((P)"%vacated");
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  T25 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pvacated_6 = YPfab_met(FUNCODEREF(fun_Pvacated_6),T25,LITREF(lit_15),LITREF(lit_16),sloc(44),YPsb((P)"(fun ((_x <tab-vec>)) (prop-value _x %vacated))"));
  T27 = VARREF_OR(YgooScolsStabYPvacated,YPfalse);
  T28 = fun_Pvacated_6;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooScolsStabYPvacated,T26);
  lit_17 = YPPsym((P)"%vacated-setter");
  lit_18 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T29 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pvacated_setter_7 = YPfab_met(FUNCODEREF(fun_Pvacated_setter_7),T29,LITREF(lit_17),LITREF(lit_18),sloc(44),YPsb((P)"(fun ((_z <int>) (_x <tab-vec>)) (prop-value-setter _z _x %vacated))"));
  T31 = VARREF_OR(YgooScolsStabYPvacated_setter,YPfalse);
  T32 = fun_Pvacated_setter_7;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooScolsStabYPvacated_setter,T30);
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T33 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPfab_met(FUNCODEREF(fun_8),T33,YPfalse,LITREF(lit_19),sloc(44),YPsb((P)"(fun ((_x <any>)) 0)"));
  T34 = fun_8;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPvacated),VARREF(YgooScolsStabYPvacated_setter),VARREF(YLintG),T34);
  lit_20 = YPPsym((P)"%primary-modulus");
  lit_21 = YPPlist(1,YPPsym((P)"_x"));
  T35 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pprimary_modulus_9 = YPfab_met(FUNCODEREF(fun_Pprimary_modulus_9),T35,LITREF(lit_20),LITREF(lit_21),sloc(46),YPsb((P)"(fun ((_x <tab-vec>)) (prop-value _x %primary-modulus))"));
  T37 = VARREF_OR(YgooScolsStabYPprimary_modulus,YPfalse);
  T38 = fun_Pprimary_modulus_9;
  T36 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T37,T38);
  VARSET(YgooScolsStabYPprimary_modulus,T36);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPprimary_modulus),YPfalse,VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_22 = YPPsym((P)"%secondary-modulus");
  lit_23 = YPPlist(1,YPPsym((P)"_x"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Psecondary_modulus_10 = YPfab_met(FUNCODEREF(fun_Psecondary_modulus_10),T39,LITREF(lit_22),LITREF(lit_23),sloc(47),YPsb((P)"(fun ((_x <tab-vec>)) (prop-value _x %secondary-modulus))"));
  T41 = VARREF_OR(YgooScolsStabYPsecondary_modulus,YPfalse);
  T42 = fun_Psecondary_modulus_10;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YgooScolsStabYPsecondary_modulus,T40);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPsecondary_modulus),YPfalse,VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_24 = YPPsym((P)"%n-buckets");
  lit_25 = YPPlist(1,YPPsym((P)"_x"));
  T43 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pn_buckets_11 = YPfab_met(FUNCODEREF(fun_Pn_buckets_11),T43,LITREF(lit_24),LITREF(lit_25),sloc(49),YPsb((P)"(fun ((_x <tab-vec>)) (prop-value _x %n-buckets))"));
  T45 = VARREF_OR(YgooScolsStabYPn_buckets,YPfalse);
  T46 = fun_Pn_buckets_11;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YgooScolsStabYPn_buckets,T44);
  T48 = XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPn_buckets),YPfalse,VARREF(YLintG),VARREF(YPprop_unbound_error));
  T47 = T48;
  return T47;
}

P YgooScolsStabY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114;
DEFCREGS();
  lit_26 = YPPsym((P)"%bucket-depth");
  lit_27 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pbucket_depth_12 = YPfab_met(FUNCODEREF(fun_Pbucket_depth_12),T0,LITREF(lit_26),LITREF(lit_27),sloc(50),YPsb((P)"(fun ((_x <tab-vec>)) (prop-value _x %bucket-depth))"));
  T2 = VARREF_OR(YgooScolsStabYPbucket_depth,YPfalse);
  T3 = fun_Pbucket_depth_12;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooScolsStabYPbucket_depth,T1);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPbucket_depth),YPfalse,VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_28 = YPPsym((P)"%data");
  lit_29 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdata_13 = YPfab_met(FUNCODEREF(fun_Pdata_13),T4,LITREF(lit_28),LITREF(lit_29),sloc(52),YPsb((P)"(fun ((_x <tab-vec>)) (prop-value _x %data))"));
  T6 = VARREF_OR(YgooScolsStabYPdata,YPfalse);
  T7 = fun_Pdata_13;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooScolsStabYPdata,T5);
  lit_30 = YPPsym((P)"%data-setter");
  lit_31 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(2,VARREF(YLrepG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdata_setter_14 = YPfab_met(FUNCODEREF(fun_Pdata_setter_14),T8,LITREF(lit_30),LITREF(lit_31),sloc(52),YPsb((P)"(fun ((_z <rep>) (_x <tab-vec>)) (prop-value-setter _z _x %data))"));
  T10 = VARREF_OR(YgooScolsStabYPdata_setter,YPfalse);
  T11 = fun_Pdata_setter_14;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooScolsStabYPdata_setter,T9);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPdata),VARREF(YgooScolsStabYPdata_setter),VARREF(YLrepG),VARREF(YPprop_unbound_error));
  lit_32 = YPPsym((P)"%count");
  lit_33 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pcount_15 = YPfab_met(FUNCODEREF(fun_Pcount_15),T12,LITREF(lit_32),LITREF(lit_33),sloc(56),YPsb((P)"(fun ((_x <tab>)) (prop-value _x %count))"));
  T14 = VARREF_OR(YgooScolsStabYPcount,YPfalse);
  T15 = fun_Pcount_15;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooScolsStabYPcount,T13);
  lit_34 = YPPsym((P)"%count-setter");
  lit_35 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pcount_setter_16 = YPfab_met(FUNCODEREF(fun_Pcount_setter_16),T16,LITREF(lit_34),LITREF(lit_35),sloc(56),YPsb((P)"(fun ((_z <int>) (_x <tab>)) (prop-value-setter _z _x %count))"));
  T18 = VARREF_OR(YgooScolsStabYPcount_setter,YPfalse);
  T19 = fun_Pcount_setter_16;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooScolsStabYPcount_setter,T17);
  lit_36 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPfab_met(FUNCODEREF(fun_17),T20,YPfalse,LITREF(lit_36),sloc(56),YPsb((P)"(fun ((_x <any>)) 0)"));
  T21 = fun_17;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYPcount),VARREF(YgooScolsStabYPcount_setter),VARREF(YLintG),T21);
  lit_37 = YPPsym((P)"%vector");
  lit_38 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pvector_18 = YPfab_met(FUNCODEREF(fun_Pvector_18),T22,LITREF(lit_37),LITREF(lit_38),sloc(57),YPsb((P)"(fun ((_x <tab>)) (prop-value _x %vector))"));
  T24 = VARREF_OR(YgooScolsStabYPvector,YPfalse);
  T25 = fun_Pvector_18;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooScolsStabYPvector,T23);
  lit_39 = YPPsym((P)"%vector-setter");
  lit_40 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pvector_setter_19 = YPfab_met(FUNCODEREF(fun_Pvector_setter_19),T26,LITREF(lit_39),LITREF(lit_40),sloc(57),YPsb((P)"(fun ((_z <tab-vec>) (_x <tab>)) (prop-value-setter _z _x %vector))"));
  T28 = VARREF_OR(YgooScolsStabYPvector_setter,YPfalse);
  T29 = fun_Pvector_setter_19;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooScolsStabYPvector_setter,T27);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYPvector),VARREF(YgooScolsStabYPvector_setter),VARREF(YgooScolsStabYLtab_vecG),VARREF(YPprop_unbound_error));
  lit_41 = YPPsym((P)"tab-hash");
  lit_42 = YPPlist(1,YPPsym((P)"x"));
  T31 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  T30 = YPfab_gen(T31,LITREF(lit_41),LITREF(lit_42),YPfalse);
  VARSET(YgooScolsStabYtab_hash,T30);
  lit_43 = YPPsym((P)"id-hash");
  lit_44 = YPPlist(1,YPPsym((P)"x"));
  T33 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T32 = YPfab_gen(T33,LITREF(lit_43),LITREF(lit_44),YPfalse);
  VARSET(YgooScolsStabYid_hash,T32);
  lit_45 = YPPsym((P)"<str-tab>");
  T35 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooScolsScolYLtabG),Ynil);
  T34 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_45),T35);
  VARSET(YgooScolsStabYLstr_tabG,T34);
  lit_46 = YPPlist(275,YPint((P)3),YPint((P)5),YPint((P)11),YPint((P)17),YPint((P)29),YPint((P)41),YPint((P)47),YPint((P)59),YPint((P)71),YPint((P)101),YPint((P)107),YPint((P)137),YPint((P)149),YPint((P)167),YPint((P)179),YPint((P)191),YPint((P)197),YPint((P)227),YPint((P)239),YPint((P)269),YPint((P)281),YPint((P)311),YPint((P)347),YPint((P)419),YPint((P)431),YPint((P)461),YPint((P)521),YPint((P)569),YPint((P)599),YPint((P)617),YPint((P)641),YPint((P)659),YPint((P)809),YPint((P)839),YPint((P)881),YPint((P)1019),YPint((P)1049),YPint((P)1091),YPint((P)1151),YPint((P)1229),YPint((P)1277),YPint((P)1319),YPint((P)1367),YPint((P)1427),YPint((P)1481),YPint((P)1607),YPint((P)1667),YPint((P)1721),YPint((P)1787),YPint((P)1871),YPint((P)1931),YPint((P)1997),YPint((P)2081),YPint((P)2141),YPint((P)2207),YPint((P)2267),YPint((P)2339),YPint((P)2549),YPint((P)2657),YPint((P)2729),YPint((P)2801),YPint((P)2969),YPint((P)3119),YPint((P)3251),YPint((P)3359),YPint((P)3461),YPint((P)3557),YPint((P)3671),YPint((P)3767),YPint((P)3917),YPint((P)4019),YPint((P)4127),YPint((P)4241),YPint((P)4421),YPint((P)4547),YPint((P)4721),YPint((P)4931),YPint((P)5099),YPint((P)5231),YPint((P)5417),YPint((P)5639),YPint((P)5849),YPint((P)6089),YPint((P)6269),YPint((P)6449),YPint((P)6659),YPint((P)6827),YPint((P)7127),YPint((P)7307),YPint((P)7547),YPint((P)7757),YPint((P)8009),YPint((P)8219),YPint((P)8429),YPint((P)8819),YPint((P)9041),YPint((P)9281),YPint((P)9629),YPint((P)9929),YPint((P)10271),YPint((P)10529),YPint((P)10859),YPint((P)11159),YPint((P)11447),YPint((P)11777),YPint((P)12107),YPint((P)12539),YPint((P)12917),YPint((P)13337),YPint((P)13679),YPint((P)14081),YPint((P)14447),YPint((P)14867),YPint((P)15269),YPint((P)15731),YPint((P)16139),YPint((P)16631),YPint((P)17189),YPint((P)17657),YPint((P)18119),YPint((P)18911),YPint((P)19421),YPint((P)19961),YPint((P)20477),YPint((P)21011),YPint((P)21557),YPint((P)22109),YPint((P)22697),YPint((P)23291),YPint((P)23909),YPint((P)24917),YPint((P)25577),YPint((P)26249),YPint((P)26951),YPint((P)27689),YPint((P)28409),YPint((P)29129),YPint((P)29879),YPint((P)30839),YPint((P)31721),YPint((P)32531),YPint((P)33347),YPint((P)34211),YPint((P)35081),YPint((P)36011),YPint((P)36929),YPint((P)37991),YPint((P)39041),YPint((P)40037),YPint((P)41141),YPint((P)42179),YPint((P)43319),YPint((P)44531),YPint((P)45821),YPint((P)47057),YPint((P)48311),YPint((P)49529),YPint((P)50891),YPint((P)52181),YPint((P)53549),YPint((P)54917),YPint((P)56477),YPint((P)57899),YPint((P)59357),YPint((P)60887),YPint((P)62927),YPint((P)64577),YPint((P)66359),YPint((P)68111),YPint((P)69827),YPint((P)71711),YPint((P)73607),YPint((P)75539),YPint((P)77477),YPint((P)79559),YPint((P)81551),YPint((P)83639),YPint((P)85817),YPint((P)88001),YPint((P)90371),YPint((P)92639),YPint((P)95087),YPint((P)97499),YPint((P)99989),YPint((P)102497),YPint((P)105227),YPint((P)108011),YPint((P)110729),YPint((P)113537),YPint((P)116531),YPint((P)119549),YPint((P)122597),YPint((P)125789),YPint((P)128939),YPint((P)132329),YPint((P)135647),YPint((P)139121),YPint((P)142607),YPint((P)146297),YPint((P)149969),YPint((P)153887),YPint((P)157769),YPint((P)161729),YPint((P)166301),YPint((P)170537),YPint((P)174929),YPint((P)179381),YPint((P)183917),YPint((P)188831),YPint((P)193601),YPint((P)198461),YPint((P)203429),YPint((P)208589),YPint((P)213947),YPint((P)219311),YPint((P)224909),YPint((P)230561),YPint((P)236477),YPint((P)242447),YPint((P)248639),YPint((P)254927),YPint((P)261431),YPint((P)268517),YPint((P)275321),YPint((P)282239),YPint((P)289841),YPint((P)297467),YPint((P)304979),YPint((P)312617),YPint((P)320561),YPint((P)328589),YPint((P)336827),YPint((P)345461),YPint((P)354251),YPint((P)363149),YPint((P)372269),YPint((P)381629),YPint((P)391217),YPint((P)401309),YPint((P)411527),YPint((P)422087),YPint((P)432659),YPint((P)443561),YPint((P)454709),YPint((P)466181),YPint((P)478067),YPint((P)490031),YPint((P)502499),YPint((P)515087),YPint((P)527981),YPint((P)541361),YPint((P)555041),YPint((P)569081),YPint((P)583337),YPint((P)598049),YPint((P)613007),YPint((P)628679),YPint((P)644489),YPint((P)660617),YPint((P)677231),YPint((P)694259),YPint((P)711707),YPint((P)729557),YPint((P)747827),YPint((P)766541),YPint((P)785777),YPint((P)805499),YPint((P)825827),YPint((P)846749),YPint((P)868121),YPint((P)889871),YPint((P)912449),YPint((P)935591),YPint((P)959207),YPint((P)983327));
  T36 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),LITREF(lit_46));
  VARSET(YgooScolsStabYTtwin_primesT,T36);
  lit_47 = YPPsym((P)"fab-tab-vec");
  lit_48 = YPPlist(6,YPPsym((P)"size"),YPPsym((P)"fill-value"),YPPsym((P)"n-buckets"),YPPsym((P)"bucket-depth"),YPPsym((P)"primary-modulus"),YPPsym((P)"secondary-modulus"));
  T37 = YPfab_sig(YPPlist(6,VARREF(YLintG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLintG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)6),VARREF(YgooScolsStabYLtab_vecG),Ynil);
  YgooScolsStabYfab_tab_vec = YPfab_met(FUNCODEREF(YgooScolsStabYfab_tab_vec),T37,LITREF(lit_47),LITREF(lit_48),sloc(104),YPsb((P)"(fun ((size <int>) fill-value (n-buckets <int>) (bucket-depth <int>) (primary-modulus <int>) (secondary-modulus <int>) => <tab-vec>) (def v (new <tab-vec> %n-buckets n-buckets %bucket-depth bucket-depth %primary-modulus primary-modulus %secondary-modulus secondary-modulus)) (set (%data v) (rep-fab size fill-value)) v)"));
  T38 = YgooScolsStabYfab_tab_vec;
  VARSET(YgooScolsStabYfab_tab_vec,T38);
  lit_49 = YPPsym((P)"@fill!");
  lit_50 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"fill"));
  T39 = YPfab_sig(YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsStabYOfillX = YPfab_met(FUNCODEREF(YgooScolsStabYOfillX),T39,LITREF(lit_49),LITREF(lit_50),sloc(117),YPsb((P)"(fun ((x <tab-vec>) fill) (rep-fill! (%data x) fill))"));
  T40 = YgooScolsStabYOfillX;
  VARSET(YgooScolsStabYOfillX,T40);
  lit_51 = YPPsym((P)"clr!");
  lit_52 = YPPlist(2,YPPsym((P)"vector"),YPPsym((P)"fill-value"));
  T41 = YPfab_sig(YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_clrX_24 = YPfab_met(FUNCODEREF(fun_clrX_24),T41,LITREF(lit_51),LITREF(lit_52),sloc(130),YPsb((P)"(fun ((vector <tab-vec>) fill-value) (@fill! vector fill-value) (set (%vacated vector) 0))"));
  T43 = VARREF_OR(YgooScolsStabYclrX,YPfalse);
  T44 = fun_clrX_24;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YgooScolsStabYclrX,T42);
  VARSET(YgooScolsStabYTdebug_tablesQT,YPfalse);
  lit_53 = YPPsym((P)"key-test");
  lit_54 = YPPlist(1,YPPsym((P)"_"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_25 = YPfab_met(FUNCODEREF(fun_key_test_25),T45,LITREF(lit_53),LITREF(lit_54),sloc(140),YPsb((P)"(fun ((_ <tab>) => <fun>) ==)"));
  T47 = VARREF_OR(YgooScolsScolYkey_test,YPfalse);
  T48 = fun_key_test_25;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YgooScolsScolYkey_test,T46);
  lit_55 = YPPlist(1,YPPsym((P)"_"));
  T49 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_tab_hash_26 = YPfab_met(FUNCODEREF(fun_tab_hash_26),T49,LITREF(lit_41),LITREF(lit_55),sloc(141),YPsb((P)"(fun ((_ <tab>) => <fun>) id-hash)"));
  T51 = VARREF_OR(YgooScolsStabYtab_hash,YPfalse);
  T52 = fun_tab_hash_26;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YgooScolsStabYtab_hash,T50);
  lit_56 = YPPlist(1,YPsb((P)"nul cell"));
  VARSET(YgooScolsStabYDnul_cell_marker,LITREF(lit_56));
  lit_57 = YPPlist(1,YPsb((P)"vacated cell"));
  VARSET(YgooScolsStabYDvacated_cell_marker,LITREF(lit_57));
  lit_58 = YPPsym((P)"fab");
  lit_59 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"size"));
  T54 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooScolsScolYLtabG));
  T53 = YPfab_sig(YPPlist(2,T54,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_fab_27 = YPfab_met(FUNCODEREF(fun_fab_27),T53,LITREF(lit_58),LITREF(lit_59),sloc(146),YPsb((P)"(fun ((type (t< <tab>)) (size <int>) => <tab>) (def (tup n-buckets bucket-depth) (choose-table-geometry size)) (def table (new type)) (set (%vector table) (fab-tab-vec (* n-buckets (* bucket-depth 2)) $nul-cell-marker n-buckets bucket-depth n-buckets (- n-buckets 2))) table)"));
  T56 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T57 = fun_fab_27;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooScolsScolYfab,T55);
  lit_60 = YPPsym((P)"elt-or");
  lit_61 = YPPlist(3,YPPsym((P)"table"),YPPsym((P)"key"),YPPsym((P)"default"));
  lit_62 = YPsb((P)"The table is totally full this shouldn't happen");
  T58 = YPfab_sig(YPPlist(3,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_28 = YPfab_met(FUNCODEREF(fun_elt_or_28),T58,LITREF(lit_60),LITREF(lit_61),sloc(166),YPsb((P)"(fun ((table <tab>) key default => <any>) (def test-function (key-test table)) (def vector (%vector table)) (def n-buckets (%n-buckets vector)) (def bucket-depth (%bucket-depth vector)) (def (hash <int>) ((tab-hash table) key)) (def bucket-index (mod hash (%primary-modulus vector))) (def bucket-offset (+ (mod hash (%secondary-modulus vector)) 1)) (rep outer ((bucket-index bucket-index) (probes 0)) (if (< probes n-buckets) (let ((index (* bucket-index (* bucket-depth 2)))) (rep inner ((i 0) (raw-index index)) (if (< i bucket-depth) (let ((this-key (@velt vector raw-index))) (cond ((== this-key $nul-cell-marker) default) ((test-function key this-key) (@velt vector (+ raw-index bucket-depth))) (#t (inner (+ i 1) (+ raw-index 1))))) (outer (mod- bucket-index bucket-offset n-buckets) (+ probes 1))))) (internal-error The table is totally full this shouldn't happen))))"));
  T60 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T61 = fun_elt_or_28;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooScolsScolYelt_or,T59);
  lit_63 = YPPsym((P)"elt-setter");
  lit_64 = YPPlist(3,YPPsym((P)"value"),YPPsym((P)"table"),YPPsym((P)"key"));
  lit_65 = YPsb((P)"The table is totally full this shouldn't happen");
  T62 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_29 = YPfab_met(FUNCODEREF(fun_elt_setter_29),T62,LITREF(lit_63),LITREF(lit_64),sloc(195),YPsb((P)"(fun (value (table <tab>) key => <any>) (def vector (%vector table)) (if (>= (%count table) (* (* (%n-buckets vector) (%bucket-depth vector)) (tab-growth-threshold table))) (set vector (%vector (grow-table table))) (if (> (+ (%count table) (%vacated vector)) (* (* (%n-buckets vector) (%bucket-depth vector)) (tab-growth-threshold table))) (set vector (%vector (rehash-table table))))) (def test-function (key-test table)) (def bucket-depth (%bucket-depth vector)) (def n-buckets (%n-buckets vector)) (def (hash <int>) ((tab-hash table) key)) (def bucket-index (mod hash (%primary-modulus vector))) (def bucket-offset (+ (mod hash (%secondary-modulus vector)) 1)) (rep outer ((bucket-index bucket-index) ((probes <int>) 0)) (if (< probes n-buckets) (let ((index (* bucket-index (* bucket-depth 2)))) (rep inner ((vacancy-index #f) ((i <int>) 0) ((raw-index <int>) index)) (if (< i bucket-depth) (let ((this-key (@velt vector raw-index))) (cond ((== this-key $nul-cell-marker) (def index (if vacancy-index (seq (decf (%vacated vector)) vacancy-index) raw-index)) (set (@velt vector index) key) (set (@velt vector (+ index bucket-depth)) value) (incf (%count table)) value) ((== this-key $vacated-cell-marker) (inner (or vacancy-index raw-index) (+ i 1) (+ raw-index 1))) ((test-function key this-key) (set (@velt vector (+ raw-index bucket-depth)) value) value) (#t (inner vacancy-index (+ i 1) (+ raw-index 1))))) (outer (mod- bucket-index bucket-offset n-buckets) (+ probes 1))))) (internal-error The table is totally full this shouldn't happen))))"));
  T64 = VARREF_OR(YgooScolsScolxYelt_setter,YPfalse);
  T65 = fun_elt_setter_29;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooScolsScolxYelt_setter,T63);
  lit_66 = YPPsym((P)"del");
  lit_67 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T66 = YPfab_sig(YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_del_30 = YPfab_met(FUNCODEREF(fun_del_30),T66,LITREF(lit_66),LITREF(lit_67),sloc(254),YPsb((P)"(fun ((x <tab>) key => <tab>) (del! (dup x) key))"));
  T68 = VARREF_OR(YgooScolsScolYdel,YPfalse);
  T69 = fun_del_30;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooScolsScolYdel,T67);
  lit_68 = YPPsym((P)"del!");
  lit_69 = YPPlist(2,YPPsym((P)"table"),YPPsym((P)"key"));
  lit_70 = YPsb((P)"The table is totally full this shouldn't happen");
  T70 = YPfab_sig(YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_delX_31 = YPfab_met(FUNCODEREF(fun_delX_31),T70,LITREF(lit_68),LITREF(lit_69),sloc(257),YPsb((P)"(fun ((table <tab>) key => <tab>) (def test-function (key-test table)) (def vector (%vector table)) (def n-buckets (%n-buckets vector)) (def bucket-depth (%bucket-depth vector)) (def (hash <int>) ((tab-hash table) key)) (def bucket-index (mod hash (%primary-modulus vector))) (def bucket-offset (+ (mod hash (%secondary-modulus vector)) 1)) (rep outer ((bucket-index bucket-index) ((probes <int>) 0)) (if (< probes n-buckets) (let (((index <int>) (* bucket-index (* bucket-depth 2)))) (rep inner (((i <int>) 0) ((raw-index <int>) index)) (if (< i bucket-depth) (let ((this-key (@velt vector raw-index))) (cond ((== this-key $nul-cell-marker) #f) ((and (~== this-key $vacated-cell-marker) (test-function key this-key)) (set (@velt vector raw-index) $vacated-cell-marker) (decf (%count table)) (incf (%vacated vector)) #t) (#t (inner (+ i 1) (+ raw-index 1))))) (outer (mod- bucket-index bucket-offset n-buckets) (+ probes 1))))) (internal-error The table is totally full this shouldn't happen))) table)"));
  T72 = VARREF_OR(YgooScolsScolxYdelX,YPfalse);
  T73 = fun_delX_31;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooScolsScolxYdelX,T71);
  lit_71 = YPPsym((P)"do-keyed");
  lit_72 = YPPlist(2,YPPsym((P)"function"),YPPsym((P)"table"));
  T74 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_keyed_32 = YPfab_met(FUNCODEREF(fun_do_keyed_32),T74,LITREF(lit_71),LITREF(lit_72),sloc(293),YPsb((P)"(fun ((function <fun>) (table <tab>)) (def vector (%vector table)) (def n-buckets (%n-buckets vector)) (def depth (%bucket-depth vector)) (rep outer (((b <int>) 0)) (when (< b n-buckets) (rep inner (((i <int>) 0)) (when (< i depth) (def key (@velt vector (+ i (* b (* depth 2))))) (unless (or (== key $nul-cell-marker) (== key $vacated-cell-marker)) (def index (+ i (+ (* b (* depth 2)) depth))) (function key (@velt vector index))) (inner (+ i 1)))) (outer (+ b 1)))))"));
  T76 = VARREF_OR(YgooScolsScolYdo_keyed,YPfalse);
  T77 = fun_do_keyed_32;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YgooScolsScolYdo_keyed,T75);
  lit_73 = YPPsym((P)"do");
  lit_74 = YPPlist(2,YPPsym((P)"function"),YPPsym((P)"table"));
  T78 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_33 = YPfab_met(FUNCODEREF(fun_do_33),T78,LITREF(lit_73),LITREF(lit_74),sloc(310),YPsb((P)"(fun ((function <fun>) (table <tab>)) (def vector (%vector table)) (def n-buckets (%n-buckets vector)) (def depth (%bucket-depth vector)) (rep outer (((b <int>) 0)) (when (< b n-buckets) (rep inner (((i <int>) 0)) (when (< i depth) (def key (@velt vector (+ i (* b (* depth 2))))) (unless (or (== key $nul-cell-marker) (== key $vacated-cell-marker)) (def index (+ i (+ (* b (* depth 2)) depth))) (function (@velt vector index))) (inner (+ i 1)))) (outer (+ b 1)))))"));
  T80 = VARREF_OR(YgooSmacrosYdo,YPfalse);
  T81 = fun_do_33;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YgooSmacrosYdo,T79);
  lit_75 = YPPsym((P)"zap!");
  lit_76 = YPPlist(1,YPPsym((P)"table"));
  T82 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_zapX_34 = YPfab_met(FUNCODEREF(fun_zapX_34),T82,LITREF(lit_75),LITREF(lit_76),sloc(326),YPsb((P)"(fun ((table <tab>) => <tab>) (clr! (%vector table) $nul-cell-marker) (set (%count table) 0) table)"));
  T84 = VARREF_OR(YgooScolsScolxYzapX,YPfalse);
  T85 = fun_zapX_34;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YgooScolsScolxYzapX,T83);
  lit_77 = YPPsym((P)"len");
  lit_78 = YPPlist(1,YPPsym((P)"table"));
  T86 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_35 = YPfab_met(FUNCODEREF(fun_len_35),T86,LITREF(lit_77),LITREF(lit_78),sloc(331),YPsb((P)"(fun ((table <tab>) => <int>) (%count table))"));
  T88 = VARREF_OR(YgooStypesYlen,YPfalse);
  T89 = fun_len_35;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YgooStypesYlen,T87);
  lit_79 = YPPsym((P)"<tab-enum>");
  T91 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooScolsScolYLenumG),Ynil);
  T90 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_79),T91);
  VARSET(YgooScolsStabYLtab_enumG,T90);
  lit_80 = YPPsym((P)"@vec");
  lit_81 = YPPlist(1,YPPsym((P)"_x"));
  T92 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Ovec_36 = YPfab_met(FUNCODEREF(fun_Ovec_36),T92,LITREF(lit_80),LITREF(lit_81),sloc(335),YPsb((P)"(fun ((_x <tab-enum>)) (prop-value _x @vec))"));
  T94 = VARREF_OR(YgooScolsStabYOvec,YPfalse);
  T95 = fun_Ovec_36;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YgooScolsStabYOvec,T93);
  lit_82 = YPPsym((P)"@vec-setter");
  lit_83 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T96 = YPfab_sig(YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Ovec_setter_37 = YPfab_met(FUNCODEREF(fun_Ovec_setter_37),T96,LITREF(lit_82),LITREF(lit_83),sloc(335),YPsb((P)"(fun ((_z <tab-vec>) (_x <tab-enum>)) (prop-value-setter _z _x @vec))"));
  T98 = VARREF_OR(YgooScolsStabYOvec_setter,YPfalse);
  T99 = fun_Ovec_setter_37;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooScolsStabYOvec_setter,T97);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOvec),VARREF(YgooScolsStabYOvec_setter),VARREF(YgooScolsStabYLtab_vecG),VARREF(YPprop_unbound_error));
  lit_84 = YPPsym((P)"@buc");
  lit_85 = YPPlist(1,YPPsym((P)"_x"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Obuc_38 = YPfab_met(FUNCODEREF(fun_Obuc_38),T100,LITREF(lit_84),LITREF(lit_85),sloc(336),YPsb((P)"(fun ((_x <tab-enum>)) (prop-value _x @buc))"));
  T102 = VARREF_OR(YgooScolsStabYObuc,YPfalse);
  T103 = fun_Obuc_38;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooScolsStabYObuc,T101);
  lit_86 = YPPsym((P)"@buc-setter");
  lit_87 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T104 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Obuc_setter_39 = YPfab_met(FUNCODEREF(fun_Obuc_setter_39),T104,LITREF(lit_86),LITREF(lit_87),sloc(336),YPsb((P)"(fun ((_z <int>) (_x <tab-enum>)) (prop-value-setter _z _x @buc))"));
  T106 = VARREF_OR(YgooScolsStabYObuc_setter,YPfalse);
  T107 = fun_Obuc_setter_39;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooScolsStabYObuc_setter,T105);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYObuc),VARREF(YgooScolsStabYObuc_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_88 = YPPsym((P)"@idx");
  lit_89 = YPPlist(1,YPPsym((P)"_x"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T109 = fun_Oidx_40 = YPfab_met(FUNCODEREF(fun_Oidx_40),T110,LITREF(lit_88),LITREF(lit_89),sloc(337),YPsb((P)"(fun ((_x <tab-enum>)) (prop-value _x @idx))"));
  T113 = VARREF_OR(YgooScolsStabYOidx,YPfalse);
  T114 = fun_Oidx_40;
  T112 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T113,T114);
  T111 = VARSET(YgooScolsStabYOidx,T112);
  T108 = T111;
  return T108;
}

P YgooScolsStabY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120;
DEFCREGS();
  lit_90 = YPPsym((P)"@idx-setter");
  lit_91 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Oidx_setter_41 = YPfab_met(FUNCODEREF(fun_Oidx_setter_41),T0,LITREF(lit_90),LITREF(lit_91),sloc(337),YPsb((P)"(fun ((_z <int>) (_x <tab-enum>)) (prop-value-setter _z _x @idx))"));
  T2 = VARREF_OR(YgooScolsStabYOidx_setter,YPfalse);
  T3 = fun_Oidx_setter_41;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooScolsStabYOidx_setter,T1);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOidx),VARREF(YgooScolsStabYOidx_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_92 = YPPsym((P)"@fin?");
  lit_93 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_OfinQ_42 = YPfab_met(FUNCODEREF(fun_OfinQ_42),T4,LITREF(lit_92),LITREF(lit_93),sloc(338),YPsb((P)"(fun ((_x <tab-enum>)) (prop-value _x @fin?))"));
  T6 = VARREF_OR(YgooScolsStabYOfinQ,YPfalse);
  T7 = fun_OfinQ_42;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooScolsStabYOfinQ,T5);
  lit_94 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPfab_met(FUNCODEREF(fun_43),T8,YPfalse,LITREF(lit_94),sloc(338),YPsb((P)"(fun ((_x <any>)) #f)"));
  T9 = fun_43;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOfinQ),YPfalse,VARREF(YLlogG),T9);
  T10 = XCALL3(1,VARREF(Ynew),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOfinQ),YPtrue);
  VARSET(YgooScolsStabYDfin_enum,T10);
  lit_95 = YPPsym((P)"enum");
  lit_96 = YPPlist(1,YPPsym((P)"table"));
  T11 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsStabYLtab_enumG),Ynil);
  fun_enum_44 = YPfab_met(FUNCODEREF(fun_enum_44),T11,LITREF(lit_95),LITREF(lit_96),sloc(341),YPsb((P)"(fun ((table <tab>) => <tab-enum>) (if (= (len table) 0) $fin-enum (let ((vector (%vector table)) (n-buckets (%n-buckets vector)) (depth (%bucket-depth vector))) (rep outer (((b <int>) 0)) (if (< b n-buckets) (rep inner (((i <int>) 0)) (if (< i depth) (let ((key (@velt vector (+ i (* b (* depth 2)))))) (if (or (== key $nul-cell-marker) (== key $vacated-cell-marker)) (inner (+ i 1)) (new <tab-enum> @vec vector @buc b @idx i))) (outer (+ b 1)))) $fin-enum)))))"));
  T13 = VARREF_OR(YgooScolsScolYenum,YPfalse);
  T14 = fun_enum_44;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(YgooScolsScolYenum,T12);
  lit_97 = YPPsym((P)"nxt");
  lit_98 = YPPlist(1,YPPsym((P)"e"));
  T15 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsStabYLtab_enumG),Ynil);
  fun_nxt_45 = YPfab_met(FUNCODEREF(fun_nxt_45),T15,LITREF(lit_97),LITREF(lit_98),sloc(359),YPsb((P)"(fun ((e <tab-enum>) => <tab-enum>) (def vector (@vec e)) (def n-buckets (%n-buckets vector)) (def depth (%bucket-depth vector)) (def bucket (@buc e)) (def index (@idx e)) (rep outer (((b <int>) bucket) (first? #t)) (if (< b n-buckets) (rep inner (((i <int>) (if first? (+ index 1) 0))) (if (< i depth) (let ((key (@velt vector (+ i (* b (* depth 2)))))) (if (or (== key $nul-cell-marker) (== key $vacated-cell-marker)) (inner (+ i 1)) (renew e @vec vector @buc b @idx i))) (outer (+ b 1) #f))) $fin-enum)))"));
  T17 = VARREF_OR(YgooScolsScolYnxt,YPfalse);
  T18 = fun_nxt_45;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YgooScolsScolYnxt,T16);
  lit_99 = YPPsym((P)"fin?");
  lit_100 = YPPlist(1,YPPsym((P)"e"));
  T19 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_46 = YPfab_met(FUNCODEREF(fun_finQ_46),T19,LITREF(lit_99),LITREF(lit_100),sloc(377),YPsb((P)"(fun ((e <tab-enum>) => <log>) (@fin? e))"));
  T21 = VARREF_OR(YgooScolsScolYfinQ,YPfalse);
  T22 = fun_finQ_46;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YgooScolsScolYfinQ,T20);
  lit_101 = YPPsym((P)"now-key");
  lit_102 = YPPlist(1,YPPsym((P)"e"));
  T23 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_key_47 = YPfab_met(FUNCODEREF(fun_now_key_47),T23,LITREF(lit_101),LITREF(lit_102),sloc(380),YPsb((P)"(fun ((e <tab-enum>) => <any>) (def vector (@vec e)) (def depth (%bucket-depth vector)) (@velt vector (+ (@idx e) (* (@buc e) (* depth 2)))))"));
  T25 = VARREF_OR(YgooScolsScolYnow_key,YPfalse);
  T26 = fun_now_key_47;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YgooScolsScolYnow_key,T24);
  lit_103 = YPPsym((P)"now");
  lit_104 = YPPlist(1,YPPsym((P)"e"));
  T27 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_48 = YPfab_met(FUNCODEREF(fun_now_48),T27,LITREF(lit_103),LITREF(lit_104),sloc(385),YPsb((P)"(fun ((e <tab-enum>) => <any>) (def vector (@vec e)) (def depth (%bucket-depth vector)) (@velt vector (+ (@idx e) (+ depth (* (@buc e) (* depth 2))))))"));
  T29 = VARREF_OR(YgooScolsScolYnow,YPfalse);
  T30 = fun_now_48;
  T28 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T29,T30);
  VARSET(YgooScolsScolYnow,T28);
  lit_105 = YPPsym((P)"now-setter");
  lit_106 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"e"));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_49 = YPfab_met(FUNCODEREF(fun_now_setter_49),T31,LITREF(lit_105),LITREF(lit_106),sloc(390),YPsb((P)"(fun (value (e <tab-enum>)) (def vector (@vec e)) (def index (@idx e)) (def depth (%bucket-depth vector)) (set (@velt vector (+ index (+ depth (* (@buc e) (* depth 2))))) value))"));
  T33 = VARREF_OR(YgooScolsScolYnow_setter,YPfalse);
  T34 = fun_now_setter_49;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YgooScolsScolYnow_setter,T32);
  lit_107 = YPPsym((P)"tab-keys");
  lit_108 = YPPlist(1,YPPsym((P)"table"));
  lit_109 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  T36 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_50 = YPfab_met(FUNCODEREF(fun_50),T36,YPfalse,LITREF(lit_109),sloc(399),YPsb((P)"(fun (k v) (pack k))"));
  T35 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_tab_keys_51 = YPfab_met(FUNCODEREF(fun_tab_keys_51),T35,LITREF(lit_107),LITREF(lit_108),sloc(398),YPsb((P)"(fun ((table <tab>) => <lst>) (packing () (do-keyed (fun (k v) (pack k)) table)))"));
  T38 = VARREF_OR(YgooScolsStabYtab_keys,YPfalse);
  T39 = fun_tab_keys_51;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooScolsStabYtab_keys,T37);
  lit_110 = YPPsym((P)"grow-table");
  lit_111 = YPPlist(1,YPPsym((P)"table"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_grow_table_52 = YPfab_met(FUNCODEREF(fun_grow_table_52),T40,LITREF(lit_110),LITREF(lit_111),sloc(401),YPsb((P)"(fun ((table <tab>) => <tab>) (def vector (%vector table)) (def (tup new-n-buckets new-bucket-depth) (choose-table-geometry (floor (* (* (%n-buckets vector) (%bucket-depth vector)) (tab-growth-factor table))))) (def new-vector (fab-tab-vec (* new-n-buckets (* new-bucket-depth 2)) $nul-cell-marker new-n-buckets new-bucket-depth new-n-buckets (- new-n-buckets 2))) (copy-to-new-vector table new-vector) (set (%vector table) new-vector) table)"));
  T42 = VARREF_OR(YgooScolsStabYgrow_table,YPfalse);
  T43 = fun_grow_table_52;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooScolsStabYgrow_table,T41);
  lit_112 = YPPsym((P)"rehash-table");
  lit_113 = YPPlist(1,YPPsym((P)"table"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_rehash_table_53 = YPfab_met(FUNCODEREF(fun_rehash_table_53),T44,LITREF(lit_112),LITREF(lit_113),sloc(422),YPsb((P)"(fun ((table <tab>) => <tab>) (def vector (%vector table)) (def new-vector (fab-tab-vec (* (%n-buckets vector) (* (%bucket-depth vector) 2)) $nul-cell-marker (%n-buckets vector) (%bucket-depth vector) (%primary-modulus vector) (%secondary-modulus vector))) (copy-to-new-vector table new-vector) (set (%vector table) new-vector) table)"));
  T46 = VARREF_OR(YgooScolsStabYrehash_table,YPfalse);
  T47 = fun_rehash_table_53;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooScolsStabYrehash_table,T45);
  lit_114 = YPPsym((P)"choose-table-geometry");
  lit_115 = YPPlist(1,YPPsym((P)"capacity"));
  lit_116 = YPPlist(1,YPPsym((P)"return"));
  lit_117 = YPPlist(1,YPPsym((P)"p"));
  lit_118 = YPsb((P)"Not enough primes to compute new table size");
  T51 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPfab_met(FUNCODEREF(fun_54),T51,YPfalse,LITREF(lit_117),sloc(447),YPsb((P)"(fun ((p <int>)) (when (> p (1st (ceil/ capacity depth))) (return (tup (+ p 2) depth))))"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPfab_met(FUNCODEREF(fun_55),T50,YPfalse,LITREF(lit_116),sloc(438),YPsb((P)"(fun (return) (def depth (cond ((< capacity 2000) 1) ((< capacity 5000) 2) ((< capacity 15000) 4) ((< capacity 50000) 8) ((< capacity 250000) 16) (#t 32))) (do (fun ((p <int>)) (when (> p (1st (ceil/ capacity depth))) (return (tup (+ p 2) depth)))) *twin-primes*) (internal-error Not enough primes to compute new table size))"));
  T49 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),T49,Ynil);
  YgooScolsStabYchoose_table_geometry = YPfab_met(FUNCODEREF(YgooScolsStabYchoose_table_geometry),T48,LITREF(lit_114),LITREF(lit_115),sloc(435),YPsb((P)"(fun ((capacity <int>) => (tup (n-buckets <int>) (bucket-depth <int>))) (esc return (def depth (cond ((< capacity 2000) 1) ((< capacity 5000) 2) ((< capacity 15000) 4) ((< capacity 50000) 8) ((< capacity 250000) 16) (#t 32))) (do (fun ((p <int>)) (when (> p (1st (ceil/ capacity depth))) (return (tup (+ p 2) depth)))) *twin-primes*) (internal-error Not enough primes to compute new table size)))"));
  T52 = YgooScolsStabYchoose_table_geometry;
  VARSET(YgooScolsStabYchoose_table_geometry,T52);
  lit_119 = YPPsym((P)"copy-to-new-vector");
  lit_120 = YPPlist(2,YPPsym((P)"table"),YPPsym((P)"new-vector"));
  lit_121 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  lit_122 = YPsb((P)"The table is totally full this shouldn't happen");
  T54 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_57 = YPfab_met(FUNCODEREF(fun_57),T54,YPfalse,LITREF(lit_121),sloc(455),YPsb((P)"(fun (k v) (def test-function (key-test table)) (def new-n-buckets (%n-buckets new-vector)) (def new-bucket-depth (%bucket-depth new-vector)) (def new-primary-modulus (%primary-modulus new-vector)) (def new-secondary-modulus (%secondary-modulus new-vector)) (def (hash <int>) ((tab-hash table) k)) (def new-bucket-index (mod hash new-primary-modulus)) (def new-bucket-offset (+ (mod hash new-secondary-modulus) 1)) (rep outer ((new-bucket-index new-bucket-index) ((probes <int>) 0)) (if (< probes new-n-buckets) (let ((bucket-start (* new-bucket-index (* new-bucket-depth 2)))) (rep inner (((i <int>) 0) ((index <int>) bucket-start)) (if (< i new-bucket-depth) (let ((this-key (@velt new-vector index))) (if (== this-key $nul-cell-marker) (seq (set (@velt new-vector index) k) (set (@velt new-vector (+ index new-bucket-depth)) v)) (inner (+ i 1) (+ index 1)))) (outer (mod- new-bucket-index new-bucket-offset new-n-buckets) (+ probes 1))))) (internal-error The table is totally full this shouldn't happen))))"));
  T53 = YPfab_sig(YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_copy_to_new_vector_58 = YPfab_met(FUNCODEREF(fun_copy_to_new_vector_58),T53,LITREF(lit_119),LITREF(lit_120),sloc(453),YPsb((P)"(fun ((table <tab>) new-vector) (do-keyed (fun (k v) (def test-function (key-test table)) (def new-n-buckets (%n-buckets new-vector)) (def new-bucket-depth (%bucket-depth new-vector)) (def new-primary-modulus (%primary-modulus new-vector)) (def new-secondary-modulus (%secondary-modulus new-vector)) (def (hash <int>) ((tab-hash table) k)) (def new-bucket-index (mod hash new-primary-modulus)) (def new-bucket-offset (+ (mod hash new-secondary-modulus) 1)) (rep outer ((new-bucket-index new-bucket-index) ((probes <int>) 0)) (if (< probes new-n-buckets) (let ((bucket-start (* new-bucket-index (* new-bucket-depth 2)))) (rep inner (((i <int>) 0) ((index <int>) bucket-start)) (if (< i new-bucket-depth) (let ((this-key (@velt new-vector index))) (if (== this-key $nul-cell-marker) (seq (set (@velt new-vector index) k) (set (@velt new-vector (+ index new-bucket-depth)) v)) (inner (+ i 1) (+ index 1)))) (outer (mod- new-bucket-index new-bucket-offset new-n-buckets) (+ probes 1))))) (internal-error The table is totally full this shouldn't happen)))) table))"));
  T56 = VARREF_OR(YgooScolsStabYcopy_to_new_vector,YPfalse);
  T57 = fun_copy_to_new_vector_58;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooScolsStabYcopy_to_new_vector,T55);
  lit_123 = YPPlist(1,YPPsym((P)"x"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_59 = YPfab_met(FUNCODEREF(fun_id_hash_59),T58,LITREF(lit_43),LITREF(lit_123),sloc(492),YPsb((P)"(fun (x) (address-of x))"));
  T60 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T61 = fun_id_hash_59;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooScolsStabYid_hash,T59);
  lit_124 = YPPlist(1,YPPsym((P)"x"));
  T62 = YPfab_sig(YPPlist(1,VARREF(YLlogG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_60 = YPfab_met(FUNCODEREF(fun_id_hash_60),T62,LITREF(lit_43),LITREF(lit_124),sloc(494),YPsb((P)"(fun ((x <log>)) (if x 131 149))"));
  T64 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T65 = fun_id_hash_60;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooScolsStabYid_hash,T63);
  lit_125 = YPPsym((P)"rot");
  lit_126 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T66 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  YgooScolsStabYrot = YPfab_met(FUNCODEREF(YgooScolsStabYrot),T66,LITREF(lit_125),LITREF(lit_126),sloc(497),YPsb((P)"(fun ((x <int>) (a <int>) => <int>) (| (>> x a) (<< x a)))"));
  T67 = YgooScolsStabYrot;
  VARSET(YgooScolsStabYrot,T67);
  lit_127 = YPPlist(1,YPPsym((P)"x"));
  T68 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_62 = YPfab_met(FUNCODEREF(fun_id_hash_62),T68,LITREF(lit_43),LITREF(lit_127),sloc(500),YPsb((P)"(fun ((x <int>)) (abs (+ (- (rot x 15) x) 31)))"));
  T70 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T71 = fun_id_hash_62;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooScolsStabYid_hash,T69);
  lit_128 = YPPlist(1,YPPsym((P)"x"));
  T72 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_63 = YPfab_met(FUNCODEREF(fun_id_hash_63),T72,LITREF(lit_43),LITREF(lit_128),sloc(504),YPsb((P)"(fun ((x <chr>)) (id-hash (as <int> x)))"));
  T74 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T75 = fun_id_hash_63;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooScolsStabYid_hash,T73);
  lit_129 = YPPlist(1,YPPsym((P)"x"));
  T76 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_64 = YPfab_met(FUNCODEREF(fun_id_hash_64),T76,LITREF(lit_43),LITREF(lit_129),sloc(507),YPsb((P)"(fun ((x <flo>)) (+ (flo-bits x) 89))"));
  T78 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T79 = fun_id_hash_64;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooScolsStabYid_hash,T77);
  lit_130 = YPPlist(1,YPPsym((P)"x"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YLtupG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_65 = YPfab_met(FUNCODEREF(fun_id_hash_65),T80,LITREF(lit_43),LITREF(lit_130),sloc(510),YPsb((P)"(fun ((x <tup>)) (rep loop ((t-enum (enum x)) (cur-hash 0)) (when (not (fin? t-enum)) (def cur-elem (now t-enum)) (loop (nxt t-enum) (+ (* cur-hash 31) (id-hash cur-elem)))) cur-hash))"));
  T82 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T83 = fun_id_hash_65;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooScolsStabYid_hash,T81);
  lit_131 = YPPsym((P)"key-type");
  lit_132 = YPPlist(1,YPPsym((P)"x"));
  T84 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_66 = YPfab_met(FUNCODEREF(fun_key_type_66),T84,LITREF(lit_131),LITREF(lit_132),sloc(520),YPsb((P)"(fun ((x <str-tab>) => <type>) <str>)"));
  T86 = VARREF_OR(YgooScolsScolYkey_type,YPfalse);
  T87 = fun_key_type_66;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooScolsScolYkey_type,T85);
  lit_133 = YPPsym((P)"elt-type");
  lit_134 = YPPlist(1,YPPsym((P)"x"));
  T88 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_67 = YPfab_met(FUNCODEREF(fun_elt_type_67),T88,LITREF(lit_133),LITREF(lit_134),sloc(521),YPsb((P)"(fun ((x <str-tab>) => <type>) <sym>)"));
  T90 = VARREF_OR(YgooScolsScolYelt_type,YPfalse);
  T91 = fun_elt_type_67;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooScolsScolYelt_type,T89);
  lit_135 = YPPsym((P)"case-insensitive-string-hash");
  lit_136 = YPPlist(1,YPPsym((P)"x"));
  T92 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooScolsStabYcase_insensitive_string_hash = YPfab_met(FUNCODEREF(YgooScolsStabYcase_insensitive_string_hash),T92,LITREF(lit_135),LITREF(lit_136),sloc(523),YPsb((P)"(fun ((x <str>) => <int>) (def e (len x)) (rep loop (((i <int>) 0) ((hash <int>) 0)) (if (< i e) (loop (+ i 1) (mod (+ (<< hash 6) (& (as <int> (low-elt x i)) 159)) 970747)) hash)))"));
  T93 = YgooScolsStabYcase_insensitive_string_hash;
  VARSET(YgooScolsStabYcase_insensitive_string_hash,T93);
  lit_137 = YPPsym((P)"case-insensitive-string-equal");
  lit_138 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T94 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooScolsStabYcase_insensitive_string_equal = YPfab_met(FUNCODEREF(YgooScolsStabYcase_insensitive_string_equal),T94,LITREF(lit_137),LITREF(lit_138),sloc(531),YPsb((P)"(fun ((x <str>) (y <str>) => <log>) (def sy 0) (def ey (len y)) (when (== (len x) (- ey sy)) (rep loop (((i <int>) sy)) (or (== i ey) (let (((cx <chr>) (low-elt x (- i sy))) ((cy <chr>) (low-elt y i))) (and (or (== cx cy) (== (to-lower cx) (to-lower cy))) (loop (+ i 1))))))))"));
  T95 = YgooScolsStabYcase_insensitive_string_equal;
  VARSET(YgooScolsStabYcase_insensitive_string_equal,T95);
  lit_139 = YPPlist(1,YPPsym((P)"_"));
  T96 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_70 = YPfab_met(FUNCODEREF(fun_key_test_70),T96,LITREF(lit_53),LITREF(lit_139),sloc(541),YPsb((P)"(fun ((_ <str-tab>) => <fun>) case-insensitive-string-equal)"));
  T98 = VARREF_OR(YgooScolsScolYkey_test,YPfalse);
  T99 = fun_key_test_70;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooScolsScolYkey_test,T97);
  lit_140 = YPPlist(1,YPPsym((P)"_"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_tab_hash_71 = YPfab_met(FUNCODEREF(fun_tab_hash_71),T100,LITREF(lit_41),LITREF(lit_140),sloc(542),YPsb((P)"(fun ((_ <str-tab>) => <fun>) case-insensitive-string-hash)"));
  T102 = VARREF_OR(YgooScolsStabYtab_hash,YPfalse);
  T103 = fun_tab_hash_71;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooScolsStabYtab_hash,T101);
  lit_141 = YPPsym((P)"add!");
  lit_142 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T104 = YPfab_sig(YPPlist(2,VARREF(YgooScolsStabYLsetG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsStabYLsetG),Ynil);
  fun_addX_72 = YPfab_met(FUNCODEREF(fun_addX_72),T104,LITREF(lit_141),LITREF(lit_142),sloc(548),YPsb((P)"(fun ((c <set>) x => <set>) (set (elt c x) #t) c)"));
  T106 = VARREF_OR(YgooScolsScolxYaddX,YPfalse);
  T107 = fun_addX_72;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooScolsScolxYaddX,T105);
  lit_143 = YPPsym((P)"mem?");
  lit_144 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T108 = YPfab_sig(YPPlist(2,VARREF(YgooScolsStabYLsetG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_memQ_73 = YPfab_met(FUNCODEREF(fun_memQ_73),T108,LITREF(lit_143),LITREF(lit_144),sloc(552),YPsb((P)"(fun ((c <set>) x => <log>) (elt-or c x #f))"));
  T110 = VARREF_OR(YgooScolsScolYmemQ,YPfalse);
  T111 = fun_memQ_73;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YgooScolsScolYmemQ,T109);
  lit_145 = YPPsym((P)"elts");
  lit_146 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"keys"));
  lit_147 = YPPlist(1,YPPsym((P)"k"));
  T116 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T115 = fun_74 = YPfab_met(FUNCODEREF(fun_74),T116,YPfalse,LITREF(lit_147),sloc(557),YPsb((P)"(fun (k) (set (elt res k) (elt x k)))"));
  T114 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T113 = fun_elts_75 = YPfab_met(FUNCODEREF(fun_elts_75),T114,LITREF(lit_145),LITREF(lit_146),sloc(555),YPsb((P)"(fun ((x <col>) (keys <seq>) => <col>) (def res (fab <tab> (len keys))) (do (fun (k) (set (elt res k) (elt x k))) keys) (col-res x res))"));
  T119 = VARREF_OR(YgooScolsScolYelts,YPfalse);
  T120 = fun_elts_75;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  T117 = VARSET(YgooScolsScolYelts,T118);
  T112 = T117;
  return T112;
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
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSflat;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsStup;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstr;

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
  {&module_info_gooSpacker},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSmap},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {&module_info_gooScolsSflat},
  {&module_info_gooScolsSrep},
  {&module_info_gooScolsStup},
  {&module_info_gooScolsSlst},
  {&module_info_gooScolsSstr},
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
  {"packing-with", &module_info_gooSpacker, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
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
  {"<map>", &module_info_gooScolsSmap, NULL},
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
  {"packing", &module_info_gooSpacker, NULL},
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
  {"pack-in", &module_info_gooSpacker, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
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
  {"packer-fab", &module_info_gooSpacker, NULL},
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
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
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
  {"packer-res", &module_info_gooSpacker, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"packer", &module_info_gooSpacker, NULL},
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
  {"str-to-num", &module_info_gooScolsSstr, NULL},
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
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
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
  {"str", &module_info_gooScolsSstr, NULL},
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
  {"packing-in", &module_info_gooSpacker, NULL},
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
  {"<packer>", &module_info_gooSpacker, NULL},
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
  {"<bot>", &module_info_gooStypes, NULL},
  {"~", &module_info_gooSmath, NULL},
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
  {"packing-as", &module_info_gooSpacker, NULL},
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
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
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
  {"@idx-setter", CVAR, &YgooScolsStabYOidx_setter},
  {"@fill!", CVAR, &YgooScolsStabYOfillX},
  {"clr!", CVAR, &YgooScolsStabYclrX},
  {"@velt", PVAR, NULL},
  {"@vec", CVAR, &YgooScolsStabYOvec},
  {"@buc-setter", CVAR, &YgooScolsStabYObuc_setter},
  {"$fin-enum", CVAR, &YgooScolsStabYDfin_enum},
  {"fab-tab-vec", CVAR, &YgooScolsStabYfab_tab_vec},
  {"%vector", CVAR, &YgooScolsStabYPvector},
  {"<str-tab>", CVAR, &YgooScolsStabYLstr_tabG},
  {"%bucket-depth", CVAR, &YgooScolsStabYPbucket_depth},
  {"%data", CVAR, &YgooScolsStabYPdata},
  {"%data-setter", CVAR, &YgooScolsStabYPdata_setter},
  {"%count", CVAR, &YgooScolsStabYPcount},
  {"copy-to-new-vector", CVAR, &YgooScolsStabYcopy_to_new_vector},
  {"<set>", CVAR, &YgooScolsStabYLsetG},
  {"%secondary-modulus", CVAR, &YgooScolsStabYPsecondary_modulus},
  {"*twin-primes*", CVAR, &YgooScolsStabYTtwin_primesT},
  {"@idx", CVAR, &YgooScolsStabYOidx},
  {"id-hash", CVAR, &YgooScolsStabYid_hash},
  {"tab-growth-factor", CVAR, &YgooScolsStabYtab_growth_factor},
  {"---main-0---", PVAR, NULL},
  {"tab-hash", CVAR, &YgooScolsStabYtab_hash},
  {"%vacated-setter", CVAR, &YgooScolsStabYPvacated_setter},
  {"@vec-setter", CVAR, &YgooScolsStabYOvec_setter},
  {"---main-1---", PVAR, NULL},
  {"---main-2---", PVAR, NULL},
  {"tab-growth-threshold", CVAR, &YgooScolsStabYtab_growth_threshold},
  {"choose-table-geometry", CVAR, &YgooScolsStabYchoose_table_geometry},
  {"@fin?", CVAR, &YgooScolsStabYOfinQ},
  {"<tab-vec>", CVAR, &YgooScolsStabYLtab_vecG},
  {"%vacated", CVAR, &YgooScolsStabYPvacated},
  {"$vacated-cell-marker", CVAR, &YgooScolsStabYDvacated_cell_marker},
  {"tab-shrink-threshold", CVAR, &YgooScolsStabYtab_shrink_threshold},
  {"rehash-table", CVAR, &YgooScolsStabYrehash_table},
  {"%n-buckets", CVAR, &YgooScolsStabYPn_buckets},
  {"%vector-setter", CVAR, &YgooScolsStabYPvector_setter},
  {"case-insensitive-string-equal", CVAR, &YgooScolsStabYcase_insensitive_string_equal},
  {"rot", CVAR, &YgooScolsStabYrot},
  {"%primary-modulus", CVAR, &YgooScolsStabYPprimary_modulus},
  {"grow-table", CVAR, &YgooScolsStabYgrow_table},
  {"@velt-setter", PVAR, NULL},
  {"*debug-tables?*", CVAR, &YgooScolsStabYTdebug_tablesQT},
  {"@buc", CVAR, &YgooScolsStabYObuc},
  {"$nul-cell-marker", CVAR, &YgooScolsStabYDnul_cell_marker},
  {"%count-setter", CVAR, &YgooScolsStabYPcount_setter},
  {"case-insensitive-string-hash", CVAR, &YgooScolsStabYcase_insensitive_string_hash},
  {"tab-keys", CVAR, &YgooScolsStabYtab_keys},
  {"<tab-enum>", CVAR, &YgooScolsStabYLtab_enumG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<str-tab>", NULL},
  {"<set>", NULL},
  {"<tab>", NULL},
  {"id-hash", NULL},
  {"tab-growth-factor", NULL},
  {"tab-hash", NULL},
  {"tab-growth-threshold", NULL},
  {"tab-shrink-threshold", NULL},
  {"case-insensitive-string-equal", NULL},
  {"case-insensitive-string-hash", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsStab;
MODULE_INFO module_info_gooScolsStab = {
  "goo/cols/tab",
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
extern void load_module_gooSpacker (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSmap (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);
extern void load_module_gooScolsSflat (void);
extern void load_module_gooScolsSrep (void);
extern void load_module_gooScolsStup (void);
extern void load_module_gooScolsSlst (void);
extern void load_module_gooScolsSstr (void);

/* EXPRESSION: */

extern void load_module_gooScolsStab (void);

void load_module_gooScolsStab (void) {
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
  load_module_gooSpacker();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSmap();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();
  load_module_gooScolsSflat();
  load_module_gooScolsSrep();
  load_module_gooScolsStup();
  load_module_gooScolsSlst();
  load_module_gooScolsSstr();

  (P)YgooScolsStabY___main_0___();
  (P)YgooScolsStabY___main_1___();
  (P)YgooScolsStabY___main_2___();

}

/* END OF GENERATED CODE. */
