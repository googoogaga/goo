/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/lst");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/lst */

EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YgooScolsSlstYPdat,"goo/cols/lst","%dat");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YgooScolsSlstYPkey,"goo/cols/lst","%key");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YgooScolsSlstYLlst_enumG,"goo/cols/lst","<lst-enum>");
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
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
DEF(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
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
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYC,"goo/math","^");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YgooScolsSlstYPkey_setter,"goo/cols/lst","%key-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
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
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YgooScolsSlstYDline_pah_empty,"goo/cols/lst","$line-pah-empty");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YgooScolsSlstYline_of_setter,"goo/cols/lst","line-of-setter");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YgooScolsSlstYLline_pahG,"goo/cols/lst","<line-pah>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLclassG,"goo/boot","<class>");
DEF(YgooScolsSlstYline_pah,"goo/cols/lst","line-pah");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Ysig_specs,"goo/boot","sig-specs");
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
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yfun_cache,"goo/boot","fun-cache");
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
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLlstG,"goo/boot","<lst>");
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
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ynul,"goo/boot","nul");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYas,"goo/types","as");
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
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
DEF(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yclone,"goo/boot","clone");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YgooScolsSlstYPdat_setter,"goo/cols/lst","%dat-setter");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
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
DEF(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"goo/boot","<int>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooScolsSlstYlist,"goo/cols/lst","list");
DEF(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLproductG,"goo/boot","<product>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_37);
DEFLIT(lit_125);
DEFLIT(lit_20);
DEFLIT(lit_5);
DEFLIT(lit_115);
DEFLIT(lit_62);
DEFLIT(lit_71);
DEFLIT(lit_75);
DEFLIT(lit_17);
DEFLIT(lit_94);
DEFLIT(lit_14);
DEFLIT(lit_19);
DEFLIT(lit_49);
DEFLIT(lit_86);
DEFLIT(lit_66);
DEFLIT(lit_67);
DEFLIT(lit_103);
DEFLIT(lit_96);
DEFLIT(lit_78);
DEFLIT(lit_36);
DEFLIT(lit_90);
DEFLIT(lit_99);
DEFLIT(lit_47);
DEFLIT(lit_40);
DEFLIT(lit_11);
DEFLIT(lit_97);
DEFLIT(lit_123);
DEFLIT(lit_80);
DEFLIT(lit_43);
DEFLIT(lit_39);
DEFLIT(lit_25);
DEFLIT(lit_32);
DEFLIT(lit_21);
DEFLIT(lit_127);
DEFLIT(lit_42);
DEFLIT(lit_44);
DEFLIT(lit_104);
DEFLIT(lit_27);
DEFLIT(lit_1);
DEFLIT(lit_65);
DEFLIT(lit_54);
DEFLIT(lit_35);
DEFLIT(lit_89);
DEFLIT(lit_24);
DEFLIT(lit_76);
DEFLIT(lit_2);
DEFLIT(lit_117);
DEFLIT(lit_79);
DEFLIT(lit_107);
DEFLIT(lit_6);
DEFLIT(lit_122);
DEFLIT(lit_0);
DEFLIT(lit_9);
DEFLIT(lit_131);
DEFLIT(lit_106);
DEFLIT(lit_50);
DEFLIT(lit_26);
DEFLIT(lit_77);
DEFLIT(lit_95);
DEFLIT(lit_53);
DEFLIT(lit_8);
DEFLIT(lit_16);
DEFLIT(lit_33);
DEFLIT(lit_126);
DEFLIT(lit_59);
DEFLIT(lit_72);
DEFLIT(lit_15);
DEFLIT(lit_70);
DEFLIT(lit_13);
DEFLIT(lit_73);
DEFLIT(lit_31);
DEFLIT(lit_114);
DEFLIT(lit_48);
DEFLIT(lit_69);
DEFLIT(lit_88);
DEFLIT(lit_7);
DEFLIT(lit_111);
DEFLIT(lit_128);
DEFLIT(lit_64);
DEFLIT(lit_129);
DEFLIT(lit_63);
DEFLIT(lit_68);
DEFLIT(lit_112);
DEFLIT(lit_30);
DEFLIT(lit_45);
DEFLIT(lit_51);
DEFLIT(lit_83);
DEFLIT(lit_110);
DEFLIT(lit_84);
DEFLIT(lit_91);
DEFLIT(lit_121);
DEFLIT(lit_61);
DEFLIT(lit_118);
DEFLIT(lit_105);
DEFLIT(lit_93);
DEFLIT(lit_101);
DEFLIT(lit_124);
DEFLIT(lit_12);
DEFLIT(lit_60);
DEFLIT(lit_81);
DEFLIT(lit_82);
DEFLIT(lit_22);
DEFLIT(lit_46);
DEFLIT(lit_56);
DEFLIT(lit_58);
DEFLIT(lit_116);
DEFLIT(lit_34);
DEFLIT(lit_108);
DEFLIT(lit_92);
DEFLIT(lit_119);
DEFLIT(lit_23);
DEFLIT(lit_29);
DEFLIT(lit_10);
DEFLIT(lit_74);
DEFLIT(lit_52);
DEFLIT(lit_113);
DEFLIT(lit_102);
DEFLIT(lit_85);
DEFLIT(lit_100);
DEFLIT(lit_130);
DEFLIT(lit_109);
DEFLIT(lit_4);
DEFLIT(lit_87);
DEFLIT(lit_28);
DEFLIT(lit_18);
DEFLIT(lit_55);
DEFLIT(lit_98);
DEFLIT(lit_57);
DEFLIT(lit_120);
DEFLIT(lit_3);
DEFLIT(lit_38);
DEFLIT(lit_41);

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
  P sumF1821;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_sum_0,1);
  sumF1821 = T1;
  FUNINIT(sumF1821, 1,sumF1821);
  T2 = CALL2(1,sumF1821,YPint((P)0),x_);
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
  P fndF1822;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_2,3);
  fndF1822 = T1;
  FUNINIT(fndF1822, 3,default_,key_,fndF1822);
  T2 = CALL2(1,fndF1822,YPint((P)0),x_);
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
  P fndF1823;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(key_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_4,3);
  fndF1823 = T1;
  FUNINIT(fndF1823, 3,key_,z_,fndF1823);
  T2 = CALL2(1,fndF1823,YPint((P)0),x_);
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
  P fabF1824;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_fab_8,2);
  fabF1824 = T1;
  FUNINIT(fabF1824, 2,t_,fabF1824);
  T3 = CALL1(1,VARREF(YgooScolsScolYempty),t_);
  T2 = CALL2(1,fabF1824,s_,T3);
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
  P buildF1825;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
