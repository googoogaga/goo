/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/tab");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/tab */

EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Ylst,"goo/boot","lst");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YgooScolsStabYPcount,"goo/cols/tab","%count");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YgooScolsStabYPbucket_depth,"goo/cols/tab","%bucket-depth");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yfun_src,"goo/boot","fun-src");
DEF(YgooScolsStabYObuc,"goo/cols/tab","@buc");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
DEF(YgooScolsStabYPdata,"goo/cols/tab","%data");
DEF(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
DEF(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
DEF(YgooScolsStabYchoose_table_geometry,"goo/cols/tab","choose-table-geometry");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yhead,"goo/boot","head");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YgooScolsStabYDfin_enum,"goo/cols/tab","$fin-enum");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YgooScolsStabYLtab_enumG,"goo/cols/tab","<tab-enum>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YgooScolsStabYrot,"goo/cols/tab","rot");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YgooScolsStabYclrX,"goo/cols/tab","clr!");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YgooScolsStabYrehash_table,"goo/cols/tab","rehash-table");
DEF(YgooScolsStabYLtab_vecG,"goo/cols/tab","<tab-vec>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YgooScolsStabYPvacated,"goo/cols/tab","%vacated");
EXT(YgooSmathYK,"goo/math","|");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YgooScolsStabYPprimary_modulus_setter,"goo/cols/tab","%primary-modulus-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YgooScolsStabYOfillX,"goo/cols/tab","@fill!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YgooScolsStabYOidx,"goo/cols/tab","@idx");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
DEF(YgooScolsStabYgrow_table,"goo/cols/tab","grow-table");
EXT(YgooSmathYT,"goo/math","*");
DEF(YgooScolsStabYPvector_setter,"goo/cols/tab","%vector-setter");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YgooScolsStabYOfinQ_setter,"goo/cols/tab","@fin?-setter");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YgooScolsStabYDempty_cell_marker,"goo/cols/tab","$empty-cell-marker");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
DEF(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
DEF(YgooScolsStabYPprimary_modulus,"goo/cols/tab","%primary-modulus");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ynul,"goo/boot","nul");
DEF(YgooScolsStabYPsecondary_modulus_setter,"goo/cols/tab","%secondary-modulus-setter");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YgooScolsStabYOidx_setter,"goo/cols/tab","@idx-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYas,"goo/types","as");
DEF(YgooScolsStabYOvec_setter,"goo/cols/tab","@vec-setter");
DEF(YgooScolsStabYObuc_setter,"goo/cols/tab","@buc-setter");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ynil,"goo/boot","nil");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooScolsStabYOfinQ,"goo/cols/tab","@fin?");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
DEF(YgooScolsStabYPvacated_setter,"goo/cols/tab","%vacated-setter");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YgooScolsStabYPsecondary_modulus,"goo/cols/tab","%secondary-modulus");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
DEF(YgooScolsStabYPn_buckets,"goo/cols/tab","%n-buckets");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(YgooScolsStabYTtwin_primesT,"goo/cols/tab","*twin-primes*");
DEF(YgooScolsStabYOvec,"goo/cols/tab","@vec");
DEF(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YisaQ,"goo/boot","isa?");
DEF(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
DEF(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YgooScolsStabYtab_keys,"goo/cols/tab","tab-keys");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
DEF(YgooScolsStabYPvector,"goo/cols/tab","%vector");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yclone,"goo/boot","clone");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
DEF(YgooScolsStabYPn_buckets_setter,"goo/cols/tab","%n-buckets-setter");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YgooScolsStabYfab_tab_vec,"goo/cols/tab","fab-tab-vec");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYB,"goo/math","&");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(YgooScolsStabYPcount_setter,"goo/cols/tab","%count-setter");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YgooScolsStabYPbucket_depth_setter,"goo/cols/tab","%bucket-depth-setter");
DEF(YgooScolsStabYDvacated_cell_marker,"goo/cols/tab","$vacated-cell-marker");
DEF(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"goo/boot","<int>");
DEF(YgooScolsStabYPdata_setter,"goo/cols/tab","%data-setter");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YgooScolsStabYcopy_to_new_vector,"goo/cols/tab","copy-to-new-vector");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YgooScolsStabYTdebug_tablesQT,"goo/cols/tab","*debug-tables?*");
EXT(YLproductG,"goo/boot","<product>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_39);
DEFLIT(lit_184);
DEFLIT(lit_67);
DEFLIT(lit_27);
DEFLIT(lit_130);
DEFLIT(lit_181);
DEFLIT(lit_62);
DEFLIT(lit_150);
DEFLIT(lit_49);
DEFLIT(lit_76);
DEFLIT(lit_37);
DEFLIT(lit_109);
DEFLIT(lit_131);
DEFLIT(lit_57);
DEFLIT(lit_13);
DEFLIT(lit_56);
DEFLIT(lit_152);
DEFLIT(lit_172);
DEFLIT(lit_151);
DEFLIT(lit_44);
DEFLIT(lit_170);
DEFLIT(lit_168);
DEFLIT(lit_83);
DEFLIT(lit_123);
DEFLIT(lit_59);
DEFLIT(lit_28);
DEFLIT(lit_6);
DEFLIT(lit_101);
DEFLIT(lit_53);
DEFLIT(lit_107);
DEFLIT(lit_149);
DEFLIT(lit_52);
DEFLIT(lit_96);
DEFLIT(lit_7);
DEFLIT(lit_32);
DEFLIT(lit_106);
DEFLIT(lit_34);
DEFLIT(lit_51);
DEFLIT(lit_46);
DEFLIT(lit_161);
DEFLIT(lit_85);
DEFLIT(lit_115);
DEFLIT(lit_21);
DEFLIT(lit_98);
DEFLIT(lit_167);
DEFLIT(lit_29);
DEFLIT(lit_148);
DEFLIT(lit_40);
DEFLIT(lit_136);
DEFLIT(lit_5);
DEFLIT(lit_81);
DEFLIT(lit_4);
DEFLIT(lit_125);
DEFLIT(lit_162);
DEFLIT(lit_103);
DEFLIT(lit_94);
DEFLIT(lit_19);
DEFLIT(lit_163);
DEFLIT(lit_105);
DEFLIT(lit_141);
DEFLIT(lit_11);
DEFLIT(lit_1);
DEFLIT(lit_33);
DEFLIT(lit_91);
DEFLIT(lit_142);
DEFLIT(lit_93);
DEFLIT(lit_75);
DEFLIT(lit_178);
DEFLIT(lit_80);
DEFLIT(lit_50);
DEFLIT(lit_100);
DEFLIT(lit_88);
DEFLIT(lit_20);
DEFLIT(lit_8);
DEFLIT(lit_9);
DEFLIT(lit_66);
DEFLIT(lit_129);
DEFLIT(lit_55);
DEFLIT(lit_143);
DEFLIT(lit_104);
DEFLIT(lit_137);
DEFLIT(lit_16);
DEFLIT(lit_92);
DEFLIT(lit_128);
DEFLIT(lit_159);
DEFLIT(lit_82);
DEFLIT(lit_116);
DEFLIT(lit_180);
DEFLIT(lit_69);
DEFLIT(lit_3);
DEFLIT(lit_42);
DEFLIT(lit_182);
DEFLIT(lit_173);
DEFLIT(lit_127);
DEFLIT(lit_89);
DEFLIT(lit_86);
DEFLIT(lit_165);
DEFLIT(lit_71);
DEFLIT(lit_25);
DEFLIT(lit_119);
DEFLIT(lit_31);
DEFLIT(lit_26);
DEFLIT(lit_47);
DEFLIT(lit_0);
DEFLIT(lit_176);
DEFLIT(lit_95);
DEFLIT(lit_36);
DEFLIT(lit_113);
DEFLIT(lit_146);
DEFLIT(lit_153);
DEFLIT(lit_175);
DEFLIT(lit_73);
DEFLIT(lit_166);
DEFLIT(lit_158);
DEFLIT(lit_183);
DEFLIT(lit_157);
DEFLIT(lit_60);
DEFLIT(lit_122);
DEFLIT(lit_38);
DEFLIT(lit_79);
DEFLIT(lit_160);
DEFLIT(lit_154);
DEFLIT(lit_35);
DEFLIT(lit_65);
DEFLIT(lit_18);
DEFLIT(lit_68);
DEFLIT(lit_117);
DEFLIT(lit_64);
DEFLIT(lit_72);
DEFLIT(lit_12);
DEFLIT(lit_15);
DEFLIT(lit_164);
DEFLIT(lit_17);
DEFLIT(lit_171);
DEFLIT(lit_124);
DEFLIT(lit_2);
DEFLIT(lit_177);
DEFLIT(lit_58);
DEFLIT(lit_97);
DEFLIT(lit_102);
DEFLIT(lit_133);
DEFLIT(lit_147);
DEFLIT(lit_74);
DEFLIT(lit_22);
DEFLIT(lit_70);
DEFLIT(lit_118);
DEFLIT(lit_120);
DEFLIT(lit_14);
DEFLIT(lit_84);
DEFLIT(lit_30);
DEFLIT(lit_43);
DEFLIT(lit_112);
DEFLIT(lit_61);
DEFLIT(lit_135);
DEFLIT(lit_48);
DEFLIT(lit_111);
DEFLIT(lit_121);
DEFLIT(lit_114);
DEFLIT(lit_169);
DEFLIT(lit_23);
DEFLIT(lit_179);
DEFLIT(lit_87);
DEFLIT(lit_77);
DEFLIT(lit_138);
DEFLIT(lit_78);
DEFLIT(lit_41);
DEFLIT(lit_63);
DEFLIT(lit_108);
DEFLIT(lit_139);
DEFLIT(lit_110);
DEFLIT(lit_134);
DEFLIT(lit_140);
DEFLIT(lit_24);
DEFLIT(lit_45);
DEFLIT(lit_174);
DEFLIT(lit_145);
DEFLIT(lit_185);
DEFLIT(lit_54);
DEFLIT(lit_156);
DEFLIT(lit_126);
DEFLIT(lit_155);
DEFLIT(lit_132);
DEFLIT(lit_144);
DEFLIT(lit_90);
DEFLIT(lit_99);
DEFLIT(lit_10);

/* FUNCTIONS: */

LOCFOR(fun_tab_growth_factor_0);
LOCFOR(fun_tab_growth_factor_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_tab_growth_threshold_3);
LOCFOR(fun_tab_growth_threshold_setter_4);
LOCFOR(fun_5);
LOCFOR(fun_tab_shrink_threshold_6);
LOCFOR(fun_tab_shrink_threshold_setter_7);
LOCFOR(fun_8);
LOCFOR(fun_Pvacated_9);
LOCFOR(fun_Pvacated_setter_10);
LOCFOR(fun_11);
LOCFOR(fun_Pprimary_modulus_12);
LOCFOR(fun_Pprimary_modulus_setter_13);
LOCFOR(fun_Psecondary_modulus_14);
LOCFOR(fun_Psecondary_modulus_setter_15);
LOCFOR(fun_Pn_buckets_16);
LOCFOR(fun_Pn_buckets_setter_17);
LOCFOR(fun_Pbucket_depth_18);
LOCFOR(fun_Pbucket_depth_setter_19);
LOCFOR(fun_Pdata_20);
LOCFOR(fun_Pdata_setter_21);
LOCFOR(fun_Pcount_22);
LOCFOR(fun_Pcount_setter_23);
LOCFOR(fun_24);
LOCFOR(fun_Pvector_25);
LOCFOR(fun_Pvector_setter_26);
FUNFOR(YgooScolsStabYfab_tab_vec);
FUNFOR(YgooScolsStabYOfillX);
extern P YgooScolsStabYOelt (P,P);
extern P YgooScolsStabYOelt_setter (P,P,P);
LOCFOR(fun_clrX_31);
LOCFOR(fun_key_test_32);
LOCFOR(fun_tab_hash_33);
LOCFOR(fun_fab_34);
LOCFOR(fun_inner_35);
LOCFOR(fun_outer_36);
LOCFOR(fun_elt_or_37);
LOCFOR(fun_inner_38);
LOCFOR(fun_outer_39);
LOCFOR(fun_elt_setter_40);
LOCFOR(fun_del_41);
LOCFOR(fun_inner_42);
LOCFOR(fun_outer_43);
LOCFOR(fun_delX_44);
LOCFOR(fun_inner_45);
LOCFOR(fun_outer_46);
LOCFOR(fun_do_keyed_47);
LOCFOR(fun_inner_48);
LOCFOR(fun_outer_49);
LOCFOR(fun_do_50);
LOCFOR(fun_zapX_51);
LOCFOR(fun_len_52);
LOCFOR(fun_Ovec_53);
LOCFOR(fun_Ovec_setter_54);
LOCFOR(fun_Obuc_55);
LOCFOR(fun_Obuc_setter_56);
LOCFOR(fun_Oidx_57);
LOCFOR(fun_Oidx_setter_58);
LOCFOR(fun_OfinQ_59);
LOCFOR(fun_OfinQ_setter_60);
LOCFOR(fun_61);
LOCFOR(fun_inner_62);
LOCFOR(fun_outer_63);
LOCFOR(fun_enum_64);
LOCFOR(fun_inner_65);
LOCFOR(fun_outer_66);
LOCFOR(fun_nxt_67);
LOCFOR(fun_finQ_68);
LOCFOR(fun_now_key_69);
LOCFOR(fun_now_70);
LOCFOR(fun_now_setter_71);
LOCFOR(fun_72);
LOCFOR(fun_tab_keys_73);
LOCFOR(fun_grow_table_74);
LOCFOR(fun_rehash_table_75);
LOCFOR(fun_76);
LOCFOR(fun_77);
FUNFOR(YgooScolsStabYchoose_table_geometry);
LOCFOR(fun_inner_79);
LOCFOR(fun_outer_80);
LOCFOR(fun_81);
LOCFOR(fun_copy_to_new_vector_82);
LOCFOR(fun_id_hash_83);
LOCFOR(fun_id_hash_84);
FUNFOR(YgooScolsStabYrot);
LOCFOR(fun_id_hash_86);
LOCFOR(fun_id_hash_87);
LOCFOR(fun_id_hash_88);
LOCFOR(fun_loop_89);
LOCFOR(fun_id_hash_90);
LOCFOR(fun_key_type_91);
LOCFOR(fun_elt_type_92);
LOCFOR(fun_loop_93);
FUNFOR(YgooScolsStabYcase_insensitive_string_hash);
LOCFOR(fun_loop_95);
FUNFOR(YgooScolsStabYcase_insensitive_string_equal);
LOCFOR(fun_key_test_97);
LOCFOR(fun_tab_hash_98);
LOCFOR(fun_addX_99);
LOCFOR(fun_memQ_100);
LOCFOR(fun_101);
LOCFOR(fun_elts_102);
extern P YgooScolsStabY___main_0___ ();
extern P YgooScolsStabY___main_1___ ();
extern P YgooScolsStabY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_tab_growth_factor_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYtab_growth_factor));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_tab_growth_factor_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYtab_growth_factor));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_7));
}

FUNCODEDEF(fun_tab_growth_threshold_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYtab_growth_threshold));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_tab_growth_threshold_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYtab_growth_threshold));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_13));
}

FUNCODEDEF(fun_tab_shrink_threshold_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYtab_shrink_threshold));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_tab_shrink_threshold_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYtab_shrink_threshold));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_19));
}

