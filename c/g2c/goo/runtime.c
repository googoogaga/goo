/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/runtime");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/runtime */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
DEF(YgooSruntimeYboot_symbols,"goo/runtime","boot-symbols");
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
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YLflatG,"goo/boot","<flat>");
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
DEF(YgooSruntimeYbooted_fab_sym,"goo/runtime","booted-fab-sym");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
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
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
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
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmacrosYpair,"goo/macros","pair");
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
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
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
DEF(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YOOemptyQ,"goo/boot","@@empty?");
DEF(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
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
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YgooSruntimeYcurry,"goo/runtime","curry");
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
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
DEF(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
DEF(YgooSruntimeYsymbols,"goo/runtime","symbols");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYS,"goo/math","/");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
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
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlogG,"goo/boot","<log>");
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
DEF(YgooSruntimeYcompose,"goo/runtime","compose");
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
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YOnew,"goo/boot","@new");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
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
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYT,"goo/math","*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_29);
DEFLIT(lit_17);
DEFLIT(lit_53);
DEFLIT(lit_37);
DEFLIT(lit_25);
DEFLIT(lit_21);
DEFLIT(lit_41);
DEFLIT(lit_0);
DEFLIT(lit_36);
DEFLIT(lit_18);
DEFLIT(lit_19);
DEFLIT(lit_50);
DEFLIT(lit_32);
DEFLIT(lit_24);
DEFLIT(lit_26);
DEFLIT(lit_51);
DEFLIT(lit_9);
DEFLIT(lit_15);
DEFLIT(lit_38);
DEFLIT(lit_47);
DEFLIT(lit_6);
DEFLIT(lit_31);
DEFLIT(lit_20);
DEFLIT(lit_16);
DEFLIT(lit_49);
DEFLIT(lit_42);
DEFLIT(lit_3);
DEFLIT(lit_12);
DEFLIT(lit_2);
DEFLIT(lit_55);
DEFLIT(lit_1);
DEFLIT(lit_43);
DEFLIT(lit_7);
DEFLIT(lit_34);
DEFLIT(lit_13);
DEFLIT(lit_22);
DEFLIT(lit_40);
DEFLIT(lit_11);
DEFLIT(lit_10);
DEFLIT(lit_14);
DEFLIT(lit_23);
DEFLIT(lit_8);
DEFLIT(lit_30);
DEFLIT(lit_45);
DEFLIT(lit_44);
DEFLIT(lit_39);
DEFLIT(lit_35);
DEFLIT(lit_4);
DEFLIT(lit_54);
DEFLIT(lit_52);
DEFLIT(lit_28);
DEFLIT(lit_46);
DEFLIT(lit_33);
DEFLIT(lit_48);
DEFLIT(lit_5);
DEFLIT(lit_27);

/* FUNCTIONS: */

