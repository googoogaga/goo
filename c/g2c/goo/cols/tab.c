/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/tab");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/tab */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
DEF(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
DEF(YgooScolsStabYPvector,"goo/cols/tab","%vector");
DEF(YgooScolsStabYPcount,"goo/cols/tab","%count");
DEF(YgooScolsStabYOidx,"goo/cols/tab","@idx");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
DEF(YgooScolsStabYPdata,"goo/cols/tab","%data");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(YgooScolsStabYPsecondary_modulus,"goo/cols/tab","%secondary-modulus");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
DEF(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
DEF(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YgooScolsStabYclrX,"goo/cols/tab","clr!");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
DEF(YgooScolsStabYTtwin_primesT,"goo/cols/tab","*twin-primes*");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooScolsStabYOvec_setter,"goo/cols/tab","@vec-setter");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YgooScolsStabYPvacated_setter,"goo/cols/tab","%vacated-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
DEF(YgooScolsStabYchoose_table_geometry,"goo/cols/tab","choose-table-geometry");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YgooScolsStabYOfillX,"goo/cols/tab","@fill!");
DEF(YgooScolsStabYOfinQ,"goo/cols/tab","@fin?");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
DEF(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ytail,"goo/boot","tail");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Ynil,"goo/boot","nil");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
DEF(YgooScolsStabYLtab_vecG,"goo/cols/tab","<tab-vec>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YgooScolsStabYPvacated,"goo/cols/tab","%vacated");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
DEF(YgooScolsStabYOvec,"goo/cols/tab","@vec");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSmathYB,"goo/math","&");
DEF(YgooScolsStabYDvacated_cell_marker,"goo/cols/tab","$vacated-cell-marker");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooScolsStabYrehash_table,"goo/cols/tab","rehash-table");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooScolsStabYPn_buckets,"goo/cols/tab","%n-buckets");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YgooScolsStabYPvector_setter,"goo/cols/tab","%vector-setter");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYN,"goo/math","~");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YgooScolsStabYDempty_cell_marker,"goo/cols/tab","$empty-cell-marker");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YgooScolsStabYrot,"goo/cols/tab","rot");
DEF(YgooScolsStabYDfin_enum,"goo/cols/tab","$fin-enum");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLintG,"goo/boot","<int>");
DEF(YgooScolsStabYgrow_table,"goo/cols/tab","grow-table");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YgooScolsStabYObuc_setter,"goo/cols/tab","@buc-setter");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YgooScolsStabYPprimary_modulus,"goo/cols/tab","%primary-modulus");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSclassYclone,"goo/class","clone");
DEF(YgooScolsStabYfab_tab_vec,"goo/cols/tab","fab-tab-vec");
DEF(YgooScolsStabYcopy_to_new_vector,"goo/cols/tab","copy-to-new-vector");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DEF(YgooScolsStabYObuc,"goo/cols/tab","@buc");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YgooScolsStabYtab_keys,"goo/cols/tab","tab-keys");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYS,"goo/math","/");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
DEF(YgooScolsStabYPbucket_depth,"goo/cols/tab","%bucket-depth");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlogG,"goo/boot","<log>");
DEF(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSclassYobject_parents,"goo/class","object-parents");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
DEF(YgooScolsStabYTdebug_tablesQT,"goo/cols/tab","*debug-tables?*");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YgooScolsStabYLtab_enumG,"goo/cols/tab","<tab-enum>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YOnew,"goo/boot","@new");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
DEF(YgooScolsStabYPcount_setter,"goo/cols/tab","%count-setter");
DEF(YgooScolsStabYOidx_setter,"goo/cols/tab","@idx-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YgooScolsStabYPdata_setter,"goo/cols/tab","%data-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYT,"goo/math","*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_45);
DEFLIT(lit_104);
DEFLIT(lit_125);
DEFLIT(lit_143);
DEFLIT(lit_135);
DEFLIT(lit_83);
DEFLIT(lit_28);
DEFLIT(lit_23);
DEFLIT(lit_52);
DEFLIT(lit_22);
DEFLIT(lit_42);
DEFLIT(lit_139);
DEFLIT(lit_118);
DEFLIT(lit_94);
DEFLIT(lit_140);
DEFLIT(lit_100);
DEFLIT(lit_27);
DEFLIT(lit_69);
DEFLIT(lit_11);
DEFLIT(lit_137);
DEFLIT(lit_34);
DEFLIT(lit_73);
DEFLIT(lit_51);
DEFLIT(lit_55);
DEFLIT(lit_50);
DEFLIT(lit_89);
DEFLIT(lit_2);
DEFLIT(lit_91);
DEFLIT(lit_102);
DEFLIT(lit_117);
DEFLIT(lit_147);
DEFLIT(lit_121);
DEFLIT(lit_128);
DEFLIT(lit_111);
DEFLIT(lit_93);
DEFLIT(lit_17);
DEFLIT(lit_130);
DEFLIT(lit_18);
DEFLIT(lit_72);
DEFLIT(lit_110);
DEFLIT(lit_116);
DEFLIT(lit_30);
DEFLIT(lit_54);
DEFLIT(lit_16);
DEFLIT(lit_108);
DEFLIT(lit_80);
DEFLIT(lit_56);
DEFLIT(lit_98);
DEFLIT(lit_0);
DEFLIT(lit_129);
DEFLIT(lit_26);
DEFLIT(lit_24);
DEFLIT(lit_15);
DEFLIT(lit_10);
DEFLIT(lit_109);
DEFLIT(lit_74);
DEFLIT(lit_75);
DEFLIT(lit_96);
DEFLIT(lit_70);
DEFLIT(lit_5);
DEFLIT(lit_87);
DEFLIT(lit_119);
DEFLIT(lit_146);
DEFLIT(lit_145);
DEFLIT(lit_142);
DEFLIT(lit_120);
DEFLIT(lit_81);
DEFLIT(lit_13);
DEFLIT(lit_35);
DEFLIT(lit_134);
DEFLIT(lit_123);
DEFLIT(lit_113);
DEFLIT(lit_112);
DEFLIT(lit_6);
DEFLIT(lit_124);
DEFLIT(lit_133);
DEFLIT(lit_31);
DEFLIT(lit_71);
DEFLIT(lit_20);
DEFLIT(lit_60);
DEFLIT(lit_126);
DEFLIT(lit_78);
DEFLIT(lit_95);
DEFLIT(lit_47);
DEFLIT(lit_97);
DEFLIT(lit_82);
DEFLIT(lit_58);
DEFLIT(lit_4);
DEFLIT(lit_136);
DEFLIT(lit_64);
DEFLIT(lit_132);
DEFLIT(lit_40);
DEFLIT(lit_63);
DEFLIT(lit_62);
DEFLIT(lit_37);
DEFLIT(lit_103);
DEFLIT(lit_49);
DEFLIT(lit_3);
DEFLIT(lit_65);
DEFLIT(lit_144);
DEFLIT(lit_114);
DEFLIT(lit_14);
DEFLIT(lit_61);
DEFLIT(lit_105);
DEFLIT(lit_53);
DEFLIT(lit_101);
DEFLIT(lit_43);
DEFLIT(lit_115);
DEFLIT(lit_7);
DEFLIT(lit_48);
DEFLIT(lit_44);
DEFLIT(lit_19);
DEFLIT(lit_29);
DEFLIT(lit_8);
DEFLIT(lit_38);
DEFLIT(lit_33);
DEFLIT(lit_57);
DEFLIT(lit_68);
DEFLIT(lit_12);
DEFLIT(lit_84);
DEFLIT(lit_138);
DEFLIT(lit_86);
DEFLIT(lit_141);
DEFLIT(lit_106);
DEFLIT(lit_88);
DEFLIT(lit_9);
DEFLIT(lit_90);
DEFLIT(lit_66);
DEFLIT(lit_1);
DEFLIT(lit_39);
DEFLIT(lit_92);
DEFLIT(lit_85);
DEFLIT(lit_25);
DEFLIT(lit_79);
DEFLIT(lit_46);
DEFLIT(lit_99);
DEFLIT(lit_59);
DEFLIT(lit_32);
DEFLIT(lit_107);
DEFLIT(lit_76);
DEFLIT(lit_77);
DEFLIT(lit_122);
DEFLIT(lit_127);
DEFLIT(lit_21);
DEFLIT(lit_131);
DEFLIT(lit_67);
DEFLIT(lit_41);
DEFLIT(lit_36);

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

FUNCODEDEF(fun_tab_growth_factor_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYtab_growth_factor));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_1) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_5));
}

FUNCODEDEF(fun_tab_growth_threshold_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYtab_growth_threshold));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_3) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_9));
}

FUNCODEDEF(fun_tab_shrink_threshold_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYtab_shrink_threshold));
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

FUNCODEDEF(fun_Pvacated_6) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYPvacated));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pvacated_setter_7) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPvacated));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_Pprimary_modulus_9) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYPprimary_modulus));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Psecondary_modulus_10) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYPsecondary_modulus));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pn_buckets_11) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYPn_buckets));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pbucket_depth_12) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYPbucket_depth));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdata_13) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYPdata));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdata_setter_14) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPdata));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pcount_15) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYPcount));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pcount_setter_16) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYPcount));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_Pvector_18) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYPvector));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pvector_setter_19) {
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
  P vF8486;
  P T0,T1;
LINK_STACK();
  ARG(size_, 0);
  ARG(fill_value_, 1);
  ARG(n_buckets_, 2);
  ARG(bucket_depth_, 3);
  ARG(primary_modulus_, 4);
  ARG(secondary_modulus_, 5);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPn_buckets),n_buckets_,VARREF(YgooScolsStabYPbucket_depth),bucket_depth_,VARREF(YgooScolsStabYPprimary_modulus),primary_modulus_,VARREF(YgooScolsStabYPsecondary_modulus),secondary_modulus_);
  vF8486 = T1;
  T0 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),size_,fill_value_);
  CALL2(1,VARREF(YgooScolsStabYPdata_setter),T0,vF8486);
UNLINK_STACK();
  RET(vF8486);
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
  P xF8488;
  P xF8487;
  P T0,T1,T2;
DEFCREGS();
  T1 = XCALL1(1,VARREF(YgooScolsStabYPdata),vector_);
  xF8487 = index_;
  xF8488 = xF8487;
  T2 = (P)YPiGG(xF8488,(P)2);
  T0 = (P)YPrelt(T1,T2);
  return T0;
}

P YgooScolsStabYOvelt_setter(P new_value_,P vector_,P index_) {
  P xF8490;
  P xF8489;
  P T0,T1,T2;
DEFCREGS();
  T1 = XCALL1(1,VARREF(YgooScolsStabYPdata),vector_);
  xF8489 = index_;
  xF8490 = xF8489;
  T2 = (P)YPiGG(xF8490,(P)2);
  T0 = (P)YPrelt_setter(new_value_,T1,T2);
  return T0;
}

FUNCODEDEF(fun_clrX_24) {
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

FUNCODEDEF(fun_key_test_25) {
  P U_;
LINK_STACK();
  ARG(U_, 0);
UNLINK_STACK();
  RET(VARREF(YgooSmacrosYEE));
}

FUNCODEDEF(fun_tab_hash_26) {
  P U_;
LINK_STACK();
  ARG(U_, 0);
UNLINK_STACK();
  RET(VARREF(YgooScolsStabYid_hash));
}

FUNCODEDEF(fun_fab_27) {
  P type_,size_;
  P tableF8494;
  P bucket_depthF8493;
  P n_bucketsF8492;
  P tup61F8491;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(type_, 0);
  ARG(size_, 1);
  T7 = CALL1(1,VARREF(YgooScolsStabYchoose_table_geometry),size_);
  tup61F8491 = T7;
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),tup61F8491,YPint((P)0));
  n_bucketsF8492 = T6;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup61F8491,YPint((P)1));
  bucket_depthF8493 = T5;
  T4 = CALL1(1,VARREF(Ynew),type_);
  tableF8494 = T4;
  T2 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF8493,YPint((P)2));
  T1 = CALL2(1,VARREF(YgooSmathYT),n_bucketsF8492,T2);
  T3 = CALL2(1,VARREF(YgooSmathY_),n_bucketsF8492,YPint((P)2));
  T0 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T1,VARREF(YgooScolsStabYDempty_cell_marker),n_bucketsF8492,bucket_depthF8493,n_bucketsF8492,T3);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),T0,tableF8494);
UNLINK_STACK();
  RET(tableF8494);
}