FUNCODEDEF(fun_Pvacated_9) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYPvacated));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pvacated_setter_10) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPvacated));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_Pprimary_modulus_12) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYPprimary_modulus));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pprimary_modulus_setter_13) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPprimary_modulus));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Psecondary_modulus_14) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYPsecondary_modulus));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Psecondary_modulus_setter_15) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPsecondary_modulus));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pn_buckets_16) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYPn_buckets));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pn_buckets_setter_17) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPn_buckets));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pbucket_depth_18) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYPbucket_depth));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pbucket_depth_setter_19) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPbucket_depth));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdata_20) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYPdata));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdata_setter_21) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPdata));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pcount_22) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYPcount));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pcount_setter_23) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPcount));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_Pvector_25) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYPvector));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pvector_setter_26) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPvector));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsStabYfab_tab_vec) {
  P size_,fill_value_,n_buckets_,bucket_depth_,primary_modulus_,secondary_modulus_;
  P vF2100;
  P T0,T1,T2;
  P a1,a2,a3,a4,a5,a6;
LINK_STACK();
  ARG(size_, 0);
  ARG(fill_value_, 1);
  ARG(n_buckets_, 2);
  ARG(bucket_depth_, 3);
  ARG(primary_modulus_, 4);
  ARG(secondary_modulus_, 5);
loop:
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPn_buckets),n_buckets_,VARREF(YgooScolsStabYPbucket_depth),bucket_depth_,VARREF(YgooScolsStabYPprimary_modulus),primary_modulus_,VARREF(YgooScolsStabYPsecondary_modulus),secondary_modulus_);
  vF2100 = T1;
  T2 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),size_,fill_value_);
  CALL2(1,VARREF(YgooScolsStabYPdata_setter),T2,vF2100);
  T0 = vF2100;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsStabYOfillX) {
  P x_,fill_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(fill_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYPdata),x_);
  T0 = CALL2(1,VARREF(YgooScolsSrepYrep_fillX),T1,fill_);
UNLINK_STACK();
  QRET(T0);
}

P YgooScolsStabYOelt(P vector_,P index_) {
  P xF2102;
  P xF2101;
  P T0,T1,T2,T3,T4;
  P a1,a2;
DEFCREGS();
loop:
  T1 = XCALL1(1,VARREF(YgooScolsStabYPdata),vector_);
  xF2101 = index_;
  xF2102 = xF2101;
  T4 = (P)YPiGG(xF2102,(P)2);
  T3 = T4;
  T2 = T3;
  T0 = (P)YPrelt(T1,T2);
  return T0;
}

P YgooScolsStabYOelt_setter(P new_value_,P vector_,P index_) {
  P xF2104;
  P xF2103;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
DEFCREGS();
loop:
  T1 = XCALL1(1,VARREF(YgooScolsStabYPdata),vector_);
  xF2103 = index_;
  xF2104 = xF2103;
  T4 = (P)YPiGG(xF2104,(P)2);
  T3 = T4;
  T2 = T3;
  T0 = (P)YPrelt_setter(new_value_,T1,T2);
  return T0;
}

FUNCODEDEF(fun_clrX_31) {
  P vector_,fill_value_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(vector_, 0);
  ARG(fill_value_, 1);
loop:
  CALL2(1,VARREF(YgooScolsStabYOfillX),vector_,fill_value_);
  T0 = CALL2(1,VARREF(YgooScolsStabYPvacated_setter),YPint((P)0),vector_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_key_test_32) {
  P U_;
  P a1;
LINK_STACK();
  ARG(U_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YgooSmacrosYEE));
}

FUNCODEDEF(fun_tab_hash_33) {
  P U_;
  P a1;
LINK_STACK();
  ARG(U_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YgooScolsStabYid_hash));
}

