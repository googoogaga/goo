/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/str");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/str */

EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
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
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
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
DEF(YgooScolsSstrYinteger_Gchar,"goo/cols/str","integer->char");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooScolsSstrYepsilon,"goo/cols/str","epsilon");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
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
EXT(Yclass_of,"goo/boot","class-of");
EXT(Yhead,"goo/boot","head");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
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
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
DEF(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
DEF(YgooScolsSstrYchar_Ginteger,"goo/cols/str","char->integer");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
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
DEF(YgooScolsSstrYDdigit_to_char,"goo/cols/str","$digit-to-char");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYmod_,"goo/math","mod-");
DEF(YgooScolsSstrYdigit_baseQ,"goo/cols/str","digit-base?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysyntax_error,"goo/boot","syntax-error");
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
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYas_log,"goo/math","as-log");
DEF(YgooScolsSstrYascii_digits,"goo/cols/str","ascii-digits");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ylst,"goo/boot","lst");
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
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ynil,"goo/boot","nil");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YgooScolsSstrYto_digit_base,"goo/cols/str","to-digit-base");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YgooScolsSstrYascii_chars,"goo/cols/str","ascii-chars");
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
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yclass_props,"goo/boot","class-props");
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
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmagYG,"goo/mag",">");
DYNDEF(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YgooScolsSstrYascii_Gchar,"goo/cols/str","ascii->char");
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
DEF(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
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
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
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
DEF(YgooScolsSstrYnative_chars,"goo/cols/str","native-chars");
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

DEFLIT(lit_47);
DEFLIT(lit_36);
DEFLIT(lit_4);
DEFLIT(lit_77);
DEFLIT(lit_11);
DEFLIT(lit_68);
DEFLIT(lit_81);
DEFLIT(lit_78);
DEFLIT(lit_23);
DEFLIT(lit_62);
DEFLIT(lit_38);
DEFLIT(lit_42);
DEFLIT(lit_19);
DEFLIT(lit_13);
DEFLIT(lit_3);
DEFLIT(lit_18);
DEFLIT(lit_17);
DEFLIT(lit_24);
DEFLIT(lit_88);
DEFLIT(lit_65);
DEFLIT(lit_64);
DEFLIT(lit_44);
DEFLIT(lit_15);
DEFLIT(lit_35);
DEFLIT(lit_5);
DEFLIT(lit_26);
DEFLIT(lit_63);
DEFLIT(lit_40);
DEFLIT(lit_75);
DEFLIT(lit_74);
DEFLIT(lit_60);
DEFLIT(lit_86);
DEFLIT(lit_56);
DEFLIT(lit_6);
DEFLIT(lit_79);
DEFLIT(lit_25);
DEFLIT(lit_34);
DEFLIT(lit_2);
DEFLIT(lit_46);
DEFLIT(lit_67);
DEFLIT(lit_12);
DEFLIT(lit_32);
DEFLIT(lit_70);
DEFLIT(lit_59);
DEFLIT(lit_41);
DEFLIT(lit_16);
DEFLIT(lit_73);
DEFLIT(lit_7);
DEFLIT(lit_27);
DEFLIT(lit_21);
DEFLIT(lit_54);
DEFLIT(lit_29);
DEFLIT(lit_82);
DEFLIT(lit_76);
DEFLIT(lit_53);
DEFLIT(lit_83);
DEFLIT(lit_8);
DEFLIT(lit_90);
DEFLIT(lit_43);
DEFLIT(lit_0);
DEFLIT(lit_30);
DEFLIT(lit_33);
DEFLIT(lit_45);
DEFLIT(lit_20);
DEFLIT(lit_58);
DEFLIT(lit_14);
DEFLIT(lit_49);
DEFLIT(lit_84);
DEFLIT(lit_28);
DEFLIT(lit_87);
DEFLIT(lit_85);
DEFLIT(lit_57);
DEFLIT(lit_22);
DEFLIT(lit_71);
DEFLIT(lit_37);
DEFLIT(lit_89);
DEFLIT(lit_69);
DEFLIT(lit_52);
DEFLIT(lit_55);
DEFLIT(lit_61);
DEFLIT(lit_9);
DEFLIT(lit_72);
DEFLIT(lit_39);
DEFLIT(lit_10);
DEFLIT(lit_1);
DEFLIT(lit_31);
DEFLIT(lit_51);
DEFLIT(lit_66);
DEFLIT(lit_48);
DEFLIT(lit_80);
DEFLIT(lit_50);

/* FUNCTIONS: */

LOCFOR(fun_empty_0);
LOCFOR(fun_elt_default_1);
LOCFOR(fun_elt_type_2);
LOCFOR(fun_fab_3);
LOCFOR(fun_str_4);
LOCFOR(fun_len_5);
LOCFOR(fun_low_elt_6);
LOCFOR(fun_fab_elt_setter_7);
LOCFOR(fun_elt_or_8);
LOCFOR(fun_to_str_9);
LOCFOR(fun_add_10);
LOCFOR(fun_loop_11);
LOCFOR(fun_12);
LOCFOR(fun_ascii_Gchar_13);
LOCFOR(fun_char_Ginteger_14);
LOCFOR(fun_integer_Gchar_15);
LOCFOR(fun_loop_16);
LOCFOR(fun_loop_17);
LOCFOR(fun_char_Gascii_18);
LOCFOR(fun_loop_19);
LOCFOR(fun_loop_20);
LOCFOR(fun_loop_21);
LOCFOR(fun_to_digit_base_22);
LOCFOR(fun_digit_baseQ_23);
LOCFOR(fun_match_24);
LOCFOR(fun_failXX_25);
LOCFOR(fun_26);
LOCFOR(fun_match_digitX_27);
LOCFOR(fun_looking_at_alphaQ_28);
LOCFOR(fun_loop_29);
LOCFOR(fun_str_to_num_30);
LOCFOR(fun_loop_31);
LOCFOR(fun_num_to_str_base_32);
LOCFOR(fun_num_to_str_33);
LOCFOR(fun_loop_34);
LOCFOR(fun_num_to_str_base_35);
LOCFOR(fun_num_to_str_36);
LOCFOR(fun_as_37);
LOCFOR(fun_as_38);
LOCFOR(fun_L_39);
LOCFOR(fun_to_str_40);
extern P YgooScolsSstrY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_empty_0) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YPsnul));
}

FUNCODEDEF(fun_elt_default_1) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPchr((P)32));
}

FUNCODEDEF(fun_elt_type_2) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YLchrG));
}