FUNCODEDEF(fun_elt_or_28) {
  P table_,key_,default_;
  P this_keyF8507;
  P raw_indexF8506;
  P iF8505;
  P indexF8504;
  P probesF8503;
  P bucket_indexF8502;
  P bucket_offsetF8501;
  P bucket_indexF8500;
  P hashF8499;
  P bucket_depthF8498;
  P n_bucketsF8497;
  P vectorF8496;
  P test_functionF8495;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(table_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
  T31 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF8495 = T31;
  T30 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF8496 = T30;
  T29 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF8496);
  n_bucketsF8497 = T29;
  T28 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF8496);
  bucket_depthF8498 = T28;
  T27 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T26 = CALL1(1,T27,key_);
  check_type(T26,VARREF(YLintG));
  hashF8499 = T26;
  T25 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF8496);
  T24 = CALL2(1,VARREF(YgooSmathYmod),hashF8499,T25);
  bucket_indexF8500 = T24;
  T23 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF8496);
  T22 = CALL2(1,VARREF(YgooSmathYmod),hashF8499,T23);
  T21 = CALL2(1,VARREF(YgooSmathYA),T22,YPint((P)1));
  bucket_offsetF8501 = T21;
  bucket_indexF8502 = bucket_indexF8500;
  probesF8503 = YPint((P)0);
  LOOP_379: {
    P a379_0,a379_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),probesF8503,n_bucketsF8497);
    if (T1 != YPfalse) {
      T19 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF8498,YPint((P)2));
      T18 = CALL2(1,VARREF(YgooSmathYT),bucket_indexF8502,T19);
      indexF8504 = T18;
      iF8505 = YPint((P)0);
      raw_indexF8506 = indexF8504;
      LOOP_380: {
        P a380_0,a380_1;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF8505,bucket_depthF8498);
        if (T3 != YPfalse) {
          T14 = (P)YgooScolsStabYOvelt(vectorF8496,raw_indexF8506);
          this_keyF8507 = T14;
          T5 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF8507,VARREF(YgooScolsStabYDempty_cell_marker));
          if (T5 != YPfalse) {
            T4 = default_;
          } else {
            T7 = CALL2(0,test_functionF8495,key_,this_keyF8507);
            if (T7 != YPfalse) {
              T9 = CALL2(1,VARREF(YgooSmathYA),raw_indexF8506,bucket_depthF8498);
              T8 = (P)YgooScolsStabYOvelt(vectorF8496,T9);
              T6 = T8;
            } else {
              if (YPtrue != YPfalse) {
                T12 = CALL2(1,VARREF(YgooSmathYA),iF8505,YPint((P)1));
                T13 = CALL2(1,VARREF(YgooSmathYA),raw_indexF8506,YPint((P)1));
                a380_0 = T12;
                a380_1 = T13;
                iF8505 = a380_0;
                raw_indexF8506 = a380_1;
                goto LOOP_380;
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
          T16 = CALL3(1,VARREF(YgooSmathYmod_),bucket_indexF8502,bucket_offsetF8501,n_bucketsF8497);
          T17 = CALL2(1,VARREF(YgooSmathYA),probesF8503,YPint((P)1));
          a379_0 = T16;
          a379_1 = T17;
          bucket_indexF8502 = a379_0;
          probesF8503 = a379_1;
          goto LOOP_379;
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

FUNCODEDEF(fun_elt_setter_29) {
  P value_,table_,key_;
  P tmpF8525;
  P x_2266F8524;
  P indexF8523;
  P x_2267F8522;
  P this_keyF8521;
  P raw_indexF8520;
  P iF8519;
  P vacancy_indexF8518;
  P indexF8517;
  P probesF8516;
  P bucket_indexF8515;
  P bucket_offsetF8514;
  P bucket_indexF8513;
  P hashF8512;
  P n_bucketsF8511;
  P bucket_depthF8510;
  P test_functionF8509;
  P vectorF8508;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82;
LINK_STACK();
  ARG(value_, 0);
  ARG(table_, 1);
  ARG(key_, 2);
  T82 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF8508 = T82;
  T2 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
  T6 = vectorF8508;
  T5 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T6);
  T8 = vectorF8508;
  T7 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T8);
  T4 = CALL2(1,VARREF(YgooSmathYT),T5,T7);
  T9 = CALL1(1,VARREF(YgooScolsStabYtab_growth_threshold),table_);
  T3 = CALL2(1,VARREF(YgooSmathYT),T4,T9);
  T1 = CALL2(1,VARREF(YgooSmagYGE),T2,T3);
  if (T1 != YPfalse) {
    T12 = CALL1(1,VARREF(YgooScolsStabYgrow_table),table_);
    T11 = CALL1(1,VARREF(YgooScolsStabYPvector),T12);
    T10 = vectorF8508 = T11;
  } else {
    T16 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
    T18 = vectorF8508;
    T17 = CALL1(1,VARREF(YgooScolsStabYPvacated),T18);
    T15 = CALL2(1,VARREF(YgooSmathYA),T16,T17);
    T22 = vectorF8508;
    T21 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T22);
    T24 = vectorF8508;
    T23 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T24);
    T20 = CALL2(1,VARREF(YgooSmathYT),T21,T23);
    T25 = CALL1(1,VARREF(YgooScolsStabYtab_growth_threshold),table_);
    T19 = CALL2(1,VARREF(YgooSmathYT),T20,T25);
    T14 = CALL2(1,VARREF(YgooSmagYG),T15,T19);
    if (T14 != YPfalse) {
      T28 = CALL1(1,VARREF(YgooScolsStabYrehash_table),table_);
      T27 = CALL1(1,VARREF(YgooScolsStabYPvector),T28);
      T26 = vectorF8508 = T27;
      T13 = T26;
    } else {
      T13 = YPfalse;
    }
  }
  T81 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF8509 = T81;
  T80 = vectorF8508;
  T79 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),T80);
  bucket_depthF8510 = T79;
  T78 = vectorF8508;
  T77 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),T78);
  n_bucketsF8511 = T77;
  T76 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T75 = CALL1(1,T76,key_);
  check_type(T75,VARREF(YLintG));
  hashF8512 = T75;
  T74 = vectorF8508;
  T73 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),T74);
  T72 = CALL2(1,VARREF(YgooSmathYmod),hashF8512,T73);
  bucket_indexF8513 = T72;
  T71 = vectorF8508;
  T70 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),T71);
  T69 = CALL2(1,VARREF(YgooSmathYmod),hashF8512,T70);
  T68 = CALL2(1,VARREF(YgooSmathYA),T69,YPint((P)1));
  bucket_offsetF8514 = T68;
  bucket_indexF8515 = bucket_indexF8513;
  check_type(YPint((P)0),VARREF(YLintG));
  probesF8516 = YPint((P)0);
  LOOP_381: {
    P a381_0,a381_1;
    T30 = CALL2(1,VARREF(YgooSmagYL),probesF8516,n_bucketsF8511);
    if (T30 != YPfalse) {
      T66 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF8510,YPint((P)2));
      T65 = CALL2(1,VARREF(YgooSmathYT),bucket_indexF8515,T66);
      indexF8517 = T65;
      vacancy_indexF8518 = YPfalse;
      check_type(YPint((P)0),VARREF(YLintG));
      iF8519 = YPint((P)0);
      check_type(indexF8517,VARREF(YLintG));
      raw_indexF8520 = indexF8517;
      LOOP_382: {
        P a382_0,a382_1,a382_2;
        T32 = CALL2(1,VARREF(YgooSmagYL),iF8519,bucket_depthF8510);
        if (T32 != YPfalse) {
          T61 = vectorF8508;
          T60 = (P)YgooScolsStabYOvelt(T61,raw_indexF8520);
          this_keyF8521 = T60;
          T34 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF8521,VARREF(YgooScolsStabYDempty_cell_marker));
          if (T34 != YPfalse) {
            if (vacancy_indexF8518 != YPfalse) {
              T45 = vectorF8508;
              x_2267F8522 = T45;
              T44 = CALL1(1,VARREF(YgooScolsStabYPvacated),x_2267F8522);
              T43 = CALL2(1,VARREF(YgooSmathY_),T44,YPint((P)1));
              T42 = CALL2(1,VARREF(YgooScolsStabYPvacated_setter),T43,x_2267F8522);
              T41 = vacancy_indexF8518;
            } else {
              T41 = raw_indexF8520;
            }
            indexF8523 = T41;
            T35 = vectorF8508;
            (P)YgooScolsStabYOvelt_setter(key_,T35,indexF8523);
            T36 = vectorF8508;
            T37 = CALL2(1,VARREF(YgooSmathYA),indexF8523,bucket_depthF8510);
            (P)YgooScolsStabYOvelt_setter(value_,T36,T37);
            x_2266F8524 = table_;
            T40 = CALL1(1,VARREF(YgooScolsStabYPcount),x_2266F8524);
            T39 = CALL2(1,VARREF(YgooSmathYA),T40,YPint((P)1));
            T38 = CALL2(1,VARREF(YgooScolsStabYPcount_setter),T39,x_2266F8524);
            T33 = value_;
          } else {
            T47 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF8521,VARREF(YgooScolsStabYDvacated_cell_marker));
            if (T47 != YPfalse) {
              tmpF8525 = vacancy_indexF8518;
              if (tmpF8525 != YPfalse) {
                T49 = tmpF8525;
              } else {
                T49 = raw_indexF8520;
              }
              T50 = CALL2(1,VARREF(YgooSmathYA),iF8519,YPint((P)1));
              T51 = CALL2(1,VARREF(YgooSmathYA),raw_indexF8520,YPint((P)1));
              a382_0 = T49;
              a382_1 = T50;
              a382_2 = T51;
              vacancy_indexF8518 = a382_0;
              iF8519 = a382_1;
              raw_indexF8520 = a382_2;
              goto LOOP_382;
              T46 = T48;
            } else {
              T53 = CALL2(1,test_functionF8509,key_,this_keyF8521);
              if (T53 != YPfalse) {
                T54 = vectorF8508;
                T55 = CALL2(1,VARREF(YgooSmathYA),raw_indexF8520,bucket_depthF8510);
                (P)YgooScolsStabYOvelt_setter(value_,T54,T55);
                T52 = value_;
              } else {
                if (YPtrue != YPfalse) {
                  T58 = CALL2(1,VARREF(YgooSmathYA),iF8519,YPint((P)1));
                  T59 = CALL2(1,VARREF(YgooSmathYA),raw_indexF8520,YPint((P)1));
                  a382_0 = vacancy_indexF8518;
                  a382_1 = T58;
                  a382_2 = T59;
                  vacancy_indexF8518 = a382_0;
                  iF8519 = a382_1;
                  raw_indexF8520 = a382_2;
                  goto LOOP_382;
                  T56 = T57;
                } else {
                  T56 = YPfalse;
                }
                T52 = T56;
              }
              T46 = T52;
            }
            T33 = T46;
          }
          T31 = T33;
        } else {
          T63 = CALL3(1,VARREF(YgooSmathYmod_),bucket_indexF8515,bucket_offsetF8514,n_bucketsF8511);
          T64 = CALL2(1,VARREF(YgooSmathYA),probesF8516,YPint((P)1));
          a381_0 = T63;
          a381_1 = T64;
          bucket_indexF8515 = a381_0;
          probesF8516 = a381_1;
          goto LOOP_381;
          T31 = T62;
        }
      }
      T29 = T31;
    } else {
      T67 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_65));
      T29 = T67;
    }
  }
UNLINK_STACK();
  QRET(T29);
}