FUNCODEDEF(fun_fab_34) {
  P type_,size_;
  P tableF2108;
  P bucket_depthF2107;
  P n_bucketsF2106;
  P tup24F2105;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(size_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYchoose_table_geometry),size_);
  tup24F2105 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup24F2105,YPint((P)0));
  n_bucketsF2106 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup24F2105,YPint((P)1));
  bucket_depthF2107 = T5;
  T7 = CALL1(1,VARREF(Ynew),type_);
  tableF2108 = T7;
  T10 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF2107,YPint((P)2));
  T9 = CALL2(1,VARREF(YgooSmathYT),n_bucketsF2106,T10);
  T11 = CALL2(1,VARREF(YgooSmathY_),n_bucketsF2106,YPint((P)2));
  T8 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T9,VARREF(YgooScolsStabYDempty_cell_marker),n_bucketsF2106,bucket_depthF2107,n_bucketsF2106,T11);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),T8,tableF2108);
  T6 = tableF2108;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_inner_35) {
  P i_,raw_index_;
  P this_keyF2109;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(raw_index_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = (P)YgooScolsStabYOelt(FREEREF(1),raw_index_);
    this_keyF2109 = T3;
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF2109,VARREF(YgooScolsStabYDempty_cell_marker));
    if (T5 != YPfalse) {
      T4 = FREEREF(2);
    } else {
      T7 = CALL2(1,FREEREF(4),FREEREF(3),this_keyF2109);
      if (T7 != YPfalse) {
        T9 = CALL2(1,VARREF(YgooSmathYA),raw_index_,FREEREF(0));
        T8 = (P)YgooScolsStabYOelt(FREEREF(1),T9);
        T6 = T8;
      } else {
        if (YPtrue != YPfalse) {
          T12 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
          T13 = CALL2(1,VARREF(YgooSmathYA),raw_index_,YPint((P)1));
          a1 = T12;
          a2 = T13;
          i_ = a1;
          raw_index_ = a2;
          goto loop;
          T10 = T11;
        } else {
          T10 = YPfalse;
        }
        T6 = T10;
      }
      T4 = T6;
    }
    T2 = T4;
    T0 = T2;
  } else {
    T15 = CALL3(1,VARREF(YgooSmathYmod_),FREEREF(6),FREEREF(7),FREEREF(8));
    T16 = CALL2(1,VARREF(YgooSmathYA),FREEREF(9),YPint((P)1));
    T14 = CALL2(0,FREEREF(10),T15,T16);
    T0 = T14;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_36) {
  P bucket_index_,probes_;
  P innerF2111;
  P indexF2110;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(bucket_index_, 0);
  ARG(probes_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),probes_,FREEREF(0));
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmathYT),FREEREF(1),YPint((P)2));
    T3 = CALL2(1,VARREF(YgooSmathYT),bucket_index_,T4);
    indexF2110 = T3;
    T6 = FUNSHELL(1,fun_inner_35,11);
    innerF2111 = T6;
    FUNINIT(innerF2111, 11,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),innerF2111,bucket_index_,FREEREF(6),FREEREF(0),probes_,FREEREF(7));
    T7 = CALL2(0,innerF2111,YPint((P)0),indexF2110);
    T5 = T7;
    T2 = T5;
    T0 = T2;
  } else {
    T8 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_80));
    T0 = T8;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_or_37) {
  P table_,key_,default_;
  P outerF2119;
  P bucket_offsetF2118;
  P bucket_indexF2117;
  P hashF2116;
  P bucket_depthF2115;
  P n_bucketsF2114;
  P vectorF2113;
  P test_functionF2112;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2,a3;
LINK_STACK();
  ARG(table_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF2112 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2113 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2113);
  n_bucketsF2114 = T5;
  T7 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2113);
  bucket_depthF2115 = T7;
  T10 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T9 = CALL1(1,T10,key_);
  check_type(T9,VARREF(YLintG));
  hashF2116 = T9;
  T13 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF2113);
  T12 = CALL2(1,VARREF(YgooSmathYmod),hashF2116,T13);
  bucket_indexF2117 = T12;
  T17 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF2113);
  T16 = CALL2(1,VARREF(YgooSmathYmod),hashF2116,T17);
  T15 = CALL2(1,VARREF(YgooSmathYA),T16,YPint((P)1));
  bucket_offsetF2118 = T15;
  T19 = FUNSHELL(1,fun_outer_36,8);
  outerF2119 = T19;
  FUNINIT(outerF2119, 8,n_bucketsF2114,bucket_depthF2115,vectorF2113,default_,key_,test_functionF2112,bucket_offsetF2118,outerF2119);
  T20 = CALL2(0,outerF2119,bucket_indexF2117,YPint((P)0));
  T18 = T20;
  T14 = T18;
  T11 = T14;
  T8 = T11;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_38) {
  P vacancy_index_,i_,raw_index_;
  P tmpF2124;
  P x_1369F2123;
  P indexF2122;
  P x_1370F2121;
  P this_keyF2120;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
  P a1,a2,a3;
LINK_STACK();
  ARG(vacancy_index_, 0);
  ARG(i_, 1);
  ARG(raw_index_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T4 = BOXVAL(FREEREF(1));
    T3 = (P)YgooScolsStabYOelt(T4,raw_index_);
    this_keyF2120 = T3;
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF2120,VARREF(YgooScolsStabYDempty_cell_marker));
    if (T6 != YPfalse) {
      if (vacancy_index_ != YPfalse) {
        T9 = BOXVAL(FREEREF(1));
        x_1370F2121 = T9;
        T12 = CALL1(1,VARREF(YgooScolsStabYPvacated),x_1370F2121);
        T11 = CALL2(1,VARREF(YgooSmathY_),T12,YPint((P)1));
        T10 = CALL2(1,VARREF(YgooScolsStabYPvacated_setter),T11,x_1370F2121);
        T8 = vacancy_index_;
      } else {
        T8 = raw_index_;
      }
      indexF2122 = T8;
      T13 = BOXVAL(FREEREF(1));
      (P)YgooScolsStabYOelt_setter(FREEREF(2),T13,indexF2122);
      T14 = BOXVAL(FREEREF(1));
      T15 = CALL2(1,VARREF(YgooSmathYA),indexF2122,FREEREF(0));
      (P)YgooScolsStabYOelt_setter(FREEREF(3),T14,T15);
      x_1369F2123 = FREEREF(4);
      T18 = CALL1(1,VARREF(YgooScolsStabYPcount),x_1369F2123);
      T17 = CALL2(1,VARREF(YgooSmathYA),T18,YPint((P)1));
      T16 = CALL2(1,VARREF(YgooScolsStabYPcount_setter),T17,x_1369F2123);
      T7 = FREEREF(3);
      T5 = T7;
    } else {
      T20 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF2120,VARREF(YgooScolsStabYDvacated_cell_marker));
      if (T20 != YPfalse) {
        tmpF2124 = vacancy_index_;
        if (tmpF2124 != YPfalse) {
          T23 = tmpF2124;
        } else {
          T23 = raw_index_;
        }
        T22 = T23;
        T24 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
        T25 = CALL2(1,VARREF(YgooSmathYA),raw_index_,YPint((P)1));
        a1 = T22;
        a2 = T24;
        a3 = T25;
        vacancy_index_ = a1;
        i_ = a2;
        raw_index_ = a3;
        goto loop;
        T19 = T21;
      } else {
        T27 = CALL2(1,FREEREF(6),FREEREF(2),this_keyF2120);
        if (T27 != YPfalse) {
          T28 = BOXVAL(FREEREF(1));
          T29 = CALL2(1,VARREF(YgooSmathYA),raw_index_,FREEREF(0));
          (P)YgooScolsStabYOelt_setter(FREEREF(3),T28,T29);
          T26 = FREEREF(3);
        } else {
          if (YPtrue != YPfalse) {
            T32 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
            T33 = CALL2(1,VARREF(YgooSmathYA),raw_index_,YPint((P)1));
            a1 = vacancy_index_;
            a2 = T32;
            a3 = T33;
            vacancy_index_ = a1;
            i_ = a2;
            raw_index_ = a3;
            goto loop;
            T30 = T31;
          } else {
            T30 = YPfalse;
          }
          T26 = T30;
        }
        T19 = T26;
      }
      T5 = T19;
    }
    T2 = T5;
    T0 = T2;
  } else {
    T35 = CALL3(1,VARREF(YgooSmathYmod_),FREEREF(7),FREEREF(8),FREEREF(9));
    T36 = CALL2(1,VARREF(YgooSmathYA),FREEREF(10),YPint((P)1));
    T34 = CALL2(1,FREEREF(11),T35,T36);
    T0 = T34;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_39) {
  P bucket_index_,probes_;
  P innerF2126;
  P indexF2125;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(bucket_index_, 0);
  ARG(probes_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),probes_,FREEREF(0));
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmathYT),FREEREF(1),YPint((P)2));
    T3 = CALL2(1,VARREF(YgooSmathYT),bucket_index_,T4);
    indexF2125 = T3;
    T6 = FUNSHELL(1,fun_inner_38,12);
    innerF2126 = T6;
    FUNINIT(innerF2126, 12,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),innerF2126,FREEREF(6),bucket_index_,FREEREF(7),FREEREF(0),probes_,FREEREF(8));
    T7 = CALL3(1,innerF2126,YPfalse,YPint((P)0),indexF2125);
    T5 = T7;
    T2 = T5;
    T0 = T2;
  } else {
    T8 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_85));
    T0 = T8;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_40) {
  P value_,table_,key_;
  P outerF2134;
  P bucket_offsetF2133;
  P bucket_indexF2132;
  P hashF2131;
  P n_bucketsF2130;
  P bucket_depthF2129;
  P test_functionF2128;
  P vectorF2127;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53;
  P a1,a2,a3;
LINK_STACK();
  ARG(value_, 0);
  ARG(table_, 1);
  ARG(key_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2127 = T1;
  vectorF2127 = BOXFAB(vectorF2127);
  T4 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
  T8 = BOXVAL(vectorF2127);
  T7 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T8);
  T10 = BOXVAL(vectorF2127);
  T9 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T10);
  T6 = CALL2(1,VARREF(YgooSmathYT),T7,T9);
  T11 = CALL1(1,VARREF(YgooScolsStabYtab_growth_threshold),table_);
  T5 = CALL2(1,VARREF(YgooSmathYT),T6,T11);
  T3 = CALL2(1,VARREF(YgooSmagYGE),T4,T5);
  if (T3 != YPfalse) {
    T14 = CALL1(1,VARREF(YgooScolsStabYgrow_table),table_);
    T13 = CALL1(1,VARREF(YgooScolsStabYPvector),T14);
    T12 = BOXVAL(vectorF2127) = T13;
  } else {
    T18 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
    T20 = BOXVAL(vectorF2127);
    T19 = CALL1(1,VARREF(YgooScolsStabYPvacated),T20);
    T17 = CALL2(1,VARREF(YgooSmathYA),T18,T19);
    T24 = BOXVAL(vectorF2127);
    T23 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T24);
    T26 = BOXVAL(vectorF2127);
    T25 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T26);
    T22 = CALL2(1,VARREF(YgooSmathYT),T23,T25);
    T27 = CALL1(1,VARREF(YgooScolsStabYtab_growth_threshold),table_);
    T21 = CALL2(1,VARREF(YgooSmathYT),T22,T27);
    T16 = CALL2(1,VARREF(YgooSmagYG),T17,T21);
    if (T16 != YPfalse) {
      T30 = CALL1(1,VARREF(YgooScolsStabYrehash_table),table_);
      T29 = CALL1(1,VARREF(YgooScolsStabYPvector),T30);
      T28 = BOXVAL(vectorF2127) = T29;
      T15 = T28;
    } else {
      T15 = YPfalse;
    }
  }
  T32 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF2128 = T32;
  T35 = BOXVAL(vectorF2127);
  T34 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T35);
  bucket_depthF2129 = T34;
  T38 = BOXVAL(vectorF2127);
  T37 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T38);
  n_bucketsF2130 = T37;
  T41 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T40 = CALL1(1,T41,key_);
  check_type(T40,VARREF(YLintG));
  hashF2131 = T40;
  T45 = BOXVAL(vectorF2127);
  T44 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),T45);
  T43 = CALL2(1,VARREF(YgooSmathYmod),hashF2131,T44);
  bucket_indexF2132 = T43;
  T50 = BOXVAL(vectorF2127);
  T49 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),T50);
  T48 = CALL2(1,VARREF(YgooSmathYmod),hashF2131,T49);
  T47 = CALL2(1,VARREF(YgooSmathYA),T48,YPint((P)1));
  bucket_offsetF2133 = T47;
  T52 = FUNSHELL(1,fun_outer_39,9);
  outerF2134 = T52;
  FUNINIT(outerF2134, 9,n_bucketsF2130,bucket_depthF2129,vectorF2127,key_,value_,table_,test_functionF2128,bucket_offsetF2133,outerF2134);
  T53 = CALL2(1,outerF2134,bucket_indexF2132,YPint((P)0));
  T51 = T53;
  T46 = T51;
  T42 = T46;
  T39 = T42;
  T36 = T39;
  T33 = T36;
  T31 = T33;
  T0 = T31;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_41) {
  P x_,key_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYdup),x_);
  T0 = CALL2(1,VARREF(YgooScolsScolxYdelX),T1,key_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_inner_42) {
  P i_,raw_index_;
  P x_1372F2138;
  P x_1371F2137;
  P tmpF2136;
  P this_keyF2135;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(raw_index_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = (P)YgooScolsStabYOelt(FREEREF(1),raw_index_);
    this_keyF2135 = T3;
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF2135,VARREF(YgooScolsStabYDempty_cell_marker));
    if (T5 != YPfalse) {
      T4 = YPfalse;
    } else {
      T8 = CALL2(1,VARREF(YgooSmathYNEE),this_keyF2135,VARREF(YgooScolsStabYDvacated_cell_marker));
      tmpF2136 = T8;
      if (tmpF2136 != YPfalse) {
        T10 = CALL2(1,FREEREF(3),FREEREF(2),this_keyF2135);
        T9 = T10;
      } else {
        T9 = YPfalse;
      }
      T7 = T9;
      if (T7 != YPfalse) {
        (P)YgooScolsStabYOelt_setter(VARREF(YgooScolsStabYDvacated_cell_marker),FREEREF(1),raw_index_);
        x_1371F2137 = FREEREF(4);
        T13 = CALL1(1,VARREF(YgooScolsStabYPcount),x_1371F2137);
        T12 = CALL2(1,VARREF(YgooSmathY_),T13,YPint((P)1));
        T11 = CALL2(1,VARREF(YgooScolsStabYPcount_setter),T12,x_1371F2137);
        x_1372F2138 = FREEREF(1);
        T16 = CALL1(1,VARREF(YgooScolsStabYPvacated),x_1372F2138);
        T15 = CALL2(1,VARREF(YgooSmathYA),T16,YPint((P)1));
        T14 = CALL2(1,VARREF(YgooScolsStabYPvacated_setter),T15,x_1372F2138);
        T6 = YPtrue;
      } else {
        if (YPtrue != YPfalse) {
          T19 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
          T20 = CALL2(1,VARREF(YgooSmathYA),raw_index_,YPint((P)1));
          a1 = T19;
          a2 = T20;
          i_ = a1;
          raw_index_ = a2;
          goto loop;
          T17 = T18;
        } else {
          T17 = YPfalse;
        }
        T6 = T17;
      }
      T4 = T6;
    }
    T2 = T4;
    T0 = T2;
  } else {
    T22 = CALL3(1,VARREF(YgooSmathYmod_),FREEREF(6),FREEREF(7),FREEREF(8));
    T23 = CALL2(1,VARREF(YgooSmathYA),FREEREF(9),YPint((P)1));
    T21 = CALL2(1,FREEREF(10),T22,T23);
    T0 = T21;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_43) {
  P bucket_index_,probes_;
  P innerF2140;
  P indexF2139;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(bucket_index_, 0);
  ARG(probes_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),probes_,FREEREF(0));
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmathYT),FREEREF(1),YPint((P)2));
    T3 = CALL2(1,VARREF(YgooSmathYT),bucket_index_,T4);
    check_type(T3,VARREF(YLintG));
    indexF2139 = T3;
    T6 = FUNSHELL(1,fun_inner_42,11);
    innerF2140 = T6;
    FUNINIT(innerF2140, 11,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),innerF2140,bucket_index_,FREEREF(6),FREEREF(0),probes_,FREEREF(7));
    T7 = CALL2(1,innerF2140,YPint((P)0),indexF2139);
    T5 = T7;
    T2 = T5;
    T0 = T2;
  } else {
    T8 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_92));
    T0 = T8;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_delX_44) {
  P table_,key_;
  P outerF2148;
  P bucket_offsetF2147;
  P bucket_indexF2146;
  P hashF2145;
  P bucket_depthF2144;
  P n_bucketsF2143;
  P vectorF2142;
  P test_functionF2141;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(table_, 0);
  ARG(key_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF2141 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2142 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2142);
  n_bucketsF2143 = T5;
  T7 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2142);
  bucket_depthF2144 = T7;
  T10 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T9 = CALL1(1,T10,key_);
  check_type(T9,VARREF(YLintG));
  hashF2145 = T9;
  T13 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF2142);
  T12 = CALL2(1,VARREF(YgooSmathYmod),hashF2145,T13);
  bucket_indexF2146 = T12;
  T17 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF2142);
  T16 = CALL2(1,VARREF(YgooSmathYmod),hashF2145,T17);
  T15 = CALL2(1,VARREF(YgooSmathYA),T16,YPint((P)1));
  bucket_offsetF2147 = T15;
  T18 = FUNSHELL(1,fun_outer_43,8);
  outerF2148 = T18;
  FUNINIT(outerF2148, 8,n_bucketsF2143,bucket_depthF2144,vectorF2142,key_,test_functionF2141,table_,bucket_offsetF2147,outerF2148);
  T19 = CALL2(1,outerF2148,bucket_indexF2146,YPint((P)0));
  T14 = table_;
  T11 = T14;
  T8 = T11;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_inner_45) {
  P i_;
  P indexF2151;
  P tmpF2150;
  P keyF2149;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathYT),FREEREF(0),YPint((P)2));
    T5 = CALL2(1,VARREF(YgooSmathYT),FREEREF(2),T6);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,T5);
    T3 = (P)YgooScolsStabYOelt(FREEREF(1),T4);
    keyF2149 = T3;
    T9 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2149,VARREF(YgooScolsStabYDempty_cell_marker));
    tmpF2150 = T9;
    if (tmpF2150 != YPfalse) {
      T10 = tmpF2150;
    } else {
      T11 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2149,VARREF(YgooScolsStabYDvacated_cell_marker));
      T10 = T11;
    }
    T8 = T10;
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSmathYT),FREEREF(0),YPint((P)2));
      T15 = CALL2(1,VARREF(YgooSmathYT),FREEREF(2),T16);
      T14 = CALL2(1,VARREF(YgooSmathYA),T15,FREEREF(0));
      T13 = CALL2(1,VARREF(YgooSmathYA),i_,T14);
      indexF2151 = T13;
      T18 = (P)YgooScolsStabYOelt(FREEREF(1),indexF2151);
      T17 = CALL2(1,FREEREF(3),keyF2149,T18);
      T12 = T17;
    } else {
    }
    T20 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T20;
    i_ = a1;
    goto loop;
    T2 = T19;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_46) {
  P b_;
  P innerF2152;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),b_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = FUNSHELL(1,fun_inner_45,5);
    innerF2152 = T2;
    FUNINIT(innerF2152, 5,FREEREF(1),FREEREF(2),b_,FREEREF(3),innerF2152);
    T3 = CALL1(1,innerF2152,YPint((P)0));
    T5 = CALL2(1,VARREF(YgooSmathYA),b_,YPint((P)1));
    a1 = T5;
    b_ = a1;
    goto loop;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_keyed_47) {
  P function_,table_;
  P outerF2156;
  P depthF2155;
  P n_bucketsF2154;
  P vectorF2153;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(function_, 0);
  ARG(table_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2153 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2153);
  n_bucketsF2154 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2153);
  depthF2155 = T5;
  T7 = FUNSHELL(1,fun_outer_46,5);
  outerF2156 = T7;
  FUNINIT(outerF2156, 5,n_bucketsF2154,depthF2155,vectorF2153,function_,outerF2156);
  T8 = CALL1(1,outerF2156,YPint((P)0));
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_48) {
  P i_;
  P indexF2159;
  P tmpF2158;
  P keyF2157;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathYT),FREEREF(0),YPint((P)2));
    T5 = CALL2(1,VARREF(YgooSmathYT),FREEREF(2),T6);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,T5);
    T3 = (P)YgooScolsStabYOelt(FREEREF(1),T4);
    keyF2157 = T3;
    T9 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2157,VARREF(YgooScolsStabYDempty_cell_marker));
    tmpF2158 = T9;
    if (tmpF2158 != YPfalse) {
      T10 = tmpF2158;
    } else {
      T11 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2157,VARREF(YgooScolsStabYDvacated_cell_marker));
      T10 = T11;
    }
    T8 = T10;
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSmathYT),FREEREF(0),YPint((P)2));
      T15 = CALL2(1,VARREF(YgooSmathYT),FREEREF(2),T16);
      T14 = CALL2(1,VARREF(YgooSmathYA),T15,FREEREF(0));
      T13 = CALL2(1,VARREF(YgooSmathYA),i_,T14);
      indexF2159 = T13;
      T18 = (P)YgooScolsStabYOelt(FREEREF(1),indexF2159);
      T17 = CALL1(1,FREEREF(3),T18);
      T12 = T17;
    } else {
    }
    T20 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T20;
    i_ = a1;
    goto loop;
    T2 = T19;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_49) {
  P b_;
  P innerF2160;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),b_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = FUNSHELL(1,fun_inner_48,5);
    innerF2160 = T2;
    FUNINIT(innerF2160, 5,FREEREF(1),FREEREF(2),b_,FREEREF(3),innerF2160);
    T3 = CALL1(1,innerF2160,YPint((P)0));
    T5 = CALL2(1,VARREF(YgooSmathYA),b_,YPint((P)1));
    a1 = T5;
    b_ = a1;
    goto loop;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_50) {
  P function_,table_;
  P outerF2164;
  P depthF2163;
  P n_bucketsF2162;
  P vectorF2161;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(function_, 0);
  ARG(table_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2161 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2161);
  n_bucketsF2162 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2161);
  depthF2163 = T5;
  T7 = FUNSHELL(1,fun_outer_49,5);
  outerF2164 = T7;
  FUNINIT(outerF2164, 5,n_bucketsF2162,depthF2163,vectorF2161,function_,outerF2164);
  T8 = CALL1(1,outerF2164,YPint((P)0));
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zapX_51) {
  P table_;
  P T0;
  P a1;
LINK_STACK();
  ARG(table_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  CALL2(1,VARREF(YgooScolsStabYclrX),T0,VARREF(YgooScolsStabYDempty_cell_marker));
  CALL2(1,VARREF(YgooScolsStabYPcount_setter),YPint((P)0),table_);
UNLINK_STACK();
  RET(table_);
}

FUNCODEDEF(fun_len_52) {
  P table_;
  P T0;
  P a1;
LINK_STACK();
  ARG(table_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_Ovec_53) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYOvec));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Ovec_setter_54) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYOvec));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Obuc_55) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYObuc));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Obuc_setter_56) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYObuc));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Oidx_57) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYOidx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Oidx_setter_58) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYOidx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_OfinQ_59) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYOfinQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_OfinQ_setter_60) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYOfinQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_inner_62) {
  P i_;
  P tmpF2166;
  P keyF2165;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathYT),FREEREF(0),YPint((P)2));
    T5 = CALL2(1,VARREF(YgooSmathYT),FREEREF(2),T6);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,T5);
    T3 = (P)YgooScolsStabYOelt(FREEREF(1),T4);
    keyF2165 = T3;
    T9 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2165,VARREF(YgooScolsStabYDempty_cell_marker));
    tmpF2166 = T9;
    if (tmpF2166 != YPfalse) {
      T10 = tmpF2166;
    } else {
      T11 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2165,VARREF(YgooScolsStabYDvacated_cell_marker));
      T10 = T11;
    }
    T8 = T10;
    if (T8 != YPfalse) {
      T13 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T13;
      i_ = a1;
      goto loop;
      T7 = T12;
    } else {
      T14 = CALLN(1,VARREF(Ynew),7,VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOvec),FREEREF(1),VARREF(YgooScolsStabYObuc),FREEREF(2),VARREF(YgooScolsStabYOidx),i_);
      T7 = T14;
    }
    T2 = T7;
    T0 = T2;
  } else {
    T16 = CALL2(1,VARREF(YgooSmathYA),FREEREF(2),YPint((P)1));
    T15 = CALL1(1,FREEREF(4),T16);
    T0 = T15;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_63) {
  P b_;
  P innerF2167;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),b_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_inner_62,5);
    innerF2167 = T3;
    FUNINIT(innerF2167, 5,FREEREF(1),FREEREF(2),b_,innerF2167,FREEREF(3));
    T4 = CALL1(1,innerF2167,YPint((P)0));
    T2 = T4;
    T0 = T2;
  } else {
    T0 = VARREF(YgooScolsStabYDfin_enum);
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_enum_64) {
  P table_;
  P outerF2171;
  P depthF2170;
  P n_bucketsF2169;
  P vectorF2168;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(table_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),table_);
  T1 = CALL2(1,VARREF(YgooSmathYE),T2,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = VARREF(YgooScolsStabYDfin_enum);
  } else {
    T4 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
    vectorF2168 = T4;
    T6 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2168);
    n_bucketsF2169 = T6;
    T8 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2168);
    depthF2170 = T8;
    T10 = FUNSHELL(1,fun_outer_63,4);
    outerF2171 = T10;
    FUNINIT(outerF2171, 4,n_bucketsF2169,depthF2170,vectorF2168,outerF2171);
    T11 = CALL1(1,outerF2171,YPint((P)0));
    T9 = T11;
    T7 = T9;
    T5 = T7;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_inner_65) {
  P i_;
  P x_1373F2174;
  P tmpF2173;
  P keyF2172;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathYT),FREEREF(0),YPint((P)2));
    T5 = CALL2(1,VARREF(YgooSmathYT),FREEREF(2),T6);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,T5);
    T3 = (P)YgooScolsStabYOelt(FREEREF(1),T4);
    keyF2172 = T3;
    T9 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2172,VARREF(YgooScolsStabYDempty_cell_marker));
    tmpF2173 = T9;
    if (tmpF2173 != YPfalse) {
      T10 = tmpF2173;
    } else {
      T11 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2172,VARREF(YgooScolsStabYDvacated_cell_marker));
      T10 = T11;
    }
    T8 = T10;
    if (T8 != YPfalse) {
      T13 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T13;
      i_ = a1;
      goto loop;
      T7 = T12;
    } else {
      x_1373F2174 = FREEREF(4);
      CALL2(1,VARREF(YgooScolsStabYOvec_setter),FREEREF(1),x_1373F2174);
      CALL2(1,VARREF(YgooScolsStabYObuc_setter),FREEREF(2),x_1373F2174);
      CALL2(1,VARREF(YgooScolsStabYOidx_setter),i_,x_1373F2174);
      T14 = x_1373F2174;
      T7 = T14;
    }
    T2 = T7;
    T0 = T2;
  } else {
    T16 = CALL2(1,VARREF(YgooSmathYA),FREEREF(2),YPint((P)1));
    T15 = CALL2(1,FREEREF(5),T16,YPfalse);
    T0 = T15;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_66) {
  P b_,firstQ_;
  P innerF2175;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(firstQ_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),b_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_inner_65,6);
    innerF2175 = T3;
    FUNINIT(innerF2175, 6,FREEREF(1),FREEREF(2),b_,innerF2175,FREEREF(3),FREEREF(4));
    if (firstQ_ != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSmathYA),FREEREF(5),YPint((P)1));
      T5 = T6;
    } else {
      T5 = YPint((P)0);
    }
    T4 = CALL1(1,innerF2175,T5);
    T2 = T4;
    T0 = T2;
  } else {
    T0 = VARREF(YgooScolsStabYDfin_enum);
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_nxt_67) {
  P e_;
  P outerF2181;
  P indexF2180;
  P bucketF2179;
  P depthF2178;
  P n_bucketsF2177;
  P vectorF2176;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF2176 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2176);
  n_bucketsF2177 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2176);
  depthF2178 = T5;
  T7 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  bucketF2179 = T7;
  T9 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  indexF2180 = T9;
  T11 = FUNSHELL(1,fun_outer_66,6);
  outerF2181 = T11;
  FUNINIT(outerF2181, 6,n_bucketsF2177,depthF2178,vectorF2176,e_,outerF2181,indexF2180);
  T12 = CALL2(1,outerF2181,bucketF2179,YPtrue);
  T10 = T12;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_finQ_68) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsStabYOfinQ),e_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_key_69) {
  P e_;
  P depthF2183;
  P vectorF2182;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF2182 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2182);
  depthF2183 = T3;
  T6 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  T8 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T9 = CALL2(1,VARREF(YgooSmathYT),depthF2183,YPint((P)2));
  T7 = CALL2(1,VARREF(YgooSmathYT),T8,T9);
  T5 = CALL2(1,VARREF(YgooSmathYA),T6,T7);
  T4 = (P)YgooScolsStabYOelt(vectorF2182,T5);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_70) {
  P e_;
  P depthF2185;
  P vectorF2184;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF2184 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2184);
  depthF2185 = T3;
  T6 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  T9 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T10 = CALL2(1,VARREF(YgooSmathYT),depthF2185,YPint((P)2));
  T8 = CALL2(1,VARREF(YgooSmathYT),T9,T10);
  T7 = CALL2(1,VARREF(YgooSmathYA),depthF2185,T8);
  T5 = CALL2(1,VARREF(YgooSmathYA),T6,T7);
  T4 = (P)YgooScolsStabYOelt(vectorF2184,T5);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_setter_71) {
  P value_,e_;
  P depthF2188;
  P indexF2187;
  P vectorF2186;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF2186 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  indexF2187 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2186);
  depthF2188 = T5;
  T10 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T11 = CALL2(1,VARREF(YgooSmathYT),depthF2188,YPint((P)2));
  T9 = CALL2(1,VARREF(YgooSmathYT),T10,T11);
  T8 = CALL2(1,VARREF(YgooSmathYA),depthF2188,T9);
  T7 = CALL2(1,VARREF(YgooSmathYA),indexF2187,T8);
  T6 = (P)YgooScolsStabYOelt_setter(value_,vectorF2186,T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P k_,v_;
  P UF2189;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
loop:
  T1 = BOXVAL(FREEREF(0));
  UF2189 = T1;
  T3 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2189,k_);
  T2 = BOXVAL(FREEREF(0)) = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_tab_keys_73) {
  P table_;
  P packer_F2190;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(table_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F2190 = T1;
  packer_F2190 = BOXFAB(packer_F2190);
  T3 = FUNFAB(fun_72,1,packer_F2190);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T3,table_);
  T5 = BOXVAL(packer_F2190);
  T4 = CALL1(1,VARREF(YgooSpackerYpacker_res),T5);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_grow_table_74) {
  P table_;
  P new_vectorF2195;
  P new_bucket_depthF2194;
  P new_n_bucketsF2193;
  P tup25F2192;
  P vectorF2191;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(table_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2191 = T1;
  T7 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2191);
  T8 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2191);
  T6 = CALL2(1,VARREF(YgooSmathYT),T7,T8);
  T9 = CALL1(1,VARREF(YgooScolsStabYtab_growth_factor),table_);
  T5 = CALL2(1,VARREF(YgooSmathYT),T6,T9);
  T4 = CALL1(1,VARREF(YgooSmathYfloor),T5);
  T3 = CALL1(1,VARREF(YgooScolsStabYchoose_table_geometry),T4);
  tup25F2192 = T3;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup25F2192,YPint((P)0));
  new_n_bucketsF2193 = T11;
  T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup25F2192,YPint((P)1));
  new_bucket_depthF2194 = T13;
  T17 = CALL2(1,VARREF(YgooSmathYT),new_bucket_depthF2194,YPint((P)2));
  T16 = CALL2(1,VARREF(YgooSmathYT),new_n_bucketsF2193,T17);
  T18 = CALL2(1,VARREF(YgooSmathY_),new_n_bucketsF2193,YPint((P)2));
  T15 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T16,VARREF(YgooScolsStabYDempty_cell_marker),new_n_bucketsF2193,new_bucket_depthF2194,new_n_bucketsF2193,T18);
  new_vectorF2195 = T15;
  CALL2(1,VARREF(YgooScolsStabYcopy_to_new_vector),table_,new_vectorF2195);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),new_vectorF2195,table_);
  T14 = table_;
  T12 = T14;
  T10 = T12;
  T2 = T10;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_rehash_table_75) {
  P table_;
  P new_vectorF2197;
  P vectorF2196;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(table_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2196 = T1;
  T5 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2196);
  T7 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2196);
  T6 = CALL2(1,VARREF(YgooSmathYT),T7,YPint((P)2));
  T4 = CALL2(1,VARREF(YgooSmathYT),T5,T6);
  T8 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2196);
  T9 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2196);
  T10 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF2196);
  T11 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF2196);
  T3 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T4,VARREF(YgooScolsStabYDempty_cell_marker),T8,T9,T10,T11);
  new_vectorF2197 = T3;
  CALL2(1,VARREF(YgooScolsStabYcopy_to_new_vector),table_,new_vectorF2197);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),new_vectorF2197,table_);
  T2 = table_;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_76) {
  P p_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(p_, 0);
loop:
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

FUNCODEDEF(fun_77) {
  P return_;
  P depthF2198;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYL),FREEREF(0),YPint((P)2000));
  if (T2 != YPfalse) {
    T1 = YPint((P)1);
  } else {
    T4 = CALL2(1,VARREF(YgooSmagYL),FREEREF(0),YPint((P)5000));
    if (T4 != YPfalse) {
      T3 = YPint((P)2);
    } else {
      T6 = CALL2(1,VARREF(YgooSmagYL),FREEREF(0),YPint((P)15000));
      if (T6 != YPfalse) {
        T5 = YPint((P)4);
      } else {
        T8 = CALL2(1,VARREF(YgooSmagYL),FREEREF(0),YPint((P)50000));
        if (T8 != YPfalse) {
          T7 = YPint((P)8);
        } else {
          T10 = CALL2(1,VARREF(YgooSmagYL),FREEREF(0),YPint((P)250000));
          if (T10 != YPfalse) {
            T9 = YPint((P)16);
          } else {
            if (YPtrue != YPfalse) {
              T11 = YPint((P)32);
            } else {
              T11 = YPfalse;
            }
            T9 = T11;
          }
          T7 = T9;
        }
        T5 = T7;
      }
      T3 = T5;
    }
    T1 = T3;
  }
  depthF2198 = T1;
  T12 = FUNFAB(fun_76,3,FREEREF(0),depthF2198,return_);
  CALL2(1,VARREF(YgooSmacrosYdo),T12,VARREF(YgooScolsStabYTtwin_primesT));
  T13 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_150));
  T0 = T13;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsStabYchoose_table_geometry) {
  P capacity_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(capacity_, 0);
loop:
  T1 = FUNFAB(fun_77,1,capacity_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_inner_79) {
  P i_,index_;
  P this_keyF2199;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(index_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = (P)YgooScolsStabYOelt(FREEREF(1),index_);
    this_keyF2199 = T3;
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF2199,VARREF(YgooScolsStabYDempty_cell_marker));
    if (T5 != YPfalse) {
      (P)YgooScolsStabYOelt_setter(FREEREF(2),FREEREF(1),index_);
      T7 = CALL2(1,VARREF(YgooSmathYA),index_,FREEREF(0));
      T6 = (P)YgooScolsStabYOelt_setter(FREEREF(3),FREEREF(1),T7);
      T4 = T6;
    } else {
      T9 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      T10 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
      a1 = T9;
      a2 = T10;
      i_ = a1;
      index_ = a2;
      goto loop;
      T4 = T8;
    }
    T2 = T4;
    T0 = T2;
  } else {
    T12 = CALL3(1,VARREF(YgooSmathYmod_),FREEREF(5),FREEREF(6),FREEREF(7));
    T13 = CALL2(1,VARREF(YgooSmathYA),FREEREF(8),YPint((P)1));
    T11 = CALL2(1,FREEREF(9),T12,T13);
    T0 = T11;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_80) {
  P new_bucket_index_,probes_;
  P innerF2201;
  P bucket_startF2200;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(new_bucket_index_, 0);
  ARG(probes_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),probes_,FREEREF(0));
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmathYT),FREEREF(1),YPint((P)2));
    T3 = CALL2(1,VARREF(YgooSmathYT),new_bucket_index_,T4);
    bucket_startF2200 = T3;
    T6 = FUNSHELL(1,fun_inner_79,10);
    innerF2201 = T6;
    FUNINIT(innerF2201, 10,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),innerF2201,new_bucket_index_,FREEREF(5),FREEREF(0),probes_,FREEREF(6));
    T7 = CALL2(1,innerF2201,YPint((P)0),bucket_startF2200);
    T5 = T7;
    T2 = T5;
    T0 = T2;
  } else {
    T8 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_156));
    T0 = T8;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P k_,v_;
  P outerF2210;
  P new_bucket_offsetF2209;
  P new_bucket_indexF2208;
  P hashF2207;
  P new_secondary_modulusF2206;
  P new_primary_modulusF2205;
  P new_bucket_depthF2204;
  P new_n_bucketsF2203;
  P test_functionF2202;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYkey_test),FREEREF(0));
  test_functionF2202 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),FREEREF(1));
  new_n_bucketsF2203 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),FREEREF(1));
  new_bucket_depthF2204 = T5;
  T7 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),FREEREF(1));
  new_primary_modulusF2205 = T7;
  T9 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),FREEREF(1));
  new_secondary_modulusF2206 = T9;
  T12 = CALL1(1,VARREF(YgooScolsStabYtab_hash),FREEREF(0));
  T11 = CALL1(1,T12,k_);
  check_type(T11,VARREF(YLintG));
  hashF2207 = T11;
  T14 = CALL2(1,VARREF(YgooSmathYmod),hashF2207,new_primary_modulusF2205);
  new_bucket_indexF2208 = T14;
  T17 = CALL2(1,VARREF(YgooSmathYmod),hashF2207,new_secondary_modulusF2206);
  T16 = CALL2(1,VARREF(YgooSmathYA),T17,YPint((P)1));
  new_bucket_offsetF2209 = T16;
  T19 = FUNSHELL(1,fun_outer_80,7);
  outerF2210 = T19;
  FUNINIT(outerF2210, 7,new_n_bucketsF2203,new_bucket_depthF2204,FREEREF(1),k_,v_,new_bucket_offsetF2209,outerF2210);
  T20 = CALL2(1,outerF2210,new_bucket_indexF2208,YPint((P)0));
  T18 = T20;
  T15 = T18;
  T13 = T15;
  T10 = T13;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_copy_to_new_vector_82) {
  P table_,new_vector_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(table_, 0);
  ARG(new_vector_, 1);
loop:
  T1 = FUNFAB(fun_81,2,table_,new_vector_);
  T0 = CALL2(1,VARREF(YgooScolsScolYdo_keyed),T1,table_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_83) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmathYaddress_of),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_84) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
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
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYGG),x_,a_);
  T2 = CALL2(1,VARREF(YgooSmathYLL),x_,a_);
  T0 = CALL2(1,VARREF(YgooSmathYK),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_id_hash_86) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = CALL2(1,VARREF(YgooScolsStabYrot),x_,YPint((P)15));
  T2 = CALL2(1,VARREF(YgooSmathY_),T3,x_);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)31));
  T0 = CALL1(1,VARREF(YgooSmathYabs),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_87) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T0 = CALL1(1,VARREF(YgooScolsStabYid_hash),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_88) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYflo_bits),x_);
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)89));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_89) {
  P t_enum_,cur_hash_;
  P cur_elemF2211;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(t_enum_, 0);
  ARG(cur_hash_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),t_enum_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooScolsScolYnow),t_enum_);
    cur_elemF2211 = T3;
    T5 = CALL1(1,VARREF(YgooScolsScolYnxt),t_enum_);
    T7 = CALL2(1,VARREF(YgooSmathYT),cur_hash_,YPint((P)31));
    T8 = CALL1(1,VARREF(YgooScolsStabYid_hash),cur_elemF2211);
    T6 = CALL2(1,VARREF(YgooSmathYA),T7,T8);
    a1 = T5;
    a2 = T6;
    t_enum_ = a1;
    cur_hash_ = a2;
    goto loop;
    T2 = T4;
  } else {
  }
