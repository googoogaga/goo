/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/tab */

EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ynot,"goo/boot","not");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YgooScolsStabYPvector_setter,"goo/cols/tab","%vector-setter");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YgooScolsStabYObuc,"goo/cols/tab","@buc");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YgooScolsStabYDempty_cell_marker,"goo/cols/tab","$empty-cell-marker");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YgooScolsStabYchoose_table_geometry,"goo/cols/tab","choose-table-geometry");
DEF(YgooScolsStabYrehash_table,"goo/cols/tab","rehash-table");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YgooScolsStabYLtab_enumG,"goo/cols/tab","<tab-enum>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
DEF(YgooScolsStabYPsecondary_modulus,"goo/cols/tab","%secondary-modulus");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ylst,"goo/boot","lst");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YgooScolsStabYPn_buckets_setter,"goo/cols/tab","%n-buckets-setter");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
DEF(YgooScolsStabYPvector,"goo/cols/tab","%vector");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
DEF(YgooScolsStabYPn_buckets,"goo/cols/tab","%n-buckets");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YgooScolsStabYOidx_setter,"goo/cols/tab","@idx-setter");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
DEF(YgooScolsStabYcopy_to_new_vector,"goo/cols/tab","copy-to-new-vector");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YgooScolsStabYPbucket_depth_setter,"goo/cols/tab","%bucket-depth-setter");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Ytup,"goo/boot","tup");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YgooScolsStabYPdata_setter,"goo/cols/tab","%data-setter");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YgooScolsStabYPcount_setter,"goo/cols/tab","%count-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLlogG,"goo/boot","<log>");
DEF(YgooScolsStabYfab_tab_vec,"goo/cols/tab","fab-tab-vec");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YgooScolsStabYOidx,"goo/cols/tab","@idx");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YgooScolsStabYPvacated_setter,"goo/cols/tab","%vacated-setter");
EXT(YLanyG,"goo/boot","<any>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YgooScolsStabYPbucket_depth,"goo/cols/tab","%bucket-depth");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ynil,"goo/boot","nil");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooScolsStabYOvec_setter,"goo/cols/tab","@vec-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YgooScolsStabYPdata,"goo/cols/tab","%data");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YgooScolsStabYOfinQ_setter,"goo/cols/tab","@fin?-setter");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YgooScolsStabYPcount,"goo/cols/tab","%count");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YgooScolsStabYDfin_enum,"goo/cols/tab","$fin-enum");
EXT(YPsnul,"goo/boot","%snul");
DEF(YgooScolsStabYLtab_vecG,"goo/cols/tab","<tab-vec>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooScolsStabYPvacated,"goo/cols/tab","%vacated");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yfun_names,"goo/boot","fun-names");
DEF(YgooScolsStabYrot,"goo/cols/tab","rot");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
DEF(YgooScolsStabYOvec,"goo/cols/tab","@vec");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YgooScolsStabYOfinQ,"goo/cols/tab","@fin?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DEF(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YgooScolsStabYTtwin_primesT,"goo/cols/tab","*twin-primes*");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YgooScolsStabYPprimary_modulus_setter,"goo/cols/tab","%primary-modulus-setter");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ytail,"goo/boot","tail");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YgooScolsStabYTdebug_tablesQT,"goo/cols/tab","*debug-tables?*");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
DEF(YgooScolsStabYgrow_table,"goo/cols/tab","grow-table");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YgooScolsStabYPprimary_modulus,"goo/cols/tab","%primary-modulus");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ynew,"goo/boot","new");
DEF(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YgooScolsStabYclrX,"goo/cols/tab","clr!");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YgooScolsStabYObuc_setter,"goo/cols/tab","@buc-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYround,"goo/math","round");
DEF(YgooScolsStabYtab_keys,"goo/cols/tab","tab-keys");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YgooScolsStabYDvacated_cell_marker,"goo/cols/tab","$vacated-cell-marker");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
DEF(YgooScolsStabYPsecondary_modulus_setter,"goo/cols/tab","%secondary-modulus-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YgooScolsStabYOfillX,"goo/cols/tab","@fill!");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmathYtan,"goo/math","tan");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_122);
DEFLIT(lit_137);
DEFLIT(lit_150);
DEFLIT(lit_26);
DEFLIT(lit_114);
DEFLIT(lit_80);
DEFLIT(lit_118);
DEFLIT(lit_121);
DEFLIT(lit_136);
DEFLIT(lit_181);
DEFLIT(lit_134);
DEFLIT(lit_15);
DEFLIT(lit_27);
DEFLIT(lit_82);
DEFLIT(lit_13);
DEFLIT(lit_4);
DEFLIT(lit_61);
DEFLIT(lit_86);
DEFLIT(lit_63);
DEFLIT(lit_42);
DEFLIT(lit_169);
DEFLIT(lit_65);
DEFLIT(lit_34);
DEFLIT(lit_110);
DEFLIT(lit_22);
DEFLIT(lit_52);
DEFLIT(lit_79);
DEFLIT(lit_105);
DEFLIT(lit_127);
DEFLIT(lit_50);
DEFLIT(lit_16);
DEFLIT(lit_98);
DEFLIT(lit_59);
DEFLIT(lit_99);
DEFLIT(lit_49);
DEFLIT(lit_64);
DEFLIT(lit_168);
DEFLIT(lit_7);
DEFLIT(lit_6);
DEFLIT(lit_133);
DEFLIT(lit_174);
DEFLIT(lit_93);
DEFLIT(lit_41);
DEFLIT(lit_28);
DEFLIT(lit_11);
DEFLIT(lit_102);
DEFLIT(lit_139);
DEFLIT(lit_48);
DEFLIT(lit_141);
DEFLIT(lit_128);
DEFLIT(lit_8);
DEFLIT(lit_69);
DEFLIT(lit_104);
DEFLIT(lit_24);
DEFLIT(lit_53);
DEFLIT(lit_23);
DEFLIT(lit_135);
DEFLIT(lit_185);
DEFLIT(lit_103);
DEFLIT(lit_125);
DEFLIT(lit_146);
DEFLIT(lit_60);
DEFLIT(lit_142);
DEFLIT(lit_57);
DEFLIT(lit_157);
DEFLIT(lit_19);
DEFLIT(lit_149);
DEFLIT(lit_116);
DEFLIT(lit_51);
DEFLIT(lit_43);
DEFLIT(lit_170);
DEFLIT(lit_45);
DEFLIT(lit_165);
DEFLIT(lit_70);
DEFLIT(lit_83);
DEFLIT(lit_143);
DEFLIT(lit_38);
DEFLIT(lit_54);
DEFLIT(lit_17);
DEFLIT(lit_161);
DEFLIT(lit_109);
DEFLIT(lit_131);
DEFLIT(lit_164);
DEFLIT(lit_115);
DEFLIT(lit_119);
DEFLIT(lit_106);
DEFLIT(lit_55);
DEFLIT(lit_138);
DEFLIT(lit_154);
DEFLIT(lit_178);
DEFLIT(lit_155);
DEFLIT(lit_68);
DEFLIT(lit_148);
DEFLIT(lit_89);
DEFLIT(lit_123);
DEFLIT(lit_126);
DEFLIT(lit_14);
DEFLIT(lit_39);
DEFLIT(lit_2);
DEFLIT(lit_153);
DEFLIT(lit_176);
DEFLIT(lit_56);
DEFLIT(lit_58);
DEFLIT(lit_113);
DEFLIT(lit_182);
DEFLIT(lit_78);
DEFLIT(lit_147);
DEFLIT(lit_32);
DEFLIT(lit_84);
DEFLIT(lit_1);
DEFLIT(lit_73);
DEFLIT(lit_107);
DEFLIT(lit_46);
DEFLIT(lit_117);
DEFLIT(lit_91);
DEFLIT(lit_166);
DEFLIT(lit_124);
DEFLIT(lit_152);
DEFLIT(lit_21);
DEFLIT(lit_156);
DEFLIT(lit_67);
DEFLIT(lit_81);
DEFLIT(lit_175);
DEFLIT(lit_18);
DEFLIT(lit_75);
DEFLIT(lit_130);
DEFLIT(lit_74);
DEFLIT(lit_5);
DEFLIT(lit_100);
DEFLIT(lit_71);
DEFLIT(lit_29);
DEFLIT(lit_76);
DEFLIT(lit_33);
DEFLIT(lit_66);
DEFLIT(lit_183);
DEFLIT(lit_145);
DEFLIT(lit_120);
DEFLIT(lit_47);
DEFLIT(lit_180);
DEFLIT(lit_173);
DEFLIT(lit_44);
DEFLIT(lit_20);
DEFLIT(lit_111);
DEFLIT(lit_36);
DEFLIT(lit_112);
DEFLIT(lit_35);
DEFLIT(lit_0);
DEFLIT(lit_37);
DEFLIT(lit_167);
DEFLIT(lit_163);
DEFLIT(lit_9);
DEFLIT(lit_179);
DEFLIT(lit_12);
DEFLIT(lit_77);
DEFLIT(lit_40);
DEFLIT(lit_88);
DEFLIT(lit_159);
DEFLIT(lit_95);
DEFLIT(lit_92);
DEFLIT(lit_160);
DEFLIT(lit_31);
DEFLIT(lit_62);
DEFLIT(lit_90);
DEFLIT(lit_85);
DEFLIT(lit_177);
DEFLIT(lit_10);
DEFLIT(lit_30);
DEFLIT(lit_140);
DEFLIT(lit_94);
DEFLIT(lit_96);
DEFLIT(lit_184);
DEFLIT(lit_3);
DEFLIT(lit_25);
DEFLIT(lit_162);
DEFLIT(lit_158);
DEFLIT(lit_151);
DEFLIT(lit_144);
DEFLIT(lit_108);
DEFLIT(lit_132);
DEFLIT(lit_171);
DEFLIT(lit_172);
DEFLIT(lit_129);
DEFLIT(lit_97);
DEFLIT(lit_87);
DEFLIT(lit_101);
DEFLIT(lit_72);

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
  P vF1950;
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
  vF1950 = T1;
  T2 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),size_,fill_value_);
  CALL2(1,VARREF(YgooScolsStabYPdata_setter),T2,vF1950);
  T0 = vF1950;
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
  P xF1952;
  P xF1951;
  P T0,T1,T2,T3,T4;
  P a1,a2;
DEFCREGS();
loop:
  T1 = XCALL1(1,VARREF(YgooScolsStabYPdata),vector_);
  xF1951 = index_;
  xF1952 = xF1951;
  T4 = (P)YPiGG(xF1952,(P)2);
  T3 = T4;
  T2 = T3;
  T0 = (P)YPrelt(T1,T2);
  return T0;
}

P YgooScolsStabYOelt_setter(P new_value_,P vector_,P index_) {
  P xF1954;
  P xF1953;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
DEFCREGS();
loop:
  T1 = XCALL1(1,VARREF(YgooScolsStabYPdata),vector_);
  xF1953 = index_;
  xF1954 = xF1953;
  T4 = (P)YPiGG(xF1954,(P)2);
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
  P tableF1958;
  P bucket_depthF1957;
  P n_bucketsF1956;
  P tup24F1955;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(type_, 0);
  ARG(size_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYchoose_table_geometry),size_);
  tup24F1955 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup24F1955,YPint((P)0));
  n_bucketsF1956 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup24F1955,YPint((P)1));
  bucket_depthF1957 = T5;
  T7 = CALL1(1,VARREF(Ynew),type_);
  tableF1958 = T7;
  T10 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF1957,YPint((P)2));
  T9 = CALL2(1,VARREF(YgooSmathYT),n_bucketsF1956,T10);
  T11 = CALL2(1,VARREF(YgooSmathY_),n_bucketsF1956,YPint((P)2));
  T8 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T9,VARREF(YgooScolsStabYDempty_cell_marker),n_bucketsF1956,bucket_depthF1957,n_bucketsF1956,T11);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),T8,tableF1958);
  T6 = tableF1958;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_inner_35) {
  P i_,raw_index_;
  P this_keyF1959;
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
    this_keyF1959 = T3;
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF1959,VARREF(YgooScolsStabYDempty_cell_marker));
    if (T5 != YPfalse) {
      T4 = FREEREF(2);
    } else {
      T7 = CALL2(1,FREEREF(4),FREEREF(3),this_keyF1959);
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
  P innerF1961;
  P indexF1960;
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
    indexF1960 = T3;
    T6 = FUNSHELL(1,fun_inner_35,11);
    innerF1961 = T6;
    FUNINIT(innerF1961, 11,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),innerF1961,bucket_index_,FREEREF(6),FREEREF(0),probes_,FREEREF(7));
    T7 = CALL2(0,innerF1961,YPint((P)0),indexF1960);
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
  P outerF1969;
  P bucket_offsetF1968;
  P bucket_indexF1967;
  P hashF1966;
  P bucket_depthF1965;
  P n_bucketsF1964;
  P vectorF1963;
  P test_functionF1962;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2,a3;
