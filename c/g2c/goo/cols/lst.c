/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/lst");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/lst */

EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
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
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooScolsSlstYPdat,"goo/cols/lst","%dat");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
DEF(YgooScolsSlstYLlst_enumG,"goo/cols/lst","<lst-enum>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYC,"goo/math","^");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YgooScolsSlstYPkey_setter,"goo/cols/lst","%key-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YgooScolsSlstYPkey,"goo/cols/lst","%key");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YgooScolsSlstYDline_pah_empty,"goo/cols/lst","$line-pah-empty");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YgooScolsSlstYline_of_setter,"goo/cols/lst","line-of-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YgooScolsSlstYLline_pahG,"goo/cols/lst","<line-pah>");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YgooScolsSlstYline_pah,"goo/cols/lst","line-pah");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YLstrG,"goo/boot","<str>");
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
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ylst,"goo/boot","lst");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
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
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYfloorS,"goo/math","floor/");
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
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yclass_props,"goo/boot","class-props");
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
EXT(Ygen_src,"goo/boot","gen-src");
DEF(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYas,"goo/types","as");
EXT(Yprop_owner,"goo/boot","prop-owner");
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
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ynil,"goo/boot","nil");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
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
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YgooScolsSlstYPdat_setter,"goo/cols/lst","%dat-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Ynul,"goo/boot","nul");
EXT(YLpropG,"goo/boot","<prop>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_107);
DEFLIT(lit_112);
DEFLIT(lit_13);
DEFLIT(lit_7);
DEFLIT(lit_22);
DEFLIT(lit_111);
DEFLIT(lit_88);
DEFLIT(lit_101);
DEFLIT(lit_48);
DEFLIT(lit_47);
DEFLIT(lit_50);
DEFLIT(lit_85);
DEFLIT(lit_38);
DEFLIT(lit_31);
DEFLIT(lit_26);
DEFLIT(lit_91);
DEFLIT(lit_65);
DEFLIT(lit_84);
DEFLIT(lit_126);
DEFLIT(lit_8);
DEFLIT(lit_45);
DEFLIT(lit_110);
DEFLIT(lit_33);
DEFLIT(lit_55);
DEFLIT(lit_117);
DEFLIT(lit_2);
DEFLIT(lit_119);
DEFLIT(lit_6);
DEFLIT(lit_122);
DEFLIT(lit_19);
DEFLIT(lit_34);
DEFLIT(lit_90);
DEFLIT(lit_37);
DEFLIT(lit_46);
DEFLIT(lit_74);
DEFLIT(lit_17);
DEFLIT(lit_120);
DEFLIT(lit_68);
DEFLIT(lit_29);
DEFLIT(lit_116);
DEFLIT(lit_11);
DEFLIT(lit_78);
DEFLIT(lit_18);
DEFLIT(lit_130);
DEFLIT(lit_3);
DEFLIT(lit_56);
DEFLIT(lit_36);
DEFLIT(lit_15);
DEFLIT(lit_1);
DEFLIT(lit_79);
DEFLIT(lit_62);
DEFLIT(lit_61);
DEFLIT(lit_103);
DEFLIT(lit_108);
DEFLIT(lit_57);
DEFLIT(lit_0);
DEFLIT(lit_63);
DEFLIT(lit_87);
DEFLIT(lit_23);
DEFLIT(lit_58);
DEFLIT(lit_104);
DEFLIT(lit_123);
DEFLIT(lit_30);
DEFLIT(lit_12);
DEFLIT(lit_118);
DEFLIT(lit_71);
DEFLIT(lit_106);
DEFLIT(lit_59);
DEFLIT(lit_43);
DEFLIT(lit_14);
DEFLIT(lit_98);
DEFLIT(lit_121);
DEFLIT(lit_81);
DEFLIT(lit_95);
DEFLIT(lit_72);
DEFLIT(lit_53);
DEFLIT(lit_131);
DEFLIT(lit_25);
DEFLIT(lit_80);
DEFLIT(lit_60);
DEFLIT(lit_124);
DEFLIT(lit_52);
DEFLIT(lit_76);
DEFLIT(lit_102);
DEFLIT(lit_105);
DEFLIT(lit_51);
DEFLIT(lit_16);
DEFLIT(lit_93);
DEFLIT(lit_99);
DEFLIT(lit_39);
DEFLIT(lit_49);
DEFLIT(lit_69);
DEFLIT(lit_24);
DEFLIT(lit_77);
DEFLIT(lit_94);
DEFLIT(lit_96);
DEFLIT(lit_10);
DEFLIT(lit_42);
DEFLIT(lit_9);
DEFLIT(lit_113);
DEFLIT(lit_75);
DEFLIT(lit_20);
DEFLIT(lit_4);
DEFLIT(lit_28);
DEFLIT(lit_83);
DEFLIT(lit_27);
DEFLIT(lit_97);
DEFLIT(lit_66);
DEFLIT(lit_127);
DEFLIT(lit_5);
DEFLIT(lit_64);
DEFLIT(lit_114);
DEFLIT(lit_40);
DEFLIT(lit_115);
DEFLIT(lit_109);
DEFLIT(lit_86);
DEFLIT(lit_41);
DEFLIT(lit_82);
DEFLIT(lit_67);
DEFLIT(lit_73);
DEFLIT(lit_21);
DEFLIT(lit_129);
DEFLIT(lit_44);
DEFLIT(lit_92);
DEFLIT(lit_125);
DEFLIT(lit_32);
DEFLIT(lit_70);
DEFLIT(lit_89);
DEFLIT(lit_54);
DEFLIT(lit_35);
DEFLIT(lit_128);
DEFLIT(lit_100);

/* FUNCTIONS: */

LOCFOR(fun_sum_0);
LOCFOR(fun_len_1);
LOCFOR(fun_fnd_2);
LOCFOR(fun_elt_or_3);
LOCFOR(fun_fnd_4);
LOCFOR(fun_elt_setter_5);
LOCFOR(fun_emptyQ_6);
LOCFOR(fun_empty_7);
LOCFOR(fun_fab_8);
LOCFOR(fun_fab_9);
LOCFOR(fun_build_10);
LOCFOR(fun_fabs_11);
LOCFOR(fun_Pdat_12);
LOCFOR(fun_Pdat_setter_13);
LOCFOR(fun_Pkey_14);
LOCFOR(fun_Pkey_setter_15);
LOCFOR(fun_16);
LOCFOR(fun_enum_17);
LOCFOR(fun_finQ_18);
LOCFOR(fun_nxt_19);
LOCFOR(fun_now_20);
LOCFOR(fun_now_setter_21);
LOCFOR(fun_now_key_22);
LOCFOR(fun_add_23);
LOCFOR(fun_fnd_24);
LOCFOR(fun_last_25);
LOCFOR(fun_loop_26);
LOCFOR(fun_revX_27);
LOCFOR(fun_find_tail_28);
LOCFOR(fun_connect_29);
LOCFOR(fun_x_1300_30);
LOCFOR(fun_catX_31);
LOCFOR(fun_lst_32);
LOCFOR(fun_pair_33);
LOCFOR(fun_pushX_34);
LOCFOR(fun_popX_35);
LOCFOR(fun_bub_36);
LOCFOR(fun_loop_37);
LOCFOR(fun_sort_byX_38);
LOCFOR(fun_to_str_39);
LOCFOR(fun_assq_40);
LOCFOR(fun_assqn_41);
LOCFOR(fun_x_1304_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_line_of_45);
LOCFOR(fun_line_of_46);
LOCFOR(fun_line_of_setter_47);
LOCFOR(fun_48);
FUNFOR(YgooScolsSlstYline_pah);
LOCFOR(fun_empty_50);
FUNFOR(YgooScolsSlstYline_pair);
LOCFOR(fun_fab_52);
FUNFOR(YgooScolsSlstYline_list);
LOCFOR(fun_copy_54);
LOCFOR(fun_line_list_of_55);
LOCFOR(fun_line_list_of_56);
extern P YgooScolsSlstY___main_0___ ();
extern P YgooScolsSlstY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_sum_0) {
  P count_,x_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(count_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = count_;
  } else {
    T3 = CALL2(1,VARREF(YgooSmathYA),count_,YPint((P)1));
    T4 = CALL1(1,VARREF(Ytail),x_);
    a1 = T3;
    a2 = T4;
    count_ = a1;
    x_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_1) {
  P x_;
  P sumF1819;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_sum_0,1);
  sumF1819 = T1;
  FUNINIT(sumF1819, 1,sumF1819);
  T2 = CALL2(1,sumF1819,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_2) {
  P count_,x_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(count_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),count_,FREEREF(1));
    if (T3 != YPfalse) {
      T4 = CALL1(1,VARREF(Yhead),x_);
      T2 = T4;
    } else {
      T6 = CALL2(1,VARREF(YgooSmathYA),count_,YPint((P)1));
      T7 = CALL1(1,VARREF(Ytail),x_);
      a1 = T6;
      a2 = T7;
      count_ = a1;
      x_ = a2;
      goto loop;
      T2 = T5;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_or_3) {
  P x_,key_,default_;
  P fndF1820;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_2,3);
  fndF1820 = T1;
  FUNINIT(fndF1820, 3,default_,key_,fndF1820);
  T2 = CALL2(1,fndF1820,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fnd_4) {
  P count_,x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(count_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yrange_error),x_,FREEREF(0));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),count_,FREEREF(0));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Yhead_setter),FREEREF(1),x_);
      T3 = T5;
    } else {
      T7 = CALL2(1,VARREF(YgooSmathYA),count_,YPint((P)1));
      T8 = CALL1(1,VARREF(Ytail),x_);
      a1 = T7;
      a2 = T8;
      count_ = a1;
      x_ = a2;
      goto loop;
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_5) {
  P z_,x_,key_;
  P fndF1821;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(key_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_4,3);
  fndF1821 = T1;
  FUNINIT(fndF1821, 3,key_,z_,fndF1821);
  T2 = CALL2(1,fndF1821,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_emptyQ_6) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(Yclass_of),c_);
  T1 = CALL1(1,VARREF(YgooScolsScolYempty),T2);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),c_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_empty_7) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(Ynil);
}

