/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/tab");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/tab */

EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooScolsStabYOidx,"goo/cols/tab","@idx");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooScolsStabYchoose_table_geometry,"goo/cols/tab","choose-table-geometry");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YgooScolsStabYDempty_cell_marker,"goo/cols/tab","$empty-cell-marker");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YgooScolsStabYPvacated_setter,"goo/cols/tab","%vacated-setter");
DEF(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YgooScolsStabYOfinQ_setter,"goo/cols/tab","@fin?-setter");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
DEF(YgooScolsStabYTtwin_primesT,"goo/cols/tab","*twin-primes*");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
DEF(YgooScolsStabYOvec_setter,"goo/cols/tab","@vec-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YgooScolsStabYLtab_vecG,"goo/cols/tab","<tab-vec>");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YgooScolsStabYrehash_table,"goo/cols/tab","rehash-table");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YgooScolsStabYPvacated,"goo/cols/tab","%vacated");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YgooScolsStabYOfillX,"goo/cols/tab","@fill!");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YgooScolsStabYDvacated_cell_marker,"goo/cols/tab","$vacated-cell-marker");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
DEF(YgooScolsStabYOfinQ,"goo/cols/tab","@fin?");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
DEF(YgooScolsStabYPprimary_modulus_setter,"goo/cols/tab","%primary-modulus-setter");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YgooScolsStabYPvector,"goo/cols/tab","%vector");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YgooScolsStabYOvec,"goo/cols/tab","@vec");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLproductG,"goo/boot","<product>");
DEF(YgooScolsStabYgrow_table,"goo/cols/tab","grow-table");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YgooScolsStabYPvector_setter,"goo/cols/tab","%vector-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ynul,"goo/boot","nul");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ynil,"goo/boot","nil");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYas_log,"goo/math","as-log");
DEF(YgooScolsStabYPprimary_modulus,"goo/cols/tab","%primary-modulus");
DEF(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YgooScolsStabYPsecondary_modulus_setter,"goo/cols/tab","%secondary-modulus-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YtT,"goo/boot","t*");
DEF(YgooScolsStabYObuc_setter,"goo/cols/tab","@buc-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
DEF(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
DEF(YgooScolsStabYtab_keys,"goo/cols/tab","tab-keys");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YgooScolsStabYfab_tab_vec,"goo/cols/tab","fab-tab-vec");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
DEF(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YOlst,"goo/boot","@lst");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YgooScolsStabYPn_buckets_setter,"goo/cols/tab","%n-buckets-setter");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYN,"goo/math","~");
DEF(YgooScolsStabYPsecondary_modulus,"goo/cols/tab","%secondary-modulus");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
DEF(YgooScolsStabYObuc,"goo/cols/tab","@buc");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(YgooScolsStabYPbucket_depth_setter,"goo/cols/tab","%bucket-depth-setter");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YgooScolsStabYDfin_enum,"goo/cols/tab","$fin-enum");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooScolsStabYTdebug_tablesQT,"goo/cols/tab","*debug-tables?*");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
DEF(YgooScolsStabYPcount_setter,"goo/cols/tab","%count-setter");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YgooScolsStabYcopy_to_new_vector,"goo/cols/tab","copy-to-new-vector");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
DEF(YgooScolsStabYPn_buckets,"goo/cols/tab","%n-buckets");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YgooScolsStabYLtab_enumG,"goo/cols/tab","<tab-enum>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(YgooScolsStabYrot,"goo/cols/tab","rot");
DEF(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YgooScolsStabYOidx_setter,"goo/cols/tab","@idx-setter");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YgooScolsStabYclrX,"goo/cols/tab","clr!");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YgooScolsStabYPbucket_depth,"goo/cols/tab","%bucket-depth");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YgooScolsStabYPdata,"goo/cols/tab","%data");
DEF(YgooScolsStabYPdata_setter,"goo/cols/tab","%data-setter");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yclass_of,"goo/boot","class-of");
DEF(YgooScolsStabYPcount,"goo/cols/tab","%count");
EXT(YgooSmathYE,"goo/math","=");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_88);
DEFLIT(lit_107);
DEFLIT(lit_106);
DEFLIT(lit_59);
DEFLIT(lit_157);
DEFLIT(lit_84);
DEFLIT(lit_141);
DEFLIT(lit_67);
DEFLIT(lit_32);
DEFLIT(lit_112);
DEFLIT(lit_158);
DEFLIT(lit_145);
DEFLIT(lit_17);
DEFLIT(lit_39);
DEFLIT(lit_29);
DEFLIT(lit_65);
DEFLIT(lit_75);
DEFLIT(lit_77);
DEFLIT(lit_125);
DEFLIT(lit_153);
DEFLIT(lit_136);
DEFLIT(lit_15);
DEFLIT(lit_9);
DEFLIT(lit_127);
DEFLIT(lit_82);
DEFLIT(lit_154);
DEFLIT(lit_78);
DEFLIT(lit_111);
DEFLIT(lit_146);
DEFLIT(lit_135);
DEFLIT(lit_12);
DEFLIT(lit_148);
DEFLIT(lit_150);
DEFLIT(lit_99);
DEFLIT(lit_8);
DEFLIT(lit_80);
DEFLIT(lit_47);
DEFLIT(lit_37);
DEFLIT(lit_105);
DEFLIT(lit_79);
DEFLIT(lit_108);
DEFLIT(lit_16);
DEFLIT(lit_92);
DEFLIT(lit_58);
DEFLIT(lit_36);
DEFLIT(lit_130);
DEFLIT(lit_94);
DEFLIT(lit_162);
DEFLIT(lit_20);
DEFLIT(lit_57);
DEFLIT(lit_85);
DEFLIT(lit_26);
DEFLIT(lit_42);
DEFLIT(lit_11);
DEFLIT(lit_137);
DEFLIT(lit_104);
DEFLIT(lit_140);
DEFLIT(lit_3);
DEFLIT(lit_138);
DEFLIT(lit_0);
DEFLIT(lit_149);
DEFLIT(lit_69);
DEFLIT(lit_89);
DEFLIT(lit_102);
DEFLIT(lit_109);
DEFLIT(lit_120);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_133);
DEFLIT(lit_95);
DEFLIT(lit_56);
DEFLIT(lit_10);
DEFLIT(lit_160);
DEFLIT(lit_4);
DEFLIT(lit_19);
DEFLIT(lit_41);
DEFLIT(lit_98);
DEFLIT(lit_49);
DEFLIT(lit_115);
DEFLIT(lit_43);
DEFLIT(lit_71);
DEFLIT(lit_60);
DEFLIT(lit_93);
DEFLIT(lit_51);
DEFLIT(lit_128);
DEFLIT(lit_62);
DEFLIT(lit_55);
DEFLIT(lit_25);
DEFLIT(lit_83);
DEFLIT(lit_119);
DEFLIT(lit_110);
DEFLIT(lit_28);
DEFLIT(lit_117);
DEFLIT(lit_44);
DEFLIT(lit_116);
DEFLIT(lit_123);
DEFLIT(lit_63);
DEFLIT(lit_159);
DEFLIT(lit_103);
DEFLIT(lit_76);
DEFLIT(lit_64);
DEFLIT(lit_81);
DEFLIT(lit_129);
DEFLIT(lit_91);
DEFLIT(lit_61);
DEFLIT(lit_122);
DEFLIT(lit_5);
DEFLIT(lit_142);
DEFLIT(lit_90);
DEFLIT(lit_22);
DEFLIT(lit_45);
DEFLIT(lit_23);
DEFLIT(lit_27);
DEFLIT(lit_100);
DEFLIT(lit_113);
DEFLIT(lit_124);
DEFLIT(lit_155);
DEFLIT(lit_156);
DEFLIT(lit_46);
DEFLIT(lit_163);
DEFLIT(lit_152);
DEFLIT(lit_53);
DEFLIT(lit_134);
DEFLIT(lit_1);
DEFLIT(lit_14);
DEFLIT(lit_34);
DEFLIT(lit_147);
DEFLIT(lit_161);
DEFLIT(lit_143);
DEFLIT(lit_68);
DEFLIT(lit_132);
DEFLIT(lit_139);
DEFLIT(lit_24);
DEFLIT(lit_73);
DEFLIT(lit_40);
DEFLIT(lit_50);
DEFLIT(lit_126);
DEFLIT(lit_118);
DEFLIT(lit_86);
DEFLIT(lit_30);
DEFLIT(lit_6);
DEFLIT(lit_144);
DEFLIT(lit_87);
DEFLIT(lit_13);
DEFLIT(lit_33);
DEFLIT(lit_114);
DEFLIT(lit_121);
DEFLIT(lit_97);
DEFLIT(lit_72);
DEFLIT(lit_52);
DEFLIT(lit_70);
DEFLIT(lit_151);
DEFLIT(lit_31);
DEFLIT(lit_101);
DEFLIT(lit_18);
DEFLIT(lit_96);
DEFLIT(lit_74);
DEFLIT(lit_131);
DEFLIT(lit_48);
DEFLIT(lit_66);
DEFLIT(lit_54);
DEFLIT(lit_35);
DEFLIT(lit_21);
DEFLIT(lit_38);

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
LOCFOR(fun_elt_or_35);
LOCFOR(fun_elt_setter_36);
LOCFOR(fun_del_37);
LOCFOR(fun_delX_38);
LOCFOR(fun_do_keyed_39);
LOCFOR(fun_do_40);
LOCFOR(fun_zapX_41);
LOCFOR(fun_len_42);
LOCFOR(fun_Ovec_43);
LOCFOR(fun_Ovec_setter_44);
LOCFOR(fun_Obuc_45);
LOCFOR(fun_Obuc_setter_46);
LOCFOR(fun_Oidx_47);
LOCFOR(fun_Oidx_setter_48);
LOCFOR(fun_OfinQ_49);
LOCFOR(fun_OfinQ_setter_50);
LOCFOR(fun_51);
LOCFOR(fun_enum_52);
LOCFOR(fun_nxt_53);
LOCFOR(fun_finQ_54);
LOCFOR(fun_now_key_55);
LOCFOR(fun_now_56);
LOCFOR(fun_now_setter_57);
LOCFOR(fun_58);
LOCFOR(fun_tab_keys_59);
LOCFOR(fun_grow_table_60);
LOCFOR(fun_rehash_table_61);
LOCFOR(fun_62);
LOCFOR(fun_63);
FUNFOR(YgooScolsStabYchoose_table_geometry);
LOCFOR(fun_65);
LOCFOR(fun_copy_to_new_vector_66);
LOCFOR(fun_id_hash_67);
LOCFOR(fun_id_hash_68);
FUNFOR(YgooScolsStabYrot);
LOCFOR(fun_id_hash_70);
LOCFOR(fun_id_hash_71);
LOCFOR(fun_id_hash_72);
LOCFOR(fun_id_hash_73);
LOCFOR(fun_key_type_74);
LOCFOR(fun_elt_type_75);
FUNFOR(YgooScolsStabYcase_insensitive_string_hash);
FUNFOR(YgooScolsStabYcase_insensitive_string_equal);
LOCFOR(fun_key_test_78);
LOCFOR(fun_tab_hash_79);
LOCFOR(fun_addX_80);
LOCFOR(fun_memQ_81);
LOCFOR(fun_82);
LOCFOR(fun_elts_83);
extern P YgooScolsStabY___main_0___ ();
extern P YgooScolsStabY___main_1___ ();
extern P YgooScolsStabY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_tab_growth_factor_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYtab_growth_factor));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_tab_growth_factor_setter_1) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYtab_growth_factor));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_7));
}