loop:
  T1 = FUNSHELL(1,fun_build_10,3);
  buildF1825 = T1;
  FUNINIT(buildF1825, 3,c_,objects_,buildF1825);
  T4 = CALL1(1,VARREF(YgooStypesYlen),objects_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T5 = CALL1(1,VARREF(YgooScolsScolYempty),c_);
  T2 = CALL2(1,buildF1825,T3,T5);
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
  P x_1298F1826;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  x_1298F1826 = e_;
  T2 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)1));
  CALL2(1,VARREF(YgooScolsSlstYPkey_setter),T1,x_1298F1826);
  T4 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  CALL2(1,VARREF(YgooScolsSlstYPdat_setter),T3,x_1298F1826);
  T0 = x_1298F1826;
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
  P fndF1827;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_fnd_24,1);
  fndF1827 = T1;
  FUNINIT(fndF1827, 1,fndF1827);
  T2 = CALL2(0,fndF1827,x_,x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_26) {
  P l_,r_;
  P tF1828;
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
    tF1828 = T3;
    CALL2(1,VARREF(Ytail_setter),r_,l_);
    a1 = tF1828;
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
  P loopF1829;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_26,1);
  loopF1829 = T1;
  FUNINIT(loopF1829, 1,loopF1829);
  T4 = CALL1(1,VARREF(Yclass_of),c_);
  T3 = CALL1(1,VARREF(YgooScolsScolYempty),T4);
  T2 = CALL2(0,loopF1829,c_,T3);
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
  P find_tailF1830;
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
    find_tailF1830 = T3;
    FUNINIT(find_tailF1830, 1,find_tailF1830);
    T4 = CALL1(1,find_tailF1830,y_);
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1300_30) {
  P x_1299_;
  P xF1831;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1299_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1299_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1299_);
    xF1831 = T4;
    T6 = BOXVAL(FREEREF(0));
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),xF1831);
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
  P x_1300F1835;
  P curF1834;
  P resultF1833;
  P connectF1832;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T1 = fun_connect_29;
  connectF1832 = T1;
  T3 = CALL1(1,VARREF(Ylst),YPfalse);
  resultF1833 = T3;
  curF1834 = resultF1833;
  curF1834 = BOXFAB(curF1834);
  T7 = BOXVAL(curF1834);
  T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),x_);
  T6 = CALL2(1,connectF1832,T7,T8);
  BOXVAL(curF1834) = T6;
  T9 = FUNSHELL(1,fun_x_1300_30,3);
  x_1300F1835 = T9;
  FUNINIT(x_1300F1835, 3,curF1834,connectF1832,x_1300F1835);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  T10 = CALL1(0,x_1300F1835,T11);
  T12 = CALL1(1,VARREF(Ytail),resultF1833);
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
  P tmpF1836;
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
      tmpF1836 = T9;
      T10 = CALL1(1,VARREF(Yhead),next_);
      CALL2(1,VARREF(Yhead_setter),T10,prev_);
      T11 = CALL2(1,VARREF(Yhead_setter),tmpF1836,next_);
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
  P bubF1837;
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
    bubF1837 = T4;
    FUNINIT(bubF1837, 3,FREEREF(1),FREEREF(2),bubF1837);
    T6 = CALL1(1,VARREF(Yhead),FREEREF(0));
    T7 = CALL1(1,VARREF(Ytail),FREEREF(0));
    T5 = CALL3(0,bubF1837,T6,FREEREF(0),T7);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sort_byX_38) {
  P items_,test_;
  P loopF1838;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(items_, 0);
  ARG(test_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_37,3);
  loopF1838 = T1;
  FUNINIT(loopF1838, 3,items_,loopF1838,test_);
  T2 = CALL1(0,loopF1838,YPfalse);
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
  P DemptyF1853;
  P classF1852;
  P x_1303F1851;
  P x_1303F1850;
  P x_1303F1849;
  P x_1303F1848;
  P x_1303F1847;
  P x_1303F1846;
  P x_1303F1845;
  P x_1303F1844;
  P x_1303F1843;
  P supersF1842;
  P nameF1841;
  P x_1303F1840;
  P x_1304F1839;
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
  x_1304F1839 = T1;
  FUNINIT(x_1304F1839, 2,FREEREF(0),return_);
  x_1303F1840 = FREEREF(0);
  nameF1841 = YPfalse;
  nameF1841 = BOXFAB(nameF1841);
  supersF1842 = YPfalse;
  supersF1842 = BOXFAB(supersF1842);
  T7 = CALL2(1,VARREF(YisaQ),x_1303F1840,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1303F1840,LITREF(lit_90),x_1304F1839);
    x_1303F1843 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1303F1843,x_1304F1839);
    BOXVAL(nameF1841) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1303F1843);
    x_1303F1844 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1303F1844,x_1304F1839);
    x_1303F1845 = T14;
    BOXVAL(supersF1842) = x_1303F1845;
    x_1303F1846 = Ynil;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1303F1846,x_1304F1839);
    x_1303F1847 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1303F1847,x_1304F1839);
    T19 = CALL1(1,VARREF(Ytail),x_1303F1846);
    x_1303F1848 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1303F1848,x_1304F1839);
    T16 = T20;
    T15 = T16;
    T21 = CALL1(1,VARREF(Ytail),x_1303F1844);
    x_1303F1849 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1303F1849,x_1304F1839);
    x_1303F1850 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1303F1850,x_1304F1839);
    T25 = CALL1(1,VARREF(Ytail),x_1303F1849);
    x_1303F1851 = T25;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1303F1851,x_1304F1839);
    T22 = T26;
    T13 = T22;
    T10 = T13;
    T8 = T10;
  } else {
    T27 = CALL2(1,x_1304F1839,LITREF(lit_91),x_1303F1840);
  }
  T30 = BOXVAL(nameF1841);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_92),T30,LITREF(lit_93));
  classF1852 = T29;
  T33 = BOXVAL(nameF1841);
  T32 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_94),T33,LITREF(lit_95));
  DemptyF1853 = T32;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T39 = CALL1(1,VARREF(Ylst),classF1852);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T43 = BOXVAL(supersF1842);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_99));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T40,LITREF(lit_99));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T47 = CALL1(1,VARREF(Ylst),DemptyF1853);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_101));
  T51 = CALL1(1,VARREF(Ylst),classF1852);
  T49 = CALL3(1,VARREF(YgooSmacrosYcat),T50,T51,LITREF(lit_99));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T45 = CALL4(1,VARREF(YgooSmacrosYcat),T46,T47,T48,LITREF(lit_99));
  T44 = CALL1(1,VARREF(Ylst),T45);
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_102));
  T56 = BOXVAL(nameF1841);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_103));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_104));
  T58 = CALL3(1,VARREF(YgooSmacrosYcat),T59,T60,LITREF(lit_99));
  T57 = CALL1(1,VARREF(Ylst),T58);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_101));
  T64 = CALL1(1,VARREF(Ylst),classF1852);
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
  T81 = CALL1(1,VARREF(Ylst),classF1852);
  T79 = CALL3(1,VARREF(YgooSmacrosYcat),T80,T81,LITREF(lit_99));
  T78 = CALL1(1,VARREF(Ylst),T79);
  T76 = CALL3(1,VARREF(YgooSmacrosYcat),T77,T78,LITREF(lit_99));
  T75 = CALL1(1,VARREF(Ylst),T76);
  T82 = CALL1(1,VARREF(Ylst),LITREF(lit_110));
  T83 = CALL1(1,VARREF(Ylst),classF1852);
  T74 = CALL4(1,VARREF(YgooSmacrosYcat),T75,T82,T83,LITREF(lit_99));
  T73 = CALL1(1,VARREF(Ylst),T74);
  T84 = CALL1(1,VARREF(Ylst),DemptyF1853);
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
  P fabF1854;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  NARGS(elts_, 1);