FUNCODEDEF(fun_del_30) {
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

FUNCODEDEF(fun_delX_31) {
  P table_,key_;
  P x_2269F8540;
  P x_2268F8539;
  P this_keyF8538;
  P raw_indexF8537;
  P iF8536;
  P indexF8535;
  P probesF8534;
  P bucket_indexF8533;
  P bucket_offsetF8532;
  P bucket_indexF8531;
  P hashF8530;
  P bucket_depthF8529;
  P n_bucketsF8528;
  P vectorF8527;
  P test_functionF8526;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(table_, 0);
  ARG(key_, 1);
  T37 = CALL1(1,VARREF(YgooScolsScolYkey_test),table_);
  test_functionF8526 = T37;
  T36 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF8527 = T36;
  T35 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF8527);
  n_bucketsF8528 = T35;
  T34 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF8527);
  bucket_depthF8529 = T34;
  T33 = CALL1(1,VARREF(YgooScolsStabYtab_hash),table_);
  T32 = CALL1(1,T33,key_);
  check_type(T32,VARREF(YLintG));
  hashF8530 = T32;
  T31 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF8527);
  T30 = CALL2(1,VARREF(YgooSmathYmod),hashF8530,T31);
  bucket_indexF8531 = T30;
  T29 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF8527);
  T28 = CALL2(1,VARREF(YgooSmathYmod),hashF8530,T29);
  T27 = CALL2(1,VARREF(YgooSmathYA),T28,YPint((P)1));
  bucket_offsetF8532 = T27;
  bucket_indexF8533 = bucket_indexF8531;
  check_type(YPint((P)0),VARREF(YLintG));
  probesF8534 = YPint((P)0);
  LOOP_383: {
    P a383_0,a383_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),probesF8534,n_bucketsF8528);
    if (T1 != YPfalse) {
      T25 = CALL2(1,VARREF(YgooSmathYT),bucket_depthF8529,YPint((P)2));
      T24 = CALL2(1,VARREF(YgooSmathYT),bucket_indexF8533,T25);
      check_type(T24,VARREF(YLintG));
      indexF8535 = T24;
      check_type(YPint((P)0),VARREF(YLintG));
      iF8536 = YPint((P)0);
      check_type(indexF8535,VARREF(YLintG));
      raw_indexF8537 = indexF8535;
      LOOP_384: {
        P a384_0,a384_1;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF8536,bucket_depthF8529);
        if (T3 != YPfalse) {
          T20 = (P)YgooScolsStabYOvelt(vectorF8527,raw_indexF8537);
          this_keyF8538 = T20;
          T5 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF8538,VARREF(YgooScolsStabYDempty_cell_marker));
          if (T5 != YPfalse) {
            T4 = YPfalse;
          } else {
            T8 = CALL2(1,VARREF(YgooSmathYNEE),this_keyF8538,VARREF(YgooScolsStabYDvacated_cell_marker));
            if (T8 != YPfalse) {
              T9 = CALL2(1,test_functionF8526,key_,this_keyF8538);
              T7 = T9;
            } else {
              T7 = YPfalse;
            }
            if (T7 != YPfalse) {
              (P)YgooScolsStabYOvelt_setter(VARREF(YgooScolsStabYDvacated_cell_marker),vectorF8527,raw_indexF8537);
              x_2268F8539 = table_;
              T12 = CALL1(1,VARREF(YgooScolsStabYPcount),x_2268F8539);
              T11 = CALL2(1,VARREF(YgooSmathY_),T12,YPint((P)1));
              T10 = CALL2(1,VARREF(YgooScolsStabYPcount_setter),T11,x_2268F8539);
              x_2269F8540 = vectorF8527;
              T15 = CALL1(1,VARREF(YgooScolsStabYPvacated),x_2269F8540);
              T14 = CALL2(1,VARREF(YgooSmathYA),T15,YPint((P)1));
              T13 = CALL2(1,VARREF(YgooScolsStabYPvacated_setter),T14,x_2269F8540);
              T6 = YPtrue;
            } else {
              if (YPtrue != YPfalse) {
                T18 = CALL2(1,VARREF(YgooSmathYA),iF8536,YPint((P)1));
                T19 = CALL2(1,VARREF(YgooSmathYA),raw_indexF8537,YPint((P)1));
                a384_0 = T18;
                a384_1 = T19;
                iF8536 = a384_0;
                raw_indexF8537 = a384_1;
                goto LOOP_384;
                T16 = T17;
              } else {
                T16 = YPfalse;
              }
              T6 = T16;
            }
            T4 = T6;
          }
          T2 = T4;
        } else {
          T22 = CALL3(1,VARREF(YgooSmathYmod_),bucket_indexF8533,bucket_offsetF8532,n_bucketsF8528);
          T23 = CALL2(1,VARREF(YgooSmathYA),probesF8534,YPint((P)1));
          a383_0 = T22;
          a383_1 = T23;
          bucket_indexF8533 = a383_0;
          probesF8534 = a383_1;
          goto LOOP_383;
          T2 = T21;
        }
      }
      T0 = T2;
    } else {
      T26 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_70));
      T0 = T26;
    }
  }
UNLINK_STACK();
  RET(table_);
}

FUNCODEDEF(fun_do_keyed_32) {
  P function_,table_;
  P indexF8548;
  P tmpF8547;
  P keyF8546;
  P iF8545;
  P bF8544;
  P depthF8543;
  P n_bucketsF8542;
  P vectorF8541;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(function_, 0);
  ARG(table_, 1);
  T24 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF8541 = T24;
  T23 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF8541);
  n_bucketsF8542 = T23;
  T22 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF8541);
  depthF8543 = T22;
  check_type(YPint((P)0),VARREF(YLintG));
  bF8544 = YPint((P)0);
  LOOP_385: {
    P a385_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),bF8544,n_bucketsF8542);
    if (T1 != YPfalse) {
      check_type(YPint((P)0),VARREF(YLintG));
      iF8545 = YPint((P)0);
      LOOP_386: {
        P a386_0;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF8545,depthF8543);
        if (T3 != YPfalse) {
          T19 = CALL2(1,VARREF(YgooSmathYT),depthF8543,YPint((P)2));
          T18 = CALL2(1,VARREF(YgooSmathYT),bF8544,T19);
          T17 = CALL2(1,VARREF(YgooSmathYA),iF8545,T18);
          T16 = (P)YgooScolsStabYOvelt(vectorF8541,T17);
          keyF8546 = T16;
          T7 = CALL2(1,VARREF(YgooSmacrosYEE),keyF8546,VARREF(YgooScolsStabYDempty_cell_marker));
          tmpF8547 = T7;
          if (tmpF8547 != YPfalse) {
            T5 = tmpF8547;
          } else {
            T6 = CALL2(1,VARREF(YgooSmacrosYEE),keyF8546,VARREF(YgooScolsStabYDvacated_cell_marker));
            T5 = T6;
          }
          T4 = CALL1(1,VARREF(Ynot),T5);
          if (T4 != YPfalse) {
            T13 = CALL2(1,VARREF(YgooSmathYT),depthF8543,YPint((P)2));
            T12 = CALL2(1,VARREF(YgooSmathYT),bF8544,T13);
            T11 = CALL2(1,VARREF(YgooSmathYA),T12,depthF8543);
            T10 = CALL2(1,VARREF(YgooSmathYA),iF8545,T11);
            indexF8548 = T10;
            T9 = (P)YgooScolsStabYOvelt(vectorF8541,indexF8548);
            T8 = CALL2(1,function_,keyF8546,T9);
          } else {
          }
          T15 = CALL2(1,VARREF(YgooSmathYA),iF8545,YPint((P)1));
          a386_0 = T15;
          iF8545 = a386_0;
          goto LOOP_386;
          T2 = T14;
        } else {
          T2 = YPfalse;
        }
      }
      T21 = CALL2(1,VARREF(YgooSmathYA),bF8544,YPint((P)1));
      a385_0 = T21;
      bF8544 = a385_0;
      goto LOOP_385;
      T0 = T20;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_33) {
  P function_,table_;
  P indexF8556;
  P tmpF8555;
  P keyF8554;
  P iF8553;
  P bF8552;
  P depthF8551;
  P n_bucketsF8550;
  P vectorF8549;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(function_, 0);
  ARG(table_, 1);
  T24 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF8549 = T24;
  T23 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF8549);
  n_bucketsF8550 = T23;
  T22 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF8549);
  depthF8551 = T22;
  check_type(YPint((P)0),VARREF(YLintG));
  bF8552 = YPint((P)0);
  LOOP_387: {
    P a387_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),bF8552,n_bucketsF8550);
    if (T1 != YPfalse) {
      check_type(YPint((P)0),VARREF(YLintG));
      iF8553 = YPint((P)0);
      LOOP_388: {
        P a388_0;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF8553,depthF8551);
        if (T3 != YPfalse) {
          T19 = CALL2(1,VARREF(YgooSmathYT),depthF8551,YPint((P)2));
          T18 = CALL2(1,VARREF(YgooSmathYT),bF8552,T19);
          T17 = CALL2(1,VARREF(YgooSmathYA),iF8553,T18);
          T16 = (P)YgooScolsStabYOvelt(vectorF8549,T17);
          keyF8554 = T16;
          T7 = CALL2(1,VARREF(YgooSmacrosYEE),keyF8554,VARREF(YgooScolsStabYDempty_cell_marker));
          tmpF8555 = T7;
          if (tmpF8555 != YPfalse) {
            T5 = tmpF8555;
          } else {
            T6 = CALL2(1,VARREF(YgooSmacrosYEE),keyF8554,VARREF(YgooScolsStabYDvacated_cell_marker));
            T5 = T6;
          }
          T4 = CALL1(1,VARREF(Ynot),T5);
          if (T4 != YPfalse) {
            T13 = CALL2(1,VARREF(YgooSmathYT),depthF8551,YPint((P)2));
            T12 = CALL2(1,VARREF(YgooSmathYT),bF8552,T13);
            T11 = CALL2(1,VARREF(YgooSmathYA),T12,depthF8551);
            T10 = CALL2(1,VARREF(YgooSmathYA),iF8553,T11);
            indexF8556 = T10;
            T9 = (P)YgooScolsStabYOvelt(vectorF8549,indexF8556);
            T8 = CALL1(1,function_,T9);
          } else {
          }
          T15 = CALL2(1,VARREF(YgooSmathYA),iF8553,YPint((P)1));
          a388_0 = T15;
          iF8553 = a388_0;
          goto LOOP_388;
          T2 = T14;
        } else {
          T2 = YPfalse;
        }
      }
      T21 = CALL2(1,VARREF(YgooSmathYA),bF8552,YPint((P)1));
      a387_0 = T21;
      bF8552 = a387_0;
      goto LOOP_387;
      T0 = T20;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zapX_34) {
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

FUNCODEDEF(fun_len_35) {
  P table_;
  P T0;
LINK_STACK();
  ARG(table_, 0);
  T0 = CALL1(1,VARREF(YgooScolsStabYPcount),table_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_Ovec_36) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYOvec));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Ovec_setter_37) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYOvec));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Obuc_38) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYObuc));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Obuc_setter_39) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYObuc));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Oidx_40) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYOidx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Oidx_setter_41) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsStabYOidx));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_OfinQ_42) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsStabYOfinQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_enum_44) {
  P table_;
  P tmpF8563;
  P keyF8562;
  P iF8561;
  P bF8560;
  P depthF8559;
  P n_bucketsF8558;
  P vectorF8557;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(table_, 0);
  T2 = CALL1(1,VARREF(YgooStypesYlen),table_);
  T1 = CALL2(1,VARREF(YgooSmathYE),T2,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = VARREF(YgooScolsStabYDfin_enum);
  } else {
    T22 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
    vectorF8557 = T22;
    T21 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF8557);
    n_bucketsF8558 = T21;
    T20 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF8557);
    depthF8559 = T20;
    check_type(YPint((P)0),VARREF(YLintG));
    bF8560 = YPint((P)0);
    LOOP_389: {
      P a389_0;
      T4 = CALL2(1,VARREF(YgooSmagYL),bF8560,n_bucketsF8558);
      if (T4 != YPfalse) {
        check_type(YPint((P)0),VARREF(YLintG));
        iF8561 = YPint((P)0);
        LOOP_390: {
          P a390_0;
          T6 = CALL2(1,VARREF(YgooSmagYL),iF8561,depthF8559);
          if (T6 != YPfalse) {
            T17 = CALL2(1,VARREF(YgooSmathYT),depthF8559,YPint((P)2));
            T16 = CALL2(1,VARREF(YgooSmathYT),bF8560,T17);
            T15 = CALL2(1,VARREF(YgooSmathYA),iF8561,T16);
            T14 = (P)YgooScolsStabYOvelt(vectorF8557,T15);
            keyF8562 = T14;
            T10 = CALL2(1,VARREF(YgooSmacrosYEE),keyF8562,VARREF(YgooScolsStabYDempty_cell_marker));
            tmpF8563 = T10;
            if (tmpF8563 != YPfalse) {
              T8 = tmpF8563;
            } else {
              T9 = CALL2(1,VARREF(YgooSmacrosYEE),keyF8562,VARREF(YgooScolsStabYDvacated_cell_marker));
              T8 = T9;
            }
            if (T8 != YPfalse) {
              T12 = CALL2(1,VARREF(YgooSmathYA),iF8561,YPint((P)1));
              a390_0 = T12;
              iF8561 = a390_0;
              goto LOOP_390;
              T7 = T11;
            } else {
              T13 = CALLN(1,VARREF(Ynew),7,VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOvec),vectorF8557,VARREF(YgooScolsStabYObuc),bF8560,VARREF(YgooScolsStabYOidx),iF8561);
              T7 = T13;
            }
            T5 = T7;
          } else {
            T19 = CALL2(1,VARREF(YgooSmathYA),bF8560,YPint((P)1));
            a389_0 = T19;
            bF8560 = a389_0;
            goto LOOP_389;
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

FUNCODEDEF(fun_nxt_45) {
  P e_;
  P x_2270F8574;
  P tmpF8573;
  P keyF8572;
  P iF8571;
  P firstQF8570;
  P bF8569;
  P indexF8568;
  P bucketF8567;
  P depthF8566;
  P n_bucketsF8565;
  P vectorF8564;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(e_, 0);
  T22 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF8564 = T22;
  T21 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF8564);
  n_bucketsF8565 = T21;
  T20 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF8564);
  depthF8566 = T20;
  T19 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  bucketF8567 = T19;
  T18 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  indexF8568 = T18;
  check_type(bucketF8567,VARREF(YLintG));
  bF8569 = bucketF8567;
  firstQF8570 = YPtrue;
  LOOP_391: {
    P a391_0,a391_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),bF8569,n_bucketsF8565);
    if (T1 != YPfalse) {
      if (firstQF8570 != YPfalse) {
        T17 = CALL2(1,VARREF(YgooSmathYA),indexF8568,YPint((P)1));
        T16 = T17;
      } else {
        T16 = YPint((P)0);
      }
      check_type(T16,VARREF(YLintG));
      iF8571 = T16;
      LOOP_392: {
        P a392_0;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF8571,depthF8566);
        if (T3 != YPfalse) {
          T13 = CALL2(1,VARREF(YgooSmathYT),depthF8566,YPint((P)2));
          T12 = CALL2(1,VARREF(YgooSmathYT),bF8569,T13);
          T11 = CALL2(1,VARREF(YgooSmathYA),iF8571,T12);
          T10 = (P)YgooScolsStabYOvelt(vectorF8564,T11);
          keyF8572 = T10;
          T7 = CALL2(1,VARREF(YgooSmacrosYEE),keyF8572,VARREF(YgooScolsStabYDempty_cell_marker));
          tmpF8573 = T7;
          if (tmpF8573 != YPfalse) {
            T5 = tmpF8573;
          } else {
            T6 = CALL2(1,VARREF(YgooSmacrosYEE),keyF8572,VARREF(YgooScolsStabYDvacated_cell_marker));
            T5 = T6;
          }
          if (T5 != YPfalse) {
            T9 = CALL2(1,VARREF(YgooSmathYA),iF8571,YPint((P)1));
            a392_0 = T9;
            iF8571 = a392_0;
            goto LOOP_392;
            T4 = T8;
          } else {
            x_2270F8574 = e_;
            CALL2(1,VARREF(YgooScolsStabYOvec_setter),vectorF8564,x_2270F8574);
            CALL2(1,VARREF(YgooScolsStabYObuc_setter),bF8569,x_2270F8574);
            CALL2(1,VARREF(YgooScolsStabYOidx_setter),iF8571,x_2270F8574);
            T4 = x_2270F8574;
          }
          T2 = T4;
        } else {
          T15 = CALL2(1,VARREF(YgooSmathYA),bF8569,YPint((P)1));
          a391_0 = T15;
          a391_1 = YPfalse;
          bF8569 = a391_0;
          firstQF8570 = a391_1;
          goto LOOP_391;
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

FUNCODEDEF(fun_finQ_46) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL1(1,VARREF(YgooScolsStabYOfinQ),e_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_key_47) {
  P e_;
  P depthF8576;
  P vectorF8575;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(e_, 0);
  T7 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF8575 = T7;
  T6 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF8575);
  depthF8576 = T6;
  T2 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  T4 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T5 = CALL2(1,VARREF(YgooSmathYT),depthF8576,YPint((P)2));
  T3 = CALL2(1,VARREF(YgooSmathYT),T4,T5);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,T3);
  T0 = (P)YgooScolsStabYOvelt(vectorF8575,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_48) {
  P e_;
  P depthF8578;
  P vectorF8577;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(e_, 0);
  T8 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF8577 = T8;
  T7 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF8577);
  depthF8578 = T7;
  T2 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  T5 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T6 = CALL2(1,VARREF(YgooSmathYT),depthF8578,YPint((P)2));
  T4 = CALL2(1,VARREF(YgooSmathYT),T5,T6);
  T3 = CALL2(1,VARREF(YgooSmathYA),depthF8578,T4);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,T3);
  T0 = (P)YgooScolsStabYOvelt(vectorF8577,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_setter_49) {
  P value_,e_;
  P depthF8581;
  P indexF8580;
  P vectorF8579;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(value_, 0);
  ARG(e_, 1);
  T8 = CALL1(1,VARREF(YgooScolsStabYOvec),e_);
  vectorF8579 = T8;
  T7 = CALL1(1,VARREF(YgooScolsStabYOidx),e_);
  indexF8580 = T7;
  T6 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF8579);
  depthF8581 = T6;
  T4 = CALL1(1,VARREF(YgooScolsStabYObuc),e_);
  T5 = CALL2(1,VARREF(YgooSmathYT),depthF8581,YPint((P)2));
  T3 = CALL2(1,VARREF(YgooSmathYT),T4,T5);
  T2 = CALL2(1,VARREF(YgooSmathYA),depthF8581,T3);
  T1 = CALL2(1,VARREF(YgooSmathYA),indexF8580,T2);
  T0 = (P)YgooScolsStabYOvelt_setter(value_,vectorF8579,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_50) {
  P k_,v_;
  P UF8582;
  P T0,T1,T2;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
  T2 = BOXGET(FREEREF(0));
  UF8582 = T2;
  T1 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF8582,k_);
  T0 = BOXPUT(T1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_tab_keys_51) {
  P table_;
  P packer_F8583;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(table_, 0);
  T4 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F8583 = T4;
  packer_F8583 = BOXFAB(packer_F8583);
  T1 = FUNFAB(fun_50,1,packer_F8583);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T1,table_);
  T3 = BOXGET(packer_F8583);
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_res),T3);
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(fun_grow_table_52) {
  P table_;
  P new_vectorF8588;
  P new_bucket_depthF8587;
  P new_n_bucketsF8586;
  P tup62F8585;
  P vectorF8584;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(table_, 0);
  T13 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF8584 = T13;
  T10 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF8584);
  T11 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF8584);
  T9 = CALL2(1,VARREF(YgooSmathYT),T10,T11);
  T12 = CALL1(1,VARREF(YgooScolsStabYtab_growth_factor),table_);
  T8 = CALL2(1,VARREF(YgooSmathYT),T9,T12);
  T7 = CALL1(1,VARREF(YgooSmathYfloor),T8);
  T6 = CALL1(1,VARREF(YgooScolsStabYchoose_table_geometry),T7);
  tup62F8585 = T6;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup62F8585,YPint((P)0));
  new_n_bucketsF8586 = T5;
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),tup62F8585,YPint((P)1));
  new_bucket_depthF8587 = T4;
  T2 = CALL2(1,VARREF(YgooSmathYT),new_bucket_depthF8587,YPint((P)2));
  T1 = CALL2(1,VARREF(YgooSmathYT),new_n_bucketsF8586,T2);
  T3 = CALL2(1,VARREF(YgooSmathY_),new_n_bucketsF8586,YPint((P)2));
  T0 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T1,VARREF(YgooScolsStabYDempty_cell_marker),new_n_bucketsF8586,new_bucket_depthF8587,new_n_bucketsF8586,T3);
  new_vectorF8588 = T0;
  CALL2(1,VARREF(YgooScolsStabYcopy_to_new_vector),table_,new_vectorF8588);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),new_vectorF8588,table_);