FUNCODEDEF(fun_tab_growth_threshold_3) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYtab_growth_threshold));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_tab_growth_threshold_setter_4) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYtab_growth_threshold));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_13));
}

FUNCODEDEF(fun_tab_shrink_threshold_6) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYtab_shrink_threshold));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_tab_shrink_threshold_setter_7) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYtab_shrink_threshold));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_19));
}

FUNCODEDEF(fun_Pvacated_9) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYPvacated));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pvacated_setter_10) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPvacated));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_Pprimary_modulus_12) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYPprimary_modulus));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pprimary_modulus_setter_13) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPprimary_modulus));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Psecondary_modulus_14) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYPsecondary_modulus));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Psecondary_modulus_setter_15) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPsecondary_modulus));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pn_buckets_16) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYPn_buckets));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pn_buckets_setter_17) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPn_buckets));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pbucket_depth_18) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYPbucket_depth));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pbucket_depth_setter_19) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPbucket_depth));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdata_20) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYPdata));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdata_setter_21) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPdata));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pcount_22) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYPcount));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pcount_setter_23) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPcount));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_Pvector_25) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYPvector));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pvector_setter_26) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPvector));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsStabYfab_tab_vec) {
  P size_,fill_value_,n_buckets_,bucket_depth_,primary_modulus_,secondary_modulus_;
  P vF2218;
  P T0,T1,T2;
LINK_STACK();
  ARG(size_, 0);
  ARG(fill_value_, 1);
  ARG(n_buckets_, 2);
  ARG(bucket_depth_, 3);
  ARG(primary_modulus_, 4);
  ARG(secondary_modulus_, 5);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPn_buckets),n_buckets_,VARREF(YgooScolsStabYPbucket_depth),bucket_depth_,VARREF(YgooScolsStabYPprimary_modulus),primary_modulus_,VARREF(YgooScolsStabYPsecondary_modulus),secondary_modulus_);
  vF2218 = T1;
  T2 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),size_,fill_value_);
  CALL2(1,VARREF(YgooScolsStabYPdata_setter),T2,vF2218);
  T0 = vF2218;
UNLINK_STACK();
  RET(T0);
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

P YgooScolsStabYOelt(P vector_,P index_) {
  P xF2220;
  P xF2219;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  T1 = XCALL1(1,VARREF(YgooScolsStabYPdata),vector_);
  xF2219 = index_;
  xF2220 = xF2219;
  T4 = (P)YPiGG(xF2220,(P)2);
  T3 = T4;
  T2 = T3;
  T0 = (P)YPrelt(T1,T2);
  return T0;
}

P YgooScolsStabYOelt_setter(P new_value_,P vector_,P index_) {
  P xF2222;
  P xF2221;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  T1 = XCALL1(1,VARREF(YgooScolsStabYPdata),vector_);
  xF2221 = index_;
  xF2222 = xF2221;
  T4 = (P)YPiGG(xF2222,(P)2);
  T3 = T4;
  T2 = T3;
  T0 = (P)YPrelt_setter(new_value_,T1,T2);
  return T0;
}

FUNCODEDEF(fun_clrX_31) {
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

FUNCODEDEF(fun_key_test_32) {
  P U_;
LINK_STACK();
  ARG(U_, 0);
UNLINK_STACK();
  RET(VARREF(YgooSmacrosYEE));
}

FUNCODEDEF(fun_tab_hash_33) {
  P U_;
LINK_STACK();
  ARG(U_, 0);
UNLINK_STACK();
  RET(VARREF(YgooScolsStabYid_hash));
}

FUNCODEDEF(fun_fab_34) {
  P type_,size_;
  P tableF2226;
  P bucket_depthF2225;
  P n_bucketsF2224;
  P tup26F2223;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(type_, 0);
  ARG(size_, 1);
  T1 = CALL1(1,VARREF(YgooScolsStabYchoose_table_geometry),size_);
  tup26F2223 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F2223,YPint((P)0));
  n_bucketsF2224 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F2223,YPint((P)1));
  bucket_depthF2225 = T5;
  T7 = CALL1(1,VARREF(Ynew),type_);
  tableF2226 = T7;
  T10 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF2225,YPint((P)2));
  T9 = CALL2(1,VARREF(YgooSmathYT),n_bucketsF2224,T10);
  T11 = CALL2(1,VARREF(YgooSmathY_),n_bucketsF2224,YPint((P)2));
  T8 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T9,VARREF(YgooScolsStabYDempty_cell_marker),n_bucketsF2224,bucket_depthF2225,n_bucketsF2224,T11);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),T8,tableF2226);
  T6 = tableF2226;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_or_35) {
  P table_,key_,default_;
  P this_keyF2239;
  P raw_indexF2238;
  P iF2237;
  P indexF2236;
  P probesF2235;
  P bucket_indexF2234;
  P bucket_offsetF2233;
  P bucket_indexF2232;
  P hashF2231;
  P bucket_depthF2230;
  P n_bucketsF2229;
  P vectorF2228;
  P test_functionF2227;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
LINK_STACK();
  ARG(table_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
  T1 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF2227 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2228 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2228);
  n_bucketsF2229 = T5;
  T7 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2228);
  bucket_depthF2230 = T7;
  T10 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T9 = CALL1(1,T10,key_);
  check_type(T9,VARREF(YLintG));
  hashF2231 = T9;
  T13 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF2228);
  T12 = CALL2(1,VARREF(YgooSmathYmod),hashF2231,T13);
  bucket_indexF2232 = T12;
  T17 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF2228);
  T16 = CALL2(1,VARREF(YgooSmathYmod),hashF2231,T17);
  T15 = CALL2(1,VARREF(YgooSmathYA),T16,YPint((P)1));
  bucket_offsetF2233 = T15;
  bucket_indexF2234 = bucket_indexF2232;
  probesF2235 = YPint((P)0);
  for (;;) {
    P a124_0,a124_1;
  loop124:
    T21 = CALL2(1,VARREF(YgooSmagYL),probesF2235,n_bucketsF2229);
    if (T21 != YPfalse) {
      T24 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF2230,YPint((P)2));
      T23 = CALL2(1,VARREF(YgooSmathYT),bucket_indexF2234,T24);
      indexF2236 = T23;
      iF2237 = YPint((P)0);
      raw_indexF2238 = indexF2236;
      for (;;) {
        P a125_0,a125_1;
      loop125:
        T28 = CALL2(1,VARREF(YgooSmagYL),iF2237,bucket_depthF2230);
        if (T28 != YPfalse) {
          T30 = (P)YgooScolsStabYOelt(vectorF2228,raw_indexF2238);
          this_keyF2239 = T30;
          T32 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF2239,VARREF(YgooScolsStabYDempty_cell_marker));
          if (T32 != YPfalse) {
            T31 = default_;
          } else {
            T34 = CALL2(0,test_functionF2227,key_,this_keyF2239);
            if (T34 != YPfalse) {
              T36 = CALL2(1,VARREF(YgooSmathYA),raw_indexF2238,bucket_depthF2230);
              T35 = (P)YgooScolsStabYOelt(vectorF2228,T36);
              T33 = T35;
            } else {
              if (YPtrue != YPfalse) {
                T39 = CALL2(1,VARREF(YgooSmathYA),iF2237,YPint((P)1));
                T40 = CALL2(1,VARREF(YgooSmathYA),raw_indexF2238,YPint((P)1));
                a125_0 = T39;
                a125_1 = T40;
                iF2237 = a125_0;
                raw_indexF2238 = a125_1;
                goto loop125;
                T37 = T38;
              } else {
                T37 = YPfalse;
              }
              T33 = T37;
            }
            T31 = T33;
          }
          T29 = T31;
          T27 = T29;
        } else {
          T42 = CALL3(1,VARREF(YgooSmathYmod_),bucket_indexF2234,bucket_offsetF2233,n_bucketsF2229);
          T43 = CALL2(1,VARREF(YgooSmathYA),probesF2235,YPint((P)1));
          a124_0 = T42;
          a124_1 = T43;
          bucket_indexF2234 = a124_0;
          probesF2235 = a124_1;
          goto loop124;
          T27 = T41;
        }
        break;
      }
      T26 = T27;
      T25 = T26;
      T22 = T25;
      T20 = T22;
    } else {
      T44 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_76));
      T20 = T44;
    }
    break;
  }
  T19 = T20;
  T18 = T19;
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