UNLINK_STACK();
  QRET(cur_hash_);
}

FUNCODEDEF(fun_id_hash_90) {
  P x_;
  P loopF2212;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_89,1);
  loopF2212 = T1;
  FUNINIT(loopF2212, 1,loopF2212);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL2(0,loopF2212,T3,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_key_type_91) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YLstrG));
}

FUNCODEDEF(fun_elt_type_92) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YLsymG));
}

FUNCODEDEF(fun_loop_93) {
  P i_,hash_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(hash_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T6 = CALL2(1,VARREF(YgooSmathYLL),hash_,YPint((P)6));
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),i_);
    T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T9);
    T7 = CALL2(1,VARREF(YgooSmathYB),T8,YPint((P)159));
    T5 = CALL2(1,VARREF(YgooSmathYA),T6,T7);
    T4 = CALL2(1,VARREF(YgooSmathYmod),T5,YPint((P)970747));
    a1 = T3;
    a2 = T4;
    i_ = a1;
    hash_ = a2;
    goto loop;
    T0 = T2;
  } else {
    T0 = hash_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsStabYcase_insensitive_string_hash) {
  P x_;
  P loopF2215;
  P eF2214;
  P sF2213;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  sF2213 = YPint((P)0);
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  eF2214 = T2;
  T4 = FUNSHELL(1,fun_loop_93,3);
  loopF2215 = T4;
  FUNINIT(loopF2215, 3,eF2214,x_,loopF2215);
  T5 = CALL2(1,loopF2215,sF2213,YPint((P)0));
  T3 = T5;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_95) {
  P i_;
  P tmpF2220;
  P tmpF2219;
  P cyF2218;
  P cxF2217;
  P tmpF2216;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),i_,FREEREF(0));
  tmpF2216 = T1;
  if (tmpF2216 != YPfalse) {
    T2 = tmpF2216;
  } else {
    T5 = CALL2(1,VARREF(YgooSmathY_),i_,FREEREF(2));
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),T5);
    check_type(T4,VARREF(YLchrG));
    cxF2217 = T4;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),i_);
    check_type(T7,VARREF(YLchrG));
    cyF2218 = T7;
    T10 = CALL2(1,VARREF(YgooSmacrosYEE),cxF2217,cyF2218);
    tmpF2219 = T10;
    if (tmpF2219 != YPfalse) {
      T11 = tmpF2219;
    } else {
      T13 = CALL1(1,VARREF(YgooSmathYto_lower),cxF2217);
      T14 = CALL1(1,VARREF(YgooSmathYto_lower),cyF2218);
      T12 = CALL2(1,VARREF(YgooSmacrosYEE),T13,T14);
      T11 = T12;
    }
    T9 = T11;
    tmpF2220 = T9;
    if (tmpF2220 != YPfalse) {
      T17 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T17;
      i_ = a1;
      goto loop;
      T15 = T16;
    } else {
      T15 = YPfalse;
    }
    T8 = T15;
    T6 = T8;
    T3 = T6;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsStabYcase_insensitive_string_equal) {
  P x_,y_;
  P loopF2223;
  P eyF2222;
  P syF2221;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  syF2221 = YPint((P)0);
  T2 = CALL1(1,VARREF(YgooStypesYlen),y_);
  eyF2222 = T2;
  T5 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T6 = CALL2(1,VARREF(YgooSmathY_),eyF2222,syF2221);
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,T6);
  if (T4 != YPfalse) {
    T8 = FUNSHELL(1,fun_loop_95,5);
    loopF2223 = T8;
    FUNINIT(loopF2223, 5,eyF2222,x_,syF2221,y_,loopF2223);
    T9 = CALL1(1,loopF2223,syF2221);
    T7 = T9;
    T3 = T7;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_key_test_97) {
  P U_;
  P a1;
LINK_STACK();
  ARG(U_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YgooScolsStabYcase_insensitive_string_equal));
}