FUNFOR(YgooSmacrosYmatch_empty_list);
FUNFOR(YgooSmacrosYmatch_unquote);
FUNFOR(YgooSmacrosYmatch_atom);
FUNFOR(YgooSmacrosYmatch_sublist);
LOCFOR(fun_4);
LOCFOR(fun_cat_sym_5);
LOCFOR(fun_gensym_6);
LOCFOR(fun_fab_setter_name_7);
LOCFOR(fun_var_name_8);
LOCFOR(fun_var_name_9);
LOCFOR(fun_var_type_10);
LOCFOR(fun_var_type_11);
LOCFOR(fun_identity_12);
LOCFOR(fun_13);
LOCFOR(fun_compose_14);
LOCFOR(fun_15);
LOCFOR(fun_rcurry_16);
LOCFOR(fun_17);
LOCFOR(fun_curry_18);
LOCFOR(fun_19);
LOCFOR(fun_always_20);
LOCFOR(fun_21);
LOCFOR(fun_zipped_22);
FUNFOR(YgooSruntimeYloc_val);
FUNFOR(YgooSruntimeYloc_val_setter);
FUNFOR(YgooSruntimeYapp_filename);
FUNFOR(YgooSruntimeYapp_args);
FUNFOR(YgooSruntimeYbooted_fab_sym);
FUNFOR(YgooSruntimeYboot_symbols);
extern P YgooSruntimeY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSmacrosYmatch_empty_list) {
  P x_,fail_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(fail_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T2 = CALL2(1,fail_,LITREF(lit_2),x_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYmatch_unquote) {
  P x_,fail_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(fail_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,fail_,LITREF(lit_5));
    T0 = T2;
  } else {
    T3 = CALL1(1,VARREF(Yhead),x_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYmatch_atom) {
  P x_,pat_,fail_;
  P expF3537;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(pat_, 1);
  ARG(fail_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,fail_,LITREF(lit_8),pat_);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(Yhead),x_);
    expF3537 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),expF3537,pat_);
    if (T4 != YPfalse) {
      T5 = CALL1(1,VARREF(Ytail),x_);
      T3 = T5;
    } else {
      T6 = CALL3(1,fail_,LITREF(lit_9),expF3537,pat_);
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYmatch_sublist) {
  P x_,fail_;
  P xF3538;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(fail_, 1);
  T3 = CALL1(1,VARREF(Yhead),x_);
  xF3538 = T3;
  T1 = CALL2(1,VARREF(YisaQ),xF3538,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T0 = xF3538;
  } else {
    T2 = CALL2(1,fail_,LITREF(lit_12),xF3538);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  P r_,e_;
  P T0,T1;
LINK_STACK();
  ARG(r_, 0);
  ARG(e_, 1);
  T1 = CALL1(1,VARREF(YgooSmathYto_str),e_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),r_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_cat_sym_5) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  NARGS(x_, 0);
  T2 = fun_4;
  T1 = CALL3(1,VARREF(YgooScolsScolYfold),T2,LITREF(lit_16),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_gensym_6) {
  P T0,T1,T2;
LINK_STACK();
  T2 = CALL2(1,VARREF(YgooSmathYA),VARREF(YgooSruntimeYTgensym_counterT),YPint((P)1));
  T1 = VARSET(YgooSruntimeYTgensym_counterT,T2);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_19),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_setter_name_7) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat_sym),x_,LITREF(lit_22));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_var_name_8) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_var_name_9) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_var_type_10) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_28));
}

FUNCODEDEF(fun_var_type_11) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_identity_12) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_13) {
  P args_;
  P T0,T1;
LINK_STACK();
  NARGS(args_, 0);
  T1 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,args_);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compose_14) {
  P fx_,fy_;
  P T0;
LINK_STACK();
  ARG(fx_, 0);
  ARG(fy_, 1);
  T0 = FUNFAB(fun_13,2,fy_,fx_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_15) {
  P args_;
  P T0,T1;
LINK_STACK();
  NARGS(args_, 0);
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),Ynil,args_,FREEREF(1));
  T0 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rcurry_16) {
  P f_,curried_;
  P savedcurriedF3539;
  P T0,T1;
LINK_STACK();
  ARG(f_, 0);
  NARGS(curried_, 1);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),curried_);
  savedcurriedF3539 = T1;
  T0 = FUNFAB(fun_15,2,f_,savedcurriedF3539);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_17) {
  P args_;
  P T0,T1;
LINK_STACK();
  NARGS(args_, 0);
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),Ynil,FREEREF(1),args_);
  T0 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_curry_18) {
  P f_,curried_;
  P savedcurriedF3540;
  P T0,T1;
LINK_STACK();
  ARG(f_, 0);
  NARGS(curried_, 1);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),curried_);
  savedcurriedF3540 = T1;
  T0 = FUNFAB(fun_17,2,f_,savedcurriedF3540);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_19) {
  P args_;
LINK_STACK();
  NARGS(args_, 0);
UNLINK_STACK();
  QRET(FREEREF(0));
}