FUNCODEDEF(fun_elt_setter_36) {
  P value_,table_,key_;
  P tmpF2257;
  P x_1373F2256;
  P indexF2255;
  P x_1374F2254;
  P this_keyF2253;
  P raw_indexF2252;
  P iF2251;
  P vacancy_indexF2250;
  P indexF2249;
  P probesF2248;
  P bucket_indexF2247;
  P bucket_offsetF2246;
  P bucket_indexF2245;
  P hashF2244;
  P n_bucketsF2243;
  P bucket_depthF2242;
  P test_functionF2241;
  P vectorF2240;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97;
LINK_STACK();
  ARG(value_, 0);
  ARG(table_, 1);
  ARG(key_, 2);
  T1 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2240 = T1;
  vectorF2240 = BOXFAB(vectorF2240);
  T4 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
  T8 = BOXVAL(vectorF2240);
  T7 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T8);
  T10 = BOXVAL(vectorF2240);
  T9 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T10);
  T6 = CALL2(1,VARREF(YgooSmathYT),T7,T9);
  T11 = CALL1(1,VARREF(YgooScolsStabYtab_growth_threshold),table_);
  T5 = CALL2(1,VARREF(YgooSmathYT),T6,T11);
  T3 = CALL2(1,VARREF(YgooSmagYGE),T4,T5);
  if (T3 != YPfalse) {
    T14 = CALL1(1,VARREF(YgooScolsStabYgrow_table),table_);
    T13 = CALL1(1,VARREF(YgooScolsStabYPvector),T14);
    T12 = BOXVAL(vectorF2240) = T13;
  } else {
    T18 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
    T20 = BOXVAL(vectorF2240);
    T19 = CALL1(1,VARREF(YgooScolsStabYPvacated),T20);
    T17 = CALL2(1,VARREF(YgooSmathYA),T18,T19);
    T24 = BOXVAL(vectorF2240);
    T23 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T24);
    T26 = BOXVAL(vectorF2240);
    T25 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T26);
    T22 = CALL2(1,VARREF(YgooSmathYT),T23,T25);
    T27 = CALL1(1,VARREF(YgooScolsStabYtab_growth_threshold),table_);
    T21 = CALL2(1,VARREF(YgooSmathYT),T22,T27);
    T16 = CALL2(1,VARREF(YgooSmagYG),T17,T21);
    if (T16 != YPfalse) {
      T30 = CALL1(1,VARREF(YgooScolsStabYrehash_table),table_);
      T29 = CALL1(1,VARREF(YgooScolsStabYPvector),T30);
      T28 = BOXVAL(vectorF2240) = T29;
      T15 = T28;
    } else {
      T15 = YPfalse;
    }
  }
  T32 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF2241 = T32;
  T35 = BOXVAL(vectorF2240);
  T34 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T35);
  bucket_depthF2242 = T34;
  T38 = BOXVAL(vectorF2240);
  T37 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T38);
  n_bucketsF2243 = T37;
  T41 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T40 = CALL1(1,T41,key_);
  check_type(T40,VARREF(YLintG));
  hashF2244 = T40;
  T45 = BOXVAL(vectorF2240);
  T44 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),T45);
  T43 = CALL2(1,VARREF(YgooSmathYmod),hashF2244,T44);
  bucket_indexF2245 = T43;
  T50 = BOXVAL(vectorF2240);
  T49 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),T50);
  T48 = CALL2(1,VARREF(YgooSmathYmod),hashF2244,T49);
  T47 = CALL2(1,VARREF(YgooSmathYA),T48,YPint((P)1));
  bucket_offsetF2246 = T47;
  bucket_indexF2247 = bucket_indexF2245;
  check_type(YPint((P)0),VARREF(YLintG));
  probesF2248 = YPint((P)0);
  for (;;) {
    P a126_0,a126_1;
  loop126:
    T54 = CALL2(1,VARREF(YgooSmagYL),probesF2248,n_bucketsF2243);
    if (T54 != YPfalse) {
      T57 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF2242,YPint((P)2));
      T56 = CALL2(1,VARREF(YgooSmathYT),bucket_indexF2247,T57);
      indexF2249 = T56;
      vacancy_indexF2250 = YPfalse;
      check_type(YPint((P)0),VARREF(YLintG));
      iF2251 = YPint((P)0);
      check_type(indexF2249,VARREF(YLintG));
      raw_indexF2252 = indexF2249;
      for (;;) {
        P a127_0,a127_1,a127_2;
      loop127:
        T61 = CALL2(1,VARREF(YgooSmagYL),iF2251,bucket_depthF2242);
        if (T61 != YPfalse) {
          T64 = BOXVAL(vectorF2240);
          T63 = (P)YgooScolsStabYOelt(T64,raw_indexF2252);
          this_keyF2253 = T63;
          T66 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF2253,VARREF(YgooScolsStabYDempty_cell_marker));
          if (T66 != YPfalse) {
            if (vacancy_indexF2250 != YPfalse) {
              T69 = BOXVAL(vectorF2240);
              x_1374F2254 = T69;
              T72 = CALL1(1,VARREF(YgooScolsStabYPvacated),x_1374F2254);
              T71 = CALL2(1,VARREF(YgooSmathY_),T72,YPint((P)1));
              T70 = CALL2(1,VARREF(YgooScolsStabYPvacated_setter),T71,x_1374F2254);
              T68 = vacancy_indexF2250;
            } else {
              T68 = raw_indexF2252;
            }
            indexF2255 = T68;
            T73 = BOXVAL(vectorF2240);
            (P)YgooScolsStabYOelt_setter(key_,T73,indexF2255);
            T74 = BOXVAL(vectorF2240);
            T75 = CALL2(1,VARREF(YgooSmathYA),indexF2255,bucket_depthF2242);
            (P)YgooScolsStabYOelt_setter(value_,T74,T75);
            x_1373F2256 = table_;
            T78 = CALL1(1,VARREF(YgooScolsStabYPcount),x_1373F2256);
            T77 = CALL2(1,VARREF(YgooSmathYA),T78,YPint((P)1));
            T76 = CALL2(1,VARREF(YgooScolsStabYPcount_setter),T77,x_1373F2256);
            T67 = value_;
            T65 = T67;
          } else {
            T80 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF2253,VARREF(YgooScolsStabYDvacated_cell_marker));
            if (T80 != YPfalse) {
              tmpF2257 = vacancy_indexF2250;
              if (tmpF2257 != YPfalse) {
                T83 = tmpF2257;
              } else {
                T83 = raw_indexF2252;
              }
              T82 = T83;
              T84 = CALL2(1,VARREF(YgooSmathYA),iF2251,YPint((P)1));
              T85 = CALL2(1,VARREF(YgooSmathYA),raw_indexF2252,YPint((P)1));
              a127_0 = T82;
              a127_1 = T84;
              a127_2 = T85;
              vacancy_indexF2250 = a127_0;
              iF2251 = a127_1;
              raw_indexF2252 = a127_2;
              goto loop127;
              T79 = T81;
            } else {
              T87 = CALL2(1,test_functionF2241,key_,this_keyF2253);
              if (T87 != YPfalse) {
                T88 = BOXVAL(vectorF2240);
                T89 = CALL2(1,VARREF(YgooSmathYA),raw_indexF2252,bucket_depthF2242);
                (P)YgooScolsStabYOelt_setter(value_,T88,T89);
                T86 = value_;
              } else {
                if (YPtrue != YPfalse) {
                  T92 = CALL2(1,VARREF(YgooSmathYA),iF2251,YPint((P)1));
                  T93 = CALL2(1,VARREF(YgooSmathYA),raw_indexF2252,YPint((P)1));
                  a127_0 = vacancy_indexF2250;
                  a127_1 = T92;
                  a127_2 = T93;
                  vacancy_indexF2250 = a127_0;
                  iF2251 = a127_1;
                  raw_indexF2252 = a127_2;
                  goto loop127;
                  T90 = T91;
                } else {
                  T90 = YPfalse;
                }
                T86 = T90;
              }
              T79 = T86;
            }
            T65 = T79;
          }
          T62 = T65;
          T60 = T62;
        } else {
          T95 = CALL3(1,VARREF(YgooSmathYmod_),bucket_indexF2247,bucket_offsetF2246,n_bucketsF2243);
          T96 = CALL2(1,VARREF(YgooSmathYA),probesF2248,YPint((P)1));
          a126_0 = T95;
          a126_1 = T96;
          bucket_indexF2247 = a126_0;
          probesF2248 = a126_1;
          goto loop126;
          T60 = T94;
        }
        break;
      }
      T59 = T60;
      T58 = T59;
      T55 = T58;
      T53 = T55;
    } else {
      T97 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_79));
      T53 = T97;
    }
    break;
  }
  T52 = T53;
  T51 = T52;
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

FUNCODEDEF(fun_del_37) {
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

FUNCODEDEF(fun_delX_38) {
  P table_,key_;
  P x_1376F2273;
  P x_1375F2272;
  P tmpF2271;
  P this_keyF2270;
  P raw_indexF2269;
  P iF2268;
  P indexF2267;
  P probesF2266;
  P bucket_indexF2265;
  P bucket_offsetF2264;
  P bucket_indexF2263;
  P hashF2262;
  P bucket_depthF2261;
  P n_bucketsF2260;
  P vectorF2259;
  P test_functionF2258;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50;
LINK_STACK();
  ARG(table_, 0);
  ARG(key_, 1);
  T1 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF2258 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2259 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2259);
  n_bucketsF2260 = T5;
  T7 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2259);
  bucket_depthF2261 = T7;
  T10 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T9 = CALL1(1,T10,key_);
  check_type(T9,VARREF(YLintG));
  hashF2262 = T9;
  T13 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF2259);
  T12 = CALL2(1,VARREF(YgooSmathYmod),hashF2262,T13);
  bucket_indexF2263 = T12;
  T17 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF2259);
  T16 = CALL2(1,VARREF(YgooSmathYmod),hashF2262,T17);
  T15 = CALL2(1,VARREF(YgooSmathYA),T16,YPint((P)1));
  bucket_offsetF2264 = T15;
  bucket_indexF2265 = bucket_indexF2263;
  check_type(YPint((P)0),VARREF(YLintG));
  probesF2266 = YPint((P)0);
  for (;;) {
    P a128_0,a128_1;
  loop128:
    T20 = CALL2(1,VARREF(YgooSmagYL),probesF2266,n_bucketsF2260);
    if (T20 != YPfalse) {
      T23 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF2261,YPint((P)2));
      T22 = CALL2(1,VARREF(YgooSmathYT),bucket_indexF2265,T23);
      check_type(T22,VARREF(YLintG));
      indexF2267 = T22;
      check_type(YPint((P)0),VARREF(YLintG));
      iF2268 = YPint((P)0);
      check_type(indexF2267,VARREF(YLintG));
      raw_indexF2269 = indexF2267;
      for (;;) {
        P a129_0,a129_1;
      loop129:
        T27 = CALL2(1,VARREF(YgooSmagYL),iF2268,bucket_depthF2261);
        if (T27 != YPfalse) {
          T29 = (P)YgooScolsStabYOelt(vectorF2259,raw_indexF2269);
          this_keyF2270 = T29;
          T31 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF2270,VARREF(YgooScolsStabYDempty_cell_marker));
          if (T31 != YPfalse) {
            T30 = YPfalse;
          } else {
            T34 = CALL2(1,VARREF(YgooSmathYNEE),this_keyF2270,VARREF(YgooScolsStabYDvacated_cell_marker));
            tmpF2271 = T34;
            if (tmpF2271 != YPfalse) {
              T36 = CALL2(1,test_functionF2258,key_,this_keyF2270);
              T35 = T36;
            } else {
              T35 = YPfalse;
            }
            T33 = T35;
            if (T33 != YPfalse) {
              (P)YgooScolsStabYOelt_setter(VARREF(YgooScolsStabYDvacated_cell_marker),vectorF2259,raw_indexF2269);
              x_1375F2272 = table_;
              T39 = CALL1(1,VARREF(YgooScolsStabYPcount),x_1375F2272);
              T38 = CALL2(1,VARREF(YgooSmathY_),T39,YPint((P)1));
              T37 = CALL2(1,VARREF(YgooScolsStabYPcount_setter),T38,x_1375F2272);
              x_1376F2273 = vectorF2259;
              T42 = CALL1(1,VARREF(YgooScolsStabYPvacated),x_1376F2273);
              T41 = CALL2(1,VARREF(YgooSmathYA),T42,YPint((P)1));
              T40 = CALL2(1,VARREF(YgooScolsStabYPvacated_setter),T41,x_1376F2273);
              T32 = YPtrue;
            } else {
              if (YPtrue != YPfalse) {
                T45 = CALL2(1,VARREF(YgooSmathYA),iF2268,YPint((P)1));
                T46 = CALL2(1,VARREF(YgooSmathYA),raw_indexF2269,YPint((P)1));
                a129_0 = T45;
                a129_1 = T46;
                iF2268 = a129_0;
                raw_indexF2269 = a129_1;
                goto loop129;
                T43 = T44;
              } else {
                T43 = YPfalse;
              }
              T32 = T43;
            }
            T30 = T32;
          }
          T28 = T30;
          T26 = T28;
        } else {
          T48 = CALL3(1,VARREF(YgooSmathYmod_),bucket_indexF2265,bucket_offsetF2264,n_bucketsF2260);
          T49 = CALL2(1,VARREF(YgooSmathYA),probesF2266,YPint((P)1));
          a128_0 = T48;
          a128_1 = T49;
          bucket_indexF2265 = a128_0;
          probesF2266 = a128_1;
          goto loop128;
          T26 = T47;
        }
        break;
      }
      T25 = T26;
      T24 = T25;
      T21 = T24;
      T19 = T21;
    } else {
      T50 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_84));
      T19 = T50;
    }
    break;
  }
  T18 = T19;
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

