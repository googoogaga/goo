/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/vec");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/vec */

EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLnumG,"goo/boot","<num>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSmathYC,"goo/math","^");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(Yclass_of,"goo/boot","class-of");
EXT(Yhead,"goo/boot","head");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YgooScolsSvecYvec_len_setter,"goo/cols/vec","vec-len-setter");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YLstrG,"goo/boot","<str>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYrem,"goo/math","rem");
DEF(YgooScolsSvecYvec_len,"goo/cols/vec","vec-len");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ynil,"goo/boot","nil");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YgooScolsSvecYquicksortX,"goo/cols/vec","quicksort!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYas,"goo/types","as");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
DEF(YgooScolsSvecYvec_dat,"goo/cols/vec","vec-dat");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YgooScolsSvecYpartitionX,"goo/cols/vec","partition!");
DEF(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
DEF(YgooScolsSvecYvec,"goo/cols/vec","vec");
DEF(YgooScolsSvecYvec_dat_setter,"goo/cols/vec","vec-dat-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLpropG,"goo/boot","<prop>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_49);
DEFLIT(lit_40);
DEFLIT(lit_29);
DEFLIT(lit_47);
DEFLIT(lit_54);
DEFLIT(lit_28);
DEFLIT(lit_55);
DEFLIT(lit_45);
DEFLIT(lit_48);
DEFLIT(lit_15);
DEFLIT(lit_61);
DEFLIT(lit_22);
DEFLIT(lit_1);
DEFLIT(lit_2);
DEFLIT(lit_24);
DEFLIT(lit_37);
DEFLIT(lit_43);
DEFLIT(lit_11);
DEFLIT(lit_9);
DEFLIT(lit_30);
DEFLIT(lit_12);
DEFLIT(lit_26);
DEFLIT(lit_62);
DEFLIT(lit_51);
DEFLIT(lit_44);
DEFLIT(lit_57);
DEFLIT(lit_13);
DEFLIT(lit_0);
DEFLIT(lit_8);
DEFLIT(lit_63);
DEFLIT(lit_56);
DEFLIT(lit_32);
DEFLIT(lit_19);
DEFLIT(lit_25);
DEFLIT(lit_42);
DEFLIT(lit_58);
DEFLIT(lit_34);
DEFLIT(lit_39);
DEFLIT(lit_6);
DEFLIT(lit_4);
DEFLIT(lit_16);
DEFLIT(lit_14);
DEFLIT(lit_7);
DEFLIT(lit_5);
DEFLIT(lit_3);
DEFLIT(lit_52);
DEFLIT(lit_31);
DEFLIT(lit_27);
DEFLIT(lit_10);
DEFLIT(lit_33);
DEFLIT(lit_20);
DEFLIT(lit_50);
DEFLIT(lit_17);
DEFLIT(lit_18);
DEFLIT(lit_36);
DEFLIT(lit_46);
DEFLIT(lit_41);
DEFLIT(lit_53);
DEFLIT(lit_35);
DEFLIT(lit_23);
DEFLIT(lit_59);
DEFLIT(lit_21);
DEFLIT(lit_60);
DEFLIT(lit_38);

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
LOCFOR(fun_empty_9);
LOCFOR(fun_fab_10);
LOCFOR(fun_x_1308_11);
LOCFOR(fun_x_1306_12);
LOCFOR(fun_catX_13);
LOCFOR(fun_vec_14);
LOCFOR(fun_pushX_15);
LOCFOR(fun_popX_16);
LOCFOR(fun_to_str_17);
LOCFOR(fun_addX_18);
LOCFOR(fun_fill_19);
LOCFOR(fun_lenSfill_setter_20);
LOCFOR(fun_len_setter_21);
LOCFOR(fun_zapX_22);
LOCFOR(fun_low_elt_23);
LOCFOR(fun_low_elt_setter_24);
LOCFOR(fun_sort_by_25);
LOCFOR(fun_sort_byX_26);
LOCFOR(fun_quicksortX_27);
LOCFOR(fun_j_loop_28);
LOCFOR(fun_i_loop_29);
LOCFOR(fun_loop_30);
LOCFOR(fun_partitionX_31);
extern P YgooScolsSvecY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_vec_len_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSvecYvec_len));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_vec_len_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSvecYvec_len));
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
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_vec_dat_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSvecYvec_dat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_vec_dat_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSvecYvec_dat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL0(1,VARREF(YgooScolsSrepYrep_nul));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_6) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSvecYvec_len),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_or_7) {
  P c_,i_,default_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(c_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
loop:
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

FUNCODEDEF(fun_elt_setter_8) {
  P z_,c_,i_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(c_, 1);
  ARG(i_, 2);
loop:
  T0 = CALL2(1,VARREF(YgooSmagYL),i_,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(Yrange_error),c_,i_);
  } else {
  }
  T2 = CALL3(1,VARREF(YgooScolsScolxYlow_elt_setter),z_,c_,i_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_empty_9) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_10) {
  P c_,s_;
  P datF1885;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),s_);
  T1 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T2,YPfalse);
  datF1885 = T1;
  T3 = CALL5(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSvecYvec_len),s_,VARREF(YgooScolsSvecYvec_dat),datF1885);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1308_11) {
  P x_1307_;
  P eF1886;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1307_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1307_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1307_);
    eF1886 = T4;
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(0),eF1886);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1307_);
    a1 = T6;
    x_1307_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1306_12) {
  P x_1305_;
  P x_1308F1888;
  P sF1887;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1305_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1305_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1305_);
    sF1887 = T4;
    T5 = FUNSHELL(1,fun_x_1308_11,2);
    x_1308F1888 = T5;
    FUNINIT(x_1308F1888, 2,FREEREF(0),x_1308F1888);
    T7 = CALL1(1,VARREF(YgooScolsScolYenum),sF1887);
    T6 = CALL1(0,x_1308F1888,T7);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1305_);
    a1 = T9;
    x_1305_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_catX_13) {
  P x_,more_;
  P x_1306F1889;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T0 = FUNSHELL(1,fun_x_1306_12,2);
  x_1306F1889 = T0;
  FUNINIT(x_1306F1889, 2,x_,x_1306F1889);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  T1 = CALL1(0,x_1306F1889,T2);
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_vec_14) {
  P elts_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(elts_, 0);
loop:
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(YgooScolsSvecYLvecG),elts_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pushX_15) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolxYaddX),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_popX_16) {
  P c_;
  P xF1891;
  P new_lenF1890;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),c_);
  T1 = CALL2(1,VARREF(YgooSmathY_),T2,YPint((P)1));
  new_lenF1890 = T1;
  T3 = CALL2(1,VARREF(YgooSmagYL),new_lenF1890,YPint((P)0));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Yrange_error),c_,new_lenF1890);
  } else {
  }
  T6 = CALL2(1,VARREF(YgooScolsScolYlow_elt),c_,new_lenF1890);
  xF1891 = T6;
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),new_lenF1890,c_);
  T7 = CALL2(1,VARREF(Ytup),c_,xF1891);
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_17) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_36),T1,LITREF(lit_37));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_addX_18) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL1(1,VARREF(YgooStypesYlen),c_);
  CALL3(1,VARREF(YgooScolsScolxYlow_elt_setter),x_,c_,T0);
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_fill_19) {
  P i_;
  P tmpF1893;
  P tmpF1892;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  tmpF1892 = T1;
  if (tmpF1892 != YPfalse) {
    T4 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),FREEREF(1),FREEREF(2),i_);
    tmpF1893 = T4;
    if (tmpF1893 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T7;
      i_ = a1;
      goto loop;
      T5 = T6;
    } else {
      T5 = YPfalse;
    }
    T3 = T5;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lenSfill_setter_20) {
  P new_len_,c_,default_;
  P fillF1897;
  P old_lenF1896;
  P new_dataF1895;
  P datF1894;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2,a3;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSvecYvec_dat),c_);
  datF1894 = T1;
  T4 = CALL1(1,VARREF(YgooScolsSrepYrep_len),datF1894);
  T3 = CALL2(1,VARREF(YgooSmagYG),new_len_,T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),new_len_);
    T6 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T7,default_);
    new_dataF1895 = T6;
    CALL2(1,VARREF(YgooScolsSrepYrep_intoX),new_dataF1895,datF1894);
    CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
    T8 = CALL2(1,VARREF(YgooScolsSvecYvec_dat_setter),new_dataF1895,c_);
    T5 = T8;
    T2 = T5;
  } else {
    T11 = CALL1(1,VARREF(YgooStypesYlen),c_);
    T10 = CALL2(1,VARREF(YgooSmagYL),new_len_,T11);
    if (T10 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooStypesYlen),c_);
      old_lenF1896 = T13;
      T14 = CALL2(1,VARREF(YgooSmagYL),new_len_,YPint((P)0));
      if (T14 != YPfalse) {
        T15 = CALL2(1,VARREF(Yrange_error),c_,new_len_);
      } else {
      }
      CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
      T17 = FUNSHELL(1,fun_fill_19,4);
      fillF1897 = T17;
      FUNINIT(fillF1897, 4,old_lenF1896,default_,datF1894,fillF1897);
      T18 = CALL1(1,fillF1897,new_len_);
      T16 = T18;
      T12 = T16;
      T9 = T12;
    } else {
      T19 = CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
      T9 = T19;
    }
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_setter_21) {
  P new_len_,c_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYelt_default),c_);
  T0 = CALL3(1,VARREF(YgooScolsScolxYlenSfill_setter),new_len_,c_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zapX_22) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),c_);
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_low_elt_23) {
  P x_,i_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSvecYvec_dat),x_);
  T0 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T1,i_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_setter_24) {
  P z_,x_,i_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
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

FUNCODEDEF(fun_sort_by_25) {
  P a_,test_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(a_, 0);
  ARG(test_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),a_);
  T1 = CALL2(1,VARREF(YgooScolsSseqYsort_byX),T2,test_);
  T0 = CALL2(1,VARREF(YgooScolsScolYcol_res),a_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sort_byX_26) {
  P a_,test_;
  P sortedF1898;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(a_, 0);
  ARG(test_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),a_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),a_);
  T3 = CALL1(1,VARREF(YgooSmathY1_),T4);
  T1 = CALL4(1,VARREF(YgooScolsSvecYquicksortX),T2,YPint((P)0),T3,test_);
  sortedF1898 = T1;
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),a_,sortedF1898);
  if (T6 != YPfalse) {
    T5 = sortedF1898;
  } else {
    T7 = CALL2(1,VARREF(YgooScolsScolYinto),a_,sortedF1898);
    T5 = T7;
  }
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_quicksortX_27) {
  P a_,p_,r_,test_;
  P qF1899;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(a_, 0);
  ARG(p_, 1);
  ARG(r_, 2);
  ARG(test_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),p_,r_);
  if (T1 != YPfalse) {
    T3 = CALL4(1,VARREF(YgooScolsSvecYpartitionX),a_,p_,r_,test_);
    qF1899 = T3;
    CALL4(1,VARREF(YgooScolsSvecYquicksortX),a_,p_,qF1899,test_);
    T5 = CALL1(1,VARREF(YgooSmathY1A),qF1899);
    T4 = CALL4(1,VARREF(YgooScolsSvecYquicksortX),a_,T5,r_,test_);
    T2 = T4;
    T0 = T2;
  } else {
    T0 = a_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_j_loop_28) {
  P tmpF1900;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  T0 = CALL2(1,VARREF(YgooSmathY_),T1,YPint((P)1));
  BOXVAL(FREEREF(0)) = T0;
  T7 = BOXVAL(FREEREF(0));
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),T7);
  T5 = CALL2(1,FREEREF(3),T6,FREEREF(2));
  tmpF1900 = T5;
  if (tmpF1900 != YPfalse) {
    T8 = tmpF1900;
  } else {
    T11 = BOXVAL(FREEREF(0));
    T10 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),T11);
    T9 = CALL2(1,VARREF(YgooSmathYE),T10,FREEREF(2));
    T8 = T9;
  }
  T4 = T8;
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    goto loop;
    T2 = T12;
  } else {
    T2 = YPfalse;
  }
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_i_loop_29) {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)1));
  BOXVAL(FREEREF(0)) = T0;
  T7 = BOXVAL(FREEREF(0));
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),T7);
  T5 = CALL2(1,FREEREF(3),T6,FREEREF(2));
  T4 = CALL1(1,VARREF(Ynot),T5);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    goto loop;
    T2 = T8;
  } else {
    T2 = YPfalse;
  }
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_loop_30) {
  P x_1313F1907;
  P x_1311F1906;
  P x_1312F1905;
  P x_1309F1904;
  P x_1310F1903;
  P i_loopF1902;
  P j_loopF1901;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
loop:
  T0 = FUNSHELL(1,fun_j_loop_28,5);
  j_loopF1901 = T0;
  FUNINIT(j_loopF1901, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),j_loopF1901);
  T1 = CALL0(0,j_loopF1901);
  T2 = FUNSHELL(1,fun_i_loop_29,5);
  i_loopF1902 = T2;
  FUNINIT(i_loopF1902, 5,FREEREF(4),FREEREF(1),FREEREF(2),FREEREF(3),i_loopF1902);
  T3 = CALL0(0,i_loopF1902);
  T6 = BOXVAL(FREEREF(4));
  T7 = BOXVAL(FREEREF(0));
  T5 = CALL2(1,VARREF(YgooSmagYL),T6,T7);
  if (T5 != YPfalse) {
    x_1310F1903 = FREEREF(1);
    T9 = BOXVAL(FREEREF(4));
    x_1309F1904 = T9;
    x_1312F1905 = FREEREF(1);
    T12 = BOXVAL(FREEREF(0));
    x_1311F1906 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYelt),x_1310F1903,x_1309F1904);
    x_1313F1907 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYelt),x_1312F1905,x_1311F1906);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T15,x_1310F1903,x_1309F1904);
    T16 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),x_1313F1907,x_1312F1905,x_1311F1906);
    T13 = T16;
    T11 = T13;
    T10 = T11;
    T8 = T10;
    goto loop;
    T4 = T17;
  } else {
    T18 = BOXVAL(FREEREF(0));
    T4 = T18;
  }
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_partitionX_31) {
  P a_,p_,r_,test_;
  P loopF1911;
  P jF1910;
  P iF1909;
  P xF1908;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(a_, 0);
  ARG(p_, 1);
  ARG(r_, 2);
  ARG(test_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),a_,p_);
  xF1908 = T1;
  T3 = CALL1(1,VARREF(YgooSmathY1_),p_);
  iF1909 = T3;
  iF1909 = BOXFAB(iF1909);
  T6 = CALL1(1,VARREF(YgooSmathY1A),r_);
  jF1910 = T6;
  jF1910 = BOXFAB(jF1910);
  T9 = FUNSHELL(1,fun_loop_30,6);
  loopF1911 = T9;
  FUNINIT(loopF1911, 6,jF1910,a_,xF1908,test_,iF1909,loopF1911);
  T10 = CALL0(0,loopF1911);
  T8 = T10;
  T5 = T8;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSvecY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<vec>");
  T2 = (P)YPpair(VARREF(YLseqXG),Ynil);
  T1 = (P)YPpair(VARREF(YLflatG),T2);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooScolsSvecYLvecG,T0);
  lit_1 = YPPsym((P)"vec");
  lit_2 = YPPlist(1,YPPsym((P)"elts"));
  T4 = YPsig(LITREF(lit_2),Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsSvecYLvecG),Ynil);
  T3 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T4,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSvecYvec,T3);
  lit_3 = YPPsym((P)"vec-len");
  lit_4 = YPPlist(1,YPPsym((P)"_x"));
  T5 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_vec_len_0 = YPmet(FUNCODEREF(fun_vec_len_0),LITREF(lit_3),T5,ENVNUL,PNUL,sloc(25));
  T8 = BOUNDP(YgooScolsSvecYvec_len);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooScolsSvecYvec_len);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_vec_len_0;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooScolsSvecYvec_len,T6);
  lit_5 = YPPsym((P)"vec-len-setter");
  lit_6 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_6),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_vec_len_setter_1 = YPmet(FUNCODEREF(fun_vec_len_setter_1),LITREF(lit_5),T10,ENVNUL,PNUL,sloc(25));
  T13 = BOUNDP(YgooScolsSvecYvec_len_setter);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooScolsSvecYvec_len_setter);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_vec_len_setter_1;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooScolsSvecYvec_len_setter,T11);
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T15 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T15,ENVNUL,PNUL,sloc(25));
  T16 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSvecYvec_len),VARREF(YgooScolsSvecYvec_len_setter),VARREF(YLintG),T16);
  lit_8 = YPPsym((P)"vec-dat");
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T17 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_vec_dat_3 = YPmet(FUNCODEREF(fun_vec_dat_3),LITREF(lit_8),T17,ENVNUL,PNUL,sloc(26));
  T20 = BOUNDP(YgooScolsSvecYvec_dat);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooScolsSvecYvec_dat);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_vec_dat_3;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooScolsSvecYvec_dat,T18);
  lit_10 = YPPsym((P)"vec-dat-setter");
  lit_11 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLrepG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_vec_dat_setter_4 = YPmet(FUNCODEREF(fun_vec_dat_setter_4),LITREF(lit_10),T22,ENVNUL,PNUL,sloc(26));
  T25 = BOUNDP(YgooScolsSvecYvec_dat_setter);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooScolsSvecYvec_dat_setter);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_vec_dat_setter_4;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooScolsSvecYvec_dat_setter,T23);
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  T27 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T27,ENVNUL,PNUL,sloc(26));
  T28 = fun_5;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSvecYvec_dat),VARREF(YgooScolsSvecYvec_dat_setter),VARREF(YLrepG),T28);
  lit_13 = YPPsym((P)"len");
  lit_14 = YPPlist(1,YPPsym((P)"c"));
  T29 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_6 = YPmet(FUNCODEREF(fun_len_6),LITREF(lit_13),T29,ENVNUL,PNUL,sloc(30));
  T32 = BOUNDP(YgooStypesYlen);
  if (T32 != YPfalse) {
    T31 = VARREF(YgooStypesYlen);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_len_6;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YgooStypesYlen,T30);
  lit_15 = YPPsym((P)"elt-or");
  lit_16 = YPPlist(3,YPPsym((P)"c"),YPPsym((P)"i"),YPPsym((P)"default"));
  T34 = YPsig(LITREF(lit_16),YPPlist(3,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_7 = YPmet(FUNCODEREF(fun_elt_or_7),LITREF(lit_15),T34,ENVNUL,PNUL,sloc(33));
  T37 = BOUNDP(YgooScolsScolYelt_or);
  if (T37 != YPfalse) {
    T36 = VARREF(YgooScolsScolYelt_or);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_elt_or_7;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YgooScolsScolYelt_or,T35);
  lit_17 = YPPsym((P)"elt-setter");
  lit_18 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"c"),YPPsym((P)"i"));
  T39 = YPsig(LITREF(lit_18),YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_8 = YPmet(FUNCODEREF(fun_elt_setter_8),LITREF(lit_17),T39,ENVNUL,PNUL,sloc(38));
  T42 = BOUNDP(YgooScolsScolxYelt_setter);
  if (T42 != YPfalse) {
    T41 = VARREF(YgooScolsScolxYelt_setter);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_elt_setter_8;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooScolsScolxYelt_setter,T40);
  lit_19 = YPPsym((P)"empty");
  lit_20 = YPPlist(1,YPPsym((P)"c"));
  T45 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSvecYLvecG));
  T44 = YPsig(LITREF(lit_20),YPPlist(1,T45),YPfalse,YPint((P)1),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_empty_9 = YPmet(FUNCODEREF(fun_empty_9),LITREF(lit_19),T44,ENVNUL,PNUL,sloc(42));
  T48 = BOUNDP(YgooScolsScolYempty);
  if (T48 != YPfalse) {
    T47 = VARREF(YgooScolsScolYempty);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_empty_9;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YgooScolsScolYempty,T46);
  lit_21 = YPPsym((P)"fab");
  lit_22 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"s"));
  T51 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSvecYLvecG));
  T50 = YPsig(LITREF(lit_22),YPPlist(2,T51,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_fab_10 = YPmet(FUNCODEREF(fun_fab_10),LITREF(lit_21),T50,ENVNUL,PNUL,sloc(44));
  T54 = BOUNDP(YgooScolsScolYfab);
  if (T54 != YPfalse) {
    T53 = VARREF(YgooScolsScolYfab);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_fab_10;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YgooScolsScolYfab,T52);
  lit_23 = YPPsym((P)"cat!");
  lit_24 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  lit_25 = YPPsym((P)"x-1306");
  lit_26 = YPPlist(1,YPPsym((P)"x-1305"));
  lit_27 = YPPsym((P)"x-1308");
  lit_28 = YPPlist(1,YPPsym((P)"x-1307"));
  T58 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1308_11 = YPmet(FUNCODEREF(fun_x_1308_11),LITREF(lit_27),T58,ENVNUL,PNUL,sloc(53));
  T57 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1306_12 = YPmet(FUNCODEREF(fun_x_1306_12),LITREF(lit_25),T57,ENVNUL,PNUL,sloc(52));
  T56 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPtrue,YPint((P)1),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_catX_13 = YPmet(FUNCODEREF(fun_catX_13),LITREF(lit_23),T56,ENVNUL,PNUL,sloc(51));
  T61 = BOUNDP(YgooScolsSseqxYcatX);
  if (T61 != YPfalse) {
    T60 = VARREF(YgooScolsSseqxYcatX);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_catX_13;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YgooScolsSseqxYcatX,T59);
  lit_29 = YPPlist(1,YPPsym((P)"elts"));
  T63 = YPsig(LITREF(lit_29),Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_vec_14 = YPmet(FUNCODEREF(fun_vec_14),LITREF(lit_1),T63,ENVNUL,PNUL,sloc(57));
  T66 = BOUNDP(YgooScolsSvecYvec);
  if (T66 != YPfalse) {
    T65 = VARREF(YgooScolsSvecYvec);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_vec_14;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YgooScolsSvecYvec,T64);
  lit_30 = YPPsym((P)"push!");
  lit_31 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T68 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_pushX_15 = YPmet(FUNCODEREF(fun_pushX_15),LITREF(lit_30),T68,ENVNUL,PNUL,sloc(60));
  T71 = BOUNDP(YgooScolsSseqxYpushX);
  if (T71 != YPfalse) {
    T70 = VARREF(YgooScolsSseqxYpushX);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_pushX_15;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YgooScolsSseqxYpushX,T69);
  lit_32 = YPPsym((P)"pop!");
  lit_33 = YPPlist(1,YPPsym((P)"c"));
  T74 = XCALL2(1,VARREF(YtT),VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG));
  T73 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),T74,Ynil);
  fun_popX_16 = YPmet(FUNCODEREF(fun_popX_16),LITREF(lit_32),T73,ENVNUL,PNUL,sloc(63));
  T77 = BOUNDP(YgooScolsSseqxYpopX);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooScolsSseqxYpopX);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_popX_16;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooScolsSseqxYpopX,T75);
  lit_34 = YPPsym((P)"to-str");
  lit_35 = YPPlist(1,YPPsym((P)"x"));
  lit_36 = YPsb((P)"#[");
  lit_37 = YPsb((P)"]");
  T79 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_17 = YPmet(FUNCODEREF(fun_to_str_17),LITREF(lit_34),T79,ENVNUL,PNUL,sloc(71));
  T82 = BOUNDP(YgooSmathYto_str);
  if (T82 != YPfalse) {
    T81 = VARREF(YgooSmathYto_str);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_to_str_17;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YgooSmathYto_str,T80);
  lit_38 = YPPsym((P)"add!");
  lit_39 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T84 = YPsig(LITREF(lit_39),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_addX_18 = YPmet(FUNCODEREF(fun_addX_18),LITREF(lit_38),T84,ENVNUL,PNUL,sloc(74));
  T87 = BOUNDP(YgooScolsScolxYaddX);
  if (T87 != YPfalse) {
    T86 = VARREF(YgooScolsScolxYaddX);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_addX_18;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YgooScolsScolxYaddX,T85);
  lit_40 = YPPsym((P)"len/fill-setter");
  lit_41 = YPPlist(3,YPPsym((P)"new-len"),YPPsym((P)"c"),YPPsym((P)"default"));
  lit_42 = YPPsym((P)"fill");
  lit_43 = YPPlist(1,YPPsym((P)"i"));
  T90 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fill_19 = YPmet(FUNCODEREF(fun_fill_19),LITREF(lit_42),T90,ENVNUL,PNUL,sloc(89));
  T89 = YPsig(LITREF(lit_41),YPPlist(3,VARREF(YLintG),VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lenSfill_setter_20 = YPmet(FUNCODEREF(fun_lenSfill_setter_20),LITREF(lit_40),T89,ENVNUL,PNUL,sloc(78));
  T93 = BOUNDP(YgooScolsScolxYlenSfill_setter);
  if (T93 != YPfalse) {
    T92 = VARREF(YgooScolsScolxYlenSfill_setter);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_lenSfill_setter_20;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YgooScolsScolxYlenSfill_setter,T91);
  lit_44 = YPPsym((P)"len-setter");
  lit_45 = YPPlist(2,YPPsym((P)"new-len"),YPPsym((P)"c"));
  T95 = YPsig(LITREF(lit_45),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_len_setter_21 = YPmet(FUNCODEREF(fun_len_setter_21),LITREF(lit_44),T95,ENVNUL,PNUL,sloc(95));
  T98 = BOUNDP(YgooScolsScolxYlen_setter);
  if (T98 != YPfalse) {
    T97 = VARREF(YgooScolsScolxYlen_setter);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_len_setter_21;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YgooScolsScolxYlen_setter,T96);
  lit_46 = YPPsym((P)"zap!");
  lit_47 = YPPlist(1,YPPsym((P)"c"));
  T100 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_zapX_22 = YPmet(FUNCODEREF(fun_zapX_22),LITREF(lit_46),T100,ENVNUL,PNUL,sloc(98));
  T103 = BOUNDP(YgooScolsScolxYzapX);
  if (T103 != YPfalse) {
    T102 = VARREF(YgooScolsScolxYzapX);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_zapX_22;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YgooScolsScolxYzapX,T101);
  lit_48 = YPPsym((P)"low-elt");
  lit_49 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T105 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_23 = YPmet(FUNCODEREF(fun_low_elt_23),LITREF(lit_48),T105,ENVNUL,PNUL,sloc(100));
  T108 = BOUNDP(YgooScolsScolYlow_elt);
  if (T108 != YPfalse) {
    T107 = VARREF(YgooScolsScolYlow_elt);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_low_elt_23;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YgooScolsScolYlow_elt,T106);
  lit_50 = YPPsym((P)"low-elt-setter");
  lit_51 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"i"));
  T110 = YPsig(LITREF(lit_51),YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_low_elt_setter_24 = YPmet(FUNCODEREF(fun_low_elt_setter_24),LITREF(lit_50),T110,ENVNUL,PNUL,sloc(103));
  T113 = BOUNDP(YgooScolsScolxYlow_elt_setter);
  if (T113 != YPfalse) {
    T112 = VARREF(YgooScolsScolxYlow_elt_setter);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_low_elt_setter_24;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YgooScolsScolxYlow_elt_setter,T111);
  lit_52 = YPPsym((P)"sort-by");
  lit_53 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"test"));
  T115 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLseqIG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqIG),Ynil);
  fun_sort_by_25 = YPmet(FUNCODEREF(fun_sort_by_25),LITREF(lit_52),T115,ENVNUL,PNUL,sloc(108));
  T118 = BOUNDP(YgooScolsSseqYsort_by);
  if (T118 != YPfalse) {
    T117 = VARREF(YgooScolsSseqYsort_by);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sort_by_25;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YgooScolsSseqYsort_by,T116);
  lit_54 = YPPsym((P)"sort-by!");
  lit_55 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"test"));
  T120 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YLseqXG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_sort_byX_26 = YPmet(FUNCODEREF(fun_sort_byX_26),LITREF(lit_54),T120,ENVNUL,PNUL,sloc(111));
  T123 = BOUNDP(YgooScolsSseqYsort_byX);
  if (T123 != YPfalse) {
    T122 = VARREF(YgooScolsSseqYsort_byX);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sort_byX_26;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YgooScolsSseqYsort_byX,T121);
  lit_56 = YPPsym((P)"quicksort!");
  lit_57 = YPPlist(4,YPPsym((P)"a"),YPPsym((P)"p"),YPPsym((P)"r"),YPPsym((P)"test"));
  T125 = YPsig(LITREF(lit_57),YPPlist(4,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_quicksortX_27 = YPmet(FUNCODEREF(fun_quicksortX_27),LITREF(lit_56),T125,ENVNUL,PNUL,sloc(117));
  T128 = BOUNDP(YgooScolsSvecYquicksortX);
  if (T128 != YPfalse) {
    T127 = VARREF(YgooScolsSvecYquicksortX);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_quicksortX_27;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YgooScolsSvecYquicksortX,T126);
  lit_58 = YPPsym((P)"partition!");
  lit_59 = YPPlist(4,YPPsym((P)"a"),YPPsym((P)"p"),YPPsym((P)"r"),YPPsym((P)"test"));
  lit_60 = YPPsym((P)"loop");
  lit_61 = Ynil;
  lit_62 = YPPsym((P)"j-loop");
  lit_63 = YPPsym((P)"i-loop");
  T138 = YPsig(LITREF(lit_61),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T137 = fun_j_loop_28 = YPmet(FUNCODEREF(fun_j_loop_28),LITREF(lit_62),T138,ENVNUL,PNUL,sloc(129));
  T136 = YPsig(LITREF(lit_61),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T135 = fun_i_loop_29 = YPmet(FUNCODEREF(fun_i_loop_29),LITREF(lit_63),T136,ENVNUL,PNUL,sloc(133));
  T134 = YPsig(LITREF(lit_61),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T133 = fun_loop_30 = YPmet(FUNCODEREF(fun_loop_30),LITREF(lit_60),T134,ENVNUL,PNUL,sloc(128));
  T132 = YPsig(LITREF(lit_59),YPPlist(4,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLintG),Ynil);
  T131 = fun_partitionX_31 = YPmet(FUNCODEREF(fun_partitionX_31),LITREF(lit_58),T132,ENVNUL,PNUL,sloc(124));
  T142 = BOUNDP(YgooScolsSvecYpartitionX);
  if (T142 != YPfalse) {
    T141 = VARREF(YgooScolsSvecYpartitionX);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_partitionX_31;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  T139 = VARSET(YgooScolsSvecYpartitionX,T140);
  T130 = T139;
  return T130;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSflat;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
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
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"vec-len-setter", CVAR, &YgooScolsSvecYvec_len_setter},
  {"---main-0---", PVAR, NULL},
  {"vec-len", CVAR, &YgooScolsSvecYvec_len},
  {"quicksort!", CVAR, &YgooScolsSvecYquicksortX},
  {"vec-dat", CVAR, &YgooScolsSvecYvec_dat},
  {"partition!", CVAR, &YgooScolsSvecYpartitionX},
  {"<vec>", CVAR, &YgooScolsSvecYLvecG},
  {"vec", CVAR, &YgooScolsSvecYvec},
  {"vec-dat-setter", CVAR, &YgooScolsSvecYvec_dat_setter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<vec>", NULL},
  {"vec", NULL},
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
extern void load_module_gooSmacros (void);
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
  load_module_gooSmacros();
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