UNLINK_STACK();
  RET(table_);
}

FUNCODEDEF(fun_rehash_table_53) {
  P table_;
  P new_vectorF8590;
  P vectorF8589;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(table_, 0);
  T9 = CALL1(1,VARREF(YgooScolsStabYPvector),table_);
  vectorF8589 = T9;
  T2 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF8589);
  T4 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF8589);
  T3 = CALL2(1,VARREF(YgooSmathYT),T4,YPint((P)2));
  T1 = CALL2(1,VARREF(YgooSmathYT),T2,T3);
  T5 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),vectorF8589);
  T6 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),vectorF8589);
  T7 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),vectorF8589);
  T8 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),vectorF8589);
  T0 = CALLN(1,VARREF(YgooScolsStabYfab_tab_vec),6,T1,VARREF(YgooScolsStabYDempty_cell_marker),T5,T6,T7,T8);
  new_vectorF8590 = T0;
  CALL2(1,VARREF(YgooScolsStabYcopy_to_new_vector),table_,new_vectorF8590);
  CALL2(1,VARREF(YgooScolsStabYPvector_setter),new_vectorF8590,table_);
UNLINK_STACK();
  RET(table_);
}

FUNCODEDEF(fun_54) {
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

FUNCODEDEF(fun_55) {
  P return_;
  P depthF8591;
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
  depthF8591 = T2;
  T0 = FUNFAB(fun_54,3,FREEREF(0),depthF8591,return_);
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

FUNCODEDEF(fun_57) {
  P k_,v_;
  P this_keyF8605;
  P indexF8604;
  P iF8603;
  P bucket_startF8602;
  P probesF8601;
  P new_bucket_indexF8600;
  P new_bucket_offsetF8599;
  P new_bucket_indexF8598;
  P hashF8597;
  P new_secondary_modulusF8596;
  P new_primary_modulusF8595;
  P new_bucket_depthF8594;
  P new_n_bucketsF8593;
  P test_functionF8592;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(k_, 0);
  ARG(v_, 1);
  T27 = CALL1(1,VARREF(YgooScolsScolYkey_test),FREEREF(0));
  test_functionF8592 = T27;
  T26 = CALL1(1,VARREF(YgooScolsStabYPn_buckets),FREEREF(1));
  new_n_bucketsF8593 = T26;
  T25 = CALL1(1,VARREF(YgooScolsStabYPbucket_depth),FREEREF(1));
  new_bucket_depthF8594 = T25;
  T24 = CALL1(1,VARREF(YgooScolsStabYPprimary_modulus),FREEREF(1));
  new_primary_modulusF8595 = T24;
  T23 = CALL1(1,VARREF(YgooScolsStabYPsecondary_modulus),FREEREF(1));
  new_secondary_modulusF8596 = T23;
  T22 = CALL1(1,VARREF(YgooScolsStabYtab_hash),FREEREF(0));
  T21 = CALL1(1,T22,k_);
  check_type(T21,VARREF(YLintG));
  hashF8597 = T21;
  T20 = CALL2(1,VARREF(YgooSmathYmod),hashF8597,new_primary_modulusF8595);
  new_bucket_indexF8598 = T20;
  T19 = CALL2(1,VARREF(YgooSmathYmod),hashF8597,new_secondary_modulusF8596);
  T18 = CALL2(1,VARREF(YgooSmathYA),T19,YPint((P)1));
  new_bucket_offsetF8599 = T18;
  new_bucket_indexF8600 = new_bucket_indexF8598;
  check_type(YPint((P)0),VARREF(YLintG));
  probesF8601 = YPint((P)0);
  LOOP_393: {
    P a393_0,a393_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),probesF8601,new_n_bucketsF8593);
    if (T1 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSmathYT),new_bucket_depthF8594,YPint((P)2));
      T15 = CALL2(1,VARREF(YgooSmathYT),new_bucket_indexF8600,T16);
      bucket_startF8602 = T15;
      check_type(YPint((P)0),VARREF(YLintG));
      iF8603 = YPint((P)0);
      check_type(bucket_startF8602,VARREF(YLintG));
      indexF8604 = bucket_startF8602;
      LOOP_394: {
        P a394_0,a394_1;
        T3 = CALL2(1,VARREF(YgooSmagYL),iF8603,new_bucket_depthF8594);
        if (T3 != YPfalse) {
          T11 = (P)YgooScolsStabYOvelt(FREEREF(1),indexF8604);
          this_keyF8605 = T11;
          T5 = CALL2(1,VARREF(YgooSmacrosYEE),this_keyF8605,VARREF(YgooScolsStabYDempty_cell_marker));
          if (T5 != YPfalse) {
            (P)YgooScolsStabYOvelt_setter(k_,FREEREF(1),indexF8604);
            T7 = CALL2(1,VARREF(YgooSmathYA),indexF8604,new_bucket_depthF8594);
            T6 = (P)YgooScolsStabYOvelt_setter(v_,FREEREF(1),T7);
            T4 = T6;
          } else {
            T9 = CALL2(1,VARREF(YgooSmathYA),iF8603,YPint((P)1));
            T10 = CALL2(1,VARREF(YgooSmathYA),indexF8604,YPint((P)1));
            a394_0 = T9;
            a394_1 = T10;
            iF8603 = a394_0;
            indexF8604 = a394_1;
            goto LOOP_394;
            T4 = T8;
          }
          T2 = T4;
        } else {
          T13 = CALL3(1,VARREF(YgooSmathYmod_),new_bucket_indexF8600,new_bucket_offsetF8599,new_n_bucketsF8593);
          T14 = CALL2(1,VARREF(YgooSmathYA),probesF8601,YPint((P)1));
          a393_0 = T13;
          a393_1 = T14;
          new_bucket_indexF8600 = a393_0;
          probesF8601 = a393_1;
          goto LOOP_393;
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

FUNCODEDEF(fun_copy_to_new_vector_58) {
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

FUNCODEDEF(fun_id_hash_59) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYaddress_of),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_60) {
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

FUNCODEDEF(fun_id_hash_62) {
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

FUNCODEDEF(fun_id_hash_63) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T0 = CALL1(1,VARREF(YgooScolsStabYid_hash),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_64) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmathYflo_bits),x_);
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)89));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_id_hash_65) {
  P x_;
  P cur_elemF8608;
  P cur_hashF8607;
  P t_enumF8606;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  t_enumF8606 = T8;
  cur_hashF8607 = YPint((P)0);
  LOOP_395: {
    P a395_0,a395_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),t_enumF8606);
    T0 = CALL1(1,VARREF(Ynot),T1);
    if (T0 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),t_enumF8606);
      cur_elemF8608 = T7;
      T3 = CALL1(1,VARREF(YgooScolsScolYnxt),t_enumF8606);
      T5 = CALL2(1,VARREF(YgooSmathYT),cur_hashF8607,YPint((P)31));
      T6 = CALL1(1,VARREF(YgooScolsStabYid_hash),cur_elemF8608);
      T4 = CALL2(1,VARREF(YgooSmathYA),T5,T6);
      a395_0 = T3;
      a395_1 = T4;
      t_enumF8606 = a395_0;
      cur_hashF8607 = a395_1;
      goto LOOP_395;
    } else {
    }
  }