FUNCODEDEF(fun_tab_hash_98) {
  P U_;
  P a1;
LINK_STACK();
  ARG(U_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YgooScolsStabYcase_insensitive_string_hash));
}

FUNCODEDEF(fun_addX_99) {
  P c_,x_;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,c_,x_);
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_memQ_100) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooScolsScolYelt_or),c_,x_,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_101) {
  P k_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(k_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),k_);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),T1,FREEREF(1),k_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elts_102) {
  P x_,keys_;
  P resF2224;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(keys_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),keys_);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),T2);
  resF2224 = T1;
  T3 = FUNFAB(fun_101,2,x_,resF2224);
  CALL2(1,VARREF(YgooSmacrosYdo),T3,keys_);
  T4 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,resF2224);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

P YgooScolsStabY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<tab>");
  T2 = (P)YPpair(VARREF(YLcolXG),Ynil);
  T1 = (P)YPpair(VARREF(YgooScolsSmapYLmapG),T2);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooScolsScolYLtabG,T0);
  lit_1 = YPPsym((P)"<set>");
  T4 = (P)YPpair(VARREF(YgooScolsScolYLtabG),Ynil);
  T3 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_1),T4);
  VARSET(YgooScolsStabYLsetG,T3);
  lit_2 = YPPsym((P)"tab-growth-factor");
  lit_3 = YPPlist(1,YPPsym((P)"_x"));
  T5 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tab_growth_factor_0 = YPmet(FUNCODEREF(fun_tab_growth_factor_0),LITREF(lit_2),T5,ENVNUL,PNUL,sloc(27));
  T7 = VARREF_OR(YgooScolsStabYtab_growth_factor,YPfalse);
  T8 = fun_tab_growth_factor_0;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T8);
  VARSET(YgooScolsStabYtab_growth_factor,T6);
  lit_4 = YPPsym((P)"tab-growth-factor-setter");
  lit_5 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T9 = YPsig(LITREF(lit_5),YPPlist(2,VARREF(YLfloG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_tab_growth_factor_setter_1 = YPmet(FUNCODEREF(fun_tab_growth_factor_setter_1),LITREF(lit_4),T9,ENVNUL,PNUL,sloc(27));
  T11 = VARREF_OR(YgooScolsStabYtab_growth_factor_setter,YPfalse);
  T12 = fun_tab_growth_factor_setter_1;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T12);
  VARSET(YgooScolsStabYtab_growth_factor_setter,T10);
  lit_6 = YPPlist(1,YPPsym((P)"_x"));
  lit_7 = YPflo(FLOINT(2.0));
  T13 = YPsig(LITREF(lit_6),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T13,ENVNUL,PNUL,sloc(27));
  T14 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYtab_growth_factor),VARREF(YgooScolsStabYtab_growth_factor_setter),VARREF(YLfloG),T14);
  lit_8 = YPPsym((P)"tab-growth-threshold");
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T15 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tab_growth_threshold_3 = YPmet(FUNCODEREF(fun_tab_growth_threshold_3),LITREF(lit_8),T15,ENVNUL,PNUL,sloc(27));
  T17 = VARREF_OR(YgooScolsStabYtab_growth_threshold,YPfalse);
  T18 = fun_tab_growth_threshold_3;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T18);
  VARSET(YgooScolsStabYtab_growth_threshold,T16);
  lit_10 = YPPsym((P)"tab-growth-threshold-setter");
  lit_11 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T19 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLfloG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_tab_growth_threshold_setter_4 = YPmet(FUNCODEREF(fun_tab_growth_threshold_setter_4),LITREF(lit_10),T19,ENVNUL,PNUL,sloc(27));
  T21 = VARREF_OR(YgooScolsStabYtab_growth_threshold_setter,YPfalse);
  T22 = fun_tab_growth_threshold_setter_4;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T22);
  VARSET(YgooScolsStabYtab_growth_threshold_setter,T20);
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  lit_13 = YPflo(FLOINT(0.8));
  T23 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T23,ENVNUL,PNUL,sloc(27));
  T24 = fun_5;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYtab_growth_threshold),VARREF(YgooScolsStabYtab_growth_threshold_setter),VARREF(YLfloG),T24);
  lit_14 = YPPsym((P)"tab-shrink-threshold");
  lit_15 = YPPlist(1,YPPsym((P)"_x"));
  T25 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tab_shrink_threshold_6 = YPmet(FUNCODEREF(fun_tab_shrink_threshold_6),LITREF(lit_14),T25,ENVNUL,PNUL,sloc(27));
  T27 = VARREF_OR(YgooScolsStabYtab_shrink_threshold,YPfalse);
  T28 = fun_tab_shrink_threshold_6;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T28);
  VARSET(YgooScolsStabYtab_shrink_threshold,T26);
  lit_16 = YPPsym((P)"tab-shrink-threshold-setter");
  lit_17 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YLfloG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_tab_shrink_threshold_setter_7 = YPmet(FUNCODEREF(fun_tab_shrink_threshold_setter_7),LITREF(lit_16),T29,ENVNUL,PNUL,sloc(27));
  T31 = VARREF_OR(YgooScolsStabYtab_shrink_threshold_setter,YPfalse);
  T32 = fun_tab_shrink_threshold_setter_7;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T32);
  VARSET(YgooScolsStabYtab_shrink_threshold_setter,T30);
  lit_18 = YPPlist(1,YPPsym((P)"_x"));
  lit_19 = YPflo(FLOINT(0.5));
  T33 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T33,ENVNUL,PNUL,sloc(27));
  T34 = fun_8;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYtab_shrink_threshold),VARREF(YgooScolsStabYtab_shrink_threshold_setter),VARREF(YLfloG),T34);
  lit_20 = YPPsym((P)"<tab-vec>");
  T36 = (P)YPpair(VARREF(YLseqXG),Ynil);
  T35 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_20),T36);
  VARSET(YgooScolsStabYLtab_vecG,T35);
  lit_21 = YPPsym((P)"%vacated");
  lit_22 = YPPlist(1,YPPsym((P)"_x"));
  T37 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pvacated_9 = YPmet(FUNCODEREF(fun_Pvacated_9),LITREF(lit_21),T37,ENVNUL,PNUL,sloc(38));
  T39 = VARREF_OR(YgooScolsStabYPvacated,YPfalse);
  T40 = fun_Pvacated_9;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T40);
  VARSET(YgooScolsStabYPvacated,T38);
  lit_23 = YPPsym((P)"%vacated-setter");
  lit_24 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T41 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pvacated_setter_10 = YPmet(FUNCODEREF(fun_Pvacated_setter_10),LITREF(lit_23),T41,ENVNUL,PNUL,sloc(38));
  T43 = VARREF_OR(YgooScolsStabYPvacated_setter,YPfalse);
  T44 = fun_Pvacated_setter_10;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T44);
  VARSET(YgooScolsStabYPvacated_setter,T42);
  lit_25 = YPPlist(1,YPPsym((P)"_x"));
  T45 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T45,ENVNUL,PNUL,sloc(38));
  T46 = fun_11;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPvacated),VARREF(YgooScolsStabYPvacated_setter),VARREF(YLintG),T46);
  lit_26 = YPPsym((P)"%primary-modulus");
  lit_27 = YPPlist(1,YPPsym((P)"_x"));
  T47 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pprimary_modulus_12 = YPmet(FUNCODEREF(fun_Pprimary_modulus_12),LITREF(lit_26),T47,ENVNUL,PNUL,sloc(40));
  T49 = VARREF_OR(YgooScolsStabYPprimary_modulus,YPfalse);
  T50 = fun_Pprimary_modulus_12;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T50);
  VARSET(YgooScolsStabYPprimary_modulus,T48);
  lit_28 = YPPsym((P)"%primary-modulus-setter");
  lit_29 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T51 = YPsig(LITREF(lit_29),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pprimary_modulus_setter_13 = YPmet(FUNCODEREF(fun_Pprimary_modulus_setter_13),LITREF(lit_28),T51,ENVNUL,PNUL,sloc(40));
  T53 = VARREF_OR(YgooScolsStabYPprimary_modulus_setter,YPfalse);
  T54 = fun_Pprimary_modulus_setter_13;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T54);
  VARSET(YgooScolsStabYPprimary_modulus_setter,T52);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPprimary_modulus),VARREF(YgooScolsStabYPprimary_modulus_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_30 = YPPsym((P)"%secondary-modulus");
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  T55 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Psecondary_modulus_14 = YPmet(FUNCODEREF(fun_Psecondary_modulus_14),LITREF(lit_30),T55,ENVNUL,PNUL,sloc(41));
  T57 = VARREF_OR(YgooScolsStabYPsecondary_modulus,YPfalse);
  T58 = fun_Psecondary_modulus_14;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T58);
  VARSET(YgooScolsStabYPsecondary_modulus,T56);
  lit_32 = YPPsym((P)"%secondary-modulus-setter");
  lit_33 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T59 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Psecondary_modulus_setter_15 = YPmet(FUNCODEREF(fun_Psecondary_modulus_setter_15),LITREF(lit_32),T59,ENVNUL,PNUL,sloc(41));
  T61 = VARREF_OR(YgooScolsStabYPsecondary_modulus_setter,YPfalse);
  T62 = fun_Psecondary_modulus_setter_15;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T62);
  VARSET(YgooScolsStabYPsecondary_modulus_setter,T60);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPsecondary_modulus),VARREF(YgooScolsStabYPsecondary_modulus_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_34 = YPPsym((P)"%n-buckets");
  lit_35 = YPPlist(1,YPPsym((P)"_x"));
  T63 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pn_buckets_16 = YPmet(FUNCODEREF(fun_Pn_buckets_16),LITREF(lit_34),T63,ENVNUL,PNUL,sloc(43));
  T65 = VARREF_OR(YgooScolsStabYPn_buckets,YPfalse);
  T66 = fun_Pn_buckets_16;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T66);
  VARSET(YgooScolsStabYPn_buckets,T64);
  lit_36 = YPPsym((P)"%n-buckets-setter");
  lit_37 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T67 = YPsig(LITREF(lit_37),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pn_buckets_setter_17 = YPmet(FUNCODEREF(fun_Pn_buckets_setter_17),LITREF(lit_36),T67,ENVNUL,PNUL,sloc(43));
  T69 = VARREF_OR(YgooScolsStabYPn_buckets_setter,YPfalse);
  T70 = fun_Pn_buckets_setter_17;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T70);
  VARSET(YgooScolsStabYPn_buckets_setter,T68);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPn_buckets),VARREF(YgooScolsStabYPn_buckets_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_38 = YPPsym((P)"%bucket-depth");
  lit_39 = YPPlist(1,YPPsym((P)"_x"));
  T71 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pbucket_depth_18 = YPmet(FUNCODEREF(fun_Pbucket_depth_18),LITREF(lit_38),T71,ENVNUL,PNUL,sloc(44));
  T73 = VARREF_OR(YgooScolsStabYPbucket_depth,YPfalse);
  T74 = fun_Pbucket_depth_18;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T74);
  VARSET(YgooScolsStabYPbucket_depth,T72);
  lit_40 = YPPsym((P)"%bucket-depth-setter");
  lit_41 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T75 = YPsig(LITREF(lit_41),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pbucket_depth_setter_19 = YPmet(FUNCODEREF(fun_Pbucket_depth_setter_19),LITREF(lit_40),T75,ENVNUL,PNUL,sloc(44));
  T77 = VARREF_OR(YgooScolsStabYPbucket_depth_setter,YPfalse);
  T78 = fun_Pbucket_depth_setter_19;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T78);
  VARSET(YgooScolsStabYPbucket_depth_setter,T76);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPbucket_depth),VARREF(YgooScolsStabYPbucket_depth_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_42 = YPPsym((P)"%data");
  lit_43 = YPPlist(1,YPPsym((P)"_x"));
  T79 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdata_20 = YPmet(FUNCODEREF(fun_Pdata_20),LITREF(lit_42),T79,ENVNUL,PNUL,sloc(46));
  T81 = VARREF_OR(YgooScolsStabYPdata,YPfalse);
  T82 = fun_Pdata_20;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T82);
  VARSET(YgooScolsStabYPdata,T80);
  lit_44 = YPPsym((P)"%data-setter");
  lit_45 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T83 = YPsig(LITREF(lit_45),YPPlist(2,VARREF(YLrepG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdata_setter_21 = YPmet(FUNCODEREF(fun_Pdata_setter_21),LITREF(lit_44),T83,ENVNUL,PNUL,sloc(46));
  T85 = VARREF_OR(YgooScolsStabYPdata_setter,YPfalse);
  T86 = fun_Pdata_setter_21;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T86);
  VARSET(YgooScolsStabYPdata_setter,T84);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPdata),VARREF(YgooScolsStabYPdata_setter),VARREF(YLrepG),VARREF(YPprop_unbound_error));
  lit_46 = YPPsym((P)"%count");
  lit_47 = YPPlist(1,YPPsym((P)"_x"));
  T87 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pcount_22 = YPmet(FUNCODEREF(fun_Pcount_22),LITREF(lit_46),T87,ENVNUL,PNUL,sloc(50));
  T89 = VARREF_OR(YgooScolsStabYPcount,YPfalse);
  T90 = fun_Pcount_22;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T90);
  VARSET(YgooScolsStabYPcount,T88);
  lit_48 = YPPsym((P)"%count-setter");
  lit_49 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T91 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pcount_setter_23 = YPmet(FUNCODEREF(fun_Pcount_setter_23),LITREF(lit_48),T91,ENVNUL,PNUL,sloc(50));
  T93 = VARREF_OR(YgooScolsStabYPcount_setter,YPfalse);
  T94 = fun_Pcount_setter_23;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T94);
  VARSET(YgooScolsStabYPcount_setter,T92);
  lit_50 = YPPlist(1,YPPsym((P)"_x"));
  T95 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T95,ENVNUL,PNUL,sloc(50));
  T96 = fun_24;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYPcount),VARREF(YgooScolsStabYPcount_setter),VARREF(YLintG),T96);
  lit_51 = YPPsym((P)"%vector");
  lit_52 = YPPlist(1,YPPsym((P)"_x"));
  T97 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pvector_25 = YPmet(FUNCODEREF(fun_Pvector_25),LITREF(lit_51),T97,ENVNUL,PNUL,sloc(51));
  T99 = VARREF_OR(YgooScolsStabYPvector,YPfalse);
  T100 = fun_Pvector_25;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T100);
  VARSET(YgooScolsStabYPvector,T98);
  lit_53 = YPPsym((P)"%vector-setter");
  lit_54 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T101 = YPsig(LITREF(lit_54),YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pvector_setter_26 = YPmet(FUNCODEREF(fun_Pvector_setter_26),LITREF(lit_53),T101,ENVNUL,PNUL,sloc(51));
  T103 = VARREF_OR(YgooScolsStabYPvector_setter,YPfalse);
  T104 = fun_Pvector_setter_26;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T104);
  VARSET(YgooScolsStabYPvector_setter,T102);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYPvector),VARREF(YgooScolsStabYPvector_setter),VARREF(YgooScolsStabYLtab_vecG),VARREF(YPprop_unbound_error));
  lit_55 = YPPsym((P)"tab-hash");
  lit_56 = YPPlist(1,YPPsym((P)"x"));
  T106 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  T105 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_55),T106,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsStabYtab_hash,T105);
  lit_57 = YPPsym((P)"id-hash");
  lit_58 = YPPlist(1,YPPsym((P)"x"));
  T108 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T107 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_57),T108,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsStabYid_hash,T107);
  lit_59 = YPPsym((P)"<str-tab>");
  T112 = (P)YPpair(VARREF(YgooScolsScolYLtabG),Ynil);
  T111 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_59),T112);
  T110 = VARSET(YgooScolsStabYLstr_tabG,T111);
  T109 = T110;
  return T109;
}