FUNCODEDEF(fun_fab_8) {
  P i_,res_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(res_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYG),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALL3(1,VARREF(Ynew),FREEREF(0),VARREF(Ytail),res_);
    a1 = T3;
    a2 = T4;
    i_ = a1;
    res_ = a2;
    goto loop;
    T0 = T2;
  } else {
    T0 = res_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fab_9) {
  P t_,s_;
  P fabF1822;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_fab_8,2);
  fabF1822 = T1;
  FUNINIT(fabF1822, 2,t_,fabF1822);
  T3 = CALL1(1,VARREF(YgooScolsScolYempty),t_);
  T2 = CALL2(1,fabF1822,s_,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_10) {
  P index_,result_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(index_, 0);
  ARG(result_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),index_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = result_;
  } else {
    T3 = CALL2(1,VARREF(YgooSmathY_),index_,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),index_);
    T4 = CALL5(1,VARREF(Ynew),FREEREF(0),VARREF(Yhead),T5,VARREF(Ytail),result_);
    a1 = T3;
    a2 = T4;
    index_ = a1;
    result_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fabs_11) {
  P c_,objects_;
  P buildF1823;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
loop:
  T1 = FUNSHELL(1,fun_build_10,3);
  buildF1823 = T1;
  FUNINIT(buildF1823, 3,c_,objects_,buildF1823);
  T4 = CALL1(1,VARREF(YgooStypesYlen),objects_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T5 = CALL1(1,VARREF(YgooScolsScolYempty),c_);
  T2 = CALL2(1,buildF1823,T3,T5);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_Pdat_12) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSlstYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdat_setter_13) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pkey_14) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSlstYPkey));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pkey_setter_15) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYPkey));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_16) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_enum_17) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPdat),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_finQ_18) {
  P e_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_19) {
  P e_;
  P x_1298F1824;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  x_1298F1824 = e_;
  T2 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)1));
  CALL2(1,VARREF(YgooScolsSlstYPkey_setter),T1,x_1298F1824);
  T4 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  CALL2(1,VARREF(YgooScolsSlstYPdat_setter),T3,x_1298F1824);
  T0 = x_1298F1824;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_20) {
  P e_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL1(1,VARREF(Yhead),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_setter_21) {
  P v_,e_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL2(1,VARREF(Yhead_setter),v_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_key_22) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_23) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_24) {
  P x_,px_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(px_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(Yhead),px_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Ytail),x_);
    a1 = T4;
    a2 = x_;
    x_ = a1;
    px_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_last_25) {
  P x_;
  P fndF1825;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_fnd_24,1);
  fndF1825 = T1;
  FUNINIT(fndF1825, 1,fndF1825);
  T2 = CALL2(0,fndF1825,x_,x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_26) {
  P l_,r_;
  P tF1826;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = r_;
  } else {
    T3 = CALL1(1,VARREF(Ytail),l_);
    tF1826 = T3;
    CALL2(1,VARREF(Ytail_setter),r_,l_);
    a1 = tF1826;
    a2 = l_;
    l_ = a1;
    r_ = a2;
    goto loop;
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_revX_27) {
  P c_;
  P loopF1827;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_26,1);
  loopF1827 = T1;
  FUNINIT(loopF1827, 1,loopF1827);
  T4 = CALL1(1,VARREF(Yclass_of),c_);
  T3 = CALL1(1,VARREF(YgooScolsScolYempty),T4);
  T2 = CALL2(0,loopF1827,c_,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_tail_28) {
  P p_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(p_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),p_);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  if (T1 != YPfalse) {
    T0 = p_;
  } else {
    T4 = CALL1(1,VARREF(Ytail),p_);
    a1 = T4;
    p_ = a1;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_connect_29) {
  P x_,y_;
  P find_tailF1828;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    CALL2(1,VARREF(Ytail_setter),y_,x_);
    T3 = FUNSHELL(1,fun_find_tail_28,1);
    find_tailF1828 = T3;
    FUNINIT(find_tailF1828, 1,find_tailF1828);
    T4 = CALL1(1,find_tailF1828,y_);
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1300_30) {
  P x_1299_;
  P xF1829;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1299_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1299_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1299_);
    xF1829 = T4;
    T6 = BOXVAL(FREEREF(0));
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),xF1829);
    T5 = CALL2(1,FREEREF(1),T6,T7);
    BOXVAL(FREEREF(0)) = T5;
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1299_);
    a1 = T9;
    x_1299_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_catX_31) {
  P x_,more_;
  P x_1300F1833;
  P curF1832;
  P resultF1831;
  P connectF1830;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T1 = fun_connect_29;
  connectF1830 = T1;
  T3 = CALL1(1,VARREF(Ylst),YPfalse);
  resultF1831 = T3;
  curF1832 = resultF1831;
  curF1832 = BOXFAB(curF1832);
  T7 = BOXVAL(curF1832);
  T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),x_);
  T6 = CALL2(1,connectF1830,T7,T8);
  BOXVAL(curF1832) = T6;
  T9 = FUNSHELL(1,fun_x_1300_30,3);
  x_1300F1833 = T9;
  FUNINIT(x_1300F1833, 3,curF1832,connectF1830,x_1300F1833);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  T10 = CALL1(0,x_1300F1833,T11);
  T12 = CALL1(1,VARREF(Ytail),resultF1831);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lst_32) {
  P objects_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(objects_, 0);
loop:
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(YLlstG),objects_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pair_33) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALL5(1,VARREF(Ynew),VARREF(YLlstG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pushX_34) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_popX_35) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),c_);
  T2 = CALL1(1,VARREF(Yhead),c_);
  T0 = CALL2(1,VARREF(Ytup),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_bub_36) {
  P tmp_,prev_,next_;
  P tmpF1834;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(tmp_, 0);
  ARG(prev_, 1);
  ARG(next_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),next_);
  if (T1 != YPfalse) {
    T2 = CALL1(0,FREEREF(0),tmp_);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),next_);
    T7 = CALL1(1,VARREF(Yhead),prev_);
    T5 = CALL2(1,FREEREF(1),T6,T7);
    if (T5 != YPfalse) {
      T9 = CALL1(1,VARREF(Yhead),prev_);
      tmpF1834 = T9;
      T10 = CALL1(1,VARREF(Yhead),next_);
      CALL2(1,VARREF(Yhead_setter),T10,prev_);
      T11 = CALL2(1,VARREF(Yhead_setter),tmpF1834,next_);
      T8 = T11;
      T4 = T8;
    } else {
      T4 = tmp_;
    }
    T12 = CALL1(1,VARREF(Ytail),prev_);
    T13 = CALL1(1,VARREF(Ytail),next_);
    a1 = T4;
    a2 = T12;
    a3 = T13;
    tmp_ = a1;
    prev_ = a2;
    next_ = a3;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_37) {
  P tmp_;
  P bubF1835;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(tmp_, 0);
loop:
  T2 = CALL1(1,VARREF(Yhead),FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),tmp_,T2);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T4 = FUNSHELL(1,fun_bub_36,3);
    bubF1835 = T4;
    FUNINIT(bubF1835, 3,FREEREF(1),FREEREF(2),bubF1835);
    T6 = CALL1(1,VARREF(Yhead),FREEREF(0));
    T7 = CALL1(1,VARREF(Ytail),FREEREF(0));
    T5 = CALL3(0,bubF1835,T6,FREEREF(0),T7);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sort_byX_38) {
  P items_,test_;
  P loopF1836;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(items_, 0);
  ARG(test_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_37,3);
  loopF1836 = T1;
  FUNINIT(loopF1836, 3,items_,loopF1836,test_);
  T2 = CALL1(0,loopF1836,YPfalse);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_39) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_82),T1,LITREF(lit_83));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assq_40) {
  P x_,l_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL1(1,VARREF(Yhead),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL2(1,VARREF(YgooScolsSlstYassq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assqn_41) {
  P x_,l_,pos_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
  ARG(pos_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),T5,pos_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL3(1,VARREF(YgooScolsSlstYassqn),x_,T8,pos_);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1304_42) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_90),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P return_;
  P DemptyF1851;
  P classF1850;
  P x_1303F1849;
  P x_1303F1848;
  P x_1303F1847;
  P x_1303F1846;
  P x_1303F1845;
  P x_1303F1844;
  P x_1303F1843;
  P x_1303F1842;
  P x_1303F1841;
  P supersF1840;
  P nameF1839;
  P x_1303F1838;
  P x_1304F1837;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1304_42,2);
  x_1304F1837 = T1;
  FUNINIT(x_1304F1837, 2,FREEREF(0),return_);
  x_1303F1838 = FREEREF(0);
  nameF1839 = YPfalse;
  nameF1839 = BOXFAB(nameF1839);
  supersF1840 = YPfalse;
  supersF1840 = BOXFAB(supersF1840);
  T7 = CALL2(1,VARREF(YisaQ),x_1303F1838,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1303F1838,LITREF(lit_90),x_1304F1837);
    x_1303F1841 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1303F1841,x_1304F1837);
    BOXVAL(nameF1839) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1303F1841);
    x_1303F1842 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1303F1842,x_1304F1837);
    x_1303F1843 = T14;
    BOXVAL(supersF1840) = x_1303F1843;
    x_1303F1844 = Ynil;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1303F1844,x_1304F1837);
    x_1303F1845 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1303F1845,x_1304F1837);
    T19 = CALL1(1,VARREF(Ytail),x_1303F1844);
    x_1303F1846 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1303F1846,x_1304F1837);
    T16 = T20;
    T15 = T16;
    T21 = CALL1(1,VARREF(Ytail),x_1303F1842);
    x_1303F1847 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1303F1847,x_1304F1837);
    x_1303F1848 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1303F1848,x_1304F1837);
    T25 = CALL1(1,VARREF(Ytail),x_1303F1847);
    x_1303F1849 = T25;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1303F1849,x_1304F1837);
    T22 = T26;
    T13 = T22;
    T10 = T13;
    T8 = T10;
  } else {
    T27 = CALL2(1,x_1304F1837,LITREF(lit_91),x_1303F1838);
  }
  T30 = BOXVAL(nameF1839);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_92),T30,LITREF(lit_93));
  classF1850 = T29;
  T33 = BOXVAL(nameF1839);
  T32 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_94),T33,LITREF(lit_95));
  DemptyF1851 = T32;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T39 = CALL1(1,VARREF(Ylst),classF1850);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T43 = BOXVAL(supersF1840);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_99));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T40,LITREF(lit_99));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T47 = CALL1(1,VARREF(Ylst),DemptyF1851);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_101));
  T51 = CALL1(1,VARREF(Ylst),classF1850);
  T49 = CALL3(1,VARREF(YgooSmacrosYcat),T50,T51,LITREF(lit_99));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T45 = CALL4(1,VARREF(YgooSmacrosYcat),T46,T47,T48,LITREF(lit_99));
  T44 = CALL1(1,VARREF(Ylst),T45);
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_102));
  T56 = BOXVAL(nameF1839);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_103));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_104));
  T58 = CALL3(1,VARREF(YgooSmacrosYcat),T59,T60,LITREF(lit_99));
  T57 = CALL1(1,VARREF(Ylst),T58);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_101));
  T64 = CALL1(1,VARREF(Ylst),classF1850);
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T66 = CALL1(1,VARREF(Ylst),LITREF(lit_103));
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_106));
  T68 = CALL1(1,VARREF(Ylst),LITREF(lit_104));
  T62 = CALLN(1,VARREF(YgooSmacrosYcat),7,T63,T64,T65,T66,T67,T68,LITREF(lit_99));
  T61 = CALL1(1,VARREF(Ylst),T62);
  T53 = CALL5(1,VARREF(YgooSmacrosYcat),T54,T55,T57,T61,LITREF(lit_99));
  T52 = CALL1(1,VARREF(Ylst),T53);
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_107));
  T72 = CALL1(1,VARREF(Ylst),LITREF(lit_21));
  T77 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
  T80 = CALL1(1,VARREF(Ylst),LITREF(lit_109));
  T81 = CALL1(1,VARREF(Ylst),classF1850);
  T79 = CALL3(1,VARREF(YgooSmacrosYcat),T80,T81,LITREF(lit_99));
  T78 = CALL1(1,VARREF(Ylst),T79);
  T76 = CALL3(1,VARREF(YgooSmacrosYcat),T77,T78,LITREF(lit_99));
  T75 = CALL1(1,VARREF(Ylst),T76);
  T82 = CALL1(1,VARREF(Ylst),LITREF(lit_110));
  T83 = CALL1(1,VARREF(Ylst),classF1850);
  T74 = CALL4(1,VARREF(YgooSmacrosYcat),T75,T82,T83,LITREF(lit_99));
  T73 = CALL1(1,VARREF(Ylst),T74);
  T84 = CALL1(1,VARREF(Ylst),DemptyF1851);
  T70 = CALL5(1,VARREF(YgooSmacrosYcat),T71,T72,T73,T84,LITREF(lit_99));
  T69 = CALL1(1,VARREF(Ylst),T70);
  T34 = CALLN(1,VARREF(YgooSmacrosYcat),6,T35,T36,T44,T52,T69,LITREF(lit_99));
  T31 = T34;
  T28 = T31;
  T5 = T28;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_43,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_line_of_45) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_line_of_46) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSlstYline_of));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_line_of_setter_47) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYline_of));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YgooScolsSlstYline_pah) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALL5(1,VARREF(Ynew),VARREF(YgooScolsSlstYLline_pahG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_50) {
  P e_;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YgooScolsSlstYDline_pah_empty));
}