FUNCODEDEF(fun_always_20) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = FUNFAB(fun_19,1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_21) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  T0 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zipped_22) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = FUNFAB(fun_21,1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSruntimeYloc_val) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPloc_val(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYloc_val_setter) {
  P z_,x_;
  P T0;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T0 = (P)YPloc_val_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYapp_filename) {
  P T0;
LINK_STACK();
  T0 = (P)YPapp_filename();
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYapp_args) {
  P T0;
LINK_STACK();
  T0 = (P)YPapp_args();
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYbooted_fab_sym) {
  P name_;
  P tmpF3541;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),VARREF(YgooSruntimeYsymbols),name_,YPfalse);
  tmpF3541 = T3;
  if (tmpF3541 != YPfalse) {
    T0 = tmpF3541;
  } else {
    T2 = CALL3(1,VARREF(Ynew),VARREF(YLsymG),VARREF(Ysym_name),name_);
    T1 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),T2,VARREF(YgooSruntimeYsymbols),name_);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYboot_symbols) {
  P symF3543;
  P symsF3542;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  symsF3542 = VARREF(YPsymbols);
  LOOP_149: {
    P a149_0;
    T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),symsF3542);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),symsF3542);
      symF3543 = T6;
      T3 = CALL1(1,VARREF(Ysym_name),symF3543);
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),symF3543,VARREF(YgooSruntimeYsymbols),T3);
      T5 = CALL1(1,VARREF(Ytail),symsF3542);
      a149_0 = T5;
      symsF3542 = a149_0;
      goto LOOP_149;
      T0 = T4;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

