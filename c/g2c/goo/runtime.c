/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/runtime");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/runtime */

EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YgooSruntimeYboot_symbols,"goo/runtime","boot-symbols");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YgooSruntimeYsymbols,"goo/runtime","symbols");
EXT(Yclass_parents,"goo/boot","class-parents");
DEF(YgooSruntimeYalways,"goo/runtime","always");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YgooSruntimeYbooted_fab_sym,"goo/runtime","booted-fab-sym");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Ylst,"goo/boot","lst");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yclass_of,"goo/boot","class-of");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooSmathYC,"goo/math","^");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YOlst,"goo/boot","@lst");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYA,"goo/math","+");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yas_error,"goo/boot","as-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ynot,"goo/boot","not");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ynul,"goo/boot","nul");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YPprop,"goo/boot","%prop");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLintG,"goo/boot","<int>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
DEF(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
DEF(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmathYN,"goo/math","~");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
DEF(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_mets,"goo/boot","fun-mets");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_49);
DEFLIT(lit_33);
DEFLIT(lit_42);
DEFLIT(lit_30);
DEFLIT(lit_18);
DEFLIT(lit_1);
DEFLIT(lit_8);
DEFLIT(lit_39);
DEFLIT(lit_32);
DEFLIT(lit_48);
DEFLIT(lit_24);
DEFLIT(lit_31);
DEFLIT(lit_19);
DEFLIT(lit_35);
DEFLIT(lit_27);
DEFLIT(lit_40);
DEFLIT(lit_38);
DEFLIT(lit_0);
DEFLIT(lit_56);
DEFLIT(lit_44);
DEFLIT(lit_47);
DEFLIT(lit_23);
DEFLIT(lit_17);
DEFLIT(lit_51);
DEFLIT(lit_28);
DEFLIT(lit_50);
DEFLIT(lit_12);
DEFLIT(lit_11);
DEFLIT(lit_14);
DEFLIT(lit_2);
DEFLIT(lit_4);
DEFLIT(lit_45);
DEFLIT(lit_10);
DEFLIT(lit_7);
DEFLIT(lit_46);
DEFLIT(lit_21);
DEFLIT(lit_37);
DEFLIT(lit_13);
DEFLIT(lit_22);
DEFLIT(lit_36);
DEFLIT(lit_26);
DEFLIT(lit_9);
DEFLIT(lit_43);
DEFLIT(lit_15);
DEFLIT(lit_53);
DEFLIT(lit_55);
DEFLIT(lit_57);
DEFLIT(lit_52);
DEFLIT(lit_29);
DEFLIT(lit_25);
DEFLIT(lit_20);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_16);
DEFLIT(lit_41);
DEFLIT(lit_54);
DEFLIT(lit_34);
DEFLIT(lit_3);

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
LOCFOR(fun_boot_28);
FUNFOR(YgooSruntimeYboot_symbols);
extern P YgooSruntimeY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSmacrosYmatch_empty_list) {
  P x_,fail_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(fail_, 1);
loop:
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
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(fail_, 1);
loop:
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
  P expF2223;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(pat_, 1);
  ARG(fail_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,fail_,LITREF(lit_8),pat_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),x_);
    expF2223 = T4;
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),expF2223,pat_);
    if (T6 != YPfalse) {
      T7 = CALL1(1,VARREF(Ytail),x_);
      T5 = T7;
    } else {
      T8 = CALL3(1,fail_,LITREF(lit_9),expF2223,pat_);
      T5 = T8;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYmatch_sublist) {
  P x_,fail_;
  P xF2224;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(fail_, 1);
loop:
  T1 = CALL1(1,VARREF(Yhead),x_);
  xF2224 = T1;
  T3 = CALL2(1,VARREF(YisaQ),xF2224,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T2 = xF2224;
  } else {
    T4 = CALL2(1,fail_,LITREF(lit_12),xF2224);
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  P r_,e_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(r_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYto_str),e_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),r_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_cat_sym_5) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
  T2 = fun_4;
  T1 = CALL3(1,VARREF(YgooScolsScolYfold),T2,LITREF(lit_16),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_gensym_6) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T2 = CALL2(1,VARREF(YgooSmathYA),VARREF(YgooSruntimeYTgensym_counterT),YPint((P)1));
  T1 = VARSET(YgooSruntimeYTgensym_counterT,T2);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_19),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_setter_name_7) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYcat_sym),x_,LITREF(lit_22));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_var_name_8) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_var_name_9) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_var_type_10) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_28));
}