P YgooScolsStabY___main_1___() {
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209;
DEFCREGS();
loop:
  lit_60 = YPPlist(275,YPint((P)3),YPint((P)5),YPint((P)11),YPint((P)17),YPint((P)29),YPint((P)41),YPint((P)47),YPint((P)59),YPint((P)71),YPint((P)101),YPint((P)107),YPint((P)137),YPint((P)149),YPint((P)167),YPint((P)179),YPint((P)191),YPint((P)197),YPint((P)227),YPint((P)239),YPint((P)269),YPint((P)281),YPint((P)311),YPint((P)347),YPint((P)419),YPint((P)431),YPint((P)461),YPint((P)521),YPint((P)569),YPint((P)599),YPint((P)617),YPint((P)641),YPint((P)659),YPint((P)809),YPint((P)839),YPint((P)881),YPint((P)1019),YPint((P)1049),YPint((P)1091),YPint((P)1151),YPint((P)1229),YPint((P)1277),YPint((P)1319),YPint((P)1367),YPint((P)1427),YPint((P)1481),YPint((P)1607),YPint((P)1667),YPint((P)1721),YPint((P)1787),YPint((P)1871),YPint((P)1931),YPint((P)1997),YPint((P)2081),YPint((P)2141),YPint((P)2207),YPint((P)2267),YPint((P)2339),YPint((P)2549),YPint((P)2657),YPint((P)2729),YPint((P)2801),YPint((P)2969),YPint((P)3119),YPint((P)3251),YPint((P)3359),YPint((P)3461),YPint((P)3557),YPint((P)3671),YPint((P)3767),YPint((P)3917),YPint((P)4019),YPint((P)4127),YPint((P)4241),YPint((P)4421),YPint((P)4547),YPint((P)4721),YPint((P)4931),YPint((P)5099),YPint((P)5231),YPint((P)5417),YPint((P)5639),YPint((P)5849),YPint((P)6089),YPint((P)6269),YPint((P)6449),YPint((P)6659),YPint((P)6827),YPint((P)7127),YPint((P)7307),YPint((P)7547),YPint((P)7757),YPint((P)8009),YPint((P)8219),YPint((P)8429),YPint((P)8819),YPint((P)9041),YPint((P)9281),YPint((P)9629),YPint((P)9929),YPint((P)10271),YPint((P)10529),YPint((P)10859),YPint((P)11159),YPint((P)11447),YPint((P)11777),YPint((P)12107),YPint((P)12539),YPint((P)12917),YPint((P)13337),YPint((P)13679),YPint((P)14081),YPint((P)14447),YPint((P)14867),YPint((P)15269),YPint((P)15731),YPint((P)16139),YPint((P)16631),YPint((P)17189),YPint((P)17657),YPint((P)18119),YPint((P)18911),YPint((P)19421),YPint((P)19961),YPint((P)20477),YPint((P)21011),YPint((P)21557),YPint((P)22109),YPint((P)22697),YPint((P)23291),YPint((P)23909),YPint((P)24917),YPint((P)25577),YPint((P)26249),YPint((P)26951),YPint((P)27689),YPint((P)28409),YPint((P)29129),YPint((P)29879),YPint((P)30839),YPint((P)31721),YPint((P)32531),YPint((P)33347),YPint((P)34211),YPint((P)35081),YPint((P)36011),YPint((P)36929),YPint((P)37991),YPint((P)39041),YPint((P)40037),YPint((P)41141),YPint((P)42179),YPint((P)43319),YPint((P)44531),YPint((P)45821),YPint((P)47057),YPint((P)48311),YPint((P)49529),YPint((P)50891),YPint((P)52181),YPint((P)53549),YPint((P)54917),YPint((P)56477),YPint((P)57899),YPint((P)59357),YPint((P)60887),YPint((P)62927),YPint((P)64577),YPint((P)66359),YPint((P)68111),YPint((P)69827),YPint((P)71711),YPint((P)73607),YPint((P)75539),YPint((P)77477),YPint((P)79559),YPint((P)81551),YPint((P)83639),YPint((P)85817),YPint((P)88001),YPint((P)90371),YPint((P)92639),YPint((P)95087),YPint((P)97499),YPint((P)99989),YPint((P)102497),YPint((P)105227),YPint((P)108011),YPint((P)110729),YPint((P)113537),YPint((P)116531),YPint((P)119549),YPint((P)122597),YPint((P)125789),YPint((P)128939),YPint((P)132329),YPint((P)135647),YPint((P)139121),YPint((P)142607),YPint((P)146297),YPint((P)149969),YPint((P)153887),YPint((P)157769),YPint((P)161729),YPint((P)166301),YPint((P)170537),YPint((P)174929),YPint((P)179381),YPint((P)183917),YPint((P)188831),YPint((P)193601),YPint((P)198461),YPint((P)203429),YPint((P)208589),YPint((P)213947),YPint((P)219311),YPint((P)224909),YPint((P)230561),YPint((P)236477),YPint((P)242447),YPint((P)248639),YPint((P)254927),YPint((P)261431),YPint((P)268517),YPint((P)275321),YPint((P)282239),YPint((P)289841),YPint((P)297467),YPint((P)304979),YPint((P)312617),YPint((P)320561),YPint((P)328589),YPint((P)336827),YPint((P)345461),YPint((P)354251),YPint((P)363149),YPint((P)372269),YPint((P)381629),YPint((P)391217),YPint((P)401309),YPint((P)411527),YPint((P)422087),YPint((P)432659),YPint((P)443561),YPint((P)454709),YPint((P)466181),YPint((P)478067),YPint((P)490031),YPint((P)502499),YPint((P)515087),YPint((P)527981),YPint((P)541361),YPint((P)555041),YPint((P)569081),YPint((P)583337),YPint((P)598049),YPint((P)613007),YPint((P)628679),YPint((P)644489),YPint((P)660617),YPint((P)677231),YPint((P)694259),YPint((P)711707),YPint((P)729557),YPint((P)747827),YPint((P)766541),YPint((P)785777),YPint((P)805499),YPint((P)825827),YPint((P)846749),YPint((P)868121),YPint((P)889871),YPint((P)912449),YPint((P)935591),YPint((P)959207),YPint((P)983327));
  T0 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),LITREF(lit_60));
  VARSET(YgooScolsStabYTtwin_primesT,T0);
  lit_61 = YPPsym((P)"fab-tab-vec");
  lit_62 = YPPlist(6,YPPsym((P)"size"),YPPsym((P)"fill-value"),YPPsym((P)"n-buckets"),YPPsym((P)"bucket-depth"),YPPsym((P)"primary-modulus"),YPPsym((P)"secondary-modulus"));
  T1 = YPsig(LITREF(lit_62),YPPlist(6,VARREF(YLintG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLintG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)6),VARREF(YgooScolsStabYLtab_vecG),Ynil);
  YgooScolsStabYfab_tab_vec = YPmet(FUNCODEREF(YgooScolsStabYfab_tab_vec),LITREF(lit_61),T1,ENVNUL,PNUL,sloc(98));
  T2 = YgooScolsStabYfab_tab_vec;
  VARSET(YgooScolsStabYfab_tab_vec,T2);
  lit_63 = YPPsym((P)"@fill!");
  lit_64 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"fill"));
  T3 = YPsig(LITREF(lit_64),YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsStabYOfillX = YPmet(FUNCODEREF(YgooScolsStabYOfillX),LITREF(lit_63),T3,ENVNUL,PNUL,sloc(111));
  T4 = YgooScolsStabYOfillX;
  VARSET(YgooScolsStabYOfillX,T4);
  lit_65 = YPPsym((P)"clr!");
  lit_66 = YPPlist(2,YPPsym((P)"vector"),YPPsym((P)"fill-value"));
  T5 = YPsig(LITREF(lit_66),YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_clrX_31 = YPmet(FUNCODEREF(fun_clrX_31),LITREF(lit_65),T5,ENVNUL,PNUL,sloc(124));
  T7 = VARREF_OR(YgooScolsStabYclrX,YPfalse);
  T8 = fun_clrX_31;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T8);
  VARSET(YgooScolsStabYclrX,T6);
  VARSET(YgooScolsStabYTdebug_tablesQT,YPfalse);
  lit_67 = YPPsym((P)"key-test");
  lit_68 = YPPlist(1,YPPsym((P)"_"));
  T9 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_32 = YPmet(FUNCODEREF(fun_key_test_32),LITREF(lit_67),T9,ENVNUL,PNUL,sloc(134));
  T11 = VARREF_OR(YgooScolsScolYkey_test,YPfalse);
  T12 = fun_key_test_32;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T12);
  VARSET(YgooScolsScolYkey_test,T10);
  lit_69 = YPPlist(1,YPPsym((P)"_"));
  T13 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_tab_hash_33 = YPmet(FUNCODEREF(fun_tab_hash_33),LITREF(lit_55),T13,ENVNUL,PNUL,sloc(135));
  T15 = VARREF_OR(YgooScolsStabYtab_hash,YPfalse);
  T16 = fun_tab_hash_33;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T16);
  VARSET(YgooScolsStabYtab_hash,T14);
  lit_70 = YPPlist(1,YPsb((P)"empty cell"));
  VARSET(YgooScolsStabYDempty_cell_marker,LITREF(lit_70));
  lit_71 = YPPlist(1,YPsb((P)"vacated cell"));
  VARSET(YgooScolsStabYDvacated_cell_marker,LITREF(lit_71));
  lit_72 = YPPsym((P)"fab");
  lit_73 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"size"));
  T18 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooScolsScolYLtabG));
  T17 = YPsig(LITREF(lit_73),YPPlist(2,T18,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_fab_34 = YPmet(FUNCODEREF(fun_fab_34),LITREF(lit_72),T17,ENVNUL,PNUL,sloc(140));
  T20 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T21 = fun_fab_34;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T21);
  VARSET(YgooScolsScolYfab,T19);
  lit_74 = YPPsym((P)"elt-or");
  lit_75 = YPPlist(3,YPPsym((P)"table"),YPPsym((P)"key"),YPPsym((P)"default"));
  lit_76 = YPPsym((P)"outer");
  lit_77 = YPPlist(2,YPPsym((P)"bucket-index"),YPPsym((P)"probes"));
  lit_78 = YPPsym((P)"inner");
  lit_79 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"raw-index"));
  lit_80 = YPsb((P)"The table is totally full this shouldn't happen");
  T24 = YPsig(LITREF(lit_79),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_35 = YPmet(FUNCODEREF(fun_inner_35),LITREF(lit_78),T24,ENVNUL,PNUL,sloc(172));
  T23 = YPsig(LITREF(lit_77),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_outer_36 = YPmet(FUNCODEREF(fun_outer_36),LITREF(lit_76),T23,ENVNUL,PNUL,sloc(169));
  T22 = YPsig(LITREF(lit_75),YPPlist(3,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_37 = YPmet(FUNCODEREF(fun_elt_or_37),LITREF(lit_74),T22,ENVNUL,PNUL,sloc(160));
  T26 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T27 = fun_elt_or_37;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YgooScolsScolYelt_or,T25);
  lit_81 = YPPsym((P)"elt-setter");
  lit_82 = YPPlist(3,YPPsym((P)"value"),YPPsym((P)"table"),YPPsym((P)"key"));
  lit_83 = YPPlist(2,YPPsym((P)"bucket-index"),YPPsym((P)"probes"));
  lit_84 = YPPlist(3,YPPsym((P)"vacancy-index"),YPPsym((P)"i"),YPPsym((P)"raw-index"));
  lit_85 = YPsb((P)"The table is totally full this shouldn't happen");
  T30 = YPsig(LITREF(lit_84),YPPlist(3,VARREF(YLanyG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_inner_38 = YPmet(FUNCODEREF(fun_inner_38),LITREF(lit_78),T30,ENVNUL,PNUL,sloc(213));
  T29 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_outer_39 = YPmet(FUNCODEREF(fun_outer_39),LITREF(lit_76),T29,ENVNUL,PNUL,sloc(209));
  T28 = YPsig(LITREF(lit_82),YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_40 = YPmet(FUNCODEREF(fun_elt_setter_40),LITREF(lit_81),T28,ENVNUL,PNUL,sloc(189));
  T32 = VARREF_OR(YgooScolsScolxYelt_setter,YPfalse);
  T33 = fun_elt_setter_40;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YgooScolsScolxYelt_setter,T31);
  lit_86 = YPPsym((P)"del");
  lit_87 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T34 = YPsig(LITREF(lit_87),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_del_41 = YPmet(FUNCODEREF(fun_del_41),LITREF(lit_86),T34,ENVNUL,PNUL,sloc(248));
  T36 = VARREF_OR(YgooScolsScolYdel,YPfalse);
  T37 = fun_del_41;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YgooScolsScolYdel,T35);
  lit_88 = YPPsym((P)"del!");
  lit_89 = YPPlist(2,YPPsym((P)"table"),YPPsym((P)"key"));
  lit_90 = YPPlist(2,YPPsym((P)"bucket-index"),YPPsym((P)"probes"));
  lit_91 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"raw-index"));
  lit_92 = YPsb((P)"The table is totally full this shouldn't happen");
  T40 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_42 = YPmet(FUNCODEREF(fun_inner_42),LITREF(lit_78),T40,ENVNUL,PNUL,sloc(264));
  T39 = YPsig(LITREF(lit_90),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_outer_43 = YPmet(FUNCODEREF(fun_outer_43),LITREF(lit_76),T39,ENVNUL,PNUL,sloc(260));
  T38 = YPsig(LITREF(lit_89),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_delX_44 = YPmet(FUNCODEREF(fun_delX_44),LITREF(lit_88),T38,ENVNUL,PNUL,sloc(251));
  T42 = VARREF_OR(YgooScolsScolxYdelX,YPfalse);
  T43 = fun_delX_44;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YgooScolsScolxYdelX,T41);
  lit_93 = YPPsym((P)"do-keyed");
  lit_94 = YPPlist(2,YPPsym((P)"function"),YPPsym((P)"table"));
  lit_95 = YPPlist(1,YPPsym((P)"b"));
  lit_96 = YPPlist(1,YPPsym((P)"i"));
  T46 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_inner_45 = YPmet(FUNCODEREF(fun_inner_45),LITREF(lit_78),T46,ENVNUL,PNUL,sloc(293));
  T45 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_outer_46 = YPmet(FUNCODEREF(fun_outer_46),LITREF(lit_76),T45,ENVNUL,PNUL,sloc(291));
  T44 = YPsig(LITREF(lit_94),YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_keyed_47 = YPmet(FUNCODEREF(fun_do_keyed_47),LITREF(lit_93),T44,ENVNUL,PNUL,sloc(287));
  T48 = VARREF_OR(YgooScolsScolYdo_keyed,YPfalse);
  T49 = fun_do_keyed_47;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YgooScolsScolYdo_keyed,T47);
  lit_97 = YPPsym((P)"do");
  lit_98 = YPPlist(2,YPPsym((P)"function"),YPPsym((P)"table"));
  lit_99 = YPPlist(1,YPPsym((P)"b"));
  lit_100 = YPPlist(1,YPPsym((P)"i"));
  T52 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_inner_48 = YPmet(FUNCODEREF(fun_inner_48),LITREF(lit_78),T52,ENVNUL,PNUL,sloc(310));
  T51 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_outer_49 = YPmet(FUNCODEREF(fun_outer_49),LITREF(lit_76),T51,ENVNUL,PNUL,sloc(308));
  T50 = YPsig(LITREF(lit_98),YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_50 = YPmet(FUNCODEREF(fun_do_50),LITREF(lit_97),T50,ENVNUL,PNUL,sloc(304));
  T54 = VARREF_OR(YgooSmacrosYdo,YPfalse);
  T55 = fun_do_50;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YgooSmacrosYdo,T53);
  lit_101 = YPPsym((P)"zap!");
  lit_102 = YPPlist(1,YPPsym((P)"table"));
  T56 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_zapX_51 = YPmet(FUNCODEREF(fun_zapX_51),LITREF(lit_101),T56,ENVNUL,PNUL,sloc(320));
  T58 = VARREF_OR(YgooScolsScolxYzapX,YPfalse);
  T59 = fun_zapX_51;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YgooScolsScolxYzapX,T57);
  lit_103 = YPPsym((P)"len");
  lit_104 = YPPlist(1,YPPsym((P)"table"));
  T60 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_52 = YPmet(FUNCODEREF(fun_len_52),LITREF(lit_103),T60,ENVNUL,PNUL,sloc(325));
  T62 = VARREF_OR(YgooStypesYlen,YPfalse);
  T63 = fun_len_52;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YgooStypesYlen,T61);
  lit_105 = YPPsym((P)"<tab-enum>");
  T65 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T64 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_105),T65);
  VARSET(YgooScolsStabYLtab_enumG,T64);
  lit_106 = YPPsym((P)"@vec");
  lit_107 = YPPlist(1,YPPsym((P)"_x"));
  T66 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Ovec_53 = YPmet(FUNCODEREF(fun_Ovec_53),LITREF(lit_106),T66,ENVNUL,PNUL,sloc(329));
  T68 = VARREF_OR(YgooScolsStabYOvec,YPfalse);
  T69 = fun_Ovec_53;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YgooScolsStabYOvec,T67);
  lit_108 = YPPsym((P)"@vec-setter");
  lit_109 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T70 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Ovec_setter_54 = YPmet(FUNCODEREF(fun_Ovec_setter_54),LITREF(lit_108),T70,ENVNUL,PNUL,sloc(329));
  T72 = VARREF_OR(YgooScolsStabYOvec_setter,YPfalse);
  T73 = fun_Ovec_setter_54;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T73);
  VARSET(YgooScolsStabYOvec_setter,T71);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOvec),VARREF(YgooScolsStabYOvec_setter),VARREF(YgooScolsStabYLtab_vecG),VARREF(YPprop_unbound_error));
  lit_110 = YPPsym((P)"@buc");
  lit_111 = YPPlist(1,YPPsym((P)"_x"));
  T74 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Obuc_55 = YPmet(FUNCODEREF(fun_Obuc_55),LITREF(lit_110),T74,ENVNUL,PNUL,sloc(330));
  T76 = VARREF_OR(YgooScolsStabYObuc,YPfalse);
  T77 = fun_Obuc_55;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YgooScolsStabYObuc,T75);
  lit_112 = YPPsym((P)"@buc-setter");
  lit_113 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T78 = YPsig(LITREF(lit_113),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Obuc_setter_56 = YPmet(FUNCODEREF(fun_Obuc_setter_56),LITREF(lit_112),T78,ENVNUL,PNUL,sloc(330));
  T80 = VARREF_OR(YgooScolsStabYObuc_setter,YPfalse);
  T81 = fun_Obuc_setter_56;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T81);
  VARSET(YgooScolsStabYObuc_setter,T79);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYObuc),VARREF(YgooScolsStabYObuc_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_114 = YPPsym((P)"@idx");
  lit_115 = YPPlist(1,YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Oidx_57 = YPmet(FUNCODEREF(fun_Oidx_57),LITREF(lit_114),T82,ENVNUL,PNUL,sloc(331));
  T84 = VARREF_OR(YgooScolsStabYOidx,YPfalse);
  T85 = fun_Oidx_57;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YgooScolsStabYOidx,T83);
  lit_116 = YPPsym((P)"@idx-setter");
  lit_117 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T86 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Oidx_setter_58 = YPmet(FUNCODEREF(fun_Oidx_setter_58),LITREF(lit_116),T86,ENVNUL,PNUL,sloc(331));
  T88 = VARREF_OR(YgooScolsStabYOidx_setter,YPfalse);
  T89 = fun_Oidx_setter_58;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T89);
  VARSET(YgooScolsStabYOidx_setter,T87);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOidx),VARREF(YgooScolsStabYOidx_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_118 = YPPsym((P)"@fin?");
  lit_119 = YPPlist(1,YPPsym((P)"_x"));
  T90 = YPsig(LITREF(lit_119),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_OfinQ_59 = YPmet(FUNCODEREF(fun_OfinQ_59),LITREF(lit_118),T90,ENVNUL,PNUL,sloc(332));
  T92 = VARREF_OR(YgooScolsStabYOfinQ,YPfalse);
  T93 = fun_OfinQ_59;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T93);
  VARSET(YgooScolsStabYOfinQ,T91);
  lit_120 = YPPsym((P)"@fin?-setter");
  lit_121 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T94 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YLlogG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_OfinQ_setter_60 = YPmet(FUNCODEREF(fun_OfinQ_setter_60),LITREF(lit_120),T94,ENVNUL,PNUL,sloc(332));
  T96 = VARREF_OR(YgooScolsStabYOfinQ_setter,YPfalse);
  T97 = fun_OfinQ_setter_60;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T97);
  VARSET(YgooScolsStabYOfinQ_setter,T95);
  lit_122 = YPPlist(1,YPPsym((P)"_x"));
  T98 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T98,ENVNUL,PNUL,sloc(332));
  T99 = fun_61;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOfinQ),VARREF(YgooScolsStabYOfinQ_setter),VARREF(YLlogG),T99);
  T100 = XCALL3(1,VARREF(Ynew),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOfinQ),YPtrue);
  VARSET(YgooScolsStabYDfin_enum,T100);
  lit_123 = YPPsym((P)"enum");
  lit_124 = YPPlist(1,YPPsym((P)"table"));
  lit_125 = YPPlist(1,YPPsym((P)"b"));
  lit_126 = YPPlist(1,YPPsym((P)"i"));
  T103 = YPsig(LITREF(lit_126),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_inner_62 = YPmet(FUNCODEREF(fun_inner_62),LITREF(lit_78),T103,ENVNUL,PNUL,sloc(343));
  T102 = YPsig(LITREF(lit_125),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_outer_63 = YPmet(FUNCODEREF(fun_outer_63),LITREF(lit_76),T102,ENVNUL,PNUL,sloc(341));
  T101 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsStabYLtab_enumG),Ynil);
  fun_enum_64 = YPmet(FUNCODEREF(fun_enum_64),LITREF(lit_123),T101,ENVNUL,PNUL,sloc(335));
  T105 = VARREF_OR(YgooScolsScolYenum,YPfalse);
  T106 = fun_enum_64;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T106);
  VARSET(YgooScolsScolYenum,T104);
  lit_127 = YPPsym((P)"nxt");
  lit_128 = YPPlist(1,YPPsym((P)"e"));
  lit_129 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"first?"));
  lit_130 = YPPlist(1,YPPsym((P)"i"));
  T109 = YPsig(LITREF(lit_130),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_inner_65 = YPmet(FUNCODEREF(fun_inner_65),LITREF(lit_78),T109,ENVNUL,PNUL,sloc(361));
  T108 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_outer_66 = YPmet(FUNCODEREF(fun_outer_66),LITREF(lit_76),T108,ENVNUL,PNUL,sloc(359));
  T107 = YPsig(LITREF(lit_128),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsStabYLtab_enumG),Ynil);
  fun_nxt_67 = YPmet(FUNCODEREF(fun_nxt_67),LITREF(lit_127),T107,ENVNUL,PNUL,sloc(353));
  T111 = VARREF_OR(YgooScolsScolYnxt,YPfalse);
  T112 = fun_nxt_67;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T112);
  VARSET(YgooScolsScolYnxt,T110);
  lit_131 = YPPsym((P)"fin?");
  lit_132 = YPPlist(1,YPPsym((P)"e"));
  T113 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_68 = YPmet(FUNCODEREF(fun_finQ_68),LITREF(lit_131),T113,ENVNUL,PNUL,sloc(371));
  T115 = VARREF_OR(YgooScolsScolYfinQ,YPfalse);
  T116 = fun_finQ_68;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T116);
  VARSET(YgooScolsScolYfinQ,T114);
  lit_133 = YPPsym((P)"now-key");
  lit_134 = YPPlist(1,YPPsym((P)"e"));
  T117 = YPsig(LITREF(lit_134),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_key_69 = YPmet(FUNCODEREF(fun_now_key_69),LITREF(lit_133),T117,ENVNUL,PNUL,sloc(374));
  T119 = VARREF_OR(YgooScolsScolYnow_key,YPfalse);
  T120 = fun_now_key_69;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T120);
  VARSET(YgooScolsScolYnow_key,T118);
  lit_135 = YPPsym((P)"now");
  lit_136 = YPPlist(1,YPPsym((P)"e"));
  T121 = YPsig(LITREF(lit_136),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_70 = YPmet(FUNCODEREF(fun_now_70),LITREF(lit_135),T121,ENVNUL,PNUL,sloc(379));
  T123 = VARREF_OR(YgooScolsScolYnow,YPfalse);
  T124 = fun_now_70;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T124);
  VARSET(YgooScolsScolYnow,T122);
  lit_137 = YPPsym((P)"now-setter");
  lit_138 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"e"));
  T125 = YPsig(LITREF(lit_138),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_71 = YPmet(FUNCODEREF(fun_now_setter_71),LITREF(lit_137),T125,ENVNUL,PNUL,sloc(384));
  T127 = VARREF_OR(YgooScolsScolYnow_setter,YPfalse);
  T128 = fun_now_setter_71;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T128);
  VARSET(YgooScolsScolYnow_setter,T126);
  lit_139 = YPPsym((P)"tab-keys");
  lit_140 = YPPlist(1,YPPsym((P)"table"));
  lit_141 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  T130 = YPsig(LITREF(lit_141),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T130,ENVNUL,PNUL,sloc(393));
  T129 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_tab_keys_73 = YPmet(FUNCODEREF(fun_tab_keys_73),LITREF(lit_139),T129,ENVNUL,PNUL,sloc(392));
  T132 = VARREF_OR(YgooScolsStabYtab_keys,YPfalse);
  T133 = fun_tab_keys_73;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T133);
  VARSET(YgooScolsStabYtab_keys,T131);
  lit_142 = YPPsym((P)"grow-table");
  lit_143 = YPPlist(1,YPPsym((P)"table"));
  T134 = YPsig(LITREF(lit_143),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_grow_table_74 = YPmet(FUNCODEREF(fun_grow_table_74),LITREF(lit_142),T134,ENVNUL,PNUL,sloc(395));
  T136 = VARREF_OR(YgooScolsStabYgrow_table,YPfalse);
  T137 = fun_grow_table_74;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T137);
  VARSET(YgooScolsStabYgrow_table,T135);
  lit_144 = YPPsym((P)"rehash-table");
  lit_145 = YPPlist(1,YPPsym((P)"table"));
  T138 = YPsig(LITREF(lit_145),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_rehash_table_75 = YPmet(FUNCODEREF(fun_rehash_table_75),LITREF(lit_144),T138,ENVNUL,PNUL,sloc(416));
  T140 = VARREF_OR(YgooScolsStabYrehash_table,YPfalse);
  T141 = fun_rehash_table_75;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T141);
  VARSET(YgooScolsStabYrehash_table,T139);
  lit_146 = YPPsym((P)"choose-table-geometry");
  lit_147 = YPPlist(1,YPPsym((P)"capacity"));
  lit_148 = YPPlist(1,YPPsym((P)"return"));
  lit_149 = YPPlist(1,YPPsym((P)"p"));
  lit_150 = YPsb((P)"Not enough primes to compute new table size");
  T145 = YPsig(LITREF(lit_149),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T145,ENVNUL,PNUL,sloc(441));
  T144 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T144,ENVNUL,PNUL,sloc(432));
  T143 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T142 = YPsig(LITREF(lit_147),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),T143,Ynil);
  YgooScolsStabYchoose_table_geometry = YPmet(FUNCODEREF(YgooScolsStabYchoose_table_geometry),LITREF(lit_146),T142,ENVNUL,PNUL,sloc(429));
  T146 = YgooScolsStabYchoose_table_geometry;
  VARSET(YgooScolsStabYchoose_table_geometry,T146);
  lit_151 = YPPsym((P)"copy-to-new-vector");
  lit_152 = YPPlist(2,YPPsym((P)"table"),YPPsym((P)"new-vector"));
  lit_153 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  lit_154 = YPPlist(2,YPPsym((P)"new-bucket-index"),YPPsym((P)"probes"));
  lit_155 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"index"));
  lit_156 = YPsb((P)"The table is totally full this shouldn't happen");
  T150 = YPsig(LITREF(lit_155),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_79 = YPmet(FUNCODEREF(fun_inner_79),LITREF(lit_78),T150,ENVNUL,PNUL,sloc(464));
  T149 = YPsig(LITREF(lit_154),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_outer_80 = YPmet(FUNCODEREF(fun_outer_80),LITREF(lit_76),T149,ENVNUL,PNUL,sloc(460));
  T148 = YPsig(LITREF(lit_153),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T148,ENVNUL,PNUL,sloc(449));
  T147 = YPsig(LITREF(lit_152),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_copy_to_new_vector_82 = YPmet(FUNCODEREF(fun_copy_to_new_vector_82),LITREF(lit_151),T147,ENVNUL,PNUL,sloc(447));
  T152 = VARREF_OR(YgooScolsStabYcopy_to_new_vector,YPfalse);
  T153 = fun_copy_to_new_vector_82;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T153);
  VARSET(YgooScolsStabYcopy_to_new_vector,T151);
  lit_157 = YPPlist(1,YPPsym((P)"x"));
  T154 = YPsig(LITREF(lit_157),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_83 = YPmet(FUNCODEREF(fun_id_hash_83),LITREF(lit_57),T154,ENVNUL,PNUL,sloc(486));
  T156 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T157 = fun_id_hash_83;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T157);
  VARSET(YgooScolsStabYid_hash,T155);
  lit_158 = YPPlist(1,YPPsym((P)"x"));
  T158 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YLlogG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_84 = YPmet(FUNCODEREF(fun_id_hash_84),LITREF(lit_57),T158,ENVNUL,PNUL,sloc(488));
  T160 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T161 = fun_id_hash_84;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T161);
  VARSET(YgooScolsStabYid_hash,T159);
  lit_159 = YPPsym((P)"rot");
  lit_160 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T162 = YPsig(LITREF(lit_160),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  YgooScolsStabYrot = YPmet(FUNCODEREF(YgooScolsStabYrot),LITREF(lit_159),T162,ENVNUL,PNUL,sloc(491));
  T163 = YgooScolsStabYrot;
  VARSET(YgooScolsStabYrot,T163);
  lit_161 = YPPlist(1,YPPsym((P)"x"));
  T164 = YPsig(LITREF(lit_161),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_86 = YPmet(FUNCODEREF(fun_id_hash_86),LITREF(lit_57),T164,ENVNUL,PNUL,sloc(494));
  T166 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T167 = fun_id_hash_86;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T167);
  VARSET(YgooScolsStabYid_hash,T165);
  lit_162 = YPPlist(1,YPPsym((P)"x"));
  T168 = YPsig(LITREF(lit_162),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_87 = YPmet(FUNCODEREF(fun_id_hash_87),LITREF(lit_57),T168,ENVNUL,PNUL,sloc(498));
  T170 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T171 = fun_id_hash_87;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T171);
  VARSET(YgooScolsStabYid_hash,T169);
  lit_163 = YPPlist(1,YPPsym((P)"x"));
  T172 = YPsig(LITREF(lit_163),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_88 = YPmet(FUNCODEREF(fun_id_hash_88),LITREF(lit_57),T172,ENVNUL,PNUL,sloc(501));
  T174 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T175 = fun_id_hash_88;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T175);
  VARSET(YgooScolsStabYid_hash,T173);
  lit_164 = YPPlist(1,YPPsym((P)"x"));
  lit_165 = YPPsym((P)"loop");
  lit_166 = YPPlist(2,YPPsym((P)"t-enum"),YPPsym((P)"cur-hash"));
  T177 = YPsig(LITREF(lit_166),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_89 = YPmet(FUNCODEREF(fun_loop_89),LITREF(lit_165),T177,ENVNUL,PNUL,sloc(505));
  T176 = YPsig(LITREF(lit_164),YPPlist(1,VARREF(YLtupG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_90 = YPmet(FUNCODEREF(fun_id_hash_90),LITREF(lit_57),T176,ENVNUL,PNUL,sloc(504));
  T179 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T180 = fun_id_hash_90;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T180);
  VARSET(YgooScolsStabYid_hash,T178);
  lit_167 = YPPsym((P)"key-type");
  lit_168 = YPPlist(1,YPPsym((P)"x"));
  T181 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_91 = YPmet(FUNCODEREF(fun_key_type_91),LITREF(lit_167),T181,ENVNUL,PNUL,sloc(514));
  T183 = VARREF_OR(YgooScolsScolYkey_type,YPfalse);
  T184 = fun_key_type_91;
  T182 = XCALL2(1,VARREF(YPdefine_method),T183,T184);
  VARSET(YgooScolsScolYkey_type,T182);
  lit_169 = YPPsym((P)"elt-type");
  lit_170 = YPPlist(1,YPPsym((P)"x"));
  T185 = YPsig(LITREF(lit_170),YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_92 = YPmet(FUNCODEREF(fun_elt_type_92),LITREF(lit_169),T185,ENVNUL,PNUL,sloc(515));
  T187 = VARREF_OR(YgooScolsScolYelt_type,YPfalse);
  T188 = fun_elt_type_92;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T188);
  VARSET(YgooScolsScolYelt_type,T186);
  lit_171 = YPPsym((P)"case-insensitive-string-hash");
  lit_172 = YPPlist(1,YPPsym((P)"x"));
  lit_173 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"hash"));
  T190 = YPsig(LITREF(lit_173),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_93 = YPmet(FUNCODEREF(fun_loop_93),LITREF(lit_165),T190,ENVNUL,PNUL,sloc(519));
  T189 = YPsig(LITREF(lit_172),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooScolsStabYcase_insensitive_string_hash = YPmet(FUNCODEREF(YgooScolsStabYcase_insensitive_string_hash),LITREF(lit_171),T189,ENVNUL,PNUL,sloc(517));
  T191 = YgooScolsStabYcase_insensitive_string_hash;
  VARSET(YgooScolsStabYcase_insensitive_string_hash,T191);
  lit_174 = YPPsym((P)"case-insensitive-string-equal");
  lit_175 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  lit_176 = YPPlist(1,YPPsym((P)"i"));
  T193 = YPsig(LITREF(lit_176),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_95 = YPmet(FUNCODEREF(fun_loop_95),LITREF(lit_165),T193,ENVNUL,PNUL,sloc(528));
  T192 = YPsig(LITREF(lit_175),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooScolsStabYcase_insensitive_string_equal = YPmet(FUNCODEREF(YgooScolsStabYcase_insensitive_string_equal),LITREF(lit_174),T192,ENVNUL,PNUL,sloc(525));
  T194 = YgooScolsStabYcase_insensitive_string_equal;
  VARSET(YgooScolsStabYcase_insensitive_string_equal,T194);
  lit_177 = YPPlist(1,YPPsym((P)"_"));
  T195 = YPsig(LITREF(lit_177),YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_97 = YPmet(FUNCODEREF(fun_key_test_97),LITREF(lit_67),T195,ENVNUL,PNUL,sloc(535));
  T197 = VARREF_OR(YgooScolsScolYkey_test,YPfalse);
  T198 = fun_key_test_97;
  T196 = XCALL2(1,VARREF(YPdefine_method),T197,T198);
  VARSET(YgooScolsScolYkey_test,T196);
  lit_178 = YPPlist(1,YPPsym((P)"_"));
  T199 = YPsig(LITREF(lit_178),YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_tab_hash_98 = YPmet(FUNCODEREF(fun_tab_hash_98),LITREF(lit_55),T199,ENVNUL,PNUL,sloc(536));
  T201 = VARREF_OR(YgooScolsStabYtab_hash,YPfalse);
  T202 = fun_tab_hash_98;
  T200 = XCALL2(1,VARREF(YPdefine_method),T201,T202);
  VARSET(YgooScolsStabYtab_hash,T200);
  lit_179 = YPPsym((P)"add!");
  lit_180 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T205 = YPsig(LITREF(lit_180),YPPlist(2,VARREF(YgooScolsStabYLsetG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsStabYLsetG),Ynil);
  T204 = fun_addX_99 = YPmet(FUNCODEREF(fun_addX_99),LITREF(lit_179),T205,ENVNUL,PNUL,sloc(542));
  T208 = VARREF_OR(YgooScolsScolxYaddX,YPfalse);
  T209 = fun_addX_99;
  T207 = XCALL2(1,VARREF(YPdefine_method),T208,T209);
  T206 = VARSET(YgooScolsScolxYaddX,T207);
  T203 = T206;
  return T203;
}

P YgooScolsStabY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
DEFCREGS();
loop:
  lit_181 = YPPsym((P)"mem?");
  lit_182 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_182),YPPlist(2,VARREF(YgooScolsStabYLsetG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_memQ_100 = YPmet(FUNCODEREF(fun_memQ_100),LITREF(lit_181),T0,ENVNUL,PNUL,sloc(546));
  T2 = VARREF_OR(YgooScolsScolYmemQ,YPfalse);
  T3 = fun_memQ_100;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YgooScolsScolYmemQ,T1);
  lit_183 = YPPsym((P)"elts");
  lit_184 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"keys"));
  lit_185 = YPPlist(1,YPPsym((P)"k"));
  T8 = YPsig(LITREF(lit_185),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T7 = fun_101 = YPmet(FUNCODEREF(fun_101),YPfalse,T8,ENVNUL,PNUL,sloc(551));
  T6 = YPsig(LITREF(lit_184),YPPlist(2,VARREF(YLcolG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T5 = fun_elts_102 = YPmet(FUNCODEREF(fun_elts_102),LITREF(lit_183),T6,ENVNUL,PNUL,sloc(549));
  T11 = VARREF_OR(YgooScolsScolYelts,YPfalse);
  T12 = fun_elts_102;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T12);
  T9 = VARSET(YgooScolsScolYelts,T10);
  T4 = T9;
  return T4;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
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
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
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
  {"type-object", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-1---", PVAR, NULL},
  {"%count", CVAR, &YgooScolsStabYPcount},
  {"%bucket-depth", CVAR, &YgooScolsStabYPbucket_depth},
  {"@buc", CVAR, &YgooScolsStabYObuc},
  {"%data", CVAR, &YgooScolsStabYPdata},
  {"case-insensitive-string-hash", CVAR, &YgooScolsStabYcase_insensitive_string_hash},
  {"<str-tab>", CVAR, &YgooScolsStabYLstr_tabG},
  {"choose-table-geometry", CVAR, &YgooScolsStabYchoose_table_geometry},
  {"id-hash", CVAR, &YgooScolsStabYid_hash},
  {"$fin-enum", CVAR, &YgooScolsStabYDfin_enum},
  {"<tab-enum>", CVAR, &YgooScolsStabYLtab_enumG},
  {"tab-hash", CVAR, &YgooScolsStabYtab_hash},
  {"@elt", PVAR, NULL},
  {"@elt-setter", PVAR, NULL},
  {"rot", CVAR, &YgooScolsStabYrot},
  {"clr!", CVAR, &YgooScolsStabYclrX},
  {"rehash-table", CVAR, &YgooScolsStabYrehash_table},
  {"<tab-vec>", CVAR, &YgooScolsStabYLtab_vecG},
  {"%vacated", CVAR, &YgooScolsStabYPvacated},
  {"%primary-modulus-setter", CVAR, &YgooScolsStabYPprimary_modulus_setter},
  {"@fill!", CVAR, &YgooScolsStabYOfillX},
  {"@idx", CVAR, &YgooScolsStabYOidx},
  {"---main-2---", PVAR, NULL},
  {"grow-table", CVAR, &YgooScolsStabYgrow_table},
  {"%vector-setter", CVAR, &YgooScolsStabYPvector_setter},
  {"@fin?-setter", CVAR, &YgooScolsStabYOfinQ_setter},
  {"$empty-cell-marker", CVAR, &YgooScolsStabYDempty_cell_marker},
  {"tab-growth-threshold-setter", CVAR, &YgooScolsStabYtab_growth_threshold_setter},
  {"tab-shrink-threshold", CVAR, &YgooScolsStabYtab_shrink_threshold},
  {"tab-growth-factor-setter", CVAR, &YgooScolsStabYtab_growth_factor_setter},
  {"%primary-modulus", CVAR, &YgooScolsStabYPprimary_modulus},
  {"---main-0---", PVAR, NULL},
  {"%secondary-modulus-setter", CVAR, &YgooScolsStabYPsecondary_modulus_setter},
  {"@idx-setter", CVAR, &YgooScolsStabYOidx_setter},
  {"@vec-setter", CVAR, &YgooScolsStabYOvec_setter},
  {"@buc-setter", CVAR, &YgooScolsStabYObuc_setter},
  {"@fin?", CVAR, &YgooScolsStabYOfinQ},
  {"%vacated-setter", CVAR, &YgooScolsStabYPvacated_setter},
  {"%secondary-modulus", CVAR, &YgooScolsStabYPsecondary_modulus},
  {"%n-buckets", CVAR, &YgooScolsStabYPn_buckets},
  {"*twin-primes*", CVAR, &YgooScolsStabYTtwin_primesT},
  {"@vec", CVAR, &YgooScolsStabYOvec},
  {"<set>", CVAR, &YgooScolsStabYLsetG},
  {"tab-growth-factor", CVAR, &YgooScolsStabYtab_growth_factor},
  {"tab-growth-threshold", CVAR, &YgooScolsStabYtab_growth_threshold},
  {"tab-shrink-threshold-setter", CVAR, &YgooScolsStabYtab_shrink_threshold_setter},
  {"tab-keys", CVAR, &YgooScolsStabYtab_keys},
  {"%vector", CVAR, &YgooScolsStabYPvector},
  {"%n-buckets-setter", CVAR, &YgooScolsStabYPn_buckets_setter},
  {"fab-tab-vec", CVAR, &YgooScolsStabYfab_tab_vec},
  {"%count-setter", CVAR, &YgooScolsStabYPcount_setter},
  {"%bucket-depth-setter", CVAR, &YgooScolsStabYPbucket_depth_setter},
  {"$vacated-cell-marker", CVAR, &YgooScolsStabYDvacated_cell_marker},
  {"case-insensitive-string-equal", CVAR, &YgooScolsStabYcase_insensitive_string_equal},
  {"%data-setter", CVAR, &YgooScolsStabYPdata_setter},
  {"copy-to-new-vector", CVAR, &YgooScolsStabYcopy_to_new_vector},
  {"*debug-tables?*", CVAR, &YgooScolsStabYTdebug_tablesQT},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"case-insensitive-string-hash", NULL},
  {"<str-tab>", NULL},
  {"id-hash", NULL},
  {"tab-hash", NULL},
  {"tab-shrink-threshold-setter", NULL},
  {"tab-growth-threshold-setter", NULL},
  {"tab-shrink-threshold", NULL},
  {"tab-growth-factor-setter", NULL},
  {"tab-growth-threshold", NULL},
  {"<set>", NULL},
  {"<tab>", NULL},
  {"tab-growth-factor", NULL},
  {"case-insensitive-string-equal", NULL},
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
extern void load_module_gooSmacros (void);
extern void load_module_gooStypes (void);
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
  load_module_gooSmacros();
  load_module_gooStypes();
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