UNLINK_STACK();
  QRET(cur_hashF8607);
}

FUNCODEDEF(fun_key_type_66) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLstrG));
}

FUNCODEDEF(fun_elt_type_67) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLsymG));
}

FUNCODEDEF(YgooScolsStabYcase_insensitive_string_hash) {
  P x_;
  P hashF8611;
  P iF8610;
  P eF8609;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  T10 = CALL1(1,VARREF(YgooStypesYlen),x_);
  eF8609 = T10;
  check_type(YPint((P)0),VARREF(YLintG));
  iF8610 = YPint((P)0);
  check_type(YPint((P)0),VARREF(YLintG));
  hashF8611 = YPint((P)0);
  LOOP_396: {
    P a396_0,a396_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF8610,eF8609);
    if (T1 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSmathYA),iF8610,YPint((P)1));
      T6 = CALL2(1,VARREF(YgooSmathYLL),hashF8611,YPint((P)6));
      T9 = CALL2(1,VARREF(YgooScolsScolYlow_elt),x_,iF8610);
      T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T9);
      T7 = CALL2(1,VARREF(YgooSmathYB),T8,YPint((P)159));
      T5 = CALL2(1,VARREF(YgooSmathYA),T6,T7);
      T4 = CALL2(1,VARREF(YgooSmathYmod),T5,YPint((P)970747));
      a396_0 = T3;
      a396_1 = T4;
      iF8610 = a396_0;
      hashF8611 = a396_1;
      goto LOOP_396;
      T0 = T2;
    } else {
      T0 = hashF8611;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsStabYcase_insensitive_string_equal) {
  P x_,y_;
  P tmpF8618;
  P cyF8617;
  P cxF8616;
  P tmpF8615;
  P iF8614;
  P eyF8613;
  P syF8612;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  syF8612 = YPint((P)0);
  T17 = CALL1(1,VARREF(YgooStypesYlen),y_);
  eyF8613 = T17;
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T3 = CALL2(1,VARREF(YgooSmathY_),eyF8613,syF8612);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,T3);
  if (T1 != YPfalse) {
    check_type(syF8612,VARREF(YLintG));
    iF8614 = syF8612;
    LOOP_397: {
      P a397_0;
      T16 = CALL2(1,VARREF(YgooSmacrosYEE),iF8614,eyF8613);
      tmpF8615 = T16;
      if (tmpF8615 != YPfalse) {
        T4 = tmpF8615;
      } else {
        T15 = CALL2(1,VARREF(YgooSmathY_),iF8614,syF8612);
        T14 = CALL2(1,VARREF(YgooScolsScolYlow_elt),x_,T15);
        check_type(T14,VARREF(YLchrG));
        cxF8616 = T14;
        T13 = CALL2(1,VARREF(YgooScolsScolYlow_elt),y_,iF8614);
        check_type(T13,VARREF(YLchrG));
        cyF8617 = T13;
        T10 = CALL2(1,VARREF(YgooSmacrosYEE),cxF8616,cyF8617);
        tmpF8618 = T10;
        if (tmpF8618 != YPfalse) {
          T6 = tmpF8618;
        } else {
          T8 = CALL1(1,VARREF(YgooSmathYto_lower),cxF8616);
          T9 = CALL1(1,VARREF(YgooSmathYto_lower),cyF8617);
          T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,T9);
          T6 = T7;
        }
        if (T6 != YPfalse) {
          T12 = CALL2(1,VARREF(YgooSmathYA),iF8614,YPint((P)1));
          a397_0 = T12;
          iF8614 = a397_0;
          goto LOOP_397;
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

FUNCODEDEF(fun_key_test_70) {
  P U_;
LINK_STACK();
  ARG(U_, 0);
UNLINK_STACK();
  RET(VARREF(YgooScolsStabYcase_insensitive_string_equal));
}

FUNCODEDEF(fun_tab_hash_71) {
  P U_;
LINK_STACK();
  ARG(U_, 0);
UNLINK_STACK();
  RET(VARREF(YgooScolsStabYcase_insensitive_string_hash));
}

FUNCODEDEF(fun_addX_72) {
  P c_,x_;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,c_,x_);
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_memQ_73) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL3(1,VARREF(YgooScolsScolYelt_or),c_,x_,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_74) {
  P k_;
  P T0,T1;
LINK_STACK();
  ARG(k_, 0);
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),k_);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),T1,FREEREF(1),k_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elts_75) {
  P x_,keys_;
  P resF8619;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(keys_, 1);
  T3 = CALL1(1,VARREF(YgooStypesYlen),keys_);
  T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),T3);
  resF8619 = T2;
  T0 = FUNFAB(fun_74,2,x_,resF8619);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,keys_);
  T1 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,resF8619);
UNLINK_STACK();
  RET(T1);
}

P YgooScolsStabY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
DEFCREGS();
  lit_0 = YPPsym((P)"<tab>");
  T2 = (P)YPpair(VARREF(YLcolXG),Ynil);
  T1 = (P)YPpair(VARREF(YgooScolsSmapYLmapG),T2);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YgooScolsScolYLtabG,T0);
  lit_1 = YPPsym((P)"<set>");
  T4 = (P)YPpair(VARREF(YgooScolsScolYLtabG),Ynil);
  T3 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_1),T4);
  VARSET(YgooScolsStabYLsetG,T3);
  lit_2 = YPPsym((P)"tab-growth-factor");
  lit_3 = YPPlist(1,YPPsym((P)"_x"));
  T5 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tab_growth_factor_0 = YPmet(FUNCODEREF(fun_tab_growth_factor_0),LITREF(lit_2),T5,ENVNUL,PNUL,sloc(29));
  T7 = VARREF_OR(YgooScolsStabYtab_growth_factor,YPfalse);
  T8 = fun_tab_growth_factor_0;
  T6 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T7,T8);
  VARSET(YgooScolsStabYtab_growth_factor,T6);
  lit_4 = YPPlist(1,YPPsym((P)"_x"));
  lit_5 = YPflo(FLOINT(2.0));
  T9 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T9,ENVNUL,PNUL,sloc(29));
  T10 = fun_1;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYtab_growth_factor),YPfalse,VARREF(YLfloG),T10);
  lit_6 = YPPsym((P)"tab-growth-threshold");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T11 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tab_growth_threshold_2 = YPmet(FUNCODEREF(fun_tab_growth_threshold_2),LITREF(lit_6),T11,ENVNUL,PNUL,sloc(29));
  T13 = VARREF_OR(YgooScolsStabYtab_growth_threshold,YPfalse);
  T14 = fun_tab_growth_threshold_2;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(YgooScolsStabYtab_growth_threshold,T12);
  lit_8 = YPPlist(1,YPPsym((P)"_x"));
  lit_9 = YPflo(FLOINT(0.8));
  T15 = YPsig(LITREF(lit_8),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3 = YPmet(FUNCODEREF(fun_3),YPfalse,T15,ENVNUL,PNUL,sloc(29));
  T16 = fun_3;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYtab_growth_threshold),YPfalse,VARREF(YLfloG),T16);
  lit_10 = YPPsym((P)"tab-shrink-threshold");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T17 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tab_shrink_threshold_4 = YPmet(FUNCODEREF(fun_tab_shrink_threshold_4),LITREF(lit_10),T17,ENVNUL,PNUL,sloc(29));
  T19 = VARREF_OR(YgooScolsStabYtab_shrink_threshold,YPfalse);
  T20 = fun_tab_shrink_threshold_4;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YgooScolsStabYtab_shrink_threshold,T18);
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  lit_13 = YPflo(FLOINT(0.5));
  T21 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T21,ENVNUL,PNUL,sloc(29));
  T22 = fun_5;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYtab_shrink_threshold),YPfalse,VARREF(YLfloG),T22);
  lit_14 = YPPsym((P)"<tab-vec>");
  T24 = (P)YPpair(VARREF(YLseqXG),Ynil);
  T23 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_14),T24);
  VARSET(YgooScolsStabYLtab_vecG,T23);
  lit_15 = YPPsym((P)"%vacated");
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  T25 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pvacated_6 = YPmet(FUNCODEREF(fun_Pvacated_6),LITREF(lit_15),T25,ENVNUL,PNUL,sloc(40));
  T27 = VARREF_OR(YgooScolsStabYPvacated,YPfalse);
  T28 = fun_Pvacated_6;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooScolsStabYPvacated,T26);
  lit_17 = YPPsym((P)"%vacated-setter");
  lit_18 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pvacated_setter_7 = YPmet(FUNCODEREF(fun_Pvacated_setter_7),LITREF(lit_17),T29,ENVNUL,PNUL,sloc(40));
  T31 = VARREF_OR(YgooScolsStabYPvacated_setter,YPfalse);
  T32 = fun_Pvacated_setter_7;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooScolsStabYPvacated_setter,T30);
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T33 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T33,ENVNUL,PNUL,sloc(40));
  T34 = fun_8;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPvacated),VARREF(YgooScolsStabYPvacated_setter),VARREF(YLintG),T34);
  lit_20 = YPPsym((P)"%primary-modulus");
  lit_21 = YPPlist(1,YPPsym((P)"_x"));
  T35 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pprimary_modulus_9 = YPmet(FUNCODEREF(fun_Pprimary_modulus_9),LITREF(lit_20),T35,ENVNUL,PNUL,sloc(42));
  T37 = VARREF_OR(YgooScolsStabYPprimary_modulus,YPfalse);
  T38 = fun_Pprimary_modulus_9;
  T36 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T37,T38);
  VARSET(YgooScolsStabYPprimary_modulus,T36);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPprimary_modulus),YPfalse,VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_22 = YPPsym((P)"%secondary-modulus");
  lit_23 = YPPlist(1,YPPsym((P)"_x"));
  T39 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Psecondary_modulus_10 = YPmet(FUNCODEREF(fun_Psecondary_modulus_10),LITREF(lit_22),T39,ENVNUL,PNUL,sloc(43));
  T41 = VARREF_OR(YgooScolsStabYPsecondary_modulus,YPfalse);
  T42 = fun_Psecondary_modulus_10;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YgooScolsStabYPsecondary_modulus,T40);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPsecondary_modulus),YPfalse,VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_24 = YPPsym((P)"%n-buckets");
  lit_25 = YPPlist(1,YPPsym((P)"_x"));
  T43 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pn_buckets_11 = YPmet(FUNCODEREF(fun_Pn_buckets_11),LITREF(lit_24),T43,ENVNUL,PNUL,sloc(45));
  T45 = VARREF_OR(YgooScolsStabYPn_buckets,YPfalse);
  T46 = fun_Pn_buckets_11;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YgooScolsStabYPn_buckets,T44);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPn_buckets),YPfalse,VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_26 = YPPsym((P)"%bucket-depth");
  lit_27 = YPPlist(1,YPPsym((P)"_x"));
  T47 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pbucket_depth_12 = YPmet(FUNCODEREF(fun_Pbucket_depth_12),LITREF(lit_26),T47,ENVNUL,PNUL,sloc(46));
  T49 = VARREF_OR(YgooScolsStabYPbucket_depth,YPfalse);
  T50 = fun_Pbucket_depth_12;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YgooScolsStabYPbucket_depth,T48);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPbucket_depth),YPfalse,VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_28 = YPPsym((P)"%data");
  lit_29 = YPPlist(1,YPPsym((P)"_x"));
  T53 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T52 = fun_Pdata_13 = YPmet(FUNCODEREF(fun_Pdata_13),LITREF(lit_28),T53,ENVNUL,PNUL,sloc(48));
  T56 = VARREF_OR(YgooScolsStabYPdata,YPfalse);
  T57 = fun_Pdata_13;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  T54 = VARSET(YgooScolsStabYPdata,T55);
  T51 = T54;
  return T51;
}