loop:
  T1 = FUNSHELL(1,fun_fab_52,3);
  fabF1854 = T1;
  FUNINIT(fabF1854, 3,elts_,l_,fabF1854);
  T3 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YgooScolsSlstYLline_listG));
  T5 = CALL1(1,VARREF(YgooStypesYlen),elts_);
  T4 = CALL2(1,VARREF(YgooSmathY_),T5,YPint((P)1));
  T2 = CALL2(0,fabF1854,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_copy_54) {
  P l_,src_;
  P tmpF1859;
  P tmpF1858;
  P tF1857;
  P hF1856;
  P tmpF1855;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(src_, 1);
loop:
  T2 = CALL2(1,VARREF(YisaQ),src_,VARREF(YLlstG));
  tmpF1855 = T2;
  if (tmpF1855 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),src_);
    T4 = CALL1(1,VARREF(Ynot),T5);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(Yhead),src_);
    hF1856 = T7;
    T9 = CALL1(1,VARREF(Ytail),src_);
    tF1857 = T9;
    T13 = CALL1(1,VARREF(YgooScolsSlstYline_of),hF1856);
    tmpF1858 = T13;
    if (tmpF1858 != YPfalse) {
      T14 = tmpF1858;
    } else {
      T14 = l_;
    }
    T12 = T14;
    T11 = CALL2(0,FREEREF(0),T12,hF1856);
    T17 = CALL1(1,VARREF(YgooScolsSlstYline_of),tF1857);
    tmpF1859 = T17;
    if (tmpF1859 != YPfalse) {
      T18 = tmpF1859;
    } else {
      T18 = l_;
    }
    T16 = T18;
    T15 = CALL2(0,FREEREF(0),T16,tF1857);
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
  P copyF1860;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(ctx_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_copy_54,1);
  copyF1860 = T1;
  FUNINIT(copyF1860, 1,copyF1860);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),ctx_);
  T2 = CALL2(0,copyF1860,T3,src_);
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
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138;
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
  T11 = VARREF_OR(YgooStypesYlen,YPfalse);
  T12 = fun_len_1;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T12);
  VARSET(YgooStypesYlen,T10);
  lit_12 = YPPsym((P)"elt-or");
  lit_13 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"key"),YPPsym((P)"default"));
  lit_14 = YPPsym((P)"fnd");
  lit_15 = YPPlist(2,YPPsym((P)"count"),YPPsym((P)"x"));
  T14 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_2 = YPmet(FUNCODEREF(fun_fnd_2),LITREF(lit_14),T14,ENVNUL,PNUL,sloc(42));
  T13 = YPsig(LITREF(lit_13),YPPlist(3,VARREF(YLlstG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_3 = YPmet(FUNCODEREF(fun_elt_or_3),LITREF(lit_12),T13,ENVNUL,PNUL,sloc(41));
  T16 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T17 = fun_elt_or_3;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T17);
  VARSET(YgooScolsScolYelt_or,T15);
  lit_16 = YPPsym((P)"elt-setter");
  lit_17 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"key"));
  lit_18 = YPPlist(2,YPPsym((P)"count"),YPPsym((P)"x"));
  T19 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_4 = YPmet(FUNCODEREF(fun_fnd_4),LITREF(lit_14),T19,ENVNUL,PNUL,sloc(50));
  T18 = YPsig(LITREF(lit_17),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_5 = YPmet(FUNCODEREF(fun_elt_setter_5),LITREF(lit_16),T18,ENVNUL,PNUL,sloc(49));
  T21 = VARREF_OR(YgooScolsScolxYelt_setter,YPfalse);
  T22 = fun_elt_setter_5;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T22);
  VARSET(YgooScolsScolxYelt_setter,T20);
  lit_19 = YPPsym((P)"empty?");
  lit_20 = YPPlist(1,YPPsym((P)"c"));
  T23 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_emptyQ_6 = YPmet(FUNCODEREF(fun_emptyQ_6),LITREF(lit_19),T23,ENVNUL,PNUL,sloc(57));
  T25 = VARREF_OR(YgooSmacrosYemptyQ,YPfalse);
  T26 = fun_emptyQ_6;
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T26);
  VARSET(YgooSmacrosYemptyQ,T24);
  lit_21 = YPPsym((P)"empty");
  lit_22 = YPPlist(1,YPPsym((P)"c"));
  T28 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T27 = YPsig(LITREF(lit_22),YPPlist(1,T28),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_empty_7 = YPmet(FUNCODEREF(fun_empty_7),LITREF(lit_21),T27,ENVNUL,PNUL,sloc(59));
  T30 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T31 = fun_empty_7;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T31);
  VARSET(YgooScolsScolYempty,T29);
  lit_23 = YPPsym((P)"fab");
  lit_24 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"s"));
  lit_25 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"res"));
  T34 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fab_8 = YPmet(FUNCODEREF(fun_fab_8),LITREF(lit_23),T34,ENVNUL,PNUL,sloc(62));
  T33 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T32 = YPsig(LITREF(lit_24),YPPlist(2,T33,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_fab_9 = YPmet(FUNCODEREF(fun_fab_9),LITREF(lit_23),T32,ENVNUL,PNUL,sloc(61));
  T36 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T37 = fun_fab_9;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YgooScolsScolYfab,T35);
  lit_26 = YPPsym((P)"fabs");
  lit_27 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"objects"));
  lit_28 = YPPsym((P)"build");
  lit_29 = YPPlist(2,YPPsym((P)"index"),YPPsym((P)"result"));
  T40 = YPsig(LITREF(lit_29),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_build_10 = YPmet(FUNCODEREF(fun_build_10),LITREF(lit_28),T40,ENVNUL,PNUL,sloc(68));
  T39 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T38 = YPsig(LITREF(lit_27),YPPlist(1,T39),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_fabs_11 = YPmet(FUNCODEREF(fun_fabs_11),LITREF(lit_26),T38,ENVNUL,PNUL,sloc(67));
  T42 = VARREF_OR(YgooSmathYfabs,YPfalse);
  T43 = fun_fabs_11;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YgooSmathYfabs,T41);
  lit_30 = YPPsym((P)"<lst-enum>");
  T45 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T44 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_30),T45);
  VARSET(YgooScolsSlstYLlst_enumG,T44);
  lit_31 = YPPsym((P)"%dat");
  lit_32 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_12 = YPmet(FUNCODEREF(fun_Pdat_12),LITREF(lit_31),T46,ENVNUL,PNUL,sloc(76));
  T48 = VARREF_OR(YgooScolsSlstYPdat,YPfalse);
  T49 = fun_Pdat_12;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YgooScolsSlstYPdat,T47);
  lit_33 = YPPsym((P)"%dat-setter");
  lit_34 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T50 = YPsig(LITREF(lit_34),YPPlist(2,VARREF(YLlstG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdat_setter_13 = YPmet(FUNCODEREF(fun_Pdat_setter_13),LITREF(lit_33),T50,ENVNUL,PNUL,sloc(76));
  T52 = VARREF_OR(YgooScolsSlstYPdat_setter,YPfalse);
  T53 = fun_Pdat_setter_13;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YgooScolsSlstYPdat_setter,T51);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPdat),VARREF(YgooScolsSlstYPdat_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_35 = YPPsym((P)"%key");
  lit_36 = YPPlist(1,YPPsym((P)"_x"));
  T54 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pkey_14 = YPmet(FUNCODEREF(fun_Pkey_14),LITREF(lit_35),T54,ENVNUL,PNUL,sloc(77));
  T56 = VARREF_OR(YgooScolsSlstYPkey,YPfalse);
  T57 = fun_Pkey_14;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T57);
  VARSET(YgooScolsSlstYPkey,T55);
  lit_37 = YPPsym((P)"%key-setter");
  lit_38 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_38),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pkey_setter_15 = YPmet(FUNCODEREF(fun_Pkey_setter_15),LITREF(lit_37),T58,ENVNUL,PNUL,sloc(77));
  T60 = VARREF_OR(YgooScolsSlstYPkey_setter,YPfalse);
  T61 = fun_Pkey_setter_15;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T61);
  VARSET(YgooScolsSlstYPkey_setter,T59);
  lit_39 = YPPlist(1,YPPsym((P)"_x"));
  T62 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T62,ENVNUL,PNUL,sloc(77));
  T63 = fun_16;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPkey),VARREF(YgooScolsSlstYPkey_setter),VARREF(YLintG),T63);
  lit_40 = YPPsym((P)"enum");
  lit_41 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_enum_17 = YPmet(FUNCODEREF(fun_enum_17),LITREF(lit_40),T64,ENVNUL,PNUL,sloc(78));
  T66 = VARREF_OR(YgooScolsScolYenum,YPfalse);
  T67 = fun_enum_17;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YgooScolsScolYenum,T65);
  lit_42 = YPPsym((P)"fin?");
  lit_43 = YPPlist(1,YPPsym((P)"e"));
  T68 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_18 = YPmet(FUNCODEREF(fun_finQ_18),LITREF(lit_42),T68,ENVNUL,PNUL,sloc(80));
  T70 = VARREF_OR(YgooScolsScolYfinQ,YPfalse);
  T71 = fun_finQ_18;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T71);
  VARSET(YgooScolsScolYfinQ,T69);
  lit_44 = YPPsym((P)"nxt");
  lit_45 = YPPlist(1,YPPsym((P)"e"));
  T72 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_nxt_19 = YPmet(FUNCODEREF(fun_nxt_19),LITREF(lit_44),T72,ENVNUL,PNUL,sloc(82));
  T74 = VARREF_OR(YgooScolsScolYnxt,YPfalse);
  T75 = fun_nxt_19;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T75);
  VARSET(YgooScolsScolYnxt,T73);
  lit_46 = YPPsym((P)"now");
  lit_47 = YPPlist(1,YPPsym((P)"e"));
  T76 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_20 = YPmet(FUNCODEREF(fun_now_20),LITREF(lit_46),T76,ENVNUL,PNUL,sloc(84));
  T78 = VARREF_OR(YgooScolsScolYnow,YPfalse);
  T79 = fun_now_20;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T79);
  VARSET(YgooScolsScolYnow,T77);
  lit_48 = YPPsym((P)"now-setter");
  lit_49 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"e"));
  T80 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_21 = YPmet(FUNCODEREF(fun_now_setter_21),LITREF(lit_48),T80,ENVNUL,PNUL,sloc(86));
  T82 = VARREF_OR(YgooScolsScolYnow_setter,YPfalse);
  T83 = fun_now_setter_21;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T83);
  VARSET(YgooScolsScolYnow_setter,T81);
  lit_50 = YPPsym((P)"now-key");
  lit_51 = YPPlist(1,YPPsym((P)"e"));
  T84 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_now_key_22 = YPmet(FUNCODEREF(fun_now_key_22),LITREF(lit_50),T84,ENVNUL,PNUL,sloc(88));
  T86 = VARREF_OR(YgooScolsScolYnow_key,YPfalse);
  T87 = fun_now_key_22;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T87);
  VARSET(YgooScolsScolYnow_key,T85);
  lit_52 = YPPsym((P)"add");
  lit_53 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T88 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_add_23 = YPmet(FUNCODEREF(fun_add_23),LITREF(lit_52),T88,ENVNUL,PNUL,sloc(92));
  T90 = VARREF_OR(YgooScolsScolYadd,YPfalse);
  T91 = fun_add_23;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T91);
  VARSET(YgooScolsScolYadd,T89);
  lit_54 = YPPsym((P)"last");
  lit_55 = YPPlist(1,YPPsym((P)"x"));
  lit_56 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"px"));
  T93 = YPsig(LITREF(lit_56),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_24 = YPmet(FUNCODEREF(fun_fnd_24),LITREF(lit_14),T93,ENVNUL,PNUL,sloc(96));
  T92 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_25 = YPmet(FUNCODEREF(fun_last_25),LITREF(lit_54),T92,ENVNUL,PNUL,sloc(95));
  T95 = VARREF_OR(YgooSmacrosYlast,YPfalse);
  T96 = fun_last_25;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T96);
  VARSET(YgooSmacrosYlast,T94);
  lit_57 = YPPsym((P)"rev!");
  lit_58 = YPPlist(1,YPPsym((P)"c"));
  lit_59 = YPPsym((P)"loop");
  lit_60 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"r"));
  T98 = YPsig(LITREF(lit_60),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_26 = YPmet(FUNCODEREF(fun_loop_26),LITREF(lit_59),T98,ENVNUL,PNUL,sloc(100));
  T97 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_revX_27 = YPmet(FUNCODEREF(fun_revX_27),LITREF(lit_57),T97,ENVNUL,PNUL,sloc(99));
  T100 = VARREF_OR(YgooSmacrosYrevX,YPfalse);
  T101 = fun_revX_27;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T101);
  VARSET(YgooSmacrosYrevX,T99);
  lit_61 = YPPsym((P)"cat!");
  lit_62 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  lit_63 = YPPsym((P)"connect");
  lit_64 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  lit_65 = YPPsym((P)"find-tail");
  lit_66 = YPPlist(1,YPPsym((P)"p"));
  lit_67 = YPPsym((P)"x-1300");
  lit_68 = YPPlist(1,YPPsym((P)"x-1299"));
  T105 = YPsig(LITREF(lit_66),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_tail_28 = YPmet(FUNCODEREF(fun_find_tail_28),LITREF(lit_65),T105,ENVNUL,PNUL,sloc(113));
  T104 = YPsig(LITREF(lit_64),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_connect_29 = YPmet(FUNCODEREF(fun_connect_29),LITREF(lit_63),T104,ENVNUL,PNUL,sloc(108));
  T103 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1300_30 = YPmet(FUNCODEREF(fun_x_1300_30),LITREF(lit_67),T103,ENVNUL,PNUL,sloc(120));
  T102 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLlstG)),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_catX_31 = YPmet(FUNCODEREF(fun_catX_31),LITREF(lit_61),T102,ENVNUL,PNUL,sloc(107));
  T107 = VARREF_OR(YgooScolsSseqxYcatX,YPfalse);
  T108 = fun_catX_31;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T108);
  VARSET(YgooScolsSseqxYcatX,T106);
  lit_69 = YPPlist(1,YPPsym((P)"objects"));
  T109 = YPsig(LITREF(lit_69),Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  fun_lst_32 = YPmet(FUNCODEREF(fun_lst_32),LITREF(lit_0),T109,ENVNUL,PNUL,sloc(125));
  T111 = VARREF_OR(Ylst,YPfalse);
  T112 = fun_lst_32;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T112);
  VARSET(Ylst,T110);
  lit_70 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T113 = YPsig(LITREF(lit_70),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pair_33 = YPmet(FUNCODEREF(fun_pair_33),LITREF(lit_2),T113,ENVNUL,PNUL,sloc(128));
  T115 = VARREF_OR(YgooSmacrosYpair,YPfalse);
  T116 = fun_pair_33;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T116);
  VARSET(YgooSmacrosYpair,T114);
  lit_71 = YPPsym((P)"push!");
  lit_72 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T117 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pushX_34 = YPmet(FUNCODEREF(fun_pushX_34),LITREF(lit_71),T117,ENVNUL,PNUL,sloc(131));
  T119 = VARREF_OR(YgooScolsSseqxYpushX,YPfalse);
  T120 = fun_pushX_34;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T120);
  VARSET(YgooScolsSseqxYpushX,T118);
  lit_73 = YPPsym((P)"pop!");
  lit_74 = YPPlist(1,YPPsym((P)"c"));
  T122 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T121 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T122,Ynil);
  fun_popX_35 = YPmet(FUNCODEREF(fun_popX_35),LITREF(lit_73),T121,ENVNUL,PNUL,sloc(134));
  T124 = VARREF_OR(YgooScolsSseqxYpopX,YPfalse);
  T125 = fun_popX_35;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T125);
  VARSET(YgooScolsSseqxYpopX,T123);
  lit_75 = YPPsym((P)"sort-by!");
  lit_76 = YPPlist(2,YPPsym((P)"items"),YPPsym((P)"test"));
  lit_77 = YPPlist(1,YPPsym((P)"tmp"));
  lit_78 = YPPsym((P)"bub");
  lit_79 = YPPlist(3,YPPsym((P)"tmp"),YPPsym((P)"prev"),YPPsym((P)"next"));
  T128 = YPsig(LITREF(lit_79),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_bub_36 = YPmet(FUNCODEREF(fun_bub_36),LITREF(lit_78),T128,ENVNUL,PNUL,sloc(142));
  T127 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_37 = YPmet(FUNCODEREF(fun_loop_37),LITREF(lit_59),T127,ENVNUL,PNUL,sloc(139));
  T126 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sort_byX_38 = YPmet(FUNCODEREF(fun_sort_byX_38),LITREF(lit_75),T126,ENVNUL,PNUL,sloc(138));
  T130 = VARREF_OR(YgooScolsSseqYsort_byX,YPfalse);
  T131 = fun_sort_byX_38;
  T129 = XCALL2(1,VARREF(YPdefine_method),T130,T131);
  VARSET(YgooScolsSseqYsort_byX,T129);
  lit_80 = YPPsym((P)"to-str");
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  lit_82 = YPsb((P)"(");
  lit_83 = YPsb((P)")");
  T134 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T133 = fun_to_str_39 = YPmet(FUNCODEREF(fun_to_str_39),LITREF(lit_80),T134,ENVNUL,PNUL,sloc(153));
  T137 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T138 = fun_to_str_39;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T138);
  T135 = VARSET(YgooSmathYto_str,T136);
  T132 = T135;
  return T132;
}