FUNCODEDEF(fun_do_keyed_39) {
  P function_,table_;
  P indexF2281;
  P tmpF2280;
  P keyF2279;
  P iF2278;
  P bF2277;
  P depthF2276;
  P n_bucketsF2275;
  P vectorF2274;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(function_, 0);
  ARG(table_, 1);
  T1 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2274 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2274);
  n_bucketsF2275 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2274);
  depthF2276 = T5;
  check_type(YPint((P)0),VARREF(YLintG));
  bF2277 = YPint((P)0);
  for (;;) {
    P a130_0;
  loop130:
    T9 = CALL2(1,VARREF(YgooSmagYL),bF2277,n_bucketsF2275);
    if (T9 != YPfalse) {
      check_type(YPint((P)0),VARREF(YLintG));
      iF2278 = YPint((P)0);
      for (;;) {
        P a131_0;
      loop131:
        T12 = CALL2(1,VARREF(YgooSmagYL),iF2278,depthF2276);
        if (T12 != YPfalse) {
          T17 = CALL2(1,VARREF(YgooSmathYT),depthF2276,YPint((P)2));
          T16 = CALL2(1,VARREF(YgooSmathYT),bF2277,T17);
          T15 = CALL2(1,VARREF(YgooSmathYA),iF2278,T16);
          T14 = (P)YgooScolsStabYOelt(vectorF2274,T15);
          keyF2279 = T14;
          T20 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2279,VARREF(YgooScolsStabYDempty_cell_marker));
          tmpF2280 = T20;
          if (tmpF2280 != YPfalse) {
            T21 = tmpF2280;
          } else {
            T22 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2279,VARREF(YgooScolsStabYDvacated_cell_marker));
            T21 = T22;
          }
          T19 = T21;
          T18 = CALL1(1,VARREF(Ynot),T19);
          if (T18 != YPfalse) {
            T27 = CALL2(1,VARREF(YgooSmathYT),depthF2276,YPint((P)2));
            T26 = CALL2(1,VARREF(YgooSmathYT),bF2277,T27);
            T25 = CALL2(1,VARREF(YgooSmathYA),T26,depthF2276);
            T24 = CALL2(1,VARREF(YgooSmathYA),iF2278,T25);
            indexF2281 = T24;
            T29 = (P)YgooScolsStabYOelt(vectorF2274,indexF2281);
            T28 = CALL2(1,function_,keyF2279,T29);
            T23 = T28;
          } else {
          }
          T31 = CALL2(1,VARREF(YgooSmathYA),iF2278,YPint((P)1));
          a131_0 = T31;
          iF2278 = a131_0;
          goto loop131;
          T13 = T30;
          T11 = T13;
        } else {
          T11 = YPfalse;
        }
        break;
      }
      T10 = T11;
      T33 = CALL2(1,VARREF(YgooSmathYA),bF2277,YPint((P)1));
      a130_0 = T33;
      bF2277 = a130_0;
      goto loop130;
      T8 = T32;
    } else {
      T8 = YPfalse;
    }
    break;
  }
  T7 = T8;
  T6 = T7;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_40) {
  P function_,table_;
  P indexF2289;
  P tmpF2288;
  P keyF2287;
  P iF2286;
  P bF2285;
  P depthF2284;
  P n_bucketsF2283;
  P vectorF2282;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(function_, 0);
  ARG(table_, 1);
  T1 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2282 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2282);
  n_bucketsF2283 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2282);
  depthF2284 = T5;
  check_type(YPint((P)0),VARREF(YLintG));
  bF2285 = YPint((P)0);
  for (;;) {
    P a132_0;
  loop132:
    T9 = CALL2(1,VARREF(YgooSmagYL),bF2285,n_bucketsF2283);
    if (T9 != YPfalse) {
      check_type(YPint((P)0),VARREF(YLintG));
      iF2286 = YPint((P)0);
      for (;;) {
        P a133_0;
      loop133:
        T12 = CALL2(1,VARREF(YgooSmagYL),iF2286,depthF2284);
        if (T12 != YPfalse) {
          T17 = CALL2(1,VARREF(YgooSmathYT),depthF2284,YPint((P)2));
          T16 = CALL2(1,VARREF(YgooSmathYT),bF2285,T17);
          T15 = CALL2(1,VARREF(YgooSmathYA),iF2286,T16);
          T14 = (P)YgooScolsStabYOelt(vectorF2282,T15);
          keyF2287 = T14;
          T20 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2287,VARREF(YgooScolsStabYDempty_cell_marker));
          tmpF2288 = T20;
          if (tmpF2288 != YPfalse) {
            T21 = tmpF2288;
          } else {
            T22 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2287,VARREF(YgooScolsStabYDvacated_cell_marker));
            T21 = T22;
          }
          T19 = T21;
          T18 = CALL1(1,VARREF(Ynot),T19);
          if (T18 != YPfalse) {
            T27 = CALL2(1,VARREF(YgooSmathYT),depthF2284,YPint((P)2));
            T26 = CALL2(1,VARREF(YgooSmathYT),bF2285,T27);
            T25 = CALL2(1,VARREF(YgooSmathYA),T26,depthF2284);
            T24 = CALL2(1,VARREF(YgooSmathYA),iF2286,T25);
            indexF2289 = T24;
            T29 = (P)YgooScolsStabYOelt(vectorF2282,indexF2289);
            T28 = CALL1(1,function_,T29);
            T23 = T28;
          } else {
          }
          T31 = CALL2(1,VARREF(YgooSmathYA),iF2286,YPint((P)1));
          a133_0 = T31;
          iF2286 = a133_0;
          goto loop133;
          T13 = T30;
          T11 = T13;
        } else {
          T11 = YPfalse;
        }
        break;
      }
      T10 = T11;
      T33 = CALL2(1,VARREF(YgooSmathYA),bF2285,YPint((P)1));
      a132_0 = T33;
      bF2285 = a132_0;
      goto loop132;
      T8 = T32;
    } else {
      T8 = YPfalse;
    }
    break;
  }
  T7 = T8;
  T6 = T7;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zapX_41) {
  P table_;
  P T0;
LINK_STACK();
  ARG(table_, 0);
  T0 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  CALL2(1,VARREF(YgooScolsStabYclrX),T0,VARREF(YgooScolsStabYDempty_cell_marker));
  CALL2(1,VARREF(YgooScolsStabYPcount_setter),YPint((P)0),table_);
UNLINK_STACK();
  RET(table_);
}

