/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/tab");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/tab */

DEF(YgooScolsStabYrehash_table,"goo/cols/tab","rehash-table");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOlst,"goo/boot","@lst");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(Yfun_code,"goo/boot","fun-code");
DEF(YgooScolsStabYPvector_setter,"goo/cols/tab","%vector-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
DEF(YgooScolsStabYPn_buckets,"goo/cols/tab","%n-buckets");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooScolsStabYrot,"goo/cols/tab","rot");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
DEF(YgooScolsStabYOfinQ,"goo/cols/tab","@fin?");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YgooScolsStabYgrow_table,"goo/cols/tab","grow-table");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(YgooScolsStabYchoose_table_geometry,"goo/cols/tab","choose-table-geometry");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YgooScolsStabYfab_tab_vec,"goo/cols/tab","fab-tab-vec");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YgooScolsStabYclrX,"goo/cols/tab","clr!");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
DEF(YgooScolsStabYOvec_setter,"goo/cols/tab","@vec-setter");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
DEF(YgooScolsStabYTtwin_primesT,"goo/cols/tab","*twin-primes*");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yas_error,"goo/boot","as-error");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yhead,"goo/boot","head");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(YgooScolsStabYObuc_setter,"goo/cols/tab","@buc-setter");
DEF(YgooScolsStabYPvacated_setter,"goo/cols/tab","%vacated-setter");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YgooScolsStabYPvector,"goo/cols/tab","%vector");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(Yinternal_error,"goo/boot","internal-error");
DEF(YgooScolsStabYPprimary_modulus,"goo/cols/tab","%primary-modulus");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YgooScolsStabYDvacated_cell_marker,"goo/cols/tab","$vacated-cell-marker");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YOdo,"goo/boot","@do");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
DEF(YgooScolsStabYObuc,"goo/cols/tab","@buc");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YgooScolsStabYPbucket_depth,"goo/cols/tab","%bucket-depth");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YOlit,"goo/boot","@lit");
DEF(YgooScolsStabYPcount_setter,"goo/cols/tab","%count-setter");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yopts_count,"goo/boot","opts-count");
DEF(YgooScolsStabYLtab_enumG,"goo/cols/tab","<tab-enum>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YgooScolsStabYtab_keys,"goo/cols/tab","tab-keys");
EXT(YgooSmathYrem,"goo/math","rem");
DEF(YgooScolsStabYOidx_setter,"goo/cols/tab","@idx-setter");
DEF(YgooScolsStabYPdata_setter,"goo/cols/tab","%data-setter");
DEF(YgooScolsStabYTdebug_tablesQT,"goo/cols/tab","*debug-tables?*");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSmathYatan,"goo/math","atan");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YOmap,"goo/boot","@map");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(YgooScolsStabYPcount,"goo/cols/tab","%count");
DEF(YgooScolsStabYcopy_to_new_vector,"goo/cols/tab","copy-to-new-vector");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
DEF(YgooScolsStabYOidx,"goo/cols/tab","@idx");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
DEF(YgooScolsStabYPdata,"goo/cols/tab","%data");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YgooScolsStabYDnul_cell_marker,"goo/cols/tab","$nul-cell-marker");
DEF(YgooScolsStabYPsecondary_modulus,"goo/cols/tab","%secondary-modulus");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
DEF(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YOrev,"goo/boot","@rev");
DEF(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSclassYclone,"goo/class","clone");
DEF(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSlstYlstT,"goo/cols/lst","lst*");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
DEF(YgooScolsStabYDfin_enum,"goo/cols/tab","$fin-enum");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ylst,"goo/boot","lst");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYA,"goo/math","+");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOnew,"goo/boot","@new");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLboxG,"goo/boot","<box>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YgooScolsStabYOfillX,"goo/cols/tab","@fill!");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YPtrue,"goo/boot","%true");
EXT(Ybox_value,"goo/boot","box-value");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YOfold,"goo/boot","@fold");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSlogYE,"goo/log","=");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YOtanyQ,"goo/boot","@tany?");
DEF(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
DEF(YgooScolsStabYLtab_vecG,"goo/cols/tab","<tab-vec>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YgooScolsStabYOvec,"goo/cols/tab","@vec");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
DEF(YgooScolsStabYPvacated,"goo/cols/tab","%vacated");
EXT(YgooScolsScolYadd,"goo/cols/col","add");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_145);
DEFLIT(lit_4);
DEFLIT(lit_102);
DEFLIT(lit_42);
DEFLIT(lit_115);
DEFLIT(lit_91);
DEFLIT(lit_8);
DEFLIT(lit_99);
DEFLIT(lit_27);
DEFLIT(lit_146);
DEFLIT(lit_19);
DEFLIT(lit_28);
DEFLIT(lit_89);
DEFLIT(lit_54);
DEFLIT(lit_60);
DEFLIT(lit_94);
DEFLIT(lit_53);
DEFLIT(lit_15);
DEFLIT(lit_39);
DEFLIT(lit_106);
DEFLIT(lit_38);
DEFLIT(lit_143);
DEFLIT(lit_136);
DEFLIT(lit_70);
DEFLIT(lit_124);
DEFLIT(lit_51);
DEFLIT(lit_135);
DEFLIT(lit_31);
DEFLIT(lit_137);
DEFLIT(lit_110);
DEFLIT(lit_78);
DEFLIT(lit_74);
DEFLIT(lit_119);
DEFLIT(lit_25);
DEFLIT(lit_64);
DEFLIT(lit_66);
DEFLIT(lit_76);
DEFLIT(lit_59);
DEFLIT(lit_10);
DEFLIT(lit_97);
DEFLIT(lit_147);
DEFLIT(lit_104);
DEFLIT(lit_29);
DEFLIT(lit_7);
DEFLIT(lit_30);
DEFLIT(lit_9);
DEFLIT(lit_84);
DEFLIT(lit_88);
DEFLIT(lit_98);
DEFLIT(lit_56);
DEFLIT(lit_50);
DEFLIT(lit_125);
DEFLIT(lit_0);
DEFLIT(lit_90);
DEFLIT(lit_26);
DEFLIT(lit_24);
DEFLIT(lit_85);
DEFLIT(lit_120);
DEFLIT(lit_5);
DEFLIT(lit_67);
DEFLIT(lit_6);
DEFLIT(lit_32);
DEFLIT(lit_138);
DEFLIT(lit_12);
DEFLIT(lit_101);
DEFLIT(lit_13);
DEFLIT(lit_65);
DEFLIT(lit_11);
DEFLIT(lit_44);
DEFLIT(lit_112);
DEFLIT(lit_33);
DEFLIT(lit_36);
DEFLIT(lit_46);
DEFLIT(lit_93);
DEFLIT(lit_17);
DEFLIT(lit_129);
DEFLIT(lit_57);
DEFLIT(lit_118);
DEFLIT(lit_83);
DEFLIT(lit_132);
DEFLIT(lit_130);
DEFLIT(lit_3);
DEFLIT(lit_20);
DEFLIT(lit_69);
DEFLIT(lit_117);
DEFLIT(lit_2);
DEFLIT(lit_103);
DEFLIT(lit_73);
DEFLIT(lit_72);
DEFLIT(lit_40);
DEFLIT(lit_23);
DEFLIT(lit_14);
DEFLIT(lit_142);
DEFLIT(lit_100);
DEFLIT(lit_105);
DEFLIT(lit_113);
DEFLIT(lit_133);
DEFLIT(lit_121);
DEFLIT(lit_34);
DEFLIT(lit_63);
DEFLIT(lit_41);
DEFLIT(lit_108);
DEFLIT(lit_47);
DEFLIT(lit_107);
DEFLIT(lit_49);
DEFLIT(lit_80);
DEFLIT(lit_114);
DEFLIT(lit_45);
DEFLIT(lit_141);
DEFLIT(lit_87);
DEFLIT(lit_86);
DEFLIT(lit_126);
DEFLIT(lit_62);
DEFLIT(lit_95);
DEFLIT(lit_127);
DEFLIT(lit_61);
DEFLIT(lit_81);
DEFLIT(lit_52);
DEFLIT(lit_109);
DEFLIT(lit_37);
DEFLIT(lit_75);
DEFLIT(lit_77);
DEFLIT(lit_35);
DEFLIT(lit_139);
DEFLIT(lit_123);
DEFLIT(lit_68);
DEFLIT(lit_71);
DEFLIT(lit_48);
DEFLIT(lit_55);
DEFLIT(lit_18);
DEFLIT(lit_111);
DEFLIT(lit_144);
DEFLIT(lit_122);
DEFLIT(lit_1);
DEFLIT(lit_140);
DEFLIT(lit_128);
DEFLIT(lit_92);
DEFLIT(lit_82);
DEFLIT(lit_79);
DEFLIT(lit_21);
DEFLIT(lit_22);
DEFLIT(lit_16);
DEFLIT(lit_134);
DEFLIT(lit_58);
DEFLIT(lit_96);
DEFLIT(lit_43);
DEFLIT(lit_116);
DEFLIT(lit_131);

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

/* C-FORMS: */


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
  P vF3495;
  P T0,T1;
LINK_STACK();
  ARG(size_, 0);
  ARG(fill_value_, 1);
  ARG(n_buckets_, 2);
  ARG(bucket_depth_, 3);
  ARG(primary_modulus_, 4);
  ARG(secondary_modulus_, 5);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPn_buckets),n_buckets_,VARREF(YgooScolsStabYPbucket_depth),bucket_depth_,VARREF(YgooScolsStabYPprimary_modulus),primary_modulus_,VARREF(YgooScolsStabYPsecondary_modulus),secondary_modulus_);
  vF3495 = T1;
  T0 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),size_,fill_value_);
  CALL2(1,VARREF(YgooScolsStabYPdata_setter),T0,vF3495);
UNLINK_STACK();
  RET(vF3495);
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
  P xF3497;
  P xF3496;
  P T0,T1,T2;
DEFCREGS();
  T1 = XCALL1(1,VARREF(YgooScolsStabYPdata),vector_);
  xF3496 = index_;
  xF3497 = xF3496;
  T2 = (P)YPiGG(xF3497,(P)2);
  T0 = (P)YPrelt(T1,T2);
  return T0;
}