P YgooScolsStabY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112;
DEFCREGS();
  lit_30 = YPPsym((P)"%data-setter");
  lit_31 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLrepG),VARREF(YgooScolsStabYLtab_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdata_setter_14 = YPmet(FUNCODEREF(fun_Pdata_setter_14),LITREF(lit_30),T0,ENVNUL,PNUL,sloc(48));
  T2 = VARREF_OR(YgooScolsStabYPdata_setter,YPfalse);
  T3 = fun_Pdata_setter_14;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooScolsStabYPdata_setter,T1);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYPdata),VARREF(YgooScolsStabYPdata_setter),VARREF(YLrepG),VARREF(YPprop_unbound_error));
  lit_32 = YPPsym((P)"%count");
  lit_33 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pcount_15 = YPmet(FUNCODEREF(fun_Pcount_15),LITREF(lit_32),T4,ENVNUL,PNUL,sloc(52));
  T6 = VARREF_OR(YgooScolsStabYPcount,YPfalse);
  T7 = fun_Pcount_15;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooScolsStabYPcount,T5);
  lit_34 = YPPsym((P)"%count-setter");
  lit_35 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T8 = YPsig(LITREF(lit_35),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pcount_setter_16 = YPmet(FUNCODEREF(fun_Pcount_setter_16),LITREF(lit_34),T8,ENVNUL,PNUL,sloc(52));
  T10 = VARREF_OR(YgooScolsStabYPcount_setter,YPfalse);
  T11 = fun_Pcount_setter_16;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooScolsStabYPcount_setter,T9);
  lit_36 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T12,ENVNUL,PNUL,sloc(52));
  T13 = fun_17;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYPcount),VARREF(YgooScolsStabYPcount_setter),VARREF(YLintG),T13);
  lit_37 = YPPsym((P)"%vector");
  lit_38 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_38),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pvector_18 = YPmet(FUNCODEREF(fun_Pvector_18),LITREF(lit_37),T14,ENVNUL,PNUL,sloc(53));
  T16 = VARREF_OR(YgooScolsStabYPvector,YPfalse);
  T17 = fun_Pvector_18;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooScolsStabYPvector,T15);
  lit_39 = YPPsym((P)"%vector-setter");
  lit_40 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T18 = YPsig(LITREF(lit_40),YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pvector_setter_19 = YPmet(FUNCODEREF(fun_Pvector_setter_19),LITREF(lit_39),T18,ENVNUL,PNUL,sloc(53));
  T20 = VARREF_OR(YgooScolsStabYPvector_setter,YPfalse);
  T21 = fun_Pvector_setter_19;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YgooScolsStabYPvector_setter,T19);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsScolYLtabG),VARREF(YgooScolsStabYPvector),VARREF(YgooScolsStabYPvector_setter),VARREF(YgooScolsStabYLtab_vecG),VARREF(YPprop_unbound_error));
  lit_41 = YPPsym((P)"tab-hash");
  lit_42 = YPPlist(1,YPPsym((P)"x"));
  T23 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  T22 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_41),T23,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsStabYtab_hash,T22);
  lit_43 = YPPsym((P)"id-hash");
  lit_44 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T24 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_43),T25,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsStabYid_hash,T24);
  lit_45 = YPPsym((P)"<str-tab>");
  T27 = (P)YPpair(VARREF(YgooScolsScolYLtabG),Ynil);
  T26 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_45),T27);
  VARSET(YgooScolsStabYLstr_tabG,T26);
  lit_46 = YPPlist(275,YPint((P)3),YPint((P)5),YPint((P)11),YPint((P)17),YPint((P)29),YPint((P)41),YPint((P)47),YPint((P)59),YPint((P)71),YPint((P)101),YPint((P)107),YPint((P)137),YPint((P)149),YPint((P)167),YPint((P)179),YPint((P)191),YPint((P)197),YPint((P)227),YPint((P)239),YPint((P)269),YPint((P)281),YPint((P)311),YPint((P)347),YPint((P)419),YPint((P)431),YPint((P)461),YPint((P)521),YPint((P)569),YPint((P)599),YPint((P)617),YPint((P)641),YPint((P)659),YPint((P)809),YPint((P)839),YPint((P)881),YPint((P)1019),YPint((P)1049),YPint((P)1091),YPint((P)1151),YPint((P)1229),YPint((P)1277),YPint((P)1319),YPint((P)1367),YPint((P)1427),YPint((P)1481),YPint((P)1607),YPint((P)1667),YPint((P)1721),YPint((P)1787),YPint((P)1871),YPint((P)1931),YPint((P)1997),YPint((P)2081),YPint((P)2141),YPint((P)2207),YPint((P)2267),YPint((P)2339),YPint((P)2549),YPint((P)2657),YPint((P)2729),YPint((P)2801),YPint((P)2969),YPint((P)3119),YPint((P)3251),YPint((P)3359),YPint((P)3461),YPint((P)3557),YPint((P)3671),YPint((P)3767),YPint((P)3917),YPint((P)4019),YPint((P)4127),YPint((P)4241),YPint((P)4421),YPint((P)4547),YPint((P)4721),YPint((P)4931),YPint((P)5099),YPint((P)5231),YPint((P)5417),YPint((P)5639),YPint((P)5849),YPint((P)6089),YPint((P)6269),YPint((P)6449),YPint((P)6659),YPint((P)6827),YPint((P)7127),YPint((P)7307),YPint((P)7547),YPint((P)7757),YPint((P)8009),YPint((P)8219),YPint((P)8429),YPint((P)8819),YPint((P)9041),YPint((P)9281),YPint((P)9629),YPint((P)9929),YPint((P)10271),YPint((P)10529),YPint((P)10859),YPint((P)11159),YPint((P)11447),YPint((P)11777),YPint((P)12107),YPint((P)12539),YPint((P)12917),YPint((P)13337),YPint((P)13679),YPint((P)14081),YPint((P)14447),YPint((P)14867),YPint((P)15269),YPint((P)15731),YPint((P)16139),YPint((P)16631),YPint((P)17189),YPint((P)17657),YPint((P)18119),YPint((P)18911),YPint((P)19421),YPint((P)19961),YPint((P)20477),YPint((P)21011),YPint((P)21557),YPint((P)22109),YPint((P)22697),YPint((P)23291),YPint((P)23909),YPint((P)24917),YPint((P)25577),YPint((P)26249),YPint((P)26951),YPint((P)27689),YPint((P)28409),YPint((P)29129),YPint((P)29879),YPint((P)30839),YPint((P)31721),YPint((P)32531),YPint((P)33347),YPint((P)34211),YPint((P)35081),YPint((P)36011),YPint((P)36929),YPint((P)37991),YPint((P)39041),YPint((P)40037),YPint((P)41141),YPint((P)42179),YPint((P)43319),YPint((P)44531),YPint((P)45821),YPint((P)47057),YPint((P)48311),YPint((P)49529),YPint((P)50891),YPint((P)52181),YPint((P)53549),YPint((P)54917),YPint((P)56477),YPint((P)57899),YPint((P)59357),YPint((P)60887),YPint((P)62927),YPint((P)64577),YPint((P)66359),YPint((P)68111),YPint((P)69827),YPint((P)71711),YPint((P)73607),YPint((P)75539),YPint((P)77477),YPint((P)79559),YPint((P)81551),YPint((P)83639),YPint((P)85817),YPint((P)88001),YPint((P)90371),YPint((P)92639),YPint((P)95087),YPint((P)97499),YPint((P)99989),YPint((P)102497),YPint((P)105227),YPint((P)108011),YPint((P)110729),YPint((P)113537),YPint((P)116531),YPint((P)119549),YPint((P)122597),YPint((P)125789),YPint((P)128939),YPint((P)132329),YPint((P)135647),YPint((P)139121),YPint((P)142607),YPint((P)146297),YPint((P)149969),YPint((P)153887),YPint((P)157769),YPint((P)161729),YPint((P)166301),YPint((P)170537),YPint((P)174929),YPint((P)179381),YPint((P)183917),YPint((P)188831),YPint((P)193601),YPint((P)198461),YPint((P)203429),YPint((P)208589),YPint((P)213947),YPint((P)219311),YPint((P)224909),YPint((P)230561),YPint((P)236477),YPint((P)242447),YPint((P)248639),YPint((P)254927),YPint((P)261431),YPint((P)268517),YPint((P)275321),YPint((P)282239),YPint((P)289841),YPint((P)297467),YPint((P)304979),YPint((P)312617),YPint((P)320561),YPint((P)328589),YPint((P)336827),YPint((P)345461),YPint((P)354251),YPint((P)363149),YPint((P)372269),YPint((P)381629),YPint((P)391217),YPint((P)401309),YPint((P)411527),YPint((P)422087),YPint((P)432659),YPint((P)443561),YPint((P)454709),YPint((P)466181),YPint((P)478067),YPint((P)490031),YPint((P)502499),YPint((P)515087),YPint((P)527981),YPint((P)541361),YPint((P)555041),YPint((P)569081),YPint((P)583337),YPint((P)598049),YPint((P)613007),YPint((P)628679),YPint((P)644489),YPint((P)660617),YPint((P)677231),YPint((P)694259),YPint((P)711707),YPint((P)729557),YPint((P)747827),YPint((P)766541),YPint((P)785777),YPint((P)805499),YPint((P)825827),YPint((P)846749),YPint((P)868121),YPint((P)889871),YPint((P)912449),YPint((P)935591),YPint((P)959207),YPint((P)983327));
  T28 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),LITREF(lit_46));
  VARSET(YgooScolsStabYTtwin_primesT,T28);
  lit_47 = YPPsym((P)"fab-tab-vec");
  lit_48 = YPPlist(6,YPPsym((P)"size"),YPPsym((P)"fill-value"),YPPsym((P)"n-buckets"),YPPsym((P)"bucket-depth"),YPPsym((P)"primary-modulus"),YPPsym((P)"secondary-modulus"));
  T29 = YPsig(LITREF(lit_48),YPPlist(6,VARREF(YLintG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLintG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)6),VARREF(YgooScolsStabYLtab_vecG),Ynil);
  YgooScolsStabYfab_tab_vec = YPmet(FUNCODEREF(YgooScolsStabYfab_tab_vec),LITREF(lit_47),T29,ENVNUL,PNUL,sloc(100));
  T30 = YgooScolsStabYfab_tab_vec;
  VARSET(YgooScolsStabYfab_tab_vec,T30);
  lit_49 = YPPsym((P)"@fill!");
  lit_50 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"fill"));
  T31 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsStabYOfillX = YPmet(FUNCODEREF(YgooScolsStabYOfillX),LITREF(lit_49),T31,ENVNUL,PNUL,sloc(113));
  T32 = YgooScolsStabYOfillX;
  VARSET(YgooScolsStabYOfillX,T32);
  lit_51 = YPPsym((P)"clr!");
  lit_52 = YPPlist(2,YPPsym((P)"vector"),YPPsym((P)"fill-value"));
  T33 = YPsig(LITREF(lit_52),YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_clrX_24 = YPmet(FUNCODEREF(fun_clrX_24),LITREF(lit_51),T33,ENVNUL,PNUL,sloc(126));
  T35 = VARREF_OR(YgooScolsStabYclrX,YPfalse);
  T36 = fun_clrX_24;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YgooScolsStabYclrX,T34);
  VARSET(YgooScolsStabYTdebug_tablesQT,YPfalse);
  lit_53 = YPPsym((P)"key-test");
  lit_54 = YPPlist(1,YPPsym((P)"_"));
  T37 = YPsig(LITREF(lit_54),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_25 = YPmet(FUNCODEREF(fun_key_test_25),LITREF(lit_53),T37,ENVNUL,PNUL,sloc(136));
  T39 = VARREF_OR(YgooScolsScolYkey_test,YPfalse);
  T40 = fun_key_test_25;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YgooScolsScolYkey_test,T38);
  lit_55 = YPPlist(1,YPPsym((P)"_"));
  T41 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_tab_hash_26 = YPmet(FUNCODEREF(fun_tab_hash_26),LITREF(lit_41),T41,ENVNUL,PNUL,sloc(137));
  T43 = VARREF_OR(YgooScolsStabYtab_hash,YPfalse);
  T44 = fun_tab_hash_26;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YgooScolsStabYtab_hash,T42);
  lit_56 = YPPlist(1,YPsb((P)"empty cell"));
  VARSET(YgooScolsStabYDempty_cell_marker,LITREF(lit_56));
  lit_57 = YPPlist(1,YPsb((P)"vacated cell"));
  VARSET(YgooScolsStabYDvacated_cell_marker,LITREF(lit_57));
  lit_58 = YPPsym((P)"fab");
  lit_59 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"size"));
  T46 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooScolsScolYLtabG));
  T45 = YPsig(LITREF(lit_59),YPPlist(2,T46,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_fab_27 = YPmet(FUNCODEREF(fun_fab_27),LITREF(lit_58),T45,ENVNUL,PNUL,sloc(142));
  T48 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T49 = fun_fab_27;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YgooScolsScolYfab,T47);
  lit_60 = YPPsym((P)"elt-or");
  lit_61 = YPPlist(3,YPPsym((P)"table"),YPPsym((P)"key"),YPPsym((P)"default"));
  lit_62 = YPsb((P)"The table is totally full this shouldn't happen");
  T50 = YPsig(LITREF(lit_61),YPPlist(3,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_28 = YPmet(FUNCODEREF(fun_elt_or_28),LITREF(lit_60),T50,ENVNUL,PNUL,sloc(162));
  T52 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T53 = fun_elt_or_28;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooScolsScolYelt_or,T51);
  lit_63 = YPPsym((P)"elt-setter");
  lit_64 = YPPlist(3,YPPsym((P)"value"),YPPsym((P)"table"),YPPsym((P)"key"));
  lit_65 = YPsb((P)"The table is totally full this shouldn't happen");
  T54 = YPsig(LITREF(lit_64),YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_29 = YPmet(FUNCODEREF(fun_elt_setter_29),LITREF(lit_63),T54,ENVNUL,PNUL,sloc(191));
  T56 = VARREF_OR(YgooScolsScolxYelt_setter,YPfalse);
  T57 = fun_elt_setter_29;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooScolsScolxYelt_setter,T55);
  lit_66 = YPPsym((P)"del");
  lit_67 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T58 = YPsig(LITREF(lit_67),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_del_30 = YPmet(FUNCODEREF(fun_del_30),LITREF(lit_66),T58,ENVNUL,PNUL,sloc(250));
  T60 = VARREF_OR(YgooScolsScolYdel,YPfalse);
  T61 = fun_del_30;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooScolsScolYdel,T59);
  lit_68 = YPPsym((P)"del!");
  lit_69 = YPPlist(2,YPPsym((P)"table"),YPPsym((P)"key"));
  lit_70 = YPsb((P)"The table is totally full this shouldn't happen");
  T62 = YPsig(LITREF(lit_69),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_delX_31 = YPmet(FUNCODEREF(fun_delX_31),LITREF(lit_68),T62,ENVNUL,PNUL,sloc(253));
  T64 = VARREF_OR(YgooScolsScolxYdelX,YPfalse);
  T65 = fun_delX_31;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooScolsScolxYdelX,T63);
  lit_71 = YPPsym((P)"do-keyed");
  lit_72 = YPPlist(2,YPPsym((P)"function"),YPPsym((P)"table"));
  T66 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_keyed_32 = YPmet(FUNCODEREF(fun_do_keyed_32),LITREF(lit_71),T66,ENVNUL,PNUL,sloc(289));
  T68 = VARREF_OR(YgooScolsScolYdo_keyed,YPfalse);
  T69 = fun_do_keyed_32;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooScolsScolYdo_keyed,T67);
  lit_73 = YPPsym((P)"do");
  lit_74 = YPPlist(2,YPPsym((P)"function"),YPPsym((P)"table"));
  T70 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_33 = YPmet(FUNCODEREF(fun_do_33),LITREF(lit_73),T70,ENVNUL,PNUL,sloc(306));
  T72 = VARREF_OR(YgooSmacrosYdo,YPfalse);
  T73 = fun_do_33;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooSmacrosYdo,T71);
  lit_75 = YPPsym((P)"zap!");
  lit_76 = YPPlist(1,YPPsym((P)"table"));
  T74 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_zapX_34 = YPmet(FUNCODEREF(fun_zapX_34),LITREF(lit_75),T74,ENVNUL,PNUL,sloc(322));
  T76 = VARREF_OR(YgooScolsScolxYzapX,YPfalse);
  T77 = fun_zapX_34;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YgooScolsScolxYzapX,T75);
  lit_77 = YPPsym((P)"len");
  lit_78 = YPPlist(1,YPPsym((P)"table"));
  T78 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_35 = YPmet(FUNCODEREF(fun_len_35),LITREF(lit_77),T78,ENVNUL,PNUL,sloc(327));
  T80 = VARREF_OR(YgooStypesYlen,YPfalse);
  T81 = fun_len_35;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YgooStypesYlen,T79);
  lit_79 = YPPsym((P)"<tab-enum>");
  T83 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T82 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_79),T83);
  VARSET(YgooScolsStabYLtab_enumG,T82);
  lit_80 = YPPsym((P)"@vec");
  lit_81 = YPPlist(1,YPPsym((P)"_x"));
  T84 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Ovec_36 = YPmet(FUNCODEREF(fun_Ovec_36),LITREF(lit_80),T84,ENVNUL,PNUL,sloc(331));
  T86 = VARREF_OR(YgooScolsStabYOvec,YPfalse);
  T87 = fun_Ovec_36;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooScolsStabYOvec,T85);
  lit_82 = YPPsym((P)"@vec-setter");
  lit_83 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T88 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YgooScolsStabYLtab_vecG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Ovec_setter_37 = YPmet(FUNCODEREF(fun_Ovec_setter_37),LITREF(lit_82),T88,ENVNUL,PNUL,sloc(331));
  T90 = VARREF_OR(YgooScolsStabYOvec_setter,YPfalse);
  T91 = fun_Ovec_setter_37;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooScolsStabYOvec_setter,T89);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOvec),VARREF(YgooScolsStabYOvec_setter),VARREF(YgooScolsStabYLtab_vecG),VARREF(YPprop_unbound_error));
  lit_84 = YPPsym((P)"@buc");
  lit_85 = YPPlist(1,YPPsym((P)"_x"));
  T92 = YPsig(LITREF(lit_85),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Obuc_38 = YPmet(FUNCODEREF(fun_Obuc_38),LITREF(lit_84),T92,ENVNUL,PNUL,sloc(332));
  T94 = VARREF_OR(YgooScolsStabYObuc,YPfalse);
  T95 = fun_Obuc_38;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YgooScolsStabYObuc,T93);
  lit_86 = YPPsym((P)"@buc-setter");
  lit_87 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T96 = YPsig(LITREF(lit_87),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Obuc_setter_39 = YPmet(FUNCODEREF(fun_Obuc_setter_39),LITREF(lit_86),T96,ENVNUL,PNUL,sloc(332));
  T98 = VARREF_OR(YgooScolsStabYObuc_setter,YPfalse);
  T99 = fun_Obuc_setter_39;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooScolsStabYObuc_setter,T97);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYObuc),VARREF(YgooScolsStabYObuc_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_88 = YPPsym((P)"@idx");
  lit_89 = YPPlist(1,YPPsym((P)"_x"));
  T100 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Oidx_40 = YPmet(FUNCODEREF(fun_Oidx_40),LITREF(lit_88),T100,ENVNUL,PNUL,sloc(333));
  T102 = VARREF_OR(YgooScolsStabYOidx,YPfalse);
  T103 = fun_Oidx_40;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooScolsStabYOidx,T101);
  lit_90 = YPPsym((P)"@idx-setter");
  lit_91 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T104 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Oidx_setter_41 = YPmet(FUNCODEREF(fun_Oidx_setter_41),LITREF(lit_90),T104,ENVNUL,PNUL,sloc(333));
  T106 = VARREF_OR(YgooScolsStabYOidx_setter,YPfalse);
  T107 = fun_Oidx_setter_41;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooScolsStabYOidx_setter,T105);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOidx),VARREF(YgooScolsStabYOidx_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_92 = YPPsym((P)"@fin?");
  lit_93 = YPPlist(1,YPPsym((P)"_x"));
  T108 = YPsig(LITREF(lit_93),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_OfinQ_42 = YPmet(FUNCODEREF(fun_OfinQ_42),LITREF(lit_92),T108,ENVNUL,PNUL,sloc(334));
  T110 = VARREF_OR(YgooScolsStabYOfinQ,YPfalse);
  T111 = fun_OfinQ_42;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YgooScolsStabYOfinQ,T109);
  T112 = YPfalse;
  return T112;
}