FUNCODEDEF(fun_len_42) {
  P table_;
  P T0;
LINK_STACK();
  ARG(table_, 0);
  T0 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_Ovec_43) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYOvec));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Ovec_setter_44) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYOvec));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Obuc_45) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYObuc));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Obuc_setter_46) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYObuc));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Oidx_47) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYOidx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Oidx_setter_48) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYOidx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_OfinQ_49) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsStabYOfinQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_OfinQ_setter_50) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYOfinQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_enum_52) {
  P table_;
  P tmpF2296;
  P keyF2295;
  P iF2294;
  P bF2293;
  P depthF2292;
  P n_bucketsF2291;
  P vectorF2290;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(table_, 0);
  T2 = CALL1(1,VARREF(YgooStypesYlen),table_);
  T1 = CALL2(1,VARREF(YgooSmathYE),T2,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = VARREF(YgooScolsStabYDfin_enum);
  } else {
    T4 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
    vectorF2290 = T4;
    T6 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2290);
    n_bucketsF2291 = T6;
    T8 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2290);
    depthF2292 = T8;
    check_type(YPint((P)0),VARREF(YLintG));
    bF2293 = YPint((P)0);
    for (;;) {
      P a134_0;
    loop134:
      T12 = CALL2(1,VARREF(YgooSmagYL),bF2293,n_bucketsF2291);
      if (T12 != YPfalse) {
        check_type(YPint((P)0),VARREF(YLintG));
        iF2294 = YPint((P)0);
        for (;;) {
          P a135_0;
        loop135:
          T16 = CALL2(1,VARREF(YgooSmagYL),iF2294,depthF2292);
          if (T16 != YPfalse) {
            T21 = CALL2(1,VARREF(YgooSmathYT),depthF2292,YPint((P)2));
            T20 = CALL2(1,VARREF(YgooSmathYT),bF2293,T21);
            T19 = CALL2(1,VARREF(YgooSmathYA),iF2294,T20);
            T18 = (P)YgooScolsStabYOelt(vectorF2290,T19);
            keyF2295 = T18;
            T24 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2295,VARREF(YgooScolsStabYDempty_cell_marker));
            tmpF2296 = T24;
            if (tmpF2296 != YPfalse) {
              T25 = tmpF2296;
            } else {
              T26 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2295,VARREF(YgooScolsStabYDvacated_cell_marker));
              T25 = T26;
            }
            T23 = T25;
            if (T23 != YPfalse) {
              T28 = CALL2(1,VARREF(YgooSmathYA),iF2294,YPint((P)1));
              a135_0 = T28;
              iF2294 = a135_0;
              goto loop135;
              T22 = T27;
            } else {
              T29 = CALLN(1,VARREF(Ynew),7,VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOvec),vectorF2290,VARREF(YgooScolsStabYObuc),bF2293,VARREF(YgooScolsStabYOidx),iF2294);
              T22 = T29;
            }
            T17 = T22;
            T15 = T17;
          } else {
            T31 = CALL2(1,VARREF(YgooSmathYA),bF2293,YPint((P)1));
            a134_0 = T31;
            bF2293 = a134_0;
            goto loop134;
            T15 = T30;
          }
          break;
        }
        T14 = T15;
        T13 = T14;
        T11 = T13;
      } else {
        T11 = VARREF(YgooScolsStabYDfin_enum);
      }
      break;
    }
    T10 = T11;
    T9 = T10;
    T7 = T9;
    T5 = T7;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_53) {
  P e_;
  P x_1377F2307;
  P tmpF2306;
  P keyF2305;
  P iF2304;
  P firstQF2303;
  P bF2302;
  P indexF2301;
  P bucketF2300;
  P depthF2299;
  P n_bucketsF2298;
  P vectorF2297;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF2297 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2297);
  n_bucketsF2298 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2297);
  depthF2299 = T5;
  T7 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  bucketF2300 = T7;
  T9 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  indexF2301 = T9;
  check_type(bucketF2300,VARREF(YLintG));
  bF2302 = bucketF2300;
  firstQF2303 = YPtrue;
  for (;;) {
    P a136_0,a136_1;
  loop136:
    T13 = CALL2(1,VARREF(YgooSmagYL),bF2302,n_bucketsF2298);
    if (T13 != YPfalse) {
      if (firstQF2303 != YPfalse) {
        T16 = CALL2(1,VARREF(YgooSmathYA),indexF2301,YPint((P)1));
        T15 = T16;
      } else {
        T15 = YPint((P)0);
      }
      check_type(T15,VARREF(YLintG));
      iF2304 = T15;
      for (;;) {
        P a137_0;
      loop137:
        T19 = CALL2(1,VARREF(YgooSmagYL),iF2304,depthF2299);
        if (T19 != YPfalse) {
          T24 = CALL2(1,VARREF(YgooSmathYT),depthF2299,YPint((P)2));
          T23 = CALL2(1,VARREF(YgooSmathYT),bF2302,T24);
          T22 = CALL2(1,VARREF(YgooSmathYA),iF2304,T23);
          T21 = (P)YgooScolsStabYOelt(vectorF2297,T22);
          keyF2305 = T21;
          T27 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2305,VARREF(YgooScolsStabYDempty_cell_marker));
          tmpF2306 = T27;
          if (tmpF2306 != YPfalse) {
            T28 = tmpF2306;
          } else {
            T29 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2305,VARREF(YgooScolsStabYDvacated_cell_marker));
            T28 = T29;
          }
          T26 = T28;
          if (T26 != YPfalse) {
            T31 = CALL2(1,VARREF(YgooSmathYA),iF2304,YPint((P)1));
            a137_0 = T31;
            iF2304 = a137_0;
            goto loop137;
            T25 = T30;
          } else {
            x_1377F2307 = e_;
            CALL2(1,VARREF(YgooScolsStabYOvec_setter),vectorF2297,x_1377F2307);
            CALL2(1,VARREF(YgooScolsStabYObuc_setter),bF2302,x_1377F2307);
            CALL2(1,VARREF(YgooScolsStabYOidx_setter),iF2304,x_1377F2307);
            T32 = x_1377F2307;
            T25 = T32;
          }
          T20 = T25;
          T18 = T20;
        } else {
          T34 = CALL2(1,VARREF(YgooSmathYA),bF2302,YPint((P)1));
          a136_0 = T34;
          a136_1 = YPfalse;
          bF2302 = a136_0;
          firstQF2303 = a136_1;
          goto loop136;
          T18 = T33;
        }
        break;
      }
      T17 = T18;
      T14 = T17;
      T12 = T14;
    } else {
      T12 = VARREF(YgooScolsStabYDfin_enum);
    }
    break;
  }
  T11 = T12;
  T10 = T11;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_finQ_54) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL1(1,VARREF(YgooScolsStabYOfinQ),e_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_key_55) {
  P e_;
  P depthF2309;
  P vectorF2308;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF2308 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2308);
  depthF2309 = T3;
  T6 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  T8 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T9 = CALL2(1,VARREF(YgooSmathYT),depthF2309,YPint((P)2));
  T7 = CALL2(1,VARREF(YgooSmathYT),T8,T9);
  T5 = CALL2(1,VARREF(YgooSmathYA),T6,T7);
  T4 = (P)YgooScolsStabYOelt(vectorF2308,T5);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_56) {
  P e_;
  P depthF2311;
  P vectorF2310;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF2310 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2310);
  depthF2311 = T3;
  T6 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  T9 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T10 = CALL2(1,VARREF(YgooSmathYT),depthF2311,YPint((P)2));
  T8 = CALL2(1,VARREF(YgooSmathYT),T9,T10);
  T7 = CALL2(1,VARREF(YgooSmathYA),depthF2311,T8);
  T5 = CALL2(1,VARREF(YgooSmathYA),T6,T7);
  T4 = (P)YgooScolsStabYOelt(vectorF2310,T5);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_setter_57) {
  P value_,e_;
  P depthF2314;
  P indexF2313;
  P vectorF2312;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(value_, 0);
  ARG(e_, 1);
  T1 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF2312 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  indexF2313 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2312);
  depthF2314 = T5;
  T10 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T11 = CALL2(1,VARREF(YgooSmathYT),depthF2314,YPint((P)2));
  T9 = CALL2(1,VARREF(YgooSmathYT),T10,T11);
  T8 = CALL2(1,VARREF(YgooSmathYA),depthF2314,T9);
  T7 = CALL2(1,VARREF(YgooSmathYA),indexF2313,T8);
  T6 = (P)YgooScolsStabYOelt_setter(value_,vectorF2312,T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P k_,v_;
  P UF2315;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
  T1 = BOXVAL(FREEREF(0));
  UF2315 = T1;
  T3 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2315,k_);
  T2 = BOXVAL(FREEREF(0)) = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_tab_keys_59) {
  P table_;
  P packer_F2316;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(table_, 0);
  T1 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F2316 = T1;
  packer_F2316 = BOXFAB(packer_F2316);
  T3 = FUNFAB(fun_58,1,packer_F2316);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T3,table_);
  T5 = BOXVAL(packer_F2316);
  T4 = CALL1(1,VARREF(YgooSpackerYpacker_res),T5);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_grow_table_60) {
  P table_;
  P new_vectorF2321;
  P new_bucket_depthF2320;
  P new_n_bucketsF2319;
  P tup27F2318;
  P vectorF2317;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(table_, 0);
  T1 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2317 = T1;
  T7 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2317);
  T8 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2317);
  T6 = CALL2(1,VARREF(YgooSmathYT),T7,T8);
  T9 = CALL1(1,VARREF(YgooScolsStabYtab_growth_factor),table_);
  T5 = CALL2(1,VARREF(YgooSmathYT),T6,T9);
  T4 = CALL1(1,VARREF(YgooSmathYfloor),T5);
  T3 = CALL1(1,VARREF(YgooScolsStabYchoose_table_geometry),T4);
  tup27F2318 = T3;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup27F2318,YPint((P)0));
  new_n_bucketsF2319 = T11;
  T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup27F2318,YPint((P)1));
  new_bucket_depthF2320 = T13;
  T17 = CALL2(1,VARREF(YgooSmathYT),new_bucket_depthF2320,YPint((P)2));
  T16 = CALL2(1,VARREF(YgooSmathYT),new_n_bucketsF2319,T17);
  T18 = CALL2(1,VARREF(YgooSmathY_),new_n_bucketsF2319,YPint((P)2));
  T15 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T16,VARREF(YgooScolsStabYDempty_cell_marker),new_n_bucketsF2319,new_bucket_depthF2320,new_n_bucketsF2319,T18);
  new_vectorF2321 = T15;
  CALL2(1,VARREF(YgooScolsStabYcopy_to_new_vector),table_,new_vectorF2321);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),new_vectorF2321,table_);
  T14 = table_;
  T12 = T14;
  T10 = T12;
  T2 = T10;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_rehash_table_61) {
  P table_;
  P new_vectorF2323;
  P vectorF2322;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(table_, 0);
  T1 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2322 = T1;
  T5 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2322);
  T7 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2322);
  T6 = CALL2(1,VARREF(YgooSmathYT),T7,YPint((P)2));
  T4 = CALL2(1,VARREF(YgooSmathYT),T5,T6);
  T8 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2322);
  T9 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2322);
  T10 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF2322);
  T11 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF2322);
  T3 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T4,VARREF(YgooScolsStabYDempty_cell_marker),T8,T9,T10,T11);
  new_vectorF2323 = T3;
  CALL2(1,VARREF(YgooScolsStabYcopy_to_new_vector),table_,new_vectorF2323);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),new_vectorF2323,table_);
  T2 = table_;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_62) {
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

FUNCODEDEF(fun_63) {
  P return_;
  P depthF2324;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
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
  depthF2324 = T1;
  T12 = FUNFAB(fun_62,3,FREEREF(0),depthF2324,return_);
  CALL2(1,VARREF(YgooSmacrosYdo),T12,VARREF(YgooScolsStabYTtwin_primesT));
  T13 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_134));
  T0 = T13;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsStabYchoose_table_geometry) {
  P capacity_;
  P T0,T1;
LINK_STACK();
  ARG(capacity_, 0);
  T1 = FUNFAB(fun_63,1,capacity_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_65) {
  P k_,v_;
  P this_keyF2338;
  P indexF2337;
  P iF2336;
  P bucket_startF2335;
  P probesF2334;
  P new_bucket_indexF2333;
  P new_bucket_offsetF2332;
  P new_bucket_indexF2331;
  P hashF2330;
  P new_secondary_modulusF2329;
  P new_primary_modulusF2328;
  P new_bucket_depthF2327;
  P new_n_bucketsF2326;
  P test_functionF2325;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
  T1 = CALL1(1,VARREF(YgooScolsScolYkey_test),FREEREF(0));
  test_functionF2325 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),FREEREF(1));
  new_n_bucketsF2326 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),FREEREF(1));
  new_bucket_depthF2327 = T5;
  T7 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),FREEREF(1));
  new_primary_modulusF2328 = T7;
  T9 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),FREEREF(1));
  new_secondary_modulusF2329 = T9;
  T12 = CALL1(1,VARREF(YgooScolsStabYtab_hash),FREEREF(0));
  T11 = CALL1(1,T12,k_);
  check_type(T11,VARREF(YLintG));
  hashF2330 = T11;
  T14 = CALL2(1,VARREF(YgooSmathYmod),hashF2330,new_primary_modulusF2328);
  new_bucket_indexF2331 = T14;
  T17 = CALL2(1,VARREF(YgooSmathYmod),hashF2330,new_secondary_modulusF2329);
  T16 = CALL2(1,VARREF(YgooSmathYA),T17,YPint((P)1));
  new_bucket_offsetF2332 = T16;
  new_bucket_indexF2333 = new_bucket_indexF2331;
  check_type(YPint((P)0),VARREF(YLintG));
  probesF2334 = YPint((P)0);
  for (;;) {
    P a138_0,a138_1;
  loop138:
    T21 = CALL2(1,VARREF(YgooSmagYL),probesF2334,new_n_bucketsF2326);
    if (T21 != YPfalse) {
      T24 = CALL2(1,VARREF(YgooSmathYT),new_bucket_depthF2327,YPint((P)2));
      T23 = CALL2(1,VARREF(YgooSmathYT),new_bucket_indexF2333,T24);
      bucket_startF2335 = T23;
      check_type(YPint((P)0),VARREF(YLintG));
      iF2336 = YPint((P)0);
      check_type(bucket_startF2335,VARREF(YLintG));
      indexF2337 = bucket_startF2335;
      for (;;) {
        P a139_0,a139_1;
      loop139:
        T28 = CALL2(1,VARREF(YgooSmagYL),iF2336,new_bucket_depthF2327);
        if (T28 != YPfalse) {
          T30 = (P)YgooScolsStabYOelt(FREEREF(1),indexF2337);
          this_keyF2338 = T30;
          T32 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF2338,VARREF(YgooScolsStabYDempty_cell_marker));
          if (T32 != YPfalse) {
            (P)YgooScolsStabYOelt_setter(k_,FREEREF(1),indexF2337);
            T34 = CALL2(1,VARREF(YgooSmathYA),indexF2337,new_bucket_depthF2327);
            T33 = (P)YgooScolsStabYOelt_setter(v_,FREEREF(1),T34);
            T31 = T33;
          } else {
            T36 = CALL2(1,VARREF(YgooSmathYA),iF2336,YPint((P)1));
            T37 = CALL2(1,VARREF(YgooSmathYA),indexF2337,YPint((P)1));
            a139_0 = T36;
            a139_1 = T37;
            iF2336 = a139_0;
            indexF2337 = a139_1;
            goto loop139;
            T31 = T35;
          }
          T29 = T31;
          T27 = T29;
        } else {
          T39 = CALL3(1,VARREF(YgooSmathYmod_),new_bucket_indexF2333,new_bucket_offsetF2332,new_n_bucketsF2326);
          T40 = CALL2(1,VARREF(YgooSmathYA),probesF2334,YPint((P)1));
          a138_0 = T39;
          a138_1 = T40;
          new_bucket_indexF2333 = a138_0;
          probesF2334 = a138_1;
          goto loop138;
          T27 = T38;
        }
        break;
      }
      T26 = T27;
      T25 = T26;
      T22 = T25;
      T20 = T22;
    } else {
      T41 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_138));
      T20 = T41;
    }
    break;
  }
  T19 = T20;
  T18 = T19;
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