P YgooScolsStabYOvelt_setter(P new_value_,P vector_,P index_) {
  P xF3499;
  P xF3498;
  P T0,T1,T2;
DEFCREGS();
  T1 = XCALL1(1,VARREF(YgooScolsStabYPdata),vector_);
  xF3498 = index_;
  xF3499 = xF3498;
  T2 = (P)YPiGG(xF3499,(P)2);
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
  P tableF3503;
  P bucket_depthF3502;
  P n_bucketsF3501;
  P tup28F3500;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(type_, 0);
  ARG(size_, 1);
  T7 = CALL1(1,VARREF(YgooScolsStabYchoose_table_geometry),size_);
  tup28F3500 = T7;
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),tup28F3500,YPint((P)0));
  n_bucketsF3501 = T6;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup28F3500,YPint((P)1));
  bucket_depthF3502 = T5;
  T4 = CALL1(1,VARREF(Ynew),type_);
  tableF3503 = T4;
  T2 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF3502,YPint((P)2));
  T1 = CALL2(1,VARREF(YgooSmathYT),n_bucketsF3501,T2);
  T3 = CALL2(1,VARREF(YgooSmathY_),n_bucketsF3501,YPint((P)2));
  T0 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T1,VARREF(YgooScolsStabYDnul_cell_marker),n_bucketsF3501,bucket_depthF3502,n_bucketsF3501,T3);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),T0,tableF3503);
UNLINK_STACK();
  RET(tableF3503);
}