P YgooSruntimeY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
DEFCREGS();
  lit_0 = YPPsym((P)"match-empty-list");
  lit_1 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"fail"));
  lit_2 = YPsb((P)"Match Empty Failure of %=");
  T0 = YPsig(LITREF(lit_1),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmatch_empty_list = YPmet(FUNCODEREF(YgooSmacrosYmatch_empty_list),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(44));
  T1 = YgooSmacrosYmatch_empty_list;
  VARSET(YgooSmacrosYmatch_empty_list,T1);
  lit_3 = YPPsym((P)"match-unquote");
  lit_4 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"fail"));
  lit_5 = YPsb((P)"Match Failure Empty List on Unquote");
  T2 = YPsig(LITREF(lit_4),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmatch_unquote = YPmet(FUNCODEREF(YgooSmacrosYmatch_unquote),LITREF(lit_3),T2,ENVNUL,PNUL,sloc(49));
  T3 = YgooSmacrosYmatch_unquote;
  VARSET(YgooSmacrosYmatch_unquote,T3);
  lit_6 = YPPsym((P)"match-atom");
  lit_7 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"pat"),YPPsym((P)"fail"));
  lit_8 = YPsb((P)"Match Failure Empty List on %=");
  lit_9 = YPsb((P)"Match Failure of %= on %=");
  T4 = YPsig(LITREF(lit_7),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSmacrosYmatch_atom = YPmet(FUNCODEREF(YgooSmacrosYmatch_atom),LITREF(lit_6),T4,ENVNUL,PNUL,sloc(54));
  T5 = YgooSmacrosYmatch_atom;
  VARSET(YgooSmacrosYmatch_atom,T5);
  lit_10 = YPPsym((P)"match-sublist");
  lit_11 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"fail"));
  lit_12 = YPsb((P)"Match Failure on Sub List on %=");
  T6 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmatch_sublist = YPmet(FUNCODEREF(YgooSmacrosYmatch_sublist),LITREF(lit_10),T6,ENVNUL,PNUL,sloc(62));
  T7 = YgooSmacrosYmatch_sublist;
  VARSET(YgooSmacrosYmatch_sublist,T7);
  lit_13 = YPPsym((P)"cat-sym");
  lit_14 = YPPlist(1,YPPsym((P)"x"));
  lit_15 = YPPlist(2,YPPsym((P)"r"),YPPsym((P)"e"));
  lit_16 = YPsb((P)"");
  T9 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T9,ENVNUL,PNUL,sloc(69));
  T8 = YPsig(LITREF(lit_14),Ynil,YPtrue,YPint((P)0),VARREF(YLsymG),Ynil);
  fun_cat_sym_5 = YPmet(FUNCODEREF(fun_cat_sym_5),LITREF(lit_13),T8,ENVNUL,PNUL,sloc(68));
  T11 = VARREF_OR(YgooSmacrosYcat_sym,YPfalse);
  T12 = fun_cat_sym_5;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YgooSmacrosYcat_sym,T10);
  VARSET(YgooSruntimeYTgensym_counterT,YPint((P)1000));
  lit_17 = YPPsym((P)"gensym");
  lit_18 = Ynil;
  lit_19 = YPsb((P)"x-");
  T13 = YPsig(LITREF(lit_18),Ynil,YPfalse,YPint((P)0),VARREF(YLsymG),Ynil);
  fun_gensym_6 = YPmet(FUNCODEREF(fun_gensym_6),LITREF(lit_17),T13,ENVNUL,PNUL,sloc(73));
  T15 = VARREF_OR(YgooSmacrosYgensym,YPfalse);
  T16 = fun_gensym_6;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YgooSmacrosYgensym,T14);
  lit_20 = YPPsym((P)"fab-setter-name");
  lit_21 = YPPlist(1,YPPsym((P)"x"));
  lit_22 = YPsb((P)"-setter");
  T17 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_fab_setter_name_7 = YPmet(FUNCODEREF(fun_fab_setter_name_7),LITREF(lit_20),T17,ENVNUL,PNUL,sloc(76));
  T19 = VARREF_OR(YgooSmacrosYfab_setter_name,YPfalse);
  T20 = fun_fab_setter_name_7;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YgooSmacrosYfab_setter_name,T18);
  lit_23 = YPPsym((P)"var-name");
  lit_24 = YPPlist(1,YPPsym((P)"x"));
  T21 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_var_name_8 = YPmet(FUNCODEREF(fun_var_name_8),LITREF(lit_23),T21,ENVNUL,PNUL,sloc(79));
  T23 = VARREF_OR(YgooSmacrosYvar_name,YPfalse);
  T24 = fun_var_name_8;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YgooSmacrosYvar_name,T22);
  lit_25 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_var_name_9 = YPmet(FUNCODEREF(fun_var_name_9),LITREF(lit_23),T25,ENVNUL,PNUL,sloc(81));
  T27 = VARREF_OR(YgooSmacrosYvar_name,YPfalse);
  T28 = fun_var_name_9;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooSmacrosYvar_name,T26);
  lit_26 = YPPsym((P)"var-type");
  lit_27 = YPPlist(1,YPPsym((P)"x"));
  lit_28 = YPPsym((P)"<any>");
  T29 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_var_type_10 = YPmet(FUNCODEREF(fun_var_type_10),LITREF(lit_26),T29,ENVNUL,PNUL,sloc(83));
  T31 = VARREF_OR(YgooSmacrosYvar_type,YPfalse);
  T32 = fun_var_type_10;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooSmacrosYvar_type,T30);
  lit_29 = YPPlist(1,YPPsym((P)"x"));
  T33 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_var_type_11 = YPmet(FUNCODEREF(fun_var_type_11),LITREF(lit_26),T33,ENVNUL,PNUL,sloc(85));
  T35 = VARREF_OR(YgooSmacrosYvar_type,YPfalse);
  T36 = fun_var_type_11;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YgooSmacrosYvar_type,T34);
  lit_30 = YPPsym((P)"identity");
  lit_31 = YPPlist(1,YPPsym((P)"x"));
  T37 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_identity_12 = YPmet(FUNCODEREF(fun_identity_12),LITREF(lit_30),T37,ENVNUL,PNUL,sloc(89));
  T39 = VARREF_OR(YgooSruntimeYidentity,YPfalse);
  T40 = fun_identity_12;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YgooSruntimeYidentity,T38);
  lit_32 = YPPsym((P)"compose");
  lit_33 = YPPlist(2,YPPsym((P)"fx"),YPPsym((P)"fy"));
  lit_34 = YPPlist(1,YPPsym((P)"args"));
  T42 = YPsig(LITREF(lit_34),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T42,ENVNUL,PNUL,sloc(92));
  T41 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLfunG),Ynil);
  fun_compose_14 = YPmet(FUNCODEREF(fun_compose_14),LITREF(lit_32),T41,ENVNUL,PNUL,sloc(91));
  T44 = VARREF_OR(YgooSruntimeYcompose,YPfalse);
  T45 = fun_compose_14;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooSruntimeYcompose,T43);
  lit_35 = YPPsym((P)"rcurry");
  lit_36 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"curried"));
  lit_37 = YPPlist(1,YPPsym((P)"args"));
  T47 = YPsig(LITREF(lit_37),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T47,ENVNUL,PNUL,sloc(100));
  T46 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YLfunG)),YPtrue,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_rcurry_16 = YPmet(FUNCODEREF(fun_rcurry_16),LITREF(lit_35),T46,ENVNUL,PNUL,sloc(98));
  T49 = VARREF_OR(YgooSruntimeYrcurry,YPfalse);
  T50 = fun_rcurry_16;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YgooSruntimeYrcurry,T48);
  lit_38 = YPPsym((P)"curry");
  lit_39 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"curried"));
  lit_40 = YPPlist(1,YPPsym((P)"args"));
  T52 = YPsig(LITREF(lit_40),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T52,ENVNUL,PNUL,sloc(104));
  T51 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLfunG)),YPtrue,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_curry_18 = YPmet(FUNCODEREF(fun_curry_18),LITREF(lit_38),T51,ENVNUL,PNUL,sloc(102));
  T54 = VARREF_OR(YgooSruntimeYcurry,YPfalse);
  T55 = fun_curry_18;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooSruntimeYcurry,T53);
  lit_41 = YPPsym((P)"always");
  lit_42 = YPPlist(1,YPPsym((P)"x"));
  lit_43 = YPPlist(1,YPPsym((P)"args"));
  T57 = YPsig(LITREF(lit_43),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T57,ENVNUL,PNUL,sloc(107));
  T56 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_always_20 = YPmet(FUNCODEREF(fun_always_20),LITREF(lit_41),T56,ENVNUL,PNUL,sloc(106));
  T59 = VARREF_OR(YgooSruntimeYalways,YPfalse);
  T60 = fun_always_20;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YgooSruntimeYalways,T58);
  lit_44 = YPPsym((P)"zipped");
  lit_45 = YPPlist(1,YPPsym((P)"x"));
  lit_46 = YPPlist(1,YPPsym((P)"t"));
  T62 = YPsig(LITREF(lit_46),YPPlist(1,VARREF(YLtupG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T62,ENVNUL,PNUL,sloc(110));
  T61 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_zipped_22 = YPmet(FUNCODEREF(fun_zipped_22),LITREF(lit_44),T61,ENVNUL,PNUL,sloc(109));
  T64 = VARREF_OR(YgooSruntimeYzipped,YPfalse);
  T65 = fun_zipped_22;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooSruntimeYzipped,T63);
  lit_47 = YPPsym((P)"loc-val");
  lit_48 = YPPlist(1,YPPsym((P)"x"));
  T66 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSruntimeYloc_val = YPmet(FUNCODEREF(YgooSruntimeYloc_val),LITREF(lit_47),T66,ENVNUL,PNUL,sloc(117));
  T67 = YgooSruntimeYloc_val;
  VARSET(YgooSruntimeYloc_val,T67);
  lit_49 = YPPsym((P)"loc-val-setter");
  lit_50 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T68 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSruntimeYloc_val_setter = YPmet(FUNCODEREF(YgooSruntimeYloc_val_setter),LITREF(lit_49),T68,ENVNUL,PNUL,sloc(120));
  T69 = YgooSruntimeYloc_val_setter;
  VARSET(YgooSruntimeYloc_val_setter,T69);
  lit_51 = YPPsym((P)"app-filename");
  T70 = YPsig(LITREF(lit_18),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSruntimeYapp_filename = YPmet(FUNCODEREF(YgooSruntimeYapp_filename),LITREF(lit_51),T70,ENVNUL,PNUL,sloc(125));
  T71 = YgooSruntimeYapp_filename;
  VARSET(YgooSruntimeYapp_filename,T71);
  lit_52 = YPPsym((P)"app-args");
  T72 = YPsig(LITREF(lit_18),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSruntimeYapp_args = YPmet(FUNCODEREF(YgooSruntimeYapp_args),LITREF(lit_52),T72,ENVNUL,PNUL,sloc(127));
  T73 = YgooSruntimeYapp_args;
  VARSET(YgooSruntimeYapp_args,T73);
  T74 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsStabYLstr_tabG),YPint((P)10000));
  VARSET(YgooSruntimeYsymbols,T74);
  lit_53 = YPPsym((P)"booted-fab-sym");
  lit_54 = YPPlist(1,YPPsym((P)"name"));
  T75 = YPsig(LITREF(lit_54),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSruntimeYbooted_fab_sym = YPmet(FUNCODEREF(YgooSruntimeYbooted_fab_sym),LITREF(lit_53),T75,ENVNUL,PNUL,sloc(131));
  T76 = YgooSruntimeYbooted_fab_sym;
  VARSET(YgooSruntimeYbooted_fab_sym,T76);
  lit_55 = YPPsym((P)"boot-symbols");
  T77 = YPsig(LITREF(lit_18),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSruntimeYboot_symbols = YPmet(FUNCODEREF(YgooSruntimeYboot_symbols),LITREF(lit_55),T77,ENVNUL,PNUL,sloc(135));
  T78 = YgooSruntimeYboot_symbols;
  VARSET(YgooSruntimeYboot_symbols,T78);
  XCALL0(1,VARREF(YgooSruntimeYboot_symbols));
  VARSET(Yfab_sym,VARREF(YgooSruntimeYbooted_fab_sym));
  T79 = YPfalse;
  return T79;
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
extern MODULE_INFO module_info_gooSmag;

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
  {"add-prop", &module_info_gooSclass, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
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
  {"bit?", &module_info_gooSmath, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"%puts", &module_info_gooSboot, NULL},
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
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
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
  {"%get", &module_info_gooSboot, NULL},
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
  {"cosh", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
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
  {"%os-val", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
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
  {"%define-method", &module_info_gooSfun, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
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
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
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
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
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
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"%peek", &module_info_gooSboot, NULL},
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
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
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
  {"class-name", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
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
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
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
  {"%fatan2", &module_info_gooSboot, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
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
  {"%fsqrt", &module_info_gooSboot, NULL},
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
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
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
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
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
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
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
  {"fun-specs", &module_info_gooSfun, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
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
  {"%put", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
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
  {"vec", &module_info_gooScolsSvec, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
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
  {"%fcos", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
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
  {"%fpow", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"sig-names-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
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
  {"boot-symbols", CVAR, &YgooSruntimeYboot_symbols},
  {"*gensym-counter*", CVAR, &YgooSruntimeYTgensym_counterT},
  {"booted-fab-sym", CVAR, &YgooSruntimeYbooted_fab_sym},
  {"---main-0---", PVAR, NULL},
  {"app-args", CVAR, &YgooSruntimeYapp_args},
  {"app-filename", CVAR, &YgooSruntimeYapp_filename},
  {"curry", CVAR, &YgooSruntimeYcurry},
  {"loc-val", CVAR, &YgooSruntimeYloc_val},
  {"loc-val-setter", CVAR, &YgooSruntimeYloc_val_setter},
  {"identity", CVAR, &YgooSruntimeYidentity},
  {"rcurry", CVAR, &YgooSruntimeYrcurry},
  {"always", CVAR, &YgooSruntimeYalways},
  {"symbols", CVAR, &YgooSruntimeYsymbols},
  {"compose", CVAR, &YgooSruntimeYcompose},
  {"zipped", CVAR, &YgooSruntimeYzipped},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"match-sublist", NULL},
  {"always", NULL},
  {"napp", NULL},
  {"*gensym-counter*", NULL},
  {"match-atom", NULL},
  {"curry", NULL},
  {"var-type", NULL},
  {"match-unquote", NULL},
  {"match-empty-list", NULL},
  {"app-args", NULL},
  {"rcurry", NULL},
  {"var-name", NULL},
  {"app-filename", NULL},
  {"loc-val-setter", NULL},
  {"fab-setter-name", NULL},
  {"loc-val", NULL},
  {"gensym", NULL},
  {"compose", NULL},
  {"zipped", NULL},
  {"cat-sym", NULL},
  {"identity", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSruntime;
MODULE_INFO module_info_gooSruntime = {
  "goo/runtime",
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

extern void load_module_gooSruntime (void);

void load_module_gooSruntime (void) {
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

  (P)YgooSruntimeY___main_0___();

}

/* END OF GENERATED CODE. */