FUNCODEDEF(fun_copy_to_new_vector_66) {
  P table_,new_vector_;
  P T0,T1;
LINK_STACK();
  ARG(table_, 0);
  ARG(new_vector_, 1);
  T1 = FUNFAB(fun_65,2,table_,new_vector_);
  T0 = CALL2(1,VARREF(YgooScolsScolYdo_keyed),T1,table_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_67) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYaddress_of),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_68) {
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

FUNCODEDEF(fun_id_hash_70) {
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

FUNCODEDEF(fun_id_hash_71) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T0 = CALL1(1,VARREF(YgooScolsStabYid_hash),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_72) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmathYflo_bits),x_);
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)89));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_73) {
  P x_;
  P cur_elemF2341;
  P cur_hashF2340;
  P t_enumF2339;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  t_enumF2339 = T2;
  cur_hashF2340 = YPint((P)0);
  for (;;) {
    P a140_0,a140_1;
  loop140:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),t_enumF2339);
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),t_enumF2339);
      cur_elemF2341 = T7;
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),t_enumF2339);
      T11 = CALL2(1,VARREF(YgooSmathYT),cur_hashF2340,YPint((P)31));
      T12 = CALL1(1,VARREF(YgooScolsStabYid_hash),cur_elemF2341);
      T10 = CALL2(1,VARREF(YgooSmathYA),T11,T12);
      a140_0 = T9;
      a140_1 = T10;
      t_enumF2339 = a140_0;
      cur_hashF2340 = a140_1;
      goto loop140;
      T6 = T8;
    } else {
    }
    break;
  }
  T3 = cur_hashF2340;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_key_type_74) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLstrG));
}

FUNCODEDEF(fun_elt_type_75) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLsymG));
}

FUNCODEDEF(YgooScolsStabYcase_insensitive_string_hash) {
  P x_;
  P hashF2345;
  P iF2344;
  P eF2343;
  P sF2342;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(x_, 0);
  sF2342 = YPint((P)0);
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  eF2343 = T2;
  check_type(sF2342,VARREF(YLintG));
  iF2344 = sF2342;
  check_type(YPint((P)0),VARREF(YLintG));
  hashF2345 = YPint((P)0);
  for (;;) {
    P a141_0,a141_1;
  loop141:
    T6 = CALL2(1,VARREF(YgooSmagYL),iF2344,eF2343);
    if (T6 != YPfalse) {
      T8 = CALL2(1,VARREF(YgooSmathYA),iF2344,YPint((P)1));
      T11 = CALL2(1,VARREF(YgooSmathYLL),hashF2345,YPint((P)6));
      T14 = CALL2(1,VARREF(YgooSmacrosYelt),x_,iF2344);
      T13 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T14);
      T12 = CALL2(1,VARREF(YgooSmathYB),T13,YPint((P)159));
      T10 = CALL2(1,VARREF(YgooSmathYA),T11,T12);
      T9 = CALL2(1,VARREF(YgooSmathYmod),T10,YPint((P)970747));
      a141_0 = T8;
      a141_1 = T9;
      iF2344 = a141_0;
      hashF2345 = a141_1;
      goto loop141;
      T5 = T7;
    } else {
      T5 = hashF2345;
    }
    break;
  }
  T4 = T5;
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsStabYcase_insensitive_string_equal) {
  P x_,y_;
  P tmpF2353;
  P tmpF2352;
  P cyF2351;
  P cxF2350;
  P tmpF2349;
  P iF2348;
  P eyF2347;
  P syF2346;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  syF2346 = YPint((P)0);
  T2 = CALL1(1,VARREF(YgooStypesYlen),y_);
  eyF2347 = T2;
  T5 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T6 = CALL2(1,VARREF(YgooSmathY_),eyF2347,syF2346);
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,T6);
  if (T4 != YPfalse) {
    check_type(syF2346,VARREF(YLintG));
    iF2348 = syF2346;
    for (;;) {
      P a142_0;
    loop142:
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),iF2348,eyF2347);
      tmpF2349 = T10;
      if (tmpF2349 != YPfalse) {
        T11 = tmpF2349;
      } else {
        T14 = CALL2(1,VARREF(YgooSmathY_),iF2348,syF2346);
        T13 = CALL2(1,VARREF(YgooSmacrosYelt),x_,T14);
        check_type(T13,VARREF(YLchrG));
        cxF2350 = T13;
        T16 = CALL2(1,VARREF(YgooSmacrosYelt),y_,iF2348);
        check_type(T16,VARREF(YLchrG));
        cyF2351 = T16;
        T19 = CALL2(1,VARREF(YgooSmacrosYEE),cxF2350,cyF2351);
        tmpF2352 = T19;
        if (tmpF2352 != YPfalse) {
          T20 = tmpF2352;
        } else {
          T22 = CALL1(1,VARREF(YgooSmathYto_lower),cxF2350);
          T23 = CALL1(1,VARREF(YgooSmathYto_lower),cyF2351);
          T21 = CALL2(1,VARREF(YgooSmacrosYEE),T22,T23);
          T20 = T21;
        }
        T18 = T20;
        tmpF2353 = T18;
        if (tmpF2353 != YPfalse) {
          T26 = CALL2(1,VARREF(YgooSmathYA),iF2348,YPint((P)1));
          a142_0 = T26;
          iF2348 = a142_0;
          goto loop142;
          T24 = T25;
        } else {
          T24 = YPfalse;
        }
        T17 = T24;
        T15 = T17;
        T12 = T15;
        T11 = T12;
      }
      T9 = T11;
      break;
    }
    T8 = T9;
    T7 = T8;
    T3 = T7;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_key_test_78) {
  P U_;
LINK_STACK();
  ARG(U_, 0);
UNLINK_STACK();
  RET(VARREF(YgooScolsStabYcase_insensitive_string_equal));
}

FUNCODEDEF(fun_tab_hash_79) {
  P U_;
LINK_STACK();
  ARG(U_, 0);
UNLINK_STACK();
  RET(VARREF(YgooScolsStabYcase_insensitive_string_hash));
}