LOCCODEDEF(fun_elt_or_28) {
  P table_,key_,default_;
  P this_keyF3516;
  P raw_indexF3515;
  P iF3514;
  P indexF3513;
  P probesF3512;
  P bucket_indexF3511;
  P bucket_offsetF3510;
  P bucket_indexF3509;
  P hashF3508;
  P bucket_depthF3507;
  P n_bucketsF3506;
  P vectorF3505;
  P test_functionF3504;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(table_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
  T31 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF3504 = T31;
  T30 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF3505 = T30;
  T29 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3505);
  n_bucketsF3506 = T29;
  T28 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3505);
  bucket_depthF3507 = T28;
  T27 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T26 = CALL1(1,T27,key_);
  check_type(T26,VARREF(YLintG));
  hashF3508 = T26;
  T25 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF3505);
  T24 = CALL2(1,VARREF(YgooSmathYmod),hashF3508,T25);
  bucket_indexF3509 = T24;
  T23 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF3505);
  T22 = CALL2(1,VARREF(YgooSmathYmod),hashF3508,T23);
  T21 = CALL2(1,VARREF(YgooSmathYA),T22,YPint((P)1));
  bucket_offsetF3510 = T21;
  bucket_indexF3511 = bucket_indexF3509;
  probesF3512 = YPint((P)0);
  LOOP_130: {
    P a130_0,a130_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),probesF3512,n_bucketsF3506);
    if (T1 != YPfalse) {
      T19 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF3507,YPint((P)2));
      T18 = CALL2(1,VARREF(YgooSmathYT),bucket_indexF3511,T19);
      indexF3513 = T18;
      iF3514 = YPint((P)0);
      raw_indexF3515 = indexF3513;
      LOOP_131: {
        P a131_0,a131_1;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF3514,bucket_depthF3507);
        if (T3 != YPfalse) {
          T14 = (P)YgooScolsStabYOvelt(vectorF3505,raw_indexF3515);
          this_keyF3516 = T14;
          T5 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF3516,VARREF(YgooScolsStabYDnul_cell_marker));
          if (T5 != YPfalse) {
            T4 = default_;
          } else {
            T7 = CALL2(0,test_functionF3504,key_,this_keyF3516);
            if (T7 != YPfalse) {
              T9 = CALL2(1,VARREF(YgooSmathYA),raw_indexF3515,bucket_depthF3507);
              T8 = (P)YgooScolsStabYOvelt(vectorF3505,T9);
              T6 = T8;
            } else {
              if (YPtrue != YPfalse) {
                T12 = CALL2(1,VARREF(YgooSmathYA),iF3514,YPint((P)1));
                T13 = CALL2(1,VARREF(YgooSmathYA),raw_indexF3515,YPint((P)1));
                a131_0 = T12;
                a131_1 = T13;
                iF3514 = a131_0;
                raw_indexF3515 = a131_1;
                goto LOOP_131;
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
          T16 = CALL3(1,VARREF(YgooSmathYmod_),bucket_indexF3511,bucket_offsetF3510,n_bucketsF3506);
          T17 = CALL2(1,VARREF(YgooSmathYA),probesF3512,YPint((P)1));
          a130_0 = T16;
          a130_1 = T17;
          bucket_indexF3511 = a130_0;
          probesF3512 = a130_1;
          goto LOOP_130;
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
  P tmpF3532;
  P indexF3531;
  P this_keyF3530;
  P raw_indexF3529;
  P iF3528;
  P vacancy_indexF3527;
  P indexF3526;
  P probesF3525;
  P bucket_indexF3524;
  P bucket_offsetF3523;
  P bucket_indexF3522;
  P hashF3521;
  P n_bucketsF3520;
  P bucket_depthF3519;
  P test_functionF3518;
  P vectorF3517;
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
  vectorF3517 = T81;
  T2 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
  T6 = vectorF3517;
  T5 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T6);
  T8 = vectorF3517;
  T7 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T8);
  T4 = CALL2(1,VARREF(YgooSmathYT),T5,T7);
  T9 = CALL1(1,VARREF(YgooScolsStabYtab_growth_threshold),table_);
  T3 = CALL2(1,VARREF(YgooSmathYT),T4,T9);
  T1 = CALL2(1,VARREF(YgooSmagYGE),T2,T3);
  if (T1 != YPfalse) {
    T12 = CALL1(1,VARREF(YgooScolsStabYgrow_table),table_);
    T11 = CALL1(1,VARREF(YgooScolsStabYPvector),T12);
    T10 = vectorF3517 = T11;
  } else {
    T16 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
    T18 = vectorF3517;
    T17 = CALL1(1,VARREF(YgooScolsStabYPvacated),T18);
    T15 = CALL2(1,VARREF(YgooSmathYA),T16,T17);
    T22 = vectorF3517;
    T21 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T22);
    T24 = vectorF3517;
    T23 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T24);
    T20 = CALL2(1,VARREF(YgooSmathYT),T21,T23);
    T25 = CALL1(1,VARREF(YgooScolsStabYtab_growth_threshold),table_);
    T19 = CALL2(1,VARREF(YgooSmathYT),T20,T25);
    T14 = CALL2(1,VARREF(YgooSmagYG),T15,T19);
    if (T14 != YPfalse) {
      T28 = CALL1(1,VARREF(YgooScolsStabYrehash_table),table_);
      T27 = CALL1(1,VARREF(YgooScolsStabYPvector),T28);
      T26 = vectorF3517 = T27;
      T13 = T26;
    } else {
      T13 = YPfalse;
    }
  }
  T80 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF3518 = T80;
  T79 = vectorF3517;
  T78 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T79);
  bucket_depthF3519 = T78;
  T77 = vectorF3517;
  T76 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T77);
  n_bucketsF3520 = T76;
  T75 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T74 = CALL1(1,T75,key_);
  check_type(T74,VARREF(YLintG));
  hashF3521 = T74;
  T73 = vectorF3517;
  T72 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),T73);
  T71 = CALL2(1,VARREF(YgooSmathYmod),hashF3521,T72);
  bucket_indexF3522 = T71;
  T70 = vectorF3517;
  T69 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),T70);
  T68 = CALL2(1,VARREF(YgooSmathYmod),hashF3521,T69);
  T67 = CALL2(1,VARREF(YgooSmathYA),T68,YPint((P)1));
  bucket_offsetF3523 = T67;
  bucket_indexF3524 = bucket_indexF3522;
  check_type(YPint((P)0),VARREF(YLintG));
  probesF3525 = YPint((P)0);
  LOOP_132: {
    P a132_0,a132_1;
    T30 = CALL2(1,VARREF(YgooSmagYL),probesF3525,n_bucketsF3520);
    if (T30 != YPfalse) {
      T65 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF3519,YPint((P)2));
      T64 = CALL2(1,VARREF(YgooSmathYT),bucket_indexF3524,T65);
      indexF3526 = T64;
      vacancy_indexF3527 = YPfalse;
      check_type(YPint((P)0),VARREF(YLintG));
      iF3528 = YPint((P)0);
      check_type(indexF3526,VARREF(YLintG));
      raw_indexF3529 = indexF3526;
      LOOP_133: {
        P a133_0,a133_1,a133_2;
        T32 = CALL2(1,VARREF(YgooSmagYL),iF3528,bucket_depthF3519);
        if (T32 != YPfalse) {
          T60 = vectorF3517;
          T59 = (P)YgooScolsStabYOvelt(T60,raw_indexF3529);
          this_keyF3530 = T59;
          T34 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF3530,VARREF(YgooScolsStabYDnul_cell_marker));
          if (T34 != YPfalse) {
            if (vacancy_indexF3527 != YPfalse) {
              T43 = vectorF3517;
              T42 = CALL1(1,VARREF(YgooScolsStabYPvacated),T43);
              T41 = CALL2(1,VARREF(YgooSmathY_),T42,YPint((P)1));
              T44 = vectorF3517;
              CALL2(1,VARREF(YgooScolsStabYPvacated_setter),T41,T44);
              T40 = vacancy_indexF3527;
            } else {
              T40 = raw_indexF3529;
            }
            indexF3531 = T40;
            T35 = vectorF3517;
            (P)YgooScolsStabYOvelt_setter(key_,T35,indexF3531);
            T36 = vectorF3517;
            T37 = CALL2(1,VARREF(YgooSmathYA),indexF3531,bucket_depthF3519);
            (P)YgooScolsStabYOvelt_setter(value_,T36,T37);
            T39 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
            T38 = CALL2(1,VARREF(YgooSmathYA),T39,YPint((P)1));
            CALL2(1,VARREF(YgooScolsStabYPcount_setter),T38,table_);
            T33 = value_;
          } else {
            T46 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF3530,VARREF(YgooScolsStabYDvacated_cell_marker));
            if (T46 != YPfalse) {
              tmpF3532 = vacancy_indexF3527;
              if (tmpF3532 != YPfalse) {
                T48 = tmpF3532;
              } else {
                T48 = raw_indexF3529;
              }
              T49 = CALL2(1,VARREF(YgooSmathYA),iF3528,YPint((P)1));
              T50 = CALL2(1,VARREF(YgooSmathYA),raw_indexF3529,YPint((P)1));
              a133_0 = T48;
              a133_1 = T49;
              a133_2 = T50;
              vacancy_indexF3527 = a133_0;
              iF3528 = a133_1;
              raw_indexF3529 = a133_2;
              goto LOOP_133;
              T45 = T47;
            } else {
              T52 = CALL2(1,test_functionF3518,key_,this_keyF3530);
              if (T52 != YPfalse) {
                T53 = vectorF3517;
                T54 = CALL2(1,VARREF(YgooSmathYA),raw_indexF3529,bucket_depthF3519);
                (P)YgooScolsStabYOvelt_setter(value_,T53,T54);
                T51 = value_;
              } else {
                if (YPtrue != YPfalse) {
                  T57 = CALL2(1,VARREF(YgooSmathYA),iF3528,YPint((P)1));
                  T58 = CALL2(1,VARREF(YgooSmathYA),raw_indexF3529,YPint((P)1));
                  a133_0 = vacancy_indexF3527;
                  a133_1 = T57;
                  a133_2 = T58;
                  vacancy_indexF3527 = a133_0;
                  iF3528 = a133_1;
                  raw_indexF3529 = a133_2;
                  goto LOOP_133;
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
          T62 = CALL3(1,VARREF(YgooSmathYmod_),bucket_indexF3524,bucket_offsetF3523,n_bucketsF3520);
          T63 = CALL2(1,VARREF(YgooSmathYA),probesF3525,YPint((P)1));
          a132_0 = T62;
          a132_1 = T63;
          bucket_indexF3524 = a132_0;
          probesF3525 = a132_1;
          goto LOOP_132;
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
  P this_keyF3545;
  P raw_indexF3544;
  P iF3543;
  P indexF3542;
  P probesF3541;
  P bucket_indexF3540;
  P bucket_offsetF3539;
  P bucket_indexF3538;
  P hashF3537;
  P bucket_depthF3536;
  P n_bucketsF3535;
  P vectorF3534;
  P test_functionF3533;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35;
LINK_STACK();
  ARG(table_, 0);
  ARG(key_, 1);
  T35 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF3533 = T35;
  T34 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF3534 = T34;
  T33 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3534);
  n_bucketsF3535 = T33;
  T32 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3534);
  bucket_depthF3536 = T32;
  T31 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T30 = CALL1(1,T31,key_);
  check_type(T30,VARREF(YLintG));
  hashF3537 = T30;
  T29 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF3534);
  T28 = CALL2(1,VARREF(YgooSmathYmod),hashF3537,T29);
  bucket_indexF3538 = T28;
  T27 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF3534);
  T26 = CALL2(1,VARREF(YgooSmathYmod),hashF3537,T27);
  T25 = CALL2(1,VARREF(YgooSmathYA),T26,YPint((P)1));
  bucket_offsetF3539 = T25;
  bucket_indexF3540 = bucket_indexF3538;
  check_type(YPint((P)0),VARREF(YLintG));
  probesF3541 = YPint((P)0);
  LOOP_134: {
    P a134_0,a134_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),probesF3541,n_bucketsF3535);
    if (T1 != YPfalse) {
      T23 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF3536,YPint((P)2));
      T22 = CALL2(1,VARREF(YgooSmathYT),bucket_indexF3540,T23);
      check_type(T22,VARREF(YLintG));
      indexF3542 = T22;
      check_type(YPint((P)0),VARREF(YLintG));
      iF3543 = YPint((P)0);
      check_type(indexF3542,VARREF(YLintG));
      raw_indexF3544 = indexF3542;
      LOOP_135: {
        P a135_0,a135_1;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF3543,bucket_depthF3536);
        if (T3 != YPfalse) {
          T18 = (P)YgooScolsStabYOvelt(vectorF3534,raw_indexF3544);
          this_keyF3545 = T18;
          T5 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF3545,VARREF(YgooScolsStabYDnul_cell_marker));
          if (T5 != YPfalse) {
            T4 = YPfalse;
          } else {
            T8 = CALL2(1,VARREF(YgooSlogYNEE),this_keyF3545,VARREF(YgooScolsStabYDvacated_cell_marker));
            if (T8 != YPfalse) {
              T9 = CALL2(1,test_functionF3533,key_,this_keyF3545);
              T7 = T9;
            } else {
              T7 = YPfalse;
            }
            if (T7 != YPfalse) {
              (P)YgooScolsStabYOvelt_setter(VARREF(YgooScolsStabYDvacated_cell_marker),vectorF3534,raw_indexF3544);
              T11 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
              T10 = CALL2(1,VARREF(YgooSmathY_),T11,YPint((P)1));
              CALL2(1,VARREF(YgooScolsStabYPcount_setter),T10,table_);
              T13 = CALL1(1,VARREF(YgooScolsStabYPvacated),vectorF3534);
              T12 = CALL2(1,VARREF(YgooSmathYA),T13,YPint((P)1));
              CALL2(1,VARREF(YgooScolsStabYPvacated_setter),T12,vectorF3534);
              T6 = YPtrue;
            } else {
              if (YPtrue != YPfalse) {
                T16 = CALL2(1,VARREF(YgooSmathYA),iF3543,YPint((P)1));
                T17 = CALL2(1,VARREF(YgooSmathYA),raw_indexF3544,YPint((P)1));
                a135_0 = T16;
                a135_1 = T17;
                iF3543 = a135_0;
                raw_indexF3544 = a135_1;
                goto LOOP_135;
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
          T20 = CALL3(1,VARREF(YgooSmathYmod_),bucket_indexF3540,bucket_offsetF3539,n_bucketsF3535);
          T21 = CALL2(1,VARREF(YgooSmathYA),probesF3541,YPint((P)1));
          a134_0 = T20;
          a134_1 = T21;
          bucket_indexF3540 = a134_0;
          probesF3541 = a134_1;
          goto LOOP_134;
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
  P indexF3553;
  P tmpF3552;
  P keyF3551;
  P iF3550;
  P bF3549;
  P depthF3548;
  P n_bucketsF3547;
  P vectorF3546;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(function_, 0);
  ARG(table_, 1);
  T24 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF3546 = T24;
  T23 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3546);
  n_bucketsF3547 = T23;
  T22 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3546);
  depthF3548 = T22;
  check_type(YPint((P)0),VARREF(YLintG));
  bF3549 = YPint((P)0);
  LOOP_136: {
    P a136_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),bF3549,n_bucketsF3547);
    if (T1 != YPfalse) {
      check_type(YPint((P)0),VARREF(YLintG));
      iF3550 = YPint((P)0);
      LOOP_137: {
        P a137_0;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF3550,depthF3548);
        if (T3 != YPfalse) {
          T19 = CALL2(1,VARREF(YgooSmathYT),depthF3548,YPint((P)2));
          T18 = CALL2(1,VARREF(YgooSmathYT),bF3549,T19);
          T17 = CALL2(1,VARREF(YgooSmathYA),iF3550,T18);
          T16 = (P)YgooScolsStabYOvelt(vectorF3546,T17);
          keyF3551 = T16;
          T7 = CALL2(1,VARREF(YgooSmacrosYEE),keyF3551,VARREF(YgooScolsStabYDnul_cell_marker));
          tmpF3552 = T7;
          if (tmpF3552 != YPfalse) {
            T5 = tmpF3552;
          } else {
            T6 = CALL2(1,VARREF(YgooSmacrosYEE),keyF3551,VARREF(YgooScolsStabYDvacated_cell_marker));
            T5 = T6;
          }
          T4 = CALL1(1,VARREF(Ynot),T5);
          if (T4 != YPfalse) {
            T13 = CALL2(1,VARREF(YgooSmathYT),depthF3548,YPint((P)2));
            T12 = CALL2(1,VARREF(YgooSmathYT),bF3549,T13);
            T11 = CALL2(1,VARREF(YgooSmathYA),T12,depthF3548);
            T10 = CALL2(1,VARREF(YgooSmathYA),iF3550,T11);
            indexF3553 = T10;
            T9 = (P)YgooScolsStabYOvelt(vectorF3546,indexF3553);
            T8 = CALL2(1,function_,keyF3551,T9);
          } else {
          }
          T15 = CALL2(1,VARREF(YgooSmathYA),iF3550,YPint((P)1));
          a137_0 = T15;
          iF3550 = a137_0;
          goto LOOP_137;
          T2 = T14;
        } else {
          T2 = YPfalse;
        }
      }
      T21 = CALL2(1,VARREF(YgooSmathYA),bF3549,YPint((P)1));
      a136_0 = T21;
      bF3549 = a136_0;
      goto LOOP_136;
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
  P indexF3561;
  P tmpF3560;
  P keyF3559;
  P iF3558;
  P bF3557;
  P depthF3556;
  P n_bucketsF3555;
  P vectorF3554;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(function_, 0);
  ARG(table_, 1);
  T24 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF3554 = T24;
  T23 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3554);
  n_bucketsF3555 = T23;
  T22 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3554);
  depthF3556 = T22;
  check_type(YPint((P)0),VARREF(YLintG));
  bF3557 = YPint((P)0);
  LOOP_138: {
    P a138_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),bF3557,n_bucketsF3555);
    if (T1 != YPfalse) {
      check_type(YPint((P)0),VARREF(YLintG));
      iF3558 = YPint((P)0);
      LOOP_139: {
        P a139_0;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF3558,depthF3556);
        if (T3 != YPfalse) {
          T19 = CALL2(1,VARREF(YgooSmathYT),depthF3556,YPint((P)2));
          T18 = CALL2(1,VARREF(YgooSmathYT),bF3557,T19);
          T17 = CALL2(1,VARREF(YgooSmathYA),iF3558,T18);
          T16 = (P)YgooScolsStabYOvelt(vectorF3554,T17);
          keyF3559 = T16;
          T7 = CALL2(1,VARREF(YgooSmacrosYEE),keyF3559,VARREF(YgooScolsStabYDnul_cell_marker));
          tmpF3560 = T7;
          if (tmpF3560 != YPfalse) {
            T5 = tmpF3560;
          } else {
            T6 = CALL2(1,VARREF(YgooSmacrosYEE),keyF3559,VARREF(YgooScolsStabYDvacated_cell_marker));
            T5 = T6;
          }
          T4 = CALL1(1,VARREF(Ynot),T5);
          if (T4 != YPfalse) {
            T13 = CALL2(1,VARREF(YgooSmathYT),depthF3556,YPint((P)2));
            T12 = CALL2(1,VARREF(YgooSmathYT),bF3557,T13);
            T11 = CALL2(1,VARREF(YgooSmathYA),T12,depthF3556);
            T10 = CALL2(1,VARREF(YgooSmathYA),iF3558,T11);
            indexF3561 = T10;
            T9 = (P)YgooScolsStabYOvelt(vectorF3554,indexF3561);
            T8 = CALL1(1,function_,T9);
          } else {
          }
          T15 = CALL2(1,VARREF(YgooSmathYA),iF3558,YPint((P)1));
          a139_0 = T15;
          iF3558 = a139_0;
          goto LOOP_139;
          T2 = T14;
        } else {
          T2 = YPfalse;
        }
      }
      T21 = CALL2(1,VARREF(YgooSmathYA),bF3557,YPint((P)1));
      a138_0 = T21;
      bF3557 = a138_0;
      goto LOOP_138;
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
  P tmpF3568;
  P keyF3567;
  P iF3566;
  P bF3565;
  P depthF3564;
  P n_bucketsF3563;
  P vectorF3562;
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
    vectorF3562 = T22;
    T21 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3562);
    n_bucketsF3563 = T21;
    T20 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3562);
    depthF3564 = T20;
    check_type(YPint((P)0),VARREF(YLintG));
    bF3565 = YPint((P)0);
    LOOP_140: {
      P a140_0;
      T4 = CALL2(1,VARREF(YgooSmagYL),bF3565,n_bucketsF3563);
      if (T4 != YPfalse) {
        check_type(YPint((P)0),VARREF(YLintG));
        iF3566 = YPint((P)0);
        LOOP_141: {
          P a141_0;
          T6 = CALL2(1,VARREF(YgooSmagYL),iF3566,depthF3564);
          if (T6 != YPfalse) {
            T17 = CALL2(1,VARREF(YgooSmathYT),depthF3564,YPint((P)2));
            T16 = CALL2(1,VARREF(YgooSmathYT),bF3565,T17);
            T15 = CALL2(1,VARREF(YgooSmathYA),iF3566,T16);
            T14 = (P)YgooScolsStabYOvelt(vectorF3562,T15);
            keyF3567 = T14;
            T10 = CALL2(1,VARREF(YgooSmacrosYEE),keyF3567,VARREF(YgooScolsStabYDnul_cell_marker));
            tmpF3568 = T10;
            if (tmpF3568 != YPfalse) {
              T8 = tmpF3568;
            } else {
              T9 = CALL2(1,VARREF(YgooSmacrosYEE),keyF3567,VARREF(YgooScolsStabYDvacated_cell_marker));
              T8 = T9;
            }
            if (T8 != YPfalse) {
              T12 = CALL2(1,VARREF(YgooSmathYA),iF3566,YPint((P)1));
              a141_0 = T12;
              iF3566 = a141_0;
              goto LOOP_141;
              T7 = T11;
            } else {
              T13 = CALLN(1,VARREF(Ynew),7,VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOvec),vectorF3562,VARREF(YgooScolsStabYObuc),bF3565,VARREF(YgooScolsStabYOidx),iF3566);
              T7 = T13;
            }
            T5 = T7;
          } else {
            T19 = CALL2(1,VARREF(YgooSmathYA),bF3565,YPint((P)1));
            a140_0 = T19;
            bF3565 = a140_0;
            goto LOOP_140;
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
  P x_1425F3579;
  P tmpF3578;
  P keyF3577;
  P iF3576;
  P firstQF3575;
  P bF3574;
  P indexF3573;
  P bucketF3572;
  P depthF3571;
  P n_bucketsF3570;
  P vectorF3569;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(e_, 0);
  T22 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF3569 = T22;
  T21 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3569);
  n_bucketsF3570 = T21;
  T20 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3569);
  depthF3571 = T20;
  T19 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  bucketF3572 = T19;
  T18 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  indexF3573 = T18;
  check_type(bucketF3572,VARREF(YLintG));
  bF3574 = bucketF3572;
  firstQF3575 = YPtrue;
  LOOP_142: {
    P a142_0,a142_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),bF3574,n_bucketsF3570);
    if (T1 != YPfalse) {
      if (firstQF3575 != YPfalse) {
        T17 = CALL2(1,VARREF(YgooSmathYA),indexF3573,YPint((P)1));
        T16 = T17;
      } else {
        T16 = YPint((P)0);
      }
      check_type(T16,VARREF(YLintG));
      iF3576 = T16;
      LOOP_143: {
        P a143_0;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF3576,depthF3571);
        if (T3 != YPfalse) {
          T13 = CALL2(1,VARREF(YgooSmathYT),depthF3571,YPint((P)2));
          T12 = CALL2(1,VARREF(YgooSmathYT),bF3574,T13);
          T11 = CALL2(1,VARREF(YgooSmathYA),iF3576,T12);
          T10 = (P)YgooScolsStabYOvelt(vectorF3569,T11);
          keyF3577 = T10;
          T7 = CALL2(1,VARREF(YgooSmacrosYEE),keyF3577,VARREF(YgooScolsStabYDnul_cell_marker));
          tmpF3578 = T7;
          if (tmpF3578 != YPfalse) {
            T5 = tmpF3578;
          } else {
            T6 = CALL2(1,VARREF(YgooSmacrosYEE),keyF3577,VARREF(YgooScolsStabYDvacated_cell_marker));
            T5 = T6;
          }
          if (T5 != YPfalse) {
            T9 = CALL2(1,VARREF(YgooSmathYA),iF3576,YPint((P)1));
            a143_0 = T9;
            iF3576 = a143_0;
            goto LOOP_143;
            T4 = T8;
          } else {
            x_1425F3579 = e_;
            CALL2(1,VARREF(YgooScolsStabYOvec_setter),vectorF3569,x_1425F3579);
            CALL2(1,VARREF(YgooScolsStabYObuc_setter),bF3574,x_1425F3579);
            CALL2(1,VARREF(YgooScolsStabYOidx_setter),iF3576,x_1425F3579);
            T4 = x_1425F3579;
          }
          T2 = T4;
        } else {
          T15 = CALL2(1,VARREF(YgooSmathYA),bF3574,YPint((P)1));
          a142_0 = T15;
          a142_1 = YPfalse;
          bF3574 = a142_0;
          firstQF3575 = a142_1;
          goto LOOP_142;
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
  P depthF3581;
  P vectorF3580;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(e_, 0);
  T7 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF3580 = T7;
  T6 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3580);
  depthF3581 = T6;
  T2 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  T4 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T5 = CALL2(1,VARREF(YgooSmathYT),depthF3581,YPint((P)2));
  T3 = CALL2(1,VARREF(YgooSmathYT),T4,T5);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,T3);
  T0 = (P)YgooScolsStabYOvelt(vectorF3580,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_now_48) {
  P e_;
  P depthF3583;
  P vectorF3582;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(e_, 0);
  T8 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF3582 = T8;
  T7 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3582);
  depthF3583 = T7;
  T2 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  T5 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T6 = CALL2(1,VARREF(YgooSmathYT),depthF3583,YPint((P)2));
  T4 = CALL2(1,VARREF(YgooSmathYT),T5,T6);
  T3 = CALL2(1,VARREF(YgooSmathYA),depthF3583,T4);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,T3);
  T0 = (P)YgooScolsStabYOvelt(vectorF3582,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_now_setter_49) {
  P value_,e_;
  P depthF3586;
  P indexF3585;
  P vectorF3584;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(value_, 0);
  ARG(e_, 1);
  T8 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF3584 = T8;
  T7 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  indexF3585 = T7;
  T6 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3584);
  depthF3586 = T6;
  T4 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T5 = CALL2(1,VARREF(YgooSmathYT),depthF3586,YPint((P)2));
  T3 = CALL2(1,VARREF(YgooSmathYT),T4,T5);
  T2 = CALL2(1,VARREF(YgooSmathYA),depthF3586,T3);
  T1 = CALL2(1,VARREF(YgooSmathYA),indexF3585,T2);
  T0 = (P)YgooScolsStabYOvelt_setter(value_,vectorF3584,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_50) {
  P k_,v_;
  P UF3587;
  P T0,T1,T2;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
  T2 = BOXGET(FREEREF(0));
  UF3587 = T2;
  T1 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF3587,k_);
  T0 = BOXPUT(T1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_tab_keys_51) {
  P table_;
  P packer_F3588;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(table_, 0);
  T4 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F3588 = T4;
  packer_F3588 = BOXFAB(packer_F3588);
  T1 = FUNFAB(fun_50,1,packer_F3588);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T1,table_);
  T3 = BOXGET(packer_F3588);
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_res),T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_grow_table_52) {
  P table_;
  P new_vectorF3593;
  P new_bucket_depthF3592;
  P new_n_bucketsF3591;
  P tup29F3590;
  P vectorF3589;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(table_, 0);
  T13 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF3589 = T13;
  T10 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3589);
  T11 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3589);
  T9 = CALL2(1,VARREF(YgooSmathYT),T10,T11);
  T12 = CALL1(1,VARREF(YgooScolsStabYtab_growth_factor),table_);
  T8 = CALL2(1,VARREF(YgooSmathYT),T9,T12);
  T7 = CALL1(1,VARREF(YgooSmathYfloor),T8);
  T6 = CALL1(1,VARREF(YgooScolsStabYchoose_table_geometry),T7);
  tup29F3590 = T6;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup29F3590,YPint((P)0));
  new_n_bucketsF3591 = T5;
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),tup29F3590,YPint((P)1));
  new_bucket_depthF3592 = T4;
  T2 = CALL2(1,VARREF(YgooSmathYT),new_bucket_depthF3592,YPint((P)2));
  T1 = CALL2(1,VARREF(YgooSmathYT),new_n_bucketsF3591,T2);
  T3 = CALL2(1,VARREF(YgooSmathY_),new_n_bucketsF3591,YPint((P)2));
  T0 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T1,VARREF(YgooScolsStabYDnul_cell_marker),new_n_bucketsF3591,new_bucket_depthF3592,new_n_bucketsF3591,T3);
  new_vectorF3593 = T0;
  CALL2(1,VARREF(YgooScolsStabYcopy_to_new_vector),table_,new_vectorF3593);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),new_vectorF3593,table_);