P YgooScolsSlstY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
DEFCREGS();
loop:
  lit_84 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T0 = YPsig(LITREF(lit_84),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assq_40 = YPmet(FUNCODEREF(fun_assq_40),LITREF(lit_6),T0,ENVNUL,PNUL,sloc(160));
  T2 = VARREF_OR(YgooScolsSlstYassq,YPfalse);
  T3 = fun_assq_40;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YgooScolsSlstYassq,T1);
  lit_85 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"l"),YPPsym((P)"pos"));
  T4 = YPsig(LITREF(lit_85),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_assqn_41 = YPmet(FUNCODEREF(fun_assqn_41),LITREF(lit_4),T4,ENVNUL,PNUL,sloc(167));
  T6 = VARREF_OR(YgooScolsSlstYassqn,YPfalse);
  T7 = fun_assqn_41;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YgooScolsSlstYassqn,T5);
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
  T10 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1304_42 = YPmet(FUNCODEREF(fun_x_1304_42),LITREF(lit_88),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T11 = fun_44;
  YPmacro(YPPsym((P)"goo/cols/lst"),YPPsym((P)"def-list"),T11);
  lit_111 = YPPsym((P)"line-of");
  lit_112 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_line_of_45 = YPmet(FUNCODEREF(fun_line_of_45),LITREF(lit_111),T12,ENVNUL,PNUL,sloc(183));
  T14 = VARREF_OR(YgooScolsSlstYline_of,YPfalse);
  T15 = fun_line_of_45;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YgooScolsSlstYline_of,T13);
  lit_113 = YPPsym((P)"<line>");
  T17 = (P)YPpair(VARREF(YLmagG),Ynil);
  T16 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_113),T17);
  VARSET(YgooScolsSlstYLlineG,T16);
  lit_114 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YgooScolsSlstYLlineG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_line_of_46 = YPmet(FUNCODEREF(fun_line_of_46),LITREF(lit_111),T18,ENVNUL,PNUL,sloc(186));
  T20 = VARREF_OR(YgooScolsSlstYline_of,YPfalse);
  T21 = fun_line_of_46;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T21);
  VARSET(YgooScolsSlstYline_of,T19);
  lit_115 = YPPsym((P)"line-of-setter");
  lit_116 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T23 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T22 = YPsig(LITREF(lit_116),YPPlist(2,T23,VARREF(YgooScolsSlstYLlineG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_line_of_setter_47 = YPmet(FUNCODEREF(fun_line_of_setter_47),LITREF(lit_115),T22,ENVNUL,PNUL,sloc(186));
  T25 = VARREF_OR(YgooScolsSlstYline_of_setter,YPfalse);
  T26 = fun_line_of_setter_47;
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T26);
  VARSET(YgooScolsSlstYline_of_setter,T24);
  lit_117 = YPPlist(1,YPPsym((P)"_x"));
  T27 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T27,ENVNUL,PNUL,sloc(186));
  T28 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T29 = fun_48;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSlstYLlineG),VARREF(YgooScolsSlstYline_of),VARREF(YgooScolsSlstYline_of_setter),T28,T29);
  lit_118 = YPPsym((P)"<line-pah>");
  T32 = (P)YPpair(VARREF(YgooScolsSlstYLlineG),Ynil);
  T31 = (P)YPpair(VARREF(YLlstG),T32);
  T30 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_118),T31);
  VARSET(YgooScolsSlstYLline_pahG,T30);
  T33 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsSlstYLline_pahG));
  VARSET(YgooScolsSlstYDline_pah_empty,T33);
  lit_119 = YPPsym((P)"line-pah");
  lit_120 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T34 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_pah = YPmet(FUNCODEREF(YgooScolsSlstYline_pah),LITREF(lit_119),T34,ENVNUL,PNUL,sloc(188));
  T35 = YgooScolsSlstYline_pah;
  VARSET(YgooScolsSlstYline_pah,T35);
  lit_121 = YPPlist(1,YPPsym((P)"e"));
  T37 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSlstYLline_pahG));
  T36 = YPsig(LITREF(lit_121),YPPlist(1,T37),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLline_pahG),Ynil);
  fun_empty_50 = YPmet(FUNCODEREF(fun_empty_50),LITREF(lit_21),T36,ENVNUL,PNUL,sloc(188));
  T39 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T40 = fun_empty_50;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T40);
  VARSET(YgooScolsScolYempty,T38);
  VARSET(YgooScolsSlstYLline_listG,VARREF(YgooScolsSlstYLline_pahG));
  lit_122 = YPPsym((P)"line-pair");
  lit_123 = YPPlist(3,YPPsym((P)"h"),YPPsym((P)"t"),YPPsym((P)"l"));
  T41 = YPsig(LITREF(lit_123),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_pair = YPmet(FUNCODEREF(YgooScolsSlstYline_pair),LITREF(lit_122),T41,ENVNUL,PNUL,sloc(192));
  T42 = YgooScolsSlstYline_pair;
  VARSET(YgooScolsSlstYline_pair,T42);
  lit_124 = YPPsym((P)"line-list");
  lit_125 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"elts"));
  lit_126 = YPPlist(2,YPPsym((P)"r"),YPPsym((P)"i"));
  T44 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fab_52 = YPmet(FUNCODEREF(fun_fab_52),LITREF(lit_23),T44,ENVNUL,PNUL,sloc(195));
  T43 = YPsig(LITREF(lit_125),YPPlist(1,VARREF(YLanyG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_list = YPmet(FUNCODEREF(YgooScolsSlstYline_list),LITREF(lit_124),T43,ENVNUL,PNUL,sloc(194));
  T45 = YgooScolsSlstYline_list;
  VARSET(YgooScolsSlstYline_list,T45);
  lit_127 = YPPsym((P)"line-list-of");
  lit_128 = YPPlist(2,YPPsym((P)"ctx"),YPPsym((P)"src"));
  lit_129 = YPPsym((P)"copy");
  lit_130 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"src"));
  T47 = YPsig(LITREF(lit_130),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_copy_54 = YPmet(FUNCODEREF(fun_copy_54),LITREF(lit_129),T47,ENVNUL,PNUL,sloc(201));
  T46 = YPsig(LITREF(lit_128),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_line_list_of_55 = YPmet(FUNCODEREF(fun_line_list_of_55),LITREF(lit_127),T46,ENVNUL,PNUL,sloc(200));
  T49 = VARREF_OR(YgooScolsSlstYline_list_of,YPfalse);
  T50 = fun_line_list_of_55;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T50);
  VARSET(YgooScolsSlstYline_list_of,T48);
  lit_131 = YPPlist(2,YPPsym((P)"ctx"),YPPsym((P)"src"));
  T51 = YPsig(LITREF(lit_131),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_line_list_of_56 = YPmet(FUNCODEREF(fun_line_list_of_56),LITREF(lit_127),T51,ENVNUL,PNUL,sloc(207));
  T53 = VARREF_OR(YgooScolsSlstYline_list_of,YPfalse);
  T54 = fun_line_list_of_56;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T54);
  VARSET(YgooScolsSlstYline_list_of,T52);
  T55 = YPfalse;
  return T55;
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
  {"type-object", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
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
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
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
  {"<singleton>", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
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
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
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
  {"%rnul", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
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
  {"rem", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
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
  {"elts", &module_info_gooScolsScol, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
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
  {"%tup", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
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
  {"%eof-object", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"<num>", &module_info_gooSboot, NULL},
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
  {"line-list", CVAR, &YgooScolsSlstYline_list},
  {"%dat", CVAR, &YgooScolsSlstYPdat},
  {"%key", CVAR, &YgooScolsSlstYPkey},
  {"<lst-enum>", CVAR, &YgooScolsSlstYLlst_enumG},
  {"line-of", CVAR, &YgooScolsSlstYline_of},
  {"line-pair", CVAR, &YgooScolsSlstYline_pair},
  {"%key-setter", CVAR, &YgooScolsSlstYPkey_setter},
  {"def-list", PVAR, NULL},
  {"<list>", CVAR, &YgooScolsSlstYLlistG},
  {"$line-pah-empty", CVAR, &YgooScolsSlstYDline_pah_empty},
  {"line-of-setter", CVAR, &YgooScolsSlstYline_of_setter},
  {"<line-pah>", CVAR, &YgooScolsSlstYLline_pahG},
  {"line-pah", CVAR, &YgooScolsSlstYline_pah},
  {"---main-0---", PVAR, NULL},
  {"assq", CVAR, &YgooScolsSlstYassq},
  {"%dat-setter", CVAR, &YgooScolsSlstYPdat_setter},
  {"line-list-of", CVAR, &YgooScolsSlstYline_list_of},
  {"assqn", CVAR, &YgooScolsSlstYassqn},
  {"<line>", CVAR, &YgooScolsSlstYLlineG},
  {"list", CVAR, &YgooScolsSlstYlist},
  {"<line-list>", CVAR, &YgooScolsSlstYLline_listG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"line-list", NULL},
  {"lst", NULL},
  {"line-of", NULL},
  {"head-setter", NULL},
  {"line-pair", NULL},
  {"head", NULL},
  {"def-list", NULL},
  {"<list>", NULL},
  {"list", NULL},
  {"<lst>", NULL},
  {"nil", NULL},
  {"assq", NULL},
  {"tail-setter", NULL},
  {"line-list-of", NULL},
  {"<line-list>", NULL},
  {"tail", NULL},
  {"assqn", NULL},
  {"<line>", NULL},
  {"pair", NULL},
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