FUNCODEDEF(YgooScolsSlstYline_pair) {
  P h_,t_,l_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  ARG(l_, 2);
loop:
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YgooScolsSlstYLline_listG),VARREF(Yhead),h_,VARREF(Ytail),t_,VARREF(YgooScolsSlstYline_of),l_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fab_52) {
  P r_,i_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(r_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = r_;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),i_);
    T3 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T4,r_,FREEREF(1));
    T5 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    a1 = T3;
    a2 = T5;
    r_ = a1;
    i_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsSlstYline_list) {
  P l_,elts_;
  P fabF1852;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  NARGS(elts_, 1);
loop:
  T1 = FUNSHELL(1,fun_fab_52,3);
  fabF1852 = T1;
  FUNINIT(fabF1852, 3,elts_,l_,fabF1852);
  T3 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YgooScolsSlstYLline_listG));
  T5 = CALL1(1,VARREF(YgooStypesYlen),elts_);
  T4 = CALL2(1,VARREF(YgooSmathY_),T5,YPint((P)1));
  T2 = CALL2(0,fabF1852,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_copy_54) {
  P l_,src_;
  P tmpF1857;
  P tmpF1856;
  P tF1855;
  P hF1854;
  P tmpF1853;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(src_, 1);
loop:
  T2 = CALL2(1,VARREF(YisaQ),src_,VARREF(YLlstG));
  tmpF1853 = T2;
  if (tmpF1853 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),src_);
    T4 = CALL1(1,VARREF(Ynot),T5);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(Yhead),src_);
    hF1854 = T7;
    T9 = CALL1(1,VARREF(Ytail),src_);
    tF1855 = T9;
    T13 = CALL1(1,VARREF(YgooScolsSlstYline_of),hF1854);
    tmpF1856 = T13;
    if (tmpF1856 != YPfalse) {
      T14 = tmpF1856;
    } else {
      T14 = l_;
    }
    T12 = T14;
    T11 = CALL2(0,FREEREF(0),T12,hF1854);
    T17 = CALL1(1,VARREF(YgooScolsSlstYline_of),tF1855);
    tmpF1857 = T17;
    if (tmpF1857 != YPfalse) {
      T18 = tmpF1857;
    } else {
      T18 = l_;
    }
    T16 = T18;
    T15 = CALL2(0,FREEREF(0),T16,tF1855);
    T10 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T11,T15,l_);
    T8 = T10;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = src_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_line_list_of_55) {
  P ctx_,src_;
  P copyF1858;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(ctx_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_copy_54,1);
  copyF1858 = T1;
  FUNINIT(copyF1858, 1,copyF1858);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),ctx_);
  T2 = CALL2(0,copyF1858,T3,src_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_line_list_of_56) {
  P ctx_,src_;
  P a1,a2;
LINK_STACK();
  ARG(ctx_, 0);
  ARG(src_, 1);
loop:
UNLINK_STACK();
  QRET(src_);
}