UNLINK_STACK();
  RET(table_);
}

LOCCODEDEF(fun_rehash_table_53) {
  P table_;
  P new_vectorF3595;
  P vectorF3594;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(table_, 0);
  T9 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF3594 = T9;
  T2 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3594);
  T4 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3594);
  T3 = CALL2(1,VARREF(YgooSmathYT),T4,YPint((P)2));
  T1 = CALL2(1,VARREF(YgooSmathYT),T2,T3);
  T5 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF3594);
  T6 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF3594);
  T7 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF3594);
  T8 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF3594);
  T0 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T1,VARREF(YgooScolsStabYDnul_cell_marker),T5,T6,T7,T8);
  new_vectorF3595 = T0;
  CALL2(1,VARREF(YgooScolsStabYcopy_to_new_vector),table_,new_vectorF3595);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),new_vectorF3595,table_);
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
  P depthF3596;
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
  depthF3596 = T2;
  T0 = FUNFAB(fun_54,3,FREEREF(0),depthF3596,return_);
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
  P this_keyF3610;
  P indexF3609;
  P iF3608;
  P bucket_startF3607;
  P probesF3606;
  P new_bucket_indexF3605;
  P new_bucket_offsetF3604;
  P new_bucket_indexF3603;
  P hashF3602;
  P new_secondary_modulusF3601;
  P new_primary_modulusF3600;
  P new_bucket_depthF3599;
  P new_n_bucketsF3598;
  P test_functionF3597;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
  T27 = CALL1(1,VARREF(YgooScolsScolYkey_test),FREEREF(0));
  test_functionF3597 = T27;
  T26 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),FREEREF(1));
  new_n_bucketsF3598 = T26;
  T25 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),FREEREF(1));
  new_bucket_depthF3599 = T25;
  T24 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),FREEREF(1));
  new_primary_modulusF3600 = T24;
  T23 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),FREEREF(1));
  new_secondary_modulusF3601 = T23;
  T22 = CALL1(1,VARREF(YgooScolsStabYtab_hash),FREEREF(0));
  T21 = CALL1(1,T22,k_);
  check_type(T21,VARREF(YLintG));
  hashF3602 = T21;
  T20 = CALL2(1,VARREF(YgooSmathYmod),hashF3602,new_primary_modulusF3600);
  new_bucket_indexF3603 = T20;
  T19 = CALL2(1,VARREF(YgooSmathYmod),hashF3602,new_secondary_modulusF3601);
  T18 = CALL2(1,VARREF(YgooSmathYA),T19,YPint((P)1));
  new_bucket_offsetF3604 = T18;
  new_bucket_indexF3605 = new_bucket_indexF3603;
  check_type(YPint((P)0),VARREF(YLintG));
  probesF3606 = YPint((P)0);
  LOOP_144: {
    P a144_0,a144_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),probesF3606,new_n_bucketsF3598);
    if (T1 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSmathYT),new_bucket_depthF3599,YPint((P)2));
      T15 = CALL2(1,VARREF(YgooSmathYT),new_bucket_indexF3605,T16);
      bucket_startF3607 = T15;
      check_type(YPint((P)0),VARREF(YLintG));
      iF3608 = YPint((P)0);
      check_type(bucket_startF3607,VARREF(YLintG));
      indexF3609 = bucket_startF3607;
      LOOP_145: {
        P a145_0,a145_1;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF3608,new_bucket_depthF3599);
        if (T3 != YPfalse) {
          T11 = (P)YgooScolsStabYOvelt(FREEREF(1),indexF3609);
          this_keyF3610 = T11;
          T5 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF3610,VARREF(YgooScolsStabYDnul_cell_marker));
          if (T5 != YPfalse) {
            (P)YgooScolsStabYOvelt_setter(k_,FREEREF(1),indexF3609);
            T7 = CALL2(1,VARREF(YgooSmathYA),indexF3609,new_bucket_depthF3599);
            T6 = (P)YgooScolsStabYOvelt_setter(v_,FREEREF(1),T7);
            T4 = T6;
          } else {
            T9 = CALL2(1,VARREF(YgooSmathYA),iF3608,YPint((P)1));
            T10 = CALL2(1,VARREF(YgooSmathYA),indexF3609,YPint((P)1));
            a145_0 = T9;
            a145_1 = T10;
            iF3608 = a145_0;
            indexF3609 = a145_1;
            goto LOOP_145;
            T4 = T8;
          }
          T2 = T4;
        } else {
          T13 = CALL3(1,VARREF(YgooSmathYmod_),new_bucket_indexF3605,new_bucket_offsetF3604,new_n_bucketsF3598);
          T14 = CALL2(1,VARREF(YgooSmathYA),probesF3606,YPint((P)1));
          a144_0 = T13;
          a144_1 = T14;
          new_bucket_indexF3605 = a144_0;
          probesF3606 = a144_1;
          goto LOOP_144;
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
  P cur_elemF3613;
  P cur_hashF3612;
  P t_enumF3611;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  t_enumF3611 = T8;
  cur_hashF3612 = YPint((P)0);
  LOOP_146: {
    P a146_0,a146_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),t_enumF3611);
    T0 = CALL1(1,VARREF(Ynot),T1);
    if (T0 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),t_enumF3611);
      cur_elemF3613 = T7;
      T3 = CALL1(1,VARREF(YgooScolsScolYnxt),t_enumF3611);
      T5 = CALL2(1,VARREF(YgooSmathYT),cur_hashF3612,YPint((P)31));
      T6 = CALL1(1,VARREF(YgooScolsStabYid_hash),cur_elemF3613);
      T4 = CALL2(1,VARREF(YgooSmathYA),T5,T6);
      a146_0 = T3;
      a146_1 = T4;
      t_enumF3611 = a146_0;
      cur_hashF3612 = a146_1;
      goto LOOP_146;
    } else {
    }
  }