FUNCODEDEF(fun_addX_80) {
  P c_,x_;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,c_,x_);
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_memQ_81) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL3(1,VARREF(YgooScolsScolYelt_or),c_,x_,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_82) {
  P k_;
  P T0,T1;
LINK_STACK();
  ARG(k_, 0);
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),k_);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),T1,FREEREF(1),k_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elts_83) {
  P x_,keys_;
  P resF2354;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(keys_, 1);
  T2 = CALL1(1,VARREF(YgooStypesYlen),keys_);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),T2);
  resF2354 = T1;
  T3 = FUNFAB(fun_82,2,x_,resF2354);
  CALL2(1,VARREF(YgooSmacrosYdo),T3,keys_);
  T4 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,resF2354);
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190;
DEFCREGS();
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
  lit_76 = YPsb((P)"The table is totally full this shouldn't happen");
  T22 = YPsig(LITREF(lit_75),YPPlist(3,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_35 = YPmet(FUNCODEREF(fun_elt_or_35),LITREF(lit_74),T22,ENVNUL,PNUL,sloc(160));
  T24 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T25 = fun_elt_or_35;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YgooScolsScolYelt_or,T23);
  lit_77 = YPPsym((P)"elt-setter");
  lit_78 = YPPlist(3,YPPsym((P)"value"),YPPsym((P)"table"),YPPsym((P)"key"));
  lit_79 = YPsb((P)"The table is totally full this shouldn't happen");
  T26 = YPsig(LITREF(lit_78),YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_36 = YPmet(FUNCODEREF(fun_elt_setter_36),LITREF(lit_77),T26,ENVNUL,PNUL,sloc(189));
  T28 = VARREF_OR(YgooScolsScolxYelt_setter,YPfalse);
  T29 = fun_elt_setter_36;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YgooScolsScolxYelt_setter,T27);
  lit_80 = YPPsym((P)"del");
  lit_81 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T30 = YPsig(LITREF(lit_81),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_del_37 = YPmet(FUNCODEREF(fun_del_37),LITREF(lit_80),T30,ENVNUL,PNUL,sloc(248));
  T32 = VARREF_OR(YgooScolsScolYdel,YPfalse);
  T33 = fun_del_37;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YgooScolsScolYdel,T31);
  lit_82 = YPPsym((P)"del!");
  lit_83 = YPPlist(2,YPPsym((P)"table"),YPPsym((P)"key"));
  lit_84 = YPsb((P)"The table is totally full this shouldn't happen");
  T34 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_delX_38 = YPmet(FUNCODEREF(fun_delX_38),LITREF(lit_82),T34,ENVNUL,PNUL,sloc(251));
  T36 = VARREF_OR(YgooScolsScolxYdelX,YPfalse);
  T37 = fun_delX_38;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YgooScolsScolxYdelX,T35);
  lit_85 = YPPsym((P)"do-keyed");
  lit_86 = YPPlist(2,YPPsym((P)"function"),YPPsym((P)"table"));
  T38 = YPsig(LITREF(lit_86),YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_keyed_39 = YPmet(FUNCODEREF(fun_do_keyed_39),LITREF(lit_85),T38,ENVNUL,PNUL,sloc(287));
  T40 = VARREF_OR(YgooScolsScolYdo_keyed,YPfalse);
  T41 = fun_do_keyed_39;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T41);
  VARSET(YgooScolsScolYdo_keyed,T39);
  lit_87 = YPPsym((P)"do");
  lit_88 = YPPlist(2,YPPsym((P)"function"),YPPsym((P)"table"));
  T42 = YPsig(LITREF(lit_88),YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_40 = YPmet(FUNCODEREF(fun_do_40),LITREF(lit_87),T42,ENVNUL,PNUL,sloc(304));
  T44 = VARREF_OR(YgooSmacrosYdo,YPfalse);
  T45 = fun_do_40;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YgooSmacrosYdo,T43);
  lit_89 = YPPsym((P)"zap!");
  lit_90 = YPPlist(1,YPPsym((P)"table"));
  T46 = YPsig(LITREF(lit_90),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_zapX_41 = YPmet(FUNCODEREF(fun_zapX_41),LITREF(lit_89),T46,ENVNUL,PNUL,sloc(320));
  T48 = VARREF_OR(YgooScolsScolxYzapX,YPfalse);
  T49 = fun_zapX_41;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YgooScolsScolxYzapX,T47);
  lit_91 = YPPsym((P)"len");
  lit_92 = YPPlist(1,YPPsym((P)"table"));
  T50 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_42 = YPmet(FUNCODEREF(fun_len_42),LITREF(lit_91),T50,ENVNUL,PNUL,sloc(325));
  T52 = VARREF_OR(YgooStypesYlen,YPfalse);
  T53 = fun_len_42;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YgooStypesYlen,T51);
  lit_93 = YPPsym((P)"<tab-enum>");
  T55 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T54 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_93),T55);
  VARSET(YgooScolsStabYLtab_enumG,T54);
  lit_94 = YPPsym((P)"@vec");
  lit_95 = YPPlist(1,YPPsym((P)"_x"));
  T56 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Ovec_43 = YPmet(FUNCODEREF(fun_Ovec_43),LITREF(lit_94),T56,ENVNUL,PNUL,sloc(329));
  T58 = VARREF_OR(YgooScolsStabYOvec,YPfalse);
  T59 = fun_Ovec_43;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YgooScolsStabYOvec,T57);
  lit_96 = YPPsym((P)"@vec-setter");
  lit_97 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T60 = YPsig(LITREF(lit_97),YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Ovec_setter_44 = YPmet(FUNCODEREF(fun_Ovec_setter_44),LITREF(lit_96),T60,ENVNUL,PNUL,sloc(329));
  T62 = VARREF_OR(YgooScolsStabYOvec_setter,YPfalse);
  T63 = fun_Ovec_setter_44;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YgooScolsStabYOvec_setter,T61);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOvec),VARREF(YgooScolsStabYOvec_setter),VARREF(YgooScolsStabYLtab_vecG),VARREF(YPprop_unbound_error));
  lit_98 = YPPsym((P)"@buc");
  lit_99 = YPPlist(1,YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Obuc_45 = YPmet(FUNCODEREF(fun_Obuc_45),LITREF(lit_98),T64,ENVNUL,PNUL,sloc(330));
  T66 = VARREF_OR(YgooScolsStabYObuc,YPfalse);
  T67 = fun_Obuc_45;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YgooScolsStabYObuc,T65);
  lit_100 = YPPsym((P)"@buc-setter");
  lit_101 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_101),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Obuc_setter_46 = YPmet(FUNCODEREF(fun_Obuc_setter_46),LITREF(lit_100),T68,ENVNUL,PNUL,sloc(330));
  T70 = VARREF_OR(YgooScolsStabYObuc_setter,YPfalse);
  T71 = fun_Obuc_setter_46;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T71);
  VARSET(YgooScolsStabYObuc_setter,T69);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYObuc),VARREF(YgooScolsStabYObuc_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_102 = YPPsym((P)"@idx");
  lit_103 = YPPlist(1,YPPsym((P)"_x"));
  T72 = YPsig(LITREF(lit_103),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Oidx_47 = YPmet(FUNCODEREF(fun_Oidx_47),LITREF(lit_102),T72,ENVNUL,PNUL,sloc(331));
  T74 = VARREF_OR(YgooScolsStabYOidx,YPfalse);
  T75 = fun_Oidx_47;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T75);
  VARSET(YgooScolsStabYOidx,T73);
  lit_104 = YPPsym((P)"@idx-setter");
  lit_105 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T76 = YPsig(LITREF(lit_105),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Oidx_setter_48 = YPmet(FUNCODEREF(fun_Oidx_setter_48),LITREF(lit_104),T76,ENVNUL,PNUL,sloc(331));
  T78 = VARREF_OR(YgooScolsStabYOidx_setter,YPfalse);
  T79 = fun_Oidx_setter_48;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T79);
  VARSET(YgooScolsStabYOidx_setter,T77);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOidx),VARREF(YgooScolsStabYOidx_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_106 = YPPsym((P)"@fin?");
  lit_107 = YPPlist(1,YPPsym((P)"_x"));
  T80 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_OfinQ_49 = YPmet(FUNCODEREF(fun_OfinQ_49),LITREF(lit_106),T80,ENVNUL,PNUL,sloc(332));
  T82 = VARREF_OR(YgooScolsStabYOfinQ,YPfalse);
  T83 = fun_OfinQ_49;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T83);
  VARSET(YgooScolsStabYOfinQ,T81);
  lit_108 = YPPsym((P)"@fin?-setter");
  lit_109 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T84 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YLlogG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_OfinQ_setter_50 = YPmet(FUNCODEREF(fun_OfinQ_setter_50),LITREF(lit_108),T84,ENVNUL,PNUL,sloc(332));
  T86 = VARREF_OR(YgooScolsStabYOfinQ_setter,YPfalse);
  T87 = fun_OfinQ_setter_50;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T87);
  VARSET(YgooScolsStabYOfinQ_setter,T85);
  lit_110 = YPPlist(1,YPPsym((P)"_x"));
  T88 = YPsig(LITREF(lit_110),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T88,ENVNUL,PNUL,sloc(332));
  T89 = fun_51;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOfinQ),VARREF(YgooScolsStabYOfinQ_setter),VARREF(YLlogG),T89);
  T90 = XCALL3(1,VARREF(Ynew),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOfinQ),YPtrue);
  VARSET(YgooScolsStabYDfin_enum,T90);
  lit_111 = YPPsym((P)"enum");
  lit_112 = YPPlist(1,YPPsym((P)"table"));
  T91 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsStabYLtab_enumG),Ynil);
  fun_enum_52 = YPmet(FUNCODEREF(fun_enum_52),LITREF(lit_111),T91,ENVNUL,PNUL,sloc(335));
  T93 = VARREF_OR(YgooScolsScolYenum,YPfalse);
  T94 = fun_enum_52;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T94);
  VARSET(YgooScolsScolYenum,T92);
  lit_113 = YPPsym((P)"nxt");
  lit_114 = YPPlist(1,YPPsym((P)"e"));
  T95 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsStabYLtab_enumG),Ynil);
  fun_nxt_53 = YPmet(FUNCODEREF(fun_nxt_53),LITREF(lit_113),T95,ENVNUL,PNUL,sloc(353));
  T97 = VARREF_OR(YgooScolsScolYnxt,YPfalse);
  T98 = fun_nxt_53;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T98);
  VARSET(YgooScolsScolYnxt,T96);
  lit_115 = YPPsym((P)"fin?");
  lit_116 = YPPlist(1,YPPsym((P)"e"));
  T99 = YPsig(LITREF(lit_116),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_54 = YPmet(FUNCODEREF(fun_finQ_54),LITREF(lit_115),T99,ENVNUL,PNUL,sloc(371));
  T101 = VARREF_OR(YgooScolsScolYfinQ,YPfalse);
  T102 = fun_finQ_54;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T102);
  VARSET(YgooScolsScolYfinQ,T100);
  lit_117 = YPPsym((P)"now-key");
  lit_118 = YPPlist(1,YPPsym((P)"e"));
  T103 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_key_55 = YPmet(FUNCODEREF(fun_now_key_55),LITREF(lit_117),T103,ENVNUL,PNUL,sloc(374));
  T105 = VARREF_OR(YgooScolsScolYnow_key,YPfalse);
  T106 = fun_now_key_55;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T106);
  VARSET(YgooScolsScolYnow_key,T104);
  lit_119 = YPPsym((P)"now");
  lit_120 = YPPlist(1,YPPsym((P)"e"));
  T107 = YPsig(LITREF(lit_120),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_56 = YPmet(FUNCODEREF(fun_now_56),LITREF(lit_119),T107,ENVNUL,PNUL,sloc(379));
  T109 = VARREF_OR(YgooScolsScolYnow,YPfalse);
  T110 = fun_now_56;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T110);
  VARSET(YgooScolsScolYnow,T108);
  lit_121 = YPPsym((P)"now-setter");
  lit_122 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"e"));
  T111 = YPsig(LITREF(lit_122),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_57 = YPmet(FUNCODEREF(fun_now_setter_57),LITREF(lit_121),T111,ENVNUL,PNUL,sloc(384));
  T113 = VARREF_OR(YgooScolsScolYnow_setter,YPfalse);
  T114 = fun_now_setter_57;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T114);
  VARSET(YgooScolsScolYnow_setter,T112);
  lit_123 = YPPsym((P)"tab-keys");
  lit_124 = YPPlist(1,YPPsym((P)"table"));
  lit_125 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  T116 = YPsig(LITREF(lit_125),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T116,ENVNUL,PNUL,sloc(393));
  T115 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_tab_keys_59 = YPmet(FUNCODEREF(fun_tab_keys_59),LITREF(lit_123),T115,ENVNUL,PNUL,sloc(392));
  T118 = VARREF_OR(YgooScolsStabYtab_keys,YPfalse);
  T119 = fun_tab_keys_59;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T119);
  VARSET(YgooScolsStabYtab_keys,T117);
  lit_126 = YPPsym((P)"grow-table");
  lit_127 = YPPlist(1,YPPsym((P)"table"));
  T120 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_grow_table_60 = YPmet(FUNCODEREF(fun_grow_table_60),LITREF(lit_126),T120,ENVNUL,PNUL,sloc(395));
  T122 = VARREF_OR(YgooScolsStabYgrow_table,YPfalse);
  T123 = fun_grow_table_60;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T123);
  VARSET(YgooScolsStabYgrow_table,T121);
  lit_128 = YPPsym((P)"rehash-table");
  lit_129 = YPPlist(1,YPPsym((P)"table"));
  T124 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_rehash_table_61 = YPmet(FUNCODEREF(fun_rehash_table_61),LITREF(lit_128),T124,ENVNUL,PNUL,sloc(416));
  T126 = VARREF_OR(YgooScolsStabYrehash_table,YPfalse);
  T127 = fun_rehash_table_61;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T127);
  VARSET(YgooScolsStabYrehash_table,T125);
  lit_130 = YPPsym((P)"choose-table-geometry");
  lit_131 = YPPlist(1,YPPsym((P)"capacity"));
  lit_132 = YPPlist(1,YPPsym((P)"return"));
  lit_133 = YPPlist(1,YPPsym((P)"p"));
  lit_134 = YPsb((P)"Not enough primes to compute new table size");
  T131 = YPsig(LITREF(lit_133),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T131,ENVNUL,PNUL,sloc(441));
  T130 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T130,ENVNUL,PNUL,sloc(432));
  T129 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T128 = YPsig(LITREF(lit_131),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),T129,Ynil);
  YgooScolsStabYchoose_table_geometry = YPmet(FUNCODEREF(YgooScolsStabYchoose_table_geometry),LITREF(lit_130),T128,ENVNUL,PNUL,sloc(429));
  T132 = YgooScolsStabYchoose_table_geometry;
  VARSET(YgooScolsStabYchoose_table_geometry,T132);
  lit_135 = YPPsym((P)"copy-to-new-vector");
  lit_136 = YPPlist(2,YPPsym((P)"table"),YPPsym((P)"new-vector"));
  lit_137 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  lit_138 = YPsb((P)"The table is totally full this shouldn't happen");
  T134 = YPsig(LITREF(lit_137),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T134,ENVNUL,PNUL,sloc(449));
  T133 = YPsig(LITREF(lit_136),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_copy_to_new_vector_66 = YPmet(FUNCODEREF(fun_copy_to_new_vector_66),LITREF(lit_135),T133,ENVNUL,PNUL,sloc(447));
  T136 = VARREF_OR(YgooScolsStabYcopy_to_new_vector,YPfalse);
  T137 = fun_copy_to_new_vector_66;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T137);
  VARSET(YgooScolsStabYcopy_to_new_vector,T135);
  lit_139 = YPPlist(1,YPPsym((P)"x"));
  T138 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_67 = YPmet(FUNCODEREF(fun_id_hash_67),LITREF(lit_57),T138,ENVNUL,PNUL,sloc(486));
  T140 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T141 = fun_id_hash_67;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T141);
  VARSET(YgooScolsStabYid_hash,T139);
  lit_140 = YPPlist(1,YPPsym((P)"x"));
  T142 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YLlogG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_68 = YPmet(FUNCODEREF(fun_id_hash_68),LITREF(lit_57),T142,ENVNUL,PNUL,sloc(488));
  T144 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T145 = fun_id_hash_68;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T145);
  VARSET(YgooScolsStabYid_hash,T143);
  lit_141 = YPPsym((P)"rot");
  lit_142 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T146 = YPsig(LITREF(lit_142),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  YgooScolsStabYrot = YPmet(FUNCODEREF(YgooScolsStabYrot),LITREF(lit_141),T146,ENVNUL,PNUL,sloc(491));
  T147 = YgooScolsStabYrot;
  VARSET(YgooScolsStabYrot,T147);
  lit_143 = YPPlist(1,YPPsym((P)"x"));
  T148 = YPsig(LITREF(lit_143),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_70 = YPmet(FUNCODEREF(fun_id_hash_70),LITREF(lit_57),T148,ENVNUL,PNUL,sloc(494));
  T150 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T151 = fun_id_hash_70;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T151);
  VARSET(YgooScolsStabYid_hash,T149);
  lit_144 = YPPlist(1,YPPsym((P)"x"));
  T152 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_71 = YPmet(FUNCODEREF(fun_id_hash_71),LITREF(lit_57),T152,ENVNUL,PNUL,sloc(498));
  T154 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T155 = fun_id_hash_71;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T155);
  VARSET(YgooScolsStabYid_hash,T153);
  lit_145 = YPPlist(1,YPPsym((P)"x"));
  T156 = YPsig(LITREF(lit_145),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_72 = YPmet(FUNCODEREF(fun_id_hash_72),LITREF(lit_57),T156,ENVNUL,PNUL,sloc(501));
  T158 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T159 = fun_id_hash_72;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T159);
  VARSET(YgooScolsStabYid_hash,T157);
  lit_146 = YPPlist(1,YPPsym((P)"x"));
  T160 = YPsig(LITREF(lit_146),YPPlist(1,VARREF(YLtupG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_73 = YPmet(FUNCODEREF(fun_id_hash_73),LITREF(lit_57),T160,ENVNUL,PNUL,sloc(504));
  T162 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T163 = fun_id_hash_73;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T163);
  VARSET(YgooScolsStabYid_hash,T161);
  lit_147 = YPPsym((P)"key-type");
  lit_148 = YPPlist(1,YPPsym((P)"x"));
  T164 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_74 = YPmet(FUNCODEREF(fun_key_type_74),LITREF(lit_147),T164,ENVNUL,PNUL,sloc(514));
  T166 = VARREF_OR(YgooScolsScolYkey_type,YPfalse);
  T167 = fun_key_type_74;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T167);
  VARSET(YgooScolsScolYkey_type,T165);
  lit_149 = YPPsym((P)"elt-type");
  lit_150 = YPPlist(1,YPPsym((P)"x"));
  T168 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_75 = YPmet(FUNCODEREF(fun_elt_type_75),LITREF(lit_149),T168,ENVNUL,PNUL,sloc(515));
  T170 = VARREF_OR(YgooScolsScolYelt_type,YPfalse);
  T171 = fun_elt_type_75;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T171);
  VARSET(YgooScolsScolYelt_type,T169);
  lit_151 = YPPsym((P)"case-insensitive-string-hash");
  lit_152 = YPPlist(1,YPPsym((P)"x"));
  T172 = YPsig(LITREF(lit_152),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooScolsStabYcase_insensitive_string_hash = YPmet(FUNCODEREF(YgooScolsStabYcase_insensitive_string_hash),LITREF(lit_151),T172,ENVNUL,PNUL,sloc(517));
  T173 = YgooScolsStabYcase_insensitive_string_hash;
  VARSET(YgooScolsStabYcase_insensitive_string_hash,T173);
  lit_153 = YPPsym((P)"case-insensitive-string-equal");
  lit_154 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T174 = YPsig(LITREF(lit_154),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooScolsStabYcase_insensitive_string_equal = YPmet(FUNCODEREF(YgooScolsStabYcase_insensitive_string_equal),LITREF(lit_153),T174,ENVNUL,PNUL,sloc(525));
  T175 = YgooScolsStabYcase_insensitive_string_equal;
  VARSET(YgooScolsStabYcase_insensitive_string_equal,T175);
  lit_155 = YPPlist(1,YPPsym((P)"_"));
  T176 = YPsig(LITREF(lit_155),YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_78 = YPmet(FUNCODEREF(fun_key_test_78),LITREF(lit_67),T176,ENVNUL,PNUL,sloc(535));
  T178 = VARREF_OR(YgooScolsScolYkey_test,YPfalse);
  T179 = fun_key_test_78;
  T177 = XCALL2(1,VARREF(YPdefine_method),T178,T179);
  VARSET(YgooScolsScolYkey_test,T177);
  lit_156 = YPPlist(1,YPPsym((P)"_"));
  T180 = YPsig(LITREF(lit_156),YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_tab_hash_79 = YPmet(FUNCODEREF(fun_tab_hash_79),LITREF(lit_55),T180,ENVNUL,PNUL,sloc(536));
  T182 = VARREF_OR(YgooScolsStabYtab_hash,YPfalse);
  T183 = fun_tab_hash_79;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T183);
  VARSET(YgooScolsStabYtab_hash,T181);
  lit_157 = YPPsym((P)"add!");
  lit_158 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T186 = YPsig(LITREF(lit_158),YPPlist(2,VARREF(YgooScolsStabYLsetG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsStabYLsetG),Ynil);
  T185 = fun_addX_80 = YPmet(FUNCODEREF(fun_addX_80),LITREF(lit_157),T186,ENVNUL,PNUL,sloc(542));
  T189 = VARREF_OR(YgooScolsScolxYaddX,YPfalse);
  T190 = fun_addX_80;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T190);
  T187 = VARSET(YgooScolsScolxYaddX,T188);
  T184 = T187;
  return T184;
}

P YgooScolsStabY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
DEFCREGS();
  lit_159 = YPPsym((P)"mem?");
  lit_160 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_160),YPPlist(2,VARREF(YgooScolsStabYLsetG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_memQ_81 = YPmet(FUNCODEREF(fun_memQ_81),LITREF(lit_159),T0,ENVNUL,PNUL,sloc(546));
  T2 = VARREF_OR(YgooScolsScolYmemQ,YPfalse);
  T3 = fun_memQ_81;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YgooScolsScolYmemQ,T1);
  lit_161 = YPPsym((P)"elts");
  lit_162 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"keys"));
  lit_163 = YPPlist(1,YPPsym((P)"k"));
  T8 = YPsig(LITREF(lit_163),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T7 = fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T8,ENVNUL,PNUL,sloc(551));
  T6 = YPsig(LITREF(lit_162),YPPlist(2,VARREF(YLcolG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T5 = fun_elts_83 = YPmet(FUNCODEREF(fun_elts_83),LITREF(lit_161),T6,ENVNUL,PNUL,sloc(549));
  T11 = VARREF_OR(YgooScolsScolYelts,YPfalse);
  T12 = fun_elts_83;
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
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<str-tab>", CVAR, &YgooScolsStabYLstr_tabG},
  {"@idx", CVAR, &YgooScolsStabYOidx},
  {"choose-table-geometry", CVAR, &YgooScolsStabYchoose_table_geometry},
  {"$empty-cell-marker", CVAR, &YgooScolsStabYDempty_cell_marker},
  {"%vacated-setter", CVAR, &YgooScolsStabYPvacated_setter},
  {"id-hash", CVAR, &YgooScolsStabYid_hash},
  {"tab-hash", CVAR, &YgooScolsStabYtab_hash},
  {"@fin?-setter", CVAR, &YgooScolsStabYOfinQ_setter},
  {"*twin-primes*", CVAR, &YgooScolsStabYTtwin_primesT},
  {"@vec-setter", CVAR, &YgooScolsStabYOvec_setter},
  {"case-insensitive-string-equal", CVAR, &YgooScolsStabYcase_insensitive_string_equal},
  {"<tab-vec>", CVAR, &YgooScolsStabYLtab_vecG},
  {"rehash-table", CVAR, &YgooScolsStabYrehash_table},
  {"%vacated", CVAR, &YgooScolsStabYPvacated},
  {"@fill!", CVAR, &YgooScolsStabYOfillX},
  {"$vacated-cell-marker", CVAR, &YgooScolsStabYDvacated_cell_marker},
  {"@fin?", CVAR, &YgooScolsStabYOfinQ},
  {"%primary-modulus-setter", CVAR, &YgooScolsStabYPprimary_modulus_setter},
  {"tab-shrink-threshold-setter", CVAR, &YgooScolsStabYtab_shrink_threshold_setter},
  {"%vector", CVAR, &YgooScolsStabYPvector},
  {"---main-0---", PVAR, NULL},
  {"@vec", CVAR, &YgooScolsStabYOvec},
  {"---main-1---", PVAR, NULL},
  {"grow-table", CVAR, &YgooScolsStabYgrow_table},
  {"%vector-setter", CVAR, &YgooScolsStabYPvector_setter},
  {"tab-growth-factor-setter", CVAR, &YgooScolsStabYtab_growth_factor_setter},
  {"tab-growth-threshold-setter", CVAR, &YgooScolsStabYtab_growth_threshold_setter},
  {"%primary-modulus", CVAR, &YgooScolsStabYPprimary_modulus},
  {"tab-shrink-threshold", CVAR, &YgooScolsStabYtab_shrink_threshold},
  {"%secondary-modulus-setter", CVAR, &YgooScolsStabYPsecondary_modulus_setter},
  {"---main-2---", PVAR, NULL},
  {"@buc-setter", CVAR, &YgooScolsStabYObuc_setter},
  {"<set>", CVAR, &YgooScolsStabYLsetG},
  {"tab-keys", CVAR, &YgooScolsStabYtab_keys},
  {"tab-growth-threshold", CVAR, &YgooScolsStabYtab_growth_threshold},
  {"fab-tab-vec", CVAR, &YgooScolsStabYfab_tab_vec},
  {"tab-growth-factor", CVAR, &YgooScolsStabYtab_growth_factor},
  {"%n-buckets-setter", CVAR, &YgooScolsStabYPn_buckets_setter},
  {"%secondary-modulus", CVAR, &YgooScolsStabYPsecondary_modulus},
  {"@buc", CVAR, &YgooScolsStabYObuc},
  {"@elt-setter", PVAR, NULL},
  {"%bucket-depth-setter", CVAR, &YgooScolsStabYPbucket_depth_setter},
  {"$fin-enum", CVAR, &YgooScolsStabYDfin_enum},
  {"*debug-tables?*", CVAR, &YgooScolsStabYTdebug_tablesQT},
  {"%count-setter", CVAR, &YgooScolsStabYPcount_setter},
  {"copy-to-new-vector", CVAR, &YgooScolsStabYcopy_to_new_vector},
  {"@elt", PVAR, NULL},
  {"%n-buckets", CVAR, &YgooScolsStabYPn_buckets},
  {"<tab-enum>", CVAR, &YgooScolsStabYLtab_enumG},
  {"rot", CVAR, &YgooScolsStabYrot},
  {"case-insensitive-string-hash", CVAR, &YgooScolsStabYcase_insensitive_string_hash},
  {"@idx-setter", CVAR, &YgooScolsStabYOidx_setter},
  {"clr!", CVAR, &YgooScolsStabYclrX},
  {"%bucket-depth", CVAR, &YgooScolsStabYPbucket_depth},
  {"%data", CVAR, &YgooScolsStabYPdata},
  {"%data-setter", CVAR, &YgooScolsStabYPdata_setter},
  {"%count", CVAR, &YgooScolsStabYPcount},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<str-tab>", NULL},
  {"id-hash", NULL},
  {"tab-hash", NULL},
  {"case-insensitive-string-equal", NULL},
  {"case-insensitive-string-hash", NULL},
  {"tab-shrink-threshold-setter", NULL},
  {"tab-growth-factor-setter", NULL},
  {"tab-growth-threshold-setter", NULL},
  {"tab-shrink-threshold", NULL},
  {"<set>", NULL},
  {"<tab>", NULL},
  {"tab-growth-threshold", NULL},
  {"tab-growth-factor", NULL},
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