P YgooScolsSlstY___main_0___() {
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
  P T160,T161,T162,T163,T164,T165;
DEFCREGS();
loop:
  VARSET(YgooScolsSlstYLlistG,VARREF(YLlstG));
  lit_0 = YPPsym((P)"lst");
  lit_1 = YPPlist(1,YPPsym((P)"elts"));
  T1 = YPsig(LITREF(lit_1),Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ylst,T0);
  VARSET(YgooScolsSlstYlist,VARREF(Ylst));
  lit_2 = YPPsym((P)"pair");
  lit_3 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T3 = YPsig(LITREF(lit_3),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYpair,T2);
  lit_4 = YPPsym((P)"assqn");
  lit_5 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"l"),YPPsym((P)"pos"));
  T5 = YPsig(LITREF(lit_5),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSlstYassqn,T4);
  lit_6 = YPPsym((P)"assq");
  lit_7 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T7 = YPsig(LITREF(lit_7),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSlstYassq,T6);
  lit_8 = YPPsym((P)"len");
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  lit_10 = YPPsym((P)"sum");
  lit_11 = YPPlist(2,YPPsym((P)"count"),YPPsym((P)"x"));
  T9 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sum_0 = YPmet(FUNCODEREF(fun_sum_0),LITREF(lit_10),T9,ENVNUL,PNUL,sloc(38));
  T8 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_1 = YPmet(FUNCODEREF(fun_len_1),LITREF(lit_8),T8,ENVNUL,PNUL,sloc(37));
  T12 = BOUNDP(YgooStypesYlen);
  if (T12 != YPfalse) {
    T11 = VARREF(YgooStypesYlen);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_len_1;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YgooStypesYlen,T10);
  lit_12 = YPPsym((P)"elt-or");
  lit_13 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"key"),YPPsym((P)"default"));
  lit_14 = YPPsym((P)"fnd");
  lit_15 = YPPlist(2,YPPsym((P)"count"),YPPsym((P)"x"));
  T15 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_2 = YPmet(FUNCODEREF(fun_fnd_2),LITREF(lit_14),T15,ENVNUL,PNUL,sloc(42));
  T14 = YPsig(LITREF(lit_13),YPPlist(3,VARREF(YLlstG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_3 = YPmet(FUNCODEREF(fun_elt_or_3),LITREF(lit_12),T14,ENVNUL,PNUL,sloc(41));
  T18 = BOUNDP(YgooScolsScolYelt_or);
  if (T18 != YPfalse) {
    T17 = VARREF(YgooScolsScolYelt_or);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_elt_or_3;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YgooScolsScolYelt_or,T16);
  lit_16 = YPPsym((P)"elt-setter");
  lit_17 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"key"));
  lit_18 = YPPlist(2,YPPsym((P)"count"),YPPsym((P)"x"));
  T21 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_4 = YPmet(FUNCODEREF(fun_fnd_4),LITREF(lit_14),T21,ENVNUL,PNUL,sloc(50));
  T20 = YPsig(LITREF(lit_17),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_5 = YPmet(FUNCODEREF(fun_elt_setter_5),LITREF(lit_16),T20,ENVNUL,PNUL,sloc(49));
  T24 = BOUNDP(YgooScolsScolxYelt_setter);
  if (T24 != YPfalse) {
    T23 = VARREF(YgooScolsScolxYelt_setter);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_elt_setter_5;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YgooScolsScolxYelt_setter,T22);
  lit_19 = YPPsym((P)"empty?");
  lit_20 = YPPlist(1,YPPsym((P)"c"));
  T26 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_emptyQ_6 = YPmet(FUNCODEREF(fun_emptyQ_6),LITREF(lit_19),T26,ENVNUL,PNUL,sloc(57));
  T29 = BOUNDP(YgooSmacrosYemptyQ);
  if (T29 != YPfalse) {
    T28 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_emptyQ_6;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YgooSmacrosYemptyQ,T27);
  lit_21 = YPPsym((P)"empty");
  lit_22 = YPPlist(1,YPPsym((P)"c"));
  T32 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T31 = YPsig(LITREF(lit_22),YPPlist(1,T32),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_empty_7 = YPmet(FUNCODEREF(fun_empty_7),LITREF(lit_21),T31,ENVNUL,PNUL,sloc(59));
  T35 = BOUNDP(YgooScolsScolYempty);
  if (T35 != YPfalse) {
    T34 = VARREF(YgooScolsScolYempty);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_empty_7;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YgooScolsScolYempty,T33);
  lit_23 = YPPsym((P)"fab");
  lit_24 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"s"));
  lit_25 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"res"));
  T39 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fab_8 = YPmet(FUNCODEREF(fun_fab_8),LITREF(lit_23),T39,ENVNUL,PNUL,sloc(62));
  T38 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T37 = YPsig(LITREF(lit_24),YPPlist(2,T38,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_fab_9 = YPmet(FUNCODEREF(fun_fab_9),LITREF(lit_23),T37,ENVNUL,PNUL,sloc(61));
  T42 = BOUNDP(YgooScolsScolYfab);
  if (T42 != YPfalse) {
    T41 = VARREF(YgooScolsScolYfab);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_fab_9;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooScolsScolYfab,T40);
  lit_26 = YPPsym((P)"fabs");
  lit_27 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"objects"));
  lit_28 = YPPsym((P)"build");
  lit_29 = YPPlist(2,YPPsym((P)"index"),YPPsym((P)"result"));
  T46 = YPsig(LITREF(lit_29),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_build_10 = YPmet(FUNCODEREF(fun_build_10),LITREF(lit_28),T46,ENVNUL,PNUL,sloc(68));
  T45 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T44 = YPsig(LITREF(lit_27),YPPlist(1,T45),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_fabs_11 = YPmet(FUNCODEREF(fun_fabs_11),LITREF(lit_26),T44,ENVNUL,PNUL,sloc(67));
  T49 = BOUNDP(YgooSmathYfabs);
  if (T49 != YPfalse) {
    T48 = VARREF(YgooSmathYfabs);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_fabs_11;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YgooSmathYfabs,T47);
  lit_30 = YPPsym((P)"<lst-enum>");
  T52 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T51 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_30),T52);
  VARSET(YgooScolsSlstYLlst_enumG,T51);
  lit_31 = YPPsym((P)"%dat");
  lit_32 = YPPlist(1,YPPsym((P)"_x"));
  T53 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_12 = YPmet(FUNCODEREF(fun_Pdat_12),LITREF(lit_31),T53,ENVNUL,PNUL,sloc(76));
  T56 = BOUNDP(YgooScolsSlstYPdat);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooScolsSlstYPdat);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_Pdat_12;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooScolsSlstYPdat,T54);
  lit_33 = YPPsym((P)"%dat-setter");
  lit_34 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_34),YPPlist(2,VARREF(YLlstG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdat_setter_13 = YPmet(FUNCODEREF(fun_Pdat_setter_13),LITREF(lit_33),T58,ENVNUL,PNUL,sloc(76));
  T61 = BOUNDP(YgooScolsSlstYPdat_setter);
  if (T61 != YPfalse) {
    T60 = VARREF(YgooScolsSlstYPdat_setter);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_Pdat_setter_13;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YgooScolsSlstYPdat_setter,T59);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPdat),VARREF(YgooScolsSlstYPdat_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_35 = YPPsym((P)"%key");
  lit_36 = YPPlist(1,YPPsym((P)"_x"));
  T63 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pkey_14 = YPmet(FUNCODEREF(fun_Pkey_14),LITREF(lit_35),T63,ENVNUL,PNUL,sloc(77));
  T66 = BOUNDP(YgooScolsSlstYPkey);
  if (T66 != YPfalse) {
    T65 = VARREF(YgooScolsSlstYPkey);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_Pkey_14;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YgooScolsSlstYPkey,T64);
  lit_37 = YPPsym((P)"%key-setter");
  lit_38 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_38),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pkey_setter_15 = YPmet(FUNCODEREF(fun_Pkey_setter_15),LITREF(lit_37),T68,ENVNUL,PNUL,sloc(77));
  T71 = BOUNDP(YgooScolsSlstYPkey_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(YgooScolsSlstYPkey_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_Pkey_setter_15;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YgooScolsSlstYPkey_setter,T69);
  lit_39 = YPPlist(1,YPPsym((P)"_x"));
  T73 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T73,ENVNUL,PNUL,sloc(77));
  T74 = fun_16;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPkey),VARREF(YgooScolsSlstYPkey_setter),VARREF(YLintG),T74);
  lit_40 = YPPsym((P)"enum");
  lit_41 = YPPlist(1,YPPsym((P)"x"));
  T75 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_enum_17 = YPmet(FUNCODEREF(fun_enum_17),LITREF(lit_40),T75,ENVNUL,PNUL,sloc(78));
  T78 = BOUNDP(YgooScolsScolYenum);
  if (T78 != YPfalse) {
    T77 = VARREF(YgooScolsScolYenum);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_enum_17;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YgooScolsScolYenum,T76);
  lit_42 = YPPsym((P)"fin?");
  lit_43 = YPPlist(1,YPPsym((P)"e"));
  T80 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_18 = YPmet(FUNCODEREF(fun_finQ_18),LITREF(lit_42),T80,ENVNUL,PNUL,sloc(80));
  T83 = BOUNDP(YgooScolsScolYfinQ);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooScolsScolYfinQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_finQ_18;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooScolsScolYfinQ,T81);
  lit_44 = YPPsym((P)"nxt");
  lit_45 = YPPlist(1,YPPsym((P)"e"));
  T85 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_nxt_19 = YPmet(FUNCODEREF(fun_nxt_19),LITREF(lit_44),T85,ENVNUL,PNUL,sloc(82));
  T88 = BOUNDP(YgooScolsScolYnxt);
  if (T88 != YPfalse) {
    T87 = VARREF(YgooScolsScolYnxt);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_nxt_19;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooScolsScolYnxt,T86);
  lit_46 = YPPsym((P)"now");
  lit_47 = YPPlist(1,YPPsym((P)"e"));
  T90 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_20 = YPmet(FUNCODEREF(fun_now_20),LITREF(lit_46),T90,ENVNUL,PNUL,sloc(84));
  T93 = BOUNDP(YgooScolsScolYnow);
  if (T93 != YPfalse) {
    T92 = VARREF(YgooScolsScolYnow);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_now_20;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YgooScolsScolYnow,T91);
  lit_48 = YPPsym((P)"now-setter");
  lit_49 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"e"));
  T95 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_21 = YPmet(FUNCODEREF(fun_now_setter_21),LITREF(lit_48),T95,ENVNUL,PNUL,sloc(86));
  T98 = BOUNDP(YgooScolsScolYnow_setter);
  if (T98 != YPfalse) {
    T97 = VARREF(YgooScolsScolYnow_setter);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_now_setter_21;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YgooScolsScolYnow_setter,T96);
  lit_50 = YPPsym((P)"now-key");
  lit_51 = YPPlist(1,YPPsym((P)"e"));
  T100 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_now_key_22 = YPmet(FUNCODEREF(fun_now_key_22),LITREF(lit_50),T100,ENVNUL,PNUL,sloc(88));
  T103 = BOUNDP(YgooScolsScolYnow_key);
  if (T103 != YPfalse) {
    T102 = VARREF(YgooScolsScolYnow_key);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_now_key_22;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YgooScolsScolYnow_key,T101);
  lit_52 = YPPsym((P)"add");
  lit_53 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T105 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_add_23 = YPmet(FUNCODEREF(fun_add_23),LITREF(lit_52),T105,ENVNUL,PNUL,sloc(92));
  T108 = BOUNDP(YgooScolsScolYadd);
  if (T108 != YPfalse) {
    T107 = VARREF(YgooScolsScolYadd);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_add_23;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YgooScolsScolYadd,T106);
  lit_54 = YPPsym((P)"last");
  lit_55 = YPPlist(1,YPPsym((P)"x"));
  lit_56 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"px"));
  T111 = YPsig(LITREF(lit_56),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_24 = YPmet(FUNCODEREF(fun_fnd_24),LITREF(lit_14),T111,ENVNUL,PNUL,sloc(96));
  T110 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_25 = YPmet(FUNCODEREF(fun_last_25),LITREF(lit_54),T110,ENVNUL,PNUL,sloc(95));
  T114 = BOUNDP(YgooSmacrosYlast);
  if (T114 != YPfalse) {
    T113 = VARREF(YgooSmacrosYlast);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_last_25;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YgooSmacrosYlast,T112);
  lit_57 = YPPsym((P)"rev!");
  lit_58 = YPPlist(1,YPPsym((P)"c"));
  lit_59 = YPPsym((P)"loop");
  lit_60 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"r"));
  T117 = YPsig(LITREF(lit_60),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_26 = YPmet(FUNCODEREF(fun_loop_26),LITREF(lit_59),T117,ENVNUL,PNUL,sloc(100));
  T116 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_revX_27 = YPmet(FUNCODEREF(fun_revX_27),LITREF(lit_57),T116,ENVNUL,PNUL,sloc(99));
  T120 = BOUNDP(YgooSmacrosYrevX);
  if (T120 != YPfalse) {
    T119 = VARREF(YgooSmacrosYrevX);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_revX_27;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YgooSmacrosYrevX,T118);
  lit_61 = YPPsym((P)"cat!");
  lit_62 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  lit_63 = YPPsym((P)"connect");
  lit_64 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  lit_65 = YPPsym((P)"find-tail");
  lit_66 = YPPlist(1,YPPsym((P)"p"));
  lit_67 = YPPsym((P)"x-1300");
  lit_68 = YPPlist(1,YPPsym((P)"x-1299"));
  T125 = YPsig(LITREF(lit_66),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_tail_28 = YPmet(FUNCODEREF(fun_find_tail_28),LITREF(lit_65),T125,ENVNUL,PNUL,sloc(113));
  T124 = YPsig(LITREF(lit_64),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_connect_29 = YPmet(FUNCODEREF(fun_connect_29),LITREF(lit_63),T124,ENVNUL,PNUL,sloc(108));
  T123 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1300_30 = YPmet(FUNCODEREF(fun_x_1300_30),LITREF(lit_67),T123,ENVNUL,PNUL,sloc(120));
  T122 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLlstG)),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_catX_31 = YPmet(FUNCODEREF(fun_catX_31),LITREF(lit_61),T122,ENVNUL,PNUL,sloc(107));
  T128 = BOUNDP(YgooScolsSseqxYcatX);
  if (T128 != YPfalse) {
    T127 = VARREF(YgooScolsSseqxYcatX);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_catX_31;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YgooScolsSseqxYcatX,T126);
  lit_69 = YPPlist(1,YPPsym((P)"objects"));
  T130 = YPsig(LITREF(lit_69),Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  fun_lst_32 = YPmet(FUNCODEREF(fun_lst_32),LITREF(lit_0),T130,ENVNUL,PNUL,sloc(125));
  T133 = BOUNDP(Ylst);
  if (T133 != YPfalse) {
    T132 = VARREF(Ylst);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_lst_32;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(Ylst,T131);
  lit_70 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T135 = YPsig(LITREF(lit_70),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pair_33 = YPmet(FUNCODEREF(fun_pair_33),LITREF(lit_2),T135,ENVNUL,PNUL,sloc(128));
  T138 = BOUNDP(YgooSmacrosYpair);
  if (T138 != YPfalse) {
    T137 = VARREF(YgooSmacrosYpair);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_pair_33;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YgooSmacrosYpair,T136);
  lit_71 = YPPsym((P)"push!");
  lit_72 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T140 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pushX_34 = YPmet(FUNCODEREF(fun_pushX_34),LITREF(lit_71),T140,ENVNUL,PNUL,sloc(131));
  T143 = BOUNDP(YgooScolsSseqxYpushX);
  if (T143 != YPfalse) {
    T142 = VARREF(YgooScolsSseqxYpushX);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_pushX_34;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YgooScolsSseqxYpushX,T141);
  lit_73 = YPPsym((P)"pop!");
  lit_74 = YPPlist(1,YPPsym((P)"c"));
  T146 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T145 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T146,Ynil);
  fun_popX_35 = YPmet(FUNCODEREF(fun_popX_35),LITREF(lit_73),T145,ENVNUL,PNUL,sloc(134));
  T149 = BOUNDP(YgooScolsSseqxYpopX);
  if (T149 != YPfalse) {
    T148 = VARREF(YgooScolsSseqxYpopX);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_popX_35;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YgooScolsSseqxYpopX,T147);
  lit_75 = YPPsym((P)"sort-by!");
  lit_76 = YPPlist(2,YPPsym((P)"items"),YPPsym((P)"test"));
  lit_77 = YPPlist(1,YPPsym((P)"tmp"));
  lit_78 = YPPsym((P)"bub");
  lit_79 = YPPlist(3,YPPsym((P)"tmp"),YPPsym((P)"prev"),YPPsym((P)"next"));
  T153 = YPsig(LITREF(lit_79),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_bub_36 = YPmet(FUNCODEREF(fun_bub_36),LITREF(lit_78),T153,ENVNUL,PNUL,sloc(142));
  T152 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_37 = YPmet(FUNCODEREF(fun_loop_37),LITREF(lit_59),T152,ENVNUL,PNUL,sloc(139));
  T151 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sort_byX_38 = YPmet(FUNCODEREF(fun_sort_byX_38),LITREF(lit_75),T151,ENVNUL,PNUL,sloc(138));
  T156 = BOUNDP(YgooScolsSseqYsort_byX);
  if (T156 != YPfalse) {
    T155 = VARREF(YgooScolsSseqYsort_byX);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_sort_byX_38;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YgooScolsSseqYsort_byX,T154);
  lit_80 = YPPsym((P)"to-str");
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  lit_82 = YPsb((P)"(");
  lit_83 = YPsb((P)")");
  T160 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T159 = fun_to_str_39 = YPmet(FUNCODEREF(fun_to_str_39),LITREF(lit_80),T160,ENVNUL,PNUL,sloc(153));
  T164 = BOUNDP(YgooSmathYto_str);
  if (T164 != YPfalse) {
    T163 = VARREF(YgooSmathYto_str);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_to_str_39;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T165);
  T161 = VARSET(YgooSmathYto_str,T162);
  T158 = T161;
  return T158;
}

P YgooScolsSlstY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
DEFCREGS();
loop:
  lit_84 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T0 = YPsig(LITREF(lit_84),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assq_40 = YPmet(FUNCODEREF(fun_assq_40),LITREF(lit_6),T0,ENVNUL,PNUL,sloc(160));
  T3 = BOUNDP(YgooScolsSlstYassq);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooScolsSlstYassq);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_assq_40;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooScolsSlstYassq,T1);
  lit_85 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"l"),YPPsym((P)"pos"));
  T5 = YPsig(LITREF(lit_85),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_assqn_41 = YPmet(FUNCODEREF(fun_assqn_41),LITREF(lit_4),T5,ENVNUL,PNUL,sloc(167));
  T8 = BOUNDP(YgooScolsSlstYassqn);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooScolsSlstYassqn);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_assqn_41;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooScolsSlstYassqn,T6);
  lit_86 = YPPlist(1,YPPsym((P)"exp"));
  lit_87 = YPPlist(1,YPPsym((P)"return"));
  lit_88 = YPPsym((P)"x-1304");
  lit_89 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_90 = YPPsym((P)"def-list");
  lit_91 = YPsb((P)"Match Pattern Failure");
  lit_92 = YPsb((P)"<");
  lit_93 = YPsb((P)">");
  lit_94 = YPsb((P)"$");
  lit_95 = YPsb((P)"-empty");
  lit_96 = YPPsym((P)"seq");
  lit_97 = YPPsym((P)"dc");
  lit_98 = YPPsym((P)"<lst>");
  lit_99 = Ynil;
  lit_100 = YPPsym((P)"dv");
  lit_101 = YPPsym((P)"new");
  lit_102 = YPPsym((P)"df");
  lit_103 = YPPsym((P)"h");
  lit_104 = YPPsym((P)"t");
  lit_105 = YPPsym((P)"head");
  lit_106 = YPPsym((P)"tail");
  lit_107 = YPPsym((P)"dm");
  lit_108 = YPPsym((P)"e");
  lit_109 = YPPsym((P)"t=");
  lit_110 = YPPsym((P)"=>");
  T12 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1304_42 = YPmet(FUNCODEREF(fun_x_1304_42),LITREF(lit_88),T12,ENVNUL,PNUL,YPfalse);
  T11 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T10,ENVNUL,PNUL,YPfalse);
  T13 = fun_44;
  YPmacro(YPPsym((P)"goo/cols/lst"),YPPsym((P)"def-list"),T13);
  lit_111 = YPPsym((P)"line-of");
  lit_112 = YPPlist(1,YPPsym((P)"x"));
  T14 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_line_of_45 = YPmet(FUNCODEREF(fun_line_of_45),LITREF(lit_111),T14,ENVNUL,PNUL,sloc(183));
  T17 = BOUNDP(YgooScolsSlstYline_of);
  if (T17 != YPfalse) {
    T16 = VARREF(YgooScolsSlstYline_of);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_line_of_45;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YgooScolsSlstYline_of,T15);
  lit_113 = YPPsym((P)"<line>");
  T20 = (P)YPpair(VARREF(YLmagG),Ynil);
  T19 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_113),T20);
  VARSET(YgooScolsSlstYLlineG,T19);
  lit_114 = YPPlist(1,YPPsym((P)"_x"));
  T21 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YgooScolsSlstYLlineG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_line_of_46 = YPmet(FUNCODEREF(fun_line_of_46),LITREF(lit_111),T21,ENVNUL,PNUL,sloc(186));
  T24 = BOUNDP(YgooScolsSlstYline_of);
  if (T24 != YPfalse) {
    T23 = VARREF(YgooScolsSlstYline_of);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_line_of_46;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YgooScolsSlstYline_of,T22);
  lit_115 = YPPsym((P)"line-of-setter");
  lit_116 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T27 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T26 = YPsig(LITREF(lit_116),YPPlist(2,T27,VARREF(YgooScolsSlstYLlineG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_line_of_setter_47 = YPmet(FUNCODEREF(fun_line_of_setter_47),LITREF(lit_115),T26,ENVNUL,PNUL,sloc(186));
  T30 = BOUNDP(YgooScolsSlstYline_of_setter);
  if (T30 != YPfalse) {
    T29 = VARREF(YgooScolsSlstYline_of_setter);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_line_of_setter_47;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YgooScolsSlstYline_of_setter,T28);
  lit_117 = YPPlist(1,YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T32,ENVNUL,PNUL,sloc(186));
  T33 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T34 = fun_48;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSlstYLlineG),VARREF(YgooScolsSlstYline_of),VARREF(YgooScolsSlstYline_of_setter),T33,T34);
  lit_118 = YPPsym((P)"<line-pah>");
  T37 = (P)YPpair(VARREF(YgooScolsSlstYLlineG),Ynil);
  T36 = (P)YPpair(VARREF(YLlstG),T37);
  T35 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_118),T36);
  VARSET(YgooScolsSlstYLline_pahG,T35);
  T38 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsSlstYLline_pahG));
  VARSET(YgooScolsSlstYDline_pah_empty,T38);
  lit_119 = YPPsym((P)"line-pah");
  lit_120 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T39 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_pah = YPmet(FUNCODEREF(YgooScolsSlstYline_pah),LITREF(lit_119),T39,ENVNUL,PNUL,sloc(188));
  T40 = YgooScolsSlstYline_pah;
  VARSET(YgooScolsSlstYline_pah,T40);
  lit_121 = YPPlist(1,YPPsym((P)"e"));
  T42 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSlstYLline_pahG));
  T41 = YPsig(LITREF(lit_121),YPPlist(1,T42),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLline_pahG),Ynil);
  fun_empty_50 = YPmet(FUNCODEREF(fun_empty_50),LITREF(lit_21),T41,ENVNUL,PNUL,sloc(188));
  T45 = BOUNDP(YgooScolsScolYempty);
  if (T45 != YPfalse) {
    T44 = VARREF(YgooScolsScolYempty);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_empty_50;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(YgooScolsScolYempty,T43);
  VARSET(YgooScolsSlstYLline_listG,VARREF(YgooScolsSlstYLline_pahG));
  lit_122 = YPPsym((P)"line-pair");
  lit_123 = YPPlist(3,YPPsym((P)"h"),YPPsym((P)"t"),YPPsym((P)"l"));
  T47 = YPsig(LITREF(lit_123),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_pair = YPmet(FUNCODEREF(YgooScolsSlstYline_pair),LITREF(lit_122),T47,ENVNUL,PNUL,sloc(192));
  T48 = YgooScolsSlstYline_pair;
  VARSET(YgooScolsSlstYline_pair,T48);
  lit_124 = YPPsym((P)"line-list");
  lit_125 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"elts"));
  lit_126 = YPPlist(2,YPPsym((P)"r"),YPPsym((P)"i"));
  T50 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fab_52 = YPmet(FUNCODEREF(fun_fab_52),LITREF(lit_23),T50,ENVNUL,PNUL,sloc(195));
  T49 = YPsig(LITREF(lit_125),YPPlist(1,VARREF(YLanyG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_list = YPmet(FUNCODEREF(YgooScolsSlstYline_list),LITREF(lit_124),T49,ENVNUL,PNUL,sloc(194));
  T51 = YgooScolsSlstYline_list;
  VARSET(YgooScolsSlstYline_list,T51);
  lit_127 = YPPsym((P)"line-list-of");
  lit_128 = YPPlist(2,YPPsym((P)"ctx"),YPPsym((P)"src"));
  lit_129 = YPPsym((P)"copy");
  lit_130 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"src"));
  T53 = YPsig(LITREF(lit_130),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_copy_54 = YPmet(FUNCODEREF(fun_copy_54),LITREF(lit_129),T53,ENVNUL,PNUL,sloc(201));
  T52 = YPsig(LITREF(lit_128),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_line_list_of_55 = YPmet(FUNCODEREF(fun_line_list_of_55),LITREF(lit_127),T52,ENVNUL,PNUL,sloc(200));
  T56 = BOUNDP(YgooScolsSlstYline_list_of);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooScolsSlstYline_list_of);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_line_list_of_55;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooScolsSlstYline_list_of,T54);
  lit_131 = YPPlist(2,YPPsym((P)"ctx"),YPPsym((P)"src"));
  T58 = YPsig(LITREF(lit_131),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_line_list_of_56 = YPmet(FUNCODEREF(fun_line_list_of_56),LITREF(lit_127),T58,ENVNUL,PNUL,sloc(207));
  T61 = BOUNDP(YgooScolsSlstYline_list_of);
  if (T61 != YPfalse) {
    T60 = VARREF(YgooScolsSlstYline_list_of);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_line_list_of_56;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YgooScolsSlstYline_list_of,T59);
  T63 = YPfalse;
  return T63;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"$max-int", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<line>", CVAR, &YgooScolsSlstYLlineG},
  {"line-list", CVAR, &YgooScolsSlstYline_list},
  {"%dat", CVAR, &YgooScolsSlstYPdat},
  {"<lst-enum>", CVAR, &YgooScolsSlstYLlst_enumG},
  {"---main-1---", PVAR, NULL},
  {"line-of", CVAR, &YgooScolsSlstYline_of},
  {"%key-setter", CVAR, &YgooScolsSlstYPkey_setter},
  {"line-pair", CVAR, &YgooScolsSlstYline_pair},
  {"---main-0---", PVAR, NULL},
  {"def-list", PVAR, NULL},
  {"list", CVAR, &YgooScolsSlstYlist},
  {"%key", CVAR, &YgooScolsSlstYPkey},
  {"$line-pah-empty", CVAR, &YgooScolsSlstYDline_pah_empty},
  {"line-of-setter", CVAR, &YgooScolsSlstYline_of_setter},
  {"<line-pah>", CVAR, &YgooScolsSlstYLline_pahG},
  {"line-pah", CVAR, &YgooScolsSlstYline_pah},
  {"<line-list>", CVAR, &YgooScolsSlstYLline_listG},
  {"assq", CVAR, &YgooScolsSlstYassq},
  {"%dat-setter", CVAR, &YgooScolsSlstYPdat_setter},
  {"<list>", CVAR, &YgooScolsSlstYLlistG},
  {"line-list-of", CVAR, &YgooScolsSlstYline_list_of},
  {"assqn", CVAR, &YgooScolsSlstYassqn},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"assqn", NULL},
  {"<line>", NULL},
  {"pair", NULL},
  {"line-list", NULL},
  {"line-of", NULL},
  {"head-setter", NULL},
  {"head", NULL},
  {"line-pair", NULL},
  {"def-list", NULL},
  {"list", NULL},
  {"lst", NULL},
  {"<lst>", NULL},
  {"<line-list>", NULL},
  {"nil", NULL},
  {"tail-setter", NULL},
  {"assq", NULL},
  {"tail", NULL},
  {"<list>", NULL},
  {"line-list-of", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSlst;
MODULE_INFO module_info_gooScolsSlst = {
  "goo/cols/lst",
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
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);

/* EXPRESSION: */

extern void load_module_gooScolsSlst (void);

void load_module_gooScolsSlst (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();

  (P)YgooScolsSlstY___main_0___();
  (P)YgooScolsSlstY___main_1___();

}

/* END OF GENERATED CODE. */