FUNCODEDEF(fun_fab_3) {
  P x_,s_;
  P xF2017;
  P xF2016;
  P xF2015;
  P xF2014;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
loop:
  xF2014 = s_;
  xF2015 = xF2014;
  T3 = (P)YPiGG(xF2015,(P)2);
  T2 = T3;
  T1 = T2;
  xF2016 = YPchr((P)32);
  xF2017 = xF2016;
  T6 = (P)YPiGG(xF2017,(P)2);
  T5 = T6;
  T4 = T5;
  T0 = (P)YPstr(T1,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_str_4) {
  P objects_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(objects_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYfabs),VARREF(YLstrG),objects_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_5) {
  P x_;
  P tF2020;
  P xF2019;
  P xF2018;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPslen(x_);
  xF2018 = T1;
  xF2019 = xF2018;
  tF2020 = (P)1;
  T4 = (P)YPiLL(xF2019,(P)2);
  T3 = (P)YPiv(T4,tF2020);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_6) {
  P x_,i_;
  P tF2025;
  P xF2024;
  P xF2023;
  P xF2022;
  P xF2021;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  xF2021 = i_;
  xF2022 = xF2021;
  T4 = (P)YPiGG(xF2022,(P)2);
  T3 = T4;
  T2 = T3;
  T1 = (P)YPselt(x_,T2);
  xF2023 = T1;
  xF2024 = xF2023;
  tF2025 = (P)2;
  T7 = (P)YPiLL(xF2024,(P)2);
  T6 = (P)YPiv(T7,tF2025);
  T5 = T6;
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_elt_setter_7) {
  P z_,x_,i_;
  P xF2029;
  P xF2028;
  P xF2027;
  P xF2026;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  xF2026 = z_;
  xF2027 = xF2026;
  T3 = (P)YPiGG(xF2027,(P)2);
  T2 = T3;
  T1 = T2;
  xF2028 = i_;
  xF2029 = xF2028;
  T6 = (P)YPiGG(xF2029,(P)2);
  T5 = T6;
  T4 = T5;
  T0 = (P)YPselt_setter(T1,x_,T4);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_or_8) {
  P x_,i_,default_;
  P tF2034;
  P xF2033;
  P xF2032;
  P xF2031;
  P xF2030;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYrange_checkQ),x_,i_);
  if (T1 != YPfalse) {
    xF2030 = i_;
    xF2031 = xF2030;
    T6 = (P)YPiGG(xF2031,(P)2);
    T5 = T6;
    T4 = T5;
    T3 = (P)YPselt(x_,T4);
    xF2032 = T3;
    xF2033 = xF2032;
    tF2034 = (P)2;
    T9 = (P)YPiLL(xF2033,(P)2);
    T8 = (P)YPiv(T9,tF2034);
    T7 = T8;
    T2 = T7;
    T0 = T2;
  } else {
    T0 = default_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_str_9) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_add_10) {
  P s_,c_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYto_str),c_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),s_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_11) {
  P i_,j_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(j_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmathYE),j_,T3);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),j_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T4,FREEREF(1),i_);
    T6 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T7 = CALL2(1,VARREF(YgooSmathYA),j_,YPint((P)1));
    a1 = T6;
    a2 = T7;
    i_ = a1;
    j_ = a2;
    goto loop;
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  P i_,s_;
  P loopF2035;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_11,3);
  loopF2035 = T1;
  FUNINIT(loopF2035, 3,s_,FREEREF(0),loopF2035);
  T2 = CALL2(0,loopF2035,i_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ascii_Gchar_13) {
  P n_;
  P tmpF2036;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),n_);
  tmpF2036 = T1;
  if (tmpF2036 != YPfalse) {
    T2 = tmpF2036;
  } else {
    T3 = CALL2(1,VARREF(Yerror),LITREF(lit_43),n_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_char_Ginteger_14) {
  P char_;
  P T0;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),char_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_integer_Gchar_15) {
  P n_;
  P T0;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),n_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_16) {
  P i_;
  P cF2037;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),FREEREF(1),FREEREF(2));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),i_);
    cF2037 = T4;
    if (cF2037 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF2037);
      T6 = CALL2(1,VARREF(YgooSmathY_),T7,FREEREF(1));
      T5 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),i_,FREEREF(2),T6);
    } else {
    }
    T9 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T9;
    i_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_17) {
  P i_,least_,greatest_;
  P nF2041;
  P cF2040;
  P loopF2039;
  P vF2038;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(i_, 0);
  ARG(least_, 1);
  ARG(greatest_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathY_),greatest_,least_);
    T5 = CALL2(1,VARREF(YgooSmathYA),T6,YPint((P)1));
    T4 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T5);
    T3 = CALL2(1,VARREF(YgooScolsScolxYfillX),T4,YPfalse);
    vF2038 = T3;
    T8 = FUNSHELL(1,fun_loop_16,4);
    loopF2039 = T8;
    FUNINIT(loopF2039, 4,FREEREF(0),least_,vF2038,loopF2039);
    T9 = CALL1(0,loopF2039,YPint((P)0));
    T7 = T9;
    T2 = T7;
    T0 = T2;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),i_);
    cF2040 = T11;
    if (cF2040 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF2040);
      nF2041 = T14;
      T16 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      if (least_ != YPfalse) {
        T18 = CALL2(1,VARREF(YgooSmagYmin),least_,nF2041);
        T17 = T18;
      } else {
        T17 = nF2041;
      }
      if (greatest_ != YPfalse) {
        T20 = CALL2(1,VARREF(YgooSmagYmax),greatest_,nF2041);
        T19 = T20;
      } else {
        T19 = nF2041;
      }
      a1 = T16;
      a2 = T17;
      a3 = T19;
      i_ = a1;
      least_ = a2;
      greatest_ = a3;
      goto loop;
      T13 = T15;
      T12 = T13;
    } else {
      T22 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T22;
      a2 = least_;
      a3 = greatest_;
      i_ = a1;
      least_ = a2;
      greatest_ = a3;
      goto loop;
      T12 = T21;
    }
    T10 = T12;
    T0 = T10;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_char_Gascii_18) {
  P char_;
  P tmpF2042;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T3 = CALL1(1,VARREF(Ytail),VARREF(YgooScolsSstrYnative_chars));
  T2 = CALL1(1,VARREF(Yhead),T3);
  T5 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),char_);
  T6 = CALL1(1,VARREF(Yhead),VARREF(YgooScolsSstrYnative_chars));
  T4 = CALL2(1,VARREF(YgooSmathY_),T5,T6);
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,T4);
  tmpF2042 = T1;
  if (tmpF2042 != YPfalse) {
    T7 = tmpF2042;
  } else {
    T8 = CALL2(1,VARREF(Yerror),LITREF(lit_51),char_);
    T7 = T8;
  }
  T0 = T7;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_19) {
  P i_,x_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(x_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYG),x_,YPint((P)9));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),x_,FREEREF(0),i_);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmathYA),x_,YPint((P)1));
    a1 = T4;
    a2 = T5;
    i_ = a1;
    x_ = a2;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_20) {
  P i_,x_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(x_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYG),x_,YPint((P)15));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),x_,FREEREF(0),i_);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmathYA),x_,YPint((P)1));
    a1 = T4;
    a2 = T5;
    i_ = a1;
    x_ = a2;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_21) {
  P i_,x_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(x_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYG),x_,YPint((P)15));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),x_,FREEREF(0),i_);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmathYA),x_,YPint((P)1));
    a1 = T4;
    a2 = T5;
    i_ = a1;
    x_ = a2;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_digit_base_22) {
  P digit_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(digit_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYchar_Gascii),digit_);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_digits),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_digit_baseQ_23) {
  P x_,radix_;
  P tmpF2045;
  P tmpF2044;
  P digF2043;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(radix_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSstrYto_digit_base),x_);
  digF2043 = T1;
  tmpF2044 = digF2043;
  if (tmpF2044 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmagYL),digF2043,radix_);
    tmpF2045 = T5;
    if (tmpF2045 != YPfalse) {
      T6 = digF2043;
    } else {
      T6 = YPfalse;
    }
    T4 = T6;
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_match_24) {
  P char_;
  P tmpF2046;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYL),T3,FREEREF(1));
  tmpF2046 = T2;
  if (tmpF2046 != YPfalse) {
    T7 = BOXVAL(FREEREF(0));
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T7);
    T5 = CALL2(1,VARREF(YgooSmathYE),T6,char_);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T9 = BOXVAL(FREEREF(0));
    T8 = CALL2(1,VARREF(YgooSmathYA),T9,YPint((P)1));
    BOXVAL(FREEREF(0)) = T8;
    T0 = YPtrue;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_failXX_25) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P return_;
  P charF2048;
  P failXXF2047;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_failXX_25,1);
  failXXF2047 = T1;
  FUNINIT(failXXF2047, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYGE),T3,FREEREF(1));
  if (T2 != YPfalse) {
    T4 = CALL0(0,failXXF2047);
  } else {
  }
  T7 = BOXVAL(FREEREF(0));
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T7);
  charF2048 = T6;
  charF2048 = BOXFAB(charF2048);
  T10 = BOXVAL(charF2048);
  T9 = CALL2(1,VARREF(YgooSmathYE),T10,YPchr((P)46));
  if (T9 != YPfalse) {
    T12 = BOXVAL(FREEREF(3));
    if (T12 != YPfalse) {
      T13 = CALL2(1,VARREF(Yerror),LITREF(lit_68),FREEREF(2));
      T11 = T13;
    } else {
      BOXVAL(FREEREF(3)) = YPtrue;
      T15 = BOXVAL(FREEREF(0));
      T14 = CALL2(1,VARREF(YgooSmathYA),T15,YPint((P)1));
      BOXVAL(FREEREF(0)) = T14;
      T17 = BOXVAL(FREEREF(0));
      T16 = CALL2(1,VARREF(YgooSmagYGE),T17,FREEREF(1));
      if (T16 != YPfalse) {
        T18 = CALL0(0,failXXF2047);
      } else {
      }
      T21 = BOXVAL(FREEREF(0));
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T21);
      T19 = BOXVAL(charF2048) = T20;
      T11 = T19;
    }
  } else {
  }
  T23 = BOXVAL(charF2048);
  T24 = BOXVAL(FREEREF(5));
  T22 = CALL2(1,VARREF(YgooScolsSstrYdigit_baseQ),T23,T24);
  BOXVAL(FREEREF(4)) = T22;
  T26 = BOXVAL(FREEREF(4));
  T25 = CALL1(1,VARREF(Ynot),T26);
  if (T25 != YPfalse) {
    T27 = CALL0(0,failXXF2047);
  } else {
  }
  T29 = BOXVAL(FREEREF(0));
  T28 = CALL2(1,VARREF(YgooSmathYA),T29,YPint((P)1));
  BOXVAL(FREEREF(0)) = T28;
  T30 = BOXVAL(FREEREF(3));
  if (T30 != YPfalse) {
    T33 = BOXVAL(FREEREF(6));
    T34 = BOXVAL(FREEREF(5));
    T32 = CALL2(1,VARREF(YgooSmathYT),T33,T34);
    T31 = BOXVAL(FREEREF(6)) = T32;
  } else {
  }
  T5 = YPtrue;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_match_digitX_27) {
  P U_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(U_, 0);
loop:
  T1 = FUNFAB(fun_26,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_looking_at_alphaQ_28) {
  P tmpF2049;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmagYL),T2,FREEREF(1));
  tmpF2049 = T1;
  if (tmpF2049 != YPfalse) {
    T6 = BOXVAL(FREEREF(0));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T6);
    T4 = CALL1(1,VARREF(YgooSmathYalphaQ),T5);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_29) {
  P tmpF2050;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(0,FREEREF(1),T3);
  tmpF2050 = T2;
  if (tmpF2050 != YPfalse) {
    T8 = BOXVAL(FREEREF(2));
    T9 = BOXVAL(FREEREF(3));
    T7 = CALL2(1,VARREF(YgooSmathYT),T8,T9);
    T10 = BOXVAL(FREEREF(0));
    T6 = CALL2(1,VARREF(YgooSmathYA),T7,T10);
    T5 = BOXVAL(FREEREF(2)) = T6;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    goto loop;
    T0 = T11;
  } else {
    T0 = YPtrue;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_to_num_30) {
  P string_;
  P fF2078;
  P tmpF2077;
  P tmpF2076;
  P loopF2075;
  P tmpF2074;
  P tmpF2073;
  P tmpF2072;
  P tmpF2071;
  P tmpF2070;
  P tmpF2069;
  P tmpF2068;
  P tmpF2067;
  P tmpF2066;
  P tmpF2065;
  P tmpF2064;
  P tmpF2063;
  P tmpF2062;
  P looking_at_alphaQF2061;
  P match_digitXF2060;
  P matchF2059;
  P radixF2058;
  P seen_decimal_pointQF2057;
  P lengthF2056;
  P scaleF2055;
  P iF2054;
  P nF2053;
  P dF2052;
  P sF2051;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83;
  P a1;
LINK_STACK();
  ARG(string_, 0);
loop:
  sF2051 = YPint((P)1);
  sF2051 = BOXFAB(sF2051);
  dF2052 = YPint((P)0);
  dF2052 = BOXFAB(dF2052);
  nF2053 = YPint((P)0);
  nF2053 = BOXFAB(nF2053);
  iF2054 = YPint((P)0);
  iF2054 = BOXFAB(iF2054);
  scaleF2055 = YPint((P)1);
  scaleF2055 = BOXFAB(scaleF2055);
  T11 = CALL1(1,VARREF(YgooStypesYlen),string_);
  lengthF2056 = T11;
  seen_decimal_pointQF2057 = YPfalse;
  seen_decimal_pointQF2057 = BOXFAB(seen_decimal_pointQF2057);
  radixF2058 = YPint((P)10);
  radixF2058 = BOXFAB(radixF2058);
  T17 = FUNSHELL(1,fun_match_24,3);
  matchF2059 = T17;
  T18 = FUNSHELL(1,fun_match_digitX_27,7);
  match_digitXF2060 = T18;
  T19 = FUNSHELL(1,fun_looking_at_alphaQ_28,3);
  looking_at_alphaQF2061 = T19;
  FUNINIT(matchF2059, 3,iF2054,lengthF2056,string_);
  FUNINIT(match_digitXF2060, 7,iF2054,lengthF2056,string_,seen_decimal_pointQF2057,dF2052,radixF2058,scaleF2055);
  FUNINIT(looking_at_alphaQF2061, 3,iF2054,lengthF2056,string_);
  T22 = CALL1(0,matchF2059,YPchr((P)43));
  tmpF2062 = T22;
  if (tmpF2062 != YPfalse) {
    T23 = tmpF2062;
  } else {
    T26 = CALL1(0,matchF2059,YPchr((P)45));
    tmpF2063 = T26;
    if (tmpF2063 != YPfalse) {
      T28 = BOXVAL(sF2051) = YPint((P)-1);
      T27 = T28;
    } else {
      T27 = YPfalse;
    }
    T25 = T27;
    tmpF2064 = T25;
    if (tmpF2064 != YPfalse) {
      T29 = tmpF2064;
    } else {
      T31 = CALL1(0,matchF2059,YPchr((P)35));
      if (T31 != YPfalse) {
        T34 = CALL1(0,matchF2059,YPchr((P)98));
        tmpF2065 = T34;
        if (tmpF2065 != YPfalse) {
          T36 = BOXVAL(radixF2058) = YPint((P)2);
          T35 = T36;
        } else {
          T35 = YPfalse;
        }
        T33 = T35;
        tmpF2066 = T33;
        if (tmpF2066 != YPfalse) {
          T37 = tmpF2066;
        } else {
          T40 = CALL1(0,matchF2059,YPchr((P)111));
          tmpF2067 = T40;
          if (tmpF2067 != YPfalse) {
            T42 = BOXVAL(radixF2058) = YPint((P)8);
            T41 = T42;
          } else {
            T41 = YPfalse;
          }
          T39 = T41;
          tmpF2068 = T39;
          if (tmpF2068 != YPfalse) {
            T43 = tmpF2068;
          } else {
            T46 = CALL1(0,matchF2059,YPchr((P)100));
            tmpF2069 = T46;
            if (tmpF2069 != YPfalse) {
              T48 = BOXVAL(radixF2058) = YPint((P)10);
              T47 = T48;
            } else {
              T47 = YPfalse;
            }
            T45 = T47;
            tmpF2070 = T45;
            if (tmpF2070 != YPfalse) {
              T49 = tmpF2070;
            } else {
              T51 = CALL1(0,matchF2059,YPchr((P)120));
              tmpF2071 = T51;
              if (tmpF2071 != YPfalse) {
                T53 = BOXVAL(radixF2058) = YPint((P)16);
                T52 = T53;
              } else {
                T52 = YPfalse;
              }
              T50 = T52;
              T49 = T50;
            }
            T44 = T49;
            T43 = T44;
          }
          T38 = T43;
          T37 = T38;
        }
        T32 = T37;
        T30 = T32;
      } else {
        T30 = YPtrue;
      }
      T29 = T30;
    }
    T24 = T29;
    T23 = T24;
  }
  T21 = T23;
  tmpF2072 = T21;
  if (tmpF2072 != YPfalse) {
    T58 = BOXVAL(dF2052);
    T57 = CALL1(0,match_digitXF2060,T58);
    tmpF2073 = T57;
    if (tmpF2073 != YPfalse) {
      T61 = BOXVAL(dF2052);
      T60 = BOXVAL(nF2053) = T61;
      T59 = T60;
    } else {
      T59 = YPfalse;
    }
    T56 = T59;
    tmpF2074 = T56;
    if (tmpF2074 != YPfalse) {
      T65 = FUNSHELL(1,fun_loop_29,5);
      loopF2075 = T65;
      FUNINIT(loopF2075, 5,dF2052,match_digitXF2060,nF2053,radixF2058,loopF2075);
      T66 = CALL0(0,loopF2075);
      T64 = T66;
      tmpF2076 = T64;
      if (tmpF2076 != YPfalse) {
        T70 = BOXVAL(iF2054);
        T69 = CALL2(1,VARREF(YgooSmathYE),T70,lengthF2056);
        tmpF2077 = T69;
        if (tmpF2077 != YPfalse) {
          T75 = BOXVAL(sF2051);
          T74 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T75);
          T78 = BOXVAL(nF2053);
          T77 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T78);
          T80 = BOXVAL(scaleF2055);
          T79 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T80);
          T76 = CALL2(1,VARREF(YgooSmathYS),T77,T79);
          T73 = CALL2(1,VARREF(YgooSmathYT),T74,T76);
          fF2078 = T73;
          T82 = BOXVAL(seen_decimal_pointQF2057);
          if (T82 != YPfalse) {
            T81 = fF2078;
          } else {
            T83 = CALL1(1,VARREF(YgooSmathYtrunc),fF2078);
            T81 = T83;
          }
          T72 = T81;
          T71 = T72;
        } else {
          T71 = YPfalse;
        }
        T68 = T71;
        T67 = T68;
      } else {
        T67 = YPfalse;
      }
      T63 = T67;
      T62 = T63;
    } else {
      T62 = YPfalse;
    }
    T55 = T62;
    T54 = T55;
  } else {
    T54 = YPfalse;
  }
  T20 = T54;
  T16 = T20;
  T14 = T16;
  T12 = T14;
  T10 = T12;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_31) {
  P digit_list_,num_;
  P digitF2079;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(digit_list_, 0);
  ARG(num_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),num_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = digit_list_;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYrem),num_,FREEREF(0));
    T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYDdigit_to_char),T4);
    digitF2079 = T3;
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),digitF2079,digit_list_);
    T8 = CALL2(1,VARREF(YgooSmathYtruncS),num_,FREEREF(0));
    T7 = CALL1(1,VARREF(YgooSmacrosY1st),T8);
    a1 = T6;
    a2 = T7;
    digit_list_ = a1;
    num_ = a2;
    goto loop;
    T2 = T5;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_num_to_str_base_32) {
  P num_,radix_;
  P digit_listF2082;
  P loopF2081;
  P sF2080;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(num_, 0);
  ARG(radix_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYL),num_,YPint((P)0));
  if (T2 != YPfalse) {
    T1 = YPint((P)-1);
  } else {
    T1 = YPint((P)1);
  }
  sF2080 = T1;
  T5 = FUNSHELL(1,fun_loop_31,2);
  loopF2081 = T5;
  FUNINIT(loopF2081, 2,radix_,loopF2081);
  T7 = CALL2(1,VARREF(YgooSmathYT),num_,sF2080);
  T6 = CALL2(0,loopF2081,Ynil,T7);
  T4 = T6;
  digit_listF2082 = T4;
  T10 = CALL2(1,VARREF(YgooSmagYL),sF2080,YPint((P)0));
  if (T10 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYpair),YPchr((P)45),digit_listF2082);
    T9 = T11;
  } else {
    T13 = CALL2(1,VARREF(YgooSmathYE),num_,YPint((P)0));
    if (T13 != YPfalse) {
      T12 = LITREF(lit_74);
    } else {
      T12 = digit_listF2082;
    }
    T9 = T12;
  }
  T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T9);
  T3 = T8;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_num_to_str_33) {
  P num_;
  P T0;
  P a1;
LINK_STACK();
  ARG(num_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),num_,DYNREF(YgooScolsSstrYTprint_baseT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_34) {
  P p_,e_;
  P iF2083;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYtrunc),p_);
  iF2083 = T1;
  T4 = CALL2(1,VARREF(YgooSmathY_),p_,iF2083);
  T3 = CALL2(1,VARREF(YgooSmagYL),T4,VARREF(YgooScolsSstrYepsilon));
  if (T3 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),iF2083,FREEREF(1));
    BOXVAL(FREEREF(0)) = T5;
    T2 = e_;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYT),p_,FREEREF(1));
    T8 = CALL2(1,VARREF(YgooSmathYA),e_,YPint((P)1));
    a1 = T7;
    a2 = T8;
    p_ = a1;
    e_ = a2;
    goto loop;
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_num_to_str_base_35) {
  P num_,radix_;
  P lengthF2089;
  P eF2088;
  P loopF2087;
  P stringF2086;
  P pF2085;
  P sF2084;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
  P a1,a2;
LINK_STACK();
  ARG(num_, 0);
  ARG(radix_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYL),num_,YPint((P)0));
  if (T2 != YPfalse) {
    T1 = YPint((P)-1);
  } else {
    T1 = YPint((P)1);
  }
  sF2084 = T1;
  T4 = CALL2(1,VARREF(YgooSmathYT),num_,sF2084);
  pF2085 = T4;
  stringF2086 = LITREF(lit_77);
  stringF2086 = BOXFAB(stringF2086);
  T9 = FUNSHELL(1,fun_loop_34,3);
  loopF2087 = T9;
  FUNINIT(loopF2087, 3,stringF2086,radix_,loopF2087);
  T10 = CALL2(0,loopF2087,pF2085,YPint((P)0));
  T8 = T10;
  eF2088 = T8;
  T13 = BOXVAL(stringF2086);
  T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
  lengthF2089 = T12;
  T15 = CALL2(1,VARREF(YgooSmathYE),eF2088,YPint((P)0));
  if (T15 != YPfalse) {
    T17 = BOXVAL(stringF2086);
    T16 = CALL2(1,VARREF(YgooSmacrosYcat),T17,LITREF(lit_79));
    T14 = T16;
  } else {
    T19 = CALL2(1,VARREF(YgooSmathYE),eF2088,lengthF2089);
    if (T19 != YPfalse) {
      T21 = BOXVAL(stringF2086);
      T20 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_80),T21);
      T18 = T20;
    } else {
      T23 = CALL2(1,VARREF(YgooSmagYL),eF2088,lengthF2089);
      if (T23 != YPfalse) {
        T26 = BOXVAL(stringF2086);
        T27 = CALL2(1,VARREF(YgooSmathY_),lengthF2089,eF2088);
        T25 = CALL3(1,VARREF(YgooScolsSseqYsub),T26,YPint((P)0),T27);
        T29 = BOXVAL(stringF2086);
        T30 = CALL2(1,VARREF(YgooSmathY_),lengthF2089,eF2088);
        T28 = CALL3(1,VARREF(YgooScolsSseqYsub),T29,T30,lengthF2089);
        T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,LITREF(lit_81),T28);
        T22 = T24;
      } else {
        T34 = CALL2(1,VARREF(YgooSmathY_),eF2088,lengthF2089);
        T33 = CALL2(1,VARREF(YgooSmathYA),T34,YPint((P)2));
        T32 = CALL3(1,VARREF(YgooScolsSseqYsub),LITREF(lit_82),YPint((P)0),T33);
        T35 = BOXVAL(stringF2086);
        T31 = CALL2(1,VARREF(YgooSmacrosYcat),T32,T35);
        T22 = T31;
      }
      T18 = T22;
    }
    T14 = T18;
  }
  BOXVAL(stringF2086) = T14;
  T37 = CALL2(1,VARREF(YgooSmagYL),sF2084,YPint((P)0));
  if (T37 != YPfalse) {
    T39 = BOXVAL(stringF2086);
    T38 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_83),T39);
    T36 = T38;
  } else {
    T40 = BOXVAL(stringF2086);
    T36 = T40;
  }
  T11 = T36;
  T7 = T11;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_num_to_str_36) {
  P num_;
  P T0;
  P a1;
LINK_STACK();
  ARG(num_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),num_,DYNREF(YgooScolsSstrYTprint_baseT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_37) {
  P U_,s_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(s_, 1);
loop:
  T0 = CALL1(1,VARREF(Ysym_name),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_38) {
  P U_,s_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(s_, 1);
loop:
  T0 = CALL1(1,VARREF(Yfab_sym),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_39) {
  P x_,y_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL1(1,VARREF(Ysym_name),x_);
  T2 = CALL1(1,VARREF(Ysym_name),y_);
  T0 = CALL2(1,VARREF(YgooSmagYL),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_40) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(Ysym_name),x_);
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSstrY___main_0___() {
  P loopF2097;
  P loopF2096;
  P loopF2095;
  P charsF2094;
  P loopF2093;
  P end259F2092;
  P initF2091;
  P ascii_charsF2090;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"str");
  lit_1 = YPPlist(1,YPPsym((P)"objects"));
  T1 = YPsig(LITREF(lit_1),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSstrYstr,T0);
  lit_2 = YPPsym((P)"char->ascii");
  lit_3 = YPPlist(1,YPPsym((P)"char"));
  T3 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYchar_Gascii,T2);
  VARSET(YgooScolsSstrYascii_whitespaces,YPfalse);
  VARSET(YgooScolsSstrYascii_limit,YPfalse);
  lit_4 = YPPsym((P)"str-to-num");
  lit_5 = YPPlist(1,YPPsym((P)"string"));
  T6 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T5 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),T6,Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSstrYstr_to_num,T4);
  lit_6 = YPPsym((P)"num-to-str-base");
  lit_7 = YPPlist(2,YPPsym((P)"num"),YPPsym((P)"radix"));
  T8 = YPsig(LITREF(lit_7),YPPlist(2,VARREF(YLnumG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  T7 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T8,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSstrYnum_to_str_base,T7);
  lit_8 = YPPsym((P)"num-to-str");
  lit_9 = YPPlist(1,YPPsym((P)"num"));
  T10 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T9 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T10,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYnum_to_str,T9);
  DYNSET(YgooScolsSstrYTprint_baseT,YPint((P)10));
  lit_10 = YPPsym((P)"empty");
  lit_11 = YPPlist(1,YPPsym((P)"c"));
  T12 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T11 = YPsig(LITREF(lit_11),YPPlist(1,T12),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_empty_0 = YPmet(FUNCODEREF(fun_empty_0),LITREF(lit_10),T11,ENVNUL,PNUL,sloc(25));
  T15 = BOUNDP(YgooScolsScolYempty);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooScolsScolYempty);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_empty_0;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooScolsScolYempty,T13);
  lit_12 = YPPsym((P)"elt-default");
  lit_13 = YPPlist(1,YPPsym((P)"x"));
  T17 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_elt_default_1 = YPmet(FUNCODEREF(fun_elt_default_1),LITREF(lit_12),T17,ENVNUL,PNUL,sloc(28));
  T20 = BOUNDP(YgooScolsScolYelt_default);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooScolsScolYelt_default);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_elt_default_1;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooScolsScolYelt_default,T18);
  lit_14 = YPPsym((P)"elt-type");
  lit_15 = YPPlist(1,YPPsym((P)"x"));
  T22 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_2 = YPmet(FUNCODEREF(fun_elt_type_2),LITREF(lit_14),T22,ENVNUL,PNUL,sloc(31));
  T25 = BOUNDP(YgooScolsScolYelt_type);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooScolsScolYelt_type);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_elt_type_2;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooScolsScolYelt_type,T23);
  lit_16 = YPPsym((P)"fab");
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T28 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T27 = YPsig(LITREF(lit_17),YPPlist(2,T28,VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_fab_3 = YPmet(FUNCODEREF(fun_fab_3),LITREF(lit_16),T27,ENVNUL,PNUL,sloc(33));
  T31 = BOUNDP(YgooScolsScolYfab);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooScolsScolYfab);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_fab_3;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YgooScolsScolYfab,T29);
  lit_18 = YPPlist(1,YPPsym((P)"objects"));
  T33 = YPsig(LITREF(lit_18),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_str_4 = YPmet(FUNCODEREF(fun_str_4),LITREF(lit_0),T33,ENVNUL,PNUL,sloc(36));
  T36 = BOUNDP(YgooScolsSstrYstr);
  if (T36 != YPfalse) {
    T35 = VARREF(YgooScolsSstrYstr);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_str_4;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YgooScolsSstrYstr,T34);
  lit_19 = YPPsym((P)"len");
  lit_20 = YPPlist(1,YPPsym((P)"x"));
  T38 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_len_5 = YPmet(FUNCODEREF(fun_len_5),LITREF(lit_19),T38,ENVNUL,PNUL,sloc(39));
  T41 = BOUNDP(YgooStypesYlen);
  if (T41 != YPfalse) {
    T40 = VARREF(YgooStypesYlen);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_len_5;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YgooStypesYlen,T39);
  lit_21 = YPPsym((P)"low-elt");
  lit_22 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T43 = YPsig(LITREF(lit_22),YPPlist(2,VARREF(YLstrG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLchrG),Ynil);
  fun_low_elt_6 = YPmet(FUNCODEREF(fun_low_elt_6),LITREF(lit_21),T43,ENVNUL,PNUL,sloc(42));
  T46 = BOUNDP(YgooScolsScolYlow_elt);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooScolsScolYlow_elt);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_low_elt_6;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooScolsScolYlow_elt,T44);
  lit_23 = YPPsym((P)"fab-elt-setter");
  lit_24 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"i"));
  T48 = YPsig(LITREF(lit_24),YPPlist(3,VARREF(YLchrG),VARREF(YLstrG),VARREF(YLfixnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fab_elt_setter_7 = YPmet(FUNCODEREF(fun_fab_elt_setter_7),LITREF(lit_23),T48,ENVNUL,PNUL,sloc(45));
  T51 = BOUNDP(YgooScolsScolYfab_elt_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooScolsScolYfab_elt_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_fab_elt_setter_7;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooScolsScolYfab_elt_setter,T49);
  lit_25 = YPPsym((P)"elt-or");
  lit_26 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"i"),YPPsym((P)"default"));
  T53 = YPsig(LITREF(lit_26),YPPlist(3,VARREF(YLstrG),VARREF(YLfixnumG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_8 = YPmet(FUNCODEREF(fun_elt_or_8),LITREF(lit_25),T53,ENVNUL,PNUL,sloc(48));
  T56 = BOUNDP(YgooScolsScolYelt_or);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooScolsScolYelt_or);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_elt_or_8;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooScolsScolYelt_or,T54);
  lit_27 = YPPsym((P)"to-str");
  lit_28 = YPPlist(1,YPPsym((P)"x"));
  T58 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_9 = YPmet(FUNCODEREF(fun_to_str_9),LITREF(lit_27),T58,ENVNUL,PNUL,sloc(57));
  T61 = BOUNDP(YgooSmathYto_str);
  if (T61 != YPfalse) {
    T60 = VARREF(YgooSmathYto_str);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_to_str_9;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YgooSmathYto_str,T59);
  lit_29 = YPPsym((P)"add");
  lit_30 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"c"));
  T63 = YPsig(LITREF(lit_30),YPPlist(2,VARREF(YLstrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_add_10 = YPmet(FUNCODEREF(fun_add_10),LITREF(lit_29),T63,ENVNUL,PNUL,sloc(60));
  T66 = BOUNDP(YgooScolsScolYadd);
  if (T66 != YPfalse) {
    T65 = VARREF(YgooScolsScolYadd);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_add_10;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YgooScolsScolYadd,T64);
  VARSET(YgooScolsSstrYascii_limit,YPint((P)128));
  lit_31 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"s"));
  lit_32 = YPPsym((P)"loop");
  lit_33 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"j"));
  lit_34 = YPsb((P)"\t");
  lit_35 = YPsb((P)"\n");
  lit_36 = YPsb((P)"\f");
  lit_37 = YPsb((P)"\r");
  lit_38 = YPsb((P)" !\"#$%&'()*+,-./0123456789:;<=>?");
  lit_39 = YPsb((P)"@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_");
  lit_40 = YPsb((P)"`abcdefghijklmnopqrstuvwxyz{|}~");
  T69 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_11 = YPmet(FUNCODEREF(fun_loop_11),LITREF(lit_32),T69,ENVNUL,PNUL,sloc(72));
  T68 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T68,ENVNUL,PNUL,sloc(71));
  T72 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T71 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T72,YPfalse);
  ascii_charsF2090 = T71;
  T74 = FUNFAB(fun_12,1,ascii_charsF2090);
  initF2091 = T74;
  XCALL2(1,initF2091,YPint((P)9),LITREF(lit_34));
  XCALL2(1,initF2091,YPint((P)10),LITREF(lit_35));
  XCALL2(1,initF2091,YPint((P)12),LITREF(lit_36));
  XCALL2(1,initF2091,YPint((P)13),LITREF(lit_37));
  XCALL2(1,initF2091,YPint((P)32),LITREF(lit_38));
  XCALL2(1,initF2091,YPint((P)64),LITREF(lit_39));
  XCALL2(1,initF2091,YPint((P)96),LITREF(lit_40));
  T73 = ascii_charsF2090;
  T70 = T73;
  VARSET(YgooScolsSstrYascii_chars,T70);
  lit_41 = YPPsym((P)"ascii->char");
  lit_42 = YPPlist(1,YPPsym((P)"n"));
  lit_43 = YPsb((P)"not a standard character's ASCII code: %=");
  T75 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_ascii_Gchar_13 = YPmet(FUNCODEREF(fun_ascii_Gchar_13),LITREF(lit_41),T75,ENVNUL,PNUL,sloc(85));
  T78 = BOUNDP(YgooScolsSstrYascii_Gchar);
  if (T78 != YPfalse) {
    T77 = VARREF(YgooScolsSstrYascii_Gchar);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_ascii_Gchar_13;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YgooScolsSstrYascii_Gchar,T76);
  lit_44 = YPPsym((P)"char->integer");
  lit_45 = YPPlist(1,YPPsym((P)"char"));
  T80 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_char_Ginteger_14 = YPmet(FUNCODEREF(fun_char_Ginteger_14),LITREF(lit_44),T80,ENVNUL,PNUL,sloc(89));
  T83 = BOUNDP(YgooScolsSstrYchar_Ginteger);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooScolsSstrYchar_Ginteger);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_char_Ginteger_14;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooScolsSstrYchar_Ginteger,T81);
  lit_46 = YPPsym((P)"integer->char");
  lit_47 = YPPlist(1,YPPsym((P)"n"));
  T85 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_integer_Gchar_15 = YPmet(FUNCODEREF(fun_integer_Gchar_15),LITREF(lit_46),T85,ENVNUL,PNUL,sloc(92));
  T88 = BOUNDP(YgooScolsSstrYinteger_Gchar);
  if (T88 != YPfalse) {
    T87 = VARREF(YgooScolsSstrYinteger_Gchar);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_integer_Gchar_15;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooScolsSstrYinteger_Gchar,T86);
  lit_48 = YPPlist(3,YPPsym((P)"i"),YPPsym((P)"least"),YPPsym((P)"greatest"));
  lit_49 = YPPlist(1,YPPsym((P)"i"));
  T91 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_16 = YPmet(FUNCODEREF(fun_loop_16),LITREF(lit_32),T91,ENVNUL,PNUL,sloc(100));
  T90 = YPsig(LITREF(lit_48),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_17 = YPmet(FUNCODEREF(fun_loop_17),LITREF(lit_32),T90,ENVNUL,PNUL,sloc(97));
  T93 = XCALL1(1,VARREF(YgooStypesYlen),VARREF(YgooScolsSstrYascii_chars));
  end259F2092 = T93;
  T95 = FUNSHELL(1,fun_loop_17,2);
  loopF2093 = T95;
  FUNINIT(loopF2093, 2,end259F2092,loopF2093);
  T96 = XCALL3(0,loopF2093,YPint((P)0),YPfalse,YPfalse);
  T94 = T96;
  T92 = T94;
  VARSET(YgooScolsSstrYnative_chars,T92);
  lit_50 = YPPlist(1,YPPsym((P)"char"));
  lit_51 = YPsb((P)"not a standard character: %=");
  T97 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_char_Gascii_18 = YPmet(FUNCODEREF(fun_char_Gascii_18),LITREF(lit_2),T97,ENVNUL,PNUL,sloc(113));
  T100 = BOUNDP(YgooSmathYchar_Gascii);
  if (T100 != YPfalse) {
    T99 = VARREF(YgooSmathYchar_Gascii);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_char_Gascii_18;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YgooSmathYchar_Gascii,T98);
  lit_52 = YPPlist(5,YPint((P)32),YPint((P)10),YPint((P)9),YPint((P)12),YPint((P)13));
  VARSET(YgooScolsSstrYascii_whitespaces,LITREF(lit_52));
  lit_53 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"x"));
  lit_54 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"x"));
  lit_55 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"x"));
  T104 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_19 = YPmet(FUNCODEREF(fun_loop_19),LITREF(lit_32),T104,ENVNUL,PNUL,sloc(122));
  T103 = YPsig(LITREF(lit_54),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_20 = YPmet(FUNCODEREF(fun_loop_20),LITREF(lit_32),T103,ENVNUL,PNUL,sloc(124));
  T102 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_21 = YPmet(FUNCODEREF(fun_loop_21),LITREF(lit_32),T102,ENVNUL,PNUL,sloc(126));
  T107 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T106 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T107,YPfalse);
  charsF2094 = T106;
  T108 = FUNSHELL(1,fun_loop_19,2);
  loopF2095 = T108;
  FUNINIT(loopF2095, 2,charsF2094,loopF2095);
  T110 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)48));
  T109 = XCALL2(0,loopF2095,T110,YPint((P)0));
  T111 = FUNSHELL(1,fun_loop_20,2);
  loopF2096 = T111;
  FUNINIT(loopF2096, 2,charsF2094,loopF2096);
  T113 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)97));
  T112 = XCALL2(0,loopF2096,T113,YPint((P)10));
  T114 = FUNSHELL(1,fun_loop_21,2);
  loopF2097 = T114;
  FUNINIT(loopF2097, 2,charsF2094,loopF2097);
  T116 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)65));
  T115 = XCALL2(0,loopF2097,T116,YPint((P)10));
  T105 = charsF2094;
  VARSET(YgooScolsSstrYascii_digits,T105);
  lit_56 = YPPsym((P)"to-digit-base");
  lit_57 = YPPlist(1,YPPsym((P)"digit"));
  T118 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T117 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),T118,Ynil);
  fun_to_digit_base_22 = YPmet(FUNCODEREF(fun_to_digit_base_22),LITREF(lit_56),T117,ENVNUL,PNUL,sloc(130));
  T121 = BOUNDP(YgooScolsSstrYto_digit_base);
  if (T121 != YPfalse) {
    T120 = VARREF(YgooScolsSstrYto_digit_base);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_to_digit_base_22;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YgooScolsSstrYto_digit_base,T119);
  lit_58 = YPPsym((P)"digit-base?");
  lit_59 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"radix"));
  T124 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T123 = YPsig(LITREF(lit_59),YPPlist(2,VARREF(YLchrG),VARREF(YLintG)),YPfalse,YPint((P)2),T124,Ynil);
  fun_digit_baseQ_23 = YPmet(FUNCODEREF(fun_digit_baseQ_23),LITREF(lit_58),T123,ENVNUL,PNUL,sloc(133));
  T127 = BOUNDP(YgooScolsSstrYdigit_baseQ);
  if (T127 != YPfalse) {
    T126 = VARREF(YgooScolsSstrYdigit_baseQ);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_digit_baseQ_23;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YgooScolsSstrYdigit_baseQ,T125);
  lit_60 = YPPlist(1,YPPsym((P)"string"));
  lit_61 = YPPsym((P)"match");
  lit_62 = YPPlist(1,YPPsym((P)"char"));
  lit_63 = YPPsym((P)"match-digit!");
  lit_64 = YPPlist(1,YPPsym((P)"_"));
  lit_65 = YPPlist(1,YPPsym((P)"return"));
  lit_66 = YPPsym((P)"fail!!");
  lit_67 = Ynil;
  lit_68 = YPsb((P)"str-to-num: Two decimal points: %=");
  lit_69 = YPPsym((P)"looking-at-alpha?");
  T136 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_match_24 = YPmet(FUNCODEREF(fun_match_24),LITREF(lit_61),T136,ENVNUL,PNUL,sloc(146));
  T135 = YPsig(LITREF(lit_67),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_failXX_25 = YPmet(FUNCODEREF(fun_failXX_25),LITREF(lit_66),T135,ENVNUL,PNUL,sloc(152));
  T134 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T134,ENVNUL,PNUL,sloc(151));
  T133 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_match_digitX_27 = YPmet(FUNCODEREF(fun_match_digitX_27),LITREF(lit_63),T133,ENVNUL,PNUL,sloc(150));
  T132 = YPsig(LITREF(lit_67),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_looking_at_alphaQ_28 = YPmet(FUNCODEREF(fun_looking_at_alphaQ_28),LITREF(lit_69),T132,ENVNUL,PNUL,sloc(170));
  T131 = YPsig(LITREF(lit_67),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_29 = YPmet(FUNCODEREF(fun_loop_29),LITREF(lit_32),T131,ENVNUL,PNUL,sloc(181));
  T130 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T129 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),T130,Ynil);
  fun_str_to_num_30 = YPmet(FUNCODEREF(fun_str_to_num_30),LITREF(lit_4),T129,ENVNUL,PNUL,sloc(137));
  T139 = BOUNDP(YgooScolsSstrYstr_to_num);
  if (T139 != YPfalse) {
    T138 = VARREF(YgooScolsSstrYstr_to_num);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_str_to_num_30;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YgooScolsSstrYstr_to_num,T137);
  lit_70 = YPsb((P)"0123456789abcdefghijklmnopqrstuvwxyz");
  VARSET(YgooScolsSstrYDdigit_to_char,LITREF(lit_70));
  DYNDEFSET(YgooScolsSstrYTprint_baseT,YPint((P)10));
  lit_71 = YPflo(FLOINT(0.0000009999999));
  VARSET(YgooScolsSstrYepsilon,LITREF(lit_71));
  lit_72 = YPPlist(2,YPPsym((P)"num"),YPPsym((P)"radix"));
  lit_73 = YPPlist(2,YPPsym((P)"digit-list"),YPPsym((P)"num"));
  lit_74 = YPsb((P)"0");
  T142 = YPsig(LITREF(lit_73),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_31 = YPmet(FUNCODEREF(fun_loop_31),LITREF(lit_32),T142,ENVNUL,PNUL,sloc(199));
  T141 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_32 = YPmet(FUNCODEREF(fun_num_to_str_base_32),LITREF(lit_6),T141,ENVNUL,PNUL,sloc(195));
  T145 = BOUNDP(YgooScolsSstrYnum_to_str_base);
  if (T145 != YPfalse) {
    T144 = VARREF(YgooScolsSstrYnum_to_str_base);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_num_to_str_base_32;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YgooScolsSstrYnum_to_str_base,T143);
  lit_75 = YPPlist(1,YPPsym((P)"num"));
  T147 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_33 = YPmet(FUNCODEREF(fun_num_to_str_33),LITREF(lit_8),T147,ENVNUL,PNUL,sloc(209));
  T150 = BOUNDP(YgooSmathYnum_to_str);
  if (T150 != YPfalse) {
    T149 = VARREF(YgooSmathYnum_to_str);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_num_to_str_33;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YgooSmathYnum_to_str,T148);
  lit_76 = YPPlist(2,YPPsym((P)"num"),YPPsym((P)"radix"));
  lit_77 = YPsb((P)"");
  lit_78 = YPPlist(2,YPPsym((P)"p"),YPPsym((P)"e"));
  lit_79 = YPsb((P)".0");
  lit_80 = YPsb((P)"0.");
  lit_81 = YPsb((P)".");
  lit_82 = YPsb((P)"0.0000000000000");
  lit_83 = YPsb((P)"-");
  T153 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_34 = YPmet(FUNCODEREF(fun_loop_34),LITREF(lit_32),T153,ENVNUL,PNUL,sloc(216));
  T152 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_35 = YPmet(FUNCODEREF(fun_num_to_str_base_35),LITREF(lit_6),T152,ENVNUL,PNUL,sloc(212));
  T156 = BOUNDP(YgooScolsSstrYnum_to_str_base);
  if (T156 != YPfalse) {
    T155 = VARREF(YgooScolsSstrYnum_to_str_base);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_num_to_str_base_35;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YgooScolsSstrYnum_to_str_base,T154);
  lit_84 = YPPlist(1,YPPsym((P)"num"));
  T158 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_36 = YPmet(FUNCODEREF(fun_num_to_str_36),LITREF(lit_8),T158,ENVNUL,PNUL,sloc(234));
  T161 = BOUNDP(YgooSmathYnum_to_str);
  if (T161 != YPfalse) {
    T160 = VARREF(YgooSmathYnum_to_str);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_num_to_str_36;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YgooSmathYnum_to_str,T159);
  lit_85 = YPPsym((P)"as");
  lit_86 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"s"));
  T164 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T163 = YPsig(LITREF(lit_86),YPPlist(2,T164,VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_as_37 = YPmet(FUNCODEREF(fun_as_37),LITREF(lit_85),T163,ENVNUL,PNUL,sloc(239));
  T167 = BOUNDP(YgooStypesYas);
  if (T167 != YPfalse) {
    T166 = VARREF(YgooStypesYas);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_as_37;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YgooStypesYas,T165);
  lit_87 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"s"));
  T170 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLsymG));
  T169 = YPsig(LITREF(lit_87),YPPlist(2,T170,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLsymG),Ynil);
  fun_as_38 = YPmet(FUNCODEREF(fun_as_38),LITREF(lit_85),T169,ENVNUL,PNUL,sloc(242));
  T173 = BOUNDP(YgooStypesYas);
  if (T173 != YPfalse) {
    T172 = VARREF(YgooStypesYas);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_as_38;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YgooStypesYas,T171);
  lit_88 = YPPsym((P)"<");
  lit_89 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T175 = YPsig(LITREF(lit_89),YPPlist(2,VARREF(YLsymG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_39 = YPmet(FUNCODEREF(fun_L_39),LITREF(lit_88),T175,ENVNUL,PNUL,sloc(250));
  T178 = BOUNDP(YgooSmagYL);
  if (T178 != YPfalse) {
    T177 = VARREF(YgooSmagYL);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_L_39;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YgooSmagYL,T176);
  lit_90 = YPPlist(1,YPPsym((P)"x"));
  T182 = YPsig(LITREF(lit_90),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T181 = fun_to_str_40 = YPmet(FUNCODEREF(fun_to_str_40),LITREF(lit_27),T182,ENVNUL,PNUL,sloc(253));
  T186 = BOUNDP(YgooSmathYto_str);
  if (T186 != YPfalse) {
    T185 = VARREF(YgooSmathYto_str);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_to_str_40;
  T184 = XCALL2(1,VARREF(YPdefine_method),T185,T187);
  T183 = VARSET(YgooSmathYto_str,T184);
  T180 = T183;
  return T180;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSlst},
  {&module_info_gooScolsSvec},
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
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"~==", &module_info_gooSmath, NULL},
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
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"napp", &module_info_gooSmacros, NULL},
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
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
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
  {"num-to-str-base", CVAR, &YgooScolsSstrYnum_to_str_base},
  {"integer->char", CVAR, &YgooScolsSstrYinteger_Gchar},
  {"epsilon", CVAR, &YgooScolsSstrYepsilon},
  {"str-to-num", CVAR, &YgooScolsSstrYstr_to_num},
  {"ascii-limit", CVAR, &YgooScolsSstrYascii_limit},
  {"char->integer", CVAR, &YgooScolsSstrYchar_Ginteger},
  {"$digit-to-char", CVAR, &YgooScolsSstrYDdigit_to_char},
  {"digit-base?", CVAR, &YgooScolsSstrYdigit_baseQ},
  {"str", CVAR, &YgooScolsSstrYstr},
  {"---main-0---", PVAR, NULL},
  {"ascii-digits", CVAR, &YgooScolsSstrYascii_digits},
  {"to-digit-base", CVAR, &YgooScolsSstrYto_digit_base},
  {"ascii-chars", CVAR, &YgooScolsSstrYascii_chars},
  {"*print-base*", DVAR, &YgooScolsSstrYTprint_baseT},
  {"ascii->char", CVAR, &YgooScolsSstrYascii_Gchar},
  {"ascii-whitespaces", CVAR, &YgooScolsSstrYascii_whitespaces},
  {"native-chars", CVAR, &YgooScolsSstrYnative_chars},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"num-to-str-base", NULL},
  {"*print-base*", NULL},
  {"str-to-num", NULL},
  {"ascii-limit", NULL},
  {"char->ascii", NULL},
  {"str", NULL},
  {"ascii-whitespaces", NULL},
  {"num-to-str", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSstr;
MODULE_INFO module_info_gooScolsSstr = {
  "goo/cols/str",
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
extern void load_module_gooScolsSlst (void);
extern void load_module_gooScolsSvec (void);

/* EXPRESSION: */

extern void load_module_gooScolsSstr (void);

void load_module_gooScolsSstr (void) {
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
  load_module_gooScolsSlst();
  load_module_gooScolsSvec();

  (P)YgooScolsSstrY___main_0___();

}

/* END OF GENERATED CODE. */
