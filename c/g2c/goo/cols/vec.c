/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/vec");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/vec */

EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Ynul,"goo/boot","nul");
EXT(Ynil,"goo/boot","nil");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(Ytail,"goo/boot","tail");
DEF(YgooScolsSvecYvec_len_setter,"goo/cols/vec","vec-len-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(YgooScolsSvecYvec_len,"goo/cols/vec","vec-len");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
DEF(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYE,"goo/math","=");
DEF(YgooScolsSvecYvec_dat_setter,"goo/cols/vec","vec-dat-setter");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YgooScolsSvecYpartitionX,"goo/cols/vec","partition!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
DEF(YgooScolsSvecYvec_dat,"goo/cols/vec","vec-dat");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ynot,"goo/boot","not");
EXT(YLunionG,"goo/boot","<union>");
EXT(YPprop,"goo/boot","%prop");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ylst,"goo/boot","lst");
DEF(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
DEF(YgooScolsSvecYquicksortX,"goo/cols/vec","quicksort!");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_0);
DEFLIT(lit_1);
DEFLIT(lit_58);
DEFLIT(lit_7);
DEFLIT(lit_35);
DEFLIT(lit_6);
DEFLIT(lit_4);
DEFLIT(lit_39);
DEFLIT(lit_49);
DEFLIT(lit_8);
DEFLIT(lit_14);
DEFLIT(lit_12);
DEFLIT(lit_50);
DEFLIT(lit_18);
DEFLIT(lit_57);
DEFLIT(lit_48);
DEFLIT(lit_2);
DEFLIT(lit_22);
DEFLIT(lit_13);
DEFLIT(lit_29);
DEFLIT(lit_15);
DEFLIT(lit_54);
DEFLIT(lit_52);
DEFLIT(lit_25);
DEFLIT(lit_24);
DEFLIT(lit_23);
DEFLIT(lit_26);
DEFLIT(lit_51);
DEFLIT(lit_63);
DEFLIT(lit_36);
DEFLIT(lit_43);
DEFLIT(lit_42);
DEFLIT(lit_34);
DEFLIT(lit_31);
DEFLIT(lit_61);
DEFLIT(lit_33);
DEFLIT(lit_3);
DEFLIT(lit_30);
DEFLIT(lit_53);
DEFLIT(lit_16);
DEFLIT(lit_11);
DEFLIT(lit_9);
DEFLIT(lit_60);
DEFLIT(lit_19);
DEFLIT(lit_45);
DEFLIT(lit_10);
DEFLIT(lit_38);
DEFLIT(lit_37);
DEFLIT(lit_56);
DEFLIT(lit_62);
DEFLIT(lit_47);
DEFLIT(lit_28);
DEFLIT(lit_20);
DEFLIT(lit_55);
DEFLIT(lit_41);
DEFLIT(lit_59);
DEFLIT(lit_27);
DEFLIT(lit_32);
DEFLIT(lit_17);
DEFLIT(lit_21);
DEFLIT(lit_46);
DEFLIT(lit_44);
DEFLIT(lit_40);
DEFLIT(lit_5);

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
LOCFOR(fun_x_1312_11);
LOCFOR(fun_x_1310_12);
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
  P datF1905;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),s_);
  T1 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T2,YPfalse);
  datF1905 = T1;
  T3 = CALL5(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSvecYvec_len),s_,VARREF(YgooScolsSvecYvec_dat),datF1905);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1312_11) {
  P x_1311_;
  P eF1906;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1311_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1311_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1311_);
    eF1906 = T4;
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(0),eF1906);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1311_);
    a1 = T6;
    x_1311_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1310_12) {
  P x_1309_;
  P x_1312F1908;
  P sF1907;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1309_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1309_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1309_);
    sF1907 = T4;
    T5 = FUNSHELL(1,fun_x_1312_11,2);
    x_1312F1908 = T5;
    FUNINIT(x_1312F1908, 2,FREEREF(0),x_1312F1908);
    T7 = CALL1(1,VARREF(YgooScolsScolYenum),sF1907);
    T6 = CALL1(0,x_1312F1908,T7);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1309_);
    a1 = T9;
    x_1309_ = a1;
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
  P x_1310F1909;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T0 = FUNSHELL(1,fun_x_1310_12,2);
  x_1310F1909 = T0;
  FUNINIT(x_1310F1909, 2,x_,x_1310F1909);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  T1 = CALL1(0,x_1310F1909,T2);
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
  P xF1911;
  P new_lenF1910;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),c_);
  T1 = CALL2(1,VARREF(YgooSmathY_),T2,YPint((P)1));
  new_lenF1910 = T1;
  T3 = CALL2(1,VARREF(YgooSmagYL),new_lenF1910,YPint((P)0));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Yrange_error),c_,new_lenF1910);
  } else {
  }
  T6 = CALL2(1,VARREF(YgooScolsScolYlow_elt),c_,new_lenF1910);
  xF1911 = T6;
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),new_lenF1910,c_);
  T7 = CALL2(1,VARREF(Ytup),c_,xF1911);
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
  P tmpF1913;
  P tmpF1912;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  tmpF1912 = T1;
  if (tmpF1912 != YPfalse) {
    T4 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),FREEREF(1),FREEREF(2),i_);
    tmpF1913 = T4;
    if (tmpF1913 != YPfalse) {
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
  P fillF1917;
  P old_lenF1916;
  P new_dataF1915;
  P datF1914;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2,a3;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSvecYvec_dat),c_);
  datF1914 = T1;
  T4 = CALL1(1,VARREF(YgooScolsSrepYrep_len),datF1914);
  T3 = CALL2(1,VARREF(YgooSmagYG),new_len_,T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),new_len_);
    T6 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T7,default_);
    new_dataF1915 = T6;
    CALL2(1,VARREF(YgooScolsSrepYrep_intoX),new_dataF1915,datF1914);
    CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
    T8 = CALL2(1,VARREF(YgooScolsSvecYvec_dat_setter),new_dataF1915,c_);
    T5 = T8;
    T2 = T5;
  } else {
    T11 = CALL1(1,VARREF(YgooStypesYlen),c_);
    T10 = CALL2(1,VARREF(YgooSmagYL),new_len_,T11);
    if (T10 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooStypesYlen),c_);
      old_lenF1916 = T13;
      T14 = CALL2(1,VARREF(YgooSmagYL),new_len_,YPint((P)0));
      if (T14 != YPfalse) {
        T15 = CALL2(1,VARREF(Yrange_error),c_,new_len_);
      } else {
      }
      CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
      T17 = FUNSHELL(1,fun_fill_19,4);
      fillF1917 = T17;
      FUNINIT(fillF1917, 4,old_lenF1916,default_,datF1914,fillF1917);
      T18 = CALL1(1,fillF1917,new_len_);
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
  P sortedF1918;
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
  sortedF1918 = T1;
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),a_,sortedF1918);
  if (T6 != YPfalse) {
    T5 = sortedF1918;
  } else {
    T7 = CALL2(1,VARREF(YgooScolsScolYinto),a_,sortedF1918);
    T5 = T7;
  }
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_quicksortX_27) {
  P a_,p_,r_,test_;
  P qF1919;
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
    qF1919 = T3;
    CALL4(1,VARREF(YgooScolsSvecYquicksortX),a_,p_,qF1919,test_);
    T5 = CALL1(1,VARREF(YgooSmathY1A),qF1919);
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
  P tmpF1920;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  T0 = CALL2(1,VARREF(YgooSmathY_),T1,YPint((P)1));
  BOXVAL(FREEREF(0)) = T0;
  T7 = BOXVAL(FREEREF(0));
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),T7);
  T5 = CALL2(1,FREEREF(3),T6,FREEREF(2));
  tmpF1920 = T5;
  if (tmpF1920 != YPfalse) {
    T8 = tmpF1920;
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
  P x_1317F1927;
  P x_1315F1926;
  P x_1316F1925;
  P x_1313F1924;
  P x_1314F1923;
  P i_loopF1922;
  P j_loopF1921;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
loop:
  T0 = FUNSHELL(1,fun_j_loop_28,5);
  j_loopF1921 = T0;
  FUNINIT(j_loopF1921, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),j_loopF1921);
  T1 = CALL0(0,j_loopF1921);
  T2 = FUNSHELL(1,fun_i_loop_29,5);
  i_loopF1922 = T2;
  FUNINIT(i_loopF1922, 5,FREEREF(4),FREEREF(1),FREEREF(2),FREEREF(3),i_loopF1922);
  T3 = CALL0(0,i_loopF1922);
  T6 = BOXVAL(FREEREF(4));
  T7 = BOXVAL(FREEREF(0));
  T5 = CALL2(1,VARREF(YgooSmagYL),T6,T7);
  if (T5 != YPfalse) {
    x_1314F1923 = FREEREF(1);
    T9 = BOXVAL(FREEREF(4));
    x_1313F1924 = T9;
    x_1316F1925 = FREEREF(1);
    T12 = BOXVAL(FREEREF(0));
    x_1315F1926 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYelt),x_1314F1923,x_1313F1924);
    x_1317F1927 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYelt),x_1316F1925,x_1315F1926);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T15,x_1314F1923,x_1313F1924);
    T16 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),x_1317F1927,x_1316F1925,x_1315F1926);
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
  P loopF1931;
  P jF1930;
  P iF1929;
  P xF1928;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(a_, 0);
  ARG(p_, 1);
  ARG(r_, 2);
  ARG(test_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),a_,p_);
  xF1928 = T1;
  T3 = CALL1(1,VARREF(YgooSmathY1_),p_);
  iF1929 = T3;
  iF1929 = BOXFAB(iF1929);
  T6 = CALL1(1,VARREF(YgooSmathY1A),r_);
  jF1930 = T6;
  jF1930 = BOXFAB(jF1930);
  T9 = FUNSHELL(1,fun_loop_30,6);
  loopF1931 = T9;
  FUNINIT(loopF1931, 6,jF1930,a_,xF1928,test_,iF1929,loopF1931);
  T10 = CALL0(0,loopF1931);
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
  lit_25 = YPPsym((P)"x-1310");
  lit_26 = YPPlist(1,YPPsym((P)"x-1309"));
  lit_27 = YPPsym((P)"x-1312");
  lit_28 = YPPlist(1,YPPsym((P)"x-1311"));
  T58 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1312_11 = YPmet(FUNCODEREF(fun_x_1312_11),LITREF(lit_27),T58,ENVNUL,PNUL,sloc(53));
  T57 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1310_12 = YPmet(FUNCODEREF(fun_x_1310_12),LITREF(lit_25),T57,ENVNUL,PNUL,sloc(52));
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
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"atan", &module_info_gooSmath, "atan"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"map", &module_info_gooSmacros, "map"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"~==", &module_info_gooSmath, "~=="},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"elt!", &module_info_gooScolsScolx, "elt!"},
  {"if", &module_info_gooSboot, "if"},
  {"<line>", &module_info_gooScolsSlst, "<line>"},
  {"def-list", &module_info_gooScolsSlst, "def-list"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"1-", &module_info_gooSmath, "1-"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"abs", &module_info_gooSmath, "abs"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"try", &module_info_gooSboot, "try"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"src-loc-line", &module_info_gooSboot, "src-loc-line"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"-", &module_info_gooSmath, "-"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"find", &module_info_gooScolsScol, "find"},
  {"t?", &module_info_gooStypes, "t?"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"==", &module_info_gooSmacros, "=="},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"nul", &module_info_gooSboot, "nul"},
  {"nil", &module_info_gooSboot, "nil"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"len", &module_info_gooStypes, "len"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"dl", &module_info_gooSboot, "dl"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"let", &module_info_gooSboot, "let"},
  {"case", &module_info_gooSmacros, "case"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%su", &module_info_gooSboot, "%su"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%met", &module_info_gooSboot, "%met"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"match", &module_info_gooSmacros, "match"},
  {"t<", &module_info_gooStypes, "t<"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"^", &module_info_gooSmath, "^"},
  {"$e", &module_info_gooSmath, "$e"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<line-list>", &module_info_gooScolsSlst, "<line-list>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"rem", &module_info_gooSmath, "rem"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"~=", &module_info_gooSmath, "~="},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"@len", &module_info_gooSboot, "@len"},
  {"df", &module_info_gooSboot, "df"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%put", &module_info_gooSboot, "%put"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"neg", &module_info_gooSmath, "neg"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%im", &module_info_gooSboot, "%im"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"t=", &module_info_gooStypes, "t="},
  {"dg", &module_info_gooSboot, "dg"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"max", &module_info_gooSmag, "max"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"when", &module_info_gooSmacros, "when"},
  {"round/", &module_info_gooSmath, "round/"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"error", &module_info_gooSboot, "error"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"sin", &module_info_gooSmath, "sin"},
  {"dc", &module_info_gooSboot, "dc"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"loc", &module_info_gooSboot, "loc"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"until", &module_info_gooSmacros, "until"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%time", &module_info_gooSboot, "%time"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"line-list-of", &module_info_gooScolsSlst, "line-list-of"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"sub*-setter", &module_info_gooScolsSseqx, "sub*-setter"},
  {"acos", &module_info_gooSmath, "acos"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"min", &module_info_gooSmag, "min"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"app", &module_info_gooSmacros, "app"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"do", &module_info_gooSmacros, "do"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"sub*", &module_info_gooScolsSseq, "sub*"},
  {">", &module_info_gooSmag, ">"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"line-of", &module_info_gooScolsSlst, "line-of"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"for", &module_info_gooSmacros, "for"},
  {"<", &module_info_gooSmag, "<"},
  {"|", &module_info_gooSmath, "|"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"1+", &module_info_gooSmath, "1+"},
  {"seq", &module_info_gooSboot, "seq"},
  {">=", &module_info_gooSmag, ">="},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"line-list", &module_info_gooScolsSlst, "line-list"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"+", &module_info_gooSmath, "+"},
  {"=", &module_info_gooSmath, "="},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"esc", &module_info_gooSboot, "esc"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<=", &module_info_gooSmag, "<="},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"mod", &module_info_gooSmath, "mod"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"<<", &module_info_gooSmath, "<<"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"dm", &module_info_gooSboot, "dm"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"while", &module_info_gooSmacros, "while"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"log", &module_info_gooSmath, "log"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"line-pair", &module_info_gooScolsSlst, "line-pair"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"not", &module_info_gooSboot, "not"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"round", &module_info_gooSmath, "round"},
  {"def", &module_info_gooSboot, "def"},
  {"/", &module_info_gooSmath, "/"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"new", &module_info_gooSboot, "new"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"tan", &module_info_gooSmath, "tan"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"~", &module_info_gooSmath, "~"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"div", &module_info_gooSmath, "div"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<src-loc>", &module_info_gooSboot, "<src-loc>"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"src-loc-file", &module_info_gooSboot, "src-loc-file"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"as", &module_info_gooStypes, "as"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"fun", &module_info_gooSboot, "fun"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"lst", &module_info_gooSboot, "lst"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"any?", &module_info_gooStypes, "any?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%get", &module_info_gooSboot, "%get"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"@<", &module_info_gooSboot, "@<"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"fin", &module_info_gooSboot, "fin"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"%src-loc", &module_info_gooSboot, "%src-loc"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"last", &module_info_gooSmacros, "last"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"op", &module_info_gooSmacros, "op"},
  {"*", &module_info_gooSmath, "*"},
  {"items", &module_info_gooScolsScol, "items"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"clone", &module_info_gooSboot, "clone"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"&", &module_info_gooSmath, "&"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"dss", &module_info_gooSboot, "dss"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"tup", &module_info_gooSboot, "tup"},
  {"pow", &module_info_gooSmath, "pow"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@==", &module_info_gooSboot, "@=="},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"class-of", &module_info_gooSboot, "class-of"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"mif", &module_info_gooSboot, "mif"},
  {"floor", &module_info_gooSmath, "floor"},
  {"cos", &module_info_gooSmath, "cos"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"export", &module_info_gooSboot, "export"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {">>", &module_info_gooSmath, ">>"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"or", &module_info_gooSmacros, "or"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"use", &module_info_gooSboot, "use"},
  {"set", &module_info_gooSboot, "set"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"and", &module_info_gooSmacros, "and"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"vec-len-setter", CVAR, &YgooScolsSvecYvec_len_setter},
  {"vec-len", CVAR, &YgooScolsSvecYvec_len},
  {"vec", CVAR, &YgooScolsSvecYvec},
  {"vec-dat-setter", CVAR, &YgooScolsSvecYvec_dat_setter},
  {"partition!", CVAR, &YgooScolsSvecYpartitionX},
  {"vec-dat", CVAR, &YgooScolsSvecYvec_dat},
  {"---main-0---", PVAR, NULL},
  {"<vec>", CVAR, &YgooScolsSvecYLvecG},
  {"quicksort!", CVAR, &YgooScolsSvecYquicksortX},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"vec", "vec"},
  {"<vec>", "<vec>"},
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