P YgooScolsStabY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112;
DEFCREGS();
  lit_94 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T0,ENVNUL,PNUL,sloc(334));
  T1 = fun_43;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOfinQ),YPfalse,VARREF(YLlogG),T1);
  T2 = XCALL3(1,VARREF(Ynew),VARREF(YgooScolsStabYLtab_enumG),VARREF(YgooScolsStabYOfinQ),YPtrue);
  VARSET(YgooScolsStabYDfin_enum,T2);
  lit_95 = YPPsym((P)"enum");
  lit_96 = YPPlist(1,YPPsym((P)"table"));
  T3 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsStabYLtab_enumG),Ynil);
  fun_enum_44 = YPmet(FUNCODEREF(fun_enum_44),LITREF(lit_95),T3,ENVNUL,PNUL,sloc(337));
  T5 = VARREF_OR(YgooScolsScolYenum,YPfalse);
  T6 = fun_enum_44;
  T4 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T5,T6);
  VARSET(YgooScolsScolYenum,T4);
  lit_97 = YPPsym((P)"nxt");
  lit_98 = YPPlist(1,YPPsym((P)"e"));
  T7 = YPsig(LITREF(lit_98),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsStabYLtab_enumG),Ynil);
  fun_nxt_45 = YPmet(FUNCODEREF(fun_nxt_45),LITREF(lit_97),T7,ENVNUL,PNUL,sloc(355));
  T9 = VARREF_OR(YgooScolsScolYnxt,YPfalse);
  T10 = fun_nxt_45;
  T8 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T9,T10);
  VARSET(YgooScolsScolYnxt,T8);
  lit_99 = YPPsym((P)"fin?");
  lit_100 = YPPlist(1,YPPsym((P)"e"));
  T11 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_46 = YPmet(FUNCODEREF(fun_finQ_46),LITREF(lit_99),T11,ENVNUL,PNUL,sloc(373));
  T13 = VARREF_OR(YgooScolsScolYfinQ,YPfalse);
  T14 = fun_finQ_46;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(YgooScolsScolYfinQ,T12);
  lit_101 = YPPsym((P)"now-key");
  lit_102 = YPPlist(1,YPPsym((P)"e"));
  T15 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_key_47 = YPmet(FUNCODEREF(fun_now_key_47),LITREF(lit_101),T15,ENVNUL,PNUL,sloc(376));
  T17 = VARREF_OR(YgooScolsScolYnow_key,YPfalse);
  T18 = fun_now_key_47;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YgooScolsScolYnow_key,T16);
  lit_103 = YPPsym((P)"now");
  lit_104 = YPPlist(1,YPPsym((P)"e"));
  T19 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_48 = YPmet(FUNCODEREF(fun_now_48),LITREF(lit_103),T19,ENVNUL,PNUL,sloc(381));
  T21 = VARREF_OR(YgooScolsScolYnow,YPfalse);
  T22 = fun_now_48;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YgooScolsScolYnow,T20);
  lit_105 = YPPsym((P)"now-setter");
  lit_106 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"e"));
  T23 = YPsig(LITREF(lit_106),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsStabYLtab_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_49 = YPmet(FUNCODEREF(fun_now_setter_49),LITREF(lit_105),T23,ENVNUL,PNUL,sloc(386));
  T25 = VARREF_OR(YgooScolsScolYnow_setter,YPfalse);
  T26 = fun_now_setter_49;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YgooScolsScolYnow_setter,T24);
  lit_107 = YPPsym((P)"tab-keys");
  lit_108 = YPPlist(1,YPPsym((P)"table"));
  lit_109 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  T28 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T28,ENVNUL,PNUL,sloc(395));
  T27 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_tab_keys_51 = YPmet(FUNCODEREF(fun_tab_keys_51),LITREF(lit_107),T27,ENVNUL,PNUL,sloc(394));
  T30 = VARREF_OR(YgooScolsStabYtab_keys,YPfalse);
  T31 = fun_tab_keys_51;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooScolsStabYtab_keys,T29);
  lit_110 = YPPsym((P)"grow-table");
  lit_111 = YPPlist(1,YPPsym((P)"table"));
  T32 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_grow_table_52 = YPmet(FUNCODEREF(fun_grow_table_52),LITREF(lit_110),T32,ENVNUL,PNUL,sloc(397));
  T34 = VARREF_OR(YgooScolsStabYgrow_table,YPfalse);
  T35 = fun_grow_table_52;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooScolsStabYgrow_table,T33);
  lit_112 = YPPsym((P)"rehash-table");
  lit_113 = YPPlist(1,YPPsym((P)"table"));
  T36 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YgooScolsScolYLtabG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLtabG),Ynil);
  fun_rehash_table_53 = YPmet(FUNCODEREF(fun_rehash_table_53),LITREF(lit_112),T36,ENVNUL,PNUL,sloc(418));
  T38 = VARREF_OR(YgooScolsStabYrehash_table,YPfalse);
  T39 = fun_rehash_table_53;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooScolsStabYrehash_table,T37);
  lit_114 = YPPsym((P)"choose-table-geometry");
  lit_115 = YPPlist(1,YPPsym((P)"capacity"));
  lit_116 = YPPlist(1,YPPsym((P)"return"));
  lit_117 = YPPlist(1,YPPsym((P)"p"));
  lit_118 = YPsb((P)"Not enough primes to compute new table size");
  T43 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T43,ENVNUL,PNUL,sloc(443));
  T42 = YPsig(LITREF(lit_116),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T42,ENVNUL,PNUL,sloc(434));
  T41 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLintG));
  T40 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),T41,Ynil);
  YgooScolsStabYchoose_table_geometry = YPmet(FUNCODEREF(YgooScolsStabYchoose_table_geometry),LITREF(lit_114),T40,ENVNUL,PNUL,sloc(431));
  T44 = YgooScolsStabYchoose_table_geometry;
  VARSET(YgooScolsStabYchoose_table_geometry,T44);
  lit_119 = YPPsym((P)"copy-to-new-vector");
  lit_120 = YPPlist(2,YPPsym((P)"table"),YPPsym((P)"new-vector"));
  lit_121 = YPPlist(2,YPPsym((P)"k"),YPPsym((P)"v"));
  lit_122 = YPsb((P)"The table is totally full this shouldn't happen");
  T46 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T46,ENVNUL,PNUL,sloc(451));
  T45 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_copy_to_new_vector_58 = YPmet(FUNCODEREF(fun_copy_to_new_vector_58),LITREF(lit_119),T45,ENVNUL,PNUL,sloc(449));
  T48 = VARREF_OR(YgooScolsStabYcopy_to_new_vector,YPfalse);
  T49 = fun_copy_to_new_vector_58;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YgooScolsStabYcopy_to_new_vector,T47);
  lit_123 = YPPlist(1,YPPsym((P)"x"));
  T50 = YPsig(LITREF(lit_123),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_59 = YPmet(FUNCODEREF(fun_id_hash_59),LITREF(lit_43),T50,ENVNUL,PNUL,sloc(488));
  T52 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T53 = fun_id_hash_59;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooScolsStabYid_hash,T51);
  lit_124 = YPPlist(1,YPPsym((P)"x"));
  T54 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLlogG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_60 = YPmet(FUNCODEREF(fun_id_hash_60),LITREF(lit_43),T54,ENVNUL,PNUL,sloc(490));
  T56 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T57 = fun_id_hash_60;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooScolsStabYid_hash,T55);
  lit_125 = YPPsym((P)"rot");
  lit_126 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T58 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  YgooScolsStabYrot = YPmet(FUNCODEREF(YgooScolsStabYrot),LITREF(lit_125),T58,ENVNUL,PNUL,sloc(493));
  T59 = YgooScolsStabYrot;
  VARSET(YgooScolsStabYrot,T59);
  lit_127 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_62 = YPmet(FUNCODEREF(fun_id_hash_62),LITREF(lit_43),T60,ENVNUL,PNUL,sloc(496));
  T62 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T63 = fun_id_hash_62;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooScolsStabYid_hash,T61);
  lit_128 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPsig(LITREF(lit_128),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_63 = YPmet(FUNCODEREF(fun_id_hash_63),LITREF(lit_43),T64,ENVNUL,PNUL,sloc(500));
  T66 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T67 = fun_id_hash_63;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooScolsStabYid_hash,T65);
  lit_129 = YPPlist(1,YPPsym((P)"x"));
  T68 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_64 = YPmet(FUNCODEREF(fun_id_hash_64),LITREF(lit_43),T68,ENVNUL,PNUL,sloc(503));
  T70 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T71 = fun_id_hash_64;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooScolsStabYid_hash,T69);
  lit_130 = YPPlist(1,YPPsym((P)"x"));
  T72 = YPsig(LITREF(lit_130),YPPlist(1,VARREF(YLtupG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_id_hash_65 = YPmet(FUNCODEREF(fun_id_hash_65),LITREF(lit_43),T72,ENVNUL,PNUL,sloc(506));
  T74 = VARREF_OR(YgooScolsStabYid_hash,YPfalse);
  T75 = fun_id_hash_65;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooScolsStabYid_hash,T73);
  lit_131 = YPPsym((P)"key-type");
  lit_132 = YPPlist(1,YPPsym((P)"x"));
  T76 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_66 = YPmet(FUNCODEREF(fun_key_type_66),LITREF(lit_131),T76,ENVNUL,PNUL,sloc(516));
  T78 = VARREF_OR(YgooScolsScolYkey_type,YPfalse);
  T79 = fun_key_type_66;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooScolsScolYkey_type,T77);
  lit_133 = YPPsym((P)"elt-type");
  lit_134 = YPPlist(1,YPPsym((P)"x"));
  T80 = YPsig(LITREF(lit_134),YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_67 = YPmet(FUNCODEREF(fun_elt_type_67),LITREF(lit_133),T80,ENVNUL,PNUL,sloc(517));
  T82 = VARREF_OR(YgooScolsScolYelt_type,YPfalse);
  T83 = fun_elt_type_67;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooScolsScolYelt_type,T81);
  lit_135 = YPPsym((P)"case-insensitive-string-hash");
  lit_136 = YPPlist(1,YPPsym((P)"x"));
  T84 = YPsig(LITREF(lit_136),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooScolsStabYcase_insensitive_string_hash = YPmet(FUNCODEREF(YgooScolsStabYcase_insensitive_string_hash),LITREF(lit_135),T84,ENVNUL,PNUL,sloc(519));
  T85 = YgooScolsStabYcase_insensitive_string_hash;
  VARSET(YgooScolsStabYcase_insensitive_string_hash,T85);
  lit_137 = YPPsym((P)"case-insensitive-string-equal");
  lit_138 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T86 = YPsig(LITREF(lit_138),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooScolsStabYcase_insensitive_string_equal = YPmet(FUNCODEREF(YgooScolsStabYcase_insensitive_string_equal),LITREF(lit_137),T86,ENVNUL,PNUL,sloc(527));
  T87 = YgooScolsStabYcase_insensitive_string_equal;
  VARSET(YgooScolsStabYcase_insensitive_string_equal,T87);
  lit_139 = YPPlist(1,YPPsym((P)"_"));
  T88 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_70 = YPmet(FUNCODEREF(fun_key_test_70),LITREF(lit_53),T88,ENVNUL,PNUL,sloc(537));
  T90 = VARREF_OR(YgooScolsScolYkey_test,YPfalse);
  T91 = fun_key_test_70;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooScolsScolYkey_test,T89);
  lit_140 = YPPlist(1,YPPsym((P)"_"));
  T92 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YgooScolsStabYLstr_tabG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_tab_hash_71 = YPmet(FUNCODEREF(fun_tab_hash_71),LITREF(lit_41),T92,ENVNUL,PNUL,sloc(538));
  T94 = VARREF_OR(YgooScolsStabYtab_hash,YPfalse);
  T95 = fun_tab_hash_71;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YgooScolsStabYtab_hash,T93);
  lit_141 = YPPsym((P)"add!");
  lit_142 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T96 = YPsig(LITREF(lit_142),YPPlist(2,VARREF(YgooScolsStabYLsetG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsStabYLsetG),Ynil);
  fun_addX_72 = YPmet(FUNCODEREF(fun_addX_72),LITREF(lit_141),T96,ENVNUL,PNUL,sloc(544));
  T98 = VARREF_OR(YgooScolsScolxYaddX,YPfalse);
  T99 = fun_addX_72;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooScolsScolxYaddX,T97);
  lit_143 = YPPsym((P)"mem?");
  lit_144 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T100 = YPsig(LITREF(lit_144),YPPlist(2,VARREF(YgooScolsStabYLsetG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_memQ_73 = YPmet(FUNCODEREF(fun_memQ_73),LITREF(lit_143),T100,ENVNUL,PNUL,sloc(548));
  T102 = VARREF_OR(YgooScolsScolYmemQ,YPfalse);
  T103 = fun_memQ_73;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooScolsScolYmemQ,T101);
  lit_145 = YPPsym((P)"elts");
  lit_146 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"keys"));
  lit_147 = YPPlist(1,YPPsym((P)"k"));
  T108 = YPsig(LITREF(lit_147),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T107 = fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T108,ENVNUL,PNUL,sloc(553));
  T106 = YPsig(LITREF(lit_146),YPPlist(2,VARREF(YLcolG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T105 = fun_elts_75 = YPmet(FUNCODEREF(fun_elts_75),LITREF(lit_145),T106,ENVNUL,PNUL,sloc(551));
  T111 = VARREF_OR(YgooScolsScolYelts,YPfalse);
  T112 = fun_elts_75;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  T109 = VARSET(YgooScolsScolYelts,T110);
  T104 = T109;
  return T104;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
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
  {&module_info_gooSfun},
  {&module_info_gooSclass},
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
  {"add-prop", &module_info_gooSclass, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"object-class", &module_info_gooSclass, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"@empty?", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"%sig-names", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"@@empty?", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSclass, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"sig-names-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<str-tab>", CVAR, &YgooScolsStabYLstr_tabG},
  {"%vector", CVAR, &YgooScolsStabYPvector},
  {"%count", CVAR, &YgooScolsStabYPcount},
  {"@idx", CVAR, &YgooScolsStabYOidx},
  {"%data", CVAR, &YgooScolsStabYPdata},
  {"%secondary-modulus", CVAR, &YgooScolsStabYPsecondary_modulus},
  {"<set>", CVAR, &YgooScolsStabYLsetG},
  {"id-hash", CVAR, &YgooScolsStabYid_hash},
  {"tab-hash", CVAR, &YgooScolsStabYtab_hash},
  {"clr!", CVAR, &YgooScolsStabYclrX},
  {"*twin-primes*", CVAR, &YgooScolsStabYTtwin_primesT},
  {"@vec-setter", CVAR, &YgooScolsStabYOvec_setter},
  {"%vacated-setter", CVAR, &YgooScolsStabYPvacated_setter},
  {"choose-table-geometry", CVAR, &YgooScolsStabYchoose_table_geometry},
  {"@fill!", CVAR, &YgooScolsStabYOfillX},
  {"@fin?", CVAR, &YgooScolsStabYOfinQ},
  {"tab-growth-threshold", CVAR, &YgooScolsStabYtab_growth_threshold},
  {"<tab-vec>", CVAR, &YgooScolsStabYLtab_vecG},
  {"---main-0---", PVAR, NULL},
  {"%vacated", CVAR, &YgooScolsStabYPvacated},
  {"tab-shrink-threshold", CVAR, &YgooScolsStabYtab_shrink_threshold},
  {"@vec", CVAR, &YgooScolsStabYOvec},
  {"case-insensitive-string-equal", CVAR, &YgooScolsStabYcase_insensitive_string_equal},
  {"$vacated-cell-marker", CVAR, &YgooScolsStabYDvacated_cell_marker},
  {"rehash-table", CVAR, &YgooScolsStabYrehash_table},
  {"%n-buckets", CVAR, &YgooScolsStabYPn_buckets},
  {"%vector-setter", CVAR, &YgooScolsStabYPvector_setter},
  {"case-insensitive-string-hash", CVAR, &YgooScolsStabYcase_insensitive_string_hash},
  {"$empty-cell-marker", CVAR, &YgooScolsStabYDempty_cell_marker},
  {"@velt-setter", PVAR, NULL},
  {"rot", CVAR, &YgooScolsStabYrot},
  {"$fin-enum", CVAR, &YgooScolsStabYDfin_enum},
  {"@velt", PVAR, NULL},
  {"grow-table", CVAR, &YgooScolsStabYgrow_table},
  {"@buc-setter", CVAR, &YgooScolsStabYObuc_setter},
  {"%primary-modulus", CVAR, &YgooScolsStabYPprimary_modulus},
  {"fab-tab-vec", CVAR, &YgooScolsStabYfab_tab_vec},
  {"copy-to-new-vector", CVAR, &YgooScolsStabYcopy_to_new_vector},
  {"@buc", CVAR, &YgooScolsStabYObuc},
  {"tab-keys", CVAR, &YgooScolsStabYtab_keys},
  {"%bucket-depth", CVAR, &YgooScolsStabYPbucket_depth},
  {"tab-growth-factor", CVAR, &YgooScolsStabYtab_growth_factor},
  {"---main-1---", PVAR, NULL},
  {"*debug-tables?*", CVAR, &YgooScolsStabYTdebug_tablesQT},
  {"<tab-enum>", CVAR, &YgooScolsStabYLtab_enumG},
  {"%count-setter", CVAR, &YgooScolsStabYPcount_setter},
  {"@idx-setter", CVAR, &YgooScolsStabYOidx_setter},
  {"---main-2---", PVAR, NULL},
  {"%data-setter", CVAR, &YgooScolsStabYPdata_setter},
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