LINK_STACK();
  ARG(table_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF1962 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF1963 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF1963);
  n_bucketsF1964 = T5;
  T7 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF1963);
  bucket_depthF1965 = T7;
  T10 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T9 = CALL1(1,T10,key_);
  check_type(T9,VARREF(YLintG));
  hashF1966 = T9;
  T13 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF1963);
  T12 = CALL2(1,VARREF(YgooSmathYmod),hashF1966,T13);
  bucket_indexF1967 = T12;
  T17 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF1963);
  T16 = CALL2(1,VARREF(YgooSmathYmod),hashF1966,T17);
  T15 = CALL2(1,VARREF(YgooSmathYA),T16,YPint((P)1));
  bucket_offsetF1968 = T15;
  T19 = FUNSHELL(1,fun_outer_36,8);
  outerF1969 = T19;
  FUNINIT(outerF1969, 8,n_bucketsF1964,bucket_depthF1965,vectorF1963,default_,key_,test_functionF1962,bucket_offsetF1968,outerF1969);
  T20 = CALL2(0,outerF1969,bucket_indexF1967,YPint((P)0));
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
  P tmpF1974;
  P x_1369F1973;
  P indexF1972;
  P x_1370F1971;
  P this_keyF1970;
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
    this_keyF1970 = T3;
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF1970,VARREF(YgooScolsStabYDempty_cell_marker));
    if (T6 != YPfalse) {
      if (vacancy_index_ != YPfalse) {
        T9 = BOXVAL(FREEREF(1));
        x_1370F1971 = T9;
        T12 = CALL1(1,VARREF(YgooScolsStabYPvacated),x_1370F1971);
        T11 = CALL2(1,VARREF(YgooSmathY_),T12,YPint((P)1));
        T10 = CALL2(1,VARREF(YgooScolsStabYPvacated_setter),T11,x_1370F1971);
        T8 = vacancy_index_;
      } else {
        T8 = raw_index_;
      }
      indexF1972 = T8;
      T13 = BOXVAL(FREEREF(1));
      (P)YgooScolsStabYOelt_setter(FREEREF(2),T13,indexF1972);
      T14 = BOXVAL(FREEREF(1));
      T15 = CALL2(1,VARREF(YgooSmathYA),indexF1972,FREEREF(0));
      (P)YgooScolsStabYOelt_setter(FREEREF(3),T14,T15);
      x_1369F1973 = FREEREF(4);
      T18 = CALL1(1,VARREF(YgooScolsStabYPcount),x_1369F1973);
      T17 = CALL2(1,VARREF(YgooSmathYA),T18,YPint((P)1));
      T16 = CALL2(1,VARREF(YgooScolsStabYPcount_setter),T17,x_1369F1973);
      T7 = FREEREF(3);
      T5 = T7;
    } else {
      T20 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF1970,VARREF(YgooScolsStabYDvacated_cell_marker));
      if (T20 != YPfalse) {
        tmpF1974 = vacancy_index_;
        if (tmpF1974 != YPfalse) {
          T23 = tmpF1974;
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
        T27 = CALL2(1,FREEREF(6),FREEREF(2),this_keyF1970);
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
  P innerF1976;
  P indexF1975;
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
    indexF1975 = T3;
    T6 = FUNSHELL(1,fun_inner_38,12);
    innerF1976 = T6;
    FUNINIT(innerF1976, 12,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),innerF1976,FREEREF(6),bucket_index_,FREEREF(7),FREEREF(0),probes_,FREEREF(8));
    T7 = CALL3(1,innerF1976,YPfalse,YPint((P)0),indexF1975);
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
  P outerF1984;
  P bucket_offsetF1983;
  P bucket_indexF1982;
  P hashF1981;
  P n_bucketsF1980;
  P bucket_depthF1979;
  P test_functionF1978;
  P vectorF1977;
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
  vectorF1977 = T1;
  vectorF1977 = BOXFAB(vectorF1977);
  T4 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
  T8 = BOXVAL(vectorF1977);
  T7 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T8);
  T10 = BOXVAL(vectorF1977);
  T9 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T10);
  T6 = CALL2(1,VARREF(YgooSmathYT),T7,T9);
  T11 = CALL1(1,VARREF(YgooScolsStabYtab_growth_threshold),table_);
  T5 = CALL2(1,VARREF(YgooSmathYT),T6,T11);
  T3 = CALL2(1,VARREF(YgooSmagYGE),T4,T5);
  if (T3 != YPfalse) {
    T14 = CALL1(1,VARREF(YgooScolsStabYgrow_table),table_);
    T13 = CALL1(1,VARREF(YgooScolsStabYPvector),T14);
    T12 = BOXVAL(vectorF1977) = T13;
  } else {
    T18 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
    T20 = BOXVAL(vectorF1977);
    T19 = CALL1(1,VARREF(YgooScolsStabYPvacated),T20);
    T17 = CALL2(1,VARREF(YgooSmathYA),T18,T19);
    T24 = BOXVAL(vectorF1977);
    T23 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T24);
    T26 = BOXVAL(vectorF1977);
    T25 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T26);
    T22 = CALL2(1,VARREF(YgooSmathYT),T23,T25);
    T27 = CALL1(1,VARREF(YgooScolsStabYtab_growth_threshold),table_);
    T21 = CALL2(1,VARREF(YgooSmathYT),T22,T27);
    T16 = CALL2(1,VARREF(YgooSmagYG),T17,T21);
    if (T16 != YPfalse) {
      T30 = CALL1(1,VARREF(YgooScolsStabYrehash_table),table_);
      T29 = CALL1(1,VARREF(YgooScolsStabYPvector),T30);
      T28 = BOXVAL(vectorF1977) = T29;
      T15 = T28;
    } else {
      T15 = YPfalse;
    }
  }
  T32 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF1978 = T32;
  T35 = BOXVAL(vectorF1977);
  T34 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T35);
  bucket_depthF1979 = T34;
  T38 = BOXVAL(vectorF1977);
  T37 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T38);
  n_bucketsF1980 = T37;
  T41 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T40 = CALL1(1,T41,key_);
  check_type(T40,VARREF(YLintG));
  hashF1981 = T40;
  T45 = BOXVAL(vectorF1977);
  T44 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),T45);
  T43 = CALL2(1,VARREF(YgooSmathYmod),hashF1981,T44);
  bucket_indexF1982 = T43;
  T50 = BOXVAL(vectorF1977);
  T49 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),T50);
  T48 = CALL2(1,VARREF(YgooSmathYmod),hashF1981,T49);
  T47 = CALL2(1,VARREF(YgooSmathYA),T48,YPint((P)1));
  bucket_offsetF1983 = T47;
  T52 = FUNSHELL(1,fun_outer_39,9);
  outerF1984 = T52;
  FUNINIT(outerF1984, 9,n_bucketsF1980,bucket_depthF1979,vectorF1977,key_,value_,table_,test_functionF1978,bucket_offsetF1983,outerF1984);
  T53 = CALL2(1,outerF1984,bucket_indexF1982,YPint((P)0));
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
  P x_1372F1988;
  P x_1371F1987;
  P tmpF1986;
  P this_keyF1985;
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
    this_keyF1985 = T3;
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF1985,VARREF(YgooScolsStabYDempty_cell_marker));
    if (T5 != YPfalse) {
      T4 = YPfalse;
    } else {
      T8 = CALL2(1,VARREF(YgooSmathYNEE),this_keyF1985,VARREF(YgooScolsStabYDvacated_cell_marker));
      tmpF1986 = T8;
      if (tmpF1986 != YPfalse) {
        T10 = CALL2(1,FREEREF(3),FREEREF(2),this_keyF1985);
        T9 = T10;
      } else {
        T9 = YPfalse;
      }
      T7 = T9;
      if (T7 != YPfalse) {
        (P)YgooScolsStabYOelt_setter(VARREF(YgooScolsStabYDvacated_cell_marker),FREEREF(1),raw_index_);
        x_1371F1987 = FREEREF(4);
        T13 = CALL1(1,VARREF(YgooScolsStabYPcount),x_1371F1987);
        T12 = CALL2(1,VARREF(YgooSmathY_),T13,YPint((P)1));
        T11 = CALL2(1,VARREF(YgooScolsStabYPcount_setter),T12,x_1371F1987);
        x_1372F1988 = FREEREF(1);
        T16 = CALL1(1,VARREF(YgooScolsStabYPvacated),x_1372F1988);
        T15 = CALL2(1,VARREF(YgooSmathYA),T16,YPint((P)1));
        T14 = CALL2(1,VARREF(YgooScolsStabYPvacated_setter),T15,x_1372F1988);
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
  P innerF1990;
  P indexF1989;
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
    indexF1989 = T3;
    T6 = FUNSHELL(1,fun_inner_42,11);
    innerF1990 = T6;
    FUNINIT(innerF1990, 11,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),innerF1990,bucket_index_,FREEREF(6),FREEREF(0),probes_,FREEREF(7));
    T7 = CALL2(1,innerF1990,YPint((P)0),indexF1989);
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
  P outerF1998;
  P bucket_offsetF1997;
  P bucket_indexF1996;
  P hashF1995;
  P bucket_depthF1994;
  P n_bucketsF1993;
  P vectorF1992;
  P test_functionF1991;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(table_, 0);
  ARG(key_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF1991 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF1992 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF1992);
  n_bucketsF1993 = T5;
  T7 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF1992);
  bucket_depthF1994 = T7;
  T10 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T9 = CALL1(1,T10,key_);
  check_type(T9,VARREF(YLintG));
  hashF1995 = T9;
  T13 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF1992);
  T12 = CALL2(1,VARREF(YgooSmathYmod),hashF1995,T13);
  bucket_indexF1996 = T12;
  T17 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF1992);
  T16 = CALL2(1,VARREF(YgooSmathYmod),hashF1995,T17);
  T15 = CALL2(1,VARREF(YgooSmathYA),T16,YPint((P)1));
  bucket_offsetF1997 = T15;
  T18 = FUNSHELL(1,fun_outer_43,8);
  outerF1998 = T18;
  FUNINIT(outerF1998, 8,n_bucketsF1993,bucket_depthF1994,vectorF1992,key_,test_functionF1991,table_,bucket_offsetF1997,outerF1998);
  T19 = CALL2(1,outerF1998,bucket_indexF1996,YPint((P)0));
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
  P indexF2001;
  P tmpF2000;
  P keyF1999;
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
    keyF1999 = T3;
    T9 = CALL2(1,VARREF(YgooSmacrosYEE),keyF1999,VARREF(YgooScolsStabYDempty_cell_marker));
    tmpF2000 = T9;
    if (tmpF2000 != YPfalse) {
      T10 = tmpF2000;
    } else {
      T11 = CALL2(1,VARREF(YgooSmacrosYEE),keyF1999,VARREF(YgooScolsStabYDvacated_cell_marker));
      T10 = T11;
    }
    T8 = T10;
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSmathYT),FREEREF(0),YPint((P)2));
      T15 = CALL2(1,VARREF(YgooSmathYT),FREEREF(2),T16);
      T14 = CALL2(1,VARREF(YgooSmathYA),T15,FREEREF(0));
      T13 = CALL2(1,VARREF(YgooSmathYA),i_,T14);
      indexF2001 = T13;
      T18 = (P)YgooScolsStabYOelt(FREEREF(1),indexF2001);
      T17 = CALL2(1,FREEREF(3),keyF1999,T18);
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
  P innerF2002;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),b_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = FUNSHELL(1,fun_inner_45,5);
    innerF2002 = T2;
    FUNINIT(innerF2002, 5,FREEREF(1),FREEREF(2),b_,FREEREF(3),innerF2002);
    T3 = CALL1(1,innerF2002,YPint((P)0));
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
  P outerF2006;
  P depthF2005;
  P n_bucketsF2004;
  P vectorF2003;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(function_, 0);
  ARG(table_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2003 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2003);
  n_bucketsF2004 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2003);
  depthF2005 = T5;
  T7 = FUNSHELL(1,fun_outer_46,5);
  outerF2006 = T7;
  FUNINIT(outerF2006, 5,n_bucketsF2004,depthF2005,vectorF2003,function_,outerF2006);
  T8 = CALL1(1,outerF2006,YPint((P)0));
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_48) {
  P i_;
  P indexF2009;
  P tmpF2008;
  P keyF2007;
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
    keyF2007 = T3;
    T9 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2007,VARREF(YgooScolsStabYDempty_cell_marker));
    tmpF2008 = T9;
    if (tmpF2008 != YPfalse) {
      T10 = tmpF2008;
    } else {
      T11 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2007,VARREF(YgooScolsStabYDvacated_cell_marker));
      T10 = T11;
    }
    T8 = T10;
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSmathYT),FREEREF(0),YPint((P)2));
      T15 = CALL2(1,VARREF(YgooSmathYT),FREEREF(2),T16);
      T14 = CALL2(1,VARREF(YgooSmathYA),T15,FREEREF(0));
      T13 = CALL2(1,VARREF(YgooSmathYA),i_,T14);
      indexF2009 = T13;
      T18 = (P)YgooScolsStabYOelt(FREEREF(1),indexF2009);
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
  P innerF2010;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),b_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = FUNSHELL(1,fun_inner_48,5);
    innerF2010 = T2;
    FUNINIT(innerF2010, 5,FREEREF(1),FREEREF(2),b_,FREEREF(3),innerF2010);
    T3 = CALL1(1,innerF2010,YPint((P)0));
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
  P outerF2014;
  P depthF2013;
  P n_bucketsF2012;
  P vectorF2011;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(function_, 0);
  ARG(table_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2011 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2011);
  n_bucketsF2012 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2011);
  depthF2013 = T5;
  T7 = FUNSHELL(1,fun_outer_49,5);
  outerF2014 = T7;
  FUNINIT(outerF2014, 5,n_bucketsF2012,depthF2013,vectorF2011,function_,outerF2014);
  T8 = CALL1(1,outerF2014,YPint((P)0));
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
  P tmpF2016;
  P keyF2015;
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
    keyF2015 = T3;
    T9 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2015,VARREF(YgooScolsStabYDempty_cell_marker));
    tmpF2016 = T9;
    if (tmpF2016 != YPfalse) {
      T10 = tmpF2016;
    } else {
      T11 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2015,VARREF(YgooScolsStabYDvacated_cell_marker));
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
  P innerF2017;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),b_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_inner_62,5);
    innerF2017 = T3;
    FUNINIT(innerF2017, 5,FREEREF(1),FREEREF(2),b_,innerF2017,FREEREF(3));
    T4 = CALL1(1,innerF2017,YPint((P)0));
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
  P outerF2021;
  P depthF2020;
  P n_bucketsF2019;
  P vectorF2018;
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
    vectorF2018 = T4;
    T6 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2018);
    n_bucketsF2019 = T6;
    T8 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2018);
    depthF2020 = T8;
    T10 = FUNSHELL(1,fun_outer_63,4);
    outerF2021 = T10;
    FUNINIT(outerF2021, 4,n_bucketsF2019,depthF2020,vectorF2018,outerF2021);
    T11 = CALL1(1,outerF2021,YPint((P)0));
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
  P x_1373F2024;
  P tmpF2023;
  P keyF2022;
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
    keyF2022 = T3;
    T9 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2022,VARREF(YgooScolsStabYDempty_cell_marker));
    tmpF2023 = T9;
    if (tmpF2023 != YPfalse) {
      T10 = tmpF2023;
    } else {
      T11 = CALL2(1,VARREF(YgooSmacrosYEE),keyF2022,VARREF(YgooScolsStabYDvacated_cell_marker));
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
      x_1373F2024 = FREEREF(4);
      CALL2(1,VARREF(YgooScolsStabYOvec_setter),FREEREF(1),x_1373F2024);
      CALL2(1,VARREF(YgooScolsStabYObuc_setter),FREEREF(2),x_1373F2024);
      CALL2(1,VARREF(YgooScolsStabYOidx_setter),i_,x_1373F2024);
      T14 = x_1373F2024;
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
  P innerF2025;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(b_, 0);
  ARG(firstQ_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),b_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_inner_65,6);
    innerF2025 = T3;
    FUNINIT(innerF2025, 6,FREEREF(1),FREEREF(2),b_,innerF2025,FREEREF(3),FREEREF(4));
    if (firstQ_ != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSmathYA),FREEREF(5),YPint((P)1));
      T5 = T6;
    } else {
      T5 = YPint((P)0);
    }
    T4 = CALL1(1,innerF2025,T5);
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
  P outerF2031;
  P indexF2030;
  P bucketF2029;
  P depthF2028;
  P n_bucketsF2027;
  P vectorF2026;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF2026 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2026);
  n_bucketsF2027 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2026);
  depthF2028 = T5;
  T7 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  bucketF2029 = T7;
  T9 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  indexF2030 = T9;
  T11 = FUNSHELL(1,fun_outer_66,6);
  outerF2031 = T11;
  FUNINIT(outerF2031, 6,n_bucketsF2027,depthF2028,vectorF2026,e_,outerF2031,indexF2030);
  T12 = CALL2(1,outerF2031,bucketF2029,YPtrue);
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
  P depthF2033;
  P vectorF2032;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF2032 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2032);
  depthF2033 = T3;
  T6 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  T8 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T9 = CALL2(1,VARREF(YgooSmathYT),depthF2033,YPint((P)2));
  T7 = CALL2(1,VARREF(YgooSmathYT),T8,T9);
  T5 = CALL2(1,VARREF(YgooSmathYA),T6,T7);
  T4 = (P)YgooScolsStabYOelt(vectorF2032,T5);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_70) {
  P e_;
  P depthF2035;
  P vectorF2034;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF2034 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2034);
  depthF2035 = T3;
  T6 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  T9 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T10 = CALL2(1,VARREF(YgooSmathYT),depthF2035,YPint((P)2));
  T8 = CALL2(1,VARREF(YgooSmathYT),T9,T10);
  T7 = CALL2(1,VARREF(YgooSmathYA),depthF2035,T8);
  T5 = CALL2(1,VARREF(YgooSmathYA),T6,T7);
  T4 = (P)YgooScolsStabYOelt(vectorF2034,T5);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_setter_71) {
  P value_,e_;
  P depthF2038;
  P indexF2037;
  P vectorF2036;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(value_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF2036 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  indexF2037 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2036);
  depthF2038 = T5;
  T10 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T11 = CALL2(1,VARREF(YgooSmathYT),depthF2038,YPint((P)2));
  T9 = CALL2(1,VARREF(YgooSmathYT),T10,T11);
  T8 = CALL2(1,VARREF(YgooSmathYA),depthF2038,T9);
  T7 = CALL2(1,VARREF(YgooSmathYA),indexF2037,T8);
  T6 = (P)YgooScolsStabYOelt_setter(value_,vectorF2036,T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P k_,v_;
  P UF2039;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
loop:
  T1 = BOXVAL(FREEREF(0));
  UF2039 = T1;
  T3 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF2039,k_);
  T2 = BOXVAL(FREEREF(0)) = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_tab_keys_73) {
  P table_;
  P packer_F2040;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(table_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F2040 = T1;
  packer_F2040 = BOXFAB(packer_F2040);
  T3 = FUNFAB(fun_72,1,packer_F2040);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T3,table_);
  T5 = BOXVAL(packer_F2040);
  T4 = CALL1(1,VARREF(YgooSpackerYpacker_res),T5);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_grow_table_74) {
  P table_;
  P new_vectorF2045;
  P new_bucket_depthF2044;
  P new_n_bucketsF2043;
  P tup25F2042;
  P vectorF2041;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(table_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2041 = T1;
  T7 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2041);
  T8 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2041);
  T6 = CALL2(1,VARREF(YgooSmathYT),T7,T8);
  T9 = CALL1(1,VARREF(YgooScolsStabYtab_growth_factor),table_);
  T5 = CALL2(1,VARREF(YgooSmathYT),T6,T9);
  T4 = CALL1(1,VARREF(YgooSmathYfloor),T5);
  T3 = CALL1(1,VARREF(YgooScolsStabYchoose_table_geometry),T4);
  tup25F2042 = T3;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup25F2042,YPint((P)0));
  new_n_bucketsF2043 = T11;
  T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup25F2042,YPint((P)1));
  new_bucket_depthF2044 = T13;
  T17 = CALL2(1,VARREF(YgooSmathYT),new_bucket_depthF2044,YPint((P)2));
  T16 = CALL2(1,VARREF(YgooSmathYT),new_n_bucketsF2043,T17);
  T18 = CALL2(1,VARREF(YgooSmathY_),new_n_bucketsF2043,YPint((P)2));
  T15 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T16,VARREF(YgooScolsStabYDempty_cell_marker),new_n_bucketsF2043,new_bucket_depthF2044,new_n_bucketsF2043,T18);
  new_vectorF2045 = T15;
  CALL2(1,VARREF(YgooScolsStabYcopy_to_new_vector),table_,new_vectorF2045);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),new_vectorF2045,table_);
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
  P new_vectorF2047;
  P vectorF2046;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(table_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF2046 = T1;
  T5 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2046);
  T7 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2046);
  T6 = CALL2(1,VARREF(YgooSmathYT),T7,YPint((P)2));
  T4 = CALL2(1,VARREF(YgooSmathYT),T5,T6);
  T8 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF2046);
  T9 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF2046);
  T10 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF2046);
  T11 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF2046);
  T3 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T4,VARREF(YgooScolsStabYDempty_cell_marker),T8,T9,T10,T11);
  new_vectorF2047 = T3;
  CALL2(1,VARREF(YgooScolsStabYcopy_to_new_vector),table_,new_vectorF2047);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),new_vectorF2047,table_);
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
  P depthF2048;
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
  depthF2048 = T1;
  T12 = FUNFAB(fun_76,3,FREEREF(0),depthF2048,return_);
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
  P this_keyF2049;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(index_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = (P)YgooScolsStabYOelt(FREEREF(1),index_);
    this_keyF2049 = T3;
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF2049,VARREF(YgooScolsStabYDempty_cell_marker));
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
  P innerF2051;
  P bucket_startF2050;
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
    bucket_startF2050 = T3;
    T6 = FUNSHELL(1,fun_inner_79,10);
    innerF2051 = T6;
    FUNINIT(innerF2051, 10,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),innerF2051,new_bucket_index_,FREEREF(5),FREEREF(0),probes_,FREEREF(6));
    T7 = CALL2(1,innerF2051,YPint((P)0),bucket_startF2050);
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
  P outerF2060;
  P new_bucket_offsetF2059;
  P new_bucket_indexF2058;
  P hashF2057;
  P new_secondary_modulusF2056;
  P new_primary_modulusF2055;
  P new_bucket_depthF2054;
  P new_n_bucketsF2053;
  P test_functionF2052;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYkey_test),FREEREF(0));
  test_functionF2052 = T1;
  T3 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),FREEREF(1));
  new_n_bucketsF2053 = T3;
  T5 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),FREEREF(1));
  new_bucket_depthF2054 = T5;
  T7 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),FREEREF(1));
  new_primary_modulusF2055 = T7;
  T9 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),FREEREF(1));
  new_secondary_modulusF2056 = T9;
  T12 = CALL1(1,VARREF(YgooScolsStabYtab_hash),FREEREF(0));
  T11 = CALL1(1,T12,k_);
  check_type(T11,VARREF(YLintG));
  hashF2057 = T11;
  T14 = CALL2(1,VARREF(YgooSmathYmod),hashF2057,new_primary_modulusF2055);
  new_bucket_indexF2058 = T14;
  T17 = CALL2(1,VARREF(YgooSmathYmod),hashF2057,new_secondary_modulusF2056);
  T16 = CALL2(1,VARREF(YgooSmathYA),T17,YPint((P)1));
  new_bucket_offsetF2059 = T16;
  T19 = FUNSHELL(1,fun_outer_80,7);
  outerF2060 = T19;
  FUNINIT(outerF2060, 7,new_n_bucketsF2053,new_bucket_depthF2054,FREEREF(1),k_,v_,new_bucket_offsetF2059,outerF2060);
  T20 = CALL2(1,outerF2060,new_bucket_indexF2058,YPint((P)0));
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
  P cur_elemF2061;
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
    cur_elemF2061 = T3;
    T5 = CALL1(1,VARREF(YgooScolsScolYnxt),t_enum_);
    T7 = CALL2(1,VARREF(YgooSmathYT),cur_hash_,YPint((P)31));
    T8 = CALL1(1,VARREF(YgooScolsStabYid_hash),cur_elemF2061);
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
  P loopF2062;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_89,1);
  loopF2062 = T1;
  FUNINIT(loopF2062, 1,loopF2062);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL2(0,loopF2062,T3,YPint((P)0));
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
  P loopF2065;
  P eF2064;
  P sF2063;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  sF2063 = YPint((P)0);
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  eF2064 = T2;
  T4 = FUNSHELL(1,fun_loop_93,3);
  loopF2065 = T4;
  FUNINIT(loopF2065, 3,eF2064,x_,loopF2065);
  T5 = CALL2(1,loopF2065,sF2063,YPint((P)0));
  T3 = T5;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_95) {
  P i_;
  P tmpF2070;
  P tmpF2069;
  P cyF2068;
  P cxF2067;
  P tmpF2066;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),i_,FREEREF(0));
  tmpF2066 = T1;
  if (tmpF2066 != YPfalse) {
    T2 = tmpF2066;
  } else {
    T5 = CALL2(1,VARREF(YgooSmathY_),i_,FREEREF(2));
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),T5);
    check_type(T4,VARREF(YLchrG));
    cxF2067 = T4;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),i_);
    check_type(T7,VARREF(YLchrG));
    cyF2068 = T7;
    T10 = CALL2(1,VARREF(YgooSmacrosYEE),cxF2067,cyF2068);
    tmpF2069 = T10;
    if (tmpF2069 != YPfalse) {
      T11 = tmpF2069;
    } else {
      T13 = CALL1(1,VARREF(YgooSmathYto_lower),cxF2067);
      T14 = CALL1(1,VARREF(YgooSmathYto_lower),cyF2068);
      T12 = CALL2(1,VARREF(YgooSmacrosYEE),T13,T14);
      T11 = T12;
    }
    T9 = T11;
    tmpF2070 = T9;
    if (tmpF2070 != YPfalse) {
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
  P loopF2073;
  P eyF2072;
  P syF2071;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  syF2071 = YPint((P)0);
  T2 = CALL1(1,VARREF(YgooStypesYlen),y_);
  eyF2072 = T2;
  T5 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T6 = CALL2(1,VARREF(YgooSmathY_),eyF2072,syF2071);
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,T6);
  if (T4 != YPfalse) {
    T8 = FUNSHELL(1,fun_loop_95,5);
    loopF2073 = T8;
    FUNINIT(loopF2073, 5,eyF2072,x_,syF2071,y_,loopF2073);
    T9 = CALL1(1,loopF2073,syF2071);
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
  P resF2074;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(keys_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),keys_);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),T2);
  resF2074 = T1;
  T3 = FUNFAB(fun_101,2,x_,resF2074);
  CALL2(1,VARREF(YgooSmacrosYdo),T3,keys_);
  T4 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,resF2074);
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
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134;
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
  fun_tab_growth_factor_0 = YPmet(FUNCODEREF(fun_tab_growth_factor_0),LITREF(lit_2),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YgooScolsStabYtab_growth_factor);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooScolsStabYtab_growth_factor);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_tab_growth_factor_0;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooScolsStabYtab_growth_factor,T6);
  lit_4 = YPPsym((P)"tab-growth-factor-setter");
  lit_5 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_5),YPPlist(2,VARREF(YLfloG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_tab_growth_factor_setter_1 = YPmet(FUNCODEREF(fun_tab_growth_factor_setter_1),LITREF(lit_4),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YgooScolsStabYtab_growth_factor_setter);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooScolsStabYtab_growth_factor_setter);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_tab_growth_factor_setter_1;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooScolsStabYtab_growth_factor_setter,T11);
  lit_6 = YPPlist(1,YPPsym((P)"_x"));
  lit_7 = YPflo(FLOINT(2.0));
  T15 = YPsig(LITREF(lit_6),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T15,ENVNUL,PNUL,YPfalse);
  T16 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYtab_growth_factor),VARREF(YgooScolsStabYtab_growth_factor_setter),VARREF(YLfloG),T16);
  lit_8 = YPPsym((P)"tab-growth-threshold");
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T17 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tab_growth_threshold_3 = YPmet(FUNCODEREF(fun_tab_growth_threshold_3),LITREF(lit_8),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YgooScolsStabYtab_growth_threshold);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooScolsStabYtab_growth_threshold);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_tab_growth_threshold_3;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooScolsStabYtab_growth_threshold,T18);
  lit_10 = YPPsym((P)"tab-growth-threshold-setter");
  lit_11 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLfloG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_tab_growth_threshold_setter_4 = YPmet(FUNCODEREF(fun_tab_growth_threshold_setter_4),LITREF(lit_10),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YgooScolsStabYtab_growth_threshold_setter);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooScolsStabYtab_growth_threshold_setter);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_tab_growth_threshold_setter_4;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooScolsStabYtab_growth_threshold_setter,T23);
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  lit_13 = YPflo(FLOINT(0.8));
  T27 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T28 = fun_5;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYtab_growth_threshold),VARREF(YgooScolsStabYtab_growth_threshold_setter),VARREF(YLfloG),T28);
  lit_14 = YPPsym((P)"tab-shrink-threshold");
  lit_15 = YPPlist(1,YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tab_shrink_threshold_6 = YPmet(FUNCODEREF(fun_tab_shrink_threshold_6),LITREF(lit_14),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YgooScolsStabYtab_shrink_threshold);
  if (T32 != YPfalse) {
    T31 = VARREF(YgooScolsStabYtab_shrink_threshold);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_tab_shrink_threshold_6;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YgooScolsStabYtab_shrink_threshold,T30);
  lit_16 = YPPsym((P)"tab-shrink-threshold-setter");
  lit_17 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YLfloG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_tab_shrink_threshold_setter_7 = YPmet(FUNCODEREF(fun_tab_shrink_threshold_setter_7),LITREF(lit_16),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YgooScolsStabYtab_shrink_threshold_setter);
  if (T37 != YPfalse) {
    T36 = VARREF(YgooScolsStabYtab_shrink_threshold_setter);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_tab_shrink_threshold_setter_7;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YgooScolsStabYtab_shrink_threshold_setter,T35);
  lit_18 = YPPlist(1,YPPsym((P)"_x"));
  lit_19 = YPflo(FLOINT(0.5));
  T39 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T40 = fun_8;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYtab_shrink_threshold),VARREF(YgooScolsStabYtab_shrink_threshold_setter),VARREF(YLfloG),T40);
  lit_20 = YPPsym((P)"<tab-vec>");
  T42 = (P)YPpair(VARREF(YLseqXG),Ynil);
  T41 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_20),T42);
  VARSET(YgooScolsStabYLtab_vecG,T41);
  lit_21 = YPPsym((P)"%vacated");
  lit_22 = YPPlist(1,YPPsym((P)"_x"));
  T43 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pvacated_9 = YPmet(FUNCODEREF(fun_Pvacated_9),LITREF(lit_21),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YgooScolsStabYPvacated);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooScolsStabYPvacated);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_Pvacated_9;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooScolsStabYPvacated,T44);
  lit_23 = YPPsym((P)"%vacated-setter");
  lit_24 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pvacated_setter_10 = YPmet(FUNCODEREF(fun_Pvacated_setter_10),LITREF(lit_23),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YgooScolsStabYPvacated_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooScolsStabYPvacated_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_Pvacated_setter_10;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooScolsStabYPvacated_setter,T49);
  lit_25 = YPPlist(1,YPPsym((P)"_x"));
  T53 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T54 = fun_11;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPvacated),VARREF(YgooScolsStabYPvacated_setter),VARREF(YLintG),T54);
  lit_26 = YPPsym((P)"%primary-modulus");
  lit_27 = YPPlist(1,YPPsym((P)"_x"));
  T55 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pprimary_modulus_12 = YPmet(FUNCODEREF(fun_Pprimary_modulus_12),LITREF(lit_26),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YgooScolsStabYPprimary_modulus);
  if (T58 != YPfalse) {
    T57 = VARREF(YgooScolsStabYPprimary_modulus);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_Pprimary_modulus_12;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YgooScolsStabYPprimary_modulus,T56);
  lit_28 = YPPsym((P)"%primary-modulus-setter");
  lit_29 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T60 = YPsig(LITREF(lit_29),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pprimary_modulus_setter_13 = YPmet(FUNCODEREF(fun_Pprimary_modulus_setter_13),LITREF(lit_28),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YgooScolsStabYPprimary_modulus_setter);
  if (T63 != YPfalse) {
    T62 = VARREF(YgooScolsStabYPprimary_modulus_setter);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_Pprimary_modulus_setter_13;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YgooScolsStabYPprimary_modulus_setter,T61);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPprimary_modulus),VARREF(YgooScolsStabYPprimary_modulus_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_30 = YPPsym((P)"%secondary-modulus");
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  T65 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Psecondary_modulus_14 = YPmet(FUNCODEREF(fun_Psecondary_modulus_14),LITREF(lit_30),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YgooScolsStabYPsecondary_modulus);
  if (T68 != YPfalse) {
    T67 = VARREF(YgooScolsStabYPsecondary_modulus);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_Psecondary_modulus_14;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YgooScolsStabYPsecondary_modulus,T66);
  lit_32 = YPPsym((P)"%secondary-modulus-setter");
  lit_33 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T70 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Psecondary_modulus_setter_15 = YPmet(FUNCODEREF(fun_Psecondary_modulus_setter_15),LITREF(lit_32),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YgooScolsStabYPsecondary_modulus_setter);
  if (T73 != YPfalse) {
    T72 = VARREF(YgooScolsStabYPsecondary_modulus_setter);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_Psecondary_modulus_setter_15;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YgooScolsStabYPsecondary_modulus_setter,T71);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPsecondary_modulus),VARREF(YgooScolsStabYPsecondary_modulus_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_34 = YPPsym((P)"%n-buckets");
  lit_35 = YPPlist(1,YPPsym((P)"_x"));
  T75 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pn_buckets_16 = YPmet(FUNCODEREF(fun_Pn_buckets_16),LITREF(lit_34),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YgooScolsStabYPn_buckets);
  if (T78 != YPfalse) {
    T77 = VARREF(YgooScolsStabYPn_buckets);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_Pn_buckets_16;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YgooScolsStabYPn_buckets,T76);
  lit_36 = YPPsym((P)"%n-buckets-setter");
  lit_37 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T80 = YPsig(LITREF(lit_37),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pn_buckets_setter_17 = YPmet(FUNCODEREF(fun_Pn_buckets_setter_17),LITREF(lit_36),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YgooScolsStabYPn_buckets_setter);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooScolsStabYPn_buckets_setter);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_Pn_buckets_setter_17;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooScolsStabYPn_buckets_setter,T81);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPn_buckets),VARREF(YgooScolsStabYPn_buckets_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_38 = YPPsym((P)"%bucket-depth");
  lit_39 = YPPlist(1,YPPsym((P)"_x"));
  T85 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pbucket_depth_18 = YPmet(FUNCODEREF(fun_Pbucket_depth_18),LITREF(lit_38),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YgooScolsStabYPbucket_depth);
  if (T88 != YPfalse) {
    T87 = VARREF(YgooScolsStabYPbucket_depth);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_Pbucket_depth_18;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooScolsStabYPbucket_depth,T86);
  lit_40 = YPPsym((P)"%bucket-depth-setter");
  lit_41 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T90 = YPsig(LITREF(lit_41),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pbucket_depth_setter_19 = YPmet(FUNCODEREF(fun_Pbucket_depth_setter_19),LITREF(lit_40),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YgooScolsStabYPbucket_depth_setter);
  if (T93 != YPfalse) {
    T92 = VARREF(YgooScolsStabYPbucket_depth_setter);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_Pbucket_depth_setter_19;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YgooScolsStabYPbucket_depth_setter,T91);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPbucket_depth),VARREF(YgooScolsStabYPbucket_depth_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_42 = YPPsym((P)"%data");
  lit_43 = YPPlist(1,YPPsym((P)"_x"));
  T95 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdata_20 = YPmet(FUNCODEREF(fun_Pdata_20),LITREF(lit_42),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YgooScolsStabYPdata);
  if (T98 != YPfalse) {
    T97 = VARREF(YgooScolsStabYPdata);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_Pdata_20;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YgooScolsStabYPdata,T96);
  lit_44 = YPPsym((P)"%data-setter");
  lit_45 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T100 = YPsig(LITREF(lit_45),YPPlist(2,VARREF(YLrepG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdata_setter_21 = YPmet(FUNCODEREF(fun_Pdata_setter_21),LITREF(lit_44),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YgooScolsStabYPdata_setter);
  if (T103 != YPfalse) {
    T102 = VARREF(YgooScolsStabYPdata_setter);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_Pdata_setter_21;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YgooScolsStabYPdata_setter,T101);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPdata),VARREF(YgooScolsStabYPdata_setter),VARREF(YLrepG),VARREF(YPprop_unbound_error));
  lit_46 = YPPsym((P)"%count");
  lit_47 = YPPlist(1,YPPsym((P)"_x"));
  T105 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pcount_22 = YPmet(FUNCODEREF(fun_Pcount_22),LITREF(lit_46),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YgooScolsStabYPcount);
  if (T108 != YPfalse) {
    T107 = VARREF(YgooScolsStabYPcount);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_Pcount_22;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YgooScolsStabYPcount,T106);
  lit_48 = YPPsym((P)"%count-setter");
  lit_49 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T110 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pcount_setter_23 = YPmet(FUNCODEREF(fun_Pcount_setter_23),LITREF(lit_48),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YgooScolsStabYPcount_setter);
  if (T113 != YPfalse) {
    T112 = VARREF(YgooScolsStabYPcount_setter);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_Pcount_setter_23;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YgooScolsStabYPcount_setter,T111);
  lit_50 = YPPlist(1,YPPsym((P)"_x"));
  T115 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T116 = fun_24;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYPcount),VARREF(YgooScolsStabYPcount_setter),VARREF(YLintG),T116);
  lit_51 = YPPsym((P)"%vector");
  lit_52 = YPPlist(1,YPPsym((P)"_x"));
  T117 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pvector_25 = YPmet(FUNCODEREF(fun_Pvector_25),LITREF(lit_51),T117,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YgooScolsStabYPvector);
  if (T120 != YPfalse) {
    T119 = VARREF(YgooScolsStabYPvector);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_Pvector_25;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YgooScolsStabYPvector,T118);
  lit_53 = YPPsym((P)"%vector-setter");
  lit_54 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T122 = YPsig(LITREF(lit_54),YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pvector_setter_26 = YPmet(FUNCODEREF(fun_Pvector_setter_26),LITREF(lit_53),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YgooScolsStabYPvector_setter);
  if (T125 != YPfalse) {
    T124 = VARREF(YgooScolsStabYPvector_setter);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_Pvector_setter_26;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YgooScolsStabYPvector_setter,T123);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYPvector),VARREF(YgooScolsStabYPvector_setter),VARREF(YgooScolsStabYLtab_vecG),VARREF(YPprop_unbound_error));
  lit_55 = YPPsym((P)"tab-hash");
  lit_56 = YPPlist(1,YPPsym((P)"x"));
  T128 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  T127 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_55),T128,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsStabYtab_hash,T127);
  lit_57 = YPPsym((P)"id-hash");
  lit_58 = YPPlist(1,YPPsym((P)"x"));
  T130 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T129 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_57),T130,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsStabYid_hash,T129);
  lit_59 = YPPsym((P)"<str-tab>");
  T134 = (P)YPpair(VARREF(YgooScolsScolYLtabG),Ynil);
  T133 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_59),T134);
  T132 = VARSET(YgooScolsStabYLstr_tabG,T133);
  T131 = T132;
  return T131;
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
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238,T239;
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250;
DEFCREGS();
loop:
  lit_60 = YPPlist(275,YPint((P)3),YPint((P)5),YPint((P)11),YPint((P)17),YPint((P)29),YPint((P)41),YPint((P)47),YPint((P)59),YPint((P)71),YPint((P)101),YPint((P)107),YPint((P)137),YPint((P)149),YPint((P)167),YPint((P)179),YPint((P)191),YPint((P)197),YPint((P)227),YPint((P)239),YPint((P)269),YPint((P)281),YPint((P)311),YPint((P)347),YPint((P)419),YPint((P)431),YPint((P)461),YPint((P)521),YPint((P)569),YPint((P)599),YPint((P)617),YPint((P)641),YPint((P)659),YPint((P)809),YPint((P)839),YPint((P)881),YPint((P)1019),YPint((P)1049),YPint((P)1091),YPint((P)1151),YPint((P)1229),YPint((P)1277),YPint((P)1319),YPint((P)1367),YPint((P)1427),YPint((P)1481),YPint((P)1607),YPint((P)1667),YPint((P)1721),YPint((P)1787),YPint((P)1871),YPint((P)1931),YPint((P)1997),YPint((P)2081),YPint((P)2141),YPint((P)2207),YPint((P)2267),YPint((P)2339),YPint((P)2549),YPint((P)2657),YPint((P)2729),YPint((P)2801),YPint((P)2969),YPint((P)3119),YPint((P)3251),YPint((P)3359),YPint((P)3461),YPint((P)3557),YPint((P)3671),YPint((P)3767),YPint((P)3917),YPint((P)4019),YPint((P)4127),YPint((P)4241),YPint((P)4421),YPint((P)4547),YPint((P)4721),YPint((P)4931),YPint((P)5099),YPint((P)5231),YPint((P)5417),YPint((P)5639),YPint((P)5849),YPint((P)6089),YPint((P)6269),YPint((P)6449),YPint((P)6659),YPint((P)6827),YPint((P)7127),YPint((P)7307),YPint((P)7547),YPint((P)7757),YPint((P)8009),YPint((P)8219),YPint((P)8429),YPint((P)8819),YPint((P)9041),YPint((P)9281),YPint((P)9629),YPint((P)9929),YPint((P)10271),YPint((P)10529),YPint((P)10859),YPint((P)11159),YPint((P)11447),YPint((P)11777),YPint((P)12107),YPint((P)12539),YPint((P)12917),YPint((P)13337),YPint((P)13679),YPint((P)14081),YPint((P)14447),YPint((P)14867),YPint((P)15269),YPint((P)15731),YPint((P)16139),YPint((P)16631),YPint((P)17189),YPint((P)17657),YPint((P)18119),YPint((P)18911),YPint((P)19421),YPint((P)19961),YPint((P)20477),YPint((P)21011),YPint((P)21557),YPint((P)22109),YPint((P)22697),YPint((P)23291),YPint((P)23909),YPint((P)24917),YPint((P)25577),YPint((P)26249),YPint((P)26951),YPint((P)27689),YPint((P)28409),YPint((P)29129),YPint((P)29879),YPint((P)30839),YPint((P)31721),YPint((P)32531),YPint((P)33347),YPint((P)34211),YPint((P)35081),YPint((P)36011),YPint((P)36929),YPint((P)37991),YPint((P)39041),YPint((P)40037),YPint((P)41141),YPint((P)42179),YPint((P)43319),YPint((P)44531),YPint((P)45821),YPint((P)47057),YPint((P)48311),YPint((P)49529),YPint((P)50891),YPint((P)52181),YPint((P)53549),YPint((P)54917),YPint((P)56477),YPint((P)57899),YPint((P)59357),YPint((P)60887),YPint((P)62927),YPint((P)64577),YPint((P)66359),YPint((P)68111),YPint((P)69827),YPint((P)71711),YPint((P)73607),YPint((P)75539),YPint((P)77477),YPint((P)79559),YPint((P)81551),YPint((P)83639),YPint((P)85817),YPint((P)88001),YPint((P)90371),YPint((P)92639),YPint((P)95087),YPint((P)97499),YPint((P)99989),YPint((P)102497),YPint((P)105227),YPint((P)108011),YPint((P)110729),YPint((P)113537),YPint((P)116531),YPint((P)119549),YPint((P)122597),YPint((P)125789),YPint((P)128939),YPint((P)132329),YPint((P)135647),YPint((P)139121),YPint((P)142607),YPint((P)146297),YPint((P)149969),YPint((P)153887),YPint((P)157769),YPint((P)161729),YPint((P)166301),YPint((P)170537),YPint((P)174929),YPint((P)179381),YPint((P)183917),YPint((P)188831),YPint((P)193601),YPint((P)198461),YPint((P)203429),YPint((P)208589),YPint((P)213947),YPint((P)219311),YPint((P)224909),YPint((P)230561),YPint((P)236477),YPint((P)242447),YPint((P)248639),YPint((P)254927),YPint((P)261431),YPint((P)268517),YPint((P)275321),YPint((P)282239),YPint((P)289841),YPint((P)297467),YPint((P)304979),YPint((P)312617),YPint((P)320561),YPint((P)328589),YPint((P)336827),YPint((P)345461),YPint((P)354251),YPint((P)363149),YPint((P)372269),YPint((P)381629),YPint((P)391217),YPint((P)401309),YPint((P)411527),YPint((P)422087),YPint((P)432659),YPint((P)443561),YPint((P)454709),YPint((P)466181),YPint((P)478067),YPint((P)490031),YPint((P)502499),YPint((P)515087),YPint((P)527981),YPint((P)541361),YPint((P)555041),YPint((P)569081),YPint((P)583337),YPint((P)598049),YPint((P)613007),YPint((P)628679),YPint((P)644489),YPint((P)660617),YPint((P)677231),YPint((P)694259),YPint((P)711707),YPint((P)729557),YPint((P)747827),YPint((P)766541),YPint((P)785777),YPint((P)805499),YPint((P)825827),YPint((P)846749),YPint((P)868121),YPint((P)889871),YPint((P)912449),YPint((P)935591),YPint((P)959207),YPint((P)983327));
  T0 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),LITREF(lit_60));
  VARSET(YgooScolsStabYTtwin_primesT,T0);
  lit_61 = YPPsym((P)"fab-tab-vec");
  lit_62 = YPPlist(6,YPPsym((P)"size"),YPPsym((P)"fill-value"),YPPsym((P)"n-buckets"),YPPsym((P)"bucket-depth"),YPPsym((P)"primary-modulus"),YPPsym((P)"secondary-modulus"));
  T1 = YPsig(LITREF(lit_62),YPPlist(6,VARREF(YLintG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLintG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)6),VARREF(YgooScolsStabYLtab_vecG),Ynil);
  YgooScolsStabYfab_tab_vec = YPmet(FUNCODEREF(YgooScolsStabYfab_tab_vec),LITREF(lit_61),T1,ENVNUL,PNUL,YPfalse);
  T2 = YgooScolsStabYfab_tab_vec;
  VARSET(YgooScolsStabYfab_tab_vec,T2);
  lit_63 = YPPsym((P)"@fill!");
  lit_64 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"fill"));
  T3 = YPsig(LITREF(lit_64),YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsStabYOfillX = YPmet(FUNCODEREF(YgooScolsStabYOfillX),LITREF(lit_63),T3,ENVNUL,PNUL,YPfalse);
  T4 = YgooScolsStabYOfillX;
  VARSET(YgooScolsStabYOfillX,T4);
  lit_65 = YPPsym((P)"clr!");
  lit_66 = YPPlist(2,YPPsym((P)"vector"),YPPsym((P)"fill-value"));
  T5 = YPsig(LITREF(lit_66),YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_clrX_31 = YPmet(FUNCODEREF(fun_clrX_31),LITREF(lit_65),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YgooScolsStabYclrX);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooScolsStabYclrX);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_clrX_31;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooScolsStabYclrX,T6);
  VARSET(YgooScolsStabYTdebug_tablesQT,YPfalse);
  lit_67 = YPPsym((P)"key-test");
  lit_68 = YPPlist(1,YPPsym((P)"_"));
  T10 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_32 = YPmet(FUNCODEREF(fun_key_test_32),LITREF(lit_67),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YgooScolsScolYkey_test);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooScolsScolYkey_test);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_key_test_32;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooScolsScolYkey_test,T11);
  lit_69 = YPPlist(1,YPPsym((P)"_"));
  T15 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_tab_hash_33 = YPmet(FUNCODEREF(fun_tab_hash_33),LITREF(lit_55),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YgooScolsStabYtab_hash);
  if (T18 != YPfalse) {
    T17 = VARREF(YgooScolsStabYtab_hash);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_tab_hash_33;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YgooScolsStabYtab_hash,T16);
  lit_70 = YPPlist(1,YPsb((P)"empty cell"));
  VARSET(YgooScolsStabYDempty_cell_marker,LITREF(lit_70));
  lit_71 = YPPlist(1,YPsb((P)"vacated cell"));
  VARSET(YgooScolsStabYDvacated_cell_marker,LITREF(lit_71));
  lit_72 = YPPsym((P)"fab");
  lit_73 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"size"));
  T21 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooScolsScolYLtabG));
  T20 = YPsig(LITREF(lit_73),YPPlist(2,T21,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_fab_34 = YPmet(FUNCODEREF(fun_fab_34),LITREF(lit_72),T20,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YgooScolsScolYfab);
  if (T24 != YPfalse) {
    T23 = VARREF(YgooScolsScolYfab);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_fab_34;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YgooScolsScolYfab,T22);
  lit_74 = YPPsym((P)"elt-or");
  lit_75 = YPPlist(3,YPPsym((P)"table"),YPPsym((P)"key"),YPPsym((P)"default"));
  lit_76 = YPPsym((P)"outer");
  lit_77 = YPPlist(2,YPPsym((P)"bucket-index"),YPPsym((P)"probes"));
  lit_78 = YPPsym((P)"inner");
  lit_79 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"raw-index"));
  lit_80 = YPsb((P)"The table is totally full this shouldn't happen");
  T28 = YPsig(LITREF(lit_79),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_35 = YPmet(FUNCODEREF(fun_inner_35),LITREF(lit_78),T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(LITREF(lit_77),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_outer_36 = YPmet(FUNCODEREF(fun_outer_36),LITREF(lit_76),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(LITREF(lit_75),YPPlist(3,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_37 = YPmet(FUNCODEREF(fun_elt_or_37),LITREF(lit_74),T26,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YgooScolsScolYelt_or);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooScolsScolYelt_or);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_elt_or_37;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YgooScolsScolYelt_or,T29);
  lit_81 = YPPsym((P)"elt-setter");
  lit_82 = YPPlist(3,YPPsym((P)"value"),YPPsym((P)"table"),YPPsym((P)"key"));
  lit_83 = YPPlist(2,YPPsym((P)"bucket-index"),YPPsym((P)"probes"));
  lit_84 = YPPlist(3,YPPsym((P)"vacancy-index"),YPPsym((P)"i"),YPPsym((P)"raw-index"));
  lit_85 = YPsb((P)"The table is totally full this shouldn't happen");
  T35 = YPsig(LITREF(lit_84),YPPlist(3,VARREF(YLanyG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_inner_38 = YPmet(FUNCODEREF(fun_inner_38),LITREF(lit_78),T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_outer_39 = YPmet(FUNCODEREF(fun_outer_39),LITREF(lit_76),T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(LITREF(lit_82),YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_40 = YPmet(FUNCODEREF(fun_elt_setter_40),LITREF(lit_81),T33,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooScolsScolxYelt_setter);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooScolsScolxYelt_setter);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_elt_setter_40;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooScolsScolxYelt_setter,T36);
  lit_86 = YPPsym((P)"del");
  lit_87 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T40 = YPsig(LITREF(lit_87),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_del_41 = YPmet(FUNCODEREF(fun_del_41),LITREF(lit_86),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YgooScolsScolYdel);
  if (T43 != YPfalse) {
    T42 = VARREF(YgooScolsScolYdel);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_del_41;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YgooScolsScolYdel,T41);
  lit_88 = YPPsym((P)"del!");
  lit_89 = YPPlist(2,YPPsym((P)"table"),YPPsym((P)"key"));
  lit_90 = YPPlist(2,YPPsym((P)"bucket-index"),YPPsym((P)"probes"));
  lit_91 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"raw-index"));
  lit_92 = YPsb((P)"The table is totally full this shouldn't happen");
  T47 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_42 = YPmet(FUNCODEREF(fun_inner_42),LITREF(lit_78),T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(LITREF(lit_90),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_outer_43 = YPmet(FUNCODEREF(fun_outer_43),LITREF(lit_76),T46,ENVNUL,PNUL,YPfalse);
  T45 = YPsig(LITREF(lit_89),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_delX_44 = YPmet(FUNCODEREF(fun_delX_44),LITREF(lit_88),T45,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YgooScolsScolxYdelX);
  if (T50 != YPfalse) {
    T49 = VARREF(YgooScolsScolxYdelX);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_delX_44;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YgooScolsScolxYdelX,T48);
  lit_93 = YPPsym((P)"do-keyed");
  lit_94 = YPPlist(2,YPPsym((P)"function"),YPPsym((P)"table"));
  lit_95 = YPPlist(1,YPPsym((P)"b"));
  lit_96 = YPPlist(1,YPPsym((P)"i"));
  T54 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_inner_45 = YPmet(FUNCODEREF(fun_inner_45),LITREF(lit_78),T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_outer_46 = YPmet(FUNCODEREF(fun_outer_46),LITREF(lit_76),T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(LITREF(lit_94),YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_keyed_47 = YPmet(FUNCODEREF(fun_do_keyed_47),LITREF(lit_93),T52,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YgooScolsScolYdo_keyed);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooScolsScolYdo_keyed);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_do_keyed_47;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooScolsScolYdo_keyed,T55);
  lit_97 = YPPsym((P)"do");
  lit_98 = YPPlist(2,YPPsym((P)"function"),YPPsym((P)"table"));
  lit_99 = YPPlist(1,YPPsym((P)"b"));
  lit_100 = YPPlist(1,YPPsym((P)"i"));
  T61 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_inner_48 = YPmet(FUNCODEREF(fun_inner_48),LITREF(lit_78),T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_outer_49 = YPmet(FUNCODEREF(fun_outer_49),LITREF(lit_76),T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(LITREF(lit_98),YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_50 = YPmet(FUNCODEREF(fun_do_50),LITREF(lit_97),T59,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YgooSmacrosYdo);
  if (T64 != YPfalse) {
    T63 = VARREF(YgooSmacrosYdo);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_do_50;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YgooSmacrosYdo,T62);
  lit_101 = YPPsym((P)"zap!");
  lit_102 = YPPlist(1,YPPsym((P)"table"));
  T66 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_zapX_51 = YPmet(FUNCODEREF(fun_zapX_51),LITREF(lit_101),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YgooScolsScolxYzapX);
  if (T69 != YPfalse) {
    T68 = VARREF(YgooScolsScolxYzapX);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_zapX_51;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YgooScolsScolxYzapX,T67);
  lit_103 = YPPsym((P)"len");
  lit_104 = YPPlist(1,YPPsym((P)"table"));
  T71 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_52 = YPmet(FUNCODEREF(fun_len_52),LITREF(lit_103),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YgooStypesYlen);
  if (T74 != YPfalse) {
    T73 = VARREF(YgooStypesYlen);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_len_52;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YgooStypesYlen,T72);
  lit_105 = YPPsym((P)"<tab-enum>");
  T77 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T76 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_105),T77);
  VARSET(YgooScolsStabYLtab_enumG,T76);
  lit_106 = YPPsym((P)"@vec");
  lit_107 = YPPlist(1,YPPsym((P)"_x"));
  T78 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Ovec_53 = YPmet(FUNCODEREF(fun_Ovec_53),LITREF(lit_106),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(YgooScolsStabYOvec);
  if (T81 != YPfalse) {
    T80 = VARREF(YgooScolsStabYOvec);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_Ovec_53;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YgooScolsStabYOvec,T79);
  lit_108 = YPPsym((P)"@vec-setter");
  lit_109 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T83 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Ovec_setter_54 = YPmet(FUNCODEREF(fun_Ovec_setter_54),LITREF(lit_108),T83,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(YgooScolsStabYOvec_setter);
  if (T86 != YPfalse) {
    T85 = VARREF(YgooScolsStabYOvec_setter);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_Ovec_setter_54;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YgooScolsStabYOvec_setter,T84);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOvec),VARREF(YgooScolsStabYOvec_setter),VARREF(YgooScolsStabYLtab_vecG),VARREF(YPprop_unbound_error));
  lit_110 = YPPsym((P)"@buc");
  lit_111 = YPPlist(1,YPPsym((P)"_x"));
  T88 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Obuc_55 = YPmet(FUNCODEREF(fun_Obuc_55),LITREF(lit_110),T88,ENVNUL,PNUL,YPfalse);
  T91 = BOUNDP(YgooScolsStabYObuc);
  if (T91 != YPfalse) {
    T90 = VARREF(YgooScolsStabYObuc);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_Obuc_55;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(YgooScolsStabYObuc,T89);
  lit_112 = YPPsym((P)"@buc-setter");
  lit_113 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T93 = YPsig(LITREF(lit_113),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Obuc_setter_56 = YPmet(FUNCODEREF(fun_Obuc_setter_56),LITREF(lit_112),T93,ENVNUL,PNUL,YPfalse);
  T96 = BOUNDP(YgooScolsStabYObuc_setter);
  if (T96 != YPfalse) {
    T95 = VARREF(YgooScolsStabYObuc_setter);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_Obuc_setter_56;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YgooScolsStabYObuc_setter,T94);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYObuc),VARREF(YgooScolsStabYObuc_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_114 = YPPsym((P)"@idx");
  lit_115 = YPPlist(1,YPPsym((P)"_x"));
  T98 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Oidx_57 = YPmet(FUNCODEREF(fun_Oidx_57),LITREF(lit_114),T98,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(YgooScolsStabYOidx);
  if (T101 != YPfalse) {
    T100 = VARREF(YgooScolsStabYOidx);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_Oidx_57;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YgooScolsStabYOidx,T99);
  lit_116 = YPPsym((P)"@idx-setter");
  lit_117 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T103 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Oidx_setter_58 = YPmet(FUNCODEREF(fun_Oidx_setter_58),LITREF(lit_116),T103,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(YgooScolsStabYOidx_setter);
  if (T106 != YPfalse) {
    T105 = VARREF(YgooScolsStabYOidx_setter);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_Oidx_setter_58;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YgooScolsStabYOidx_setter,T104);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOidx),VARREF(YgooScolsStabYOidx_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_118 = YPPsym((P)"@fin?");
  lit_119 = YPPlist(1,YPPsym((P)"_x"));
  T108 = YPsig(LITREF(lit_119),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_OfinQ_59 = YPmet(FUNCODEREF(fun_OfinQ_59),LITREF(lit_118),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YgooScolsStabYOfinQ);
  if (T111 != YPfalse) {
    T110 = VARREF(YgooScolsStabYOfinQ);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_OfinQ_59;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YgooScolsStabYOfinQ,T109);
  lit_120 = YPPsym((P)"@fin?-setter");
  lit_121 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T113 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YLlogG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_OfinQ_setter_60 = YPmet(FUNCODEREF(fun_OfinQ_setter_60),LITREF(lit_120),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YgooScolsStabYOfinQ_setter);
  if (T116 != YPfalse) {
    T115 = VARREF(YgooScolsStabYOfinQ_setter);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_OfinQ_setter_60;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YgooScolsStabYOfinQ_setter,T114);
  lit_122 = YPPlist(1,YPPsym((P)"_x"));
  T118 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T118,ENVNUL,PNUL,YPfalse);
  T119 = fun_61;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOfinQ),VARREF(YgooScolsStabYOfinQ_setter),VARREF(YLlogG),T119);
  T120 = XCALL3(1,VARREF(Ynew),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOfinQ),YPtrue);
  VARSET(YgooScolsStabYDfin_enum,T120);
  lit_123 = YPPsym((P)"enum");
  lit_124 = YPPlist(1,YPPsym((P)"table"));
  lit_125 = YPPlist(1,YPPsym((P)"b"));
  lit_126 = YPPlist(1,YPPsym((P)"i"));
  T123 = YPsig(LITREF(lit_126),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_inner_62 = YPmet(FUNCODEREF(fun_inner_62),LITREF(lit_78),T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(LITREF(lit_125),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_outer_63 = YPmet(FUNCODEREF(fun_outer_63),LITREF(lit_76),T122,ENVNUL,PNUL,YPfalse);
  T121 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsStabYLtab_enumG),Ynil);
  fun_enum_64 = YPmet(FUNCODEREF(fun_enum_64),LITREF(lit_123),T121,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YgooScolsScolYenum);
  if (T126 != YPfalse) {
    T125 = VARREF(YgooScolsScolYenum);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_enum_64;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YgooScolsScolYenum,T124);
  lit_127 = YPPsym((P)"nxt");
  lit_128 = YPPlist(1,YPPsym((P)"e"));
  lit_129 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"first?"));
  lit_130 = YPPlist(1,YPPsym((P)"i"));
  T130 = YPsig(LITREF(lit_130),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_inner_65 = YPmet(FUNCODEREF(fun_inner_65),LITREF(lit_78),T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_outer_66 = YPmet(FUNCODEREF(fun_outer_66),LITREF(lit_76),T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(LITREF(lit_128),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsStabYLtab_enumG),Ynil);
  fun_nxt_67 = YPmet(FUNCODEREF(fun_nxt_67),LITREF(lit_127),T128,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YgooScolsScolYnxt);
  if (T133 != YPfalse) {
    T132 = VARREF(YgooScolsScolYnxt);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_nxt_67;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YgooScolsScolYnxt,T131);
  lit_131 = YPPsym((P)"fin?");
  lit_132 = YPPlist(1,YPPsym((P)"e"));
  T135 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_68 = YPmet(FUNCODEREF(fun_finQ_68),LITREF(lit_131),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YgooScolsScolYfinQ);
  if (T138 != YPfalse) {
    T137 = VARREF(YgooScolsScolYfinQ);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_finQ_68;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YgooScolsScolYfinQ,T136);
  lit_133 = YPPsym((P)"now-key");
  lit_134 = YPPlist(1,YPPsym((P)"e"));
  T140 = YPsig(LITREF(lit_134),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_key_69 = YPmet(FUNCODEREF(fun_now_key_69),LITREF(lit_133),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YgooScolsScolYnow_key);
  if (T143 != YPfalse) {
    T142 = VARREF(YgooScolsScolYnow_key);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_now_key_69;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YgooScolsScolYnow_key,T141);
  lit_135 = YPPsym((P)"now");
  lit_136 = YPPlist(1,YPPsym((P)"e"));
  T145 = YPsig(LITREF(lit_136),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_70 = YPmet(FUNCODEREF(fun_now_70),LITREF(lit_135),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YgooScolsScolYnow);
  if (T148 != YPfalse) {
    T147 = VARREF(YgooScolsScolYnow);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_now_70;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YgooScolsScolYnow,T146);
  lit_137 = YPPsym((P)"now-setter");
  lit_138 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"e"));
  T150 = YPsig(LITREF(lit_138),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_71 = YPmet(FUNCODEREF(fun_now_setter_71),LITREF(lit_137),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YgooScolsScolYnow_setter);
  if (T153 != YPfalse) {
    T152 = VARREF(YgooScolsScolYnow_setter);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_now_setter_71;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YgooScolsScolYnow_setter,T151);
  lit_139 = YPPsym((P)"tab-keys");
  lit_140 = YPPlist(1,YPPsym((P)"table"));
  lit_141 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  T156 = YPsig(LITREF(lit_141),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_tab_keys_73 = YPmet(FUNCODEREF(fun_tab_keys_73),LITREF(lit_139),T155,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YgooScolsStabYtab_keys);
  if (T159 != YPfalse) {
    T158 = VARREF(YgooScolsStabYtab_keys);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_tab_keys_73;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YgooScolsStabYtab_keys,T157);
  lit_142 = YPPsym((P)"grow-table");
  lit_143 = YPPlist(1,YPPsym((P)"table"));
  T161 = YPsig(LITREF(lit_143),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_grow_table_74 = YPmet(FUNCODEREF(fun_grow_table_74),LITREF(lit_142),T161,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(YgooScolsStabYgrow_table);
  if (T164 != YPfalse) {
    T163 = VARREF(YgooScolsStabYgrow_table);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_grow_table_74;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YgooScolsStabYgrow_table,T162);
  lit_144 = YPPsym((P)"rehash-table");
  lit_145 = YPPlist(1,YPPsym((P)"table"));
  T166 = YPsig(LITREF(lit_145),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_rehash_table_75 = YPmet(FUNCODEREF(fun_rehash_table_75),LITREF(lit_144),T166,ENVNUL,PNUL,YPfalse);
  T169 = BOUNDP(YgooScolsStabYrehash_table);
  if (T169 != YPfalse) {
    T168 = VARREF(YgooScolsStabYrehash_table);
  } else {
    T168 = YPfalse;
  }
  T170 = fun_rehash_table_75;
  T167 = XCALL2(1,VARREF(YPdefine_method),T168,T170);
  VARSET(YgooScolsStabYrehash_table,T167);
  lit_146 = YPPsym((P)"choose-table-geometry");
  lit_147 = YPPlist(1,YPPsym((P)"capacity"));
  lit_148 = YPPlist(1,YPPsym((P)"return"));
  lit_149 = YPPlist(1,YPPsym((P)"p"));
  lit_150 = YPsb((P)"Not enough primes to compute new table size");
  T174 = YPsig(LITREF(lit_149),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T171 = YPsig(LITREF(lit_147),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),T172,Ynil);
  YgooScolsStabYchoose_table_geometry = YPmet(FUNCODEREF(YgooScolsStabYchoose_table_geometry),LITREF(lit_146),T171,ENVNUL,PNUL,YPfalse);
  T175 = YgooScolsStabYchoose_table_geometry;
  VARSET(YgooScolsStabYchoose_table_geometry,T175);
  lit_151 = YPPsym((P)"copy-to-new-vector");
  lit_152 = YPPlist(2,YPPsym((P)"table"),YPPsym((P)"new-vector"));
  lit_153 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  lit_154 = YPPlist(2,YPPsym((P)"new-bucket-index"),YPPsym((P)"probes"));
  lit_155 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"index"));
  lit_156 = YPsb((P)"The table is totally full this shouldn't happen");
  T179 = YPsig(LITREF(lit_155),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_79 = YPmet(FUNCODEREF(fun_inner_79),LITREF(lit_78),T179,ENVNUL,PNUL,YPfalse);
  T178 = YPsig(LITREF(lit_154),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_outer_80 = YPmet(FUNCODEREF(fun_outer_80),LITREF(lit_76),T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(LITREF(lit_153),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T177,ENVNUL,PNUL,YPfalse);
  T176 = YPsig(LITREF(lit_152),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_copy_to_new_vector_82 = YPmet(FUNCODEREF(fun_copy_to_new_vector_82),LITREF(lit_151),T176,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(YgooScolsStabYcopy_to_new_vector);
  if (T182 != YPfalse) {
    T181 = VARREF(YgooScolsStabYcopy_to_new_vector);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_copy_to_new_vector_82;
  T180 = XCALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YgooScolsStabYcopy_to_new_vector,T180);
  lit_157 = YPPlist(1,YPPsym((P)"x"));
  T184 = YPsig(LITREF(lit_157),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_83 = YPmet(FUNCODEREF(fun_id_hash_83),LITREF(lit_57),T184,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(YgooScolsStabYid_hash);
  if (T187 != YPfalse) {
    T186 = VARREF(YgooScolsStabYid_hash);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_id_hash_83;
  T185 = XCALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(YgooScolsStabYid_hash,T185);
  lit_158 = YPPlist(1,YPPsym((P)"x"));
  T189 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YLlogG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_84 = YPmet(FUNCODEREF(fun_id_hash_84),LITREF(lit_57),T189,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(YgooScolsStabYid_hash);
  if (T192 != YPfalse) {
    T191 = VARREF(YgooScolsStabYid_hash);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_id_hash_84;
  T190 = XCALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YgooScolsStabYid_hash,T190);
  lit_159 = YPPsym((P)"rot");
  lit_160 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T194 = YPsig(LITREF(lit_160),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  YgooScolsStabYrot = YPmet(FUNCODEREF(YgooScolsStabYrot),LITREF(lit_159),T194,ENVNUL,PNUL,YPfalse);
  T195 = YgooScolsStabYrot;
  VARSET(YgooScolsStabYrot,T195);
  lit_161 = YPPlist(1,YPPsym((P)"x"));
  T196 = YPsig(LITREF(lit_161),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_86 = YPmet(FUNCODEREF(fun_id_hash_86),LITREF(lit_57),T196,ENVNUL,PNUL,YPfalse);
  T199 = BOUNDP(YgooScolsStabYid_hash);
  if (T199 != YPfalse) {
    T198 = VARREF(YgooScolsStabYid_hash);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_id_hash_86;
  T197 = XCALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YgooScolsStabYid_hash,T197);
  lit_162 = YPPlist(1,YPPsym((P)"x"));
  T201 = YPsig(LITREF(lit_162),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_87 = YPmet(FUNCODEREF(fun_id_hash_87),LITREF(lit_57),T201,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(YgooScolsStabYid_hash);
  if (T204 != YPfalse) {
    T203 = VARREF(YgooScolsStabYid_hash);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_id_hash_87;
  T202 = XCALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(YgooScolsStabYid_hash,T202);
  lit_163 = YPPlist(1,YPPsym((P)"x"));
  T206 = YPsig(LITREF(lit_163),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_88 = YPmet(FUNCODEREF(fun_id_hash_88),LITREF(lit_57),T206,ENVNUL,PNUL,YPfalse);
  T209 = BOUNDP(YgooScolsStabYid_hash);
  if (T209 != YPfalse) {
    T208 = VARREF(YgooScolsStabYid_hash);
  } else {
    T208 = YPfalse;
  }
  T210 = fun_id_hash_88;
  T207 = XCALL2(1,VARREF(YPdefine_method),T208,T210);
  VARSET(YgooScolsStabYid_hash,T207);
  lit_164 = YPPlist(1,YPPsym((P)"x"));
  lit_165 = YPPsym((P)"loop");
  lit_166 = YPPlist(2,YPPsym((P)"t-enum"),YPPsym((P)"cur-hash"));
  T212 = YPsig(LITREF(lit_166),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_89 = YPmet(FUNCODEREF(fun_loop_89),LITREF(lit_165),T212,ENVNUL,PNUL,YPfalse);
  T211 = YPsig(LITREF(lit_164),YPPlist(1,VARREF(YLtupG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_90 = YPmet(FUNCODEREF(fun_id_hash_90),LITREF(lit_57),T211,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(YgooScolsStabYid_hash);
  if (T215 != YPfalse) {
    T214 = VARREF(YgooScolsStabYid_hash);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_id_hash_90;
  T213 = XCALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YgooScolsStabYid_hash,T213);
  lit_167 = YPPsym((P)"key-type");
  lit_168 = YPPlist(1,YPPsym((P)"x"));
  T217 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_91 = YPmet(FUNCODEREF(fun_key_type_91),LITREF(lit_167),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(YgooScolsScolYkey_type);
  if (T220 != YPfalse) {
    T219 = VARREF(YgooScolsScolYkey_type);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_key_type_91;
  T218 = XCALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YgooScolsScolYkey_type,T218);
  lit_169 = YPPsym((P)"elt-type");
  lit_170 = YPPlist(1,YPPsym((P)"x"));
  T222 = YPsig(LITREF(lit_170),YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_92 = YPmet(FUNCODEREF(fun_elt_type_92),LITREF(lit_169),T222,ENVNUL,PNUL,YPfalse);
  T225 = BOUNDP(YgooScolsScolYelt_type);
  if (T225 != YPfalse) {
    T224 = VARREF(YgooScolsScolYelt_type);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_elt_type_92;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YgooScolsScolYelt_type,T223);
  lit_171 = YPPsym((P)"case-insensitive-string-hash");
  lit_172 = YPPlist(1,YPPsym((P)"x"));
  lit_173 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"hash"));
  T228 = YPsig(LITREF(lit_173),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_93 = YPmet(FUNCODEREF(fun_loop_93),LITREF(lit_165),T228,ENVNUL,PNUL,YPfalse);
  T227 = YPsig(LITREF(lit_172),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooScolsStabYcase_insensitive_string_hash = YPmet(FUNCODEREF(YgooScolsStabYcase_insensitive_string_hash),LITREF(lit_171),T227,ENVNUL,PNUL,YPfalse);
  T229 = YgooScolsStabYcase_insensitive_string_hash;
  VARSET(YgooScolsStabYcase_insensitive_string_hash,T229);
  lit_174 = YPPsym((P)"case-insensitive-string-equal");
  lit_175 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  lit_176 = YPPlist(1,YPPsym((P)"i"));
  T231 = YPsig(LITREF(lit_176),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_95 = YPmet(FUNCODEREF(fun_loop_95),LITREF(lit_165),T231,ENVNUL,PNUL,YPfalse);
  T230 = YPsig(LITREF(lit_175),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooScolsStabYcase_insensitive_string_equal = YPmet(FUNCODEREF(YgooScolsStabYcase_insensitive_string_equal),LITREF(lit_174),T230,ENVNUL,PNUL,YPfalse);
  T232 = YgooScolsStabYcase_insensitive_string_equal;
  VARSET(YgooScolsStabYcase_insensitive_string_equal,T232);
  lit_177 = YPPlist(1,YPPsym((P)"_"));
  T233 = YPsig(LITREF(lit_177),YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_97 = YPmet(FUNCODEREF(fun_key_test_97),LITREF(lit_67),T233,ENVNUL,PNUL,YPfalse);
  T236 = BOUNDP(YgooScolsScolYkey_test);
  if (T236 != YPfalse) {
    T235 = VARREF(YgooScolsScolYkey_test);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_key_test_97;
  T234 = XCALL2(1,VARREF(YPdefine_method),T235,T237);
  VARSET(YgooScolsScolYkey_test,T234);
  lit_178 = YPPlist(1,YPPsym((P)"_"));
  T238 = YPsig(LITREF(lit_178),YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_tab_hash_98 = YPmet(FUNCODEREF(fun_tab_hash_98),LITREF(lit_55),T238,ENVNUL,PNUL,YPfalse);
  T241 = BOUNDP(YgooScolsStabYtab_hash);
  if (T241 != YPfalse) {
    T240 = VARREF(YgooScolsStabYtab_hash);
  } else {
    T240 = YPfalse;
  }
  T242 = fun_tab_hash_98;
  T239 = XCALL2(1,VARREF(YPdefine_method),T240,T242);
  VARSET(YgooScolsStabYtab_hash,T239);
  lit_179 = YPPsym((P)"add!");
  lit_180 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T245 = YPsig(LITREF(lit_180),YPPlist(2,VARREF(YgooScolsStabYLsetG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsStabYLsetG),Ynil);
  T244 = fun_addX_99 = YPmet(FUNCODEREF(fun_addX_99),LITREF(lit_179),T245,ENVNUL,PNUL,YPfalse);
  T249 = BOUNDP(YgooScolsScolxYaddX);
  if (T249 != YPfalse) {
    T248 = VARREF(YgooScolsScolxYaddX);
  } else {
    T248 = YPfalse;
  }
  T250 = fun_addX_99;
  T247 = XCALL2(1,VARREF(YPdefine_method),T248,T250);
  T246 = VARSET(YgooScolsScolxYaddX,T247);
  T243 = T246;
  return T243;
}

P YgooScolsStabY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
DEFCREGS();
loop:
  lit_181 = YPPsym((P)"mem?");
  lit_182 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_182),YPPlist(2,VARREF(YgooScolsStabYLsetG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_memQ_100 = YPmet(FUNCODEREF(fun_memQ_100),LITREF(lit_181),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YgooScolsScolYmemQ);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooScolsScolYmemQ);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_memQ_100;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooScolsScolYmemQ,T1);
  lit_183 = YPPsym((P)"elts");
  lit_184 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"keys"));
  lit_185 = YPPlist(1,YPPsym((P)"k"));
  T9 = YPsig(LITREF(lit_185),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = fun_101 = YPmet(FUNCODEREF(fun_101),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T7 = YPsig(LITREF(lit_184),YPPlist(2,VARREF(YLcolG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T6 = fun_elts_102 = YPmet(FUNCODEREF(fun_elts_102),LITREF(lit_183),T7,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YgooScolsScolYelts);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooScolsScolYelts);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_elts_102;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  T10 = VARSET(YgooScolsScolYelts,T11);
  T5 = T10;
  return T5;
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
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"not", &module_info_gooSboot, "not"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"loc", &module_info_gooSboot, "loc"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%str", &module_info_gooSboot, "%str"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"as", &module_info_gooStypes, "as"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"^", &module_info_gooSmath, "^"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"col", &module_info_gooScolsScol, "col"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"even?", &module_info_gooSmath, "even?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"mod", &module_info_gooSmath, "mod"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"len", &module_info_gooStypes, "len"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"atan", &module_info_gooSmath, "atan"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"*", &module_info_gooSmath, "*"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"op", &module_info_gooSmacros, "op"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"floor", &module_info_gooSmath, "floor"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"def", &module_info_gooSboot, "def"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"into", &module_info_gooScolsScol, "into"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"export", &module_info_gooSboot, "export"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"and", &module_info_gooSmacros, "and"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"1-", &module_info_gooSmath, "1-"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"set", &module_info_gooSboot, "set"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"if", &module_info_gooSboot, "if"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"|", &module_info_gooSmath, "|"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"now", &module_info_gooScolsScol, "now"},
  {"ct", &module_info_gooSboot, "ct"},
  {"t<", &module_info_gooStypes, "t<"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"mif", &module_info_gooSboot, "mif"},
  {"==", &module_info_gooSmacros, "=="},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"-", &module_info_gooSmath, "-"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"case", &module_info_gooSmacros, "case"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"let", &module_info_gooSboot, "let"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"abs", &module_info_gooSmath, "abs"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"t=", &module_info_gooStypes, "t="},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"items", &module_info_gooScolsScol, "items"},
  {"max", &module_info_gooSmag, "max"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"round/", &module_info_gooSmath, "round/"},
  {"~=", &module_info_gooSmath, "~="},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"logn", &module_info_gooSmath, "logn"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"t+", &module_info_gooStypes, "t+"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"when", &module_info_gooSmacros, "when"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"div", &module_info_gooSmath, "div"},
  {"rep", &module_info_gooSboot, "rep"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"min", &module_info_gooSmag, "min"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"dss", &module_info_gooSboot, "dss"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"~", &module_info_gooSmath, "~"},
  {"@len", &module_info_gooSboot, "@len"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"sin", &module_info_gooSmath, "sin"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"use", &module_info_gooSboot, "use"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"@+", &module_info_gooSboot, "@+"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"app", &module_info_gooSmacros, "app"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {">=", &module_info_gooSmag, ">="},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"$e", &module_info_gooSmath, "$e"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%met", &module_info_gooSboot, "%met"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"1+", &module_info_gooSmath, "1+"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"%time", &module_info_gooSboot, "%time"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"nul", &module_info_gooSboot, "nul"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"seq", &module_info_gooSboot, "seq"},
  {"map", &module_info_gooSmacros, "map"},
  {"do", &module_info_gooSmacros, "do"},
  {"dl", &module_info_gooSboot, "dl"},
  {"for", &module_info_gooSmacros, "for"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {">", &module_info_gooSmag, ">"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"error", &module_info_gooSboot, "error"},
  {"+", &module_info_gooSmath, "+"},
  {"asin", &module_info_gooSmath, "asin"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<", &module_info_gooSmag, "<"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {">>", &module_info_gooSmath, ">>"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"%im", &module_info_gooSboot, "%im"},
  {"dm", &module_info_gooSboot, "dm"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"while", &module_info_gooSmacros, "while"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"df", &module_info_gooSboot, "df"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"=", &module_info_gooSmath, "="},
  {"dv", &module_info_gooSboot, "dv"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"last", &module_info_gooSmacros, "last"},
  {"dg", &module_info_gooSboot, "dg"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"&", &module_info_gooSmath, "&"},
  {"@<", &module_info_gooSboot, "@<"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"try", &module_info_gooSboot, "try"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%put", &module_info_gooSboot, "%put"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"round", &module_info_gooSmath, "round"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"log", &module_info_gooSmath, "log"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"esc", &module_info_gooSboot, "esc"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"/", &module_info_gooSmath, "/"},
  {"pow", &module_info_gooSmath, "pow"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"tan", &module_info_gooSmath, "tan"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%vector-setter", CVAR, &YgooScolsStabYPvector_setter},
  {"---main-1---", PVAR, NULL},
  {"@buc", CVAR, &YgooScolsStabYObuc},
  {"$empty-cell-marker", CVAR, &YgooScolsStabYDempty_cell_marker},
  {"choose-table-geometry", CVAR, &YgooScolsStabYchoose_table_geometry},
  {"rehash-table", CVAR, &YgooScolsStabYrehash_table},
  {"<tab-enum>", CVAR, &YgooScolsStabYLtab_enumG},
  {"@elt-setter", PVAR, NULL},
  {"%secondary-modulus", CVAR, &YgooScolsStabYPsecondary_modulus},
  {"%n-buckets-setter", CVAR, &YgooScolsStabYPn_buckets_setter},
  {"%vector", CVAR, &YgooScolsStabYPvector},
  {"%n-buckets", CVAR, &YgooScolsStabYPn_buckets},
  {"@idx-setter", CVAR, &YgooScolsStabYOidx_setter},
  {"copy-to-new-vector", CVAR, &YgooScolsStabYcopy_to_new_vector},
  {"%bucket-depth-setter", CVAR, &YgooScolsStabYPbucket_depth_setter},
  {"@elt", PVAR, NULL},
  {"%data-setter", CVAR, &YgooScolsStabYPdata_setter},
  {"%count-setter", CVAR, &YgooScolsStabYPcount_setter},
  {"fab-tab-vec", CVAR, &YgooScolsStabYfab_tab_vec},
  {"@idx", CVAR, &YgooScolsStabYOidx},
  {"%vacated-setter", CVAR, &YgooScolsStabYPvacated_setter},
  {"%bucket-depth", CVAR, &YgooScolsStabYPbucket_depth},
  {"case-insensitive-string-equal", CVAR, &YgooScolsStabYcase_insensitive_string_equal},
  {"@vec-setter", CVAR, &YgooScolsStabYOvec_setter},
  {"%data", CVAR, &YgooScolsStabYPdata},
  {"@fin?-setter", CVAR, &YgooScolsStabYOfinQ_setter},
  {"%count", CVAR, &YgooScolsStabYPcount},
  {"$fin-enum", CVAR, &YgooScolsStabYDfin_enum},
  {"<tab-vec>", CVAR, &YgooScolsStabYLtab_vecG},
  {"%vacated", CVAR, &YgooScolsStabYPvacated},
  {"case-insensitive-string-hash", CVAR, &YgooScolsStabYcase_insensitive_string_hash},
  {"<str-tab>", CVAR, &YgooScolsStabYLstr_tabG},
  {"tab-shrink-threshold-setter", CVAR, &YgooScolsStabYtab_shrink_threshold_setter},
  {"rot", CVAR, &YgooScolsStabYrot},
  {"@vec", CVAR, &YgooScolsStabYOvec},
  {"id-hash", CVAR, &YgooScolsStabYid_hash},
  {"@fin?", CVAR, &YgooScolsStabYOfinQ},
  {"tab-growth-factor-setter", CVAR, &YgooScolsStabYtab_growth_factor_setter},
  {"tab-growth-threshold-setter", CVAR, &YgooScolsStabYtab_growth_threshold_setter},
  {"*twin-primes*", CVAR, &YgooScolsStabYTtwin_primesT},
  {"%primary-modulus-setter", CVAR, &YgooScolsStabYPprimary_modulus_setter},
  {"tab-hash", CVAR, &YgooScolsStabYtab_hash},
  {"*debug-tables?*", CVAR, &YgooScolsStabYTdebug_tablesQT},
  {"grow-table", CVAR, &YgooScolsStabYgrow_table},
  {"tab-shrink-threshold", CVAR, &YgooScolsStabYtab_shrink_threshold},
  {"<set>", CVAR, &YgooScolsStabYLsetG},
  {"%primary-modulus", CVAR, &YgooScolsStabYPprimary_modulus},
  {"---main-0---", PVAR, NULL},
  {"tab-growth-factor", CVAR, &YgooScolsStabYtab_growth_factor},
  {"tab-growth-threshold", CVAR, &YgooScolsStabYtab_growth_threshold},
  {"clr!", CVAR, &YgooScolsStabYclrX},
  {"@buc-setter", CVAR, &YgooScolsStabYObuc_setter},
  {"tab-keys", CVAR, &YgooScolsStabYtab_keys},
  {"$vacated-cell-marker", CVAR, &YgooScolsStabYDvacated_cell_marker},
  {"---main-2---", PVAR, NULL},
  {"%secondary-modulus-setter", CVAR, &YgooScolsStabYPsecondary_modulus_setter},
  {"@fill!", CVAR, &YgooScolsStabYOfillX},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"<str-tab>", "<str-tab>"},
  {"tab-shrink-threshold-setter", "tab-shrink-threshold-setter"},
  {"id-hash", "id-hash"},
  {"tab-growth-factor-setter", "tab-growth-factor-setter"},
  {"tab-growth-threshold-setter", "tab-growth-threshold-setter"},
  {"tab-hash", "tab-hash"},
  {"tab-shrink-threshold", "tab-shrink-threshold"},
  {"<set>", "<set>"},
  {"<tab>", "<tab>"},
  {"tab-growth-factor", "tab-growth-factor"},
  {"tab-growth-threshold", "tab-growth-threshold"},
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