UNLINK_STACK();
  QRET(cur_hashF3612);
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
  P hashF3616;
  P iF3615;
  P eF3614;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  T10 = CALL1(1,VARREF(YgooStypesYlen),x_);
  eF3614 = T10;
  check_type(YPint((P)0),VARREF(YLintG));
  iF3615 = YPint((P)0);
  check_type(YPint((P)0),VARREF(YLintG));
  hashF3616 = YPint((P)0);
  LOOP_147: {
    P a147_0,a147_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF3615,eF3614);
    if (T1 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSmathYA),iF3615,YPint((P)1));
      T6 = CALL2(1,VARREF(YgooSmathYLL),hashF3616,YPint((P)6));
      T9 = CALL2(1,VARREF(YgooScolsScolYlow_elt),x_,iF3615);
      T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T9);
      T7 = CALL2(1,VARREF(YgooSmathYB),T8,YPint((P)159));
      T5 = CALL2(1,VARREF(YgooSmathYA),T6,T7);
      T4 = CALL2(1,VARREF(YgooSmathYmod),T5,YPint((P)970747));
      a147_0 = T3;
      a147_1 = T4;
      iF3615 = a147_0;
      hashF3616 = a147_1;
      goto LOOP_147;
      T0 = T2;
    } else {
      T0 = hashF3616;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsStabYcase_insensitive_string_equal) {
  P x_,y_;
  P tmpF3623;
  P cyF3622;
  P cxF3621;
  P tmpF3620;
  P iF3619;
  P eyF3618;
  P syF3617;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  syF3617 = YPint((P)0);
  T17 = CALL1(1,VARREF(YgooStypesYlen),y_);
  eyF3618 = T17;
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T3 = CALL2(1,VARREF(YgooSmathY_),eyF3618,syF3617);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,T3);
  if (T1 != YPfalse) {
    check_type(syF3617,VARREF(YLintG));
    iF3619 = syF3617;
    LOOP_148: {
      P a148_0;
      T16 = CALL2(1,VARREF(YgooSmacrosYEE),iF3619,eyF3618);
      tmpF3620 = T16;
      if (tmpF3620 != YPfalse) {
        T4 = tmpF3620;
      } else {
        T15 = CALL2(1,VARREF(YgooSmathY_),iF3619,syF3617);
        T14 = CALL2(1,VARREF(YgooScolsScolYlow_elt),x_,T15);
        check_type(T14,VARREF(YLchrG));
        cxF3621 = T14;
        T13 = CALL2(1,VARREF(YgooScolsScolYlow_elt),y_,iF3619);
        check_type(T13,VARREF(YLchrG));
        cyF3622 = T13;
        T10 = CALL2(1,VARREF(YgooSmacrosYEE),cxF3621,cyF3622);
        tmpF3623 = T10;
        if (tmpF3623 != YPfalse) {
          T6 = tmpF3623;
        } else {
          T8 = CALL1(1,VARREF(YgooSchrYto_lower),cxF3621);
          T9 = CALL1(1,VARREF(YgooSchrYto_lower),cyF3622);
          T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,T9);
          T6 = T7;
        }
        if (T6 != YPfalse) {
          T12 = CALL2(1,VARREF(YgooSmathYA),iF3619,YPint((P)1));
          a148_0 = T12;
          iF3619 = a148_0;
          goto LOOP_148;
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
  P resF3624;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(keys_, 1);
  T3 = CALL1(1,VARREF(YgooStypesYlen),keys_);
  T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),T3);
  resF3624 = T2;
  T0 = FUNFAB(fun_74,2,x_,resF3624);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,keys_);
  T1 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,resF3624);
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
  fun_tab_growth_factor_0 = YPfab_met(FUNCODEREF(fun_tab_growth_factor_0),T5,LITREF(lit_2),LITREF(lit_3),sloc(33),YPfalse);
  T7 = VARREF_OR(YgooScolsStabYtab_growth_factor,YPfalse);
  T8 = fun_tab_growth_factor_0;
  T6 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T7,T8);
  VARSET(YgooScolsStabYtab_growth_factor,T6);
  lit_4 = YPPlist(1,YPPsym((P)"_x"));
  lit_5 = YPflo(FLOINT(2.0));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPfab_met(FUNCODEREF(fun_1),T9,YPfalse,LITREF(lit_4),sloc(33),YPfalse);
  T10 = fun_1;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYtab_growth_factor),YPfalse,VARREF(YLfloG),T10);
  lit_6 = YPPsym((P)"tab-growth-threshold");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T11 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tab_growth_threshold_2 = YPfab_met(FUNCODEREF(fun_tab_growth_threshold_2),T11,LITREF(lit_6),LITREF(lit_7),sloc(33),YPfalse);
  T13 = VARREF_OR(YgooScolsStabYtab_growth_threshold,YPfalse);
  T14 = fun_tab_growth_threshold_2;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(YgooScolsStabYtab_growth_threshold,T12);
  lit_8 = YPPlist(1,YPPsym((P)"_x"));
  lit_9 = YPflo(FLOINT(0.8));
  T15 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3 = YPfab_met(FUNCODEREF(fun_3),T15,YPfalse,LITREF(lit_8),sloc(33),YPfalse);
  T16 = fun_3;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYtab_growth_threshold),YPfalse,VARREF(YLfloG),T16);
  lit_10 = YPPsym((P)"tab-shrink-threshold");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T17 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tab_shrink_threshold_4 = YPfab_met(FUNCODEREF(fun_tab_shrink_threshold_4),T17,LITREF(lit_10),LITREF(lit_11),sloc(33),YPfalse);
  T19 = VARREF_OR(YgooScolsStabYtab_shrink_threshold,YPfalse);
  T20 = fun_tab_shrink_threshold_4;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YgooScolsStabYtab_shrink_threshold,T18);
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  lit_13 = YPflo(FLOINT(0.5));
  T21 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPfab_met(FUNCODEREF(fun_5),T21,YPfalse,LITREF(lit_12),sloc(33),YPfalse);
  T22 = fun_5;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYtab_shrink_threshold),YPfalse,VARREF(YLfloG),T22);
  lit_14 = YPPsym((P)"<tab-vec>");
  T24 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLseqXG),Ynil);
  T23 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_14),T24);
  VARSET(YgooScolsStabYLtab_vecG,T23);
  lit_15 = YPPsym((P)"%vacated");
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  T25 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pvacated_6 = YPfab_met(FUNCODEREF(fun_Pvacated_6),T25,LITREF(lit_15),LITREF(lit_16),sloc(44),YPfalse);
  T27 = VARREF_OR(YgooScolsStabYPvacated,YPfalse);
  T28 = fun_Pvacated_6;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooScolsStabYPvacated,T26);
  lit_17 = YPPsym((P)"%vacated-setter");
  lit_18 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T29 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pvacated_setter_7 = YPfab_met(FUNCODEREF(fun_Pvacated_setter_7),T29,LITREF(lit_17),LITREF(lit_18),sloc(44),YPfalse);
  T31 = VARREF_OR(YgooScolsStabYPvacated_setter,YPfalse);
  T32 = fun_Pvacated_setter_7;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooScolsStabYPvacated_setter,T30);
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T33 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPfab_met(FUNCODEREF(fun_8),T33,YPfalse,LITREF(lit_19),sloc(44),YPfalse);
  T34 = fun_8;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPvacated),VARREF(YgooScolsStabYPvacated_setter),VARREF(YLintG),T34);
  lit_20 = YPPsym((P)"%primary-modulus");
  lit_21 = YPPlist(1,YPPsym((P)"_x"));
  T35 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pprimary_modulus_9 = YPfab_met(FUNCODEREF(fun_Pprimary_modulus_9),T35,LITREF(lit_20),LITREF(lit_21),sloc(46),YPfalse);
  T37 = VARREF_OR(YgooScolsStabYPprimary_modulus,YPfalse);
  T38 = fun_Pprimary_modulus_9;
  T36 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T37,T38);
  VARSET(YgooScolsStabYPprimary_modulus,T36);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPprimary_modulus),YPfalse,VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_22 = YPPsym((P)"%secondary-modulus");
  lit_23 = YPPlist(1,YPPsym((P)"_x"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Psecondary_modulus_10 = YPfab_met(FUNCODEREF(fun_Psecondary_modulus_10),T39,LITREF(lit_22),LITREF(lit_23),sloc(47),YPfalse);
  T41 = VARREF_OR(YgooScolsStabYPsecondary_modulus,YPfalse);
  T42 = fun_Psecondary_modulus_10;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YgooScolsStabYPsecondary_modulus,T40);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPsecondary_modulus),YPfalse,VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_24 = YPPsym((P)"%n-buckets");
  lit_25 = YPPlist(1,YPPsym((P)"_x"));
  T43 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pn_buckets_11 = YPfab_met(FUNCODEREF(fun_Pn_buckets_11),T43,LITREF(lit_24),LITREF(lit_25),sloc(49),YPfalse);
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
  fun_Pbucket_depth_12 = YPfab_met(FUNCODEREF(fun_Pbucket_depth_12),T0,LITREF(lit_26),LITREF(lit_27),sloc(50),YPfalse);
  T2 = VARREF_OR(YgooScolsStabYPbucket_depth,YPfalse);
  T3 = fun_Pbucket_depth_12;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooScolsStabYPbucket_depth,T1);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPbucket_depth),YPfalse,VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_28 = YPPsym((P)"%data");
  lit_29 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdata_13 = YPfab_met(FUNCODEREF(fun_Pdata_13),T4,LITREF(lit_28),LITREF(lit_29),sloc(52),YPfalse);
  T6 = VARREF_OR(YgooScolsStabYPdata,YPfalse);
  T7 = fun_Pdata_13;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooScolsStabYPdata,T5);
  lit_30 = YPPsym((P)"%data-setter");
  lit_31 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(2,VARREF(YLrepG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdata_setter_14 = YPfab_met(FUNCODEREF(fun_Pdata_setter_14),T8,LITREF(lit_30),LITREF(lit_31),sloc(52),YPfalse);
  T10 = VARREF_OR(YgooScolsStabYPdata_setter,YPfalse);
  T11 = fun_Pdata_setter_14;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooScolsStabYPdata_setter,T9);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPdata),VARREF(YgooScolsStabYPdata_setter),VARREF(YLrepG),VARREF(YPprop_unbound_error));
  lit_32 = YPPsym((P)"%count");
  lit_33 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pcount_15 = YPfab_met(FUNCODEREF(fun_Pcount_15),T12,LITREF(lit_32),LITREF(lit_33),sloc(56),YPfalse);
  T14 = VARREF_OR(YgooScolsStabYPcount,YPfalse);
  T15 = fun_Pcount_15;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooScolsStabYPcount,T13);
  lit_34 = YPPsym((P)"%count-setter");
  lit_35 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pcount_setter_16 = YPfab_met(FUNCODEREF(fun_Pcount_setter_16),T16,LITREF(lit_34),LITREF(lit_35),sloc(56),YPfalse);
  T18 = VARREF_OR(YgooScolsStabYPcount_setter,YPfalse);
  T19 = fun_Pcount_setter_16;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooScolsStabYPcount_setter,T17);
  lit_36 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPfab_met(FUNCODEREF(fun_17),T20,YPfalse,LITREF(lit_36),sloc(56),YPfalse);
  T21 = fun_17;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYPcount),VARREF(YgooScolsStabYPcount_setter),VARREF(YLintG),T21);
  lit_37 = YPPsym((P)"%vector");
  lit_38 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pvector_18 = YPfab_met(FUNCODEREF(fun_Pvector_18),T22,LITREF(lit_37),LITREF(lit_38),sloc(57),YPfalse);
  T24 = VARREF_OR(YgooScolsStabYPvector,YPfalse);
  T25 = fun_Pvector_18;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooScolsStabYPvector,T23);
  lit_39 = YPPsym((P)"%vector-setter");
  lit_40 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pvector_setter_19 = YPfab_met(FUNCODEREF(fun_Pvector_setter_19),T26,LITREF(lit_39),LITREF(lit_40),sloc(57),YPfalse);
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
  YgooScolsStabYfab_tab_vec = YPfab_met(FUNCODEREF(YgooScolsStabYfab_tab_vec),T37,LITREF(lit_47),LITREF(lit_48),sloc(104),YPfalse);
  T38 = YgooScolsStabYfab_tab_vec;
  VARSET(YgooScolsStabYfab_tab_vec,T38);
  lit_49 = YPPsym((P)"@fill!");
  lit_50 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"fill"));
  T39 = YPfab_sig(YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsStabYOfillX = YPfab_met(FUNCODEREF(YgooScolsStabYOfillX),T39,LITREF(lit_49),LITREF(lit_50),sloc(117),YPfalse);
  T40 = YgooScolsStabYOfillX;
  VARSET(YgooScolsStabYOfillX,T40);
  lit_51 = YPPsym((P)"clr!");
  lit_52 = YPPlist(2,YPPsym((P)"vector"),YPPsym((P)"fill-value"));
  T41 = YPfab_sig(YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_clrX_24 = YPfab_met(FUNCODEREF(fun_clrX_24),T41,LITREF(lit_51),LITREF(lit_52),sloc(130),YPfalse);
  T43 = VARREF_OR(YgooScolsStabYclrX,YPfalse);
  T44 = fun_clrX_24;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YgooScolsStabYclrX,T42);
  VARSET(YgooScolsStabYTdebug_tablesQT,YPfalse);
  lit_53 = YPPsym((P)"key-test");
  lit_54 = YPPlist(1,YPPsym((P)"_"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_25 = YPfab_met(FUNCODEREF(fun_key_test_25),T45,LITREF(lit_53),LITREF(lit_54),sloc(140),YPfalse);
  T47 = VARREF_OR(YgooScolsScolYkey_test,YPfalse);
  T48 = fun_key_test_25;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YgooScolsScolYkey_test,T46);
  lit_55 = YPPlist(1,YPPsym((P)"_"));
  T49 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_tab_hash_26 = YPfab_met(FUNCODEREF(fun_tab_hash_26),T49,LITREF(lit_41),LITREF(lit_55),sloc(141),YPfalse);
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
  fun_fab_27 = YPfab_met(FUNCODEREF(fun_fab_27),T53,LITREF(lit_58),LITREF(lit_59),sloc(146),YPfalse);
  T56 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T57 = fun_fab_27;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooScolsScolYfab,T55);
  lit_60 = YPPsym((P)"elt-or");
  lit_61 = YPPlist(3,YPPsym((P)"table"),YPPsym((P)"key"),YPPsym((P)"default"));
  lit_62 = YPsb((P)"The table is totally full this shouldn't happen");
  T58 = YPfab_sig(YPPlist(3,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_28 = YPfab_met(FUNCODEREF(fun_elt_or_28),T58,LITREF(lit_60),LITREF(lit_61),sloc(166),YPfalse);
  T60 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T61 = fun_elt_or_28;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooScolsScolYelt_or,T59);
  lit_63 = YPPsym((P)"elt-setter");
  lit_64 = YPPlist(3,YPPsym((P)"value"),YPPsym((P)"table"),YPPsym((P)"key"));
  lit_65 = YPsb((P)"The table is totally full this shouldn't happen");
  T62 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_29 = YPfab_met(FUNCODEREF(fun_elt_setter_29),T62,LITREF(lit_63),LITREF(lit_64),sloc(195),YPfalse);
  T64 = VARREF_OR(YgooScolsScolxYelt_setter,YPfalse);
  T65 = fun_elt_setter_29;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooScolsScolxYelt_setter,T63);
  lit_66 = YPPsym((P)"del");
  lit_67 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T66 = YPfab_sig(YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_del_30 = YPfab_met(FUNCODEREF(fun_del_30),T66,LITREF(lit_66),LITREF(lit_67),sloc(254),YPfalse);
  T68 = VARREF_OR(YgooScolsScolYdel,YPfalse);
  T69 = fun_del_30;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooScolsScolYdel,T67);
  lit_68 = YPPsym((P)"del!");
  lit_69 = YPPlist(2,YPPsym((P)"table"),YPPsym((P)"key"));
  lit_70 = YPsb((P)"The table is totally full this shouldn't happen");
  T70 = YPfab_sig(YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_delX_31 = YPfab_met(FUNCODEREF(fun_delX_31),T70,LITREF(lit_68),LITREF(lit_69),sloc(257),YPfalse);
  T72 = VARREF_OR(YgooScolsScolxYdelX,YPfalse);
  T73 = fun_delX_31;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooScolsScolxYdelX,T71);
  lit_71 = YPPsym((P)"do-keyed");
  lit_72 = YPPlist(2,YPPsym((P)"function"),YPPsym((P)"table"));
  T74 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_keyed_32 = YPfab_met(FUNCODEREF(fun_do_keyed_32),T74,LITREF(lit_71),LITREF(lit_72),sloc(293),YPfalse);
  T76 = VARREF_OR(YgooScolsScolYdo_keyed,YPfalse);
  T77 = fun_do_keyed_32;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YgooScolsScolYdo_keyed,T75);
  lit_73 = YPPsym((P)"do");
  lit_74 = YPPlist(2,YPPsym((P)"function"),YPPsym((P)"table"));
  T78 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_33 = YPfab_met(FUNCODEREF(fun_do_33),T78,LITREF(lit_73),LITREF(lit_74),sloc(310),YPfalse);
  T80 = VARREF_OR(YgooSmacrosYdo,YPfalse);
  T81 = fun_do_33;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YgooSmacrosYdo,T79);
  lit_75 = YPPsym((P)"zap!");
  lit_76 = YPPlist(1,YPPsym((P)"table"));
  T82 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_zapX_34 = YPfab_met(FUNCODEREF(fun_zapX_34),T82,LITREF(lit_75),LITREF(lit_76),sloc(326),YPfalse);
  T84 = VARREF_OR(YgooScolsScolxYzapX,YPfalse);
  T85 = fun_zapX_34;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YgooScolsScolxYzapX,T83);
  lit_77 = YPPsym((P)"len");
  lit_78 = YPPlist(1,YPPsym((P)"table"));
  T86 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_35 = YPfab_met(FUNCODEREF(fun_len_35),T86,LITREF(lit_77),LITREF(lit_78),sloc(331),YPfalse);
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
  fun_Ovec_36 = YPfab_met(FUNCODEREF(fun_Ovec_36),T92,LITREF(lit_80),LITREF(lit_81),sloc(335),YPfalse);
  T94 = VARREF_OR(YgooScolsStabYOvec,YPfalse);
  T95 = fun_Ovec_36;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YgooScolsStabYOvec,T93);
  lit_82 = YPPsym((P)"@vec-setter");
  lit_83 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T96 = YPfab_sig(YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Ovec_setter_37 = YPfab_met(FUNCODEREF(fun_Ovec_setter_37),T96,LITREF(lit_82),LITREF(lit_83),sloc(335),YPfalse);
  T98 = VARREF_OR(YgooScolsStabYOvec_setter,YPfalse);
  T99 = fun_Ovec_setter_37;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooScolsStabYOvec_setter,T97);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOvec),VARREF(YgooScolsStabYOvec_setter),VARREF(YgooScolsStabYLtab_vecG),VARREF(YPprop_unbound_error));
  lit_84 = YPPsym((P)"@buc");
  lit_85 = YPPlist(1,YPPsym((P)"_x"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Obuc_38 = YPfab_met(FUNCODEREF(fun_Obuc_38),T100,LITREF(lit_84),LITREF(lit_85),sloc(336),YPfalse);
  T102 = VARREF_OR(YgooScolsStabYObuc,YPfalse);
  T103 = fun_Obuc_38;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooScolsStabYObuc,T101);
  lit_86 = YPPsym((P)"@buc-setter");
  lit_87 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T104 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Obuc_setter_39 = YPfab_met(FUNCODEREF(fun_Obuc_setter_39),T104,LITREF(lit_86),LITREF(lit_87),sloc(336),YPfalse);
  T106 = VARREF_OR(YgooScolsStabYObuc_setter,YPfalse);
  T107 = fun_Obuc_setter_39;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooScolsStabYObuc_setter,T105);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYObuc),VARREF(YgooScolsStabYObuc_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_88 = YPPsym((P)"@idx");
  lit_89 = YPPlist(1,YPPsym((P)"_x"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T109 = fun_Oidx_40 = YPfab_met(FUNCODEREF(fun_Oidx_40),T110,LITREF(lit_88),LITREF(lit_89),sloc(337),YPfalse);
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
  fun_Oidx_setter_41 = YPfab_met(FUNCODEREF(fun_Oidx_setter_41),T0,LITREF(lit_90),LITREF(lit_91),sloc(337),YPfalse);
  T2 = VARREF_OR(YgooScolsStabYOidx_setter,YPfalse);
  T3 = fun_Oidx_setter_41;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooScolsStabYOidx_setter,T1);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOidx),VARREF(YgooScolsStabYOidx_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_92 = YPPsym((P)"@fin?");
  lit_93 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_OfinQ_42 = YPfab_met(FUNCODEREF(fun_OfinQ_42),T4,LITREF(lit_92),LITREF(lit_93),sloc(338),YPfalse);
  T6 = VARREF_OR(YgooScolsStabYOfinQ,YPfalse);
  T7 = fun_OfinQ_42;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooScolsStabYOfinQ,T5);
  lit_94 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPfab_met(FUNCODEREF(fun_43),T8,YPfalse,LITREF(lit_94),sloc(338),YPfalse);
  T9 = fun_43;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOfinQ),YPfalse,VARREF(YLlogG),T9);
  T10 = XCALL3(1,VARREF(Ynew),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOfinQ),YPtrue);
  VARSET(YgooScolsStabYDfin_enum,T10);
  lit_95 = YPPsym((P)"enum");
  lit_96 = YPPlist(1,YPPsym((P)"table"));
  T11 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsStabYLtab_enumG),Ynil);
  fun_enum_44 = YPfab_met(FUNCODEREF(fun_enum_44),T11,LITREF(lit_95),LITREF(lit_96),sloc(341),YPfalse);
  T13 = VARREF_OR(YgooScolsScolYenum,YPfalse);
  T14 = fun_enum_44;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(YgooScolsScolYenum,T12);
  lit_97 = YPPsym((P)"nxt");
  lit_98 = YPPlist(1,YPPsym((P)"e"));
  T15 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsStabYLtab_enumG),Ynil);
  fun_nxt_45 = YPfab_met(FUNCODEREF(fun_nxt_45),T15,LITREF(lit_97),LITREF(lit_98),sloc(359),YPfalse);
  T17 = VARREF_OR(YgooScolsScolYnxt,YPfalse);
  T18 = fun_nxt_45;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YgooScolsScolYnxt,T16);
  lit_99 = YPPsym((P)"fin?");
  lit_100 = YPPlist(1,YPPsym((P)"e"));
  T19 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_46 = YPfab_met(FUNCODEREF(fun_finQ_46),T19,LITREF(lit_99),LITREF(lit_100),sloc(377),YPfalse);
  T21 = VARREF_OR(YgooScolsScolYfinQ,YPfalse);
  T22 = fun_finQ_46;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YgooScolsScolYfinQ,T20);
  lit_101 = YPPsym((P)"now-key");
  lit_102 = YPPlist(1,YPPsym((P)"e"));
  T23 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_key_47 = YPfab_met(FUNCODEREF(fun_now_key_47),T23,LITREF(lit_101),LITREF(lit_102),sloc(380),YPfalse);
  T25 = VARREF_OR(YgooScolsScolYnow_key,YPfalse);
  T26 = fun_now_key_47;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YgooScolsScolYnow_key,T24);
  lit_103 = YPPsym((P)"now");
  lit_104 = YPPlist(1,YPPsym((P)"e"));
  T27 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_48 = YPfab_met(FUNCODEREF(fun_now_48),T27,LITREF(lit_103),LITREF(lit_104),sloc(385),YPfalse);
  T29 = VARREF_OR(YgooScolsScolYnow,YPfalse);
  T30 = fun_now_48;
  T28 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T29,T30);
  VARSET(YgooScolsScolYnow,T28);
  lit_105 = YPPsym((P)"now-setter");
  lit_106 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"e"));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_49 = YPfab_met(FUNCODEREF(fun_now_setter_49),T31,LITREF(lit_105),LITREF(lit_106),sloc(390),YPfalse);
  T33 = VARREF_OR(YgooScolsScolYnow_setter,YPfalse);
  T34 = fun_now_setter_49;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YgooScolsScolYnow_setter,T32);
  lit_107 = YPPsym((P)"tab-keys");
  lit_108 = YPPlist(1,YPPsym((P)"table"));
  lit_109 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  T36 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_50 = YPfab_met(FUNCODEREF(fun_50),T36,YPfalse,LITREF(lit_109),sloc(399),YPfalse);
  T35 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_tab_keys_51 = YPfab_met(FUNCODEREF(fun_tab_keys_51),T35,LITREF(lit_107),LITREF(lit_108),sloc(398),YPfalse);
  T38 = VARREF_OR(YgooScolsStabYtab_keys,YPfalse);
  T39 = fun_tab_keys_51;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooScolsStabYtab_keys,T37);
  lit_110 = YPPsym((P)"grow-table");
  lit_111 = YPPlist(1,YPPsym((P)"table"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_grow_table_52 = YPfab_met(FUNCODEREF(fun_grow_table_52),T40,LITREF(lit_110),LITREF(lit_111),sloc(401),YPfalse);
  T42 = VARREF_OR(YgooScolsStabYgrow_table,YPfalse);
  T43 = fun_grow_table_52;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooScolsStabYgrow_table,T41);
  lit_112 = YPPsym((P)"rehash-table");
  lit_113 = YPPlist(1,YPPsym((P)"table"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_rehash_table_53 = YPfab_met(FUNCODEREF(fun_rehash_table_53),T44,LITREF(lit_112),LITREF(lit_113),sloc(422),YPfalse);
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
  fun_54 = YPfab_met(FUNCODEREF(fun_54),T51,YPfalse,LITREF(lit_117),sloc(447),YPfalse);
  T50 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPfab_met(FUNCODEREF(fun_55),T50,YPfalse,LITREF(lit_116),sloc(438),YPfalse);
  T49 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),T49,Ynil);
  YgooScolsStabYchoose_table_geometry = YPfab_met(FUNCODEREF(YgooScolsStabYchoose_table_geometry),T48,LITREF(lit_114),LITREF(lit_115),sloc(435),YPfalse);
  T52 = YgooScolsStabYchoose_table_geometry;
  VARSET(YgooScolsStabYchoose_table_geometry,T52);
  lit_119 = YPPsym((P)"copy-to-new-vector");
  lit_120 = YPPlist(2,YPPsym((P)"table"),YPPsym((P)"new-vector"));
  lit_121 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  lit_122 = YPsb((P)"The table is totally full this shouldn't happen");
  T54 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_57 = YPfab_met(FUNCODEREF(fun_57),T54,YPfalse,LITREF(lit_121),sloc(455),YPfalse);
  T53 = YPfab_sig(YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_copy_to_new_vector_58 = YPfab_met(FUNCODEREF(fun_copy_to_new_vector_58),T53,LITREF(lit_119),LITREF(lit_120),sloc(453),YPfalse);
  T56 = VARREF_OR(YgooScolsStabYcopy_to_new_vector,YPfalse);
  T57 = fun_copy_to_new_vector_58;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooScolsStabYcopy_to_new_vector,T55);
  lit_123 = YPPlist(1,YPPsym((P)"x"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_59 = YPfab_met(FUNCODEREF(fun_id_hash_59),T58,LITREF(lit_43),LITREF(lit_123),sloc(492),YPfalse);
  T60 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T61 = fun_id_hash_59;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooScolsStabYid_hash,T59);
  lit_124 = YPPlist(1,YPPsym((P)"x"));
  T62 = YPfab_sig(YPPlist(1,VARREF(YLlogG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_60 = YPfab_met(FUNCODEREF(fun_id_hash_60),T62,LITREF(lit_43),LITREF(lit_124),sloc(494),YPfalse);
  T64 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T65 = fun_id_hash_60;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooScolsStabYid_hash,T63);
  lit_125 = YPPsym((P)"rot");
  lit_126 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T66 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  YgooScolsStabYrot = YPfab_met(FUNCODEREF(YgooScolsStabYrot),T66,LITREF(lit_125),LITREF(lit_126),sloc(497),YPfalse);
  T67 = YgooScolsStabYrot;
  VARSET(YgooScolsStabYrot,T67);
  lit_127 = YPPlist(1,YPPsym((P)"x"));
  T68 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_62 = YPfab_met(FUNCODEREF(fun_id_hash_62),T68,LITREF(lit_43),LITREF(lit_127),sloc(500),YPfalse);
  T70 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T71 = fun_id_hash_62;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooScolsStabYid_hash,T69);
  lit_128 = YPPlist(1,YPPsym((P)"x"));
  T72 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_63 = YPfab_met(FUNCODEREF(fun_id_hash_63),T72,LITREF(lit_43),LITREF(lit_128),sloc(504),YPfalse);
  T74 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T75 = fun_id_hash_63;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooScolsStabYid_hash,T73);
  lit_129 = YPPlist(1,YPPsym((P)"x"));
  T76 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_64 = YPfab_met(FUNCODEREF(fun_id_hash_64),T76,LITREF(lit_43),LITREF(lit_129),sloc(507),YPfalse);
  T78 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T79 = fun_id_hash_64;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooScolsStabYid_hash,T77);
  lit_130 = YPPlist(1,YPPsym((P)"x"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YLtupG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_65 = YPfab_met(FUNCODEREF(fun_id_hash_65),T80,LITREF(lit_43),LITREF(lit_130),sloc(510),YPfalse);
  T82 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T83 = fun_id_hash_65;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooScolsStabYid_hash,T81);
  lit_131 = YPPsym((P)"key-type");
  lit_132 = YPPlist(1,YPPsym((P)"x"));
  T84 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_66 = YPfab_met(FUNCODEREF(fun_key_type_66),T84,LITREF(lit_131),LITREF(lit_132),sloc(520),YPfalse);
  T86 = VARREF_OR(YgooScolsScolYkey_type,YPfalse);
  T87 = fun_key_type_66;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooScolsScolYkey_type,T85);
  lit_133 = YPPsym((P)"elt-type");
  lit_134 = YPPlist(1,YPPsym((P)"x"));
  T88 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_67 = YPfab_met(FUNCODEREF(fun_elt_type_67),T88,LITREF(lit_133),LITREF(lit_134),sloc(521),YPfalse);
  T90 = VARREF_OR(YgooScolsScolYelt_type,YPfalse);
  T91 = fun_elt_type_67;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooScolsScolYelt_type,T89);
  lit_135 = YPPsym((P)"case-insensitive-string-hash");
  lit_136 = YPPlist(1,YPPsym((P)"x"));
  T92 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooScolsStabYcase_insensitive_string_hash = YPfab_met(FUNCODEREF(YgooScolsStabYcase_insensitive_string_hash),T92,LITREF(lit_135),LITREF(lit_136),sloc(523),YPfalse);
  T93 = YgooScolsStabYcase_insensitive_string_hash;
  VARSET(YgooScolsStabYcase_insensitive_string_hash,T93);
  lit_137 = YPPsym((P)"case-insensitive-string-equal");
  lit_138 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T94 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooScolsStabYcase_insensitive_string_equal = YPfab_met(FUNCODEREF(YgooScolsStabYcase_insensitive_string_equal),T94,LITREF(lit_137),LITREF(lit_138),sloc(531),YPfalse);
  T95 = YgooScolsStabYcase_insensitive_string_equal;
  VARSET(YgooScolsStabYcase_insensitive_string_equal,T95);
  lit_139 = YPPlist(1,YPPsym((P)"_"));
  T96 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_70 = YPfab_met(FUNCODEREF(fun_key_test_70),T96,LITREF(lit_53),LITREF(lit_139),sloc(541),YPfalse);
  T98 = VARREF_OR(YgooScolsScolYkey_test,YPfalse);
  T99 = fun_key_test_70;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooScolsScolYkey_test,T97);
  lit_140 = YPPlist(1,YPPsym((P)"_"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_tab_hash_71 = YPfab_met(FUNCODEREF(fun_tab_hash_71),T100,LITREF(lit_41),LITREF(lit_140),sloc(542),YPfalse);
  T102 = VARREF_OR(YgooScolsStabYtab_hash,YPfalse);
  T103 = fun_tab_hash_71;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooScolsStabYtab_hash,T101);
  lit_141 = YPPsym((P)"add!");
  lit_142 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T104 = YPfab_sig(YPPlist(2,VARREF(YgooScolsStabYLsetG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsStabYLsetG),Ynil);
  fun_addX_72 = YPfab_met(FUNCODEREF(fun_addX_72),T104,LITREF(lit_141),LITREF(lit_142),sloc(548),YPfalse);
  T106 = VARREF_OR(YgooScolsScolxYaddX,YPfalse);
  T107 = fun_addX_72;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooScolsScolxYaddX,T105);
  lit_143 = YPPsym((P)"mem?");
  lit_144 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T108 = YPfab_sig(YPPlist(2,VARREF(YgooScolsStabYLsetG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_memQ_73 = YPfab_met(FUNCODEREF(fun_memQ_73),T108,LITREF(lit_143),LITREF(lit_144),sloc(552),YPfalse);
  T110 = VARREF_OR(YgooScolsScolYmemQ,YPfalse);
  T111 = fun_memQ_73;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YgooScolsScolYmemQ,T109);
  lit_145 = YPPsym((P)"elts");
  lit_146 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"keys"));
  lit_147 = YPPlist(1,YPPsym((P)"k"));
  T116 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T115 = fun_74 = YPfab_met(FUNCODEREF(fun_74),T116,YPfalse,LITREF(lit_147),sloc(557),YPfalse);
  T114 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T113 = fun_elts_75 = YPfab_met(FUNCODEREF(fun_elts_75),T114,LITREF(lit_145),LITREF(lit_146),sloc(555),YPfalse);
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
  {"@add-new", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"as-log", &module_info_gooSlog, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"exp", &module_info_gooSmath, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"packing-as", &module_info_gooSpacker, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"lst*", &module_info_gooScolsSlst, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"rehash-table", CVAR, &YgooScolsStabYrehash_table},
  {"case-insensitive-string-equal", CVAR, &YgooScolsStabYcase_insensitive_string_equal},
  {"%vector-setter", CVAR, &YgooScolsStabYPvector_setter},
  {"%n-buckets", CVAR, &YgooScolsStabYPn_buckets},
  {"case-insensitive-string-hash", CVAR, &YgooScolsStabYcase_insensitive_string_hash},
  {"rot", CVAR, &YgooScolsStabYrot},
  {"@fin?", CVAR, &YgooScolsStabYOfinQ},
  {"grow-table", CVAR, &YgooScolsStabYgrow_table},
  {"choose-table-geometry", CVAR, &YgooScolsStabYchoose_table_geometry},
  {"fab-tab-vec", CVAR, &YgooScolsStabYfab_tab_vec},
  {"clr!", CVAR, &YgooScolsStabYclrX},
  {"@vec-setter", CVAR, &YgooScolsStabYOvec_setter},
  {"*twin-primes*", CVAR, &YgooScolsStabYTtwin_primesT},
  {"---main-0---", PVAR, NULL},
  {"tab-shrink-threshold", CVAR, &YgooScolsStabYtab_shrink_threshold},
  {"@buc-setter", CVAR, &YgooScolsStabYObuc_setter},
  {"%vacated-setter", CVAR, &YgooScolsStabYPvacated_setter},
  {"%vector", CVAR, &YgooScolsStabYPvector},
  {"%primary-modulus", CVAR, &YgooScolsStabYPprimary_modulus},
  {"$vacated-cell-marker", CVAR, &YgooScolsStabYDvacated_cell_marker},
  {"@buc", CVAR, &YgooScolsStabYObuc},
  {"---main-1---", PVAR, NULL},
  {"%bucket-depth", CVAR, &YgooScolsStabYPbucket_depth},
  {"@velt-setter", PVAR, NULL},
  {"%count-setter", CVAR, &YgooScolsStabYPcount_setter},
  {"<tab-enum>", CVAR, &YgooScolsStabYLtab_enumG},
  {"tab-keys", CVAR, &YgooScolsStabYtab_keys},
  {"@idx-setter", CVAR, &YgooScolsStabYOidx_setter},
  {"%data-setter", CVAR, &YgooScolsStabYPdata_setter},
  {"*debug-tables?*", CVAR, &YgooScolsStabYTdebug_tablesQT},
  {"<str-tab>", CVAR, &YgooScolsStabYLstr_tabG},
  {"%count", CVAR, &YgooScolsStabYPcount},
  {"@velt", PVAR, NULL},
  {"copy-to-new-vector", CVAR, &YgooScolsStabYcopy_to_new_vector},
  {"@idx", CVAR, &YgooScolsStabYOidx},
  {"%data", CVAR, &YgooScolsStabYPdata},
  {"id-hash", CVAR, &YgooScolsStabYid_hash},
  {"$nul-cell-marker", CVAR, &YgooScolsStabYDnul_cell_marker},
  {"%secondary-modulus", CVAR, &YgooScolsStabYPsecondary_modulus},
  {"<set>", CVAR, &YgooScolsStabYLsetG},
  {"tab-growth-factor", CVAR, &YgooScolsStabYtab_growth_factor},
  {"tab-hash", CVAR, &YgooScolsStabYtab_hash},
  {"$fin-enum", CVAR, &YgooScolsStabYDfin_enum},
  {"---main-2---", PVAR, NULL},
  {"@fill!", CVAR, &YgooScolsStabYOfillX},
  {"tab-growth-threshold", CVAR, &YgooScolsStabYtab_growth_threshold},
  {"<tab-vec>", CVAR, &YgooScolsStabYLtab_vecG},
  {"@vec", CVAR, &YgooScolsStabYOvec},
  {"%vacated", CVAR, &YgooScolsStabYPvacated},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"case-insensitive-string-equal", NULL},
  {"tab-shrink-threshold", NULL},
  {"case-insensitive-string-hash", NULL},
  {"<str-tab>", NULL},
  {"id-hash", NULL},
  {"<set>", NULL},
  {"<tab>", NULL},
  {"tab-growth-factor", NULL},
  {"tab-hash", NULL},
  {"tab-growth-threshold", NULL},
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