FUNCODEDEF(fun_var_type_11) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_identity_12) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_13) {
  P args_;
  P T0,T1;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,args_);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compose_14) {
  P fx_,fy_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(fx_, 0);
  ARG(fy_, 1);
loop:
  T0 = FUNFAB(fun_13,2,fy_,fx_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_15) {
  P args_;
  P T0,T1;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),Ynil,args_,FREEREF(1));
  T0 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rcurry_16) {
  P f_,curried_;
  P savedcurriedF2225;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  NARGS(curried_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),curried_);
  savedcurriedF2225 = T1;
  T2 = FUNFAB(fun_15,2,f_,savedcurriedF2225);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_17) {
  P args_;
  P T0,T1;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),Ynil,FREEREF(1),args_);
  T0 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_curry_18) {
  P f_,curried_;
  P savedcurriedF2226;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  NARGS(curried_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),curried_);
  savedcurriedF2226 = T1;
  T2 = FUNFAB(fun_17,2,f_,savedcurriedF2226);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_19) {
  P args_;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
UNLINK_STACK();
  QRET(FREEREF(0));
}

FUNCODEDEF(fun_always_20) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = FUNFAB(fun_19,1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_21) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooSmacrosYnapp),FREEREF(0),YPfalse,t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zipped_22) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = FUNFAB(fun_21,1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSruntimeYloc_val) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPloc_val(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYloc_val_setter) {
  P z_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T0 = (P)YPloc_val_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYapp_filename) {
  P T0;
LINK_STACK();
loop:
  T0 = (P)YPapp_filename();
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYapp_args) {
  P T0;
LINK_STACK();
loop:
  T0 = (P)YPapp_args();
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYbooted_fab_sym) {
  P name_;
  P tmpF2227;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL3(1,VARREF(YgooScolsScolYelt_or),VARREF(YgooSruntimeYsymbols),name_,YPfalse);
  tmpF2227 = T1;
  if (tmpF2227 != YPfalse) {
    T2 = tmpF2227;
  } else {
    T4 = CALL3(1,VARREF(Ynew),VARREF(YLsymG),VARREF(Ysym_name),name_);
    T3 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),T4,VARREF(YgooSruntimeYsymbols),name_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boot_28) {
  P syms_;
  P symF2228;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(syms_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),syms_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),syms_);
    symF2228 = T4;
    T5 = CALL1(1,VARREF(Ysym_name),symF2228);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),symF2228,VARREF(YgooSruntimeYsymbols),T5);
    T7 = CALL1(1,VARREF(Ytail),syms_);
    a1 = T7;
    syms_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSruntimeYboot_symbols) {
  P bootF2229;
  P T0,T1,T2;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_boot_28,1);
  bootF2229 = T1;
  FUNINIT(bootF2229, 1,bootF2229);
  T2 = CALL1(0,bootF2229,VARREF(YPsymbols));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YgooSruntimeY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"match-empty-list");
  lit_1 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"fail"));
  lit_2 = YPsb((P)"Match Empty Failure of %=");
  T0 = YPsig(LITREF(lit_1),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmatch_empty_list = YPmet(FUNCODEREF(YgooSmacrosYmatch_empty_list),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(42));
  T1 = YgooSmacrosYmatch_empty_list;
  VARSET(YgooSmacrosYmatch_empty_list,T1);
  lit_3 = YPPsym((P)"match-unquote");
  lit_4 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"fail"));
  lit_5 = YPsb((P)"Match Failure Empty List on Unquote");
  T2 = YPsig(LITREF(lit_4),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmatch_unquote = YPmet(FUNCODEREF(YgooSmacrosYmatch_unquote),LITREF(lit_3),T2,ENVNUL,PNUL,sloc(47));
  T3 = YgooSmacrosYmatch_unquote;
  VARSET(YgooSmacrosYmatch_unquote,T3);
  lit_6 = YPPsym((P)"match-atom");
  lit_7 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"pat"),YPPsym((P)"fail"));
  lit_8 = YPsb((P)"Match Failure Empty List on %=");
  lit_9 = YPsb((P)"Match Failure of %= on %=");
  T4 = YPsig(LITREF(lit_7),YPPlist(3,VARREF(YLlstG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSmacrosYmatch_atom = YPmet(FUNCODEREF(YgooSmacrosYmatch_atom),LITREF(lit_6),T4,ENVNUL,PNUL,sloc(52));
  T5 = YgooSmacrosYmatch_atom;
  VARSET(YgooSmacrosYmatch_atom,T5);
  lit_10 = YPPsym((P)"match-sublist");
  lit_11 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"fail"));
  lit_12 = YPsb((P)"Match Failure on Sub List on %=");
  T6 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmatch_sublist = YPmet(FUNCODEREF(YgooSmacrosYmatch_sublist),LITREF(lit_10),T6,ENVNUL,PNUL,sloc(60));
  T7 = YgooSmacrosYmatch_sublist;
  VARSET(YgooSmacrosYmatch_sublist,T7);
  lit_13 = YPPsym((P)"cat-sym");
  lit_14 = YPPlist(1,YPPsym((P)"x"));
  lit_15 = YPPlist(2,YPPsym((P)"r"),YPPsym((P)"e"));
  lit_16 = YPsb((P)"");
  T9 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T9,ENVNUL,PNUL,sloc(67));
  T8 = YPsig(LITREF(lit_14),Ynil,YPtrue,YPint((P)0),VARREF(YLsymG),Ynil);
  fun_cat_sym_5 = YPmet(FUNCODEREF(fun_cat_sym_5),LITREF(lit_13),T8,ENVNUL,PNUL,sloc(66));
  T12 = BOUNDP(YgooSmacrosYcat_sym);
  if (T12 != YPfalse) {
    T11 = VARREF(YgooSmacrosYcat_sym);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_cat_sym_5;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YgooSmacrosYcat_sym,T10);
  VARSET(YgooSruntimeYTgensym_counterT,YPint((P)1000));
  lit_17 = YPPsym((P)"gensym");
  lit_18 = Ynil;
  lit_19 = YPsb((P)"x-");
  T14 = YPsig(LITREF(lit_18),Ynil,YPfalse,YPint((P)0),VARREF(YLsymG),Ynil);
  fun_gensym_6 = YPmet(FUNCODEREF(fun_gensym_6),LITREF(lit_17),T14,ENVNUL,PNUL,sloc(71));
  T17 = BOUNDP(YgooSmacrosYgensym);
  if (T17 != YPfalse) {
    T16 = VARREF(YgooSmacrosYgensym);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_gensym_6;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YgooSmacrosYgensym,T15);
  lit_20 = YPPsym((P)"fab-setter-name");
  lit_21 = YPPlist(1,YPPsym((P)"x"));
  lit_22 = YPsb((P)"-setter");
  T19 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_fab_setter_name_7 = YPmet(FUNCODEREF(fun_fab_setter_name_7),LITREF(lit_20),T19,ENVNUL,PNUL,sloc(74));
  T22 = BOUNDP(YgooSmacrosYfab_setter_name);
  if (T22 != YPfalse) {
    T21 = VARREF(YgooSmacrosYfab_setter_name);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_fab_setter_name_7;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YgooSmacrosYfab_setter_name,T20);
  lit_23 = YPPsym((P)"var-name");
  lit_24 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_var_name_8 = YPmet(FUNCODEREF(fun_var_name_8),LITREF(lit_23),T24,ENVNUL,PNUL,sloc(77));
  T27 = BOUNDP(YgooSmacrosYvar_name);
  if (T27 != YPfalse) {
    T26 = VARREF(YgooSmacrosYvar_name);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_var_name_8;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YgooSmacrosYvar_name,T25);
  lit_25 = YPPlist(1,YPPsym((P)"x"));
  T29 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_var_name_9 = YPmet(FUNCODEREF(fun_var_name_9),LITREF(lit_23),T29,ENVNUL,PNUL,sloc(79));
  T32 = BOUNDP(YgooSmacrosYvar_name);
  if (T32 != YPfalse) {
    T31 = VARREF(YgooSmacrosYvar_name);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_var_name_9;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YgooSmacrosYvar_name,T30);
  lit_26 = YPPsym((P)"var-type");
  lit_27 = YPPlist(1,YPPsym((P)"x"));
  lit_28 = YPPsym((P)"<any>");
  T34 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_var_type_10 = YPmet(FUNCODEREF(fun_var_type_10),LITREF(lit_26),T34,ENVNUL,PNUL,sloc(81));
  T37 = BOUNDP(YgooSmacrosYvar_type);
  if (T37 != YPfalse) {
    T36 = VARREF(YgooSmacrosYvar_type);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_var_type_10;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YgooSmacrosYvar_type,T35);
  lit_29 = YPPlist(1,YPPsym((P)"x"));
  T39 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_var_type_11 = YPmet(FUNCODEREF(fun_var_type_11),LITREF(lit_26),T39,ENVNUL,PNUL,sloc(83));
  T42 = BOUNDP(YgooSmacrosYvar_type);
  if (T42 != YPfalse) {
    T41 = VARREF(YgooSmacrosYvar_type);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_var_type_11;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooSmacrosYvar_type,T40);
  lit_30 = YPPsym((P)"identity");
  lit_31 = YPPlist(1,YPPsym((P)"x"));
  T44 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_identity_12 = YPmet(FUNCODEREF(fun_identity_12),LITREF(lit_30),T44,ENVNUL,PNUL,sloc(87));
  T47 = BOUNDP(YgooSruntimeYidentity);
  if (T47 != YPfalse) {
    T46 = VARREF(YgooSruntimeYidentity);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_identity_12;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YgooSruntimeYidentity,T45);
  lit_32 = YPPsym((P)"compose");
  lit_33 = YPPlist(2,YPPsym((P)"fx"),YPPsym((P)"fy"));
  lit_34 = YPPlist(1,YPPsym((P)"args"));
  T50 = YPsig(LITREF(lit_34),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T50,ENVNUL,PNUL,sloc(90));
  T49 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLfunG),Ynil);
  fun_compose_14 = YPmet(FUNCODEREF(fun_compose_14),LITREF(lit_32),T49,ENVNUL,PNUL,sloc(89));
  T53 = BOUNDP(YgooSruntimeYcompose);
  if (T53 != YPfalse) {
    T52 = VARREF(YgooSruntimeYcompose);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_compose_14;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YgooSruntimeYcompose,T51);
  lit_35 = YPPsym((P)"rcurry");
  lit_36 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"curried"));
  lit_37 = YPPlist(1,YPPsym((P)"args"));
  T56 = YPsig(LITREF(lit_37),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T56,ENVNUL,PNUL,sloc(98));
  T55 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YLfunG)),YPtrue,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_rcurry_16 = YPmet(FUNCODEREF(fun_rcurry_16),LITREF(lit_35),T55,ENVNUL,PNUL,sloc(96));
  T59 = BOUNDP(YgooSruntimeYrcurry);
  if (T59 != YPfalse) {
    T58 = VARREF(YgooSruntimeYrcurry);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_rcurry_16;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YgooSruntimeYrcurry,T57);
  lit_38 = YPPsym((P)"curry");
  lit_39 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"curried"));
  lit_40 = YPPlist(1,YPPsym((P)"args"));
  T62 = YPsig(LITREF(lit_40),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T62,ENVNUL,PNUL,sloc(102));
  T61 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLfunG)),YPtrue,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_curry_18 = YPmet(FUNCODEREF(fun_curry_18),LITREF(lit_38),T61,ENVNUL,PNUL,sloc(100));
  T65 = BOUNDP(YgooSruntimeYcurry);
  if (T65 != YPfalse) {
    T64 = VARREF(YgooSruntimeYcurry);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_curry_18;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YgooSruntimeYcurry,T63);
  lit_41 = YPPsym((P)"always");
  lit_42 = YPPlist(1,YPPsym((P)"x"));
  lit_43 = YPPlist(1,YPPsym((P)"args"));
  T68 = YPsig(LITREF(lit_43),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T68,ENVNUL,PNUL,sloc(105));
  T67 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_always_20 = YPmet(FUNCODEREF(fun_always_20),LITREF(lit_41),T67,ENVNUL,PNUL,sloc(104));
  T71 = BOUNDP(YgooSruntimeYalways);
  if (T71 != YPfalse) {
    T70 = VARREF(YgooSruntimeYalways);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_always_20;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YgooSruntimeYalways,T69);
  lit_44 = YPPsym((P)"zipped");
  lit_45 = YPPlist(1,YPPsym((P)"x"));
  lit_46 = YPPlist(1,YPPsym((P)"t"));
  T74 = YPsig(LITREF(lit_46),YPPlist(1,VARREF(YLtupG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T74,ENVNUL,PNUL,sloc(108));
  T73 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_zipped_22 = YPmet(FUNCODEREF(fun_zipped_22),LITREF(lit_44),T73,ENVNUL,PNUL,sloc(107));
  T77 = BOUNDP(YgooSruntimeYzipped);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooSruntimeYzipped);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_zipped_22;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooSruntimeYzipped,T75);
  lit_47 = YPPsym((P)"loc-val");
  lit_48 = YPPlist(1,YPPsym((P)"x"));
  T79 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSruntimeYloc_val = YPmet(FUNCODEREF(YgooSruntimeYloc_val),LITREF(lit_47),T79,ENVNUL,PNUL,sloc(115));
  T80 = YgooSruntimeYloc_val;
  VARSET(YgooSruntimeYloc_val,T80);
  lit_49 = YPPsym((P)"loc-val-setter");
  lit_50 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T81 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSruntimeYloc_val_setter = YPmet(FUNCODEREF(YgooSruntimeYloc_val_setter),LITREF(lit_49),T81,ENVNUL,PNUL,sloc(118));
  T82 = YgooSruntimeYloc_val_setter;
  VARSET(YgooSruntimeYloc_val_setter,T82);
  lit_51 = YPPsym((P)"app-filename");
  T83 = YPsig(LITREF(lit_18),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSruntimeYapp_filename = YPmet(FUNCODEREF(YgooSruntimeYapp_filename),LITREF(lit_51),T83,ENVNUL,PNUL,sloc(123));
  T84 = YgooSruntimeYapp_filename;
  VARSET(YgooSruntimeYapp_filename,T84);
  lit_52 = YPPsym((P)"app-args");
  T85 = YPsig(LITREF(lit_18),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSruntimeYapp_args = YPmet(FUNCODEREF(YgooSruntimeYapp_args),LITREF(lit_52),T85,ENVNUL,PNUL,sloc(125));
  T86 = YgooSruntimeYapp_args;
  VARSET(YgooSruntimeYapp_args,T86);
  T87 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsStabYLstr_tabG),YPint((P)10000));
  VARSET(YgooSruntimeYsymbols,T87);
  lit_53 = YPPsym((P)"booted-fab-sym");
  lit_54 = YPPlist(1,YPPsym((P)"name"));
  T88 = YPsig(LITREF(lit_54),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSruntimeYbooted_fab_sym = YPmet(FUNCODEREF(YgooSruntimeYbooted_fab_sym),LITREF(lit_53),T88,ENVNUL,PNUL,sloc(129));
  T89 = YgooSruntimeYbooted_fab_sym;
  VARSET(YgooSruntimeYbooted_fab_sym,T89);
  lit_55 = YPPsym((P)"boot-symbols");
  lit_56 = YPPsym((P)"boot");
  lit_57 = YPPlist(1,YPPsym((P)"syms"));
  T91 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_boot_28 = YPmet(FUNCODEREF(fun_boot_28),LITREF(lit_56),T91,ENVNUL,PNUL,sloc(134));
  T90 = YPsig(LITREF(lit_18),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSruntimeYboot_symbols = YPmet(FUNCODEREF(YgooSruntimeYboot_symbols),LITREF(lit_55),T90,ENVNUL,PNUL,sloc(133));
  T92 = YgooSruntimeYboot_symbols;
  VARSET(YgooSruntimeYboot_symbols,T92);
  XCALL0(1,VARREF(YgooSruntimeYboot_symbols));
  VARSET(Yfab_sym,VARREF(YgooSruntimeYbooted_fab_sym));
  T93 = YPfalse;
  return T93;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
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
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"boot-symbols", CVAR, &YgooSruntimeYboot_symbols},
  {"symbols", CVAR, &YgooSruntimeYsymbols},
  {"always", CVAR, &YgooSruntimeYalways},
  {"booted-fab-sym", CVAR, &YgooSruntimeYbooted_fab_sym},
  {"*gensym-counter*", CVAR, &YgooSruntimeYTgensym_counterT},
  {"---main-0---", PVAR, NULL},
  {"curry", CVAR, &YgooSruntimeYcurry},
  {"rcurry", CVAR, &YgooSruntimeYrcurry},
  {"app-args", CVAR, &YgooSruntimeYapp_args},
  {"app-filename", CVAR, &YgooSruntimeYapp_filename},
  {"compose", CVAR, &YgooSruntimeYcompose},
  {"loc-val", CVAR, &YgooSruntimeYloc_val},
  {"loc-val-setter", CVAR, &YgooSruntimeYloc_val_setter},
  {"identity", CVAR, &YgooSruntimeYidentity},
  {"zipped", CVAR, &YgooSruntimeYzipped},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"always", NULL},
  {"match-unquote", NULL},
  {"*gensym-counter*", NULL},
  {"var-type", NULL},
  {"match-empty-list", NULL},
  {"curry", NULL},
  {"napp", NULL},
  {"var-name", NULL},
  {"rcurry", NULL},
  {"fab-setter-name", NULL},
  {"gensym", NULL},
  {"app-args", NULL},
  {"app-filename", NULL},
  {"cat-sym", NULL},
  {"loc-val-setter", NULL},
  {"compose", NULL},
  {"loc-val", NULL},
  {"match-sublist", NULL},
  {"identity", NULL},
  {"zipped", NULL},
  {"match-atom", NULL},
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
